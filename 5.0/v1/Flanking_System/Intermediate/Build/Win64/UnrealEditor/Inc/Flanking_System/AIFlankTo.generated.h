// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDataTable;
class UAIFlankTo;
class AAIController;
#ifdef FLANKING_SYSTEM_AIFlankTo_generated_h
#error "AIFlankTo.generated.h already included, missing '#pragma once' in AIFlankTo.h"
#endif
#define FLANKING_SYSTEM_AIFlankTo_generated_h

#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_47_DELEGATE \
static inline void FOnFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFinished) \
{ \
	OnFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_SPARSE_DATA
#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCleanUpNavArc); \
	DECLARE_FUNCTION(execSpawnNavArc); \
	DECLARE_FUNCTION(execSpawnLine); \
	DECLARE_FUNCTION(execSpawnFlankNavModifierActorAt); \
	DECLARE_FUNCTION(execGetFlankPathToLocation); \
	DECLARE_FUNCTION(execMoveAIAlongPathAndReturnCallbackPointer); \
	DECLARE_FUNCTION(execAIFlankTo);


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCleanUpNavArc); \
	DECLARE_FUNCTION(execSpawnNavArc); \
	DECLARE_FUNCTION(execSpawnLine); \
	DECLARE_FUNCTION(execSpawnFlankNavModifierActorAt); \
	DECLARE_FUNCTION(execGetFlankPathToLocation); \
	DECLARE_FUNCTION(execMoveAIAlongPathAndReturnCallbackPointer); \
	DECLARE_FUNCTION(execAIFlankTo);


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIFlankTo(); \
	friend struct Z_Construct_UClass_UAIFlankTo_Statics; \
public: \
	DECLARE_CLASS(UAIFlankTo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flanking_System"), NO_API) \
	DECLARE_SERIALIZER(UAIFlankTo)


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUAIFlankTo(); \
	friend struct Z_Construct_UClass_UAIFlankTo_Statics; \
public: \
	DECLARE_CLASS(UAIFlankTo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flanking_System"), NO_API) \
	DECLARE_SERIALIZER(UAIFlankTo)


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIFlankTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIFlankTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIFlankTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIFlankTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIFlankTo(UAIFlankTo&&); \
	NO_API UAIFlankTo(const UAIFlankTo&); \
public:


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIFlankTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIFlankTo(UAIFlankTo&&); \
	NO_API UAIFlankTo(const UAIFlankTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIFlankTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIFlankTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIFlankTo)


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_32_PROLOG
#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_RPC_WRAPPERS \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_INCLASS \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLANKING_SYSTEM_API UClass* StaticClass<class UAIFlankTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
