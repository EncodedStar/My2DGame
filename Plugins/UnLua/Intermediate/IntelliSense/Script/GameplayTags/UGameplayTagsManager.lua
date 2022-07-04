---Holds data about the tag dictionary, is in a singleton UObject
---@class UGameplayTagsManager : UObject
---@field private TagSources TArray<FGameplayTagSource> @List of gameplay tag sources
---@field private GameplayTagTables TArray<UDataTable> @Holds all of the valid gameplay-related tags that can be applied to assets
local UGameplayTagsManager = {}

