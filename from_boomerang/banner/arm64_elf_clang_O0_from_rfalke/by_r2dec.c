/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400530 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1052 named .text */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x412010);
    x16 = 0x412010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400578 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400500)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400590 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005d0 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400610 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x412000;
    w0 = *((x19 + 0x2e0));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x2e0)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400640 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x411df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x4005d0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x4005d0)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400948).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x40094c */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4008d0 */
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
    x20 = 0x411de8;
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400680 */
#include <stdint.h>
 
void dbg_main () {
    int64_t var_24h;
    int64_t var_20h;
    int64_t var_1ch;
    int64_t var_18h;
    int64_t var_14h;
    int64_t var_10h;
    int64_t var_8h;
    int64_t var_0h_2;
    int64_t var_0h_3;
    int64_t var_0h_5;
    char * s;
    int64_t var_0h_4;
    int64_t var_0h;
    int64_t var_sp_10h;
    /* int main(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0xc;
    *((x29 - 4)) = 0;
    malloc (x0);
    w8 = 2;
    x30 = "HelloWorld";
    *((x29 - 0x10)) = x0;
    x0 = *((x29 - 0x10));
    *((x0 + 8)) = x30;
    *((x29 - 8)) = w8;
    x0 = *((x29 - 0x10));
    x0 += 8;
    *((x29 - 0x10)) = x0;
label_2:
    w8 = *((x29 - 8));
    w8--;
    *((x29 - 8)) = w8;
    if (w8 == 0) {
        goto label_3;
    }
    x8 = *((x29 - 0x10));
    x0 = *(x8);
    w0 = strlen (x0);
    w9 = w0;
    *((x29 - 0x20)) = w9;
    w9 = *((x29 - 0x20));
    __asm ("b.le 0x4006f8");
    w8 = 0xa;
    *((x29 - 0x20)) = w8;
    *((x29 - 0x14)) = 0;
label_1:
    w8 = *((x29 - 0x14));
    if (w8 >= 7) {
        goto label_4;
    }
    *((x29 - 0x18)) = 0;
label_0:
    w8 = *((x29 - 0x18));
    w9 = *((x29 - 0x20));
    if (w8 >= w9) {
        goto label_5;
    }
    __asm ("ldursw x8, [x29, -0x18]");
    x9 = *((x29 - 0x10));
    x9 = *(x9);
    x8 = x9 + x8;
    w10 = *(x8);
    w10 -= 0x20;
    *((x29 - 0x24)) = w10;
    if ((w10 & 0x1f) != 0) {
        *((x29 - 0x24)) = 0;
    }
    *((x29 - 0x1c)) = 0;
    do {
        w8 = *((x29 - 0x1c));
        if (w8 >= 7) {
            goto label_6;
        }
        x8 = sp + 0xc;
        x9 = 0x412040;
        w10 = 7;
        w11 = 8;
        w12 = *((x29 - 0x24));
        w13 = 8;
        w14 = w12 / w11;
        value_0 = w14 * w11;
        w11 = value_0 - w12;
        w11 *= w10;
        w12 = *((x29 - 0x1c));
        w11 += w12;
        w15 = w11;
        x15 = (int64_t) w15;
        w11 = *((x29 - 0x24));
        w12 = w11 + 7;
        w11 = (w11 < 0) ? w12 : w11;
        w11 >>= 3;
        w10 = w11 * w10;
        w11 = *((x29 - 0x14));
        w10 += w11;
        w16 = w10;
        x16 = (int64_t) w16;
        x17 = 8;
        x16 *= x17;
        x9 += x16;
        x9 = *(x9);
        x9 += x15;
        w10 = *(x9);
        w11 = *((x29 - 0x18));
        w12 = *((x29 - 0x1c));
        w11 = w12 + (w11 << 3);
        w9 = w11;
        x9 = (int64_t) w9;
        x8 += x9;
        *(x8) = w10;
        *((sp + 8)) = w13;
        w8 = *((x29 - 0x1c));
        w8++;
        *((x29 - 0x1c)) = w8;
    } while (1);
label_6:
    w8 = 0x20;
    x9 = sp + 0xc;
    w10 = 7;
    w11 = *((x29 - 0x18));
    w10 += (w11 << 3);
    w12 = w10;
    x12 = (int64_t) w12;
    x9 += x12;
    *(x9) = w8;
    w8 = *((x29 - 0x18));
    w8++;
    *((x29 - 0x18)) = w8;
    goto label_0;
label_5:
    w8 = *((x29 - 0x20));
    w8 <<= 3;
    w8--;
    *((x29 - 0x18)) = w8;
    do {
        w8 = *((x29 - 0x18));
        if ((w8 & 0x1f) != 0) {
            goto label_7;
        }
        x8 = sp + 0xc;
        __asm ("ldursw x9, [x29, -0x18]");
        x8 += x9;
        w10 = *(x8);
        if (w10 != 0x20) {
        } else {
            x8 = sp + 0xc;
            __asm ("ldursw x9, [x29, -0x18]");
            x8 += x9;
            *(x8) = 0;
            w8 = *((x29 - 0x18));
            w8--;
            *((x29 - 0x18)) = w8;
        } while (1);
    }
label_7:
    x0 = sp + 0xc;
    puts (x0);
    *((sp + 4)) = w0;
    w8 = *((x29 - 0x14));
    w8++;
    *((x29 - 0x14)) = w8;
    goto label_1;
label_4:
    x8 = 0x401000;
    x0 = x8 + 0x7a0;
    puts (x0);
    *(sp) = w0;
    x8 = *((x29 - 0x10));
    x8 += 8;
    *((x29 - 0x10)) = x8;
    goto label_2;
label_3:
    w8 = 0;
    w0 = w8;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400498 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004d0 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x412000;
    x17 = *(0x412000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400520 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x412028);
    x16 = 0x412028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004e0 */
#include <stdint.h>
 
void malloc () {
    x16 = 0x412000;
    x17 = *(0x412008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400510 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x412020);
    x16 = 0x412020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x411ff8;
    return uint64_t (*x17)() ();
}
