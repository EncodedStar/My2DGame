---Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game
---@class UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase
---@field public Completed MulticastDelegate @Delegate called when the save/load completes
---@field protected SaveGameObject USaveGame @The object that was either saved or loaded
local UAsyncActionHandleSaveGame = {}

