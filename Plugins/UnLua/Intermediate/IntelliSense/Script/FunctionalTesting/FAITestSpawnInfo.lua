---@class FAITestSpawnInfo
---@field public PawnClass TSubclassOf<APawn> @Determines AI to be spawned
---@field public ControllerClass TSubclassOf<AAIController> @class to override default pawn's controller class. If None the default will be used
---@field public TeamID FGenericTeamId
---@field public BehaviorTree UBehaviorTree @if set will be applied to spawned AI
---@field public SpawnLocation AActor @Where should AI be spawned
---@field public NumberToSpawn integer
---@field public SpawnDelay number @delay between consecutive spawn attempts
---@field public PreSpawnDelay number @delay before attempting first spawn
local FAITestSpawnInfo = {}
