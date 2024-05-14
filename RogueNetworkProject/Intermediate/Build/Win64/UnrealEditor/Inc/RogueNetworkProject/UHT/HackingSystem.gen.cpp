// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueNetworkProject/Public/HackingSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackingSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_AHackableCamera_NoRegister();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_UHackingSystem();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_UHackingSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueNetworkProject();
// End Cross Module References

// Begin Class UHackingSystem Function DisablePlayerControl
struct Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics
{
	struct HackingSystem_eventDisablePlayerControl_Parms
	{
		bool value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::NewProp_value_SetBit(void* Obj)
{
	((HackingSystem_eventDisablePlayerControl_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HackingSystem_eventDisablePlayerControl_Parms), &Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackingSystem, nullptr, "DisablePlayerControl", nullptr, nullptr, Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::HackingSystem_eventDisablePlayerControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::HackingSystem_eventDisablePlayerControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackingSystem_DisablePlayerControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackingSystem_DisablePlayerControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackingSystem::execDisablePlayerControl)
{
	P_GET_UBOOL(Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisablePlayerControl(Z_Param_value);
	P_NATIVE_END;
}
// End Class UHackingSystem Function DisablePlayerControl

// Begin Class UHackingSystem Function HandleHackingTransition
struct Z_Construct_UFunction_UHackingSystem_HandleHackingTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to handle transition effect and enable player control\n" },
#endif
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to handle transition effect and enable player control" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackingSystem_HandleHackingTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackingSystem, nullptr, "HandleHackingTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackingSystem_HandleHackingTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackingSystem_HandleHackingTransition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackingSystem_HandleHackingTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackingSystem_HandleHackingTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackingSystem::execHandleHackingTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleHackingTransition();
	P_NATIVE_END;
}
// End Class UHackingSystem Function HandleHackingTransition

// Begin Class UHackingSystem Function StartHacking
struct Z_Construct_UFunction_UHackingSystem_StartHacking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackingSystem_StartHacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackingSystem, nullptr, "StartHacking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackingSystem_StartHacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackingSystem_StartHacking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackingSystem_StartHacking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackingSystem_StartHacking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackingSystem::execStartHacking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartHacking();
	P_NATIVE_END;
}
// End Class UHackingSystem Function StartHacking

// Begin Class UHackingSystem Function StopHacking
struct Z_Construct_UFunction_UHackingSystem_StopHacking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to stop the hacking process\n" },
#endif
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to stop the hacking process" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackingSystem_StopHacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackingSystem, nullptr, "StopHacking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackingSystem_StopHacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackingSystem_StopHacking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackingSystem_StopHacking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackingSystem_StopHacking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackingSystem::execStopHacking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopHacking();
	P_NATIVE_END;
}
// End Class UHackingSystem Function StopHacking

// Begin Class UHackingSystem
void UHackingSystem::StaticRegisterNativesUHackingSystem()
{
	UClass* Class = UHackingSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisablePlayerControl", &UHackingSystem::execDisablePlayerControl },
		{ "HandleHackingTransition", &UHackingSystem::execHandleHackingTransition },
		{ "StartHacking", &UHackingSystem::execStartHacking },
		{ "StopHacking", &UHackingSystem::execStopHacking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHackingSystem);
UClass* Z_Construct_UClass_UHackingSystem_NoRegister()
{
	return UHackingSystem::StaticClass();
}
struct Z_Construct_UClass_UHackingSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HackingSystem.h" },
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackedCamera_MetaData[] = {
		{ "Category", "Hacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the currently hacked camera\n" },
#endif
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the currently hacked camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHacking_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Hacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag to indicate if hacking is in progress\n" },
#endif
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to indicate if hacking is in progress" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerrr_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Hacking" },
		{ "ModuleRelativePath", "Public/HackingSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HackedCamera;
	static void NewProp_bIsHacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHacking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerrr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHackingSystem_DisablePlayerControl, "DisablePlayerControl" }, // 416089783
		{ &Z_Construct_UFunction_UHackingSystem_HandleHackingTransition, "HandleHackingTransition" }, // 2119813159
		{ &Z_Construct_UFunction_UHackingSystem_StartHacking, "StartHacking" }, // 1738928368
		{ &Z_Construct_UFunction_UHackingSystem_StopHacking, "StopHacking" }, // 3722348796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHackingSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHackingSystem_Statics::NewProp_HackedCamera = { "HackedCamera", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackingSystem, HackedCamera), Z_Construct_UClass_AHackableCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackedCamera_MetaData), NewProp_HackedCamera_MetaData) };
void Z_Construct_UClass_UHackingSystem_Statics::NewProp_bIsHacking_SetBit(void* Obj)
{
	((UHackingSystem*)Obj)->bIsHacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHackingSystem_Statics::NewProp_bIsHacking = { "bIsHacking", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHackingSystem), &Z_Construct_UClass_UHackingSystem_Statics::NewProp_bIsHacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHacking_MetaData), NewProp_bIsHacking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHackingSystem_Statics::NewProp_playerrr = { "playerrr", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackingSystem, playerrr), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerrr_MetaData), NewProp_playerrr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHackingSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackingSystem_Statics::NewProp_HackedCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackingSystem_Statics::NewProp_bIsHacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackingSystem_Statics::NewProp_playerrr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHackingSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHackingSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueNetworkProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHackingSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHackingSystem_Statics::ClassParams = {
	&UHackingSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHackingSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHackingSystem_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHackingSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHackingSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHackingSystem()
{
	if (!Z_Registration_Info_UClass_UHackingSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHackingSystem.OuterSingleton, Z_Construct_UClass_UHackingSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHackingSystem.OuterSingleton;
}
template<> ROGUENETWORKPROJECT_API UClass* StaticClass<UHackingSystem>()
{
	return UHackingSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHackingSystem);
UHackingSystem::~UHackingSystem() {}
// End Class UHackingSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHackingSystem, UHackingSystem::StaticClass, TEXT("UHackingSystem"), &Z_Registration_Info_UClass_UHackingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHackingSystem), 1782549818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_1106464113(TEXT("/Script/RogueNetworkProject"),
	Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
