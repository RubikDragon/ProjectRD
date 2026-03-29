// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FPSSystem.generated.h"

// Interfaces
// https://www.youtube.com/watch?v=MJwyZKR-rKo C++
// https://www.youtube.com/watch?v=tocUOUrGiAk Blueprint

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UFPSSystem : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROJECTRD_API IFPSSystem
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void Shoot();


	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void Reload();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetBulletSpawnPorstion(USceneComponent* SceneComponent);
};
