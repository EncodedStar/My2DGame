---A beacon client used for making reservations with an existing game session
---@class ASpectatorBeaconClient : AOnlineBeaconClient
---@field protected DestSessionId string @Session Id of the destination host
---@field protected PendingReservation FSpectatorReservation @Pending reservation that will be sent upon connection with the intended host
---@field protected RequestType ESpectatorClientRequestType @Type of request currently being handled by this client beacon
---@field protected bPendingReservationSent boolean @Has the reservation request been delivered
---@field protected bCancelReservation boolean @Has the reservation request been canceled
local ASpectatorBeaconClient = {}

