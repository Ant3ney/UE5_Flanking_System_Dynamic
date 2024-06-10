// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomMath.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FArcPoint;
#ifdef FLANKING_SYSTEM_CustomMath_generated_h
#error "CustomMath.generated.h already included, missing '#pragma once' in CustomMath.h"
#endif
#define FLANKING_SYSTEM_CustomMath_generated_h

#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArcPoint_Statics; \
	FLANKING_SYSTEM_API static class UScriptStruct* StaticStruct();


template<> FLANKING_SYSTEM_API UScriptStruct* StaticStruct<struct FArcPoint>();

#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCentralizedIndex); \
	DECLARE_FUNCTION(execGetPointsOnArc); \
	DECLARE_FUNCTION(execCalculateDistanceBetweenPoints); \
	DECLARE_FUNCTION(execCalculatePointsBetweenLocations);


#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomMath(); \
	friend struct Z_Construct_UClass_UCustomMath_Statics; \
public: \
	DECLARE_CLASS(UCustomMath, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flanking_System"), NO_API) \
	DECLARE_SERIALIZER(UCustomMath)


#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomMath(UCustomMath&&); \
	UCustomMath(const UCustomMath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMath) \
	NO_API virtual ~UCustomMath();


#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_31_PROLOG
#define FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLANKING_SYSTEM_API UClass* StaticClass<class UCustomMath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
