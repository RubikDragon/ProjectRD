// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameComponents/SpawnActorPrefab.h"

#ifdef PROJECTRD_SpawnActorPrefab_generated_h
#error "SpawnActorPrefab.generated.h already included, missing '#pragma once' in SpawnActorPrefab.h"
#endif
#define PROJECTRD_SpawnActorPrefab_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ASpawnActorPrefab ********************************************************
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnPrefabActor); \
	DECLARE_FUNCTION(execSpawnActor);


PROJECTRD_API UClass* Z_Construct_UClass_ASpawnActorPrefab_NoRegister();

#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnActorPrefab(); \
	friend struct Z_Construct_UClass_ASpawnActorPrefab_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROJECTRD_API UClass* Z_Construct_UClass_ASpawnActorPrefab_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpawnActorPrefab, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRD"), Z_Construct_UClass_ASpawnActorPrefab_NoRegister) \
	DECLARE_SERIALIZER(ASpawnActorPrefab)


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpawnActorPrefab(ASpawnActorPrefab&&) = delete; \
	ASpawnActorPrefab(const ASpawnActorPrefab&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnActorPrefab); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnActorPrefab); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnActorPrefab) \
	NO_API virtual ~ASpawnActorPrefab();


#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_9_PROLOG
#define FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpawnActorPrefab;

// ********** End Class ASpawnActorPrefab **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_GameComponents_SpawnActorPrefab_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
