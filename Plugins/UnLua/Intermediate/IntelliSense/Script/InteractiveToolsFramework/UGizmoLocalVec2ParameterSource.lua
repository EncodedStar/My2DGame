---UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource
---(by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter
---and emits update events via the OnParameterChanged delegate.
---@class UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource
---@field public Value FVector2D
---@field public LastChange FGizmoVec2ParameterChange
local UGizmoLocalVec2ParameterSource = {}

