---Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets
---@class FAnimNode_LayeredBoneBlend : FAnimNode_Base
---@field public BasePose FPoseLink @The source pose
---@field public BlendPoses TArray<FPoseLink> @Each layer's blended pose
---@field public LayerSetup TArray<FInputBlendPose> @Configuration for the parts of the skeleton to blend for each layer. Allows certain parts of the tree to be blended out or omitted from the pose.
---@field public BlendWeights TArray<number> @The weights of each layer
---@field public bMeshSpaceRotationBlend boolean @Whether to blend bone rotations in mesh space or in local space
---@field public bMeshSpaceScaleBlend boolean @Whether to blend bone scales in mesh space or in local space
---@field public CurveBlendOption integer @How to blend the layers together
---@field public bBlendRootMotionBasedOnRootBone boolean @Whether to incorporate the per-bone blend weight of the root bone when lending root motion
---@field public LODThreshold integer @* Max LOD that this node is allowed to run * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index) * when the component LOD becomes 3, it will stop update/evaluate * currently transition would be issue and that has to be re-visited
---@field protected PerBoneBlendWeights TArray<FPerBoneBlendWeight> @This is buffer to serialize blend weight data for each joints This has to save with the corresponding SkeletopnGuid If not, it will rebuild in run-time
---@field protected SkeletonGuid FGuid
---@field protected VirtualBoneGuid FGuid
local FAnimNode_LayeredBoneBlend = {}
