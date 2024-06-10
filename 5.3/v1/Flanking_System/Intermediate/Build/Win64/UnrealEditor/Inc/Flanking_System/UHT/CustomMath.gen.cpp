// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../Users/antho/Documents/Unreal Projects/FlankingSystem/Plugin_Builds/5.3/v1/Flanking_System/HostProject/Plugins/Flanking_System/Source/Flanking_System/Public/CustomMath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMath() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UCustomMath();
	FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UCustomMath_NoRegister();
	FLANKING_SYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FArcPoint();
	UPackage* Z_Construct_UPackage__Script_Flanking_System();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArcPoint;
class UScriptStruct* FArcPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArcPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArcPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArcPoint, (UObject*)Z_Construct_UPackage__Script_Flanking_System(), TEXT("ArcPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ArcPoint.OuterSingleton;
}
template<> FLANKING_SYSTEM_API UScriptStruct* StaticStruct<FArcPoint>()
{
	return FArcPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FArcPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexFromCenter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexFromCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArcPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArcPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_Point_MetaData[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArcPoint, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_Point_MetaData), Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_Point_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_IndexFromCenter_MetaData[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_IndexFromCenter = { "IndexFromCenter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArcPoint, IndexFromCenter), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_IndexFromCenter_MetaData), Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_IndexFromCenter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArcPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_IndexFromCenter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArcPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
		nullptr,
		&NewStructOps,
		"ArcPoint",
		Z_Construct_UScriptStruct_FArcPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcPoint_Statics::PropPointers),
		sizeof(FArcPoint),
		alignof(FArcPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArcPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FArcPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_ArcPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArcPoint.InnerSingleton, Z_Construct_UScriptStruct_FArcPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ArcPoint.InnerSingleton;
	}
	DEFINE_FUNCTION(UCustomMath::execGetCentralizedIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_flatIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_total);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCustomMath::GetCentralizedIndex(Z_Param_flatIndex,Z_Param_total);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMath::execGetPointsOnArc)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PlayerLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TotalArcAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Magnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FArcPoint>*)Z_Param__Result=UCustomMath::GetPointsOnArc(Z_Param_Out_PlayerLocation,Z_Param_Rotation,Z_Param_TotalArcAngle,Z_Param_Magnitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMath::execCalculateDistanceBetweenPoints)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartPoint);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCustomMath::CalculateDistanceBetweenPoints(Z_Param_Out_StartPoint,Z_Param_Out_EndPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMath::execCalculatePointsBetweenLocations)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationA);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationB);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UCustomMath::CalculatePointsBetweenLocations(Z_Param_Out_LocationA,Z_Param_Out_LocationB,Z_Param_Distance);
		P_NATIVE_END;
	}
	void UCustomMath::StaticRegisterNativesUCustomMath()
	{
		UClass* Class = UCustomMath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateDistanceBetweenPoints", &UCustomMath::execCalculateDistanceBetweenPoints },
			{ "CalculatePointsBetweenLocations", &UCustomMath::execCalculatePointsBetweenLocations },
			{ "GetCentralizedIndex", &UCustomMath::execGetCentralizedIndex },
			{ "GetPointsOnArc", &UCustomMath::execGetPointsOnArc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics
	{
		struct CustomMath_eventCalculateDistanceBetweenPoints_Parms
		{
			FVector StartPoint;
			FVector EndPoint;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_StartPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculateDistanceBetweenPoints_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_StartPoint_MetaData), Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_StartPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_EndPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculateDistanceBetweenPoints_Parms, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_EndPoint_MetaData), Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_EndPoint_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculateDistanceBetweenPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "CalculateDistanceBetweenPoints", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::CustomMath_eventCalculateDistanceBetweenPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::CustomMath_eventCalculateDistanceBetweenPoints_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics
	{
		struct CustomMath_eventCalculatePointsBetweenLocations_Parms
		{
			FVector LocationA;
			FVector LocationB;
			float Distance;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationB;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationA = { "LocationA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculatePointsBetweenLocations_Parms, LocationA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationA_MetaData), Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationB = { "LocationB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculatePointsBetweenLocations_Parms, LocationB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationB_MetaData), Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationB_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculatePointsBetweenLocations_Parms, Distance), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculatePointsBetweenLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "CalculatePointsBetweenLocations", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::CustomMath_eventCalculatePointsBetweenLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::CustomMath_eventCalculatePointsBetweenLocations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics
	{
		struct CustomMath_eventGetCentralizedIndex_Parms
		{
			int32 flatIndex;
			int32 total;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_flatIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_total;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::NewProp_flatIndex = { "flatIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetCentralizedIndex_Parms, flatIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::NewProp_total = { "total", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetCentralizedIndex_Parms, total), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetCentralizedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::NewProp_flatIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::NewProp_total,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "GetCentralizedIndex", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::CustomMath_eventGetCentralizedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::CustomMath_eventGetCentralizedIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomMath_GetCentralizedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics
	{
		struct CustomMath_eventGetPointsOnArc_Parms
		{
			FVector PlayerLocation;
			float Rotation;
			float TotalArcAngle;
			float Magnitude;
			TArray<FArcPoint> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalArcAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_PlayerLocation_MetaData), Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_PlayerLocation_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, Rotation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_TotalArcAngle = { "TotalArcAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, TotalArcAngle), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, Magnitude), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArcPoint, METADATA_PARAMS(0, nullptr) }; // 960427500
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 960427500
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_TotalArcAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "GetPointsOnArc", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::CustomMath_eventGetPointsOnArc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::CustomMath_eventGetPointsOnArc_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCustomMath_GetPointsOnArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomMath);
	UClass* Z_Construct_UClass_UCustomMath_NoRegister()
	{
		return UCustomMath::StaticClass();
	}
	struct Z_Construct_UClass_UCustomMath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomMath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMath_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomMath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints, "CalculateDistanceBetweenPoints" }, // 884501173
		{ &Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations, "CalculatePointsBetweenLocations" }, // 4050308973
		{ &Z_Construct_UFunction_UCustomMath_GetCentralizedIndex, "GetCentralizedIndex" }, // 1743016672
		{ &Z_Construct_UFunction_UCustomMath_GetPointsOnArc, "GetPointsOnArc" }, // 2568893512
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMath_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomMath.h" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomMath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomMath_Statics::ClassParams = {
		&UCustomMath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMath_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomMath_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomMath()
	{
		if (!Z_Registration_Info_UClass_UCustomMath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomMath.OuterSingleton, Z_Construct_UClass_UCustomMath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomMath.OuterSingleton;
	}
	template<> FLANKING_SYSTEM_API UClass* StaticClass<UCustomMath>()
	{
		return UCustomMath::StaticClass();
	}
	UCustomMath::UCustomMath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMath);
	UCustomMath::~UCustomMath() {}
	struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ScriptStructInfo[] = {
		{ FArcPoint::StaticStruct, Z_Construct_UScriptStruct_FArcPoint_Statics::NewStructOps, TEXT("ArcPoint"), &Z_Registration_Info_UScriptStruct_ArcPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArcPoint), 960427500U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomMath, UCustomMath::StaticClass, TEXT("UCustomMath"), &Z_Registration_Info_UClass_UCustomMath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomMath), 290918154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_4061661032(TEXT("/Script/Flanking_System"),
		Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_3_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
