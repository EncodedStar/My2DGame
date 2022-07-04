---UGizmoComponentAxisSource is an IGizmoAxisSource implementation that provides one of the
---X/Y/Z axes of a Component's local coordinate system, mapped to World, based on an integer AxisIndex in range [0,2].
---The Axis Origin is the Component's transform origin. Tangent vectors are provided.
---@class UGizmoComponentAxisSource : UObject
---@field public Component USceneComponent
---@field public AxisIndex integer @Clamped internally to 0,1,2
---@field public bLocalAxes boolean @If false, returns World axes
local UGizmoComponentAxisSource = {}

