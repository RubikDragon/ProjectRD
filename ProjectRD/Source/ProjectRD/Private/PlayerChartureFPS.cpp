// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChartureFPS.h"
#include "Camera/CameraComponent.h"
#include "FPSSystem.h"

// Sets default values
APlayerChartureFPS::APlayerChartureFPS()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// Create SceneComponent
	shotSpawnPorstion = CreateDefaultSubobject<USceneComponent>(TEXT("BulletSpawnPostion"));
	shotSpawnPorstion->SetupAttachment(RootComponent);

	// camera
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	camera->SetupAttachment(RootComponent);
	camera->bUsePawnControlRotation = true;

	// FPS system
	ShootingActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("SystemFPS"));
}

// Called when the game starts or when spawned
void APlayerChartureFPS::BeginPlay()
{
	Super::BeginPlay();

	FPSSystemActor = ShootingActor->GetChildActor();

	if (FPSSystemActor && FPSSystemActor->Implements<UFPSSystem>()) {
		IFPSSystem::Execute_SetBulletSpawnPorstion(FPSSystemActor, shotSpawnPorstion);
	}
}

// Called every frame
void APlayerChartureFPS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerChartureFPS::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerChartureFPS::PlayerMove(FVector2D& moveDirection)
{
	AddMovementInput(GetActorForwardVector(), moveDirection.Y);
	AddMovementInput(GetActorRightVector(), moveDirection.X);

}

void APlayerChartureFPS::PlayerLookAround(FVector2D& lookAxis)
{
	if (!camera)
		return;

	AddControllerYawInput(lookAxis.X);
	AddControllerPitchInput(lookAxis.Y);
}

void APlayerChartureFPS::PlayerJump()
{
	Jump(); // figure out how to set jump hight
}

void APlayerChartureFPS::PlayerShoot()
{
	if (!FPSSystemActor || !FPSSystemActor->Implements<UFPSSystem>())
		return;

	IFPSSystem::Execute_Shoot(FPSSystemActor);
}

void APlayerChartureFPS::PlayerReload()
{
	if (!FPSSystemActor || !FPSSystemActor->Implements<UFPSSystem>())
		return;

	IFPSSystem::Execute_Reload(FPSSystemActor);
}

