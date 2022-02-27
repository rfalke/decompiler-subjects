/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x730 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1364 named .text */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x11010);
    x16 = 0x11010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0xc08 */
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
    x20 = 0x10db0;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0xb88 */
#include <stdint.h>
 
void dbg_main () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(int argc,char ** argv); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x0 = 0xc8;
    x0 = malloc (x0);
    x19 = x0;
    x0 = 0xc8;
    x0 = malloc (x0);
    x20 = x0;
    w2 = 0x64;
    x1 = x19;
    dbg_copy1_four_times (x0);
    w2 = 0x64;
    x1 = x19;
    x0 = x20;
    dbg_copy1_eight_times (x0);
    w2 = 0x64;
    x1 = x19;
    x0 = x20;
    dbg_copy2_four_times (x0, x1, w2);
    w2 = 0x64;
    x1 = x19;
    x0 = x20;
    dbg_copy2_eight_times (x0, x1, w2);
    x2 = 0xc8;
    x1 = x20;
    x0 = x19;
    memcmp (x0, x1, x2);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void malloc () {
    x16 = 0x11000;
    x17 = *(0x11008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x878 */
#include <stdint.h>
 
void dbg_copy1_four_times (uint32_t arg3) {
    x2 = arg3;
    /* void copy1_four_times(short int * to,short int * from,int count); */
    w3 = w2 + 6;
    w4 = w2 + 3;
    w3 = (w4 < w2) ? w3 : w4;
    w3 >>= 2;
    __asm ("negs w4, w2");
    w2 &= 3;
    w4 &= 3;
    __asm ("csneg w2, w2, w4, mi");
    if (w2 <= 3) {
        x4 = 0xc98;
        offset_0 = w2 << 32;
        w2 = *((x4 + offset_0));
        x4 = 0x8b8;
        x2 = x4 + (w2 << 2);
        uint64_t (*x2)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x918 */
#include <stdint.h>
 
void dbg_copy1_eight_times (uint32_t arg3) {
    x2 = arg3;
    /* void copy1_eight_times(short int * to,short int * from,int count); */
    w3 = w2 + 0xe;
    w4 = w2 + 7;
    w3 = (w4 < w2) ? w3 : w4;
    w3 >>= 3;
    __asm ("negs w4, w2");
    w2 &= 7;
    w4 &= 7;
    __asm ("csneg w2, w2, w4, mi");
    if (w2 <= 7) {
        x4 = 0xc9c;
        offset_0 = w2 << 32;
        w2 = *((x4 + offset_0));
        x4 = 0x958;
        x2 = x4 + (w2 << 2);
        uint64_t (*x2)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0xa10 */
#include <stdint.h>
 
void dbg_copy2_four_times (int64_t arg1, signed int64_t arg2, signed int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void copy2_four_times(short int * to,short int * from,int n); */
    __asm ("b.le 0xa98");
    w3 = 0x4;
    w3 -= w2;
    goto label_2;
label_0:
    w4 = *(x1);
    *(x0) = w4;
    x1 += 2;
    x0 += 2;
    do {
        x4 = x0 + 2;
        x5 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
label_1:
        x0 = x4 + 2;
        x1 = x5 + 2;
        w5 = *(x5);
        *(x4) = w5;
        w3 += 4;
        w2 -= 4;
        if (w2 == w2) {
            goto label_3;
        }
label_2:
    } while (w3 == 2);
    if (w3 == 3) {
        goto label_4;
    }
    if (w3 == 1) {
        goto label_0;
    }
    w4 = *(x1);
    *(x0) = w4;
    x1 += 2;
    x0 += 2;
    goto label_0;
label_4:
    x5 = x1;
    x4 = x0;
    goto label_1;
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0xa9c */
#include <stdint.h>
 
void dbg_copy2_eight_times (int64_t arg1, signed int64_t arg2, signed int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void copy2_eight_times(short int * to,short int * from,int n); */
    __asm ("b.le 0xb84");
    w3 = 0x8;
    w3 -= w2;
    x6 = 0xca4;
    while (w4 > 6) {
        w4 = *(x1);
        *(x0) = w4;
        x1 += 2;
        x0 += 2;
        w4 = *(x1);
        *(x0) = w4;
        x1 += 2;
        x0 += 2;
        x4 = x0 + 2;
        x5 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = x4 + 2;
        x1 = x5 + 2;
        w5 = *(x5);
        *(x4) = w5;
        x4 = x0 + 2;
        x5 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = x4 + 2;
        x1 = x5 + 2;
        w5 = *(x5);
        *(x4) = w5;
        x4 = x0 + 2;
        x5 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = x4 + 2;
        x1 = x5 + 2;
        w5 = *(x5);
        *(x4) = w5;
        w3 += 8;
        w2 -= 8;
        if (w2 == w2) {
            goto label_0;
        }
        w4 = w3 - 1;
    }
    offset_0 = w4 << 32;
    w4 = *((x6 + offset_0));
    x5 = fcn.00000b60;
    x4 = x5 + (w4 << 2);
    uint64_t (*x4)() ();
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x720 */
#include <stdint.h>
 
void memcmp () {
    x17 = *(0x11028);
    x16 = 0x11028;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0xc80).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x768 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x700)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x780 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x11040;
    x0 = 0x11040;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x7b8 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x11040;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x11040;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x7f8 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x11000;
    w0 = *((x19 + 0x40));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x11038);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x40)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x11000;
    x17 = *(0x11000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x840 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x7b8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x7b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0xc84 */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x698 */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x710 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x11020);
    x16 = 0x11020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x10ff8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x8f4 */
#include <stdint.h>
 
void fcn_000008f4 (int64_t arg1, signed int64_t arg2, signed int64_t arg4) {
    x0 = arg1;
    x1 = arg2;
    x3 = arg4;
    do {
        w2 = *(x1);
        *(x0) = w2;
        x1 += 2;
        x0 += 2;
        x4 = x0 + 2;
        x2 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
        w0 = *(x2);
        *(x4) = w0;
        w3--;
        __asm ("b.le 0x914");
        x0 = x4 + 2;
        x1 = x2 + 2;
        w2 = *(x1);
        *(x0) = w2;
        x1 += 2;
        x0 += 2;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0x9d4 */
#include <stdint.h>
 
void fcn_000009d4 (int64_t arg1, signed int64_t arg2, signed int64_t arg4) {
    x0 = arg1;
    x1 = arg2;
    x3 = arg4;
    do {
        w2 = *(x1);
        *(x0) = w2;
        x1 += 2;
        x0 += 2;
        x2 = x0 + 2;
        x4 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = x2 + 2;
        x1 = x4 + 2;
        w4 = *(x4);
        *(x2) = w4;
        x2 = x0 + 2;
        x4 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = x2 + 2;
        x1 = x4 + 2;
        w4 = *(x4);
        *(x2) = w4;
        x4 = x0 + 2;
        x2 = x1 + 2;
        w1 = *(x1);
        *(x0) = w1;
        w0 = *(x2);
        *(x4) = w0;
        w3--;
        __asm ("b.le 0xa0c");
        x0 = x4 + 2;
        x1 = x2 + 2;
        w2 = *(x1);
        *(x0) = w2;
        x1 += 2;
        x0 += 2;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O1/subject.exe @ 0xb60 */
#include <stdint.h>
 
void fcn_00000b60 (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg7) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    x6 = arg7;
    x5 = x1;
    x4 = x0;
    return void (*0xae8)() ();
}
