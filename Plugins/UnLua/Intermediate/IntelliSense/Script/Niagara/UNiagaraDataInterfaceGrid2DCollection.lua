---@class UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
---@field public RenderTargetUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
---@field public OverrideBufferFormat ENiagaraGpuBufferFormat @When enabled overrides the format used to store data inside the grid, otherwise uses the project default setting.  Lower bit depth formats will save memory and performance at the cost of precision.
---@field public bOverrideFormat boolean
---@field public bPreviewGrid boolean
---@field public PreviewAttribute string @When enabled allows you to preview the grid in a debug display
---@field protected ManagedRenderTargets TMap<integer, UTextureRenderTarget2DArray>
local UNiagaraDataInterfaceGrid2DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
function UNiagaraDataInterfaceGrid2DCollection:GetTextureSize(Component, SizeX, SizeY) end

