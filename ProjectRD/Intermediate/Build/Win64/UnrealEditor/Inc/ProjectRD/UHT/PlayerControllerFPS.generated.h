// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerControllerFPS.h"

#ifdef PROJECTRD_PlayerControllerFPS_generated_h
#error "PlayerControllerFPS.generated.h already included, missing '#pragma once' in PlayerControllerFPS.h"
#endif
#define PROJECTRD_PlayerControllerFPS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class APlayerControllerFPS *****************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleReload); \
	DECLARE_FUNCTION(execHandleShoot); \
	DECLARE_FUNCTION(execHandleJump); \
	DECLARE_FUNCTION(execHandleLookAround); \
	DECLARE_FUNCTION(execHandleMovemment); \
	DECLARE_FUNCTION(execSetupBindes);


PROJECTRD_API UClass* Z_Construct_UClass_APlayerControllerFPS_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerControllerFPS(); \
	friend struct Z_Construct_UClass_APlayerControllerFPS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_APlayerControllerFPS_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerControllerFPS, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_APlayerControllerFPS_NoRegister) \
	DECLARE_SERIALIZER(APlayerControllerFPS)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerFPS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerControllerFPS(APlayerControllerFPS&&) = delete; \
	APlayerControllerFPS(const APlayerControllerFPS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerFPS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerFPS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerFPS) \
	NO_API virtual ~APlayerControllerFPS();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_15_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerControllerFPS;

// ********** End Class APlayerControllerFPS *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerControllerFPS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
