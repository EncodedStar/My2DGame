---@class FStaticSwitchTypeData
---@field public SwitchType ENiagaraStaticSwitchType @This determines how the switch value is interpreted
---@field public MaxIntCount integer @If the type is int, this sets the upper range of input values the switch supports (so pins = MaxIntCount + 1)
---@field public Enum UEnum @If the type is enum, this is the enum being switched on, otherwise it holds no sensible value
---@field public SwitchConstant string @If set, then this switch is not exposed but will rather be evaluated by the given compile-time constant
local FStaticSwitchTypeData = {}
