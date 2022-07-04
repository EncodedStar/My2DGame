--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

require "UnLua"

local BP_Player = Class()

--function BP_Player:Initialize(Initializer)
--end

--function BP_Player:UserConstructionScript()
--end

function BP_Player:ReceiveBeginPlay()
    print("BP_Player:ReceiveBeginPlay")
end

--function BP_Player:ReceiveEndPlay()
--end

-- function BP_Player:ReceiveTick(DeltaSeconds)
-- end

--function BP_Player:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end

--function BP_Player:ReceiveActorBeginOverlap(OtherActor)
--end

--function BP_Player:ReceiveActorEndOverlap(OtherActor)
--end

function BP_Player:MoveForward(AxisValue)
    if self then
        local worldDirection = UE.FVector(0.0, AxisValue, 0.0)
		self:AddMovementInput(worldDirection)
    end
end

function BP_Player:MoveRight(AxisValue)
	if self then
		-- local Rotation = self:GetControlRotation(self.ControlRot)
		-- Rotation:Set(0, Rotation.Yaw, 0)
		-- local Direction = Rotation:GetRightVector(self.RightVec)
		-- self.Pawn:AddMovementInput(Direction, AxisValue)
        local worldDirection = UE.FVector(AxisValue, 0.0, 0.0)
		self:AddMovementInput(worldDirection)
	end
end

return BP_Player

