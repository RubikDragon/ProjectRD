// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSSystem.h"
#include "TelekanatickActorFPS.generated.h"

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmoChange,
//	int32, CurrentAmo);
//
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSetUpAmo,
//	int32, CurrentAmo,
//	int32, minAmo,
//	int32, maxAmo);

class IAmo;
class USphereComponent;

UCLASS()
class PROJECTRD_API ATelekanatickActorFPS : public AActor, public IFPSSystem
{
	GENERATED_BODY()
	
public:	
#pragma region UE5 Trigger
	// Sets default values for this actor's properties
	ATelekanatickActorFPS();
#pragma endregion

	// Inherited via IFPSSystem
	virtual void Shoot_Implementation() override;

	virtual void Reload_Implementation() override;

	virtual void SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent) override;

	UFUNCTION(BlueprintCallable) void SetBulletSpawnPortsion(USphereComponent* sphereComponent);

	UFUNCTION(BlueprintCallable) void ChangeAmo(int amoChange);

	UFUNCTION(BlueprintCallable) void ResetCanShot();

#pragma region Event
	//UPROPERTY(BlueprintAssignable, Category = "Event|Custom") FAmoChange OnAmoChange;

	//UPROPERTY(BlueprintAssignable, Category = "Event|Custom") FSetUpAmo OnAmoSetUp;
#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region States
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "_RD|States") TSubclassOf<class ABulletRD> bullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States") int hitDamage = 10;

	UPROPERTY() USceneComponent* shotSpawnPorstion; // basicly a transform
#pragma endregion

#pragma region Reload
	UPROPERTY() USphereComponent* reloadRadiose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") float reloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") int maxAmo = 20;

	UPROPERTY() int minAmo = 0;

	UPROPERTY() int currentAmo;
#pragma endregion

#pragma region Cooldowns
	UPROPERTY(EditAnywhere, Category = "_RD|Cooldown") float timeBetinveShots = 0.75f;
	UPROPERTY() bool canShot = true;

	UPROPERTY(EditAnywhere, Category = "_RD|Cooldown") float reloadCooldown = 0.75f;
	UPROPERTY() bool canReload = true;

	UPROPERTY() FTimerHandle timerHandle;
#pragma endregion

#pragma region Debug
	UPROPERTY(EditDefaultsOnly, Category = "Debug|RD") bool weaponDebug = false;
#pragma endregion

	//UPROPERTY() TScriptInterface<IAmo>* hitAmo;
	IAmo* hitAmo;

	// bullets
	UPROPERTY() AActor* spawnedBullet;

	UPROPERTY() TArray<AActor*> inReloadRadios;
};
