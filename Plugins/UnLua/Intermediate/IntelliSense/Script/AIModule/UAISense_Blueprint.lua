---@class UAISense_Blueprint : UAISense
---@field protected ListenerDataType TSubclassOf<UUserDefinedStruct>
---@field protected ListenerContainer TArray<UAIPerceptionComponent>
---@field protected UnprocessedEvents TArray<UAISenseEvent>
local UAISense_Blueprint = {}

---@param ListenerComponents TArray_UAIPerceptionComponent_ @[out] 
function UAISense_Blueprint:GetAllListenerComponents(ListenerComponents) end

---@param ListenerActors TArray_AActor_ @[out] 
function UAISense_Blueprint:GetAllListenerActors(ListenerActors) end

