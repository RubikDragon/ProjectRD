// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameComponents/SpawnObjects.h"

#ifdef PROJECTRD_SpawnObjects_generated_h
#error "SpawnObjects.generated.h already included, missing '#pragma once' in SpawnObjects.h"
#endif
#define PROJECTRD_SpawnObjects_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpawnObjects ************************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChalkulateChance); \
	DECLARE_FUNCTION(execSpawnObjects);


PROJECTRD_API UClass* Z_Construct_UClass_USpawnObjects_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawnObjects(); \
	friend struct Z_Construct_UClass_USpawnObjects_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_USpawnObjects_NoRegister(); \
public: \
	DECLARE_CLASS2(USpawnObjects, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_USpawnObjects_NoRegister) \
	DECLARE_SERIALIZER(USpawnObjects)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpawnObjects(USpawnObjects&&) = delete; \
	USpawnObjects(const USpawnObjects&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnObjects); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnObjects); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpawnObjects) \
	NO_API virtual ~USpawnObjects();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_10_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpawnObjects;

// ********** End Class USpawnObjects **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnObjects_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
