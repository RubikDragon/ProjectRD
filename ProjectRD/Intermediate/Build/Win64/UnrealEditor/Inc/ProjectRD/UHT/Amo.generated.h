// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Amo.h"

#ifdef PROJECTRD_Amo_generated_h
#error "Amo.generated.h already included, missing '#pragma once' in Amo.h"
#endif
#define PROJECTRD_Amo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAmo *****************************************************************
PROJECTRD_API UClass* Z_Construct_UClass_UAmo_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTRD_API UAmo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAmo(UAmo&&) = delete; \
	UAmo(const UAmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTRD_API, UAmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmo); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmo) \
	virtual ~UAmo() = default;


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAmo(); \
	friend struct Z_Construct_UClass_UAmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UAmo_NoRegister(); \
public: \
	DECLARE_CLASS2(UAmo, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UAmo_NoRegister) \
	DECLARE_SERIALIZER(UAmo)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAmo() {} \
public: \
	typedef UAmo UClassType; \
	typedef IAmo ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_10_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAmo;

// ********** End Interface UAmo *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Amo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
