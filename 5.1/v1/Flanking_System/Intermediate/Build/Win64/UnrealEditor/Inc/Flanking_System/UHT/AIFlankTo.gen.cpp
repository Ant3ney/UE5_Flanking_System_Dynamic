// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flanking_System/Public/AIFlankTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIFlankTo() {}
// Cross Module References
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
	struct Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "OnFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(UAIFlankTo::execAIFlankTo)
	{
		P_GET_OBJECT(AAIController,Z_Param_AIController);
		P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAIFlankTo**)Z_Param__Result=UAIFlankTo::AIFlankTo(Z_Param_AIController,Z_Param_TargetTransform);
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics
	{
		struct AIFlankTo_eventAIFlankTo_Parms
		{
			AAIController* AIController;
			FTransform TargetTransform;
			UAIFlankTo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventAIFlankTo_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_TargetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventAIFlankTo_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_TargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_TargetTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventAIFlankTo_Parms, ReturnValue), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_TargetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FlankingSystem" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "AIFlankTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::AIFlankTo_eventAIFlankTo_Parms), Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIFlankTo_AIFlankTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_AIFlankTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics
	{
		struct AIFlankTo_eventCleanUpNavArc_Parms
		{
			TArray<AActor*> modifiersToDelete;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_modifiersToDelete_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_modifiersToDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete_Inner = { "modifiersToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete = { "modifiersToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventCleanUpNavArc_Parms, modifiersToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::NewProp_modifiersToDelete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "CleanUpNavArc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::AIFlankTo_eventCleanUpNavArc_Parms), Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_TargetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_TargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_TargetTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventGetFlankPathToLocation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_TargetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_instanceRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "GetFlankPathToLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::AIFlankTo_eventGetFlankPathToLocation_Parms), Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms, ReturnValue), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_instanceRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "MoveAIAlongPathAndReturnCallbackPointer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::AIFlankTo_eventMoveAIAlongPathAndReturnCallbackPointer_Parms), Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FTextPropertyParams NewProp_type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_instanceRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "SpawnFlankNavModifierActorAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::AIFlankTo_eventSpawnFlankNavModifierActorAt_Parms), Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationB;
		static const UECodeGen_Private::FTextPropertyParams NewProp_type;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationA = { "LocationA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, LocationA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationB = { "LocationB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, LocationB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationB_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnLine_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_LocationB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_instanceRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "SpawnLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::AIFlankTo_eventSpawnLine_Parms), Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIFlankTo_SpawnLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_SpawnLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instanceRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, PlayerLocation), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_PlayerLocation_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_instanceRef = { "instanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, instanceRef), Z_Construct_UClass_UAIFlankTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIFlankTo_eventSpawnNavArc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_instanceRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "FlankingSystem" },
		{ "CPP_Default_DataTable", "None" },
		{ "CPP_Default_instanceRef", "None" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIFlankTo, nullptr, "SpawnNavArc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::AIFlankTo_eventSpawnNavArc_Parms), Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIFlankTo_SpawnNavArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIFlankTo_SpawnNavArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIFlankTo);
	UClass* Z_Construct_UClass_UAIFlankTo_NoRegister()
	{
		return UAIFlankTo::StaticClass();
	}
	struct Z_Construct_UClass_UAIFlankTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_current_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_current;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_max_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_max;
		static const UECodeGen_Private::FStructPropertyParams NewProp_pathMem_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pathMem_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pathMem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIFlankTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIFlankTo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIFlankTo_AIFlankTo, "AIFlankTo" }, // 4139599010
		{ &Z_Construct_UFunction_UAIFlankTo_CleanUpNavArc, "CleanUpNavArc" }, // 1222699364
		{ &Z_Construct_UFunction_UAIFlankTo_GetFlankPathToLocation, "GetFlankPathToLocation" }, // 2823470008
		{ &Z_Construct_UFunction_UAIFlankTo_MoveAIAlongPathAndReturnCallbackPointer, "MoveAIAlongPathAndReturnCallbackPointer" }, // 1460788405
		{ &Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature, "OnFinished__DelegateSignature" }, // 432215501
		{ &Z_Construct_UFunction_UAIFlankTo_SpawnFlankNavModifierActorAt, "SpawnFlankNavModifierActorAt" }, // 1930518927
		{ &Z_Construct_UFunction_UAIFlankTo_SpawnLine, "SpawnLine" }, // 2797109187
		{ &Z_Construct_UFunction_UAIFlankTo_SpawnNavArc, "SpawnNavArc" }, // 375002514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIFlankTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AIFlankTo.h" },
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIFlankTo_Statics::NewProp_current_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_current = { "current", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIFlankTo, current), METADATA_PARAMS(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_current_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_current_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIFlankTo_Statics::NewProp_max_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIFlankTo, max), METADATA_PARAMS(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_max_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem_Inner = { "pathMem", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem = { "pathMem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIFlankTo, pathMem), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIFlankTo_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/AIFlankTo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIFlankTo_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIFlankTo, OnFinished), Z_Construct_UDelegateFunction_UAIFlankTo_OnFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::NewProp_OnFinished_MetaData)) }; // 432215501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIFlankTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_current,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_pathMem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIFlankTo_Statics::NewProp_OnFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIFlankTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIFlankTo>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UAIFlankTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIFlankTo_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIFlankTo);
	UAIFlankTo::~UAIFlankTo() {}
	struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIFlankTo, UAIFlankTo::StaticClass, TEXT("UAIFlankTo"), &Z_Registration_Info_UClass_UAIFlankTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIFlankTo), 2133867330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_3325029266(TEXT("/Script/Flanking_System"),
		Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_AIFlankTo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
