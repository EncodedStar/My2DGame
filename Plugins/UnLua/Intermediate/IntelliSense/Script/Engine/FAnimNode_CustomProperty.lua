---Custom property node that you'd like to expand pin by reflecting internal instance (we call TargetInstance here)
--- Used by sub anim instance or control rig node
---    where you have internal instance and would like to reflect to AnimNode as a pin
--- To make pin working, you need storage inside of AnimInstance (SourceProperties/SourcePropertyNames)
--- So this creates storage inside of AnimInstance with the unique custom property name
---    and it copies to the actually TargetInstance here to allow the information be transferred in runtime (DestProperties/DestPropertyNames)
--- TargetInstance - UObject derived instance that has certain dest properties
--- Source - AnimInstance's copy properties that is used to store the data
---@class FAnimNode_CustomProperty : FAnimNode_Base
---@field protected SourcePropertyNames TArray<string> @List of source properties to use, 1-1 with Dest names below, built by the compiler
---@field protected DestPropertyNames TArray<string> @List of destination properties to use, 1-1 with Source names above, built by the compiler
---@field protected TargetInstance UObject @This is the actual instance allocated at runtime that will run. Set by child class.
local FAnimNode_CustomProperty = {}
