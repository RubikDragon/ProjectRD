// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/Projectile/Projectile.h"

#ifdef PROJECTRD_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define PROJECTRD_Projectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Interface UProjectile **********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FireProjetile_Implementation(AActor* projectileFirer) {}; \
	DECLARE_FUNCTION(execFireProjetile);


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_CALLBACK_WRAPPERS
PROJECTRD_API UClass* Z_Construct_UClass_UProjectile_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTRD_API UProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProjectile(UProjectile&&) = delete; \
	UProjectile(const UProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTRD_API, UProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectile); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProjectile) \
	virtual ~UProjectile() = default;


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUProjectile(); \
	friend struct Z_Construct_UClass_UProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(UProjectile, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UProjectile_NoRegister) \
	DECLARE_SERIALIZER(UProjectile)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IProjectile() {} \
public: \
	typedef UProjectile UClassType; \
	typedef IProjectile ThisClass; \
	static void Execute_FireProjetile(UObject* O, AActor* projectileFirer); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_10_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_CALLBACK_WRAPPERS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProjectile;

// ********** End Interface UProjectile ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_Projectile_Projectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
