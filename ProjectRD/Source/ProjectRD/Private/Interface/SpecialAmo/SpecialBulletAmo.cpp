// Fill out your copyright notice in the Description page of Project Settings.



#include "Interface/SpecialAmo/SpecialBulletAmo.h"

// Sets default values
ASpecialBulletAmo::ASpecialBulletAmo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void ASpecialBulletAmo::BeginPlay()
{
	Super::BeginPlay();

}

TSubclassOf<AActor> ASpecialBulletAmo::GetSpecialBullet_Implementation()
{
	return amoActor;
}

void ASpecialBulletAmo::PickUpAmo_Implementation(AActor* pickUpByActor)
{
	Destroy();
}



