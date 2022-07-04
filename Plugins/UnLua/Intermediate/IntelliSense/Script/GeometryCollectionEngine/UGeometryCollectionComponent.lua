---GeometryCollectionComponent
---@class UGeometryCollectionComponent : UMeshComponent
---@field public ChaosSolverActor AChaosSolverActor @Chaos RBD Solver override. Will use the world's default solver actor if null.
---@field public RestCollection UGeometryCollection
---@field public InitializationFields TArray<AFieldSystemActor>
---@field public Simulating boolean @When Simulating is enabled the Component will initialize its rigid bodies within the solver.
---@field public ObjectType EObjectStateTypeEnum @ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic.
---@field public EnableClustering boolean
---@field public ClusterGroupIndex integer @Maximum level for cluster breaks.
---@field public MaxClusterLevel integer @Maximum level for cluster breaks.
---@field public DamageThreshold TArray<number> @Damage threshold for clusters at different levels.
---@field public ClusterConnectionType EClusterConnectionTypeEnum
---@field public CollisionGroup integer
---@field public CollisionSampleFraction number @Uniform Friction
---@field public InitialVelocityType EInitialVelocityTypeEnum
---@field public InitialLinearVelocity FVector
---@field public InitialAngularVelocity FVector
---@field public PhysicalMaterialOverride UPhysicalMaterial
---@field public CacheParameters FGeomComponentCacheParameters
---@field public NotifyGeometryCollectionPhysicsStateChange MulticastDelegate
---@field public NotifyGeometryCollectionPhysicsLoadingStateChange MulticastDelegate
---@field public OnChaosBreakEvent MulticastDelegate
---@field public DesiredCacheTime number
---@field public CachePlayback boolean
---@field public OnChaosPhysicsCollision MulticastDelegate
---@field protected bNotifyBreaks boolean @Call SetNotifyBreaks to set this at runtime.
---@field protected bNotifyCollisions boolean @If true, this component will get Chaos-specific collision notification events (@@see IChaosNotifyHandlerInterface)
---@field protected bEnableReplication boolean @Per-instance override to enable/disable replication for the geometry collection
---@field protected bEnableAbandonAfterLevel boolean @Enables use of ReplicationAbandonClusterLevel to stop providing network updates to clients when the updated particle is of a level higher then specified.
---@field protected ReplicationAbandonClusterLevel integer @If replicating - the cluster level to stop sending corrections for geometry collection chunks. recommended for smaller leaf levels when the size of the objects means they are no longer gameplay relevant to cut down on required bandwidth to update a collection.
---@field protected RepData FGeometryCollectionRepData
---@field private SelectedBones TArray<integer>
---@field private HighlightedBones TArray<integer>
---@field private DummyBodySetup UBodySetup @Temporary storage for body setup in order to initialise a dummy body instance
---@field private EditorActor AActor @Tracked editor actor that owns the original component so we can write back recorded caches from PIE.
local UGeometryCollectionComponent = {}

---Changes whether or not this component will get future break notifications.
---@param bNewNotifyBreaks boolean
function UGeometryCollectionComponent:SetNotifyBreaks(bNewNotifyBreaks) end

---@param Enabled boolean
---@param Target EGeometryCollectionPhysicsTypeEnum
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UGeometryCollectionComponent:ApplyPhysicsField(Enabled, Target, MetaData, Field) end

---@param Radius number
---@param Position FVector
function UGeometryCollectionComponent:ApplyKinematicField(Radius, Position) end

