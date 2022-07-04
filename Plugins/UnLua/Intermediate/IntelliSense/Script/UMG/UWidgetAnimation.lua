---@class UWidgetAnimation : UMovieSceneSequence
---@field public MovieScene UMovieScene @Pointer to the movie scene that controls this animation.
---@field public AnimationBindings TArray<FWidgetAnimationBinding>
---@field private bLegacyFinishOnStop boolean @Whether to finish evaluation on stop. This legacy value is to preserve existing asset behavior to NOT finish on stop since content was created with this bug. If this is removed, evaluation should always finish on stop.
---@field private DisplayLabel string @The friendly name for this animation displayed in the designer.
local UWidgetAnimation = {}

---Get the start time of this animation.
---@return number
function UWidgetAnimation:GetStartTime() end

---Get the end time of this animation.
---@return number
function UWidgetAnimation:GetEndTime() end

