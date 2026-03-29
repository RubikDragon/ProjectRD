// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Amo.h"
#include "TelekanatickFPS.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTRD_API UTelekanatickFPS : public UActorComponent
{
	GENERATED_BODY()

public:	

#pragma region UE5 Trigger
	// Sets default values for this component's properties
	UTelekanatickFPS();
#pragma endregion

	UFUNCTION(BlueprintCallable) void Shoot(USceneComponent* spawnLoaction);

	UFUNCTION(BlueprintCallable) void TelekanetickReload();

	UFUNCTION(BlueprintCallable) void ChangeAmo(int amoChange);

	UFUNCTION() void ResetCanShot();
protected:

#pragma region UE5 Trigger
	// Called when the game starts
	virtual void BeginPlay() override;
#pragma endregion

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "_RD|Amo") TSubclassOf<class ABulletRD> bullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") int hitDamage = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") int maxAmo = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") float reloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|FPS") USceneComponent* shotSpawnPorstion; // basicly a transform

	UPROPERTY(EditAnywhere, Category = "_RD|FPS") class USphereComponent* reloadRadiose;


	UPROPERTY(EditAnywhere, Category = "_RD|Cooldowns") float timeBetinveShots = 0.75f;
	UPROPERTY() bool canShot = true;

	UPROPERTY(EditAnywhere, Category = "_RD|Cooldown") float reloadCooldown = 0.75f;
	UPROPERTY() bool canReload = true;

	// bullets
	UPROPERTY() AActor* spawnedBullet;

	UPROPERTY() int minAmo = 0;

	UPROPERTY() int currentAmo;

	UPROPERTY() FTimerHandle timerHandle;
	
	UPROPERTY() TArray<AActor*> inReloadRadios;
};
