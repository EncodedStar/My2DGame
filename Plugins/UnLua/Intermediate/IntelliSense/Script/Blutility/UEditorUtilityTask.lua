---@class UEditorUtilityTask : UObject
---@field private MyTaskManager UEditorUtilitySubsystem
local UEditorUtilityTask = {}

---@param Text string
function UEditorUtilityTask:SetTaskNotificationText(Text) end

function UEditorUtilityTask:FinishExecutingTask() end

