// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscaping_init() {}
	LANDSCAPING_API UFunction* Z_Construct_UDelegateFunction_Landscaping_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Landscaping;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Landscaping()
	{
		if (!Z_Registration_Info_UPackage__Script_Landscaping.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Landscaping_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Landscaping",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAB21BBF0,
				0xA03DEDE1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Landscaping.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Landscaping.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Landscaping(Z_Construct_UPackage__Script_Landscaping, TEXT("/Script/Landscaping"), Z_Registration_Info_UPackage__Script_Landscaping, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAB21BBF0, 0xA03DEDE1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
