/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf60 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 852 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = main;
    x3 = __libc_csu_init;
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf20 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x13018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x1238 */
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
    x20 = 0x12db0;
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x10a8 */
#include <stdint.h>
 
uint64_t dbg_main () {
    char[80] line;
    char * s;
    int64_t var_b0h;
    int64_t var_b0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_0h_2;
    int64_t var_0h_4;
    int64_t var_0h_3;
    int64_t var_1h;
    int8_t var_0h;
    /* int main(); */
    *((sp + -0xb0)) = x29;
    *((sp + -0xb0 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    x0 = 0xc;
    malloc (x0);
    x1 = "HelloWorld";
    *((x0 + 8)) = x1;
    x27 = x1;
    x0 = x1;
    w0 = strlen (x0);
    w23 = 0xa;
    w23 = (w0 <= 0xa) ? w0 : w23;
    w25 = w23 << 3;
    w26 = w25 - 1;
    w22 = w23 - 1;
    x22++;
    x22 <<= 3;
    w20 = 0x0;
    x19 = x29 + 0x60;
    x21 = (int64_t) w26;
    w24 = w25 - 1;
    x24 = x21 - x24;
    goto label_3;
label_0:
    x0 = x19 + x6;
    *((x0 + 7)) = w9;
    x7++;
    x6 += 8;
    if (x6 == x22) {
        goto label_1;
    }
label_2:
    w1 = *(x7);
    w1 -= 0x20;
    w1 = (w1 >= w1) ? w1 : 0;
    w0 = w1 + 7;
    w0 = (w1 < 0) ? w0 : w1;
    w0 >>= 3;
    w2 = w20 + (w0 << 3);
    w0 = w2 - w0;
    offset_0 = w0 << 3;
    x5 = *((x8 + offset_0));
    w0 = w1 & 7;
    w1 = w0 << 3;
    w1 -= w0;
    w4 = w1 + 7;
    w0 = w1;
    w1 = w6 - w1;
    do {
        offset_1 = w0 << 32;
        w3 = *((x5 + offset_1));
        w2 = w1 + w0;
        offset_2 = w2 << 32;
        *((x19 + offset_2)) = w3;
        w0++;
    } while (w0 != w4);
    goto label_0;
    if ((w26 & 0x1f) != 0) {
label_1:
        goto label_4;
    }
    w0 = *((x19 + x21));
    if (w0 != 0x20) {
        goto label_4;
    }
    x0 = x19 + x21;
    x3 = x19 + x24;
    w2 = w25 - 2;
    x2 = (int64_t) w2;
    do {
        *(x0) = 0;
        if (x0 == x3) {
            goto label_4;
        }
        x0--;
        x1 = x0 - x21;
        x1 += x2;
        w1 = *((x1 + 1));
    } while (w1 == 0x20);
label_4:
    x0 = x19;
    puts (x0);
    w20++;
    if (w20 != 7) {
label_3:
        __asm ("b.le 0x1190");
        goto label_1;
        x7 = x27;
        x6 = 0x0;
        x8 = 0x13048;
        w9 = 0x20;
        goto label_2;
    }
    x0 = 0x22d8;
    puts (x0);
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}


r2dec has crashed (info: SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x12b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf98 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xf30)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xfb0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = .bss;
    x0 = .bss;
    x1 += 7;
    x1 -= x0;
    if (x1 >= 0xe) {
        x1 = *(0x12000);
        if (x1 == 0) {
            goto label_0;
        }
        uint64_t (*x1)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xfe8 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x1028 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x13000;
    w0 = *((x19 + 0x2e8));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x13040);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x2e8)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf00 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x1070 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xfe8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xfe8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x12b4 */
#include <stdint.h>
 
void fini () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [14] -r-x section size 16 named .fini */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xeb0 */
#include <stdint.h>
 
void init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [11] -r-x section size 20 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    call_weak_fn ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xef0 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf10 */
#include <stdint.h>
 
void malloc () {
    x17 = .plt;
    x16 = 0x13010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf40 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf50 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x13030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xed0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 144 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x12ff8;
    return uint64_t (*x17)() ();
}
