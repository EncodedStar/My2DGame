---The GameModeBase defines the game being played. It governs the game rules, scoring, what actors
---are allowed to exist in this game type, and who may enter the game.
---It is only instanced on the server and will never exist on the client.
---A GameModeBase actor is instantiated when the level is initialized for gameplay in
---C++ UGameEngine::LoadMap().
---The class of this GameMode actor is determined by (in order) either the URL ?game=xxx,
---the GameMode Override value set in the World Settings, or the DefaultGameMode entry set
---in the game's Project Settings.
---@class AGameModeBase : AInfo
---@field public OptionsString string @Save options string and parse it when needed
---@field public GameSessionClass TSubclassOf<AGameSession> @Class of GameSession, which handles login approval and online game interface
---@field public GameStateClass TSubclassOf<AGameStateBase> @Class of GameState associated with this GameMode.
---@field public PlayerControllerClass TSubclassOf<APlayerController> @The class of PlayerController to spawn for players logging in.
---@field public PlayerStateClass TSubclassOf<APlayerState> @A PlayerState of this class will be associated with every player to replicate relevant player information to all clients.
---@field public HUDClass TSubclassOf<AHUD> @HUD class this game uses.
---@field public DefaultPawnClass TSubclassOf<APawn> @The default pawn class used by players.
---@field public SpectatorClass TSubclassOf<ASpectatorPawn> @The pawn class used by the PlayerController for players when spectating.
---@field public ReplaySpectatorPlayerControllerClass TSubclassOf<APlayerController> @The PlayerController class used when spectating a network replay.
---@field public ServerStatReplicatorClass TSubclassOf<AServerStatReplicator>
---@field public GameSession AGameSession @Game Session handles login approval, arbitration, online game interface
---@field public GameState AGameStateBase @GameState is used to replicate game state relevant properties to all clients.
---@field public ServerStatReplicator AServerStatReplicator
---@field public DefaultPlayerName string @The default player name assigned to players that join with no name specified.
---@field public bUseSeamlessTravel boolean @Whether the game perform map travels using SeamlessTravel() which loads in the background and doesn't disconnect clients
---@field protected bStartPlayersAsSpectators boolean @Whether players should immediately spawn when logging in, or stay as spectators until they manually spawn
---@field protected bPauseable boolean @Whether the game is pauseable.
local AGameModeBase = {}

---Transitions to calls BeginPlay on actors.
function AGameModeBase:StartPlay() end

---Return to main menu, and disconnect any players
function AGameModeBase:ReturnToMainMenuHost() end

---Tries to spawn the player's pawn at a specific location
---@param NewPlayer AController
---@param SpawnTransform FTransform
function AGameModeBase:RestartPlayerAtTransform(NewPlayer, SpawnTransform) end

---Tries to spawn the player's pawn at the specified actor's location
---@param NewPlayer AController
---@param StartSpot AActor
function AGameModeBase:RestartPlayerAtPlayerStart(NewPlayer, StartSpot) end

---Tries to spawn the player's pawn, at the location returned by FindPlayerStart
---@param NewPlayer AController
function AGameModeBase:RestartPlayer(NewPlayer) end

---Overridable function called when resetting level. This is used to reset the game state while staying in the same map
---Default implementation calls Reset() on all actors except GameMode and Controllers
function AGameModeBase:ResetLevel() end

---Returns true if it's valid to call RestartPlayer. By default will call Player->CanRestartPlayer
---@param Player APlayerController
---@return boolean
function AGameModeBase:PlayerCanRestart(Player) end

---Return the specific player start actor that should be used for the next spawn
---This will either use a previously saved startactor, or calls ChoosePlayerStart
---@param Player AController
---@param IncomingName string
---@return AActor
function AGameModeBase:K2_FindPlayerStart(Player, IncomingName) end

---Returns true if the match start callbacks have been called
---@return boolean
function AGameModeBase:HasMatchStarted() end

---Returns true if the match can be considered ended
---@return boolean
function AGameModeBase:HasMatchEnded() end

---Returns number of human players currently spectating
---@return integer
function AGameModeBase:GetNumSpectators() end

---Returns number of active human players, excluding spectators
---@return integer
function AGameModeBase:GetNumPlayers() end

---Returns default pawn class for given controller
---@param InController AController
---@return TSubclassOf_UObject_
function AGameModeBase:GetDefaultPawnClassForController(InController) end

---Sets the name for a controller
---@param Controller AController
---@param NewName string
---@param bNameChange boolean
function AGameModeBase:ChangeName(Controller, NewName, bNameChange) end

