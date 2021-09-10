#!/usr/bin/env python3

asm = open("source_asm.s", "w")
asm.write('''
    .section    __TEXT,__text,regular,pure_instructions
''')
cdecl = open("source_decl.inc", "w")
cmain = open("source_main.inc", "w")

instrs = {
    "str q0, [x0]": "full write with str",

    "st1 { v0.16b }, [x0]": "full store with byte-wise st1",
    "st1 { v0.2d }, [x0]": "full store with 8byte-wise st1",
    "st1 { v0.1d }, [x0]": "half store with 8byte-wise st1",
    "st1 { v0.16b, v1.16b }, [x0]": "full store 2 regs with byte-wise st1",
    "st1 { v0.16b, v1.16b, v2.16b, v3.16b }, [x0]": "full store 4 regs with byte-wise st1",

    "st1 { v0.b}[0], [x0]": "indexed st1: one byte from index 0",
    "st1 { v0.b}[3], [x0]": "indexed st1: one byte from index 3",
    "st1 { v0.d}[0], [x0]": "indexed st1: 8 bytes from low",
    "st1 { v0.d}[1], [x0]": "indexed st1: 8 bytes from high",

    "st2 {v0.16b, v1.16b}, [x0]": "write interleaved bytes from 2 regs",
    "st2 {v0.8b, v1.8b}, [x0]": "write interleaved bytes from 2 regs (half)",
    "st2 {v0.2d, v1.2d}, [x0]": "write interleaved 8-bytes from 2 regs",

    "st2 {v0.b, v1.b}[9], [x0]": "indexed st2: write 2 bytes from 2 regs",
    "st2 {v0.d, v1.d}[0], [x0]": "indexed st2: 8 bytes from lows",
    "st2 {v0.d, v1.d}[1], [x0]": "indexed st2: 8 bytes from highs",

    "st3 {v0.16b, v1.16b, v2.16b}, [x0]": "write interleaved bytes from 3 regs",
    "st3 {v0.8b, v1.8b, v2.8b}, [x0]": "write interleaved bytes from 3 regs (half)",
    "st3 {v0.2d, v1.2d, v2.2d}, [x0]": "write interleaved 8-bytes from 3 regs",

    "st3 {v0.b, v1.b, v2.b}[9], [x0]": "indexed st3: write 3 bytes from 3 regs",
    "st3 {v0.d, v1.d, v2.d}[0], [x0]": "indexed st3: 8 bytes from lows",
    "st3 {v0.d, v1.d, v2.d}[1], [x0]": "indexed st3: 8 bytes from highs",

    "st4 {v0.16b, v1.16b, v2.16b, v3.16b}, [x0]": "write interleaved bytes from 4 regs",
    "st4 {v0.8b, v1.8b, v2.8b, v3.8b}, [x0]": "write interleaved bytes from 4 regs (half)",
    "st4 {v0.2d, v1.2d, v2.2d, v3.2d}, [x0]": "write interleaved 8-bytes from 4 regs",

    "st4 {v0.b, v1.b, v2.b, v3.b}[9], [x0]": "indexed st4: write 4 bytes from 4 regs",
    "st4 {v0.d, v1.d, v2.d, v3.d}[0], [x0]": "indexed st4: 8 bytes from lows",
    "st4 {v0.d, v1.d, v2.d, v3.d}[1], [x0]": "indexed st4: 8 bytes from highs",
}

for instr, descr in instrs.items():
    func_name = descr.replace(" ", "_").replace("-", "_").replace(":", "_").replace("(", "_").replace(")", "_")
    instr_pp = instr.replace("[x0]", "buffer")
    asm.write('''
    .globl    _%s
    .p2align    2
_%s:
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

    %s

    mov w0, wzr
    ret
    ''' % (func_name, func_name, instr))
    cdecl.write('''
extern void %s(void *dest);
    ''' % func_name)
    cmain.write('''
  prepare();
  %s((void *)buffer);
  dump("%s", "%s");

''' % (func_name, instr_pp, descr))
asm.close()
