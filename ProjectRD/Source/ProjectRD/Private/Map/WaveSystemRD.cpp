// Fill out your copyright notice in the Description page of Project Settings.


#include "Map/WaveSystemRD.h"

// Sets default values
AWaveSystemRD::AWaveSystemRD()
{

}

// Called when the game starts or when spawned
void AWaveSystemRD::BeginPlay()
{
	Super::BeginPlay();
	

	// Testing delet after
	StartWaves();
}

void AWaveSystemRD::StartWaves()
{
	currentWave = 0;
	Wave();
	WaveEvent.Broadcast(currentWave);
}

void AWaveSystemRD::StartWave(int32 startOnWave)
{
	currentWave = startOnWave;
	Wave();
	WaveEvent.Broadcast(currentWave);
}

void AWaveSystemRD::Wave()
{
	for (int32 i = 0; i < SpawnPlaces.Num(); i++) 
	{

		TObjectPtr<AActor> spawnLocation = SpawnPlaces[i]; // get spawn place
		TSubclassOf<AActor> spawn = spawns[currentWave].toSpawn[i]; // to spawn

		if (!spawn)
			continue;
		
		GetWorld()->SpawnActor<AActor>(spawn, spawnLocation->GetActorLocation(), spawnLocation->GetActorRotation());
		// listen to when gets destroyed	
		
	}

	currentWave++;
}

//   void AWaveSystemRD::ListionForDead()
// EndOfWave();
// currentWave++;
// Wave();


void AWaveSystemRD::EndOfWave()
{
	EndOfWaveEvent.Broadcast();
}

void AWaveSystemRD::FinishedWave()
{
	//currentWave = 0;
	FinishedWaveEvent.Broadcast();
}

