// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "NavModifierComponent.h"
#include "FlankingPrototype/NavClasses/FlankArea0.h"
#include "FlankNavModifierActor0.generated.h"

UCLASS()
class FLANKINGPROTOTYPE_API AFlankNavModifierActor0 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlankNavModifierActor0();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere)
    UBoxComponent* BoxCollider;

    UPROPERTY(VisibleAnywhere)
    UNavModifierComponent* NavModifier;

};
