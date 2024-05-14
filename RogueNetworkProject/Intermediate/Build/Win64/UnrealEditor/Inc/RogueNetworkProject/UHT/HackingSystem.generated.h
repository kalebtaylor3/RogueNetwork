// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HackingSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROGUENETWORKPROJECT_HackingSystem_generated_h
#error "HackingSystem.generated.h already included, missing '#pragma once' in HackingSystem.h"
#endif
#define ROGUENETWORKPROJECT_HackingSystem_generated_h

#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisablePlayerControl); \
	DECLARE_FUNCTION(execHandleHackingTransition); \
	DECLARE_FUNCTION(execStopHacking); \
	DECLARE_FUNCTION(execStartHacking);


#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHackingSystem(); \
	friend struct Z_Construct_UClass_UHackingSystem_Statics; \
public: \
	DECLARE_CLASS(UHackingSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RogueNetworkProject"), NO_API) \
	DECLARE_SERIALIZER(UHackingSystem)


#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHackingSystem(UHackingSystem&&); \
	UHackingSystem(const UHackingSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHackingSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHackingSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHackingSystem) \
	NO_API virtual ~UHackingSystem();


#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_14_PROLOG
#define FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROGUENETWORKPROJECT_API UClass* StaticClass<class UHackingSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RogueNetworkProject_Source_RogueNetworkProject_Public_HackingSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
