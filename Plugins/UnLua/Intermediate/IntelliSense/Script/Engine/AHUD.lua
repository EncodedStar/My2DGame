---Base class of the heads-up display. This has a canvas and a debug canvas on which primitives can be drawn.
---It also contains a list of simple hit boxes that can be used for simple item click detection.
---A method of rendering debug text is also included.
---Provides some simple methods for rendering text, textures, rectangles and materials which can also be accessed from blueprints.
---@class AHUD : AActor
---@field public PlayerOwner APlayerController @PlayerController which owns this HUD.
---@field public bLostFocusPaused boolean @Tells whether the game was paused due to lost focus
---@field public bShowHUD boolean @Whether or not the HUD should be drawn.
---@field public bShowDebugInfo boolean @If true, current ViewTarget shows debug information using its DisplayDebug().
---@field public CurrentTargetIndex integer @Current target in our considered Targets list for 'showdebug'
---@field public bShowHitBoxDebugInfo boolean @If true, show hitbox debugging info.
---@field public bShowOverlays boolean @If true, render actor overlays.
---@field public bEnableDebugTextShadow boolean @Put shadow on debug strings
---@field public PostRenderedActors TArray<AActor> @Holds a list of Actors that need PostRender() calls.
---@field public DebugDisplay TArray<string> @Array of names specifying what debug info to display for viewtarget actor.
---@field public ToggledDebugCategories TArray<string> @Array of names specifying what subsets of debug info to display for viewtarget actor.
---@field protected Canvas UCanvas @Canvas to Draw HUD on.  Only valid during PostRender() event.
---@field protected DebugCanvas UCanvas @'Foreground' debug canvas, will draw in front of Slate UI.
---@field protected DebugTextList TArray<FDebugTextInfo> @List of debug strings attached to actors, sorted by actor first, then by order of addition
---@field protected ShowDebugTargetDesiredClass TSubclassOf<AActor> @Class filter for selecting 'ShowDebugTargetActor' when 'bShowDebugForReticleTarget' is true.
---@field protected ShowDebugTargetActor AActor @Show Debug Actor used if 'bShowDebugForReticleTarget' is true, only updated if trace from reticle hit a new Actor of class 'ShowDebugTargetDesiredClass'
local AHUD = {}

---Transforms a 3D world-space vector into 2D screen coordinates
---@param Location FVector
---@return FVector
function AHUD:Project(Location) end

---Returns the width and height of a string.
---@param Text string
---@param OutWidth number @[out] 
---@param OutHeight number @[out] 
---@param Font UFont @[opt] 
---@param Scale number @[opt] 
function AHUD:GetTextSize(Text, OutWidth, OutHeight, Font, Scale) end

---Returns the PlayerController for this HUD's player.
---@return APlayerController
function AHUD:GetOwningPlayerController() end

---Returns the Pawn for this HUD's player.
---@return APawn
function AHUD:GetOwningPawn() end

---Returns the array of actors inside a selection rectangle, with a class filter.
---Sample usage:
---      TArray<AStaticMeshActor*> ActorsInSelectionRect;
---             Canvas->GetActorsInSelectionRectangle<AStaticMeshActor>(FirstPoint,SecondPoint,ActorsInSelectionRect);
---@param ClassFilter TSubclassOf_AActor_
---@param FirstPoint FVector2D
---@param SecondPoint FVector2D
---@param OutActors TArray_AActor_ @[out] 
---@param bIncludeNonCollidingComponents boolean @[opt] 
---@param bActorMustBeFullyEnclosed boolean @[opt] 
function AHUD:GetActorsInSelectionRectangle(ClassFilter, FirstPoint, SecondPoint, OutActors, bIncludeNonCollidingComponents, bActorMustBeFullyEnclosed) end

---Draws a textured quad on the HUD. Assumes 1:1 texel density.
---@param Texture UTexture
---@param ScreenX number
---@param ScreenY number
---@param Scale number @[opt] 
---@param bScalePosition boolean @[opt] 
function AHUD:DrawTextureSimple(Texture, ScreenX, ScreenY, Scale, bScalePosition) end

---Draws a textured quad on the HUD.
---@param Texture UTexture
---@param ScreenX number
---@param ScreenY number
---@param ScreenW number
---@param ScreenH number
---@param TextureU number
---@param TextureV number
---@param TextureUWidth number
---@param TextureVHeight number
---@param TintColor FLinearColor @[opt] 
---@param BlendMode integer @[opt] 
---@param Scale number @[opt] 
---@param bScalePosition boolean @[opt] 
---@param Rotation number @[opt] 
---@param RotPivot FVector2D
function AHUD:DrawTexture(Texture, ScreenX, ScreenY, ScreenW, ScreenH, TextureU, TextureV, TextureUWidth, TextureVHeight, TintColor, BlendMode, Scale, bScalePosition, Rotation, RotPivot) end

---Draws a string on the HUD.
---@param Text string
---@param TextColor FLinearColor
---@param ScreenX number
---@param ScreenY number
---@param Font UFont @[opt] 
---@param Scale number @[opt] 
---@param bScalePosition boolean @[opt] 
function AHUD:DrawText(Text, TextColor, ScreenX, ScreenY, Font, Scale, bScalePosition) end

---Draws a colored untextured quad on the HUD.
---@param RectColor FLinearColor
---@param ScreenX number
---@param ScreenY number
---@param ScreenW number
---@param ScreenH number
function AHUD:DrawRect(RectColor, ScreenX, ScreenY, ScreenW, ScreenH) end

---@param Material UMaterialInterface
---@param V0_Pos FVector2D
---@param V1_Pos FVector2D
---@param V2_Pos FVector2D
---@param V0_UV FVector2D
---@param V1_UV FVector2D
---@param V2_UV FVector2D
---@param V0_Color FLinearColor @[opt] 
---@param V1_Color FLinearColor @[opt] 
---@param V2_Color FLinearColor @[opt] 
function AHUD:DrawMaterialTriangle(Material, V0_Pos, V1_Pos, V2_Pos, V0_UV, V1_UV, V2_UV, V0_Color, V1_Color, V2_Color) end

---Draws a material-textured quad on the HUD.  Assumes UVs such that the entire material is shown.
---@param Material UMaterialInterface
---@param ScreenX number
---@param ScreenY number
---@param ScreenW number
---@param ScreenH number
---@param Scale number @[opt] 
---@param bScalePosition boolean @[opt] 
function AHUD:DrawMaterialSimple(Material, ScreenX, ScreenY, ScreenW, ScreenH, Scale, bScalePosition) end

---Draws a material-textured quad on the HUD.
---@param Material UMaterialInterface
---@param ScreenX number
---@param ScreenY number
---@param ScreenW number
---@param ScreenH number
---@param MaterialU number
---@param MaterialV number
---@param MaterialUWidth number
---@param MaterialVHeight number
---@param Scale number @[opt] 
---@param bScalePosition boolean @[opt] 
---@param Rotation number @[opt] 
---@param RotPivot FVector2D
function AHUD:DrawMaterial(Material, ScreenX, ScreenY, ScreenW, ScreenH, MaterialU, MaterialV, MaterialUWidth, MaterialVHeight, Scale, bScalePosition, Rotation, RotPivot) end

---Draws a 2D line on the HUD.
---@param StartScreenX number
---@param StartScreenY number
---@param EndScreenX number
---@param EndScreenY number
---@param LineColor FLinearColor
---@param LineThickness number @[opt] 
function AHUD:DrawLine(StartScreenX, StartScreenY, EndScreenX, EndScreenY, LineColor, LineThickness) end

---Transforms a 2D screen location into a 3D location and direction
---@param ScreenX number
---@param ScreenY number
---@param WorldPosition FVector @[out] 
---@param WorldDirection FVector @[out] 
function AHUD:Deproject(ScreenX, ScreenY, WorldPosition, WorldDirection) end

---Add a hitbox to the hud
---@param Position FVector2D
---@param Size FVector2D
---@param InName string
---@param bConsumesInput boolean
---@param Priority integer @[opt] 
function AHUD:AddHitBox(Position, Size, InName, bConsumesInput, Priority) end

