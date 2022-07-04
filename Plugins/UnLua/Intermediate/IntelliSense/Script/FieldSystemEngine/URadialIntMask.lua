---URadialIntMask
---@class URadialIntMask : UFieldNodeInt
---@field public Radius number
---@field public Position FVector
---@field public InteriorValue integer
---@field public ExteriorValue integer
---@field public SetMaskCondition integer
local URadialIntMask = {}

---@param Radius number
---@param Position FVector
---@param InteriorValue integer
---@param ExteriorValue integer
---@param SetMaskConditionIn integer
---@return URadialIntMask
function URadialIntMask:SetRadialIntMask(Radius, Position, InteriorValue, ExteriorValue, SetMaskConditionIn) end

