// Fill out your copyright notice in the Description page of Project Settings.


#include "AIFlankTo.h"

UAIFlankTo* UAIFlankTo::selfRef = nullptr;

UAIFlankTo::~UAIFlankTo() {
    UAIFlankTo* selfRefObj = GetSelf();
    selfRefObj->current = 0;
}
    

UAIFlankTo* UAIFlankTo::AIFlankTo(AAIController* AIController, const FTransform TargetTransform, UDataTable* DataTable)
{
    TArray<FVector> path = GetFlankPathToLocation(AIController, TargetTransform);
    UAIFlankTo* MyAction = MoveAIAlongPathAndReturnCallbackPointer(AIController, path);
    if (!DataTable)
    {
        DataTable = NewObject<UDataTable>();
    }
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
    FText queryFilterPath = FText::FromString(TEXT("/Game/FlankingNavClasses/Flank_Query_Filter.Flank_Query_Filter_C"));
    FString queryFilterPathFString = queryFilterPath.ToString();

    UClass* QueryFilterFinder = LoadClass<UNavigationQueryFilter>(nullptr, *queryFilterPathFString);

    UNavigationQueryFilter* MyQueryFilter = nullptr;//QueryFilterFinder.Object;
    MyQueryFilter = NewObject<UNavigationQueryFilter>((UObject*)GetTransientPackage(), QueryFilterFinder);

    TSubclassOf<UNavigationQueryFilter> MyFilterClass = MyQueryFilter->GetClass();
    TSubclassOf<UNavigationQueryFilter> newFilterClass = UFlankQueryFilterHighCost::StaticClass();

    FVector flankerLocation = AIController->GetPawn()->GetActorLocation();
    FVector PlayerLocation(630.0, 540.0, 5.0f);
    TArray<FVector> path;


    //UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(AIController->GetWorld(), flankerLocation, targetLocation, nullptr, MyFilterClass);
    UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(AIController->GetWorld(), flankerLocation, targetLocation, nullptr, newFilterClass);

    //CleanUpNavArc(spawnedModifiers);
    //NavSys->Build();

    if (NavPath && NavPath->IsValid())
    {
        path = NavPath->PathPoints;
    }

    UE_LOG(LogTemp, Warning, TEXT("Playe Position: %s"), *targetLocation.ToString());
    UE_LOG(LogTemp, Warning, TEXT("Last point: %s"), *path[path.Num() - 1].ToString());

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
    int typeInt = FCString::Atoi(*typeString);

    FText Part1 = FText::FromString(TEXT("/Game/FlankingNavClasses/NavModifierActors/Flank_Nav_Modifier_Actor_"));
    FText Part2 = type;
    FText Part3 = FText::FromString(TEXT(".Flank_Nav_Modifier_Actor_"));
    FText Part4 = FText::FromString(TEXT("_C"));
    FText Testing = FText::FromString(TEXT("/Game/FlankingNavClasses/NavModifierActors/Flank_Nav_Modifier_Actor_0.Flank_Nav_Modifier_Actor_0_C"));
    FString classPath = Part1.ToString() + Part2.ToString() + Part3.ToString() + Part2.ToString() + Part4.ToString();

    

    //UNavArea* newArea = NewObject<UNavArea>();
    if (instanceRef != nullptr) {
        //UE_LOG(LogTemp, Warning, TEXT("instanceRef is not null!"));
        //if (instanceRef->areas.Num() <= 0) {
        //    instanceRef->areas.Init(nullptr, 31);
        //    instanceRef->areas[typeInt] = newArea;
        //}
    }

    //UE_LOG(LogTemp, Log, TEXT("Spawn nav actor: %d"), typeInt);
    
    //AActor* FlankNavModifierActor = World->SpawnActor<AActor>(Location, Rotation, SpawnParams);
    //UNavModifierComponent* NavModifierComponent = NewObject<UNavModifierComponent>(FlankNavModifierActor, UNavModifierComponent::StaticClass());


    UClass* MyActorClass = LoadClass<AActor>(nullptr, *classPath);


    //UClass* MyActorClass = LoadClass<AActor>(nullptr, *Testing.ToString());

    AActor* spawnedModifier = nullptr;

    //spawnedModifier = World->SpawnActor<AActor>(MyActorClass, Location, Rotation, SpawnParams);

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
    //UCustomMath::GetPointsOnArc
    static TArray<FArcPoint> ArcPoints = UCustomMath::GetPointsOnArc(PlayerLocation, 6, 110, 900);
    int i = 0;

    TArray<AActor*> spawnedModifiers;

    

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