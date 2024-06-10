// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flanking_System/Public/FlankNavModifierActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlankNavModifierActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FLANKING_SYSTEM_API UClass* Z_Construct_UClass_AFlankNavModifierActor();
	FLANKING_SYSTEM_API UClass* Z_Construct_UClass_AFlankNavModifierActor_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Flanking_System();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlankNavModifierActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Flanking_System,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlankNavModifierActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlankNavModifierActor.h" },
		{ "ModuleRelativePath", "Public/FlankNavModifierActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "Category", "FlankingSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlankNavModifierActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlankNavModifierActor, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_BoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_BoxCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_NavModifier_MetaData[] = {
		{ "Category", "FlankingSystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlankNavModifierActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_NavModifier = { "NavModifier", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFlankNavModifierActor, NavModifier), Z_Construct_UClass_UNavModifierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_NavModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_NavModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlankNavModifierActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_BoxCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlankNavModifierActor_Statics::NewProp_NavModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlankNavModifierActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlankNavModifierActor>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_AFlankNavModifierActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlankNavModifierActor_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlankNavModifierActor, AFlankNavModifierActor::StaticClass, TEXT("AFlankNavModifierActor"), &Z_Registration_Info_UClass_AFlankNavModifierActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlankNavModifierActor), 711337919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_2770919149(TEXT("/Script/Flanking_System"),
		Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_FlankingSystem_Plugin_Builds_5_1_v1_Flanking_System_HostProject_Plugins_Flanking_System_Source_Flanking_System_Public_FlankNavModifierActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
