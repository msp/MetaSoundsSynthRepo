// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/IPluginManager.h"
#include "Modules/ModuleManager.h"
#include "Framework/Application/SlateApplication.h"
//#include "SimpleEngraving.generated.h"

//#include <SEngravingWidget.h>

struct FMeasuredGlyph
{
	TCHAR glyph;
	float measuredX;
	float measuredY;
};

class FMS1PerformerModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
