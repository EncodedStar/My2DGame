---@class UMeshReconstructorBase : UObject
local UMeshReconstructorBase = {}

function UMeshReconstructorBase:StopReconstruction() end

function UMeshReconstructorBase:StartReconstruction() end

function UMeshReconstructorBase:PauseReconstruction() end

---@return boolean
function UMeshReconstructorBase:IsReconstructionStarted() end

---@return boolean
function UMeshReconstructorBase:IsReconstructionPaused() end

