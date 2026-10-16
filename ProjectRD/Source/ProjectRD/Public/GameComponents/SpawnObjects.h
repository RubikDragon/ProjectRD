// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnObjects.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTRD_API USpawnObjects : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpawnObjects();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION() void SpawnObjects(int32 spawnAmount);
	UFUNCTION() void ChalkulateChance();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") TMap<TSubclassOf<AActor>, float> Spawn; // spawn object + chance it spawns
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") bool activateOnBegine;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 spawnAmountMin;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 spawnAmountMax;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 distance; // the distance a object my spawn away from the spawner actor
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "_RD") int32 spawnHigth; // the higth that a object bay spawn (this is done before raycast)

	// calkulating values
	UPROPERTY() uint32 maxChance;

#pragma region Temporary values
	// Spawn info
	UPROPERTY() int32 randomNummber;

	// Spawn actor
	UPROPERTY() int32 randomX;
	UPROPERTY() int32 randomY;
	UPROPERTY() int32 randomZ;

	UPROPERTY() AActor* spawnedActor;

	// ray
	UPROPERTY() FHitResult hit;
#pragma endregion
};
