// Auto-generated file. Do not edit!
//   Template: src/x8-packw/kr-gio-scalar.c.in
//   Generator: tools/xngen
//
// Copyright 2023 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.


#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include "src/xnnpack/packw.h"

void xnn_qs8_packw_gemm_gio_ukernel_x64c4__scalar(
  size_t g,
  size_t nc,
  size_t kc,
  size_t nr,
  size_t kr,
  size_t sr,
  size_t k_stride,
  const int8_t* weights,
  const int32_t* bias,
  const void* scale,
  int8_t* packed_weights,
  size_t extra_bytes,
  const void* params)
{
  assert(g != 0);
  assert(nc != 0);
  assert(kc != 0);
  assert(nr == 64);
  assert(kr == 4);
  assert(sr == 1);
  assert(weights != NULL);
  assert(packed_weights != NULL);

  int8_t* out = (int8_t*) packed_weights;
  const int32_t* b = (const int32_t*) bias;
  const uint32_t izp = (uint32_t) (params ? (((const struct xnn_qs8_packw_params*) params)->input_zero_point + 0): 0);

  do {
    // NC main loop multiple of 64
    const int8_t* w0 = (const int8_t*) weights;
    size_t n = nc;
    for (;n >= 64; n -= 64) {
      int32_t* packed_b = (int32_t*) out;
      if XNN_LIKELY(b != NULL) {
        ((int32_t*) out)[0] = b[0];
        ((int32_t*) out)[1] = b[1];
        ((int32_t*) out)[2] = b[2];
        ((int32_t*) out)[3] = b[3];
        ((int32_t*) out)[4] = b[4];
        ((int32_t*) out)[5] = b[5];
        ((int32_t*) out)[6] = b[6];
        ((int32_t*) out)[7] = b[7];
        ((int32_t*) out)[8] = b[8];
        ((int32_t*) out)[9] = b[9];
        ((int32_t*) out)[10] = b[10];
        ((int32_t*) out)[11] = b[11];
        ((int32_t*) out)[12] = b[12];
        ((int32_t*) out)[13] = b[13];
        ((int32_t*) out)[14] = b[14];
        ((int32_t*) out)[15] = b[15];
        ((int32_t*) out)[16] = b[16];
        ((int32_t*) out)[17] = b[17];
        ((int32_t*) out)[18] = b[18];
        ((int32_t*) out)[19] = b[19];
        ((int32_t*) out)[20] = b[20];
        ((int32_t*) out)[21] = b[21];
        ((int32_t*) out)[22] = b[22];
        ((int32_t*) out)[23] = b[23];
        ((int32_t*) out)[24] = b[24];
        ((int32_t*) out)[25] = b[25];
        ((int32_t*) out)[26] = b[26];
        ((int32_t*) out)[27] = b[27];
        ((int32_t*) out)[28] = b[28];
        ((int32_t*) out)[29] = b[29];
        ((int32_t*) out)[30] = b[30];
        ((int32_t*) out)[31] = b[31];
        ((int32_t*) out)[32] = b[32];
        ((int32_t*) out)[33] = b[33];
        ((int32_t*) out)[34] = b[34];
        ((int32_t*) out)[35] = b[35];
        ((int32_t*) out)[36] = b[36];
        ((int32_t*) out)[37] = b[37];
        ((int32_t*) out)[38] = b[38];
        ((int32_t*) out)[39] = b[39];
        ((int32_t*) out)[40] = b[40];
        ((int32_t*) out)[41] = b[41];
        ((int32_t*) out)[42] = b[42];
        ((int32_t*) out)[43] = b[43];
        ((int32_t*) out)[44] = b[44];
        ((int32_t*) out)[45] = b[45];
        ((int32_t*) out)[46] = b[46];
        ((int32_t*) out)[47] = b[47];
        ((int32_t*) out)[48] = b[48];
        ((int32_t*) out)[49] = b[49];
        ((int32_t*) out)[50] = b[50];
        ((int32_t*) out)[51] = b[51];
        ((int32_t*) out)[52] = b[52];
        ((int32_t*) out)[53] = b[53];
        ((int32_t*) out)[54] = b[54];
        ((int32_t*) out)[55] = b[55];
        ((int32_t*) out)[56] = b[56];
        ((int32_t*) out)[57] = b[57];
        ((int32_t*) out)[58] = b[58];
        ((int32_t*) out)[59] = b[59];
        ((int32_t*) out)[60] = b[60];
        ((int32_t*) out)[61] = b[61];
        ((int32_t*) out)[62] = b[62];
        ((int32_t*) out)[63] = b[63];
        b += 64;
      } else {
        ((int32_t*) out)[0] = 0;
        ((int32_t*) out)[1] = 0;
        ((int32_t*) out)[2] = 0;
        ((int32_t*) out)[3] = 0;
        ((int32_t*) out)[4] = 0;
        ((int32_t*) out)[5] = 0;
        ((int32_t*) out)[6] = 0;
        ((int32_t*) out)[7] = 0;
        ((int32_t*) out)[8] = 0;
        ((int32_t*) out)[9] = 0;
        ((int32_t*) out)[10] = 0;
        ((int32_t*) out)[11] = 0;
        ((int32_t*) out)[12] = 0;
        ((int32_t*) out)[13] = 0;
        ((int32_t*) out)[14] = 0;
        ((int32_t*) out)[15] = 0;
        ((int32_t*) out)[16] = 0;
        ((int32_t*) out)[17] = 0;
        ((int32_t*) out)[18] = 0;
        ((int32_t*) out)[19] = 0;
        ((int32_t*) out)[20] = 0;
        ((int32_t*) out)[21] = 0;
        ((int32_t*) out)[22] = 0;
        ((int32_t*) out)[23] = 0;
        ((int32_t*) out)[24] = 0;
        ((int32_t*) out)[25] = 0;
        ((int32_t*) out)[26] = 0;
        ((int32_t*) out)[27] = 0;
        ((int32_t*) out)[28] = 0;
        ((int32_t*) out)[29] = 0;
        ((int32_t*) out)[30] = 0;
        ((int32_t*) out)[31] = 0;
        ((int32_t*) out)[32] = 0;
        ((int32_t*) out)[33] = 0;
        ((int32_t*) out)[34] = 0;
        ((int32_t*) out)[35] = 0;
        ((int32_t*) out)[36] = 0;
        ((int32_t*) out)[37] = 0;
        ((int32_t*) out)[38] = 0;
        ((int32_t*) out)[39] = 0;
        ((int32_t*) out)[40] = 0;
        ((int32_t*) out)[41] = 0;
        ((int32_t*) out)[42] = 0;
        ((int32_t*) out)[43] = 0;
        ((int32_t*) out)[44] = 0;
        ((int32_t*) out)[45] = 0;
        ((int32_t*) out)[46] = 0;
        ((int32_t*) out)[47] = 0;
        ((int32_t*) out)[48] = 0;
        ((int32_t*) out)[49] = 0;
        ((int32_t*) out)[50] = 0;
        ((int32_t*) out)[51] = 0;
        ((int32_t*) out)[52] = 0;
        ((int32_t*) out)[53] = 0;
        ((int32_t*) out)[54] = 0;
        ((int32_t*) out)[55] = 0;
        ((int32_t*) out)[56] = 0;
        ((int32_t*) out)[57] = 0;
        ((int32_t*) out)[58] = 0;
        ((int32_t*) out)[59] = 0;
        ((int32_t*) out)[60] = 0;
        ((int32_t*) out)[61] = 0;
        ((int32_t*) out)[62] = 0;
        ((int32_t*) out)[63] = 0;
      }
      out += 64 * sizeof(int32_t);

      const int8_t* w1 = w0 + k_stride;
      const int8_t* w2 = w1 + k_stride;
      const int8_t* w3 = w2 + k_stride;
      uint32_t ksum0 = 0;
      uint32_t ksum1 = 0;
      uint32_t ksum2 = 0;
      uint32_t ksum3 = 0;
      uint32_t ksum4 = 0;
      uint32_t ksum5 = 0;
      uint32_t ksum6 = 0;
      uint32_t ksum7 = 0;
      uint32_t ksum8 = 0;
      uint32_t ksum9 = 0;
      uint32_t ksum10 = 0;
      uint32_t ksum11 = 0;
      uint32_t ksum12 = 0;
      uint32_t ksum13 = 0;
      uint32_t ksum14 = 0;
      uint32_t ksum15 = 0;
      uint32_t ksum16 = 0;
      uint32_t ksum17 = 0;
      uint32_t ksum18 = 0;
      uint32_t ksum19 = 0;
      uint32_t ksum20 = 0;
      uint32_t ksum21 = 0;
      uint32_t ksum22 = 0;
      uint32_t ksum23 = 0;
      uint32_t ksum24 = 0;
      uint32_t ksum25 = 0;
      uint32_t ksum26 = 0;
      uint32_t ksum27 = 0;
      uint32_t ksum28 = 0;
      uint32_t ksum29 = 0;
      uint32_t ksum30 = 0;
      uint32_t ksum31 = 0;
      uint32_t ksum32 = 0;
      uint32_t ksum33 = 0;
      uint32_t ksum34 = 0;
      uint32_t ksum35 = 0;
      uint32_t ksum36 = 0;
      uint32_t ksum37 = 0;
      uint32_t ksum38 = 0;
      uint32_t ksum39 = 0;
      uint32_t ksum40 = 0;
      uint32_t ksum41 = 0;
      uint32_t ksum42 = 0;
      uint32_t ksum43 = 0;
      uint32_t ksum44 = 0;
      uint32_t ksum45 = 0;
      uint32_t ksum46 = 0;
      uint32_t ksum47 = 0;
      uint32_t ksum48 = 0;
      uint32_t ksum49 = 0;
      uint32_t ksum50 = 0;
      uint32_t ksum51 = 0;
      uint32_t ksum52 = 0;
      uint32_t ksum53 = 0;
      uint32_t ksum54 = 0;
      uint32_t ksum55 = 0;
      uint32_t ksum56 = 0;
      uint32_t ksum57 = 0;
      uint32_t ksum58 = 0;
      uint32_t ksum59 = 0;
      uint32_t ksum60 = 0;
      uint32_t ksum61 = 0;
      uint32_t ksum62 = 0;
      uint32_t ksum63 = 0;

      // KC main loop multiple of 64x4
      size_t k = kc;
      for (; k >= 4; k -= 4) {
        const int8_t v0x0 = w0[0];
        const int8_t v1x0 = w1[0];
        const int8_t v2x0 = w2[0];
        const int8_t v3x0 = w3[0];
        ksum0 += (uint32_t) v0x0;
        ksum0 += (uint32_t) v1x0;
        ksum0 += (uint32_t) v2x0;
        ksum0 += (uint32_t) v3x0;
        out[0] = v0x0;
        out[1] = v1x0;
        out[2] = v2x0;
        out[3] = v3x0;
        const int8_t v0x1 = w0[1];
        const int8_t v1x1 = w1[1];
        const int8_t v2x1 = w2[1];
        const int8_t v3x1 = w3[1];
        ksum1 += (uint32_t) v0x1;
        ksum1 += (uint32_t) v1x1;
        ksum1 += (uint32_t) v2x1;
        ksum1 += (uint32_t) v3x1;
        out[4] = v0x1;
        out[5] = v1x1;
        out[6] = v2x1;
        out[7] = v3x1;
        const int8_t v0x2 = w0[2];
        const int8_t v1x2 = w1[2];
        const int8_t v2x2 = w2[2];
        const int8_t v3x2 = w3[2];
        ksum2 += (uint32_t) v0x2;
        ksum2 += (uint32_t) v1x2;
        ksum2 += (uint32_t) v2x2;
        ksum2 += (uint32_t) v3x2;
        out[8] = v0x2;
        out[9] = v1x2;
        out[10] = v2x2;
        out[11] = v3x2;
        const int8_t v0x3 = w0[3];
        const int8_t v1x3 = w1[3];
        const int8_t v2x3 = w2[3];
        const int8_t v3x3 = w3[3];
        ksum3 += (uint32_t) v0x3;
        ksum3 += (uint32_t) v1x3;
        ksum3 += (uint32_t) v2x3;
        ksum3 += (uint32_t) v3x3;
        out[12] = v0x3;
        out[13] = v1x3;
        out[14] = v2x3;
        out[15] = v3x3;
        const int8_t v0x4 = w0[4];
        const int8_t v1x4 = w1[4];
        const int8_t v2x4 = w2[4];
        const int8_t v3x4 = w3[4];
        ksum4 += (uint32_t) v0x4;
        ksum4 += (uint32_t) v1x4;
        ksum4 += (uint32_t) v2x4;
        ksum4 += (uint32_t) v3x4;
        out[16] = v0x4;
        out[17] = v1x4;
        out[18] = v2x4;
        out[19] = v3x4;
        const int8_t v0x5 = w0[5];
        const int8_t v1x5 = w1[5];
        const int8_t v2x5 = w2[5];
        const int8_t v3x5 = w3[5];
        ksum5 += (uint32_t) v0x5;
        ksum5 += (uint32_t) v1x5;
        ksum5 += (uint32_t) v2x5;
        ksum5 += (uint32_t) v3x5;
        out[20] = v0x5;
        out[21] = v1x5;
        out[22] = v2x5;
        out[23] = v3x5;
        const int8_t v0x6 = w0[6];
        const int8_t v1x6 = w1[6];
        const int8_t v2x6 = w2[6];
        const int8_t v3x6 = w3[6];
        ksum6 += (uint32_t) v0x6;
        ksum6 += (uint32_t) v1x6;
        ksum6 += (uint32_t) v2x6;
        ksum6 += (uint32_t) v3x6;
        out[24] = v0x6;
        out[25] = v1x6;
        out[26] = v2x6;
        out[27] = v3x6;
        const int8_t v0x7 = w0[7];
        const int8_t v1x7 = w1[7];
        const int8_t v2x7 = w2[7];
        const int8_t v3x7 = w3[7];
        ksum7 += (uint32_t) v0x7;
        ksum7 += (uint32_t) v1x7;
        ksum7 += (uint32_t) v2x7;
        ksum7 += (uint32_t) v3x7;
        out[28] = v0x7;
        out[29] = v1x7;
        out[30] = v2x7;
        out[31] = v3x7;
        const int8_t v0x8 = w0[8];
        const int8_t v1x8 = w1[8];
        const int8_t v2x8 = w2[8];
        const int8_t v3x8 = w3[8];
        ksum8 += (uint32_t) v0x8;
        ksum8 += (uint32_t) v1x8;
        ksum8 += (uint32_t) v2x8;
        ksum8 += (uint32_t) v3x8;
        out[32] = v0x8;
        out[33] = v1x8;
        out[34] = v2x8;
        out[35] = v3x8;
        const int8_t v0x9 = w0[9];
        const int8_t v1x9 = w1[9];
        const int8_t v2x9 = w2[9];
        const int8_t v3x9 = w3[9];
        ksum9 += (uint32_t) v0x9;
        ksum9 += (uint32_t) v1x9;
        ksum9 += (uint32_t) v2x9;
        ksum9 += (uint32_t) v3x9;
        out[36] = v0x9;
        out[37] = v1x9;
        out[38] = v2x9;
        out[39] = v3x9;
        const int8_t v0x10 = w0[10];
        const int8_t v1x10 = w1[10];
        const int8_t v2x10 = w2[10];
        const int8_t v3x10 = w3[10];
        ksum10 += (uint32_t) v0x10;
        ksum10 += (uint32_t) v1x10;
        ksum10 += (uint32_t) v2x10;
        ksum10 += (uint32_t) v3x10;
        out[40] = v0x10;
        out[41] = v1x10;
        out[42] = v2x10;
        out[43] = v3x10;
        const int8_t v0x11 = w0[11];
        const int8_t v1x11 = w1[11];
        const int8_t v2x11 = w2[11];
        const int8_t v3x11 = w3[11];
        ksum11 += (uint32_t) v0x11;
        ksum11 += (uint32_t) v1x11;
        ksum11 += (uint32_t) v2x11;
        ksum11 += (uint32_t) v3x11;
        out[44] = v0x11;
        out[45] = v1x11;
        out[46] = v2x11;
        out[47] = v3x11;
        const int8_t v0x12 = w0[12];
        const int8_t v1x12 = w1[12];
        const int8_t v2x12 = w2[12];
        const int8_t v3x12 = w3[12];
        ksum12 += (uint32_t) v0x12;
        ksum12 += (uint32_t) v1x12;
        ksum12 += (uint32_t) v2x12;
        ksum12 += (uint32_t) v3x12;
        out[48] = v0x12;
        out[49] = v1x12;
        out[50] = v2x12;
        out[51] = v3x12;
        const int8_t v0x13 = w0[13];
        const int8_t v1x13 = w1[13];
        const int8_t v2x13 = w2[13];
        const int8_t v3x13 = w3[13];
        ksum13 += (uint32_t) v0x13;
        ksum13 += (uint32_t) v1x13;
        ksum13 += (uint32_t) v2x13;
        ksum13 += (uint32_t) v3x13;
        out[52] = v0x13;
        out[53] = v1x13;
        out[54] = v2x13;
        out[55] = v3x13;
        const int8_t v0x14 = w0[14];
        const int8_t v1x14 = w1[14];
        const int8_t v2x14 = w2[14];
        const int8_t v3x14 = w3[14];
        ksum14 += (uint32_t) v0x14;
        ksum14 += (uint32_t) v1x14;
        ksum14 += (uint32_t) v2x14;
        ksum14 += (uint32_t) v3x14;
        out[56] = v0x14;
        out[57] = v1x14;
        out[58] = v2x14;
        out[59] = v3x14;
        const int8_t v0x15 = w0[15];
        const int8_t v1x15 = w1[15];
        const int8_t v2x15 = w2[15];
        const int8_t v3x15 = w3[15];
        ksum15 += (uint32_t) v0x15;
        ksum15 += (uint32_t) v1x15;
        ksum15 += (uint32_t) v2x15;
        ksum15 += (uint32_t) v3x15;
        out[60] = v0x15;
        out[61] = v1x15;
        out[62] = v2x15;
        out[63] = v3x15;
        const int8_t v0x16 = w0[16];
        const int8_t v1x16 = w1[16];
        const int8_t v2x16 = w2[16];
        const int8_t v3x16 = w3[16];
        ksum16 += (uint32_t) v0x16;
        ksum16 += (uint32_t) v1x16;
        ksum16 += (uint32_t) v2x16;
        ksum16 += (uint32_t) v3x16;
        out[64] = v0x16;
        out[65] = v1x16;
        out[66] = v2x16;
        out[67] = v3x16;
        const int8_t v0x17 = w0[17];
        const int8_t v1x17 = w1[17];
        const int8_t v2x17 = w2[17];
        const int8_t v3x17 = w3[17];
        ksum17 += (uint32_t) v0x17;
        ksum17 += (uint32_t) v1x17;
        ksum17 += (uint32_t) v2x17;
        ksum17 += (uint32_t) v3x17;
        out[68] = v0x17;
        out[69] = v1x17;
        out[70] = v2x17;
        out[71] = v3x17;
        const int8_t v0x18 = w0[18];
        const int8_t v1x18 = w1[18];
        const int8_t v2x18 = w2[18];
        const int8_t v3x18 = w3[18];
        ksum18 += (uint32_t) v0x18;
        ksum18 += (uint32_t) v1x18;
        ksum18 += (uint32_t) v2x18;
        ksum18 += (uint32_t) v3x18;
        out[72] = v0x18;
        out[73] = v1x18;
        out[74] = v2x18;
        out[75] = v3x18;
        const int8_t v0x19 = w0[19];
        const int8_t v1x19 = w1[19];
        const int8_t v2x19 = w2[19];
        const int8_t v3x19 = w3[19];
        ksum19 += (uint32_t) v0x19;
        ksum19 += (uint32_t) v1x19;
        ksum19 += (uint32_t) v2x19;
        ksum19 += (uint32_t) v3x19;
        out[76] = v0x19;
        out[77] = v1x19;
        out[78] = v2x19;
        out[79] = v3x19;
        const int8_t v0x20 = w0[20];
        const int8_t v1x20 = w1[20];
        const int8_t v2x20 = w2[20];
        const int8_t v3x20 = w3[20];
        ksum20 += (uint32_t) v0x20;
        ksum20 += (uint32_t) v1x20;
        ksum20 += (uint32_t) v2x20;
        ksum20 += (uint32_t) v3x20;
        out[80] = v0x20;
        out[81] = v1x20;
        out[82] = v2x20;
        out[83] = v3x20;
        const int8_t v0x21 = w0[21];
        const int8_t v1x21 = w1[21];
        const int8_t v2x21 = w2[21];
        const int8_t v3x21 = w3[21];
        ksum21 += (uint32_t) v0x21;
        ksum21 += (uint32_t) v1x21;
        ksum21 += (uint32_t) v2x21;
        ksum21 += (uint32_t) v3x21;
        out[84] = v0x21;
        out[85] = v1x21;
        out[86] = v2x21;
        out[87] = v3x21;
        const int8_t v0x22 = w0[22];
        const int8_t v1x22 = w1[22];
        const int8_t v2x22 = w2[22];
        const int8_t v3x22 = w3[22];
        ksum22 += (uint32_t) v0x22;
        ksum22 += (uint32_t) v1x22;
        ksum22 += (uint32_t) v2x22;
        ksum22 += (uint32_t) v3x22;
        out[88] = v0x22;
        out[89] = v1x22;
        out[90] = v2x22;
        out[91] = v3x22;
        const int8_t v0x23 = w0[23];
        const int8_t v1x23 = w1[23];
        const int8_t v2x23 = w2[23];
        const int8_t v3x23 = w3[23];
        ksum23 += (uint32_t) v0x23;
        ksum23 += (uint32_t) v1x23;
        ksum23 += (uint32_t) v2x23;
        ksum23 += (uint32_t) v3x23;
        out[92] = v0x23;
        out[93] = v1x23;
        out[94] = v2x23;
        out[95] = v3x23;
        const int8_t v0x24 = w0[24];
        const int8_t v1x24 = w1[24];
        const int8_t v2x24 = w2[24];
        const int8_t v3x24 = w3[24];
        ksum24 += (uint32_t) v0x24;
        ksum24 += (uint32_t) v1x24;
        ksum24 += (uint32_t) v2x24;
        ksum24 += (uint32_t) v3x24;
        out[96] = v0x24;
        out[97] = v1x24;
        out[98] = v2x24;
        out[99] = v3x24;
        const int8_t v0x25 = w0[25];
        const int8_t v1x25 = w1[25];
        const int8_t v2x25 = w2[25];
        const int8_t v3x25 = w3[25];
        ksum25 += (uint32_t) v0x25;
        ksum25 += (uint32_t) v1x25;
        ksum25 += (uint32_t) v2x25;
        ksum25 += (uint32_t) v3x25;
        out[100] = v0x25;
        out[101] = v1x25;
        out[102] = v2x25;
        out[103] = v3x25;
        const int8_t v0x26 = w0[26];
        const int8_t v1x26 = w1[26];
        const int8_t v2x26 = w2[26];
        const int8_t v3x26 = w3[26];
        ksum26 += (uint32_t) v0x26;
        ksum26 += (uint32_t) v1x26;
        ksum26 += (uint32_t) v2x26;
        ksum26 += (uint32_t) v3x26;
        out[104] = v0x26;
        out[105] = v1x26;
        out[106] = v2x26;
        out[107] = v3x26;
        const int8_t v0x27 = w0[27];
        const int8_t v1x27 = w1[27];
        const int8_t v2x27 = w2[27];
        const int8_t v3x27 = w3[27];
        ksum27 += (uint32_t) v0x27;
        ksum27 += (uint32_t) v1x27;
        ksum27 += (uint32_t) v2x27;
        ksum27 += (uint32_t) v3x27;
        out[108] = v0x27;
        out[109] = v1x27;
        out[110] = v2x27;
        out[111] = v3x27;
        const int8_t v0x28 = w0[28];
        const int8_t v1x28 = w1[28];
        const int8_t v2x28 = w2[28];
        const int8_t v3x28 = w3[28];
        ksum28 += (uint32_t) v0x28;
        ksum28 += (uint32_t) v1x28;
        ksum28 += (uint32_t) v2x28;
        ksum28 += (uint32_t) v3x28;
        out[112] = v0x28;
        out[113] = v1x28;
        out[114] = v2x28;
        out[115] = v3x28;
        const int8_t v0x29 = w0[29];
        const int8_t v1x29 = w1[29];
        const int8_t v2x29 = w2[29];
        const int8_t v3x29 = w3[29];
        ksum29 += (uint32_t) v0x29;
        ksum29 += (uint32_t) v1x29;
        ksum29 += (uint32_t) v2x29;
        ksum29 += (uint32_t) v3x29;
        out[116] = v0x29;
        out[117] = v1x29;
        out[118] = v2x29;
        out[119] = v3x29;
        const int8_t v0x30 = w0[30];
        const int8_t v1x30 = w1[30];
        const int8_t v2x30 = w2[30];
        const int8_t v3x30 = w3[30];
        ksum30 += (uint32_t) v0x30;
        ksum30 += (uint32_t) v1x30;
        ksum30 += (uint32_t) v2x30;
        ksum30 += (uint32_t) v3x30;
        out[120] = v0x30;
        out[121] = v1x30;
        out[122] = v2x30;
        out[123] = v3x30;
        const int8_t v0x31 = w0[31];
        const int8_t v1x31 = w1[31];
        const int8_t v2x31 = w2[31];
        const int8_t v3x31 = w3[31];
        ksum31 += (uint32_t) v0x31;
        ksum31 += (uint32_t) v1x31;
        ksum31 += (uint32_t) v2x31;
        ksum31 += (uint32_t) v3x31;
        out[124] = v0x31;
        out[125] = v1x31;
        out[126] = v2x31;
        out[127] = v3x31;
        const int8_t v0x32 = w0[32];
        const int8_t v1x32 = w1[32];
        const int8_t v2x32 = w2[32];
        const int8_t v3x32 = w3[32];
        ksum32 += (uint32_t) v0x32;
        ksum32 += (uint32_t) v1x32;
        ksum32 += (uint32_t) v2x32;
        ksum32 += (uint32_t) v3x32;
        out[128] = v0x32;
        out[129] = v1x32;
        out[130] = v2x32;
        out[131] = v3x32;
        const int8_t v0x33 = w0[33];
        const int8_t v1x33 = w1[33];
        const int8_t v2x33 = w2[33];
        const int8_t v3x33 = w3[33];
        ksum33 += (uint32_t) v0x33;
        ksum33 += (uint32_t) v1x33;
        ksum33 += (uint32_t) v2x33;
        ksum33 += (uint32_t) v3x33;
        out[132] = v0x33;
        out[133] = v1x33;
        out[134] = v2x33;
        out[135] = v3x33;
        const int8_t v0x34 = w0[34];
        const int8_t v1x34 = w1[34];
        const int8_t v2x34 = w2[34];
        const int8_t v3x34 = w3[34];
        ksum34 += (uint32_t) v0x34;
        ksum34 += (uint32_t) v1x34;
        ksum34 += (uint32_t) v2x34;
        ksum34 += (uint32_t) v3x34;
        out[136] = v0x34;
        out[137] = v1x34;
        out[138] = v2x34;
        out[139] = v3x34;
        const int8_t v0x35 = w0[35];
        const int8_t v1x35 = w1[35];
        const int8_t v2x35 = w2[35];
        const int8_t v3x35 = w3[35];
        ksum35 += (uint32_t) v0x35;
        ksum35 += (uint32_t) v1x35;
        ksum35 += (uint32_t) v2x35;
        ksum35 += (uint32_t) v3x35;
        out[140] = v0x35;
        out[141] = v1x35;
        out[142] = v2x35;
        out[143] = v3x35;
        const int8_t v0x36 = w0[36];
        const int8_t v1x36 = w1[36];
        const int8_t v2x36 = w2[36];
        const int8_t v3x36 = w3[36];
        ksum36 += (uint32_t) v0x36;
        ksum36 += (uint32_t) v1x36;
        ksum36 += (uint32_t) v2x36;
        ksum36 += (uint32_t) v3x36;
        out[144] = v0x36;
        out[145] = v1x36;
        out[146] = v2x36;
        out[147] = v3x36;
        const int8_t v0x37 = w0[37];
        const int8_t v1x37 = w1[37];
        const int8_t v2x37 = w2[37];
        const int8_t v3x37 = w3[37];
        ksum37 += (uint32_t) v0x37;
        ksum37 += (uint32_t) v1x37;
        ksum37 += (uint32_t) v2x37;
        ksum37 += (uint32_t) v3x37;
        out[148] = v0x37;
        out[149] = v1x37;
        out[150] = v2x37;
        out[151] = v3x37;
        const int8_t v0x38 = w0[38];
        const int8_t v1x38 = w1[38];
        const int8_t v2x38 = w2[38];
        const int8_t v3x38 = w3[38];
        ksum38 += (uint32_t) v0x38;
        ksum38 += (uint32_t) v1x38;
        ksum38 += (uint32_t) v2x38;
        ksum38 += (uint32_t) v3x38;
        out[152] = v0x38;
        out[153] = v1x38;
        out[154] = v2x38;
        out[155] = v3x38;
        const int8_t v0x39 = w0[39];
        const int8_t v1x39 = w1[39];
        const int8_t v2x39 = w2[39];
        const int8_t v3x39 = w3[39];
        ksum39 += (uint32_t) v0x39;
        ksum39 += (uint32_t) v1x39;
        ksum39 += (uint32_t) v2x39;
        ksum39 += (uint32_t) v3x39;
        out[156] = v0x39;
        out[157] = v1x39;
        out[158] = v2x39;
        out[159] = v3x39;
        const int8_t v0x40 = w0[40];
        const int8_t v1x40 = w1[40];
        const int8_t v2x40 = w2[40];
        const int8_t v3x40 = w3[40];
        ksum40 += (uint32_t) v0x40;
        ksum40 += (uint32_t) v1x40;
        ksum40 += (uint32_t) v2x40;
        ksum40 += (uint32_t) v3x40;
        out[160] = v0x40;
        out[161] = v1x40;
        out[162] = v2x40;
        out[163] = v3x40;
        const int8_t v0x41 = w0[41];
        const int8_t v1x41 = w1[41];
        const int8_t v2x41 = w2[41];
        const int8_t v3x41 = w3[41];
        ksum41 += (uint32_t) v0x41;
        ksum41 += (uint32_t) v1x41;
        ksum41 += (uint32_t) v2x41;
        ksum41 += (uint32_t) v3x41;
        out[164] = v0x41;
        out[165] = v1x41;
        out[166] = v2x41;
        out[167] = v3x41;
        const int8_t v0x42 = w0[42];
        const int8_t v1x42 = w1[42];
        const int8_t v2x42 = w2[42];
        const int8_t v3x42 = w3[42];
        ksum42 += (uint32_t) v0x42;
        ksum42 += (uint32_t) v1x42;
        ksum42 += (uint32_t) v2x42;
        ksum42 += (uint32_t) v3x42;
        out[168] = v0x42;
        out[169] = v1x42;
        out[170] = v2x42;
        out[171] = v3x42;
        const int8_t v0x43 = w0[43];
        const int8_t v1x43 = w1[43];
        const int8_t v2x43 = w2[43];
        const int8_t v3x43 = w3[43];
        ksum43 += (uint32_t) v0x43;
        ksum43 += (uint32_t) v1x43;
        ksum43 += (uint32_t) v2x43;
        ksum43 += (uint32_t) v3x43;
        out[172] = v0x43;
        out[173] = v1x43;
        out[174] = v2x43;
        out[175] = v3x43;
        const int8_t v0x44 = w0[44];
        const int8_t v1x44 = w1[44];
        const int8_t v2x44 = w2[44];
        const int8_t v3x44 = w3[44];
        ksum44 += (uint32_t) v0x44;
        ksum44 += (uint32_t) v1x44;
        ksum44 += (uint32_t) v2x44;
        ksum44 += (uint32_t) v3x44;
        out[176] = v0x44;
        out[177] = v1x44;
        out[178] = v2x44;
        out[179] = v3x44;
        const int8_t v0x45 = w0[45];
        const int8_t v1x45 = w1[45];
        const int8_t v2x45 = w2[45];
        const int8_t v3x45 = w3[45];
        ksum45 += (uint32_t) v0x45;
        ksum45 += (uint32_t) v1x45;
        ksum45 += (uint32_t) v2x45;
        ksum45 += (uint32_t) v3x45;
        out[180] = v0x45;
        out[181] = v1x45;
        out[182] = v2x45;
        out[183] = v3x45;
        const int8_t v0x46 = w0[46];
        const int8_t v1x46 = w1[46];
        const int8_t v2x46 = w2[46];
        const int8_t v3x46 = w3[46];
        ksum46 += (uint32_t) v0x46;
        ksum46 += (uint32_t) v1x46;
        ksum46 += (uint32_t) v2x46;
        ksum46 += (uint32_t) v3x46;
        out[184] = v0x46;
        out[185] = v1x46;
        out[186] = v2x46;
        out[187] = v3x46;
        const int8_t v0x47 = w0[47];
        const int8_t v1x47 = w1[47];
        const int8_t v2x47 = w2[47];
        const int8_t v3x47 = w3[47];
        ksum47 += (uint32_t) v0x47;
        ksum47 += (uint32_t) v1x47;
        ksum47 += (uint32_t) v2x47;
        ksum47 += (uint32_t) v3x47;
        out[188] = v0x47;
        out[189] = v1x47;
        out[190] = v2x47;
        out[191] = v3x47;
        const int8_t v0x48 = w0[48];
        const int8_t v1x48 = w1[48];
        const int8_t v2x48 = w2[48];
        const int8_t v3x48 = w3[48];
        ksum48 += (uint32_t) v0x48;
        ksum48 += (uint32_t) v1x48;
        ksum48 += (uint32_t) v2x48;
        ksum48 += (uint32_t) v3x48;
        out[192] = v0x48;
        out[193] = v1x48;
        out[194] = v2x48;
        out[195] = v3x48;
        const int8_t v0x49 = w0[49];
        const int8_t v1x49 = w1[49];
        const int8_t v2x49 = w2[49];
        const int8_t v3x49 = w3[49];
        ksum49 += (uint32_t) v0x49;
        ksum49 += (uint32_t) v1x49;
        ksum49 += (uint32_t) v2x49;
        ksum49 += (uint32_t) v3x49;
        out[196] = v0x49;
        out[197] = v1x49;
        out[198] = v2x49;
        out[199] = v3x49;
        const int8_t v0x50 = w0[50];
        const int8_t v1x50 = w1[50];
        const int8_t v2x50 = w2[50];
        const int8_t v3x50 = w3[50];
        ksum50 += (uint32_t) v0x50;
        ksum50 += (uint32_t) v1x50;
        ksum50 += (uint32_t) v2x50;
        ksum50 += (uint32_t) v3x50;
        out[200] = v0x50;
        out[201] = v1x50;
        out[202] = v2x50;
        out[203] = v3x50;
        const int8_t v0x51 = w0[51];
        const int8_t v1x51 = w1[51];
        const int8_t v2x51 = w2[51];
        const int8_t v3x51 = w3[51];
        ksum51 += (uint32_t) v0x51;
        ksum51 += (uint32_t) v1x51;
        ksum51 += (uint32_t) v2x51;
        ksum51 += (uint32_t) v3x51;
        out[204] = v0x51;
        out[205] = v1x51;
        out[206] = v2x51;
        out[207] = v3x51;
        const int8_t v0x52 = w0[52];
        const int8_t v1x52 = w1[52];
        const int8_t v2x52 = w2[52];
        const int8_t v3x52 = w3[52];
        ksum52 += (uint32_t) v0x52;
        ksum52 += (uint32_t) v1x52;
        ksum52 += (uint32_t) v2x52;
        ksum52 += (uint32_t) v3x52;
        out[208] = v0x52;
        out[209] = v1x52;
        out[210] = v2x52;
        out[211] = v3x52;
        const int8_t v0x53 = w0[53];
        const int8_t v1x53 = w1[53];
        const int8_t v2x53 = w2[53];
        const int8_t v3x53 = w3[53];
        ksum53 += (uint32_t) v0x53;
        ksum53 += (uint32_t) v1x53;
        ksum53 += (uint32_t) v2x53;
        ksum53 += (uint32_t) v3x53;
        out[212] = v0x53;
        out[213] = v1x53;
        out[214] = v2x53;
        out[215] = v3x53;
        const int8_t v0x54 = w0[54];
        const int8_t v1x54 = w1[54];
        const int8_t v2x54 = w2[54];
        const int8_t v3x54 = w3[54];
        ksum54 += (uint32_t) v0x54;
        ksum54 += (uint32_t) v1x54;
        ksum54 += (uint32_t) v2x54;
        ksum54 += (uint32_t) v3x54;
        out[216] = v0x54;
        out[217] = v1x54;
        out[218] = v2x54;
        out[219] = v3x54;
        const int8_t v0x55 = w0[55];
        const int8_t v1x55 = w1[55];
        const int8_t v2x55 = w2[55];
        const int8_t v3x55 = w3[55];
        ksum55 += (uint32_t) v0x55;
        ksum55 += (uint32_t) v1x55;
        ksum55 += (uint32_t) v2x55;
        ksum55 += (uint32_t) v3x55;
        out[220] = v0x55;
        out[221] = v1x55;
        out[222] = v2x55;
        out[223] = v3x55;
        const int8_t v0x56 = w0[56];
        const int8_t v1x56 = w1[56];
        const int8_t v2x56 = w2[56];
        const int8_t v3x56 = w3[56];
        ksum56 += (uint32_t) v0x56;
        ksum56 += (uint32_t) v1x56;
        ksum56 += (uint32_t) v2x56;
        ksum56 += (uint32_t) v3x56;
        out[224] = v0x56;
        out[225] = v1x56;
        out[226] = v2x56;
        out[227] = v3x56;
        const int8_t v0x57 = w0[57];
        const int8_t v1x57 = w1[57];
        const int8_t v2x57 = w2[57];
        const int8_t v3x57 = w3[57];
        ksum57 += (uint32_t) v0x57;
        ksum57 += (uint32_t) v1x57;
        ksum57 += (uint32_t) v2x57;
        ksum57 += (uint32_t) v3x57;
        out[228] = v0x57;
        out[229] = v1x57;
        out[230] = v2x57;
        out[231] = v3x57;
        const int8_t v0x58 = w0[58];
        const int8_t v1x58 = w1[58];
        const int8_t v2x58 = w2[58];
        const int8_t v3x58 = w3[58];
        ksum58 += (uint32_t) v0x58;
        ksum58 += (uint32_t) v1x58;
        ksum58 += (uint32_t) v2x58;
        ksum58 += (uint32_t) v3x58;
        out[232] = v0x58;
        out[233] = v1x58;
        out[234] = v2x58;
        out[235] = v3x58;
        const int8_t v0x59 = w0[59];
        const int8_t v1x59 = w1[59];
        const int8_t v2x59 = w2[59];
        const int8_t v3x59 = w3[59];
        ksum59 += (uint32_t) v0x59;
        ksum59 += (uint32_t) v1x59;
        ksum59 += (uint32_t) v2x59;
        ksum59 += (uint32_t) v3x59;
        out[236] = v0x59;
        out[237] = v1x59;
        out[238] = v2x59;
        out[239] = v3x59;
        const int8_t v0x60 = w0[60];
        const int8_t v1x60 = w1[60];
        const int8_t v2x60 = w2[60];
        const int8_t v3x60 = w3[60];
        ksum60 += (uint32_t) v0x60;
        ksum60 += (uint32_t) v1x60;
        ksum60 += (uint32_t) v2x60;
        ksum60 += (uint32_t) v3x60;
        out[240] = v0x60;
        out[241] = v1x60;
        out[242] = v2x60;
        out[243] = v3x60;
        const int8_t v0x61 = w0[61];
        const int8_t v1x61 = w1[61];
        const int8_t v2x61 = w2[61];
        const int8_t v3x61 = w3[61];
        ksum61 += (uint32_t) v0x61;
        ksum61 += (uint32_t) v1x61;
        ksum61 += (uint32_t) v2x61;
        ksum61 += (uint32_t) v3x61;
        out[244] = v0x61;
        out[245] = v1x61;
        out[246] = v2x61;
        out[247] = v3x61;
        const int8_t v0x62 = w0[62];
        const int8_t v1x62 = w1[62];
        const int8_t v2x62 = w2[62];
        const int8_t v3x62 = w3[62];
        ksum62 += (uint32_t) v0x62;
        ksum62 += (uint32_t) v1x62;
        ksum62 += (uint32_t) v2x62;
        ksum62 += (uint32_t) v3x62;
        out[248] = v0x62;
        out[249] = v1x62;
        out[250] = v2x62;
        out[251] = v3x62;
        const int8_t v0x63 = w0[63];
        const int8_t v1x63 = w1[63];
        const int8_t v2x63 = w2[63];
        const int8_t v3x63 = w3[63];
        ksum63 += (uint32_t) v0x63;
        ksum63 += (uint32_t) v1x63;
        ksum63 += (uint32_t) v2x63;
        ksum63 += (uint32_t) v3x63;
        out[252] = v0x63;
        out[253] = v1x63;
        out[254] = v2x63;
        out[255] = v3x63;
        w0 += 4 * k_stride;
        w1 += 4 * k_stride;
        w2 += 4 * k_stride;
        w3 += 4 * k_stride;
        out += 256;
      }

      // KC remainder of 1..3
      if (k != 0) {
        assert(k >= 1 && k <= 3);
        const int8_t v0x0 = w0[0];
        ksum0 += (uint32_t) v0x0;
        out[0] = v0x0;
        if (1 < k) {
          const int8_t v1x0 = w1[0];
          ksum0 += (uint32_t) v1x0;
          out[1] = v1x0;
        }
        if (2 < k) {
          const int8_t v2x0 = w2[0];
          ksum0 += (uint32_t) v2x0;
          out[2] = v2x0;
        }
        if (3 < k) {
          const int8_t v3x0 = w3[0];
          ksum0 += (uint32_t) v3x0;
          out[3] = v3x0;
        }
        const int8_t v0x1 = w0[1];
        ksum1 += (uint32_t) v0x1;
        out[4] = v0x1;
        if (1 < k) {
          const int8_t v1x1 = w1[1];
          ksum1 += (uint32_t) v1x1;
          out[5] = v1x1;
        }
        if (2 < k) {
          const int8_t v2x1 = w2[1];
          ksum1 += (uint32_t) v2x1;
          out[6] = v2x1;
        }
        if (3 < k) {
          const int8_t v3x1 = w3[1];
          ksum1 += (uint32_t) v3x1;
          out[7] = v3x1;
        }
        const int8_t v0x2 = w0[2];
        ksum2 += (uint32_t) v0x2;
        out[8] = v0x2;
        if (1 < k) {
          const int8_t v1x2 = w1[2];
          ksum2 += (uint32_t) v1x2;
          out[9] = v1x2;
        }
        if (2 < k) {
          const int8_t v2x2 = w2[2];
          ksum2 += (uint32_t) v2x2;
          out[10] = v2x2;
        }
        if (3 < k) {
          const int8_t v3x2 = w3[2];
          ksum2 += (uint32_t) v3x2;
          out[11] = v3x2;
        }
        const int8_t v0x3 = w0[3];
        ksum3 += (uint32_t) v0x3;
        out[12] = v0x3;
        if (1 < k) {
          const int8_t v1x3 = w1[3];
          ksum3 += (uint32_t) v1x3;
          out[13] = v1x3;
        }
        if (2 < k) {
          const int8_t v2x3 = w2[3];
          ksum3 += (uint32_t) v2x3;
          out[14] = v2x3;
        }
        if (3 < k) {
          const int8_t v3x3 = w3[3];
          ksum3 += (uint32_t) v3x3;
          out[15] = v3x3;
        }
        const int8_t v0x4 = w0[4];
        ksum4 += (uint32_t) v0x4;
        out[16] = v0x4;
        if (1 < k) {
          const int8_t v1x4 = w1[4];
          ksum4 += (uint32_t) v1x4;
          out[17] = v1x4;
        }
        if (2 < k) {
          const int8_t v2x4 = w2[4];
          ksum4 += (uint32_t) v2x4;
          out[18] = v2x4;
        }
        if (3 < k) {
          const int8_t v3x4 = w3[4];
          ksum4 += (uint32_t) v3x4;
          out[19] = v3x4;
        }
        const int8_t v0x5 = w0[5];
        ksum5 += (uint32_t) v0x5;
        out[20] = v0x5;
        if (1 < k) {
          const int8_t v1x5 = w1[5];
          ksum5 += (uint32_t) v1x5;
          out[21] = v1x5;
        }
        if (2 < k) {
          const int8_t v2x5 = w2[5];
          ksum5 += (uint32_t) v2x5;
          out[22] = v2x5;
        }
        if (3 < k) {
          const int8_t v3x5 = w3[5];
          ksum5 += (uint32_t) v3x5;
          out[23] = v3x5;
        }
        const int8_t v0x6 = w0[6];
        ksum6 += (uint32_t) v0x6;
        out[24] = v0x6;
        if (1 < k) {
          const int8_t v1x6 = w1[6];
          ksum6 += (uint32_t) v1x6;
          out[25] = v1x6;
        }
        if (2 < k) {
          const int8_t v2x6 = w2[6];
          ksum6 += (uint32_t) v2x6;
          out[26] = v2x6;
        }
        if (3 < k) {
          const int8_t v3x6 = w3[6];
          ksum6 += (uint32_t) v3x6;
          out[27] = v3x6;
        }
        const int8_t v0x7 = w0[7];
        ksum7 += (uint32_t) v0x7;
        out[28] = v0x7;
        if (1 < k) {
          const int8_t v1x7 = w1[7];
          ksum7 += (uint32_t) v1x7;
          out[29] = v1x7;
        }
        if (2 < k) {
          const int8_t v2x7 = w2[7];
          ksum7 += (uint32_t) v2x7;
          out[30] = v2x7;
        }
        if (3 < k) {
          const int8_t v3x7 = w3[7];
          ksum7 += (uint32_t) v3x7;
          out[31] = v3x7;
        }
        const int8_t v0x8 = w0[8];
        ksum8 += (uint32_t) v0x8;
        out[32] = v0x8;
        if (1 < k) {
          const int8_t v1x8 = w1[8];
          ksum8 += (uint32_t) v1x8;
          out[33] = v1x8;
        }
        if (2 < k) {
          const int8_t v2x8 = w2[8];
          ksum8 += (uint32_t) v2x8;
          out[34] = v2x8;
        }
        if (3 < k) {
          const int8_t v3x8 = w3[8];
          ksum8 += (uint32_t) v3x8;
          out[35] = v3x8;
        }
        const int8_t v0x9 = w0[9];
        ksum9 += (uint32_t) v0x9;
        out[36] = v0x9;
        if (1 < k) {
          const int8_t v1x9 = w1[9];
          ksum9 += (uint32_t) v1x9;
          out[37] = v1x9;
        }
        if (2 < k) {
          const int8_t v2x9 = w2[9];
          ksum9 += (uint32_t) v2x9;
          out[38] = v2x9;
        }
        if (3 < k) {
          const int8_t v3x9 = w3[9];
          ksum9 += (uint32_t) v3x9;
          out[39] = v3x9;
        }
        const int8_t v0x10 = w0[10];
        ksum10 += (uint32_t) v0x10;
        out[40] = v0x10;
        if (1 < k) {
          const int8_t v1x10 = w1[10];
          ksum10 += (uint32_t) v1x10;
          out[41] = v1x10;
        }
        if (2 < k) {
          const int8_t v2x10 = w2[10];
          ksum10 += (uint32_t) v2x10;
          out[42] = v2x10;
        }
        if (3 < k) {
          const int8_t v3x10 = w3[10];
          ksum10 += (uint32_t) v3x10;
          out[43] = v3x10;
        }
        const int8_t v0x11 = w0[11];
        ksum11 += (uint32_t) v0x11;
        out[44] = v0x11;
        if (1 < k) {
          const int8_t v1x11 = w1[11];
          ksum11 += (uint32_t) v1x11;
          out[45] = v1x11;
        }
        if (2 < k) {
          const int8_t v2x11 = w2[11];
          ksum11 += (uint32_t) v2x11;
          out[46] = v2x11;
        }
        if (3 < k) {
          const int8_t v3x11 = w3[11];
          ksum11 += (uint32_t) v3x11;
          out[47] = v3x11;
        }
        const int8_t v0x12 = w0[12];
        ksum12 += (uint32_t) v0x12;
        out[48] = v0x12;
        if (1 < k) {
          const int8_t v1x12 = w1[12];
          ksum12 += (uint32_t) v1x12;
          out[49] = v1x12;
        }
        if (2 < k) {
          const int8_t v2x12 = w2[12];
          ksum12 += (uint32_t) v2x12;
          out[50] = v2x12;
        }
        if (3 < k) {
          const int8_t v3x12 = w3[12];
          ksum12 += (uint32_t) v3x12;
          out[51] = v3x12;
        }
        const int8_t v0x13 = w0[13];
        ksum13 += (uint32_t) v0x13;
        out[52] = v0x13;
        if (1 < k) {
          const int8_t v1x13 = w1[13];
          ksum13 += (uint32_t) v1x13;
          out[53] = v1x13;
        }
        if (2 < k) {
          const int8_t v2x13 = w2[13];
          ksum13 += (uint32_t) v2x13;
          out[54] = v2x13;
        }
        if (3 < k) {
          const int8_t v3x13 = w3[13];
          ksum13 += (uint32_t) v3x13;
          out[55] = v3x13;
        }
        const int8_t v0x14 = w0[14];
        ksum14 += (uint32_t) v0x14;
        out[56] = v0x14;
        if (1 < k) {
          const int8_t v1x14 = w1[14];
          ksum14 += (uint32_t) v1x14;
          out[57] = v1x14;
        }
        if (2 < k) {
          const int8_t v2x14 = w2[14];
          ksum14 += (uint32_t) v2x14;
          out[58] = v2x14;
        }
        if (3 < k) {
          const int8_t v3x14 = w3[14];
          ksum14 += (uint32_t) v3x14;
          out[59] = v3x14;
        }
        const int8_t v0x15 = w0[15];
        ksum15 += (uint32_t) v0x15;
        out[60] = v0x15;
        if (1 < k) {
          const int8_t v1x15 = w1[15];
          ksum15 += (uint32_t) v1x15;
          out[61] = v1x15;
        }
        if (2 < k) {
          const int8_t v2x15 = w2[15];
          ksum15 += (uint32_t) v2x15;
          out[62] = v2x15;
        }
        if (3 < k) {
          const int8_t v3x15 = w3[15];
          ksum15 += (uint32_t) v3x15;
          out[63] = v3x15;
        }
        const int8_t v0x16 = w0[16];
        ksum16 += (uint32_t) v0x16;
        out[64] = v0x16;
        if (1 < k) {
          const int8_t v1x16 = w1[16];
          ksum16 += (uint32_t) v1x16;
          out[65] = v1x16;
        }
        if (2 < k) {
          const int8_t v2x16 = w2[16];
          ksum16 += (uint32_t) v2x16;
          out[66] = v2x16;
        }
        if (3 < k) {
          const int8_t v3x16 = w3[16];
          ksum16 += (uint32_t) v3x16;
          out[67] = v3x16;
        }
        const int8_t v0x17 = w0[17];
        ksum17 += (uint32_t) v0x17;
        out[68] = v0x17;
        if (1 < k) {
          const int8_t v1x17 = w1[17];
          ksum17 += (uint32_t) v1x17;
          out[69] = v1x17;
        }
        if (2 < k) {
          const int8_t v2x17 = w2[17];
          ksum17 += (uint32_t) v2x17;
          out[70] = v2x17;
        }
        if (3 < k) {
          const int8_t v3x17 = w3[17];
          ksum17 += (uint32_t) v3x17;
          out[71] = v3x17;
        }
        const int8_t v0x18 = w0[18];
        ksum18 += (uint32_t) v0x18;
        out[72] = v0x18;
        if (1 < k) {
          const int8_t v1x18 = w1[18];
          ksum18 += (uint32_t) v1x18;
          out[73] = v1x18;
        }
        if (2 < k) {
          const int8_t v2x18 = w2[18];
          ksum18 += (uint32_t) v2x18;
          out[74] = v2x18;
        }
        if (3 < k) {
          const int8_t v3x18 = w3[18];
          ksum18 += (uint32_t) v3x18;
          out[75] = v3x18;
        }
        const int8_t v0x19 = w0[19];
        ksum19 += (uint32_t) v0x19;
        out[76] = v0x19;
        if (1 < k) {
          const int8_t v1x19 = w1[19];
          ksum19 += (uint32_t) v1x19;
          out[77] = v1x19;
        }
        if (2 < k) {
          const int8_t v2x19 = w2[19];
          ksum19 += (uint32_t) v2x19;
          out[78] = v2x19;
        }
        if (3 < k) {
          const int8_t v3x19 = w3[19];
          ksum19 += (uint32_t) v3x19;
          out[79] = v3x19;
        }
        const int8_t v0x20 = w0[20];
        ksum20 += (uint32_t) v0x20;
        out[80] = v0x20;
        if (1 < k) {
          const int8_t v1x20 = w1[20];
          ksum20 += (uint32_t) v1x20;
          out[81] = v1x20;
        }
        if (2 < k) {
          const int8_t v2x20 = w2[20];
          ksum20 += (uint32_t) v2x20;
          out[82] = v2x20;
        }
        if (3 < k) {
          const int8_t v3x20 = w3[20];
          ksum20 += (uint32_t) v3x20;
          out[83] = v3x20;
        }
        const int8_t v0x21 = w0[21];
        ksum21 += (uint32_t) v0x21;
        out[84] = v0x21;
        if (1 < k) {
          const int8_t v1x21 = w1[21];
          ksum21 += (uint32_t) v1x21;
          out[85] = v1x21;
        }
        if (2 < k) {
          const int8_t v2x21 = w2[21];
          ksum21 += (uint32_t) v2x21;
          out[86] = v2x21;
        }
        if (3 < k) {
          const int8_t v3x21 = w3[21];
          ksum21 += (uint32_t) v3x21;
          out[87] = v3x21;
        }
        const int8_t v0x22 = w0[22];
        ksum22 += (uint32_t) v0x22;
        out[88] = v0x22;
        if (1 < k) {
          const int8_t v1x22 = w1[22];
          ksum22 += (uint32_t) v1x22;
          out[89] = v1x22;
        }
        if (2 < k) {
          const int8_t v2x22 = w2[22];
          ksum22 += (uint32_t) v2x22;
          out[90] = v2x22;
        }
        if (3 < k) {
          const int8_t v3x22 = w3[22];
          ksum22 += (uint32_t) v3x22;
          out[91] = v3x22;
        }
        const int8_t v0x23 = w0[23];
        ksum23 += (uint32_t) v0x23;
        out[92] = v0x23;
        if (1 < k) {
          const int8_t v1x23 = w1[23];
          ksum23 += (uint32_t) v1x23;
          out[93] = v1x23;
        }
        if (2 < k) {
          const int8_t v2x23 = w2[23];
          ksum23 += (uint32_t) v2x23;
          out[94] = v2x23;
        }
        if (3 < k) {
          const int8_t v3x23 = w3[23];
          ksum23 += (uint32_t) v3x23;
          out[95] = v3x23;
        }
        const int8_t v0x24 = w0[24];
        ksum24 += (uint32_t) v0x24;
        out[96] = v0x24;
        if (1 < k) {
          const int8_t v1x24 = w1[24];
          ksum24 += (uint32_t) v1x24;
          out[97] = v1x24;
        }
        if (2 < k) {
          const int8_t v2x24 = w2[24];
          ksum24 += (uint32_t) v2x24;
          out[98] = v2x24;
        }
        if (3 < k) {
          const int8_t v3x24 = w3[24];
          ksum24 += (uint32_t) v3x24;
          out[99] = v3x24;
        }
        const int8_t v0x25 = w0[25];
        ksum25 += (uint32_t) v0x25;
        out[100] = v0x25;
        if (1 < k) {
          const int8_t v1x25 = w1[25];
          ksum25 += (uint32_t) v1x25;
          out[101] = v1x25;
        }
        if (2 < k) {
          const int8_t v2x25 = w2[25];
          ksum25 += (uint32_t) v2x25;
          out[102] = v2x25;
        }
        if (3 < k) {
          const int8_t v3x25 = w3[25];
          ksum25 += (uint32_t) v3x25;
          out[103] = v3x25;
        }
        const int8_t v0x26 = w0[26];
        ksum26 += (uint32_t) v0x26;
        out[104] = v0x26;
        if (1 < k) {
          const int8_t v1x26 = w1[26];
          ksum26 += (uint32_t) v1x26;
          out[105] = v1x26;
        }
        if (2 < k) {
          const int8_t v2x26 = w2[26];
          ksum26 += (uint32_t) v2x26;
          out[106] = v2x26;
        }
        if (3 < k) {
          const int8_t v3x26 = w3[26];
          ksum26 += (uint32_t) v3x26;
          out[107] = v3x26;
        }
        const int8_t v0x27 = w0[27];
        ksum27 += (uint32_t) v0x27;
        out[108] = v0x27;
        if (1 < k) {
          const int8_t v1x27 = w1[27];
          ksum27 += (uint32_t) v1x27;
          out[109] = v1x27;
        }
        if (2 < k) {
          const int8_t v2x27 = w2[27];
          ksum27 += (uint32_t) v2x27;
          out[110] = v2x27;
        }
        if (3 < k) {
          const int8_t v3x27 = w3[27];
          ksum27 += (uint32_t) v3x27;
          out[111] = v3x27;
        }
        const int8_t v0x28 = w0[28];
        ksum28 += (uint32_t) v0x28;
        out[112] = v0x28;
        if (1 < k) {
          const int8_t v1x28 = w1[28];
          ksum28 += (uint32_t) v1x28;
          out[113] = v1x28;
        }
        if (2 < k) {
          const int8_t v2x28 = w2[28];
          ksum28 += (uint32_t) v2x28;
          out[114] = v2x28;
        }
        if (3 < k) {
          const int8_t v3x28 = w3[28];
          ksum28 += (uint32_t) v3x28;
          out[115] = v3x28;
        }
        const int8_t v0x29 = w0[29];
        ksum29 += (uint32_t) v0x29;
        out[116] = v0x29;
        if (1 < k) {
          const int8_t v1x29 = w1[29];
          ksum29 += (uint32_t) v1x29;
          out[117] = v1x29;
        }
        if (2 < k) {
          const int8_t v2x29 = w2[29];
          ksum29 += (uint32_t) v2x29;
          out[118] = v2x29;
        }
        if (3 < k) {
          const int8_t v3x29 = w3[29];
          ksum29 += (uint32_t) v3x29;
          out[119] = v3x29;
        }
        const int8_t v0x30 = w0[30];
        ksum30 += (uint32_t) v0x30;
        out[120] = v0x30;
        if (1 < k) {
          const int8_t v1x30 = w1[30];
          ksum30 += (uint32_t) v1x30;
          out[121] = v1x30;
        }
        if (2 < k) {
          const int8_t v2x30 = w2[30];
          ksum30 += (uint32_t) v2x30;
          out[122] = v2x30;
        }
        if (3 < k) {
          const int8_t v3x30 = w3[30];
          ksum30 += (uint32_t) v3x30;
          out[123] = v3x30;
        }
        const int8_t v0x31 = w0[31];
        ksum31 += (uint32_t) v0x31;
        out[124] = v0x31;
        if (1 < k) {
          const int8_t v1x31 = w1[31];
          ksum31 += (uint32_t) v1x31;
          out[125] = v1x31;
        }
        if (2 < k) {
          const int8_t v2x31 = w2[31];
          ksum31 += (uint32_t) v2x31;
          out[126] = v2x31;
        }
        if (3 < k) {
          const int8_t v3x31 = w3[31];
          ksum31 += (uint32_t) v3x31;
          out[127] = v3x31;
        }
        const int8_t v0x32 = w0[32];
        ksum32 += (uint32_t) v0x32;
        out[128] = v0x32;
        if (1 < k) {
          const int8_t v1x32 = w1[32];
          ksum32 += (uint32_t) v1x32;
          out[129] = v1x32;
        }
        if (2 < k) {
          const int8_t v2x32 = w2[32];
          ksum32 += (uint32_t) v2x32;
          out[130] = v2x32;
        }
        if (3 < k) {
          const int8_t v3x32 = w3[32];
          ksum32 += (uint32_t) v3x32;
          out[131] = v3x32;
        }
        const int8_t v0x33 = w0[33];
        ksum33 += (uint32_t) v0x33;
        out[132] = v0x33;
        if (1 < k) {
          const int8_t v1x33 = w1[33];
          ksum33 += (uint32_t) v1x33;
          out[133] = v1x33;
        }
        if (2 < k) {
          const int8_t v2x33 = w2[33];
          ksum33 += (uint32_t) v2x33;
          out[134] = v2x33;
        }
        if (3 < k) {
          const int8_t v3x33 = w3[33];
          ksum33 += (uint32_t) v3x33;
          out[135] = v3x33;
        }
        const int8_t v0x34 = w0[34];
        ksum34 += (uint32_t) v0x34;
        out[136] = v0x34;
        if (1 < k) {
          const int8_t v1x34 = w1[34];
          ksum34 += (uint32_t) v1x34;
          out[137] = v1x34;
        }
        if (2 < k) {
          const int8_t v2x34 = w2[34];
          ksum34 += (uint32_t) v2x34;
          out[138] = v2x34;
        }
        if (3 < k) {
          const int8_t v3x34 = w3[34];
          ksum34 += (uint32_t) v3x34;
          out[139] = v3x34;
        }
        const int8_t v0x35 = w0[35];
        ksum35 += (uint32_t) v0x35;
        out[140] = v0x35;
        if (1 < k) {
          const int8_t v1x35 = w1[35];
          ksum35 += (uint32_t) v1x35;
          out[141] = v1x35;
        }
        if (2 < k) {
          const int8_t v2x35 = w2[35];
          ksum35 += (uint32_t) v2x35;
          out[142] = v2x35;
        }
        if (3 < k) {
          const int8_t v3x35 = w3[35];
          ksum35 += (uint32_t) v3x35;
          out[143] = v3x35;
        }
        const int8_t v0x36 = w0[36];
        ksum36 += (uint32_t) v0x36;
        out[144] = v0x36;
        if (1 < k) {
          const int8_t v1x36 = w1[36];
          ksum36 += (uint32_t) v1x36;
          out[145] = v1x36;
        }
        if (2 < k) {
          const int8_t v2x36 = w2[36];
          ksum36 += (uint32_t) v2x36;
          out[146] = v2x36;
        }
        if (3 < k) {
          const int8_t v3x36 = w3[36];
          ksum36 += (uint32_t) v3x36;
          out[147] = v3x36;
        }
        const int8_t v0x37 = w0[37];
        ksum37 += (uint32_t) v0x37;
        out[148] = v0x37;
        if (1 < k) {
          const int8_t v1x37 = w1[37];
          ksum37 += (uint32_t) v1x37;
          out[149] = v1x37;
        }
        if (2 < k) {
          const int8_t v2x37 = w2[37];
          ksum37 += (uint32_t) v2x37;
          out[150] = v2x37;
        }
        if (3 < k) {
          const int8_t v3x37 = w3[37];
          ksum37 += (uint32_t) v3x37;
          out[151] = v3x37;
        }
        const int8_t v0x38 = w0[38];
        ksum38 += (uint32_t) v0x38;
        out[152] = v0x38;
        if (1 < k) {
          const int8_t v1x38 = w1[38];
          ksum38 += (uint32_t) v1x38;
          out[153] = v1x38;
        }
        if (2 < k) {
          const int8_t v2x38 = w2[38];
          ksum38 += (uint32_t) v2x38;
          out[154] = v2x38;
        }
        if (3 < k) {
          const int8_t v3x38 = w3[38];
          ksum38 += (uint32_t) v3x38;
          out[155] = v3x38;
        }
        const int8_t v0x39 = w0[39];
        ksum39 += (uint32_t) v0x39;
        out[156] = v0x39;
        if (1 < k) {
          const int8_t v1x39 = w1[39];
          ksum39 += (uint32_t) v1x39;
          out[157] = v1x39;
        }
        if (2 < k) {
          const int8_t v2x39 = w2[39];
          ksum39 += (uint32_t) v2x39;
          out[158] = v2x39;
        }
        if (3 < k) {
          const int8_t v3x39 = w3[39];
          ksum39 += (uint32_t) v3x39;
          out[159] = v3x39;
        }
        const int8_t v0x40 = w0[40];
        ksum40 += (uint32_t) v0x40;
        out[160] = v0x40;
        if (1 < k) {
          const int8_t v1x40 = w1[40];
          ksum40 += (uint32_t) v1x40;
          out[161] = v1x40;
        }
        if (2 < k) {
          const int8_t v2x40 = w2[40];
          ksum40 += (uint32_t) v2x40;
          out[162] = v2x40;
        }
        if (3 < k) {
          const int8_t v3x40 = w3[40];
          ksum40 += (uint32_t) v3x40;
          out[163] = v3x40;
        }
        const int8_t v0x41 = w0[41];
        ksum41 += (uint32_t) v0x41;
        out[164] = v0x41;
        if (1 < k) {
          const int8_t v1x41 = w1[41];
          ksum41 += (uint32_t) v1x41;
          out[165] = v1x41;
        }
        if (2 < k) {
          const int8_t v2x41 = w2[41];
          ksum41 += (uint32_t) v2x41;
          out[166] = v2x41;
        }
        if (3 < k) {
          const int8_t v3x41 = w3[41];
          ksum41 += (uint32_t) v3x41;
          out[167] = v3x41;
        }
        const int8_t v0x42 = w0[42];
        ksum42 += (uint32_t) v0x42;
        out[168] = v0x42;
        if (1 < k) {
          const int8_t v1x42 = w1[42];
          ksum42 += (uint32_t) v1x42;
          out[169] = v1x42;
        }
        if (2 < k) {
          const int8_t v2x42 = w2[42];
          ksum42 += (uint32_t) v2x42;
          out[170] = v2x42;
        }
        if (3 < k) {
          const int8_t v3x42 = w3[42];
          ksum42 += (uint32_t) v3x42;
          out[171] = v3x42;
        }
        const int8_t v0x43 = w0[43];
        ksum43 += (uint32_t) v0x43;
        out[172] = v0x43;
        if (1 < k) {
          const int8_t v1x43 = w1[43];
          ksum43 += (uint32_t) v1x43;
          out[173] = v1x43;
        }
        if (2 < k) {
          const int8_t v2x43 = w2[43];
          ksum43 += (uint32_t) v2x43;
          out[174] = v2x43;
        }
        if (3 < k) {
          const int8_t v3x43 = w3[43];
          ksum43 += (uint32_t) v3x43;
          out[175] = v3x43;
        }
        const int8_t v0x44 = w0[44];
        ksum44 += (uint32_t) v0x44;
        out[176] = v0x44;
        if (1 < k) {
          const int8_t v1x44 = w1[44];
          ksum44 += (uint32_t) v1x44;
          out[177] = v1x44;
        }
        if (2 < k) {
          const int8_t v2x44 = w2[44];
          ksum44 += (uint32_t) v2x44;
          out[178] = v2x44;
        }
        if (3 < k) {
          const int8_t v3x44 = w3[44];
          ksum44 += (uint32_t) v3x44;
          out[179] = v3x44;
        }
        const int8_t v0x45 = w0[45];
        ksum45 += (uint32_t) v0x45;
        out[180] = v0x45;
        if (1 < k) {
          const int8_t v1x45 = w1[45];
          ksum45 += (uint32_t) v1x45;
          out[181] = v1x45;
        }
        if (2 < k) {
          const int8_t v2x45 = w2[45];
          ksum45 += (uint32_t) v2x45;
          out[182] = v2x45;
        }
        if (3 < k) {
          const int8_t v3x45 = w3[45];
          ksum45 += (uint32_t) v3x45;
          out[183] = v3x45;
        }
        const int8_t v0x46 = w0[46];
        ksum46 += (uint32_t) v0x46;
        out[184] = v0x46;
        if (1 < k) {
          const int8_t v1x46 = w1[46];
          ksum46 += (uint32_t) v1x46;
          out[185] = v1x46;
        }
        if (2 < k) {
          const int8_t v2x46 = w2[46];
          ksum46 += (uint32_t) v2x46;
          out[186] = v2x46;
        }
        if (3 < k) {
          const int8_t v3x46 = w3[46];
          ksum46 += (uint32_t) v3x46;
          out[187] = v3x46;
        }
        const int8_t v0x47 = w0[47];
        ksum47 += (uint32_t) v0x47;
        out[188] = v0x47;
        if (1 < k) {
          const int8_t v1x47 = w1[47];
          ksum47 += (uint32_t) v1x47;
          out[189] = v1x47;
        }
        if (2 < k) {
          const int8_t v2x47 = w2[47];
          ksum47 += (uint32_t) v2x47;
          out[190] = v2x47;
        }
        if (3 < k) {
          const int8_t v3x47 = w3[47];
          ksum47 += (uint32_t) v3x47;
          out[191] = v3x47;
        }
        const int8_t v0x48 = w0[48];
        ksum48 += (uint32_t) v0x48;
        out[192] = v0x48;
        if (1 < k) {
          const int8_t v1x48 = w1[48];
          ksum48 += (uint32_t) v1x48;
          out[193] = v1x48;
        }
        if (2 < k) {
          const int8_t v2x48 = w2[48];
          ksum48 += (uint32_t) v2x48;
          out[194] = v2x48;
        }
        if (3 < k) {
          const int8_t v3x48 = w3[48];
          ksum48 += (uint32_t) v3x48;
          out[195] = v3x48;
        }
        const int8_t v0x49 = w0[49];
        ksum49 += (uint32_t) v0x49;
        out[196] = v0x49;
        if (1 < k) {
          const int8_t v1x49 = w1[49];
          ksum49 += (uint32_t) v1x49;
          out[197] = v1x49;
        }
        if (2 < k) {
          const int8_t v2x49 = w2[49];
          ksum49 += (uint32_t) v2x49;
          out[198] = v2x49;
        }
        if (3 < k) {
          const int8_t v3x49 = w3[49];
          ksum49 += (uint32_t) v3x49;
          out[199] = v3x49;
        }
        const int8_t v0x50 = w0[50];
        ksum50 += (uint32_t) v0x50;
        out[200] = v0x50;
        if (1 < k) {
          const int8_t v1x50 = w1[50];
          ksum50 += (uint32_t) v1x50;
          out[201] = v1x50;
        }
        if (2 < k) {
          const int8_t v2x50 = w2[50];
          ksum50 += (uint32_t) v2x50;
          out[202] = v2x50;
        }
        if (3 < k) {
          const int8_t v3x50 = w3[50];
          ksum50 += (uint32_t) v3x50;
          out[203] = v3x50;
        }
        const int8_t v0x51 = w0[51];
        ksum51 += (uint32_t) v0x51;
        out[204] = v0x51;
        if (1 < k) {
          const int8_t v1x51 = w1[51];
          ksum51 += (uint32_t) v1x51;
          out[205] = v1x51;
        }
        if (2 < k) {
          const int8_t v2x51 = w2[51];
          ksum51 += (uint32_t) v2x51;
          out[206] = v2x51;
        }
        if (3 < k) {
          const int8_t v3x51 = w3[51];
          ksum51 += (uint32_t) v3x51;
          out[207] = v3x51;
        }
        const int8_t v0x52 = w0[52];
        ksum52 += (uint32_t) v0x52;
        out[208] = v0x52;
        if (1 < k) {
          const int8_t v1x52 = w1[52];
          ksum52 += (uint32_t) v1x52;
          out[209] = v1x52;
        }
        if (2 < k) {
          const int8_t v2x52 = w2[52];
          ksum52 += (uint32_t) v2x52;
          out[210] = v2x52;
        }
        if (3 < k) {
          const int8_t v3x52 = w3[52];
          ksum52 += (uint32_t) v3x52;
          out[211] = v3x52;
        }
        const int8_t v0x53 = w0[53];
        ksum53 += (uint32_t) v0x53;
        out[212] = v0x53;
        if (1 < k) {
          const int8_t v1x53 = w1[53];
          ksum53 += (uint32_t) v1x53;
          out[213] = v1x53;
        }
        if (2 < k) {
          const int8_t v2x53 = w2[53];
          ksum53 += (uint32_t) v2x53;
          out[214] = v2x53;
        }
        if (3 < k) {
          const int8_t v3x53 = w3[53];
          ksum53 += (uint32_t) v3x53;
          out[215] = v3x53;
        }
        const int8_t v0x54 = w0[54];
        ksum54 += (uint32_t) v0x54;
        out[216] = v0x54;
        if (1 < k) {
          const int8_t v1x54 = w1[54];
          ksum54 += (uint32_t) v1x54;
          out[217] = v1x54;
        }
        if (2 < k) {
          const int8_t v2x54 = w2[54];
          ksum54 += (uint32_t) v2x54;
          out[218] = v2x54;
        }
        if (3 < k) {
          const int8_t v3x54 = w3[54];
          ksum54 += (uint32_t) v3x54;
          out[219] = v3x54;
        }
        const int8_t v0x55 = w0[55];
        ksum55 += (uint32_t) v0x55;
        out[220] = v0x55;
        if (1 < k) {
          const int8_t v1x55 = w1[55];
          ksum55 += (uint32_t) v1x55;
          out[221] = v1x55;
        }
        if (2 < k) {
          const int8_t v2x55 = w2[55];
          ksum55 += (uint32_t) v2x55;
          out[222] = v2x55;
        }
        if (3 < k) {
          const int8_t v3x55 = w3[55];
          ksum55 += (uint32_t) v3x55;
          out[223] = v3x55;
        }
        const int8_t v0x56 = w0[56];
        ksum56 += (uint32_t) v0x56;
        out[224] = v0x56;
        if (1 < k) {
          const int8_t v1x56 = w1[56];
          ksum56 += (uint32_t) v1x56;
          out[225] = v1x56;
        }
        if (2 < k) {
          const int8_t v2x56 = w2[56];
          ksum56 += (uint32_t) v2x56;
          out[226] = v2x56;
        }
        if (3 < k) {
          const int8_t v3x56 = w3[56];
          ksum56 += (uint32_t) v3x56;
          out[227] = v3x56;
        }
        const int8_t v0x57 = w0[57];
        ksum57 += (uint32_t) v0x57;
        out[228] = v0x57;
        if (1 < k) {
          const int8_t v1x57 = w1[57];
          ksum57 += (uint32_t) v1x57;
          out[229] = v1x57;
        }
        if (2 < k) {
          const int8_t v2x57 = w2[57];
          ksum57 += (uint32_t) v2x57;
          out[230] = v2x57;
        }
        if (3 < k) {
          const int8_t v3x57 = w3[57];
          ksum57 += (uint32_t) v3x57;
          out[231] = v3x57;
        }
        const int8_t v0x58 = w0[58];
        ksum58 += (uint32_t) v0x58;
        out[232] = v0x58;
        if (1 < k) {
          const int8_t v1x58 = w1[58];
          ksum58 += (uint32_t) v1x58;
          out[233] = v1x58;
        }
        if (2 < k) {
          const int8_t v2x58 = w2[58];
          ksum58 += (uint32_t) v2x58;
          out[234] = v2x58;
        }
        if (3 < k) {
          const int8_t v3x58 = w3[58];
          ksum58 += (uint32_t) v3x58;
          out[235] = v3x58;
        }
        const int8_t v0x59 = w0[59];
        ksum59 += (uint32_t) v0x59;
        out[236] = v0x59;
        if (1 < k) {
          const int8_t v1x59 = w1[59];
          ksum59 += (uint32_t) v1x59;
          out[237] = v1x59;
        }
        if (2 < k) {
          const int8_t v2x59 = w2[59];
          ksum59 += (uint32_t) v2x59;
          out[238] = v2x59;
        }
        if (3 < k) {
          const int8_t v3x59 = w3[59];
          ksum59 += (uint32_t) v3x59;
          out[239] = v3x59;
        }
        const int8_t v0x60 = w0[60];
        ksum60 += (uint32_t) v0x60;
        out[240] = v0x60;
        if (1 < k) {
          const int8_t v1x60 = w1[60];
          ksum60 += (uint32_t) v1x60;
          out[241] = v1x60;
        }
        if (2 < k) {
          const int8_t v2x60 = w2[60];
          ksum60 += (uint32_t) v2x60;
          out[242] = v2x60;
        }
        if (3 < k) {
          const int8_t v3x60 = w3[60];
          ksum60 += (uint32_t) v3x60;
          out[243] = v3x60;
        }
        const int8_t v0x61 = w0[61];
        ksum61 += (uint32_t) v0x61;
        out[244] = v0x61;
        if (1 < k) {
          const int8_t v1x61 = w1[61];
          ksum61 += (uint32_t) v1x61;
          out[245] = v1x61;
        }
        if (2 < k) {
          const int8_t v2x61 = w2[61];
          ksum61 += (uint32_t) v2x61;
          out[246] = v2x61;
        }
        if (3 < k) {
          const int8_t v3x61 = w3[61];
          ksum61 += (uint32_t) v3x61;
          out[247] = v3x61;
        }
        const int8_t v0x62 = w0[62];
        ksum62 += (uint32_t) v0x62;
        out[248] = v0x62;
        if (1 < k) {
          const int8_t v1x62 = w1[62];
          ksum62 += (uint32_t) v1x62;
          out[249] = v1x62;
        }
        if (2 < k) {
          const int8_t v2x62 = w2[62];
          ksum62 += (uint32_t) v2x62;
          out[250] = v2x62;
        }
        if (3 < k) {
          const int8_t v3x62 = w3[62];
          ksum62 += (uint32_t) v3x62;
          out[251] = v3x62;
        }
        const int8_t v0x63 = w0[63];
        ksum63 += (uint32_t) v0x63;
        out[252] = v0x63;
        if (1 < k) {
          const int8_t v1x63 = w1[63];
          ksum63 += (uint32_t) v1x63;
          out[253] = v1x63;
        }
        if (2 < k) {
          const int8_t v2x63 = w2[63];
          ksum63 += (uint32_t) v2x63;
          out[254] = v2x63;
        }
        if (3 < k) {
          const int8_t v3x63 = w3[63];
          ksum63 += (uint32_t) v3x63;
          out[255] = v3x63;
        }
        w0 += k * k_stride;
        w1 += k * k_stride;
        w2 += k * k_stride;
        w3 += k * k_stride;
        out += 256;
      }

      packed_b[0] -= ksum0 * izp;
      packed_b[1] -= ksum1 * izp;
      packed_b[2] -= ksum2 * izp;
      packed_b[3] -= ksum3 * izp;
      packed_b[4] -= ksum4 * izp;
      packed_b[5] -= ksum5 * izp;
      packed_b[6] -= ksum6 * izp;
      packed_b[7] -= ksum7 * izp;
      packed_b[8] -= ksum8 * izp;
      packed_b[9] -= ksum9 * izp;
      packed_b[10] -= ksum10 * izp;
      packed_b[11] -= ksum11 * izp;
      packed_b[12] -= ksum12 * izp;
      packed_b[13] -= ksum13 * izp;
      packed_b[14] -= ksum14 * izp;
      packed_b[15] -= ksum15 * izp;
      packed_b[16] -= ksum16 * izp;
      packed_b[17] -= ksum17 * izp;
      packed_b[18] -= ksum18 * izp;
      packed_b[19] -= ksum19 * izp;
      packed_b[20] -= ksum20 * izp;
      packed_b[21] -= ksum21 * izp;
      packed_b[22] -= ksum22 * izp;
      packed_b[23] -= ksum23 * izp;
      packed_b[24] -= ksum24 * izp;
      packed_b[25] -= ksum25 * izp;
      packed_b[26] -= ksum26 * izp;
      packed_b[27] -= ksum27 * izp;
      packed_b[28] -= ksum28 * izp;
      packed_b[29] -= ksum29 * izp;
      packed_b[30] -= ksum30 * izp;
      packed_b[31] -= ksum31 * izp;
      packed_b[32] -= ksum32 * izp;
      packed_b[33] -= ksum33 * izp;
      packed_b[34] -= ksum34 * izp;
      packed_b[35] -= ksum35 * izp;
      packed_b[36] -= ksum36 * izp;
      packed_b[37] -= ksum37 * izp;
      packed_b[38] -= ksum38 * izp;
      packed_b[39] -= ksum39 * izp;
      packed_b[40] -= ksum40 * izp;
      packed_b[41] -= ksum41 * izp;
      packed_b[42] -= ksum42 * izp;
      packed_b[43] -= ksum43 * izp;
      packed_b[44] -= ksum44 * izp;
      packed_b[45] -= ksum45 * izp;
      packed_b[46] -= ksum46 * izp;
      packed_b[47] -= ksum47 * izp;
      packed_b[48] -= ksum48 * izp;
      packed_b[49] -= ksum49 * izp;
      packed_b[50] -= ksum50 * izp;
      packed_b[51] -= ksum51 * izp;
      packed_b[52] -= ksum52 * izp;
      packed_b[53] -= ksum53 * izp;
      packed_b[54] -= ksum54 * izp;
      packed_b[55] -= ksum55 * izp;
      packed_b[56] -= ksum56 * izp;
      packed_b[57] -= ksum57 * izp;
      packed_b[58] -= ksum58 * izp;
      packed_b[59] -= ksum59 * izp;
      packed_b[60] -= ksum60 * izp;
      packed_b[61] -= ksum61 * izp;
      packed_b[62] -= ksum62 * izp;
      packed_b[63] -= ksum63 * izp;
      out = (int8_t*) ((uintptr_t) out + extra_bytes);
      w0 = w0 - kc * k_stride + 64;
    }

    // NC remainder (1..63)
    if XNN_UNLIKELY(n != 0) {
      int32_t* packed_b = (int32_t*) out;
      if XNN_LIKELY(b != NULL) {
        size_t nb = n;
        do {
          *((int32_t*) out) = *b++;
          out += sizeof(int32_t);
        } while (--nb != 0);
      } else {
        size_t nb = n;
        do {
          *((int32_t*) out) = 0;
          out += sizeof(int32_t);
        } while (--nb != 0);
      }
      out += (64 - n) * sizeof(int32_t);

     // NR remainder has less than 64 rows so last row is not loaded
      const int8_t* w1 = w0 + k_stride;
      const int8_t* w2 = w1 + k_stride;
      const int8_t* w3 = w2 + k_stride;

      uint32_t ksum0 = 0;
      uint32_t ksum1 = 0;
      uint32_t ksum2 = 0;
      uint32_t ksum3 = 0;
      uint32_t ksum4 = 0;
      uint32_t ksum5 = 0;
      uint32_t ksum6 = 0;
      uint32_t ksum7 = 0;
      uint32_t ksum8 = 0;
      uint32_t ksum9 = 0;
      uint32_t ksum10 = 0;
      uint32_t ksum11 = 0;
      uint32_t ksum12 = 0;
      uint32_t ksum13 = 0;
      uint32_t ksum14 = 0;
      uint32_t ksum15 = 0;
      uint32_t ksum16 = 0;
      uint32_t ksum17 = 0;
      uint32_t ksum18 = 0;
      uint32_t ksum19 = 0;
      uint32_t ksum20 = 0;
      uint32_t ksum21 = 0;
      uint32_t ksum22 = 0;
      uint32_t ksum23 = 0;
      uint32_t ksum24 = 0;
      uint32_t ksum25 = 0;
      uint32_t ksum26 = 0;
      uint32_t ksum27 = 0;
      uint32_t ksum28 = 0;
      uint32_t ksum29 = 0;
      uint32_t ksum30 = 0;
      uint32_t ksum31 = 0;
      uint32_t ksum32 = 0;
      uint32_t ksum33 = 0;
      uint32_t ksum34 = 0;
      uint32_t ksum35 = 0;
      uint32_t ksum36 = 0;
      uint32_t ksum37 = 0;
      uint32_t ksum38 = 0;
      uint32_t ksum39 = 0;
      uint32_t ksum40 = 0;
      uint32_t ksum41 = 0;
      uint32_t ksum42 = 0;
      uint32_t ksum43 = 0;
      uint32_t ksum44 = 0;
      uint32_t ksum45 = 0;
      uint32_t ksum46 = 0;
      uint32_t ksum47 = 0;
      uint32_t ksum48 = 0;
      uint32_t ksum49 = 0;
      uint32_t ksum50 = 0;
      uint32_t ksum51 = 0;
      uint32_t ksum52 = 0;
      uint32_t ksum53 = 0;
      uint32_t ksum54 = 0;
      uint32_t ksum55 = 0;
      uint32_t ksum56 = 0;
      uint32_t ksum57 = 0;
      uint32_t ksum58 = 0;
      uint32_t ksum59 = 0;
      uint32_t ksum60 = 0;
      uint32_t ksum61 = 0;
      uint32_t ksum62 = 0;

      // KC main loop multiple of 64x4
      size_t k = kc;
      for (; k >= 4; k -= 4) {
        const int8_t v0x0 = w0[0];
        const int8_t v1x0 = w1[0];
        const int8_t v2x0 = w2[0];
        const int8_t v3x0 = w3[0];
        ksum0 += (uint32_t) v0x0;
        ksum0 += (uint32_t) v1x0;
        ksum0 += (uint32_t) v2x0;
        ksum0 += (uint32_t) v3x0;
        out[0] = v0x0;
        out[1] = v1x0;
        out[2] = v2x0;
        out[3] = v3x0;
        if (1 < n) {
          const int8_t v0x1 = w0[1];
          const int8_t v1x1 = w1[1];
          const int8_t v2x1 = w2[1];
          const int8_t v3x1 = w3[1];
          ksum1 += (uint32_t) v0x1;
          ksum1 += (uint32_t) v1x1;
          ksum1 += (uint32_t) v2x1;
          ksum1 += (uint32_t) v3x1;
          out[4] = v0x1;
          out[5] = v1x1;
          out[6] = v2x1;
          out[7] = v3x1;
        }
        if (2 < n) {
          const int8_t v0x2 = w0[2];
          const int8_t v1x2 = w1[2];
          const int8_t v2x2 = w2[2];
          const int8_t v3x2 = w3[2];
          ksum2 += (uint32_t) v0x2;
          ksum2 += (uint32_t) v1x2;
          ksum2 += (uint32_t) v2x2;
          ksum2 += (uint32_t) v3x2;
          out[8] = v0x2;
          out[9] = v1x2;
          out[10] = v2x2;
          out[11] = v3x2;
        }
        if (3 < n) {
          const int8_t v0x3 = w0[3];
          const int8_t v1x3 = w1[3];
          const int8_t v2x3 = w2[3];
          const int8_t v3x3 = w3[3];
          ksum3 += (uint32_t) v0x3;
          ksum3 += (uint32_t) v1x3;
          ksum3 += (uint32_t) v2x3;
          ksum3 += (uint32_t) v3x3;
          out[12] = v0x3;
          out[13] = v1x3;
          out[14] = v2x3;
          out[15] = v3x3;
        }
        if (4 < n) {
          const int8_t v0x4 = w0[4];
          const int8_t v1x4 = w1[4];
          const int8_t v2x4 = w2[4];
          const int8_t v3x4 = w3[4];
          ksum4 += (uint32_t) v0x4;
          ksum4 += (uint32_t) v1x4;
          ksum4 += (uint32_t) v2x4;
          ksum4 += (uint32_t) v3x4;
          out[16] = v0x4;
          out[17] = v1x4;
          out[18] = v2x4;
          out[19] = v3x4;
        }
        if (5 < n) {
          const int8_t v0x5 = w0[5];
          const int8_t v1x5 = w1[5];
          const int8_t v2x5 = w2[5];
          const int8_t v3x5 = w3[5];
          ksum5 += (uint32_t) v0x5;
          ksum5 += (uint32_t) v1x5;
          ksum5 += (uint32_t) v2x5;
          ksum5 += (uint32_t) v3x5;
          out[20] = v0x5;
          out[21] = v1x5;
          out[22] = v2x5;
          out[23] = v3x5;
        }
        if (6 < n) {
          const int8_t v0x6 = w0[6];
          const int8_t v1x6 = w1[6];
          const int8_t v2x6 = w2[6];
          const int8_t v3x6 = w3[6];
          ksum6 += (uint32_t) v0x6;
          ksum6 += (uint32_t) v1x6;
          ksum6 += (uint32_t) v2x6;
          ksum6 += (uint32_t) v3x6;
          out[24] = v0x6;
          out[25] = v1x6;
          out[26] = v2x6;
          out[27] = v3x6;
        }
        if (7 < n) {
          const int8_t v0x7 = w0[7];
          const int8_t v1x7 = w1[7];
          const int8_t v2x7 = w2[7];
          const int8_t v3x7 = w3[7];
          ksum7 += (uint32_t) v0x7;
          ksum7 += (uint32_t) v1x7;
          ksum7 += (uint32_t) v2x7;
          ksum7 += (uint32_t) v3x7;
          out[28] = v0x7;
          out[29] = v1x7;
          out[30] = v2x7;
          out[31] = v3x7;
        }
        if (8 < n) {
          const int8_t v0x8 = w0[8];
          const int8_t v1x8 = w1[8];
          const int8_t v2x8 = w2[8];
          const int8_t v3x8 = w3[8];
          ksum8 += (uint32_t) v0x8;
          ksum8 += (uint32_t) v1x8;
          ksum8 += (uint32_t) v2x8;
          ksum8 += (uint32_t) v3x8;
          out[32] = v0x8;
          out[33] = v1x8;
          out[34] = v2x8;
          out[35] = v3x8;
        }
        if (9 < n) {
          const int8_t v0x9 = w0[9];
          const int8_t v1x9 = w1[9];
          const int8_t v2x9 = w2[9];
          const int8_t v3x9 = w3[9];
          ksum9 += (uint32_t) v0x9;
          ksum9 += (uint32_t) v1x9;
          ksum9 += (uint32_t) v2x9;
          ksum9 += (uint32_t) v3x9;
          out[36] = v0x9;
          out[37] = v1x9;
          out[38] = v2x9;
          out[39] = v3x9;
        }
        if (10 < n) {
          const int8_t v0x10 = w0[10];
          const int8_t v1x10 = w1[10];
          const int8_t v2x10 = w2[10];
          const int8_t v3x10 = w3[10];
          ksum10 += (uint32_t) v0x10;
          ksum10 += (uint32_t) v1x10;
          ksum10 += (uint32_t) v2x10;
          ksum10 += (uint32_t) v3x10;
          out[40] = v0x10;
          out[41] = v1x10;
          out[42] = v2x10;
          out[43] = v3x10;
        }
        if (11 < n) {
          const int8_t v0x11 = w0[11];
          const int8_t v1x11 = w1[11];
          const int8_t v2x11 = w2[11];
          const int8_t v3x11 = w3[11];
          ksum11 += (uint32_t) v0x11;
          ksum11 += (uint32_t) v1x11;
          ksum11 += (uint32_t) v2x11;
          ksum11 += (uint32_t) v3x11;
          out[44] = v0x11;
          out[45] = v1x11;
          out[46] = v2x11;
          out[47] = v3x11;
        }
        if (12 < n) {
          const int8_t v0x12 = w0[12];
          const int8_t v1x12 = w1[12];
          const int8_t v2x12 = w2[12];
          const int8_t v3x12 = w3[12];
          ksum12 += (uint32_t) v0x12;
          ksum12 += (uint32_t) v1x12;
          ksum12 += (uint32_t) v2x12;
          ksum12 += (uint32_t) v3x12;
          out[48] = v0x12;
          out[49] = v1x12;
          out[50] = v2x12;
          out[51] = v3x12;
        }
        if (13 < n) {
          const int8_t v0x13 = w0[13];
          const int8_t v1x13 = w1[13];
          const int8_t v2x13 = w2[13];
          const int8_t v3x13 = w3[13];
          ksum13 += (uint32_t) v0x13;
          ksum13 += (uint32_t) v1x13;
          ksum13 += (uint32_t) v2x13;
          ksum13 += (uint32_t) v3x13;
          out[52] = v0x13;
          out[53] = v1x13;
          out[54] = v2x13;
          out[55] = v3x13;
        }
        if (14 < n) {
          const int8_t v0x14 = w0[14];
          const int8_t v1x14 = w1[14];
          const int8_t v2x14 = w2[14];
          const int8_t v3x14 = w3[14];
          ksum14 += (uint32_t) v0x14;
          ksum14 += (uint32_t) v1x14;
          ksum14 += (uint32_t) v2x14;
          ksum14 += (uint32_t) v3x14;
          out[56] = v0x14;
          out[57] = v1x14;
          out[58] = v2x14;
          out[59] = v3x14;
        }
        if (15 < n) {
          const int8_t v0x15 = w0[15];
          const int8_t v1x15 = w1[15];
          const int8_t v2x15 = w2[15];
          const int8_t v3x15 = w3[15];
          ksum15 += (uint32_t) v0x15;
          ksum15 += (uint32_t) v1x15;
          ksum15 += (uint32_t) v2x15;
          ksum15 += (uint32_t) v3x15;
          out[60] = v0x15;
          out[61] = v1x15;
          out[62] = v2x15;
          out[63] = v3x15;
        }
        if (16 < n) {
          const int8_t v0x16 = w0[16];
          const int8_t v1x16 = w1[16];
          const int8_t v2x16 = w2[16];
          const int8_t v3x16 = w3[16];
          ksum16 += (uint32_t) v0x16;
          ksum16 += (uint32_t) v1x16;
          ksum16 += (uint32_t) v2x16;
          ksum16 += (uint32_t) v3x16;
          out[64] = v0x16;
          out[65] = v1x16;
          out[66] = v2x16;
          out[67] = v3x16;
        }
        if (17 < n) {
          const int8_t v0x17 = w0[17];
          const int8_t v1x17 = w1[17];
          const int8_t v2x17 = w2[17];
          const int8_t v3x17 = w3[17];
          ksum17 += (uint32_t) v0x17;
          ksum17 += (uint32_t) v1x17;
          ksum17 += (uint32_t) v2x17;
          ksum17 += (uint32_t) v3x17;
          out[68] = v0x17;
          out[69] = v1x17;
          out[70] = v2x17;
          out[71] = v3x17;
        }
        if (18 < n) {
          const int8_t v0x18 = w0[18];
          const int8_t v1x18 = w1[18];
          const int8_t v2x18 = w2[18];
          const int8_t v3x18 = w3[18];
          ksum18 += (uint32_t) v0x18;
          ksum18 += (uint32_t) v1x18;
          ksum18 += (uint32_t) v2x18;
          ksum18 += (uint32_t) v3x18;
          out[72] = v0x18;
          out[73] = v1x18;
          out[74] = v2x18;
          out[75] = v3x18;
        }
        if (19 < n) {
          const int8_t v0x19 = w0[19];
          const int8_t v1x19 = w1[19];
          const int8_t v2x19 = w2[19];
          const int8_t v3x19 = w3[19];
          ksum19 += (uint32_t) v0x19;
          ksum19 += (uint32_t) v1x19;
          ksum19 += (uint32_t) v2x19;
          ksum19 += (uint32_t) v3x19;
          out[76] = v0x19;
          out[77] = v1x19;
          out[78] = v2x19;
          out[79] = v3x19;
        }
        if (20 < n) {
          const int8_t v0x20 = w0[20];
          const int8_t v1x20 = w1[20];
          const int8_t v2x20 = w2[20];
          const int8_t v3x20 = w3[20];
          ksum20 += (uint32_t) v0x20;
          ksum20 += (uint32_t) v1x20;
          ksum20 += (uint32_t) v2x20;
          ksum20 += (uint32_t) v3x20;
          out[80] = v0x20;
          out[81] = v1x20;
          out[82] = v2x20;
          out[83] = v3x20;
        }
        if (21 < n) {
          const int8_t v0x21 = w0[21];
          const int8_t v1x21 = w1[21];
          const int8_t v2x21 = w2[21];
          const int8_t v3x21 = w3[21];
          ksum21 += (uint32_t) v0x21;
          ksum21 += (uint32_t) v1x21;
          ksum21 += (uint32_t) v2x21;
          ksum21 += (uint32_t) v3x21;
          out[84] = v0x21;
          out[85] = v1x21;
          out[86] = v2x21;
          out[87] = v3x21;
        }
        if (22 < n) {
          const int8_t v0x22 = w0[22];
          const int8_t v1x22 = w1[22];
          const int8_t v2x22 = w2[22];
          const int8_t v3x22 = w3[22];
          ksum22 += (uint32_t) v0x22;
          ksum22 += (uint32_t) v1x22;
          ksum22 += (uint32_t) v2x22;
          ksum22 += (uint32_t) v3x22;
          out[88] = v0x22;
          out[89] = v1x22;
          out[90] = v2x22;
          out[91] = v3x22;
        }
        if (23 < n) {
          const int8_t v0x23 = w0[23];
          const int8_t v1x23 = w1[23];
          const int8_t v2x23 = w2[23];
          const int8_t v3x23 = w3[23];
          ksum23 += (uint32_t) v0x23;
          ksum23 += (uint32_t) v1x23;
          ksum23 += (uint32_t) v2x23;
          ksum23 += (uint32_t) v3x23;
          out[92] = v0x23;
          out[93] = v1x23;
          out[94] = v2x23;
          out[95] = v3x23;
        }
        if (24 < n) {
          const int8_t v0x24 = w0[24];
          const int8_t v1x24 = w1[24];
          const int8_t v2x24 = w2[24];
          const int8_t v3x24 = w3[24];
          ksum24 += (uint32_t) v0x24;
          ksum24 += (uint32_t) v1x24;
          ksum24 += (uint32_t) v2x24;
          ksum24 += (uint32_t) v3x24;
          out[96] = v0x24;
          out[97] = v1x24;
          out[98] = v2x24;
          out[99] = v3x24;
        }
        if (25 < n) {
          const int8_t v0x25 = w0[25];
          const int8_t v1x25 = w1[25];
          const int8_t v2x25 = w2[25];
          const int8_t v3x25 = w3[25];
          ksum25 += (uint32_t) v0x25;
          ksum25 += (uint32_t) v1x25;
          ksum25 += (uint32_t) v2x25;
          ksum25 += (uint32_t) v3x25;
          out[100] = v0x25;
          out[101] = v1x25;
          out[102] = v2x25;
          out[103] = v3x25;
        }
        if (26 < n) {
          const int8_t v0x26 = w0[26];
          const int8_t v1x26 = w1[26];
          const int8_t v2x26 = w2[26];
          const int8_t v3x26 = w3[26];
          ksum26 += (uint32_t) v0x26;
          ksum26 += (uint32_t) v1x26;
          ksum26 += (uint32_t) v2x26;
          ksum26 += (uint32_t) v3x26;
          out[104] = v0x26;
          out[105] = v1x26;
          out[106] = v2x26;
          out[107] = v3x26;
        }
        if (27 < n) {
          const int8_t v0x27 = w0[27];
          const int8_t v1x27 = w1[27];
          const int8_t v2x27 = w2[27];
          const int8_t v3x27 = w3[27];
          ksum27 += (uint32_t) v0x27;
          ksum27 += (uint32_t) v1x27;
          ksum27 += (uint32_t) v2x27;
          ksum27 += (uint32_t) v3x27;
          out[108] = v0x27;
          out[109] = v1x27;
          out[110] = v2x27;
          out[111] = v3x27;
        }
        if (28 < n) {
          const int8_t v0x28 = w0[28];
          const int8_t v1x28 = w1[28];
          const int8_t v2x28 = w2[28];
          const int8_t v3x28 = w3[28];
          ksum28 += (uint32_t) v0x28;
          ksum28 += (uint32_t) v1x28;
          ksum28 += (uint32_t) v2x28;
          ksum28 += (uint32_t) v3x28;
          out[112] = v0x28;
          out[113] = v1x28;
          out[114] = v2x28;
          out[115] = v3x28;
        }
        if (29 < n) {
          const int8_t v0x29 = w0[29];
          const int8_t v1x29 = w1[29];
          const int8_t v2x29 = w2[29];
          const int8_t v3x29 = w3[29];
          ksum29 += (uint32_t) v0x29;
          ksum29 += (uint32_t) v1x29;
          ksum29 += (uint32_t) v2x29;
          ksum29 += (uint32_t) v3x29;
          out[116] = v0x29;
          out[117] = v1x29;
          out[118] = v2x29;
          out[119] = v3x29;
        }
        if (30 < n) {
          const int8_t v0x30 = w0[30];
          const int8_t v1x30 = w1[30];
          const int8_t v2x30 = w2[30];
          const int8_t v3x30 = w3[30];
          ksum30 += (uint32_t) v0x30;
          ksum30 += (uint32_t) v1x30;
          ksum30 += (uint32_t) v2x30;
          ksum30 += (uint32_t) v3x30;
          out[120] = v0x30;
          out[121] = v1x30;
          out[122] = v2x30;
          out[123] = v3x30;
        }
        if (31 < n) {
          const int8_t v0x31 = w0[31];
          const int8_t v1x31 = w1[31];
          const int8_t v2x31 = w2[31];
          const int8_t v3x31 = w3[31];
          ksum31 += (uint32_t) v0x31;
          ksum31 += (uint32_t) v1x31;
          ksum31 += (uint32_t) v2x31;
          ksum31 += (uint32_t) v3x31;
          out[124] = v0x31;
          out[125] = v1x31;
          out[126] = v2x31;
          out[127] = v3x31;
        }
        if (32 < n) {
          const int8_t v0x32 = w0[32];
          const int8_t v1x32 = w1[32];
          const int8_t v2x32 = w2[32];
          const int8_t v3x32 = w3[32];
          ksum32 += (uint32_t) v0x32;
          ksum32 += (uint32_t) v1x32;
          ksum32 += (uint32_t) v2x32;
          ksum32 += (uint32_t) v3x32;
          out[128] = v0x32;
          out[129] = v1x32;
          out[130] = v2x32;
          out[131] = v3x32;
        }
        if (33 < n) {
          const int8_t v0x33 = w0[33];
          const int8_t v1x33 = w1[33];
          const int8_t v2x33 = w2[33];
          const int8_t v3x33 = w3[33];
          ksum33 += (uint32_t) v0x33;
          ksum33 += (uint32_t) v1x33;
          ksum33 += (uint32_t) v2x33;
          ksum33 += (uint32_t) v3x33;
          out[132] = v0x33;
          out[133] = v1x33;
          out[134] = v2x33;
          out[135] = v3x33;
        }
        if (34 < n) {
          const int8_t v0x34 = w0[34];
          const int8_t v1x34 = w1[34];
          const int8_t v2x34 = w2[34];
          const int8_t v3x34 = w3[34];
          ksum34 += (uint32_t) v0x34;
          ksum34 += (uint32_t) v1x34;
          ksum34 += (uint32_t) v2x34;
          ksum34 += (uint32_t) v3x34;
          out[136] = v0x34;
          out[137] = v1x34;
          out[138] = v2x34;
          out[139] = v3x34;
        }
        if (35 < n) {
          const int8_t v0x35 = w0[35];
          const int8_t v1x35 = w1[35];
          const int8_t v2x35 = w2[35];
          const int8_t v3x35 = w3[35];
          ksum35 += (uint32_t) v0x35;
          ksum35 += (uint32_t) v1x35;
          ksum35 += (uint32_t) v2x35;
          ksum35 += (uint32_t) v3x35;
          out[140] = v0x35;
          out[141] = v1x35;
          out[142] = v2x35;
          out[143] = v3x35;
        }
        if (36 < n) {
          const int8_t v0x36 = w0[36];
          const int8_t v1x36 = w1[36];
          const int8_t v2x36 = w2[36];
          const int8_t v3x36 = w3[36];
          ksum36 += (uint32_t) v0x36;
          ksum36 += (uint32_t) v1x36;
          ksum36 += (uint32_t) v2x36;
          ksum36 += (uint32_t) v3x36;
          out[144] = v0x36;
          out[145] = v1x36;
          out[146] = v2x36;
          out[147] = v3x36;
        }
        if (37 < n) {
          const int8_t v0x37 = w0[37];
          const int8_t v1x37 = w1[37];
          const int8_t v2x37 = w2[37];
          const int8_t v3x37 = w3[37];
          ksum37 += (uint32_t) v0x37;
          ksum37 += (uint32_t) v1x37;
          ksum37 += (uint32_t) v2x37;
          ksum37 += (uint32_t) v3x37;
          out[148] = v0x37;
          out[149] = v1x37;
          out[150] = v2x37;
          out[151] = v3x37;
        }
        if (38 < n) {
          const int8_t v0x38 = w0[38];
          const int8_t v1x38 = w1[38];
          const int8_t v2x38 = w2[38];
          const int8_t v3x38 = w3[38];
          ksum38 += (uint32_t) v0x38;
          ksum38 += (uint32_t) v1x38;
          ksum38 += (uint32_t) v2x38;
          ksum38 += (uint32_t) v3x38;
          out[152] = v0x38;
          out[153] = v1x38;
          out[154] = v2x38;
          out[155] = v3x38;
        }
        if (39 < n) {
          const int8_t v0x39 = w0[39];
          const int8_t v1x39 = w1[39];
          const int8_t v2x39 = w2[39];
          const int8_t v3x39 = w3[39];
          ksum39 += (uint32_t) v0x39;
          ksum39 += (uint32_t) v1x39;
          ksum39 += (uint32_t) v2x39;
          ksum39 += (uint32_t) v3x39;
          out[156] = v0x39;
          out[157] = v1x39;
          out[158] = v2x39;
          out[159] = v3x39;
        }
        if (40 < n) {
          const int8_t v0x40 = w0[40];
          const int8_t v1x40 = w1[40];
          const int8_t v2x40 = w2[40];
          const int8_t v3x40 = w3[40];
          ksum40 += (uint32_t) v0x40;
          ksum40 += (uint32_t) v1x40;
          ksum40 += (uint32_t) v2x40;
          ksum40 += (uint32_t) v3x40;
          out[160] = v0x40;
          out[161] = v1x40;
          out[162] = v2x40;
          out[163] = v3x40;
        }
        if (41 < n) {
          const int8_t v0x41 = w0[41];
          const int8_t v1x41 = w1[41];
          const int8_t v2x41 = w2[41];
          const int8_t v3x41 = w3[41];
          ksum41 += (uint32_t) v0x41;
          ksum41 += (uint32_t) v1x41;
          ksum41 += (uint32_t) v2x41;
          ksum41 += (uint32_t) v3x41;
          out[164] = v0x41;
          out[165] = v1x41;
          out[166] = v2x41;
          out[167] = v3x41;
        }
        if (42 < n) {
          const int8_t v0x42 = w0[42];
          const int8_t v1x42 = w1[42];
          const int8_t v2x42 = w2[42];
          const int8_t v3x42 = w3[42];
          ksum42 += (uint32_t) v0x42;
          ksum42 += (uint32_t) v1x42;
          ksum42 += (uint32_t) v2x42;
          ksum42 += (uint32_t) v3x42;
          out[168] = v0x42;
          out[169] = v1x42;
          out[170] = v2x42;
          out[171] = v3x42;
        }
        if (43 < n) {
          const int8_t v0x43 = w0[43];
          const int8_t v1x43 = w1[43];
          const int8_t v2x43 = w2[43];
          const int8_t v3x43 = w3[43];
          ksum43 += (uint32_t) v0x43;
          ksum43 += (uint32_t) v1x43;
          ksum43 += (uint32_t) v2x43;
          ksum43 += (uint32_t) v3x43;
          out[172] = v0x43;
          out[173] = v1x43;
          out[174] = v2x43;
          out[175] = v3x43;
        }
        if (44 < n) {
          const int8_t v0x44 = w0[44];
          const int8_t v1x44 = w1[44];
          const int8_t v2x44 = w2[44];
          const int8_t v3x44 = w3[44];
          ksum44 += (uint32_t) v0x44;
          ksum44 += (uint32_t) v1x44;
          ksum44 += (uint32_t) v2x44;
          ksum44 += (uint32_t) v3x44;
          out[176] = v0x44;
          out[177] = v1x44;
          out[178] = v2x44;
          out[179] = v3x44;
        }
        if (45 < n) {
          const int8_t v0x45 = w0[45];
          const int8_t v1x45 = w1[45];
          const int8_t v2x45 = w2[45];
          const int8_t v3x45 = w3[45];
          ksum45 += (uint32_t) v0x45;
          ksum45 += (uint32_t) v1x45;
          ksum45 += (uint32_t) v2x45;
          ksum45 += (uint32_t) v3x45;
          out[180] = v0x45;
          out[181] = v1x45;
          out[182] = v2x45;
          out[183] = v3x45;
        }
        if (46 < n) {
          const int8_t v0x46 = w0[46];
          const int8_t v1x46 = w1[46];
          const int8_t v2x46 = w2[46];
          const int8_t v3x46 = w3[46];
          ksum46 += (uint32_t) v0x46;
          ksum46 += (uint32_t) v1x46;
          ksum46 += (uint32_t) v2x46;
          ksum46 += (uint32_t) v3x46;
          out[184] = v0x46;
          out[185] = v1x46;
          out[186] = v2x46;
          out[187] = v3x46;
        }
        if (47 < n) {
          const int8_t v0x47 = w0[47];
          const int8_t v1x47 = w1[47];
          const int8_t v2x47 = w2[47];
          const int8_t v3x47 = w3[47];
          ksum47 += (uint32_t) v0x47;
          ksum47 += (uint32_t) v1x47;
          ksum47 += (uint32_t) v2x47;
          ksum47 += (uint32_t) v3x47;
          out[188] = v0x47;
          out[189] = v1x47;
          out[190] = v2x47;
          out[191] = v3x47;
        }
        if (48 < n) {
          const int8_t v0x48 = w0[48];
          const int8_t v1x48 = w1[48];
          const int8_t v2x48 = w2[48];
          const int8_t v3x48 = w3[48];
          ksum48 += (uint32_t) v0x48;
          ksum48 += (uint32_t) v1x48;
          ksum48 += (uint32_t) v2x48;
          ksum48 += (uint32_t) v3x48;
          out[192] = v0x48;
          out[193] = v1x48;
          out[194] = v2x48;
          out[195] = v3x48;
        }
        if (49 < n) {
          const int8_t v0x49 = w0[49];
          const int8_t v1x49 = w1[49];
          const int8_t v2x49 = w2[49];
          const int8_t v3x49 = w3[49];
          ksum49 += (uint32_t) v0x49;
          ksum49 += (uint32_t) v1x49;
          ksum49 += (uint32_t) v2x49;
          ksum49 += (uint32_t) v3x49;
          out[196] = v0x49;
          out[197] = v1x49;
          out[198] = v2x49;
          out[199] = v3x49;
        }
        if (50 < n) {
          const int8_t v0x50 = w0[50];
          const int8_t v1x50 = w1[50];
          const int8_t v2x50 = w2[50];
          const int8_t v3x50 = w3[50];
          ksum50 += (uint32_t) v0x50;
          ksum50 += (uint32_t) v1x50;
          ksum50 += (uint32_t) v2x50;
          ksum50 += (uint32_t) v3x50;
          out[200] = v0x50;
          out[201] = v1x50;
          out[202] = v2x50;
          out[203] = v3x50;
        }
        if (51 < n) {
          const int8_t v0x51 = w0[51];
          const int8_t v1x51 = w1[51];
          const int8_t v2x51 = w2[51];
          const int8_t v3x51 = w3[51];
          ksum51 += (uint32_t) v0x51;
          ksum51 += (uint32_t) v1x51;
          ksum51 += (uint32_t) v2x51;
          ksum51 += (uint32_t) v3x51;
          out[204] = v0x51;
          out[205] = v1x51;
          out[206] = v2x51;
          out[207] = v3x51;
        }
        if (52 < n) {
          const int8_t v0x52 = w0[52];
          const int8_t v1x52 = w1[52];
          const int8_t v2x52 = w2[52];
          const int8_t v3x52 = w3[52];
          ksum52 += (uint32_t) v0x52;
          ksum52 += (uint32_t) v1x52;
          ksum52 += (uint32_t) v2x52;
          ksum52 += (uint32_t) v3x52;
          out[208] = v0x52;
          out[209] = v1x52;
          out[210] = v2x52;
          out[211] = v3x52;
        }
        if (53 < n) {
          const int8_t v0x53 = w0[53];
          const int8_t v1x53 = w1[53];
          const int8_t v2x53 = w2[53];
          const int8_t v3x53 = w3[53];
          ksum53 += (uint32_t) v0x53;
          ksum53 += (uint32_t) v1x53;
          ksum53 += (uint32_t) v2x53;
          ksum53 += (uint32_t) v3x53;
          out[212] = v0x53;
          out[213] = v1x53;
          out[214] = v2x53;
          out[215] = v3x53;
        }
        if (54 < n) {
          const int8_t v0x54 = w0[54];
          const int8_t v1x54 = w1[54];
          const int8_t v2x54 = w2[54];
          const int8_t v3x54 = w3[54];
          ksum54 += (uint32_t) v0x54;
          ksum54 += (uint32_t) v1x54;
          ksum54 += (uint32_t) v2x54;
          ksum54 += (uint32_t) v3x54;
          out[216] = v0x54;
          out[217] = v1x54;
          out[218] = v2x54;
          out[219] = v3x54;
        }
        if (55 < n) {
          const int8_t v0x55 = w0[55];
          const int8_t v1x55 = w1[55];
          const int8_t v2x55 = w2[55];
          const int8_t v3x55 = w3[55];
          ksum55 += (uint32_t) v0x55;
          ksum55 += (uint32_t) v1x55;
          ksum55 += (uint32_t) v2x55;
          ksum55 += (uint32_t) v3x55;
          out[220] = v0x55;
          out[221] = v1x55;
          out[222] = v2x55;
          out[223] = v3x55;
        }
        if (56 < n) {
          const int8_t v0x56 = w0[56];
          const int8_t v1x56 = w1[56];
          const int8_t v2x56 = w2[56];
          const int8_t v3x56 = w3[56];
          ksum56 += (uint32_t) v0x56;
          ksum56 += (uint32_t) v1x56;
          ksum56 += (uint32_t) v2x56;
          ksum56 += (uint32_t) v3x56;
          out[224] = v0x56;
          out[225] = v1x56;
          out[226] = v2x56;
          out[227] = v3x56;
        }
        if (57 < n) {
          const int8_t v0x57 = w0[57];
          const int8_t v1x57 = w1[57];
          const int8_t v2x57 = w2[57];
          const int8_t v3x57 = w3[57];
          ksum57 += (uint32_t) v0x57;
          ksum57 += (uint32_t) v1x57;
          ksum57 += (uint32_t) v2x57;
          ksum57 += (uint32_t) v3x57;
          out[228] = v0x57;
          out[229] = v1x57;
          out[230] = v2x57;
          out[231] = v3x57;
        }
        if (58 < n) {
          const int8_t v0x58 = w0[58];
          const int8_t v1x58 = w1[58];
          const int8_t v2x58 = w2[58];
          const int8_t v3x58 = w3[58];
          ksum58 += (uint32_t) v0x58;
          ksum58 += (uint32_t) v1x58;
          ksum58 += (uint32_t) v2x58;
          ksum58 += (uint32_t) v3x58;
          out[232] = v0x58;
          out[233] = v1x58;
          out[234] = v2x58;
          out[235] = v3x58;
        }
        if (59 < n) {
          const int8_t v0x59 = w0[59];
          const int8_t v1x59 = w1[59];
          const int8_t v2x59 = w2[59];
          const int8_t v3x59 = w3[59];
          ksum59 += (uint32_t) v0x59;
          ksum59 += (uint32_t) v1x59;
          ksum59 += (uint32_t) v2x59;
          ksum59 += (uint32_t) v3x59;
          out[236] = v0x59;
          out[237] = v1x59;
          out[238] = v2x59;
          out[239] = v3x59;
        }
        if (60 < n) {
          const int8_t v0x60 = w0[60];
          const int8_t v1x60 = w1[60];
          const int8_t v2x60 = w2[60];
          const int8_t v3x60 = w3[60];
          ksum60 += (uint32_t) v0x60;
          ksum60 += (uint32_t) v1x60;
          ksum60 += (uint32_t) v2x60;
          ksum60 += (uint32_t) v3x60;
          out[240] = v0x60;
          out[241] = v1x60;
          out[242] = v2x60;
          out[243] = v3x60;
        }
        if (61 < n) {
          const int8_t v0x61 = w0[61];
          const int8_t v1x61 = w1[61];
          const int8_t v2x61 = w2[61];
          const int8_t v3x61 = w3[61];
          ksum61 += (uint32_t) v0x61;
          ksum61 += (uint32_t) v1x61;
          ksum61 += (uint32_t) v2x61;
          ksum61 += (uint32_t) v3x61;
          out[244] = v0x61;
          out[245] = v1x61;
          out[246] = v2x61;
          out[247] = v3x61;
        }
        if (62 < n) {
          const int8_t v0x62 = w0[62];
          const int8_t v1x62 = w1[62];
          const int8_t v2x62 = w2[62];
          const int8_t v3x62 = w3[62];
          ksum62 += (uint32_t) v0x62;
          ksum62 += (uint32_t) v1x62;
          ksum62 += (uint32_t) v2x62;
          ksum62 += (uint32_t) v3x62;
          out[248] = v0x62;
          out[249] = v1x62;
          out[250] = v2x62;
          out[251] = v3x62;
        }
        w0 += 4 * k_stride;
        w1 += 4 * k_stride;
        w2 += 4 * k_stride;
        w3 += 4 * k_stride;
        out += 256;
      }

      // KC remainder of 1..3
      if (k != 0) {
        assert(k >= 1 && k <= 3);
        if (0 < n) {
          const int8_t v0x0 = w0[0];
          ksum0 += (uint32_t) v0x0;
          out[0] = v0x0;
          if (1 < k) {
            const int8_t v1x0 = w1[0];
            ksum0 += (uint32_t) v1x0;
            out[1] = v1x0;
          }
          if (2 < k) {
            const int8_t v2x0 = w2[0];
            ksum0 += (uint32_t) v2x0;
            out[2] = v2x0;
          }
          if (3 < k) {
            const int8_t v3x0 = w3[0];
            ksum0 += (uint32_t) v3x0;
            out[3] = v3x0;
          }
        }
        if (1 < n) {
          const int8_t v0x1 = w0[1];
          ksum1 += (uint32_t) v0x1;
          out[4] = v0x1;
          if (1 < k) {
            const int8_t v1x1 = w1[1];
            ksum1 += (uint32_t) v1x1;
            out[5] = v1x1;
          }
          if (2 < k) {
            const int8_t v2x1 = w2[1];
            ksum1 += (uint32_t) v2x1;
            out[6] = v2x1;
          }
          if (3 < k) {
            const int8_t v3x1 = w3[1];
            ksum1 += (uint32_t) v3x1;
            out[7] = v3x1;
          }
        }
        if (2 < n) {
          const int8_t v0x2 = w0[2];
          ksum2 += (uint32_t) v0x2;
          out[8] = v0x2;
          if (1 < k) {
            const int8_t v1x2 = w1[2];
            ksum2 += (uint32_t) v1x2;
            out[9] = v1x2;
          }
          if (2 < k) {
            const int8_t v2x2 = w2[2];
            ksum2 += (uint32_t) v2x2;
            out[10] = v2x2;
          }
          if (3 < k) {
            const int8_t v3x2 = w3[2];
            ksum2 += (uint32_t) v3x2;
            out[11] = v3x2;
          }
        }
        if (3 < n) {
          const int8_t v0x3 = w0[3];
          ksum3 += (uint32_t) v0x3;
          out[12] = v0x3;
          if (1 < k) {
            const int8_t v1x3 = w1[3];
            ksum3 += (uint32_t) v1x3;
            out[13] = v1x3;
          }
          if (2 < k) {
            const int8_t v2x3 = w2[3];
            ksum3 += (uint32_t) v2x3;
            out[14] = v2x3;
          }
          if (3 < k) {
            const int8_t v3x3 = w3[3];
            ksum3 += (uint32_t) v3x3;
            out[15] = v3x3;
          }
        }
        if (4 < n) {
          const int8_t v0x4 = w0[4];
          ksum4 += (uint32_t) v0x4;
          out[16] = v0x4;
          if (1 < k) {
            const int8_t v1x4 = w1[4];
            ksum4 += (uint32_t) v1x4;
            out[17] = v1x4;
          }
          if (2 < k) {
            const int8_t v2x4 = w2[4];
            ksum4 += (uint32_t) v2x4;
            out[18] = v2x4;
          }
          if (3 < k) {
            const int8_t v3x4 = w3[4];
            ksum4 += (uint32_t) v3x4;
            out[19] = v3x4;
          }
        }
        if (5 < n) {
          const int8_t v0x5 = w0[5];
          ksum5 += (uint32_t) v0x5;
          out[20] = v0x5;
          if (1 < k) {
            const int8_t v1x5 = w1[5];
            ksum5 += (uint32_t) v1x5;
            out[21] = v1x5;
          }
          if (2 < k) {
            const int8_t v2x5 = w2[5];
            ksum5 += (uint32_t) v2x5;
            out[22] = v2x5;
          }
          if (3 < k) {
            const int8_t v3x5 = w3[5];
            ksum5 += (uint32_t) v3x5;
            out[23] = v3x5;
          }
        }
        if (6 < n) {
          const int8_t v0x6 = w0[6];
          ksum6 += (uint32_t) v0x6;
          out[24] = v0x6;
          if (1 < k) {
            const int8_t v1x6 = w1[6];
            ksum6 += (uint32_t) v1x6;
            out[25] = v1x6;
          }
          if (2 < k) {
            const int8_t v2x6 = w2[6];
            ksum6 += (uint32_t) v2x6;
            out[26] = v2x6;
          }
          if (3 < k) {
            const int8_t v3x6 = w3[6];
            ksum6 += (uint32_t) v3x6;
            out[27] = v3x6;
          }
        }
        if (7 < n) {
          const int8_t v0x7 = w0[7];
          ksum7 += (uint32_t) v0x7;
          out[28] = v0x7;
          if (1 < k) {
            const int8_t v1x7 = w1[7];
            ksum7 += (uint32_t) v1x7;
            out[29] = v1x7;
          }
          if (2 < k) {
            const int8_t v2x7 = w2[7];
            ksum7 += (uint32_t) v2x7;
            out[30] = v2x7;
          }
          if (3 < k) {
            const int8_t v3x7 = w3[7];
            ksum7 += (uint32_t) v3x7;
            out[31] = v3x7;
          }
        }
        if (8 < n) {
          const int8_t v0x8 = w0[8];
          ksum8 += (uint32_t) v0x8;
          out[32] = v0x8;
          if (1 < k) {
            const int8_t v1x8 = w1[8];
            ksum8 += (uint32_t) v1x8;
            out[33] = v1x8;
          }
          if (2 < k) {
            const int8_t v2x8 = w2[8];
            ksum8 += (uint32_t) v2x8;
            out[34] = v2x8;
          }
          if (3 < k) {
            const int8_t v3x8 = w3[8];
            ksum8 += (uint32_t) v3x8;
            out[35] = v3x8;
          }
        }
        if (9 < n) {
          const int8_t v0x9 = w0[9];
          ksum9 += (uint32_t) v0x9;
          out[36] = v0x9;
          if (1 < k) {
            const int8_t v1x9 = w1[9];
            ksum9 += (uint32_t) v1x9;
            out[37] = v1x9;
          }
          if (2 < k) {
            const int8_t v2x9 = w2[9];
            ksum9 += (uint32_t) v2x9;
            out[38] = v2x9;
          }
          if (3 < k) {
            const int8_t v3x9 = w3[9];
            ksum9 += (uint32_t) v3x9;
            out[39] = v3x9;
          }
        }
        if (10 < n) {
          const int8_t v0x10 = w0[10];
          ksum10 += (uint32_t) v0x10;
          out[40] = v0x10;
          if (1 < k) {
            const int8_t v1x10 = w1[10];
            ksum10 += (uint32_t) v1x10;
            out[41] = v1x10;
          }
          if (2 < k) {
            const int8_t v2x10 = w2[10];
            ksum10 += (uint32_t) v2x10;
            out[42] = v2x10;
          }
          if (3 < k) {
            const int8_t v3x10 = w3[10];
            ksum10 += (uint32_t) v3x10;
            out[43] = v3x10;
          }
        }
        if (11 < n) {
          const int8_t v0x11 = w0[11];
          ksum11 += (uint32_t) v0x11;
          out[44] = v0x11;
          if (1 < k) {
            const int8_t v1x11 = w1[11];
            ksum11 += (uint32_t) v1x11;
            out[45] = v1x11;
          }
          if (2 < k) {
            const int8_t v2x11 = w2[11];
            ksum11 += (uint32_t) v2x11;
            out[46] = v2x11;
          }
          if (3 < k) {
            const int8_t v3x11 = w3[11];
            ksum11 += (uint32_t) v3x11;
            out[47] = v3x11;
          }
        }
        if (12 < n) {
          const int8_t v0x12 = w0[12];
          ksum12 += (uint32_t) v0x12;
          out[48] = v0x12;
          if (1 < k) {
            const int8_t v1x12 = w1[12];
            ksum12 += (uint32_t) v1x12;
            out[49] = v1x12;
          }
          if (2 < k) {
            const int8_t v2x12 = w2[12];
            ksum12 += (uint32_t) v2x12;
            out[50] = v2x12;
          }
          if (3 < k) {
            const int8_t v3x12 = w3[12];
            ksum12 += (uint32_t) v3x12;
            out[51] = v3x12;
          }
        }
        if (13 < n) {
          const int8_t v0x13 = w0[13];
          ksum13 += (uint32_t) v0x13;
          out[52] = v0x13;
          if (1 < k) {
            const int8_t v1x13 = w1[13];
            ksum13 += (uint32_t) v1x13;
            out[53] = v1x13;
          }
          if (2 < k) {
            const int8_t v2x13 = w2[13];
            ksum13 += (uint32_t) v2x13;
            out[54] = v2x13;
          }
          if (3 < k) {
            const int8_t v3x13 = w3[13];
            ksum13 += (uint32_t) v3x13;
            out[55] = v3x13;
          }
        }
        if (14 < n) {
          const int8_t v0x14 = w0[14];
          ksum14 += (uint32_t) v0x14;
          out[56] = v0x14;
          if (1 < k) {
            const int8_t v1x14 = w1[14];
            ksum14 += (uint32_t) v1x14;
            out[57] = v1x14;
          }
          if (2 < k) {
            const int8_t v2x14 = w2[14];
            ksum14 += (uint32_t) v2x14;
            out[58] = v2x14;
          }
          if (3 < k) {
            const int8_t v3x14 = w3[14];
            ksum14 += (uint32_t) v3x14;
            out[59] = v3x14;
          }
        }
        if (15 < n) {
          const int8_t v0x15 = w0[15];
          ksum15 += (uint32_t) v0x15;
          out[60] = v0x15;
          if (1 < k) {
            const int8_t v1x15 = w1[15];
            ksum15 += (uint32_t) v1x15;
            out[61] = v1x15;
          }
          if (2 < k) {
            const int8_t v2x15 = w2[15];
            ksum15 += (uint32_t) v2x15;
            out[62] = v2x15;
          }
          if (3 < k) {
            const int8_t v3x15 = w3[15];
            ksum15 += (uint32_t) v3x15;
            out[63] = v3x15;
          }
        }
        if (16 < n) {
          const int8_t v0x16 = w0[16];
          ksum16 += (uint32_t) v0x16;
          out[64] = v0x16;
          if (1 < k) {
            const int8_t v1x16 = w1[16];
            ksum16 += (uint32_t) v1x16;
            out[65] = v1x16;
          }
          if (2 < k) {
            const int8_t v2x16 = w2[16];
            ksum16 += (uint32_t) v2x16;
            out[66] = v2x16;
          }
          if (3 < k) {
            const int8_t v3x16 = w3[16];
            ksum16 += (uint32_t) v3x16;
            out[67] = v3x16;
          }
        }
        if (17 < n) {
          const int8_t v0x17 = w0[17];
          ksum17 += (uint32_t) v0x17;
          out[68] = v0x17;
          if (1 < k) {
            const int8_t v1x17 = w1[17];
            ksum17 += (uint32_t) v1x17;
            out[69] = v1x17;
          }
          if (2 < k) {
            const int8_t v2x17 = w2[17];
            ksum17 += (uint32_t) v2x17;
            out[70] = v2x17;
          }
          if (3 < k) {
            const int8_t v3x17 = w3[17];
            ksum17 += (uint32_t) v3x17;
            out[71] = v3x17;
          }
        }
        if (18 < n) {
          const int8_t v0x18 = w0[18];
          ksum18 += (uint32_t) v0x18;
          out[72] = v0x18;
          if (1 < k) {
            const int8_t v1x18 = w1[18];
            ksum18 += (uint32_t) v1x18;
            out[73] = v1x18;
          }
          if (2 < k) {
            const int8_t v2x18 = w2[18];
            ksum18 += (uint32_t) v2x18;
            out[74] = v2x18;
          }
          if (3 < k) {
            const int8_t v3x18 = w3[18];
            ksum18 += (uint32_t) v3x18;
            out[75] = v3x18;
          }
        }
        if (19 < n) {
          const int8_t v0x19 = w0[19];
          ksum19 += (uint32_t) v0x19;
          out[76] = v0x19;
          if (1 < k) {
            const int8_t v1x19 = w1[19];
            ksum19 += (uint32_t) v1x19;
            out[77] = v1x19;
          }
          if (2 < k) {
            const int8_t v2x19 = w2[19];
            ksum19 += (uint32_t) v2x19;
            out[78] = v2x19;
          }
          if (3 < k) {
            const int8_t v3x19 = w3[19];
            ksum19 += (uint32_t) v3x19;
            out[79] = v3x19;
          }
        }
        if (20 < n) {
          const int8_t v0x20 = w0[20];
          ksum20 += (uint32_t) v0x20;
          out[80] = v0x20;
          if (1 < k) {
            const int8_t v1x20 = w1[20];
            ksum20 += (uint32_t) v1x20;
            out[81] = v1x20;
          }
          if (2 < k) {
            const int8_t v2x20 = w2[20];
            ksum20 += (uint32_t) v2x20;
            out[82] = v2x20;
          }
          if (3 < k) {
            const int8_t v3x20 = w3[20];
            ksum20 += (uint32_t) v3x20;
            out[83] = v3x20;
          }
        }
        if (21 < n) {
          const int8_t v0x21 = w0[21];
          ksum21 += (uint32_t) v0x21;
          out[84] = v0x21;
          if (1 < k) {
            const int8_t v1x21 = w1[21];
            ksum21 += (uint32_t) v1x21;
            out[85] = v1x21;
          }
          if (2 < k) {
            const int8_t v2x21 = w2[21];
            ksum21 += (uint32_t) v2x21;
            out[86] = v2x21;
          }
          if (3 < k) {
            const int8_t v3x21 = w3[21];
            ksum21 += (uint32_t) v3x21;
            out[87] = v3x21;
          }
        }
        if (22 < n) {
          const int8_t v0x22 = w0[22];
          ksum22 += (uint32_t) v0x22;
          out[88] = v0x22;
          if (1 < k) {
            const int8_t v1x22 = w1[22];
            ksum22 += (uint32_t) v1x22;
            out[89] = v1x22;
          }
          if (2 < k) {
            const int8_t v2x22 = w2[22];
            ksum22 += (uint32_t) v2x22;
            out[90] = v2x22;
          }
          if (3 < k) {
            const int8_t v3x22 = w3[22];
            ksum22 += (uint32_t) v3x22;
            out[91] = v3x22;
          }
        }
        if (23 < n) {
          const int8_t v0x23 = w0[23];
          ksum23 += (uint32_t) v0x23;
          out[92] = v0x23;
          if (1 < k) {
            const int8_t v1x23 = w1[23];
            ksum23 += (uint32_t) v1x23;
            out[93] = v1x23;
          }
          if (2 < k) {
            const int8_t v2x23 = w2[23];
            ksum23 += (uint32_t) v2x23;
            out[94] = v2x23;
          }
          if (3 < k) {
            const int8_t v3x23 = w3[23];
            ksum23 += (uint32_t) v3x23;
            out[95] = v3x23;
          }
        }
        if (24 < n) {
          const int8_t v0x24 = w0[24];
          ksum24 += (uint32_t) v0x24;
          out[96] = v0x24;
          if (1 < k) {
            const int8_t v1x24 = w1[24];
            ksum24 += (uint32_t) v1x24;
            out[97] = v1x24;
          }
          if (2 < k) {
            const int8_t v2x24 = w2[24];
            ksum24 += (uint32_t) v2x24;
            out[98] = v2x24;
          }
          if (3 < k) {
            const int8_t v3x24 = w3[24];
            ksum24 += (uint32_t) v3x24;
            out[99] = v3x24;
          }
        }
        if (25 < n) {
          const int8_t v0x25 = w0[25];
          ksum25 += (uint32_t) v0x25;
          out[100] = v0x25;
          if (1 < k) {
            const int8_t v1x25 = w1[25];
            ksum25 += (uint32_t) v1x25;
            out[101] = v1x25;
          }
          if (2 < k) {
            const int8_t v2x25 = w2[25];
            ksum25 += (uint32_t) v2x25;
            out[102] = v2x25;
          }
          if (3 < k) {
            const int8_t v3x25 = w3[25];
            ksum25 += (uint32_t) v3x25;
            out[103] = v3x25;
          }
        }
        if (26 < n) {
          const int8_t v0x26 = w0[26];
          ksum26 += (uint32_t) v0x26;
          out[104] = v0x26;
          if (1 < k) {
            const int8_t v1x26 = w1[26];
            ksum26 += (uint32_t) v1x26;
            out[105] = v1x26;
          }
          if (2 < k) {
            const int8_t v2x26 = w2[26];
            ksum26 += (uint32_t) v2x26;
            out[106] = v2x26;
          }
          if (3 < k) {
            const int8_t v3x26 = w3[26];
            ksum26 += (uint32_t) v3x26;
            out[107] = v3x26;
          }
        }
        if (27 < n) {
          const int8_t v0x27 = w0[27];
          ksum27 += (uint32_t) v0x27;
          out[108] = v0x27;
          if (1 < k) {
            const int8_t v1x27 = w1[27];
            ksum27 += (uint32_t) v1x27;
            out[109] = v1x27;
          }
          if (2 < k) {
            const int8_t v2x27 = w2[27];
            ksum27 += (uint32_t) v2x27;
            out[110] = v2x27;
          }
          if (3 < k) {
            const int8_t v3x27 = w3[27];
            ksum27 += (uint32_t) v3x27;
            out[111] = v3x27;
          }
        }
        if (28 < n) {
          const int8_t v0x28 = w0[28];
          ksum28 += (uint32_t) v0x28;
          out[112] = v0x28;
          if (1 < k) {
            const int8_t v1x28 = w1[28];
            ksum28 += (uint32_t) v1x28;
            out[113] = v1x28;
          }
          if (2 < k) {
            const int8_t v2x28 = w2[28];
            ksum28 += (uint32_t) v2x28;
            out[114] = v2x28;
          }
          if (3 < k) {
            const int8_t v3x28 = w3[28];
            ksum28 += (uint32_t) v3x28;
            out[115] = v3x28;
          }
        }
        if (29 < n) {
          const int8_t v0x29 = w0[29];
          ksum29 += (uint32_t) v0x29;
          out[116] = v0x29;
          if (1 < k) {
            const int8_t v1x29 = w1[29];
            ksum29 += (uint32_t) v1x29;
            out[117] = v1x29;
          }
          if (2 < k) {
            const int8_t v2x29 = w2[29];
            ksum29 += (uint32_t) v2x29;
            out[118] = v2x29;
          }
          if (3 < k) {
            const int8_t v3x29 = w3[29];
            ksum29 += (uint32_t) v3x29;
            out[119] = v3x29;
          }
        }
        if (30 < n) {
          const int8_t v0x30 = w0[30];
          ksum30 += (uint32_t) v0x30;
          out[120] = v0x30;
          if (1 < k) {
            const int8_t v1x30 = w1[30];
            ksum30 += (uint32_t) v1x30;
            out[121] = v1x30;
          }
          if (2 < k) {
            const int8_t v2x30 = w2[30];
            ksum30 += (uint32_t) v2x30;
            out[122] = v2x30;
          }
          if (3 < k) {
            const int8_t v3x30 = w3[30];
            ksum30 += (uint32_t) v3x30;
            out[123] = v3x30;
          }
        }
        if (31 < n) {
          const int8_t v0x31 = w0[31];
          ksum31 += (uint32_t) v0x31;
          out[124] = v0x31;
          if (1 < k) {
            const int8_t v1x31 = w1[31];
            ksum31 += (uint32_t) v1x31;
            out[125] = v1x31;
          }
          if (2 < k) {
            const int8_t v2x31 = w2[31];
            ksum31 += (uint32_t) v2x31;
            out[126] = v2x31;
          }
          if (3 < k) {
            const int8_t v3x31 = w3[31];
            ksum31 += (uint32_t) v3x31;
            out[127] = v3x31;
          }
        }
        if (32 < n) {
          const int8_t v0x32 = w0[32];
          ksum32 += (uint32_t) v0x32;
          out[128] = v0x32;
          if (1 < k) {
            const int8_t v1x32 = w1[32];
            ksum32 += (uint32_t) v1x32;
            out[129] = v1x32;
          }
          if (2 < k) {
            const int8_t v2x32 = w2[32];
            ksum32 += (uint32_t) v2x32;
            out[130] = v2x32;
          }
          if (3 < k) {
            const int8_t v3x32 = w3[32];
            ksum32 += (uint32_t) v3x32;
            out[131] = v3x32;
          }
        }
        if (33 < n) {
          const int8_t v0x33 = w0[33];
          ksum33 += (uint32_t) v0x33;
          out[132] = v0x33;
          if (1 < k) {
            const int8_t v1x33 = w1[33];
            ksum33 += (uint32_t) v1x33;
            out[133] = v1x33;
          }
          if (2 < k) {
            const int8_t v2x33 = w2[33];
            ksum33 += (uint32_t) v2x33;
            out[134] = v2x33;
          }
          if (3 < k) {
            const int8_t v3x33 = w3[33];
            ksum33 += (uint32_t) v3x33;
            out[135] = v3x33;
          }
        }
        if (34 < n) {
          const int8_t v0x34 = w0[34];
          ksum34 += (uint32_t) v0x34;
          out[136] = v0x34;
          if (1 < k) {
            const int8_t v1x34 = w1[34];
            ksum34 += (uint32_t) v1x34;
            out[137] = v1x34;
          }
          if (2 < k) {
            const int8_t v2x34 = w2[34];
            ksum34 += (uint32_t) v2x34;
            out[138] = v2x34;
          }
          if (3 < k) {
            const int8_t v3x34 = w3[34];
            ksum34 += (uint32_t) v3x34;
            out[139] = v3x34;
          }
        }
        if (35 < n) {
          const int8_t v0x35 = w0[35];
          ksum35 += (uint32_t) v0x35;
          out[140] = v0x35;
          if (1 < k) {
            const int8_t v1x35 = w1[35];
            ksum35 += (uint32_t) v1x35;
            out[141] = v1x35;
          }
          if (2 < k) {
            const int8_t v2x35 = w2[35];
            ksum35 += (uint32_t) v2x35;
            out[142] = v2x35;
          }
          if (3 < k) {
            const int8_t v3x35 = w3[35];
            ksum35 += (uint32_t) v3x35;
            out[143] = v3x35;
          }
        }
        if (36 < n) {
          const int8_t v0x36 = w0[36];
          ksum36 += (uint32_t) v0x36;
          out[144] = v0x36;
          if (1 < k) {
            const int8_t v1x36 = w1[36];
            ksum36 += (uint32_t) v1x36;
            out[145] = v1x36;
          }
          if (2 < k) {
            const int8_t v2x36 = w2[36];
            ksum36 += (uint32_t) v2x36;
            out[146] = v2x36;
          }
          if (3 < k) {
            const int8_t v3x36 = w3[36];
            ksum36 += (uint32_t) v3x36;
            out[147] = v3x36;
          }
        }
        if (37 < n) {
          const int8_t v0x37 = w0[37];
          ksum37 += (uint32_t) v0x37;
          out[148] = v0x37;
          if (1 < k) {
            const int8_t v1x37 = w1[37];
            ksum37 += (uint32_t) v1x37;
            out[149] = v1x37;
          }
          if (2 < k) {
            const int8_t v2x37 = w2[37];
            ksum37 += (uint32_t) v2x37;
            out[150] = v2x37;
          }
          if (3 < k) {
            const int8_t v3x37 = w3[37];
            ksum37 += (uint32_t) v3x37;
            out[151] = v3x37;
          }
        }
        if (38 < n) {
          const int8_t v0x38 = w0[38];
          ksum38 += (uint32_t) v0x38;
          out[152] = v0x38;
          if (1 < k) {
            const int8_t v1x38 = w1[38];
            ksum38 += (uint32_t) v1x38;
            out[153] = v1x38;
          }
          if (2 < k) {
            const int8_t v2x38 = w2[38];
            ksum38 += (uint32_t) v2x38;
            out[154] = v2x38;
          }
          if (3 < k) {
            const int8_t v3x38 = w3[38];
            ksum38 += (uint32_t) v3x38;
            out[155] = v3x38;
          }
        }
        if (39 < n) {
          const int8_t v0x39 = w0[39];
          ksum39 += (uint32_t) v0x39;
          out[156] = v0x39;
          if (1 < k) {
            const int8_t v1x39 = w1[39];
            ksum39 += (uint32_t) v1x39;
            out[157] = v1x39;
          }
          if (2 < k) {
            const int8_t v2x39 = w2[39];
            ksum39 += (uint32_t) v2x39;
            out[158] = v2x39;
          }
          if (3 < k) {
            const int8_t v3x39 = w3[39];
            ksum39 += (uint32_t) v3x39;
            out[159] = v3x39;
          }
        }
        if (40 < n) {
          const int8_t v0x40 = w0[40];
          ksum40 += (uint32_t) v0x40;
          out[160] = v0x40;
          if (1 < k) {
            const int8_t v1x40 = w1[40];
            ksum40 += (uint32_t) v1x40;
            out[161] = v1x40;
          }
          if (2 < k) {
            const int8_t v2x40 = w2[40];
            ksum40 += (uint32_t) v2x40;
            out[162] = v2x40;
          }
          if (3 < k) {
            const int8_t v3x40 = w3[40];
            ksum40 += (uint32_t) v3x40;
            out[163] = v3x40;
          }
        }
        if (41 < n) {
          const int8_t v0x41 = w0[41];
          ksum41 += (uint32_t) v0x41;
          out[164] = v0x41;
          if (1 < k) {
            const int8_t v1x41 = w1[41];
            ksum41 += (uint32_t) v1x41;
            out[165] = v1x41;
          }
          if (2 < k) {
            const int8_t v2x41 = w2[41];
            ksum41 += (uint32_t) v2x41;
            out[166] = v2x41;
          }
          if (3 < k) {
            const int8_t v3x41 = w3[41];
            ksum41 += (uint32_t) v3x41;
            out[167] = v3x41;
          }
        }
        if (42 < n) {
          const int8_t v0x42 = w0[42];
          ksum42 += (uint32_t) v0x42;
          out[168] = v0x42;
          if (1 < k) {
            const int8_t v1x42 = w1[42];
            ksum42 += (uint32_t) v1x42;
            out[169] = v1x42;
          }
          if (2 < k) {
            const int8_t v2x42 = w2[42];
            ksum42 += (uint32_t) v2x42;
            out[170] = v2x42;
          }
          if (3 < k) {
            const int8_t v3x42 = w3[42];
            ksum42 += (uint32_t) v3x42;
            out[171] = v3x42;
          }
        }
        if (43 < n) {
          const int8_t v0x43 = w0[43];
          ksum43 += (uint32_t) v0x43;
          out[172] = v0x43;
          if (1 < k) {
            const int8_t v1x43 = w1[43];
            ksum43 += (uint32_t) v1x43;
            out[173] = v1x43;
          }
          if (2 < k) {
            const int8_t v2x43 = w2[43];
            ksum43 += (uint32_t) v2x43;
            out[174] = v2x43;
          }
          if (3 < k) {
            const int8_t v3x43 = w3[43];
            ksum43 += (uint32_t) v3x43;
            out[175] = v3x43;
          }
        }
        if (44 < n) {
          const int8_t v0x44 = w0[44];
          ksum44 += (uint32_t) v0x44;
          out[176] = v0x44;
          if (1 < k) {
            const int8_t v1x44 = w1[44];
            ksum44 += (uint32_t) v1x44;
            out[177] = v1x44;
          }
          if (2 < k) {
            const int8_t v2x44 = w2[44];
            ksum44 += (uint32_t) v2x44;
            out[178] = v2x44;
          }
          if (3 < k) {
            const int8_t v3x44 = w3[44];
            ksum44 += (uint32_t) v3x44;
            out[179] = v3x44;
          }
        }
        if (45 < n) {
          const int8_t v0x45 = w0[45];
          ksum45 += (uint32_t) v0x45;
          out[180] = v0x45;
          if (1 < k) {
            const int8_t v1x45 = w1[45];
            ksum45 += (uint32_t) v1x45;
            out[181] = v1x45;
          }
          if (2 < k) {
            const int8_t v2x45 = w2[45];
            ksum45 += (uint32_t) v2x45;
            out[182] = v2x45;
          }
          if (3 < k) {
            const int8_t v3x45 = w3[45];
            ksum45 += (uint32_t) v3x45;
            out[183] = v3x45;
          }
        }
        if (46 < n) {
          const int8_t v0x46 = w0[46];
          ksum46 += (uint32_t) v0x46;
          out[184] = v0x46;
          if (1 < k) {
            const int8_t v1x46 = w1[46];
            ksum46 += (uint32_t) v1x46;
            out[185] = v1x46;
          }
          if (2 < k) {
            const int8_t v2x46 = w2[46];
            ksum46 += (uint32_t) v2x46;
            out[186] = v2x46;
          }
          if (3 < k) {
            const int8_t v3x46 = w3[46];
            ksum46 += (uint32_t) v3x46;
            out[187] = v3x46;
          }
        }
        if (47 < n) {
          const int8_t v0x47 = w0[47];
          ksum47 += (uint32_t) v0x47;
          out[188] = v0x47;
          if (1 < k) {
            const int8_t v1x47 = w1[47];
            ksum47 += (uint32_t) v1x47;
            out[189] = v1x47;
          }
          if (2 < k) {
            const int8_t v2x47 = w2[47];
            ksum47 += (uint32_t) v2x47;
            out[190] = v2x47;
          }
          if (3 < k) {
            const int8_t v3x47 = w3[47];
            ksum47 += (uint32_t) v3x47;
            out[191] = v3x47;
          }
        }
        if (48 < n) {
          const int8_t v0x48 = w0[48];
          ksum48 += (uint32_t) v0x48;
          out[192] = v0x48;
          if (1 < k) {
            const int8_t v1x48 = w1[48];
            ksum48 += (uint32_t) v1x48;
            out[193] = v1x48;
          }
          if (2 < k) {
            const int8_t v2x48 = w2[48];
            ksum48 += (uint32_t) v2x48;
            out[194] = v2x48;
          }
          if (3 < k) {
            const int8_t v3x48 = w3[48];
            ksum48 += (uint32_t) v3x48;
            out[195] = v3x48;
          }
        }
        if (49 < n) {
          const int8_t v0x49 = w0[49];
          ksum49 += (uint32_t) v0x49;
          out[196] = v0x49;
          if (1 < k) {
            const int8_t v1x49 = w1[49];
            ksum49 += (uint32_t) v1x49;
            out[197] = v1x49;
          }
          if (2 < k) {
            const int8_t v2x49 = w2[49];
            ksum49 += (uint32_t) v2x49;
            out[198] = v2x49;
          }
          if (3 < k) {
            const int8_t v3x49 = w3[49];
            ksum49 += (uint32_t) v3x49;
            out[199] = v3x49;
          }
        }
        if (50 < n) {
          const int8_t v0x50 = w0[50];
          ksum50 += (uint32_t) v0x50;
          out[200] = v0x50;
          if (1 < k) {
            const int8_t v1x50 = w1[50];
            ksum50 += (uint32_t) v1x50;
            out[201] = v1x50;
          }
          if (2 < k) {
            const int8_t v2x50 = w2[50];
            ksum50 += (uint32_t) v2x50;
            out[202] = v2x50;
          }
          if (3 < k) {
            const int8_t v3x50 = w3[50];
            ksum50 += (uint32_t) v3x50;
            out[203] = v3x50;
          }
        }
        if (51 < n) {
          const int8_t v0x51 = w0[51];
          ksum51 += (uint32_t) v0x51;
          out[204] = v0x51;
          if (1 < k) {
            const int8_t v1x51 = w1[51];
            ksum51 += (uint32_t) v1x51;
            out[205] = v1x51;
          }
          if (2 < k) {
            const int8_t v2x51 = w2[51];
            ksum51 += (uint32_t) v2x51;
            out[206] = v2x51;
          }
          if (3 < k) {
            const int8_t v3x51 = w3[51];
            ksum51 += (uint32_t) v3x51;
            out[207] = v3x51;
          }
        }
        if (52 < n) {
          const int8_t v0x52 = w0[52];
          ksum52 += (uint32_t) v0x52;
          out[208] = v0x52;
          if (1 < k) {
            const int8_t v1x52 = w1[52];
            ksum52 += (uint32_t) v1x52;
            out[209] = v1x52;
          }
          if (2 < k) {
            const int8_t v2x52 = w2[52];
            ksum52 += (uint32_t) v2x52;
            out[210] = v2x52;
          }
          if (3 < k) {
            const int8_t v3x52 = w3[52];
            ksum52 += (uint32_t) v3x52;
            out[211] = v3x52;
          }
        }
        if (53 < n) {
          const int8_t v0x53 = w0[53];
          ksum53 += (uint32_t) v0x53;
          out[212] = v0x53;
          if (1 < k) {
            const int8_t v1x53 = w1[53];
            ksum53 += (uint32_t) v1x53;
            out[213] = v1x53;
          }
          if (2 < k) {
            const int8_t v2x53 = w2[53];
            ksum53 += (uint32_t) v2x53;
            out[214] = v2x53;
          }
          if (3 < k) {
            const int8_t v3x53 = w3[53];
            ksum53 += (uint32_t) v3x53;
            out[215] = v3x53;
          }
        }
        if (54 < n) {
          const int8_t v0x54 = w0[54];
          ksum54 += (uint32_t) v0x54;
          out[216] = v0x54;
          if (1 < k) {
            const int8_t v1x54 = w1[54];
            ksum54 += (uint32_t) v1x54;
            out[217] = v1x54;
          }
          if (2 < k) {
            const int8_t v2x54 = w2[54];
            ksum54 += (uint32_t) v2x54;
            out[218] = v2x54;
          }
          if (3 < k) {
            const int8_t v3x54 = w3[54];
            ksum54 += (uint32_t) v3x54;
            out[219] = v3x54;
          }
        }
        if (55 < n) {
          const int8_t v0x55 = w0[55];
          ksum55 += (uint32_t) v0x55;
          out[220] = v0x55;
          if (1 < k) {
            const int8_t v1x55 = w1[55];
            ksum55 += (uint32_t) v1x55;
            out[221] = v1x55;
          }
          if (2 < k) {
            const int8_t v2x55 = w2[55];
            ksum55 += (uint32_t) v2x55;
            out[222] = v2x55;
          }
          if (3 < k) {
            const int8_t v3x55 = w3[55];
            ksum55 += (uint32_t) v3x55;
            out[223] = v3x55;
          }
        }
        if (56 < n) {
          const int8_t v0x56 = w0[56];
          ksum56 += (uint32_t) v0x56;
          out[224] = v0x56;
          if (1 < k) {
            const int8_t v1x56 = w1[56];
            ksum56 += (uint32_t) v1x56;
            out[225] = v1x56;
          }
          if (2 < k) {
            const int8_t v2x56 = w2[56];
            ksum56 += (uint32_t) v2x56;
            out[226] = v2x56;
          }
          if (3 < k) {
            const int8_t v3x56 = w3[56];
            ksum56 += (uint32_t) v3x56;
            out[227] = v3x56;
          }
        }
        if (57 < n) {
          const int8_t v0x57 = w0[57];
          ksum57 += (uint32_t) v0x57;
          out[228] = v0x57;
          if (1 < k) {
            const int8_t v1x57 = w1[57];
            ksum57 += (uint32_t) v1x57;
            out[229] = v1x57;
          }
          if (2 < k) {
            const int8_t v2x57 = w2[57];
            ksum57 += (uint32_t) v2x57;
            out[230] = v2x57;
          }
          if (3 < k) {
            const int8_t v3x57 = w3[57];
            ksum57 += (uint32_t) v3x57;
            out[231] = v3x57;
          }
        }
        if (58 < n) {
          const int8_t v0x58 = w0[58];
          ksum58 += (uint32_t) v0x58;
          out[232] = v0x58;
          if (1 < k) {
            const int8_t v1x58 = w1[58];
            ksum58 += (uint32_t) v1x58;
            out[233] = v1x58;
          }
          if (2 < k) {
            const int8_t v2x58 = w2[58];
            ksum58 += (uint32_t) v2x58;
            out[234] = v2x58;
          }
          if (3 < k) {
            const int8_t v3x58 = w3[58];
            ksum58 += (uint32_t) v3x58;
            out[235] = v3x58;
          }
        }
        if (59 < n) {
          const int8_t v0x59 = w0[59];
          ksum59 += (uint32_t) v0x59;
          out[236] = v0x59;
          if (1 < k) {
            const int8_t v1x59 = w1[59];
            ksum59 += (uint32_t) v1x59;
            out[237] = v1x59;
          }
          if (2 < k) {
            const int8_t v2x59 = w2[59];
            ksum59 += (uint32_t) v2x59;
            out[238] = v2x59;
          }
          if (3 < k) {
            const int8_t v3x59 = w3[59];
            ksum59 += (uint32_t) v3x59;
            out[239] = v3x59;
          }
        }
        if (60 < n) {
          const int8_t v0x60 = w0[60];
          ksum60 += (uint32_t) v0x60;
          out[240] = v0x60;
          if (1 < k) {
            const int8_t v1x60 = w1[60];
            ksum60 += (uint32_t) v1x60;
            out[241] = v1x60;
          }
          if (2 < k) {
            const int8_t v2x60 = w2[60];
            ksum60 += (uint32_t) v2x60;
            out[242] = v2x60;
          }
          if (3 < k) {
            const int8_t v3x60 = w3[60];
            ksum60 += (uint32_t) v3x60;
            out[243] = v3x60;
          }
        }
        if (61 < n) {
          const int8_t v0x61 = w0[61];
          ksum61 += (uint32_t) v0x61;
          out[244] = v0x61;
          if (1 < k) {
            const int8_t v1x61 = w1[61];
            ksum61 += (uint32_t) v1x61;
            out[245] = v1x61;
          }
          if (2 < k) {
            const int8_t v2x61 = w2[61];
            ksum61 += (uint32_t) v2x61;
            out[246] = v2x61;
          }
          if (3 < k) {
            const int8_t v3x61 = w3[61];
            ksum61 += (uint32_t) v3x61;
            out[247] = v3x61;
          }
        }
        if (62 < n) {
          const int8_t v0x62 = w0[62];
          ksum62 += (uint32_t) v0x62;
          out[248] = v0x62;
          if (1 < k) {
            const int8_t v1x62 = w1[62];
            ksum62 += (uint32_t) v1x62;
            out[249] = v1x62;
          }
          if (2 < k) {
            const int8_t v2x62 = w2[62];
            ksum62 += (uint32_t) v2x62;
            out[250] = v2x62;
          }
          if (3 < k) {
            const int8_t v3x62 = w3[62];
            ksum62 += (uint32_t) v3x62;
            out[251] = v3x62;
          }
        }
        w0 += k * k_stride;
        w1 += k * k_stride;
        w2 += k * k_stride;
        w3 += k * k_stride;
        out += 256;
      }

      packed_b[0] -= ksum0 * izp;
      packed_b[1] -= ksum1 * izp;
      packed_b[2] -= ksum2 * izp;
      packed_b[3] -= ksum3 * izp;
      packed_b[4] -= ksum4 * izp;
      packed_b[5] -= ksum5 * izp;
      packed_b[6] -= ksum6 * izp;
      packed_b[7] -= ksum7 * izp;
      packed_b[8] -= ksum8 * izp;
      packed_b[9] -= ksum9 * izp;
      packed_b[10] -= ksum10 * izp;
      packed_b[11] -= ksum11 * izp;
      packed_b[12] -= ksum12 * izp;
      packed_b[13] -= ksum13 * izp;
      packed_b[14] -= ksum14 * izp;
      packed_b[15] -= ksum15 * izp;
      packed_b[16] -= ksum16 * izp;
      packed_b[17] -= ksum17 * izp;
      packed_b[18] -= ksum18 * izp;
      packed_b[19] -= ksum19 * izp;
      packed_b[20] -= ksum20 * izp;
      packed_b[21] -= ksum21 * izp;
      packed_b[22] -= ksum22 * izp;
      packed_b[23] -= ksum23 * izp;
      packed_b[24] -= ksum24 * izp;
      packed_b[25] -= ksum25 * izp;
      packed_b[26] -= ksum26 * izp;
      packed_b[27] -= ksum27 * izp;
      packed_b[28] -= ksum28 * izp;
      packed_b[29] -= ksum29 * izp;
      packed_b[30] -= ksum30 * izp;
      packed_b[31] -= ksum31 * izp;
      packed_b[32] -= ksum32 * izp;
      packed_b[33] -= ksum33 * izp;
      packed_b[34] -= ksum34 * izp;
      packed_b[35] -= ksum35 * izp;
      packed_b[36] -= ksum36 * izp;
      packed_b[37] -= ksum37 * izp;
      packed_b[38] -= ksum38 * izp;
      packed_b[39] -= ksum39 * izp;
      packed_b[40] -= ksum40 * izp;
      packed_b[41] -= ksum41 * izp;
      packed_b[42] -= ksum42 * izp;
      packed_b[43] -= ksum43 * izp;
      packed_b[44] -= ksum44 * izp;
      packed_b[45] -= ksum45 * izp;
      packed_b[46] -= ksum46 * izp;
      packed_b[47] -= ksum47 * izp;
      packed_b[48] -= ksum48 * izp;
      packed_b[49] -= ksum49 * izp;
      packed_b[50] -= ksum50 * izp;
      packed_b[51] -= ksum51 * izp;
      packed_b[52] -= ksum52 * izp;
      packed_b[53] -= ksum53 * izp;
      packed_b[54] -= ksum54 * izp;
      packed_b[55] -= ksum55 * izp;
      packed_b[56] -= ksum56 * izp;
      packed_b[57] -= ksum57 * izp;
      packed_b[58] -= ksum58 * izp;
      packed_b[59] -= ksum59 * izp;
      packed_b[60] -= ksum60 * izp;
      packed_b[61] -= ksum61 * izp;
      packed_b[62] -= ksum62 * izp;
      out = (int8_t*) ((uintptr_t) out + extra_bytes);
    }
    weights += nc * kc;
  } while (--g != 0);
}
