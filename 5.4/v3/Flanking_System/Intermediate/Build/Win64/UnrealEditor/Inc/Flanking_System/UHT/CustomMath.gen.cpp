// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flanking_System/Public/CustomMath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMath() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UCustomMath();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UCustomMath_NoRegister();
FLANKING_SYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FArcPoint();
UPackage* Z_Construct_UPackage__Script_Flanking_System();
// End Cross Module References

// Begin ScriptStruct FArcPoint
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexFromCenter_MetaData[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexFromCenter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArcPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArcPoint, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_IndexFromCenter = { "IndexFromCenter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArcPoint, IndexFromCenter), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexFromCenter_MetaData), NewProp_IndexFromCenter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArcPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcPoint_Statics::NewProp_IndexFromCenter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArcPoint_Statics::StructParams = {
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
UScriptStruct* Z_Construct_UScriptStruct_FArcPoint()
{
	if (!Z_Registration_Info_UScriptStruct_ArcPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArcPoint.InnerSingleton, Z_Construct_UScriptStruct_FArcPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArcPoint.InnerSingleton;
}
// End ScriptStruct FArcPoint

// Begin Class UCustomMath Function CalculateDistanceBetweenPoints
struct Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics
{
	struct CustomMath_eventCalculateDistanceBetweenPoints_Parms
	{
		FVector StartPoint;
		FVector EndPoint;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculateDistanceBetweenPoints_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculateDistanceBetweenPoints_Parms, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculateDistanceBetweenPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "CalculateDistanceBetweenPoints", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::CustomMath_eventCalculateDistanceBetweenPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(UCustomMath::execCalculateDistanceBetweenPoints)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UCustomMath::CalculateDistanceBetweenPoints(Z_Param_Out_StartPoint,Z_Param_Out_EndPoint);
	P_NATIVE_END;
}
// End Class UCustomMath Function CalculateDistanceBetweenPoints

// Begin Class UCustomMath Function CalculatePointsBetweenLocations
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationA = { "LocationA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculatePointsBetweenLocations_Parms, LocationA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationA_MetaData), NewProp_LocationA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::NewProp_LocationB = { "LocationB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventCalculatePointsBetweenLocations_Parms, LocationB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationB_MetaData), NewProp_LocationB_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "CalculatePointsBetweenLocations", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::CustomMath_eventCalculatePointsBetweenLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations_Statics::Function_MetaDataParams) };
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
// End Class UCustomMath Function CalculatePointsBetweenLocations

// Begin Class UCustomMath Function GetCentralizedIndex
struct Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics
{
	struct CustomMath_eventGetCentralizedIndex_Parms
	{
		int32 flatIndex;
		int32 total;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_flatIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_total;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "GetCentralizedIndex", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::CustomMath_eventGetCentralizedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_GetCentralizedIndex_Statics::Function_MetaDataParams) };
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
DEFINE_FUNCTION(UCustomMath::execGetCentralizedIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_flatIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_total);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCustomMath::GetCentralizedIndex(Z_Param_flatIndex,Z_Param_total);
	P_NATIVE_END;
}
// End Class UCustomMath Function GetCentralizedIndex

// Begin Class UCustomMath Function GetPointsOnArc
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Custom|Math" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalArcAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerLocation_MetaData), NewProp_PlayerLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, Rotation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_TotalArcAngle = { "TotalArcAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, TotalArcAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, Magnitude), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FArcPoint, METADATA_PARAMS(0, nullptr) }; // 1212253880
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomMath_eventGetPointsOnArc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1212253880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_PlayerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_TotalArcAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_Magnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMath, nullptr, "GetPointsOnArc", nullptr, nullptr, Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::CustomMath_eventGetPointsOnArc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomMath_GetPointsOnArc_Statics::Function_MetaDataParams) };
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
// End Class UCustomMath Function GetPointsOnArc

// Begin Class UCustomMath
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomMath);
UClass* Z_Construct_UClass_UCustomMath_NoRegister()
{
	return UCustomMath::StaticClass();
}
struct Z_Construct_UClass_UCustomMath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CustomMath.h" },
		{ "ModuleRelativePath", "Public/CustomMath.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomMath_CalculateDistanceBetweenPoints, "CalculateDistanceBetweenPoints" }, // 2710867316
		{ &Z_Construct_UFunction_UCustomMath_CalculatePointsBetweenLocations, "CalculatePointsBetweenLocations" }, // 783857030
		{ &Z_Construct_UFunction_UCustomMath_GetCentralizedIndex, "GetCentralizedIndex" }, // 3863490244
		{ &Z_Construct_UFunction_UCustomMath_GetPointsOnArc, "GetPointsOnArc" }, // 1250409806
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomMath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMath_Statics::DependentSingletons) < 16);
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
// End Class UCustomMath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v3_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArcPoint::StaticStruct, Z_Construct_UScriptStruct_FArcPoint_Statics::NewStructOps, TEXT("ArcPoint"), &Z_Registration_Info_UScriptStruct_ArcPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArcPoint), 1212253880U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomMath, UCustomMath::StaticClass, TEXT("UCustomMath"), &Z_Registration_Info_UClass_UCustomMath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomMath), 1596382246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v3_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_4128702818(TEXT("/Script/Flanking_System"),
	Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v3_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v3_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v3_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v3_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_CustomMath_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
