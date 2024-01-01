// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIFlankTo.generated.h"

/**
 * 
 */
UCLASS()
class FLANKINGPROTOTYPE_API UAIFlankTo : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

    public:
        ~UAIFlankTo();


        UPROPERTY()
        int current;

        UPROPERTY()
        int max;

        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "MyCategory")
        static UAIFlankTo* GetSelf();

        DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinished);
    
        UPROPERTY(BlueprintAssignable)
        FOnFinished OnFinished;

        static UAIFlankTo* selfRef;
    
        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
        static UAIFlankTo* AIFlankTo();

        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
        static UAIFlankTo* MoveAIAlongPath2(AAIController* AIController, const TArray<FVector>& Path);

        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
        static UAIFlankTo* MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector>& Path);

        DECLARE_DELEGATE_TwoParams(FOnMoveCompletedDelegate, FAIRequestID RequestID, const FPathFollowingResult& Result);
        //void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);
        FOnMoveCompletedDelegate OnMoveCompleted;

        //UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        //void OnMoveCompletedMethod(FAIRequestID RequestID, const FPathFollowingResult& Result);

        void Test(FAIRequestID RequestID, const FPathFollowingResult& Result);

    
    private:
        void CallbackFunction();

        AAIController* AIControllerMem;
};
