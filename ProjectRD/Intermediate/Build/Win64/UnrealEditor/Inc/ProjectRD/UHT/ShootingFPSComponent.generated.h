// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/FPSSystem/ShootingFPSComponent.h"

#ifdef PROJECTRD_ShootingFPSComponent_generated_h
#error "ShootingFPSComponent.generated.h already included, missing '#pragma once' in ShootingFPSComponent.h"
#endif
#define PROJECTRD_ShootingFPSComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FAmoChange ************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_25_DELEGATE \
static void FAmoChange_DelegateWrapper(const FMulticastScriptDelegate& AmoChange, int32 CurrentAmo);


// ********** End Delegate FAmoChange **************************************************************

// ********** Begin Delegate FSetUpAmo *************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_30_DELEGATE \
static void FSetUpAmo_DelegateWrapper(const FMulticastScriptDelegate& SetUpAmo, int32 CurrentAmo, int32 minAmo, int32 maxAmo);


// ********** End Delegate FSetUpAmo ***************************************************************

// ********** Begin Delegate FNotefy ***************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_32_DELEGATE \
static void FNotefy_DelegateWrapper(const FMulticastScriptDelegate& Notefy);


// ********** End Delegate FNotefy *****************************************************************

// ********** Begin Class UShootingFPSComponent ****************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetCanReload); \
	DECLARE_FUNCTION(execResetCanShot); \
	DECLARE_FUNCTION(execChangeAmo);


PROJECTRD_API UClass* Z_Construct_UClass_UShootingFPSComponent_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShootingFPSComponent(); \
	friend struct Z_Construct_UClass_UShootingFPSComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UShootingFPSComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UShootingFPSComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UShootingFPSComponent_NoRegister) \
	DECLARE_SERIALIZER(UShootingFPSComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UShootingFPSComponent*>(this); }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShootingFPSComponent(UShootingFPSComponent&&) = delete; \
	UShootingFPSComponent(const UShootingFPSComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootingFPSComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootingFPSComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShootingFPSComponent) \
	NO_API virtual ~UShootingFPSComponent();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_21_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShootingFPSComponent;

// ********** End Class UShootingFPSComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_FPSSystem_ShootingFPSComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
