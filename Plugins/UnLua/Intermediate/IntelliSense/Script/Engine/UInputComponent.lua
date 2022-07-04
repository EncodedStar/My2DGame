---Implement an Actor component for input bindings.
---An Input Component is a transient component that enables an Actor to bind various forms of input events to delegate functions.
---Input components are processed from a stack managed by the PlayerController and processed by the PlayerInput.
---Each binding can consume the input event preventing other components on the input stack from processing the input.
---@class UInputComponent : UActorComponent
---@field private CachedKeyToActionInfo TArray<FCachedKeyToActionInfo>
local UInputComponent = {}

