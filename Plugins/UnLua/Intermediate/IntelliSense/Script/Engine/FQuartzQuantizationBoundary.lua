---struct used to specify the quantization boundary of an event
---@class FQuartzQuantizationBoundary
---@field public Quantization EQuartzCommandQuantization @resolution we are interested in
---@field public Multiplier number @how many "Resolutions" to wait before the onset we care about
---@field public CountingReferencePoint EQuarztQuantizationReference
local FQuartzQuantizationBoundary = {}
