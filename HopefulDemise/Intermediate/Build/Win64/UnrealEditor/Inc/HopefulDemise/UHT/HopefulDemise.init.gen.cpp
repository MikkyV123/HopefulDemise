// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHopefulDemise_init() {}
	HOPEFULDEMISE_API UFunction* Z_Construct_UDelegateFunction_HopefulDemise_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HopefulDemise;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HopefulDemise()
	{
		if (!Z_Registration_Info_UPackage__Script_HopefulDemise.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HopefulDemise_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HopefulDemise",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA9233F80,
				0xEB076070,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HopefulDemise.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HopefulDemise.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HopefulDemise(Z_Construct_UPackage__Script_HopefulDemise, TEXT("/Script/HopefulDemise"), Z_Registration_Info_UPackage__Script_HopefulDemise, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA9233F80, 0xEB076070));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
