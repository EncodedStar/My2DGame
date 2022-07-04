---Persistent identifier to a specific object binding within a sequence hierarchy.
---@class FMovieSceneObjectBindingID
---@field private SequenceID integer @Sequence ID stored as an int32 so that it can be used in the blueprint VM
---@field private Space EMovieSceneObjectBindingSpace @The binding's resolution space
---@field private Guid FGuid @Identifier for the object binding within the sequence
local FMovieSceneObjectBindingID = {}
