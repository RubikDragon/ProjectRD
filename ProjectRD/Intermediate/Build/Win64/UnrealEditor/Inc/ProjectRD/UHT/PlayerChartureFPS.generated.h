// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerChartureFPS.h"

#ifdef PROJECTRD_PlayerChartureFPS_generated_h
#error "PlayerChartureFPS.generated.h already included, missing '#pragma once' in PlayerChartureFPS.h"
#endif
#define PROJECTRD_PlayerChartureFPS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerChartureFPS *******************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayerReload); \
	DECLARE_FUNCTION(execPlayerShoot); \
	DECLARE_FUNCTION(execPlayerJump); \
	DECLARE_FUNCTION(execPlayerLookAround); \
	DECLARE_FUNCTION(execPlayerMove);


PROJECTRD_API UClass* Z_Construct_UClass_APlayerChartureFPS_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerChartureFPS(); \
	friend struct Z_Construct_UClass_APlayerChartureFPS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_APlayerChartureFPS_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerChartureFPS, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_APlayerChartureFPS_NoRegister) \
	DECLARE_SERIALIZER(APlayerChartureFPS)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerChartureFPS(APlayerChartureFPS&&) = delete; \
	APlayerChartureFPS(const APlayerChartureFPS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerChartureFPS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerChartureFPS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerChartureFPS) \
	NO_API virtual ~APlayerChartureFPS();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_13_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerChartureFPS;

// ********** End Class APlayerChartureFPS *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_PlayerChartureFPS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
