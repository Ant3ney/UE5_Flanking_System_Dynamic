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

UENUM(BlueprintType)
enum class EFlankStartingPoint : uint8 {
    ClassicStartingPoint	UMETA(DisplayName = "Classic Starting Point"),
    FlankersCurrentPosition	UMETA(DisplayName = "Flanker's Current Position")
};

USTRUCT(BlueprintType)
struct FFlankSettings {
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flanking")
    EFlankStartingPoint StartingPoint = EFlankStartingPoint::ClassicStartingPoint;

    UPROPERTY()
    AAIController* AIController;
};

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

    static UAIFlankTo* selfRef;

    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
    static UAIFlankTo* AIFlankTo(AAIController* AIController, const FTransform TargetTransform, FFlankSettings Settings = FFlankSettings());


    UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true"), Category = "FlankingSystem")
    static UAIFlankTo* MoveAIAlongPathAndReturnCallbackPointer(AAIController* AIController, const TArray<FVector> Path, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

    UFUNCTION(BlueprintCallable, Category = "AI")
    static TArray<FVector> GetFlankPathToLocation(AAIController* AIController, const FTransform TargetTransform, FFlankSettings Settings = FFlankSettings());

    DECLARE_DELEGATE_TwoParams(FOnMoveCompletedDelegate, FAIRequestID RequestID, const FPathFollowingResult& Result);
    FOnMoveCompletedDelegate OnMoveCompleted;

    void OnReachedPathPoint(FAIRequestID RequestID, const FPathFollowingResult& Result);

    UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
    static AActor* SpawnFlankNavModifierActorAt(FVector location, FText type, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

    UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
    static TArray<AActor*> SpawnLine(const FVector& LocationA, const FVector& LocationB, FText type, UDataTable* DataTable = nullptr, UAIFlankTo* instanceRef = nullptr);

    UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
    static TArray<AActor*> SpawnNavArc(const FTransform& PlayerLocation, FFlankSettings Settings = FFlankSettings());

    UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
    static void CleanUpNavArc(TArray<AActor*> modifiersToDelete);

private:
    void CallbackFunction();

    AAIController* AIControllerMem;

    TArray<AActor*> NavModifierActors;
};