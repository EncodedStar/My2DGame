---A blueprintable capture protocol that defines how to capture frames from the engine
---@class UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase
---@field protected World UWorld @World pointer assigned on Setup
local UUserDefinedCaptureProtocol = {}

---Instruct this protocol to stop capturing LDR final pixels
function UUserDefinedCaptureProtocol:StopCapturingFinalPixels() end

---Instruct this protocol to start capturing LDR final pixels (including slate widgets and burn-ins)
---@param StreamID FCapturedPixelsID
function UUserDefinedCaptureProtocol:StartCapturingFinalPixels(StreamID) end

---* Resolve the specified buffer and pass it directly to the specified handler when done (does not pass to any bound streams)
---*
---* @@param Buffer          The desired buffer to save
---* @@param BufferID        The ID of this buffer that is passed to the pixel handler (e.g. a composition pass name).
---@param Buffer UTexture
---@param BufferID FCapturedPixelsID
function UUserDefinedCaptureProtocol:ResolveBuffer(Buffer, BufferID) end

---Access this protocol's current frame metrics
---@return FFrameMetrics
function UUserDefinedCaptureProtocol:GetCurrentFrameMetrics() end

---Generate a filename for the current frame
---@param InFrameMetrics FFrameMetrics
---@return string
function UUserDefinedCaptureProtocol:GenerateFilename(InFrameMetrics) end

