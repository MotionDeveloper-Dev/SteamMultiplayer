// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMultiplayer/SteamMultiplayerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMultiplayerGameModeBase() {}
// Cross Module References
	STEAMMULTIPLAYER_API UClass* Z_Construct_UClass_ASteamMultiplayerGameModeBase_NoRegister();
	STEAMMULTIPLAYER_API UClass* Z_Construct_UClass_ASteamMultiplayerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SteamMultiplayer();
// End Cross Module References
	void ASteamMultiplayerGameModeBase::StaticRegisterNativesASteamMultiplayerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamMultiplayerGameModeBase);
	UClass* Z_Construct_UClass_ASteamMultiplayerGameModeBase_NoRegister()
	{
		return ASteamMultiplayerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamMultiplayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SteamMultiplayerGameModeBase.h" },
		{ "ModuleRelativePath", "SteamMultiplayerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamMultiplayerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics::ClassParams = {
		&ASteamMultiplayerGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteamMultiplayerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASteamMultiplayerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamMultiplayerGameModeBase.OuterSingleton, Z_Construct_UClass_ASteamMultiplayerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASteamMultiplayerGameModeBase.OuterSingleton;
	}
	template<> STEAMMULTIPLAYER_API UClass* StaticClass<ASteamMultiplayerGameModeBase>()
	{
		return ASteamMultiplayerGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamMultiplayerGameModeBase);
	struct Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASteamMultiplayerGameModeBase, ASteamMultiplayerGameModeBase::StaticClass, TEXT("ASteamMultiplayerGameModeBase"), &Z_Registration_Info_UClass_ASteamMultiplayerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamMultiplayerGameModeBase), 1946704584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameModeBase_h_1879571535(TEXT("/Script/SteamMultiplayer"),
		Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
