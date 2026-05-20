// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectBar.generated.h"

class UUniformGridPanel;
class UBorder;


USTRUCT(BlueprintType) struct FObjectColor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD") TSubclassOf<AActor> onObjectActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD") FColor objectColor;


};

/**
 * 
 */
UCLASS()
class PROJECTRD_API UObjectBar : public UUserWidget
{
	GENERATED_BODY()

public:

#pragma region Method
	virtual void OnDesignerChanged(const FDesignerChangedEventArgs& EventArgs) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#pragma endregion

	UFUNCTION(BlueprintCallable, Category = "_RD|Function") void SetMetter(TArray<TSubclassOf<AActor>> actorPtr);


	UFUNCTION(BlueprintCallable, Category = "_RD|Function") void ChangeMetter(TSubclassOf<AActor> actorPrefab, bool wasAdded);

protected:
	virtual void NativeOnInitialized() override;

	void UpdateWigdet();

	virtual void TurnOffLine(TObjectPtr<UWidget> line);

	/// <summary>
	/// Handles enything apprense of the line to endicate what object it is representing
	/// </summary>
	/// <param name="lineWidget">Line</param>
	/// <param name="obejectPrefab">Prefab we are representing</param>
	virtual void handleLineIdentety(TObjectPtr<UBorder> lineWidget, TSubclassOf<AActor> obejectPrefab);

	//TObjectPtr<UWidget> GetNextWidget();

	//TObjectPtr<UWidget> GetPrevieosWidget();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Line") TArray<FObjectColor> lineSettings;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RD|Line") FVector2D lineSizeVector = FVector2D(5,5);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RD|Line") bool lineFillMissingSpace = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "_RD|Line") bool rewirseOrdor = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Apperince") FColor mainBordorColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Apperince|Line Padding") float up;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Apperince|Line Padding") float down;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Apperince|Line Padding") float left;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "_RD|Apperince|Line Padding") float right;

	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UBorder> MainBordor;

	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr< UUniformGridPanel> ObjectGrid = nullptr;

	UPROPERTY() int32 activeCount;

	// if/ when posseblue cut this down to UUSerWigdet or samaler
	UPROPERTY() TArray<TObjectPtr<UBorder>> objectLines; 

	UPROPERTY() int32 maxLinesIndex;

#pragma region Temporay storage

	UPROPERTY() int32 lineIndex;

	UPROPERTY() UBorder* isUserWidget;
	UPROPERTY() TArray<UWidget*> inatalGetLines;

	UPROPERTY() int32 loopTally;
#pragma endregion
};

