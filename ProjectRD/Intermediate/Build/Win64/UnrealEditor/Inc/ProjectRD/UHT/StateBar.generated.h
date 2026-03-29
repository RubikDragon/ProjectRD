// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateBar.h"

#ifdef PROJECTRD_StateBar_generated_h
#error "StateBar.generated.h already included, missing '#pragma once' in StateBar.h"
#endif
#define PROJECTRD_StateBar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStateBar ****************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUpValues); \
	DECLARE_FUNCTION(execUpdateCurrentValueFloat); \
	DECLARE_FUNCTION(execUpdateCurrentValue); \
	DECLARE_FUNCTION(execSetStartBarValues);


PROJECTRD_API UClass* Z_Construct_UClass_UStateBar_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateBar(); \
	friend struct Z_Construct_UClass_UStateBar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UStateBar_NoRegister(); \
public: \
	DECLARE_CLASS2(UStateBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UStateBar_NoRegister) \
	DECLARE_SERIALIZER(UStateBar)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStateBar(UStateBar&&) = delete; \
	UStateBar(const UStateBar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateBar) \
	NO_API virtual ~UStateBar();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_17_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStateBar;

// ********** End Class UStateBar ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_StateBar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
