// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "FlankArea.generated.h"

/**
 * 
 */
UCLASS()
class UFlankArea : public UNavArea
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "ignore")
		static void nothingignore();
};
