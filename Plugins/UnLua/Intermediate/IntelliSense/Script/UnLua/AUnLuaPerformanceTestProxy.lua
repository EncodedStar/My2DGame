---@class AUnLuaPerformanceTestProxy : AActor
---@field private MeshID integer
---@field private MeshName string
---@field private COM FVector
---@field private Indices TArray<integer>
---@field private Positions TArray<FVector>
---@field private PredictedPositions TArray<FVector>
local AUnLuaPerformanceTestProxy = {}

---@param NewPositions TArray_FVector_
function AUnLuaPerformanceTestProxy:UpdatePositions(NewPositions) end

---@param NewName string
---@return string
function AUnLuaPerformanceTestProxy:UpdateMeshName(NewName) end

---@param NewID integer
---@return integer
function AUnLuaPerformanceTestProxy:UpdateMeshID(NewID) end

---@param NewIndices TArray_integer_
function AUnLuaPerformanceTestProxy:UpdateIndices(NewIndices) end

---@param DeltaTime number
function AUnLuaPerformanceTestProxy:Simulate(DeltaTime) end

---@param Origin FVector
---@param Direction FVector
---@return boolean
function AUnLuaPerformanceTestProxy:Raycast(Origin, Direction) end

function AUnLuaPerformanceTestProxy:NOP() end

---@return TArray_FVector_
function AUnLuaPerformanceTestProxy:GetPredictedPositions() end

---@param OutPositions TArray_FVector_ @[out] 
function AUnLuaPerformanceTestProxy:GetPositions(OutPositions) end

---@return string
function AUnLuaPerformanceTestProxy:GetMeshName() end

---@param OutMeshID integer @[out] 
---@param OutMeshName string @[out] 
---@param OutCOM FVector @[out] 
---@param OutIndices TArray_integer_ @[out] 
---@param OutPositions TArray_FVector_ @[out] 
---@param OutPredictedPositions TArray_FVector_ @[out] 
---@return boolean
function AUnLuaPerformanceTestProxy:GetMeshInfo(OutMeshID, OutMeshName, OutCOM, OutIndices, OutPositions, OutPredictedPositions) end

---@return integer
function AUnLuaPerformanceTestProxy:GetMeshID() end

---@param OutIndices TArray_integer_ @[out] 
function AUnLuaPerformanceTestProxy:GetIndices(OutIndices) end

---@return FVector
function AUnLuaPerformanceTestProxy:GetCOM() end

