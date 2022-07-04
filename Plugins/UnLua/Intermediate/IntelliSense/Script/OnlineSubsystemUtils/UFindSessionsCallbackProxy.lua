---@class UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase
---@field public OnSuccess MulticastDelegate @Called when there is a successful query
---@field public OnFailure MulticastDelegate @Called when there is an unsuccessful query
local UFindSessionsCallbackProxy = {}

---@param Result FBlueprintSessionResult
---@return string
function UFindSessionsCallbackProxy.GetServerName(Result) end

---@param Result FBlueprintSessionResult
---@return integer
function UFindSessionsCallbackProxy.GetPingInMs(Result) end

---@param Result FBlueprintSessionResult
---@return integer
function UFindSessionsCallbackProxy.GetMaxPlayers(Result) end

---@param Result FBlueprintSessionResult
---@return integer
function UFindSessionsCallbackProxy.GetCurrentPlayers(Result) end

