---Used to specify properties of a channel type
---@class FChannelDefinition
---@field public ChannelName string
---@field public ClassName string @Channel type identifier
---@field public ChannelClass TSubclassOf<UObject> @UClass name used to create the UChannel
---@field public StaticChannelIndex integer @UClass used to create the UChannel
---@field public bTickOnCreate boolean @Channel always uses this index, INDEX_NONE if dynamically chosen
---@field public bServerOpen boolean @Whether to immediately begin ticking the channel after creation
---@field public bClientOpen boolean @Channel opened by the server
---@field public bInitialServer boolean @Channel opened by the client
---@field public bInitialClient boolean @Channel created on server when connection is established
local FChannelDefinition = {}
