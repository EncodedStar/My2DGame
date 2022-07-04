// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLua/Public/LuaFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaFunction() {}
// Cross Module References
	UNLUA_API UClass* Z_Construct_UClass_ULuaFunction_NoRegister();
	UNLUA_API UClass* Z_Construct_UClass_ULuaFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	UPackage* Z_Construct_UPackage__Script_UnLua();
// End Cross Module References
	void ULuaFunction::StaticRegisterNativesULuaFunction()
	{
	}
	UClass* Z_Construct_UClass_ULuaFunction_NoRegister()
	{
		return ULuaFunction::StaticClass();
	}
	struct Z_Construct_UClass_ULuaFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLua,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaFunction.h" },
		{ "ModuleRelativePath", "Public/LuaFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaFunction_Statics::ClassParams = {
		&ULuaFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaFunction, 314581200);
	template<> UNLUA_API UClass* StaticClass<ULuaFunction>()
	{
		return ULuaFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaFunction(Z_Construct_UClass_ULuaFunction, &ULuaFunction::StaticClass, TEXT("/Script/UnLua"), TEXT("ULuaFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
