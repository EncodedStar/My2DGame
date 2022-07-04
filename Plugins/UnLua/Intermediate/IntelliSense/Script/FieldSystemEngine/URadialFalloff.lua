---RadialFalloff
---@class URadialFalloff : UFieldNodeFloat
---@field public Magnitude number
---@field public MinRange number
---@field public MaxRange number
---@field public Default number
---@field public Radius number
---@field public Position FVector
---@field public Falloff integer
local URadialFalloff = {}

---@param Magnitude number
---@param MinRange number
---@param MaxRange number
---@param Default number
---@param Radius number
---@param Position FVector
---@param Falloff integer
---@return URadialFalloff
function URadialFalloff:SetRadialFalloff(Magnitude, MinRange, MaxRange, Default, Radius, Position, Falloff) end

