---@class UEdGraphNode : UObject
---@field public DeprecatedPins TArray<UEdGraphPin_Deprecated> @List of connector pins
---@field public NodePosX integer @X position of node in the editor
---@field public NodePosY integer @Y position of node in the editor
---@field public NodeWidth integer @Width of node in the editor; only used when the node can be resized
---@field public NodeHeight integer @Height of node in the editor; only used when the node can be resized
---@field public AdvancedPinDisplay integer @Enum to indicate if a node has advanced-display-pins, and if they are shown
---@field private EnabledState ENodeEnabledState @Indicates in what state the node is enabled, which may eliminate it from being compiled
---@field private bDisplayAsDisabled boolean
---@field private bUserSetEnabledState boolean @Indicates whether or not the user explicitly set the enabled state
---@field public bCanResizeNode boolean @If true, this node can be resized and should be drawn with a resize handle
---@field public bHasCompilerMessage boolean @Flag to check for compile error/warning
---@field public bCommentBubblePinned boolean
---@field public bCommentBubbleVisible boolean @Comment bubble visibility
---@field public bCommentBubbleMakeVisible boolean @Make comment bubble visible
---@field public bCanRenameNode boolean @If true, this node can be renamed in the editor
---@field public NodeUpgradeMessage string @Note for a node that lingers until saved
---@field public NodeComment string @Comment string that is drawn on the node
---@field public ErrorType integer @Flag to store node specific compile error/warning
---@field public ErrorMsg string @Error/Warning description
---@field public NodeGuid FGuid @GUID to uniquely identify this node, to facilitate diffing versions of this graph
local UEdGraphNode = {}

