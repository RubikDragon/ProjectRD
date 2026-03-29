// Fill out your copyright notice in the Description page of Project Settings.


#include "HealtSystem.h"

// Sets default values for this component's properties
UHealtSystem::UHealtSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UHealtSystem::BeginPlay()
{
	Super::BeginPlay();

	// takes ower handling damage the actor takes
	//GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealtSystem::TakeDamage);

	ResetHealt();
	OnHealthStartUp.Broadcast(currentHealth, minHealth, maxHealth);
}

void UHealtSystem::TakeDamage(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigateBy, AActor* damageCauser)
{
	ChangeHealt(damage);
}

void UHealtSystem::ChangeHealt(int32 changeBy)
{
	if (changeBy == 0)
		return;

	currentHealth += changeBy;

	// we need clamp min healt. cose if not then we would never meet min healt
	currentHealth = FMath::Clamp(currentHealth, minHealth, maxHealth);
	OnHealthChange.Broadcast(currentHealth);

	if (currentHealth == minHealth) {

		Deadth();
	}

	if (debugTakeDamage)
		UE_LOG(LogTemp, Display, TEXT("player lost healt %d, healt [%d|%d]"), changeBy, currentHealth, maxHealth);
}

void UHealtSystem::Deadth()
{
	if (debugTakeDamage)
		UE_LOG(LogTemp, Display, TEXT("Player dead"));

	playerIsDead = true;
	OnDeath.Broadcast();

	GetOwner()->Destroy();
}

void UHealtSystem::ResetHealt()
{
	currentHealth = maxHealth;
	playerIsDead = false;

}





