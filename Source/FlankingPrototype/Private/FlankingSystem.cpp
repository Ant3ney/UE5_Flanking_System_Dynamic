// Fill out your copyright notice in the Description page of Project Settings.


#include "FlankingSystem.h"

TArray<TSubclassOf<AActor>> UFlankingSystem::FlankNavModifierActorClasses;

void UFlankingSystem::MoveAIAlongPath(AAIController* AIController, const TArray<FVector>& Path) {
    //UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
    for (const FVector& Point : Path)
    {
        AIController->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
        //FAIRequestID RequestID;
        //FPathFollowingResult Result;

        //AIController->OnMoveCompleted(RequestID, Result).AddDynamic(NULL, &UYourBlueprintFunctionLibrary::OnMoveCompletedHandler);
    }
}


TArray<FVector> UFlankingSystem::GetFlankPathToLocation(AAIController* AIController, const FTransform& TargetTransform) {
    FVector Test_Vector_nav_arc_1(630.0, 580.0, 5.0f);
    TArray<AActor*> spawnedModifiers = UFlankingSystem::SpawnNavArc(Test_Vector_nav_arc_1);
    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
    NavSys->Build();
    TArray<FVector> path;
    // Correctly access the location from the TargetTransform
    FVector targetLocation = TargetTransform.GetLocation();
    path.Add(targetLocation);
    
    //ConstructorHelpers::FObjectFinder<UNavigationQueryFilter> QueryFilterFinder(TEXT("/Game/FlankingNavClasses/Flank_Query_Filter.Flank_Query_Filter_C"));
    FText queryFilterPath = FText::FromString(TEXT("/Game/FlankingNavClasses/Flank_Query_Filter.Flank_Query_Filter_C"));
    FString queryFilterPathFString = queryFilterPath.ToString();

    UClass* QueryFilterFinder = LoadClass<UNavigationQueryFilter>(nullptr, *queryFilterPathFString);

    UNavigationQueryFilter* MyQueryFilter = nullptr;//QueryFilterFinder.Object;
    MyQueryFilter = NewObject<UNavigationQueryFilter>((UObject*)GetTransientPackage(), QueryFilterFinder);
    
    TSubclassOf<UNavigationQueryFilter> MyFilterClass = MyQueryFilter->GetClass();

    
    FVector flankerLocation(1500.0, 1960.0, 5.0f);
    FVector PlayerLocation(630.0, 540.0, 5.0f);
    TArray<FVector> path2;

    
    UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(AIController->GetWorld(), flankerLocation, PlayerLocation, nullptr, MyFilterClass);
    
    //CleanUpNavArc(spawnedModifiers);

    if (NavPath && NavPath->IsValid())
    {
        path2 = NavPath->PathPoints;
    }
    else
    {
        // Handle the case where the path is not found or invalid
    }
    


    return path2;
}



void UFlankingSystem::InitializeFlankNavModifierActorClasses()
{
    ConstructorHelpers::FClassFinder<AActor> ClassFinder1(TEXT("/Game/FlankingNavClasses/NavModifierActors/Flank_Nav_Modifier_Actor_0.Flank_Nav_Modifier_Actor_0_C"));
    if (ClassFinder1.Succeeded())
    {
        FlankNavModifierActorClasses.Add(ClassFinder1.Class);
    }
}


// Consider changing the argument passed in to be transform
TArray<AActor*> UFlankingSystem::SpawnNavArc(const FVector& PlayerLocation) {
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

TArray<AActor*> UFlankingSystem::SpawnLine(const FVector& LocationA, const FVector& LocationB, FText type) {
    TArray<FVector> lineSpots = UCustomMath::CalculatePointsBetweenLocations(LocationA, LocationB, 150.0f);
    TArray<AActor*> spawnedModifiers;
    
    for (FVector& spot : lineSpots) {
        AActor* spawnedModifier = SpawnFlankNavModifierActorAt(spot, type);
        spawnedModifiers.Add(spawnedModifier);
    }

    return spawnedModifiers;
}

AActor* UFlankingSystem::SpawnFlankNavModifierActorAt(FVector location, FText type)
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

void UFlankingSystem::CleanUpNavArc(TArray<AActor*> modifiersToDelete) {
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


//TArray<FVector> UFlankingSystem::GetFlankPathToTarget(AAIController* AIController, const FTransform& TargetTransform)
//{
//    TArray<FVector> PathPoints;
//    //if (AIController && AIController->GetNavAgentPropertiesRef().IsValid())
//    //{
//        //const ANavigationData* NavData = FNavigationSystem::GetCurrent<ANavigationData>(AIController->GetWorld());
//
//        //wchar_t path[46] = TEXT("/Game/PathToYourNavQueryFilter.NavQueryFilter");
//        //FSharedConstNavQueryFilter NavQueryFilter = UNavigationQueryFilter::GetQueryFilter(*NavData, AIController, path);
//        //FSharedConstNavQueryFilter NavQueryFilter = UNavigationQueryFilter::GetQueryFilter(*NavData, AIController, TEXT("/Game/PathToYourNavQueryFilter.NavQueryFilter"));
//        //FPathFindingQuery Query(AIController, *NavData, AIController->GetNavAgentLocation(), TargetTransform.GetLocation(), NavQueryFilter);
//        //FPathFindingResult Result = UNavigationSystemV1::FindPathSync(AIController->GetWorld(), Query);
//
//        //static ConstructorHelpers::FClassFinder<UNavigationQueryFilter> NavFilterClassFinder(TEXT("/Game/PathToYourNavQueryFilter.NavQueryFilter"));
//        //TSubclassOf<UNavigationQueryFilter> NavFilterClass = NavFilterClassFinder.Class;
//        //
//        //FNavAgentProperties NavAgentProperties;
//        //FPathFindingQuery Query;
//        //FPathFindingResult Result;
//        //
//        //if (NavFilterClass != nullptr)
//        //{
//        //    // Use the found class with UNavigationSystemV1::FindPathSync
//        //    FNavAgentProperties NavAgentProperties;
//        //    FPathFindingQuery Query;
//        //    FPathFindingResult Result;
//        //
//        //    UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(AIController->GetWorld());
//        //    if (NavSys)
//        //    {
//        //        Result = NavSys->UNavigationSystemV1::FindPathSync(NavAgentProperties, Query, NavFilterClass);
//        //    }
//        //}
//
//    //Another attempt
//    //FPathFindingQuery Query;
//    //FSharedConstNavQueryFilter queryFilter = MakeShared<FNavigationQueryFilter>();
//    //
//    //UClass* QueryFilterClass = LoadClass<FNavigationQueryFilter>(nullptr, *FText::FromString(TEXT("/Game/FlankingNavClasses/NavModifierActors/Flank_Nav_Modifier_Actor_")).ToString());
//    //UObject* filterInstance = NewObject<UObject>(GetTransientPackage(), QueryFilterClass);
//    //FNavigationQueryFilter* navQueryFilter = Cast<FNavigationQueryFilter>(filterInstance);
//    ////FSharedConstNavQueryFilter queryFilter = navQueryFilter->GetSimpleCollisionFilter(*navQueryFilter);
//    //EPathFindingMode::Type mode = EPathFindingMode::Regular;
//    //
//    //FPathFindingQuery PathQuery;
//    //PathQuery.QueryFilter = MakeShareable(navQueryFilter);
//    //UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
//    //FPathFindingResult Result = NavSys->FindPathSync(PathQuery, mode);
//    //for (auto PathPoint : Result.Path->GetPathPoints())
//    //{
//    //    PathPoints.Add(PathPoint.Location);
//    //}
//
//    ConstructorHelpers::FObjectFinder<UBlueprint> MyFilterBP(TEXT("Blueprint'/Game/Path/To/Your/BlueprintClass.BlueprintClass'"));
//
//    
//   UClass* MyFilterClass = MyFilterBP.Object->GeneratedClass;
//   FNavigationQueryFilter* MyFilterInstance = NewObject<FNavigationQueryFilter>(GetTransientPackage(), MyFilterClass);
//   EPathFindingMode::Type mode = EPathFindingMode::Regular;
//    FPathFindingQuery PathQuery;
//    PathQuery.QueryFilter = MakeShareable(MyFilterInstance);
//    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
//    FPathFindingResult Result = NavSys->FindPathSync(PathQuery, mode);
//    for (auto PathPoint : Result.Path->GetPathPoints())
//    {
//        PathPoints.Add(PathPoint.Location);
//    
//    }
// 
//      //for (int32 Index = 0; Index < Areas->Num(); ++Index)
    //{
        //FNavigationFilterArea* area = &((*Areas)[Index]);

        //UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
        //EPathFindingMode::Type mode = EPathFindingMode::Regular;
        //FSharedConstNavQueryFilter MyNavQueryFilter;
        //FNavigationQueryFilter* NonConstCopy = new FNavigationQueryFilter();
        //
        //NonConstCopy->SetAreaCost(area->AreaClass->, 5);
        //TSharedPtr<FNavigationQueryFilter> ModifiedNavQueryFilter = MakeShareable(NonConstCopy);
        //
        //FPathFindingQuery  query;
        //query.QueryFilter = (FSharedConstNavQueryFilter)NonConstCopy;
        //FPathFindingResult Result = NavSys->FindPathSync(query, mode);
    //}

  //TArray<FNavigationFilterArea>* Areas = &(MyQueryFilter->Areas);
   // TSubclassOf<UNavigationQueryFilter> FilterClass = QueryFilterFinder.Object;
//TSubclassOf<UNavigationQueryFilter> query = *MyQueryFilter;
    //ConstructorHelpers::FObjectFinder<TSubclassOf<UNavigationQueryFilter>> QueryFilterFinder(TEXT("/Game/Path/To/Your/Filter"));

    //FPathFindingQuery PathQuery;
    //FNavigationQueryFilter* sharedFilter = new FNavigationQueryFilter();
    //PathQuery.QueryFilter = MakeShareable(sharedFilter);
// 
//    return PathPoints;
//}



 //FTransform NewTransform;
   //// Set location
   //NewTransform.SetLocation(FVector(0, -600.0f, 0));

   //// Set rotation (Euler angles in degrees)
   //NewTransform.SetRotation(FRotator(0, 0, 0).Quaternion());
   // GetWorld()->SpawnActorDeferred<Flank_Nav_Modifier_Actor_0>(Flank_Nav_Modifier_Actor_0, NewTransform);
    /*GEngine->GetWorldFromContextObjectChecked(GEngine->GameViewport)->SpawnActor<AActor>(FlankNavModifierActorClasses[0], Location, Rotation, SpawnParams);*/
    // Ensure we have a valid class at index 0
    //if (FlankNavModifierActorClasses.IsValidIndex(0) && FlankNavModifierActorClasses[0] != nullptr)
    //{
    //    UE_LOG(LogTemp, Warning, TEXT("Found class is valid"));
    //    // Get the current world context
    //    UWorld* World = GEngine->GetWorldFromContextObjectChecked(GEngine->GameViewport);
    //    if (World)
    //    {
    //        // Define the spawn parameters
    //        FActorSpawnParameters SpawnParams;
    //        SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    //        // Spawn the actor at location (0, 0, 0)
    //        FVector Location(0.0f, -600.0f, 0.0f);
    //        FRotator Rotation(0.0f, 0.0f, 0.0f);

    //        World->SpawnActor<AActor>(FlankNavModifierActorClasses[0], Location, Rotation, SpawnParams);
    //        UE_LOG(LogTemp, Warning, TEXT("Should have spawned"));
    //    }
    //}


//UClass* MyActorClass = LoadClass<AActor>(nullptr, TEXT("/Game/FlankingNavClasses/NavModifierActors/Flank_Nav_Modifier_Actor_0.Flank_Nav_Modifier_Actor_0_C"));


   // SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


//void UFlankingSystem::GetFlankPathToLocation(int test, const FTransform& TargetTransform) {
//    TArray<FVector> path;
//    // Correctly access the location from the TargetTransform
//    FVector targetLocation = TargetTransform.GetLocation();
//    path.Add(targetLocation);
//    //return path;
//}