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

void UAIFlankTo::CallbackFunction()
{
    OnFinished.Broadcast();
}

UAIFlankTo* UAIFlankTo::MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    UAIFlankTo* selfRefObj2 = NewObject<UAIFlankTo>();

    selfRefObj2->max = Path.Num();

    selfRefObj2->current = 0;
    selfRefObj2->max = Path.Num();
    selfRefObj2->AIControllerMem = AIController;
    selfRefObj2->pathMem = Path;

    AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(selfRefObj2, &UAIFlankTo::OnReachedPathPoint);

    FVector& Point = selfRefObj2->pathMem[0];
    selfRefObj2->AIControllerMem->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
    if(selfRefObj2->pathMem.Num() > 0)
        selfRefObj2->pathMem.RemoveAt(0);

    return selfRefObj2;
}

TArray<FVector> UAIFlankTo::GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    FVector targetLocation = TargetTransform.GetLocation();
    TArray<AActor*> spawnedModifiers = SpawnNavArc(targetLocation);

    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
    NavSys->Build();

    TSubclassOf<UNavigationQueryFilter> newFilterClass = UFlankQueryFilterHighCost::StaticClass();

    FVector flankerLocation = AIController->GetPawn()->GetActorLocation();
    FVector PlayerLocation(630.0, 540.0, 5.0f);
    TArray<FVector> path;

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
    UClass* AFlankNavModifierActor0Class = AFlankNavModifierActor0::StaticClass();
    spawnedModifier = World->SpawnActor<AFlankNavModifierActor0>(AFlankNavModifierActor0Class, Location, Rotation, SpawnParams);

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

TArray<AActor*> UAIFlankTo::SpawnNavArc(const FVector& PlayerLocation, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    static TArray<FArcPoint> ArcPoints = UCustomMath::GetPointsOnArc(PlayerLocation, 6, 110, 900);
    
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