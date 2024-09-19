// Copyright Epic Games, Inc. All Rights Reserved.

#include "MS1Performer.h"
#include "UObject/UObjectArray.h"
//#include "Serialization/JsonSerializer.h"
//#include <EngineFontServices.h>
#include "Fonts/FontCache.h"
#include "Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/UserInterfaceSettings.h"
#include "Runtime/Engine/Classes/Engine/RendererSettings.h"
#include "Fonts/FontMeasure.h"
#include "Styling/SlateStyleRegistry.h"
//#include <EngineFontServices.h>

#define LOCTEXT_NAMESPACE "FMS1PerformerModule"



void FMS1PerformerModule::StartupModule()
{
	//GlyphsJSON.Get()->TryGetField(TEXT("noteheadBlack")).Get()->AsObject()->TryGetField(TEXT("codepoint")).Get()->AsString();
	;


}

void FMS1PerformerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FMS1PerformerModule, MS1Performer)