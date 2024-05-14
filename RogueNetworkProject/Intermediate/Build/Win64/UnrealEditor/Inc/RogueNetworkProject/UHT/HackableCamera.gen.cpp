// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RogueNetworkProject/Public/HackableCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackableCamera() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_AHackableCamera();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_AHackableCamera_NoRegister();
ROGUENETWORKPROJECT_API UClass* Z_Construct_UClass_UHackingSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_RogueNetworkProject();
// End Cross Module References

// Begin Class AHackableCamera Function DisableCameraControl
struct Z_Construct_UFunction_AHackableCamera_DisableCameraControl_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to disable player control of the camera\n" },
#endif
		{ "ModuleRelativePath", "Public/HackableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to disable player control of the camera" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHackableCamera_DisableCameraControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHackableCamera, nullptr, "DisableCameraControl", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHackableCamera_DisableCameraControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHackableCamera_DisableCameraControl_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AHackableCamera_DisableCameraControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHackableCamera_DisableCameraControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHackableCamera::execDisableCameraControl)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableCameraControl();
	P_NATIVE_END;
}
// End Class AHackableCamera Function DisableCameraControl

// Begin Class AHackableCamera Function EnableCameraControl
struct Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics
{
	struct HackableCamera_eventEnableCameraControl_Parms
	{
		UHackingSystem* system;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to enable player control of the camera\n" },
#endif
		{ "ModuleRelativePath", "Public/HackableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to enable player control of the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_system_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_system;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::NewProp_system = { "system", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HackableCamera_eventEnableCameraControl_Parms, system), Z_Construct_UClass_UHackingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_system_MetaData), NewProp_system_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::NewProp_system,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHackableCamera, nullptr, "EnableCameraControl", nullptr, nullptr, Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::HackableCamera_eventEnableCameraControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::HackableCamera_eventEnableCameraControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHackableCamera_EnableCameraControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHackableCamera_EnableCameraControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHackableCamera::execEnableCameraControl)
{
	P_GET_OBJECT(UHackingSystem,Z_Param_system);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableCameraControl(Z_Param_system);
	P_NATIVE_END;
}
// End Class AHackableCamera Function EnableCameraControl

// Begin Class AHackableCamera
void AHackableCamera::StaticRegisterNativesAHackableCamera()
{
	UClass* Class = AHackableCamera::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableCameraControl", &AHackableCamera::execDisableCameraControl },
		{ "EnableCameraControl", &AHackableCamera::execEnableCameraControl },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHackableCamera);
UClass* Z_Construct_UClass_AHackableCamera_NoRegister()
{
	return AHackableCamera::StaticClass();
}
struct Z_Construct_UClass_AHackableCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HackableCamera.h" },
		{ "ModuleRelativePath", "Public/HackableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraControlEnabled_MetaData[] = {
		{ "Category", "Hacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag to indicate if player control is enabled\n" },
#endif
		{ "ModuleRelativePath", "Public/HackableCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to indicate if player control is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hackingSystem_MetaData[] = {
		{ "Category", "Hacking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HackableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationSpeed_MetaData[] = {
		{ "Category", "Hacking" },
		{ "ModuleRelativePath", "Public/HackableCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationDamping_MetaData[] = {
		{ "Category", "Hacking" },
		{ "ModuleRelativePath", "Public/HackableCamera.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCameraControlEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraControlEnabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hackingSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationDamping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHackableCamera_DisableCameraControl, "DisableCameraControl" }, // 588450934
		{ &Z_Construct_UFunction_AHackableCamera_EnableCameraControl, "EnableCameraControl" }, // 1218285595
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHackableCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AHackableCamera_Statics::NewProp_bCameraControlEnabled_SetBit(void* Obj)
{
	((AHackableCamera*)Obj)->bCameraControlEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHackableCamera_Statics::NewProp_bCameraControlEnabled = { "bCameraControlEnabled", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHackableCamera), &Z_Construct_UClass_AHackableCamera_Statics::NewProp_bCameraControlEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraControlEnabled_MetaData), NewProp_bCameraControlEnabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHackableCamera_Statics::NewProp_hackingSystem = { "hackingSystem", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHackableCamera, hackingSystem), Z_Construct_UClass_UHackingSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hackingSystem_MetaData), NewProp_hackingSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHackableCamera_Statics::NewProp_CameraRotationSpeed = { "CameraRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHackableCamera, CameraRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationSpeed_MetaData), NewProp_CameraRotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHackableCamera_Statics::NewProp_CameraRotationDamping = { "CameraRotationDamping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHackableCamera, CameraRotationDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationDamping_MetaData), NewProp_CameraRotationDamping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHackableCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableCamera_Statics::NewProp_bCameraControlEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableCamera_Statics::NewProp_hackingSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableCamera_Statics::NewProp_CameraRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHackableCamera_Statics::NewProp_CameraRotationDamping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHackableCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHackableCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_RogueNetworkProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHackableCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHackableCamera_Statics::ClassParams = {
	&AHackableCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHackableCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHackableCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHackableCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AHackableCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHackableCamera()
{
	if (!Z_Registration_Info_UClass_AHackableCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHackableCamera.OuterSingleton, Z_Construct_UClass_AHackableCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHackableCamera.OuterSingleton;
}
template<> ROGUENETWORKPROJECT_API UClass* StaticClass<AHackableCamera>()
{
	return AHackableCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHackableCamera);
AHackableCamera::~AHackableCamera() {}
// End Class AHackableCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHackableCamera, AHackableCamera::StaticClass, TEXT("AHackableCamera"), &Z_Registration_Info_UClass_AHackableCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHackableCamera), 1046635111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_3370843191(TEXT("/Script/RogueNetworkProject"),
	Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
