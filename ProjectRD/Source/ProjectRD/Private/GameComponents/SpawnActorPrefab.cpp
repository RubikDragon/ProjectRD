// Fill out your copyright notice in the Description page of Project Settings.


#include "GameComponents/SpawnActorPrefab.h"

// Sets default values
ASpawnActorPrefab::ASpawnActorPrefab()
{
	spawnPostion = CreateDefaultSubobject<USceneComponent>(TEXT("Prefab spawn postion"));

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASpawnActorPrefab::BeginPlay()
{
	Super::BeginPlay();
	
	if (spawnOnBegainPlay)
		SpawnActor();
}

void ASpawnActorPrefab::SpawnActor()
{
	SpawnPrefabActor(actorToSpawn);
}

void ASpawnActorPrefab::SpawnPrefabActor(TSubclassOf<AActor> prefab)
{
	GetWorld()->SpawnActor<AActor>(prefab, spawnPostion->GetRelativeLocation(), spawnPostion->GetRelativeRotation() );
}
