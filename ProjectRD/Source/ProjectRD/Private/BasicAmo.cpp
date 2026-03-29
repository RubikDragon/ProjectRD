// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicAmo.h"

// Sets default values
ABasicAmo::ABasicAmo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicAmo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicAmo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ABasicAmo::PickUpAmo()
{
	return amoGiveAmount;
}



