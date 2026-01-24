// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeDragonGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCodeDragonGameMode() {}

// ********** Begin Cross Module References ********************************************************
CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonGameMode();
CODEDRAGON_API UClass* Z_Construct_UClass_ACodeDragonGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CodeDragon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACodeDragonGameMode ******************************************************
void ACodeDragonGameMode::StaticRegisterNativesACodeDragonGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACodeDragonGameMode;
UClass* ACodeDragonGameMode::GetPrivateStaticClass()
{
	using TClass = ACodeDragonGameMode;
	if (!Z_Registration_Info_UClass_ACodeDragonGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CodeDragonGameMode"),
			Z_Registration_Info_UClass_ACodeDragonGameMode.InnerSingleton,
			StaticRegisterNativesACodeDragonGameMode,
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
	return Z_Registration_Info_UClass_ACodeDragonGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACodeDragonGameMode_NoRegister()
{
	return ACodeDragonGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACodeDragonGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CodeDragonGameMode.h" },
		{ "ModuleRelativePath", "CodeDragonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodeDragonGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACodeDragonGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CodeDragon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACodeDragonGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodeDragonGameMode_Statics::ClassParams = {
	&ACodeDragonGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACodeDragonGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACodeDragonGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACodeDragonGameMode()
{
	if (!Z_Registration_Info_UClass_ACodeDragonGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACodeDragonGameMode.OuterSingleton, Z_Construct_UClass_ACodeDragonGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACodeDragonGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACodeDragonGameMode);
ACodeDragonGameMode::~ACodeDragonGameMode() {}
// ********** End Class ACodeDragonGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h__Script_CodeDragon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACodeDragonGameMode, ACodeDragonGameMode::StaticClass, TEXT("ACodeDragonGameMode"), &Z_Registration_Info_UClass_ACodeDragonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodeDragonGameMode), 4019882712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h__Script_CodeDragon_239494873(TEXT("/Script/CodeDragon"),
	Z_CompiledInDeferFile_FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h__Script_CodeDragon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mnt_HDD_UnrealProjects_CodeDragon_Source_CodeDragon_CodeDragonGameMode_h__Script_CodeDragon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
