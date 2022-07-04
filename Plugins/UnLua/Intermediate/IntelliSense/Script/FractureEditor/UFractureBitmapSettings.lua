---@class UFractureBitmapSettings : UObject
---@field public Transform FTransform @Transform for initial pattern position and orientation. By default 2d pattern lies in XY plane (Y is up) the center of pattern is (0, 0)
---@field public Scale FVector2D @Scale for pattern. Unscaled pattern has size (1, 1). For negative scale pattern will be placed at the center of chunk and scaled with max distance between points of its AABB
---@field public IsRelativeTransform boolean @If relative transform is set - position will be displacement vector from chunk's center. Otherwise from global origin.
---@field public SnapThreshold number @The pixel distance at which neighboring Bitmapvertices and segments may be snapped into alignment. By default set it to 1
---@field public SegmentationErrorThreshold number @Reduce the number of vertices on curve until segmentation error is smaller than this value. By default set it to 0.001
---@field public CutoutTexture TWeakObjectPtr<UTexture2D> @Cutout bitmap
local UFractureBitmapSettings = {}

