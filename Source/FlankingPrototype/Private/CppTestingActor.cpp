// Fill out your copyright notice in the Description page of Project Settings.


#include "CppTestingActor.h"

// Sets default values
ACppTestingActor::ACppTestingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppTestingActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("UCustomMath::GetCentralizedIndex(1, 5): %d"), UCustomMath::GetCentralizedIndex(1, 5));
	FVector Test_Vector_0(1020.0f, 260.0f, 5.0f);
	FVector Test_Vector_1(1010.0, 120.0, 5.0f);
	FVector Test_Vector_2(1510.0, 540.0, 5.0f);
	FVector Test_Vector_nav_arc_1(630.0, 580.0, 5.0f);
	//UFlankingSystem::SpawnFlankNavModifierActorAt(Test_Vector_0, FText::FromString(TEXT("0")));
	//UFlankingSystem::SpawnFlankNavModifierActorAt(Test_Vector_1, FText::FromString(TEXT("0")));
	//UFlankingSystem::SpawnFlankNavModifierActorAt(Test_Vector_2, FText::FromString(TEXT("0")));

	//UFlankingSystem::SpawnLine(Test_Vector_0, Test_Vector_2, FText::FromString(TEXT("0")));
	//UFlankingSystem::SpawnLine(Test_Vector_0, Test_Vector_1, FText::FromString(TEXT("0")));

	//UFlankingSystem::SpawnNavArc(Test_Vector_nav_arc_1);
}

// Called every frame
void ACppTestingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

