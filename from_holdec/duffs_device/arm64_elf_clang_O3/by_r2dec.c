/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400490 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1380 named .text */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400460 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = *(0x411008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4004d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400470)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411030;
    x0 = 0x411030;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400530 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411030;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411030;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400570 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x411000;
    w0 = *((x19 + 0x30));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x30)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
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


r2dec has crashed (info: SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4009f0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4009f4 */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400978 */
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
    x20 = 0x410de8;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4006d0 */
#include <stdint.h>
 
void copy2_four_times (int64_t arg1, int64_t arg2, signed int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    if (w2 < 1) {
        goto label_0;
    }
    w8 = 4;
    w8 -= w2;
    do {
        if (w8 != 1) {
            if (w8 == 2) {
                goto label_1;
            }
            if (w8 == 3) {
                goto label_2;
            }
            w9 = *(x1);
            x1 += 2;
            *(x0) = w9;
            x0 += 2;
        }
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
label_1:
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
label_2:
        w9 = *(x1);
        x1 += 2;
        w8 += 4;
        *(x0) = w9;
        x0 += 2;
    } while (w8 != 4);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400648 */
#include <stdint.h>
 
void copy1_eight_times (signed int64_t arg3) {
    x2 = arg3;
    w9 = w2 + 7;
    w8 = w2 + 0xe;
    w8 = (w9 < 0) ? w8 : w9;
    w9 = (w2 < 0) ? w9 : w2;
    w9 &= 0xfffffff8;
    w9 = w2 - w9;
    if (w9 <= 7) {
        x10 = 0x400a30;
        x9 = *(0x400a30);
        w8 >>= 3;
        uint64_t (*x9)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4007a4 */
#include <stdint.h>
 
void dbg_main () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(int argc,char ** argv); */
    *((sp + -0x20)) = x20;
    *((sp + -0x20 + 8)) = x19;
    *((sp + 0x10)) = x29;
    *((sp + 0x10 + 8)) = x30;
    x29 = sp + 0x10;
    w0 = 0xc8;
    x0 = malloc (w0);
    x19 = x0;
    w0 = 0xc8;
    malloc (w0);
    w11 = *((x19 + 2));
    w12 = *((x19 + 4));
    w13 = *((x19 + 6));
    x8 = x19 + 8;
    x9 = x0 + 8;
    x10 = x0 + 0xc6;
    x14 = x19 + 0xc6;
    *((x0 + 2)) = w11;
    *((x0 + 4)) = w12;
    *((x0 + 6)) = w13;
    if (x9 > x14) {
        goto label_0;
    }
    if (x8 > x10) {
        goto label_0;
    }
    x9 = x0 + 0xe;
    w10 = 0x19;
    do {
        w11 = *(x8);
        w12 = *((x8 + 2));
        w13 = *((x8 + 4));
        w14 = *((x8 + 6));
        w10--;
        x8 += 8;
        *((x9 - 6)) = w11;
        *((x9 - 4)) = w12;
        *((x9 - 2)) = w13;
        *(x9) = w14;
        x9 += 8;
    } while (w10 > 1);
    goto label_1;
label_0:
    __asm ("ld4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x8]");
    x8 = x19 + 0x48;
    __asm ("st4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x9]");
    __asm ("ld4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x8]");
    x8 = x0 + 0x48;
    __asm ("st4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x8]");
    x8 = x19 + 0x88;
    __asm ("ld4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x8]");
    x8 = x0 + 0x88;
    __asm ("st4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x8]");
label_1:
    q0 = *((x19 + 8));
    q1 = *((x19 + 0x18));
    q2 = *((x19 + 0x28));
    w8 = *(x19);
    *((x0 + 8)) = q0;
    q0 = *((x19 + 0x38));
    *((x0 + 0x18)) = q1;
    q1 = *((x19 + 0x48));
    *((x0 + 0x28)) = q2;
    *((x0 + 0x38)) = q0;
    q0 = *((x19 + 0x68));
    q2 = *((x19 + 0x58));
    *((x0 + 0x48)) = q1;
    q1 = *((x19 + 0x78));
    *((x0 + 0x68)) = q0;
    q0 = *((x19 + 0x98));
    *((x0 + 0x58)) = q2;
    q2 = *((x19 + 0x88));
    w9 = *((x19 + 2));
    *((x0 + 0x98)) = q0;
    q0 = *((x19 + 0xa8));
    w10 = *((x19 + 4));
    w12 = *((x19 + 6));
    *(x0) = w8;
    *((x0 + 0xa8)) = q0;
    q0 = *((x19 + 0xb8));
    x11 = x0 + 0xc6;
    *((x0 + 2)) = w9;
    x13 = x19 + 0xc6;
    x8 = x0 + 0xc0;
    x9 = x19 + 0xc0;
    *((x0 + 0x78)) = q1;
    *((x0 + 0x88)) = q2;
    *((x0 + 4)) = w10;
    *((x0 + 6)) = w12;
    *((x0 + 0xb8)) = q0;
    if (x0 <= x13) {
        w10 = 0x64;
        if (x19 <= x11) {
            x8 = x0;
            x9 = x19;
        }
    } else {
        x10 = x19;
        __asm ("ld4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x10], 0x40");
        x11 = x0;
        __asm ("st4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x11], 0x40");
        __asm ("ld4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x10]");
        x10 = x19 + 0x80;
        __asm ("st4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x11]");
        __asm ("ld4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x10]");
        x10 = x0 + 0x80;
        __asm ("st4 {v0.8h, v1.8h, v2.8h, v3.8h}, [x10]");
        w10 = 4;
    }
    do {
        w11 = *(x9);
        w12 = *((x9 + 2));
        w13 = *((x9 + 4));
        w14 = *((x9 + 6));
        w10 -= 4;
        x9 += 8;
        *(x8) = w11;
        *((x8 + 2)) = w12;
        *((x8 + 4)) = w13;
        *((x8 + 6)) = w14;
        x8 += 8;
    } while (w10 != 0);
    do {
        q0 = *(x19);
        x19 += 0x10;
        *(x0) = q0;
        x0 += 0x10;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void copy1_four_times (signed int64_t arg3) {
    x2 = arg3;
    w9 = w2 + 3;
    w8 = w2 + 6;
    w8 = (w9 < 0) ? w8 : w9;
    w9 = (w2 < 0) ? w9 : w2;
    w9 &= 0xfffffffc;
    w9 = w2 - w9;
    if (w9 <= 3) {
        x10 = 0x400a10;
        x9 = *(0x400a10);
        w8 >>= 2;
        uint64_t (*x9)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400728 */
#include <stdint.h>
 
void copy2_eight_times (int64_t arg1, int64_t arg2, signed int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    if (w2 < 1) {
        goto label_0;
    }
    w8 = 8;
    w8 -= w2;
    x9 = 0x400a70;
    do {
        w10 = w8 - 1;
        if (w10 <= 6) {
            offset_0 = x10 << 3;
            x10 = *((x9 + offset_0));
            uint64_t (*x10)() ();
        }
        w10 = *(x1);
        x1 += 2;
        *(x0) = w10;
        x0 += 2;
        w10 = *(x1);
        x1 += 2;
        *(x0) = w10;
        x0 += 2;
        w10 = *(x1);
        x1 += 2;
        *(x0) = w10;
        x0 += 2;
        w10 = *(x1);
        x1 += 2;
        *(x0) = w10;
        x0 += 2;
        w10 = *(x1);
        x1 += 2;
        *(x0) = w10;
        x0 += 2;
        w10 = *(x1);
        x1 += 2;
        *(x0) = w10;
        x0 += 2;
        w10 = *(x1);
        x1 += 2;
        *(x0) = w10;
        x0 += 2;
        w10 = *(x1);
        x1 += 2;
        w8 += 8;
        *(x0) = w10;
        x0 += 2;
    } while (w8 != 8);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400418 */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400450 */
#include <stdint.h>
 
void malloc () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400480 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400430 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 96 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x400684 */
#include <stdint.h>
 
void aav_0x00400684 (int64_t arg2) {
    x1 = arg2;
    do {
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        w8--;
        *(x0) = w9;
        x0 += 2;
    } while (w8 > w8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_clang_O3/subject.exe @ 0x40061c */
#include <stdint.h>
 
void aav_0x0040061c (int64_t arg2) {
    x1 = arg2;
    do {
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        *(x0) = w9;
        x0 += 2;
        w9 = *(x1);
        x1 += 2;
        w8--;
        *(x0) = w9;
        x0 += 2;
    } while (w8 > w8);
}
