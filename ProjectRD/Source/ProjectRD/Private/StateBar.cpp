// Fill out your copyright notice in the Description page of Project Settings.


#include "StateBar.h"
#include "Components/Border.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/VerticalBox.h"
#include "Components/Image.h"


void UStateBar::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	UpdateWidget();
	SetUpValues();
}

void UStateBar::SetUpValues()
{
	if (!MainBordor || !EmptyBar || !percentBarFilled || !IconImage || !PresentigeBar)
		return;

	// move to on start up
	MainBordor->SetBrushColor(BarBackgroundColor);
	EmptyBar->SetBrushColor(EmptyColor);
	percentBarFilled->SetBrushColor(FillColor); // has issue
	IconImage->SetBrush(brushIcon);

	PresentigeBar->SetVisibility(isFullSize ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
}

void UStateBar::SetStartBarValues(int32 currentValue, int32 minValue, int32 maxValue)
{
	// prevents clamp error
	if (maxValue == 0)
		KINDA_SMALL_NUMBER;

	UE_LOG(LogTemp, Display, TEXT("Set up values [%d:Min/%d:Max] CurrentValue = %d _____________________________________________"), minValue, maxValue, currentValue);

	UStateBar::valueMin = minValue;
	UStateBar::valueMax = maxValue;

	UpdateCurrentValue(currentValue);
}

void UStateBar::UpdateCurrentValue(int32 currentValue)
{
	UpdateCurrentValueFloat((float)currentValue);
}

void UStateBar::UpdateCurrentValueFloat(float currentValue)
{
	barPresentige = FMath::Clamp(currentValue / valueMax, 0.0f, 1.0f);
	UStateBar::valueCurrent = currentValue;

	UpdateWidget();
}

void UStateBar::UpdateWidget() {

	if (!percentBarFilled || !EmptyBar)
		return;

	filledSize = FSlateChildSize(ESlateSizeRule::Fill);
	filledSize.Value = barPresentige;

	emptySize = FSlateChildSize(ESlateSizeRule::Fill);
	emptySize.Value = 1 - barPresentige;

	if (UVerticalBoxSlot* filledSlot = Cast<UVerticalBoxSlot>(percentBarFilled->Slot))
	{
		filledSlot->SetSize(filledSize);
	}

	if (UVerticalBoxSlot* emptySlot = Cast<UVerticalBoxSlot>(EmptyBar->Slot))
	{
		emptySlot->SetSize(emptySize);
	}
}

#if WITH_EDITOR
void UStateBar::OnDesignerChanged(const FDesignerChangedEventArgs& EventArgs)
{
	Super::OnDesignerChanged(EventArgs);

	SetUpValues();
	UpdateWidget();
}

void UStateBar::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FString PropertyName = ((PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None).ToString();

	if (PropertyName == TEXT("barPresentige") || PropertyName == TEXT("CurrentValue")) {

		//SetUpValues();
		UpdateWidget();
	}
}
#endif

