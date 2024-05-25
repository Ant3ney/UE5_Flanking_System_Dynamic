// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------



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
