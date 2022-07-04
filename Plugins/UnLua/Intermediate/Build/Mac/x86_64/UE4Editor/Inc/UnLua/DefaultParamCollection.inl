FFunctionCollection* FC = nullptr;
FParameterCollection* PC = nullptr;

FBoolParamValue* SharedBool_TRUE = new FBoolParamValue(true);
FBoolParamValue* SharedBool_FALSE = new FBoolParamValue(false);
FFloatParamValue* SharedFloat_Zero = new FFloatParamValue(0.000000f);
FFloatParamValue* SharedFloat_One = new FFloatParamValue(1.000000f);
FEnumParamValue* SharedEnum_Zero = new FEnumParamValue(0);
FIntParamValue* SharedInt_Zero = new FIntParamValue(0);
FByteParamValue* SharedByte_Zero = new FByteParamValue(0);
FNameParamValue* SharedFName_None = new FNameParamValue(FName("None"));

FVectorParamValue* SharedFVector_Zero = new FVectorParamValue(FVector(EForceInit::ForceInitToZero));
FVector2DParamValue* SharedFVector2D_Zero = new FVector2DParamValue(FVector2D(EForceInit::ForceInitToZero));
FRotatorParamValue* SharedFRotator_Zero = new FRotatorParamValue(FRotator(EForceInit::ForceInitToZero));
FLinearColorParamValue* SharedFLinearColor_Zero = new FLinearColorParamValue(FLinearColor(EForceInit::ForceInitToZero));
FColorParamValue* SharedFColor_Zero = new FColorParamValue(FColor(EForceInit::ForceInitToZero));

FScriptArrayParamValue* SharedScriptArray = new FScriptArrayParamValue();
FScriptDelegateParamValue* SharedScriptDelegate = new FScriptDelegateParamValue(FScriptDelegate());
FMulticastScriptDelegateParamValue* SharedMulticastScriptDelegate = new FMulticastScriptDelegateParamValue(FMulticastScriptDelegate());

// ModuleName CoreUObject Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CoreUObject/ 
// ModuleName InputCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/InputCore/ 
// ModuleName SlateCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SlateCore/ 
// ModuleName ImageWrapper Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ImageWrapper/ 
// ModuleName Slate Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Slate/ 
// ModuleName SourceCodeAccess Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SourceCodeAccess/ 
// ModuleName MessagingRpc Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MessagingRpc/ 
// ModuleName PortalRpc Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PortalRpc/ 
// ModuleName PortalServices Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PortalServices/ 
// ModuleName NetCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NetCore/ 
// ModuleName AudioPlatformConfiguration Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioPlatformConfiguration/ 
// ModuleName AssetRegistry Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AssetRegistry/ 
FC = &GDefaultParamCollection.Add(TEXT("UAssetRegistryHelpers"));
PC = &FC->Functions.Add(TEXT("CreateAssetData"));
PC->Parameters.Add(TEXT("bAllowBlueprintClass"), SharedBool_FALSE);

// ModuleName EngineMessages Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EngineMessages/ 
// ModuleName EngineSettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EngineSettings/ 
FC = &GDefaultParamCollection.Add(TEXT("UGameMapsSettings"));
PC = &FC->Functions.Add(TEXT("SetSkipAssigningGamepadToPlayer1"));
PC->Parameters.Add(TEXT("bSkipFirstPlayer"), SharedBool_TRUE);

// ModuleName PacketHandler Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PacketHandler/ 
// ModuleName MeshDescription Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MeshDescription/ 
// ModuleName StaticMeshDescription Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StaticMeshDescription/ 
FC = &GDefaultParamCollection.Add(TEXT("UStaticMeshDescription"));
PC = &FC->Functions.Add(TEXT("SetVertexInstanceUV"));
PC->Parameters.Add(TEXT("UVIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetVertexInstanceUV"));
PC->Parameters.Add(TEXT("UVIndex"), SharedInt_Zero);

// ModuleName Chaos Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Chaos/ 
// ModuleName AudioExtensions Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioExtensions/ 
// ModuleName PropertyPath Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PropertyPath/ 
// ModuleName PropertyAccess Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PropertyAccess/ 
// ModuleName JsonUtilities Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/JsonUtilities/ 
// ModuleName WidgetCarousel Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WidgetCarousel/ 
// ModuleName LiveLinkInterface Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkInterface/ 
// ModuleName SessionMessages Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SessionMessages/ 
// ModuleName VectorVM Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VectorVM/ 
// ModuleName AutomationMessages Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AutomationMessages/ 
// ModuleName Serialization Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Serialization/ 
// ModuleName TcpMessaging Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Messaging/TcpMessaging/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TcpMessaging/ 
// ModuleName LaunchDaemonMessages Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LaunchDaemonMessages/ 
// ModuleName BlueprintRuntime Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BlueprintRuntime/ 
// ModuleName PortalMessages Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PortalMessages/ 
// ModuleName ToolMenus Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ToolMenus/ 
// ModuleName EditorStyle Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EditorStyle/ 
// ModuleName UnrealEdMessages Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UnrealEdMessages/ 
// ModuleName ScreenShotComparisonTools Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ScreenShotComparisonTools/ 
// ModuleName ProfilerMessages Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ProfilerMessages/ 
// ModuleName ClothingSystemEditorInterface Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClothingSystemEditorInterface/ 
// ModuleName SwarmInterface Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SwarmInterface/ 
// ModuleName PIEPreviewDeviceSpecification Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PIEPreviewDeviceSpecification/ 
// ModuleName PinnedCommandList Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PinnedCommandList/ 
// ModuleName DeveloperSettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DeveloperSettings/ 
// ModuleName PhysicsCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PhysicsCore/ 
// ModuleName ClothingSystemRuntimeInterface Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClothingSystemRuntimeInterface/ 
// ModuleName Engine Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Engine/ 
FC = &GDefaultParamCollection.Add(TEXT("AActor"));
PC = &FC->Functions.Add(TEXT("MakeNoise"));
PC->Parameters.Add(TEXT("Loudness"), SharedFloat_One);
PC->Parameters.Add(TEXT("NoiseLocation"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("MaxRange"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Tag"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("PrestreamTextures"));
PC->Parameters.Add(TEXT("CinematicTextureGroups"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("WasRecentlyRendered"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.200000f));
PC = &FC->Functions.Add(TEXT("GetAttachedActors"));
PC->Parameters.Add(TEXT("bResetArray"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetAllChildActors"));
PC->Parameters.Add(TEXT("bIncludeDescendants"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetActorLabel"));
PC->Parameters.Add(TEXT("bMarkDirty"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("IsTemporarilyHiddenInEditor"));
PC->Parameters.Add(TEXT("bIncludeParent"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("K2_DetachFromActor"));
PC->Parameters.Add(TEXT("LocationRule"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("RotationRule"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("ScaleRule"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("DetachRootComponentFromParent"));
PC->Parameters.Add(TEXT("bMaintainWorldPosition"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("K2_AttachToActor"));
PC->Parameters.Add(TEXT("bWeldSimulatedBodies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("K2_AttachRootComponentToActor"));
PC->Parameters.Add(TEXT("InSocketName"), SharedFName_None);
PC->Parameters.Add(TEXT("AttachLocationType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bWeldSimulatedBodies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("K2_AttachToComponent"));
PC->Parameters.Add(TEXT("bWeldSimulatedBodies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("K2_AttachRootComponentTo"));
PC->Parameters.Add(TEXT("InSocketName"), SharedFName_None);
PC->Parameters.Add(TEXT("AttachLocationType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bWeldSimulatedBodies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddComponent"));
PC->Parameters.Add(TEXT("bDeferredFinish"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetActorBounds"));
PC->Parameters.Add(TEXT("bIncludeFromChildActors"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UActorComponent"));
PC = &FC->Functions.Add(TEXT("SetActive"));
PC->Parameters.Add(TEXT("bReset"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("Activate"));
PC->Parameters.Add(TEXT("bReset"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UAnimInstance"));
PC = &FC->Functions.Add(TEXT("IsSyncGroupBetweenMarkers"));
PC->Parameters.Add(TEXT("bRespectMarkerOrder"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("Montage_SetPlayRate"));
PC->Parameters.Add(TEXT("NewPlayRate"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Montage_Play"));
PC->Parameters.Add(TEXT("InPlayRate"), SharedFloat_One);
PC->Parameters.Add(TEXT("ReturnValueType"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("InTimeToStartMontageAt"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bStopAllMontages"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StopSlotAnimation"));
PC->Parameters.Add(TEXT("InBlendOutTime"), new FFloatParamValue(0.250000f));
PC->Parameters.Add(TEXT("SlotNodeName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("PlaySlotAnimationAsDynamicMontage"));
PC->Parameters.Add(TEXT("BlendInTime"), new FFloatParamValue(0.250000f));
PC->Parameters.Add(TEXT("BlendOutTime"), new FFloatParamValue(0.250000f));
PC->Parameters.Add(TEXT("InPlayRate"), SharedFloat_One);
PC->Parameters.Add(TEXT("LoopCount"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("BlendOutTriggerTime"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("InTimeToStartMontageAt"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("PlaySlotAnimation"));
PC->Parameters.Add(TEXT("BlendInTime"), new FFloatParamValue(0.250000f));
PC->Parameters.Add(TEXT("BlendOutTime"), new FFloatParamValue(0.250000f));
PC->Parameters.Add(TEXT("InPlayRate"), SharedFloat_One);
PC->Parameters.Add(TEXT("LoopCount"), new FIntParamValue(1));

FC = &GDefaultParamCollection.Add(TEXT("UAvoidanceManager"));
PC = &FC->Functions.Add(TEXT("RegisterMovementComponent"));
PC->Parameters.Add(TEXT("AvoidanceWeight"), new FFloatParamValue(0.500000f));

FC = &GDefaultParamCollection.Add(TEXT("UCameraAnimInst"));
PC = &FC->Functions.Add(TEXT("Stop"));
PC->Parameters.Add(TEXT("bImmediate"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UCameraModifier"));
PC = &FC->Functions.Add(TEXT("DisableModifier"));
PC->Parameters.Add(TEXT("bImmediate"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UCanvas"));
PC = &FC->Functions.Add(TEXT("K2_TextSize"));
PC->Parameters.Add(TEXT("Scale"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("K2_DrawPolygon"));
PC->Parameters.Add(TEXT("Radius"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("NumberOfSides"), new FIntParamValue(3));
PC->Parameters.Add(TEXT("RenderColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("K2_DrawBox"));
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_One);
PC->Parameters.Add(TEXT("RenderColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("K2_DrawBorder"));
PC->Parameters.Add(TEXT("CoordinateSize"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("RenderColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("BorderScale"), new FVector2DParamValue(FVector2D(0.100000f,0.100000f)));
PC->Parameters.Add(TEXT("BackgroundScale"), new FVector2DParamValue(FVector2D(0.100000f,0.100000f)));
PC->Parameters.Add(TEXT("Rotation"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("PivotPoint"), new FVector2DParamValue(FVector2D(0.500000f,0.500000f)));
PC->Parameters.Add(TEXT("CornerSize"), SharedFVector2D_Zero);
PC = &FC->Functions.Add(TEXT("K2_DrawText"));
PC->Parameters.Add(TEXT("Scale"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("RenderColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Kerning"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("ShadowColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("ShadowOffset"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bCentreX"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bCentreY"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bOutlined"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("OutlineColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("K2_DrawMaterial"));
PC->Parameters.Add(TEXT("CoordinateSize"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Rotation"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("PivotPoint"), new FVector2DParamValue(FVector2D(0.500000f,0.500000f)));
PC = &FC->Functions.Add(TEXT("K2_DrawTexture"));
PC->Parameters.Add(TEXT("CoordinateSize"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("RenderColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("BlendMode"), new FByteParamValue(2));
PC->Parameters.Add(TEXT("Rotation"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("PivotPoint"), new FVector2DParamValue(FVector2D(0.500000f,0.500000f)));
PC = &FC->Functions.Add(TEXT("K2_DrawLine"));
PC->Parameters.Add(TEXT("ScreenPositionA"), SharedFVector2D_Zero);
PC->Parameters.Add(TEXT("ScreenPositionB"), SharedFVector2D_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_One);
PC->Parameters.Add(TEXT("RenderColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));

FC = &GDefaultParamCollection.Add(TEXT("UCheatManager"));
PC = &FC->Functions.Add(TEXT("BugIt"));
PC->Parameters.Add(TEXT("ScreenShotDescription"), new FStringParamValue(TEXT("")));

FC = &GDefaultParamCollection.Add(TEXT("UGameUserSettings"));
PC = &FC->Functions.Add(TEXT("EnableHDRDisplayOutput"));
PC->Parameters.Add(TEXT("DisplayNits"), new FIntParamValue(1000));
PC = &FC->Functions.Add(TEXT("RunHardwareBenchmark"));
PC->Parameters.Add(TEXT("WorkScale"), new FIntParamValue(10));
PC->Parameters.Add(TEXT("CPUMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("GPUMultiplier"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("LoadSettings"));
PC->Parameters.Add(TEXT("bForceReload"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ApplySettings"));
PC->Parameters.Add(TEXT("bCheckForCommandLineOverrides"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UInputSettings"));
PC = &FC->Functions.Add(TEXT("RemoveAxisMapping"));
PC->Parameters.Add(TEXT("bForceRebuildKeymaps"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddAxisMapping"));
PC->Parameters.Add(TEXT("bForceRebuildKeymaps"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("RemoveActionMapping"));
PC->Parameters.Add(TEXT("bForceRebuildKeymaps"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddActionMapping"));
PC->Parameters.Add(TEXT("bForceRebuildKeymaps"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UMaterialInterface"));
PC = &FC->Functions.Add(TEXT("SetForceMipLevelsToBeResident"));
PC->Parameters.Add(TEXT("CinematicTextureGroups"), SharedInt_Zero);
PC->Parameters.Add(TEXT("bFastResponse"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("AAmbientSound"));
PC = &FC->Functions.Add(TEXT("Play"));
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("FadeIn"));
PC->Parameters.Add(TEXT("FadeVolumeLevel"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("AController"));
PC = &FC->Functions.Add(TEXT("LineOfSightTo"));
PC->Parameters.Add(TEXT("ViewPoint"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("bAlternateChecks"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("AHUD"));
PC = &FC->Functions.Add(TEXT("AddHitBox"));
PC->Parameters.Add(TEXT("Priority"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetActorsInSelectionRectangle"));
PC->Parameters.Add(TEXT("bIncludeNonCollidingComponents"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bActorMustBeFullyEnclosed"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("DrawMaterialTriangle"));
PC->Parameters.Add(TEXT("V0_Color"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("V1_Color"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("V2_Color"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("DrawMaterialSimple"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("bScalePosition"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("DrawMaterial"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("bScalePosition"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("Rotation"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("RotPivot"), SharedFVector2D_Zero);
PC = &FC->Functions.Add(TEXT("DrawTextureSimple"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("bScalePosition"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("DrawTexture"));
PC->Parameters.Add(TEXT("TintColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("BlendMode"), new FByteParamValue(2));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("bScalePosition"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("Rotation"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("RotPivot"), SharedFVector2D_Zero);
PC = &FC->Functions.Add(TEXT("DrawRect"));
PC->Parameters.Add(TEXT("RectColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("DrawLine"));
PC->Parameters.Add(TEXT("LineColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("LineThickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawText"));
PC->Parameters.Add(TEXT("TextColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("bScalePosition"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetTextSize"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("ShowDebug"));
PC->Parameters.Add(TEXT("DebugType"), SharedFName_None);

FC = &GDefaultParamCollection.Add(TEXT("ALevelScriptActor"));
PC = &FC->Functions.Add(TEXT("SetCinematicMode"));
PC->Parameters.Add(TEXT("bHidePlayer"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectsHUD"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectsMovement"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bAffectsTurning"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("AMatineeActor"));
PC = &FC->Functions.Add(TEXT("SetPosition"));
PC->Parameters.Add(TEXT("bJump"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("APawn"));
PC = &FC->Functions.Add(TEXT("AddMovementInput"));
PC->Parameters.Add(TEXT("ScaleValue"), SharedFloat_One);
PC->Parameters.Add(TEXT("bForce"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCanAffectNavigationGeneration"));
PC->Parameters.Add(TEXT("bForceUpdate"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PawnMakeNoise"));
PC->Parameters.Add(TEXT("bUseNoiseMakerLocation"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("APlayerCameraManager"));
PC = &FC->Functions.Add(TEXT("StopAllCameraAnims"));
PC->Parameters.Add(TEXT("bImmediate"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("StopCameraAnimInst"));
PC->Parameters.Add(TEXT("bImmediate"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("StopAllInstancesOfCameraAnim"));
PC->Parameters.Add(TEXT("bImmediate"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PlayCameraAnim"));
PC->Parameters.Add(TEXT("Rate"), SharedFloat_One);
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("BlendInTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("BlendOutTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bLoop"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bRandomStartTime"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("PlaySpace"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("UserPlaySpaceRot"), SharedFRotator_Zero);
PC = &FC->Functions.Add(TEXT("StartCameraFade"));
PC->Parameters.Add(TEXT("bShouldFadeAudio"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bHoldWhenFinished"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("StopAllCameraShakesFromSource"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StopAllInstancesOfCameraShakeFromSource"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StopAllCameraShakes"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StopAllInstancesOfCameraShake"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StopCameraShake"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StartMatineeCameraShakeFromSource"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("PlaySpace"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("UserPlaySpaceRot"), SharedFRotator_Zero);
PC = &FC->Functions.Add(TEXT("StartCameraShakeFromSource"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("PlaySpace"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("UserPlaySpaceRot"), SharedFRotator_Zero);
PC = &FC->Functions.Add(TEXT("StartMatineeCameraShake"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("PlaySpace"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("UserPlaySpaceRot"), SharedFRotator_Zero);
PC = &FC->Functions.Add(TEXT("StartCameraShake"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("PlaySpace"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("UserPlaySpaceRot"), SharedFRotator_Zero);

FC = &GDefaultParamCollection.Add(TEXT("APostProcessVolume"));
PC = &FC->Functions.Add(TEXT("AddOrUpdateBlendable"));
PC->Parameters.Add(TEXT("InWeight"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("APlayerController"));
PC = &FC->Functions.Add(TEXT("SetCinematicMode"));
PC->Parameters.Add(TEXT("bHidePlayer"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectsHUD"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetViewTargetWithBlend"));
PC->Parameters.Add(TEXT("BlendTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("BlendFunc"), SharedByte_Zero);
PC->Parameters.Add(TEXT("BlendExp"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bLockOutgoing"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PlayHapticEffect"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("bLoop"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PlayDynamicForceFeedback"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("bAffectsLeftLarge"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectsLeftSmall"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectsRightLarge"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectsRightSmall"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("ClientStopCameraShakesFromSource"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("ClientStopCameraShake"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("ClientStartCameraShake"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("PlaySpace"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("UserPlaySpaceRot"), SharedFRotator_Zero);
PC = &FC->Functions.Add(TEXT("ClientPlayCameraAnim"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("Rate"), SharedFloat_One);
PC->Parameters.Add(TEXT("BlendInTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("BlendOutTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bLoop"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bRandomStartTime"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("Space"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("CustomPlaySpace"), SharedFRotator_Zero);
PC = &FC->Functions.Add(TEXT("StartFire"));
PC->Parameters.Add(TEXT("FireModeNum"), SharedByte_Zero);
PC = &FC->Functions.Add(TEXT("ProjectWorldLocationToScreen"));
PC->Parameters.Add(TEXT("bPlayerViewportRelative"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetHitResultUnderFingerForObjects"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetHitResultUnderFingerByChannel"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetHitResultUnderFinger"));
PC->Parameters.Add(TEXT("TraceChannel"), new FByteParamValue(3));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetHitResultUnderCursorForObjects"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetHitResultUnderCursorByChannel"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetHitResultUnderCursor"));
PC->Parameters.Add(TEXT("TraceChannel"), new FByteParamValue(3));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("AGameModeBase"));
PC = &FC->Functions.Add(TEXT("K2_FindPlayerStart"));
PC->Parameters.Add(TEXT("IncomingName"), new FStringParamValue(TEXT("")));

FC = &GDefaultParamCollection.Add(TEXT("ACharacter"));
PC = &FC->Functions.Add(TEXT("UnCrouch"));
PC->Parameters.Add(TEXT("bClientSimulation"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("Crouch"));
PC->Parameters.Add(TEXT("bClientSimulation"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PlayAnimMontage"));
PC->Parameters.Add(TEXT("InPlayRate"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartSectionName"), SharedFName_None);

FC = &GDefaultParamCollection.Add(TEXT("UMovementComponent"));
PC = &FC->Functions.Add(TEXT("K2_MoveUpdatedComponent"));
PC->Parameters.Add(TEXT("bSweep"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTeleport"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UPhysicalAnimationComponent"));
PC = &FC->Functions.Add(TEXT("ApplyPhysicalAnimationProfileBelow"));
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bClearNotFound"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ApplyPhysicalAnimationSettingsBelow"));
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("USceneComponent"));
PC = &FC->Functions.Add(TEXT("SetAbsolute"));
PC->Parameters.Add(TEXT("bNewAbsoluteLocation"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bNewAbsoluteRotation"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bNewAbsoluteScale"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetHiddenInGame"));
PC->Parameters.Add(TEXT("bPropagateToChildren"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ToggleVisibility"));
PC->Parameters.Add(TEXT("bPropagateToChildren"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetVisibility"));
PC->Parameters.Add(TEXT("bPropagateToChildren"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetSocketTransform"));
PC->Parameters.Add(TEXT("TransformSpace"), SharedByte_Zero);
PC = &FC->Functions.Add(TEXT("K2_DetachFromComponent"));
PC->Parameters.Add(TEXT("LocationRule"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("RotationRule"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("ScaleRule"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("bCallModify"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("DetachFromParent"));
PC->Parameters.Add(TEXT("bMaintainWorldPosition"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bCallModify"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SnapTo"));
PC->Parameters.Add(TEXT("InSocketName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("K2_AttachToComponent"));
PC->Parameters.Add(TEXT("bWeldSimulatedBodies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("K2_AttachTo"));
PC->Parameters.Add(TEXT("InSocketName"), SharedFName_None);
PC->Parameters.Add(TEXT("AttachType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bWeldSimulatedBodies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("IsSimulatingPhysics"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);

FC = &GDefaultParamCollection.Add(TEXT("UTimelineComponent"));
PC = &FC->Functions.Add(TEXT("SetPlaybackPosition"));
PC->Parameters.Add(TEXT("bFireUpdate"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UInterpToMovementComponent"));
PC = &FC->Functions.Add(TEXT("RestartMovement"));
PC->Parameters.Add(TEXT("InitialDirection"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UPawnMovementComponent"));
PC = &FC->Functions.Add(TEXT("AddInputVector"));
PC->Parameters.Add(TEXT("bForce"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UCharacterMovementComponent"));
PC = &FC->Functions.Add(TEXT("AddImpulse"));
PC->Parameters.Add(TEXT("bVelocityChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetMovementMode"));
PC->Parameters.Add(TEXT("NewCustomMode"), SharedByte_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UAudioComponent"));
PC = &FC->Functions.Add(TEXT("AdjustVolume"));
PC->Parameters.Add(TEXT("FadeCurve"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("PlayQuantized"));
PC->Parameters.Add(TEXT("InDelegate"), SharedScriptDelegate);
PC->Parameters.Add(TEXT("InStartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("InFadeInDuration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("InFadeVolumeLevel"), SharedFloat_One);
PC->Parameters.Add(TEXT("InFadeCurve"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("Play"));
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("FadeOut"));
PC->Parameters.Add(TEXT("FadeCurve"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("FadeIn"));
PC->Parameters.Add(TEXT("FadeVolumeLevel"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("FadeCurve"), SharedEnum_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UCameraComponent"));
PC = &FC->Functions.Add(TEXT("AddOrUpdateBlendable"));
PC->Parameters.Add(TEXT("InWeight"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UCameraShakeSourceComponent"));
PC = &FC->Functions.Add(TEXT("StopAllCameraShakes"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StopAllCameraShakesOfType"));
PC->Parameters.Add(TEXT("bImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StartCameraShake"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("PlaySpace"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("UserPlaySpaceRot"), SharedFRotator_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UDecalComponent"));
PC = &FC->Functions.Add(TEXT("SetFadeOut"));
PC->Parameters.Add(TEXT("DestroyOwnerAfterFade"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UForceFeedbackComponent"));
PC = &FC->Functions.Add(TEXT("Play"));
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UPostProcessComponent"));
PC = &FC->Functions.Add(TEXT("AddOrUpdateBlendable"));
PC->Parameters.Add(TEXT("InWeight"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UPrimitiveComponent"));
PC = &FC->Functions.Add(TEXT("SetUseCCD"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("ScaleByMomentOfInertia"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("GetInertiaTensor"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetMassOverrideInKg"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("MassInKg"), SharedFloat_One);
PC->Parameters.Add(TEXT("bOverrideMass"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetAllMassScale"));
PC->Parameters.Add(TEXT("InMassScale"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("GetMassScale"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetMassScale"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("InMassScale"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("SetAllPhysicsAngularVelocityInRadians"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetAllPhysicsAngularVelocityInDegrees"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetClosestPointOnCollision"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("K2_SphereOverlapComponent"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bPersistentShowTrace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("K2_BoxOverlapComponent"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bPersistentShowTrace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("K2_SphereTraceComponent"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bPersistentShowTrace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("K2_LineTraceComponent"));
PC->Parameters.Add(TEXT("bTraceComplex"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bPersistentShowTrace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCollisionProfileName"));
PC->Parameters.Add(TEXT("bUpdateOverlaps"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("PutRigidBodyToSleep"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("WakeRigidBody"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetCenterOfMass"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("GetCenterOfMass"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("GetPhysicsAngularVelocityInRadians"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("GetPhysicsAngularVelocityInDegrees"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("GetPhysicsAngularVelocity"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPhysicsMaxAngularVelocityInRadians"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPhysicsMaxAngularVelocityInDegrees"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPhysicsMaxAngularVelocity"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPhysicsAngularVelocityInDegrees"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPhysicsAngularVelocityInRadians"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPhysicsAngularVelocity"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetAllPhysicsLinearVelocity"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetPhysicsLinearVelocityAtPoint"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("GetPhysicsLinearVelocity"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPhysicsLinearVelocity"));
PC->Parameters.Add(TEXT("bAddToCurrent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("AddTorqueInDegrees"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bAccelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddTorqueInRadians"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bAccelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddTorque"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bAccelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddRadialForce"));
PC->Parameters.Add(TEXT("bAccelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddForceAtLocationLocal"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("AddForceAtLocation"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("AddForce"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bAccelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddRadialImpulse"));
PC->Parameters.Add(TEXT("bVelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddImpulseAtLocation"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("AddAngularImpulseInDegrees"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bVelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddAngularImpulseInRadians"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bVelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddAngularImpulse"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bVelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddImpulse"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bVelChange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("CreateDynamicMaterialInstance"));
PC->Parameters.Add(TEXT("OptionalName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetBoundsScale"));
PC->Parameters.Add(TEXT("NewBoundsScale"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("WasRecentlyRendered"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.200000f));

FC = &GDefaultParamCollection.Add(TEXT("USceneCaptureComponent"));
PC = &FC->Functions.Add(TEXT("RemoveShowOnlyActorComponents"));
PC->Parameters.Add(TEXT("bIncludeFromChildActors"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ShowOnlyActorComponents"));
PC->Parameters.Add(TEXT("bIncludeFromChildActors"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("HideActorComponents"));
PC->Parameters.Add(TEXT("bIncludeFromChildActors"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("ULightComponent"));
PC = &FC->Functions.Add(TEXT("SetLightColor"));
PC->Parameters.Add(TEXT("bSRGB"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("ULocalLightComponent"));
PC = &FC->Functions.Add(TEXT("GetUnitsConversionFactor"));
PC->Parameters.Add(TEXT("CosHalfConeAngle"), new FFloatParamValue(-1.000000f));

FC = &GDefaultParamCollection.Add(TEXT("UMeshComponent"));
PC = &FC->Functions.Add(TEXT("PrestreamTextures"));
PC->Parameters.Add(TEXT("CinematicTextureGroups"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("USplineComponent"));
PC = &FC->Functions.Add(TEXT("FindTransformClosestToWorldLocation"));
PC->Parameters.Add(TEXT("bUseScale"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetScaleAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetRollAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetTransformAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseScale"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetRightVectorAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetUpVectorAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetWorldRotationAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetRotationAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetTangentAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetWorldDirectionAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetDirectionAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetWorldLocationAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetLocationAtTime"));
PC->Parameters.Add(TEXT("bUseConstantVelocity"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetTransformAtDistanceAlongSpline"));
PC->Parameters.Add(TEXT("bUseScale"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetTransformAtSplinePoint"));
PC->Parameters.Add(TEXT("bUseScale"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetSplinePointType"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetScaleAtSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetRotationAtSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetUpVectorAtSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetTangentsAtSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetTangentAtSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetLocationAtSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetSplinePoints"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("RemoveSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddSplinePointAtIndex"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddSplinePoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddPoints"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddPoint"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("ClearSplinePoints"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetClosedLoopAtPosition"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetClosedLoop"));
PC->Parameters.Add(TEXT("bUpdateSpline"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetTransformAtSplineInputKey"));
PC->Parameters.Add(TEXT("bUseScale"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UParticleSystemComponent"));
PC = &FC->Functions.Add(TEXT("SetAutoAttachParams"));
PC->Parameters.Add(TEXT("SocketName"), SharedFName_None);
PC->Parameters.Add(TEXT("LocationType"), SharedByte_Zero);

FC = &GDefaultParamCollection.Add(TEXT("USkinnedMeshComponent"));
PC = &FC->Functions.Add(TEXT("FindClosestBone_K2"));
PC->Parameters.Add(TEXT("IgnoreScale"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bRequirePhysicsAsset"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetMasterPoseComponent"));
PC->Parameters.Add(TEXT("bForceUpdate"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetDeltaTransformFromRefPose"));
PC->Parameters.Add(TEXT("BaseName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetSkeletalMesh"));
PC->Parameters.Add(TEXT("bReinitPose"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetPhysicsAsset"));
PC->Parameters.Add(TEXT("bForceReInit"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("USkeletalMeshComponent"));
PC = &FC->Functions.Add(TEXT("SetConstraintProfileForAll"));
PC->Parameters.Add(TEXT("bDefaultIfNotFound"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetConstraintProfile"));
PC->Parameters.Add(TEXT("bDefaultIfNotFound"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetAllMotorsAngularDriveParams"));
PC->Parameters.Add(TEXT("bSkipCustomPhysicsType"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetAllMotorsAngularVelocityDrive"));
PC->Parameters.Add(TEXT("bSkipCustomPhysicsType"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetAllMotorsAngularPositionDrive"));
PC->Parameters.Add(TEXT("bSkipCustomPhysicsType"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AccumulateAllBodiesBelowPhysicsBlendWeight"));
PC->Parameters.Add(TEXT("bSkipCustomPhysicsType"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetAllBodiesBelowPhysicsBlendWeight"));
PC->Parameters.Add(TEXT("bSkipCustomPhysicsType"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetAllBodiesPhysicsBlendWeight"));
PC->Parameters.Add(TEXT("bSkipCustomPhysicsType"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetAllBodiesBelowSimulatePhysics"));
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddImpulseToAllBodiesBelow"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bVelChange"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddForceToAllBodiesBelow"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bAccelChange"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetBoneMass"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bScaleMass"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetEnableGravityOnAllBodiesBelow"));
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetNotifyRigidBodyCollisionBelow"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC->Parameters.Add(TEXT("bIncludeSelf"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetBodyNotifyRigidBodyCollision"));
PC->Parameters.Add(TEXT("BoneName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetAllowRigidBodyAnimNode"));
PC->Parameters.Add(TEXT("bReinitAnim"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("UnbindClothFromMasterPoseComponent"));
PC->Parameters.Add(TEXT("bRestoreSimulationSpace"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetMorphTarget"));
PC->Parameters.Add(TEXT("bRemoveZeroWeight"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("OverrideAnimationData"));
PC->Parameters.Add(TEXT("bIsLooping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bIsPlaying"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Position"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("PlayRate"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("SetPosition"));
PC->Parameters.Add(TEXT("bFireNotifies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("ResetAnimInstanceDynamics"));
PC->Parameters.Add(TEXT("InTeleportType"), new FEnumParamValue(2));
PC = &FC->Functions.Add(TEXT("GetStringAttribute"));
PC->Parameters.Add(TEXT("LookupType"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("GetIntegerAttribute"));
PC->Parameters.Add(TEXT("LookupType"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("GetFloatAttribute"));
PC->Parameters.Add(TEXT("LookupType"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("GetStringAttribute_Ref"));
PC->Parameters.Add(TEXT("LookupType"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("GetIntegerAttribute_Ref"));
PC->Parameters.Add(TEXT("LookupType"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("GetFloatAttribute_Ref"));
PC->Parameters.Add(TEXT("LookupType"), SharedEnum_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UInstancedStaticMeshComponent"));
PC = &FC->Functions.Add(TEXT("GetInstancesOverlappingBox"));
PC->Parameters.Add(TEXT("bBoxInWorldSpace"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetInstancesOverlappingSphere"));
PC->Parameters.Add(TEXT("bSphereInWorldSpace"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("BatchUpdateInstancesTransform"));
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bMarkRenderStateDirty"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bTeleport"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("BatchUpdateInstancesTransforms"));
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bMarkRenderStateDirty"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bTeleport"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("UpdateInstanceTransform"));
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bMarkRenderStateDirty"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bTeleport"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetInstanceTransform"));
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCustomDataValue"));
PC->Parameters.Add(TEXT("bMarkRenderStateDirty"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("USplineMeshComponent"));
PC = &FC->Functions.Add(TEXT("SetBoundaryMax"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetBoundaryMin"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetSplineUpDir"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetForwardAxis"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetEndOffset"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetEndRoll"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetEndScale"));
PC->Parameters.Add(TEXT("EndScale"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetStartOffset"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetStartRoll"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetStartScale"));
PC->Parameters.Add(TEXT("StartScale"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetStartAndEnd"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetEndTangent"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetEndPosition"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetStartTangent"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetStartPosition"));
PC->Parameters.Add(TEXT("bUpdateMesh"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UBoxComponent"));
PC = &FC->Functions.Add(TEXT("SetBoxExtent"));
PC->Parameters.Add(TEXT("bUpdateOverlaps"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UCapsuleComponent"));
PC = &FC->Functions.Add(TEXT("SetCapsuleHalfHeight"));
PC->Parameters.Add(TEXT("bUpdateOverlaps"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetCapsuleRadius"));
PC->Parameters.Add(TEXT("bUpdateOverlaps"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetCapsuleSize"));
PC->Parameters.Add(TEXT("bUpdateOverlaps"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("USphereComponent"));
PC = &FC->Functions.Add(TEXT("SetSphereRadius"));
PC->Parameters.Add(TEXT("bUpdateOverlaps"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("USceneCaptureComponent2D"));
PC = &FC->Functions.Add(TEXT("AddOrUpdateBlendable"));
PC->Parameters.Add(TEXT("InWeight"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UAnimSingleNodeInstance"));
PC = &FC->Functions.Add(TEXT("SetAnimationAsset"));
PC->Parameters.Add(TEXT("bIsLooping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("InPlayRate"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("PlayAnim"));
PC->Parameters.Add(TEXT("bIsLooping"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("InPlayRate"), SharedFloat_One);
PC->Parameters.Add(TEXT("InStartPosition"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("SetPositionWithPreviousTime"));
PC->Parameters.Add(TEXT("bFireNotifies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetPosition"));
PC->Parameters.Add(TEXT("bFireNotifies"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UAsyncActionLoadPrimaryAsset"));
PC = &FC->Functions.Add(TEXT("AsyncLoadPrimaryAsset"));
PC->Parameters.Add(TEXT("LoadBundles"), SharedScriptArray);

FC = &GDefaultParamCollection.Add(TEXT("UAsyncActionLoadPrimaryAssetClass"));
PC = &FC->Functions.Add(TEXT("AsyncLoadPrimaryAssetClass"));
PC->Parameters.Add(TEXT("LoadBundles"), SharedScriptArray);

FC = &GDefaultParamCollection.Add(TEXT("UAsyncActionLoadPrimaryAssetClassList"));
PC = &FC->Functions.Add(TEXT("AsyncLoadPrimaryAssetClassList"));
PC->Parameters.Add(TEXT("LoadBundles"), SharedScriptArray);

FC = &GDefaultParamCollection.Add(TEXT("UAsyncActionLoadPrimaryAssetList"));
PC = &FC->Functions.Add(TEXT("AsyncLoadPrimaryAssetList"));
PC->Parameters.Add(TEXT("LoadBundles"), SharedScriptArray);

FC = &GDefaultParamCollection.Add(TEXT("UBlueprintMapLibrary"));
PC = &FC->Functions.Add(TEXT("Map_Values"));
PC->Parameters.Add(TEXT("Values"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("Map_Keys"));
PC->Parameters.Add(TEXT("Keys"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("Map_Contains"));
PC->Parameters.Add(TEXT("Key"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Map_Find"));
PC->Parameters.Add(TEXT("Key"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Value"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Map_Remove"));
PC->Parameters.Add(TEXT("Key"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Map_Add"));
PC->Parameters.Add(TEXT("Key"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Value"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UBlueprintPathsLibrary"));
PC = &FC->Functions.Add(TEXT("MakeValidFileName"));
PC->Parameters.Add(TEXT("InReplacementChar"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("CreateTempFilename"));
PC->Parameters.Add(TEXT("Prefix"), new FStringParamValue(TEXT("")));
PC->Parameters.Add(TEXT("Extension"), new FStringParamValue(TEXT(".tmp")));
PC = &FC->Functions.Add(TEXT("ConvertRelativePathToFull"));
PC->Parameters.Add(TEXT("InBasePath"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("GetBaseFilename"));
PC->Parameters.Add(TEXT("bRemovePath"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetExtension"));
PC->Parameters.Add(TEXT("bIncludeDot"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UBlueprintSetLibrary"));
PC = &FC->Functions.Add(TEXT("Set_Contains"));
PC->Parameters.Add(TEXT("ItemToFind"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Set_RemoveItems"));
PC->Parameters.Add(TEXT("Items"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("Set_Remove"));
PC->Parameters.Add(TEXT("Item"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Set_AddItems"));
PC->Parameters.Add(TEXT("NewItems"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("Set_Add"));
PC->Parameters.Add(TEXT("NewItem"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UGameplayStatics"));
PC = &FC->Functions.Add(TEXT("ProjectWorldToScreen"));
PC->Parameters.Add(TEXT("bPlayerViewportRelative"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SuggestProjectileVelocity_CustomArc"));
PC->Parameters.Add(TEXT("OverrideGravityZ"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("ArcParam"), new FFloatParamValue(0.500000f));
PC = &FC->Functions.Add(TEXT("Blueprint_PredictProjectilePath_ByTraceChannel"));
PC->Parameters.Add(TEXT("bTracePath"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceChannel"), new FByteParamValue(1));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("SimFrequency"), new FFloatParamValue(15.000000f));
PC->Parameters.Add(TEXT("MaxSimTime"), new FFloatParamValue(2.000000f));
PC->Parameters.Add(TEXT("OverrideGravityZ"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("Blueprint_PredictProjectilePath_ByObjectType"));
PC->Parameters.Add(TEXT("bTracePath"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("SimFrequency"), new FFloatParamValue(15.000000f));
PC->Parameters.Add(TEXT("MaxSimTime"), new FFloatParamValue(2.000000f));
PC->Parameters.Add(TEXT("OverrideGravityZ"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("EnableLiveStreaming"));
PC->Parameters.Add(TEXT("Enable"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("MakeHitResult"));
PC->Parameters.Add(TEXT("Normal"), new FVectorParamValue(FVector(0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("ImpactNormal"), new FVectorParamValue(FVector(0.000000f,0.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("SpawnDecalAttached"));
PC->Parameters.Add(TEXT("AttachPointName"), SharedFName_None);
PC->Parameters.Add(TEXT("Location"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("LocationType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("LifeSpan"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("SpawnDecalAtLocation"));
PC->Parameters.Add(TEXT("Rotation"), new FRotatorParamValue(FRotator(-90.000000f,0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("LifeSpan"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("ActivateReverbEffect"));
PC->Parameters.Add(TEXT("Priority"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Volume"), new FFloatParamValue(0.500000f));
PC->Parameters.Add(TEXT("FadeTime"), new FFloatParamValue(2.000000f));
PC = &FC->Functions.Add(TEXT("ClearSoundMixClassOverride"));
PC->Parameters.Add(TEXT("FadeOutTime"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("SetSoundMixClassOverride"));
PC->Parameters.Add(TEXT("Volume"), SharedFloat_One);
PC->Parameters.Add(TEXT("Pitch"), SharedFloat_One);
PC->Parameters.Add(TEXT("FadeInTime"), SharedFloat_One);
PC->Parameters.Add(TEXT("bApplyToChildren"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnForceFeedbackAttached"));
PC->Parameters.Add(TEXT("AttachPointName"), SharedFName_None);
PC->Parameters.Add(TEXT("Location"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("LocationType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bStopWhenAttachedToDestroyed"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bLooping"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("IntensityMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnForceFeedbackAtLocation"));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("bLooping"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("IntensityMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnDialogueAttached"));
PC->Parameters.Add(TEXT("AttachPointName"), SharedFName_None);
PC->Parameters.Add(TEXT("Location"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("LocationType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bStopWhenAttachedToDestroyed"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnDialogueAtLocation"));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("PlayDialogueAtLocation"));
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("SpawnDialogue2D"));
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("PlayDialogue2D"));
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("SpawnSoundAttached"));
PC->Parameters.Add(TEXT("AttachPointName"), SharedFName_None);
PC->Parameters.Add(TEXT("Location"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("LocationType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bStopWhenAttachedToDestroyed"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnSoundAtLocation"));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("PlaySoundAtLocation"));
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("CreateSound2D"));
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bPersistAcrossLevelTransition"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnSound2D"));
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bPersistAcrossLevelTransition"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("PlaySound2D"));
PC->Parameters.Add(TEXT("VolumeMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("PitchMultiplier"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bIsUISound"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetGlobalListenerFocusParameters"));
PC->Parameters.Add(TEXT("FocusAzimuthScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("NonFocusAzimuthScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("FocusDistanceScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("NonFocusDistanceScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("FocusVolumeScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("NonFocusVolumeScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("FocusPriorityScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("NonFocusPriorityScale"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("SetSoundClassDistanceScale"));
PC->Parameters.Add(TEXT("TimeSec"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("SpawnEmitterAttached"));
PC->Parameters.Add(TEXT("AttachPointName"), SharedFName_None);
PC->Parameters.Add(TEXT("Location"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("Scale"), new FVectorParamValue(FVector(1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("LocationType"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("PoolingMethod"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("bAutoActivate"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnEmitterAtLocation"));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("Scale"), new FVectorParamValue(FVector(1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("PoolingMethod"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("bAutoActivateSystem"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("PlayWorldCameraShake"));
PC->Parameters.Add(TEXT("Falloff"), SharedFloat_One);
PC->Parameters.Add(TEXT("bOrientShakeTowardsEpicenter"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ApplyRadialDamageWithFalloff"));
PC->Parameters.Add(TEXT("IgnoreActors"), SharedScriptArray);
PC->Parameters.Add(TEXT("DamagePreventionChannel"), new FByteParamValue(3));
PC = &FC->Functions.Add(TEXT("ApplyRadialDamage"));
PC->Parameters.Add(TEXT("IgnoreActors"), SharedScriptArray);
PC->Parameters.Add(TEXT("bDoFullDamage"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("DamagePreventionChannel"), new FByteParamValue(3));
PC = &FC->Functions.Add(TEXT("GetCurrentLevelName"));
PC->Parameters.Add(TEXT("bRemovePrefixString"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("OpenLevelBySoftObjectPtr"));
PC->Parameters.Add(TEXT("bAbsolute"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Options"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("OpenLevel"));
PC->Parameters.Add(TEXT("bAbsolute"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Options"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("CreatePlayer"));
PC->Parameters.Add(TEXT("ControllerId"), new FIntParamValue(-1));
PC->Parameters.Add(TEXT("bSpawnPlayerController"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("BeginDeferredActorSpawnFromClass"));
PC->Parameters.Add(TEXT("CollisionHandlingOverride"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("BeginSpawningActorFromClass"));
PC->Parameters.Add(TEXT("bNoCollisionFail"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UHealthSnapshotBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("LogPerformanceSnapshot"));
PC->Parameters.Add(TEXT("bResetStats"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UImportanceSamplingLibrary"));
PC = &FC->Functions.Add(TEXT("NextSobolCell3D"));
PC->Parameters.Add(TEXT("NumCells"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("PreviousValue"), new FVectorParamValue(FVector(0.000000f,0.000000f,0.000000f)));
PC = &FC->Functions.Add(TEXT("RandomSobolCell3D"));
PC->Parameters.Add(TEXT("NumCells"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("Cell"), new FVectorParamValue(FVector(0.000000f,0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("Seed"), new FVectorParamValue(FVector(0.000000f,0.000000f,0.000000f)));
PC = &FC->Functions.Add(TEXT("NextSobolCell2D"));
PC->Parameters.Add(TEXT("NumCells"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("PreviousValue"), new FVector2DParamValue(FVector2D(0.000000f,0.000000f)));
PC = &FC->Functions.Add(TEXT("RandomSobolCell2D"));
PC->Parameters.Add(TEXT("NumCells"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("Cell"), new FVector2DParamValue(FVector2D(0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("Seed"), new FVector2DParamValue(FVector2D(0.000000f,0.000000f)));

FC = &GDefaultParamCollection.Add(TEXT("UKismetArrayLibrary"));
PC = &FC->Functions.Add(TEXT("Array_Contains"));
PC->Parameters.Add(TEXT("ItemToFind"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Array_Find"));
PC->Parameters.Add(TEXT("ItemToFind"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Array_Set"));
PC->Parameters.Add(TEXT("Item"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Array_RemoveItem"));
PC->Parameters.Add(TEXT("Item"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Array_Insert"));
PC->Parameters.Add(TEXT("NewItem"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Array_AddUnique"));
PC->Parameters.Add(TEXT("NewItem"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Array_Add"));
PC->Parameters.Add(TEXT("NewItem"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UKismetInternationalizationLibrary"));
PC = &FC->Functions.Add(TEXT("GetCultureDisplayName"));
PC->Parameters.Add(TEXT("Localized"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetSuitableCulture"));
PC->Parameters.Add(TEXT("FallbackCulture"), new FStringParamValue(TEXT("en")));
PC = &FC->Functions.Add(TEXT("GetLocalizedCultures"));
PC->Parameters.Add(TEXT("IncludeGame"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("IncludeEngine"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("IncludeEditor"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("IncludeAdditional"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ClearCurrentAssetGroupCulture"));
PC->Parameters.Add(TEXT("SaveToConfig"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCurrentAssetGroupCulture"));
PC->Parameters.Add(TEXT("SaveToConfig"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCurrentLanguageAndLocale"));
PC->Parameters.Add(TEXT("SaveToConfig"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCurrentLocale"));
PC->Parameters.Add(TEXT("SaveToConfig"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCurrentLanguage"));
PC->Parameters.Add(TEXT("SaveToConfig"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetCurrentCulture"));
PC->Parameters.Add(TEXT("SaveToConfig"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UKismetMaterialLibrary"));
PC = &FC->Functions.Add(TEXT("CreateDynamicMaterialInstance"));
PC->Parameters.Add(TEXT("OptionalName"), SharedFName_None);
PC->Parameters.Add(TEXT("CreationFlags"), SharedEnum_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UKismetMathLibrary"));
PC = &FC->Functions.Add(TEXT("PointsAreCoplanar"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.100000f));
PC = &FC->Functions.Add(TEXT("MinimumAreaRectangle"));
PC->Parameters.Add(TEXT("bDebugDraw"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("FloatSpringInterp"));
PC->Parameters.Add(TEXT("Mass"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("TEase"));
PC->Parameters.Add(TEXT("BlendExp"), new FFloatParamValue(2.000000f));
PC->Parameters.Add(TEXT("Steps"), new FIntParamValue(2));
PC = &FC->Functions.Add(TEXT("TLerp"));
PC->Parameters.Add(TEXT("InterpMode"), SharedByte_Zero);
PC = &FC->Functions.Add(TEXT("NearlyEqual_TransformTransform"));
PC->Parameters.Add(TEXT("LocationTolerance"), new FFloatParamValue(0.000100f));
PC->Parameters.Add(TEXT("RotationTolerance"), new FFloatParamValue(0.000100f));
PC->Parameters.Add(TEXT("Scale3DTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("MakeTransform"));
PC->Parameters.Add(TEXT("Scale"), new FVectorParamValue(FVector(1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("MakeFrameRate"));
PC->Parameters.Add(TEXT("Denominator"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("MakeQualifiedFrameTime"));
PC->Parameters.Add(TEXT("SubFrame"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("MakeDateTime"));
PC->Parameters.Add(TEXT("Hour"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Minute"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Second"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Millisecond"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("LinearColor_IsNearEqual"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Conv_LinearColorToColor"));
PC->Parameters.Add(TEXT("InUseSRGB"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("HSVToRGB"));
PC->Parameters.Add(TEXT("A"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("LinearColor_SetFromHSV"));
PC->Parameters.Add(TEXT("A"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("LinearColor_SetRGBA"));
PC->Parameters.Add(TEXT("A"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("MakeColor"));
PC->Parameters.Add(TEXT("A"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Quat_Normalized"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Quat_Normalize"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Quat_IsIdentity"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("NotEqual_QuatQuat"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("EqualEqual_QuatQuat"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Matrix_GetScaleVector"));
PC->Parameters.Add(TEXT("Tolerance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("Matrix_GetMatrixWithoutScale"));
PC->Parameters.Add(TEXT("Tolerance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("Matrix_RemoveScaling"));
PC->Parameters.Add(TEXT("Tolerance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("NotEqual_MatrixMatrix"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("EqualEqual_MatrixMatrix"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("REase"));
PC->Parameters.Add(TEXT("BlendExp"), new FFloatParamValue(2.000000f));
PC->Parameters.Add(TEXT("Steps"), new FIntParamValue(2));
PC = &FC->Functions.Add(TEXT("RandomRotator"));
PC->Parameters.Add(TEXT("bRoll"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("NotEqual_RotatorRotator"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("EqualEqual_RotatorRotator"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Vector4_Normalize3"));
PC->Parameters.Add(TEXT("Tolerance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("Vector4_Normal3"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Vector4_IsUnit3"));
PC->Parameters.Add(TEXT("SquaredLenthTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Vector4_IsNearlyZero3"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("NotEqual_Vector4Vector4"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("EqualEqual_Vector4Vector4"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("VectorSpringInterp"));
PC->Parameters.Add(TEXT("Mass"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("VEase"));
PC->Parameters.Add(TEXT("BlendExp"), new FFloatParamValue(2.000000f));
PC->Parameters.Add(TEXT("Steps"), new FIntParamValue(2));
PC = &FC->Functions.Add(TEXT("Vector_Normalize"));
PC->Parameters.Add(TEXT("Tolerance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("Vector_Normal2D"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Normal"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Vector_IsUnit"));
PC->Parameters.Add(TEXT("SquaredLenthTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Vector_IsUniform"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Vector_IsNearlyZero"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("NotEqual_VectorVector"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("EqualEqual_VectorVector"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Divide_VectorInt"));
PC->Parameters.Add(TEXT("B"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("Divide_VectorFloat"));
PC->Parameters.Add(TEXT("B"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Divide_VectorVector"));
PC->Parameters.Add(TEXT("B"), new FVectorParamValue(FVector(1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("CreateVectorFromYawPitch"));
PC->Parameters.Add(TEXT("Length"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Normalize2D"));
PC->Parameters.Add(TEXT("Tolerance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("NormalSafe2D"));
PC->Parameters.Add(TEXT("Tolerance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("IsNearlyZero2D"));
PC->Parameters.Add(TEXT("Tolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("NotEqual_Vector2DVector2D"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("EqualEqual_Vector2DVector2D"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000100f));
PC = &FC->Functions.Add(TEXT("Divide_Vector2DFloat"));
PC->Parameters.Add(TEXT("B"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Conv_Vector2DToVector"));
PC->Parameters.Add(TEXT("Z"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("MakePulsatingValue"));
PC->Parameters.Add(TEXT("InPulsesPerSecond"), SharedFloat_One);
PC->Parameters.Add(TEXT("InPhase"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("Ease"));
PC->Parameters.Add(TEXT("BlendExp"), new FFloatParamValue(2.000000f));
PC->Parameters.Add(TEXT("Steps"), new FIntParamValue(2));
PC = &FC->Functions.Add(TEXT("FWrap"));
PC->Parameters.Add(TEXT("Min"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Max"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("FClamp"));
PC->Parameters.Add(TEXT("Min"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Max"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Log"));
PC->Parameters.Add(TEXT("Base"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("InRange_FloatFloat"));
PC->Parameters.Add(TEXT("Min"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Max"), SharedFloat_One);
PC->Parameters.Add(TEXT("InclusiveMin"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("InclusiveMax"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("NearlyEqual_FloatFloat"));
PC->Parameters.Add(TEXT("ErrorTolerance"), new FFloatParamValue(0.000001f));
PC = &FC->Functions.Add(TEXT("Subtract_FloatFloat"));
PC->Parameters.Add(TEXT("B"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Add_FloatFloat"));
PC->Parameters.Add(TEXT("B"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Percent_FloatFloat"));
PC->Parameters.Add(TEXT("B"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("Divide_FloatFloat"));
PC->Parameters.Add(TEXT("B"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("InRange_Int64Int64"));
PC->Parameters.Add(TEXT("InclusiveMin"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("InclusiveMax"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("Wrap"));
PC->Parameters.Add(TEXT("Min"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Max"), new FIntParamValue(100));
PC = &FC->Functions.Add(TEXT("InRange_IntInt"));
PC->Parameters.Add(TEXT("Min"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Max"), new FIntParamValue(10));
PC->Parameters.Add(TEXT("InclusiveMin"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("InclusiveMax"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("Subtract_IntInt"));
PC->Parameters.Add(TEXT("B"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("Add_IntInt"));
PC->Parameters.Add(TEXT("B"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("Percent_IntInt"));
PC->Parameters.Add(TEXT("B"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("Divide_IntInt"));
PC->Parameters.Add(TEXT("B"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("Subtract_ByteByte"));
PC->Parameters.Add(TEXT("B"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("Add_ByteByte"));
PC->Parameters.Add(TEXT("B"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("Percent_ByteByte"));
PC->Parameters.Add(TEXT("B"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("Divide_ByteByte"));
PC->Parameters.Add(TEXT("B"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("RandomBoolWithWeightFromStream"));
PC->Parameters.Add(TEXT("Weight"), new FFloatParamValue(0.500000f));
PC = &FC->Functions.Add(TEXT("RandomBoolWithWeight"));
PC->Parameters.Add(TEXT("Weight"), new FFloatParamValue(0.500000f));

FC = &GDefaultParamCollection.Add(TEXT("UKismetRenderingLibrary"));
PC = &FC->Functions.Add(TEXT("RenderTargetCreateStaticTexture2DEditorOnly"));
PC->Parameters.Add(TEXT("Name"), new FStringParamValue(TEXT("Texture")));
PC->Parameters.Add(TEXT("CompressionSettings"), SharedByte_Zero);
PC->Parameters.Add(TEXT("MipSettings"), SharedByte_Zero);
PC = &FC->Functions.Add(TEXT("CreateRenderTargetVolume"));
PC->Parameters.Add(TEXT("Width"), new FIntParamValue(16));
PC->Parameters.Add(TEXT("Height"), new FIntParamValue(16));
PC->Parameters.Add(TEXT("Depth"), new FIntParamValue(16));
PC->Parameters.Add(TEXT("Format"), new FByteParamValue(6));
PC->Parameters.Add(TEXT("ClearColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bAutoGenerateMipMaps"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("CreateRenderTarget2DArray"));
PC->Parameters.Add(TEXT("Width"), new FIntParamValue(256));
PC->Parameters.Add(TEXT("Height"), new FIntParamValue(256));
PC->Parameters.Add(TEXT("Slices"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("Format"), new FByteParamValue(6));
PC->Parameters.Add(TEXT("ClearColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bAutoGenerateMipMaps"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("CreateRenderTarget2D"));
PC->Parameters.Add(TEXT("Width"), new FIntParamValue(256));
PC->Parameters.Add(TEXT("Height"), new FIntParamValue(256));
PC->Parameters.Add(TEXT("Format"), new FByteParamValue(6));
PC->Parameters.Add(TEXT("ClearColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bAutoGenerateMipMaps"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ClearRenderTarget2D"));
PC->Parameters.Add(TEXT("ClearColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,0.000000f,1.000000f)));

FC = &GDefaultParamCollection.Add(TEXT("UKismetStringLibrary"));
PC = &FC->Functions.Add(TEXT("Split"));
PC->Parameters.Add(TEXT("SearchCase"), new FByteParamValue(1));
PC->Parameters.Add(TEXT("SearchDir"), SharedByte_Zero);
PC = &FC->Functions.Add(TEXT("ReplaceInline"));
PC->Parameters.Add(TEXT("SearchCase"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("Replace"));
PC->Parameters.Add(TEXT("SearchCase"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("MatchesWildcard"));
PC->Parameters.Add(TEXT("SearchCase"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("EndsWith"));
PC->Parameters.Add(TEXT("SearchCase"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("StartsWith"));
PC->Parameters.Add(TEXT("SearchCase"), new FByteParamValue(1));
PC = &FC->Functions.Add(TEXT("JoinStringArray"));
PC->Parameters.Add(TEXT("Separator"), new FStringParamValue(TEXT(" ")));
PC = &FC->Functions.Add(TEXT("ParseIntoArray"));
PC->Parameters.Add(TEXT("Delimiter"), new FStringParamValue(TEXT(" ")));
PC->Parameters.Add(TEXT("CullEmptyStrings"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetCharacterAsNumber"));
PC->Parameters.Add(TEXT("Index"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Contains"));
PC->Parameters.Add(TEXT("bUseCase"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bSearchFromEnd"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("FindSubstring"));
PC->Parameters.Add(TEXT("bUseCase"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bSearchFromEnd"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("StartPosition"), new FIntParamValue(-1));
PC = &FC->Functions.Add(TEXT("GetSubstring"));
PC->Parameters.Add(TEXT("StartIndex"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Length"), new FIntParamValue(1));

FC = &GDefaultParamCollection.Add(TEXT("UKismetSystemLibrary"));
PC = &FC->Functions.Add(TEXT("GetPrimaryAssetsWithBundleState"));
PC->Parameters.Add(TEXT("ExcludedBundles"), SharedScriptArray);
PC->Parameters.Add(TEXT("ValidTypes"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("DrawDebugFloatHistoryLocation"));
PC->Parameters.Add(TEXT("DrawColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugFloatHistoryTransform"));
PC->Parameters.Add(TEXT("DrawColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugCamera"));
PC->Parameters.Add(TEXT("CameraColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugFrustum"));
PC->Parameters.Add(TEXT("FrustumColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugPlane"));
PC->Parameters.Add(TEXT("PlaneColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugString"));
PC->Parameters.Add(TEXT("TextColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugCapsule"));
PC->Parameters.Add(TEXT("LineColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugConeInDegrees"));
PC->Parameters.Add(TEXT("Length"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("AngleWidth"), new FFloatParamValue(45.000000f));
PC->Parameters.Add(TEXT("AngleHeight"), new FFloatParamValue(45.000000f));
PC->Parameters.Add(TEXT("NumSides"), new FIntParamValue(12));
PC->Parameters.Add(TEXT("LineColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugCone"));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugCylinder"));
PC->Parameters.Add(TEXT("Radius"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("Segments"), new FIntParamValue(12));
PC->Parameters.Add(TEXT("LineColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugSphere"));
PC->Parameters.Add(TEXT("Radius"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("Segments"), new FIntParamValue(12));
PC->Parameters.Add(TEXT("LineColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugCoordinateSystem"));
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugBox"));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugArrow"));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugPoint"));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DrawDebugCircle"));
PC->Parameters.Add(TEXT("NumSegments"), new FIntParamValue(12));
PC->Parameters.Add(TEXT("LineColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("YAxis"), new FVectorParamValue(FVector(0.000000f,1.000000f,0.000000f)));
PC->Parameters.Add(TEXT("ZAxis"), new FVectorParamValue(FVector(0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bDrawAxis"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("DrawDebugLine"));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("CapsuleTraceMultiByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("CapsuleTraceSingleByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("BoxTraceMultiByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("BoxTraceSingleByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("SphereTraceMultiByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("SphereTraceSingleByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("LineTraceMultiByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("LineTraceSingleByProfile"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("CapsuleTraceMultiForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("CapsuleTraceSingleForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("BoxTraceMultiForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("BoxTraceSingleForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("SphereTraceMultiForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("SphereTraceSingleForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("LineTraceMultiForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("LineTraceSingleForObjects"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("CapsuleTraceMulti"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("CapsuleTraceSingle"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("BoxTraceMulti"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("BoxTraceSingle"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("SphereTraceMulti"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("SphereTraceSingle"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("LineTraceMulti"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("LineTraceSingle"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC->Parameters.Add(TEXT("bIgnoreSelf"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TraceColor"), new FLinearColorParamValue(FLinearColor(1.000000f,0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("TraceHitColor"), new FLinearColorParamValue(FLinearColor(0.000000f,1.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DrawTime"), new FFloatParamValue(5.000000f));
PC = &FC->Functions.Add(TEXT("ComponentOverlapComponents"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("ComponentOverlapActors"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("CapsuleOverlapComponents"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("CapsuleOverlapActors"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("BoxOverlapComponents"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("BoxOverlapActors"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("SphereOverlapComponents"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("SphereOverlapActors"));
PC->Parameters.Add(TEXT("ActorsToIgnore"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("SetColorPropertyByName"));
PC->Parameters.Add(TEXT("Value"), SharedFColor_Zero);
PC = &FC->Functions.Add(TEXT("SetLinearColorPropertyByName"));
PC->Parameters.Add(TEXT("Value"), SharedFLinearColor_Zero);
PC = &FC->Functions.Add(TEXT("SetRotatorPropertyByName"));
PC->Parameters.Add(TEXT("Value"), SharedFRotator_Zero);
PC = &FC->Functions.Add(TEXT("SetVectorPropertyByName"));
PC->Parameters.Add(TEXT("Value"), SharedFVector_Zero);
PC = &FC->Functions.Add(TEXT("SetTextPropertyByName"));
PC->Parameters.Add(TEXT("Value"), new FTextParamValue(FText::FromString(TEXT(""))));
PC = &FC->Functions.Add(TEXT("SetStringPropertyByName"));
PC->Parameters.Add(TEXT("Value"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("SetNamePropertyByName"));
PC->Parameters.Add(TEXT("Value"), new FNameParamValue(FName("")));
PC = &FC->Functions.Add(TEXT("K2_SetTimer"));
PC->Parameters.Add(TEXT("InitialStartDelay"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("InitialStartDelayVariance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("K2_SetTimerDelegate"));
PC->Parameters.Add(TEXT("InitialStartDelay"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("InitialStartDelayVariance"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("MoveComponentTo"));
PC->Parameters.Add(TEXT("OverTime"), new FFloatParamValue(0.200000f));
PC = &FC->Functions.Add(TEXT("RetriggerableDelay"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(0.200000f));
PC = &FC->Functions.Add(TEXT("Delay"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(0.200000f));
PC = &FC->Functions.Add(TEXT("PrintText"));
PC->Parameters.Add(TEXT("InText"), new FTextParamValue(INVTEXT("Hello")));
PC->Parameters.Add(TEXT("bPrintToScreen"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bPrintToLog"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TextColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.660000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(2.000000f));
PC = &FC->Functions.Add(TEXT("PrintString"));
PC->Parameters.Add(TEXT("InString"), new FStringParamValue(TEXT("Hello")));
PC->Parameters.Add(TEXT("bPrintToScreen"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bPrintToLog"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("TextColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.660000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(2.000000f));

FC = &GDefaultParamCollection.Add(TEXT("UKismetTextLibrary"));
PC = &FC->Functions.Add(TEXT("AsTimeZoneTime_DateTime"));
PC->Parameters.Add(TEXT("InTimeZone"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("AsTimeZoneDateTime_DateTime"));
PC->Parameters.Add(TEXT("InTimeZone"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("AsTimeZoneDate_DateTime"));
PC->Parameters.Add(TEXT("InTimeZone"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("AsPercent_Float"));
PC->Parameters.Add(TEXT("bAlwaysSign"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseGrouping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("MinimumIntegralDigits"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("MaximumIntegralDigits"), new FIntParamValue(324));
PC->Parameters.Add(TEXT("MinimumFractionalDigits"), SharedInt_Zero);
PC->Parameters.Add(TEXT("MaximumFractionalDigits"), new FIntParamValue(3));
PC = &FC->Functions.Add(TEXT("AsCurrency_Float"));
PC->Parameters.Add(TEXT("bAlwaysSign"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseGrouping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("MinimumIntegralDigits"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("MaximumIntegralDigits"), new FIntParamValue(324));
PC->Parameters.Add(TEXT("MinimumFractionalDigits"), SharedInt_Zero);
PC->Parameters.Add(TEXT("MaximumFractionalDigits"), new FIntParamValue(3));
PC->Parameters.Add(TEXT("CurrencyCode"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("AsCurrency_Integer"));
PC->Parameters.Add(TEXT("bAlwaysSign"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseGrouping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("MinimumIntegralDigits"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("MaximumIntegralDigits"), new FIntParamValue(324));
PC->Parameters.Add(TEXT("MinimumFractionalDigits"), SharedInt_Zero);
PC->Parameters.Add(TEXT("MaximumFractionalDigits"), new FIntParamValue(3));
PC->Parameters.Add(TEXT("CurrencyCode"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("Conv_FloatToText"));
PC->Parameters.Add(TEXT("bAlwaysSign"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseGrouping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("MinimumIntegralDigits"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("MaximumIntegralDigits"), new FIntParamValue(324));
PC->Parameters.Add(TEXT("MinimumFractionalDigits"), SharedInt_Zero);
PC->Parameters.Add(TEXT("MaximumFractionalDigits"), new FIntParamValue(3));
PC = &FC->Functions.Add(TEXT("Conv_Int64ToText"));
PC->Parameters.Add(TEXT("bAlwaysSign"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseGrouping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("MinimumIntegralDigits"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("MaximumIntegralDigits"), new FIntParamValue(324));
PC = &FC->Functions.Add(TEXT("Conv_IntToText"));
PC->Parameters.Add(TEXT("bAlwaysSign"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseGrouping"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("MinimumIntegralDigits"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("MaximumIntegralDigits"), new FIntParamValue(324));

FC = &GDefaultParamCollection.Add(TEXT("UMeshVertexPainterKismetLibrary"));
PC = &FC->Functions.Add(TEXT("PaintVerticesLerpAlongAxis"));
PC->Parameters.Add(TEXT("bConvertToSRGB"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("PaintVerticesSingleColor"));
PC->Parameters.Add(TEXT("bConvertToSRGB"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UStereoLayerFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("SetSplashScreen"));
PC->Parameters.Add(TEXT("Scale"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Offset"), new FVectorParamValue(FVector(0.000000f,0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("bShowLoadingMovie"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bShowOnSet"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UVisualLoggerKismetLibrary"));
PC = &FC->Functions.Add(TEXT("LogSegment"));
PC->Parameters.Add(TEXT("ObjectColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("CategoryName"), new FNameParamValue(FName("VisLogBP")));
PC->Parameters.Add(TEXT("bAddToMessageLog"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("LogBox"));
PC->Parameters.Add(TEXT("ObjectColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("LogCategory"), new FNameParamValue(FName("VisLogBP")));
PC->Parameters.Add(TEXT("bAddToMessageLog"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("LogLocation"));
PC->Parameters.Add(TEXT("ObjectColor"), new FLinearColorParamValue(FLinearColor(0.000000f,0.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Radius"), new FFloatParamValue(10.000000f));
PC->Parameters.Add(TEXT("LogCategory"), new FNameParamValue(FName("VisLogBP")));
PC->Parameters.Add(TEXT("bAddToMessageLog"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("LogText"));
PC->Parameters.Add(TEXT("LogCategory"), new FNameParamValue(FName("VisLogBP")));
PC->Parameters.Add(TEXT("bAddToMessageLog"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("ULevelStreamingDynamic"));
PC = &FC->Functions.Add(TEXT("LoadLevelInstanceBySoftObjectPtr"));
PC->Parameters.Add(TEXT("OptionalLevelNameOverride"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("LoadLevelInstance"));
PC->Parameters.Add(TEXT("OptionalLevelNameOverride"), new FStringParamValue(TEXT("")));

FC = &GDefaultParamCollection.Add(TEXT("UMaterialInstanceDynamic"));
PC = &FC->Functions.Add(TEXT("K2_CopyMaterialInstanceParameters"));
PC->Parameters.Add(TEXT("bQuickParametersOnly"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("USoundSubmix"));
PC = &FC->Functions.Add(TEXT("StartSpectralAnalysis"));
PC->Parameters.Add(TEXT("FFTSize"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("InterpolationMethod"), new FEnumParamValue(1));
PC->Parameters.Add(TEXT("WindowType"), new FEnumParamValue(2));
PC->Parameters.Add(TEXT("HopSize"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("SpectrumType"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("AddSpectralAnalysisDelegate"));
PC->Parameters.Add(TEXT("UpdateRate"), new FFloatParamValue(10.000000f));
PC->Parameters.Add(TEXT("DecibelNoiseFloor"), new FFloatParamValue(-40.000000f));
PC->Parameters.Add(TEXT("bDoNormalize"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bDoAutoRange"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("AutoRangeAttackTime"), new FFloatParamValue(0.100000f));
PC->Parameters.Add(TEXT("AutoRangeReleaseTime"), new FFloatParamValue(60.000000f));

FC = &GDefaultParamCollection.Add(TEXT("USkeletalMesh"));
PC = &FC->Functions.Add(TEXT("IsSectionUsingCloth"));
PC->Parameters.Add(TEXT("bCheckCorrespondingSections"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UStaticMesh"));
PC = &FC->Functions.Add(TEXT("SetLODGroup"));
PC->Parameters.Add(TEXT("bRebuildImmediately"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("BuildFromStaticMeshDescriptions"));
PC->Parameters.Add(TEXT("bBuildSimpleCollision"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UCanvasRenderTarget2D"));
PC = &FC->Functions.Add(TEXT("CreateCanvasRenderTarget2D"));
PC->Parameters.Add(TEXT("Width"), new FIntParamValue(1024));
PC->Parameters.Add(TEXT("Height"), new FIntParamValue(1024));

FC = &GDefaultParamCollection.Add(TEXT("UViewportStatsSubsystem"));
PC = &FC->Functions.Add(TEXT("AddTimedDisplay"));
PC->Parameters.Add(TEXT("Color"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Duration"), SharedFloat_Zero);

// ModuleName ImageWriteQueue Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ImageWriteQueue/ 
// ModuleName AudioMixer Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioMixer/ 
FC = &GDefaultParamCollection.Add(TEXT("UAudioMixerBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("MakePresetSpectralAnalysisBandSettings"));
PC->Parameters.Add(TEXT("InNumBands"), new FIntParamValue(10));
PC->Parameters.Add(TEXT("InAttackTimeMsec"), new FIntParamValue(10));
PC->Parameters.Add(TEXT("InReleaseTimeMsec"), new FIntParamValue(10));
PC = &FC->Functions.Add(TEXT("MakeFullSpectrumSpectralAnalysisBandSettings"));
PC->Parameters.Add(TEXT("InNumBands"), new FIntParamValue(30));
PC->Parameters.Add(TEXT("InMinimumFrequency"), new FFloatParamValue(40.000000f));
PC->Parameters.Add(TEXT("InMaximumFrequency"), new FFloatParamValue(16000.000000f));
PC->Parameters.Add(TEXT("InAttackTimeMsec"), new FIntParamValue(10));
PC->Parameters.Add(TEXT("InReleaseTimeMsec"), new FIntParamValue(10));
PC = &FC->Functions.Add(TEXT("MakeMusicalSpectralAnalysisBandSettings"));
PC->Parameters.Add(TEXT("InNumSemitones"), new FIntParamValue(60));
PC->Parameters.Add(TEXT("InStartingMusicalNote"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("InStartingOctave"), new FIntParamValue(2));
PC->Parameters.Add(TEXT("InAttackTimeMsec"), new FIntParamValue(10));
PC->Parameters.Add(TEXT("InReleaseTimeMsec"), new FIntParamValue(10));
PC = &FC->Functions.Add(TEXT("StartAnalyzingOutput"));
PC->Parameters.Add(TEXT("FFTSize"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("InterpolationMethod"), new FEnumParamValue(1));
PC->Parameters.Add(TEXT("WindowType"), new FEnumParamValue(2));
PC->Parameters.Add(TEXT("HopSize"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("SpectrumType"), SharedEnum_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UQuartzClockHandle"));
PC = &FC->Functions.Add(TEXT("SetBeatsPerMinute"));
PC->Parameters.Add(TEXT("Delegate"), SharedScriptDelegate);
PC->Parameters.Add(TEXT("BeatsPerMinute"), new FFloatParamValue(60.000000f));
PC = &FC->Functions.Add(TEXT("SetThirtySecondNotesPerMinute"));
PC->Parameters.Add(TEXT("Delegate"), SharedScriptDelegate);
PC->Parameters.Add(TEXT("ThirtySecondsNotesPerMinute"), new FFloatParamValue(960.000000f));
PC = &FC->Functions.Add(TEXT("SetSecondsPerTick"));
PC->Parameters.Add(TEXT("Delegate"), SharedScriptDelegate);
PC->Parameters.Add(TEXT("SecondsPerTick"), new FFloatParamValue(0.250000f));
PC = &FC->Functions.Add(TEXT("SetTicksPerSecond"));
PC->Parameters.Add(TEXT("Delegate"), SharedScriptDelegate);
PC->Parameters.Add(TEXT("TicksPerSecond"), new FFloatParamValue(10.000000f));
PC = &FC->Functions.Add(TEXT("SetMillisecondsPerTick"));
PC->Parameters.Add(TEXT("Delegate"), SharedScriptDelegate);
PC->Parameters.Add(TEXT("MillisecondsPerTick"), new FFloatParamValue(100.000000f));
PC = &FC->Functions.Add(TEXT("ResetTransport"));
PC->Parameters.Add(TEXT("InDelegate"), SharedScriptDelegate);

FC = &GDefaultParamCollection.Add(TEXT("UQuartzSubsystem"));
PC = &FC->Functions.Add(TEXT("CreateNewClock"));
PC->Parameters.Add(TEXT("bOverrideSettingsIfClockExists"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("USubmixEffectReverbPreset"));
PC = &FC->Functions.Add(TEXT("SetSettingsWithReverbEffect"));
PC->Parameters.Add(TEXT("DryLevel"), SharedFloat_Zero);

// ModuleName MediaUtils Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaUtils/ 
// ModuleName MediaAssets Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaAssets/ 
FC = &GDefaultParamCollection.Add(TEXT("UMediaBlueprintFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("EnumerateWebcamCaptureDevices"));
PC->Parameters.Add(TEXT("Filter"), new FIntParamValue(-1));
PC = &FC->Functions.Add(TEXT("EnumerateVideoCaptureDevices"));
PC->Parameters.Add(TEXT("Filter"), new FIntParamValue(-1));
PC = &FC->Functions.Add(TEXT("EnumerateAudioCaptureDevices"));
PC->Parameters.Add(TEXT("Filter"), new FIntParamValue(-1));

FC = &GDefaultParamCollection.Add(TEXT("UMediaSoundComponent"));
PC = &FC->Functions.Add(TEXT("SetSpectralAnalysisSettings"));
PC->Parameters.Add(TEXT("InFFTSize"), new FEnumParamValue(2));

// ModuleName TimeManagement Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TimeManagement/ 
FC = &GDefaultParamCollection.Add(TEXT("UTimeManagementBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("Conv_TimecodeToString"));
PC->Parameters.Add(TEXT("bForceSignDisplay"), SharedBool_FALSE);

// ModuleName MovieScene Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieScene/ 
FC = &GDefaultParamCollection.Add(TEXT("UMovieSceneSequencePlayer"));
PC = &FC->Functions.Add(TEXT("SetFrameRange"));
PC->Parameters.Add(TEXT("SubFrames"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("PlayLooping"));
PC->Parameters.Add(TEXT("NumLoops"), new FIntParamValue(-1));

// ModuleName AnimationCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnimationCore/ 
// ModuleName AnimGraphRuntime Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnimGraphRuntime/ 
FC = &GDefaultParamCollection.Add(TEXT("UKismetAnimationLibrary"));
PC = &FC->Functions.Add(TEXT("K2_EndProfilingTimer"));
PC->Parameters.Add(TEXT("bLog"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("LogPrefix"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("K2_CalculateVelocityFromSockets"));
PC->Parameters.Add(TEXT("NumberOfSamples"), new FIntParamValue(16));
PC->Parameters.Add(TEXT("VelocityMin"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("VelocityMax"), new FFloatParamValue(128.000000f));
PC = &FC->Functions.Add(TEXT("K2_CalculateVelocityFromPositionHistory"));
PC->Parameters.Add(TEXT("NumberOfSamples"), new FIntParamValue(16));
PC->Parameters.Add(TEXT("VelocityMin"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("VelocityMax"), new FFloatParamValue(128.000000f));
PC = &FC->Functions.Add(TEXT("K2_MakePerlinNoiseVectorAndRemap"));
PC->Parameters.Add(TEXT("RangeOutMinX"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("RangeOutMaxX"), SharedFloat_One);
PC->Parameters.Add(TEXT("RangeOutMinY"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("RangeOutMaxY"), SharedFloat_One);
PC->Parameters.Add(TEXT("RangeOutMinZ"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("RangeOutMaxZ"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("K2_DistanceBetweenTwoSocketsAndMapRange"));
PC->Parameters.Add(TEXT("bRemapRange"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("K2_LookAt"));
PC->Parameters.Add(TEXT("bUseUpVector"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("K2_TwoBoneIK"));
PC->Parameters.Add(TEXT("bAllowStretching"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("StartStretchRatio"), SharedFloat_One);
PC->Parameters.Add(TEXT("MaxStretchScale"), new FFloatParamValue(1.200000f));

FC = &GDefaultParamCollection.Add(TEXT("UPlayMontageCallbackProxy"));
PC = &FC->Functions.Add(TEXT("CreateProxyObjectForPlayMontage"));
PC->Parameters.Add(TEXT("PlayRate"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartingPosition"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("StartingSection"), SharedFName_None);

// ModuleName MovieSceneTracks Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieSceneTracks/ 
// ModuleName UMG Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UMG/ 
FC = &GDefaultParamCollection.Add(TEXT("UWidgetAnimationPlayCallbackProxy"));
PC = &FC->Functions.Add(TEXT("CreatePlayAnimationTimeRangeProxyObject"));
PC->Parameters.Add(TEXT("StartAtTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("EndAtTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("NumLoopsToPlay"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("PlayMode"), SharedByte_Zero);
PC->Parameters.Add(TEXT("PlaybackSpeed"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("CreatePlayAnimationProxyObject"));
PC->Parameters.Add(TEXT("StartAtTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("NumLoopsToPlay"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("PlayMode"), SharedByte_Zero);
PC->Parameters.Add(TEXT("PlaybackSpeed"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UWidgetBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("GetAllWidgetsOfClass"));
PC->Parameters.Add(TEXT("TopLevelOnly"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("MakeBrushFromMaterial"));
PC->Parameters.Add(TEXT("Width"), new FIntParamValue(32));
PC->Parameters.Add(TEXT("Height"), new FIntParamValue(32));
PC = &FC->Functions.Add(TEXT("MakeBrushFromTexture"));
PC->Parameters.Add(TEXT("Width"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Height"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("ReleaseJoystickCapture"));
PC->Parameters.Add(TEXT("bInAllJoysticks"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("ClearUserFocus"));
PC->Parameters.Add(TEXT("bInAllUsers"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("CaptureJoystick"));
PC->Parameters.Add(TEXT("bInAllJoysticks"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetUserFocus"));
PC->Parameters.Add(TEXT("bInAllUsers"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("DrawTextFormatted"));
PC->Parameters.Add(TEXT("FontSize"), new FIntParamValue(16));
PC->Parameters.Add(TEXT("FontTypeFace"), new FNameParamValue(FName("Regular")));
PC->Parameters.Add(TEXT("Tint"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("DrawText"));
PC->Parameters.Add(TEXT("Tint"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("DrawLines"));
PC->Parameters.Add(TEXT("Tint"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bAntiAlias"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("DrawLine"));
PC->Parameters.Add(TEXT("Tint"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bAntiAlias"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Thickness"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("DrawBox"));
PC->Parameters.Add(TEXT("Tint"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));
PC = &FC->Functions.Add(TEXT("SetInputMode_GameAndUIEx"));
PC->Parameters.Add(TEXT("InMouseLockMode"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("bHideCursorDuringCapture"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetInputMode_GameAndUI"));
PC->Parameters.Add(TEXT("bLockMouseToViewport"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bHideCursorDuringCapture"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetInputMode_UIOnlyEx"));
PC->Parameters.Add(TEXT("InMouseLockMode"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("SetInputMode_UIOnly"));
PC->Parameters.Add(TEXT("bLockMouseToViewport"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UWidgetInteractionComponent"));
PC = &FC->Functions.Add(TEXT("SendKeyChar"));
PC->Parameters.Add(TEXT("bRepeat"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PressKey"));
PC->Parameters.Add(TEXT("bRepeat"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UWidget"));
PC = &FC->Functions.Add(TEXT("HasMouseCaptureByUser"));
PC->Parameters.Add(TEXT("PointerIndex"), new FIntParamValue(-1));

FC = &GDefaultParamCollection.Add(TEXT("UImage"));
PC = &FC->Functions.Add(TEXT("SetBrushFromSoftTexture"));
PC->Parameters.Add(TEXT("bMatchSize"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetBrushFromTextureDynamic"));
PC->Parameters.Add(TEXT("bMatchSize"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetBrushFromAtlasInterface"));
PC->Parameters.Add(TEXT("bMatchSize"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetBrushFromTexture"));
PC->Parameters.Add(TEXT("bMatchSize"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UUserWidget"));
PC = &FC->Functions.Add(TEXT("SetPlaybackSpeed"));
PC->Parameters.Add(TEXT("PlaybackSpeed"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("PlayAnimationReverse"));
PC->Parameters.Add(TEXT("PlaybackSpeed"), SharedFloat_One);
PC->Parameters.Add(TEXT("bRestoreState"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PlayAnimationForward"));
PC->Parameters.Add(TEXT("PlaybackSpeed"), SharedFloat_One);
PC->Parameters.Add(TEXT("bRestoreState"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PlayAnimationTimeRange"));
PC->Parameters.Add(TEXT("StartAtTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("EndAtTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("NumLoopsToPlay"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("PlayMode"), SharedByte_Zero);
PC->Parameters.Add(TEXT("PlaybackSpeed"), SharedFloat_One);
PC->Parameters.Add(TEXT("bRestoreState"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("PlayAnimation"));
PC->Parameters.Add(TEXT("StartAtTime"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("NumLoopsToPlay"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("PlayMode"), SharedByte_Zero);
PC->Parameters.Add(TEXT("PlaybackSpeed"), SharedFloat_One);
PC->Parameters.Add(TEXT("bRestoreState"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("BindToAnimationEvent"));
PC->Parameters.Add(TEXT("UserTag"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetPositionInViewport"));
PC->Parameters.Add(TEXT("bRemoveDPIScale"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddToPlayerScreen"));
PC->Parameters.Add(TEXT("ZOrder"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("AddToViewport"));
PC->Parameters.Add(TEXT("ZOrder"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UDynamicEntryBox"));
PC = &FC->Functions.Add(TEXT("Reset"));
PC->Parameters.Add(TEXT("bDeleteWidgets"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UGridPanel"));
PC = &FC->Functions.Add(TEXT("AddChildToGrid"));
PC->Parameters.Add(TEXT("InRow"), SharedInt_Zero);
PC->Parameters.Add(TEXT("InColumn"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UScrollBox"));
PC = &FC->Functions.Add(TEXT("ScrollWidgetIntoView"));
PC->Parameters.Add(TEXT("AnimateScroll"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("ScrollDestination"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("Padding"), SharedFloat_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UUniformGridPanel"));
PC = &FC->Functions.Add(TEXT("AddChildToUniformGrid"));
PC->Parameters.Add(TEXT("InRow"), SharedInt_Zero);
PC->Parameters.Add(TEXT("InColumn"), SharedInt_Zero);

// ModuleName LevelSequence Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LevelSequence/ 
FC = &GDefaultParamCollection.Add(TEXT("ALevelSequenceActor"));
PC = &FC->Functions.Add(TEXT("AddBindingByTag"));
PC->Parameters.Add(TEXT("bAllowBindingsFromAsset"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddBinding"));
PC->Parameters.Add(TEXT("bAllowBindingsFromAsset"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetBindingByTag"));
PC->Parameters.Add(TEXT("bAllowBindingsFromAsset"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetBinding"));
PC->Parameters.Add(TEXT("bAllowBindingsFromAsset"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("ALevelSequenceMediaController"));
PC = &FC->Functions.Add(TEXT("SynchronizeToServer"));
PC->Parameters.Add(TEXT("DesyncThresholdSeconds"), new FFloatParamValue(2.000000f));

// ModuleName Foliage Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Foliage/ 
FC = &GDefaultParamCollection.Add(TEXT("UProceduralFoliageSpawner"));
PC = &FC->Functions.Add(TEXT("Simulate"));
PC->Parameters.Add(TEXT("NumSteps"), new FIntParamValue(-1));

// ModuleName Landscape Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Landscape/ 
FC = &GDefaultParamCollection.Add(TEXT("ALandscapeProxy"));
PC = &FC->Functions.Add(TEXT("LandscapeImportHeightmapFromRenderTarget"));
PC->Parameters.Add(TEXT("InImportHeightFromRGChannel"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("LandscapeExportHeightmapToRenderTarget"));
PC->Parameters.Add(TEXT("InExportHeightIntoRGChannel"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("InExportLandscapeProxies"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("EditorApplySpline"));
PC->Parameters.Add(TEXT("StartWidth"), new FFloatParamValue(200.000000f));
PC->Parameters.Add(TEXT("EndWidth"), new FFloatParamValue(200.000000f));
PC->Parameters.Add(TEXT("StartSideFalloff"), new FFloatParamValue(200.000000f));
PC->Parameters.Add(TEXT("EndSideFalloff"), new FFloatParamValue(200.000000f));
PC->Parameters.Add(TEXT("StartRoll"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("EndRoll"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("NumSubdivisions"), new FIntParamValue(20));
PC->Parameters.Add(TEXT("bRaiseHeights"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bLowerHeights"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("EditLayerName"), new FNameParamValue(FName("")));

// ModuleName CinematicCamera Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CinematicCamera/ 
// ModuleName MovieSceneCapture Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieSceneCapture/ 
FC = &GDefaultParamCollection.Add(TEXT("UUserDefinedImageCaptureProtocol"));
PC = &FC->Functions.Add(TEXT("WriteImageToDisk"));
PC->Parameters.Add(TEXT("bCopyImageData"), SharedBool_FALSE);

// ModuleName ClothingSystemRuntimeCommon Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClothingSystemRuntimeCommon/ 
// ModuleName ClothingSystemRuntimeNv Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClothingSystemRuntimeNv/ 
// ModuleName NavigationSystem Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NavigationSystem/ 
FC = &GDefaultParamCollection.Add(TEXT("UNavigationPath"));
PC = &FC->Functions.Add(TEXT("EnableDebugDrawing"));
PC->Parameters.Add(TEXT("PathColor"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));

FC = &GDefaultParamCollection.Add(TEXT("UNavigationSystemV1"));
PC = &FC->Functions.Add(TEXT("ProjectPointToNavigation"));
PC->Parameters.Add(TEXT("QueryExtent"), SharedFVector_Zero);
PC = &FC->Functions.Add(TEXT("RegisterNavigationInvoker"));
PC->Parameters.Add(TEXT("TileGenerationRadius"), new FFloatParamValue(3000.000000f));
PC->Parameters.Add(TEXT("TileRemovalRadius"), new FFloatParamValue(5000.000000f));
PC = &FC->Functions.Add(TEXT("FindPathToActorSynchronously"));
PC->Parameters.Add(TEXT("TetherDistance"), new FFloatParamValue(50.000000f));
PC = &FC->Functions.Add(TEXT("K2_ProjectPointToNavigation"));
PC->Parameters.Add(TEXT("QueryExtent"), SharedFVector_Zero);

FC = &GDefaultParamCollection.Add(TEXT("ARecastNavMesh"));
PC = &FC->Functions.Add(TEXT("K2_ReplaceAreaInTileBounds"));
PC->Parameters.Add(TEXT("ReplaceLinks"), SharedBool_TRUE);

// ModuleName GameplayTags Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayTags/ 
// ModuleName GameplayTasks Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayTasks/ 
FC = &GDefaultParamCollection.Add(TEXT("UGameplayTasksComponent"));
PC = &FC->Functions.Add(TEXT("K2_RunGameplayTask"));
PC->Parameters.Add(TEXT("AdditionalRequiredResources"), SharedScriptArray);
PC->Parameters.Add(TEXT("AdditionalClaimedResources"), SharedScriptArray);

FC = &GDefaultParamCollection.Add(TEXT("UGameplayTask_ClaimResource"));
PC = &FC->Functions.Add(TEXT("ClaimResources"));
PC->Parameters.Add(TEXT("Priority"), new FByteParamValue(192));
PC->Parameters.Add(TEXT("TaskInstanceName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("ClaimResource"));
PC->Parameters.Add(TEXT("Priority"), new FByteParamValue(192));
PC->Parameters.Add(TEXT("TaskInstanceName"), SharedFName_None);

FC = &GDefaultParamCollection.Add(TEXT("UGameplayTask_SpawnActor"));
PC = &FC->Functions.Add(TEXT("SpawnActor"));
PC->Parameters.Add(TEXT("bSpawnOnlyOnAuthority"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UGameplayTask_WaitDelay"));
PC = &FC->Functions.Add(TEXT("TaskWaitDelay"));
PC->Parameters.Add(TEXT("Priority"), new FByteParamValue(192));

// ModuleName AIModule Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AIModule/ 
FC = &GDefaultParamCollection.Add(TEXT("UAIBlueprintHelperLibrary"));
PC = &FC->Functions.Add(TEXT("SpawnAIFromClass"));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("bNoCollisionFail"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SendAIMessage"));
PC->Parameters.Add(TEXT("bSuccess"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("CreateMoveToProxyObject"));
PC->Parameters.Add(TEXT("AcceptanceRadius"), new FFloatParamValue(5.000000f));
PC->Parameters.Add(TEXT("bStopOnOverlap"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("AAIController"));
PC = &FC->Functions.Add(TEXT("MoveToLocation"));
PC->Parameters.Add(TEXT("AcceptanceRadius"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("bStopOnOverlap"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUsePathfinding"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bProjectDestinationToNavigation"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bCanStrafe"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAllowPartialPath"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("MoveToActor"));
PC->Parameters.Add(TEXT("AcceptanceRadius"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("bStopOnOverlap"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUsePathfinding"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bCanStrafe"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAllowPartialPath"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UNavLocalGridManager"));
PC = &FC->Functions.Add(TEXT("RemoveLocalNavigationGrid"));
PC->Parameters.Add(TEXT("bRebuildGrids"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddLocalNavigationGridForCapsule"));
PC->Parameters.Add(TEXT("Radius2D"), new FIntParamValue(5));
PC->Parameters.Add(TEXT("Height"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("bRebuildGrids"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddLocalNavigationGridForBox"));
PC->Parameters.Add(TEXT("Extent"), new FVectorParamValue(FVector(1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("Radius2D"), new FIntParamValue(5));
PC->Parameters.Add(TEXT("Height"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("bRebuildGrids"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddLocalNavigationGridForPoints"));
PC->Parameters.Add(TEXT("Radius2D"), new FIntParamValue(5));
PC->Parameters.Add(TEXT("Height"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("bRebuildGrids"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("AddLocalNavigationGridForPoint"));
PC->Parameters.Add(TEXT("Radius2D"), new FIntParamValue(5));
PC->Parameters.Add(TEXT("Height"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("bRebuildGrids"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UPawnActionsComponent"));
PC = &FC->Functions.Add(TEXT("K2_PerformAction"));
PC->Parameters.Add(TEXT("Priority"), new FByteParamValue(2));

FC = &GDefaultParamCollection.Add(TEXT("UAISense_Hearing"));
PC = &FC->Functions.Add(TEXT("ReportNoiseEvent"));
PC->Parameters.Add(TEXT("Loudness"), SharedFloat_One);
PC->Parameters.Add(TEXT("MaxRange"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Tag"), SharedFName_None);

FC = &GDefaultParamCollection.Add(TEXT("UAITask_MoveTo"));
PC = &FC->Functions.Add(TEXT("AIMoveTo"));
PC->Parameters.Add(TEXT("AcceptanceRadius"), new FFloatParamValue(-1.000000f));
PC->Parameters.Add(TEXT("StopOnOverlap"), SharedByte_Zero);
PC->Parameters.Add(TEXT("AcceptPartialPath"), SharedByte_Zero);
PC->Parameters.Add(TEXT("bUsePathfinding"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bLockAILogic"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUseContinuosGoalTracking"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("ProjectGoalOnNavigation"), SharedByte_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UBTTask_BlueprintBase"));
PC = &FC->Functions.Add(TEXT("SetFinishOnMessageWithId"));
PC->Parameters.Add(TEXT("RequestID"), new FIntParamValue(-1));

// ModuleName InteractiveToolsFramework Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/InteractiveToolsFramework/ 
// ModuleName MaterialShaderQualitySettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MaterialShaderQualitySettings/ 
// ModuleName Renderer Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Renderer/ 
// ModuleName MRMesh Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MRMesh/ 
// ModuleName AugmentedReality Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AugmentedReality/ 
FC = &GDefaultParamCollection.Add(TEXT("UARBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("AddTrackedPointWithName"));
PC->Parameters.Add(TEXT("bDeletePointsWithSameName"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetARWorldOriginLocationAndRotation"));
PC->Parameters.Add(TEXT("bIsTransformInWorldSpace"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bMaintainUpDirection"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetObjectClassificationAtLocation"));
PC->Parameters.Add(TEXT("MaxLocationDiff"), new FFloatParamValue(10.000000f));
PC = &FC->Functions.Add(TEXT("PinComponentToTraceResult"));
PC->Parameters.Add(TEXT("DebugName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("PinComponent"));
PC->Parameters.Add(TEXT("DebugName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("DebugDrawPin"));
PC->Parameters.Add(TEXT("Color"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,0.000000f,0.750000f)));
PC->Parameters.Add(TEXT("Scale"), new FFloatParamValue(5.000000f));
PC->Parameters.Add(TEXT("PersistForSeconds"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("DebugDrawTrackedGeometry"));
PC->Parameters.Add(TEXT("Color"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,0.000000f,0.750000f)));
PC->Parameters.Add(TEXT("OutlineThickness"), new FFloatParamValue(5.000000f));
PC->Parameters.Add(TEXT("PersistForSeconds"), SharedFloat_Zero);
PC = &FC->Functions.Add(TEXT("LineTraceTrackedObjects3D"));
PC->Parameters.Add(TEXT("bTestFeaturePoints"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTestGroundPlane"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTestPlaneExtents"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTestPlaneBoundaryPolygon"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("LineTraceTrackedObjects"));
PC->Parameters.Add(TEXT("bTestFeaturePoints"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTestGroundPlane"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTestPlaneExtents"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTestPlaneBoundaryPolygon"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UARMeshGeometry"));
PC = &FC->Functions.Add(TEXT("GetObjectClassificationAtLocation"));
PC->Parameters.Add(TEXT("MaxLocationDiff"), new FFloatParamValue(10.000000f));

// ModuleName HeadMountedDisplay Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/HeadMountedDisplay/ 
FC = &GDefaultParamCollection.Add(TEXT("UHeadMountedDisplayFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("EnumerateTrackedDevices"));
PC->Parameters.Add(TEXT("SystemId"), SharedFName_None);
PC->Parameters.Add(TEXT("DeviceType"), new FRuntimeEnumParamValue("EXRTrackedDeviceType",5));
PC = &FC->Functions.Add(TEXT("SetSpectatorScreenModeTexturePlusEyeLayout"));
PC->Parameters.Add(TEXT("bDrawEyeFirst"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bClearBlack"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bUseAlpha"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetWorldToMetersScale"));
PC->Parameters.Add(TEXT("NewScale"), new FFloatParamValue(100.000000f));
PC = &FC->Functions.Add(TEXT("ResetOrientationAndPosition"));
PC->Parameters.Add(TEXT("Yaw"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("Options"), new FByteParamValue(2));
PC = &FC->Functions.Add(TEXT("GetTrackingSensorParameters"));
PC->Parameters.Add(TEXT("Index"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UXRLoadingScreenFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("AddLoadingScreenSplash"));
PC->Parameters.Add(TEXT("Size"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("DeltaRotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("bClearBeforeAdd"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetLoadingScreen"));
PC->Parameters.Add(TEXT("Scale"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Offset"), SharedFVector_Zero);
PC->Parameters.Add(TEXT("bShowLoadingMovie"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bShowOnSet"), SharedBool_FALSE);

// ModuleName MoviePlayer Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MoviePlayer/ 
// ModuleName Overlay Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Overlay/ 
// ModuleName BuildPatchServices Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BuildPatchServices/ 
// ModuleName LuminRuntimeSettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Lumin/LuminRuntimeSettings/ 
// ModuleName EyeTracker Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EyeTracker/ 
// ModuleName IOSRuntimeSettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/IOS/IOSRuntimeSettings/ 
// ModuleName AndroidRuntimeSettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Android/AndroidRuntimeSettings/ 
// ModuleName SourceControl Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SourceControl/ 
// ModuleName Localization Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Localization/ 
// ModuleName MaterialBaking Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MaterialBaking/ 
// ModuleName MaterialUtilities Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MaterialUtilities/ 
// ModuleName AssetTools Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AssetTools/ 
// ModuleName TargetDeviceServices Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TargetDeviceServices/ 
// ModuleName GameplayDebugger Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayDebugger/ 
// ModuleName AutomationController Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AutomationController/ 
// ModuleName FunctionalTesting Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FunctionalTesting/ 
// ModuleName SlateReflector Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SlateReflector/ 
// ModuleName AutomationWindow Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AutomationWindow/ 
// ModuleName AITestSuite Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AITestSuite/ 
// ModuleName BlueprintNativeCodeGen Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BlueprintNativeCodeGen/ 
// ModuleName AndroidPlatformEditor Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Android/AndroidPlatformEditor/ 
// ModuleName LuminPlatformEditor Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Lumin/LuminPlatformEditor/ 
// ModuleName LogVisualizer Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LogVisualizer/ 
// ModuleName MacTargetPlatform Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MacTargetPlatform/ 
// ModuleName EditorSubsystem Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EditorSubsystem/ 
// ModuleName ContentBrowserData Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ContentBrowserData/ 
// ModuleName ClassViewer Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClassViewer/ 
// ModuleName BlueprintGraph Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BlueprintGraph/ 
// ModuleName CurveEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CurveEditor/ 
// ModuleName TextureEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TextureEditor/ 
// ModuleName GraphEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GraphEditor/ 
// ModuleName Kismet Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Kismet/ 
// ModuleName HardwareTargeting Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/HardwareTargeting/ 
// ModuleName AddContentDialog Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AddContentDialog/ 
// ModuleName GameProjectGeneration Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameProjectGeneration/ 
// ModuleName TranslationEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TranslationEditor/ 
// ModuleName StatsViewer Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StatsViewer/ 
// ModuleName SceneOutliner Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SceneOutliner/ 
// ModuleName SequenceRecorder Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SequenceRecorder/ 
// ModuleName MovieSceneTools Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieSceneTools/ 
// ModuleName Sequencer Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Sequencer/ 
// ModuleName HierarchicalLODOutliner Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/HierarchicalLODOutliner/ 
// ModuleName PixelInspectorModule Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PixelInspectorModule/ 
// ModuleName LevelEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LevelEditor/ 
// ModuleName UndoHistory Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UndoHistory/ 
// ModuleName AdvancedPreviewScene Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AdvancedPreviewScene/ 
// ModuleName MaterialEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MaterialEditor/ 
// ModuleName ContentBrowser Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ContentBrowser/ 
// ModuleName AnimGraph Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnimGraph/ 
// ModuleName InternationalizationSettings Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/InternationalizationSettings/ 
// ModuleName PIEPreviewDeviceProfileSelector Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PIEPreviewDeviceProfileSelector/ 
// ModuleName LandscapeEditorUtilities Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LandscapeEditorUtilities/ 
// ModuleName Persona Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Persona/ 
// ModuleName SkeletonEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SkeletonEditor/ 
// ModuleName AnimationModifiers Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnimationModifiers/ 
// ModuleName UnrealEd Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UnrealEd/ 
// ModuleName ConfigEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ConfigEditor/ 
// ModuleName PropertyEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PropertyEditor/ 
// ModuleName ViewportInteraction Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ViewportInteraction/ 
// ModuleName ComponentVisualizers Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ComponentVisualizers/ 
// ModuleName DetailCustomizations Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DetailCustomizations/ 
// ModuleName UMGEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UMGEditor/ 
// ModuleName MeshPaint Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MeshPaint/ 
// ModuleName IntroTutorials Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/IntroTutorials/ 
// ModuleName AIGraph Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AIGraph/ 
// ModuleName Blutility Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Blutility/ 
// ModuleName AudioEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioEditor/ 
// ModuleName EditorInteractiveToolsFramework Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EditorInteractiveToolsFramework/ 
// ModuleName VREditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VREditor/ 
// ModuleName SequenceRecorderSections Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SequenceRecorderSections/ 
// ModuleName LandscapeEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LandscapeEditor/ 
// ModuleName FoliageEdit Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FoliageEdit/ 
// ModuleName WorldBrowser Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WorldBrowser/ 
// ModuleName LocalizationDashboard Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LocalizationDashboard/ 
// ModuleName StructViewer Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StructViewer/ 
// ModuleName InputBindingEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/InputBindingEditor/ 
// ModuleName MeshPaintMode Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MeshPaintMode/ 
// ModuleName ClothingSystemEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClothingSystemEditor/ 
// ModuleName ToolMenusEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ToolMenusEditor/ 
// ModuleName Cascade Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Cascade/ 
// ModuleName Matinee Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Matinee/ 
// ModuleName PhysicsAssetEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PhysicsAssetEditor/ 
// ModuleName MergeActors Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MergeActors/ 
// ModuleName BehaviorTreeEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BehaviorTreeEditor/ 
// ModuleName GameplayTasksEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayTasksEditor/ 
// ModuleName OverlayEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OverlayEditor/ 
// ModuleName ClothPainter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClothPainter/ 
// ModuleName VirtualTexturingEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VirtualTexturingEditor/ 
// ModuleName Paper2D Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/2D/Paper2D/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Paper2D/ 
FC = &GDefaultParamCollection.Add(TEXT("UPaperFlipbook"));
PC = &FC->Functions.Add(TEXT("GetSpriteAtTime"));
PC->Parameters.Add(TEXT("bClampToEnds"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetKeyFrameIndexAtTime"));
PC->Parameters.Add(TEXT("bClampToEnds"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UPaperGroupedSpriteComponent"));
PC = &FC->Functions.Add(TEXT("UpdateInstanceColor"));
PC->Parameters.Add(TEXT("bMarkRenderStateDirty"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("UpdateInstanceTransform"));
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bMarkRenderStateDirty"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bTeleport"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetInstanceTransform"));
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("AddInstance"));
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("Color"), new FLinearColorParamValue(FLinearColor(1.000000f,1.000000f,1.000000f,1.000000f)));

FC = &GDefaultParamCollection.Add(TEXT("UPaperTileMapComponent"));
PC = &FC->Functions.Add(TEXT("SetLayerCollision"));
PC->Parameters.Add(TEXT("Layer"), SharedInt_Zero);
PC->Parameters.Add(TEXT("bHasCollision"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bOverrideThickness"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("CustomThickness"), new FFloatParamValue(50.000000f));
PC->Parameters.Add(TEXT("bOverrideOffset"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("CustomOffset"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("bRebuildCollision"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetDefaultCollisionThickness"));
PC->Parameters.Add(TEXT("bRebuildCollision"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetTilePolygon"));
PC->Parameters.Add(TEXT("LayerIndex"), SharedInt_Zero);
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetTileCenterPosition"));
PC->Parameters.Add(TEXT("LayerIndex"), SharedInt_Zero);
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetTileCornerPosition"));
PC->Parameters.Add(TEXT("LayerIndex"), SharedInt_Zero);
PC->Parameters.Add(TEXT("bWorldSpace"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetLayerColor"));
PC->Parameters.Add(TEXT("Layer"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetLayerColor"));
PC->Parameters.Add(TEXT("Layer"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetTile"));
PC->Parameters.Add(TEXT("Layer"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetTile"));
PC->Parameters.Add(TEXT("Layer"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("CreateNewTileMap"));
PC->Parameters.Add(TEXT("MapWidth"), new FIntParamValue(4));
PC->Parameters.Add(TEXT("MapHeight"), new FIntParamValue(4));
PC->Parameters.Add(TEXT("TileWidth"), new FIntParamValue(32));
PC->Parameters.Add(TEXT("TileHeight"), new FIntParamValue(32));
PC->Parameters.Add(TEXT("PixelsPerUnrealUnit"), SharedFloat_One);
PC->Parameters.Add(TEXT("bCreateLayer"), SharedBool_TRUE);

// ModuleName LightPropagationVolumeRuntime Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Blendables/LightPropagationVolume/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LightPropagationVolumeRuntime/ 
// ModuleName SignificanceManager Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SignificanceManager/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SignificanceManager/ 
// ModuleName AnimationSharing Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/AnimationSharing/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnimationSharing/ 
// ModuleName UObjectPlugin Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/UObjectPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UObjectPlugin/ 
// ModuleName FacialAnimation Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/FacialAnimation/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FacialAnimation/ 
// ModuleName VariantManagerContent Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/VariantManagerContent/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VariantManagerContent/ 
FC = &GDefaultParamCollection.Add(TEXT("ALevelVariantSetsActor"));
PC = &FC->Functions.Add(TEXT("GetLevelVariantSets"));
PC->Parameters.Add(TEXT("bLoad"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UVariant"));
PC = &FC->Functions.Add(TEXT("SetThumbnailFromCamera"));
PC->Parameters.Add(TEXT("FOVDegrees"), new FFloatParamValue(50.000000f));
PC->Parameters.Add(TEXT("MinZ"), new FFloatParamValue(50.000000f));
PC->Parameters.Add(TEXT("Gamma"), new FFloatParamValue(2.200000f));

FC = &GDefaultParamCollection.Add(TEXT("UVariantSet"));
PC = &FC->Functions.Add(TEXT("SetThumbnailFromCamera"));
PC->Parameters.Add(TEXT("FOVDegrees"), new FFloatParamValue(50.000000f));
PC->Parameters.Add(TEXT("MinZ"), new FFloatParamValue(50.000000f));
PC->Parameters.Add(TEXT("Gamma"), new FFloatParamValue(2.200000f));

// ModuleName DatasmithContent Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithContent/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithContent/ 
// ModuleName GeometryCache Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/GeometryCache/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCache/ 
// ModuleName GeometryCacheEd Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/GeometryCache/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCacheEd/ 
// ModuleName GeometryCacheTracks Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/GeometryCache/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCacheTracks/ 
// ModuleName AutomationUtils Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/AutomationUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AutomationUtils/ 
FC = &GDefaultParamCollection.Add(TEXT("UAutomationUtilsBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("TakeGameplayAutomationScreenshot"));
PC->Parameters.Add(TEXT("MaxGlobalError"), new FFloatParamValue(0.020000f));
PC->Parameters.Add(TEXT("MaxLocalError"), new FFloatParamValue(0.120000f));
PC->Parameters.Add(TEXT("MapNameOverride"), new FStringParamValue(TEXT("")));

// ModuleName ChaosCloth Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosCloth/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosCloth/ 
// ModuleName ChaosSolverEngine Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosSolverEngine/ 
// ModuleName FieldSystemEngine Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FieldSystemEngine/ 
FC = &GDefaultParamCollection.Add(TEXT("UOperatorField"));
PC = &FC->Functions.Add(TEXT("SetOperatorField"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UBoxFalloff"));
PC = &FC->Functions.Add(TEXT("SetBoxFalloff"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);
PC->Parameters.Add(TEXT("MinRange"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("MaxRange"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UNoiseField"));
PC = &FC->Functions.Add(TEXT("SetNoiseField"));
PC->Parameters.Add(TEXT("MinRange"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("MaxRange"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UPlaneFalloff"));
PC = &FC->Functions.Add(TEXT("SetPlaneFalloff"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);
PC->Parameters.Add(TEXT("MinRange"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("MaxRange"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("URadialFalloff"));
PC = &FC->Functions.Add(TEXT("SetRadialFalloff"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);
PC->Parameters.Add(TEXT("MinRange"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("MaxRange"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UUniformScalar"));
PC = &FC->Functions.Add(TEXT("SetUniformScalar"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("URadialIntMask"));
PC = &FC->Functions.Add(TEXT("SetRadialIntMask"));
PC->Parameters.Add(TEXT("InteriorValue"), new FIntParamValue(1));

FC = &GDefaultParamCollection.Add(TEXT("UUniformInteger"));
PC = &FC->Functions.Add(TEXT("SetUniformInteger"));
PC->Parameters.Add(TEXT("Magnitude"), SharedInt_Zero);

FC = &GDefaultParamCollection.Add(TEXT("URadialVector"));
PC = &FC->Functions.Add(TEXT("SetRadialVector"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("URandomVector"));
PC = &FC->Functions.Add(TEXT("SetRandomVector"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UUniformVector"));
PC = &FC->Functions.Add(TEXT("SetUniformVector"));
PC->Parameters.Add(TEXT("Magnitude"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UFieldSystemMetaDataIteration"));
PC = &FC->Functions.Add(TEXT("SetMetaDataIteration"));
PC->Parameters.Add(TEXT("Iterations"), new FIntParamValue(1));

// ModuleName GeometryCollectionEngine Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCollectionEngine/ 
// ModuleName EditableMesh Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/EditableMesh/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EditableMesh/ 
FC = &GDefaultParamCollection.Add(TEXT("UEditableMesh"));
PC = &FC->Functions.Add(TEXT("EndModification"));
PC->Parameters.Add(TEXT("bFromUndo"), SharedBool_FALSE);

// ModuleName GeometryCollectionTracks Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/GeometryCollectionPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCollectionTracks/ 
// ModuleName ProceduralMeshComponent Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ProceduralMeshComponent/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ProceduralMeshComponent/ 
FC = &GDefaultParamCollection.Add(TEXT("UKismetProceduralMeshLibrary"));
PC = &FC->Functions.Add(TEXT("CreateGridMeshSplit"));
PC->Parameters.Add(TEXT("GridSpacing"), new FFloatParamValue(16.000000f));
PC = &FC->Functions.Add(TEXT("CreateGridMeshWelded"));
PC->Parameters.Add(TEXT("GridSpacing"), new FFloatParamValue(16.000000f));
PC = &FC->Functions.Add(TEXT("CalculateTangentsForMesh"));
PC->Parameters.Add(TEXT("UVs"), SharedScriptArray);

FC = &GDefaultParamCollection.Add(TEXT("UProceduralMeshComponent"));
PC = &FC->Functions.Add(TEXT("UpdateMeshSection_LinearColor"));
PC->Parameters.Add(TEXT("Normals"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV0"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV1"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV2"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV3"), SharedScriptArray);
PC->Parameters.Add(TEXT("VertexColors"), SharedScriptArray);
PC->Parameters.Add(TEXT("Tangents"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("UpdateMeshSection"));
PC->Parameters.Add(TEXT("Normals"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV0"), SharedScriptArray);
PC->Parameters.Add(TEXT("VertexColors"), SharedScriptArray);
PC->Parameters.Add(TEXT("Tangents"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("CreateMeshSection_LinearColor"));
PC->Parameters.Add(TEXT("Normals"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV0"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV1"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV2"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV3"), SharedScriptArray);
PC->Parameters.Add(TEXT("VertexColors"), SharedScriptArray);
PC->Parameters.Add(TEXT("Tangents"), SharedScriptArray);
PC = &FC->Functions.Add(TEXT("CreateMeshSection"));
PC->Parameters.Add(TEXT("Normals"), SharedScriptArray);
PC->Parameters.Add(TEXT("UV0"), SharedScriptArray);
PC->Parameters.Add(TEXT("VertexColors"), SharedScriptArray);
PC->Parameters.Add(TEXT("Tangents"), SharedScriptArray);

// ModuleName NiagaraCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/FX/Niagara/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NiagaraCore/ 
// ModuleName NiagaraShader Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/FX/Niagara/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NiagaraShader/ 
// ModuleName Niagara Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/FX/Niagara/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Niagara/ 
FC = &GDefaultParamCollection.Add(TEXT("UNiagaraFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("SpawnSystemAttached"));
PC->Parameters.Add(TEXT("bAutoActivate"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("PoolingMethod"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("bPreCullCheck"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SpawnSystemAtLocation"));
PC->Parameters.Add(TEXT("Rotation"), SharedFRotator_Zero);
PC->Parameters.Add(TEXT("Scale"), new FVectorParamValue(FVector(1.000000f,1.000000f,1.000000f)));
PC->Parameters.Add(TEXT("bAutoDestroy"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAutoActivate"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("PoolingMethod"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("bPreCullCheck"), SharedBool_TRUE);

// ModuleName ChaosNiagara Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosNiagara/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosNiagara/ 
// ModuleName NiagaraAnimNotifies Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/FX/Niagara/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NiagaraAnimNotifies/ 
// ModuleName MotoSynth Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/MotoSynth/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MotoSynth/ 
// ModuleName MagicLeapPrivileges Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapPrivileges/ 
// ModuleName MagicLeap Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeap/ 
FC = &GDefaultParamCollection.Add(TEXT("UMagicLeapHMDFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("SetStabilizationDepthActor"));
PC->Parameters.Add(TEXT("bSetFocusActor"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("SetFocusActor"));
PC->Parameters.Add(TEXT("bSetStabilizationActor"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UMagicLeapRaycastFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("MakeRaycastQueryParams"));
PC->Parameters.Add(TEXT("Direction"), new FVectorParamValue(FVector(1.000000f,0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("UpVector"), new FVectorParamValue(FVector(0.000000f,0.000000f,1.000000f)));
PC->Parameters.Add(TEXT("Width"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("Height"), new FIntParamValue(1));

// ModuleName MagicLeapPlanes Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapPlanes/ 
// ModuleName MagicLeapLightEstimation Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapLightEstimation/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapLightEstimation/ 
// ModuleName MagicLeapARPin Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapPassableWorld/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapARPin/ 
// ModuleName MagicLeapImageTracker Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapImageTracker/ 
// ModuleName MagicLeapAR Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapAR/ 
// ModuleName MagicLeapAudio Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapAudio/ 
// ModuleName MagicLeapController Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapController/ 
// ModuleName MagicLeapEyeTracker Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapEyeTracker/ 
// ModuleName MagicLeapHandTracking Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapHandTracking/ 
FC = &GDefaultParamCollection.Add(TEXT("UMagicLeapHandTrackingFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("SetConfiguration"));
PC->Parameters.Add(TEXT("KeypointsFilterLevel"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("GestureFilterLevel"), SharedEnum_Zero);
PC->Parameters.Add(TEXT("bTrackingEnabled"), SharedBool_TRUE);

// ModuleName MagicLeapIdentity Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapIdentity/ 
// ModuleName MagicLeapSecureStorage Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapSecureStorage/ 
// ModuleName MagicLeapHandMeshing Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeap/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapHandMeshing/ 
// ModuleName MagicLeapSharedWorld Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapPassableWorld/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapSharedWorld/ 
// ModuleName ImgMediaFactory Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/ImgMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ImgMediaFactory/ 
// ModuleName ImgMedia Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/ImgMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ImgMedia/ 
// ModuleName MediaCompositing Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MediaCompositing/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaCompositing/ 
// ModuleName UdpMessaging Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Messaging/UdpMessaging/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UdpMessaging/ 
// ModuleName ActorSequence Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/ActorSequence/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ActorSequence/ 
// ModuleName TemplateSequence Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/TemplateSequence/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TemplateSequence/ 
// ModuleName OnlineSubsystem Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineSubsystem/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OnlineSubsystem/ 
// ModuleName AndroidPermission Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AndroidPermission/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AndroidPermission/ 
// ModuleName OnlineSubsystemUtils Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineSubsystemUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OnlineSubsystemUtils/ 
FC = &GDefaultParamCollection.Add(TEXT("UAchievementWriteCallbackProxy"));
PC = &FC->Functions.Add(TEXT("WriteAchievementProgress"));
PC->Parameters.Add(TEXT("Progress"), new FFloatParamValue(100.000000f));
PC->Parameters.Add(TEXT("UserTag"), SharedInt_Zero);

// ModuleName ActorLayerUtilities Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ActorLayerUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ActorLayerUtilities/ 
// ModuleName AppleImageUtils Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AppleImageUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AppleImageUtils/ 
FC = &GDefaultParamCollection.Add(TEXT("UAppleImageUtilsBaseAsyncTaskBlueprintProxy"));
PC = &FC->Functions.Add(TEXT("CreateProxyObjectForConvertToPNG"));
PC->Parameters.Add(TEXT("bWantColor"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUseGpu"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("Rotate"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("CreateProxyObjectForConvertToTIFF"));
PC->Parameters.Add(TEXT("bWantColor"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUseGpu"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("Rotate"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("CreateProxyObjectForConvertToHEIF"));
PC->Parameters.Add(TEXT("Quality"), new FIntParamValue(85));
PC->Parameters.Add(TEXT("bWantColor"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUseGpu"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("Rotate"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("CreateProxyObjectForConvertToJPEG"));
PC->Parameters.Add(TEXT("Quality"), new FIntParamValue(85));
PC->Parameters.Add(TEXT("bWantColor"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUseGpu"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("Scale"), SharedFloat_One);
PC->Parameters.Add(TEXT("Rotate"), SharedEnum_Zero);

// ModuleName ArchVisCharacter Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ArchVisCharacter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ArchVisCharacter/ 
// ModuleName AssetTags Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AssetTags/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AssetTags/ 
// ModuleName AudioCapture Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AudioCapture/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioCapture/ 
// ModuleName CableComponent Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/CableComponent/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CableComponent/ 
FC = &GDefaultParamCollection.Add(TEXT("UCableComponent"));
PC = &FC->Functions.Add(TEXT("SetAttachEndTo"));
PC->Parameters.Add(TEXT("SocketName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("SetAttachEndToComponent"));
PC->Parameters.Add(TEXT("SocketName"), SharedFName_None);

// ModuleName CustomMeshComponent Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/CustomMeshComponent/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CustomMeshComponent/ 
// ModuleName GooglePAD Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/GooglePAD/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GooglePAD/ 
// ModuleName LocationServicesBPLibrary Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/LocationServicesBPLibrary/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LocationServicesBPLibrary/ 
// ModuleName MobilePatchingUtils Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/MobilePatchingUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MobilePatchingUtils/ 
FC = &GDefaultParamCollection.Add(TEXT("UMobileInstalledContent"));
PC = &FC->Functions.Add(TEXT("Mount"));
PC->Parameters.Add(TEXT("PakOrder"), new FIntParamValue(1));

// ModuleName PhysXVehicles Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/PhysXVehicles/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PhysXVehicles/ 
// ModuleName SoundFields Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundFields/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundFields/ 
// ModuleName Synthesis Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Synthesis/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Synthesis/ 
FC = &GDefaultParamCollection.Add(TEXT("UGranularSynth"));
PC = &FC->Functions.Add(TEXT("SetPlayheadTime"));
PC->Parameters.Add(TEXT("LerpTimeSec"), SharedFloat_Zero);
PC->Parameters.Add(TEXT("SeekType"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("SetGrainDuration"));
PC->Parameters.Add(TEXT("DurationRange"), SharedFVector2D_Zero);
PC = &FC->Functions.Add(TEXT("SetGrainPan"));
PC->Parameters.Add(TEXT("PanRange"), SharedFVector2D_Zero);
PC = &FC->Functions.Add(TEXT("SetGrainVolume"));
PC->Parameters.Add(TEXT("VolumeRange"), SharedFVector2D_Zero);
PC = &FC->Functions.Add(TEXT("SetGrainPitch"));
PC->Parameters.Add(TEXT("PitchRange"), SharedFVector2D_Zero);
PC = &FC->Functions.Add(TEXT("NoteOff"));
PC->Parameters.Add(TEXT("bKill"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("NoteOn"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(-1.000000f));

FC = &GDefaultParamCollection.Add(TEXT("UModularSynthComponent"));
PC = &FC->Functions.Add(TEXT("NoteOff"));
PC->Parameters.Add(TEXT("bAllNotesOff"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bKillAllNotes"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("NoteOn"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(-1.000000f));

FC = &GDefaultParamCollection.Add(TEXT("USynthSamplePlayer"));
PC = &FC->Functions.Add(TEXT("SeekToTime"));
PC->Parameters.Add(TEXT("bWrap"), SharedBool_TRUE);

// ModuleName AudioAnalyzer Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioAnalyzer/ 
// ModuleName AudioSynesthesia Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AudioSynesthesia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioSynesthesia/ 
// ModuleName AnalyticsVisualEditing Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnalyticsVisualEditing/ 
// ModuleName ClientPilot Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ClientPilot/ 
// ModuleName DirectLink Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DirectLink/ 
// ModuleName DatasmithCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithCore/ 
// ModuleName ChaosVehiclesEngine Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosVehiclesEngine/ 
// ModuleName ExternalRpcRegistry Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ExternalRpcRegistry/ 
// ModuleName FriendsAndChat Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FriendsAndChat/ 
// ModuleName GameMenuBuilder Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameMenuBuilder/ 
// ModuleName LiveLinkMessageBusFramework Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkMessageBusFramework/ 
// ModuleName RemoteImportMessaging Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RemoteImportMessaging/ 
// ModuleName RigVM Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RigVM/ 
FC = &GDefaultParamCollection.Add(TEXT("URigVM"));
PC = &FC->Functions.Add(TEXT("SetParameterValueTransform"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueQuat"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueVector"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueVector2D"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueString"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueName"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueInt"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueFloat"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SetParameterValueBool"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueTransform"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueQuat"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueVector"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueVector2D"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueString"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueName"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueInt"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueFloat"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("GetParameterValueBool"));
PC->Parameters.Add(TEXT("InArrayIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("Execute"));
PC->Parameters.Add(TEXT("InEntryName"), SharedFName_None);

// ModuleName RuntimeAssetCache Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RuntimeAssetCache/ 
// ModuleName StageDataCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StageDataCore/ 
// ModuleName WebBrowser Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WebBrowser/ 
// ModuleName WebBrowserTexture Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WebBrowserTexture/ 
// ModuleName HTNPlanner Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/AI/HTNPlanner/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/HTNPlanner/ 
// ModuleName GameplayAbilities Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/GameplayAbilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayAbilities/ 
FC = &GDefaultParamCollection.Add(TEXT("UAbilitySystemBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("MakeGameplayCueParameters"));
PC->Parameters.Add(TEXT("Location"), new FVectorParamValue(FVector(0.000000f,0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("Normal"), new FVectorParamValue(FVector(0.000000f,0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("GameplayEffectLevel"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("AbilityLevel"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("MakeSpecHandle"));
PC->Parameters.Add(TEXT("InLevel"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UAbilitySystemComponent"));
PC = &FC->Functions.Add(TEXT("TryActivateAbilityByClass"));
PC->Parameters.Add(TEXT("bAllowRemoteActivation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("TryActivateAbilitiesByTag"));
PC->Parameters.Add(TEXT("bAllowRemoteActivation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetGameplayEffectCount"));
PC->Parameters.Add(TEXT("bEnforceOnGoingCheck"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("RemoveActiveGameplayEffectBySourceEffect"));
PC->Parameters.Add(TEXT("StacksToRemove"), new FIntParamValue(-1));
PC = &FC->Functions.Add(TEXT("RemoveActiveGameplayEffect"));
PC->Parameters.Add(TEXT("StacksToRemove"), new FIntParamValue(-1));

FC = &GDefaultParamCollection.Add(TEXT("UGameplayAbility"));
PC = &FC->Functions.Add(TEXT("MontageStop"));
PC->Parameters.Add(TEXT("OverrideBlendOutTime"), new FFloatParamValue(-1.000000f));
PC = &FC->Functions.Add(TEXT("K2_AddGameplayCueWithParams"));
PC->Parameters.Add(TEXT("bRemoveOnAbilityEnd"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("K2_AddGameplayCue"));
PC->Parameters.Add(TEXT("bRemoveOnAbilityEnd"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("BP_RemoveGameplayEffectFromOwnerWithHandle"));
PC->Parameters.Add(TEXT("StacksToRemove"), new FIntParamValue(-1));
PC = &FC->Functions.Add(TEXT("BP_RemoveGameplayEffectFromOwnerWithGrantedTags"));
PC->Parameters.Add(TEXT("StacksToRemove"), new FIntParamValue(-1));
PC = &FC->Functions.Add(TEXT("BP_RemoveGameplayEffectFromOwnerWithAssetTags"));
PC->Parameters.Add(TEXT("StacksToRemove"), new FIntParamValue(-1));
PC = &FC->Functions.Add(TEXT("BP_ApplyGameplayEffectToTarget"));
PC->Parameters.Add(TEXT("GameplayEffectLevel"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("Stacks"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("BP_ApplyGameplayEffectToOwner"));
PC->Parameters.Add(TEXT("GameplayEffectLevel"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("Stacks"), new FIntParamValue(1));
PC = &FC->Functions.Add(TEXT("K2_CommitAbilityCost"));
PC->Parameters.Add(TEXT("BroadcastCommitEvent"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("K2_CommitAbilityCooldown"));
PC->Parameters.Add(TEXT("BroadcastCommitEvent"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("ForceCooldown"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("MakeOutgoingGameplayEffectSpec"));
PC->Parameters.Add(TEXT("Level"), SharedFloat_One);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_PlayMontageAndWait"));
PC = &FC->Functions.Add(TEXT("CreatePlayMontageAndWaitProxy"));
PC->Parameters.Add(TEXT("Rate"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartSection"), SharedFName_None);
PC->Parameters.Add(TEXT("bStopWhenAbilityEnds"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("AnimRootMotionTranslationScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("StartTimeSeconds"), SharedFloat_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_StartAbilityState"));
PC = &FC->Functions.Add(TEXT("StartAbilityState"));
PC->Parameters.Add(TEXT("bEndCurrentState"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_VisualizeTargeting"));
PC = &FC->Functions.Add(TEXT("VisualizeTargetingUsingActor"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(-1.000000f));
PC = &FC->Functions.Add(TEXT("VisualizeTargeting"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(-1.000000f));

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitAbilityActivate"));
PC = &FC->Functions.Add(TEXT("WaitForAbilityActivate_Query"));
PC->Parameters.Add(TEXT("IncludeTriggeredAbilities"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("WaitForAbilityActivateWithTagRequirements"));
PC->Parameters.Add(TEXT("IncludeTriggeredAbilities"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("WaitForAbilityActivate"));
PC->Parameters.Add(TEXT("IncludeTriggeredAbilities"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitAbilityCommit"));
PC = &FC->Functions.Add(TEXT("WaitForAbilityCommit_Query"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("WaitForAbilityCommit"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitAttributeChange"));
PC = &FC->Functions.Add(TEXT("WaitForAttributeChangeWithComparison"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("WaitForAttributeChange"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitGameplayEffectBlockedImmunity"));
PC = &FC->Functions.Add(TEXT("WaitGameplayEffectBlockedByImmunity"));
PC->Parameters.Add(TEXT("OnlyTriggerOnce"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitGameplayEvent"));
PC = &FC->Functions.Add(TEXT("WaitGameplayEvent"));
PC->Parameters.Add(TEXT("OnlyTriggerOnce"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("OnlyMatchExact"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitInputPress"));
PC = &FC->Functions.Add(TEXT("WaitInputPress"));
PC->Parameters.Add(TEXT("bTestAlreadyPressed"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitInputRelease"));
PC = &FC->Functions.Add(TEXT("WaitInputRelease"));
PC->Parameters.Add(TEXT("bTestAlreadyReleased"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitGameplayEffectApplied_Self"));
PC = &FC->Functions.Add(TEXT("WaitGameplayEffectAppliedToSelf_Query"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("ListenForPeriodicEffect"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("WaitGameplayEffectAppliedToSelf"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("ListenForPeriodicEffect"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitGameplayEffectApplied_Target"));
PC = &FC->Functions.Add(TEXT("WaitGameplayEffectAppliedToTarget_Query"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("ListenForPeriodicEffect"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("WaitGameplayEffectAppliedToTarget"));
PC->Parameters.Add(TEXT("TriggerOnce"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("ListenForPeriodicEffects"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitGameplayTagAdded"));
PC = &FC->Functions.Add(TEXT("WaitGameplayTagAdd"));
PC->Parameters.Add(TEXT("OnlyTriggerOnce"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UAbilityTask_WaitGameplayTagRemoved"));
PC = &FC->Functions.Add(TEXT("WaitGameplayTagRemove"));
PC->Parameters.Add(TEXT("OnlyTriggerOnce"), SharedBool_FALSE);

// ModuleName UE4ML Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/AI/UE4ML/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UE4ML/ 
// ModuleName LiveLink Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/LiveLink/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLink/ 
FC = &GDefaultParamCollection.Add(TEXT("ULiveLinkMessageBusFinder"));
PC = &FC->Functions.Add(TEXT("GetAvailableProviders"));
PC->Parameters.Add(TEXT("Duration"), new FFloatParamValue(0.200000f));

FC = &GDefaultParamCollection.Add(TEXT("ULiveLinkPreset"));
PC = &FC->Functions.Add(TEXT("AddToClient"));
PC->Parameters.Add(TEXT("bRecreatePresets"), SharedBool_TRUE);

// ModuleName LiveLinkComponents Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/LiveLink/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkComponents/ 
// ModuleName LiveLinkMovieScene Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/LiveLink/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkMovieScene/ 
// ModuleName TakeMovieScene Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/Takes/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TakeMovieScene/ 
// ModuleName LiveLinkCurveDebugUI Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/LiveLinkCurveDebugUI/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkCurveDebugUI/ 
// ModuleName RigVMDeveloper Type 3  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RigVMDeveloper/ 
// ModuleName LevelSequenceEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/LevelSequenceEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LevelSequenceEditor/ 
// ModuleName ControlRig Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ControlRig/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ControlRig/ 
FC = &GDefaultParamCollection.Add(TEXT("UControlRigComponent"));
PC = &FC->Functions.Add(TEXT("SetInitialSpaceTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("GetInitialSpaceTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("GetSpaceTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("SetControlOffset"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("GetControlOffset"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("SetControlTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("SetControlScale"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(4));
PC = &FC->Functions.Add(TEXT("SetControlRotator"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(4));
PC = &FC->Functions.Add(TEXT("SetControlPosition"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(4));
PC = &FC->Functions.Add(TEXT("GetControlTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("GetControlScale"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(4));
PC = &FC->Functions.Add(TEXT("GetControlRotator"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(4));
PC = &FC->Functions.Add(TEXT("GetControlPosition"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(4));
PC = &FC->Functions.Add(TEXT("SetInitialBoneTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC->Parameters.Add(TEXT("bPropagateToChildren"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetBoneTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC->Parameters.Add(TEXT("Weight"), SharedFloat_One);
PC->Parameters.Add(TEXT("bPropagateToChildren"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetInitialBoneTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("GetBoneTransform"));
PC->Parameters.Add(TEXT("Space"), new FEnumParamValue(3));
PC = &FC->Functions.Add(TEXT("DoesElementExist"));
PC->Parameters.Add(TEXT("ElementType"), new FEnumParamValue(1));
PC = &FC->Functions.Add(TEXT("GetElementNames"));
PC->Parameters.Add(TEXT("ElementType"), new FEnumParamValue(1));
PC = &FC->Functions.Add(TEXT("Update"));
PC->Parameters.Add(TEXT("DeltaTime"), SharedFloat_Zero);

// ModuleName ControlRigDeveloper Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ControlRig/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ControlRigDeveloper/ 
// ModuleName ControlRigEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ControlRig/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ControlRigEditor/ 
// ModuleName RigLogicModule Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/RigLogic/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RigLogicModule/ 
// ModuleName BlueprintFileUtils Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/BlueprintFileUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BlueprintFileUtils/ 
FC = &GDefaultParamCollection.Add(TEXT("UBlueprintFileUtilsBPLibrary"));
PC = &FC->Functions.Add(TEXT("MoveFile"));
PC->Parameters.Add(TEXT("bReplace"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bEvenIfReadOnly"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("CopyFile"));
PC->Parameters.Add(TEXT("bReplace"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bEvenIfReadOnly"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("DeleteFile"));
PC->Parameters.Add(TEXT("bMustExist"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bEvenIfReadOnly"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("DeleteDirectory"));
PC->Parameters.Add(TEXT("bMustExist"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bDeleteRecursively"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("MakeDirectory"));
PC->Parameters.Add(TEXT("bCreateTree"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("FindRecursive"));
PC->Parameters.Add(TEXT("Wildcard"), new FStringParamValue(TEXT("")));
PC->Parameters.Add(TEXT("bFindFiles"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bFindDirectories"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("FindFiles"));
PC->Parameters.Add(TEXT("FileExtension"), new FStringParamValue(TEXT("")));

// ModuleName MediaIOCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MediaIOFramework/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaIOCore/ 
// ModuleName OpenColorIO Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Compositing/OpenColorIO/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OpenColorIO/ 
// ModuleName Composure Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Compositing/Composure/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Composure/ 
FC = &GDefaultParamCollection.Add(TEXT("UCompositingElementPass"));
PC = &FC->Functions.Add(TEXT("RequestNativelyFormattedTarget"));
PC->Parameters.Add(TEXT("RenderScale"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("SetPassEnabled"));
PC->Parameters.Add(TEXT("bSetEnabledTo"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UCompositingPickerAsyncTask"));
PC = &FC->Functions.Add(TEXT("OpenCompositingPicker"));
PC->Parameters.Add(TEXT("bAverageColorOnDrag"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bUseImplicitGamma"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("ACompositingElement"));
PC = &FC->Functions.Add(TEXT("FindOutputPass"));
PC->Parameters.Add(TEXT("OptionalPassName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("FindTransformPass"));
PC->Parameters.Add(TEXT("OptionalPassName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("FindInputPass"));
PC->Parameters.Add(TEXT("OptionalPassName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("FindNamedRenderResult"));
PC->Parameters.Add(TEXT("bSearchSubElements"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("RegisterPassResult"));
PC->Parameters.Add(TEXT("bSetAsLatestRenderResult"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("RenderCompositingMaterialToTarget"));
PC->Parameters.Add(TEXT("ResultLookupName"), SharedFName_None);
PC = &FC->Functions.Add(TEXT("RenderCompositingMaterial"));
PC->Parameters.Add(TEXT("RenderScale"), SharedFloat_One);
PC->Parameters.Add(TEXT("ResultLookupName"), SharedFName_None);
PC->Parameters.Add(TEXT("UsageTag"), SharedEnum_Zero);
PC = &FC->Functions.Add(TEXT("RequestNamedRenderTarget"));
PC->Parameters.Add(TEXT("RenderPercentage"), SharedFloat_One);
PC->Parameters.Add(TEXT("UsageTag"), SharedEnum_Zero);

// ModuleName LensDistortion Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Compositing/LensDistortion/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LensDistortion/ 
FC = &GDefaultParamCollection.Add(TEXT("ULensDistortionBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("DrawUVDisplacementToRenderTarget"));
PC->Parameters.Add(TEXT("OutputMultiply"), new FFloatParamValue(0.500000f));
PC->Parameters.Add(TEXT("OutputAdd"), new FFloatParamValue(0.500000f));

// ModuleName OpenCVLensDistortion Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Compositing/OpenCVLensDistortion/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OpenCVLensDistortion/ 
// ModuleName OpenCVLensCalibration Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Compositing/OpenCVLensDistortion/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OpenCVLensCalibration/ 
FC = &GDefaultParamCollection.Add(TEXT("UOpenCVLensCalibrator"));
PC = &FC->Functions.Add(TEXT("CreateCalibrator"));
PC->Parameters.Add(TEXT("BoardWidth"), new FIntParamValue(7));
PC->Parameters.Add(TEXT("BoardHeight"), new FIntParamValue(5));
PC->Parameters.Add(TEXT("SquareSize"), new FFloatParamValue(3.000000f));
PC->Parameters.Add(TEXT("bUseFisheyeModel"), SharedBool_FALSE);

// ModuleName ConcertTransport Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/ConcertMain/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ConcertTransport/ 
// ModuleName Concert Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/ConcertMain/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Concert/ 
// ModuleName ConcertSyncCore Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/ConcertSync/ConcertSyncCore/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ConcertSyncCore/ 
// ModuleName ConcertSyncClient Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/ConcertSync/ConcertSyncClient/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ConcertSyncClient/ 
// ModuleName MultiUserClient Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/MultiUserClient/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MultiUserClient/ 
// ModuleName MultiUserClientLibrary Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/MultiUserClient/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MultiUserClientLibrary/ 
FC = &GDefaultParamCollection.Add(TEXT("UMultiUserClientStatics"));
PC = &FC->Functions.Add(TEXT("SetMultiUserPresenceVisibilityById"));
PC->Parameters.Add(TEXT("PropagateToAll"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetMultiUserPresenceVisibility"));
PC->Parameters.Add(TEXT("PropagateToAll"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetMultiUserPresenceEnabled"));
PC->Parameters.Add(TEXT("IsEnabled"), SharedBool_TRUE);

// ModuleName SourceFilteringCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/TraceSourceFiltering/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SourceFilteringCore/ 
// ModuleName SourceFilteringTrace Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/TraceSourceFiltering/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SourceFilteringTrace/ 
// ModuleName DatasmithC4DTranslator Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithC4DImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithC4DTranslator/ 
// ModuleName DatasmithGLTFTranslator Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithGLTFImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithGLTFTranslator/ 
// ModuleName DirectLinkTest Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DirectLinkTest/ 
FC = &GDefaultParamCollection.Add(TEXT("UDirectLinkTestLibrary"));
PC = &FC->Functions.Add(TEXT("MakeEndpoint"));
PC->Parameters.Add(TEXT("bVerbose"), SharedBool_TRUE);

// ModuleName LidarPointCloudRuntime Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/LidarPointCloud/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LidarPointCloudRuntime/ 
FC = &GDefaultParamCollection.Add(TEXT("ULidarPointCloud"));
PC = &FC->Functions.Add(TEXT("GetPointsAsCopies"));
PC->Parameters.Add(TEXT("StartIndex"), SharedInt_Zero);
PC->Parameters.Add(TEXT("Count"), new FIntParamValue(-1));

// ModuleName AppleVision Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/AppleVision/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AppleVision/ 
// ModuleName PointCloud Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/AR/PointCloud/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PointCloud/ 
// ModuleName ChaosCaching Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosCaching/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosCaching/ 
// ModuleName ChaosVehicles Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosVehiclesPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosVehicles/ 
// ModuleName ColorCorrectRegions Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ColorCorrectRegions/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ColorCorrectRegions/ 
// ModuleName DMXProtocol Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/DMX/DMXProtocol/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXProtocol/ 
FC = &GDefaultParamCollection.Add(TEXT("UDMXProtocolBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("SetReceiveDMXEnabled"));
PC->Parameters.Add(TEXT("bReceiveDMXEnabled"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectEditor"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("SetSendDMXEnabled"));
PC->Parameters.Add(TEXT("bReceiveDMXEnabled"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("bAffectEditor"), SharedBool_FALSE);

// ModuleName DMXRuntime Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/DMX/DMXEngine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXRuntime/ 
FC = &GDefaultParamCollection.Add(TEXT("UDMXSubsystem"));
PC = &FC->Functions.Add(TEXT("IntValueToBytes"));
PC->Parameters.Add(TEXT("bUseLSB"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("NormalizedValueToBytes"));
PC->Parameters.Add(TEXT("bUseLSB"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("BytesToNormalizedValue"));
PC->Parameters.Add(TEXT("bUseLSB"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("BytesToInt"));
PC->Parameters.Add(TEXT("bUseLSB"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("GetControllerByName"));
PC->Parameters.Add(TEXT("Name"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("GetFixtureTypeByName"));
PC->Parameters.Add(TEXT("Name"), new FStringParamValue(TEXT("")));
PC = &FC->Functions.Add(TEXT("GetFixtureByName"));
PC->Parameters.Add(TEXT("Name"), new FStringParamValue(TEXT("")));

FC = &GDefaultParamCollection.Add(TEXT("UMovieSceneDMXLibrarySection"));
PC = &FC->Functions.Add(TEXT("AddFixturePatch"));
PC->Parameters.Add(TEXT("ActiveMode"), new FIntParamValue(-1));

// ModuleName DMXPixelMappingCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/DigitalMultiplex/DMXPixelMapping/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXPixelMappingCore/ 
// ModuleName DMXPixelMappingRuntime Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/DigitalMultiplex/DMXPixelMapping/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXPixelMappingRuntime/ 
FC = &GDefaultParamCollection.Add(TEXT("UDMXPixelMappingSubsystem"));
PC = &FC->Functions.Add(TEXT("GetMatrixComponent"));
PC->Parameters.Add(TEXT("InComponentName"), new FNameParamValue(FName("")));
PC = &FC->Functions.Add(TEXT("GetFixtureGroupComponent"));
PC->Parameters.Add(TEXT("InComponentName"), new FNameParamValue(FName("")));
PC = &FC->Functions.Add(TEXT("GetOutputDMXComponent"));
PC->Parameters.Add(TEXT("InComponentName"), new FNameParamValue(FName("")));
PC = &FC->Functions.Add(TEXT("GetRendererComponent"));
PC->Parameters.Add(TEXT("InComponentName"), new FNameParamValue(FName("")));

// ModuleName EnhancedInput Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/EnhancedInput/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EnhancedInput/ 
FC = &GDefaultParamCollection.Add(TEXT("UEnhancedInputLibrary"));
PC = &FC->Functions.Add(TEXT("RequestRebuildControlMappingsUsingContext"));
PC->Parameters.Add(TEXT("bForceImmediately"), SharedBool_FALSE);

// ModuleName DatasmithRuntime Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Enterprise/DatasmithRuntime/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithRuntime/ 
// ModuleName FullBodyIK Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/FullBodyIK/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FullBodyIK/ 
// ModuleName Gauntlet Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Gauntlet/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Gauntlet/ 
// ModuleName ImagePlate Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ImagePlate/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ImagePlate/ 
// ModuleName Landmass Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Landmass/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Landmass/ 
// ModuleName LiveLinkControlRig Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/LiveLinkControlRig/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkControlRig/ 
// ModuleName RemoteSession Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/RemoteSession/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RemoteSession/ 
// ModuleName Text3D Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Text3D/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Text3D/ 
// ModuleName VPBookmark Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualProductionUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VPBookmark/ 
// ModuleName VPBookmarkEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualProductionUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VPBookmarkEditor/ 
// ModuleName VPUtilities Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualProductionUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VPUtilities/ 
FC = &GDefaultParamCollection.Add(TEXT("UVPBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("SpawnBookmarkAtCurrentLevelEditorPosition"));
PC->Parameters.Add(TEXT("bFlattenRotation"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UVPCameraBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("SpawnDollyTrackFromPointsSmooth"));
PC->Parameters.Add(TEXT("InterpType"), SharedByte_Zero);
PC = &FC->Functions.Add(TEXT("SpawnDollyTrackFromPoints"));
PC->Parameters.Add(TEXT("InterpType"), SharedByte_Zero);

// ModuleName VCamCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VCamCore/ 
// ModuleName VCamInput Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VCamInput/ 
// ModuleName OSC Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/OSC/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OSC/ 
// ModuleName VirtualHeightfieldMesh Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualHeightfieldMesh/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VirtualHeightfieldMesh/ 
// ModuleName Water Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Water/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Water/ 
FC = &GDefaultParamCollection.Add(TEXT("AWaterBody"));
PC = &FC->Functions.Add(TEXT("OnWaterBodyChanged"));
PC->Parameters.Add(TEXT("bWeightmapSettingsChanged"), SharedBool_FALSE);

// ModuleName WebSocketNetworking Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/WebSocketNetworking/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WebSocketNetworking/ 
// ModuleName HairStrandsCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/HairStrands/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/HairStrandsCore/ 
FC = &GDefaultParamCollection.Add(TEXT("UGroomBlueprintLibrary"));
PC = &FC->Functions.Add(TEXT("CreateNewGroomBindingAsset"));
PC->Parameters.Add(TEXT("InNumInterpolationPoints"), new FIntParamValue(100));
PC->Parameters.Add(TEXT("InMatchingSection"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("CreateNewGroomBindingAssetWithPath"));
PC->Parameters.Add(TEXT("InNumInterpolationPoints"), new FIntParamValue(100));
PC->Parameters.Add(TEXT("InMatchingSection"), SharedInt_Zero);

// ModuleName RemoteImportLibrary Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/Experimental/RemoteImport/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RemoteImportLibrary/ 
FC = &GDefaultParamCollection.Add(TEXT("URemoteImportLibrary"));
PC = &FC->Functions.Add(TEXT("RegisterAnchor"));
PC->Parameters.Add(TEXT("bAllowRename"), SharedBool_TRUE);

// ModuleName DatasmithRemoteImport Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/Experimental/RemoteImport/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithRemoteImport/ 
// ModuleName MagicLeapBLE Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapBLE/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapBLE/ 
// ModuleName MagicLeapCamera Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapCamera/ 
// ModuleName MagicLeapCVCamera Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapCVCamera/ 
// ModuleName MagicLeapConnections Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapConnections/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapConnections/ 
// ModuleName MagicLeapContacts Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapContacts/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapContacts/ 
// ModuleName MagicLeapDispatch Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapDispatch/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapDispatch/ 
// ModuleName MagicLeapLocation Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapLocation/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapLocation/ 
FC = &GDefaultParamCollection.Add(TEXT("UMagicLeapLocationComponent"));
PC = &FC->Functions.Add(TEXT("GetLastLocationOnSphereAsync"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetLastLocationOnSphere"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetLastLocationAsync"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetLastLocation"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);

FC = &GDefaultParamCollection.Add(TEXT("UMagicLeapLocationFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("GetLastLocationOnSphereAsync"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetLastLocationOnSphere"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetLastLocationAsync"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("GetLastLocation"));
PC->Parameters.Add(TEXT("bUseFineLocation"), SharedBool_TRUE);

// ModuleName MagicLeapMovement Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapMovement/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapMovement/ 
FC = &GDefaultParamCollection.Add(TEXT("UMagicLeapMovementComponent"));
PC = &FC->Functions.Add(TEXT("DetachObject"));
PC->Parameters.Add(TEXT("bResolvePendingSoftCollisions"), SharedBool_TRUE);

// ModuleName MagicLeapMusicService Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapMusicService/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapMusicService/ 
// ModuleName MagicLeapNetworking Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapNetworking/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapNetworking/ 
// ModuleName MagicLeapSharedFile Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapSharedFile/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapSharedFile/ 
// ModuleName MagicLeapTablet Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapTablet/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapTablet/ 
// ModuleName LinearTimecode Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/LinearTimecode/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LinearTimecode/ 
// ModuleName MediaPlayerEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MediaPlayerEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaPlayerEditor/ 
// ModuleName MediaFrameworkUtilities Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MediaFrameworkUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaFrameworkUtilities/ 
// ModuleName TimecodeSynchronizer Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/TimecodeSynchronizer/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TimecodeSynchronizer/ 
// ModuleName CustomizableSequencerTracks Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/CustomizableSequencerTracks/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CustomizableSequencerTracks/ 
// ModuleName MovieRenderPipelineCore Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/MovieRenderPipeline/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieRenderPipelineCore/ 
FC = &GDefaultParamCollection.Add(TEXT("UMoviePipeline"));
PC = &FC->Functions.Add(TEXT("Shutdown"));
PC->Parameters.Add(TEXT("bError"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("RequestShutdown"));
PC->Parameters.Add(TEXT("bIsError"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UMoviePipelineConfigBase"));
PC = &FC->Functions.Add(TEXT("FindOrAddSettingByClass"));
PC->Parameters.Add(TEXT("bIncludeDisabledSettings"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("FindSettingByClass"));
PC->Parameters.Add(TEXT("bIncludeDisabledSettings"), SharedBool_FALSE);
PC = &FC->Functions.Add(TEXT("FindSettingsByClass"));
PC->Parameters.Add(TEXT("bIncludeDisabledSettings"), SharedBool_FALSE);

FC = &GDefaultParamCollection.Add(TEXT("UMoviePipelineMasterConfig"));
PC = &FC->Functions.Add(TEXT("GetAllSettings"));
PC->Parameters.Add(TEXT("bIncludeDisabledSettings"), SharedBool_FALSE);
PC->Parameters.Add(TEXT("bIncludeTransientSettings"), SharedBool_FALSE);

// ModuleName MovieRenderPipelineSettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/MovieRenderPipeline/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieRenderPipelineSettings/ 
// ModuleName MovieRenderPipelineRenderPasses Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/MovieRenderPipeline/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieRenderPipelineRenderPasses/ 
// ModuleName GameCircleRuntimeSettings Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/Android/OnlineSubsystemGameCircle/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Android/GameCircleRuntimeSettings/ 
// ModuleName Qos Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineFramework/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Qos/ 
// ModuleName Party Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineFramework/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Party/ 
// ModuleName Lobby Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineFramework/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Lobby/ 
// ModuleName Hotfix Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineFramework/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Hotfix/ 
// ModuleName Rejoin Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineFramework/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Rejoin/ 
// ModuleName OnlineSubsystemSteam Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineSubsystemSteam/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OnlineSubsystemSteam/ 
// ModuleName AnalyticsBlueprintLibrary Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Analytics/AnalyticsBlueprintLibrary/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnalyticsBlueprintLibrary/ 
// ModuleName AnimationBudgetAllocator Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AnimationBudgetAllocator/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnimationBudgetAllocator/ 
// ModuleName ApexDestruction Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ApexDestruction/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ApexDestruction/ 
// ModuleName ARUtilities Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/ARUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ARUtilities/ 
FC = &GDefaultParamCollection.Add(TEXT("UARUtilitiesFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("UpdateWorldToMeterScale"));
PC->Parameters.Add(TEXT("WorldToMeterScale"), new FFloatParamValue(100.000000f));
PC = &FC->Functions.Add(TEXT("UpdateSceneDepthTexture"));
PC->Parameters.Add(TEXT("DepthToMeterScale"), SharedFloat_One);
PC = &FC->Functions.Add(TEXT("UpdateCameraTextureParam"));
PC->Parameters.Add(TEXT("ColorScale"), SharedFloat_One);

// ModuleName AppleARKit Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/AppleAR/AppleARKit/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AppleARKit/ 
// ModuleName AppleARKitPoseTrackingLiveLink Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/AppleAR/AppleARKit/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AppleARKitPoseTrackingLiveLink/ 
// ModuleName AppleARKitFaceSupport Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/AppleAR/AppleARKitFaceSupport/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AppleARKitFaceSupport/ 
FC = &GDefaultParamCollection.Add(TEXT("UAppleARKitFaceMeshComponent"));
PC = &FC->Functions.Add(TEXT("CreateMesh"));
PC->Parameters.Add(TEXT("UV0"), SharedScriptArray);

// ModuleName AzureSpatialAnchors Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/AzureSpatialAnchors/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AzureSpatialAnchors/ 
// ModuleName GoogleARCoreRendering Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/Google/GoogleARCore/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GoogleARCoreRendering/ 
// ModuleName GoogleARCoreBase Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/Google/GoogleARCore/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GoogleARCoreBase/ 
FC = &GDefaultParamCollection.Add(TEXT("UGoogleARCoreAugmentedImageDatabase"));
PC = &FC->Functions.Add(TEXT("AddRuntimeAugmentedImageFromTexture"));
PC->Parameters.Add(TEXT("ImageWidthInMeter"), SharedFloat_Zero);

FC = &GDefaultParamCollection.Add(TEXT("UDEPRECATED_GoogleARCoreFaceMeshComponent"));
PC = &FC->Functions.Add(TEXT("CreateMesh"));
PC->Parameters.Add(TEXT("UV0"), SharedScriptArray);

// ModuleName GoogleARCoreServices Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AR/Google/GoogleARCoreServices/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GoogleARCoreServices/ 
// ModuleName AudioModulation Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AudioModulation/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioModulation/ 
FC = &GDefaultParamCollection.Add(TEXT("UAudioModulationStatics"));
PC = &FC->Functions.Add(TEXT("UpdateMixFromObject"));
PC->Parameters.Add(TEXT("FadeTime"), new FFloatParamValue(-1.000000f));
PC = &FC->Functions.Add(TEXT("UpdateMixByFilter"));
PC->Parameters.Add(TEXT("Value"), SharedFloat_One);
PC->Parameters.Add(TEXT("FadeTime"), new FFloatParamValue(-1.000000f));
PC = &FC->Functions.Add(TEXT("UpdateMix"));
PC->Parameters.Add(TEXT("FadeTime"), new FFloatParamValue(-1.000000f));
PC = &FC->Functions.Add(TEXT("LoadMixFromProfile"));
PC->Parameters.Add(TEXT("bActivate"), SharedBool_TRUE);
PC->Parameters.Add(TEXT("ProfileIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("SaveMixToProfile"));
PC->Parameters.Add(TEXT("ProfileIndex"), SharedInt_Zero);
PC = &FC->Functions.Add(TEXT("CreateBusMixStage"));
PC->Parameters.Add(TEXT("AttackTime"), new FFloatParamValue(0.100000f));
PC->Parameters.Add(TEXT("ReleaseTime"), new FFloatParamValue(0.100000f));
PC = &FC->Functions.Add(TEXT("CreateBus"));
PC->Parameters.Add(TEXT("Activate"), SharedBool_TRUE);

// ModuleName GoogleVRHMD Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/GoogleVR/GoogleVRHMD/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GoogleVRHMD/ 
FC = &GDefaultParamCollection.Add(TEXT("UGoogleVRHMDFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("SetDaydreamLoadingSplashScreenTexture"));
PC->Parameters.Add(TEXT("UVOffset"), new FVector2DParamValue(FVector2D(0.000000f,0.000000f)));
PC->Parameters.Add(TEXT("UVSize"), new FVector2DParamValue(FVector2D(1.000000f,1.000000f)));

// ModuleName GoogleVRController Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/GoogleVR/GoogleVRController/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GoogleVRController/ 
FC = &GDefaultParamCollection.Add(TEXT("UGoogleVRControllerFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("GetBatteryLevel"));
PC->Parameters.Add(TEXT("Hand"), new FEnumParamValue(2));
PC = &FC->Functions.Add(TEXT("GetBatteryCharging"));
PC->Parameters.Add(TEXT("Hand"), new FEnumParamValue(2));
PC = &FC->Functions.Add(TEXT("GetGoogleVRControllerOrientation"));
PC->Parameters.Add(TEXT("Hand"), new FEnumParamValue(2));
PC = &FC->Functions.Add(TEXT("GetGoogleVRControllerRawGyro"));
PC->Parameters.Add(TEXT("Hand"), new FEnumParamValue(2));
PC = &FC->Functions.Add(TEXT("GetGoogleVRControllerRawAccel"));
PC->Parameters.Add(TEXT("Hand"), new FEnumParamValue(2));
PC = &FC->Functions.Add(TEXT("GetGoogleVRControllerState"));
PC->Parameters.Add(TEXT("Hand"), new FEnumParamValue(2));

// ModuleName GoogleVRTransition2D Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/GoogleVR/GoogleVRTransition2D/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GoogleVRTransition2D/ 
// ModuleName IOSReplayKit Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/IOSReplayKit/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/IOSReplayKit/ 
FC = &GDefaultParamCollection.Add(TEXT("UIOSReplayKitControl"));
PC = &FC->Functions.Add(TEXT("StartCaptureToFile"));
PC->Parameters.Add(TEXT("bMicrophoneEnabled"), SharedBool_TRUE);
PC = &FC->Functions.Add(TEXT("StartRecording"));
PC->Parameters.Add(TEXT("bMicrophoneEnabled"), SharedBool_TRUE);

// ModuleName MIDIDevice Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/MIDIDevice/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MIDIDevice/ 
FC = &GDefaultParamCollection.Add(TEXT("UMIDIDeviceManager"));
PC = &FC->Functions.Add(TEXT("CreateMIDIDeviceInputController"));
PC->Parameters.Add(TEXT("MIDIBufferSize"), new FIntParamValue(1024));
PC = &FC->Functions.Add(TEXT("CreateMIDIDeviceController"));
PC->Parameters.Add(TEXT("MIDIBufferSize"), new FIntParamValue(1024));

// ModuleName NetworkPrediction Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/NetworkPrediction/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NetworkPrediction/ 
// ModuleName NetworkPredictionExtras Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/NetworkPredictionExtras/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NetworkPredictionExtras/ 
// ModuleName OptionalMobileFeaturesBPLibrary Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/OptionalMobileFeaturesBPLibrary/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OptionalMobileFeaturesBPLibrary/ 
// ModuleName OSCModulationMixing Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/OSCModulationMixing/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OSCModulationMixing/ 
// ModuleName ReplicationGraph Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ReplicationGraph/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ReplicationGraph/ 
// ModuleName ResonanceAudio Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ResonanceAudio/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ResonanceAudio/ 
// ModuleName SoundCueTemplates Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundCueTemplates/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundCueTemplates/ 
// ModuleName SoundMod Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundMod/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundMod/ 
// ModuleName SoundUtilities Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundUtilities/ 
FC = &GDefaultParamCollection.Add(TEXT("USoundUtilitiesBPFunctionLibrary"));
PC = &FC->Functions.Add(TEXT("GetPitchScaleFromMIDIPitch"));
PC->Parameters.Add(TEXT("BaseMidiNote"), new FIntParamValue(69));
PC->Parameters.Add(TEXT("TargetMidiNote"), new FIntParamValue(69));
PC = &FC->Functions.Add(TEXT("GetMIDIPitchFromFrequency"));
PC->Parameters.Add(TEXT("Frequency"), new FFloatParamValue(440.000000f));
PC = &FC->Functions.Add(TEXT("GetFrequencyFromMIDIPitch"));
PC->Parameters.Add(TEXT("MidiNote"), new FIntParamValue(69));
PC = &FC->Functions.Add(TEXT("GetBeatTempo"));
PC->Parameters.Add(TEXT("BeatsPerMinute"), new FFloatParamValue(120.000000f));
PC->Parameters.Add(TEXT("BeatMultiplier"), new FIntParamValue(1));
PC->Parameters.Add(TEXT("DivisionsOfWholeNote"), new FIntParamValue(4));

// ModuleName SoundVisualizations Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundVisualizations/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundVisualizations/ 
// ModuleName Spatialization Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Spatialization/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Spatialization/ 
// ModuleName SteamSockets Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Steam/SteamSockets/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SteamSockets/ 
// ModuleName SunPosition Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SunPosition/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SunPosition/ 
// ModuleName TimeSynth Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/TimeSynth/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TimeSynth/ 
FC = &GDefaultParamCollection.Add(TEXT("UTimeSynthComponent"));
PC = &FC->Functions.Add(TEXT("SetVolumeGroup"));
PC->Parameters.Add(TEXT("FadeTimeSec"), SharedFloat_Zero);

// ModuleName WarpUtils Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/WarpUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WarpUtils/ 
// ModuleName WebBrowserWidget Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/WebBrowserWidget/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WebBrowserWidget/ 
// ModuleName XRVisualization Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/XR/XRVisualization/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/XRVisualization/ 
// ModuleName ScriptPlugin Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/ScriptPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ScriptPlugin/ 
// ModuleName SlateRemote Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Slate/SlateRemote/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SlateRemote/ 
// ModuleName DMXFixtures Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/DMX/DMXFixtures/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXFixtures/ 
// ModuleName LiveLinkXR Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/LiveLinkXR/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkXR/ 
// ModuleName RemoteControl Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/RemoteControl/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RemoteControl/ 
// ModuleName WebRemoteControl Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/RemoteControl/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WebRemoteControl/ 
// ModuleName StageMonitorCommon Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/StageMonitoring/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StageMonitorCommon/ 
// ModuleName StageMonitor Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/StageMonitoring/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StageMonitor/ 
// ModuleName TakesCore Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/Takes/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TakesCore/ 
// ModuleName TakeTrackRecorders Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/Takes/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TakeTrackRecorders/ 
// ModuleName TakeRecorder Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/Takes/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TakeRecorder/ 
// ModuleName StageDataProvider Type 1  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/StageMonitoring/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StageDataProvider/ 
// ModuleName EnvironmentQueryEditor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/AI/EnvironmentQueryEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EnvironmentQueryEditor/ 
// ModuleName PropertyAccessNode Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/PropertyAccessNode/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PropertyAccessNode/ 
// ModuleName AssetManagerEditor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/AssetManagerEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AssetManagerEditor/ 
// ModuleName GameplayTagsEditor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/GameplayTagsEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayTagsEditor/ 
// ModuleName OnlineBlueprintSupport Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Online/OnlineSubsystemUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OnlineBlueprintSupport/ 
// ModuleName AppleImageUtilsBlueprintSupport Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AppleImageUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AppleImageUtilsBlueprintSupport/ 
// ModuleName PhysXVehiclesEditor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/PhysXVehicles/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PhysXVehiclesEditor/ 
// ModuleName HTNTestSuite Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/AI/HTNPlanner/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/HTNTestSuite/ 
// ModuleName LiveLinkGraphNode Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/LiveLink/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkGraphNode/ 
// ModuleName LiveLinkSequencer Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/LiveLink/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkSequencer/ 
// ModuleName BlueprintMaterialTextureNodes Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/BlueprintMaterialTextureNodes/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BlueprintMaterialTextureNodes/ 
// ModuleName ConcertSyncTest Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/ConcertSync/ConcertSyncTest/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ConcertSyncTest/ 
// ModuleName AppleVisionBlueprintSupport Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/AppleVision/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AppleVisionBlueprintSupport/ 
// ModuleName ChaosVehiclesEditor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosVehiclesPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosVehiclesEditor/ 
// ModuleName DMXPixelMappingBlueprintGraph Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/DigitalMultiplex/DMXPixelMapping/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXPixelMappingBlueprintGraph/ 
// ModuleName InputBlueprintNodes Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/EnhancedInput/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/InputBlueprintNodes/ 
// ModuleName ContentBrowserFileDataSource Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/ContentBrowser/ContentBrowserFileDataSource/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ContentBrowserFileDataSource/ 
// ModuleName PythonScriptPlugin Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/PythonScriptPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PythonScriptPlugin/ 
// ModuleName EditorScriptingUtilities Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/EditorScriptingUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EditorScriptingUtilities/ 
// ModuleName VPUtilitiesEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualProductionUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VPUtilitiesEditor/ 
// ModuleName VirtualCamera Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VirtualCamera/ 
// ModuleName MoviePipelineMaskRenderPass Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/MoviePipelineMaskRenderPass/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MoviePipelineMaskRenderPass/ 
// ModuleName SequencerScripting Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/SequencerScripting/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SequencerScripting/ 
// ModuleName ApexDestructionEditor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ApexDestruction/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ApexDestructionEditor/ 
// ModuleName GameplayAbilitiesEditor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/GameplayAbilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayAbilitiesEditor/ 
// ModuleName DMXEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/DMX/DMXEngine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXEditor/ 
// ModuleName DMXBlueprintGraph Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/DMX/DMXEngine/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXBlueprintGraph/ 
// ModuleName ConcertTakeRecorder Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/MultiUserTakes/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ConcertTakeRecorder/ 
// ModuleName TakeRecorderSources Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/Takes/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TakeRecorderSources/ 
// ModuleName TimedDataMonitor Type 2  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/TimedDataMonitor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TimedDataMonitor/ 
// ModuleName Paper2DEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/2D/Paper2D/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Paper2DEditor/ 
// ModuleName PaperSpriteSheetImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/2D/Paper2D/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PaperSpriteSheetImporter/ 
// ModuleName PaperTiledImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/2D/Paper2D/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PaperTiledImporter/ 
// ModuleName LightPropagationVolumeEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Blendables/LightPropagationVolume/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LightPropagationVolumeEditor/ 
// ModuleName AnimationSharingEd Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/AnimationSharing/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnimationSharingEd/ 
// ModuleName ContentBrowserAssetDataSource Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/ContentBrowser/ContentBrowserAssetDataSource/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ContentBrowserAssetDataSource/ 
// ModuleName ContentBrowserClassDataSource Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/ContentBrowser/ContentBrowserClassDataSource/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ContentBrowserClassDataSource/ 
// ModuleName CryptoKeys Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/CryptoKeys/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CryptoKeys/ 
// ModuleName CurveEditorTools Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/CurveEditorTools/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CurveEditorTools/ 
// ModuleName DataValidation Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/DataValidation/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DataValidation/ 
// ModuleName FacialAnimationEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/FacialAnimation/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FacialAnimationEditor/ 
// ModuleName GeometryMode Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/GeometryMode/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryMode/ 
// ModuleName MacGraphicsSwitching Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/MacGraphicsSwitching/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MacGraphicsSwitching/ 
// ModuleName PluginBrowser Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/PluginBrowser/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PluginBrowser/ 
// ModuleName SpeedTreeImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/SpeedTreeImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SpeedTreeImporter/ 
// ModuleName VariantManagerContentEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/VariantManagerContent/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VariantManagerContentEditor/ 
// ModuleName AlembicLibrary Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/AlembicImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AlembicLibrary/ 
// ModuleName AlembicImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/AlembicImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AlembicImporter/ 
// ModuleName AutomationUtilsEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/AutomationUtils/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AutomationUtilsEditor/ 
// ModuleName GeometryCollectionEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/GeometryCollectionPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCollectionEditor/ 
// ModuleName FractureEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FractureEditor/ 
// ModuleName ChaosSolverEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosSolverPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosSolverEditor/ 
// ModuleName NiagaraEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/FX/Niagara/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/NiagaraEditor/ 
// ModuleName MotoSynthEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/MotoSynth/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MotoSynthEditor/ 
// ModuleName MagicLeapMediaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Lumin/MagicLeapMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MagicLeapMediaEditor/ 
// ModuleName AndroidMediaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/AndroidMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AndroidMediaEditor/ 
// ModuleName AndroidMediaFactory Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/AndroidMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AndroidMediaFactory/ 
// ModuleName AvfMediaFactory Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/AvfMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AvfMediaFactory/ 
// ModuleName AvfMediaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/AvfMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AvfMediaEditor/ 
// ModuleName ImgMediaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/ImgMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ImgMediaEditor/ 
// ModuleName MediaCompositingEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MediaCompositing/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaCompositingEditor/ 
// ModuleName WmfMediaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/WmfMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WmfMediaEditor/ 
// ModuleName WmfMediaFactory Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/WmfMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WmfMediaFactory/ 
// ModuleName MeshPaintingToolset Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MeshPainting/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MeshPaintingToolset/ 
// ModuleName MeshPaintEditorMode Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MeshPainting/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MeshPaintEditorMode/ 
// ModuleName TemplateSequenceEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/TemplateSequence/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TemplateSequenceEditor/ 
// ModuleName AndroidDeviceProfileSelector Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AndroidDeviceProfileSelector/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AndroidDeviceProfileSelector/ 
// ModuleName GooglePADEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/GooglePAD/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GooglePADEditor/ 
// ModuleName SynthesisEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Synthesis/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SynthesisEditor/ 
// ModuleName AudioSynesthesiaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AudioSynesthesia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioSynesthesiaEditor/ 
// ModuleName WebMMediaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/WebMMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WebMMediaEditor/ 
// ModuleName GameplayInsightsEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/GameplayInsights/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GameplayInsightsEditor/ 
// ModuleName LiveLinkEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Animation/LiveLink/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LiveLinkEditor/ 
// ModuleName ComposureLayersEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Compositing/Composure/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ComposureLayersEditor/ 
// ModuleName DisasterRecoveryClient Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/Concert/DisasterRecoveryClient/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DisasterRecoveryClient/ 
// ModuleName OneSkyLocalizationService Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/OneSkyLocalizationService/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/OneSkyLocalizationService/ 
// ModuleName TraceDataFiltering Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Developer/TraceDataFiltering/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TraceDataFiltering/ 
// ModuleName AssetSearch Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/AssetSearch/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AssetSearch/ 
// ModuleName GLTFImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/GLTFImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GLTFImporter/ 
// ModuleName BlastAuthoring Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/BlastPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/BlastAuthoring/ 
// ModuleName MeshEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/MeshEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MeshEditor/ 
// ModuleName PolygonModeling Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/MeshEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PolygonModeling/ 
// ModuleName StylusInput Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Editor/StylusInput/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StylusInput/ 
// ModuleName DataprepCore Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DataprepEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DataprepCore/ 
// ModuleName DataprepEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DataprepEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DataprepEditor/ 
// ModuleName DataprepLibraries Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DataprepEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DataprepLibraries/ 
// ModuleName DataprepEditorScriptingUtilities Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DataprepEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DataprepEditorScriptingUtilities/ 
// ModuleName DatasmithFBXTranslator Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithFBXImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithFBXTranslator/ 
// ModuleName DatasmithVREDTranslator Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithFBXImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithVREDTranslator/ 
// ModuleName DatasmithDeltaGenTranslator Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithFBXImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithDeltaGenTranslator/ 
// ModuleName MeshProcessingLibrary Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/StaticMeshEditorExtension/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MeshProcessingLibrary/ 
// ModuleName StaticMeshEditorExtension Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/StaticMeshEditorExtension/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StaticMeshEditorExtension/ 
// ModuleName VariantManager Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/VariantManager/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VariantManager/ 
// ModuleName DatasmithImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/DatasmithImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DatasmithImporter/ 
// ModuleName LidarPointCloudEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/LidarPointCloud/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LidarPointCloudEditor/ 
// ModuleName MDLImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Enterprise/MDLImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MDLImporter/ 
// ModuleName ActorPalette Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ActorPalette/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ActorPalette/ 
// ModuleName ChaosCachingEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ChaosCaching/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ChaosCachingEditor/ 
// ModuleName CodeEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/CodeEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CodeEditor/ 
// ModuleName DMXPixelMappingEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/DigitalMultiplex/DMXPixelMapping/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/DMXPixelMappingEditor/ 
// ModuleName InputEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/EnhancedInput/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/InputEditor/ 
// ModuleName GizmoEdMode Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/GizmoEdMode/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GizmoEdMode/ 
// ModuleName ExampleAssetEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ExampleAssetEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ExampleAssetEditor/ 
// ModuleName FieldSystemEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/FieldSystemPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FieldSystemEditor/ 
// ModuleName GeometryCacheAbcFile Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/GeometryCacheAbcFile/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCacheAbcFile/ 
// ModuleName ImagePlateEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/ImagePlate/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ImagePlateEditor/ 
// ModuleName LandmassEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Landmass/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LandmassEditor/ 
// ModuleName MotionTrailEditorMode Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/MotionTrailEditorMode/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MotionTrailEditorMode/ 
// ModuleName RemoteSessionEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/RemoteSession/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RemoteSessionEditor/ 
// ModuleName SampleToolsEditorMode Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/SampleToolsEditorMode/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SampleToolsEditorMode/ 
// ModuleName Text3DEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Text3D/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/Text3DEditor/ 
// ModuleName VCamCoreEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VCamCoreEditor/ 
// ModuleName VirtualCameraEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VirtualCameraEditor/ 
// ModuleName VirtualHeightfieldMeshEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/VirtualHeightfieldMesh/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/VirtualHeightfieldMeshEditor/ 
// ModuleName WaterEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Experimental/Water/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/WaterEditor/ 
// ModuleName CascadeToNiagaraConverter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/FX/CascadeToNiagaraConverter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/CascadeToNiagaraConverter/ 
// ModuleName HairStrandsEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/HairStrands/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/HairStrandsEditor/ 
// ModuleName USDClasses Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/USDImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/USDClasses/ 
// ModuleName UnrealUSDWrapper Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/USDImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UnrealUSDWrapper/ 
// ModuleName GeometryCacheUSD Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/USDImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/GeometryCacheUSD/ 
// ModuleName USDStage Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/USDImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/USDStage/ 
// ModuleName USDStageImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/USDImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/USDStageImporter/ 
// ModuleName USDImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/USDImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/USDImporter/ 
// ModuleName USDExporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Importers/USDImporter/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/USDExporter/ 
// ModuleName AndroidCameraEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/AndroidCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AndroidCameraEditor/ 
// ModuleName AndroidCameraFactory Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/AndroidCamera/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AndroidCameraFactory/ 
// ModuleName MediaFrameworkUtilitiesEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MediaFrameworkUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaFrameworkUtilitiesEditor/ 
// ModuleName MediaIOEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MediaIOFramework/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MediaIOEditor/ 
// ModuleName MfMediaEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/MfMedia/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MfMediaEditor/ 
// ModuleName TimecodeSynchronizerEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Media/TimecodeSynchronizer/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TimecodeSynchronizerEditor/ 
// ModuleName MovieRenderPipelineEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/MovieRenderPipeline/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/MovieRenderPipelineEditor/ 
// ModuleName SequencerScriptingEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/MovieScene/SequencerScripting/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SequencerScriptingEditor/ 
// ModuleName AdjustEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Analytics/Adjust/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AdjustEditor/ 
// ModuleName AnalyticsMulticastEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Analytics/AnalyticsMulticast/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AnalyticsMulticastEditor/ 
// ModuleName FlurryEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Analytics/Flurry/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FlurryEditor/ 
// ModuleName AudioModulationEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/AudioModulation/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/AudioModulationEditor/ 
// ModuleName LocationServicesAndroidEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/LocationServicesAndroidImpl/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LocationServicesAndroidEditor/ 
// ModuleName LocationServicesIOSEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/LocationServicesIOSImpl/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/LocationServicesIOSEditor/ 
// ModuleName ResonanceAudioEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/ResonanceAudio/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ResonanceAudioEditor/ 
// ModuleName SoundCueTemplatesEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundCueTemplates/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundCueTemplatesEditor/ 
// ModuleName SoundModImporter Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundMod/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundModImporter/ 
// ModuleName SoundUtilitiesEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/SoundUtilities/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SoundUtilitiesEditor/ 
// ModuleName SpatializationEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/Spatialization/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/SpatializationEditor/ 
// ModuleName TimeSynthEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Runtime/TimeSynth/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TimeSynthEditor/ 
// ModuleName ScriptEditorPlugin Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/ScriptPlugin/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/ScriptEditorPlugin/ 
// ModuleName EditorTests Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Tests/EditorTests/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/EditorTests/ 
// ModuleName FunctionalTestingEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Tests/FunctionalTestingEditor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/FunctionalTestingEditor/ 
// ModuleName PythonAutomationTest Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/Tests/PythonAutomationTest/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/PythonAutomationTest/ 
// ModuleName RemoteControlUI Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/RemoteControl/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/RemoteControlUI/ 
// ModuleName StageMonitorEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/StageMonitoring/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/StageMonitorEditor/ 
// ModuleName TimedDataMonitorEditor Type 4  ModuleGeneratedIncludeDirectory /Users/Shared/Epic Games/UE_4.26/Engine/Plugins/VirtualProduction/TimedDataMonitor/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/TimedDataMonitorEditor/ 
// ModuleName UnLua Type 6  ModuleGeneratedIncludeDirectory /Users/hexin/Documents/Unreal Projects/my2DGameDemo/Plugins/UnLua/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UnLua/ 
// ModuleName UnLuaEditor Type 9  ModuleGeneratedIncludeDirectory /Users/hexin/Documents/Unreal Projects/my2DGameDemo/Plugins/UnLua/Intermediate/Build/Mac/x86_64/UE4Editor/Inc/UnLuaEditor/ 
