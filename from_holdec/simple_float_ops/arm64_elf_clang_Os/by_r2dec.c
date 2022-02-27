/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400490 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 7036 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = dbg.main;
    x3 = sym.__libc_csu_init;
    x4 = sym.__libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400450 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x413000;
    x17 = *(0x413000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4004d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400460)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = .bss;
    x0 = .bss;
    x1 += 7;
    x1 -= x0;
    if (x1 >= 0xe) {
        x1 = .comment;
        if (x1 == 0) {
            goto label_0;
        }
        uint64_t (*x1)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400530 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = .bss;
    x1 -= x0;
    x1 >>= 3;
    x1 = .bss;
    x1 >>= 1;
    if (x1 != 0) {
        x2 = .comment;
        if (x2 == 0) {
            goto label_0;
        }
        uint64_t (*x2)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400570 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x413000;
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x70)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x412df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400530)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400530)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x402008).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400750 */
#include <stdint.h>
 
void dbg_converting_between_floats_f2 () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void converting_between_floats_f2(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x413000;
    q0 = .comment;
    trunctfsf2 ();
    x8 = 0x413000;
    *((x8 + 0x48)) = s0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x401898 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
uint32_t trunctfsf2 () {
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x1 = v0.d;
    x0 = d0;
    x3 = x1;
    x6 = fpcr;
    x2 = (x1 >> 0x30) & ((1 << 0xf) - 1);
    value_0 = x1 >> 0xd;
    x1 = value_0 << 0xd;
    x4 = x2 + 1;
    x5 = x3 >> 0x3f;
    x4 &= 0x7fff;
    x1 |= (x0 >> 61);
    x0 <<= 3;
    __asm ("b.le 0x401a38");
    x3 = 0x3f7f;
    x2 += x3;
    if (x2 > 0xfe) {
        goto label_12;
    }
    __asm ("b.le 0x4019c0");
    x3 = x0 | (x1 << 39);
    w0 = 0x0;
    x3 = (x3 != 0) ? 1 : 0;
    x1 = x3 | (x1 >> 25);
label_3:
    w4 = 0x0;
    if ((x1 & 7) == 0) {
        goto label_8;
    }
label_11:
    x3 = x6 & 0xc00000;
    w0 |= 0x10;
label_2:
    if (x3 == 0x400) {
        goto label_13;
    }
    if (x3 == 0x800) {
        goto label_14;
    }
    if (x3 == 0) {
        goto label_15;
    }
    if (w4 != 0) {
        goto label_4;
    }
    if ((w1 & 0x1a) == 0) {
label_5:
        goto label_8;
    }
label_0:
    x4 = x2 + 1;
    if (x4 == 0xff) {
        goto label_16;
    }
    x2 = 0x800000;
    w3 = 0x0;
    x2 &= 0xffffffffffff;
    x2 |= 0x1fff000000000000;
    w4 = (int8_t) w4;
    x1 = x2 & (x1 >> 3);
    w3 = (uint32_t) (w3 & 0xff800000) | (w1 & 0x7fffff);
    value_1 = BIT_MASK (0x17, 8);
    value_2 = w4 & value_1;
    value_1 = ~value_1;
    w3 &= value_1;
    w3 |= value_2;
    value_3 = BIT_MASK (0x1f, 1);
    value_4 = w5 & value_3;
    value_3 = ~value_3;
    w3 &= value_3;
    w3 |= value_4;
    s0 = w3;
    if (w0 == 0) {
        goto label_17;
    }
    do {
        *((sp + -0x20)) = x29;
        *((sp + -0x20 + 8)) = x30;
        x29 = sp;
        *((x29 + 0x1c)) = w3;
        sfp_handle_exceptions ();
        s0 = *((x29 + 0x1c));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_12:
        x3 = x6 & 0xc00000;
        if (x3 != x6) {
            if (x3 == 0x400) {
                goto label_18;
            }
            w4 = (x3 == 0x800) ? 1 : 0;
            w4 = w5 & w4;
            if (w4 == w5) {
                goto label_19;
            }
        }
label_7:
        w4 = 0xff;
        w0 = 0x14;
label_6:
        x1 = 0x0;
label_1:
        w3 = 0x0;
        w3 = (uint32_t) (w3 & 0xff800000) | (w1 & 0x7fffff);
        value_5 = BIT_MASK (0x17, 8);
        value_6 = w4 & value_5;
        value_5 = ~value_5;
        w3 &= value_5;
        w3 |= value_6;
        value_7 = BIT_MASK (0x1f, 1);
        value_8 = w5 & value_7;
        value_7 = ~value_7;
        w3 &= value_7;
        w3 |= value_8;
        s0 = w3;
    } while (w0 != 0);
label_17:
    return w0;
    if (x2 < 0x17) {
        goto label_20;
    }
    x1 |= 0x8000000000000;
    w3 = w2 + 0x26;
    w4 = 0x1a;
    w2 = w4 - w2;
    x3 = x1 << x3;
    x0 = x3 | x0;
    x1 >>= x2;
    x0 = (x0 != 0) ? 1 : 0;
    x1 |= x0;
    if ((x1 & 7) != 0) {
        goto label_21;
    }
    x2 = 0x0;
    w0 = 0x0;
    if ((w6 & 0xb) == 0) {
        goto label_8;
    }
label_4:
    w0 |= 8;
    if ((w1 & 0x1a) != 0) {
label_9:
        goto label_0;
    }
label_8:
    x1 >>= 3;
    w3 = (x2 == 0xff) ? 1 : 0;
    w6 = (x1 != 0) ? 1 : 0;
    w4 = (int8_t) w2;
    w3 &= w6;
    x2 = x1 | 0x400000;
    x1 = (w3 != 0) ? x2 : x1;
    goto label_1;
    if (x2 == 0) {
        x1 |= x0;
        if (x1 == 0) {
            goto label_22;
        }
        x3 = x6 & 0xc00000;
        w0 = 0x10;
        w4 = 0x1;
        x1 = 0x1;
        goto label_2;
    }
    x0 = x1 | x0;
    if (x0 == 0) {
        goto label_23;
    }
    x0 = x1 >> 0x32;
    x3 = 0x7fff;
    x1 >>= 0x19;
    w0 ^= 1;
    w2 = 0x0;
    x1 &= 0xfffffffffffffff8;
    w0 = (x2 == x3) ? w0 : w2;
    x1 |= 0x2000000;
    x2 = 0xff;
    goto label_3;
label_15:
    x3 = x1 & 0xf;
    if (x3 == 4) {
        goto label_24;
    }
    x1 += 4;
    if (w4 != 0) {
        goto label_4;
    }
    goto label_5;
label_16:
    x6 &= 0xc00000;
    x1 = 0x0;
    if (x6 != x6) {
        if (x6 == 0x400) {
            goto label_25;
        }
        w3 = 0xfe;
        w1 = (x6 == 0x800) ? 1 : 0;
        x2 = 0xe000000000000000;
        w1 = w5 & w1;
        w4 = (w1 != w5) ? w4 : w3;
        x1 = (w1 != 0) ? 0 : x2;
    }
label_10:
    w2 = 0x14;
    w0 |= w2;
    goto label_1;
label_14:
    x3 = x1 + 8;
    x1 = (w5 != 0) ? x3 : x1;
    if (w4 != 0) {
        goto label_4;
    }
    goto label_5;
label_13:
    x3 = x1 + 8;
    x1 = (w5 == 0) ? x3 : x1;
    if (w4 != 0) {
        goto label_4;
    }
    goto label_5;
label_22:
    w4 = 0x0;
    w0 = 0x0;
    goto label_6;
label_23:
    w4 = 0xff;
    w0 = 0x0;
    goto label_6;
    if (w5 == 0) {
label_18:
        goto label_7;
    }
    x2 = 0xfe;
    w0 = 0x14;
    x1 = 0x0;
    goto label_5;
label_20:
    x3 = x6 & 0xc00000;
    w0 = 0x10;
    w4 = 0x1;
    x1 = 0x1;
    x2 = 0x0;
    goto label_2;
label_19:
    w0 = 0x14;
    x1 = 0x0;
    x2 = 0xfe;
    goto label_2;
    if (w4 == 0) {
label_24:
        goto label_8;
    }
    w0 |= 8;
    goto label_9;
label_25:
    w2 = 0xfe;
    w4 = (w5 == 0) ? w4 : w2;
    x2 = 0xe000000000000000;
    x1 = (w5 == 0) ? 0 : x2;
    goto label_10;
label_21:
    w4 = 0x1;
    x2 = 0x0;
    w0 = 0x0;
    goto label_11;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400708 */
#include <stdint.h>
 
void dbg_write_floats () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void write_floats(double pi); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    s1 = (float) d0;
    x8 = 0x413000;
    x9 = 0x413000;
    *((x8 + 0x48)) = s1;
    *((x9 + 0x50)) = d0;
    extenddftf2 ();
    x8 = 0x413000;
    *((x8 + 0x60)) = q0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x401780 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void extenddftf2 () {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = d0;
    x1 = fpcr;
    x1 = (x0 >> 0x34) & ((1 << 0xb) - 1);
    x5 = (x0 >> 0) & ((1 << 0x34) - 1);
    x3 = x1 + 1;
    x2 = x0 >> 0x3f;
    x3 &= 0x7ff;
    __asm ("b.le 0x4017d8");
    x4 = x5 >> 4;
    w0 = 0x3c00;
    w3 = w1 + w0;
    x4 &= 0xffffffffffff;
    x5 <<= 0x3c;
    do {
label_0:
        d0 = x5;
        x1 = 0x0;
        x1 = (uint64_t) (x1 & 0xffff000000000000) | (x4 & 0xffffffffffff);
        value_0 = BIT_MASK (0x30, 0xf);
        value_1 = x3 & value_0;
        value_0 = ~value_0;
        x1 &= value_0;
        x1 |= value_1;
        value_2 = BIT_MASK (0x3f, 1);
        value_3 = x2 & value_2;
        value_2 = ~value_2;
        x1 &= value_2;
        x1 |= value_3;
        v0.d = 1;
        return;
        if (x1 != 0) {
            if (x5 == 0) {
                goto label_2;
            }
            x0 = x5 << 0x3c;
            x3 = x5 >> 4;
            x1 = 0x0;
            x3 |= 0x800000000000;
            d0 = x0;
            x1 = (uint64_t) (x1 & 0xffff000000000000) | (x3 & 0xffffffffffff);
            x1 |= 0x7fff000000000000;
            value_4 = BIT_MASK (0x3f, 1);
            value_5 = x2 & value_4;
            value_4 = ~value_4;
            x1 &= value_4;
            x1 |= value_5;
            v0.d = 1;
            if ((x5 & 0x33) != 0) {
                goto label_3;
            }
            *((sp + -0x20)) = x29;
            *((sp + -0x20 + 8)) = x30;
            w0 = 0x1;
            x29 = sp;
            *((x29 + 0x10)) = q0;
            sfp_handle_exceptions ();
            q0 = *((x29 + 0x10));
            x29 = *(sp);
            x30 = *((sp + 8));
            return 0x1;
        }
        if (x5 == 0) {
            goto label_4;
        }
        x3 &= x5;
        __asm ("b.le 0x401878");
        w4 = w3 - 0xf;
        x4 = x5 << x4;
        x5 = 0x0;
label_1:
        w1 = 0x3c0c;
        x4 &= 0xffffffffffff;
        w1 -= w3;
        w3 = w1 & 0x7fff;
    } while (1);
label_2:
    w3 = 0x7fff;
    x4 = 0x0;
    goto label_0;
label_4:
    w3 = 0x0;
    x4 = 0x0;
    goto label_0;
    w4 = 0xf;
    w0 = w3 + 0x31;
    w4 -= w3;
    x4 = x5 >> x4;
    x5 <<= x0;
    goto label_1;
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x401f20 */
#include <stdint.h>
 
uint64_t sfp_handle_exceptions (int64_t arg1) {
    x0 = arg1;
    if ((w0 & 0) != 0) {
        s1 = 0;
        s0 = s1 / s1;
        x1 = fpsr;
    }
    if ((w0 & 1) != 0) {
        s1 = 1.00000000;
        s2 = 0;
        s0 = s1 / s2;
        x1 = fpsr;
    }
    if ((w0 & 2) != 0) {
        s1 = $d;
        s2 = *(0x401f84);
        s0 = s1 + s2;
        x1 = fpsr;
    }
    if ((w0 & 3) != 0) {
        s1 = *(0x401f88);
        s0 = s1 * s1;
        x1 = fpsr;
    }
    if ((w0 & 4) != 0) {
        s1 = $d;
        s2 = 1;
        s0 = s1 - s2;
        x0 = fpsr;
    }
    return x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400914 */
#include <stdint.h>
 
uint64_t dbg_constants () {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int constants(double x); */
    *((sp + -0x30)) = d9;
    *((sp + -0x30 + 8)) = d8;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    v8.16b = v0.16b;
    x19 = 0x402038;
    d0 = d8 + d8;
    x0 = x19;
    printf (x0);
    d0 = 3;
    d0 = d8 * d0;
    x0 = x19;
    printf (x0);
    x8 = 0x402000;
    d0 = *(0x402028);
    x0 = x19;
    d0 = d8 * d0;
    printf (x0);
    d0 = 10;
    d0 = d8 * d0;
    x0 = x19;
    printf (x0);
    x8 = 0x402000;
    d0 = *(0x402030);
    x0 = x19;
    d0 = d8 * d0;
    printf (x0);
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    w0 = 0x7d;
    d9 = *(sp);
    d8 = *((sp + 8));
    return 0x7d;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400480 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x413018);
    x16 = 0x413018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x40066c */
#include <stdint.h>
 
uint64_t dbg_write_ints () {
    /* int write_ints(double pi); */
    x8 = 0x413000;
    __asm ("fcvtzs w9, d0");
    x10 = 0x413000;
    x11 = 0x413000;
    __asm ("fcvtzs x12, d0");
    x13 = 0x413000;
    x14 = 0x413000;
    w0 = 0x79;
    *((x8 + 0x30)) = w9;
    *((x10 + 0x32)) = w9;
    *((x11 + 0x34)) = w9;
    *((x13 + 0x38)) = x12;
    *((x14 + 0x40)) = x12;
    return 0x79;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4006a4 */
#include <stdint.h>
 
uint64_t dbg_read_floats () {
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    /* int read_floats(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x413000;
    x9 = 0x413000;
    s0 = *(0x413048);
    x8 = 0x413000;
    d1 = global_double;
    q2 = .comment;
    *((sp -= 0x10)) = q2;
    d0 = (double) s0;
    d2 = 0;
    d0 += d2;
    d0 = d1 + d0;
    extenddftf2 ();
    v1.16b = v0.16b;
    q0 = *(sp);
    addtf3 ();
    trunctfdf2 ();
    x0 = 0x402038;
    printf (x0);
    w0 = 0x7a;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x7a;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4009e8 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void addtf3 () {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_20h_2;
    x2 = d1;
    x0 = d0;
    x3 = v1.d;
    x1 = v0.d;
    x5 = x2;
    x4 = x0;
    x2 = x3;
    x7 = fpcr;
    x12 = x1 >> 0x3f;
    x11 = x2 >> 0x3f;
    x6 = (x1 >> 0x30) & ((1 << 0xf) - 1);
    value_0 = x1 >> 0xd;
    x1 = value_0 << 0xd;
    w8 = (int8_t) w12;
    w14 = (int8_t) w11;
    w3 = (int16_t) w6;
    w9 = (int16_t) w6;
    x6 = (x2 >> 0x30) & ((1 << 0xf) - 1);
    value_1 = x2 >> 0xd;
    x2 = value_1 << 0xd;
    x1 |= (x0 >> 61);
    x10 = x0 << 3;
    x13 = x5 << 3;
    w0 = (int16_t) w6;
    x2 |= (x5 >> 61);
    w6 = (int16_t) w6;
    if (x8 == x14) {
        goto label_46;
    }
    w3 -= w0;
    __asm ("b.le 0x400d98");
    if (x6 != 0) {
        goto label_47;
    }
    x0 = x2 | x13;
    if (x0 == 0) {
        goto label_48;
    }
    w3--;
    if (w3 != w3) {
        goto label_49;
    }
    x13 = x10 - x13;
    x10 = x13;
    __asm ("sbc x1, x1, x2");
label_4:
    x4 = x1 & 0x7ffffffffffff;
    if ((x1 & 0x33) == 0) {
        goto label_1;
    }
label_8:
    x2 &= x10;
    w2 += 0x40;
    x0 &= x4;
    w0 = (x4 == 0) ? w2 : w0;
    w2 = w0 - 0xc;
    if (w2 > 0x3f) {
        goto label_50;
    }
    w0 = 0x40;
    x4 <<= x2;
    w0 -= w2;
    x0 = x10 >> x0;
    x10 <<= x2;
    x0 |= x4;
label_11:
    x1 = (int64_t) w2;
    if (x9 > x1) {
        goto label_51;
    }
    w2 -= w9;
    w2++;
    if (w2 > 0x3f) {
        goto label_52;
    }
    w3 = 0x40;
    x4 = x10 >> x2;
    w3 -= w2;
    x1 = x0 >> x2;
    x5 = x10 << x3;
    x0 <<= x3;
    x0 |= x4;
    x5 = (x5 != 0) ? 1 : 0;
    x10 = x0 | x5;
    x0 = x10 | x1;
    x4 = x10 & 7;
    w3 = (x0 != 0) ? 1 : 0;
    if (x4 == 0) {
label_15:
        goto label_22;
    }
    do {
        x2 = x7 & 0xc00000;
        x9 = 0x0;
        w0 = 0x0;
label_32:
        w0 |= 0x10;
        if (x2 == 0x400) {
            goto label_53;
        }
        if (x2 == 0x800) {
            goto label_54;
        }
        if (x2 == 0) {
            goto label_55;
        }
        if (w3 == 0) {
label_6:
            goto label_56;
        }
label_7:
        x2 = x1 & 0x8000000000000;
        w12 = w8;
        w0 |= 8;
        if (x2 == 0) {
label_0:
            goto label_57;
        }
        x9++;
        x2 = 0x7fff;
        if (x9 == x2) {
            goto label_58;
        }
        x1 &= 0xfff7ffffffffffff;
        w6 = w9 & 0x7fff;
        x4 = (x1 >> 3) & ((1 << 0x30) - 1);
        __asm ("extr x5, x1, x10, 3");
label_2:
        d0 = x5;
        x3 = 0x0;
        x3 = (uint64_t) (x3 & 0xffff000000000000) | (x4 & 0xffffffffffff);
        value_2 = BIT_MASK (0x30, 0xf);
        value_3 = x6 & value_2;
        value_2 = ~value_2;
        x3 &= value_2;
        x3 |= value_3;
        value_4 = BIT_MASK (0x3f, 1);
        value_5 = x12 & value_4;
        value_4 = ~value_4;
        x3 &= value_4;
        x3 |= value_5;
        v0.d = 1;
        if (w0 != 0) {
            goto label_59;
        }
label_3:
        return w0;
label_47:
        x0 = 0x7fff;
        x2 |= 0x8000000000000;
        if (x9 == x0) {
            goto label_5;
        }
label_14:
        if (w3 > 0x74) {
            goto label_60;
        }
        if (w3 > 0x3f) {
            goto label_61;
        }
        w0 = 0x40;
        w0 -= w3;
        x4 = x2 << x0;
        x0 = x13 << x0;
        x13 >>= x3;
        x13 = x4 | x13;
        x4 = (x0 != 0) ? 1 : 0;
        x4 |= x13;
        x3 = x2 >> x3;
        goto label_16;
label_46:
        w0 = w3 - w0;
        __asm ("b.le 0x400e88");
        if (x6 != 0) {
            goto label_62;
        }
        x3 = x2 | x13;
        if (x3 != 0) {
            goto label_63;
        }
        x0 = 0x7fff;
        if (x9 == x0) {
            goto label_64;
        }
        if (x9 != 0) {
label_1:
            goto label_65;
        }
        x4 = x10 & 7;
        x0 = x10 | x1;
        w3 = (x0 != 0) ? 1 : 0;
    } while (x4 != 0);
label_22:
    x9 = 0x0;
    w0 = 0x0;
label_17:
    x2 = x1 & 0x8000000000000;
    w12 = w8;
    if (w3 == 0) {
        goto label_0;
    }
    if ((w7 & 0xb) == 0) {
        goto label_0;
    }
    w0 |= 8;
    goto label_0;
label_48:
    x0 = 0x7fff;
    if (x9 != x0) {
        goto label_1;
    }
label_5:
    x0 = x1 | x10;
    if (x0 != 0) {
        goto label_66;
    }
    x1 = 0x0;
    x10 = 0x0;
label_26:
    x9 = 0x7fff;
label_57:
    w6 = w9 & 0x7fff;
    __asm ("extr x5, x1, x10, 3");
    x1 >>= 3;
label_9:
    x2 = 0x7fff;
    x4 = x1 & 0xffffffffffff;
    if (x9 != x2) {
        goto label_2;
    }
    x2 = x5 | x1;
    if (x2 == 0) {
        goto label_67;
    }
    d0 = x5;
    x4 = x1 | 0x800000000000;
    x4 &= 0xffffffffffff;
    x3 = 0x0;
    x3 = (uint64_t) (x3 & 0xffff000000000000) | (x4 & 0xffffffffffff);
    value_6 = BIT_MASK (0x30, 0xf);
    value_7 = x6 & value_6;
    value_6 = ~value_6;
    x3 &= value_6;
    x3 |= value_7;
    value_8 = BIT_MASK (0x3f, 1);
    value_9 = x12 & value_8;
    value_8 = ~value_8;
    x3 &= value_8;
    x3 |= value_9;
    v0.d = 1;
    if (w0 == 0) {
        goto label_3;
    }
label_59:
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x10)) = q0;
    sfp_handle_exceptions ();
    q0 = *((x29 + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_60:
    x2 |= x13;
    x3 = 0x0;
    x4 = (x2 != 0) ? 1 : 0;
label_16:
    x4 = x10 - x4;
    x10 = x4;
    __asm ("sbc x1, x1, x3");
    goto label_4;
label_62:
    x3 = 0x7fff;
    x2 |= 0x8000000000000;
    if (x9 == x3) {
        goto label_5;
    }
label_19:
    if (w0 > 0x74) {
        goto label_68;
    }
    if (w0 > 0x3f) {
        goto label_69;
    }
    w3 = 0x40;
    x4 = x13 >> x0;
    w3 -= w0;
    x0 = x2 >> x0;
    x13 <<= x3;
    x2 <<= x3;
    x3 = x2 | x4;
    x2 = (x13 != 0) ? 1 : 0;
    x2 |= x3;
    goto label_24;
label_65:
    w0 = 0x0;
label_12:
    if ((x10 & 7) == 0) {
        goto label_56;
    }
    x3 = x7 & 0xc00000;
    w0 |= 0x10;
label_25:
    if (x3 == 0x400) {
        goto label_70;
    }
    if (x3 == 0x800) {
        goto label_71;
    }
    if (x3 != 0) {
        goto label_56;
    }
    w3 = 0x0;
label_55:
    x2 = x10 & 0xf;
    if (x2 == 4) {
        goto label_6;
    }
    x2 = x10 + 4;
    x10 = x2;
    __asm ("cinc x1, x1, lo");
    if (w3 != 0) {
        goto label_7;
    }
label_56:
    x2 = x1 & 0x8000000000000;
    w12 = w8;
    goto label_0;
    if (w3 != 0) {
        goto label_72;
    }
    x0 = x9 + 1;
    x0 &= 0x7fff;
    __asm ("b.le 0x4010f8");
    x0 = x10 - x13;
    __asm ("sbc x4, x1, x2");
    if ((x4 & 0x33) == 0) {
        goto label_73;
    }
    x10 = x13 - x10;
    x8 = x14;
    __asm ("sbc x4, x2, x1");
    goto label_8;
label_67:
    x5 = 0x0;
    x4 = 0x0;
    goto label_2;
label_58:
    x7 &= 0xc00000;
    if (x7 == x7) {
        goto label_74;
    }
    if (x7 == 0x400) {
        goto label_75;
    }
    w6 = 0x7ffe;
    __asm ("ccmp x8, 0, 4, eq");
    x1 = 0xe000000000000000;
    w2 = (x7 != 0x800) ? 1 : 0;
    x3 = 0x7ffe;
    w6 = (w2 != 0) ? w9 : w6;
    x1 = (w2 == 0) ? x1 : 0;
    __asm ("csetm x5, eq");
    x9 = (w2 != 0) ? x9 : x3;
label_13:
    w2 = 0x14;
    w0 |= w2;
    goto label_9;
label_70:
    w3 = 0x0;
    if (x8 != 0) {
label_53:
        goto label_6;
    }
label_10:
    x2 = x10 + 8;
    x10 = x2;
    __asm ("cinc x1, x1, lo");
    goto label_6;
label_71:
    w3 = 0x0;
    if (x8 == 0) {
label_54:
        goto label_6;
    }
    goto label_10;
label_51:
    x9 -= x1;
    x1 = x0 & 0xfff7ffffffffffff;
    goto label_1;
label_50:
    w0 -= 0x4c;
    x0 = x10 << x0;
    x10 = 0x0;
    goto label_11;
label_66:
    x0 = x1 >> 0x32;
    x0 ^= 1;
    w0 &= 1;
    goto label_12;
    if (x8 != 0) {
        goto label_76;
    }
    x3 = x9 + 1;
    x11 = x3 & 0x7fff;
    __asm ("b.le 0x4010b8");
    x4 = 0x7fff;
    if (x3 == x4) {
        goto label_77;
    }
    x13 = x10 + x13;
    x1 += x2;
    x9 = x3;
    __asm ("cinc x1, x1, hi");
    __asm ("extr x10, x1, x13, 1");
    x1 >>= 1;
    goto label_12;
label_74:
    w6 = w9;
    x1 = 0x0;
    x5 = 0x0;
    goto label_13;
label_49:
    x0 = 0x7fff;
    if (x9 != x0) {
        goto label_14;
    }
    goto label_5;
label_52:
    w3 = w2 - 0x40;
    x3 = x0 >> x3;
    if (w2 == 0x40) {
        goto label_78;
    }
    w1 = 0x80;
    w1 -= w2;
    x0 <<= x1;
label_20:
    x0 = x10 | x0;
    x1 = 0x0;
    x0 = (x0 != 0) ? 1 : 0;
    x10 = x3 | x0;
    x4 = x10 & 7;
    w3 = (x10 != 0) ? 1 : 0;
    goto label_15;
label_61:
    w4 = w3 - 0x40;
    x4 = x2 >> x4;
    if (w3 == 0x40) {
        goto label_79;
    }
    w0 = 0x80;
    w3 = w0 - w3;
    x2 <<= x3;
label_21:
    x13 = x2 | x13;
    x3 = 0x0;
    x0 = (x13 != 0) ? 1 : 0;
    x4 |= x0;
    goto label_16;
    if (x9 == 0) {
label_72:
        goto label_80;
    }
    x0 = 0x7fff;
    if (x6 == x0) {
        goto label_81;
    }
    w3 = -w3;
    x1 |= 0x8000000000000;
label_27:
    if (w3 > 0x74) {
        goto label_82;
    }
    if (w3 > 0x3f) {
        goto label_83;
    }
    w0 = 0x40;
    w0 -= w3;
    x4 = x1 << x0;
    x0 = x10 << x0;
    x0 = x10 >> x3;
    x10 = x4 | x0;
    x0 = (x0 != 0) ? 1 : 0;
    x0 |= x10;
    x1 >>= x3;
label_28:
    x10 = x13 - x0;
    x9 = x6;
    x8 = x14;
    __asm ("sbc x1, x2, x1");
    goto label_4;
label_73:
    x1 = x0 | x4;
    if (x1 != 0) {
        goto label_84;
    }
label_23:
    x0 = x7 & 0xc00000;
    x1 = 0x0;
    x10 = 0x0;
    x8 = (x0 == 0x800) ? 1 : 0;
    w0 = 0x0;
    x9 = 0x0;
    goto label_17;
label_63:
    w0--;
    if (w0 != w0) {
        goto label_85;
    }
    x13 = x10 + x13;
    x1 += x2;
    x10 = x13;
    __asm ("cinc x1, x1, hi");
    if ((x1 & 0x33) == 0) {
label_18:
        goto label_1;
    }
    x9++;
    x0 = 0x7fff;
    if (x9 == x0) {
        goto label_86;
    }
    x5 = x10 & 1;
    x2 = x1 & 0xfff7ffffffffffff;
    w0 = 0x0;
    x5 |= (x10 >> 1);
    x1 = x2 >> 1;
    x10 = x5 | (x2 << 63);
    goto label_12;
label_68:
    x2 |= x13;
    x0 = 0x0;
    x2 = (x2 != 0) ? 1 : 0;
label_24:
    x2 += x10;
    x1 = x0 + x1;
    x10 = x2;
    __asm ("cinc x1, x1, hi");
    goto label_18;
label_80:
    x0 = x1 | x10;
    if (x0 != 0) {
        goto label_87;
    }
    x0 = 0x7fff;
    if (x6 == x0) {
        goto label_81;
    }
    x1 = x2;
    x10 = x13;
    x9 = x6;
    x8 = x14;
    goto label_1;
label_84:
    x10 = x0;
    goto label_8;
label_85:
    x3 = 0x7fff;
    if (x9 != x3) {
        goto label_19;
    }
    goto label_5;
label_78:
    x0 = 0x0;
    goto label_20;
label_79:
    x2 = 0x0;
    goto label_21;
    if (x9 != 0) {
        goto label_88;
    }
    x3 = x1 | x10;
    if (x3 != 0) {
        goto label_89;
    }
    x0 = x2 | x13;
    x1 = x2;
    x10 = x13;
    w3 = (x0 != 0) ? 1 : 0;
    goto label_22;
label_64:
    x0 = x1 | x10;
    if (x0 == 0) {
        goto label_90;
    }
    x0 = x1 >> 0x32;
    w0 ^= 1;
    goto label_12;
    if (x9 != 0) {
        goto label_91;
    }
    x0 = x1 | x10;
    if (x0 != 0) {
        goto label_92;
    }
    x0 = x2 | x13;
    if (x0 == 0) {
        goto label_23;
    }
    x1 = x2;
    x10 = x13;
    x8 = x14;
    w3 = 0x1;
    goto label_22;
label_69:
    w3 = w0 - 0x40;
    x3 = x2 >> x3;
    if (w0 == 0x40) {
        goto label_93;
    }
    w4 = 0x80;
    w0 = w4 - w0;
    x2 <<= x0;
label_33:
    x13 = x2 | x13;
    x0 = 0x0;
    x2 = (x13 != 0) ? 1 : 0;
    x2 = x3 | x2;
    goto label_24;
    if (x9 != 0) {
label_76:
        goto label_94;
    }
    x3 = x1 | x10;
    if (x3 != 0) {
        goto label_95;
    }
    x0 = 0x7fff;
    if (x6 == x0) {
        goto label_96;
    }
    x1 = x2;
    x10 = x13;
    x9 = x6;
    goto label_1;
label_75:
    w6 = 0x7ffe;
    x1 = 0xe000000000000000;
    x2 = 0x7ffe;
    w6 = (x8 == 0) ? w9 : w6;
    x1 = (x8 != 0) ? x1 : 0;
    __asm ("csetm x5, ne");
    x9 = (x8 == 0) ? x9 : x2;
    goto label_13;
label_91:
    x0 = 0x7fff;
    if (x9 == x0) {
        goto label_97;
    }
    x0 = x1 | x10;
    if (x6 == x0) {
        goto label_98;
    }
    x6 = x2 | x13;
    if (x0 != 0) {
        if (x6 == 0) {
label_35:
            goto label_39;
        }
label_36:
        x0 = x4 & 0x1fffffffffffffff;
        x4 = x1 >> 3;
        x0 |= (x1 << 61);
        if ((x4 & 0x2f) != 0) {
            x1 = x2 >> 3;
            if ((x1 & 0x2f) != 0) {
                goto label_99;
            }
            x0 = x5 & 0x1fffffffffffffff;
            x4 = x1;
            x8 = x14;
            x0 |= (x2 << 61);
        }
label_99:
        __asm ("extr x1, x4, x0, 0x3d");
        x10 = x0 << 3;
        x9 = 0x7fff;
        w0 = w3;
        goto label_12;
        if ((x1 & 0x2f) == 0) {
label_34:
            goto label_98;
        }
        x6 = x2 | x13;
    }
    if (x6 == 0) {
        goto label_100;
    }
    x1 = x2;
    x10 = x13;
    x8 = x14;
    w0 = 0x0;
    x9 = 0x7fff;
    goto label_12;
label_86:
    x2 = x7 & 0xc00000;
    x3 = x2;
    if (x2 != 0) {
        if (x2 == 0x400) {
            goto label_101;
        }
label_30:
        w0 = (x3 == 0x800) ? 1 : 0;
        if ((w12 & w0) != 0) {
            goto label_102;
        }
        x1 = 0x0;
        w0 = 0x14;
        x10 = x1;
        x9 = 0x7ffe;
        goto label_25;
label_31:
        w12 = 0x0;
    }
label_29:
    x1 = 0x0;
    x10 = 0x0;
    w0 = 0x14;
    goto label_26;
label_87:
    w3 = ~w3;
    if (w3 == 0) {
        x10 = x13 - x10;
        x9 = x6;
        x8 = x14;
        __asm ("sbc x1, x2, x1");
        goto label_4;
    }
    x0 = 0x7fff;
    if (x6 != x0) {
        goto label_27;
    }
label_81:
    x10 = x2 | x13;
    if (x10 != 0) {
        goto label_103;
    }
    w12 = w11;
label_38:
    x1 = 0x0;
    w0 = 0x0;
    goto label_26;
label_82:
    x0 = x1 | x10;
    x1 = 0x0;
    x0 = (x0 != 0) ? 1 : 0;
    goto label_28;
label_77:
    x2 = x7 & 0xc00000;
    x3 = x2;
    if (x2 == 0) {
        goto label_29;
    }
    if (x2 != 0x400) {
        goto label_30;
    }
    if (x8 == 0) {
        goto label_31;
    }
    x1 = 0x0;
    w3 = 0x0;
    x10 = x1;
    x9 = 0x7ffe;
    w0 = 0x14;
    goto label_32;
label_94:
    x3 = 0x7fff;
    if (x6 == x3) {
        goto label_96;
    }
    w0 = -w0;
    x1 |= 0x8000000000000;
label_37:
    if (w0 > 0x74) {
        goto label_104;
    }
    if (w0 > 0x3f) {
        goto label_105;
    }
    w3 = 0x40;
    x4 = x10 >> x0;
    w3 -= w0;
    x0 = x1 >> x0;
    x5 = x10 << x3;
    x1 <<= x3;
    x10 = x1 | x4;
    x5 = (x5 != 0) ? 1 : 0;
    x5 |= x10;
label_40:
    x10 = x5 + x13;
    x1 = x0 + x2;
    x9 = x6;
    __asm ("cinc x1, x1, hi");
    goto label_18;
label_92:
    x0 = x2 | x13;
    if (x0 == 0) {
        goto label_41;
    }
    x0 = x10 - x13;
    __asm ("sbc x5, x1, x2");
    if ((x5 & 0x33) == 0) {
        goto label_106;
    }
    x10 = x13 - x10;
    x8 = x14;
    x4 = x10 & 7;
    __asm ("sbc x1, x2, x1");
    x0 = x10 | x1;
    w3 = (x0 != 0) ? 1 : 0;
    goto label_15;
label_88:
    x3 = 0x7fff;
    if (x9 == x3) {
        goto label_107;
    }
    x3 = x1 | x10;
    if (x3 != 0) {
        while (x6 == 0) {
            goto label_108;
        }
        x1 = x2;
        x10 = x13;
        x9 = 0x7fff;
        goto label_12;
label_44:
        w0 = 0x0;
label_42:
        x6 = x2 | x13;
    }
    w0 = ((x2 & 0x4000000000000) != 0) ? w0 : (0 + 1);
    if (x3 != 0) {
        goto label_109;
    }
    x1 = x2;
    x10 = x13;
    w3 = 0x0;
    x9 = 0x7fff;
    goto label_17;
label_90:
    x1 = 0x0;
    x10 = 0x0;
    w0 = 0x0;
    goto label_26;
label_41:
    w3 = 0x1;
    goto label_22;
label_103:
    x0 = x2 >> 0x32;
    x1 = x2;
    x0 ^= 1;
    x10 = x13;
    w0 &= 1;
    x9 = x6;
    x8 = x14;
    goto label_12;
label_93:
    x2 = 0x0;
    goto label_33;
label_97:
    x0 = x1 | x10;
    if (x0 == 0) {
        goto label_34;
    }
    x3 = x1 >> 0x32;
    x6 = x2 | x13;
    x3 ^= 1;
    w3 &= 1;
    if (x0 != 0) {
        goto label_35;
    }
label_98:
    x6 = x2 | x13;
    if (x6 == 0) {
        goto label_110;
    }
    w3 = ((x2 & 0x4000000000000) != 0) ? w3 : (0 + 1);
    if (x0 != 0) {
        goto label_36;
    }
    x1 = x2;
    x10 = x13;
    x8 = x14;
label_39:
    w0 = w3;
    x9 = 0x7fff;
    goto label_12;
label_83:
    w0 = w3 - 0x40;
    x0 = x1 >> x0;
    if (w3 == 0x40) {
        goto label_111;
    }
    w4 = 0x80;
    w3 = w4 - w3;
    x1 <<= x3;
label_43:
    x5 = x1 | x10;
    x1 = 0x0;
    x10 = (x5 != 0) ? 1 : 0;
    x0 |= x10;
    goto label_28;
label_95:
    w0 = ~w0;
    if (w0 == 0) {
        x10 += x13;
        x1 += x2;
        x9 = x6;
        __asm ("cinc x1, x1, hi");
        goto label_18;
    }
    x3 = 0x7fff;
    if (x6 != x3) {
        goto label_37;
    }
label_96:
    x10 = x2 | x13;
    if (x10 == 0) {
        goto label_38;
    }
    x0 = x2 >> 0x32;
    x1 = x2;
    x0 ^= 1;
    x10 = x13;
    w0 &= 1;
    x9 = x6;
    goto label_12;
    if (x0 != 0) {
label_110:
        goto label_39;
    }
label_100:
    w12 = 0x0;
    x1 = 0xfff8000000000000;
    x10 = 0x7;
    w0 = 0x1;
    goto label_26;
label_104:
    x1 |= x10;
    x0 = 0x0;
    x5 = (x1 != 0) ? 1 : 0;
    goto label_40;
label_89:
    x3 = x2 | x13;
    if (x3 == 0) {
        goto label_41;
    }
    x13 = x10 + x13;
    x1 += x2;
    __asm ("cinc x1, x1, hi");
    if ((x1 & 0x33) == 0) {
        goto label_112;
    }
    x1 &= 0xfff7ffffffffffff;
    x10 = x13;
    x9 = 0x1;
    goto label_12;
label_107:
    x3 = x1 | x10;
    if (x3 == 0) {
        goto label_113;
    }
    x0 = x1 >> 0x32;
    x0 ^= 1;
    w6 = w0 & 1;
    w0 = w6;
    if (x3 == 0) {
        goto label_42;
    }
label_108:
    x13 = x2 | x13;
    x9 = 0x7fff;
    if (x13 == 0) {
        goto label_12;
    }
label_109:
    x10 = x4 & 0x1fffffffffffffff;
    x3 = x1 >> 3;
    x10 |= (x1 << 61);
    if ((x3 & 0x2f) != 0) {
        x1 = x2 >> 3;
        if ((x1 & 0x2f) != 0) {
            goto label_114;
        }
        x10 = x5 & 0x1fffffffffffffff;
        x3 = x1;
        x8 = x14;
        x10 |= (x2 << 61);
    }
label_114:
    __asm ("extr x1, x3, x10, 0x3d");
    x9 = 0x7fff;
    x10 <<= 3;
    goto label_12;
    if (x8 == 0) {
label_101:
        goto label_31;
    }
    x1 = 0x0;
    x9 = 0x7ffe;
    x10 = x1;
    w0 = 0x14;
    w3 = 0x0;
    goto label_32;
label_106:
    x1 = x0 | x5;
    if (x1 == 0) {
        goto label_23;
    }
    x4 = x0 & 7;
    x1 = x5;
    x10 = x0;
    w3 = 0x1;
    goto label_15;
label_105:
    w5 = w0 - 0x40;
    x5 = x1 >> x5;
    if (w0 == 0x40) {
        goto label_115;
    }
    w3 = 0x80;
    w0 = w3 - w0;
    x1 <<= x0;
label_45:
    x10 = x1 | x10;
    x0 = 0x0;
    x10 = (x10 != 0) ? 1 : 0;
    x5 |= x10;
    goto label_40;
label_102:
    w12 = 0x1;
    x1 = 0x0;
    x10 = 0x0;
    w0 = 0x14;
    goto label_26;
label_111:
    x1 = 0x0;
    goto label_43;
    if (x10 == 0) {
label_113:
        goto label_44;
    }
    x1 = x2;
    x10 = x13;
    goto label_12;
label_112:
    x0 = x13 | x1;
    x4 = x13 & 7;
    x10 = x13;
    w3 = (x0 != 0) ? 1 : 0;
    goto label_15;
label_115:
    x1 = 0x0;
    goto label_45;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x401bb0 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void trunctfdf2 () {
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = d0;
    x1 = v0.d;
    x3 = x0;
    x0 = x1;
    x6 = fpcr;
    x2 = (x1 >> 0x30) & ((1 << 0xf) - 1);
    value_0 = x1 >> 0xd;
    x1 = value_0 << 0xd;
    x4 = x2 + 1;
    x5 = x0 >> 0x3f;
    x4 &= 0x7fff;
    x1 |= (x3 >> 61);
    x4 = x3 << 3;
    __asm ("b.le 0x401cd8");
    x0 = 0x3bff;
    x2 += x0;
    if (x2 > 0x7fe) {
        goto label_12;
    }
    __asm ("b.le 0x401df8");
    x3 <<= 7;
    w0 = 0x0;
    x3 = (x3 != 0) ? 1 : 0;
    x4 = x3 | (x4 >> 60);
    x1 = x4 | (x1 << 4);
label_1:
    w4 = 0x0;
    if ((x1 & 7) == 0) {
        goto label_3;
    }
label_11:
    x3 = x6 & 0xc00000;
    w0 |= 0x10;
label_0:
    if (x3 == 0x400) {
        goto label_13;
    }
    if (x3 == 0x800) {
        goto label_14;
    }
    if (x3 == 0) {
        goto label_15;
    }
    while (1) {
label_3:
        x3 = x1 & 0x80000000000000;
        if (x3 != 0) {
            x2++;
            if (x2 == 0x7ff) {
                goto label_16;
            }
label_6:
            x3 = 0xe010000000000000;
            w2 &= 0x7ff;
            x1 = x3 & (x1 >> 3);
            goto label_17;
label_12:
            x3 = x6 & 0xc00000;
            if (x3 != x6) {
                if (x3 == 0x400) {
                    goto label_18;
                }
                w4 = (x3 == 0x800) ? 1 : 0;
                w4 = w5 & w4;
                if (w4 == w5) {
                    goto label_19;
                }
            }
label_7:
            x2 = 0x7ff;
            w0 = 0x14;
label_4:
            x1 = 0x0;
        }
label_8:
        x1 >>= 3;
        x3 = x1 | 0x8000000000000;
        __asm ("ccmp x1, 0, 4, eq");
        w2 &= 0x7ff;
        x1 = (x2 != 0x7ff) ? x3 : x1;
label_17:
        x3 = 0x0;
        x3 = (uint64_t) (x3 & 0xfff0000000000000) | (x1 & 0xfffffffffffff);
        value_1 = BIT_MASK (0x34, 0xb);
        value_2 = x2 & value_1;
        value_1 = ~value_1;
        x3 &= value_1;
        x3 |= value_2;
        value_3 = BIT_MASK (0x3f, 1);
        value_4 = x5 & value_3;
        value_3 = ~value_3;
        x3 &= value_3;
        x3 |= value_4;
        d0 = x3;
        if (w0 != 0) {
            goto label_20;
        }
        return w0;
label_5:
        x2 = 0x0;
        w0 = 0x0;
label_2:
        w0 |= 8;
    }
    if (x2 == 0) {
        x1 |= x4;
        if (x1 == 0) {
            goto label_21;
        }
        x3 = x6 & 0xc00000;
        w0 = 0x10;
        w4 = 0x1;
        x1 = 0x1;
        goto label_0;
    }
    x0 = x1 | x4;
    if (x0 == 0) {
        goto label_22;
    }
    x0 = x1 >> 0x32;
    x3 = 0x7fff;
    __asm ("extr x1, x1, x4, 0x3c");
    w0 ^= 1;
    w2 = 0x0;
    x1 &= 0xfffffffffffffff8;
    w0 = (x2 == x3) ? w0 : w2;
    x1 |= 0x40000000000000;
    x2 = 0x7ff;
    goto label_1;
label_15:
    x7 = x1 & 0xf;
    x3 = x1 + 4;
    x1 = (x7 != 4) ? x3 : x1;
    if (w4 != 0) {
        goto label_2;
    }
    goto label_3;
label_16:
    x6 &= 0xc00000;
    x1 = 0x0;
    if (x6 != x6) {
        if (x6 == 0x400) {
            goto label_23;
        }
        w4 = 0x7fe;
        w3 = (x6 == 0x800) ? 1 : 0;
        x1 = 0xe000000000000000;
        w3 = w5 & w3;
        w2 = (w3 != w5) ? w2 : w4;
        x1 = (w3 != 0) ? 0 : x1;
    }
label_10:
    x3 = 0x0;
    w4 = 0x14;
    x3 = (uint64_t) (x3 & 0xfff0000000000000) | (x1 & 0xfffffffffffff);
    w0 |= w4;
    value_5 = BIT_MASK (0x34, 0xb);
    value_6 = x2 & value_5;
    value_5 = ~value_5;
    x3 &= value_5;
    x3 |= value_6;
    value_7 = BIT_MASK (0x3f, 1);
    value_8 = x5 & value_7;
    value_7 = ~value_7;
    x3 &= value_7;
    x3 |= value_8;
    d0 = x3;
label_20:
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x18)) = d0;
    sfp_handle_exceptions ();
    d0 = *((x29 + 0x18));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_22:
    x2 = 0x7ff;
label_21:
    w0 = 0x0;
    goto label_4;
label_14:
    x3 = x1 + 8;
    x1 = (w5 != 0) ? x3 : x1;
    if (w4 != 0) {
        goto label_2;
    }
    goto label_3;
label_13:
    x3 = x1 + 8;
    x1 = (w5 == 0) ? x3 : x1;
    if (w4 != 0) {
        goto label_2;
    }
    goto label_3;
    if (x2 < 0x34) {
        goto label_24;
    }
    x3 = 0x3d;
    x0 = x1 | 0x8000000000000;
    x7 = x3 - x2;
    if (x7 > 0x3f) {
        goto label_25;
    }
    w7 = w2 + 3;
    w1 = w3 - w2;
    x2 = x4 << x7;
    x1 = x4 >> x1;
    x0 <<= x7;
    x2 = (x2 != 0) ? 1 : 0;
    x0 = x1 | x0;
    x1 = x0 | x2;
    w4 = (x1 != 0) ? 1 : 0;
label_9:
    if ((x1 & 7) != 0) {
        goto label_26;
    }
    if (w4 == 0) {
        goto label_27;
    }
    if ((w6 & 0xb) != 0) {
        goto label_5;
    }
    if ((x1 & 0x37) == 0) {
        goto label_28;
    }
    x2 = 0x1;
    w0 = 0x0;
    goto label_6;
    if (w5 == 0) {
label_18:
        goto label_7;
    }
    x2 = 0x7fe;
    w0 = 0x14;
    x1 = 0x0;
    goto label_3;
label_24:
    x3 = x6 & 0xc00000;
    w0 = 0x10;
    w4 = 0x1;
    x1 = 0x1;
    x2 = 0x0;
    goto label_0;
label_19:
    w0 = 0x14;
    x1 = 0x0;
    x2 = 0x7fe;
    goto label_0;
label_28:
    x2 = 0x0;
    w0 = 0x0;
    goto label_8;
label_25:
    w1 = 0x2;
    w1 -= w2;
    x3 = x0 >> x1;
    if (x7 == 0x40) {
        goto label_29;
    }
    w2 += 0x43;
    x0 <<= x2;
    do {
        x0 |= x4;
        x1 = (x0 != 0) ? 1 : 0;
        x1 = x3 | x1;
        w4 = (x1 != 0) ? 1 : 0;
        goto label_9;
label_23:
        w1 = 0x7fe;
        w2 = (w5 == 0) ? w2 : w1;
        x1 = 0xe000000000000000;
        x1 = (w5 == 0) ? 0 : x1;
        goto label_10;
label_29:
        x0 = 0x0;
    } while (1);
label_26:
    x2 = 0x0;
    w0 = 0x0;
    goto label_11;
label_27:
    x2 = 0x0;
    w0 = 0x0;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4007f8 */
#include <stdint.h>
 
uint64_t dbg_basic_operations () {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int basic_operations(double x,double y); */
    *((sp + -0x30)) = d9;
    *((sp + -0x30 + 8)) = d8;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    v8.16b = v1.16b;
    v9.16b = v0.16b;
    x19 = 0x402038;
    d0 = d9 + d8;
    x0 = x19;
    printf (x0);
    d0 = d9 - d8;
    x0 = x19;
    printf (x0);
    d0 = d8 - d9;
    x0 = x19;
    printf (x0);
    d0 = d9 * d8;
    x0 = x19;
    printf (x0);
    d0 = d9 / d8;
    x0 = x19;
    printf (x0);
    d0 = d8 / d9;
    x0 = x19;
    printf (x0);
    __asm ("fneg d0, d9");
    x0 = x19;
    printf (x0);
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    w0 = 0x7b;
    d9 = *(sp);
    d8 = *((sp + 8));
    return 0x7b;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x40200c */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [15] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void use () {
    x0 = 0x402038;
    return void (*0x400480)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4007b0 */
#include <stdint.h>
 
void dbg_converting_between_floats_l1 () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void converting_between_floats_l1(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x413000;
    s0 = *(0x413048);
    extendsftf2 ();
    x8 = 0x413000;
    *((x8 + 0x60)) = q0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x401690 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void extendsftf2 () {
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_20h_2;
    w0 = s0;
    x1 = fpcr;
    x1 = (x0 >> 0x17) & ((1 << 8) - 1);
    x4 = (x0 >> 0) & ((1 << 0x17) - 1);
    x3 = x1 + 1;
    x0 = (x0 >> 0x1f) & ((1 << 1) - 1);
    x3 &= 0xff;
    w2 = w4;
    __asm ("b.le 0x4016e8");
    x4 = x2 << 0x19;
    w2 = 0x3f80;
    w1 += w2;
    do {
label_0:
        x2 = 0x0;
        x3 = 0x0;
        x3 = (uint64_t) (x3 & 0xffff000000000000) | (x4 & 0xffffffffffff);
        d0 = x2;
        value_0 = BIT_MASK (0x30, 0xf);
        value_1 = x1 & value_0;
        value_0 = ~value_0;
        x3 &= value_0;
        x3 |= value_1;
        value_2 = BIT_MASK (0x3f, 1);
        value_3 = x0 & value_2;
        value_2 = ~value_2;
        x3 &= value_2;
        x3 |= value_3;
        v0.d = 1;
        return;
        if (x1 != 0) {
            if (x2 == 0) {
                goto label_1;
            }
            x1 = x2 << 0x19;
            x2 = 0x0;
            x3 = 0x0;
            x1 |= 0x800000000000;
            d0 = x2;
            x3 = (uint64_t) (x3 & 0xffff000000000000) | (x1 & 0xffffffffffff);
            x3 |= 0x7fff000000000000;
            value_4 = BIT_MASK (0x3f, 1);
            value_5 = x0 & value_4;
            value_4 = ~value_4;
            x3 &= value_4;
            x3 |= value_5;
            v0.d = 1;
            if ((w4 & 0x16) != 0) {
                goto label_2;
            }
            *((sp + -0x20)) = x29;
            *((sp + -0x20 + 8)) = x30;
            w0 = 0x1;
            x29 = sp;
            *((x29 + 0x10)) = q0;
            sfp_handle_exceptions ();
            q0 = *((x29 + 0x10));
            x29 = *(sp);
            x30 = *((sp + 8));
            return 0x1;
        }
        if (x2 == 0) {
            goto label_3;
        }
        x3 &= x2;
        w1 = 0x3fa9;
        w4 = w3 - 0xf;
        w1 -= w3;
        w1 &= 0x7fff;
        x4 = x2 << x4;
        x4 &= 0xffffffffffff;
    } while (1);
label_1:
    w1 = 0x7fff;
    x4 = 0x0;
    goto label_0;
label_3:
    w1 = 0x0;
    x4 = 0x0;
    goto label_0;
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400880 */
#include <stdint.h>
 
void dbg_compare_floats () {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    /* int compare_floats(double x,double y); */
    *((sp + -0x40)) = x24;
    *((sp + -0x40 + 8)) = x23;
    *((sp + 0x10)) = x22;
    *((sp + 0x10 + 8)) = x21;
    *((sp + 0x20)) = x20;
    *((sp + 0x20 + 8)) = x19;
    *((sp + 0x30)) = x29;
    *((sp + 0x30 + 8)) = x30;
    x29 = sp + 0x30;
    x19 = 0x40203b;
    w1 = (d0 == d1) ? 1 : 0;
    x0 = x19;
    w20 = (d0 != d1) ? 1 : 0;
    w21 = (d0 > d1) ? 1 : 0;
    w22 = (d0 >= d1) ? 1 : 0;
    w23 = (d0 < d1) ? 1 : 0;
    w24 = (d0 <= d1) ? 1 : 0;
    printf (x0, w1);
    x0 = x19;
    w1 = w20;
    printf (x0, w1);
    x0 = x19;
    w1 = w21;
    printf (x0, w1);
    x0 = x19;
    w1 = w22;
    printf (x0, w1);
    x0 = x19;
    w1 = w23;
    printf (x0, w1);
    x0 = x19;
    w1 = w24;
    printf (x0, w1);
    x29 = *((sp + 0x30));
    x30 = *((sp + 0x30 + 8));
    x20 = *((sp + 0x20));
    x19 = *((sp + 0x20 + 8));
    x22 = *((sp + 0x10));
    x21 = *((sp + 0x10 + 8));
    w0 = 0x7c;
    x24 = *(sp);
    x23 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4005ec */
#include <stdint.h>
 
void use_int (int64_t arg1) {
    x0 = arg1;
    w8 = w0;
    x0 = 0x40203b;
    w1 = w8;
    return void (*0x400480)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400774 */
#include <stdint.h>
 
void dbg_converting_between_floats_d1 () {
    /* void converting_between_floats_d1(); */
    x8 = 0x413000;
    s0 = *(0x413048);
    x8 = 0x413000;
    d0 = (double) s0;
    *((x8 + 0x50)) = d0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400738 */
#include <stdint.h>
 
void dbg_converting_between_floats_f1 () {
    /* void converting_between_floats_f1(); */
    x8 = 0x413000;
    d0 = global_double;
    x8 = 0x413000;
    s0 = (float) d0;
    *((x8 + 0x48)) = s0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x401f90 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x21 = .init_array;
    x20 = 0x412de8;
    x20 -= x21;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x22 = x2;
    w24 = w0;
    x23 = x1;
    init ();
    x20 >>= 3;
    if (x20 == 0) {
        goto label_0;
    }
    x19 = 0x0;
    do {
        offset_0 = x19 << 3;
        x3 = *((x21 + offset_0));
        x2 = x22;
        x1 = x23;
        w0 = w24;
        x19++;
        uint64_t (*x3)(uint32_t, uint64_t, uint64_t, uint64_t) (w0, x1, x2, x3);
    } while (x20 != x19);
label_0:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400998 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = "%zu %zu %zu %zu %zu\n";
    w1 = 1;
    w2 = 2;
    w3 = 4;
    w4 = 8;
    w5 = 8;
    printf (x0, w1, w2, w3, w4, w5);
    x0 = 0x402046;
    w1 = 4;
    w2 = 8;
    w3 = 0x10;
    printf (x0, w1, w2, w3);
    w0 = 0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x402046;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x4007d4 */
#include <stdint.h>
 
void dbg_converting_between_floats_l2 () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void converting_between_floats_l2(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x413000;
    d0 = global_double;
    extenddftf2 ();
    x8 = 0x413000;
    *((x8 + 0x60)) = q0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x40078c */
#include <stdint.h>
 
void dbg_converting_between_floats_d2 () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void converting_between_floats_d2(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x413000;
    q0 = .comment;
    trunctfdf2 ();
    x8 = 0x413000;
    *((x8 + 0x50)) = d0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400418 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 20 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    call_weak_fn ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400600 */
#include <stdint.h>
 
uint64_t dbg_read_ints () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int read_ints(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x10 = 0x413000;
    x8 = 0x413000;
    x9 = 0x413000;
    d0 = *(0x413038);
    x10 = 0x413000;
    w8 = *((x8 + 0x30));
    w9 = *((x9 + 0x32));
    d1 = *(0x413040);
    x10 = 0x413000;
    w10 = *(0x413034);
    __asm ("scvtf d2, w8");
    __asm ("scvtf d3, w9");
    d2 += d3;
    __asm ("scvtf d3, w10");
    d2 += d3;
    __asm ("scvtf d0, d0");
    d0 = d2 + d0;
    __asm ("scvtf d1, d1");
    d0 += d1;
    x0 = 0x402038;
    printf (x0);
    w0 = 0x78;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x402038;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400470 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x413010);
    x16 = 0x413010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/simple_float_ops/arm64_elf_clang_Os/subject.exe @ 0x400430 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 96 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x412ff8;
    return uint64_t (*x17)() ();
}
