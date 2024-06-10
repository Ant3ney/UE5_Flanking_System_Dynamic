// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIFlankTo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class UAIFlankTo;
class UDataTable;
#ifdef FLANKING_SYSTEM_AIFlankTo_generated_h
#error "AIFlankTo.generated.h already included, missing '#pragma once' in AIFlankTo.h"
#endif
#define FLANKING_SYSTEM_AIFlankTo_generated_h

#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_47_DELEGATE \
static FLANKING_SYSTEM_API void FOnFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFinished);


#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCleanUpNavArc); \
	DECLARE_FUNCTION(execSpawnNavArc); \
	DECLARE_FUNCTION(execSpawnLine); \
	DECLARE_FUNCTION(execSpawnFlankNavModifierActorAt); \
	DECLARE_FUNCTION(execGetFlankPathToLocation); \
	DECLARE_FUNCTION(execMoveAIAlongPathAndReturnCallbackPointer); \
	DECLARE_FUNCTION(execAIFlankTo);


#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIFlankTo(); \
	friend struct Z_Construct_UClass_UAIFlankTo_Statics; \
public: \
	DECLARE_CLASS(UAIFlankTo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flanking_System"), NO_API) \
	DECLARE_SERIALIZER(UAIFlankTo)


#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIFlankTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIFlankTo(UAIFlankTo&&); \
	UAIFlankTo(const UAIFlankTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIFlankTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIFlankTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIFlankTo) \
	NO_API virtual ~UAIFlankTo();


#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_32_PROLOG
#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLANKING_SYSTEM_API UClass* StaticClass<class UAIFlankTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
