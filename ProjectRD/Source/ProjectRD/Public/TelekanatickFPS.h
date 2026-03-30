// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPSSystem.h"
#include "TelekanatickFPS.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmoChange,
//	int32, CurrentAmo);
//
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSetUpAmo,
//	int32, CurrentAmo,
//	int32, minAmo,
//	int32, maxAmo);

class IAmo;
class USphereComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTRD_API UTelekanatickFPS : public UActorComponent, public IFPSSystem
{
	GENERATED_BODY()

public:	

#pragma region UE5 Trigger
	// Sets default values for this component's properties
	UTelekanatickFPS();
#pragma endregion
	// Inherited via IFPSSystem
	virtual void Shoot_Implementation() override;

	virtual void Reload_Implementation() override;

	virtual void SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent) override;

	UFUNCTION(BlueprintCallable) void TelekanetickReload();

	UFUNCTION(BlueprintCallable) void ChangeAmo(int amoChange);

	UFUNCTION() void ResetCanShot();
protected:

#pragma region UE5 Trigger
	// Called when the game starts
	virtual void BeginPlay() override;
#pragma endregion

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "_RD|Amo") TSubclassOf<class ABulletRD> bullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") int hitDamage = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") int maxAmo = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") float reloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|FPS") USceneComponent* shotSpawnPorstion; // basicly a transform

	UPROPERTY(EditAnywhere, Category = "_RD|FPS") USphereComponent* reloadRadiose;


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
