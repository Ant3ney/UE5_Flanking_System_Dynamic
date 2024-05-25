// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------

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
