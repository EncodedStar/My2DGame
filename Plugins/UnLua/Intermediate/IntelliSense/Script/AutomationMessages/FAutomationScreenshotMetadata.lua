---@class FAutomationScreenshotMetadata
---@field public ScreenShotName string
---@field public Context string
---@field public TestName string
---@field public Notes string
---@field public Id FGuid
---@field public Commit string
---@field public Width integer
---@field public Height integer
---@field public Rhi string @RHI Details
---@field public Platform string
---@field public FeatureLevel string
---@field public bIsStereo boolean
---@field public Vendor string @Hardware Details
---@field public AdapterName string
---@field public AdapterInternalDriverVersion string
---@field public AdapterUserDriverVersion string
---@field public UniqueDeviceId string
---@field public ResolutionQuality number @Quality Levels
---@field public ViewDistanceQuality integer
---@field public AntiAliasingQuality integer
---@field public ShadowQuality integer
---@field public PostProcessQuality integer
---@field public TextureQuality integer
---@field public EffectsQuality integer
---@field public FoliageQuality integer
---@field public ShadingQuality integer
---@field public bHasComparisonRules boolean @Comparison Requests
---@field public ToleranceRed integer
---@field public ToleranceGreen integer
---@field public ToleranceBlue integer
---@field public ToleranceAlpha integer
---@field public ToleranceMinBrightness integer
---@field public ToleranceMaxBrightness integer
---@field public MaximumLocalError number
---@field public MaximumGlobalError number
---@field public bIgnoreAntiAliasing boolean
---@field public bIgnoreColors boolean
local FAutomationScreenshotMetadata = {}
