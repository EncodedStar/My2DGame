---AudioComponent is used to play a Sound
---@class UAudioComponent : USceneComponent
---@field public Sound USoundBase @The sound to be played
---@field public InstanceParameters TArray<FAudioComponentParam> @Array of per-instance parameters for this AudioComponent.
---@field public SoundClassOverride USoundClass @Optional sound group this AudioComponent belongs to
---@field public bAutoDestroy boolean @Auto destroy this component on completion
---@field public bStopWhenOwnerDestroyed boolean @Stop sound when owner is destroyed
---@field public bShouldRemainActiveIfDropped boolean @Whether the wave instances should remain active if they're dropped by the prioritization code. Useful for e.g. vehicle sounds that shouldn't cut out.
---@field public bAllowSpatialization boolean @Overrides spatialization enablement in either the attenuation asset or on this audio component's attenuation settings override.
---@field public bOverrideAttenuation boolean @Allows defining attenuation settings directly on this audio component without using an attenuation settings asset.
---@field public bOverrideSubtitlePriority boolean @Whether or not to override the sound's subtitle priority.
---@field public bIsUISound boolean @Whether or not this sound plays when the game is paused in the UI
---@field public bEnableLowPassFilter boolean @Whether or not to apply a low-pass filter to the sound that plays in this audio component.
---@field public bOverridePriority boolean
---@field public bSuppressSubtitles boolean @If true, subtitles in the sound data will be ignored.
---@field public bAutoManageAttachment boolean @True if we should automatically attach to AutoAttachParent when Played, and detach from our parent when playback is completed. This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null). If enabled, this AudioComponent's WorldLocation will no longer be reliable when not currently playing audio, and any attach children will also be detached/attached along with it. When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored. This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.
---@field public AudioComponentUserID string @Configurable, serialized ID for audio plugins
---@field public PitchModulationMin number @The lower bound to use when randomly determining a pitch multiplier
---@field public PitchModulationMax number @The upper bound to use when randomly determining a pitch multiplier
---@field public VolumeModulationMin number @The lower bound to use when randomly determining a volume multiplier
---@field public VolumeModulationMax number @The upper bound to use when randomly determining a volume multiplier
---@field public VolumeMultiplier number @A volume multiplier to apply to sounds generated by this component
---@field public EnvelopeFollowerAttackTime integer @The attack time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer.
---@field public EnvelopeFollowerReleaseTime integer @The release time in milliseconds for the envelope follower. Delegate callbacks can be registered to get the envelope value of sounds played with this audio component. Only used in audio mixer.
---@field public Priority number @A priority value that is used for sounds that play on this component that scales against final output volume.
---@field public SubtitlePriority number @Used by the subtitle manager to prioritize subtitles wave instances spawned by this component.
---@field public SourceEffectChain USoundEffectSourcePresetChain
---@field public PitchMultiplier number @A pitch multiplier to apply to sounds generated by this component
---@field public LowPassFilterFrequency number @The frequency of the lowpass filter (in hertz) to apply to this voice. A frequency of 0.0 is the device sample rate and will bypass the filter.
---@field public AttenuationSettings USoundAttenuation @If bOverrideSettings is false, the asset to use to determine attenuation properties for sounds generated by this component
---@field public AttenuationOverrides FSoundAttenuationSettings @If bOverrideSettings is true, the attenuation properties to use for sounds generated by this component
---@field public ConcurrencySet TSet<USoundConcurrency> @What sound concurrency rules to use for sounds generated by this audio component
---@field public AutoAttachLocationRule EAttachmentRule @Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.
---@field public AutoAttachRotationRule EAttachmentRule @Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.
---@field public AutoAttachScaleRule EAttachmentRule @Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.
---@field public ModulationRouting FSoundModulationDefaultRoutingSettings
---@field public OnAudioPlayStateChanged MulticastDelegate @Called when PlayState changes
---@field public OnAudioVirtualizationChanged MulticastDelegate @Called when virtualization state changes
---@field public OnAudioFinished MulticastDelegate @called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early
---@field public OnAudioPlaybackPercent MulticastDelegate @Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage. Computed as samples played divided by total samples, taking into account pitch. Not currently implemented on all platforms.
---@field public OnAudioSingleEnvelopeValue MulticastDelegate
---@field public OnAudioMultiEnvelopeValue MulticastDelegate
---@field public OnQueueSubtitles Delegate @Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes
---@field public AutoAttachParent TWeakObjectPtr<USceneComponent> @Component we automatically attach to when activated, if bAutoManageAttachment is true. If null during registration, we assign the existing AttachParent and defer attachment until we activate.
---@field public AutoAttachSocketName string @Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.
local UAudioComponent = {}

---Cues request to stop sound after the provided delay (In Seconds), stopping immediately if delay is zero or negative
---@param DelayTime number
function UAudioComponent:StopDelayed(DelayTime) end

---Stop an audio component's sound, issue any delegates if needed
function UAudioComponent:Stop() end

---Set a sound wave instance parameter for use in sound cues played by this audio component
---@param InName string
---@param InWave USoundWave
function UAudioComponent:SetWaveParameter(InName, InWave) end

---Set a new volume multiplier
---@param NewVolumeMultiplier number
function UAudioComponent:SetVolumeMultiplier(NewVolumeMultiplier) end

---Set whether sounds generated by this audio component should be considered UI sounds
---@param bInUISound boolean
function UAudioComponent:SetUISound(bInUISound) end

---Sets how much audio the sound should send to the given submix.
---@param Submix USoundSubmixBase
---@param SendLevel number
function UAudioComponent:SetSubmixSend(Submix, SendLevel) end

---Sets how much audio the sound should send to the given Source Bus (PRE Source Effects).
---              if the Bus Send doesn't already exist, it will be added to the overrides on the active sound
---@param SoundSourceBus USoundSourceBus
---@param SourceBusSendLevel number
function UAudioComponent:SetSourceBusSendPreEffect(SoundSourceBus, SourceBusSendLevel) end

---Sets how much audio the sound should send to the given Source Bus (POST Source Effects).
---              if the Bus Send doesn't already exist, it will be added to the overrides on the active sound
---@param SoundSourceBus USoundSourceBus
---@param SourceBusSendLevel number
function UAudioComponent:SetSourceBusSendPostEffect(SoundSourceBus, SourceBusSendLevel) end

---Set what sound is played by this component
---@param NewSound USoundBase
function UAudioComponent:SetSound(NewSound) end

---Set a new pitch multiplier
---@param NewPitchMultiplier number
function UAudioComponent:SetPitchMultiplier(NewPitchMultiplier) end

---Pause an audio component playing its sound cue, issue any delegates if needed
---@param bPause boolean
function UAudioComponent:SetPaused(bPause) end

---Sets lowpass filter frequency of the audio component.
---@param InLowPassFilterFrequency number
function UAudioComponent:SetLowPassFilterFrequency(InLowPassFilterFrequency) end

---Sets whether or not the low pass filter is enabled on the audio component.
---@param InLowPassFilterEnabled boolean
function UAudioComponent:SetLowPassFilterEnabled(InLowPassFilterEnabled) end

---Set an integer instance parameter for use in sound cues played by this audio component
---@param InName string
---@param InInt integer
function UAudioComponent:SetIntParameter(InName, InInt) end

---Set a float instance parameter for use in sound cues played by this audio component
---@param InName string
---@param InFloat number
function UAudioComponent:SetFloatParameter(InName, InFloat) end

---Set a boolean instance parameter for use in sound cues played by this audio component
---@param InName string
---@param InBool boolean
function UAudioComponent:SetBoolParameter(InName, InBool) end

---Sets how much audio the sound should send to the given Audio Bus (PRE Source Effects).
---      if the Bus Send doesn't already exist, it will be added to the overrides on the active sound
---@param AudioBus UAudioBus
---@param AudioBusSendLevel number
function UAudioComponent:SetAudioBusSendPreEffect(AudioBus, AudioBusSendLevel) end

---Sets how much audio the sound should send to the given Audio Bus (POST Source Effects).
---              if the Audio Bus Send doesn't already exist, it will be added to the overrides on the active sound
---@param AudioBus UAudioBus
---@param SourceBusSendLevel number
function UAudioComponent:SetAudioBusSendPostEffect(AudioBus, SourceBusSendLevel) end

---Start a sound playing on an audio component on a given quantization boundary with the handle to an existing clock
---@param WorldContextObject UObject
---@param InClockHandle UQuartzClockHandle @[out] 
---@param InQuantizationBoundary FQuartzQuantizationBoundary @[out] 
---@param InDelegate Delegate
---@param InStartTime number @[opt] 
---@param InFadeInDuration number @[opt] 
---@param InFadeVolumeLevel number @[opt] 
---@param InFadeCurve EAudioFaderCurve @[opt] 
function UAudioComponent:PlayQuantized(WorldContextObject, InClockHandle, InQuantizationBoundary, InDelegate, InStartTime, InFadeInDuration, InFadeVolumeLevel, InFadeCurve) end

---Start a sound playing on an audio component
---@param StartTime number @[opt] 
function UAudioComponent:Play(StartTime) end

---Returns if the sound is virtualized.
---@return boolean
function UAudioComponent:IsVirtualized() end

---Returns if the sound playing any audio. Doesn't indicate the play state. Use GetPlayState() to get the actual play state.
---@return boolean
function UAudioComponent:IsPlaying() end

---Queries if the sound wave playing in this audio component has cooked FFT data.
---@return boolean
function UAudioComponent:HasCookedFFTData() end

---Queries if the sound wave playing in this audio component has cooked amplitude analyses.
---@return boolean
function UAudioComponent:HasCookedAmplitudeEnvelopeData() end

---Returns the enumerated play states of the audio component.
---@return EAudioComponentPlayState
function UAudioComponent:GetPlayState() end

---Retrieves the current-time cooked spectral data of the sounds playing audio component.
---Spectral data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.
---Returns true if there is data and the audio component is playing.
---@param OutSoundWaveSpectralData TArray_FSoundWaveSpectralDataPerSound_ @[out] 
---@return boolean
function UAudioComponent:GetCookedFFTDataForAllPlayingSounds(OutSoundWaveSpectralData) end

---Retrieves the current-time cooked spectral data of the sounds playing on the audio component.
---Spectral data is averaged and interpolated for all playing sounds on this audio component.
---Returns true if there is data and the audio component is playing.
---@param FrequenciesToGet TArray_number_
---@param OutSoundWaveSpectralData TArray_FSoundWaveSpectralData_ @[out] 
---@return boolean
function UAudioComponent:GetCookedFFTData(FrequenciesToGet, OutSoundWaveSpectralData) end

---Retrieves the current-time envelope data of the sounds playing audio component.
---Envelope data is not averaged or interpolated. Instead an array of data with all playing sound waves with cooked data is returned.
---Returns true if there is data and the audio component is playing.
---@param OutEnvelopeData TArray_FSoundWaveEnvelopeDataPerSound_ @[out] 
---@return boolean
function UAudioComponent:GetCookedEnvelopeDataForAllPlayingSounds(OutEnvelopeData) end

---Retrieves the current-time cooked envelope data of the playing audio component.
---Cooked data is interpolated and averaged across all playing sound waves.
---Returns true if there is data and the audio component is playing.
---@param OutEnvelopeData number @[out] 
---@return boolean
function UAudioComponent:GetCookedEnvelopeData(OutEnvelopeData) end

---This is used in place of "stop" when it is desired to fade the volume of the sound before stopping.
---If FadeTime is 0.0, this is the same as calling Stop().
---If FadeTime is > 0.0, this will adjust the volume multiplier to FadeVolumeLevel over FadeInTime seconds
---and then stop the sound.
---@param FadeOutDuration number
---@param FadeVolumeLevel number
---@param FadeCurve EAudioFaderCurve @[opt] 
function UAudioComponent:FadeOut(FadeOutDuration, FadeVolumeLevel, FadeCurve) end

---This can be used in place of "play" when it is desired to fade in the sound over time.
---If FadeTime is 0.0, the change in volume is instant.
---If FadeTime is > 0.0, the multiplier will be increased from 0 to FadeVolumeLevel over FadeIn seconds.
---@param FadeInDuration number
---@param FadeVolumeLevel number @[opt] 
---@param StartTime number @[opt] 
---@param FadeCurve EAudioFaderCurve @[opt] 
function UAudioComponent:FadeIn(FadeInDuration, FadeVolumeLevel, StartTime, FadeCurve) end

---@param OutAttenuationSettings FSoundAttenuationSettings @[out] 
---@return boolean
function UAudioComponent:BP_GetAttenuationSettingsToApply(OutAttenuationSettings) end

---This will allow one to adjust the volume of an AudioComponent on the fly
---@param AdjustVolumeDuration number
---@param AdjustVolumeLevel number
---@param FadeCurve EAudioFaderCurve @[opt] 
function UAudioComponent:AdjustVolume(AdjustVolumeDuration, AdjustVolumeLevel, FadeCurve) end

---Modify the attenuation settings of the audio component
---@param InAttenuationSettings FSoundAttenuationSettings
function UAudioComponent:AdjustAttenuation(InAttenuationSettings) end
