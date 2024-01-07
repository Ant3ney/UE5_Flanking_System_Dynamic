// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "UnrealEd.h"
#include "LevelEditor.h"
#include "EditorStyleSet.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Misc/FileHelper.h"
#include "IHotReload.h"
#include "HAL/PlatformFilemanager.h"

/**
 * 
 */

DECLARE_LOG_CATEGORY_EXTERN(FlankingPrototypeEditor, All, All)

class FFlankingPrototypeEditor : public IModuleInterface
{
public:
	//SetCustomNavQueryFilter2();
	//~SetCustomNavQueryFilter2();

	// Override StartupModule from IModuleInterface
	virtual void StartupModule() override;
    virtual void ShutdownModule() override;
	// Custom function to be bound to the UI
	void MyCustomFunction();

    void MakePulldownMenu(FMenuBarBuilder &menuBuilder);
	void FillPulldownMenu(FMenuBuilder &menuBuilder);
    TSharedPtr<FExtensibilityManager> LevelEditorMenuExtensibilityManager;
    TSharedPtr<FExtender> MenuExtender;
    static TSharedRef<FWorkspaceItem> MenuRoot;
};

