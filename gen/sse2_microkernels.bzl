"""
Microkernel filenames lists for sse2.

Auto-generated file. Do not edit!
  Generator: tools/update-microkernels.py
"""

ALL_SSE2_MICROKERNEL_SRCS = [
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int16-u8.c",
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int16-u16.c",
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int16-u24.c",
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int16-u32.c",
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int32-u8.c",
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int32-u16.c",
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int32-u24.c",
    "src/f16-f32-vcvt/gen/f16-f32-vcvt-sse2-int32-u32.c",
    "src/f16-vunary/gen/f16-vabs-sse2-u8.c",
    "src/f16-vunary/gen/f16-vabs-sse2-u16.c",
    "src/f16-vunary/gen/f16-vneg-sse2-u8.c",
    "src/f16-vunary/gen/f16-vneg-sse2-u16.c",
    "src/f32-argmaxpool/f32-argmaxpool-4x-sse2-c4.c",
    "src/f32-argmaxpool/f32-argmaxpool-9p8x-sse2-c4.c",
    "src/f32-argmaxpool/f32-argmaxpool-9x-sse2-c4.c",
    "src/f32-f16-vcvt/gen/f32-f16-vcvt-sse2-u8.c",
    "src/f32-f16-vcvt/gen/f32-f16-vcvt-sse2-u16.c",
    "src/f32-f16-vcvt/gen/f32-f16-vcvt-sse2-u24.c",
    "src/f32-f16-vcvt/gen/f32-f16-vcvt-sse2-u32.c",
    "src/f32-gemminc/gen/f32-gemminc-1x8-minmax-sse2-dup.c",
    "src/f32-gemminc/gen/f32-gemminc-3x8-minmax-sse2-dup.c",
    "src/f32-gemminc/gen/f32-gemminc-4x8-minmax-sse2-dup.c",
    "src/f32-gemminc/gen/f32-gemminc-5x8-minmax-sse2-dup.c",
    "src/f32-gemminc/gen/f32-gemminc-6x8-minmax-sse2-dup.c",
    "src/f32-prelu/gen/f32-prelu-sse2-2x4.c",
    "src/f32-prelu/gen/f32-prelu-sse2-2x8.c",
    "src/f32-qs8-vcvt/gen/f32-qs8-vcvt-sse2-u8.c",
    "src/f32-qs8-vcvt/gen/f32-qs8-vcvt-sse2-u16.c",
    "src/f32-qs8-vcvt/gen/f32-qs8-vcvt-sse2-u24.c",
    "src/f32-qs8-vcvt/gen/f32-qs8-vcvt-sse2-u32.c",
    "src/f32-qu8-vcvt/gen/f32-qu8-vcvt-sse2-u8.c",
    "src/f32-qu8-vcvt/gen/f32-qu8-vcvt-sse2-u16.c",
    "src/f32-qu8-vcvt/gen/f32-qu8-vcvt-sse2-u24.c",
    "src/f32-qu8-vcvt/gen/f32-qu8-vcvt-sse2-u32.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u4.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u8-acc2.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u8.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u12-acc2.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u12-acc3.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u12.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u16-acc2.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u16-acc4.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u16.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u20-acc2.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u20-acc5.c",
    "src/f32-raddstoreexpminusmax/gen/f32-raddstoreexpminusmax-sse2-rr2-p5-u20.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-lut16-p3-u4.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-lut16-p3-u8.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-lut16-p3-u12.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-lut16-p3-u16.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-lut16-p3-u20.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-lut16-p3-u24.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-p6-u4.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-p6-u8.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-p6-u12.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-p6-u16.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-p6-u20.c",
    "src/f32-velu/gen/f32-velu-sse2-rr2-p6-u24.c",
    "src/f32-vlrelu/gen/f32-vlrelu-sse2-u4.c",
    "src/f32-vlrelu/gen/f32-vlrelu-sse2-u8.c",
    "src/f32-vrnd/gen/f32-vrndd-sse2-u4.c",
    "src/f32-vrnd/gen/f32-vrndd-sse2-u8.c",
    "src/f32-vrnd/gen/f32-vrndne-sse2-u4.c",
    "src/f32-vrnd/gen/f32-vrndne-sse2-u8.c",
    "src/f32-vrnd/gen/f32-vrndu-sse2-u4.c",
    "src/f32-vrnd/gen/f32-vrndu-sse2-u8.c",
    "src/f32-vrnd/gen/f32-vrndz-sse2-u4.c",
    "src/f32-vrnd/gen/f32-vrndz-sse2-u8.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-lut64-p2-div-u4.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-lut64-p2-div-u8.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-lut64-p2-div-u12.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-lut64-p2-div-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-lut64-p2-div-u20.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-lut64-p2-div-u24.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-p5-div-u4.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-p5-div-u8.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-p5-div-u12.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-p5-div-u16.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-p5-div-u20.c",
    "src/f32-vsigmoid/gen/f32-vsigmoid-sse2-rr2-p5-div-u24.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-lut8-p4h3ts-div-u4.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-lut8-p4h3ts-div-u8.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-lut8-p4h3ts-div-u12.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-lut8-p4h3ts-div-u16.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-div-u4.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-div-u8.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-div-u12.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-div-u16.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr1-u4.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr1-u8.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr1-u12.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr1-u16.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr2-u4.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr2-u8.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr2-u12.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-expm1minus-rr1-p6h5ts-nr2-u16.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-rational-9-6-div.c",
    "src/f32-vtanh/gen/f32-vtanh-sse2-rational-9-6-nr.c",
    "src/f32-vunary/gen/f32-vabs-sse2.c",
    "src/f32-vunary/gen/f32-vneg-sse2.c",
    "src/f32-vunary/gen/f32-vsqr-sse2.c",
    "src/math/f16-f32-cvt-sse2-int16.c",
    "src/math/f16-f32-cvt-sse2-int32.c",
    "src/math/f32-exp-sse2-rr2-lut64-p2.c",
    "src/math/f32-exp-sse2-rr2-p5.c",
    "src/math/f32-expm1minus-sse2-rr2-lut16-p3.c",
    "src/math/f32-expm1minus-sse2-rr2-p6.c",
    "src/math/f32-expminus-sse2-rr2-p5.c",
    "src/math/f32-f16-cvt-sse2.c",
    "src/math/f32-roundd-sse2-cvt.c",
    "src/math/f32-roundne-sse2-cvt.c",
    "src/math/f32-roundu-sse2-cvt.c",
    "src/math/f32-roundz-sse2-cvt.c",
    "src/math/f32-sigmoid-sse2-rr2-lut64-p2-div.c",
    "src/math/f32-sigmoid-sse2-rr2-lut64-p2-nr1.c",
    "src/math/f32-sigmoid-sse2-rr2-lut64-p2-nr2.c",
    "src/math/f32-sigmoid-sse2-rr2-p5-div.c",
    "src/math/f32-sigmoid-sse2-rr2-p5-nr1.c",
    "src/math/f32-sigmoid-sse2-rr2-p5-nr2.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr1-lut8-p4h3ps-div.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr1-p6h5ts-div.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr1-p6h5ts-nr1.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr1-p6h5ts-nr2.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr2-lut8-p4h2ts-nr1.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr2-lut8-p4h2ts-nr2.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr2-lut8-p4h3ps-nr1.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr2-lut8-p4h3ps-nr2.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr2-lut8-p4h3ts-nr1.c",
    "src/math/gen/f32-tanh-sse2-expm1minus-rr2-lut8-p4h3ts-nr2.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-1x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-2x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-2x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-3x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-3x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-4x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc4w-gemm/gen/qd8-f32-qc4w-gemm-4x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-1x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-1x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-2x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-2x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-3x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-3x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-4x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-gemm/gen/qd8-f32-qc8w-gemm-4x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-1x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-1x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-2x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-2x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-3x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-3x4c8-minmax-sse2-ld128.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-4x4c8-minmax-sse2-ld64.c",
    "src/qd8-f32-qc8w-igemm/gen/qd8-f32-qc8w-igemm-4x4c8-minmax-sse2-ld128.c",
    "src/qs8-dwconv/gen/qs8-dwconv-5f5m5l8c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-5f5m5l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-5f5m5l16c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-5f5m5l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-6f6m7l8c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-6f6m7l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-6f6m7l16c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-6f6m7l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-8f8m9l8c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-8f8m9l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-8f8m9l16c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-8f8m9l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-9p8c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-9p8c-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-9p16c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-9p16c-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-25p8c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-25p8c-minmax-fp32-sse2-mul16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-25p16c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-dwconv/gen/qs8-dwconv-25p16c-minmax-fp32-sse2-mul16.c",
    "src/qs8-f32-vcvt/gen/qs8-f32-vcvt-sse2-u8.c",
    "src/qs8-f32-vcvt/gen/qs8-f32-vcvt-sse2-u16.c",
    "src/qs8-f32-vcvt/gen/qs8-f32-vcvt-sse2-u24.c",
    "src/qs8-f32-vcvt/gen/qs8-f32-vcvt-sse2-u32.c",
    "src/qs8-gavgpool/gen/qs8-gavgpool-7p7x-minmax-fp32-sse2-c8.c",
    "src/qs8-gavgpool/gen/qs8-gavgpool-7p7x-minmax-fp32-sse2-c16.c",
    "src/qs8-gavgpool/gen/qs8-gavgpool-7p7x-minmax-fp32-sse2-c24.c",
    "src/qs8-gavgpool/gen/qs8-gavgpool-7x-minmax-fp32-sse2-c8.c",
    "src/qs8-gavgpool/gen/qs8-gavgpool-7x-minmax-fp32-sse2-c16.c",
    "src/qs8-gavgpool/gen/qs8-gavgpool-7x-minmax-fp32-sse2-c24.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-3p8c-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-5f5m5l8c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-5f5m5l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-5f5m5l16c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-5f5m5l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-6f6m7l8c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-6f6m7l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-6f6m7l16c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-6f6m7l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-8f8m9l8c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-8f8m9l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-8f8m9l16c8s8r-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-8f8m9l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-9p8c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-9p8c-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-9p16c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-9p16c-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-25p8c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-25p8c-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-25p16c-minmax-fp32-sse2-mul16-add16.c",
    "src/qs8-qc8w-dwconv/gen/qs8-qc8w-dwconv-25p16c-minmax-fp32-sse2-mul16.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x4c8-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-1x4c8-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x4c8-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-2x4c8-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-3x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-3x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-3x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-3x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-3x4c8-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-3x4c8-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-gemm/gen/qs8-qc8w-gemm-4x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x4c8-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-1x4c8-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x4c8-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-2x4c8-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-3x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-3x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-3x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-3x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-3x4c8-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-3x4c8-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x4c2-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x4c2-minmax-fp32-sse2-ld128.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qs8-qc8w-igemm/gen/qs8-qc8w-igemm-4x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qs8-requantization/qs8-requantization-fp32-sse2.c",
    "src/qs8-requantization/qs8-requantization-gemmlowp-sse2.c",
    "src/qs8-requantization/qs8-requantization-rndna-sse2.c",
    "src/qs8-vadd/gen/qs8-vadd-minmax-sse2-mul16-ld64-u8.c",
    "src/qs8-vadd/gen/qs8-vadd-minmax-sse2-mul16-ld64-u16.c",
    "src/qs8-vadd/gen/qs8-vadd-minmax-sse2-mul16-ld64-u24.c",
    "src/qs8-vadd/gen/qs8-vadd-minmax-sse2-mul16-ld64-u32.c",
    "src/qs8-vaddc/gen/qs8-vaddc-minmax-sse2-mul16-ld64-u8.c",
    "src/qs8-vaddc/gen/qs8-vaddc-minmax-sse2-mul16-ld64-u16.c",
    "src/qs8-vaddc/gen/qs8-vaddc-minmax-sse2-mul16-ld64-u24.c",
    "src/qs8-vaddc/gen/qs8-vaddc-minmax-sse2-mul16-ld64-u32.c",
    "src/qs8-vcvt/gen/qs8-vcvt-sse2-u16.c",
    "src/qs8-vcvt/gen/qs8-vcvt-sse2-u32.c",
    "src/qs8-vhswish/gen/qs8-vhswish-sse2-u16.c",
    "src/qs8-vhswish/gen/qs8-vhswish-sse2-u32.c",
    "src/qs8-vlrelu/gen/qs8-vlrelu-sse2-u16.c",
    "src/qs8-vlrelu/gen/qs8-vlrelu-sse2-u32.c",
    "src/qs8-vmul/gen/qs8-vmul-minmax-fp32-sse2-mul16-ld64-u8.c",
    "src/qs8-vmul/gen/qs8-vmul-minmax-fp32-sse2-mul16-ld64-u16.c",
    "src/qs8-vmulc/gen/qs8-vmulc-minmax-fp32-sse2-mul16-ld64-u8.c",
    "src/qs8-vmulc/gen/qs8-vmulc-minmax-fp32-sse2-mul16-ld64-u16.c",
    "src/qs16-qs8-vcvt/gen/qs16-qs8-vcvt-sse2-u4.c",
    "src/qs16-qs8-vcvt/gen/qs16-qs8-vcvt-sse2-u8.c",
    "src/qs16-qs8-vcvt/gen/qs16-qs8-vcvt-sse2-u16.c",
    "src/qu8-avgpool/qu8-avgpool-9p8x-minmax-fp32-sse2-c8.c",
    "src/qu8-avgpool/qu8-avgpool-9x-minmax-fp32-sse2-c8.c",
    "src/qu8-dwconv/gen/qu8-dwconv-5f5m5l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-5f5m5l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-6f6m7l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-6f6m7l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-8f8m9l8c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-8f8m9l16c8s8r-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-9p8c-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-9p16c-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-25p8c-minmax-fp32-sse2-mul16.c",
    "src/qu8-dwconv/gen/qu8-dwconv-25p16c-minmax-fp32-sse2-mul16.c",
    "src/qu8-f32-vcvt/gen/qu8-f32-vcvt-sse2-u8.c",
    "src/qu8-f32-vcvt/gen/qu8-f32-vcvt-sse2-u16.c",
    "src/qu8-f32-vcvt/gen/qu8-f32-vcvt-sse2-u24.c",
    "src/qu8-f32-vcvt/gen/qu8-f32-vcvt-sse2-u32.c",
    "src/qu8-gavgpool/gen/qu8-gavgpool-7p7x-minmax-fp32-sse2-c8.c",
    "src/qu8-gavgpool/gen/qu8-gavgpool-7p7x-minmax-fp32-sse2-c16.c",
    "src/qu8-gavgpool/gen/qu8-gavgpool-7p7x-minmax-fp32-sse2-c24.c",
    "src/qu8-gavgpool/gen/qu8-gavgpool-7x-minmax-fp32-sse2-c8.c",
    "src/qu8-gavgpool/gen/qu8-gavgpool-7x-minmax-fp32-sse2-c16.c",
    "src/qu8-gavgpool/gen/qu8-gavgpool-7x-minmax-fp32-sse2-c24.c",
    "src/qu8-gemm/gen/qu8-gemm-1x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-1x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-1x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-1x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-1x4c8-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-1x4c8-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-2x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-2x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-2x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-2x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-2x4c8-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-2x4c8-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-3x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-3x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-3x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-3x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-3x4c8-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-3x4c8-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-4x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-4x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-gemm/gen/qu8-gemm-4x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-gemm/gen/qu8-gemm-4x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-1x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-1x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-1x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-1x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-1x4c8-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-1x4c8-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-2x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-2x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-2x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-2x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-2x4c8-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-2x4c8-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-3x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-3x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-3x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-3x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-3x4c8-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-3x4c8-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-4x4c2-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-4x4c2-minmax-fp32-sse2-ld128.c",
    "src/qu8-igemm/gen/qu8-igemm-4x4c2s4-minmax-fp32-sse2-ld64.c",
    "src/qu8-igemm/gen/qu8-igemm-4x4c2s4-minmax-fp32-sse2-ld128.c",
    "src/qu8-requantization/qu8-requantization-fp32-sse2.c",
    "src/qu8-requantization/qu8-requantization-gemmlowp-sse2.c",
    "src/qu8-requantization/qu8-requantization-rndna-sse2.c",
    "src/qu8-vadd/gen/qu8-vadd-minmax-sse2-mul16-ld64-u8.c",
    "src/qu8-vadd/gen/qu8-vadd-minmax-sse2-mul16-ld64-u16.c",
    "src/qu8-vaddc/gen/qu8-vaddc-minmax-sse2-mul16-ld64-u8.c",
    "src/qu8-vaddc/gen/qu8-vaddc-minmax-sse2-mul16-ld64-u16.c",
    "src/qu8-vcvt/gen/qu8-vcvt-sse2-u16.c",
    "src/qu8-vcvt/gen/qu8-vcvt-sse2-u32.c",
    "src/qu8-vhswish/gen/qu8-vhswish-sse2-u16.c",
    "src/qu8-vhswish/gen/qu8-vhswish-sse2-u32.c",
    "src/qu8-vlrelu/gen/qu8-vlrelu-sse2-u16.c",
    "src/qu8-vlrelu/gen/qu8-vlrelu-sse2-u32.c",
    "src/qu8-vmul/gen/qu8-vmul-minmax-fp32-sse2-mul16-ld64-u8.c",
    "src/qu8-vmul/gen/qu8-vmul-minmax-fp32-sse2-mul16-ld64-u16.c",
    "src/qu8-vmulc/gen/qu8-vmulc-minmax-fp32-sse2-mul16-ld64-u8.c",
    "src/qu8-vmulc/gen/qu8-vmulc-minmax-fp32-sse2-mul16-ld64-u16.c",
    "src/s8-ibilinear/gen/s8-ibilinear-sse2-c8.c",
    "src/s8-ibilinear/gen/s8-ibilinear-sse2-c16.c",
    "src/s8-maxpool/s8-maxpool-9p8x-minmax-sse2-c16.c",
    "src/s8-vclamp/s8-vclamp-sse2-u64.c",
    "src/u8-ibilinear/gen/u8-ibilinear-sse2-c8.c",
    "src/u8-ibilinear/gen/u8-ibilinear-sse2-c16.c",
    "src/u8-maxpool/u8-maxpool-9p8x-minmax-sse2-c16.c",
    "src/u8-rmax/u8-rmax-sse2-u16.c",
    "src/u8-vclamp/u8-vclamp-sse2-u64.c",
    "src/x8-transposec/gen/x8-transposec-16x16-reuse-mov-sse2.c",
    "src/x8-transposec/gen/x8-transposec-16x16-reuse-switch-sse2.c",
    "src/x8-zip/x8-zip-x2-sse2.c",
    "src/x8-zip/x8-zip-x3-sse2.c",
    "src/x8-zip/x8-zip-x4-sse2.c",
    "src/x8-zip/x8-zip-xm-sse2.c",
    "src/x16-transposec/gen/x16-transposec-8x8-multi-mov-sse2.c",
    "src/x16-transposec/gen/x16-transposec-8x8-multi-switch-sse2.c",
    "src/x16-transposec/gen/x16-transposec-8x8-reuse-mov-sse2.c",
    "src/x16-transposec/gen/x16-transposec-8x8-reuse-multi-sse2.c",
    "src/x16-transposec/gen/x16-transposec-8x8-reuse-switch-sse2.c",
    "src/x16-transposec/x16-transposec-4x8-sse2.c",
    "src/x32-packw/gen/x32-packw-x2c4-gemm-goi-sse2-u4-prfm.c",
    "src/x32-packw/gen/x32-packw-x2c4-gemm-goi-sse2-u4.c",
    "src/x32-packw/gen/x32-packw-x8-gemm-goi-sse2-u4-prfm.c",
    "src/x32-packw/gen/x32-packw-x8-gemm-goi-sse2-u4.c",
    "src/x32-packw/gen/x32-packw-x8-gemm-goi-sse2-u8-prfm.c",
    "src/x32-packw/gen/x32-packw-x8-gemm-goi-sse2-u8.c",
    "src/x32-packw/gen/x32-packw-x8s4-gemm-goi-sse2-u4-prfm.c",
    "src/x32-packw/gen/x32-packw-x8s4-gemm-goi-sse2-u4.c",
    "src/x32-packw/gen/x32-packw-x8s4-gemm-goi-sse2-u8-prfm.c",
    "src/x32-packw/gen/x32-packw-x8s4-gemm-goi-sse2-u8.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-goi-sse2-u4-prfm.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-goi-sse2-u4.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-goi-sse2-u8-prfm.c",
    "src/x32-packw/gen/x32-packw-x16-gemm-goi-sse2-u8.c",
    "src/x32-packw/gen/x32-packw-x16s4-gemm-goi-sse2-u4-prfm.c",
    "src/x32-packw/gen/x32-packw-x16s4-gemm-goi-sse2-u4.c",
    "src/x32-packw/gen/x32-packw-x16s4-gemm-goi-sse2-u8-prfm.c",
    "src/x32-packw/gen/x32-packw-x16s4-gemm-goi-sse2-u8.c",
    "src/x32-transposec/gen/x32-transposec-4x4-multi-mov-sse2.c",
    "src/x32-transposec/gen/x32-transposec-4x4-multi-multi-sse2.c",
    "src/x32-transposec/gen/x32-transposec-4x4-multi-switch-sse2.c",
    "src/x32-transposec/gen/x32-transposec-4x4-reuse-mov-sse2.c",
    "src/x32-transposec/gen/x32-transposec-4x4-reuse-multi-sse2.c",
    "src/x32-transposec/gen/x32-transposec-4x4-reuse-switch-sse2.c",
    "src/x32-unpool/x32-unpool-sse2.c",
    "src/x32-zip/x32-zip-x2-sse2.c",
    "src/x32-zip/x32-zip-x3-sse2.c",
    "src/x32-zip/x32-zip-x4-sse2.c",
    "src/x32-zip/x32-zip-xm-sse2.c",
    "src/x64-transposec/gen/x64-transposec-2x2-multi-mov-sse2.c",
    "src/x64-transposec/gen/x64-transposec-2x2-multi-multi-sse2.c",
    "src/x64-transposec/gen/x64-transposec-2x2-multi-switch-sse2.c",
    "src/x64-transposec/gen/x64-transposec-2x2-reuse-mov-sse2.c",
    "src/x64-transposec/gen/x64-transposec-2x2-reuse-multi-sse2.c",
    "src/x64-transposec/gen/x64-transposec-2x2-reuse-switch-sse2.c",
    "src/xx-fill/xx-fill-sse2-u64.c",
    "src/xx-pad/xx-pad-p16-sse2-u16.c",
]
