// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Brushes/SlateColorBrush.h"
#include "StateBar.generated.h"

class UBorder;
class UVerticalBox;
class UImage;

/**
 * 
 */
UCLASS()
class PROJECTRD_API UStateBar : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable) void SetStartBarValues(int32 currentValue, int32 minValue, int32 maxValue);

	UFUNCTION(BlueprintCallable) void UpdateCurrentValue(int32 currentValue);

	UFUNCTION(BlueprintCallable) void UpdateCurrentValueFloat(float currentValue);

#if WITH_EDITOR // allows os to test in editor
	virtual void OnDesignerChanged(const FDesignerChangedEventArgs& EventArgs) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	virtual void NativeOnInitialized() override;

	UFUNCTION(BlueprintCallable) void SetUpValues();

#pragma region UI elements
	// don,t like this method of dowing it. but i don,t right now know a difrent way
	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UBorder> MainBordor = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UImage> IconImage = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UVerticalBox> PresentigeBar = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UBorder> EmptyBar = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "_RD|Components", meta = (BindWidget)) TObjectPtr<UBorder> percentBarFilled = nullptr; // FillBar
#pragma endregion

private:

#pragma region Color
	UPROPERTY(EditAnywhere, Category = "_RD|StateBar") FSlateBrush brushIcon;

	UPROPERTY(EditAnywhere, Category = "_RD|StateBar") FLinearColor BarBackgroundColor;
	UPROPERTY(EditAnywhere, Category = "_RD|StateBar") FLinearColor EmptyColor;
	UPROPERTY(EditAnywhere, Category = "_RD|StateBar") FLinearColor FillColor;

	UPROPERTY(EditAnywhere, Category = "_RD|StateBar") bool isFullSize = true;
#pragma endregion

	UPROPERTY(EditAnywhere, Category = "_RD|StateBar", meta = (ClampMin = 0, UIMin = 0, ClampMax = 1, UIMax = 1)) float barPresentige;
	UPROPERTY(EditAnywhere, Category = "_RD|StateBar", meta = (ClampMin = 0, UIMin = 0)) float valueCurrent = 100.f;

	UPROPERTY() int32 valueMax = 0;
	UPROPERTY() int32 valueMin = 0;

#pragma region Update wight
	UPROPERTY() FSlateChildSize filledSize;
	UPROPERTY() FSlateChildSize emptySize;
#pragma endregion

	void UpdateWidget();
	
};
