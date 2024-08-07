// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------



#include "AIFlankTo.h"

UAIFlankTo* UAIFlankTo::selfRef = nullptr;


UAIFlankTo* UAIFlankTo::AIFlankTo(AAIController* AIController, const FTransform TargetTransform, FFlankSettings Settings)
{
    Settings.AIController = AIController;
    TArray<FVector> path = GetFlankPathToLocation(AIController, TargetTransform, Settings);
    UAIFlankTo* MyAction = MoveAIAlongPathAndReturnCallbackPointer(AIController, path);

    if (!MyAction)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to execute MoveAIAlongPathAndReturnCallbackPointer"));
        return nullptr;
    }

    return MyAction;
}

UAIFlankTo* UAIFlankTo::MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    UAIFlankTo* self = NewObject<UAIFlankTo>();

    if (!self)
    {
        // Ensure the UAIFlankTo instance was created successfully
        UE_LOG(LogTemp, Error, TEXT("Failed to create UAIFlankTo instance"));
        return nullptr;
    }

    self->max = Path.Num();
    self->current = 0;
    self->max = Path.Num();
    self->AIControllerMem = AIController;

    if (Path.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Path is empty or not defined"));
        return nullptr;
    }

    self->pathMem = Path;

    if (!self->pathMem.IsValidIndex(0))
    {
        UE_LOG(LogTemp, Error, TEXT("pathMem is undefined or has no elements"));
        return nullptr;
    }

    FVector& Point = self->pathMem[0];

    AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(self, &UAIFlankTo::OnReachedPathPoint);

    self->AIControllerMem->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
    if (self->pathMem.Num() > 0)
        self->pathMem.RemoveAt(0);

    return self;
}

TArray<FVector> UAIFlankTo::GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform, FFlankSettings Settings) {
    FVector targetLocation = TargetTransform.GetLocation();
    TArray<FVector> path;
    if (AIController == nullptr) return path;
    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
    TSubclassOf<UNavigationQueryFilter> newFilterClass = UFlankQueryFilterHighCost::StaticClass();
    TArray<AActor*> spawnedModifiers = SpawnNavArc(TargetTransform, Settings);
    APawn* ControlledPawn = AIController->GetPawn();
    if (ControlledPawn == nullptr) {
        UE_LOG(LogTemp, Error, TEXT("AI controllers controlled pawn is null. Cannot flank!"));
        return path;
    }
    FVector flankerLocation = AIController->GetPawn()->GetActorLocation();


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



void UAIFlankTo::OnReachedPathPoint(FAIRequestID RequestID, const FPathFollowingResult& Result) {
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

AActor* UAIFlankTo::SpawnFlankNavModifierActorAt(FVector location, FText type, UDataTable* DataTable, UAIFlankTo* instanceRef)
{
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

    FVector Location(location.X, location.Y, location.Z);
    FRotator Rotation(0.0f, 0.0f, 0.0f);
    UWorld* World = GEngine->GetWorldFromContextObjectChecked((const UObject*)GEngine->GameViewport);
    FActorSpawnParameters SpawnParams;

    AActor* spawnedModifier = nullptr;
    UClass* AFlankNavModifierActor0Class = AFlankNavModifierActor::StaticClass();
    if (AFlankNavModifierActor0Class == nullptr) UE_LOG(LogTemp, Warning, TEXT("Faild to spawn nav mod actor"));
    spawnedModifier = World->SpawnActor<AFlankNavModifierActor>(AFlankNavModifierActor0Class, Location, Rotation, SpawnParams);

    FVector CurrentScale = spawnedModifier->GetActorScale3D();
    CurrentScale.Z *= 100;
    spawnedModifier->SetActorScale3D(CurrentScale);

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

TArray<AActor*> UAIFlankTo::SpawnNavArc(const FTransform& PlayerTransform, FFlankSettings Settings) {
    FVector PlayerLocation = PlayerTransform.GetLocation();

    FRotator Rotator = PlayerTransform.GetRotation().Rotator();
    float ZRotation = Rotator.Yaw + 55;

    AAIController* AIController = Settings.AIController;
    float Magnitude = 900;

    
    if (AIController != nullptr && Settings.StartingPoint == EFlankStartingPoint::FlankersCurrentPosition) {
        if (AIController->GetPawn() != nullptr) {
            FVector FlankerLocation = AIController->GetPawn()->GetActorLocation();
            Magnitude = UCustomMath::CalculateDistanceBetweenPoints(PlayerLocation, FlankerLocation);
            Magnitude = abs(Magnitude);
        }
    }
    
    TArray<FArcPoint> ArcPoints = UCustomMath::GetPointsOnArc(PlayerLocation, ZRotation, 110, Magnitude);

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