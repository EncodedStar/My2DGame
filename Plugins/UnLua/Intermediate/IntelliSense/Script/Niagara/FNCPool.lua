---@class FNCPool
---@field public FreeElements TArray<FNCPoolElement> @Collection of all currently allocated, free items ready to be grabbed for use. TODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue.
---@field public InUseComponents_Auto TArray<UNiagaraComponent> @Array of currently in flight components that will auto release.
---@field public InUseComponents_Manual TArray<UNiagaraComponent> @Array of currently in flight components that need manual release.
local FNCPool = {}
