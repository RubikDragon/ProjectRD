// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPSSystem.h"

#include "ShootingFPSComponent.generated.h"

class ABulletRD;

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeValuesDelegate,
//	int32, CurrentAmo);
//
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSetValuesDelegate,
//	int32, CurrentAmo,
//	int32, minAmo,
//	int32, maxAmo); 

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTRD_API UShootingFPSComponent : public UActorComponent, public IFPSSystem
{
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmoChange,
		int32, CurrentAmo);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSetUpAmo,
		int32, CurrentAmo,
		int32, minAmo,
		int32, maxAmo);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNotefy);


	GENERATED_BODY()

public:	

	// Inherited via IFPSSystem
	virtual void Shoot_Implementation() override;

	virtual void Reload_Implementation() override;

	virtual void SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent) override;

	UFUNCTION(BlueprintCallable) void ChangeAmo(int amoChange);

	UFUNCTION(BlueprintCallable) void ResetCanShot();

	UFUNCTION(BlueprintCallable) void ResetCanReload();

#pragma region Event
	// Amo
	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FSetUpAmo OnAmoSetUp;
	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FAmoChange OnAmoChange;

	// Reserve Amo
	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FNotefy OnReload;
	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FSetUpAmo OnReserveAmoSetUp;
	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FAmoChange OnReserveAmoChange;
#pragma endregion

protected:

	// Sets default values for this component's properties
	UShootingFPSComponent();

	// Called when the game starts
	virtual void BeginPlay() override;	

#pragma region States
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "_RD|States") TSubclassOf<ABulletRD> bullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|States") int hitDamage = 10;

	UPROPERTY() TObjectPtr<USceneComponent> shotSpawnPorstion; // basicly a transform
#pragma endregion

#pragma region Reload


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo|MinMax") int maxAmo = 20;
	UPROPERTY() int minAmo = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo|MinMax") int maxResurveAmo = 100;
	UPROPERTY() int minResurveAmo = 0;

	UPROPERTY() int reloadAmoDifrents;

	UPROPERTY() int reserveAmo;
	UPROPERTY() int currentAmo;


#pragma endregion

#pragma region Timer
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Timers") float reloadTime;

	UPROPERTY(EditAnywhere, Category = "_RD|Timers") float timeBetinveShots = 0.75f;
	UPROPERTY() bool canShot = true;

	UPROPERTY(EditAnywhere, Category = "_RD|Timers") float reloadCooldown = 0.75f;
	UPROPERTY() bool canReload = true;

	UPROPERTY() FTimerHandle timeBetvineShotsTH;

	UPROPERTY() FTimerHandle reloadTimerTH;
#pragma endregion

#pragma region Debug
	UPROPERTY(EditDefaultsOnly, Category = "Debug|RD") bool weaponDebug = false;
#pragma endregion
};
