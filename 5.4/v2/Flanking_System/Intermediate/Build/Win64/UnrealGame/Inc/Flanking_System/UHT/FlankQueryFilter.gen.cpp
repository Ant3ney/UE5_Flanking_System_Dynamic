// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flanking_System/Public/FlankQueryFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlankQueryFilter() {}

// Begin Cross Module References
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UFlankQueryFilter();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_UFlankQueryFilter_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
UPackage* Z_Construct_UPackage__Script_Flanking_System();
// End Cross Module References

// Begin Class UFlankQueryFilter
void UFlankQueryFilter::StaticRegisterNativesUFlankQueryFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlankQueryFilter);
UClass* Z_Construct_UClass_UFlankQueryFilter_NoRegister()
{
	return UFlankQueryFilter::StaticClass();
}
struct Z_Construct_UClass_UFlankQueryFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FlankQueryFilter.h" },
		{ "ModuleRelativePath", "Public/FlankQueryFilter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlankQueryFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlankQueryFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNavigationQueryFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlankQueryFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlankQueryFilter_Statics::ClassParams = {
	&UFlankQueryFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlankQueryFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlankQueryFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlankQueryFilter()
{
	if (!Z_Registration_Info_UClass_UFlankQueryFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlankQueryFilter.OuterSingleton, Z_Construct_UClass_UFlankQueryFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlankQueryFilter.OuterSingleton;
}
template<> FLANKING_SYSTEM_API UClass* StaticClass<UFlankQueryFilter>()
{
	return UFlankQueryFilter::StaticClass();
}
UFlankQueryFilter::UFlankQueryFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlankQueryFilter);
UFlankQueryFilter::~UFlankQueryFilter() {}
// End Class UFlankQueryFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v2_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankQueryFilter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlankQueryFilter, UFlankQueryFilter::StaticClass, TEXT("UFlankQueryFilter"), &Z_Registration_Info_UClass_UFlankQueryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlankQueryFilter), 244169825U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v2_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankQueryFilter_h_289896476(TEXT("/Script/Flanking_System"),
	Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v2_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankQueryFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v2_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankQueryFilter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
