---GameInstance: high-level manager object for an instance of the running game.
---Spawned at game creation and not destroyed until game instance is shut down.
---Running as a standalone game, there will be one of these.
---Running in PIE (play-in-editor) will generate one of these per PIE instance.
---@class UGameInstance : UObject
---@field protected LocalPlayers TArray<ULocalPlayer> @List of locally participating players in this game instance
---@field protected OnlineSession UOnlineSession @Class to manage online services
---@field protected ReferencedObjects TArray<UObject> @List of objects that are being kept alive by this game instance. Stored as array for fast iteration, should not be modified every frame
---@field protected OnPawnControllerChangedDelegates MulticastDelegate @gets triggered shortly after a pawn's controller is set. Most of the time     it signals that the Controller has changed but in edge cases (like during     replication) it might end up broadcasting the same pawn-controller pair     more than once
local UGameInstance = {}

