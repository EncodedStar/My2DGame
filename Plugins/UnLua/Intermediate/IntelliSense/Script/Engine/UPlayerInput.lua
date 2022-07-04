---Object within PlayerController that processes player input.
---Only exists on the client in network games.
---@class UPlayerInput : UObject
---@field public DebugExecBindings TArray<FKeyBind> @Generic bindings of keys to Exec()-compatible strings for development purposes only
---@field public InvertedAxis TArray<string> @List of Axis Mappings that have been inverted
local UPlayerInput = {}

