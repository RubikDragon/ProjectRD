// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealtSystem.generated.h"


// errors here arent real. Unreal does not understand
#pragma region Event Delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChange,
	int32, CurrentHealth);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeadth);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealtStartUp,
	int32, CurrentHP,
	int32, minHP,
	int32, maxHP);
#pragma endregion


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTRD_API UHealtSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealtSystem();

	UFUNCTION(BlueprintCallable) void ChangeHealt(int32 changeBy);

	UFUNCTION(BlueprintCallable) void ResetHealt();

	UFUNCTION(BlueprintCallable) virtual void Deadth();

#pragma region Event
	UPROPERTY(BlueprintAssignable, Category = "Event|RD") FOnHealthChange OnHealthChange;

	UPROPERTY(BlueprintAssignable, Category = "Event|RD") FOnDeadth OnDeath;

	UPROPERTY(BlueprintAssignable, Category = "Event|RD") FOnHealtStartUp OnHealthStartUp;
#pragma endregion

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION() void TakeDamage(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigateBy, AActor* damageCauser);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Healt") int32 maxHealth = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Healt") int32 minHealth = 0;
	UPROPERTY(EditDefaultsOnly, Category = "_RD|Healt") int32 startingHealth = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Debug|RD") bool debugTakeDamage = false;

	UPROPERTY() int32 currentHealth;

	UPROPERTY() bool playerIsDead;
};
