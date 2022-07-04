---TextureRenderTargetVolume
---Volume render target texture resource. This can be used as a target
---for rendering as well as rendered as a regular Volume texture resource.
---@class UTextureRenderTargetVolume : UTextureRenderTarget
---@field public SizeX integer @The width of the texture.
---@field public SizeY integer @The height of the texture.
---@field public SizeZ integer @The depth of the texture.
---@field public ClearColor FLinearColor @the color the texture is cleared to
---@field public OverrideFormat integer @Normally the format is derived from bHDR, this allows code to set the format explicitly.
---@field public bHDR boolean @Whether to support storing HDR values, which requires more memory.
---@field public bForceLinearGamma boolean @True to force linear gamma space for this render target
local UTextureRenderTargetVolume = {}

