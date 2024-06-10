// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "NavModifierComponent.h"
#include "FlankArea.h"
#include "FlankNavModifierActor.generated.h"

UCLASS()
class AFlankNavModifierActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlankNavModifierActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere, Category = "FlankingSystem")
    UBoxComponent* BoxCollider;

    UPROPERTY(VisibleAnywhere, Category = "FlankingSystem")
    UNavModifierComponent* NavModifier;

};
