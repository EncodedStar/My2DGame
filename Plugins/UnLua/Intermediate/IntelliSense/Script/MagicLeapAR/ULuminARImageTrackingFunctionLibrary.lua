---@class ULuminARImageTrackingFunctionLibrary : UBlueprintFunctionLibrary
local ULuminARImageTrackingFunctionLibrary = {}

---@param SessionConfig UARSessionConfig
---@param CandidateTexture UTexture2D
---@param FriendlyName string
---@param PhysicalWidth number
---@param bUseUnreliablePose boolean
---@param bImageIsStationary boolean
---@param InAxisOrientation EMagicLeapImageTargetOrientation
---@return ULuminARCandidateImage
function ULuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImageEx(SessionConfig, CandidateTexture, FriendlyName, PhysicalWidth, bUseUnreliablePose, bImageIsStationary, InAxisOrientation) end

