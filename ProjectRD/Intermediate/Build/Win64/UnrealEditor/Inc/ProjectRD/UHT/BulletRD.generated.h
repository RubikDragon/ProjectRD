// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BulletRD.h"

#ifdef PROJECTRD_BulletRD_generated_h
#error "BulletRD.generated.h already included, missing '#pragma once' in BulletRD.h"
#endif
#define PROJECTRD_BulletRD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABulletRD ****************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBulletDestroy); \
	DECLARE_FUNCTION(execHitDestroy); \
	DECLARE_FUNCTION(execBulletHit); \
	DECLARE_FUNCTION(execBegainOverlap);


PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletRD(); \
	friend struct Z_Construct_UClass_ABulletRD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_ABulletRD_NoRegister(); \
public: \
	DECLARE_CLASS2(ABulletRD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_ABulletRD_NoRegister) \
	DECLARE_SERIALIZER(ABulletRD)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABulletRD(ABulletRD&&) = delete; \
	ABulletRD(const ABulletRD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletRD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletRD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletRD) \
	NO_API virtual ~ABulletRD();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_9_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABulletRD;

// ********** End Class ABulletRD ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_BulletRD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
