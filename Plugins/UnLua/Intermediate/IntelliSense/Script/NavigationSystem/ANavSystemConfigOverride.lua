---@class ANavSystemConfigOverride : AActor
---@field private SpriteComponent UBillboardComponent
---@field protected NavigationSystemConfig UNavigationSystemConfig
---@field protected OverridePolicy ENavSystemOverridePolicy @If there's already a NavigationSystem instance in the world how should this nav override behave
---@field protected bLoadOnClient boolean
local ANavSystemConfigOverride = {}

