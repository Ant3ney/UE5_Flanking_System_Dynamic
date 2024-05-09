// Fill out your copyright notice in the Description page of Project Settings.


#include "AIFlankTo.h"

UAIFlankTo* UAIFlankTo::selfRef = nullptr;

UAIFlankTo::~UAIFlankTo() {
    UAIFlankTo* selfRefObj = GetSelf();
    selfRefObj->current = 0;
}
    

UAIFlankTo* UAIFlankTo::AIFlankTo(AAIController* AIController, const FTransform TargetTransform)
{
    TArray<FVector> path = GetFlankPathToLocation(AIController, TargetTransform);
    UAIFlankTo* MyAction = MoveAIAlongPathAndReturnCallbackPointer(AIController, path);

    return MyAction;
}

UAIFlankTo* UAIFlankTo::MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    UAIFlankTo* self = NewObject<UAIFlankTo>();
    self->max = Path.Num();
    self->current = 0;
    self->max = Path.Num();
    self->AIControllerMem = AIController;
    self->pathMem = Path;
    FVector& Point = self->pathMem[0];

    AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(self, &UAIFlankTo::OnReachedPathPoint);
    
    self->AIControllerMem->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
    if(self->pathMem.Num() > 0)
        self->pathMem.RemoveAt(0);

    return self;
}

TArray<FVector> UAIFlankTo::GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    FVector targetLocation = TargetTransform.GetLocation();
    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
    TSubclassOf<UNavigationQueryFilter> newFilterClass = UFlankQueryFilterHighCost::StaticClass();
    TArray<AActor*> spawnedModifiers = SpawnNavArc(TargetTransform);
    FVector flankerLocation = AIController->GetPawn()->GetActorLocation();
    TArray<FVector> path;
    
    NavSys->Build(); 
    UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(AIController->GetWorld(), flankerLocation, targetLocation, nullptr, newFilterClass);
    CleanUpNavArc(spawnedModifiers);
    NavSys->Build();

    if (NavPath && NavPath->IsValid())
    {
        path = NavPath->PathPoints;
    }

    return path;
}



void UAIFlankTo::OnReachedPathPoint(FAIRequestID RequestID, const FPathFollowingResult& Result){
    UAIFlankTo* selfRefObj = this;  
    int currentPath = selfRefObj->current;
    int maxPaths = selfRefObj->max;
    TArray<FVector> path = selfRefObj->pathMem;
    if (selfRefObj->pathMem.Num() <= 0) {
        selfRefObj->OnFinished.Broadcast();
        return;
    }
    FVector& Point = selfRefObj->pathMem[0]; // Another tempermental line. Be carefull here
    bool isLast = currentPath + 2 == maxPaths; // Not sure + 2 is required. If you make it + 1, the editor crashes.
    bool currentPathEqualsLastPath = Point.Equals(path[path.Num() - 1], 1.0f);
    selfRefObj->pathMem.RemoveAt(0); // This line canot be moved below the below line.
    bool isPointValid = FlankingSystemUtilities::IsVectorInArray(Point, selfRefObj->pathMem); // This call is very tempermental. Carefull when modifing it.
    selfRefObj->current = currentPath + 1;

    if (selfRefObj == nullptr || selfRefObj->AIControllerMem == nullptr) return;

    if (!isPointValid || path.Num() <= 0) {
        selfRefObj->OnFinished.Broadcast();
        return;
    }
    
    selfRefObj->AIControllerMem->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
}

UAIFlankTo* UAIFlankTo::GetSelf()
{
    UAIFlankTo* selfRefObj = UAIFlankTo::selfRef;
    if (selfRefObj == nullptr)
    {
        selfRefObj = NewObject<UAIFlankTo>();
        selfRefObj->AddToRoot();
        UAIFlankTo::selfRef = selfRefObj;
        selfRefObj->current = 0;
    }

   
    return selfRefObj;
}

AActor* UAIFlankTo::SpawnFlankNavModifierActorAt(FVector location, FText type, UDataTable* DataTable, UAIFlankTo* instanceRef)
{
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    FVector Location(location.X, location.Y, 5);
    FRotator Rotation(0.0f, 0.0f, 0.0f);
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(GEngine->GameViewport);
    FActorSpawnParameters SpawnParams;

    AActor* spawnedModifier = nullptr;
    UClass* AFlankNavModifierActor0Class = AFlankNavModifierActor::StaticClass();
    if(AFlankNavModifierActor0Class == nullptr) UE_LOG(LogTemp, Warning, TEXT("Faild to spawn nav mod actor"));
    spawnedModifier = World->SpawnActor<AFlankNavModifierActor>(AFlankNavModifierActor0Class, Location, Rotation, SpawnParams);

    return spawnedModifier;
}

TArray<AActor*> UAIFlankTo::SpawnLine(const FVector& LocationA, const FVector& LocationB, FText type, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    TArray<FVector> lineSpots = UCustomMath::CalculatePointsBetweenLocations(LocationA, LocationB, 150.0f);
    TArray<AActor*> spawnedModifiers;

    for (FVector& spot : lineSpots) {
        AActor* spawnedModifier = SpawnFlankNavModifierActorAt(spot, type);
        spawnedModifiers.Add(spawnedModifier);
    }

    return spawnedModifiers;
}

TArray<AActor*> UAIFlankTo::SpawnNavArc(const FTransform& PlayerTransform, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }
    FVector PlayerLocation = PlayerTransform.GetLocation();

    FRotator Rotator = PlayerTransform.GetRotation().Rotator();
    float ZRotation = Rotator.Yaw;
    TArray<FArcPoint> ArcPoints = UCustomMath::GetPointsOnArc(PlayerLocation, ZRotation, 110, 900);
    
    TArray<AActor*> spawnedModifiers;

    int i = 0;
    for (FArcPoint& spot : ArcPoints) {
        int centralizedIndex = UCustomMath::GetCentralizedIndex(i, ArcPoints.Num());
        if (centralizedIndex < 0) centralizedIndex = 30;
        if (centralizedIndex > 30) centralizedIndex = 30;
        TArray<AActor*> newSpawnedModifiers = SpawnLine(PlayerLocation, spot.Point, FText::AsNumber(centralizedIndex));
        spawnedModifiers.Append(newSpawnedModifiers);
        i++;
    }

    return spawnedModifiers;
}

void UAIFlankTo::CleanUpNavArc(TArray<AActor*> modifiersToDelete) {
    for (AActor* modifier : modifiersToDelete)
    {
        if (modifier)
        {
            modifier->Destroy();
        }
    }

    modifiersToDelete.Empty();
}