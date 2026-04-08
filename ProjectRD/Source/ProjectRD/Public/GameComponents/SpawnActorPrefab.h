// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnActorPrefab.generated.h"

UCLASS()
class PROJECTRD_API ASpawnActorPrefab : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnActorPrefab();
	
	UFUNCTION(BlueprintCallable, Category = "RD|Function") void SpawnActor();
	UFUNCTION(BlueprintCallable, Category = "RD|Function") void SpawnPrefabActor(TSubclassOf<AActor> prefab);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Values") TObjectPtr<USceneComponent> spawnPostion; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Values") TSubclassOf<AActor> actorToSpawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Values") bool spawnOnBegainPlay;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
