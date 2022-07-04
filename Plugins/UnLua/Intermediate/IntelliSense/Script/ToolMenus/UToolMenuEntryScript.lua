---@class UToolMenuEntryScript : UObject
---@field public Data FToolMenuEntryScriptData
local UToolMenuEntryScript = {}

function UToolMenuEntryScript:RegisterMenuEntry() end

---@param OwnerName string
---@param Menu string
---@param Section string
---@param Name string
---@param Label string
---@param ToolTip string
function UToolMenuEntryScript:InitEntry(OwnerName, Menu, Section, Name, Label, ToolTip) end

