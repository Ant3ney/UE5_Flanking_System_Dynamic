// Fill out your copyright notice in the Description page of Project Settings.


#include "NavHelpers.h"
#include "NavigationSystem.h"
#include "AI/Navigation/NavQueryFilter.h"
#include "FlankingPrototype/Public/FreerNavigationQueryFilter.h"
#include "NavAreas/NavArea.h"

UFreerNavigationQueryFilter* UNavHelpers::CreateCustomNavQueryFilter(TSubclassOf<UNavArea> AreaClass, float TravelCostOverride, float EnteringCostOverride, bool bIsAreaExcluded)
{
    UFreerNavigationQueryFilter* NewFilter = NewObject<UFreerNavigationQueryFilter>(GetTransientPackage());

    if (bIsAreaExcluded)
    {
        NewFilter->AddExcludedArea(AreaClass);
    }
    else
    {
        if (TravelCostOverride > 0)
        {
            NewFilter->AddTravelCostOverride(AreaClass, TravelCostOverride);
        }

        if (EnteringCostOverride > 0)
        {
            NewFilter->AddEnteringCostOverride(AreaClass, EnteringCostOverride);
        }
    }

    return NewFilter;
}