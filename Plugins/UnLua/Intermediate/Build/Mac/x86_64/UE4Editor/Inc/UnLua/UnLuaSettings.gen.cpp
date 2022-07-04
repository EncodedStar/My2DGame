// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLua/Private/UnLuaSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaSettings() {}
// Cross Module References
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaSettings_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_UUnLuaSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnLua();
	UNLUA_API UClass* Z_Construct_UClass_ULuaEnvLocator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UUnLuaSettings::StaticRegisterNativesUUnLuaSettings()
	{
	}
	UClass* Z_Construct_UClass_UUnLuaSettings_NoRegister()
	{
		return UUnLuaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUnLuaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvLocatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnvLocatorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnLuaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "UnLua" },
		{ "IncludePath", "UnLuaSettings.h" },
		{ "ModuleRelativePath", "Private/UnLuaSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_EnvLocatorClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Runtime" },
		{ "DisplayName", "LuaEnvLocator" },
		{ "ModuleRelativePath", "Private/UnLuaSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_EnvLocatorClass = { "EnvLocatorClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnLuaSettings, EnvLocatorClass), Z_Construct_UClass_ULuaEnvLocator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_EnvLocatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_EnvLocatorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnLuaSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaSettings_Statics::NewProp_EnvLocatorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnLuaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaSettings_Statics::ClassParams = {
		&UUnLuaSettings::StaticClass,
		"UnLua",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnLuaSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUnLuaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnLuaSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnLuaSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnLuaSettings, 1053049932);
	template<> UNLUA_API UClass* StaticClass<UUnLuaSettings>()
	{
		return UUnLuaSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnLuaSettings(Z_Construct_UClass_UUnLuaSettings, &UUnLuaSettings::StaticClass, TEXT("/Script/UnLua"), TEXT("UUnLuaSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
