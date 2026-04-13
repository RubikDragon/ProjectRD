// Fill out your copyright notice in the Description page of Project Settings.

#include "TelekanatickFPS.h"
#include "BulletRD.h"
#include "Components/SphereComponent.h"
#include "Components/DrawSphereComponent.h"
#include "Amo.h"

// Called when the game starts
void UTelekanatickFPS::BeginPlay()
{
	Super::BeginPlay();

	currentAmo = maxAmo;
	canShot = true;

	OnAmoSetUp.Broadcast(currentAmo, minAmo, maxAmo);
} 

void UTelekanatickFPS::Shoot_Implementation()
{
	if (!canShot)
		return;

	if (!bullet) {
		UE_LOG(LogTemp, Error, TEXT("%s on %s is missing A bullet to shot. this must be set for shotting to work"), *GetName(), *GetOwner()->GetName());
		return;
	}
	if (!shotSpawnPorstion) {

		UE_LOG(LogTemp, Error, TEXT("%s on %s is missing a scene porstion, to spawn bullets at"), *GetName(), *GetOwner()->GetName());
		return;
	}

	// makes sure we have enyof amo to shoot
	if (currentAmo <= minAmo)
		return;

	spawnedBullet = GetWorld()->SpawnActor<AActor>(bullet, shotSpawnPorstion->GetComponentLocation(), shotSpawnPorstion->GetComponentRotation());
	ChangeAmo(-1);


	if (weaponDebug)
		UE_LOG(LogTemp, Display, TEXT("___________________________\n Amo: [%d/%d],\n Shot Bullet: %s \n___________________________"), currentAmo, maxAmo, *shotSpawnPorstion->GetComponentLocation().ToString());

	// sets a timer betvine shots
	canShot = false;
	GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &UTelekanatickFPS::ResetCanShot, timeBetinveShots);
}

void UTelekanatickFPS::Reload_Implementation()
{
	if (!reloadRadiose || currentAmo >= maxAmo)
		return;

	reloadRadiose->GetOverlappingActors(inReloadRadios);

	// if amo full don,t consume
	for (AActor* Actor : inReloadRadios)
	{

		if (currentAmo >= maxAmo)
			return;

		hitAmo = Cast<IAmo>(Actor);

		if (hitAmo) {
			ChangeAmo(hitAmo->PickUpAmo());
			Actor->Destroy();
		}
	}
}

void UTelekanatickFPS::SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent)
{
	shotSpawnPorstion = SceneComponent;
}

void UTelekanatickFPS::SetBulletSpawnPortsion(USphereComponent* sphereComponent)
{
	reloadRadiose = sphereComponent;
}

void UTelekanatickFPS::ChangeAmo(int amoChange)
{
	currentAmo += amoChange;

	// mackes sure we don,t go into a unrealiskick nummber
	if (currentAmo > maxAmo)
		currentAmo = maxAmo;
	if (currentAmo < minAmo)
		currentAmo = minAmo;

	OnAmoChange.Broadcast(currentAmo);
}

void UTelekanatickFPS::ResetCanShot()
{
	canShot = true;
}
