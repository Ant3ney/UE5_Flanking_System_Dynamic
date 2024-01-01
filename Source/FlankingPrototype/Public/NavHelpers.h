// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NavAreas/NavArea.h"
#include "AI/Navigation/NavQueryFilter.h"
#include "FlankingPrototype/Public/FreerNavigationQueryFilter.h"
#include "NavHelpers.generated.h"

/**
 * 
 */
UCLASS()
class FLANKINGPROTOTYPE_API UNavHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Navigation")
	static UFreerNavigationQueryFilter* CreateCustomNavQueryFilter(TSubclassOf<UNavArea> AreaClass, float TravelCostOverride, float EnteringCostOverride, bool bIsAreaExcluded);
};
