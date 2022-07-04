---Represents the appearance of an SCheckBox
---@class FCheckBoxStyle : FSlateWidgetStyle
---@field public CheckBoxType integer @The visual type of the checkbox
---@field public UncheckedImage FSlateBrush @CheckBox appearance when the CheckBox is unchecked (normal)
---@field public UncheckedHoveredImage FSlateBrush @CheckBox appearance when the CheckBox is unchecked and hovered
---@field public UncheckedPressedImage FSlateBrush @CheckBox appearance when the CheckBox is unchecked and hovered
---@field public CheckedImage FSlateBrush @CheckBox appearance when the CheckBox is checked
---@field public CheckedHoveredImage FSlateBrush @CheckBox appearance when checked and hovered
---@field public CheckedPressedImage FSlateBrush @CheckBox appearance when checked and pressed
---@field public UndeterminedImage FSlateBrush @CheckBox appearance when the CheckBox is undetermined
---@field public UndeterminedHoveredImage FSlateBrush @CheckBox appearance when CheckBox is undetermined and hovered
---@field public UndeterminedPressedImage FSlateBrush @CheckBox appearance when CheckBox is undetermined and pressed
---@field public Padding FMargin @Padding
---@field public ForegroundColor FSlateColor @The foreground color
---@field public BorderBackgroundColor FSlateColor @BorderBackgroundColor refers to the actual color and opacity of the supplied border image on toggle buttons
---@field public CheckedSlateSound FSlateSound @The sound the check box should play when checked
---@field public UncheckedSlateSound FSlateSound @The sound the check box should play when unchecked
---@field public HoveredSlateSound FSlateSound @The sound the check box should play when initially hovered over
local FCheckBoxStyle = {}