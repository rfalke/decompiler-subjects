
    .section    __TEXT,__text,regular,pure_instructions

    .globl    _full_write_with_str
    .p2align    2
_full_write_with_str:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    str q0, [x0]

    mov w0, wzr
    ret
    
    .globl    _full_store_with_byte_wise_st1
    .p2align    2
_full_store_with_byte_wise_st1:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.16b }, [x0]

    mov w0, wzr
    ret
    
    .globl    _full_store_with_8byte_wise_st1
    .p2align    2
_full_store_with_8byte_wise_st1:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.2d }, [x0]

    mov w0, wzr
    ret
    
    .globl    _half_store_with_8byte_wise_st1
    .p2align    2
_half_store_with_8byte_wise_st1:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.1d }, [x0]

    mov w0, wzr
    ret
    
    .globl    _full_store_2_regs_with_byte_wise_st1
    .p2align    2
_full_store_2_regs_with_byte_wise_st1:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.16b, v1.16b }, [x0]

    mov w0, wzr
    ret
    
    .globl    _full_store_4_regs_with_byte_wise_st1
    .p2align    2
_full_store_4_regs_with_byte_wise_st1:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.16b, v1.16b, v2.16b, v3.16b }, [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st1__one_byte_from_index_0
    .p2align    2
_indexed_st1__one_byte_from_index_0:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.b}[0], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st1__one_byte_from_index_3
    .p2align    2
_indexed_st1__one_byte_from_index_3:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.b}[3], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st1__8_bytes_from_low
    .p2align    2
_indexed_st1__8_bytes_from_low:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.d}[0], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st1__8_bytes_from_high
    .p2align    2
_indexed_st1__8_bytes_from_high:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st1 { v0.d}[1], [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_bytes_from_2_regs
    .p2align    2
_write_interleaved_bytes_from_2_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st2 {v0.16b, v1.16b}, [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_bytes_from_2_regs__half_
    .p2align    2
_write_interleaved_bytes_from_2_regs__half_:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st2 {v0.8b, v1.8b}, [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_8_bytes_from_2_regs
    .p2align    2
_write_interleaved_8_bytes_from_2_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st2 {v0.2d, v1.2d}, [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st2__write_2_bytes_from_2_regs
    .p2align    2
_indexed_st2__write_2_bytes_from_2_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st2 {v0.b, v1.b}[9], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st2__8_bytes_from_lows
    .p2align    2
_indexed_st2__8_bytes_from_lows:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st2 {v0.d, v1.d}[0], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st2__8_bytes_from_highs
    .p2align    2
_indexed_st2__8_bytes_from_highs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st2 {v0.d, v1.d}[1], [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_bytes_from_3_regs
    .p2align    2
_write_interleaved_bytes_from_3_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st3 {v0.16b, v1.16b, v2.16b}, [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_bytes_from_3_regs__half_
    .p2align    2
_write_interleaved_bytes_from_3_regs__half_:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st3 {v0.8b, v1.8b, v2.8b}, [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_8_bytes_from_3_regs
    .p2align    2
_write_interleaved_8_bytes_from_3_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st3 {v0.2d, v1.2d, v2.2d}, [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st3__write_3_bytes_from_3_regs
    .p2align    2
_indexed_st3__write_3_bytes_from_3_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st3 {v0.b, v1.b, v2.b}[9], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st3__8_bytes_from_lows
    .p2align    2
_indexed_st3__8_bytes_from_lows:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st3 {v0.d, v1.d, v2.d}[0], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st3__8_bytes_from_highs
    .p2align    2
_indexed_st3__8_bytes_from_highs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st3 {v0.d, v1.d, v2.d}[1], [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_bytes_from_4_regs
    .p2align    2
_write_interleaved_bytes_from_4_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st4 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_bytes_from_4_regs__half_
    .p2align    2
_write_interleaved_bytes_from_4_regs__half_:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st4 {v0.8b, v1.8b, v2.8b, v3.8b}, [x0]

    mov w0, wzr
    ret
    
    .globl    _write_interleaved_8_bytes_from_4_regs
    .p2align    2
_write_interleaved_8_bytes_from_4_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st4__write_4_bytes_from_4_regs
    .p2align    2
_indexed_st4__write_4_bytes_from_4_regs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st4 {v0.b, v1.b, v2.b, v3.b}[9], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st4__8_bytes_from_lows
    .p2align    2
_indexed_st4__8_bytes_from_lows:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st4 {v0.d, v1.d, v2.d, v3.d}[0], [x0]

    mov w0, wzr
    ret
    
    .globl    _indexed_st4__8_bytes_from_highs
    .p2align    2
_indexed_st4__8_bytes_from_highs:
; x0 write buffer
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    movz x3, #0x1110
    movk x3, #0x1312, lsl #16
    movk x3, #0x1514, lsl #32
    movk x3, #0x1716, lsl #48
    fmov    d0,x3

    movz x3, #0x1918
    movk x3, #0x1b1a, lsl #16
    movk x3, #0x1d1c, lsl #32
    movk x3, #0x1f1e, lsl #48
    fmov    v0.d[1],x3

    movi v4.16b, #16
    add v1.16b, v0.16b, v4.16b
    add v2.16b, v1.16b, v4.16b
    add v3.16b, v2.16b, v4.16b

    st4 {v0.d, v1.d, v2.d, v3.d}[1], [x0]

    mov w0, wzr
    ret
    