// Fill out your copyright notice in the Description page of Project Settings.


#include "PerformanceWindowManager.h"
#include "Rendering/SlateRenderer.h"
#include "Widgets/Input/SButton.h"
#include "Framework/Application/SlateApplication.h"


void UPerformanceWindowManager::OpenPerformanceWindow()
{
	SAssignNew(PerformanceWindow, SWindow)
		.AutoCenter(EAutoCenter::None)
		.Title(FText::FromString(TEXT("Control Window")))
		.IsInitiallyMaximized(false)
		.ScreenPosition(FVector2D(0, 0))
		.ClientSize(FVector2D(500, 800))
		.CreateTitleBar(true)
		.SizingRule(ESizingRule::UserSized)
		.SupportsMaximize(false)
		.SupportsMinimize(true)
		.HasCloseButton(true);


	FSlateApplication& SlateApp = FSlateApplication::Get();

	SlateApp.AddWindow(PerformanceWindow.ToSharedRef(), true);

	PerformanceWindow->SetContent(
		SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SButton)
				.Text(FText::FromString(TEXT("Close Window")))
				.OnClicked_Lambda([this]() -> FReply {
				PerformanceWindow->RequestDestroyWindow();
				return FReply::Handled();
					})
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SButton)
				.Text(FText::FromString(TEXT("Test Button")))
				.OnClicked_Lambda([]() -> FReply {
				UE_LOG(LogTemp, Warning, TEXT("Button Clicked"));
				return FReply::Handled();
					})
		]
	);
}
