// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "FlankingPrototype/Public/FlankingSystem.h"
#include "FlankingPrototype/Public/FlankingSystemUtilities.h"
#include "FlankingPrototype/Public/FlankQueryFilterHighCost.h"
#include "Engine/DataTable.h"
#include "NavAreas/NavArea.h"
#include "NavModifierComponent.h"
#include "Components/BoxComponent.h"
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

        UPROPERTY()
        TArray<FVector> pathMem;

        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "MyCategory")
        static UAIFlankTo* GetSelf();

        DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinished);
    
        UPROPERTY(BlueprintAssignable)
        FOnFinished OnFinished;

        static UAIFlankTo* selfRef;
    
        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
        static UAIFlankTo* AIFlankTo(AAIController* AIController, const FTransform TargetTransform, UDataTable* DataTable = nullptr);


        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
        static UAIFlankTo* MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "AI")
        static TArray<FVector> GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        DECLARE_DELEGATE_TwoParams(FOnMoveCompletedDelegate, FAIRequestID RequestID, const FPathFollowingResult& Result);
        //void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);
        FOnMoveCompletedDelegate OnMoveCompleted;

        //UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        //void OnMoveCompletedMethod(FAIRequestID RequestID, const FPathFollowingResult& Result);

        void OnReachedPathPoint(FAIRequestID RequestID, const FPathFollowingResult& Result);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static AActor* SpawnFlankNavModifierActorAt(FVector location, FText type, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static TArray<AActor*> SpawnLine(const FVector& LocationA, const FVector& LocationB, FText type, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static TArray<AActor*> SpawnNavArc(const FVector& PlayerLocation, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static void CleanUpNavArc(TArray<AActor*> modifiersToDelete);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static AActor* CreateFlankNavModifierActor();
    
    private:
        void CallbackFunction();

        AAIController* AIControllerMem;

        TArray<AActor*> NavModifierActors;
};
