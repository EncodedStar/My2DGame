---An audio component that also provides curves to drive animation
---@class UAudioCurveSourceComponent : UAudioComponent
---@field public CurveSourceBindingName string @Get the name that this curve source can be bound to by. Clients of this curve source will use this name to identify this source.
---@field public CurveSyncOffset number @Offset in time applied to audio position when evaluating curves
local UAudioCurveSourceComponent = {}

