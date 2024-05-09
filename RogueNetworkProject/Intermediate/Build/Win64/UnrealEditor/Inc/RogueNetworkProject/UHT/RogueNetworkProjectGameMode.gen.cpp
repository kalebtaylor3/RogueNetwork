// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueNetworkProject/RogueNetworkProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRogueNetworkProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_ARogueNetworkProjectGameMode();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_ARogueNetworkProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueNetworkProject();
// End Cross Module References

// Begin Class ARogueNetworkProjectGameMode
void ARogueNetworkProjectGameMode::StaticRegisterNativesARogueNetworkProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARogueNetworkProjectGameMode);
UClass* Z_Construct_UClass_ARogueNetworkProjectGameMode_NoRegister()
{
	return ARogueNetworkProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ARogueNetworkProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RogueNetworkProjectGameMode.h" },
		{ "ModuleRelativePath", "RogueNetworkProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARogueNetworkProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARogueNetworkProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueNetworkProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARogueNetworkProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARogueNetworkProjectGameMode_Statics::ClassParams = {
	&ARogueNetworkProjectGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARogueNetworkProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARogueNetworkProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARogueNetworkProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ARogueNetworkProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARogueNetworkProjectGameMode.OuterSingleton, Z_Construct_UClass_ARogueNetworkProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARogueNetworkProjectGameMode.OuterSingleton;
}
template<> ROGUENETWORKPROJECT_API UClass* StaticClass<ARogueNetworkProjectGameMode>()
{
	return ARogueNetworkProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARogueNetworkProjectGameMode);
ARogueNetworkProjectGameMode::~ARogueNetworkProjectGameMode() {}
// End Class ARogueNetworkProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_RogueNetworkProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARogueNetworkProjectGameMode, ARogueNetworkProjectGameMode::StaticClass, TEXT("ARogueNetworkProjectGameMode"), &Z_Registration_Info_UClass_ARogueNetworkProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARogueNetworkProjectGameMode), 2426154776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_RogueNetworkProjectGameMode_h_1902441525(TEXT("/Script/RogueNetworkProject"),
	Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_RogueNetworkProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_RogueNetworkProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
