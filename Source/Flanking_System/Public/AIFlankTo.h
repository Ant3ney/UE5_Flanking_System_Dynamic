// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "FlankingSystemUtilities.h"
#include "FlankQueryFilterHighCost.h"
#include "CustomMath.h"
#include "FlankNavModifierActor.h"
#include "AI/Navigation/NavQueryFilter.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Engine/DataTable.h"
#include "NavAreas/NavArea.h"
#include "NavModifierComponent.h"
#include "Components/BoxComponent.h"
#include "Engine.h"
#include "AIFlankTo.generated.h"

/**
 * 
 */
UCLASS()
class UAIFlankTo : public UBlueprintAsyncActionBase
{
    GENERATED_BODY()

public:
        UPROPERTY()
        int current;

        UPROPERTY()
        int max;

        UPROPERTY()
        TArray<FVector> pathMem;

        DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinished);
    
        UPROPERTY(BlueprintAssignable)
        FOnFinished OnFinished;
    
        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
        static UAIFlankTo* AIFlankTo(AAIController* AIController, const FTransform TargetTransform);


        UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
        static UAIFlankTo* MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "AI")
        static TArray<FVector> GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        DECLARE_DELEGATE_TwoParams(FOnMoveCompletedDelegate, FAIRequestID RequestID, const FPathFollowingResult& Result);
        FOnMoveCompletedDelegate OnMoveCompleted;

        void OnReachedPathPoint(FAIRequestID RequestID, const FPathFollowingResult& Result);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static AActor* SpawnFlankNavModifierActorAt(FVector location, FText type, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static TArray<AActor*> SpawnLine(const FVector& LocationA, const FVector& LocationB, FText type, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static TArray<AActor*> SpawnRow(TArray<FArcPoint> ArcPoints, const FVector PlayerLocation, const float ZLocation);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static TArray<AActor*> SpawnNavArc(const FTransform& PlayerLocation, UDataTable* DataTable = nullptr, AAIController* instanceRef = nullptr);

        UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
        static void CleanUpNavArc(TArray<AActor*> modifiersToDelete);
    
    private:
        void CallbackFunction();

        AAIController* AIControllerMem;

        TArray<AActor*> NavModifierActors;

};
