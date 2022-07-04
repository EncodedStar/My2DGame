---@class FMovieSceneEvaluationFieldEntityMetaData
---@field public ForcedTime FFrameNumber
---@field public Flags ESectionEvaluationFlags
---@field public bEvaluateInSequencePreRoll boolean @Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence preroll
---@field public bEvaluateInSequencePostRoll boolean @Opt-in - when no meta-data is present, or this value is false, this entity cannot be evaluated as part of sub-sequence postroll
local FMovieSceneEvaluationFieldEntityMetaData = {}
