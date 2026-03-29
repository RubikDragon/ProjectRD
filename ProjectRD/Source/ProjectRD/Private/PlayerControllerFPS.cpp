// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerChartureFPS.h"
#include "PlayerControllerFPS.h"


// use f12 to learn
void APlayerControllerFPS::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	// stores a referends to the FPS class that we shode get from the pawn
	playerCharture = Cast<APlayerChartureFPS>(aPawn);
	checkf(playerCharture, TEXT("APlayerControllerBB derived classes should only posess APlayerControllerBB derived from APlayerControllerBB"));

	// gets value from actor
	enhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	checkf(enhancedInputComponent, TEXT("Unable to get refence to the EnhancedInputCompoent"));

	SetupBindes();
}

void APlayerControllerFPS::OnUnPossess()
{
	enhancedInputComponent->ClearActionBindings();

	Super::OnUnPossess();
}

#pragma region Controll proxiy call
// do reaserthe on FInputActionInstance
void APlayerControllerFPS::SetupBindes()
{
	// Get the local player subsystem
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	checkf(InputSubsystem, TEXT("unable to get refends to UEnhancedInputLocalPlayerSubsystem"));

	checkf(InputMapping, TEXT("InputMappingContext was not specified"));
	InputSubsystem->ClearAllMappings();
	InputSubsystem->AddMappingContext(InputMapping, 0);

	#pragma region Mapping to methods
	if (moveAction)
		enhancedInputComponent->BindAction(moveAction, moveTrigger, this, &APlayerControllerFPS::HandleMovemment);
	if (lookAction)
		enhancedInputComponent->BindAction(lookAction, lookTrigger, this, &APlayerControllerFPS::HandleLookAround);
	if (jumpAction)
		enhancedInputComponent->BindAction(jumpAction, jumpTrigger, this, &APlayerControllerFPS::HandleJump);
	if (shootAction)
		enhancedInputComponent->BindAction(shootAction, shootingTrigger, this, &APlayerControllerFPS::HandleShoot);
	if (reloadAction)
		enhancedInputComponent->BindAction(reloadAction, reloadTrigger, this, &APlayerControllerFPS::HandleReload);
	#pragma endregion
}

void APlayerControllerFPS::HandleMovemment(const FInputActionValue& moveInput)
{
	if (!playerCharture)
		return;

	// set as a value
	movemmentVector = moveInput.Get<FVector2D>();

	playerCharture->PlayerMove(movemmentVector);
	
}

void APlayerControllerFPS::HandleLookAround(const FInputActionValue& lookInput)
{
	if (!playerCharture)
		return;

	lookAroundVector = lookInput.Get<FVector2D>();

	playerCharture->PlayerLookAround(lookAroundVector);
}

void APlayerControllerFPS::HandleJump()
{
	if (!playerCharture)
		return;

	playerCharture->PlayerJump();

}

void APlayerControllerFPS::HandleShoot()
{
	if (!playerCharture)
		return;

	playerCharture->PlayerShoot();
}

void APlayerControllerFPS::HandleReload()
{
	if (!playerCharture)
		return;

	playerCharture->PlayerReload();
}


#pragma endregion


