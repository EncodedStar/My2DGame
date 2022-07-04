--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

require "UnLua"

local BP_Map_Level_1 = Class()

--function BP_Map_Level_1:Initialize(Initializer)
--end

--function BP_Map_Level_1:UserConstructionScript()
--end

function BP_Map_Level_1:ReceiveBeginPlay()
    local palyerController = UE.GetPlayerController()
    UE.ExecuteConsoleCommand("r_TonemapperFilm_0", palyerController)
end

--function BP_Map_Level_1:ReceiveEndPlay()
--end

-- function BP_Map_Level_1:ReceiveTick(DeltaSeconds)
-- end

--function BP_Map_Level_1:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser)
--end

--function BP_Map_Level_1:ReceiveActorBeginOverlap(OtherActor)
--end

--function BP_Map_Level_1:ReceiveActorEndOverlap(OtherActor)
--end

return BP_Map_Level_1
