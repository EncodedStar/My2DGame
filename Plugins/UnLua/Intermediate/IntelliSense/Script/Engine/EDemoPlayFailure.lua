---Types of demo play failures broadcast from the engine
---@class EDemoPlayFailure
---@field public Generic integer
---@field public DemoNotFound integer
---@field public Corrupt integer
---@field public InvalidVersion integer
---@field public InitBase integer
---@field public GameSpecificHeader integer
---@field public ReplayStreamerInternal integer
---@field public LoadMap integer
---@field public Serialization integer
---@field public EDemoPlayFailure_MAX integer
local EDemoPlayFailure = {}
