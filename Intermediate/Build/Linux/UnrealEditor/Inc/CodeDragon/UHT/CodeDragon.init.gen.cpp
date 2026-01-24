// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeDragon_init() {}
	CODEDRAGON_API UFunction* Z_Construct_UDelegateFunction_CodeDragon_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CodeDragon;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CodeDragon()
	{
		if (!Z_Registration_Info_UPackage__Script_CodeDragon.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CodeDragon_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CodeDragon",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x369E5B3F,
				0xAE485DA4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CodeDragon.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CodeDragon.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CodeDragon(Z_Construct_UPackage__Script_CodeDragon, TEXT("/Script/CodeDragon"), Z_Registration_Info_UPackage__Script_CodeDragon, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x369E5B3F, 0xAE485DA4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
