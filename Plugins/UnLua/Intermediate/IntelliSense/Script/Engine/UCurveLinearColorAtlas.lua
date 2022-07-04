---Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor
---@class UCurveLinearColorAtlas : UTexture2D
---@field public bIsDirty boolean
---@field public TextureSize integer
---@field public GradientCurves TArray<UCurveLinearColor> @Size of the lookup textures
local UCurveLinearColorAtlas = {}

---@param InCurve UCurveLinearColor
---@param Position number @[out] 
---@return boolean
function UCurveLinearColorAtlas:GetCurvePosition(InCurve, Position) end

