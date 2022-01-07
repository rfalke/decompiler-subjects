
    .section    __TEXT,__text,regular,pure_instructions


    .globl    _inst_sqadd
    .p2align    2
_inst_sqadd:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    sqadd   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_signed_output@GOTPAGE
    ldr     x2, [x2, _dest_signed_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_uqadd
    .p2align    2
_inst_uqadd:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    uqadd   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_sshl
    .p2align    2
_inst_sshl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    sshl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_srshl
    .p2align    2
_inst_srshl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    srshl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_sqshl
    .p2align    2
_inst_sqshl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    sqshl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_sqrshl
    .p2align    2
_inst_sqrshl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    sqrshl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_ushl
    .p2align    2
_inst_ushl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    ushl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_urshl
    .p2align    2
_inst_urshl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    urshl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_uqshl
    .p2align    2
_inst_uqshl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    uqshl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret

    .globl    _inst_uqrshl
    .p2align    2
_inst_uqrshl:

    fmov    d0,x0
    fmov    v0.d[1],xzr
    fmov    d1,x1
    fmov    v1.d[1],xzr

    MRS x4, FPSR
    BIC x4, x4, #(1<<27)
    MSR FPSR, x4

    uqrshl   v2.16B, v0.16B, v1.16b

    fmov    x0, d2
    adrp    x2, _dest_unsigned_output@GOTPAGE
    ldr     x2, [x2, _dest_unsigned_output@GOTPAGEOFF]
    strb    w0, [x2]

    adrp    x2, _dest_qc@GOTPAGE
    ldr     x2, [x2, _dest_qc@GOTPAGEOFF]
    mov     w0, wzr

    MRS x4, FPSR
    tbz x4, #27,1f
    movz     w0, #1
1:
    strb    w0, [x2]

    mov     w0, wzr
    ret
