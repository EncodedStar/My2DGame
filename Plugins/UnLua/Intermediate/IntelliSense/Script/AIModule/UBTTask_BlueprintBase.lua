---Base class for blueprint based task nodes. Do NOT use it for creating native c++ classes!
---When task receives Abort event, all latent actions associated this instance are being removed.
---This prevents from resuming activity started by Execute, but does not handle external events.
---Please use them safely (unregister at abort) and call IsTaskExecuting() when in doubt.
---@class UBTTask_BlueprintBase : UBTTaskNode
---@field protected AIOwner AAIController @Cached AIController owner of BehaviorTreeComponent.
---@field protected ActorOwner AActor @Cached actor owner of BehaviorTreeComponent.
---@field protected TickInterval FIntervalCountdown @If any of the Tick functions is implemented, how often should they be ticked.     Values < 0 mean 'every tick'.
---@field protected CustomDescription string
---@field protected bShowPropertyDetails boolean @show detailed information about properties
local UBTTask_BlueprintBase = {}

---task execution will be finished (with result 'Success') after receiving specified message with indicated ID
---@param MessageName string
---@param RequestID integer @[opt] 
function UBTTask_BlueprintBase:SetFinishOnMessageWithId(MessageName, RequestID) end

---task execution will be finished (with result 'Success') after receiving specified message
---@param MessageName string
function UBTTask_BlueprintBase:SetFinishOnMessage(MessageName) end

---check if task is currently being executed
---@return boolean
function UBTTask_BlueprintBase:IsTaskExecuting() end

---check if task is currently being aborted
---@return boolean
function UBTTask_BlueprintBase:IsTaskAborting() end

---finishes task execution with Success or Fail result
---@param bSuccess boolean
function UBTTask_BlueprintBase:FinishExecute(bSuccess) end

---aborts task execution
function UBTTask_BlueprintBase:FinishAbort() end

