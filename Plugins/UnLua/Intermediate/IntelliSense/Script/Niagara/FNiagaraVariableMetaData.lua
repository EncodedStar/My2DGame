---@class FNiagaraVariableMetaData
---@field public Description string
---@field public CategoryName string
---@field public bAdvancedDisplay boolean @Declares that this input is advanced and should only be visible if expanded inputs have been expanded.
---@field public EditorSortPriority integer @Affects the sort order in the editor stacks. Use a smaller number to push it to the top. Defaults to zero.
---@field public bInlineEditConditionToggle boolean @Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a       checkbox inline with the input which was designated as its edit condition.
---@field public EditCondition FNiagaraInputConditionMetadata @Declares the associated input should be conditionally editable based on the value of another input.
---@field public VisibleCondition FNiagaraInputConditionMetadata @Declares the associated input should be conditionally visible based on the value of another input.
---@field public PropertyMetaData TMap<string, string> @Property Metadata
---@field public ParentAttribute string @If set, this attribute is visually displayed as a child under the given parent attribute. Currently, only static switches are supported as parent attributes!
---@field private ScopeName string @Defines the scope of a variable that is an input to a script. Used to lookup registered scope infos and resolve the actual ENiagaraParameterScope and Namespace string to use.
---@field private Usage ENiagaraScriptParameterUsage @Defines the usage of a variable as an argument or output relative to the script.
---@field private bIsStaticSwitch boolean @This is a read-only variable that designates if the metadata is tied to a static switch or not.
---@field private StaticSwitchDefaultValue integer @The default value to use when creating new pins or stack entries for a static switch parameter
---@field private bAddedToNodeGraphDeepCopy boolean @Transient data to mark variables set in the node graph deep copy as having been derived from a module namespace parameter default.
---@field private bOutputIsPersistent boolean @Only valid if Usage is Output. Marks the associated FNiagaraVariable as Persistent across script runs and therefore should be retained in the Dataset during compilation/translation.
---@field private CachedNamespacelessVariableName string @Namespace-less name for associated FNiagaraVariable. Edited directly by user and then used to generate full Name of associated FNiagaraVariable.
---@field private bCreatedInSystemEditor boolean @Track if the associated parameter was created in the Emitter/System editor. Used to determine whether the associated parameter can be deleted from the Emitter/System editor.
---@field private bUseLegacyNameString boolean @Enable using a legacy custom name string.
local FNiagaraVariableMetaData = {}