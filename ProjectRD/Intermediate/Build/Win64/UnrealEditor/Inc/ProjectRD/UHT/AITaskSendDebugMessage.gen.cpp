// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiStuff/AITaskSendDebugMessage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAITaskSendDebugMessage() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskSendDebugMessage();
PROJECTRD_API UClass* Z_Construct_UClass_UAITaskSendDebugMessage_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAITaskSendDebugMessage **************************************************
void UAITaskSendDebugMessage::StaticRegisterNativesUAITaskSendDebugMessage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAITaskSendDebugMessage;
UClass* UAITaskSendDebugMessage::GetPrivateStaticClass()
{
	using TClass = UAITaskSendDebugMessage;
	if (!Z_Registration_Info_UClass_UAITaskSendDebugMessage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AITaskSendDebugMessage"),
			Z_Registration_Info_UClass_UAITaskSendDebugMessage.InnerSingleton,
			StaticRegisterNativesUAITaskSendDebugMessage,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAITaskSendDebugMessage.InnerSingleton;
}
UClass* Z_Construct_UClass_UAITaskSendDebugMessage_NoRegister()
{
	return UAITaskSendDebugMessage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAITaskSendDebugMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AiStuff/AITaskSendDebugMessage.h" },
		{ "ModuleRelativePath", "Public/AiStuff/AITaskSendDebugMessage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debugText_MetaData[] = {
		{ "Category", "RD|Print" },
		{ "ModuleRelativePath", "Public/AiStuff/AITaskSendDebugMessage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_debugText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITaskSendDebugMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAITaskSendDebugMessage_Statics::NewProp_debugText = { "debugText", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAITaskSendDebugMessage, debugText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debugText_MetaData), NewProp_debugText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITaskSendDebugMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITaskSendDebugMessage_Statics::NewProp_debugText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSendDebugMessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAITaskSendDebugMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSendDebugMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITaskSendDebugMessage_Statics::ClassParams = {
	&UAITaskSendDebugMessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAITaskSendDebugMessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSendDebugMessage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAITaskSendDebugMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAITaskSendDebugMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAITaskSendDebugMessage()
{
	if (!Z_Registration_Info_UClass_UAITaskSendDebugMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITaskSendDebugMessage.OuterSingleton, Z_Construct_UClass_UAITaskSendDebugMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAITaskSendDebugMessage.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAITaskSendDebugMessage);
UAITaskSendDebugMessage::~UAITaskSendDebugMessage() {}
// ********** End Class UAITaskSendDebugMessage ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskSendDebugMessage_h__Script_ProjectRD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAITaskSendDebugMessage, UAITaskSendDebugMessage::StaticClass, TEXT("UAITaskSendDebugMessage"), &Z_Registration_Info_UClass_UAITaskSendDebugMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITaskSendDebugMessage), 183848722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskSendDebugMessage_h__Script_ProjectRD_521228270(TEXT("/Script/ProjectRD"),
	Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskSendDebugMessage_h__Script_ProjectRD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexa_Desktop_Unreal_projects_ProjectRD_ProjectRD_Source_ProjectRD_Public_AiStuff_AITaskSendDebugMessage_h__Script_ProjectRD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
