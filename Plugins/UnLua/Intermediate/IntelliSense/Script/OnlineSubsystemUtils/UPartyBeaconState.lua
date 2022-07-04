---A beacon host used for taking reservations for an existing game session
---@class UPartyBeaconState : UObject
---@field protected SessionName string @Session tied to the beacon
---@field protected NumConsumedReservations integer @Number of currently consumed reservations
---@field protected MaxReservations integer @Maximum allowed reservations
---@field protected NumTeams integer @Number of teams in the game
---@field protected NumPlayersPerTeam integer @Number of players on each team for balancing
---@field protected TeamAssignmentMethod string @Team assignment method
---@field protected ReservedHostTeamNum integer @Team that the host has been assigned to
---@field protected ForceTeamNum integer @Team that everyone is forced to in single team games
---@field protected bRestrictCrossConsole boolean @Are multiple consoles types allowed to play together
---@field protected bEnableRemovalRequests boolean @Process requests from clients to remove players from beacon
---@field protected Reservations TArray<FPartyReservation> @Current reservations in the system
local UPartyBeaconState = {}

