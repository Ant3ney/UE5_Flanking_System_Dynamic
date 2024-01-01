// Fill out your copyright notice in the Description page of Project Settings.


#include "AIFlankTo.h"

UAIFlankTo* UAIFlankTo::selfRef = nullptr;

UAIFlankTo::~UAIFlankTo() {
    UAIFlankTo* selfRefObj = GetSelf();
    selfRefObj->current = 0;
}
    

UAIFlankTo* UAIFlankTo::AIFlankTo()
{
    UAIFlankTo* MyAction = NewObject<UAIFlankTo>();
    // Call the function library method with a callback
    //UMyBlueprintFunctionLibrary::MyFunctionWithCallback(FMyBlueprintFunctionLibrary::FMyCallbackDelegate::CreateUObject(MyAction, &UMyAsyncAction::CallbackFunction));
    return MyAction;
}

void UAIFlankTo::CallbackFunction()
{
    // This is called when the callback in the function library method is triggered
    OnFinished.Broadcast();
}

UAIFlankTo* UAIFlankTo::MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector>& Path) {
    UAIFlankTo* selfRefObj2 = NewObject<UAIFlankTo>();

    selfRefObj2->max = Path.Num();

    selfRefObj2->current = 0;
    selfRefObj2->max = Path.Num();
    AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(selfRefObj2, &UAIFlankTo::Test);

    for (const FVector& Point : Path)
    {
        AIController->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
    }

    return selfRefObj2;
}

UAIFlankTo* UAIFlankTo::MoveAIAlongPath2(AAIController* AIController, const TArray<FVector>& Path) {
    //UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(AIController->GetWorld());
    UAIFlankTo* selfRefObj = GetSelf();
    UAIFlankTo* selfRefObj2 = NewObject<UAIFlankTo>();

    selfRefObj2->max = Path.Num();

    // Call the function library method with a callback
    //UMyBlueprintFunctionLibrary::MyFunctionWithCallback(FMyBlueprintFunctionLibrary::FMyCallbackDelegate::CreateUObject(MyAction, &UMyAsyncAction::CallbackFunction));
    //MyAction->AIControllerMem = AIController;
    //MyAction->AIControllerMem->GetPathFollowingComponent()->OnRequestFinished.AddUObject(this, &UAIFlankTo::OnMoveCompleted);
    //AIController->OnMoveCompleted.Bind(this, &UAIFlankTo::OnMoveCompletedMethod);
    
    
    
    
    selfRefObj2->current = 0;
    selfRefObj2->max = Path.Num();
    AIController->GetPathFollowingComponent()->OnRequestFinished.AddUObject(selfRefObj2, &UAIFlankTo::Test);





    for (const FVector& Point : Path)
    {
        AIController->MoveToLocation(Point, -1.0f, true, true, false, false, 0, true);
    }

    return selfRefObj2;
}

void UAIFlankTo::Test(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    UAIFlankTo* selfRefObj = this;
    
    int currentPath = selfRefObj->current;
    int maxPaths = selfRefObj->max;
    selfRefObj->current = currentPath + 1;
    // Implementation of your method
    UE_LOG(LogTemp, Warning, TEXT("Reached Real: %d, maxPaths: %d, (currentPath + 1): %d"), currentPath, maxPaths, (currentPath + 1));

    if (!currentPath || !maxPaths) {
        UE_LOG(LogTemp, Warning, TEXT("Got undefineds, %d, %d, %d"), currentPath, maxPaths, (currentPath + 1));
        return;
    }

    if (maxPaths <= (currentPath + 1))
    {
        OnFinished.Broadcast();
        UAIFlankTo* selfRefObjStatic = GetSelf();
        selfRefObjStatic->OnFinished.Broadcast();
        UE_LOG(LogTemp, Warning, TEXT("Another confermation needed, %d, %d, %d"), currentPath, maxPaths, (currentPath + 1));
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
        UE_LOG(LogTemp, Warning, TEXT("Made a new 1 time instance."))
        selfRefObj = NewObject<UAIFlankTo>();

        //Preventing garbage collection makes game not crash for some reason.
        selfRefObj->AddToRoot(); // Prevent garbage collection
        UAIFlankTo::selfRef = selfRefObj;
        selfRefObj->current = 0;
    }

   
    return selfRefObj;
}