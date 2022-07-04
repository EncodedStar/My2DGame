---Settings used to reduce a mesh.
---@class FMeshReductionSettings
---@field public PercentTriangles number @Percentage of triangles to keep. 1.0 = no reduction, 0.0 = no triangles.
---@field public PercentVertices number @Percentage of vertices to keep. 1.0 = no reduction, 0.0 = no vertices.
---@field public MaxDeviation number @The maximum distance in object space by which the reduced mesh may deviate from the original mesh.
---@field public PixelError number @The amount of error in pixels allowed for this LOD.
---@field public WeldingThreshold number @Threshold in object space at which vertices are welded together.
---@field public HardAngleThreshold number @Angle at which a hard edge is introduced between faces.
---@field public BaseLODModel integer
---@field public SilhouetteImportance integer @Higher values minimize change to border edges.
---@field public TextureImportance integer @Higher values reduce texture stretching.
---@field public ShadingImportance integer @Higher values try to preserve normals better.
---@field public bRecalculateNormals boolean
---@field public bGenerateUniqueLightmapUVs boolean
---@field public bKeepSymmetry boolean
---@field public bVisibilityAided boolean
---@field public bCullOccluded boolean
---@field public TerminationCriterion EStaticMeshReductionTerimationCriterion @The method to use when optimizing static mesh LODs
---@field public VisibilityAggressiveness integer @Higher values generates fewer samples
---@field public VertexColorImportance integer @Higher values minimize change to vertex color data.
local FMeshReductionSettings = {}
