// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flanking_System/Public/FlankArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlankArea() {}

// Begin Cross Module References
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UFlankArea();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UFlankArea_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
UPackage* Z_Construct_UPackage__Script_Flanking_System();
// End Cross Module References

// Begin Class UFlankArea Function nothingignore
struct Z_Construct_UFunction_UFlankArea_nothingignore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ignore" },
		{ "ModuleRelativePath", "Public/FlankArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlankArea_nothingignore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlankArea, nullptr, "nothingignore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlankArea_nothingignore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlankArea_nothingignore_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFlankArea_nothingignore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlankArea_nothingignore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlankArea::execnothingignore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlankArea::nothingignore();
	P_NATIVE_END;
}
// End Class UFlankArea Function nothingignore

// Begin Class UFlankArea
void UFlankArea::StaticRegisterNativesUFlankArea()
{
	UClass* Class = UFlankArea::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "nothingignore", &UFlankArea::execnothingignore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlankArea);
UClass* Z_Construct_UClass_UFlankArea_NoRegister()
{
	return UFlankArea::StaticClass();
}
struct Z_Construct_UClass_UFlankArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FlankArea.h" },
		{ "ModuleRelativePath", "Public/FlankArea.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlankArea_nothingignore, "nothingignore" }, // 659849245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlankArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlankArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavArea,
	(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlankArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlankArea_Statics::ClassParams = {
	&UFlankArea::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x002000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlankArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlankArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlankArea()
{
	if (!Z_Registration_Info_UClass_UFlankArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlankArea.OuterSingleton, Z_Construct_UClass_UFlankArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlankArea.OuterSingleton;
}
template<> FLANKING_SYSTEM_API UClass* StaticClass<UFlankArea>()
{
	return UFlankArea::StaticClass();
}
UFlankArea::UFlankArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlankArea);
UFlankArea::~UFlankArea() {}
// End Class UFlankArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlankArea, UFlankArea::StaticClass, TEXT("UFlankArea"), &Z_Registration_Info_UClass_UFlankArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlankArea), 2148605284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankArea_h_1425827070(TEXT("/Script/Flanking_System"),
	Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
