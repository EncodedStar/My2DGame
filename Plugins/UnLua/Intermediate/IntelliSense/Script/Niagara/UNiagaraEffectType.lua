---Contains settings and working data shared among many NiagaraSystems that share some commonality of type. For example ImpactFX vs EnvironmentalFX.
---@class UNiagaraEffectType : UObject
---@field public UpdateFrequency ENiagaraScalabilityUpdateFrequency @How regularly effects of this type are checked for scalability.
---@field public CullReaction ENiagaraCullReaction @How effects of this type react when they fail the cull checks.
---@field public SignificanceHandler UNiagaraSignificanceHandler @Used to determine the relative significance of FX in the scene which is used in other scalability systems such as instance count culling.
---@field public SystemScalabilitySettings FNiagaraSystemScalabilitySettingsArray
---@field public EmitterScalabilitySettings FNiagaraEmitterScalabilitySettingsArray
local UNiagaraEffectType = {}

