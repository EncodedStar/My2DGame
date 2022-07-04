---Base class for blueprint based service nodes. Do NOT use it for creating native c++ classes!
---When service receives Deactivation event, all latent actions associated this instance are being removed.
---This prevents from resuming activity started by Activation, but does not handle external events.
---Please use them safely (unregister at abort) and call IsServiceActive() when in doubt.
---@class UBTService_BlueprintBase : UBTService
---@field protected AIOwner AAIController @Cached AIController owner of BehaviorTreeComponent.
---@field protected ActorOwner AActor @Cached actor owner of BehaviorTreeComponent.
---@field protected CustomDescription string
---@field protected bShowPropertyDetails boolean @show detailed information about properties
---@field protected bShowEventDetails boolean @show detailed information about implemented events
local UBTService_BlueprintBase = {}

---check if service is currently being active
---@return boolean
function UBTService_BlueprintBase:IsServiceActive() end

