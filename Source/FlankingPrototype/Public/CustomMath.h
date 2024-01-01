// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomMath.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FArcPoint
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadOnly)
		FVector Point;

		UPROPERTY(BlueprintReadOnly)
		int32 IndexFromCenter;
};

UCLASS()
class FLANKINGPROTOTYPE_API UCustomMath : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Custom|Math")
	static TArray<FVector> CalculatePointsBetweenLocations(const FVector& LocationA, const FVector& LocationB, float Distance);

	UFUNCTION(BlueprintCallable, Category = "Custom|Math")
	static float CalculateDistanceBetweenPoints(const FVector& StartPoint, const FVector& EndPoint);

	UFUNCTION(BlueprintCallable, Category = "Custom|Math")
	static TArray<FArcPoint> GetPointsOnArc(const FVector& PlayerLocation, float Rotation, float TotalArcAngle, float Magnitude);


	UFUNCTION()
	static int GetCentralizedIndex(int flatIndex, int total);
};
