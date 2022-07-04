---UGizmoAxisIntervalParameterSource is an IGizmoFloatParameterSource implementation that
---interprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation
---along a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.
---This ParameterSource is intended to be used to create 3D Axis Interval Gizmos.
---@class UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource
---@field public FloatParameterSource TScriptInterface<UGizmoFloatParameterSource>
---@field public MinParameter number
---@field public MaxParameter number
local UGizmoAxisIntervalParameterSource = {}

