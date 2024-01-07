// Fill out your copyright notice in the Description page of Project Settings.


#include "FlankQueryFilterHighCost.h"

UFlankQueryFilterHighCost::UFlankQueryFilterHighCost()
{
    // Assuming UFlankArea0 is an area class derived from UNavArea
    AddTravelCostOverride(UFlankArea0::StaticClass(), 20000);
}