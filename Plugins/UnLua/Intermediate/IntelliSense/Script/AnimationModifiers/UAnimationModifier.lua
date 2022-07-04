---@class UAnimationModifier : UObject
---@field private RevisionGuid FGuid @VisibleAnywhere for testing, Category = Revision
---@field private AppliedGuid FGuid @VisibleAnywhere for testing, Category = Revision
---@field private StoredNativeRevision integer @This holds the latest value returned by UpdateNativeRevisionGuid during the last PostLoad (changing this value will invalidate the GUIDs for all instances)
---@field private PreviouslyAppliedModifier UAnimationModifier @Serialized version of the modifier that has been previously applied to the Animation Asset
local UAnimationModifier = {}

