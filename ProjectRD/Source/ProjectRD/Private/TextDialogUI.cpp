// Fill out your copyright notice in the Description page of Project Settings.


#include "TextDialogUI.h"
#include "Components/TextBlock.h"
#include "Components/Border.h"

void UTextDialogUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	SetUpComponents();
}

void UTextDialogUI::SetUpComponents()
{
	if (!MainBorder || !dialogText)
		return;

	MainBorder->SetBrushColor(borderColor);
	dialogText->SetColorAndOpacity(textColor);
}

void UTextDialogUI::StartDialog()
{
	if (showDebug)
		UE_LOG(LogTemp, Display, TEXT("Dialog Begain"));

	runningDialog = true;
	MainBorder->SetVisibility(ESlateVisibility::Visible);

	DialogLine(currentDilogIndex);

	HowToProssed();
}

void UTextDialogUI::AdvanceDialog()
{
	//timerHandle -> stop timer
	currentDilogIndex++;
	currentDilogIndex = FMath::Clamp(currentDilogIndex, 0, dialogLines.Num());

	if (currentDilogIndex >= dialogLines.Num() || currentDilogIndex < 0) {
		EndDialog();
		return;
	}
		

	DialogLine(currentDilogIndex);

	HowToProssed();
}

void UTextDialogUI::PreviesDialogLine()
{
	currentDilogIndex = FMath::Clamp(currentDilogIndex--, 0, dialogLines.Num());

	if (currentDilogIndex > dialogLines.Num() || currentDilogIndex < 0)
		return;

	DialogLine(currentDilogIndex);
}

void UTextDialogUI::HowToProssed()
{
	if (currentDilogIndex == dialogLines.Num()) {

		switch (howToRunDialog)
		{
		case RunDialog::OnlyOnAutoMatick:
			GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &UTextDialogUI::EndDialog, timeBetvineLines);
			break;
		case RunDialog::OnAdvanceAndAutoMatick:
			GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &UTextDialogUI::EndDialog, timeBetvineLines);
			break;
		default:
			break;
		}

		return;
	}

	switch (howToRunDialog)
	{
		case RunDialog::OnlyOnAutoMatick:
			GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &UTextDialogUI::AdvanceDialog, timeBetvineLines);
			break;
		case RunDialog::OnAdvanceAndAutoMatick:
			GetWorld()->GetTimerManager().SetTimer(timerHandle, this, &UTextDialogUI::AdvanceDialog, timeBetvineLines);

			break;
		default:
			break;
	}
}

void UTextDialogUI::EndDialog()
{
	if (showDebug)
		UE_LOG(LogTemp, Display, TEXT("Dialog Ended"));

	runningDialog = false;
	MainBorder->SetVisibility(ESlateVisibility::Collapsed);
}

void UTextDialogUI::GoToDialogLineIndex(int32 desiredIndex)
{
	DialogLine(desiredIndex);
}

void UTextDialogUI::DialogLine(int32 lineIndex)
{
	if (lineIndex >= dialogLines.Num() || lineIndex < 0)
		return;

	if (fireEventOnLineIndex.Contains(lineIndex))
		OnDialogEvent.Broadcast(lineIndex);
	
	if (showDebug)
		UE_LOG(LogTemp, Display, TEXT("showing index: %d"), lineIndex);

	currentStringLine = FText::FromString(dialogLines[lineIndex]);
	dialogText->SetText(currentStringLine);
}

#if WITH_EDITOR
void UTextDialogUI::OnDesignerChanged(const FDesignerChangedEventArgs& EventArgs)
{
	Super::OnDesignerChanged(EventArgs);

	SetUpComponents();
}

void UTextDialogUI::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	SetUpComponents();
}
#endif