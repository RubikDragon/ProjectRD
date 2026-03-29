// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "PlayerChartureFPS.h"
#include "PlayerControllerFPS.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRD_API APlayerControllerFPS : public APlayerController
{
	GENERATED_BODY()


public:
	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

protected:
	// Expose a mapping context as a property in your header file...

#pragma region Input
	// Bindes all the Actions to there caller
	UFUNCTION() virtual void SetupBindes();

	// why is this sort object and not just object
	UPROPERTY(EditAnywhere, Category = "RD|Input") TObjectPtr<UInputMappingContext> InputMapping = nullptr;
	//UPROPERTY(EditAnywhere, Category = "Input") TSoftObjectPtr<UInputMappingContext> InputMapping = nullptr;

		

	// Move
	UPROPERTY(EditAnywhere, Category = "RD|Input") UInputAction* moveAction;
	UPROPERTY(EditAnywhere, Category = "RD|Input") ETriggerEvent moveTrigger = ETriggerEvent::Triggered;
	UFUNCTION() void HandleMovemment(const FInputActionValue& moveInput);

	UPROPERTY(EditAnywhere, Category = "RD|Input") UInputAction* lookAction;
	UPROPERTY(EditAnywhere, Category = "RD|Input") ETriggerEvent lookTrigger = ETriggerEvent::Triggered;
	UFUNCTION() void HandleLookAround(const FInputActionValue& lookInput);

	UPROPERTY(EditAnywhere, Category = "RD|Input") UInputAction* jumpAction;
	UPROPERTY(EditAnywhere, Category = "RD|Input") ETriggerEvent jumpTrigger = ETriggerEvent::Triggered;
	UFUNCTION() void HandleJump();

	UPROPERTY(EditAnywhere, Category = "RD|Input") UInputAction* shootAction;
	UPROPERTY(EditAnywhere, Category = "RD|Input") ETriggerEvent shootingTrigger = ETriggerEvent::Triggered;
	UFUNCTION() void HandleShoot();

	UPROPERTY(EditAnywhere, Category = "RD|Input") UInputAction* reloadAction;
	UPROPERTY(EditAnywhere, Category = "RD|Input") ETriggerEvent reloadTrigger = ETriggerEvent::Triggered;
	UFUNCTION() void HandleReload();
#pragma endregion

#pragma region "private"

	UPROPERTY() APlayerChartureFPS* playerCharture = nullptr;

	/// <summary>
	/// Used to store a refence to the InputComponet cast to an EnhancedInputComponent
	/// </summary>
	UPROPERTY() UEnhancedInputComponent* enhancedInputComponent = nullptr;
#pragma endregion

private:
	UPROPERTY() FVector2D movemmentVector;
	UPROPERTY() FVector2D lookAroundVector;
};
