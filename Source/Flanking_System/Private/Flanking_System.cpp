// Copyright Epic Games, Inc. All Rights Reserved.

#include "Flanking_System.h"

#define LOCTEXT_NAMESPACE "FFlanking_SystemModule"

void FFlanking_SystemModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FFlanking_SystemModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFlanking_SystemModule, Flanking_System)