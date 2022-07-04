---@class ATemplateSequenceActor : AActor
---@field public PlaybackSettings FMovieSceneSequencePlaybackSettings
---@field public SequencePlayer UTemplateSequencePlayer
---@field public TemplateSequence FSoftObjectPath
---@field public BindingOverride FTemplateSequenceBindingOverrideData
local ATemplateSequenceActor = {}

---@param InSequence UTemplateSequence
function ATemplateSequenceActor:SetSequence(InSequence) end

---@param Actor AActor
function ATemplateSequenceActor:SetBinding(Actor) end

---@return UTemplateSequence
function ATemplateSequenceActor:LoadSequence() end

---@return UTemplateSequencePlayer
function ATemplateSequenceActor:GetSequencePlayer() end

---@return UTemplateSequence
function ATemplateSequenceActor:GetSequence() end

