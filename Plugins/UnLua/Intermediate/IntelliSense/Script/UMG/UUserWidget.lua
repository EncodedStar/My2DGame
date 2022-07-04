---The user widget is extensible by users through the WidgetBlueprint.
---@class UUserWidget : UWidget
---@field public ColorAndOpacity FLinearColor @The color and opacity of this widget.  Tints all child widgets.
---@field public ColorAndOpacityDelegate Delegate
---@field public ForegroundColor FSlateColor @The foreground color of the widget, this is inherited by sub widgets.  Any color property that is marked as inherit will use this color.
---@field public ForegroundColorDelegate Delegate
---@field public OnVisibilityChanged MulticastDelegate @Called when the visibility has changed
---@field public Padding FMargin @The padding area around the content.
---@field public ActiveSequencePlayers TArray<UUMGSequencePlayer> @All the sequence players currently playing
---@field public AnimationTickManager UUMGSequenceTickManager
---@field public StoppedSequencePlayers TArray<UUMGSequencePlayer> @List of sequence players to cache and clean up when safe
---@field private NamedSlotBindings TArray<FNamedSlotBinding> @Stores the widgets being assigned to named slots
---@field public WidgetTree UWidgetTree @The widget tree contained inside this user widget initialized by the blueprint
---@field public DesignTimeSize FVector2D @Stores the design time desired size of the user widget
---@field public DesignSizeMode EDesignPreviewSizeMode
---@field public PaletteCategory string @The category this widget appears in the palette.
---@field public PreviewBackground UTexture2D @A preview background that you can use when designing the UI to get a sense of scale on the screen.  Use a texture with a screenshot of your game in it, for example if you were designing a HUD.
---@field public Priority integer
---@field public bIsFocusable boolean @Setting this flag to true, allows this widget to accept focus when clicked, or when navigated to.
---@field public bStopAction boolean
---@field public bHasScriptImplementedTick boolean @If a widget has an implemented tick blueprint function
---@field public bHasScriptImplementedPaint boolean @If a widget has an implemented paint blueprint function
---@field private TickFrequency EWidgetTickFrequency @This widget is allowed to tick. If this is unchecked tick will never be called, animations will not play correctly, and latent actions will not execute. Uncheck this for performance reasons only
---@field protected InputComponent UInputComponent
---@field protected AnimationCallbacks TArray<FAnimationEventBinding>
local UUserWidget = {}

---StopListeningForAllInputActions will automatically Register an Input Component with the player input system.
---If you however, want to Pause and Resume, listening for a set of actions, the best way is to use
---UnregisterInputComponent to pause, and RegisterInputComponent to resume listening.
function UUserWidget:UnregisterInputComponent() end

---Unbind an animation started delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:UnbindFromAnimationStarted(Animation, Delegate) end

---Unbind an animation finished delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:UnbindFromAnimationFinished(Animation, Delegate) end

---@param Animation UWidgetAnimation
function UUserWidget:UnbindAllFromAnimationStarted(Animation) end

---@param Animation UWidgetAnimation
function UUserWidget:UnbindAllFromAnimationFinished(Animation) end

---Removes the binding for a particular action's callback.
---@param ActionName string
---@param EventType integer
function UUserWidget:StopListeningForInputAction(ActionName, EventType) end

---Stops listening to all input actions, and unregisters the input component with the player controller.
function UUserWidget:StopListeningForAllInputActions() end

---Cancels any pending Delays or timer callbacks for this widget, and stops all active animations on the widget.
function UUserWidget:StopAnimationsAndLatentActions() end

---Stops an already running animation in this widget
---@param InAnimation UWidgetAnimation
function UUserWidget:StopAnimation(InAnimation) end

---Stop All actively running animations.
function UUserWidget:StopAllAnimations() end

---Sets the widgets position in the viewport.
---Otherwise inverse DPI is applied to the position so that when the location is scaled
---by DPI, it ends up in the expected position.
---@param Position FVector2D
---@param bRemoveDPIScale boolean @[opt] 
function UUserWidget:SetPositionInViewport(Position, bRemoveDPIScale) end

---Changes the playback rate of a playing animation
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
function UUserWidget:SetPlaybackSpeed(InAnimation, PlaybackSpeed) end

---Sets the padding for the user widget, putting a larger gap between the widget border and it's root widget.
---@param InPadding FMargin
function UUserWidget:SetPadding(InPadding) end

---Sets the local player associated with this UI via PlayerController reference.
---@param LocalPlayerController APlayerController
function UUserWidget:SetOwningPlayer(LocalPlayerController) end

---Changes the number of loops to play given a playing animation
---@param InAnimation UWidgetAnimation
---@param NumLoopsToPlay integer
function UUserWidget:SetNumLoopsToPlay(InAnimation, NumLoopsToPlay) end

---@param NewPriority integer
function UUserWidget:SetInputActionPriority(NewPriority) end

---@param bShouldBlock boolean
function UUserWidget:SetInputActionBlocking(bShouldBlock) end

---Sets the foreground color of the widget, this is inherited by sub widgets.  Any color property
---that is marked as inherit will use this color.
---@param InForegroundColor FSlateColor
function UUserWidget:SetForegroundColor(InForegroundColor) end

---@param Size FVector2D
function UUserWidget:SetDesiredSizeInViewport(Size) end

---Sets the tint of the widget, this affects all child widgets.
---@param InColorAndOpacity FLinearColor
function UUserWidget:SetColorAndOpacity(InColorAndOpacity) end

---Sets the current time of the animation in this widget. Does not change state.
---@param InAnimation UWidgetAnimation
---@param InTime number
function UUserWidget:SetAnimationCurrentTime(InAnimation, InTime) end

---@param Anchors FAnchors
function UUserWidget:SetAnchorsInViewport(Anchors) end

---@param Alignment FVector2D
function UUserWidget:SetAlignmentInViewport(Alignment) end

---If an animation is playing, this function will reverse the playback.
---@param InAnimation UWidgetAnimation
function UUserWidget:ReverseAnimation(InAnimation) end

---ListenForInputAction will automatically Register an Input Component with the player input system.
---If you however, want to Pause and Resume, listening for a set of actions, the best way is to use
---UnregisterInputComponent to pause, and RegisterInputComponent to resume listening.
function UUserWidget:RegisterInputComponent() end

---Plays an animation in this widget a specified number of times stopping at a specified time
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param EndAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimationTimeRange(InAnimation, StartAtTime, EndAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end

---Plays an animation on this widget relative to it's current state in reverse.  You should use this version in situations where
---say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding
---in the opposite direction.
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimationReverse(InAnimation, PlaybackSpeed, bRestoreState) end

---Plays an animation on this widget relative to it's current state forward.  You should use this version in situations where
---say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding
---in the opposite direction.
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimationForward(InAnimation, PlaybackSpeed, bRestoreState) end

---Plays an animation in this widget a specified number of times
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return UUMGSequencePlayer
function UUserWidget:PlayAnimation(InAnimation, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end

---Pauses an already running animation in this widget
---@param InAnimation UWidgetAnimation
---@return number
function UUserWidget:PauseAnimation(InAnimation) end

---Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and
---that we're not currently in UI-Only Input Mode.
---@param ActionName string
---@param EventType integer
---@param bConsume boolean
---@param Callback Delegate
function UUserWidget:ListenForInputAction(ActionName, EventType, bConsume, Callback) end

---Are we currently playing any animations?
---@return boolean
function UUserWidget:IsPlayingAnimation() end

---Checks if the action has a registered callback with the input component.
---@param ActionName string
---@return boolean
function UUserWidget:IsListeningForInputAction(ActionName) end

---
---@return boolean
function UUserWidget:IsInViewport() end

---
---@return boolean
function UUserWidget:IsAnyAnimationPlaying() end

---returns true if the animation is currently playing forward, false otherwise.
---@param InAnimation UWidgetAnimation
---@return boolean
function UUserWidget:IsAnimationPlayingForward(InAnimation) end

---Gets whether an animation is currently playing on this widget.
---@param InAnimation UWidgetAnimation
---@return boolean
function UUserWidget:IsAnimationPlaying(InAnimation) end

---Gets the player pawn associated with this UI.
---@return APawn
function UUserWidget:GetOwningPlayerPawn() end

---Gets the player camera manager associated with this UI.
---@return APlayerCameraManager
function UUserWidget:GetOwningPlayerCameraManager() end

---Gets the current time of the animation in this widget
---@param InAnimation UWidgetAnimation
---@return number
function UUserWidget:GetAnimationCurrentTime(InAnimation) end

---@return FAnchors
function UUserWidget:GetAnchorsInViewport() end

---@return FVector2D
function UUserWidget:GetAlignmentInViewport() end

---Flushes all animations on all widgets to guarantee that any queued updates are processed before this call returns
function UUserWidget:FlushAnimations() end

---Cancels any pending Delays or timer callbacks for this widget.
function UUserWidget:CancelLatentActions() end

---Bind an animation started delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:BindToAnimationStarted(Animation, Delegate) end

---Bind an animation finished delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:BindToAnimationFinished(Animation, Delegate) end

---Allows binding to a specific animation's event.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
---@param AnimationEvent EWidgetAnimationEvent
---@param UserTag string @[opt] 
function UUserWidget:BindToAnimationEvent(Animation, Delegate, AnimationEvent, UserTag) end

---Adds it to the game's viewport and fills the entire screen, unless SetDesiredSizeInViewport is called
---to explicitly set the size.
---@param ZOrder integer @[opt] 
function UUserWidget:AddToViewport(ZOrder) end

---Adds the widget to the game's viewport in a section dedicated to the player.  This is valuable in a split screen
---game where you need to only show a widget over a player's portion of the viewport.
---@param ZOrder integer @[opt] 
---@return boolean
function UUserWidget:AddToPlayerScreen(ZOrder) end

