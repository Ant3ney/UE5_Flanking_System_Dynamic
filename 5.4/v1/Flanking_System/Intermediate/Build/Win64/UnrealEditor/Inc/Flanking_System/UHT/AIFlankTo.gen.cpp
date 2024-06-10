// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flanking_System/Public/AIFlankTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIFlankTo() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UAIFlankTo();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UAIFlankTo_NoRegister();
FLANKING_SYSTEM_API UFunction* Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Flanking_System();
// End Cross Module References

// Begin Delegate FOnFinished
struct Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "OnFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAIFlankTo::FOnFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFinished)
{
	OnFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFinished

// Begin Class UAIFlankTo Function AIFlankTo
struct Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics
{
	struct AIFlankTo_eventAIFlankTo_Parms
	{
		AAIController* AIController;
		FTransform TargetTransform;
		UAIFlankTo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FlankingSystem" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventAIFlankTo_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventAIFlankTo_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTransform_MetaData), NewProp_TargetTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventAIFlankTo_Parms, ReturnValue), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_TargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "AIFlankTo", nullptr, nullptr, Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::AIFlankTo_eventAIFlankTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::AIFlankTo_eventAIFlankTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIFlankTo_AIFlankTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIFlankTo::execAIFlankTo)
{
	P_GET_OBJECT(AAIController,Z_Param_AIController);
	P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAIFlankTo**)Z_Param__Result=UAIFlankTo::AIFlankTo(Z_Param_AIController,Z_Param_TargetTransform);
	P_NATIVE_END;
}
// End Class UAIFlankTo Function AIFlankTo

// Begin Class UAIFlankTo Function CleanUpNavArc
struct Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics
{
	struct AIFlankTo_eventCleanUpNavArc_Parms
	{
		TArray<AActor*> modifiersToDelete;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_modifiersToDelete_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_modifiersToDelete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete_Inner = { "modifiersToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete = { "modifiersToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventCleanUpNavArc_Parms, modifiersToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "CleanUpNavArc", nullptr, nullptr, Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::AIFlankTo_eventCleanUpNavArc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::AIFlankTo_eventCleanUpNavArc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIFlankTo::execCleanUpNavArc)
{
	P_GET_TARRAY(AActor*,Z_Param_modifiersToDelete);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAIFlankTo::CleanUpNavArc(Z_Param_modifiersToDelete);
	P_NATIVE_END;
}
// End Class UAIFlankTo Function CleanUpNavArc

// Begin Class UAIFlankTo Function GetFlankPathToLocation
struct Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics
{
	struct AIFlankTo_eventGetFlankPathToLocation_Parms
	{
		AAIController* AIController;
		FTransform TargetTransform;
		UDataTable* DataTable;
		UAIFlankTo* instanceRef;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTransform_MetaData), NewProp_TargetTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_TargetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_instanceRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "GetFlankPathToLocation", nullptr, nullptr, Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::AIFlankTo_eventGetFlankPathToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::AIFlankTo_eventGetFlankPathToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIFlankTo::execGetFlankPathToLocation)
{
	P_GET_OBJECT(AAIController,Z_Param_AIController);
	P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_OBJECT(UAIFlankTo,Z_Param_instanceRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UAIFlankTo::GetFlankPathToLocation(Z_Param_AIController,Z_Param_TargetTransform,Z_Param_DataTable,Z_Param_instanceRef);
	P_NATIVE_END;
}
// End Class UAIFlankTo Function GetFlankPathToLocation

// Begin Class UAIFlankTo Function MoveAIAlongPathAndReturnCallbackPointer
struct Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics
{
	struct AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms
	{
		AAIController* AIController;
		TArray<FVector> Path;
		UDataTable* DataTable;
		UAIFlankTo* instanceRef;
		UAIFlankTo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, ReturnValue), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_AIController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_instanceRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "MoveAIAlongPathAndReturnCallbackPointer", nullptr, nullptr, Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIFlankTo::execMoveAIAlongPathAndReturnCallbackPointer)
{
	P_GET_OBJECT(AAIController,Z_Param_AIController);
	P_GET_TARRAY(FVector,Z_Param_Path);
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_OBJECT(UAIFlankTo,Z_Param_instanceRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAIFlankTo**)Z_Param__Result=UAIFlankTo::MoveAIAlongPathAndReturnCallbackPointer(Z_Param_AIController,Z_Param_Path,Z_Param_DataTable,Z_Param_instanceRef);
	P_NATIVE_END;
}
// End Class UAIFlankTo Function MoveAIAlongPathAndReturnCallbackPointer

// Begin Class UAIFlankTo Function SpawnFlankNavModifierActorAt
struct Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics
{
	struct AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms
	{
		FVector location;
		FText type;
		UDataTable* DataTable;
		UAIFlankTo* instanceRef;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_location;
	static const UECodeGen_Private::FTextPropertyParams NewProp_type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_instanceRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "SpawnFlankNavModifierActorAt", nullptr, nullptr, Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIFlankTo::execSpawnFlankNavModifierActorAt)
{
	P_GET_STRUCT(FVector,Z_Param_location);
	P_GET_PROPERTY(FTextProperty,Z_Param_type);
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_OBJECT(UAIFlankTo,Z_Param_instanceRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UAIFlankTo::SpawnFlankNavModifierActorAt(Z_Param_location,Z_Param_type,Z_Param_DataTable,Z_Param_instanceRef);
	P_NATIVE_END;
}
// End Class UAIFlankTo Function SpawnFlankNavModifierActorAt

// Begin Class UAIFlankTo Function SpawnLine
struct Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics
{
	struct AIFlankTo_eventSpawnLine_Parms
	{
		FVector LocationA;
		FVector LocationB;
		FText type;
		UDataTable* DataTable;
		UAIFlankTo* instanceRef;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationB;
	static const UECodeGen_Private::FTextPropertyParams NewProp_type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationA = { "LocationA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, LocationA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationA_MetaData), NewProp_LocationA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationB = { "LocationB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, LocationB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationB_MetaData), NewProp_LocationB_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_instanceRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "SpawnLine", nullptr, nullptr, Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::AIFlankTo_eventSpawnLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::AIFlankTo_eventSpawnLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIFlankTo_SpawnLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIFlankTo::execSpawnLine)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationB);
	P_GET_PROPERTY(FTextProperty,Z_Param_type);
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_OBJECT(UAIFlankTo,Z_Param_instanceRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAIFlankTo::SpawnLine(Z_Param_Out_LocationA,Z_Param_Out_LocationB,Z_Param_type,Z_Param_DataTable,Z_Param_instanceRef);
	P_NATIVE_END;
}
// End Class UAIFlankTo Function SpawnLine

// Begin Class UAIFlankTo Function SpawnNavArc
struct Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics
{
	struct AIFlankTo_eventSpawnNavArc_Parms
	{
		FTransform PlayerLocation;
		UDataTable* DataTable;
		UAIFlankTo* instanceRef;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, PlayerLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLocation_MetaData), NewProp_PlayerLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_PlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_instanceRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "SpawnNavArc", nullptr, nullptr, Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::AIFlankTo_eventSpawnNavArc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::AIFlankTo_eventSpawnNavArc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAIFlankTo_SpawnNavArc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAIFlankTo::execSpawnNavArc)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_PlayerLocation);
	P_GET_OBJECT(UDataTable,Z_Param_DataTable);
	P_GET_OBJECT(UAIFlankTo,Z_Param_instanceRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=UAIFlankTo::SpawnNavArc(Z_Param_Out_PlayerLocation,Z_Param_DataTable,Z_Param_instanceRef);
	P_NATIVE_END;
}
// End Class UAIFlankTo Function SpawnNavArc

// Begin Class UAIFlankTo
void UAIFlankTo::StaticRegisterNativesUAIFlankTo()
{
	UClass* Class = UAIFlankTo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AIFlankTo", &UAIFlankTo::execAIFlankTo },
		{ "CleanUpNavArc", &UAIFlankTo::execCleanUpNavArc },
		{ "GetFlankPathToLocation", &UAIFlankTo::execGetFlankPathToLocation },
		{ "MoveAIAlongPathAndReturnCallbackPointer", &UAIFlankTo::execMoveAIAlongPathAndReturnCallbackPointer },
		{ "SpawnFlankNavModifierActorAt", &UAIFlankTo::execSpawnFlankNavModifierActorAt },
		{ "SpawnLine", &UAIFlankTo::execSpawnLine },
		{ "SpawnNavArc", &UAIFlankTo::execSpawnNavArc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIFlankTo);
UClass* Z_Construct_UClass_UAIFlankTo_NoRegister()
{
	return UAIFlankTo::StaticClass();
}
struct Z_Construct_UClass_UAIFlankTo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AIFlankTo.h" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_current_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pathMem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_current;
	static const UECodeGen_Private::FIntPropertyParams NewProp_max;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pathMem_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pathMem;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIFlankTo_AIFlankTo, "AIFlankTo" }, // 1204787289
		{ &Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc, "CleanUpNavArc" }, // 3287706111
		{ &Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation, "GetFlankPathToLocation" }, // 2053448773
		{ &Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer, "MoveAIAlongPathAndReturnCallbackPointer" }, // 1296320205
		{ &Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature, "OnFinished__DelegateSignature" }, // 973886192
		{ &Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt, "SpawnFlankNavModifierActorAt" }, // 3623178113
		{ &Z_Construct_UFunction_UAIFlankTo_SpawnLine, "SpawnLine" }, // 4092810306
		{ &Z_Construct_UFunction_UAIFlankTo_SpawnNavArc, "SpawnNavArc" }, // 2279799638
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIFlankTo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_current = { "current", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIFlankTo, current), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_current_MetaData), NewProp_current_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIFlankTo, max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_max_MetaData), NewProp_max_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem_Inner = { "pathMem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem = { "pathMem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIFlankTo, pathMem), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pathMem_MetaData), NewProp_pathMem_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAIFlankTo, OnFinished), Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 973886192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIFlankTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_OnFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAIFlankTo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIFlankTo_Statics::ClassParams = {
	&UAIFlankTo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAIFlankTo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIFlankTo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAIFlankTo()
{
	if (!Z_Registration_Info_UClass_UAIFlankTo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIFlankTo.OuterSingleton, Z_Construct_UClass_UAIFlankTo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAIFlankTo.OuterSingleton;
}
template<> FLANKING_SYSTEM_API UClass* StaticClass<UAIFlankTo>()
{
	return UAIFlankTo::StaticClass();
}
UAIFlankTo::UAIFlankTo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAIFlankTo);
UAIFlankTo::~UAIFlankTo() {}
// End Class UAIFlankTo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAIFlankTo, UAIFlankTo::StaticClass, TEXT("UAIFlankTo"), &Z_Registration_Info_UClass_UAIFlankTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIFlankTo), 938745017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_3046986441(TEXT("/Script/Flanking_System"),
	Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
