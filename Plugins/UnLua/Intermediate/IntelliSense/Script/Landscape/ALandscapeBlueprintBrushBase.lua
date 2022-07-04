---@class ALandscapeBlueprintBrushBase : AActor
---@field protected OwningLandscape ALandscape
---@field protected AffectHeightmap boolean
---@field protected AffectWeightmap boolean
---@field protected AffectedWeightmapLayers TArray<string>
---@field protected bIsVisible boolean
local ALandscapeBlueprintBrushBase = {}

function ALandscapeBlueprintBrushBase:RequestLandscapeUpdate() end

