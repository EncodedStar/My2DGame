---@class FNiagaraFunctionSignature
---@field public Name string @Name of the function.
---@field public Inputs TArray<FNiagaraVariable> @Input parameters to this function.
---@field public Outputs TArray<FNiagaraVariable> @Input parameters of this function.
---@field public OwnerName string @Id of the owner is this is a member function.
---@field public bRequiresContext boolean
---@field public bRequiresExecPin boolean @Does this function need an exec pin for control flow because it has internal side effects that be seen by the script VM and could therefore be optimized out? If so, set to true. Default is false.
---@field public bMemberFunction boolean @True if this is the signature for a "member" function of a data interface. If this is true, the first input is the owner.
---@field public bExperimental boolean @Is this function experimental?
---@field public ExperimentalMessage string @The message to display when a function is marked experimental.
---@field public FunctionVersion integer @Per function version, it is up to the discretion of the function as to what the version means.
---@field public bSupportsCPU boolean @Support running on the CPU.
---@field public bSupportsGPU boolean @Support running on the GPU.
---@field public bWriteFunction boolean @Writes to the variable this is bound to
---@field public bSoftDeprecatedFunction boolean @Whether or not this function should show up in normal usage.
---@field public ModuleUsageBitmask integer @Bitmask for which scripts are supported for this function. Use UNiagaraScript::MakeSupportedUsageContextBitmask to make the bitmask.
---@field public ContextStageMinIndex integer @When using simulation stages and bRequiresContext is true this will be the index of the stage that is associated with the function.
---@field public ContextStageMaxIndex integer
---@field public FunctionSpecifiers TMap<string, string> @Function specifiers verified at bind time.
---@field public Description string
local FNiagaraFunctionSignature = {}