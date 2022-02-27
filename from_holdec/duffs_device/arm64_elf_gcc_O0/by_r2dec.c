/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x730 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1948 named .text */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x12010);
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0xe50 */
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
    x20 = 0x11db0;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0xdc4 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
    short int * dest;
    short int * src;
    char * s2;
    void * s1;
    size_t size;
    int64_t var_40h;
    int64_t var_40h_2;
    char ** var_0h_2;
    int64_t var_0h;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x10)) = x1;
    x0 = 0xc8;
    *((x29 + 0x38)) = x0;
    x0 = *((x29 + 0x38));
    malloc (x0);
    *((x29 + 0x30)) = x0;
    x0 = *((x29 + 0x38));
    malloc (x0);
    *((x29 + 0x28)) = x0;
    w2 = 0x64;
    x1 = *((x29 + 0x30));
    x0 = *((x29 + 0x28));
    dbg_copy1_four_times (x0, x1, w2, x3);
    w2 = 0x64;
    x1 = *((x29 + 0x30));
    x0 = *((x29 + 0x28));
    dbg_copy1_eight_times (x0, x1, w2, x3);
    w2 = 0x64;
    x1 = *((x29 + 0x30));
    x0 = *((x29 + 0x28));
    dbg_copy2_four_times (x0, x1, w2, x3);
    w2 = 0x64;
    x1 = *((x29 + 0x30));
    x0 = *((x29 + 0x28));
    dbg_copy2_eight_times (x0, x1, w2, x3);
    x2 = *((x29 + 0x38));
    x1 = *((x29 + 0x28));
    x0 = *((x29 + 0x30));
    memcmp (x0, x1, x2);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xc8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void malloc () {
    x16 = 0x12000;
    x17 = *(0x12008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x878 */
#include <stdint.h>
 
void dbg_copy1_four_times (int64_t arg_30h, char * arg1, int64_t arg2, int64_t arg3) {
    int32_t count;
    short int * from;
    short int * to;
    int32_t n;
    int64_t var_ch;
    int64_t var_0h_2;
    char * var_0h;
    int64_t var_0h_3;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void copy1_four_times(short int * to,short int * from,int count); */
    *((sp + 0x18)) = x0;
    *((sp + 0x10)) = x1;
    *((sp + 0xc)) = w2;
    w0 = *((sp + 0xc));
    w0 += 3;
    w1 = w0 + 3;
    w0 = (w0 < 0) ? w1 : w0;
    w0 >>= 2;
    *((sp + 0x2c)) = w0;
    w0 = *((sp + 0xc));
    __asm ("negs w1, w0");
    w0 &= 3;
    w1 &= 3;
    __asm ("csneg w0, w0, w1, mi");
    if (w0 <= 3) {
        x1 = 0xee0;
        w0 = *(0xee0);
        x1 = fcn.000008d8;
        x0 = x1 + (w0 << 2);
        uint64_t (*x0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x97c */
#include <stdint.h>
 
void dbg_copy1_eight_times (int64_t arg_30h, char * arg1, int64_t arg2, int64_t arg3) {
    int32_t count;
    short int * from;
    short int * to;
    int32_t n;
    int64_t var_ch;
    int64_t var_0h_2;
    char * var_0h;
    int64_t var_0h_3;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void copy1_eight_times(short int * to,short int * from,int count); */
    *((sp + 0x18)) = x0;
    *((sp + 0x10)) = x1;
    *((sp + 0xc)) = w2;
    w0 = *((sp + 0xc));
    w0 += 7;
    w1 = w0 + 7;
    w0 = (w0 < 0) ? w1 : w0;
    w0 >>= 3;
    *((sp + 0x2c)) = w0;
    w0 = *((sp + 0xc));
    __asm ("negs w1, w0");
    w0 &= 7;
    w1 &= 7;
    __asm ("csneg w0, w0, w1, mi");
    if (w0 <= 7) {
        x1 = 0xef0;
        w0 = *(0xef0);
        x1 = fcn.000009dc;
        x0 = x1 + (w0 << 2);
        uint64_t (*x0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0xb00 */
#include <stdint.h>
 
void dbg_copy2_four_times (int64_t arg_20h, char * arg1, int64_t arg2, int64_t arg3) {
    int32_t n;
    short int * from;
    short int * to;
    int64_t var_ch;
    int64_t var_10h;
    char * var_18h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void copy2_four_times(short int * to,short int * from,int n); */
    *((sp + 0x18)) = x0;
    *((sp + 0x10)) = x1;
    *((sp + 0xc)) = w2;
    w0 = *((sp + 0xc));
    __asm ("b.le 0xbf4");
    do {
        w0 = *((sp + 0xc));
        if (w0 == 0) {
            goto label_0;
        }
        w1 = 0x4;
        w0 = *((sp + 0xc));
        w0 = w1 - w0;
        if (w0 != 2) {
            if (w0 == 3) {
                goto label_1;
            }
            if (w0 != 1) {
                x0 = *((sp + 0x18));
                x1 = x0 + 2;
                *((sp + 0x18)) = x1;
                x1 = *((sp + 0x10));
                x2 = x1 + 2;
                *((sp + 0x10)) = x2;
                w1 = *(x1);
                *(x0) = w1;
            } else {
            }
            x0 = *((sp + 0x18));
            x1 = x0 + 2;
            *((sp + 0x18)) = x1;
            x1 = *((sp + 0x10));
            x2 = x1 + 2;
            *((sp + 0x10)) = x2;
            w1 = *(x1);
            *(x0) = w1;
        } else {
        }
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        goto label_2;
label_1:
label_2:
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        w0 = *((sp + 0xc));
        w0 -= 4;
        *((sp + 0xc)) = w0;
    } while (1);
    goto label_3;
label_0:
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0xc0c */
#include <stdint.h>
 
void dbg_copy2_eight_times (int64_t arg_20h, char * arg1, int64_t arg2, int64_t arg3) {
    int32_t n;
    short int * from;
    short int * to;
    int64_t var_ch;
    int64_t var_10h;
    char * var_18h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void copy2_eight_times(short int * to,short int * from,int n); */
    *((sp + 0x18)) = x0;
    *((sp + 0x10)) = x1;
    *((sp + 0xc)) = w2;
    w0 = *((sp + 0xc));
    __asm ("b.le 0xdac");
    do {
        w0 = *((sp + 0xc));
        if (w0 == 0) {
            goto label_0;
        }
        w1 = 0x8;
        w0 = *((sp + 0xc));
        w0 = w1 - w0;
        w0--;
        if (w0 <= 6) {
            x1 = 0xf10;
            w0 = *(0xf10);
            x1 = 0xc64;
            x0 = x1 + (w0 << 2);
            uint64_t (*x0)() ();
        }
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        w0 = *((sp + 0xc));
        w0 -= 8;
        *((sp + 0xc)) = w0;
    } while (1);
    goto label_1;
label_0:
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x720 */
#include <stdint.h>
 
void memcmp () {
    x17 = *(0x12028);
    x16 = 0x12028;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0xec8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x768 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x700)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x780 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x12040;
    x0 = 0x12040;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x7b8 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x12040;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x12040;
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x7f8 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x12000;
    w0 = *((x19 + 0x40));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x12038);
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = *(0x12000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x840 */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0xecc */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x698 */
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
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x710 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x12020);
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x8d8 */
#include <stdint.h>
 
void fcn_000008d8 (int64_t arg_10h, int64_t arg_18h, int64_t arg_2ch) {
    do {
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        w0 = *((sp + 0x2c));
        w0--;
        *((sp + 0x2c)) = w0;
        w0 = *((sp + 0x2c));
    } while (w0 > 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/arm64_elf_gcc_O0/subject.exe @ 0x9dc */
#include <stdint.h>
 
void fcn_000009dc (int64_t arg_10h, int64_t arg_18h, int64_t arg_2ch) {
    do {
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        x0 = *((sp + 0x18));
        x1 = x0 + 2;
        *((sp + 0x18)) = x1;
        x1 = *((sp + 0x10));
        x2 = x1 + 2;
        *((sp + 0x10)) = x2;
        w1 = *(x1);
        *(x0) = w1;
        w0 = *((sp + 0x2c));
        w0--;
        *((sp + 0x2c)) = w0;
        w0 = *((sp + 0x2c));
    } while (w0 > 0);
}
