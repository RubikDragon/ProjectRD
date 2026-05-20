// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ObjectBar.h"

#ifdef PROJECTRD_ObjectBar_generated_h
#error "ObjectBar.generated.h already included, missing '#pragma once' in ObjectBar.h"
#endif
#define PROJECTRD_ObjectBar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin ScriptStruct FObjectColor ******************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObjectColor_Statics; \
	PROJECTRD_API static class UScriptStruct* StaticStruct();


struct FObjectColor;
// ********** End ScriptStruct FObjectColor ********************************************************

// ********** Begin Class UObjectBar ***************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeMetter); \
	DECLARE_FUNCTION(execSetMetter);


PROJECTRD_API UClass* Z_Construct_UClass_UObjectBar_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectBar(); \
	friend struct Z_Construct_UClass_UObjectBar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UObjectBar_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UObjectBar_NoRegister) \
	DECLARE_SERIALIZER(UObjectBar)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectBar(UObjectBar&&) = delete; \
	UObjectBar(const UObjectBar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectBar) \
	NO_API virtual ~UObjectBar();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_28_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectBar;

// ********** End Class UObjectBar *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_UI_ObjectBar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
