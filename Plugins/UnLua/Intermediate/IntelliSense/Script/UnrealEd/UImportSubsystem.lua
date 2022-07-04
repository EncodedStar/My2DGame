---UImportSubsystem
---Subsystem for importing assets in the editor,
---Contains utility functions and callbacks for hooking into importing.
---@class UImportSubsystem : UEditorSubsystem
---@field private OnAssetPreImport_BP MulticastDelegate
---@field private OnAssetPostImport_BP MulticastDelegate
---@field private OnAssetReimport_BP MulticastDelegate
---@field private OnAssetPostLODImport_BP MulticastDelegate
local UImportSubsystem = {}

