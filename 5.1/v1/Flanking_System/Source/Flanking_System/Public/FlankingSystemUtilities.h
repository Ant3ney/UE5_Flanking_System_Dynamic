// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------

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
