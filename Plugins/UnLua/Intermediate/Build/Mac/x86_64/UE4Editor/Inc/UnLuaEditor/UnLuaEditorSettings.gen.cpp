// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnLuaEditor/Private/UnLuaEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnLuaEditorSettings() {}
// Cross Module References
	UNLUAEDITOR_API UEnum* Z_Construct_UEnum_UnLuaEditor_EHotReloadMode();
	UPackage* Z_Construct_UPackage__Script_UnLuaEditor();
	UNLUAEDITOR_API UEnum* Z_Construct_UEnum_UnLuaEditor_EUpdateMode();
	UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaEditorSettings_NoRegister();
	UNLUAEDITOR_API UClass* Z_Construct_UClass_UUnLuaEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EHotReloadMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnLuaEditor_EHotReloadMode, Z_Construct_UPackage__Script_UnLuaEditor(), TEXT("EHotReloadMode"));
		}
		return Singleton;
	}
	template<> UNLUAEDITOR_API UEnum* StaticEnum<EHotReloadMode>()
	{
		return EHotReloadMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHotReloadMode(EHotReloadMode_StaticEnum, TEXT("/Script/UnLuaEditor"), TEXT("EHotReloadMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnLuaEditor_EHotReloadMode_Hash() { return 4142655838U; }
	UEnum* Z_Construct_UEnum_UnLuaEditor_EHotReloadMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHotReloadMode"), 0, Get_Z_Construct_UEnum_UnLuaEditor_EHotReloadMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHotReloadMode::Manual", (int64)EHotReloadMode::Manual },
				{ "EHotReloadMode::Auto", (int64)EHotReloadMode::Auto },
				{ "EHotReloadMode::Never", (int64)EHotReloadMode::Never },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "EHotReloadMode::Auto" },
				{ "Manual.Name", "EHotReloadMode::Manual" },
				{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
				{ "Never.Name", "EHotReloadMode::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnLuaEditor,
				nullptr,
				"EHotReloadMode",
				"EHotReloadMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUpdateMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnLuaEditor_EUpdateMode, Z_Construct_UPackage__Script_UnLuaEditor(), TEXT("EUpdateMode"));
		}
		return Singleton;
	}
	template<> UNLUAEDITOR_API UEnum* StaticEnum<EUpdateMode>()
	{
		return EUpdateMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateMode(EUpdateMode_StaticEnum, TEXT("/Script/UnLuaEditor"), TEXT("EUpdateMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnLuaEditor_EUpdateMode_Hash() { return 1329837896U; }
	UEnum* Z_Construct_UEnum_UnLuaEditor_EUpdateMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnLuaEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateMode"), 0, Get_Z_Construct_UEnum_UnLuaEditor_EUpdateMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdateMode::Start", (int64)EUpdateMode::Start },
				{ "EUpdateMode::Manual", (int64)EUpdateMode::Manual },
				{ "EUpdateMode::None", (int64)EUpdateMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Manual.Name", "EUpdateMode::Manual" },
				{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
				{ "None.Name", "EUpdateMode::None" },
				{ "Start.Name", "EUpdateMode::Start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnLuaEditor,
				nullptr,
				"EUpdateMode",
				"EUpdateMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UUnLuaEditorSettings::StaticRegisterNativesUUnLuaEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_UUnLuaEditorSettings_NoRegister()
	{
		return UUnLuaEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUnLuaEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HotReloadMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotReloadMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HotReloadMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateIntelliSense_MetaData[];
#endif
		static void NewProp_bGenerateIntelliSense_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateIntelliSense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePersistentParamBuffer_MetaData[];
#endif
		static void NewProp_bEnablePersistentParamBuffer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePersistentParamBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTypeChecking_MetaData[];
#endif
		static void NewProp_bEnableTypeChecking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTypeChecking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRPCCall_MetaData[];
#endif
		static void NewProp_bEnableRPCCall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRPCCall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCallOverriddenFunction_MetaData[];
#endif
		static void NewProp_bEnableCallOverriddenFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCallOverriddenFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWithUENamespace_MetaData[];
#endif
		static void NewProp_bWithUENamespace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWithUENamespace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyReturnOrder_MetaData[];
#endif
		static void NewProp_bLegacyReturnOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyReturnOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyBlueprintPath_MetaData[];
#endif
		static void NewProp_bLegacyBlueprintPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyBlueprintPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnLuaEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnLuaEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "UnLuaEditor" },
		{ "IncludePath", "UnLuaEditorSettings.h" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_HotReloadMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_HotReloadMode_MetaData[] = {
		{ "Category", "Coding" },
		{ "defaultValue", "0" },
		{ "DisplayName", "Hot Reload Mode" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_HotReloadMode = { "HotReloadMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnLuaEditorSettings, HotReloadMode), Z_Construct_UEnum_UnLuaEditor_EHotReloadMode, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_HotReloadMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_HotReloadMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bGenerateIntelliSense_MetaData[] = {
		{ "Category", "Coding" },
		{ "DisplayName", "Generate IntelliSense Files" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bGenerateIntelliSense_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bGenerateIntelliSense = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bGenerateIntelliSense = { "bGenerateIntelliSense", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bGenerateIntelliSense_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bGenerateIntelliSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bGenerateIntelliSense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Auto Startup" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bAutoStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bAutoStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Enable Debug" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bEnableDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnablePersistentParamBuffer_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Enable persistent buffer for UFunction's parameters." },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnablePersistentParamBuffer_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bEnablePersistentParamBuffer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnablePersistentParamBuffer = { "bEnablePersistentParamBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnablePersistentParamBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnablePersistentParamBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnablePersistentParamBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableTypeChecking_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Enable Type Checking" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableTypeChecking_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bEnableTypeChecking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableTypeChecking = { "bEnableTypeChecking", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableTypeChecking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableTypeChecking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableTypeChecking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableRPCCall_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Enable RPC Call (Deprecated)." },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableRPCCall_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bEnableRPCCall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableRPCCall = { "bEnableRPCCall", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableRPCCall_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableRPCCall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableRPCCall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableCallOverriddenFunction_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Enable Call Overridden Function (Deprecated)." },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableCallOverriddenFunction_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bEnableCallOverriddenFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableCallOverriddenFunction = { "bEnableCallOverriddenFunction", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableCallOverriddenFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableCallOverriddenFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableCallOverriddenFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bWithUENamespace_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "With UE Namespace (Deprecated)" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bWithUENamespace_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bWithUENamespace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bWithUENamespace = { "bWithUENamespace", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bWithUENamespace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bWithUENamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bWithUENamespace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyReturnOrder_MetaData[] = {
		{ "Category", "Legacy" },
		{ "DisplayName", "Place out parameters before return value" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyReturnOrder_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bLegacyReturnOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyReturnOrder = { "bLegacyReturnOrder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyReturnOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyReturnOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyReturnOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyBlueprintPath_MetaData[] = {
		{ "Category", "Legacy" },
		{ "DisplayName", "Auto append '_C' to blueprint class path" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
		{ "ToolTip", "Requires restart to take effect." },
	};
#endif
	void Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyBlueprintPath_SetBit(void* Obj)
	{
		((UUnLuaEditorSettings*)Obj)->bLegacyBlueprintPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyBlueprintPath = { "bLegacyBlueprintPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUnLuaEditorSettings), &Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyBlueprintPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyBlueprintPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyBlueprintPath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_UpdateMode_MetaData[] = {
		{ "Category", "System" },
		{ "defaultValue", "0" },
		{ "DisplayName", "Update Mode" },
		{ "ModuleRelativePath", "Private/UnLuaEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnLuaEditorSettings, UpdateMode), Z_Construct_UEnum_UnLuaEditor_EUpdateMode, METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_UpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_UpdateMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnLuaEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_HotReloadMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_HotReloadMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bGenerateIntelliSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bAutoStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnablePersistentParamBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableTypeChecking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableRPCCall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bEnableCallOverriddenFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bWithUENamespace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyReturnOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_bLegacyBlueprintPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_UpdateMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnLuaEditorSettings_Statics::NewProp_UpdateMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnLuaEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnLuaEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnLuaEditorSettings_Statics::ClassParams = {
		&UUnLuaEditorSettings::StaticClass,
		"UnLuaEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnLuaEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUnLuaEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnLuaEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnLuaEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnLuaEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnLuaEditorSettings, 1520967095);
	template<> UNLUAEDITOR_API UClass* StaticClass<UUnLuaEditorSettings>()
	{
		return UUnLuaEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnLuaEditorSettings(Z_Construct_UClass_UUnLuaEditorSettings, &UUnLuaEditorSettings::StaticClass, TEXT("/Script/UnLuaEditor"), TEXT("UUnLuaEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnLuaEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
