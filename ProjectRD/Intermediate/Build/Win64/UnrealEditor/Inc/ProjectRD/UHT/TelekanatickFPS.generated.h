// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TelekanatickFPS.h"

#ifdef PROJECTRD_TelekanatickFPS_generated_h
#error "TelekanatickFPS.generated.h already included, missing '#pragma once' in TelekanatickFPS.h"
#endif
#define PROJECTRD_TelekanatickFPS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USphereComponent;

// ********** Begin Delegate FAmoChange ************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_11_DELEGATE \
PROJECTRD_API void FAmoChange_DelegateWrapper(const FMulticastScriptDelegate& AmoChange, int32 CurrentAmo);


// ********** End Delegate FAmoChange **************************************************************

// ********** Begin Delegate FSetUpAmo *************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_16_DELEGATE \
PROJECTRD_API void FSetUpAmo_DelegateWrapper(const FMulticastScriptDelegate& SetUpAmo, int32 CurrentAmo, int32 minAmo, int32 maxAmo);


// ********** End Delegate FSetUpAmo ***************************************************************

// ********** Begin Class UTelekanatickFPS *********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetCanShot); \
	DECLARE_FUNCTION(execChangeAmo); \
	DECLARE_FUNCTION(execSetBulletSpawnPortsion);


PROJECTRD_API UClass* Z_Construct_UClass_UTelekanatickFPS_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTelekanatickFPS(); \
	friend struct Z_Construct_UClass_UTelekanatickFPS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UTelekanatickFPS_NoRegister(); \
public: \
	DECLARE_CLASS2(UTelekanatickFPS, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UTelekanatickFPS_NoRegister) \
	DECLARE_SERIALIZER(UTelekanatickFPS) \
	virtual UObject* _getUObject() const override { return const_cast<UTelekanatickFPS*>(this); }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTelekanatickFPS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTelekanatickFPS(UTelekanatickFPS&&) = delete; \
	UTelekanatickFPS(const UTelekanatickFPS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTelekanatickFPS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTelekanatickFPS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTelekanatickFPS) \
	NO_API virtual ~UTelekanatickFPS();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_22_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTelekanatickFPS;

// ********** End Class UTelekanatickFPS ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TelekanatickFPS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
