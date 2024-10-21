// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "Widgets/SWindow.h"
#include "PerformanceWindowManager.generated.h"

/**
 * 
 */
UCLASS()
class MS1PERFORMER_API UPerformanceWindowManager : public UEngineSubsystem
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Performance Window Manager", meta = (WorldContext = "WorldContextObject"))
	void OpenPerformanceWindow(const UObject* WorldContextObject);

	TSharedPtr<SWindow> PerformanceWindow;
	
};
