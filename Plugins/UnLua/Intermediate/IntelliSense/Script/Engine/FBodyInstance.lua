---Container for a physics representation of an object
---@class FBodyInstance : FBodyInstanceCore
---@field private ObjectType integer @Enum indicating what type of object this should be considered as when it moves
---@field private CollisionEnabled integer @Type of collision enabled.       No Collision      : Will not create any representation in the physics engine. Cannot be used for spatial queries (raycasts, sweeps, overlaps) or simulation (rigid body, constraints). Best performance possible (especially for moving objects)       Query Only        : Only used for spatial queries (raycasts, sweeps, and overlaps). Cannot be used for simulation (rigid body, constraints). Useful for character movement and things that do not need physical simulation. Performance gains by keeping data out of simulation tree.       Physics Only      : Only used only for physics simulation (rigid body, constraints). Cannot be used for spatial queries (raycasts, sweeps, overlaps). Useful for jiggly bits on characters that do not need per bone detection. Performance gains by keeping data out of query tree       Collision Enabled : Can be used for both spatial queries (raycasts, sweeps, overlaps) and simulation (rigid body, constraints).
---@field public SleepFamily ESleepFamily @The set of values used in considering when put this body to sleep.
---@field public DOFMode integer @[Physx Only] Locks physical movement along specified axis.
---@field public bUseCCD boolean @If true Continuous Collision Detection (CCD) will be used for this component
---@field public bIgnoreAnalyticCollisions boolean @If true ignore analytic collisions and treat objects as a general implicit surface
---@field public bNotifyRigidBodyCollision boolean @Should 'Hit' events fire when this object collides during physics simulation.
---@field public bLockTranslation boolean @[Physx Only] When a Locked Axis Mode is selected, will lock translation on the specified axis
---@field public bLockRotation boolean @[Physx Only] When a Locked Axis Mode is selected, will lock rotation to the specified axis
---@field public bLockXTranslation boolean @[Physx Only] Lock translation along the X-axis
---@field public bLockYTranslation boolean @[Physx Only] Lock translation along the Y-axis
---@field public bLockZTranslation boolean @[Physx Only] Lock translation along the Z-axis
---@field public bLockXRotation boolean @[Physx Only] Lock rotation about the X-axis
---@field public bLockYRotation boolean @[Physx Only] Lock rotation about the Y-axis
---@field public bLockZRotation boolean @[Physx Only] Lock rotation about the Z-axis
---@field public bOverrideMaxAngularVelocity boolean @Override the default max angular velocity
---@field protected bOverrideMaxDepenetrationVelocity boolean @[PhysX Only] Whether this body instance has its own custom MaxDepenetrationVelocity
---@field protected bOverrideWalkableSlopeOnInstance boolean @Whether this instance of the object has its own custom walkable slope override setting.
---@field protected bInterpolateWhenSubStepping boolean @Internal flag to allow us to quickly check whether we should interpolate when substepping e.g. kinematic bodies that are QueryOnly do not need to interpolate as we will not be querying them at a sub-position. This is complicated by welding, where multiple the CollisionEnabled flag of the root must be considered.
---@field private CollisionProfileName string @Collision Profile Name *
---@field public PositionSolverIterationCount integer @[PhysX Only] This physics body's solver iteration count for position. Increasing this will be more CPU intensive, but better stabilized.
---@field public VelocitySolverIterationCount integer @[PhysX Only] This physics body's solver iteration count for velocity. Increasing this will be more CPU intensive, but better stabilized.
---@field private CollisionResponses FCollisionResponse @Custom Channels for Responses
---@field protected MaxDepenetrationVelocity number @[PhysX Only] The maximum velocity used to depenetrate this object
---@field protected MassInKgOverride number @Mass of the body in KG. By default we compute this based on physical material and mass scale.
---@field public LinearDamping number @'Drag' force added to reduce linear movement
---@field public AngularDamping number @'Drag' force added to reduce angular movement
---@field public CustomDOFPlaneNormal FVector @Locks physical movement along a custom plane for a given normal.
---@field public COMNudge FVector @User specified offset for the center of mass of this object, from the calculated location
---@field public MassScale number @Per-instance scaling of mass
---@field public InertiaTensorScale FVector @Per-instance scaling of inertia (bigger number means  it'll be harder to rotate)
---@field protected WalkableSlopeOverride FWalkableSlopeOverride @Custom walkable slope override setting for this instance.
---@field protected PhysMaterialOverride UPhysicalMaterial @Allows you to override the PhysicalMaterial to use for simple collision on this body.
---@field public MaxAngularVelocity number @The maximum angular velocity for this instance [degrees/s]
---@field public CustomSleepThresholdMultiplier number @If the SleepFamily is set to custom, multiply the natural sleep threshold by this amount. A higher number will cause the body to sleep sooner.
---@field public StabilizationThresholdMultiplier number @Stabilization factor for this body if Physics stabilization is enabled. A higher number will cause more aggressive stabilization at the risk of loss of momentum at low speeds. A value of 0 will disable stabilization for this body.
---@field public PhysicsBlendWeight number @Provide appropriate interface for doing this instead of allowing BlueprintReadWrite *
local FBodyInstance = {}
