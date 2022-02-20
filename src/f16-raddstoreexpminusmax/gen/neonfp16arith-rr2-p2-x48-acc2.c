// Auto-generated file. Do not edit!
//   Template: src/f16-raddstoreexpminusmax/neonfp16arith-rr2-p2.c.in
//   Generator: tools/xngen
//
// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <arm_neon.h>

#include <xnnpack/common.h>
#include <xnnpack/raddstoreexpminusmax.h>


void xnn_f16_raddstoreexpminusmax_ukernel__neonfp16arith_rr2_p2_x48_acc2(
    size_t batch,
    const void* input,
    const void* max,
    void* output,
    void* sum,
    const union xnn_f16_expminus_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(batch % sizeof(__fp16) == 0);

  const float16x8_t vi_max = vld1q_dup_f16(max);
  const float16x8_t vlog2e = vreinterpretq_f16_u16(vld1q_dup_u16(&params->neonfp16arith_rr2_p2.log2e));
  const float16x8_t vmagic_bias = vreinterpretq_f16_u16(vld1q_dup_u16(&params->neonfp16arith_rr2_p2.magic_bias));
  const float16x8_t vminus_ln2_hi = vreinterpretq_f16_u16(vld1q_dup_u16(&params->neonfp16arith_rr2_p2.minus_ln2_hi));
  const float16x8_t vminus_ln2_lo = vreinterpretq_f16_u16(vld1q_dup_u16(&params->neonfp16arith_rr2_p2.minus_ln2_lo));
  const float16x8_t vc2 = vreinterpretq_f16_u16(vld1q_dup_u16(&params->neonfp16arith_rr2_p2.c2));
  const float16x8_t vc1 = vreinterpretq_f16_u16(vld1q_dup_u16(&params->neonfp16arith_rr2_p2.c1));
  const float16x8_t vdenorm_cutoff = vreinterpretq_f16_u16(vld1q_dup_u16(&params->neonfp16arith_rr2_p2.denorm_cutoff));

  const __fp16* i = (const __fp16*) input;
  __fp16* o = (__fp16*) output;
  float16x8_t vacc0 = vmovq_n_f16(0.0f);
  float16x8_t vacc1 = vmovq_n_f16(0.0f);
  for (; batch >= 48 * sizeof(__fp16); batch -= 48 * sizeof(__fp16)) {
    const float16x8_t vi0 = vld1q_f16(i); i += 8;
    const float16x8_t vi1 = vld1q_f16(i); i += 8;
    const float16x8_t vi2 = vld1q_f16(i); i += 8;
    const float16x8_t vi3 = vld1q_f16(i); i += 8;
    const float16x8_t vi4 = vld1q_f16(i); i += 8;
    const float16x8_t vi5 = vld1q_f16(i); i += 8;

    const float16x8_t vx0 = vsubq_f16(vi0, vi_max);
    const float16x8_t vx1 = vsubq_f16(vi1, vi_max);
    const float16x8_t vx2 = vsubq_f16(vi2, vi_max);
    const float16x8_t vx3 = vsubq_f16(vi3, vi_max);
    const float16x8_t vx4 = vsubq_f16(vi4, vi_max);
    const float16x8_t vx5 = vsubq_f16(vi5, vi_max);

    float16x8_t vn0 = vfmaq_f16(vmagic_bias, vx0, vlog2e);
    float16x8_t vn1 = vfmaq_f16(vmagic_bias, vx1, vlog2e);
    float16x8_t vn2 = vfmaq_f16(vmagic_bias, vx2, vlog2e);
    float16x8_t vn3 = vfmaq_f16(vmagic_bias, vx3, vlog2e);
    float16x8_t vn4 = vfmaq_f16(vmagic_bias, vx4, vlog2e);
    float16x8_t vn5 = vfmaq_f16(vmagic_bias, vx5, vlog2e);

    const float16x8_t vs0 = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn0), 10));
    const float16x8_t vs1 = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn1), 10));
    const float16x8_t vs2 = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn2), 10));
    const float16x8_t vs3 = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn3), 10));
    const float16x8_t vs4 = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn4), 10));
    const float16x8_t vs5 = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn5), 10));

    vn0 = vsubq_f16(vn0, vmagic_bias);
    vn1 = vsubq_f16(vn1, vmagic_bias);
    vn2 = vsubq_f16(vn2, vmagic_bias);
    vn3 = vsubq_f16(vn3, vmagic_bias);
    vn4 = vsubq_f16(vn4, vmagic_bias);
    vn5 = vsubq_f16(vn5, vmagic_bias);

    float16x8_t vt0 = vfmaq_f16(vx0, vn0, vminus_ln2_hi);
    float16x8_t vt1 = vfmaq_f16(vx1, vn1, vminus_ln2_hi);
    float16x8_t vt2 = vfmaq_f16(vx2, vn2, vminus_ln2_hi);
    float16x8_t vt3 = vfmaq_f16(vx3, vn3, vminus_ln2_hi);
    float16x8_t vt4 = vfmaq_f16(vx4, vn4, vminus_ln2_hi);
    float16x8_t vt5 = vfmaq_f16(vx5, vn5, vminus_ln2_hi);

    vt0 = vfmaq_f16(vt0, vn0, vminus_ln2_lo);
    vt1 = vfmaq_f16(vt1, vn1, vminus_ln2_lo);
    vt2 = vfmaq_f16(vt2, vn2, vminus_ln2_lo);
    vt3 = vfmaq_f16(vt3, vn3, vminus_ln2_lo);
    vt4 = vfmaq_f16(vt4, vn4, vminus_ln2_lo);
    vt5 = vfmaq_f16(vt5, vn5, vminus_ln2_lo);

    const float16x8_t vp0 = vfmaq_f16(vc1, vc2, vt0);
    const float16x8_t vp1 = vfmaq_f16(vc1, vc2, vt1);
    const float16x8_t vp2 = vfmaq_f16(vc1, vc2, vt2);
    const float16x8_t vp3 = vfmaq_f16(vc1, vc2, vt3);
    const float16x8_t vp4 = vfmaq_f16(vc1, vc2, vt4);
    const float16x8_t vp5 = vfmaq_f16(vc1, vc2, vt5);

    vt0 = vmulq_f16(vt0, vs0);
    vt1 = vmulq_f16(vt1, vs1);
    vt2 = vmulq_f16(vt2, vs2);
    vt3 = vmulq_f16(vt3, vs3);
    vt4 = vmulq_f16(vt4, vs4);
    vt5 = vmulq_f16(vt5, vs5);

    float16x8_t vf0 = vfmaq_f16(vs0, vp0, vt0);
    const uint16x8_t vm0 = vcltq_f16(vx0, vdenorm_cutoff);
    float16x8_t vf1 = vfmaq_f16(vs1, vp1, vt1);
    const uint16x8_t vm1 = vcltq_f16(vx1, vdenorm_cutoff);
    float16x8_t vf2 = vfmaq_f16(vs2, vp2, vt2);
    const uint16x8_t vm2 = vcltq_f16(vx2, vdenorm_cutoff);
    float16x8_t vf3 = vfmaq_f16(vs3, vp3, vt3);
    const uint16x8_t vm3 = vcltq_f16(vx3, vdenorm_cutoff);
    float16x8_t vf4 = vfmaq_f16(vs4, vp4, vt4);
    const uint16x8_t vm4 = vcltq_f16(vx4, vdenorm_cutoff);
    float16x8_t vf5 = vfmaq_f16(vs5, vp5, vt5);
    const uint16x8_t vm5 = vcltq_f16(vx5, vdenorm_cutoff);

    vf0 = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf0), vm0));
    vf1 = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf1), vm1));
    vf2 = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf2), vm2));
    vf3 = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf3), vm3));
    vf4 = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf4), vm4));
    vf5 = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf5), vm5));

    vst1q_f16(o, vf0); o += 8;
    vst1q_f16(o, vf1); o += 8;
    vst1q_f16(o, vf2); o += 8;
    vst1q_f16(o, vf3); o += 8;
    vst1q_f16(o, vf4); o += 8;
    vst1q_f16(o, vf5); o += 8;

    vacc0 = vaddq_f16(vacc0, vf0);
    vacc1 = vaddq_f16(vacc1, vf1);
    vacc0 = vaddq_f16(vacc0, vf2);
    vacc1 = vaddq_f16(vacc1, vf3);
    vacc0 = vaddq_f16(vacc0, vf4);
    vacc1 = vaddq_f16(vacc1, vf5);
  }
  vacc0 = vaddq_f16(vacc0, vacc1);

  float16x8_t vacc = vacc0;
  for (; batch >= 8 * sizeof(__fp16); batch -= 8 * sizeof(__fp16)) {
    const float16x8_t vi = vld1q_f16(i); i += 8;

    const float16x8_t vx = vsubq_f16(vi, vi_max);

    float16x8_t vn = vfmaq_f16(vmagic_bias, vx, vlog2e);
    const float16x8_t vs = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn), 10));
    vn = vsubq_f16(vn, vmagic_bias);

    float16x8_t vt = vfmaq_f16(vx, vn, vminus_ln2_hi);
    vt = vfmaq_f16(vt, vn, vminus_ln2_lo);

    const float16x8_t vp = vfmaq_f16(vc1, vc2, vt);
    vt = vmulq_f16(vt, vs);

    float16x8_t vf = vfmaq_f16(vs, vp, vt);
    const uint16x8_t vm = vcltq_f16(vx, vdenorm_cutoff);
    vf = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf), vm));

    vst1q_f16(o, vf); o += 8;

    vacc = vaddq_f16(vacc, vf);
  }
  float16x4_t vacc_lo = vadd_f16(vget_low_f16(vacc), vget_high_f16(vacc));
  if (batch != 0) {
    assert(batch >= 1 * sizeof(__fp16));
    assert(batch <= 7 * sizeof(__fp16));
    const float16x8_t vi = vld1q_f16(i);

    const float16x8_t vx = vsubq_f16(vi, vi_max);

    float16x8_t vn = vfmaq_f16(vmagic_bias, vx, vlog2e);
    const float16x8_t vs = vreinterpretq_f16_s16(vshlq_n_s16(vreinterpretq_s16_f16(vn), 10));
    vn = vsubq_f16(vn, vmagic_bias);

    float16x8_t vt = vfmaq_f16(vx, vn, vminus_ln2_hi);
    vt = vfmaq_f16(vt, vn, vminus_ln2_lo);

    const float16x8_t vp = vfmaq_f16(vc1, vc2, vt);
    vt = vmulq_f16(vt, vs);

    float16x8_t vf = vfmaq_f16(vs, vp, vt);
    const uint16x8_t vm = vcltq_f16(vx, vdenorm_cutoff);
    vf = vreinterpretq_f16_u16(vbicq_u16(vreinterpretq_u16_f16(vf), vm));

    float16x4_t vf_lo = vget_low_f16(vf);
    if (batch & (4 * sizeof(__fp16))) {
      vst1_f16(o, vf_lo); o += 4;
      vacc_lo = vadd_f16(vacc_lo, vf_lo);
      vf_lo = vget_high_f16(vf);
    }
    if (batch & (2 * sizeof(__fp16))) {
      vst1_lane_u32((void*) o, vreinterpret_u32_f16(vf_lo), 0); o += 2;
      vacc_lo = vadd_f16(vacc_lo, vreinterpret_f16_u64(vshl_n_u64(vreinterpret_u64_f16(vf_lo), 32)));
      vf_lo = vext_f16(vf_lo, vf_lo, 2);
    }
    if (batch & (1 * sizeof(__fp16))) {
      vst1_lane_f16(o, vf_lo, 0);
      vacc_lo = vadd_f16(vacc_lo, vreinterpret_f16_u64(vshl_n_u64(vreinterpret_u64_f16(vf_lo), 48)));
    }
  }
  vacc_lo = vpadd_f16(vacc_lo, vacc_lo);
  *((__fp16*) sum) = vget_lane_f16(vacc_lo, 0) + vget_lane_f16(vacc_lo, 1);
}
