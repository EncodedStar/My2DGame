---@class AEmitter : AActor
---@field private ParticleSystemComponent UParticleSystemComponent
---@field public bDestroyOnSystemFinish boolean
---@field public bPostUpdateTickGroup boolean
---@field public bCurrentlyActive boolean @used to update status of toggleable level placed emitters on clients
---@field public OnParticleSpawn MulticastDelegate
---@field public OnParticleBurst MulticastDelegate
---@field public OnParticleDeath MulticastDelegate
---@field public OnParticleCollide MulticastDelegate
---@field private SpriteComponent UBillboardComponent
---@field private ArrowComponent UArrowComponent
local AEmitter = {}

