---@class UPlayMontageCallbackProxy : UObject
---@field public OnCompleted MulticastDelegate @Called when Montage finished playing and wasn't interrupted
---@field public OnBlendOut MulticastDelegate @Called when Montage starts blending out and is not interrupted
---@field public OnInterrupted MulticastDelegate @Called when Montage has been interrupted (or failed to play)
---@field public OnNotifyBegin MulticastDelegate
---@field public OnNotifyEnd MulticastDelegate
local UPlayMontageCallbackProxy = {}

