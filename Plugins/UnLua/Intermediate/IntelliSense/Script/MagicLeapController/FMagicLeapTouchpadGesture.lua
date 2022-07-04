---Information about a recognized touchpad gesture.
---@class FMagicLeapTouchpadGesture
---@field public Hand EControllerHand @Hand on which the gesture was performed.
---@field public MotionSource string @Motion source on which the gesture was performed.
---@field public Type EMagicLeapTouchpadGestureType @Type of gesture.
---@field public Direction EMagicLeapTouchpadGestureDirection @Direction of gesture
---@field public PositionAndForce FVector @Gesture position (x,y) and force (z). Position is in the [-1.0,1.0] range and force is in the [0.0,1.0] range.
---@field public Speed number @Speed of gesture. Note that this takes on different meanings depending on the gesture type being performed: - For radial gestures, this will be the angular speed around the axis. - For pinch gestures, this will be the speed at which the distance between fingers is changing. The touchpad is defined as having extents of [-1.0,1.0] so touchpad distance has a range of [0.0,2.0]; this value will be in touchpad distance per second.
---@field public Distance number @For radial gestures, this is the absolute value of the angle. For scroll and pinch gestures, this is the absolute distance traveled in touchpad distance. The touchpad is defined as having extents of [-1.0,1.0] so this distance has a range of [0.0,2.0].
---@field public FingerGap number @Distance between the two fingers performing the gestures in touchpad distance. The touchpad is defined as having extents of [-1.0,1.0] so this distance has a range of [0.0,2.0].
---@field public Radius number @For radial gestures, this is the radius of the gesture. The touchpad is defined as having extents of [-1.0,1.0] so this radius has a range of [0.0,2.0].
---@field public Angle number @Angle from the center of the touchpad to the finger.
local FMagicLeapTouchpadGesture = {}