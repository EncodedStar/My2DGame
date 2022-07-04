---Editor only UI data for systems.
---@class UNiagaraSystemEditorData : UNiagaraEditorDataBase
---@field private RootFolder UNiagaraSystemEditorFolder
---@field private StackEditorData UNiagaraStackEditorData
---@field private OwnerTransform FTransform
---@field private PlaybackRangeMin number
---@field private PlaybackRangeMax number
---@field private SystemOverviewGraph UEdGraph @Graph presenting overview of the current system and its emitters.
---@field private OverviewGraphViewSettings FNiagaraGraphViewSettings
---@field private bSystemIsPlaceholder boolean
local UNiagaraSystemEditorData = {}

