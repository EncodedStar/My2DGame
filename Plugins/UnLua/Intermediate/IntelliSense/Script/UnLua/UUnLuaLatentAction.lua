---@class UUnLuaLatentAction : UObject
---@field public Callback Delegate
---@field private bTickEvenWhenPaused boolean
local UUnLuaLatentAction = {}

---@param bTickableWhenPaused boolean
function UUnLuaLatentAction:SetTickableWhenPaused(bTickableWhenPaused) end

---@return boolean
function UUnLuaLatentAction:GetTickableWhenPaused() end

