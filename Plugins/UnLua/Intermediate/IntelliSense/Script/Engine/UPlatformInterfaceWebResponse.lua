---@class UPlatformInterfaceWebResponse : UObject
---@field public OriginalURL string @This holds the original requested URL
---@field public ResponseCode integer @Result code from the response (200=OK, 404=Not Found, etc)
---@field public Tag integer @A user-specified tag specified with the request
---@field public StringResponse string @For string results, this is the response
---@field public BinaryResponse TArray<integer> @For non-string results, this is the response
local UPlatformInterfaceWebResponse = {}

