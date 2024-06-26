// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------



#include "AIFlankTo.h"


UAIFlankTo* UAIFlankTo::AIFlankTo(AAIController* AIController, const FTransform TargetTransform)
{
    TArray<FVector> path = GetFlankPathToLocation(AIController, TargetTransform);
    UAIFlankTo* MyAction = MoveAIAlongPathAndReturnCallbackPointer(AIController, path);

    if (!MyAction)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to execute MoveAIAlongPathAndReturnCallbackPointer"));
        return nullptr;
    }

    return MyAction;
}

UAIFlankTo* UAIFlankTo::MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }

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

TArray<FVector> UAIFlankTo::GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform, UDataTable* DataTable, UAIFlankTo* instanceRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }
    UE_LOG(LogTemp, Error, TEXT("Delete this log------------------------------"));
    FVector targetLocation = TargetTransform.GetLocation();
    TArray<FVector> path;
    if (AIController == nullptr) return path;
    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
    TSubclassOf<UNavigationQueryFilter> newFilterClass = UFlankQueryFilterHighCost::StaticClass();
    TArray<AActor*> spawnedModifiers = SpawnNavArc(TargetTransform, nullptr, AIController);
    APawn* ControlledPawn = AIController->GetPawn();
    if (ControlledPawn == nullptr) {
        UE_LOG(LogTemp, Error, TEXT("AI controllers controlled pawn is null. Cannot flank!"));
        return path;
    }
    FVector flankerLocation = AIController->GetPawn()->GetActorLocation();

    NavSys->Build();
    UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(AIController->GetWorld(), flankerLocation, targetLocation, nullptr, newFilterClass);
    //CleanUpNavArc(spawnedModifiers);
    //NavSys->Build();

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

TArray<AActor*> UAIFlankTo::SpawnRow(TArray<FArcPoint> ArcPoints, const FVector PlayerLocation, const float ZLocation) {
    TArray<AActor*> spawnedModifiers;

    int i = 0;
    for (FArcPoint spot : ArcPoints) {
        FArcPoint OverideSpot = spot;
        //UE_LOG(LogTemp, Error, TEXT("Entire line at at x: %f %f %f!"), OverideZ);
        int centralizedIndex = UCustomMath::GetCentralizedIndex(i, ArcPoints.Num());
        if (centralizedIndex < 0) centralizedIndex = 30;
        if (centralizedIndex > 30) centralizedIndex = 30;
        TArray<AActor*> newSpawnedModifiers = SpawnLine(PlayerLocation, spot.Point, FText::AsNumber(centralizedIndex));
        spawnedModifiers.Append(newSpawnedModifiers);
        i++;
    }

    return spawnedModifiers;
}

TArray<AActor*> UAIFlankTo::SpawnNavArc(const FTransform& PlayerTransform, UDataTable* DataTable, AAIController* AIControllerRef) {
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }
    FVector PlayerLocation = PlayerTransform.GetLocation();

    FRotator Rotator = PlayerTransform.GetRotation().Rotator();
    float ZRotation = Rotator.Yaw;

    float ZDifference = 0;//= PlayerLocation.Z - 
    int NumRows = 1;
    int RowDifference = 100;
    bool AIHigher = false;
    UE_LOG(LogTemp, Error, TEXT("---------------------------------- Hello"));
    if (AIControllerRef != nullptr) {  
        APawn* ControlledPawn = AIControllerRef->GetPawn();
        if (ControlledPawn != nullptr) {
            FVector AILocation = ControlledPawn->GetActorLocation();
            ZDifference = PlayerLocation.Z - AILocation.Z;
            AIHigher = ZDifference < 0 ? true : false;
            NumRows = AIHigher ? (ZDifference * (1)) / RowDifference : ZDifference / RowDifference;
        }
        else {
            UE_LOG(LogTemp, Error, TEXT("ControlledPawn is null on AI Contoller that was passed into SpawnNavArc is nullptr. Not taking hight difference into account for flank path!"));
        }
    }
    else {
        UE_LOG(LogTemp, Error, TEXT("AI controller that was passed into SpawnNavArc is nullptr. Not taking hight difference into account for flank path!"));
    }

    TArray<FArcPoint> ArcPoints = UCustomMath::GetPointsOnArc(PlayerLocation, ZRotation, 110, 900);
    TArray<AActor*> spawnedModifiers;

    UE_LOG(LogTemp, Error, TEXT("Spawning %d rows!"), NumRows);

    for (int i = 0; i < (1); i++) {
        float OverideZ = PlayerLocation.Z + (RowDifference * i);
        UE_LOG(LogTemp, Error, TEXT("Entire row at %f!"), OverideZ);
        TArray<AActor*> newSpawnedModifiers = SpawnRow(ArcPoints, PlayerLocation, OverideZ);
        spawnedModifiers.Append(newSpawnedModifiers);
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