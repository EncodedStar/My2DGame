---An audio bus is an object which represents an audio patch chord. Audio can be sent to it. It can be sonified using USoundSourceBuses.
---Instances of the audio bus are created in the audio engine.
---@class UAudioBus : UObject
---@field public AudioBusChannels EAudioBusChannels @How many channels to use for the source bus.
---@field public bIsAutomatic boolean @If the audio bus can be instantiated and destroyed automatically when sources send audio to it. If this audio bus is manually started, it will override this value to be false, meaning you will need to stop the audio bus manually.
local UAudioBus = {}

