/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400600 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1996 named .text */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x4005b0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x412018);
    x16 = 0x412018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400ad8 */
#include <stdint.h>
 
void abs () {
    __asm ("fneg d1, d0");
    d0 = (d0 < 0) ? d1 : d0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400648 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x4005c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400660 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x412058;
    x0 = 0x412058;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x412058;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x412058;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x4006e0 */
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
    w0 = *((x19 + 0x58));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x58)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400710 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x411df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x4006a0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x4006a0)() ();
}


r2dec has crashed (info: SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400dc8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400ae8 */
#include <stdint.h>
 
void dply () {
    d1 = d0 * d0;
    d1 *= d0;
    d1 *= d0;
    d1 *= d0;
    d1 *= d0;
    d1 *= d0;
    d1 /= d0;
    d1 /= d0;
    d1 /= d0;
    d1 /= d0;
    d1 /= d0;
    d1 /= d0;
    d1 += d0;
    d1 += d0;
    d1 += d0;
    d1 += d0;
    d1 += d0;
    d1 += d0;
    d1 -= d0;
    d1 -= d0;
    d1 -= d0;
    d1 -= d0;
    d1 -= d0;
    d0 = d1 - d0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400a8c */
#include <stdint.h>
 
void sroot () {
    x8 = 0x400000;
    d2 = *(0x400de8);
    v1.16b = v0.16b;
    d3 = 0;
    d0 = d1 * d3;
    d4 = d0 * d2;
    if (d4 >= d1) {
        goto label_0;
    }
    do {
        d4 = d1 / d0;
        d5 = d4 - d0;
        d0 += d4;
        __asm ("fneg d4, d5");
        d0 *= d3;
        d4 = (d5 < 0) ? d4 : d5;
        d5 = d0 * d2;
    } while (d4 > d5);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400dcc */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400b9c */
#include <stdint.h>
 
void stest (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x10 = 0x400000;
    x11 = 0x400000;
    q0 = *(0x400df0);
    q1 = *(0x400e00);
    x8 = x0;
    w0 = 0;
    w9 = 0;
    x10 = x1 + 1;
    x11 = x8 + 1;
    w12 = 0x2328;
label_0:
    *(x8) = q0;
    *((x8 + 0x10)) = 0;
    *(x1) = q1;
    *((x1 + 0x10)) = 0;
    w13 = *(x8);
    w16 = *(x1);
    x14 = x11;
    x15 = x10;
    if (w13 != w16) {
        goto label_1;
    }
    do {
        w13 &= 0xff;
        if (w13 == 0) {
            goto label_2;
        }
        w13 = *(x14);
        x14++;
        w16 = *(x15);
        x15++;
    } while (w13 == w16);
label_1:
    w13 -= w16;
    goto label_3;
label_2:
    w13 = 0;
label_3:
    w0 = w13 + w0;
    w9++;
    if (w9 != w12) {
        goto label_0;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400d44 */
#include <stdint.h>
 
uint32_t dbg_intest () {
    /* int intest(); */
    w0 = 0x7d29;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400d50 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400c64 */
#include <stdint.h>
 
void mstrcpy (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    do {
        w8 = *(x1);
        x1++;
        *(x0) = w8;
        x0++;
    } while (w8 != 0);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400c74 */
#include <stdint.h>
 
uint64_t dbg_mcopy () {
    int64_t var_bp_30h;
    int64_t var_ch;
    int64_t var_1h;
    int64_t var_1h_2;
    int64_t var_10h;
    int64_t var_0h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    int64_t var_20h_2;
    int64_t var_20h_3;
    int64_t var_30h;
    int64_t var_30h_3;
    /* int mcopy(); */
    *((sp + -0x40)) = x24;
    *((sp + -0x40 + 8)) = x23;
    *((sp + 0x10)) = x22;
    *((sp + 0x10 + 8)) = x21;
    *((sp + 0x20)) = x20;
    *((sp + 0x20 + 8)) = x19;
    *((sp + 0x30)) = x29;
    *((sp + 0x30 + 8)) = x30;
    x29 = sp + 0x30;
    x8 &= 0xffff0000ffffffff;
    x8 |= 0x492000000000;
    x8 &= 0xffffffff0000ffff;
    x8 |= 0x6b730000;
    x8 = 0x49206b736f6f;
    w9 = 0x7765;
    w10 = 0x74;
    x0 = "zyxw.vut";
    x1 = 0x400ed8;
    *((sp + 0xc)) = x8;
    *((sp + 0x14)) = w9;
    *((sp + 0x18)) = w10;
    x0 = fopen (x0, x1);
    x19 = x0;
    if (x19 == 0) {
        goto label_1;
    }
    w20 = *((sp + 0xc));
    if (w20 == 0) {
        goto label_2;
    }
    x8 = sp + 0xc;
    x21 = x8 + 1;
    w22 = 1;
label_0:
    x23 = x21;
    w8 = w20;
    do {
        w0 = w8 & 0xff;
        x1 = x19;
        IO_putc ();
        w8 = *(x23);
        x23++;
    } while (w8 != 0);
    w22++;
    if (w22 != 0x3e8) {
        goto label_0;
    }
label_2:
    x0 = x19;
    fclose (x0);
    w0 = 0x3e8;
    x29 = *((sp + 0x30));
    x30 = *((sp + 0x30 + 8));
    x20 = *((sp + 0x20));
    x19 = *((sp + 0x20 + 8));
    x22 = *((sp + 0x10));
    x21 = *((sp + 0x10 + 8));
    x24 = *(sp);
    x23 = *((sp + 8));
    return 0x3e8;
label_1:
    x0 = "Cannot open file";
    printf (w0);
    w0 = 0x0;
    exit (w0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400750 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_bp_60h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_1h;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_60h_2;
    int64_t var_a0h;
    int64_t var_1h_2;
    int64_t var_70h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    int64_t var_20h_2;
    int64_t var_20h_3;
    int64_t var_30h_2;
    int64_t var_30h_3;
    int64_t var_40h_2;
    int64_t var_40h_3;
    int64_t var_50h_2;
    int64_t var_50h_3;
    int64_t var_60h;
    int64_t var_60h_3;
    /* int main(); */
    *((sp + -0x70)) = d9;
    *((sp + -0x70 + 8)) = d8;
    *((sp + 0x10)) = x28;
    *((sp + 0x10 + 8)) = x27;
    *((sp + 0x20)) = x26;
    *((sp + 0x20 + 8)) = x25;
    *((sp + 0x30)) = x24;
    *((sp + 0x30 + 8)) = x23;
    *((sp + 0x40)) = x22;
    *((sp + 0x40 + 8)) = x21;
    *((sp + 0x50)) = x20;
    *((sp + 0x50 + 8)) = x19;
    *((sp + 0x60)) = x29;
    *((sp + 0x60 + 8)) = x30;
    x29 = sp + 0x60;
    x0 = "Start...%c\n\n";
    w1 = 7;
    printf (x0, w1);
    x10 = 0x400000;
    x11 = 0x400000;
    q0 = *(0x400df0);
    x10 = 0x400000;
    q1 = *(0x400e00);
    d8 = *(0x400de8);
    x8 = sp + 0x30;
    x9 = sp + 0xa0;
    w27 = 0;
    x28 = $d.3;
    w20 = 0x2328;
    x19 = 0x412060;
    w21 = 0xd7db;
    x22 = 0x412000;
    x23 = x8 | 1;
    x24 = x9 | 1;
    d9 = 0;
    x25 = "  dmath = %f\n";
    *((sp + 0x20)) = q0;
    *((sp + 0x10)) = q1;
    while (w27 != 6) {
        w8 = w27;
        if (w27 <= 5) {
            offset_0 = x8 << 3;
            x9 = *((x28 + offset_0));
            w1 = 0;
            w8 = 0;
            uint64_t (*x9)() ();
        }
        w27++;
    }
    x0 = "\n\n...End%c";
    w1 = 7;
    printf (x0, w1);
    w0 = 0;
    x29 = *((sp + 0x60));
    x30 = *((sp + 0x60 + 8));
    x20 = *((sp + 0x50));
    x19 = *((sp + 0x50 + 8));
    x22 = *((sp + 0x40));
    x21 = *((sp + 0x40 + 8));
    x24 = *((sp + 0x30));
    x23 = *((sp + 0x30 + 8));
    x26 = *((sp + 0x20));
    x25 = *((sp + 0x20 + 8));
    x28 = *((sp + 0x10));
    x27 = *((sp + 0x10 + 8));
    d9 = *(sp);
    d8 = *((sp + 8));
    return 0x400ec4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x4005f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x412038);
    x16 = 0x412038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400a3c */
#include <stdint.h>
 
void sq (int64_t arg1) {
    x0 = arg1;
    x8 = 0x412000;
    x9 = *(0x412050);
    if (x0 != 0) {
        x10 = 0x2327;
        w11 = 0x1dfc;
        x12 = 0x464f;
        __asm ("madd x10, x9, x10, x0");
        x0 = x10 + x11;
        x10 = x9 + x12;
        *((x8 + 0x50)) = x10;
        return;
    }
    w11 = 0x2328;
    w10 = 0x4650;
    w12 = 0xd7db;
    x10 = x9 + x10;
    __asm ("madd x0, x9, x11, x12");
    *((x8 + 0x50)) = x10;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400b4c */
#include <stdint.h>
 
void dbg_fib (signed int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* unsigned int fib(int x); */
    *((sp + -0x20)) = x20;
    *((sp + -0x20 + 8)) = x19;
    *((sp + 0x10)) = x29;
    *((sp + 0x10 + 8)) = x30;
    x29 = sp + 0x10;
    if (w0 < 3) {
        goto label_0;
    }
    w20 = w0 - 1;
    w19 = 1;
    do {
        w0 = w20;
        w0 = dbg_fib (w0);
        w19 = w0 + w19;
        w8 = w20 - 1;
        w20 -= 2;
    } while (w8 > 2);
    goto label_1;
label_0:
    w19 = 1;
label_1:
    x29 = *((sp + 0x10));
    x30 = *((sp + 0x10 + 8));
    w0 = w19;
    x20 = *(sp);
    x19 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400548 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400c24 */
#include <stdint.h>
 
uint32_t mstrcmp (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    w8 = *(x0);
    w11 = *(x1);
    if (w8 != w11) {
        goto label_0;
    }
    x9 = x1 + 1;
    x10 = x0 + 1;
    do {
        w8 &= 0xff;
        if (w8 == 0) {
            goto label_1;
        }
        w8 = *(x10);
        x10++;
        w11 = *(x9);
        x9++;
    } while (w8 == w11);
label_0:
    w0 = w8 - w11;
    return w0;
label_1:
    w0 = 0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400580 */
#include <stdint.h>
 
void exit () {
    x16 = 0x412000;
    x17 = *(0x412000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400590 */
#include <stdint.h>
 
void fclose () {
    x16 = 0x412000;
    x17 = *(0x412008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x412010);
    x16 = 0x412010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x4005d0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x412028);
    x16 = 0x412028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void IO_putc () {
    x17 = *(0x412030);
    x16 = 0x412030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x400560 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 160 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x411ff8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O3_from_rfalke/subject.exe @ 0x40080c */
#include <stdint.h>
 
void aav_0x0040080c (int64_t arg_10h, int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
label_0:
    w11 = 0x30;
    x9 = x24;
    x10 = x23;
    *((sp + 0xa0)) = q0;
    *((sp + 0xb0)) = 0;
    *((sp + 0x30)) = q1;
    *((sp + 0x40)) = 0;
    do {
        w11 &= 0xff;
        if (w11 == 0) {
            goto label_1;
        }
        w11 = *(x9);
        x9++;
        w12 = *(x10);
        x10++;
        w12 = w11 - w12;
    } while (w12 == w11);
    goto label_2;
label_1:
    w12 = 0;
label_2:
    w1 = w12 + w1;
    w8++;
    if (w8 != w20) {
        goto label_0;
    }
    x8 = 0x412000;
    x0 = "\ncresult = %d\n";
    *((x8 + 0x60)) = w1;
    printf (x0, w1);
    q1 = *((sp + 0x10));
    q0 = *((sp + 0x10 + 16));
    return void (*0x4009a8)() ();
}
