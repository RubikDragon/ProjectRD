// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/SpecialAmo/SpecialBulletAmo.h"

#ifdef PROJECTRD_SpecialBulletAmo_generated_h
#error "SpecialBulletAmo.generated.h already included, missing '#pragma once' in SpecialBulletAmo.h"
#endif
#define PROJECTRD_SpecialBulletAmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ASpecialBulletAmo ********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPickUpAmo_Implementation); \
	DECLARE_FUNCTION(execGetSpecialBullet_Implementation);


PROJECTRD_API UClass* Z_Construct_UClass_ASpecialBulletAmo_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpecialBulletAmo(); \
	friend struct Z_Construct_UClass_ASpecialBulletAmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_ASpecialBulletAmo_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpecialBulletAmo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_ASpecialBulletAmo_NoRegister) \
	DECLARE_SERIALIZER(ASpecialBulletAmo) \
	virtual UObject* _getUObject() const override { return const_cast<ASpecialBulletAmo*>(this); }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpecialBulletAmo(ASpecialBulletAmo&&) = delete; \
	ASpecialBulletAmo(const ASpecialBulletAmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpecialBulletAmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpecialBulletAmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpecialBulletAmo) \
	NO_API virtual ~ASpecialBulletAmo();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_11_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpecialBulletAmo;

// ********** End Class ASpecialBulletAmo **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialBulletAmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
