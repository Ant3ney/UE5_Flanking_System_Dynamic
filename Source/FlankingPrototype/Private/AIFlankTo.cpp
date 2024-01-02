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

UAIFlankTo* UAIFlankTo::MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path) {
    UAIFlankTo* selfRefObj2 = NewObject<UAIFlankTo>();

    selfRefObj2->max = Path.Num();

    selfRefObj2->current = 0;
    selfRefObj2->max = Path.Num();
    selfRefObj2->AIControllerMem = AIController;
    selfRefObj2->pathMem = Path;


    AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(selfRefObj2, &UAIFlankTo::Test);

    FVector& Point = selfRefObj2->pathMem[0];
    selfRefObj2->AIControllerMem->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
    if(selfRefObj2->pathMem.Num() > 0)
        selfRefObj2->pathMem.RemoveAt(0);

    return selfRefObj2;
}

TArray<FVector> UAIFlankTo::GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform) {
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

    FVector flankerLocation = AIController->GetPawn()->GetActorLocation();
    FVector PlayerLocation(630.0, 540.0, 5.0f);
    TArray<FVector> path;


    UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(AIController->GetWorld(), flankerLocation, targetLocation, nullptr, MyFilterClass);

    CleanUpNavArc(spawnedModifiers);
    NavSys->Build();

    if (NavPath && NavPath->IsValid())
    {
        path = NavPath->PathPoints;
    }

    return path;
}



void UAIFlankTo::Test(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    UAIFlankTo* selfRefObj = this;
    //selfRefObj->AddToRoot();
    
    int currentPath = selfRefObj->current;
    int maxPaths = selfRefObj->max;
    selfRefObj->current = currentPath + 1;
    // Implementation of your method
    UE_LOG(LogTemp, Warning, TEXT("current index: %d, maxPaths: %d, numPaths left: %d"), currentPath, maxPaths, selfRefObj->pathMem.Num());
    
    if (!currentPath || !maxPaths) {
        UE_LOG(LogTemp, Warning, TEXT("Got undefineds, %d, %d, %d"), currentPath, maxPaths, (currentPath + 1));
    }
    //
    if (selfRefObj->pathMem.Num() > 0 && selfRefObj->current <= selfRefObj->max) {
        FVector& Point = selfRefObj->pathMem[0];
        selfRefObj->pathMem.RemoveAt(0);
        UE_LOG(LogTemp, Warning, TEXT("Moveing to <%f, %f, %f"), Point.X, Point.Y, Point.Z);
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
        UE_LOG(LogTemp, Warning, TEXT("Another confermation needed, %d, %d, %d"), currentPath, maxPaths, selfRefObj->pathMem.Num());

    }
    //
    //
    //
    //if (maxPaths <= (currentPath + 1))
    //{
    //    
    //}
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
        UE_LOG(LogTemp, Warning, TEXT("Made a new 1 time instance."))
        selfRefObj = NewObject<UAIFlankTo>();

        //Preventing garbage collection makes game not crash for some reason.
        selfRefObj->AddToRoot(); // Prevent garbage collection
        UAIFlankTo::selfRef = selfRefObj;
        selfRefObj->current = 0;
    }

   
    return selfRefObj;
}

AActor* UAIFlankTo::SpawnFlankNavModifierActorAt(FVector location, FText type)
{
    FVector Location(location.X, location.Y, 5);
    FRotator Rotation(0.0f, 0.0f, 0.0f);
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(GEngine->GameViewport);
    FActorSpawnParameters SpawnParams;

    FText Part1 = FText::FromString(TEXT("/Game/FlankingNavClasses/NavModifierActors/Flank_Nav_Modifier_Actor_"));
    FText Part2 = type;
    FText Part3 = FText::FromString(TEXT(".Flank_Nav_Modifier_Actor_"));
    FText Part4 = FText::FromString(TEXT("_C"));

    FText Testing = FText::FromString(TEXT("/Game/FlankingNavClasses/NavModifierActors/Flank_Nav_Modifier_Actor_0.Flank_Nav_Modifier_Actor_0_C"));

    FString classPath = Part1.ToString() + Part2.ToString() + Part3.ToString() + Part2.ToString() + Part4.ToString();

    //UClass* MyActorClass = LoadClass<AActor>(nullptr, *classPath);
    UClass* MyActorClass = LoadClass<AActor>(nullptr, *Testing.ToString());

    AActor* spawnedModifier = nullptr;

    spawnedModifier = World->SpawnActor<AActor>(MyActorClass, Location, Rotation, SpawnParams);

    return spawnedModifier;
}

TArray<AActor*> UAIFlankTo::SpawnLine(const FVector& LocationA, const FVector& LocationB, FText type) {
    TArray<FVector> lineSpots = UCustomMath::CalculatePointsBetweenLocations(LocationA, LocationB, 150.0f);
    TArray<AActor*> spawnedModifiers;

    for (FVector& spot : lineSpots) {
        AActor* spawnedModifier = SpawnFlankNavModifierActorAt(spot, type);
        spawnedModifiers.Add(spawnedModifier);
    }

    return spawnedModifiers;
}

TArray<AActor*> UAIFlankTo::SpawnNavArc(const FVector& PlayerLocation) {
    //UCustomMath::GetPointsOnArc
    static TArray<FArcPoint> ArcPoints = UCustomMath::GetPointsOnArc(PlayerLocation, 6, 110, 900);
    int i = 0;

    TArray<AActor*> spawnedModifiers;

    for (FArcPoint& spot : ArcPoints) {
        int centralizedIndex = UCustomMath::GetCentralizedIndex(i, ArcPoints.Num());
        UE_LOG(LogTemp, Warning, TEXT("centralizedIndex: %d, Max: %d"), centralizedIndex, ArcPoints.Num());
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