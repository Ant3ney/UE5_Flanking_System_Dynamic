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
    // This is called when the callback in the function library method is triggered
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



void UAIFlankTo::OnReachedPathPoint(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    UAIFlankTo* selfRefObj = this;
    //selfRefObj->AddToRoot();
    
    int currentPath = selfRefObj->current;
    int maxPaths = selfRefObj->max;
    selfRefObj->current = currentPath + 1;
    // Implementation of your method

    TArray<FVector> path = selfRefObj->pathMem;

    if (!(selfRefObj->pathMem.Num() <= 0)) {
        UE_LOG(LogTemp, Warning, TEXT("Last point obzerved: %s"), *path[path.Num() - 1].ToString());

    }
    

    if (selfRefObj->pathMem.Num() > 0 && selfRefObj->current <= selfRefObj->max) {
        FVector& Point = selfRefObj->pathMem[0];
        selfRefObj->pathMem.RemoveAt(0);
        bool isLast = selfRefObj->current + 1 == selfRefObj->max;
        bool currentPathEqualsLastPath = Point.Equals(path[path.Num() - 1], 1.0f);
        bool isPointValid = FlankingSystemUtilities::IsVectorInArray(Point, selfRefObj->pathMem);

        if (!isPointValid) { // Wants to move to bug point! Abort!

            if(isLast){
                selfRefObj->OnFinished.Broadcast();
                return;
            }
            else {
                // TODO: Look over this else block and ensure it will work when called.
                int localIndex = 1;
                while (!isLast && !isPointValid) {
                    Point = selfRefObj->pathMem[localIndex];
                    selfRefObj->pathMem.RemoveAt(0);
                    currentPath = selfRefObj->current;
                    selfRefObj->current = currentPath + 1;
                    isLast = selfRefObj->current + 1 == selfRefObj->max;
                    isPointValid = FlankingSystemUtilities::IsVectorInArray(Point, selfRefObj->pathMem);
                    localIndex++;
                }
                if (isLast && !isPointValid) {
                    selfRefObj->OnFinished.Broadcast();
                    return;
                }
            }
        }

        UE_LOG(LogTemp, Warning, TEXT("Moving to <%f, %f, %f>"), Point.X, Point.Y, Point.Z);
        if (selfRefObj !=  nullptr) {
            if (selfRefObj->AIControllerMem != nullptr) {       
                EPathFollowingRequestResult::Type MoveResult = selfRefObj->AIControllerMem->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);

                switch (MoveResult)
                {
                case EPathFollowingRequestResult::Type::Failed:
                    UE_LOG(LogTemp, Warning, TEXT("MoveToLocation failed"));
                    break;

                case EPathFollowingRequestResult::Type::AlreadyAtGoal:
                    UE_LOG(LogTemp, Warning, TEXT("MoveToLocation called but already at goal"));
                    break;

                case EPathFollowingRequestResult::Type::RequestSuccessful:
                    UE_LOG(LogTemp, Warning, TEXT("MoveToLocation request successful"));
                    break;

                default:
                    UE_LOG(LogTemp, Warning, TEXT("MoveToLocation returned an unexpected result"));
                    break;
                }
            }
        }
        
    }
    else if(selfRefObj->pathMem.Num() <= 0) {
        //OnFinished.Broadcast();

        //selfRefObjStatic->OnFinished.Broadcast();
        selfRefObj->OnFinished.Broadcast();

    }

}

//void UAIFlankTo::OnMoveCompletedMethod(FAIRequestID RequestID, const FPathFollowingResult& Result)
//{
//    // Implementation of your method
//}

UAIFlankTo* UAIFlankTo::GetSelf()
{
    UAIFlankTo* selfRefObj = UAIFlankTo::selfRef;
    if (selfRefObj == nullptr)
    {
        selfRefObj = NewObject<UAIFlankTo>();

        //Preventing garbage collection makes game not crash for some reason.
        selfRefObj->AddToRoot(); // Prevent garbage collection
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
    FString typeString = type.ToString();

    AActor* spawnedModifier = nullptr;
    UClass* AFlankNavModifierActor0Class = AFlankNavModifierActor0::StaticClass();
    spawnedModifier = World->SpawnActor<AFlankNavModifierActor0>(AFlankNavModifierActor0Class, Location, Rotation, SpawnParams);

    return spawnedModifier;
}

AActor* UAIFlankTo::CreateFlankNavModifierActor() {
    AActor* NewActor = NewObject<AActor>();

    return NewActor;
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

    // Clear the array after deleting the actors
    modifiersToDelete.Empty();

}