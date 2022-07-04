---@class UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D
---@field public NumAttributes integer @Number of attributes stored on the grid
---@field public RenderTargetUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
---@field public BufferFormat ENiagaraGpuBufferFormat @Changes the format used to store data inside the grid, low bit formats save memory and performance.
local UNiagaraDataInterfaceGrid3DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
---@param SizeZ integer @[out] 
function UNiagaraDataInterfaceGrid3DCollection:GetTextureSize(Component, SizeX, SizeY, SizeZ) end

---@param Component UNiagaraComponent
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
---@param SizeZ integer @[out] 
function UNiagaraDataInterfaceGrid3DCollection:GetRawTextureSize(Component, SizeX, SizeY, SizeZ) end

