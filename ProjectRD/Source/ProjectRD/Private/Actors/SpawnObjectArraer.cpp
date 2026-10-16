// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Engine/World.h"

#include "Actors/SpawnObjectArraer.h"

// Sets default values
ASpawnObjectArraer::ASpawnObjectArraer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnObjectArraer::BeginPlay()
{
	Super::BeginPlay();

	ChalkulateChance();

	if (!activateOnBegine)
		return;

	if (spawnAmountMin == spawnAmountMax) 
	{
		SpawnObjects(spawnAmountMax);
		return;
	}

	int32 ran = FMath::RandRange(spawnAmountMin, spawnAmountMax);
	SpawnObjects(ran);
}

// giver error 
void ASpawnObjectArraer::SpawnObjects(int32 spawnAmount)
{
	TSubclassOf<AActor> act;
	uint32 passedNummbers = 0;

	for (int32 i = 0; i < spawnAmount; i++)
	{
		// role 32
		// [5] [6] [5] [5] [2] [1] [7] [3] [2]
		// [5] [5 + 6] [11 + 5] [16 + 5] [21 + 2] [23 + 1] [24 + 7] [31 + 3, Found] [34 + 2, skiped]
		uint32 ran = FMath::RandRange(0, maxChance);

		// can,t use fine, cose we tengaly are checking multidle nummbers min = current check
		for (TPair<TSubclassOf<AActor>, uint32> object : Spawn)
		{
			if (passedNummbers + object.Value >=  ran)
			{
				act = object.Key;
				break;
			}

			passedNummbers += object.Value;
		}
		 

		// __________ Coses problem __________
		if (act)
		{

			FActorSpawnParameters spawnParamas;
			spawnParamas.Owner = GetOwner();
			//spawnParamas.Instigator = this;


			AActor* a = GetWorld()->SpawnActor<AActor>(act, GetOwner()->GetActorLocation(), GetOwner()->GetActorRotation(), spawnParamas);

			if (a) 
			{
				FVector down = -a->GetActorUpVector();
				FVector start = down * 100 + a->GetActorLocation();
				FVector end = down * 1000 + start;
				FHitResult hit;

				GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Pawn);
				DrawDebugLine(GetWorld(), start, end, FColor::Blue);
				//a.SetActorLocation = 

				//GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_WorldStatic, FCollisionQueryParams(), FCollisionResponseParams());
				//DrawDebugLine(GetWorld(), start, end, FColor::Red, 10.f, 0.f, 10.f);
			}
		}
	}
}

void ASpawnObjectArraer::ChalkulateChance()
{
	maxChance = 0;

	// mabye do this at start
	for (TPair<TSubclassOf<AActor>, float>& spawn : Spawn)
	{
		maxChance += spawn.Value;
	}
}
