// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnObjectArraer.generated.h"

UCLASS()
class PROJECTRD_API ASpawnObjectArraer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnObjectArraer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION() void SpawnObjects(int32 spawnAmount);
	UFUNCTION() void ChalkulateChance();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") TMap<TSubclassOf<AActor>, float> Spawn; // spawn object + chance it spawns
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") bool activateOnBegine;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 distance; // the distance a object my spawn away from the spawner actor
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 spawnHigth; // the higth that a object bay spawn (this is done before raycast)

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 spawnAmountMin;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 spawnAmountMax;

	// calkulating values
	UPROPERTY() uint32 maxChance;

};
