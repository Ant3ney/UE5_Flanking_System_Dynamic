// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flanking_System/Public/FlankNavModifierActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlankNavModifierActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_AFlankNavModifierActor();
FLANKING_SYSTEM_API UClass* Z_Construct_UClass_AFlankNavModifierActor_NoRegister();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Flanking_System();
// End Cross Module References

// Begin Class AFlankNavModifierActor
void AFlankNavModifierActor::StaticRegisterNativesAFlankNavModifierActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlankNavModifierActor);
UClass* Z_Construct_UClass_AFlankNavModifierActor_NoRegister()
{
	return AFlankNavModifierActor::StaticClass();
}
struct Z_Construct_UClass_AFlankNavModifierActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FlankNavModifierActor.h" },
		{ "ModuleRelativePath", "Public/FlankNavModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "Category", "FlankingSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlankNavModifierActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavModifier_MetaData[] = {
		{ "Category", "FlankingSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlankNavModifierActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlankNavModifierActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlankNavModifierActor, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_NavModifier = { "NavModifier", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlankNavModifierActor, NavModifier), Z_Construct_UClass_UNavModifierComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavModifier_MetaData), NewProp_NavModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlankNavModifierActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_NavModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlankNavModifierActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlankNavModifierActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlankNavModifierActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlankNavModifierActor_Statics::ClassParams = {
	&AFlankNavModifierActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFlankNavModifierActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlankNavModifierActor_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlankNavModifierActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlankNavModifierActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlankNavModifierActor()
{
	if (!Z_Registration_Info_UClass_AFlankNavModifierActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlankNavModifierActor.OuterSingleton, Z_Construct_UClass_AFlankNavModifierActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlankNavModifierActor.OuterSingleton;
}
template<> FLANKING_SYSTEM_API UClass* StaticClass<AFlankNavModifierActor>()
{
	return AFlankNavModifierActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlankNavModifierActor);
AFlankNavModifierActor::~AFlankNavModifierActor() {}
// End Class AFlankNavModifierActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlankNavModifierActor, AFlankNavModifierActor::StaticClass, TEXT("AFlankNavModifierActor"), &Z_Registration_Info_UClass_AFlankNavModifierActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlankNavModifierActor), 1417123714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_2254465638(TEXT("/Script/Flanking_System"),
	Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_4_v4_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
