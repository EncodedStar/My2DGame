---A PlayerState is created for every player on a server (or in a standalone game).
---PlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc.
---@class APlayerState : AInfo
---@field public Score number
---@field public PlayerId integer
---@field public Ping integer
---@field private bShouldUpdateReplicatedPing boolean @Whether or not this player's replicated Ping value is updated automatically. Since player states are always relevant by default, in cases where there are many players replicating, replicating the ping value can cause additional unnecessary overhead on servers if the value isn't needed on clients.
---@field public bIsSpectator boolean
---@field public bOnlySpectator boolean
---@field public bIsABot boolean
---@field public bIsInactive boolean
---@field public bFromPreviousLevel boolean
---@field public StartTime integer
---@field public EngineMessageClass TSubclassOf<ULocalMessage> @This is used for sending game agnostic messages that can be localized
---@field public SavedNetworkAddress string @Used to match up InactivePlayerState with rejoining playercontroller.
---@field public UniqueId FUniqueNetIdRepl
---@field private PawnPrivate APawn @The pawn that is controlled by by this player state.
---@field private PlayerNamePrivate string @Player name, or blank if none.
local APlayerState = {}

---returns current player name
---@return string
function APlayerState:GetPlayerName() end

