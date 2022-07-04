---@class UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase
---@field public Size FIntPoint
---@field public OverrideRenderTargetFormat integer @When enabled overrides the format of the render target, otherwise uses the project default setting.
---@field public bOverrideFormat boolean
---@field public bPreviewRenderTarget boolean
---@field public RenderTargetUserParameter FNiagaraUserParameterBinding @When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation
---@field protected ManagedRenderTargets TMap<integer, UTextureRenderTarget2D>
local UNiagaraDataInterfaceRenderTarget2D = {}

