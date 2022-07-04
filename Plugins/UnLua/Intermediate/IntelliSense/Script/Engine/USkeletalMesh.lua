---SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.
---Skeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.
---The 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).
---@class USkeletalMesh : UStreamableRenderAsset
---@field public MeshEditorDataObject USkeletalMeshEditorData @* This editor data asset is save in the same package has the skeletalmesh, the editor data asset is always loaded. * If the skeletal mesh is rename the editor data asset will also be rename: the name is SkeletalMeshName_USkeletalMeshEditorData * If the skeletal mesh is duplicate the editor data asset will also be duplicate * There is only one editor data asset possible per skeletalmesh. * The reason we store the editor data in a separate asset is because the size of it can be very big and affect the editor performance. (undo/redo transactions)
---@field public Skeleton USkeleton @Skeleton of this skeletal mesh *
---@field private ImportedBounds FBoxSphereBounds @Original imported mesh bounds
---@field private ExtendedBounds FBoxSphereBounds @Bounds extended by user values below
---@field protected PositiveBoundsExtension FVector @Bound extension values in addition to imported bound in the positive direction of XYZ,     positive value increases bound size and negative value decreases bound size.     The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound].
---@field protected NegativeBoundsExtension FVector @Bound extension values in addition to imported bound in the negative direction of XYZ,     positive value increases bound size and negative value decreases bound size.     The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound].
---@field public Materials TArray<FSkeletalMaterial> @List of materials applied to this mesh.
---@field public SkelMirrorTable TArray<FBoneMirrorInfo> @List of bones that should be mirrored.
---@field private LODInfo TArray<FSkeletalMeshLODInfo> @Struct containing information for each LOD level, such as materials to use, and when use the LOD.
---@field public MinLod FPerPlatformInt @Minimum LOD to render. Can be overridden per component as well as set here for all mesh instances here
---@field public DisableBelowMinLodStripping FPerPlatformBool @when true all lods below minlod will still be cooked
---@field public bOverrideLODStreamingSettings boolean @Whether this skeletal mesh overrides default LOD streaming settings.
---@field public bSupportLODStreaming FPerPlatformBool @Whether we can stream the LODs of this mesh
---@field public MaxNumStreamedLODs FPerPlatformInt @Maximum number of LODs that can be streamed
---@field public MaxNumOptionalLODs FPerPlatformInt @Maximum number of LODs below min LOD level that can be saved to optional pak (currently, need to be either 0 or > num of LODs below MinLod)
---@field public LODSettings USkeletalMeshLODSettings
---@field public DefaultAnimatingRig TSoftObjectPtr<UObject> @The Default Control Rig To Animate with when used in Sequnecer.
---@field public SkelMirrorAxis integer
---@field public SkelMirrorFlipAxis integer
---@field public bHasBeenSimplified boolean @true if this mesh has ever been simplified with Simplygon.
---@field public bHasVertexColors boolean @Whether or not the mesh has vertex colors
---@field public bEnablePerPolyCollision boolean @Uses skinned data for collision data. Per poly collision cannot be used for simulation, in most cases you are better off using the physics asset
---@field public VertexColorGuid FGuid @The guid to compute the ddc key, it must be dirty when we change the vertex color.
---@field public BodySetup UBodySetup @Physics data for the per poly collision case. In 99% of cases you will not need this and are better off using simple ragdoll collision (physics asset)
---@field public PhysicsAsset UPhysicsAsset @Physics and collision information used for this USkeletalMesh, set up in Physics Asset Editor. This is used for per-bone hit detection, accurate bounding box calculation and ragdoll physics for example.
---@field public ShadowPhysicsAsset UPhysicsAsset @Physics asset whose shapes will be used for shadowing when components have bCastCharacterCapsuleDirectShadow or bCastCharacterCapsuleIndirectShadow enabled. Only spheres and sphyl shapes in the physics asset can be supported.  The more shapes used, the higher the cost of the capsule shadows will be.
---@field public NodeMappingData TArray<UNodeMappingContainer> @Mapping data that is saved
---@field public AssetImportData UAssetImportData @Importing data and options used for this mesh
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
---@field public bHasCustomDefaultEditorCamera boolean @Should we use a custom camera transform when viewing this mesh in the tools
---@field public DefaultEditorCameraLocation FVector @Default camera location
---@field public DefaultEditorCameraRotation FRotator @Default camera rotation
---@field public DefaultEditorCameraLookAt FVector @Default camera look at
---@field public DefaultEditorCameraOrthoZoom number @Default camera ortho zoom
---@field public PreviewAttachedAssetContainer FPreviewAssetAttachContainer @Attached assets component for this mesh
---@field public MorphTargets TArray<UMorphTarget>
---@field public FloorOffset number @Height offset for the floor mesh in the editor
---@field public RetargetBasePose TArray<FTransform> @This is buffer that saves pose that is used by retargeting
---@field public PostProcessAnimBlueprint TSubclassOf<UAnimInstance> @Animation Blueprint class to run as a post process for this mesh. This blueprint will be ran before physics, but after the main anim instance for any skeletal mesh component using this mesh.
---@field public MeshClothingAssets TArray<UClothingAssetBase> @Clothing assets imported to this mesh. May or may not be in use currently on the mesh. Ordering not guaranteed, use the provided getters to access elements in this array whenever possible
---@field protected SamplingInfo FSkeletalMeshSamplingInfo @Defines if and how to generate a set of precomputed data allowing targeted and fast sampling of this mesh on the CPU.
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field private Sockets TArray<USkeletalMeshSocket> @Array of named socket locations, set up in editor and used as a shortcut instead of specifying everything explicitly to AttachComponent in the SkeletalMeshComponent.
---@field protected SkinWeightProfiles TArray<FSkinWeightProfileInfo> @Set of skin weight profiles associated with this mesh
local USkeletalMesh = {}

---@param InLODSettings USkeletalMeshLODSettings
function USkeletalMesh:SetLODSettings(InLODSettings) end

---@param InAnimatingRig TSoftObjectPtr_UObject_
function USkeletalMesh:SetDefaultAnimatingRig(InAnimatingRig) end

---Returns the number of sockets available. Both on this mesh and it's skeleton.
---@return integer
function USkeletalMesh:NumSockets() end

---Returns the list of all morph targets of this skeletal mesh
---@return TArray_string_
function USkeletalMesh:K2_GetAllMorphTargetNames() end

---Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true
---disabled sections will defer to correspond sections to see if they use cloth (non-cloth sections
---are disabled and another section added when cloth is enabled, using this flag allows for a check
---on the original section to succeed)
---@param InSectionIndex integer
---@param bCheckCorrespondingSections boolean @[opt] 
---@return boolean
function USkeletalMesh:IsSectionUsingCloth(InSectionIndex, bCheckCorrespondingSections) end

---Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons.
---@param Index integer
---@return USkeletalMeshSocket
function USkeletalMesh:GetSocketByIndex(Index) end

---@param SourceAsset UBlueprint
---@return UNodeMappingContainer
function USkeletalMesh:GetNodeMappingContainer(SourceAsset) end

---Get the original imported bounds of the skel mesh
---@return FBoxSphereBounds
function USkeletalMesh:GetImportedBounds() end

---@return TSoftObjectPtr_UObject_
function USkeletalMesh:GetDefaultAnimatingRig() end

---Get the extended bounds of this mesh (imported bounds plus bounds extension)
---@return FBoxSphereBounds
function USkeletalMesh:GetBounds() end

---Find a socket object and asscociated info in this SkeletalMesh by name.
---Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.
---Also returns the index for the socket allowing for future fast access via GetSocketByIndex()
---Also rteturns the socket loca transform and the bone index (if any)
---@param InSocketName string
---@param OutTransform FTransform @[out] 
---@param OutBoneIndex integer @[out] 
---@param OutIndex integer @[out] 
---@return USkeletalMeshSocket
function USkeletalMesh:FindSocketInfo(InSocketName, OutTransform, OutBoneIndex, OutIndex) end

---Find a socket object in this SkeletalMesh by name.
---Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.
---Also returns the index for the socket allowing for future fast access via GetSocketByIndex()
---@param InSocketName string
---@param OutIndex integer @[out] 
---@return USkeletalMeshSocket
function USkeletalMesh:FindSocketAndIndex(InSocketName, OutIndex) end

---Find a socket object in this SkeletalMesh by name.
---Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.
---@param InSocketName string
---@return USkeletalMeshSocket
function USkeletalMesh:FindSocket(InSocketName) end

