// Auto-generated file. Do not edit!
//   Template: src/qs8-f32-vcvt/scalar.c.in
//   Generator: tools/xngen
//
// Copyright 2021 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include "src/xnnpack/common.h"
#include "src/xnnpack/math.h"
#include "src/xnnpack/vcvt.h"


void xnn_qs8_f32_vcvt_ukernel__scalar_u2(
    size_t batch,
    const int8_t* input,
    float* output,
    const struct xnn_qs8_f32_cvt_params params[restrict XNN_MIN_ELEMENTS(1)])
{
  assert(batch != 0);
  assert(batch % sizeof(int8_t) == 0);
  assert(input != NULL);
  assert(output != NULL);

  const int32_t vzero_point = params->scalar.zero_point;
  const float vscale = params->scalar.scale;

  for (; batch >= 2 * sizeof(int8_t); batch -= 2 * sizeof(int8_t)) {
    int32_t vx0 = (int32_t) input[0];
    int32_t vx1 = (int32_t) input[1];
    input += 2;

    vx0 -= vzero_point;
    vx1 -= vzero_point;

    float vy0 = (float) vx0;
    float vy1 = (float) vx1;

    vy0 *= vscale;
    vy1 *= vscale;

    output[0] = vy0;
    output[1] = vy1;
    output += 2;
  }
  if XNN_UNLIKELY(batch != 0) {
    int32_t vx = *input;
    vx -= vzero_point;

    float vy = (float) vx;
    vy *= vscale;
    *output = vy;
  }
}
