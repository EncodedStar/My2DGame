---@class UEditorSettings : UObject
---@field public bLoadTheMostRecentlyLoadedProjectAtStartup boolean @When checked, the most recently loaded project will be auto-loaded at editor startup if no other project was specified on the command line
---@field public LocalDerivedDataCache FDirectoryPath @Directory to be used for caching derived data locally (native textures, compiled shaders, etc...). The editor must be restarted for changes to take effect.
---@field public SharedDerivedDataCache FDirectoryPath @Path to a network share that can be used for sharing derived data (native textures, compiled shaders, etc...) with a team. Will not disabled if this directory cannot be accessed. The editor must be restarted for changes to take effect.
---@field public bEnableS3DDC boolean @Enables the experimental S3 derived data cache.
---@field public RecentlyOpenedProjectFiles TArray<string> @Game project files that were recently opened in the editor
---@field public CreatedProjectPaths TArray<string> @The paths of projects created with the new project wizard. This is used to populate the "Path" field of the new project dialog.
---@field public bCopyStarterContentPreference boolean
---@field public CompletedSurveys TArray<FGuid> @The id's of the surveys completed
---@field public InProgressSurveys TArray<FGuid> @The id's of the surveys currently in-progress
---@field public AutoScalabilityWorkScaleAmount number
local UEditorSettings = {}

