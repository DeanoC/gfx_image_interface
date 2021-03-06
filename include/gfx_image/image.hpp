#pragma once

#include "al2o3_platform/platform.h"
#include "tiny_imageformat/tinyimageformat_base.h"
#include "gfx_image/image.h"

namespace Image {

struct Image : public Image_ImageHeader {

  static Image *From(Image_ImageHeader *handle) {
    return (Image *) handle;
  }
  static Image *Create(uint32_t width, uint32_t height,
                       uint32_t depth, uint32_t slices,
                       TinyImageFormat format) {
    return (Image *) Image_Create(width, height, depth, slices, format);
  }
  static Image *CreateNoClear(uint32_t width, uint32_t height,
                              uint32_t depth, uint32_t slices,
                              enum TinyImageFormat format) {
    return (Image *) Image_CreateNoClear(width, height, depth, slices, format);
  }

  explicit operator Image_ImageHeader *() const { return (Image_ImageHeader *) this; }

  void Destroy() { Image_Destroy(this); }

  size_t Index(uint32_t x, uint32_t y, uint32_t z, uint32_t slice) const {
    return Image_CalculateIndex(this, x, y, z, slice);
  }

  Image_PixelD PixelAt(size_t index) const {
    Image_PixelD ret;
    Image_GetPixelAtD(this, (double*)&ret, index);
    return ret;
  }

  void SetPixelAt(size_t index, Image_PixelD const& pixel) {
    Image_SetPixelAtD(this, (double*)&pixel, index);
  }

  bool Is1D() const { return Image_Is1D(this); }
  bool Is2D() const { return Image_Is2D(this); }
  bool Is3D() const { return Image_Is3D(this); }
  bool IsArray() const { return Image_IsArray(this); }
  bool IsCubemap() const { return Image_IsCubemap(this); }

  bool HasMipmaps() const { return flags & Image_NT_MipMap; }
  bool HasLayers() const { return flags & Image_NT_Layer; }

  size_t LinkedCount() const { return Image_LinkedImageCountOf(this); }
  Image *LinkedImageAt(size_t const index) const { return (Image *) Image_LinkedImageOf(this, index); }

  template<typename T = void>
  T const *Data() const { return (T const *) Image_RawDataPtr(this); }
  template<typename T = void>
  T *Data() { return (T *) Image_RawDataPtr(this); }

  size_t PixelCountPerRow() const { return width; }
  size_t PixelCountPerPage() const { return width * height; }
  size_t PixelCountPerSlice() const { return width * height * depth; }
  size_t PixelCount() const { return width * height * depth * slices; }
  size_t PixelCountOfImageChain() const { return Image_PixelCountOfImageChainOf(this); }

  size_t ByteCountPerRow() const { return Image_ByteCountPerRowOf(this); }
  size_t ByteCountPerPage() const { return Image_ByteCountPerPageOf(this); }
  size_t ByteCountPerSlice() const { return Image_ByteCountPerSliceOf(this); }
  size_t ByteCount() const { return Image_ByteCountOf(this); }
  size_t ByteCountOfImageChain() const { return Image_ByteCountOfImageChainOf(this); }

  Image() = delete;
};

}

