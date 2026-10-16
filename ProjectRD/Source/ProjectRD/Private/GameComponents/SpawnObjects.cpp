// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"
#include "Engine/World.h"

#include "GameComponents/SpawnObjects.h"

// Sets default values for this component's properties
USpawnObjects::USpawnObjects()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void USpawnObjects::BeginPlay()
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

	randomNummber = FMath::RandRange(spawnAmountMin, spawnAmountMax);
	SpawnObjects(randomNummber);
}


// giver error 
void USpawnObjects::SpawnObjects(int32 spawnAmount)
{
	TSubclassOf<AActor> act;
	uint32 passedNummbers = 0;

	FActorSpawnParameters spawnParamas;
	spawnParamas.Owner = GetOwner();
	//spawnParamas.Instigator = this;

	for (int32 i = 0; i < spawnAmount; i++)
	{
		// role 32
		// [5] [6] [5] [5] [2] [1] [7] [3] [2]
		// [5] [5 + 6] [11 + 5] [16 + 5] [21 + 2] [23 + 1] [24 + 7] [31 + 3, Found] [34 + 2, skiped]
		uint32 ran = FMath::RandRange(0, maxChance);

		// can,t use fine, cose we tengaly are checking multidle nummbers min = current check
		for (TPair<TSubclassOf<AActor>, uint32> object : Spawn)
		{
			if (passedNummbers + object.Value >= ran)
			{
				act = object.Key;
				break;
			}

			passedNummbers += object.Value;
		}


		// __________ Coses problem __________
		if (act)
		{
			FVector actorLoaction = GetOwner()->GetActorLocation();

			randomX = FMath::RandRange((int32)actorLoaction.X - distance, (int32)actorLoaction.X + distance);
			randomY = FMath::RandRange((int32)actorLoaction.Y - distance, (int32)actorLoaction.Y + distance);
			randomZ = FMath::RandRange((int32)actorLoaction.Z, (int32)actorLoaction.Z + spawnHigth);

			spawnedActor = GetWorld()->SpawnActor<AActor>(act, FVector(randomX, randomY, randomZ), GetOwner()->GetActorRotation(), spawnParamas);

			if (spawnedActor)
			{
				FVector start = spawnedActor->GetActorLocation();
				FVector down = -spawnedActor->GetActorUpVector();

				FVector end = down * 1000 + start;

				GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Pawn);
				spawnedActor->SetActorLocation(hit.ImpactPoint);
				//DrawDebugLine(GetWorld(), start, end, FColor::Blue);
			}
		}
	}
}

void USpawnObjects::ChalkulateChance()
{
	maxChance = 0;

	// mabye do this at start
	for (TPair<TSubclassOf<AActor>, float>& spawn : Spawn)
	{
		maxChance += spawn.Value;
	}
}


