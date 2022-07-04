---Cheat Manager is a central blueprint to implement test and debug code and actions that are not to ship with the game.
---As the Cheat Manager is not instanced in shipping builds, it is for debugging purposes only
---@class UCheatManager : UObject
---@field public DebugCameraControllerRef ADebugCameraController @Debug camera - used to have independent camera without stopping gameplay
---@field public DebugCameraControllerClass TSubclassOf<ADebugCameraController> @Debug camera - used to have independent camera without stopping gameplay
local UCheatManager = {}

---Return to walking movement mode from Fly or Ghost cheat.
function UCheatManager:Walk() end

---Teleport to surface player is looking at.
function UCheatManager:Teleport() end

---Modify time dilation to change apparent speed of passage of time. e.g. "Slomo 0.1" makes everything move very slowly, while "Slomo 10" makes everything move very fast.
---@param NewTimeDilation number
function UCheatManager:Slomo(NewTimeDilation) end

---Freeze everything in the level except for players.
function UCheatManager:PlayersOnly() end

---Invulnerability cheat.
function UCheatManager:God() end

---Pawn no longer collides with the world, and can fly
function UCheatManager:Ghost() end

---Pause the game for Delay seconds.
---@param Delay number
function UCheatManager:FreezeFrame(Delay) end

---Pawn can fly.
function UCheatManager:Fly() end

---Switch controller to debug camera without locking gameplay and with locking local player controller input
function UCheatManager:EnableDebugCamera() end

---Switch controller from debug camera back to normal controller
function UCheatManager:DisableDebugCamera() end

---Destroy the actor you're looking at.
function UCheatManager:DestroyTarget() end

---Damage the actor you're looking at (sourced from the player).
---@param DamageAmount number
function UCheatManager:DamageTarget(DamageAmount) end

---Scale the player's size to be F * default size.
---@param F number
function UCheatManager:ChangeSize(F) end

