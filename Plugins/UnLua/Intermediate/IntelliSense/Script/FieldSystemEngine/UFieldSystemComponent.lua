---FieldSystemComponent
---@class UFieldSystemComponent : UPrimitiveComponent
---@field public FieldSystem UFieldSystem
---@field public SupportedSolvers TArray<TSoftObjectPtr<AChaosSolverActor>> @List of solvers this field will affect. An empty list makes this field affect all solvers.
local UFieldSystemComponent = {}

---ClearFieldSystem
function UFieldSystemComponent:ResetFieldSystem() end

---ApplyUniformVectorFalloffForce
---  This function will dispatch a command to the physics thread to apply
---  a linear force in a uniform direction. The force vector is weaker as
---  it moves away from the center.
---  @@param Enabled : Is this force enabled for evaluation.
---  @@param Position : The origin point of the force
---  @@param Direction : The direction of the linear force
---  @@param Radius : Radial influence from the position, positions further away are weaker.
---  @@param Magnitude : The size of the linear force.
---@param Enabled boolean
---@param Position FVector
---@param Direction FVector
---@param Radius number
---@param Magnitude number
function UFieldSystemComponent:ApplyUniformVectorFalloffForce(Enabled, Position, Direction, Radius, Magnitude) end

---ApplyStrainField
---  This function will dispatch a command to the physics thread to apply
---  a strain field on a clustered set of geometry. This is used to trigger a
---  breaking even within the solver.
---  @@param Enabled : Is this force enabled for evaluation.
---  @@param Position : The origin point of the force
---  @@param Radius : Radial influence from the position, positions further away are weaker.
---  @@param Magnitude : The size of the linear force.
---  @@param Iterations : Levels of evaluation into the cluster hierarchy.
---@param Enabled boolean
---@param Position FVector
---@param Radius number
---@param Magnitude number
---@param Iterations integer
function UFieldSystemComponent:ApplyStrainField(Enabled, Position, Radius, Magnitude, Iterations) end

---ApplyStayDynamicField
---  This function will dispatch a command to the physics thread to apply
---  a kinematic to dynamic state change for the particles within the field.
---  @@param Enabled : Is this force enabled for evaluation.
---  @@param Position : The location of the command
---  @@param Radius : Radial influence from the position
---@param Enabled boolean
---@param Position FVector
---@param Radius number
function UFieldSystemComponent:ApplyStayDynamicField(Enabled, Position, Radius) end

---ApplyRadialVectorFalloffForce
---  This function will dispatch a command to the physics thread to apply
---  a linear force from a position in space. The force vector is weaker as
---  it moves away from the center.
---  @@param Enabled : Is this force enabled for evaluation.
---  @@param Position : The origin point of the force
---  @@param Radius : Radial influence from the position, positions further away are weaker.
---  @@param Magnitude : The size of the linear force.
---@param Enabled boolean
---@param Position FVector
---@param Radius number
---@param Magnitude number
function UFieldSystemComponent:ApplyRadialVectorFalloffForce(Enabled, Position, Radius, Magnitude) end

---ApplyRadialForce
---  This function will dispatch a command to the physics thread to apply
---  a linear force that points away from a position.
---  @@param Enabled : Is this force enabled for evaluation.
---  @@param Position : The origin point of the force
---  @@param Magnitude : The size of the linear force.
---@param Enabled boolean
---@param Position FVector
---@param Magnitude number
function UFieldSystemComponent:ApplyRadialForce(Enabled, Position, Magnitude) end

---ApplyPhysicsField
---  This function will dispatch a command to the physics thread to apply
---  a generic evaluation of a user defined field network.
---  @@param Enabled : Is this force enabled for evaluation.
---  @@param EFieldPhysicsType : Type of field supported by the solver.
---  @@param UFieldSystemMetaData : Meta data used to assist in evaluation
---  @@param UFieldNodeBase : Base evaluation node for the field network.
---@param Enabled boolean
---@param Target integer
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UFieldSystemComponent:ApplyPhysicsField(Enabled, Target, MetaData, Field) end

---ApplyLinearForce
---  This function will dispatch a command to the physics thread to apply
---  a uniform linear force on each particle within the simulation.
---  @@param Enabled : Is this force enabled for evaluation.
---  @@param Direction : The direction of the linear force
---  @@param Magnitude : The size of the linear force.
---@param Enabled boolean
---@param Direction FVector
---@param Magnitude number
function UFieldSystemComponent:ApplyLinearForce(Enabled, Direction, Magnitude) end

---ApplyPhysicsField
---@param Enabled boolean
---@param Target integer
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UFieldSystemComponent:AddFieldCommand(Enabled, Target, MetaData, Field) end

