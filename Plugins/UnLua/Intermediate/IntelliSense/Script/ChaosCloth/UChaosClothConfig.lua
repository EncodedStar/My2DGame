---Holds initial, asset level config for clothing actors. // Hiding categories that will be used in the future
---@class UChaosClothConfig : UClothConfigCommon
---@field public MassMode EClothMassMode @How cloth particle mass is determined -    Uniform Mass: Every particle's mass will be set to the value specified in the UniformMass setting. Mostly to avoid as it can cause some serious issues with irregular tessellations. -    Total Mass: The total mass is distributed equally over all the particles. Useful when referencing a specific garment size and feel. -    Density: A constant mass density is used. Density is usually the preferred way of setting mass since it allows matching real life materials' density values.
---@field public UniformMass number @The value used when the Mass Mode is set to Uniform Mass
---@field public TotalMass number @The value used when Mass Mode is set to TotalMass
---@field public Density number @The value used when Mass Mode is set to Density. Melton Wool: 0.7 Heavy leather: 0.6 Polyurethane: 0.5 Denim: 0.4 Light leather: 0.3 Cotton: 0.2 Silk: 0.1
---@field public MinPerParticleMass number @This is a lower bound to cloth particle masses.
---@field public EdgeStiffness number @The Stiffness of the Edge constraints, only use lower than 1 values for very stretchy materials. Increase the iteration count for stiffer materials.
---@field public BendingStiffness number @The Stiffness of the bending constraints. Increase the iteration count for stiffer materials.
---@field public bUseBendingElements boolean @Enable the more accurate bending element constraints instead of the faster cross-edge spring constraints used for controlling bending stiffness.
---@field public AreaStiffness number @The stiffness of the area preservation constraints. Increase the iteration count for stiffer materials.
---@field public VolumeStiffness number @The stiffness of the volume preservation constraints.
---@field public StrainLimitingStiffness number @The strain limiting stiffness of the long range attachment constraints (aka tether stiffness). The long range attachment connects each of the cloth particles to its closest fixed point with a spring constraint. This can be used to compensate for a lack of stretch resistance when the iterations count is kept low for performance reasons. Can lead to an unnatural pull string puppet like behavior. Use 0 to disable.
---@field public LimitScale number @The limit scale of the long range attachment constraints (aka tether limit).
---@field public TetherMode EChaosClothTetherMode @How the long range attachment tethers are created, and how their length is updated. This determines how fast and accurate both the tether initialization and simulation runs. -    Fast Tether Fast Length: Use fast euclidean methods to both setup the tethers and calculate their lengths. Fast initialization and simulation times, but is very prone to artifacts. -    Accurate Tether Fast Length: Use the accurate geodesic method to setup the tethers and a fast euclidean method to calculate their lengths. Slow initialization times and fast simulation times, but can still be prone to artifacts. -    Accurate Tether Accurate Length: Use accurate geodesic method to both setup the tethers and calculate their lengths. Slow initialization and simulation times, but this is the most accurate setting showing the less artifacts.
---@field public ShapeTargetStiffness number @The stiffness of the shape target constraints
---@field public CollisionThickness number @The radius of cloth points when considering collisions against collider shapes.
---@field public FrictionCoefficient number @Friction coefficient for cloth - collider interaction.
---@field public bUseSelfCollisions boolean @Enable self collision.
---@field public SelfCollisionThickness number @The radius of the spheres used in self collision
---@field public bUseLegacyBackstop boolean @This parameter is automatically set by the migration code. It can be overridden here to use the old way of authoring the backstop distances. The legacy backstop requires the sphere radius to be included within the painted distance mask, making it difficult to author correctly. In this case the backstop distance is the distance from the animated mesh to the center of the corresponding backstop collision sphere. The non legacy backstop automatically adds the matching sphere's radius to the distance calculations at runtime to make for a simpler authoring of the backstop distances. In this case the backstop distance is the distance from the animated mesh to the surface of the backstop collision sphere. In both cases, a positive backstop distance goes against the corresponding animated mesh's normal, and a negative backstop distance goes along the corresponding animated mesh's normal.
---@field public DampingCoefficient number @The amount of damping applied to the cloth velocities.
---@field public bUsePointBasedWindModel boolean @This parameter is automatically set by the migration code. It can be overridden here to use the old deprecated "Legacy" wind model in order to preserve behavior with previous versions of the engine. The old wind model is not an accurate aerodynamic model and as such should be avoided. Being point based, it doesn't take into account the surface area that gets hit by the wind. Using this model makes the simulation slightly slower, disables the aerodynamically accurate wind model, and prevents the cloth to interact with the surrounding environment (air, water, ...etc.) even when there is no wind.
---@field public DragCoefficient number @The aerodynamic coefficient of drag applying on each particle.
---@field public LiftCoefficient number @The aerodynamic coefficient of lift applying on each particle.
---@field public bUseGravityOverride boolean @Use the config gravity value instead of world gravity.
---@field public GravityScale number @Scale factor applied to the world gravity and also to the clothing simulation interactor gravity. Does not affect the gravity if set using the override below.
---@field public Gravity FVector @The gravitational acceleration vector [cm/s^2]
---@field public AnimDriveSpringStiffness number @The strength of the constraint driving the cloth towards the animated goal mesh.
---@field public LinearVelocityScale FVector @The amount of linear velocities sent to the local cloth space from the reference bone (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).
---@field public AngularVelocityScale number @The amount of angular velocities sent to the local cloth space from the reference bone (the closest bone to the root on which the cloth section has been skinned, or the root itself if the cloth isn't skinned).
---@field public bUseTetrahedralConstraints boolean @Enable tetrahedral constraints.
---@field public bUseThinShellVolumeConstraints boolean @Enable thin shell volume constraints.
---@field public bUseContinuousCollisionDetection boolean @Enable continuous collision detection.
local UChaosClothConfig = {}

