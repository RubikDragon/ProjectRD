// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FPSSystem.h"

#include "TelecanetickShotingFPS.generated.h"

class USphereComponent;
class ISpecialAmo;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTRD_API UTelecanetickShotingFPS : public UActorComponent, public IFPSSystem
{
	GENERATED_BODY()

#pragma region Event delegate
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAmoChange,
		TSubclassOf<AActor>, CurrentAmoAmount,
		bool, wasAdded
	);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInform,
		const TArray<TSubclassOf<AActor>>&, StartingAmo,
		int32, minAmo,
		int32, maxAmo);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBulletsUpdate,
		TArray<TSubclassOf<AActor>>, CurrentAmoAmount);
#pragma endregion

public:	
	// Sets default values for this component's properties
	UTelecanetickShotingFPS();

#pragma region FPSsystem functions
	UFUNCTION(BlueprintCallable, Category = "_RD|InterfaceFunction|FPSSystem") virtual void Shoot_Implementation() override;

	UFUNCTION(BlueprintCallable, Category = "_RD|InterfaceFunction|FPSSystem") virtual void Reload_Implementation() override;

	UFUNCTION(BlueprintCallable, Category = "_RD|InterfaceFunction|FPSSystem") virtual void SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent) override;
#pragma endregion

	UFUNCTION(BlueprintCallable, Category = "_RD|Function") void SetReloadSphereRadioes(USphereComponent* reloadSphere);

#pragma region Events
	/// <summary>
	/// is callede when a TSubclassOf<AActor> enters or leaves. the amo array. if bool is true it means it was added. if false means it was r
	/// </summary>
	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FAmoChange OnAmoChanged;

	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FInform OnSetUp;

	// don,t know if i shode use this. but it can work as a sort of debug.
	UPROPERTY(BlueprintAssignable, Category = "Event|_RD") FBulletsUpdate OnUpddateOfInterArray;
#pragma endregion




protected:
	// Called when the game starts
	virtual void BeginPlay() override;

#pragma region MyRegion


	UPROPERTY() TObjectPtr<USceneComponent> shotSpawnPorstion;
#pragma endregion


#pragma region Amo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo") TArray<TSubclassOf<AActor>> StartingAmo;
	UPROPERTY() TArray<TSubclassOf<AActor>> amo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo|MinMax") int32 maxAmo = 20;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Amo|MinMax") int32 minAmo = 0;

	UPROPERTY() TObjectPtr<USphereComponent> reloadRadios;
#pragma endregion

#pragma region Storage values		
	UPROPERTY() TSubclassOf<AActor> shootBullet;
	//UPROPERTY() AActor* spawnedBullet;

	ISpecialAmo* isAmo;
	UPROPERTY() TArray<AActor*> actorsInRadios;
	UPROPERTY() AActor* bulletAmoActor;
	UPROPERTY() TSubclassOf<AActor> addBulletContainer;
#pragma endregion

		
};
