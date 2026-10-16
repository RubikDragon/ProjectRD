// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaveSystemRD.generated.h"

USTRUCT(BlueprintType) // has to be done in order 
struct FWaveMakeUp
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere) TArray<TSubclassOf<AActor>> toSpawn;

};

UCLASS()
class PROJECTRD_API AWaveSystemRD : public AActor
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWave,
		int32, waveCount);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndWave);

	
public:	
	// Sets default values for this actor's properties
	AWaveSystemRD();

	UFUNCTION(BlueprintCallable) void StartWaves();

	UFUNCTION(BlueprintCallable) void StartWave(int32 startOnWave);

#pragma region Events
	UPROPERTY(BlueprintAssignable, Category = "_RD|Event") FWave WaveEvent;

	UPROPERTY(BlueprintAssignable, Category = "_RD|Event") FEndWave EndOfWaveEvent;

	UPROPERTY(BlueprintAssignable, Category = "_RD|Event") FEndWave FinishedWaveEvent;
#pragma endregion


	UFUNCTION() void FinishedWave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION() void Wave();

	UFUNCTION() void EndOfWave();

	UPROPERTY(EditAnywhere, Category = "_RD") TArray<TObjectPtr<AActor>> SpawnPlaces;

	// what go spawn on what round, the spawn array of actors must mathe the spawn plases index in order to spawn, if desired not to spawn then leave none 
	UPROPERTY(EditAnywhere, Category = "_RD") TArray<FWaveMakeUp> spawns;

	UPROPERTY(EditDefaultsOnly, Category = "_RD") int32 Waves;

	UPROPERTY() int32 currentWave;


};
