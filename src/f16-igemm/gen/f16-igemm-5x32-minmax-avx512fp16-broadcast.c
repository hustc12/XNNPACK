// Auto-generated file. Do not edit!
//   Template: src/f16-igemm/avx512fp16-broadcast.c.in
//   Generator: tools/xngen
//
// Copyright 2024 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <immintrin.h>

#include "src/xnnpack/igemm.h"
#include "src/xnnpack/intrinsics-polyfill.h"


void xnn_f16_igemm_minmax_ukernel_5x32__avx512fp16_broadcast(
    size_t mr,
    size_t nc,
    size_t kc,
    size_t ks,
    const xnn_float16** restrict a,
    const xnn_float16* restrict w,
    xnn_float16* restrict c,
    size_t cm_stride,
    size_t cn_stride,
    size_t a_offset,
    const xnn_float16* zero,
    const struct xnn_f16_minmax_params params[restrict XNN_MIN_ELEMENTS(1)])
{
  assert(mr != 0);
  assert(mr <= 5);
  assert(nc != 0);
  assert(kc != 0);
  assert(kc % sizeof(uint16_t) == 0);
  assert(ks != 0);
  assert(ks % (5 * sizeof(void*)) == 0);
  assert(a_offset % sizeof(xnn_float16) == 0);
  assert(a != NULL);
  assert(w != NULL);
  assert(c != NULL);

#if defined(__AVX512FP16__)
  uint16_t* c0 = (uint16_t*) c;
  uint16_t* c1 = (uint16_t*) ((uintptr_t) c0 + cm_stride);
  if XNN_UNPREDICTABLE(mr < 2) {
    c1 = c0;
  }
  uint16_t* c2 = (uint16_t*) ((uintptr_t) c1 + cm_stride);
  if XNN_UNPREDICTABLE(mr <= 2) {
    c2 = c1;
  }
  uint16_t* c3 = (uint16_t*) ((uintptr_t) c2 + cm_stride);
  if XNN_UNPREDICTABLE(mr < 4) {
    c3 = c2;
  }
  uint16_t* c4 = (uint16_t*) ((uintptr_t) c3 + cm_stride);
  if XNN_UNPREDICTABLE(mr <= 4) {
    c4 = c3;
  }

  do {
    __m512h vacc0x0 = _mm512_load_ph(w);
    __m512h vacc1x0 = vacc0x0;
    __m512h vacc2x0 = vacc0x0;
    __m512h vacc3x0 = vacc0x0;
    __m512h vacc4x0 = vacc0x0;
    w = (const xnn_float16*) w + 32;

    size_t p = ks;
    do {
      const uint16_t* restrict a0 = (const uint16_t*) a[0];
      assert(a0 != NULL);
      if XNN_UNPREDICTABLE(a0 != (const uint16_t*) zero) {
        a0 = (const uint16_t*) ((uintptr_t) a0 + a_offset);
      }
      const uint16_t* restrict a1 = (const uint16_t*) a[1];
      assert(a1 != NULL);
      if XNN_UNPREDICTABLE(a1 != (const uint16_t*) zero) {
        a1 = (const uint16_t*) ((uintptr_t) a1 + a_offset);
      }
      const uint16_t* restrict a2 = (const uint16_t*) a[2];
      assert(a2 != NULL);
      if XNN_UNPREDICTABLE(a2 != (const uint16_t*) zero) {
        a2 = (const uint16_t*) ((uintptr_t) a2 + a_offset);
      }
      const uint16_t* restrict a3 = (const uint16_t*) a[3];
      assert(a3 != NULL);
      if XNN_UNPREDICTABLE(a3 != (const uint16_t*) zero) {
        a3 = (const uint16_t*) ((uintptr_t) a3 + a_offset);
      }
      const uint16_t* restrict a4 = (const uint16_t*) a[4];
      assert(a4 != NULL);
      if XNN_UNPREDICTABLE(a4 != (const uint16_t*) zero) {
        a4 = (const uint16_t*) ((uintptr_t) a4 + a_offset);
      }
      a += 5;

      size_t k = kc;
      do {
        const __m512h vb0 = _mm512_load_ph(w);
        w = (const xnn_float16*) w + 32;

        const __m512h va0 = _mm512_castsi512_ph(_mm512_set1_epi16(*a0));
        vacc0x0 = _mm512_fmadd_ph(va0, vb0, vacc0x0);
        a0 += 1;
        const __m512h va1 = _mm512_castsi512_ph(_mm512_set1_epi16(*a1));
        vacc1x0 = _mm512_fmadd_ph(va1, vb0, vacc1x0);
        a1 += 1;
        const __m512h va2 = _mm512_castsi512_ph(_mm512_set1_epi16(*a2));
        vacc2x0 = _mm512_fmadd_ph(va2, vb0, vacc2x0);
        a2 += 1;
        const __m512h va3 = _mm512_castsi512_ph(_mm512_set1_epi16(*a3));
        vacc3x0 = _mm512_fmadd_ph(va3, vb0, vacc3x0);
        a3 += 1;
        const __m512h va4 = _mm512_castsi512_ph(_mm512_set1_epi16(*a4));
        vacc4x0 = _mm512_fmadd_ph(va4, vb0, vacc4x0);
        a4 += 1;

        k -= sizeof(uint16_t);
      } while (k != 0);

      p -= 5 * sizeof(void*);
    } while (p != 0);

    const __m512h vmin = _mm512_castsi512_ph(_mm512_set1_epi16(*(const uint16_t*) &params->scalar.min));
    vacc0x0 = _mm512_max_ph(vmin, vacc0x0);
    vacc1x0 = _mm512_max_ph(vmin, vacc1x0);
    vacc2x0 = _mm512_max_ph(vmin, vacc2x0);
    vacc3x0 = _mm512_max_ph(vmin, vacc3x0);
    vacc4x0 = _mm512_max_ph(vmin, vacc4x0);

    const __m512h vmax = _mm512_castsi512_ph(_mm512_set1_epi16(*(const uint16_t*) &params->scalar.max));
    vacc0x0 = _mm512_min_ph(vmax, vacc0x0);
    vacc1x0 = _mm512_min_ph(vmax, vacc1x0);
    vacc2x0 = _mm512_min_ph(vmax, vacc2x0);
    vacc3x0 = _mm512_min_ph(vmax, vacc3x0);
    vacc4x0 = _mm512_min_ph(vmax, vacc4x0);

    if XNN_LIKELY(nc >= 32) {
      _mm512_storeu_ph(c4, vacc4x0);
      c4 = (uint16_t*) ((uintptr_t) c4 + cn_stride);
      _mm512_storeu_ph(c3, vacc3x0);
      c3 = (uint16_t*) ((uintptr_t) c3 + cn_stride);
      _mm512_storeu_ph(c2, vacc2x0);
      c2 = (uint16_t*) ((uintptr_t) c2 + cn_stride);
      _mm512_storeu_ph(c1, vacc1x0);
      c1 = (uint16_t*) ((uintptr_t) c1 + cn_stride);
      _mm512_storeu_ph(c0, vacc0x0);
      c0 = (uint16_t*) ((uintptr_t) c0 + cn_stride);

      a = (const xnn_float16**restrict) ((uintptr_t) a - ks);
      nc -= 32;
    } else {
      assert(nc != 0);
      assert(nc < 32);
      // Prepare mask for valid 16-bit elements (depends on nc).
      const __mmask32 vmask = _cvtu32_mask32((uint32_t) (UINT32_C(1) << nc) - UINT32_C(1));
      _mm512_mask_storeu_epi16(c4, vmask, _mm512_castph_si512(vacc4x0));
      _mm512_mask_storeu_epi16(c3, vmask, _mm512_castph_si512(vacc3x0));
      _mm512_mask_storeu_epi16(c2, vmask, _mm512_castph_si512(vacc2x0));
      _mm512_mask_storeu_epi16(c1, vmask, _mm512_castph_si512(vacc1x0));
      _mm512_mask_storeu_epi16(c0, vmask, _mm512_castph_si512(vacc0x0));
      nc = 0;
    }
  } while (nc != 0);
#endif  // defined(__AVX512FP16__)
}
