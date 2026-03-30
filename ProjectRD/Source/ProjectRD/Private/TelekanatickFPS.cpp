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
}

// Called when the game starts
void UTelekanatickFPS::BeginPlay()
{
	Super::BeginPlay();

	reloadRadiose->SetupAttachment(GetOwner()->GetRootComponent());

	currentAmo = minAmo;
}

void UTelekanatickFPS::Shoot_Implementation()
{
	UE_LOG(LogTemp, Display, TEXT("Was callede all fine"))
}

void UTelekanatickFPS::Reload_Implementation()
{

}

void UTelekanatickFPS::SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent)
{

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

