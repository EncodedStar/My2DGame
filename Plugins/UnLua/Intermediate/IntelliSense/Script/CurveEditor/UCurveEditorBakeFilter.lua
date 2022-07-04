---@class UCurveEditorBakeFilter : UCurveEditorFilterBase
---@field public bUseSnapRateForInterval boolean @If true we will use the snap rate of the Curve Editor to determine how far apart keys should be when baking. If false, the interval is used.
---@field public BakeInterval number @The interval (in seconds) between baked keys. Only used if bUseSnapRateForInterval is false.
local UCurveEditorBakeFilter = {}

