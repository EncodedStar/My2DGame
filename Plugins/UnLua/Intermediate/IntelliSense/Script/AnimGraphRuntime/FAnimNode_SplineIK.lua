---@class FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
---@field public StartBone FBoneReference @Name of root bone from which the spline extends *
---@field public EndBone FBoneReference @Name of bone at the end of the spline chain. Bones after this will not be altered by the controller.
---@field public BoneAxis ESplineBoneAxis @Axis of the controlled bone (ie the direction of the spline) to use as the direction for the curve.
---@field public bAutoCalculateSpline boolean @The number of points in the spline if we are specifying it directly
---@field public PointCount integer @The number of points in the spline if we are not auto-calculating
---@field public ControlPoints TArray<FTransform> @Transforms applied to spline points *
---@field public Roll number @Overall roll of the spline, applied on top of other rotations along the direction of the spline
---@field public TwistStart number @The twist of the start bone. Twist is interpolated along the spline according to Twist Blend.
---@field public TwistEnd number @The twist of the end bone. Twist is interpolated along the spline according to Twist Blend.
---@field public TwistBlend FAlphaBlend @How to interpolate twist along the length of the spline
---@field public Stretch number @The maximum stretch allowed when fitting bones to the spline. 0.0 means bones do not stretch their length, 1.0 means bones stretch to the length of the spline
---@field public Offset number @The distance along the spline from the start from which bones are constrained
local FAnimNode_SplineIK = {}
