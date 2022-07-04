---@class UARSessionConfig : UDataAsset
---@field public bGenerateMeshDataFromTrackedGeometry boolean @Whether the AR system should generate mesh data that can be rendered, collided against, nav mesh generated on, etc.
---@field public bGenerateCollisionForMeshData boolean @Whether the AR system should generate collision data from the mesh data or not
---@field public bGenerateNavMeshForMeshData boolean @Whether the AR system should generate navigation mesh data from the mesh data or not
---@field public bUseMeshDataForOcclusion boolean @Whether the AR system render the mesh data as occlusion meshes or not
---@field public bRenderMeshDataInWireframe boolean @Whether the AR system should render the mesh data in wireframe or not
---@field public bTrackSceneObjects boolean @Whether the AR system should report scene objects (@@see EARObjectClassification::SceneObject)
---@field public bUsePersonSegmentationForOcclusion boolean @Whether to occlude the virtual content with the result from person segmentation
---@field public bUseSceneDepthForOcclusion boolean @Whether to occlude the virtual content with the scene depth information
---@field public bUseAutomaticImageScaleEstimation boolean @Whether to automatically estimate and set the scale of a detected or tracked image.
---@field public bUseStandardOnboardingUX boolean @Whether to use the standard onboarding UX, if the system supports it.
---@field protected WorldAlignment EARWorldAlignment @
---@field protected SessionType EARSessionType @
---@field protected bHorizontalPlaneDetection boolean @Should we detect flat horizontal surfaces: e.g. table tops, windows sills
---@field protected bVerticalPlaneDetection boolean @Should we detect flat vertical surfaces: e.g. paintings, monitors, book cases
---@field protected bEnableAutoFocus boolean @Whether the camera should use autofocus or not (can cause subtle shifts in position for small objects at macro camera distance)
---@field protected LightEstimationMode EARLightEstimationMode @
---@field protected FrameSyncMode EARFrameSyncMode @
---@field protected bEnableAutomaticCameraOverlay boolean @Whether the AR camera feed should be drawn as an overlay or not. Defaults to true.
---@field protected bEnableAutomaticCameraTracking boolean @Whether the game camera should track the device movement or not. Defaults to true.
---@field protected bResetCameraTracking boolean @Whether the AR system should reset camera tracking (origin, transform) or not. Defaults to true.
---@field protected bResetTrackedObjects boolean @Whether the AR system should remove any tracked objects or not. Defaults to true.
---@field protected CandidateImages TArray<UARCandidateImage> @The list of candidate images to detect within the AR camera view
---@field protected MaxNumSimultaneousImagesTracked integer @The maximum number of images to track at the same time. Defaults to 1
---@field protected EnvironmentCaptureProbeType EAREnvironmentCaptureProbeType @How the AR system should handle texture probe capturing
---@field protected WorldMapData TArray<integer> @A previously saved world that is to be loaded when the session starts
---@field protected CandidateObjects TArray<UARCandidateObject> @A list of candidate objects to search for in the scene
---@field protected DesiredVideoFormat FARVideoFormat @The desired video format (or the default if not supported) that this session should use if the camera is enabled Note: Call GetSupportedVideoFormats to get a list of device supported formats
---@field protected bUseOptimalVideoFormat boolean @Whether to automatically pick the video format that best matches the device screen size
---@field protected FaceTrackingDirection EARFaceTrackingDirection @Whether to track the face as if you are looking out of the device or as a mirror
---@field protected FaceTrackingUpdate EARFaceTrackingUpdate @Whether to track the face as if you are looking out of the device or as a mirror
---@field protected MaxNumberOfTrackedFaces integer @The maximum number of faces to track simultaneously.
---@field protected SerializedARCandidateImageDatabase TArray<integer> @Data array for storing the cooked image database
---@field protected EnabledSessionTrackingFeature EARSessionTrackingFeature @A list of session features  to enable
---@field protected SceneReconstructionMethod EARSceneReconstruction @Which scene reconstruction method to use
---@field protected PlaneComponentClass TSubclassOf<UARPlaneComponent> @Class binding for to facilitate networking
---@field protected PointComponentClass TSubclassOf<UARPointComponent>
---@field protected FaceComponentClass TSubclassOf<UARFaceComponent>
---@field protected ImageComponentClass TSubclassOf<UARImageComponent>
---@field protected QRCodeComponentClass TSubclassOf<UARQRCodeComponent>
---@field protected PoseComponentClass TSubclassOf<UARPoseComponent>
---@field protected EnvironmentProbeComponentClass TSubclassOf<UAREnvironmentProbeComponent>
---@field protected ObjectComponentClass TSubclassOf<UARObjectComponent>
---@field protected MeshComponentClass TSubclassOf<UARMeshComponent>
---@field protected GeoAnchorComponentClass TSubclassOf<UARGeoAnchorComponent>
---@field protected DefaultMeshMaterial UMaterialInterface @The default mesh material used by the generated mesh component
---@field protected DefaultWireframeMeshMaterial UMaterialInterface @The default mesh material used by the wireframe setting of the generated mesh component.  Note: It is reccomended to ignore this 'wireframe' feature and use a wirefraem material in the DefaultMeshMaterial if you want wireframe.
local UARSessionConfig = {}

---
---@return boolean
function UARSessionConfig:ShouldResetTrackedObjects() end

---
---@return boolean
function UARSessionConfig:ShouldResetCameraTracking() end

---
---@return boolean
function UARSessionConfig:ShouldRenderCameraOverlay() end

---
---@return boolean
function UARSessionConfig:ShouldEnableCameraTracking() end

---
---@return boolean
function UARSessionConfig:ShouldEnableAutoFocus() end

---
---@param WorldMapData TArray_integer_
function UARSessionConfig:SetWorldMapData(WorldMapData) end

---
---@param InSessionTrackingFeature EARSessionTrackingFeature
function UARSessionConfig:SetSessionTrackingFeatureToEnable(InSessionTrackingFeature) end

---
---@param InSceneReconstructionMethod EARSceneReconstruction
function UARSessionConfig:SetSceneReconstructionMethod(InSceneReconstructionMethod) end

---
---@param bNewValue boolean
function UARSessionConfig:SetResetTrackedObjects(bNewValue) end

---
---@param bNewValue boolean
function UARSessionConfig:SetResetCameraTracking(bNewValue) end

---
---@param InUpdate EARFaceTrackingUpdate
function UARSessionConfig:SetFaceTrackingUpdate(InUpdate) end

---
---@param InDirection EARFaceTrackingDirection
function UARSessionConfig:SetFaceTrackingDirection(InDirection) end

---
---@param bNewValue boolean
function UARSessionConfig:SetEnableAutoFocus(bNewValue) end

---
---@param NewFormat FARVideoFormat
function UARSessionConfig:SetDesiredVideoFormat(NewFormat) end

---
---@param InCandidateObjects TArray_UARCandidateObject_
function UARSessionConfig:SetCandidateObjectList(InCandidateObjects) end

---
---@return TArray_integer_
function UARSessionConfig:GetWorldMapData() end

---
---@return EARWorldAlignment
function UARSessionConfig:GetWorldAlignment() end

---
---@return EARSessionType
function UARSessionConfig:GetSessionType() end

---
---@return EARSceneReconstruction
function UARSessionConfig:GetSceneReconstructionMethod() end

---
---@return EARPlaneDetectionMode
function UARSessionConfig:GetPlaneDetectionMode() end

---
---@return integer
function UARSessionConfig:GetMaxNumSimultaneousImagesTracked() end

---
---@return EARLightEstimationMode
function UARSessionConfig:GetLightEstimationMode() end

---
---@return EARFrameSyncMode
function UARSessionConfig:GetFrameSyncMode() end

---
---@return EARFaceTrackingUpdate
function UARSessionConfig:GetFaceTrackingUpdate() end

---
---@return EARFaceTrackingDirection
function UARSessionConfig:GetFaceTrackingDirection() end

---
---@return EAREnvironmentCaptureProbeType
function UARSessionConfig:GetEnvironmentCaptureProbeType() end

---
---@return EARSessionTrackingFeature
function UARSessionConfig:GetEnabledSessionTrackingFeature() end

---
---@return FARVideoFormat
function UARSessionConfig:GetDesiredVideoFormat() end

---
---@return TArray_UARCandidateObject_
function UARSessionConfig:GetCandidateObjectList() end

---
---@return TArray_UARCandidateImage_
function UARSessionConfig:GetCandidateImageList() end

---
---@param CandidateObject UARCandidateObject
function UARSessionConfig:AddCandidateObject(CandidateObject) end

---Add a new CandidateImage to the ARSessionConfig.
---@param NewCandidateImage UARCandidateImage
function UARSessionConfig:AddCandidateImage(NewCandidateImage) end

