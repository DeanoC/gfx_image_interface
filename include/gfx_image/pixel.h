#pragma once
#ifndef GFX_IMAGE_PIXEL_H
#define GFX_IMAGE_PIXEL_H

#include "al2o3_platform/platform.h"
#include "al2o3_cmath/scalar.h"

typedef struct Image_PixelD {
  double r;
  double g;
  double b;
  double a;
} Image_PixelD;

AL2O3_EXTERN_C inline void Image_PixelClamp(Image_PixelD *pixel, double const min[4], double const max[4]) {
  pixel->r = Math_ClampD(pixel->r, min[0], max[0]);
  pixel->g = Math_ClampD(pixel->g, min[1], max[1]);
  pixel->b = Math_ClampD(pixel->b, min[2], max[2]);
  pixel->a = Math_ClampD(pixel->a, min[3], max[3]);
}

#endif //WYRD_IMAGE_PIXEL_H
