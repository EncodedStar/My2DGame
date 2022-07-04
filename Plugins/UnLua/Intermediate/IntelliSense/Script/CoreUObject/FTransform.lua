---Transform composed of Quat/Translation/Scale.
---@class FTransform
---@field public Rotation FQuat @Rotation of this transformation, as a quaternion.
---@field public Translation FVector @Translation of this transformation, as a vector.
---@field public Scale3D FVector @3D scale (always applied in local space) as a vector.
local FTransform = {}
