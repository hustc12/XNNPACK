// Copyright 2019 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.
//
// Auto-generated file. Do not edit!
//   Microkernel: f32-vminc
//   Generator: tools/generate-vbinary-test.py


#include "src/xnnpack/microparams-init.h"
#include "src/xnnpack/vbinary.h"
#include "test/vbinary-microkernel-tester.h"

#define XNN_UKERNEL_WITH_PARAMS(arch_flags, ukernel, batch_tile, vector_tile, datatype, params_type, init_params)                             \
XNN_TEST_BINARY_BATCH_EQ(ukernel, arch_flags, batch_tile, true, datatype, ukernel, VBinaryMicrokernelTester::OpType::Min, init_params);       \
XNN_TEST_BINARY_BATCH_DIV(ukernel, arch_flags, batch_tile, true, datatype, ukernel, VBinaryMicrokernelTester::OpType::Min, init_params);      \
XNN_TEST_BINARY_BATCH_LT(ukernel, arch_flags, batch_tile, true, datatype, ukernel, VBinaryMicrokernelTester::OpType::Min, init_params);       \
XNN_TEST_BINARY_BATCH_GT(ukernel, arch_flags, batch_tile, true, datatype, ukernel, VBinaryMicrokernelTester::OpType::Min, init_params);       \
                                                                                                                                              \
XNN_TEST_BINARY_INPLACE_A(ukernel, arch_flags, batch_tile, true, datatype, ukernel, VBinaryMicrokernelTester::OpType::Min, init_params);      \
XNN_TEST_BINARY_INPLACE_B(ukernel, arch_flags, batch_tile, true, datatype, ukernel, VBinaryMicrokernelTester::OpType::Min, init_params);      \
XNN_TEST_BINARY_INPLACE_A_AND_B(ukernel, arch_flags, batch_tile, true, datatype, ukernel, VBinaryMicrokernelTester::OpType::Min, init_params);
#include "src/f32-vbinary/f32-vminc.h"
#undef XNN_UKERNEL_WITH_PARAMS
