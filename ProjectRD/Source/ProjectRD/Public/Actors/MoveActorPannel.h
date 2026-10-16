// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoveActorPannel.generated.h"

class UBoxComponent;

UCLASS()
class PROJECTRD_API AMoveActorPannel : public AActor
{
	//UENUM(BlueprintType) enum class EColliderShape : uint8 {
	//	box = 0 UMETA(DisplayName = "Box"),
	//	Sphere = 1 UMETA(DisplayName = "Sphere"),
	//};


	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveActorPannel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UPROPERTY(EditDefaultsOnly, Category = "_RD") EColliderShape* collideShape;

	UFUNCTION() void BegainOverlap(UPrimitiveComponent* overlapComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UPROPERTY(EditAnywhere, Category = "_RD") TObjectPtr<UBoxComponent> boxCollider;
	UPROPERTY(EditAnywhere, Category = "_RD|Force") FVector moveDirection = FVector(0, 0, 1);
	UPROPERTY(EditAnywhere, Category = "_RD|Force") float moveForce;


#pragma region Temp Values
	TObjectPtr<ACharacter> acterCharture;

#pragma endregion

};
