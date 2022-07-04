---@class USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset
---@field public Settings FSubmixEffectDynamicsProcessorSettings
local USubmixEffectDynamicsProcessorPreset = {}

---@param Settings FSubmixEffectDynamicsProcessorSettings
function USubmixEffectDynamicsProcessorPreset:SetSettings(Settings) end

---@param Submix USoundSubmix
function USubmixEffectDynamicsProcessorPreset:SetExternalSubmix(Submix) end

