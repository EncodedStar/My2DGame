---@class UGameplayDebuggerConfig : UObject
---@field public ActivationKey FKey @key used to activate visual debugger tool
---@field public CategoryRowNextKey FKey @select next category row
---@field public CategoryRowPrevKey FKey @select previous category row
---@field public CategorySlot0 FKey @select category slot 0
---@field public CategorySlot1 FKey @select category slot 1
---@field public CategorySlot2 FKey @select category slot 2
---@field public CategorySlot3 FKey @select category slot 3
---@field public CategorySlot4 FKey @select category slot 4
---@field public CategorySlot5 FKey @select category slot 5
---@field public CategorySlot6 FKey @select category slot 6
---@field public CategorySlot7 FKey @select category slot 7
---@field public CategorySlot8 FKey @select category slot 8
---@field public CategorySlot9 FKey @select category slot 9
---@field public DebugCanvasPaddingLeft number @additional canvas padding: left
---@field public DebugCanvasPaddingRight number @additional canvas padding: right
---@field public DebugCanvasPaddingTop number @additional canvas padding: top
---@field public DebugCanvasPaddingBottom number @additional canvas padding: bottom
---@field public bDebugCanvasEnableTextShadow boolean @enable text shadow by default
---@field public Categories TArray<FGameplayDebuggerCategoryConfig>
---@field public Extensions TArray<FGameplayDebuggerExtensionConfig>
local UGameplayDebuggerConfig = {}
