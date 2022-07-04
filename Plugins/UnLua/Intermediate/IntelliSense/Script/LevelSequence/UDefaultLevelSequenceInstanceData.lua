---Default instance data class that level sequences understand. Implements IMovieSceneTransformOrigin.
---@class UDefaultLevelSequenceInstanceData : UObject
---@field public TransformOriginActor AActor @When set, this actor's world position will be used as the transform origin for all absolute transform sections
---@field public TransformOrigin FTransform @Specifies a transform that offsets all absolute transform sections in this sequence. Will compound with attach tracks. Scale is ignored. Not applied to Relative or Additive sections.
local UDefaultLevelSequenceInstanceData = {}

