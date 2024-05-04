// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class FlankingSystemUtilities
{
public:
	FlankingSystemUtilities();
	~FlankingSystemUtilities();

	static bool IsVectorInArray(const FVector& TargetVector, const TArray<FVector>& VectorArray);
};
