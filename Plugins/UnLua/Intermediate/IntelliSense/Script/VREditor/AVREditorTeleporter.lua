---VR Editor teleport manager and the visual representation of the teleport
---@class AVREditorTeleporter : AActor
---@field private VRMode UVREditorMode @The owning VR mode
---@field private TeleportDirectionMeshComponent UStaticMeshComponent @Visuals for the feet location of the teleporter with the same direction of the HMD yaw
---@field private HMDMeshComponent UStaticMeshComponent @Visuals for teleport HMD
---@field private LeftMotionControllerMeshComponent UStaticMeshComponent @Visuals for teleport left motion controller
---@field private RightMotionControllerMeshComponent UStaticMeshComponent @Visuals for teleport right motion controller
---@field private TeleportMID UMaterialInstanceDynamic @Dynamic material for teleport visuals
---@field private InteractorTryingTeleport UViewportInteractor @The interactor that started aiming to teleport
local AVREditorTeleporter = {}

---Cancel teleport aiming mode without doing the teleport
function AVREditorTeleporter:StopAiming() end

---Functions we call to handle teleporting in navigation mode
---@param Interactor UViewportInteractor
function AVREditorTeleporter:StartAiming(Interactor) end

---Hide or show the teleporter visuals
---@param bVisible boolean
function AVREditorTeleporter:SetVisibility(bVisible) end

---Sets the color for the teleporter visuals
---@param Color FLinearColor
function AVREditorTeleporter:SetColor(Color) end

---@return boolean
function AVREditorTeleporter:IsTeleporting() end

---Whether we are currently aiming to teleport.
---@return boolean
function AVREditorTeleporter:IsAiming() end

---@return UVREditorMode
function AVREditorTeleporter:GetVRMode() end

---Get the actor we're currently trying to teleport with.
---Valid during aiming and teleporting.
---@return UViewportInteractor
function AVREditorTeleporter:GetInteractorTryingTeleport() end

---Do and finalize teleport.
function AVREditorTeleporter:DoTeleport() end

