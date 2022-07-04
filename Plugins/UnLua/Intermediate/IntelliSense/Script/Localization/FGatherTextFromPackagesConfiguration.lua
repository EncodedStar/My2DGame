---@class FGatherTextFromPackagesConfiguration
---@field public IsEnabled boolean @If enabled, text from packages will be gathered according to this configuration.
---@field public IncludePathWildcards TArray<FGatherTextIncludePath> @Packages whose paths match these wildcard patterns, specified relative to the project's root, may be processed for gathering.
---@field public ExcludePathWildcards TArray<FGatherTextExcludePath> @Packages whose paths match these wildcard patterns will be excluded from gathering.
---@field public FileExtensions TArray<FGatherTextFileExtension> @Packages whose names match these wildcard patterns may be processed for text to gather.
---@field public Collections TArray<string> @Packages in these collections may be processed for gathering.
---@field public ExcludeClasses TArray<FSoftClassPath> @Classes that should be excluded from gathering.
---@field public ShouldExcludeDerivedClasses boolean @Should classes derived from those in the exclude classes list also be excluded from gathering?
---@field public ShouldGatherFromEditorOnlyData boolean @If enabled, data that is specified as editor-only may be processed for gathering.
---@field public SkipGatherCache boolean @Should we ignore the cached text in the package header and perform a full package load instead?
local FGatherTextFromPackagesConfiguration = {}
