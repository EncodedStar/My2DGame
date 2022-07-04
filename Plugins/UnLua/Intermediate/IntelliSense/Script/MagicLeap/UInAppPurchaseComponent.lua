---The CameraCaptureComponent provides access to and maintains state for camera capture functionality.
---The connection to the device's camera is managed internally.  Users of this component
---are able to asynchronously capture camera images and footage to file.  Alternatively,
---a camera image can be captured directly to texture.  The user need only make the relevant
---asynchronous call and then register the appropriate success/fail event handlers for the
---operation's completion.
---@class UInAppPurchaseComponent : UActorComponent
---@field public InAppPurchaseLogMessage MulticastDelegate
---@field public GetItemsDetailsSuccess MulticastDelegate
---@field public GetItemsDetailsFailure MulticastDelegate
---@field public PurchaseConfirmationSuccess MulticastDelegate
---@field public PurchaseConfirmationFailure MulticastDelegate
---@field public GetPurchaseHistorySuccess MulticastDelegate
---@field public GetPurchaseHistoryFailure MulticastDelegate
local UInAppPurchaseComponent = {}

---Attempts to purchase the specified item.
---                reported back to the calling blueprint via the FPurchaseConfirmationSuccess or FPurchaseConfirmationFailure event handlers.
---@param ItemDetails FPurchaseItemDetails
---@return boolean
function UInAppPurchaseComponent:TryPurchaseItemAsync(ItemDetails) end

---Attempts to retrieve the app's purchase history.
---                operation is reported back to the calling blueprint via the FGetPurchaseHistorySuccess or FGetPurchaseHistoryFailure event handlers.
---@param InNumPages integer
---@return boolean
function UInAppPurchaseComponent:TryGetPurchaseHistoryAsync(InNumPages) end

---Attempts to retrieve details for the specified items.
---                operation is reported back to the calling blueprint via the FGetItemsDetailsSuccess or FGetItemsDetailsFailure event handlers.
---@param ItemIDs TArray_string_
---@return boolean
function UInAppPurchaseComponent:TryGetItemsDetailsAsync(ItemIDs) end

