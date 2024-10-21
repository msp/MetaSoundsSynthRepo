// Fill out your copyright notice in the Description page of Project Settings.


#include "PerformanceWindowManager.h"
#include "Rendering/SlateRenderer.h"
#include "Widgets/Input/SButton.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Layout/SScaleBox.h"
#include <Blueprint/UserWidget.h>


void UPerformanceWindowManager::OpenPerformanceWindow(const UObject* WorldContextObject)
{
	FString WidgetPath(TEXT("/MetaSynthOne/MetaSynthOne/UI/BPW_MSO_UI.BPW_MSO_UI_C"));

	auto* WidgetClass = LoadClass<UUserWidget>(nullptr, *WidgetPath, nullptr, LOAD_None, nullptr);
	auto* Widget = CreateWidget<UUserWidget>(WorldContextObject->GetWorld(), WidgetClass);
	
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
		SNew(SScaleBox)
		.Stretch(EStretch::Fill)
		[
			Widget->TakeWidget()
		]
		

	);
}
