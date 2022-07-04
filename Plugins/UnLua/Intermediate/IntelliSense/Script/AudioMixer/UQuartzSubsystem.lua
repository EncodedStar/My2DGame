---@class UQuartzSubsystem : UWorldSubsystem
local UQuartzSubsystem = {}

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetRoundTripMinLatency(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetRoundTripMaxLatency(WorldContextObject) end

---latency data (Round trip)
---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetRoundTripAverageLatency(WorldContextObject) end

---get handle for existing clock
---@param WorldContextObject UObject
---@param ClockName string
---@return UQuartzClockHandle
function UQuartzSubsystem:GetHandleForClock(WorldContextObject, ClockName) end

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadMinLatency(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadMaxLatency(WorldContextObject) end

---latency data (Game thread -> Audio Render Thread)
---@param WorldContextObject UObject
---@return number
function UQuartzSubsystem:GetGameThreadToAudioRenderThreadAverageLatency(WorldContextObject) end

---@return number
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadMinLatency() end

---@return number
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadMaxLatency() end

---latency data (Audio Render Thread -> Game thread)
---@return number
function UQuartzSubsystem:GetAudioRenderThreadToGameThreadAverageLatency() end

---returns true if the clock exists
---@param WorldContextObject UObject
---@param ClockName string
---@return boolean
function UQuartzSubsystem:DoesClockExist(WorldContextObject, ClockName) end

---Clock Creation
---create a new clock (or return handle if clock already exists)
---@param WorldContextObject UObject
---@param ClockName string
---@param InSettings FQuartzClockSettings
---@param bOverrideSettingsIfClockExists boolean @[opt] 
---@return UQuartzClockHandle
function UQuartzSubsystem:CreateNewClock(WorldContextObject, ClockName, InSettings, bOverrideSettingsIfClockExists) end

