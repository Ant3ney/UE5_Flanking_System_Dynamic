// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------



#include "FlankQueryFilterHighCost.h"

UFlankQueryFilterHighCost::UFlankQueryFilterHighCost()
{
    // Assuming UFlankArea0 is an area class derived from UNavArea
    AddTravelCostOverride(UFlankArea::StaticClass(), 20000);
}