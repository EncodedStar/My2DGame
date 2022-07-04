---Implements the Level Editor's per-instance view port settings.
---@class FLevelEditorViewportInstanceSettings
---@field public ViewportType integer @The viewport type
---@field public PerspViewModeIndex integer @View mode to set when this viewport is of type LVT_Perspective.
---@field public OrthoViewModeIndex integer @View mode to set when this viewport is not of type LVT_Perspective.
---@field public EditorShowFlagsString string @A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form. These have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly.
---@field public GameShowFlagsString string @A set of flags that determines visibility for various scene elements (FEngineShowFlags), converted to string form. These have to be saved as strings since FEngineShowFlags is too complex for UHT to parse correctly.
---@field public BufferVisualizationMode string @The buffer visualization mode for the viewport.
---@field public RayTracingDebugVisualizationMode string @The buffer visualization mode for the viewport.
---@field public ExposureSettings FExposureSettings @Setting to allow designers to override the automatic expose.
---@field public FOVAngle number @Field of view angle for the viewport.
---@field public FarViewPlane number @Position of the var plane in the editor viewport
---@field public bIsRealtime boolean @Whether this viewport is updating in real-time.
---@field public bShowOnScreenStats boolean @Whether viewport statistics should be shown.
---@field public EnabledStats TArray<string> @Whether viewport statistics should be enabled by default.
---@field public bShowFullToolbar boolean @When enabled, the full viewport toolbar will be shown. When disabled, a compact toolbar is used.
local FLevelEditorViewportInstanceSettings = {}
