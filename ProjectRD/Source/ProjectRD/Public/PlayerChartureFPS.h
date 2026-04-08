// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSSystem.h"
#include "PlayerChartureFPS.generated.h"

class UCameraComponent;
class UInputComponent;

UCLASS()
class PROJECTRD_API APlayerChartureFPS : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerChartureFPS();

#pragma region Basic abiltys
	UFUNCTION(BlueprintCallable) void PlayerMove(FVector2D& moveDirection);

	UFUNCTION(BlueprintCallable) void PlayerLookAround(FVector2D& lookAxis);

	UFUNCTION(BlueprintCallable) void PlayerJump();
#pragma endregion

#pragma region Abiltys
	UFUNCTION(BlueprintCallable) void PlayerShoot();

	UFUNCTION(BlueprintCallable) void PlayerReload();
#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region Created Components
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RD|Components") UChildActorComponent* ShootingActor;

	UPROPERTY() AActor* FPSSystemActor; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RD|Components") USceneComponent* shotSpawnPorstion; // basicly a transform

	UPROPERTY(EditAnywhere, Category = "RD|Components") UCameraComponent* camera;
#pragma endregion

#pragma region States
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RD|States") float moveSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "RD|States") float jumpPower;
#pragma endregion

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

};