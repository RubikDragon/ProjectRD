// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/Projectile/ReturnBullet.h"

#ifdef PROJECTRD_ReturnBullet_generated_h
#error "ReturnBullet.generated.h already included, missing '#pragma once' in ReturnBullet.h"
#endif
#define PROJECTRD_ReturnBullet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AReturnBullet ************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPirseCooldown); \
	DECLARE_FUNCTION(execPirse); \
	DECLARE_FUNCTION(execFireProjetile_Implementation); \
	DECLARE_FUNCTION(execBegainOverlap); \
	DECLARE_FUNCTION(execDestroyProjectile); \
	DECLARE_FUNCTION(execBulletGoBackwords);


PROJECTRD_API UClass* Z_Construct_UClass_AReturnBullet_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReturnBullet(); \
	friend struct Z_Construct_UClass_AReturnBullet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_AReturnBullet_NoRegister(); \
public: \
	DECLARE_CLASS2(AReturnBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_AReturnBullet_NoRegister) \
	DECLARE_SERIALIZER(AReturnBullet) \
	virtual UObject* _getUObject() const override { return const_cast<AReturnBullet*>(this); }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AReturnBullet(AReturnBullet&&) = delete; \
	AReturnBullet(const AReturnBullet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReturnBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReturnBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReturnBullet) \
	NO_API virtual ~AReturnBullet();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_16_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AReturnBullet;

// ********** End Class AReturnBullet **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_ReturnBullet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
