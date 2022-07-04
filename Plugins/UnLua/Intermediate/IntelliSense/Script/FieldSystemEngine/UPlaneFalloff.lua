---PlaneFalloff
---@class UPlaneFalloff : UFieldNodeFloat
---@field public Magnitude number
---@field public MinRange number
---@field public MaxRange number
---@field public Default number
---@field public Distance number
---@field public Position FVector
---@field public Normal FVector
---@field public Falloff integer
local UPlaneFalloff = {}

---@param Magnitude number
---@param MinRange number
---@param MaxRange number
---@param Default number
---@param Distance number
---@param Position FVector
---@param Normal FVector
---@param Falloff integer
---@return UPlaneFalloff
function UPlaneFalloff:SetPlaneFalloff(Magnitude, MinRange, MaxRange, Default, Distance, Position, Normal, Falloff) end

