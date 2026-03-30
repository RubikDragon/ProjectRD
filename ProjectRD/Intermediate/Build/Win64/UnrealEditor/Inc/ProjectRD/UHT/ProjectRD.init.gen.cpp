// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectRD_init() {}
	PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature();
	PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature();
	PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature();
	PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature();
	PROJECTRD_API UFunction* Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectRD;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectRD()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectRD.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectRD_AmoChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectRD_OnDeadth__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectRD_OnHealthChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectRD_OnHealtStartUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectRD_SetUpAmo__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectRD",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x65DCD481,
				0x626F164C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectRD.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectRD.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectRD(Z_Construct_UPackage__Script_ProjectRD, TEXT("/Script/ProjectRD"), Z_Registration_Info_UPackage__Script_ProjectRD, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x65DCD481, 0x626F164C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
