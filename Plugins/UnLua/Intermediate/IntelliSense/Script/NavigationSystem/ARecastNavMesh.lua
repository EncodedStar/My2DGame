---@class ARecastNavMesh : ANavigationData
---@field public bDrawTriangleEdges boolean @should we draw edges of every navmesh's triangle
---@field public bDrawPolyEdges boolean @should we draw edges of every poly (i.e. not only border-edges)
---@field public bDrawFilledPolys boolean @if disabled skips filling drawn navmesh polygons
---@field public bDrawNavMeshEdges boolean @should we draw border-edges
---@field public bDrawTileBounds boolean @should we draw the tile boundaries
---@field public bDrawPathCollidingGeometry boolean @Draw input geometry passed to the navmesh generator.  Recommend disabling other geometry rendering via viewport showflags in editor.
---@field public bDrawTileLabels boolean
---@field public bDrawPolygonLabels boolean
---@field public bDrawDefaultPolygonCost boolean
---@field public bDrawLabelsOnPathNodes boolean
---@field public bDrawNavLinks boolean
---@field public bDrawFailedNavLinks boolean
---@field public bDrawClusters boolean @should we draw navmesh's clusters and cluster links. (Requires WITH_NAVMESH_CLUSTER_LINKS=1)
---@field public bDrawOctree boolean @should we draw edges of every navmesh's triangle
---@field public bDrawOctreeDetails boolean
---@field public bDrawMarkedForbiddenPolys boolean
---@field public bDistinctlyDrawTilesBeingBuilt boolean @if true, show currently rebuilding tiles differently when visualizing
---@field public DrawOffset number @vertical offset added to navmesh's debug representation for better readability
---@field public bFixedTilePoolSize boolean @if true, the NavMesh will allocate fixed size pool for tiles, should be enabled to support streaming
---@field public TilePoolSize integer @maximum number of tiles NavMesh can hold
---@field public TileSizeUU number @size of single tile, expressed in uu
---@field public CellSize number @horizontal size of voxelization cell
---@field public CellHeight number @vertical size of voxelization cell
---@field public AgentRadius number @Radius of smallest agent to traverse this navmesh
---@field public AgentHeight number @Size of the tallest agent that will path with this navmesh.
---@field public AgentMaxSlope number @The maximum slope (angle) that the agent can move on.
---@field public AgentMaxStepHeight number @Largest vertical step the agent can perform
---@field public MinRegionArea number @The minimum dimension of area. Areas smaller than this will be discarded
---@field public MergeRegionSize number @The size limit of regions to be merged with bigger regions (watershed partitioning only)
---@field public MaxSimplificationError number @How much navigable shapes can get simplified - the higher the value the more freedom
---@field public MaxSimultaneousTileGenerationJobsCount integer @Sets the limit for number of asynchronous tile generators running at one time, also used for some synchronous tasks
---@field public TileNumberHardLimit integer @Absolute hard limit to number of navmesh tiles. Be very, very careful while modifying it while     having big maps with navmesh. A single, empty tile takes 176 bytes and empty tiles are     allocated up front (subject to change, but that's where it's at now)     @@note TileNumberHardLimit is always rounded up to the closest power of 2
---@field public PolyRefTileBits integer
---@field public PolyRefNavPolyBits integer
---@field public PolyRefSaltBits integer
---@field public NavMeshOriginOffset FVector @Use this if you don't want your tiles to start at (0,0,0)
---@field public DefaultDrawDistance number @navmesh draw distance in game (always visible in editor)
---@field public DefaultMaxSearchNodes number @specifes default limit to A* nodes used when performing navigation queries.     Can be overridden by passing custom FNavigationQueryFilter
---@field public DefaultMaxHierarchicalSearchNodes number @specifes default limit to A* nodes used when performing hierarchical navigation queries.
---@field public RegionPartitioning integer @partitioning method for creating navmesh polys
---@field public LayerPartitioning integer @partitioning method for creating tile layers
---@field public RegionChunkSplits integer @number of chunk splits (along single axis) used for region's partitioning: ChunkyMonotone
---@field public LayerChunkSplits integer @number of chunk splits (along single axis) used for layer's partitioning: ChunkyMonotone
---@field public bSortNavigationAreasByCost boolean @Controls whether Navigation Areas will be sorted by cost before application     to navmesh during navmesh generation. This is relevant when there are     areas overlapping and we want to have area cost express area relevancy     as well. Setting it to true will result in having area sorted by cost,     but it will also increase navmesh generation cost a bit
---@field public bPerformVoxelFiltering boolean @controls whether voxel filtering will be applied (via FRecastTileGenerator::ApplyVoxelFilter).     Results in generated navmesh better fitting navigation bounds, but hits (a bit) generation performance
---@field public bMarkLowHeightAreas boolean @mark areas with insufficient free height above instead of cutting them out (accessible only for area modifiers using replace mode)
---@field public bUseExtraTopCellWhenMarkingAreas boolean @Expand the top of the area nav modifier's bounds by one cell height when applying to the navmesh.               If unset, navmesh on top of surfaces might not be marked by marking bounds flush with top surfaces (since navmesh is generated slightly above collision, depending on cell height).
---@field public bFilterLowSpanSequences boolean @if set, only single low height span will be allowed under valid one
---@field public bFilterLowSpanFromTileCache boolean @if set, only low height spans with corresponding area modifier will be stored in tile cache (reduces memory, can't modify without full tile rebuild)
---@field public bDoFullyAsyncNavDataGathering boolean @if set, navmesh data gathering will never happen on the game thread and will only be done on background threads
---@field public bUseBetterOffsetsFromCorners boolean @TODO: switch to disable new code from OffsetFromCorners if necessary - remove it later
---@field public bStoreEmptyTileLayers boolean @If set, tiles generated without any navmesh data will be marked to distinguish them from not generated / streamed out ones. Defaults to false.
---@field public bUseVirtualFilters boolean @Indicates whether default navigation filters will use virtual functions. Defaults to true.
---@field public bAllowNavLinkAsPathEnd boolean @If set, paths can end at navlink poly (not the ground one!)
---@field private bUseVoxelCache boolean @Cache rasterized voxels instead of just collision vertices/indices in navigation octree
---@field private TileSetUpdateInterval number @indicates how often we will sort navigation tiles to mach players position
---@field public HeuristicScale number @Euclidean distance heuristic scale used while pathfinding
---@field public VerticalDeviationFromGroundCompensation number @Value added to each search height to compensate for error between navmesh polys and walkable geometry
local ARecastNavMesh = {}

---
---@param Bounds FBox
---@param OldArea TSubclassOf_UNavArea_
---@param NewArea TSubclassOf_UNavArea_
---@param ReplaceLinks boolean @[opt] 
---@return boolean
function ARecastNavMesh:K2_ReplaceAreaInTileBounds(Bounds, OldArea, NewArea, ReplaceLinks) end

