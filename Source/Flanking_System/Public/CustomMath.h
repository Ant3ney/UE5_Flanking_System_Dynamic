// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------

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

	UPROPERTY(BlueprintReadOnly, Category = "Custom|Math")
	FVector Point;

	UPROPERTY(BlueprintReadOnly, Category = "Custom|Math")
	int32 IndexFromCenter;
};

UCLASS()
class UCustomMath : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Custom|Math")
	static TArray<FVector> CalculatePointsBetweenLocations(const FVector& LocationA, const FVector& LocationB, float Distance);

	UFUNCTION(BlueprintCallable, Category = "Custom|Math")
	static float CalculateDistanceBetweenPoints(const FVector& StartPoint, const FVector& EndPoint);

	UFUNCTION(BlueprintCallable, Category = "Custom|Math")
	static TArray<FArcPoint> GetPointsOnArc(const FVector& PlayerLocation, float Rotation, float TotalArcAngle, float Magnitude);

	UFUNCTION(BlueprintCallable, Category = "Custom|Math")
	static int GetCentralizedIndex(int flatIndex, int total);
};