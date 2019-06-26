#pragma once
#ifndef GFX_IMAGE_CREATE_H
#define GFX_IMAGE_CREATE_H

#include "al2o3_platform/platform.h"
#include "gfx_image/image.h"

// helpers
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create1D(uint32_t width, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create1DNoClear(uint32_t width, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create1DArray(uint32_t width, uint32_t slices, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create1DArrayNoClear(uint32_t width, uint32_t slices, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create2D(uint32_t width, uint32_t height, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create2DNoClear(uint32_t width, uint32_t height, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create2DArray(uint32_t width,
                                                uint32_t height,
                                                uint32_t slices,
                                                enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create2DArrayNoClear(uint32_t width,
                                                       uint32_t height,
                                                       uint32_t slices,
                                                       enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create3D(uint32_t width, uint32_t height, uint32_t depth, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create3DNoClear(uint32_t width,
                                                  uint32_t height,
                                                  uint32_t depth,
                                                  enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create3DArray(uint32_t width,
                                                uint32_t height,
                                                uint32_t depth,
                                                uint32_t slices,
                                                enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_Create3DArrayNoClear(uint32_t width,
                                                       uint32_t height,
                                                       uint32_t depth,
                                                       uint32_t slices,
                                                       enum ImageFormat format);

AL2O3_EXTERN_C Image_ImageHeader const * Image_CreateCubemap(uint32_t width, uint32_t height, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_CreateCubemapNoClear(uint32_t width, uint32_t height, enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_CreateCubemapArray(uint32_t width,
                                                     uint32_t height,
                                                     uint32_t slices,
                                                     enum ImageFormat format);
AL2O3_EXTERN_C Image_ImageHeader const * Image_CreateCubemapArrayNoClear(uint32_t width,
                                                            uint32_t height,
                                                            uint32_t slices,
                                                            enum ImageFormat format);




#endif //WYRD_IMAGE_CREATE_H
