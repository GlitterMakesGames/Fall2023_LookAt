// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fall2023_LookAt_v1/Fall2023_LookAt_v1HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFall2023_LookAt_v1HUD() {}
// Cross Module References
	FALL2023_LOOKAT_V1_API UClass* Z_Construct_UClass_AFall2023_LookAt_v1HUD_NoRegister();
	FALL2023_LOOKAT_V1_API UClass* Z_Construct_UClass_AFall2023_LookAt_v1HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Fall2023_LookAt_v1();
// End Cross Module References
	void AFall2023_LookAt_v1HUD::StaticRegisterNativesAFall2023_LookAt_v1HUD()
	{
	}
	UClass* Z_Construct_UClass_AFall2023_LookAt_v1HUD_NoRegister()
	{
		return AFall2023_LookAt_v1HUD::StaticClass();
	}
	struct Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Fall2023_LookAt_v1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Fall2023_LookAt_v1HUD.h" },
		{ "ModuleRelativePath", "Fall2023_LookAt_v1HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFall2023_LookAt_v1HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics::ClassParams = {
		&AFall2023_LookAt_v1HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFall2023_LookAt_v1HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFall2023_LookAt_v1HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFall2023_LookAt_v1HUD, 1551180770);
	template<> FALL2023_LOOKAT_V1_API UClass* StaticClass<AFall2023_LookAt_v1HUD>()
	{
		return AFall2023_LookAt_v1HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFall2023_LookAt_v1HUD(Z_Construct_UClass_AFall2023_LookAt_v1HUD, &AFall2023_LookAt_v1HUD::StaticClass, TEXT("/Script/Fall2023_LookAt_v1"), TEXT("AFall2023_LookAt_v1HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFall2023_LookAt_v1HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
