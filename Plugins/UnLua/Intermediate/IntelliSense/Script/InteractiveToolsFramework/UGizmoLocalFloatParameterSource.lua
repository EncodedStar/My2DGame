---UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource
---(by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter
---and emits update events via the OnParameterChanged delegate.
---@class UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource
---@field public Value number
---@field public LastChange FGizmoFloatParameterChange
local UGizmoLocalFloatParameterSource = {}

