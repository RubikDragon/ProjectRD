// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BasicAmo.h"

#ifdef PROJECTRD_BasicAmo_generated_h
#error "BasicAmo.generated.h already included, missing '#pragma once' in BasicAmo.h"
#endif
#define PROJECTRD_BasicAmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABasicAmo ****************************************************************
PROJECTRD_API UClass* Z_Construct_UClass_ABasicAmo_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicAmo(); \
	friend struct Z_Construct_UClass_ABasicAmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_ABasicAmo_NoRegister(); \
public: \
	DECLARE_CLASS2(ABasicAmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_ABasicAmo_NoRegister) \
	DECLARE_SERIALIZER(ABasicAmo) \
	virtual UObject* _getUObject() const override { return const_cast<ABasicAmo*>(this); }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABasicAmo(ABasicAmo&&) = delete; \
	ABasicAmo(const ABasicAmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicAmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicAmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicAmo) \
	NO_API virtual ~ABasicAmo();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h_12_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABasicAmo;

// ********** End Class ABasicAmo ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BasicAmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
