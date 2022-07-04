---Legacy camera shake which can do either oscillation or run camera anims.
---@class UMatineeCameraShake : UCameraShakeBase
---@field public OscillationDuration number @Duration in seconds of current screen shake. Less than 0 means indefinite, 0 means no oscillation.
---@field public OscillationBlendInTime number @Duration of the blend-in, where the oscillation scales from 0 to 1.
---@field public OscillationBlendOutTime number @Duration of the blend-out, where the oscillation scales from 1 to 0.
---@field public RotOscillation FROscillator @Rotational oscillation
---@field public LocOscillation FVOscillator @Positional oscillation
---@field public FOVOscillation FFOscillator @FOV oscillation
---@field public AnimPlayRate number @Scalar defining how fast to play the anim.
---@field public AnimScale number @Scalar defining how "intense" to play the anim.
---@field public AnimBlendInTime number @Linear blend-in time.
---@field public AnimBlendOutTime number @Linear blend-out time.
---@field public RandomAnimSegmentDuration number @When bRandomAnimSegment is true, this defines how long the anim should play.
---@field public Anim UCameraAnim @Source camera animation to play. Can be null.
---@field public bRandomAnimSegment boolean @If true, play a random snippet of the animation of length Duration.  Implies bLoop and bRandomStartTime = true for the CameraAnim. If false, play the full anim once, non-looped. Useful for getting variety out of a single looped CameraAnim asset.
---@field public OscillatorTimeRemaining number @Time remaining for oscillation shakes. Less than 0.f means shake infinitely.
---@field public AnimInst UCameraAnimInst @The playing instance of the CameraAnim-based shake, if any.
local UMatineeCameraShake = {}

