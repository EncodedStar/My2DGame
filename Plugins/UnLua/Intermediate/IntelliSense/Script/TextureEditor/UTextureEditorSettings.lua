---Implements the Editor's user settings.
---@class UTextureEditorSettings : UObject
---@field public Background integer @The type of background to draw in the texture editor view port.
---@field public VolumeViewMode integer @The type of display when viewing volume textures.
---@field public BackgroundColor FColor @Background and foreground color used by Texture preview view ports.
---@field public CheckerColorOne FColor @The first color of the checkered background.
---@field public CheckerColorTwo FColor @The second color of the checkered background.
---@field public CheckerSize integer @The size of the checkered background tiles.
---@field public FitToViewport boolean
---@field public ZoomMode ETextureEditorZoomMode @Whether the texture should scale to fit or fill the view port, or use a custom zoom level.
---@field public TextureBorderColor FColor @Color to use for the texture border, if enabled.
---@field public TextureBorderEnabled boolean @If true, displays a border around the texture.
local UTextureEditorSettings = {}

