// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextDialogUI.h"

#ifdef PROJECTRD_TextDialogUI_generated_h
#error "TextDialogUI.generated.h already included, missing '#pragma once' in TextDialogUI.h"
#endif
#define PROJECTRD_TextDialogUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnDialogEvent ********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_9_DELEGATE \
PROJECTRD_API void FOnDialogEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDialogEvent, int32 currentIndex);


// ********** End Delegate FOnDialogEvent **********************************************************

// ********** Begin Class UTextDialogUI ************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUpComponents); \
	DECLARE_FUNCTION(execHowToProssed); \
	DECLARE_FUNCTION(execDialogLine); \
	DECLARE_FUNCTION(execGoToDialogLineIndex); \
	DECLARE_FUNCTION(execEndDialog); \
	DECLARE_FUNCTION(execPreviesDialogLine); \
	DECLARE_FUNCTION(execAdvanceDialog); \
	DECLARE_FUNCTION(execStartDialog);


PROJECTRD_API UClass* Z_Construct_UClass_UTextDialogUI_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextDialogUI(); \
	friend struct Z_Construct_UClass_UTextDialogUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UTextDialogUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UTextDialogUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UTextDialogUI_NoRegister) \
	DECLARE_SERIALIZER(UTextDialogUI)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextDialogUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTextDialogUI(UTextDialogUI&&) = delete; \
	UTextDialogUI(const UTextDialogUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextDialogUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextDialogUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextDialogUI) \
	NO_API virtual ~UTextDialogUI();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_30_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTextDialogUI;

// ********** End Class UTextDialogUI **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_TextDialogUI_h

// ********** Begin Enum RunDialog *****************************************************************
#define FOREACH_ENUM_RUNDIALOG(op) \
	op(RunDialog::OnlyOnAdvanceCall) \
	op(RunDialog::OnlyOnAutoMatick) \
	op(RunDialog::OnAdvanceAndAutoMatick) 

enum class RunDialog : uint8;
template<> struct TIsUEnumClass<RunDialog> { enum { Value = true }; };
template<> PROJECTRD_API UEnum* StaticEnum<RunDialog>();
// ********** End Enum RunDialog *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
