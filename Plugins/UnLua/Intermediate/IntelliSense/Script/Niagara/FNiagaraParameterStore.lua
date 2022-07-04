---Base storage class for Niagara parameter values.
---@class FNiagaraParameterStore
---@field private Owner UObject @Owner of this store. Used to provide an outer to data interfaces in this store.
---@field private ParameterOffsets TMap<FNiagaraVariable, integer> @Map from parameter defs to their offset in the data table or the data interface. TODO: Separate out into a layout and instance class to reduce duplicated data for this?
---@field private SortedParameterOffsets TArray<FNiagaraVariableWithOffset> @Storage for the set of variables that are represented by this ParameterStore.  Shouldn't be accessed directly, instead use       ReadParameterVariables()
---@field private ParameterData TArray<integer> @Buffer containing parameter data. Indexed using offsets in ParameterOffsets
---@field private DataInterfaces TArray<UNiagaraDataInterface> @Data interfaces for this script. Possibly overridden with externally owned interfaces. Also indexed by ParameterOffsets.
---@field private UObjects TArray<UObject> @UObjects referenced by this store. Also indexed by ParameterOffsets.
---@field public DebugName string
local FNiagaraParameterStore = {}
