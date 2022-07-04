---BoxFalloff
---@class UBoxFalloff : UFieldNodeFloat
---@field public Magnitude number
---@field public MinRange number
---@field public MaxRange number
---@field public Default number
---@field public Transform FTransform
---@field public Falloff integer
local UBoxFalloff = {}

---@param Magnitude number
---@param MinRange number
---@param MaxRange number
---@param Default number
---@param Transform FTransform
---@param Falloff integer
---@return UBoxFalloff
function UBoxFalloff:SetBoxFalloff(Magnitude, MinRange, MaxRange, Default, Transform, Falloff) end

