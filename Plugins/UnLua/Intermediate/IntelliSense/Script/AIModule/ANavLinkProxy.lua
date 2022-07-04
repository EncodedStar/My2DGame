---@class ANavLinkProxy : AActor
---@field public PointLinks TArray<FNavigationLink> @Navigation links (point to point) added to navigation data
---@field public SegmentLinks TArray<FNavigationSegmentLink> @Navigation links (segment to segment) added to navigation data      @@todo hidden from use until we fix segment links. Not really working now
---@field private SmartLinkComp UNavLinkCustomComponent @Smart link: can affect path following
---@field public bSmartLinkIsRelevant boolean @Smart link: toggle relevancy
---@field private EdRenderComp UNavLinkRenderingComponent @Editor Preview
---@field private SpriteComponent UBillboardComponent
---@field protected OnSmartLinkReached MulticastDelegate
local ANavLinkProxy = {}

---change state of smart link
---@param bEnabled boolean
function ANavLinkProxy:SetSmartLinkEnabled(bEnabled) end

---resume normal path following
---@param Agent AActor
function ANavLinkProxy:ResumePathFollowing(Agent) end

---check if smart link is enabled
---@return boolean
function ANavLinkProxy:IsSmartLinkEnabled() end

---check if any agent is moving through smart link right now
---@return boolean
function ANavLinkProxy:HasMovingAgents() end

