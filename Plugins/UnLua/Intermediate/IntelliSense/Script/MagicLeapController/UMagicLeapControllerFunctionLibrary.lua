---@class UMagicLeapControllerFunctionLibrary : UBlueprintFunctionLibrary
local UMagicLeapControllerFunctionLibrary = {}

---Set motion source for hand.
---@param Hand EControllerHand
---@param MotionSource string
---@return boolean
function UMagicLeapControllerFunctionLibrary.SetMotionSourceForHand(Hand, MotionSource) end

---Set controller tracking mode.
---@param TrackingMode EMagicLeapControllerTrackingMode
---@return boolean
function UMagicLeapControllerFunctionLibrary.SetControllerTrackingMode(TrackingMode) end

---Light up the LED on the Magic Leap Controller in the given pattern for the specified duration.
---@param MotionSource string
---@param LEDPattern EMagicLeapControllerLEDPattern
---@param LEDColor EMagicLeapControllerLEDColor
---@param DurationInSec number
---@return boolean
function UMagicLeapControllerFunctionLibrary.PlayLEDPattern(MotionSource, LEDPattern, LEDColor, DurationInSec) end

---Starts a LED feedback effect using the specified pattern on the specified controller.
---@param MotionSource string
---@param LEDEffect EMagicLeapControllerLEDEffect
---@param LEDSpeed EMagicLeapControllerLEDSpeed
---@param LEDPattern EMagicLeapControllerLEDPattern
---@param LEDColor EMagicLeapControllerLEDColor
---@param DurationInSec number
---@return boolean
function UMagicLeapControllerFunctionLibrary.PlayLEDEffect(MotionSource, LEDEffect, LEDSpeed, LEDPattern, LEDColor, DurationInSec) end

---Play haptic feedback on the controller.
---@param MotionSource string
---@param HapticPattern EMagicLeapControllerHapticPattern
---@param Intensity EMagicLeapControllerHapticIntensity
---@return boolean
function UMagicLeapControllerFunctionLibrary.PlayHapticPattern(MotionSource, HapticPattern, Intensity) end

---Checks if the ML controller (MagicLeapControl0, MagicLeapControl1, MagicLeapMobileApp) of the given motion source is currently connected.
---@param MotionSource string
---@return boolean
function UMagicLeapControllerFunctionLibrary.IsMLControllerConnected(MotionSource) end

---Get motion source for hand.
---@param Hand EControllerHand
---@return string
function UMagicLeapControllerFunctionLibrary.GetMotionSourceForHand(Hand) end

---Type of ML device being tracking the given hand.
---@param Hand EControllerHand
---@return EMagicLeapControllerType
function UMagicLeapControllerFunctionLibrary.GetMLControllerType(Hand) end

---Get motion source for hand.
---@param MotionSource string
---@return EControllerHand
function UMagicLeapControllerFunctionLibrary.GetHandForMotionSource(MotionSource) end

---Type of ML device bound to the specified motion source
---@param MotionSource string
---@return EMagicLeapControllerType
function UMagicLeapControllerFunctionLibrary.GetControllerType(MotionSource) end

---Get controller tracking mode.
---@return EMagicLeapControllerTrackingMode
function UMagicLeapControllerFunctionLibrary.GetControllerTrackingMode() end

---Returns the hand to which given controller index has been mapped to in the device backend.
---The native api does not have a concept of left vs right controller. They deal with indices. The first connected
---controller is index 0 and so on. By default, index 0 is mapped to the right hand in Unreal.
---You can invert these mappings by calling InvertControllerMapping() function.
---@param ControllerIndex integer
---@param Hand EControllerHand @[out] 
---@return boolean
function UMagicLeapControllerFunctionLibrary.GetControllerMapping(ControllerIndex, Hand) end

