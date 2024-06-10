// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------

#pragma once

#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "FlankArea.h"
#include "NavigationSystem.h"
#include "FlankQueryFilterHighCost.generated.h"

/**
 * 
 */
UCLASS()
class UFlankQueryFilterHighCost : public UNavigationQueryFilter
{
	GENERATED_BODY()

	UFlankQueryFilterHighCost();
	
};
