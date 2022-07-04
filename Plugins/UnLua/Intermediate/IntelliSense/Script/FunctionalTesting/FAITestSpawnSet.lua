---@class FAITestSpawnSet
---@field public SpawnInfoContainer TArray<FAITestSpawnInfo> @what to spawn
---@field public Name string @give the set a name to help identify it if need be
---@field public bEnabled boolean
---@field public FallbackSpawnLocation AActor @location used for spawning if spawn info doesn't define one
local FAITestSpawnSet = {}
