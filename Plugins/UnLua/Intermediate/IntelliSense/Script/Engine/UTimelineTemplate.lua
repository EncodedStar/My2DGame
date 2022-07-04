---@class UTimelineTemplate : UObject
---@field public TimelineLength number @Length of this timeline
---@field public LengthMode integer @How we want the timeline to determine its own length (e.g. specified length, last keyframe)
---@field public bAutoPlay boolean @If we want the timeline to auto-play
---@field public bLoop boolean @If we want the timeline to loop
---@field public bReplicated boolean @If we want the timeline to loop
---@field public bIgnoreTimeDilation boolean @If we want the timeline to ignore global time dilation
---@field public EventTracks TArray<FTTEventTrack> @Set of event tracks
---@field public FloatTracks TArray<FTTFloatTrack> @Set of float interpolation tracks
---@field public VectorTracks TArray<FTTVectorTrack> @Set of vector interpolation tracks
---@field public LinearColorTracks TArray<FTTLinearColorTrack> @Set of linear color interpolation tracks
---@field public MetaDataArray TArray<FBPVariableMetaDataEntry> @Metadata information for this timeline
---@field public TimelineGuid FGuid
---@field private VariableName string
---@field private DirectionPropertyName string
---@field private UpdateFunctionName string
---@field private FinishedFunctionName string
---@field private TrackDisplayOrder TArray<FTTTrackId> @Whether or not this track is expanded in the UI.
local UTimelineTemplate = {}

