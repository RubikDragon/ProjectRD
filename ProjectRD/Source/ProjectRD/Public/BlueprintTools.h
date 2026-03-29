// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintTools.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRD_API UBlueprintTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ShortToolTip = "==Str"), Category = "BlueprintTools|Epual") static bool StringEqual(FString a, FString b);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ShortToolTip = "!NULL"), Category = "BlueprintTools|Epual") static bool IsNotNull(UObject* cheking);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ShortToolTip = ""), Category = "BlueprintTools|Epual") static bool GetChildActorClass(AActor* actor ,TSubclassOf<AActor> chekingFor);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ShortToolTip = "==Tag"), Category = "BlueprintTools|Epual") static bool ContainsTag(AActor* actor, FString tag, bool debug);
	
};
