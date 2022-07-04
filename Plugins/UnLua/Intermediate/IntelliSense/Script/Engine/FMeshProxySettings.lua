---@class FMeshProxySettings
---@field public ScreenSize integer @Screen size of the resulting proxy mesh in pixels
---@field public VoxelSize number @Override when converting multiple meshes for proxy LOD merging. Warning, large geometry with small sampling has very high memory costs
---@field public MaterialSettings FMaterialProxySettings @Material simplification
---@field public MergeDistance number @Distance at which meshes should be merged together, this can close gaps like doors and windows in distant geometry
---@field public UnresolvedGeometryColor FColor @Base color assigned to LOD geometry that can't be associated with the source geometry: e.g. doors and windows that have been closed by the Merge Distance
---@field public MaxRayCastDist number @Override search distance used when discovering texture values for simplified geometry. Useful when non-zero Merge Distance setting generates new geometry in concave corners.
---@field public HardAngleThreshold number @Angle at which a hard edge is introduced between faces
---@field public LightMapResolution integer @Lightmap resolution
---@field public NormalCalculationMethod integer @Controls the method used to calculate the normal for the simplified geometry
---@field public LandscapeCullingPrecision integer @Level of detail of the landscape that should be used for the culling
---@field public bCalculateCorrectLODModel boolean @Determines whether or not the correct LOD models should be calculated given the source meshes and transition size
---@field public bOverrideVoxelSize boolean @If true, Spatial Sampling Distance will not be automatically computed based on geometry and you must set it directly
---@field public bOverrideTransferDistance boolean @Enable an override for material transfer distance
---@field public bUseHardAngleThreshold boolean @Enable the use of hard angle based vertex splitting
---@field public bComputeLightMapResolution boolean @If ticked will compute the lightmap resolution by summing the dimensions for each mesh included for merging
---@field public bRecalculateNormals boolean @Whether Simplygon should recalculate normals, otherwise the normals channel will be sampled from the original mesh
---@field public bUseLandscapeCulling boolean @Whether or not to use available landscape geometry to cull away invisible triangles
---@field public bAllowAdjacency boolean @Whether to allow adjacency buffers for tessellation in the merged mesh
---@field public bAllowDistanceField boolean @Whether to allow distance field to be computed for this mesh. Disable this to save memory if the merged mesh will only be rendered in the distance.
---@field public bReuseMeshLightmapUVs boolean @Whether to attempt to re-use the source mesh's lightmap UVs when baking the material or always generate a new set.
---@field public bCreateCollision boolean @Whether to generate collision for the merged mesh
---@field public bAllowVertexColors boolean @Whether to allow vertex colors saved in the merged mesh
---@field public bGenerateLightmapUVs boolean @Whether to generate lightmap uvs for the merged mesh
local FMeshProxySettings = {}
