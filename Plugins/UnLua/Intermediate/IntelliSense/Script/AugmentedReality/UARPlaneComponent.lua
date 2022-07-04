---@class UARPlaneComponent : UARComponent
---@field protected ReplicatedPayload FARPlaneUpdatePayload
local UARPlaneComponent = {}

---@param NewDebugMode EPlaneComponentDebugMode
function UARPlaneComponent.SetPlaneComponentDebugMode(NewDebugMode) end

---@param InColors TMap_EARObjectClassification__FLinearColor_
function UARPlaneComponent.SetObjectClassificationDebugColors(InColors) end

---@return TMap_EARObjectClassification__FLinearColor_
function UARPlaneComponent.GetObjectClassificationDebugColors() end

