---Base class for blueprint based decorator nodes. Do NOT use it for creating native c++ classes!
---Unlike task and services, decorator have two execution chains:
--- ExecutionStart-ExecutionFinish and ObserverActivated-ObserverDeactivated
---which makes automatic latent action cleanup impossible. Keep in mind, that
---you HAVE TO verify is given chain is still active after resuming from any
---latent action (like Delay, Timelines, etc).
---Helper functions:
---- IsDecoratorExecutionActive (true after ExecutionStart, until ExecutionFinish)
---- IsDecoratorObserverActive (true after ObserverActivated, until ObserverDeactivated)
---@class UBTDecorator_BlueprintBase : UBTDecorator
---@field protected AIOwner AAIController @Cached AIController owner of BehaviorTreeComponent.
---@field protected ActorOwner AActor @Cached AIController owner of BehaviorTreeComponent.
---@field protected ObservedKeyNames TArray<string> @blackboard key names that should be observed
---@field protected CustomDescription string
---@field protected bShowPropertyDetails boolean @show detailed information about properties
---@field protected bCheckConditionOnlyBlackBoardChanges boolean @Applies only if Decorator has any FBlackboardKeySelector property and if decorator is     set to abort BT flow. Is set to true ReceiveConditionCheck will be called only on changes    to observed BB keys. If false or no BB keys observed ReceiveConditionCheck will be called every tick
---@field protected bIsObservingBB boolean @gets set to true if decorator declared BB keys it can potentially observe
local UBTDecorator_BlueprintBase = {}

---check if decorator's observer is currently active
---@return boolean
function UBTDecorator_BlueprintBase:IsDecoratorObserverActive() end

---check if decorator is part of currently active branch
---@return boolean
function UBTDecorator_BlueprintBase:IsDecoratorExecutionActive() end

