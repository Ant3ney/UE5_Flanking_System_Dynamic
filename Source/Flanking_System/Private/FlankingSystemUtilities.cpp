// Fill out your copyright notice in the Description page of Project Settings.


#include "FlankingSystemUtilities.h"

FlankingSystemUtilities::FlankingSystemUtilities()
{
}

FlankingSystemUtilities::~FlankingSystemUtilities()
{
}

bool FlankingSystemUtilities::IsVectorInArray(const FVector& TargetVector, const TArray<FVector>& VectorArray) {
    for (const FVector& element : VectorArray)
    {
        if (element.Equals(TargetVector, KINDA_SMALL_NUMBER))
        {
            return true;
        }
    }
	return false;
}
