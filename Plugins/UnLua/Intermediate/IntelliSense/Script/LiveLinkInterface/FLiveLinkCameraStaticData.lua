---Static data for Camera data.
---@class FLiveLinkCameraStaticData : FLiveLinkTransformStaticData
---@field public bIsFieldOfViewSupported boolean @Whether FieldOfView in frame data can be used
---@field public bIsAspectRatioSupported boolean @Whether AspectRatio in frame data can be used
---@field public bIsFocalLengthSupported boolean @Whether FocalLength in frame data can be used
---@field public bIsProjectionModeSupported boolean @Whether ProjectionMode in frame data can be used
---@field public FilmBackWidth number @Used with CinematicCamera. Values greater than 0 will be applied
---@field public FilmBackHeight number @Used with CinematicCamera. Values greater than 0 will be applied
---@field public bIsApertureSupported boolean @Whether Aperture in frame data can be used
---@field public bIsFocusDistanceSupported boolean @Whether FocusDistance in frame data can be used
local FLiveLinkCameraStaticData = {}