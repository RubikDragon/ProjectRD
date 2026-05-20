// Fill out your copyright notice in the Description page of Project Settings.

#include "BulletRD.h"

#include "Interface/FPSSystem/ShootingFPSComponent.h"

// Sets default values for this component's properties
UShootingFPSComponent::UShootingFPSComponent()
{
	//PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UShootingFPSComponent::BeginPlay()
{
	Super::BeginPlay();

	currentAmo = maxAmo;
	canShot = true;

	OnAmoSetUp.Broadcast(currentAmo, minAmo, maxAmo);
	OnReserveAmoSetUp.Broadcast(reserveAmo, minResurveAmo, maxResurveAmo);
}

void UShootingFPSComponent::Shoot_Implementation()
{
	// check if we have amo
	if (currentAmo <= 0 || !canShot)
		return;


	if (!bullet) {

		UE_LOG(LogTemp, Error, TEXT("Missing a bullet to shot in %s, on component %s"), *GetOwner()->GetName(), *GetName());
		return;
	}

	if (!shotSpawnPorstion) {
		UE_LOG(LogTemp, Error, TEXT("There was not given a scene component, to %s, on Component %s"), *GetOwner()->GetName(), *GetName());
		return;
	}

	GetWorld()->SpawnActor<AActor>(bullet, shotSpawnPorstion->GetComponentLocation(), shotSpawnPorstion->GetComponentRotation());
	ChangeAmo(-1);

	if (weaponDebug)
		UE_LOG(LogTemp, Display, TEXT("Amo: [%d/%d], Shot Bullet: %s"), currentAmo, maxAmo, *shotSpawnPorstion->GetComponentLocation().ToString());

	canShot = false;
	GetWorld()->GetTimerManager().SetTimer(timeBetvineShotsTH, this, &UShootingFPSComponent::ResetCanShot, timeBetinveShots);
}

void UShootingFPSComponent::Reload_Implementation()
{
	// can shot is set so you can,t reload to skip shot time
	if (reserveAmo <= minAmo || !canReload, !canShot) {
		return;
	}

	OnReload.Broadcast();

	canShot = false;
	canReload = false;
	GetWorld()->GetTimerManager().SetTimer(reloadTimerTH, this, &UShootingFPSComponent::ResetCanReload, reloadCooldown);

	// findes amo diffrents
	reloadAmoDifrents = currentAmo - maxAmo;

	// makes sure we have inufe amo in reserve for full reload
	if (reserveAmo - reloadAmoDifrents >= minResurveAmo) 
	{
		ChangeAmo(+reloadAmoDifrents);
		reserveAmo -= reloadAmoDifrents;
	}
	else
	{
		ChangeAmo(reserveAmo);
		reserveAmo = minAmo;
	}

	OnReserveAmoChange.Broadcast(reserveAmo);
}

void UShootingFPSComponent::SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent)
{
	shotSpawnPorstion = SceneComponent;
}

void UShootingFPSComponent::ChangeAmo(int amoChange)
{
	currentAmo += amoChange;

	// mackes sure we don,t go into a unrealiskick nummber
	if (currentAmo > maxAmo)
		currentAmo = maxAmo;
	if (currentAmo < minAmo)
		currentAmo = minAmo;

	OnAmoChange.Broadcast(currentAmo);
}

void UShootingFPSComponent::ResetCanShot()
{
	canShot = true;
}

void UShootingFPSComponent::ResetCanReload()
{
	canShot = true;
	canReload = true;
}
