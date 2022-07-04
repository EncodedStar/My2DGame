---@class UNiagaraNodeFunctionCall : UNiagaraNodeWithDynamicPins
---@field public FunctionScript UNiagaraScript
---@field public FunctionScriptAssetObjectPath string @A path to a script asset which can be used to assign the function script the first time that default pins are generated. This is used so that the function nodes can be populated in the graph context menu without having to load all of the actual script assets.
---@field public Signature FNiagaraFunctionSignature @Some functions can be provided a signature directly rather than a script.
---@field public FunctionSpecifiers TMap<string, string>
---@field public PropagatedStaticSwitchParameters TArray<FNiagaraPropagatedVariable> @All the input values the function propagates to the next higher caller instead of forcing the user to set them directly.
---@field protected CachedChangeId FGuid @Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions.
---@field protected FunctionDisplayName string
---@field protected MessageKeyToMessageMap TMap<FGuid, UNiagaraMessageData>
local UNiagaraNodeFunctionCall = {}

