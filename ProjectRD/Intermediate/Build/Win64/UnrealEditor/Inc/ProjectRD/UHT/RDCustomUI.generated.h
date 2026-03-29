// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RDCustomUI.h"

#ifdef PROJECTRD_RDCustomUI_generated_h
#error "RDCustomUI.generated.h already included, missing '#pragma once' in RDCustomUI.h"
#endif
#define PROJECTRD_RDCustomUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UUserWidget;

// ********** Begin Class ARDCustomUI **************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUpWight);


PROJECTRD_API UClass* Z_Construct_UClass_ARDCustomUI_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARDCustomUI(); \
	friend struct Z_Construct_UClass_ARDCustomUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_ARDCustomUI_NoRegister(); \
public: \
	DECLARE_CLASS2(ARDCustomUI, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_ARDCustomUI_NoRegister) \
	DECLARE_SERIALIZER(ARDCustomUI)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARDCustomUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARDCustomUI(ARDCustomUI&&) = delete; \
	ARDCustomUI(const ARDCustomUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARDCustomUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARDCustomUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARDCustomUI) \
	NO_API virtual ~ARDCustomUI();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_14_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARDCustomUI;

// ********** End Class ARDCustomUI ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_RDCustomUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
