---@class UNiagaraSpriteRendererProperties : UNiagaraRendererProperties
---@field public Material UMaterialInterface @The material used to render the particle. Note that it must have the Use with Niagara Sprites flag checked.
---@field public SourceMode ENiagaraRendererSourceDataMode @Whether or not to draw a single element for the Emitter or to draw the particles.
---@field public MaterialUserParamBinding FNiagaraUserParameterBinding @Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins.
---@field public Alignment ENiagaraSpriteAlignment @Imagine the particle texture having an arrow pointing up, these modes define how the particle aligns that texture to other particle attributes.
---@field public FacingMode ENiagaraSpriteFacingMode @Determines how the particle billboard orients itself relative to the camera.
---@field public PivotInUVSpace FVector2D @Determines the location of the pivot point of this particle. It follows Unreal's UV space, which has the upper left of the image at 0,0 and bottom right at 1,1. The middle is at 0.5, 0.5.
---@field public SortMode ENiagaraSortMode @Determines how we sort the particles prior to rendering.
---@field public SubImageSize FVector2D @When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y.
---@field public bSubImageBlend boolean @If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor.
---@field public bRemoveHMDRollInVR boolean @If true, removes the HMD view roll (e.g. in VR)
---@field public bSortOnlyWhenTranslucent boolean @If true, the particles are only sorted when using a translucent material.
---@field public bGpuLowLatencyTranslucency boolean @If true and a GPU emitter, we will use the current frames data to render with regardless of where the batcher may execute the dispatches. If you have other emitters that are not translucent and using data that forces it to be a frame latent (i.e. view uniform buffer) you may need to disable on renderers with translucent materials if you need the frame they are reading to match exactly.
---@field public MinFacingCameraBlendDistance number @When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera plane.
---@field public MaxFacingCameraBlendDistance number @When FacingMode is FacingCameraDistanceBlend, the distance at which the sprite is fully facing the camera position
---@field public bEnableCameraDistanceCulling boolean @Enables frustum culling of individual sprites
---@field public MinCameraDistance number
---@field public MaxCameraDistance number
---@field public RendererVisibility integer @If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer.
---@field public PositionBinding FNiagaraVariableAttributeBinding @Which attribute should we use for position when generating sprites?
---@field public ColorBinding FNiagaraVariableAttributeBinding @Which attribute should we use for color when generating sprites?
---@field public VelocityBinding FNiagaraVariableAttributeBinding @Which attribute should we use for velocity when generating sprites?
---@field public SpriteRotationBinding FNiagaraVariableAttributeBinding @Which attribute should we use for sprite rotation (in degrees) when generating sprites?
---@field public SpriteSizeBinding FNiagaraVariableAttributeBinding @Which attribute should we use for sprite size when generating sprites?
---@field public SpriteFacingBinding FNiagaraVariableAttributeBinding @Which attribute should we use for sprite facing when generating sprites?
---@field public SpriteAlignmentBinding FNiagaraVariableAttributeBinding @Which attribute should we use for sprite alignment when generating sprites?
---@field public SubImageIndexBinding FNiagaraVariableAttributeBinding @Which attribute should we use for sprite sub-image indexing when generating sprites?
---@field public DynamicMaterialBinding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating sprites?
---@field public DynamicMaterial1Binding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating sprites?
---@field public DynamicMaterial2Binding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating sprites?
---@field public DynamicMaterial3Binding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating sprites?
---@field public CameraOffsetBinding FNiagaraVariableAttributeBinding @Which attribute should we use for camera offset when generating sprites?
---@field public UVScaleBinding FNiagaraVariableAttributeBinding @Which attribute should we use for UV scale when generating sprites?
---@field public MaterialRandomBinding FNiagaraVariableAttributeBinding @Which attribute should we use for material randoms when generating sprites?
---@field public CustomSortingBinding FNiagaraVariableAttributeBinding @Which attribute should we use for custom sorting? Defaults to Particles.NormalizedAge.
---@field public NormalizedAgeBinding FNiagaraVariableAttributeBinding @Which attribute should we use for Normalized Age?
---@field public RendererVisibilityTagBinding FNiagaraVariableAttributeBinding @Which attribute should we use for RendererVisibilityTag?
---@field public MaterialParameterBindings TArray<FNiagaraMaterialAttributeBinding> @If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.
---@field public bUseMaterialCutoutTexture boolean @Use the cutout texture from the material opacity mask, or if none exist, from the material opacity.
---@field public CutoutTexture UTexture2D @Texture to generate bounding geometry from.
---@field public BoundingMode integer @More bounding vertices results in reduced overdraw, but adds more triangle overhead. The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version, and when the particles using the texture will be few and large.
---@field public OpacitySourceMode integer
---@field public AlphaThreshold number @Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry. Raising this threshold slightly can reduce overdraw in particles using this animation asset.
local UNiagaraSpriteRendererProperties = {}

