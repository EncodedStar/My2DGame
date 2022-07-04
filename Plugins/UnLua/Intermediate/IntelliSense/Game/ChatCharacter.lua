---@class ChatCharacter : ACharacter
---@field public UberGraphFrame FPointerToUberGraphFrame
---@field public NameTextRender UTextRenderComponent
---@field public Camera UCameraComponent
---@field public SpringArm USpringArmComponent
---@field public Cylinder UStaticMeshComponent
---@field public Name string
local ChatCharacter = {}

---return a Lua file path which is relative to project's 'Content/Script', for example 'Weapon.BP_DefaultProjectile_C'
---@return string
function ChatCharacter:GetModuleName() end

function ChatCharacter:OnRep_Name() end

---@param Text string
function ChatCharacter:Say(Text) end

