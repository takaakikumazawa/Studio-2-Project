// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Studio2ProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStudio2ProjectCharacter() {}
// Cross Module References
	STUDIO2PROJECT_API UClass* Z_Construct_UClass_AStudio2ProjectCharacter_NoRegister();
	STUDIO2PROJECT_API UClass* Z_Construct_UClass_AStudio2ProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Studio2Project();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AStudio2ProjectCharacter::StaticRegisterNativesAStudio2ProjectCharacter()
	{
	}
	UClass* Z_Construct_UClass_AStudio2ProjectCharacter_NoRegister()
	{
		return AStudio2ProjectCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AStudio2ProjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Studio2Project,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Studio2ProjectCharacter.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Studio2ProjectCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Studio2ProjectCharacter.h" },
				{ "ToolTip", "A decal that projects to the cursor location." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld = { UE4CodeGen_Private::EPropertyClass::Object, "CursorToWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AStudio2ProjectCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(NewProp_CursorToWorld_MetaData, ARRAY_COUNT(NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Studio2ProjectCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera above the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AStudio2ProjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Studio2ProjectCharacter.h" },
				{ "ToolTip", "Top down camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TopDownCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AStudio2ProjectCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_TopDownCameraComponent_MetaData, ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CursorToWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopDownCameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStudio2ProjectCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStudio2ProjectCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStudio2ProjectCharacter, 3804233253);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStudio2ProjectCharacter(Z_Construct_UClass_AStudio2ProjectCharacter, &AStudio2ProjectCharacter::StaticClass, TEXT("/Script/Studio2Project"), TEXT("AStudio2ProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStudio2ProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
