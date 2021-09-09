#!/usr/bin/env python3

asm = open("source_asm.s", "w")
asm.write('''
    .section    __TEXT,__text,regular,pure_instructions
''')
cdecl = open("source_decl.inc", "w")
cmain = open("source_main.inc", "w")

instrs = {
    "ldr q0, [x0]": "full load with ldr",

    "ld1 { v0.16b }, [x0]": "full load with byte-wise ld1",
    "ld1 { v0.2d }, [x0]": "full load with 8byte-wise ld1",
    "ld1 { v0.1d }, [x0]": "half load with 8byte-wise ld1",
    "ld1 { v0.16b, v1.16b }, [x0]": "full load 2 regs with byte-wise ld1",
    "ld1 { v0.16b, v1.16b, v2.16b, v3.16b }, [x0]": "full load 4 regs with byte-wise ld1",

    "ld1 { v0.b}[0], [x0]": "indexed ld1: one byte at index 0",
    "ld1 { v0.b}[3], [x0]": "indexed ld1: one byte at index 3",
    "ld1 { v0.d}[0], [x0]": "indexed ld1: 8 bytes to low",
    "ld1 { v0.d}[1], [x0]": "indexed ld1: 8 bytes to high",

    "ld1r {v0.8b}, [x0]": "repeating ld1: repeat first byte half",
    "ld1r {v0.16b}, [x0]": "repeating ld1: repeat first byte full",
    "ld1r {v0.1d}, [x0]": "repeating ld1: load first 8 bytes into low",
    "ld1r {v0.2d}, [x0]": "repeating ld1: repeat 8 bytes to high",

    "ld2 {v0.16b, v1.16b}, [x0]": "ld2 spread bytes to 2 regs",
    "ld2 {v0.8b, v1.8b}, [x0]": "ld2 spread bytes to 2 regs (half)",
    "ld2 {v0.2d, v1.2d}, [x0]": "ld2 spread 8-bytes-items to 2 regs",

    "ld2 {v0.b, v1.b}[9], [x0]": "indexed ld2: first 2 bytes to 2 regs",
    "ld2 {v0.d, v1.d}[0], [x0]": "indexed ld2: 8 bytes into lows",
    "ld2 {v0.d, v1.d}[1], [x0]": "indexed ld2: 8 bytes to highs",

    "ld2r {v0.16b, v1.16b}, [x0]": "repeating ld2: first bytes full",
    "ld2r {v0.4h, v1.4h}, [x0]": "repeating ld2: 2 bytes half",

    "ld3 {v0.16b, v1.16b, v2.16b}, [x0]": "ld3 spread bytes to 3 regs",
    "ld3 {v0.8b, v1.8b, v2.8b}, [x0]": "ld3 spread bytes to 3 regs (half)",
    "ld3 {v0.2d, v1.2d, v2.2d}, [x0]": "ld3 spread 8-bytes-items to 3 regs",

    "ld3 {v0.b, v1.b, v2.b}[9], [x0]": "indexed ld3: first 2 bytes to 3 regs",
    "ld3 {v0.d, v1.d, v2.d}[0], [x0]": "indexed ld3: 8 bytes into lows",
    "ld3 {v0.d, v1.d, v2.d}[1], [x0]": "indexed ld3: 8 bytes to highs",

    "ld3r {v0.16b, v1.16b, v2.16b}, [x0]": "repeating ld3: first bytes full",
    "ld3r {v0.4h, v1.4h, v2.4h}, [x0]": "repeating ld3: 2 bytes half",

    "ld4 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]": "ld4 spread bytes to 4 regs",
    "ld4 {v0.8b, v1.8b, v2.8b, v3.8b}, [x0]": "ld4 spread bytes to 4 regs (half)",
    "ld4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x0]": "ld4 spread 8-bytes-items to 4 regs",

    "ld4 {v0.b, v1.b, v2.b, v3.b}[9], [x0]": "indexed ld4: first 2 bytes to 4 regs",
    "ld4 {v0.d, v1.d, v2.d, v3.d}[0], [x0]": "indexed ld4: 8 bytes into lows",
    "ld4 {v0.d, v1.d, v2.d, v3.d}[1], [x0]": "indexed ld4: 8 bytes to highs",

    "ld4r {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]": "repeating ld4: first bytes full",
    "ld4r {v0.4h, v1.4h, v2.4h, v3.4h}, [x0]": "repeating ld4: 2 bytes half",
}

for instr, descr in instrs.items():
    func_name = descr.replace(" ", "_").replace("-", "_").replace(":", "_").replace("(", "_").replace(")", "_")
    instr_pp = instr.replace("[x0]", "buffer")
    asm.write('''
    .globl    _%s
    .p2align    2
_%s:
; x0 read buffer
; x1 high
; x2 low
    cmeq    v0.16b, v0.16b, v0.16b
    cmeq    v1.16b, v1.16b, v1.16b
    cmeq    v2.16b, v2.16b, v2.16b
    cmeq    v3.16b, v3.16b, v3.16b

    %s

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
    ''' % (func_name, func_name, instr))
    cdecl.write('''
extern void %s(void *src, long *high, long *low);
    ''' % func_name)
    cmain.write('''
  prepare();
  %s((void *)buffer, high, low);
  dump("%s", "%s");

''' % (func_name, instr_pp, descr))
asm.close()
