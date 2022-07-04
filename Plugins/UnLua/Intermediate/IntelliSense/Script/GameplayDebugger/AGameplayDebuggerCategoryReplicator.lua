---@class AGameplayDebuggerCategoryReplicator : AActor
---@field protected OwnerPC APlayerController
---@field protected bIsEnabled boolean
---@field protected ReplicatedData FGameplayDebuggerNetPack
---@field protected DebugActor FGameplayDebuggerDebugActor
---@field protected VisLogSync FGameplayDebuggerVisLogSync
---@field protected RenderingComp UGameplayDebuggerRenderingComponent @rendering component needs to attached to some actor, and this is as good as any
local AGameplayDebuggerCategoryReplicator = {}

