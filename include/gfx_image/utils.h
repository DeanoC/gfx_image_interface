#pragma once
#ifndef GFX_IMAGE_UTILS_H
#define GFX_IMAGE_UTILS_H

#include "al2o3_platform/platform.h"

AL2O3_EXTERN_C bool Image_GetColorRangeOf(Image_ImageHeader const * src, Image_PixelD* omin, Image_PixelD* omax);
AL2O3_EXTERN_C bool Image_GetColorRangeOfF(Image_ImageHeader const * image, float* omin, float* omax);
AL2O3_EXTERN_C bool Image_GetColorRangeOfD(Image_ImageHeader const * image, double* omin, double* omax);

AL2O3_EXTERN_C bool Image_NormalizeEachChannelOf(Image_ImageHeader const * src);
AL2O3_EXTERN_C bool Image_NormalizeAcrossChannelsOf(Image_ImageHeader const * src);

AL2O3_EXTERN_C void Image_CreateMipMapChain(Image_ImageHeader *image, bool generateFromImage);
AL2O3_EXTERN_C Image_ImageHeader* Image_Clone(Image_ImageHeader* image);
AL2O3_EXTERN_C Image_ImageHeader *Image_CloneStructure(Image_ImageHeader *image);

AL2O3_EXTERN_C Image_ImageHeader* Image_PreciseConvert(Image_ImageHeader* src, ImageFormat const newFormat);
AL2O3_EXTERN_C Image_ImageHeader* Image_FastConvert(Image_ImageHeader* src, ImageFormat const newFormat, bool allowInplace);

#endif //WYRD_IMAGE_UTILS_H
