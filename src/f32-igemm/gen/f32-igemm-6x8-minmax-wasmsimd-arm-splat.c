// Auto-generated file. Do not edit!
//   Template: src/f32-igemm/wasmsimd-splat.c.in
//   Generator: tools/xngen
//
// Copyright 2020 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <wasm_simd128.h>

#include "src/xnnpack/igemm.h"


void xnn_f32_igemm_minmax_ukernel_6x8__wasmsimd_arm_splat(
    size_t mr,
    size_t nc,
    size_t kc,
    size_t ks,
    const float** restrict a,
    const float* restrict w,
    float* restrict c,
    size_t cm_stride,
    size_t cn_stride,
    size_t a_offset,
    const float* zero,
    const struct xnn_f32_minmax_params params[restrict XNN_MIN_ELEMENTS(1)])
{
  assert(mr != 0);
  assert(mr <= 6);
  assert(nc != 0);
  assert(kc != 0);
  assert(kc % sizeof(float) == 0);
  assert(ks != 0);
  assert(ks % (6 * sizeof(void*)) == 0);
  assert(a_offset % sizeof(float) == 0);
  assert(a != NULL);
  assert(w != NULL);
  assert(c != NULL);

  float* c0 = c;
  float* c1 = (float*) ((uintptr_t) c0 + cm_stride);
  if XNN_UNPREDICTABLE(mr < 2) {
    c1 = c0;
  }
  float* c2 = (float*) ((uintptr_t) c1 + cm_stride);
  if XNN_UNPREDICTABLE(mr <= 2) {
    c2 = c1;
  }
  float* c3 = (float*) ((uintptr_t) c2 + cm_stride);
  if XNN_UNPREDICTABLE(mr < 4) {
    c3 = c2;
  }
  float* c4 = (float*) ((uintptr_t) c3 + cm_stride);
  if XNN_UNPREDICTABLE(mr <= 4) {
    c4 = c3;
  }
  float* c5 = (float*) ((uintptr_t) c4 + cm_stride);
  if XNN_UNPREDICTABLE(mr != 6) {
    c5 = c4;
  }

  const v128_t vmin = wasm_v128_load32_splat(&params->scalar.min);
  const v128_t vmax = wasm_v128_load32_splat(&params->scalar.max);
  XNN_FORCE_REALIZATION(vmin);
  XNN_FORCE_REALIZATION(vmax);
  do {
    v128_t vacc0x0123 = wasm_v128_load(w);
    v128_t vacc0x4567 = wasm_v128_load(w + 4);
    v128_t vacc1x0123 = vacc0x0123;
    v128_t vacc1x4567 = vacc0x4567;
    v128_t vacc2x0123 = vacc0x0123;
    v128_t vacc2x4567 = vacc0x4567;
    v128_t vacc3x0123 = vacc0x0123;
    v128_t vacc3x4567 = vacc0x4567;
    v128_t vacc4x0123 = vacc0x0123;
    v128_t vacc4x4567 = vacc0x4567;
    v128_t vacc5x0123 = vacc0x0123;
    v128_t vacc5x4567 = vacc0x4567;
    w += 8;

    size_t p = ks;
    do {
      const float* restrict a0 = a[0];
      assert(a0 != NULL);
      if XNN_UNPREDICTABLE(a0 != zero) {
        a0 = (const float*) ((uintptr_t) a0 + a_offset);
      }
      const float* restrict a1 = a[1];
      assert(a1 != NULL);
      if XNN_UNPREDICTABLE(a1 != zero) {
        a1 = (const float*) ((uintptr_t) a1 + a_offset);
      }
      const float* restrict a2 = a[2];
      assert(a2 != NULL);
      if XNN_UNPREDICTABLE(a2 != zero) {
        a2 = (const float*) ((uintptr_t) a2 + a_offset);
      }
      const float* restrict a3 = a[3];
      assert(a3 != NULL);
      if XNN_UNPREDICTABLE(a3 != zero) {
        a3 = (const float*) ((uintptr_t) a3 + a_offset);
      }
      const float* restrict a4 = a[4];
      assert(a4 != NULL);
      if XNN_UNPREDICTABLE(a4 != zero) {
        a4 = (const float*) ((uintptr_t) a4 + a_offset);
      }
      const float* restrict a5 = a[5];
      assert(a5 != NULL);
      if XNN_UNPREDICTABLE(a5 != zero) {
        a5 = (const float*) ((uintptr_t) a5 + a_offset);
      }
      a += 6;

      size_t k = kc;
      while (k >= 4 * sizeof(float)) {
        const v128_t va0 = wasm_v128_load(a0);
        a0 += 4;
        const v128_t va1 = wasm_v128_load(a1);
        a1 += 4;
        const v128_t va2 = wasm_v128_load(a2);
        a2 += 4;
        const v128_t va3 = wasm_v128_load(a3);
        a3 += 4;
        const v128_t va4 = wasm_v128_load(a4);
        a4 += 4;
        const v128_t va5 = wasm_v128_load(a5);
        a5 += 4;

        const v128_t va0c0 = wasm_v32x4_shuffle(va0, va0, 0, 0, 0, 0);
        const v128_t va1c0 = wasm_v32x4_shuffle(va1, va1, 0, 0, 0, 0);
        const v128_t va2c0 = wasm_v32x4_shuffle(va2, va2, 0, 0, 0, 0);
        const v128_t va3c0 = wasm_v32x4_shuffle(va3, va3, 0, 0, 0, 0);
        const v128_t va4c0 = wasm_v32x4_shuffle(va4, va4, 0, 0, 0, 0);
        const v128_t va5c0 = wasm_v32x4_shuffle(va5, va5, 0, 0, 0, 0);

        const v128_t vb0123c0 = wasm_v128_load(w + 0);
        const v128_t vb4567c0 = wasm_v128_load(w + 4);

        vacc0x0123 = wasm_f32x4_add(wasm_f32x4_mul(va0c0, vb0123c0), vacc0x0123);
        vacc1x0123 = wasm_f32x4_add(wasm_f32x4_mul(va1c0, vb0123c0), vacc1x0123);
        vacc2x0123 = wasm_f32x4_add(wasm_f32x4_mul(va2c0, vb0123c0), vacc2x0123);
        vacc3x0123 = wasm_f32x4_add(wasm_f32x4_mul(va3c0, vb0123c0), vacc3x0123);
        vacc4x0123 = wasm_f32x4_add(wasm_f32x4_mul(va4c0, vb0123c0), vacc4x0123);
        vacc5x0123 = wasm_f32x4_add(wasm_f32x4_mul(va5c0, vb0123c0), vacc5x0123);
        vacc0x4567 = wasm_f32x4_add(wasm_f32x4_mul(va0c0, vb4567c0), vacc0x4567);
        vacc1x4567 = wasm_f32x4_add(wasm_f32x4_mul(va1c0, vb4567c0), vacc1x4567);
        vacc2x4567 = wasm_f32x4_add(wasm_f32x4_mul(va2c0, vb4567c0), vacc2x4567);
        vacc3x4567 = wasm_f32x4_add(wasm_f32x4_mul(va3c0, vb4567c0), vacc3x4567);
        vacc4x4567 = wasm_f32x4_add(wasm_f32x4_mul(va4c0, vb4567c0), vacc4x4567);
        vacc5x4567 = wasm_f32x4_add(wasm_f32x4_mul(va5c0, vb4567c0), vacc5x4567);
        const v128_t va0c1 = wasm_v32x4_shuffle(va0, va0, 1, 1, 1, 1);
        const v128_t va1c1 = wasm_v32x4_shuffle(va1, va1, 1, 1, 1, 1);
        const v128_t va2c1 = wasm_v32x4_shuffle(va2, va2, 1, 1, 1, 1);
        const v128_t va3c1 = wasm_v32x4_shuffle(va3, va3, 1, 1, 1, 1);
        const v128_t va4c1 = wasm_v32x4_shuffle(va4, va4, 1, 1, 1, 1);
        const v128_t va5c1 = wasm_v32x4_shuffle(va5, va5, 1, 1, 1, 1);

        const v128_t vb0123c1 = wasm_v128_load(w + 8);
        const v128_t vb4567c1 = wasm_v128_load(w + 12);

        vacc0x0123 = wasm_f32x4_add(wasm_f32x4_mul(va0c1, vb0123c1), vacc0x0123);
        vacc1x0123 = wasm_f32x4_add(wasm_f32x4_mul(va1c1, vb0123c1), vacc1x0123);
        vacc2x0123 = wasm_f32x4_add(wasm_f32x4_mul(va2c1, vb0123c1), vacc2x0123);
        vacc3x0123 = wasm_f32x4_add(wasm_f32x4_mul(va3c1, vb0123c1), vacc3x0123);
        vacc4x0123 = wasm_f32x4_add(wasm_f32x4_mul(va4c1, vb0123c1), vacc4x0123);
        vacc5x0123 = wasm_f32x4_add(wasm_f32x4_mul(va5c1, vb0123c1), vacc5x0123);
        vacc0x4567 = wasm_f32x4_add(wasm_f32x4_mul(va0c1, vb4567c1), vacc0x4567);
        vacc1x4567 = wasm_f32x4_add(wasm_f32x4_mul(va1c1, vb4567c1), vacc1x4567);
        vacc2x4567 = wasm_f32x4_add(wasm_f32x4_mul(va2c1, vb4567c1), vacc2x4567);
        vacc3x4567 = wasm_f32x4_add(wasm_f32x4_mul(va3c1, vb4567c1), vacc3x4567);
        vacc4x4567 = wasm_f32x4_add(wasm_f32x4_mul(va4c1, vb4567c1), vacc4x4567);
        vacc5x4567 = wasm_f32x4_add(wasm_f32x4_mul(va5c1, vb4567c1), vacc5x4567);
        const v128_t va0c2 = wasm_v32x4_shuffle(va0, va0, 2, 2, 2, 2);
        const v128_t va1c2 = wasm_v32x4_shuffle(va1, va1, 2, 2, 2, 2);
        const v128_t va2c2 = wasm_v32x4_shuffle(va2, va2, 2, 2, 2, 2);
        const v128_t va3c2 = wasm_v32x4_shuffle(va3, va3, 2, 2, 2, 2);
        const v128_t va4c2 = wasm_v32x4_shuffle(va4, va4, 2, 2, 2, 2);
        const v128_t va5c2 = wasm_v32x4_shuffle(va5, va5, 2, 2, 2, 2);

        const v128_t vb0123c2 = wasm_v128_load(w + 16);
        const v128_t vb4567c2 = wasm_v128_load(w + 20);

        vacc0x0123 = wasm_f32x4_add(wasm_f32x4_mul(va0c2, vb0123c2), vacc0x0123);
        vacc1x0123 = wasm_f32x4_add(wasm_f32x4_mul(va1c2, vb0123c2), vacc1x0123);
        vacc2x0123 = wasm_f32x4_add(wasm_f32x4_mul(va2c2, vb0123c2), vacc2x0123);
        vacc3x0123 = wasm_f32x4_add(wasm_f32x4_mul(va3c2, vb0123c2), vacc3x0123);
        vacc4x0123 = wasm_f32x4_add(wasm_f32x4_mul(va4c2, vb0123c2), vacc4x0123);
        vacc5x0123 = wasm_f32x4_add(wasm_f32x4_mul(va5c2, vb0123c2), vacc5x0123);
        vacc0x4567 = wasm_f32x4_add(wasm_f32x4_mul(va0c2, vb4567c2), vacc0x4567);
        vacc1x4567 = wasm_f32x4_add(wasm_f32x4_mul(va1c2, vb4567c2), vacc1x4567);
        vacc2x4567 = wasm_f32x4_add(wasm_f32x4_mul(va2c2, vb4567c2), vacc2x4567);
        vacc3x4567 = wasm_f32x4_add(wasm_f32x4_mul(va3c2, vb4567c2), vacc3x4567);
        vacc4x4567 = wasm_f32x4_add(wasm_f32x4_mul(va4c2, vb4567c2), vacc4x4567);
        vacc5x4567 = wasm_f32x4_add(wasm_f32x4_mul(va5c2, vb4567c2), vacc5x4567);
        const v128_t va0c3 = wasm_v32x4_shuffle(va0, va0, 3, 3, 3, 3);
        const v128_t va1c3 = wasm_v32x4_shuffle(va1, va1, 3, 3, 3, 3);
        const v128_t va2c3 = wasm_v32x4_shuffle(va2, va2, 3, 3, 3, 3);
        const v128_t va3c3 = wasm_v32x4_shuffle(va3, va3, 3, 3, 3, 3);
        const v128_t va4c3 = wasm_v32x4_shuffle(va4, va4, 3, 3, 3, 3);
        const v128_t va5c3 = wasm_v32x4_shuffle(va5, va5, 3, 3, 3, 3);

        const v128_t vb0123c3 = wasm_v128_load(w + 24);
        const v128_t vb4567c3 = wasm_v128_load(w + 28);

        vacc0x0123 = wasm_f32x4_add(wasm_f32x4_mul(va0c3, vb0123c3), vacc0x0123);
        vacc1x0123 = wasm_f32x4_add(wasm_f32x4_mul(va1c3, vb0123c3), vacc1x0123);
        vacc2x0123 = wasm_f32x4_add(wasm_f32x4_mul(va2c3, vb0123c3), vacc2x0123);
        vacc3x0123 = wasm_f32x4_add(wasm_f32x4_mul(va3c3, vb0123c3), vacc3x0123);
        vacc4x0123 = wasm_f32x4_add(wasm_f32x4_mul(va4c3, vb0123c3), vacc4x0123);
        vacc5x0123 = wasm_f32x4_add(wasm_f32x4_mul(va5c3, vb0123c3), vacc5x0123);
        vacc0x4567 = wasm_f32x4_add(wasm_f32x4_mul(va0c3, vb4567c3), vacc0x4567);
        vacc1x4567 = wasm_f32x4_add(wasm_f32x4_mul(va1c3, vb4567c3), vacc1x4567);
        vacc2x4567 = wasm_f32x4_add(wasm_f32x4_mul(va2c3, vb4567c3), vacc2x4567);
        vacc3x4567 = wasm_f32x4_add(wasm_f32x4_mul(va3c3, vb4567c3), vacc3x4567);
        vacc4x4567 = wasm_f32x4_add(wasm_f32x4_mul(va4c3, vb4567c3), vacc4x4567);
        vacc5x4567 = wasm_f32x4_add(wasm_f32x4_mul(va5c3, vb4567c3), vacc5x4567);

        w += 32;
        k -= 4 * sizeof(float);
      }
      if XNN_UNLIKELY(k != 0) {
        do {
          const v128_t vb0123 = wasm_v128_load(w);
          const v128_t vb4567 = wasm_v128_load(w + 4);
          w += 8;

          const v128_t va0 = wasm_v128_load32_splat(a0);
          a0 += 1;
          const v128_t va1 = wasm_v128_load32_splat(a1);
          a1 += 1;
          const v128_t va2 = wasm_v128_load32_splat(a2);
          a2 += 1;
          const v128_t va3 = wasm_v128_load32_splat(a3);
          a3 += 1;
          const v128_t va4 = wasm_v128_load32_splat(a4);
          a4 += 1;
          const v128_t va5 = wasm_v128_load32_splat(a5);
          a5 += 1;

          vacc0x0123 = wasm_f32x4_add(wasm_f32x4_mul(va0, vb0123), vacc0x0123);
          vacc0x4567 = wasm_f32x4_add(wasm_f32x4_mul(va0, vb4567), vacc0x4567);
          vacc1x0123 = wasm_f32x4_add(wasm_f32x4_mul(va1, vb0123), vacc1x0123);
          vacc1x4567 = wasm_f32x4_add(wasm_f32x4_mul(va1, vb4567), vacc1x4567);
          vacc2x0123 = wasm_f32x4_add(wasm_f32x4_mul(va2, vb0123), vacc2x0123);
          vacc2x4567 = wasm_f32x4_add(wasm_f32x4_mul(va2, vb4567), vacc2x4567);
          vacc3x0123 = wasm_f32x4_add(wasm_f32x4_mul(va3, vb0123), vacc3x0123);
          vacc3x4567 = wasm_f32x4_add(wasm_f32x4_mul(va3, vb4567), vacc3x4567);
          vacc4x0123 = wasm_f32x4_add(wasm_f32x4_mul(va4, vb0123), vacc4x0123);
          vacc4x4567 = wasm_f32x4_add(wasm_f32x4_mul(va4, vb4567), vacc4x4567);
          vacc5x0123 = wasm_f32x4_add(wasm_f32x4_mul(va5, vb0123), vacc5x0123);
          vacc5x4567 = wasm_f32x4_add(wasm_f32x4_mul(va5, vb4567), vacc5x4567);
          k -= sizeof(float);
        } while (k != 0);
      }
      p -= 6 * sizeof(void*);
    } while (p != 0);

    vacc0x0123 = wasm_f32x4_max(vmin, vacc0x0123);
    vacc1x0123 = wasm_f32x4_max(vmin, vacc1x0123);
    vacc2x0123 = wasm_f32x4_max(vmin, vacc2x0123);
    vacc3x0123 = wasm_f32x4_max(vmin, vacc3x0123);
    vacc4x0123 = wasm_f32x4_max(vmin, vacc4x0123);
    vacc5x0123 = wasm_f32x4_max(vmin, vacc5x0123);
    vacc0x4567 = wasm_f32x4_max(vmin, vacc0x4567);
    vacc1x4567 = wasm_f32x4_max(vmin, vacc1x4567);
    vacc2x4567 = wasm_f32x4_max(vmin, vacc2x4567);
    vacc3x4567 = wasm_f32x4_max(vmin, vacc3x4567);
    vacc4x4567 = wasm_f32x4_max(vmin, vacc4x4567);
    vacc5x4567 = wasm_f32x4_max(vmin, vacc5x4567);

    vacc0x0123 = wasm_f32x4_min(vmax, vacc0x0123);
    vacc1x0123 = wasm_f32x4_min(vmax, vacc1x0123);
    vacc2x0123 = wasm_f32x4_min(vmax, vacc2x0123);
    vacc3x0123 = wasm_f32x4_min(vmax, vacc3x0123);
    vacc4x0123 = wasm_f32x4_min(vmax, vacc4x0123);
    vacc5x0123 = wasm_f32x4_min(vmax, vacc5x0123);
    vacc0x4567 = wasm_f32x4_min(vmax, vacc0x4567);
    vacc1x4567 = wasm_f32x4_min(vmax, vacc1x4567);
    vacc2x4567 = wasm_f32x4_min(vmax, vacc2x4567);
    vacc3x4567 = wasm_f32x4_min(vmax, vacc3x4567);
    vacc4x4567 = wasm_f32x4_min(vmax, vacc4x4567);
    vacc5x4567 = wasm_f32x4_min(vmax, vacc5x4567);

    if XNN_LIKELY(nc >= 8) {
      wasm_v128_store(c5, vacc5x0123);
      wasm_v128_store(c5 + 4, vacc5x4567);
      c5 = (float*) ((uintptr_t) c5 + cn_stride);
      wasm_v128_store(c4, vacc4x0123);
      wasm_v128_store(c4 + 4, vacc4x4567);
      c4 = (float*) ((uintptr_t) c4 + cn_stride);
      wasm_v128_store(c3, vacc3x0123);
      wasm_v128_store(c3 + 4, vacc3x4567);
      c3 = (float*) ((uintptr_t) c3 + cn_stride);
      wasm_v128_store(c2, vacc2x0123);
      wasm_v128_store(c2 + 4, vacc2x4567);
      c2 = (float*) ((uintptr_t) c2 + cn_stride);
      wasm_v128_store(c1, vacc1x0123);
      wasm_v128_store(c1 + 4, vacc1x4567);
      c1 = (float*) ((uintptr_t) c1 + cn_stride);
      wasm_v128_store(c0, vacc0x0123);
      wasm_v128_store(c0 + 4, vacc0x4567);
      c0 = (float*) ((uintptr_t) c0 + cn_stride);

      a = (const float**restrict) ((uintptr_t) a - ks);
      nc -= 8;
    } else {
      if (nc & 4) {
        wasm_v128_store(c5, vacc5x0123);
        wasm_v128_store(c4, vacc4x0123);
        wasm_v128_store(c3, vacc3x0123);
        wasm_v128_store(c2, vacc2x0123);
        wasm_v128_store(c1, vacc1x0123);
        wasm_v128_store(c0, vacc0x0123);

        vacc5x0123 = vacc5x4567;
        vacc4x0123 = vacc4x4567;
        vacc3x0123 = vacc3x4567;
        vacc2x0123 = vacc2x4567;
        vacc1x0123 = vacc1x4567;
        vacc0x0123 = vacc0x4567;

        c5 += 4;
        c4 += 4;
        c3 += 4;
        c2 += 4;
        c1 += 4;
        c0 += 4;
      }
      if (nc & 2) {
        wasm_v128_store64_lane(c5, vacc5x0123, 0);
        wasm_v128_store64_lane(c4, vacc4x0123, 0);
        wasm_v128_store64_lane(c3, vacc3x0123, 0);
        wasm_v128_store64_lane(c2, vacc2x0123, 0);
        wasm_v128_store64_lane(c1, vacc1x0123, 0);
        wasm_v128_store64_lane(c0, vacc0x0123, 0);

        vacc5x0123 = wasm_v64x2_shuffle(vacc5x0123, vacc5x0123, 1, 1);
        vacc4x0123 = wasm_v64x2_shuffle(vacc4x0123, vacc4x0123, 1, 1);
        vacc3x0123 = wasm_v64x2_shuffle(vacc3x0123, vacc3x0123, 1, 1);
        vacc2x0123 = wasm_v64x2_shuffle(vacc2x0123, vacc2x0123, 1, 1);
        vacc1x0123 = wasm_v64x2_shuffle(vacc1x0123, vacc1x0123, 1, 1);
        vacc0x0123 = wasm_v64x2_shuffle(vacc0x0123, vacc0x0123, 1, 1);

        c5 += 2;
        c4 += 2;
        c3 += 2;
        c2 += 2;
        c1 += 2;
        c0 += 2;
      }
      if (nc & 1) {
        wasm_v128_store32_lane(c5, vacc5x0123, 0);
        wasm_v128_store32_lane(c4, vacc4x0123, 0);
        wasm_v128_store32_lane(c3, vacc3x0123, 0);
        wasm_v128_store32_lane(c2, vacc2x0123, 0);
        wasm_v128_store32_lane(c1, vacc1x0123, 0);
        wasm_v128_store32_lane(c0, vacc0x0123, 0);
      }

      nc = 0;
    }
  } while (nc != 0);
}
