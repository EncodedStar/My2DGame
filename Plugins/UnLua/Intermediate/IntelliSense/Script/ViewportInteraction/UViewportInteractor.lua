---Represents the interactor in the world
---@class UViewportInteractor : UObject
---@field protected KeyToActionMap TMap<FKey, FViewportActionKeyInput> @Mapping of raw keys to actions
---@field protected WorldInteraction UViewportWorldInteraction @The owning world interaction
---@field protected OtherInteractor UViewportInteractor @The paired interactor by the world interaction
local UViewportInteractor = {}

---Sets the current gizmo filter mode used for Interaction
---@param newFilter EHitResultGizmoFilterMode
function UViewportInteractor:SetHitResultGizmoFilterMode(newFilter) end

---Sets the current dragging mode for this interactor
---@param NewDraggingMode EViewportInteractionDraggingMode
function UViewportInteractor:SetDraggingMode(NewDraggingMode) end

---Sets if the interactor can carry an object
---@param bInCanCarry boolean
function UViewportInteractor:SetCanCarry(bInCanCarry) end

---If the interactor laser is currently hovering over a gizmo handle
---@return boolean
function UViewportInteractor:IsHoveringOverGizmo() end

---Gets the world interaction
---@return UViewportWorldInteraction
function UViewportInteractor:GetWorldInteraction() end

---Creates a hand transform and forward vector for a laser pointer for a given hand
---@param OutHandTransform FTransform @[out] 
---@param OutForwardVector FVector @[out] 
---@return boolean
function UViewportInteractor:GetTransformAndForwardVector(OutHandTransform, OutForwardVector) end

---Gets the world transform of this interactor
---@return FTransform
function UViewportInteractor:GetTransform() end

---Gets the hand transform of the interactor, in the local tracking space
---@return FTransform
function UViewportInteractor:GetRoomSpaceTransform() end

---Gets the paired interactor assigned by the world interaction, can return null when there is no other interactor
---@return UViewportInteractor
function UViewportInteractor:GetOtherInteractor() end

---Gets the last world transform of this interactor
---@return FTransform
function UViewportInteractor:GetLastTransform() end

---Gets the last hand transform of the interactor, in the local tracking space
---@return FTransform
function UViewportInteractor:GetLastRoomSpaceTransform() end

---Gets the start and end point of the laser pointer for the specified hand
---@param LaserPointerStart FVector @[out] 
---@param LaserPointerEnd FVector @[out] 
---@param bEvenIfBlocked boolean @[opt] 
---@param LaserLengthOverride number @[opt] 
---@return boolean
function UViewportInteractor:GetLaserPointer(LaserPointerStart, LaserPointerEnd, bEvenIfBlocked, LaserLengthOverride) end

---Gets the interactor laser hover location
---@return FVector
function UViewportInteractor:GetHoverLocation() end

---Gets current gizmo filter mode used for Interaction
---@return EHitResultGizmoFilterMode
function UViewportInteractor:GetHitResultGizmoFilterMode() end

---Gets the current interactor data dragging mode
---@return EViewportInteractionDraggingMode
function UViewportInteractor:GetDraggingMode() end

---Gets if the interactor can carry an object
---@return boolean
function UViewportInteractor:CanCarry() end

