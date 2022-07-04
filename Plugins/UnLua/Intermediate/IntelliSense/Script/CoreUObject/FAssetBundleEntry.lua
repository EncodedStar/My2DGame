---@class FAssetBundleEntry
---@field public BundleScope FPrimaryAssetId @Asset this bundle is saved within. This is empty for global bundles, or in the saved bundle info
---@field public BundleName string @Specific name of this bundle, should be unique for a given scope
---@field public BundleAssets TArray<FSoftObjectPath> @List of string assets contained in this bundle
local FAssetBundleEntry = {}
