---UOperatorField
---@class UOperatorField : UFieldNodeBase
---@field public Magnitude number
---@field public RightField UFieldNodeBase
---@field public LeftField UFieldNodeBase
---@field public Operation integer
local UOperatorField = {}

---@param Magnitude number
---@param RightField UFieldNodeBase
---@param LeftField UFieldNodeBase
---@param Operation integer
---@return UOperatorField
function UOperatorField:SetOperatorField(Magnitude, RightField, LeftField, Operation) end

