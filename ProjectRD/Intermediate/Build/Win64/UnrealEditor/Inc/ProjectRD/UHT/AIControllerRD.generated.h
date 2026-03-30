// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIControllerRD.h"

#ifdef PROJECTRD_AIControllerRD_generated_h
#error "AIControllerRD.generated.h already included, missing '#pragma once' in AIControllerRD.h"
#endif
#define PROJECTRD_AIControllerRD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAIControllerRD **********************************************************
PROJECTRD_API UClass* Z_Construct_UClass_AAIControllerRD_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIControllerRD(); \
	friend struct Z_Construct_UClass_AAIControllerRD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_AAIControllerRD_NoRegister(); \
public: \
	DECLARE_CLASS2(AAIControllerRD, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_AAIControllerRD_NoRegister) \
	DECLARE_SERIALIZER(AAIControllerRD)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIControllerRD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAIControllerRD(AAIControllerRD&&) = delete; \
	AAIControllerRD(const AAIControllerRD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIControllerRD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIControllerRD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIControllerRD) \
	NO_API virtual ~AAIControllerRD();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h_12_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAIControllerRD;

// ********** End Class AAIControllerRD ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AIControllerRD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
