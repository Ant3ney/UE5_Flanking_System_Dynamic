// Fill out your copyright notice in the Description page of Project Settings.


#include "FlankNavModifierActor.h"

// Sets default values
AFlankNavModifierActor::AFlankNavModifierActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
    RootComponent = BoxCollider;

    // Initialize the Navigation Modifier Component
    NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    //NavModifier->AttachToComponent(BoxCollider, FAttachmentTransformRules::KeepRelativeTransform);

    // Set the modified area class
    NavModifier->AreaClass = UFlankArea::StaticClass();

}

// Called when the game starts or when spawned
void AFlankNavModifierActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlankNavModifierActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

