
    .section    __TEXT,__text,regular,pure_instructions

    .globl    _full_load_with_ldr
    .p2align    2
_full_load_with_ldr:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ldr q0, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _full_load_with_byte_wise_ld1
    .p2align    2
_full_load_with_byte_wise_ld1:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.16b }, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _full_load_with_8byte_wise_ld1
    .p2align    2
_full_load_with_8byte_wise_ld1:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.2d }, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _half_load_with_8byte_wise_ld1
    .p2align    2
_half_load_with_8byte_wise_ld1:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.1d }, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _full_load_2_regs_with_byte_wise_ld1
    .p2align    2
_full_load_2_regs_with_byte_wise_ld1:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.16b, v1.16b }, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _full_load_4_regs_with_byte_wise_ld1
    .p2align    2
_full_load_4_regs_with_byte_wise_ld1:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.16b, v1.16b, v2.16b, v3.16b }, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld1__one_byte_at_index_0
    .p2align    2
_indexed_ld1__one_byte_at_index_0:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.b}[0], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld1__one_byte_at_index_3
    .p2align    2
_indexed_ld1__one_byte_at_index_3:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.b}[3], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld1__8_bytes_to_low
    .p2align    2
_indexed_ld1__8_bytes_to_low:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.d}[0], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld1__8_bytes_to_high
    .p2align    2
_indexed_ld1__8_bytes_to_high:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1 { v0.d}[1], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld1__repeat_first_byte_half
    .p2align    2
_repeating_ld1__repeat_first_byte_half:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1r {v0.8b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld1__repeat_first_byte_full
    .p2align    2
_repeating_ld1__repeat_first_byte_full:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1r {v0.16b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld1__load_first_8_bytes_into_low
    .p2align    2
_repeating_ld1__load_first_8_bytes_into_low:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1r {v0.1d}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld1__repeat_8_bytes_to_high
    .p2align    2
_repeating_ld1__repeat_8_bytes_to_high:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld1r {v0.2d}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld2_spread_bytes_to_2_regs
    .p2align    2
_ld2_spread_bytes_to_2_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2 {v0.16b, v1.16b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld2_spread_bytes_to_2_regs__half_
    .p2align    2
_ld2_spread_bytes_to_2_regs__half_:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2 {v0.8b, v1.8b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld2_spread_8_bytes_items_to_2_regs
    .p2align    2
_ld2_spread_8_bytes_items_to_2_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2 {v0.2d, v1.2d}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld2__first_2_bytes_to_2_regs
    .p2align    2
_indexed_ld2__first_2_bytes_to_2_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2 {v0.b, v1.b}[9], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld2__8_bytes_into_lows
    .p2align    2
_indexed_ld2__8_bytes_into_lows:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2 {v0.d, v1.d}[0], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld2__8_bytes_to_highs
    .p2align    2
_indexed_ld2__8_bytes_to_highs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2 {v0.d, v1.d}[1], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld2__first_bytes_full
    .p2align    2
_repeating_ld2__first_bytes_full:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2r {v0.16b, v1.16b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld2__2_bytes_half
    .p2align    2
_repeating_ld2__2_bytes_half:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld2r {v0.4h, v1.4h}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld3_spread_bytes_to_3_regs
    .p2align    2
_ld3_spread_bytes_to_3_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3 {v0.16b, v1.16b, v2.16b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld3_spread_bytes_to_3_regs__half_
    .p2align    2
_ld3_spread_bytes_to_3_regs__half_:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3 {v0.8b, v1.8b, v2.8b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld3_spread_8_bytes_items_to_3_regs
    .p2align    2
_ld3_spread_8_bytes_items_to_3_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3 {v0.2d, v1.2d, v2.2d}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld3__first_2_bytes_to_3_regs
    .p2align    2
_indexed_ld3__first_2_bytes_to_3_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3 {v0.b, v1.b, v2.b}[9], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld3__8_bytes_into_lows
    .p2align    2
_indexed_ld3__8_bytes_into_lows:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3 {v0.d, v1.d, v2.d}[0], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld3__8_bytes_to_highs
    .p2align    2
_indexed_ld3__8_bytes_to_highs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3 {v0.d, v1.d, v2.d}[1], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld3__first_bytes_full
    .p2align    2
_repeating_ld3__first_bytes_full:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3r {v0.16b, v1.16b, v2.16b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld3__2_bytes_half
    .p2align    2
_repeating_ld3__2_bytes_half:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld3r {v0.4h, v1.4h, v2.4h}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld4_spread_bytes_to_4_regs
    .p2align    2
_ld4_spread_bytes_to_4_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld4_spread_bytes_to_4_regs__half_
    .p2align    2
_ld4_spread_bytes_to_4_regs__half_:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4 {v0.8b, v1.8b, v2.8b, v3.8b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _ld4_spread_8_bytes_items_to_4_regs
    .p2align    2
_ld4_spread_8_bytes_items_to_4_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld4__first_2_bytes_to_4_regs
    .p2align    2
_indexed_ld4__first_2_bytes_to_4_regs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4 {v0.b, v1.b, v2.b, v3.b}[9], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld4__8_bytes_into_lows
    .p2align    2
_indexed_ld4__8_bytes_into_lows:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4 {v0.d, v1.d, v2.d, v3.d}[0], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _indexed_ld4__8_bytes_to_highs
    .p2align    2
_indexed_ld4__8_bytes_to_highs:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4 {v0.d, v1.d, v2.d, v3.d}[1], [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld4__first_bytes_full
    .p2align    2
_repeating_ld4__first_bytes_full:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4r {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    
    .globl    _repeating_ld4__2_bytes_half
    .p2align    2
_repeating_ld4__2_bytes_half:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    ld4r {v0.4h, v1.4h, v2.4h, v3.4h}, [x0]

; write v0
    fmov    x0, v0.d[1]
    str    x0, [x1]

    fmov    x0, d0
    str    x0, [x2]

; write v1
    fmov    x0, v1.d[1]
    str    x0, [x1, #8]

    fmov    x0, d1
    str    x0, [x2, #8]

; write v2
    fmov    x0, v2.d[1]
    str    x0, [x1, #16]

    fmov    x0, d2
    str    x0, [x2, #16]

; write v3
    fmov    x0, v3.d[1]
    str    x0, [x1, #24]

    fmov    x0, d3
    str    x0, [x2, #24]

    mov     w0, wzr
    ret
    