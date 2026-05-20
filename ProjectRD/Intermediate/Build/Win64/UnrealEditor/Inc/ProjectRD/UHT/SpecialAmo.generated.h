// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/SpecialAmo/SpecialAmo.h"

#ifdef PROJECTRD_SpecialAmo_generated_h
#error "SpecialAmo.generated.h already included, missing '#pragma once' in SpecialAmo.h"
#endif
#define PROJECTRD_SpecialAmo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Interface USpecialAmo **********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PickUpAmo_Implementation(AActor* pickUpByActor) {}; \
	virtual TSubclassOf<AActor> GetSpecialBullet_Implementation() { return NULL; }; \
	DECLARE_FUNCTION(execPickUpAmo); \
	DECLARE_FUNCTION(execGetSpecialBullet);


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_CALLBACK_WRAPPERS
PROJECTRD_API UClass* Z_Construct_UClass_USpecialAmo_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTRD_API USpecialAmo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpecialAmo(USpecialAmo&&) = delete; \
	USpecialAmo(const USpecialAmo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTRD_API, USpecialAmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpecialAmo); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpecialAmo) \
	virtual ~USpecialAmo() = default;


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSpecialAmo(); \
	friend struct Z_Construct_UClass_USpecialAmo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_USpecialAmo_NoRegister(); \
public: \
	DECLARE_CLASS2(USpecialAmo, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_USpecialAmo_NoRegister) \
	DECLARE_SERIALIZER(USpecialAmo)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISpecialAmo() {} \
public: \
	typedef USpecialAmo UClassType; \
	typedef ISpecialAmo ThisClass; \
	static TSubclassOf<AActor> Execute_GetSpecialBullet(UObject* O); \
	static void Execute_PickUpAmo(UObject* O, AActor* pickUpByActor); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_10_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_CALLBACK_WRAPPERS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpecialAmo;

// ********** End Interface USpecialAmo ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_Interface_SpecialAmo_SpecialAmo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
