#pragma once

#include "al2o3_platform/platform.h"
#include "al2o3_cmath/scalar.h"

typedef struct Image_PixelF {
	float r;
	float g;
	float b;
	float a;
} Image_PixelF;

typedef struct Image_PixelD {
  double r;
  double g;
  double b;
  double a;
} Image_PixelD;

AL2O3_EXTERN_C inline void Image_PixelClampF(Image_PixelF *pixel, float const min[4], float const max[4]) {
  pixel->r = Math_ClampF(pixel->r, min[0], max[0]);
  pixel->g = Math_ClampF(pixel->g, min[1], max[1]);
  pixel->b = Math_ClampF(pixel->b, min[2], max[2]);
  pixel->a = Math_ClampF(pixel->a, min[3], max[3]);
}

AL2O3_EXTERN_C inline void Image_PixelClampD(Image_PixelD *pixel, double const min[4], double const max[4]) {
	pixel->r = Math_ClampD(pixel->r, min[0], max[0]);
	pixel->g = Math_ClampD(pixel->g, min[1], max[1]);
	pixel->b = Math_ClampD(pixel->b, min[2], max[2]);
	pixel->a = Math_ClampD(pixel->a, min[3], max[3]);
}
