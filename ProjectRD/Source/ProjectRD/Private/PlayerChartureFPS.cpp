// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChartureFPS.h"
#include "Camera/CameraComponent.h"
#include "FPSSystem.h"

#include "BlueprintCompilerExtension.h"
#include "KismetCompiler.h"

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

	//  trying to make dynamic CreateDefaultSubobject https://forums.unrealengine.com/t/tsubclassof-variable-used-in-createdefaultsubobject/784583/4
	// https://forums.unrealengine.com/t/get-type-of-tsubclassof-object/1241027/2


}

// Called when the game starts or when spawned
void APlayerChartureFPS::BeginPlay()
{
	Super::BeginPlay();

	for (UActorComponent* actComponent : GetComponents())
	{
		if (actComponent->Implements<UFPSSystem>()) {

			fpsActorComponent = actComponent;
		}
	}

	if (fpsActorComponent && fpsActorComponent->Implements<UFPSSystem>()) {
		IFPSSystem::Execute_SetBulletSpawnPorstion(fpsActorComponent, shotSpawnPorstion);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s is missing a ActorComponent with IFPSSystem interface, please add one"), *GetName());
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
	if (!fpsActorComponent || !fpsActorComponent->Implements<UFPSSystem>())
		return;

	IFPSSystem::Execute_Shoot(fpsActorComponent);
}

void APlayerChartureFPS::PlayerReload()
{
	if (!fpsActorComponent || !fpsActorComponent->Implements<UFPSSystem>())
		return;

	IFPSSystem::Execute_Reload(fpsActorComponent);
}

