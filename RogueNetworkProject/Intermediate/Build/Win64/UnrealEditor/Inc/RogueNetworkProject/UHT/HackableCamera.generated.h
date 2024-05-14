// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HackableCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHackingSystem;
#ifdef ROGUENETWORKPROJECT_HackableCamera_generated_h
#error "HackableCamera.generated.h already included, missing '#pragma once' in HackableCamera.h"
#endif
#define ROGUENETWORKPROJECT_HackableCamera_generated_h

#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableCameraControl); \
	DECLARE_FUNCTION(execEnableCameraControl);


#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHackableCamera(); \
	friend struct Z_Construct_UClass_AHackableCamera_Statics; \
public: \
	DECLARE_CLASS(AHackableCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RogueNetworkProject"), NO_API) \
	DECLARE_SERIALIZER(AHackableCamera)


#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHackableCamera(AHackableCamera&&); \
	AHackableCamera(const AHackableCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHackableCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHackableCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHackableCamera) \
	NO_API virtual ~AHackableCamera();


#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_9_PROLOG
#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_12_INCLASS_NO_PURE_DECLS \
	FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROGUENETWORKPROJECT_API UClass* StaticClass<class AHackableCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackableCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
