---USkeleton : that links between mesh and animation
---        - Bone hierarchy for animations
---        - Bone/track linkup between mesh and animation
---        - Retargetting related
---        - Mirror table
---@class USkeleton : UObject
---@field protected BoneTree TArray<FBoneNode> @Skeleton bone tree - each contains name and parent index*
---@field protected VirtualBoneGuid FGuid @Guid for virtual bones. Separate so that we don't have to dirty the original guid when only changing virtual bones
---@field protected VirtualBones TArray<FVirtualBone> @Array of this skeletons virtual bones. These are new bones are links between two existing bones and are baked into all the skeletons animations
---@field public Sockets TArray<USkeletalMeshSocket> @Array of named socket locations, set up in editor and used as a shortcut instead of specifying everything explicitly to AttachComponent in the SkeletalMeshComponent.
---@field protected SmartNames FSmartNameContainer @Container for smart name mappings
---@field public BlendProfiles TArray<UBlendProfile> @List of blend profiles available in this skeleton
---@field private SlotGroups TArray<FAnimSlotGroup> @serialized slot groups and slot names.
---@field private PreviewSkeletalMesh TSoftObjectPtr<USkeletalMesh> @The default skeletal mesh to use when previewing this skeleton
---@field private AdditionalPreviewSkeletalMeshes TSoftObjectPtr<UDataAsset> @The additional skeletal meshes to use when previewing this skeleton
---@field private RigConfig FRigConfiguration
---@field public AnimationNotifies TArray<string> @AnimNotifiers that has been created. Right now there is no delete step for this, but in the future we'll supply delete*
---@field public PreviewAttachedAssetContainer FPreviewAssetAttachContainer @Attached assets component for this skeleton
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local USkeleton = {}

