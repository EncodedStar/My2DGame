---A CameraShake is an asset that defines how to shake the camera in
---a particular way. CameraShakes can be authored as either oscillating shakes,
---animated shakes, or both.
---An oscillating shake will sinusoidally vibrate various camera parameters over time. Each location
---and rotation axis can be oscillated independently with different parameters to create complex and
---random-feeling shakes. These are easier to author and tweak, but can still feel mechanical and are
---limited to vibration-style shakes, such as earthquakes.
---Animated shakes play keyframed camera animations.  These can take more effort to author, but enable
---more natural-feeling results and things like directional shakes.  For instance, you can have an explosion
---to the camera's right push it primarily to the left.
---@class UCameraShakeBase : UObject
---@field public bSingleInstance boolean @If true to only allow a single instance of this shake class to play at any given time. Subsequent attempts to play this shake will simply restart the timer.
---@field public ShakeScale number @The overall scale to apply to the shake. Only valid when the shake is active.
---@field private CameraManager APlayerCameraManager @The camera manager owning this camera shake. Only valid when the shake is active.
local UCameraShakeBase = {}

