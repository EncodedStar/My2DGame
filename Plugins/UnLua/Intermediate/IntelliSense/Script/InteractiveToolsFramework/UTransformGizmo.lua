---UTransformGizmo provides standard Transformation Gizmo interactions,
---applied to a UTransformProxy target object. By default the Gizmo will be
---a standard XYZ translate/rotate Gizmo (axis and plane translation).
---The in-scene representation of the Gizmo is a ATransformGizmoActor (or subclass).
---This Actor has FProperty members for the various sub-widgets, each as a separate Component.
---Any particular sub-widget of the Gizmo can be disabled by setting the respective
---Actor Component to null.
---So, to create non-standard variants of the Transform Gizmo, set a new GizmoActorBuilder
---in the UTransformGizmoBuilder registered with the GizmoManager. Return
---a suitably-configured GizmoActor and everything else will be handled automatically.
---@class UTransformGizmo : UInteractiveGizmo
---@field public ActiveTarget UTransformProxy @The active target object for the Gizmo
---@field public bSnapToWorldGrid boolean @If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in PositionSnapFunction)
---@field public bGridSizeIsExplicit boolean @Optional grid size which overrides the Context Grid
---@field public ExplicitGridSize FVector
---@field public bRotationGridSizeIsExplicit boolean @Optional grid size which overrides the Context Rotation Grid
---@field public ExplicitRotationGridSize FRotator
---@field public bSnapToWorldRotGrid boolean @If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in RotationSnapFunction)
---@field public bUseContextCoordinateSystem boolean @Whether to use the World/Local coordinate system provided by the context via the ContextyQueriesAPI.
---@field public CurrentCoordinateSystem EToolContextCoordinateSystem @Current coordinate system in use. If bUseContextCoordinateSystem is true, this value will be updated internally every Tick() by quering the ContextyQueriesAPI, otherwise the default is Local and the client can change it as necessary
---@field protected ActiveComponents TArray<UPrimitiveComponent> @List of current-active child components
---@field protected NonuniformScaleComponents TArray<UPrimitiveComponent> @List of nonuniform scale components. Subset of of ActiveComponents. These are tracked separately so they can be hidden when Gizmo is not configured to use local axes, because UE only supports local nonuniform scaling on Components
---@field protected ActiveGizmos TArray<UInteractiveGizmo> @list of currently-active child gizmos
---@field protected CameraAxisSource UGizmoConstantFrameAxisSource @Axis that points towards camera, X/Y plane tangents aligned to right/up. Shared across Gizmos, and created internally during SetActiveTarget()
---@field protected AxisXSource UGizmoComponentAxisSource @X-axis source is shared across Gizmos, and created internally during SetActiveTarget()
---@field protected AxisYSource UGizmoComponentAxisSource @Y-axis source is shared across Gizmos, and created internally during SetActiveTarget()
---@field protected AxisZSource UGizmoComponentAxisSource @Z-axis source is shared across Gizmos, and created internally during SetActiveTarget()
---@field protected UnitAxisXSource UGizmoComponentAxisSource @Local X-axis source (ie 1,0,0) is shared across Scale Gizmos, and created internally during SetActiveTarget()
---@field protected UnitAxisYSource UGizmoComponentAxisSource @Y-axis source (ie 0,1,0) is shared across Scale Gizmos, and created internally during SetActiveTarget()
---@field protected UnitAxisZSource UGizmoComponentAxisSource @Z-axis source (ie 0,0,1) is shared across Scale Gizmos, and created internally during SetActiveTarget()
---@field protected StateTarget UGizmoTransformChangeStateTarget @State target is shared across gizmos, and created internally during SetActiveTarget(). Several FChange providers are registered with this StateTarget, including the UTransformGizmo itself (IToolCommandChangeSource implementation above is called)
---@field protected ScaledTransformSource UGizmoScaledTransformSource @This TransformSource wraps a UGizmoComponentWorldTransformSource that is on the Gizmo Actor directly. It tracks the scaling separately (SeparateChildScale is provided as the storage for the scaling). This allows the various scaling handles to update the Transform without actually scaling the Gizmo itself.
local UTransformGizmo = {}

