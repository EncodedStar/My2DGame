---@class FLightPropagationVolumeSettings
---@field public bOverride_LPVIntensity boolean
---@field public bOverride_LPVDirectionalOcclusionIntensity boolean
---@field public bOverride_LPVDirectionalOcclusionRadius boolean
---@field public bOverride_LPVDiffuseOcclusionExponent boolean
---@field public bOverride_LPVSpecularOcclusionExponent boolean
---@field public bOverride_LPVDiffuseOcclusionIntensity boolean
---@field public bOverride_LPVSpecularOcclusionIntensity boolean
---@field public bOverride_LPVSize boolean
---@field public bOverride_LPVSecondaryOcclusionIntensity boolean
---@field public bOverride_LPVSecondaryBounceIntensity boolean
---@field public bOverride_LPVGeometryVolumeBias boolean
---@field public bOverride_LPVVplInjectionBias boolean
---@field public bOverride_LPVEmissiveInjectionIntensity boolean
---@field public LPVIntensity number @How strong the dynamic GI from the LPV should be. 0.0 is off, 1.0 is the "normal" value, but higher values can be used to boost the effect
---@field public LPVVplInjectionBias number @Bias applied to light injected into the LPV in cell units. Increase to reduce bleeding through thin walls
---@field public LPVSize number @The size of the LPV volume, in Unreal units
---@field public LPVSecondaryOcclusionIntensity number @Secondary occlusion strength (bounce light shadows). Set to 0 to disable
---@field public LPVSecondaryBounceIntensity number @Secondary bounce light strength (bounce light shadows). Set to 0 to disable
---@field public LPVGeometryVolumeBias number @Bias applied to the geometry volume in cell units. Increase to reduce darkening due to secondary occlusion
---@field public LPVEmissiveInjectionIntensity number
---@field public LPVDirectionalOcclusionIntensity number @Controls the amount of directional occlusion. Requires LPV. Values very close to 1.0 are recommended
---@field public LPVDirectionalOcclusionRadius number @Occlusion Radius - 16 is recommended for most scenes
---@field public LPVDiffuseOcclusionExponent number @Diffuse occlusion exponent - increase for more contrast. 1 to 2 is recommended
---@field public LPVSpecularOcclusionExponent number @Specular occlusion exponent - increase for more contrast. 6 to 9 is recommended
---@field public LPVDiffuseOcclusionIntensity number @Diffuse occlusion intensity - higher values provide increased diffuse occlusion.
---@field public LPVSpecularOcclusionIntensity number @Specular occlusion intensity - higher values provide increased specular occlusion.
---@field public LPVFadeRange number @LPV Fade range - increase to fade more gradually towards the LPV edges.
---@field public LPVDirectionalOcclusionFadeRange number @LPV Directional Occlusion Fade range - increase to fade more gradually towards the LPV edges.
local FLightPropagationVolumeSettings = {}