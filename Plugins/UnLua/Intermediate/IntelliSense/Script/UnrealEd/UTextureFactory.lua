---@class UTextureFactory : UFactory
---@field public NoCompression boolean
---@field public NoAlpha boolean @If enabled, the texture's alpha channel will be discarded during compression
---@field public bDeferCompression boolean @If enabled, compression is deferred until the texture is saved
---@field public CompressionSettings integer @Compression settings for the texture
---@field public bCreateMaterial boolean @If enabled, a material will automatically be created for the texture
---@field public bRGBToBaseColor boolean @If enabled, link the texture to the created material's base color
---@field public bRGBToEmissive boolean @If enabled, link the texture to the created material's emissive color
---@field public bAlphaToRoughness boolean @If enabled, link the texture's alpha to the created material's roughness
---@field public bAlphaToEmissive boolean @If enabled, link the texture's alpha to the created material's emissive color
---@field public bAlphaToOpacity boolean @If enabled, link the texture's alpha to the created material's opacity
---@field public bAlphaToOpacityMask boolean @If enabled, link the texture's alpha to the created material's opacity mask
---@field public bTwoSided boolean @If enabled, the created material will be two-sided
---@field public Blending integer @The blend mode of the created material
---@field public ShadingModel integer @The shading model of the created material
---@field public MipGenSettings integer @The mip-map generation settings for the texture; Allows customization of the content of the mip-map chain
---@field public LODGroup integer @The group the texture belongs to
---@field public bDitherMipMapAlpha boolean @If enabled, mip-map alpha values will be dithered for smooth transitions
---@field public AlphaCoverageThresholds FVector4 @Channel values to compare to when preserving alpha coverage from a mask for mips
---@field public bPreserveBorder boolean @If enabled, preserve the value of border pixels when creating mip-maps
---@field public bFlipNormalMapGreenChannel boolean @If enabled, the texture's green channel will be inverted. This is useful for some normal maps
---@field public bUsingExistingSettings boolean @If enabled, we are using the existing settings for a texture that already existed.
---@field public bUseHashAsGuid boolean @If enabled, we are using the texture content hash as the guid.
---@field public UdimRegexPattern string @The pattern to use to match UDIM files to indices. Defaults to match a filename that ends with either .1001 or _1001 This 1st and 3rd (optional) capture groups are used as the texture name. The 2nd capture group is considered to be the UDIM index. ie: (Capture Group 1)(\d{4})( Capture Group 3)
local UTextureFactory = {}

