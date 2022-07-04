---@class UQuartzClockHandle : UObject
local UQuartzClockHandle = {}

---@param WorldContextObject UObject
---@param InQuantizationBoundary EQuartzCommandQuantization
function UQuartzClockHandle:UnsubscribeFromTimeDivision(WorldContextObject, InQuantizationBoundary) end

---@param WorldContextObject UObject
function UQuartzClockHandle:UnsubscribeFromAllTimeDivisions(WorldContextObject) end

---Metronome subscription
---@param WorldContextObject UObject
---@param InQuantizationBoundary EQuartzCommandQuantization
---@param OnQuantizationEvent Delegate
function UQuartzClockHandle:SubscribeToQuantizationEvent(WorldContextObject, InQuantizationBoundary, OnQuantizationEvent) end

---@param WorldContextObject UObject
---@param OnQuantizationEvent Delegate
function UQuartzClockHandle:SubscribeToAllQuantizationEvents(WorldContextObject, OnQuantizationEvent) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param TicksPerSecond number @[opt] 
function UQuartzClockHandle:SetTicksPerSecond(WorldContextObject, QuantizationBoundary, Delegate, TicksPerSecond) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param ThirtySecondsNotesPerMinute number @[opt] 
function UQuartzClockHandle:SetThirtySecondNotesPerMinute(WorldContextObject, QuantizationBoundary, Delegate, ThirtySecondsNotesPerMinute) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param SecondsPerTick number @[opt] 
function UQuartzClockHandle:SetSecondsPerTick(WorldContextObject, QuantizationBoundary, Delegate, SecondsPerTick) end

---Metronome Alteration (setters)
---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param MillisecondsPerTick number @[opt] 
function UQuartzClockHandle:SetMillisecondsPerTick(WorldContextObject, QuantizationBoundary, Delegate, MillisecondsPerTick) end

---@param WorldContextObject UObject
---@param QuantizationBoundary FQuartzQuantizationBoundary
---@param Delegate Delegate
---@param BeatsPerMinute number @[opt] 
function UQuartzClockHandle:SetBeatsPerMinute(WorldContextObject, QuantizationBoundary, Delegate, BeatsPerMinute) end

---@param WorldContextObject UObject
function UQuartzClockHandle:ResumeClock(WorldContextObject) end

---@param WorldContextObject UObject
---@param InDelegate Delegate
function UQuartzClockHandle:ResetTransport(WorldContextObject, InDelegate) end

---Clock manipulation
---@param WorldContextObject UObject
function UQuartzClockHandle:PauseClock(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetTicksPerSecond(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetThirtySecondNotesPerMinute(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetSecondsPerTick(WorldContextObject) end

---Metronome getters
---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetMillisecondsPerTick(WorldContextObject) end

---@param WorldContextObject UObject
---@return number
function UQuartzClockHandle:GetBeatsPerMinute(WorldContextObject) end

