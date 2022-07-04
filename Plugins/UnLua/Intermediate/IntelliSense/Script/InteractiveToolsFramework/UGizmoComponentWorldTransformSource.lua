---UGizmoComponentWorldTransformSource implements IGizmoTransformSource (via UGizmoBaseTransformSource)
---based on the internal transform of a USceneComponent.
---@class UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource
---@field public Component USceneComponent
---@field public bModifyComponentOnTransform boolean @If true, Component->Modify() is called on SetTransform
local UGizmoComponentWorldTransformSource = {}

