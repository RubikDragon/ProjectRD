// Fill out your copyright notice in the Description page of Project Settings.

#include "TelekanatickFPS.h"
#include "BulletRD.h"
#include "Components/SphereComponent.h"
#include "Components/DrawSphereComponent.h"
#include "Amo.h"

// Sets default values for this component's properties
UTelekanatickFPS::UTelekanatickFPS()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	shotSpawnPorstion = CreateDefaultSubobject<USceneComponent>(TEXT("REAL"));

	reloadRadiose = CreateDefaultSubobject<USphereComponent>(TEXT("Reload Radiose"));

}

// Called when the game starts
void UTelekanatickFPS::BeginPlay()
{
	Super::BeginPlay();

	reloadRadiose->SetupAttachment(GetOwner()->GetRootComponent());

	currentAmo = minAmo;	
}

void UTelekanatickFPS::Shoot(USceneComponent* spawnLoaction)
{
	// makes sure we have enyof amo to shoot
	if (currentAmo <= minAmo || !canShot || !spawnLoaction)
		return;

	//spawnPrams.Instigator = this;
	// spawnPrams.OverrideLevel      i know this is inportan. but i don,t know why jet

	// FRotator::ZeroRotator == masikly Quternion Identfyer

	//UE_LOG(LogTemp, Display, TEXT("shot fromName: %s Location: %s"), *spawnLoaction->GetComponentLocation().ToString(), *spawnLoaction->GetName());
	spawnedBullet = GetWorld()->SpawnActor<AActor>(bullet, spawnLoaction->GetComponentLocation(), spawnLoaction->GetComponentRotation());
	ChangeAmo(-1);

	// incase you want to pass a property then at 9:49 it is showen https://www.youtube.com/watch?v=CJkKovxDkc4&list=PLoReGgpfex3z12PPCPK7W76Y2q1KNQtxH&index=8  
	// sets a timer betvine shots
	canShot = false;
	GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &UTelekanatickFPS::ResetCanShot, timeBetinveShots);
}

void UTelekanatickFPS::ResetCanShot()
{
	canShot = true;


}

void UTelekanatickFPS::TelekanetickReload()
{
	UE_LOG(LogTemp, Display, TEXT("Called Reload"));
	reloadRadiose->GetOverlappingActors(inReloadRadios);

	for (AActor* Actor : inReloadRadios)
	{
		IAmo* a = Cast<IAmo>(Actor);

		if (a) {
			
			ChangeAmo(a->PickUpAmo());
			Actor->Destroy();
		}

	}
}

void UTelekanatickFPS::ChangeAmo(int amoChange)
{
	currentAmo += amoChange;

	// mackes sure we don,t go into a unrealiskick nummber
	if (currentAmo > maxAmo)
		currentAmo = maxAmo;
	if (currentAmo < minAmo)
		currentAmo = minAmo;
}

