---@class UNiagaraRibbonRendererProperties : UNiagaraRendererProperties
---@field public Material UMaterialInterface @UNiagaraRendererProperties Interface END
---@field public MaterialUserParamBinding FNiagaraUserParameterBinding @Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins.
---@field public FacingMode ENiagaraRibbonFacingMode
---@field public UV0Settings FNiagaraRibbonUVSettings
---@field public UV1Settings FNiagaraRibbonUVSettings
---@field public DrawDirection ENiagaraRibbonDrawDirection @If true, the particles are only sorted when using a translucent material.
---@field public CurveTension number @Defines the curve tension, or how long the curve's tangents are. Ranges from 0 to 1. The higher the value, the sharper the curve becomes.
---@field public TessellationMode ENiagaraRibbonTessellationMode @Defines the tessellation mode allowing custom tessellation parameters or disabling tessellation entirely.
---@field public TessellationFactor integer @Custom tessellation factor. Ranges from 1 to 16. Greater values increase amount of tessellation.
---@field public bUseConstantFactor boolean @If checked, use the above constant factor. Otherwise, adaptively select the tessellation factor based on the below parameters.
---@field public TessellationAngle number @Defines the angle in degrees at which tessellation occurs. Ranges from 1 to 180. Smaller values increase amount of tessellation. If set to 0, use the maximum tessellation set above.
---@field public bScreenSpaceTessellation boolean @If checked, use the ribbon's screen space percentage to adaptively adjust the tessellation factor.
---@field public PositionBinding FNiagaraVariableAttributeBinding @Which attribute should we use for position when generating ribbons?
---@field public ColorBinding FNiagaraVariableAttributeBinding @Which attribute should we use for color when generating ribbons?
---@field public VelocityBinding FNiagaraVariableAttributeBinding @Which attribute should we use for velocity when generating ribbons?
---@field public NormalizedAgeBinding FNiagaraVariableAttributeBinding @Which attribute should we use for normalized age when generating ribbons?
---@field public RibbonTwistBinding FNiagaraVariableAttributeBinding @Which attribute should we use for ribbon twist when generating ribbons?
---@field public RibbonWidthBinding FNiagaraVariableAttributeBinding @Which attribute should we use for ribbon width when generating ribbons?
---@field public RibbonFacingBinding FNiagaraVariableAttributeBinding @Which attribute should we use for ribbon facing when generating ribbons?
---@field public RibbonIdBinding FNiagaraVariableAttributeBinding @Which attribute should we use for ribbon id when generating ribbons?
---@field public RibbonLinkOrderBinding FNiagaraVariableAttributeBinding @Which attribute should we use for RibbonLinkOrder when generating ribbons?
---@field public MaterialRandomBinding FNiagaraVariableAttributeBinding @Which attribute should we use for MaterialRandom when generating ribbons?
---@field public DynamicMaterialBinding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating ribbons?
---@field public DynamicMaterial1Binding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating ribbons?
---@field public DynamicMaterial2Binding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating ribbons?
---@field public DynamicMaterial3Binding FNiagaraVariableAttributeBinding @Which attribute should we use for dynamic material parameters when generating ribbons?
---@field public U0OverrideBinding FNiagaraVariableAttributeBinding @Which attribute should we use for UV0 U when generating ribbons?
---@field public V0RangeOverrideBinding FNiagaraVariableAttributeBinding @Which attribute should we use for UV0 V when generating ribbons?
---@field public U1OverrideBinding FNiagaraVariableAttributeBinding @Which attribute should we use for UV1 U when generating ribbons?
---@field public V1RangeOverrideBinding FNiagaraVariableAttributeBinding @Which attribute should we use for UV1 V when generating ribbons?
local UNiagaraRibbonRendererProperties = {}

