// --------------------------------------------------------------------------------
// Copyright (c) 2024 Anthony Cavuoti.
// Flanking System Unreal Engine Plugin.
// All rights reserved.
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
// --------------------------------------------------------------------------------

#pragma once

#include "Modules/ModuleManager.h"
#include "AIFlankTo.h"

class FFlanking_SystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
