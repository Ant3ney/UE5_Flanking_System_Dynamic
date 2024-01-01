// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavAreas/NavArea.h"
#include "AI/Navigation/NavQueryFilter.h"
#include "UObject/ConstructorHelpers.h"
#include "FlankingPrototype/Public/CustomMath.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FlankingSystem.generated.h"

/**
 * 
 */

///////////////////////////////////////////////////////////////////////////////////////////////
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResponsDeleget, int32, ID, FString, Data);
///////////////////////////////////////////////////////////////////////////////////////////////

UCLASS()
class FLANKINGPROTOTYPE_API UFlankingSystem : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

	public:
		//UPROPERTY(BlueprintAssignable);
		//DECLARE_DYNAMIC_DELEGATE(FResponsDeleget OnStart);

		//UPROPERTY(BlueprintAssignable);
		//FResponsDeleget  OnStart;

		DECLARE_DYNAMIC_DELEGATE(FMyCallbackDelegate);

		UPROPERTY(BlueprintAssignable)
		FResponsDeleget  OnFinish;

		UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
		static void MoveAIAlongPath(AAIController* AIController, const TArray<FVector>& Path);

		UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
		static void InitializeFlankNavModifierActorClasses();

		static TArray<TSubclassOf<AActor>> FlankNavModifierActorClasses;

		UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
		static AActor* SpawnFlankNavModifierActorAt(FVector location, FText type);


		UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
		static TArray<AActor*> SpawnLine(const FVector& LocationA, const FVector& LocationB, FText type);

		UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
		static TArray<AActor*> SpawnNavArc(const FVector& PlayerLocation);

		UFUNCTION(BlueprintCallable, Category = "FlankingSystem")
		static void CleanUpNavArc(TArray<AActor*> modifiersToDelete);

		//UFUNCTION(BlueprintCallable, Category = "AI")
		//static TArray<FVector> GetFlankPathToTarget(AAIController* AIController, const FTransform& TargetTransform);

		UFUNCTION(BlueprintCallable, Category = "AI")
		static TArray<FVector> GetFlankPathToLocation(AAIController* AIController, const FTransform& TargetTransform);

		//UFUNCTION(BlueprintCallable, Category = "AI")
		//static void GetFlankPathToLocation(int test, const FTransform& TargetTransform);
};
