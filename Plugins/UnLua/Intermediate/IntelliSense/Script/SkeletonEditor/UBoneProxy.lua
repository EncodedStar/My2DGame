---Proxy object used to display/edit bone transforms
---@class UBoneProxy : UObject
---@field public BoneName string @The name of the bone we have selected
---@field public Location FVector @Bone location
---@field public Rotation FRotator @Bone rotation
---@field public Scale FVector @Bone scale
---@field public ReferenceLocation FVector @Bone reference location (local)
---@field public ReferenceRotation FRotator @Bone reference rotation (local)
---@field public ReferenceScale FVector @Bone reference scale (local)
---@field public SkelMeshComponent TWeakObjectPtr<UDebugSkelMeshComponent> @The skeletal mesh component we glean our transform data from
local UBoneProxy = {}

