// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueNetworkProject/Public/HackingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_AHackingComponent();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_AHackingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueNetworkProject();
// End Cross Module References

// Begin Class AHackingComponent
void AHackingComponent::StaticRegisterNativesAHackingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHackingComponent);
UClass* Z_Construct_UClass_AHackingComponent_NoRegister()
{
	return AHackingComponent::StaticClass();
}
struct Z_Construct_UClass_AHackingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HackingComponent.h" },
		{ "ModuleRelativePath", "Public/HackingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHackingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueNetworkProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHackingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHackingComponent_Statics::ClassParams = {
	&AHackingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHackingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_AHackingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHackingComponent()
{
	if (!Z_Registration_Info_UClass_AHackingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHackingComponent.OuterSingleton, Z_Construct_UClass_AHackingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHackingComponent.OuterSingleton;
}
template<> ROGUENETWORKPROJECT_API UClass* StaticClass<AHackingComponent>()
{
	return AHackingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHackingComponent);
AHackingComponent::~AHackingComponent() {}
// End Class AHackingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHackingComponent, AHackingComponent::StaticClass, TEXT("AHackingComponent"), &Z_Registration_Info_UClass_AHackingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHackingComponent), 1007564350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingComponent_h_3138078089(TEXT("/Script/RogueNetworkProject"),
	Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
