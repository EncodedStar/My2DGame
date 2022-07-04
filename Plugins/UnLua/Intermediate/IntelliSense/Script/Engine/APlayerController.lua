---PlayerControllers are used by human players to control Pawns.
---ControlRotation (accessed via GetControlRotation()), determines the aiming
---orientation of the controlled Pawn.
---In networked games, PlayerControllers exist on the server for every player-controlled pawn,
---and also on the controlling client's machine. They do NOT exist on a client's
---machine for pawns controlled by remote players elsewhere on the network.
---@class APlayerController : AController
---@field public Player UPlayer @UPlayer associated with this PlayerController.  Could be a local player or a net connection.
---@field public AcknowledgedPawn APawn @Used in net games so client can acknowledge it possessed a specific pawn.
---@field public ControllingDirTrackInst UInterpTrackInstDirector @Director track that's currently possessing this player controller, or none if not possessed.
---@field public MyHUD AHUD @Heads up display associated with this PlayerController.
---@field public PlayerCameraManager APlayerCameraManager @Camera manager associated with this Player Controller.
---@field public PlayerCameraManagerClass TSubclassOf<APlayerCameraManager> @PlayerCamera class should be set for each game, otherwise Engine.PlayerCameraManager is used
---@field public bAutoManageActiveCameraTarget boolean @True to allow this player controller to manage the camera target for you, typically by using the possessed pawn as the camera target. Set to false if you want to manually control the camera target.
---@field public TargetViewRotation FRotator @Used to replicate the view rotation of targets not owned/possessed by this PlayerController.
---@field public SmoothTargetViewRotationSpeed number @Interp speed for blending remote view rotation for smoother client updates
---@field public HiddenActors TArray<AActor> @The actors which the camera shouldn't see - e.g. used to hide actors which the camera penetrates
---@field public HiddenPrimitiveComponents TArray<TWeakObjectPtr<UPrimitiveComponent>> @Explicit components the camera shouldn't see (helpful for external systems to hide a component from a single player)
---@field public LastSpectatorStateSynchTime number @Used to make sure the client is kept synchronized when in a spectator state
---@field public LastSpectatorSyncLocation FVector @Last location synced on the server for a spectator.
---@field public LastSpectatorSyncRotation FRotator @Last rotation synced on the server for a spectator.
---@field public ClientCap integer @Cap set by server on bandwidth from client to server in bytes/sec (only has impact if >=2600)
---@field public CheatManager UCheatManager @Object that manages "cheat" commands. By default:   - Debug and Development builds will force it to be instantiated (@@see APlayerController::EnableCheats).   - Test and Shipping builds will only instantiate it if the authoritative game mode allows cheats (@@see AGameModeBase::AllowCheats). This behavior can be changed either by overriding APlayerController::EnableCheats or AGameModeBase::AllowCheats.
---@field public CheatClass TSubclassOf<UCheatManager> @Class of my CheatManager.
---@field public PlayerInput UPlayerInput @Object that manages player input.
---@field public ActiveForceFeedbackEffects TArray<FActiveForceFeedbackEffect>
---@field public bPlayerIsWaiting boolean @True if PlayerController is currently waiting for the match to start or to respawn. Only valid in Spectating state.
---@field public NetPlayerIndex integer @Index identifying players using the same base connection (splitscreen clients) Used by netcode to match replicated PlayerControllers to the correct splitscreen viewport and child connection replicated via special internal code, not through normal variable replication
---@field public PendingSwapConnection UNetConnection @This is set on the OLD PlayerController when performing a swap over a network connection so we know what connection we're waiting on acknowledgment from to finish destroying this PC (or when the connection is closed)
---@field public NetConnection UNetConnection @The net connection this controller is communicating on, nullptr for local players on server
---@field public InputYawScale number @Yaw input speed scaling
---@field public InputPitchScale number @Pitch input speed scaling
---@field public InputRollScale number @Roll input speed scaling
---@field public bShowMouseCursor boolean @Whether the mouse cursor should be displayed.
---@field public bEnableClickEvents boolean @Whether actor/component click events should be generated.
---@field public bEnableTouchEvents boolean @Whether actor/component touch events should be generated.
---@field public bEnableMouseOverEvents boolean @Whether actor/component mouse over events should be generated.
---@field public bEnableTouchOverEvents boolean @Whether actor/component touch over events should be generated.
---@field public bForceFeedbackEnabled boolean
---@field public ForceFeedbackScale number @Scale applied to force feedback values
---@field public ClickEventKeys TArray<FKey> @List of keys that will cause click events to be forwarded, default to left click
---@field public DefaultMouseCursor integer @Type of mouse cursor to show by default
---@field public CurrentMouseCursor integer @Currently visible mouse cursor
---@field public DefaultClickTraceChannel integer @Default trace channel used for determining what world object was clicked on.
---@field public CurrentClickTraceChannel integer @Trace channel currently being used for determining what world object was clicked on.
---@field public HitResultTraceDistance number @Distance to trace when computing click events
---@field public SeamlessTravelCount integer @Counter for this players seamless travels (used along with the below value, to restrict ServerNotifyLoadedWorld)
---@field public LastCompletedSeamlessTravelCount integer @The value of SeamlessTravelCount, upon the last call to GameModeBase::HandleSeamlessTravelPlayer; used to detect seamless travel
---@field protected InactiveStateInputComponent UInputComponent @InputComponent we use when player is in Inactive state.
---@field protected bShouldPerformFullTickWhenPaused boolean @Whether we fully tick when the game is paused, if our tick function is allowed to do so. If false, we do a minimal update during the tick.
---@field protected CurrentTouchInterface UTouchInterface @The currently set touch interface
---@field private SpectatorPawn ASpectatorPawn @The pawn used when spectating (nullptr if not spectating).
---@field private bIsLocalPlayerController boolean @Set during SpawnActor once and never again to indicate the intent of this controller instance (SERVER ONLY)
---@field protected SpawnLocation FVector @The location used internally when there is no pawn or spectator, to know where to spawn the spectator or focus the camera on death.
local APlayerController = {}

---Returns true if the given key/button was down last frame and up this frame.
---@param Key FKey
---@return boolean
function APlayerController:WasInputKeyJustReleased(Key) end

---Returns true if the given key/button was up last frame and down this frame.
---@param Key FKey
---@return boolean
function APlayerController:WasInputKeyJustPressed(Key) end

---Stops a playing haptic feedback curve
---@param Hand EControllerHand
function APlayerController:StopHapticEffect(Hand) end

---Set the virtual joystick visibility.
---@param bVisible boolean
function APlayerController:SetVirtualJoystickVisibility(bVisible) end

---Set the view target blending with variable control
---@param NewViewTarget AActor
---@param BlendTime number @[opt] 
---@param BlendFunc integer @[opt] 
---@param BlendExp number @[opt] 
---@param bLockOutgoing boolean @[opt] 
function APlayerController:SetViewTargetWithBlend(NewViewTarget, BlendTime, BlendFunc, BlendExp, bLockOutgoing) end

---Positions the mouse cursor in screen space, in pixels.
---@param X integer
---@param Y integer
function APlayerController:SetMouseLocation(X, Y) end

---Sets the Widget for the Mouse Cursor to display
---@param Cursor integer
---@param CursorWidget UUserWidget
function APlayerController:SetMouseCursorWidget(Cursor, CursorWidget) end

---Sets the value of the haptics for the specified hand directly, using frequency and amplitude.  NOTE:  If a curve is already
---playing for this hand, it will be cancelled in favour of the specified values.
---@param Frequency number
---@param Amplitude number
---@param Hand EControllerHand
function APlayerController:SetHapticsByValue(Frequency, Amplitude, Hand) end

---Allows the player controller to disable all haptic requests from being fired, e.g. in the case of a level loading
---@param bNewDisabled boolean
function APlayerController:SetDisableHaptics(bNewDisabled) end

---Sets the light color of the player's controller
---@param Color FColor
function APlayerController:SetControllerLightColor(Color) end

---Server/SP only function for changing whether the player is in cinematic mode.  Updates values of various state variables, then replicates the call to the client
---to sync the current cinematic mode.
---@param bInCinematicMode boolean
---@param bHidePlayer boolean
---@param bAffectsHUD boolean
---@param bAffectsMovement boolean
---@param bAffectsTurning boolean
function APlayerController:SetCinematicMode(bInCinematicMode, bHidePlayer, bAffectsHUD, bAffectsMovement, bAffectsTurning) end

---Used to override the default positioning of the audio listener
---@param AttachToComponent USceneComponent
---@param Location FVector
---@param Rotation FRotator
function APlayerController:SetAudioListenerOverride(AttachToComponent, Location, Rotation) end

---@param AttachToComponent USceneComponent
---@param AttenuationLocationOVerride FVector
function APlayerController:SetAudioListenerAttenuationOverride(AttachToComponent, AttenuationLocationOVerride) end

---Resets the light color of the player's controller to default
function APlayerController:ResetControllerLightColor() end

---Convert a World Space 3D position into a 2D Screen Space position.
---@param WorldLocation FVector
---@param ScreenLocation FVector2D @[out] 
---@param bPlayerViewportRelative boolean @[opt] 
---@return boolean
function APlayerController:ProjectWorldLocationToScreen(WorldLocation, ScreenLocation, bPlayerViewportRelative) end

---Play a haptic feedback curve on the player's controller
---@param HapticEffect UHapticFeedbackEffect_Base
---@param Hand EControllerHand
---@param Scale number @[opt] 
---@param bLoop boolean @[opt] 
function APlayerController:PlayHapticEffect(HapticEffect, Hand, Scale, bLoop) end

---Latent action that controls the playing of force feedback
---Begins playing when Start is called.  Calling Update or Stop if the feedback is not active will have no effect.
---Completed will execute when Stop is called or the duration ends.
---When Update is called the Intensity, Duration, and affect values will be updated with the current inputs
---@param Intensity number
---@param Duration number
---@param bAffectsLeftLarge boolean
---@param bAffectsLeftSmall boolean
---@param bAffectsRightLarge boolean
---@param bAffectsRightSmall boolean
---@param Action integer
function APlayerController:PlayDynamicForceFeedback(Intensity, Duration, bAffectsLeftLarge, bAffectsLeftSmall, bAffectsRightLarge, bAffectsRightSmall, Action) end

---Play a force feedback pattern on the player's controller
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Tag string
---@param bLooping boolean
---@param bIgnoreTimeDilation boolean
---@param bPlayWhilePaused boolean
function APlayerController:K2_ClientPlayForceFeedback(ForceFeedbackEffect, Tag, bLooping, bIgnoreTimeDilation, bPlayWhilePaused) end

---Returns true if the given key/button is pressed on the input of the controller (if present)
---@param Key FKey
---@return boolean
function APlayerController:IsInputKeyDown(Key) end

---Helper to get the size of the HUD canvas for this player controller.  Returns 0 if there is no HUD
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
function APlayerController:GetViewportSize(SizeX, SizeY) end

---Get the Pawn used when spectating. nullptr when not spectating.
---@return ASpectatorPawn
function APlayerController:GetSpectatorPawn() end

---Retrieves the X and Y screen coordinates of the mouse cursor. Returns false if there is no associated mouse device
---@param LocationX number @[out] 
---@param LocationY number @[out] 
---@return boolean
function APlayerController:GetMousePosition(LocationX, LocationY) end

---Returns the vector value for the given key/button.
---@param Key FKey
---@return FVector
function APlayerController:GetInputVectorKeyState(Key) end

---Retrieves the X and Y screen coordinates of the specified touch key. Returns false if the touch index is not down
---@param FingerIndex integer
---@param LocationX number @[out] 
---@param LocationY number @[out] 
---@param bIsCurrentlyPressed boolean @[out] 
function APlayerController:GetInputTouchState(FingerIndex, LocationX, LocationY, bIsCurrentlyPressed) end

---Retrieves how far the mouse moved this frame.
---@param DeltaX number @[out] 
---@param DeltaY number @[out] 
function APlayerController:GetInputMouseDelta(DeltaX, DeltaY) end

---Retrieves the current motion state of the player's input device
---@param Tilt FVector @[out] 
---@param RotationRate FVector @[out] 
---@param Gravity FVector @[out] 
---@param Acceleration FVector @[out] 
function APlayerController:GetInputMotionState(Tilt, RotationRate, Gravity, Acceleration) end

---Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame.
---@param Key FKey
---@return number
function APlayerController:GetInputKeyTimeDown(Key) end

---Retrieves the X and Y displacement of the given analog stick.
---@param WhichStick integer
---@param StickX number @[out] 
---@param StickY number @[out] 
function APlayerController:GetInputAnalogStickState(WhichStick, StickX, StickY) end

---Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up.
---@param Key FKey
---@return number
function APlayerController:GetInputAnalogKeyState(Key) end

---Gets the HUD currently being used by this player controller
---@return AHUD
function APlayerController:GetHUD() end

---Performs a collision query under the finger, looking for object types
---@param FingerIndex integer
---@param ObjectTypes TArray_integer_
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderFingerForObjects(FingerIndex, ObjectTypes, bTraceComplex, HitResult) end

---Performs a collision query under the finger, looking on a trace channel
---@param FingerIndex integer
---@param TraceChannel integer
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderFingerByChannel(FingerIndex, TraceChannel, bTraceComplex, HitResult) end

---Performs a collision query under the mouse cursor, looking for object types
---@param ObjectTypes TArray_integer_
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderCursorForObjects(ObjectTypes, bTraceComplex, HitResult) end

---Performs a collision query under the mouse cursor, looking on a trace channel
---@param TraceChannel integer
---@param bTraceComplex boolean
---@param HitResult FHitResult @[out] 
---@return boolean
function APlayerController:GetHitResultUnderCursorByChannel(TraceChannel, bTraceComplex, HitResult) end

---Returns the location the PlayerController is focused on.
--- If there is a possessed Pawn, returns the Pawn's location.
--- If there is a spectator Pawn, returns that Pawn's location.
--- Otherwise, returns the PlayerController's spawn location (usually the last known Pawn location after it has died).
---@return FVector
function APlayerController:GetFocalLocation() end

---Convert 2D screen position to World Space 3D position and direction. Returns false if unable to determine value. *
---@param ScreenX number
---@param ScreenY number
---@param WorldLocation FVector @[out] 
---@param WorldDirection FVector @[out] 
---@return boolean
function APlayerController:DeprojectScreenPositionToWorld(ScreenX, ScreenY, WorldLocation, WorldDirection) end

---Convert current mouse 2D position to World Space 3D position and direction. Returns false if unable to determine value. *
---@param WorldLocation FVector @[out] 
---@param WorldDirection FVector @[out] 
---@return boolean
function APlayerController:DeprojectMousePositionToWorld(WorldLocation, WorldDirection) end

---Stops a playing force feedback pattern
---@param ForceFeedbackEffect UForceFeedbackEffect
---@param Tag string
function APlayerController:ClientStopForceFeedback(ForceFeedbackEffect, Tag) end

---Stop camera shake on client.
---@param SourceComponent UCameraShakeSourceComponent
---@param bImmediately boolean @[opt] 
function APlayerController:ClientStopCameraShakesFromSource(SourceComponent, bImmediately) end

---Stop camera shake on client.
---@param Shake TSubclassOf_UCameraShakeBase_
---@param bImmediately boolean @[opt] 
function APlayerController:ClientStopCameraShake(Shake, bImmediately) end

---Play Camera Shake localized to a given source
---@param Shake TSubclassOf_UCameraShakeBase_
---@param SourceComponent UCameraShakeSourceComponent
function APlayerController:ClientStartCameraShakeFromSource(Shake, SourceComponent) end

---Play Camera Shake
---@param Shake TSubclassOf_UCameraShakeBase_
---@param Scale number @[opt] 
---@param PlaySpace ECameraShakePlaySpace @[opt] 
---@param UserPlaySpaceRot FRotator
function APlayerController:ClientStartCameraShake(Shake, Scale, PlaySpace, UserPlaySpaceRot) end

---Spawn a camera lens effect (e.g. blood).
---@param LensEffectEmitterClass TSubclassOf_AEmitterCameraLensEffectBase_
function APlayerController:ClientSpawnCameraLensEffect(LensEffectEmitterClass) end

---Set the client's class of HUD and spawns a new instance of it. If there was already a HUD active, it is destroyed.
---@param NewHUDClass TSubclassOf_AHUD_
function APlayerController:ClientSetHUD(NewHUDClass) end

---Play the indicated CameraAnim on this camera.
---@param AnimToPlay UCameraAnim
---@param Scale number @[opt] 
---@param Rate number @[opt] 
---@param BlendInTime number @[opt] 
---@param BlendOutTime number @[opt] 
---@param bLoop boolean @[opt] 
---@param bRandomStartTime boolean @[opt] 
---@param Space ECameraShakePlaySpace @[opt] 
---@param CustomPlaySpace FRotator
function APlayerController:ClientPlayCameraAnim(AnimToPlay, Scale, Rate, BlendInTime, BlendOutTime, bLoop, bRandomStartTime, Space, CustomPlaySpace) end

---Removes all Camera Lens Effects.
function APlayerController:ClientClearCameraLensEffects() end

---Clear any overrides that have been applied to audio listener
function APlayerController:ClearAudioListenerOverride() end

function APlayerController:ClearAudioListenerAttenuationOverride() end

---Returns true if this controller thinks it's able to restart. Called from GameModeBase::PlayerCanRestart
---@return boolean
function APlayerController:CanRestartPlayer() end

---Add Yaw (turn) input. This value is multiplied by InputYawScale.
---@param Val number
function APlayerController:AddYawInput(Val) end

---Add Roll input. This value is multiplied by InputRollScale.
---@param Val number
function APlayerController:AddRollInput(Val) end

---Add Pitch (look up) input. This value is multiplied by InputPitchScale.
---@param Val number
function APlayerController:AddPitchInput(Val) end

---Activates a new touch interface for this player controller
---@param NewTouchInterface UTouchInterface
function APlayerController:ActivateTouchInterface(NewTouchInterface) end

