// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "FreerNavigationQueryFilter.generated.h"
/**
 * 
 */
UCLASS()
class FLANKINGPROTOTYPE_API UFreerNavigationQueryFilter : public UNavigationQueryFilter
{
	GENERATED_BODY()
	
    public:
        // Make the desired methods public
        using UNavigationQueryFilter::AddTravelCostOverride;
        using UNavigationQueryFilter::AddEnteringCostOverride;
        using UNavigationQueryFilter::AddExcludedArea;

};
