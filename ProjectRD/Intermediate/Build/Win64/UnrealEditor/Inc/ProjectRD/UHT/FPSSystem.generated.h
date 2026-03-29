// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSSystem.h"

#ifdef PROJECTRD_FPSSystem_generated_h
#error "FPSSystem.generated.h already included, missing '#pragma once' in FPSSystem.h"
#endif
#define PROJECTRD_FPSSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USceneComponent;

// ********** Begin Interface UFPSSystem ***********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetBulletSpawnPorstion_Implementation(USceneComponent* SceneComponent) {}; \
	virtual void Reload_Implementation() {}; \
	virtual void Shoot_Implementation() {}; \
	DECLARE_FUNCTION(execSetBulletSpawnPorstion); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execShoot);


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_CALLBACK_WRAPPERS
PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTRD_API UFPSSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFPSSystem(UFPSSystem&&) = delete; \
	UFPSSystem(const UFPSSystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTRD_API, UFPSSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFPSSystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFPSSystem) \
	virtual ~UFPSSystem() = default;


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFPSSystem(); \
	friend struct Z_Construct_UClass_UFPSSystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_UFPSSystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UFPSSystem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_UFPSSystem_NoRegister) \
	DECLARE_SERIALIZER(UFPSSystem)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFPSSystem() {} \
public: \
	typedef UFPSSystem UClassType; \
	typedef IFPSSystem ThisClass; \
	static void Execute_Reload(UObject* O); \
	static void Execute_SetBulletSpawnPorstion(UObject* O, USceneComponent* SceneComponent); \
	static void Execute_Shoot(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_14_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_CALLBACK_WRAPPERS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFPSSystem;

// ********** End Interface UFPSSystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_FPSSystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
