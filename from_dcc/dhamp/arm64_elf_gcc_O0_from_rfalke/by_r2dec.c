/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x870 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 2372 named .text */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x820 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xd28 */
#include <stdint.h>
 
void dbg_abs (int64_t arg_10h) {
    double x;
    int64_t var_8h;
    /* double abs(double x); */
    *((sp + 8)) = d0;
    d0 = *((sp + 8));
    __asm ("fcmpe d0, 0");
    if (? < ?) {
        d0 = *((sp + 8));
        __asm ("fneg d0, d0");
    } else {
        d0 = *((sp + 8));
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x1138 */
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
    x20 = 0x11da8;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x9b8 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc) {
    char[100] buf2;
    char[100] buf1;
    double dmath;
    long int square;
    int32_t i;
    int64_t var_fch;
    int64_t var_100h;
    int64_t var_100h_2;
    x0 = argc;
    /* int main(); */
    *((sp + -0x100)) = x29;
    *((sp + -0x100 + 8)) = x30;
    x29 = sp;
    *((x29 + 0xfc)) = 0;
    x0 = 0xf80;
    w1 = 0x7;
    printf (x0, w1);
    while (1) {
        w0 = *((x29 + 0xfc));
        if (w0 <= 5) {
            x1 = 0x101c;
            w0 = *(0x101c);
            x1 = fcn.000009fc;
            x0 = x1 + (w0 << 2);
            uint64_t (*x0)() ();
        }
        w0 = *((x29 + 0xfc));
        w0++;
        *((x29 + 0xfc)) = w0;
        w0 = *((x29 + 0xfc));
        __asm ("b.le 0x9d8");
    }
    x0 = 0x1010;
    w1 = 0x7;
    printf (x0, w1);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}


r2dec has crashed (info: SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x11b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8a8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = *(0xec00c);
    if (x0 != 0) {
        void (*0x830)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x12060;
    x0 = 0x12060;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8f8 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x12060;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x12060;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x938 */
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
    w0 = *((x19 + 0x60));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x12050);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x60)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x7f0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x980 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x8f8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x8f8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xd54 */
#include <stdint.h>
 
void dbg_dply (int64_t arg_20h) {
    double x;
    double y;
    int32_t i;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    /* double dply(double x); */
    *((sp + 8)) = d0;
    w0 = 0x64;
    *((sp + 0x1c)) = w0;
    while (w0 != 0) {
        d1 = *((sp + 8));
        d0 = *((sp + 8));
        d1 *= d0;
        d0 = *((sp + 8));
        d1 *= d0;
        d0 = *((sp + 8));
        d1 *= d0;
        d0 = *((sp + 8));
        d1 *= d0;
        d0 = *((sp + 8));
        d1 *= d0;
        d0 = *((sp + 8));
        d0 = d1 * d0;
        *((sp + 0x10)) = d0;
        d1 = *((sp + 0x10));
        d0 = *((sp + 8));
        d1 /= d0;
        d0 = *((sp + 8));
        d1 /= d0;
        d0 = *((sp + 8));
        d1 /= d0;
        d0 = *((sp + 8));
        d1 /= d0;
        d0 = *((sp + 8));
        d1 /= d0;
        d0 = *((sp + 8));
        d0 = d1 / d0;
        *((sp + 0x10)) = d0;
        d1 = *((sp + 0x10));
        d0 = *((sp + 8));
        d1 += d0;
        d0 = *((sp + 8));
        d1 += d0;
        d0 = *((sp + 8));
        d1 += d0;
        d0 = *((sp + 8));
        d1 += d0;
        d0 = *((sp + 8));
        d1 += d0;
        d0 = *((sp + 8));
        d0 = d1 + d0;
        *((sp + 0x10)) = d0;
        d1 = *((sp + 0x10));
        d0 = *((sp + 8));
        d1 -= d0;
        d0 = *((sp + 8));
        d1 -= d0;
        d0 = *((sp + 8));
        d1 -= d0;
        d0 = *((sp + 8));
        d1 -= d0;
        d0 = *((sp + 8));
        d1 -= d0;
        d0 = *((sp + 8));
        d0 = d1 - d0;
        *((sp + 0x10)) = d0;
        w0 = *((sp + 0x1c));
        w1 = w0 - 1;
        *((sp + 0x1c)) = w1;
    }
    d0 = *((sp + 0x10));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xc90 */
#include <stdint.h>
 
void dbg_sroot () {
    double num;
    double temp2;
    double temp1;
    char * var_18h;
    char * var_20h;
    char * var_28h;
    int64_t var_30h;
    int64_t var_30h_2;
    /* double sroot(double num); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x18)) = d0;
    d1 = *((x29 + 0x18));
    d0 = 2;
    d0 = d1 / d0;
    *((x29 + 0x20)) = d0;
    d0 = *((x29 + 0x18));
    *((x29 + 0x28)) = d0;
    while (1) {
        d1 = *((x29 + 0x18));
        d0 = *((x29 + 0x20));
        d1 /= d0;
        d0 = *((x29 + 0x20));
        d0 = d1 - d0;
        *((x29 + 0x28)) = d0;
        d0 = *((x29 + 0x28));
        dbg_abs (x0);
        *((x29 + 0x28)) = d0;
        d1 = *((x29 + 0x18));
        d0 = *((x29 + 0x20));
        d1 /= d0;
        d0 = *((x29 + 0x20));
        d1 += d0;
        d0 = 2;
        d0 = d1 / d0;
        *((x29 + 0x20)) = d0;
        d1 = *((x29 + 0x20));
        d0 = $d;
        d1 *= d0;
        d0 = *((x29 + 0x28));
        __asm ("fcmpe d1, d0");
        __asm ("b.mi 0xcb8");
    }
    d0 = *((x29 + 0x20));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x11b4 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xeb8 */
#include <stdint.h>
 
void dbg_stest (char * arg1, int64_t arg2) {
    char * b2;
    char * b1;
    int32_t j;
    int32_t i;
    int64_t var_10h;
    char * var_18h;
    char * var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    /* int stest(char * b1,char * b2); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x18)) = x0;
    *((x29 + 0x10)) = x1;
    *((x29 + 0x2c)) = 0;
    *((x29 + 0x28)) = 0;
    while (1) {
        x0 = 0x1038;
        x1 = x0;
        x0 = *((x29 + 0x18));
        dbg_mstrcpy (x0, x1, x2);
        x0 = 0x1050;
        x1 = x0;
        x0 = *((x29 + 0x10));
        dbg_mstrcpy (x0, x1, x2);
        x1 = *((x29 + 0x10));
        x0 = *((x29 + 0x18));
        w0 = dbg_mstrcmp (x0, x1, x2);
        w1 = w0;
        w0 = *((x29 + 0x28));
        w0 += w1;
        *((x29 + 0x28)) = w0;
        w0 = *((x29 + 0x2c));
        w0++;
        *((x29 + 0x2c)) = w0;
        w1 = *((x29 + 0x2c));
        w0 = 0x2327;
        __asm ("b.le 0xed4");
    }
    w0 = *((x29 + 0x28));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x10c0 */
#include <stdint.h>
 
void dbg_intest (int64_t arg_10h, int64_t arg1) {
    int32_t sum;
    int32_t k;
    int32_t j;
    int32_t i;
    int64_t var_0h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_ch;
    x0 = arg1;
    /* int intest(); */
    *((sp + 0xc)) = 0;
    goto label_1;
label_0:
    *(sp) = 0;
    *((sp + 8)) = 0;
    w0 = 0x1;
    *((sp + 4)) = w0;
    while (1) {
        w1 = *(sp);
        w0 = *((sp + 4));
        w0 = w1 + w0;
        *(sp) = w0;
        w0 = *((sp + 4));
        w0 += 2;
        *((sp + 4)) = w0;
        w0 = *((sp + 8));
        w0++;
        *((sp + 8)) = w0;
        w0 = *((sp + 8));
        __asm ("b.le 0x10e0");
    }
    w0 = *((sp + 0xc));
    w0++;
    *((sp + 0xc)) = w0;
label_1:
    w0 = *((sp + 0xc));
    __asm ("b.le 0x10cc");
    goto label_0;
    w0 = *(sp);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xfb8 */
#include <stdint.h>
 
void dbg_mstrcpy (int64_t arg_10h, char * arg1, int64_t arg2) {
    char * d;
    char * c;
    int64_t var_0h;
    char * var_8h;
    x0 = arg1;
    x1 = arg2;
    /* void mstrcpy(char * c,char * d); */
    *((sp + 8)) = x0;
    *(sp) = x1;
    do {
        x0 = *((sp + 8));
        x1 = x0 + 1;
        *((sp + 8)) = x1;
        x1 = *(sp);
        x2 = x1 + 1;
        *(sp) = x2;
        w1 = *(x1);
        *(x0) = w1;
        w0 = *(x0);
    } while (w0 != 0);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x1000 */
#include <stdint.h>
 
void dbg_mcopy () {
    char[100] buf;
    FILE * fp;
    int32_t j;
    int32_t i;
    int64_t var_18h;
    char * stream;
    char * var_88h;
    int64_t var_8ch;
    int64_t var_90h;
    int64_t var_90h_2;
    /* int mcopy(); */
    *((sp + -0x90)) = x29;
    *((sp + -0x90 + 8)) = x30;
    x29 = sp;
    x0 = mcopy;
    x1 = x0 + 0x2b8;
    x0 = x29 + 0x18;
    dbg_mstrcpy (x0, x1, x2);
    x0 = mcopy;
    x1 = x0 + 0x2c8;
    x0 = 0x1080;
    fopen (x0, x1);
    *((x29 + 0x80)) = x0;
    x0 = *((x29 + 0x80));
    if (x0 == 0) {
        x0 = 0x1090;
        printf (x0);
        w0 = 0x0;
        exit (w0);
    }
    *((x29 + 0x8c)) = 0;
    goto label_1;
label_0:
    *((x29 + 0x88)) = 0;
    while (w0 != 0) {
        x0 = *((x29 + 0x88));
        x1 = x29 + 0x18;
        w0 = *((x1 + x0));
        x1 = *((x29 + 0x80));
        IO_putc ();
        w0 = *((x29 + 0x88));
        w0++;
        *((x29 + 0x88)) = w0;
        x0 = *((x29 + 0x88));
        x1 = x29 + 0x18;
        w0 = *((x1 + x0));
    }
label_1:
    w0 = *((x29 + 0x8c));
    w0++;
    *((x29 + 0x8c)) = w0;
    w0 = *((x29 + 0x8c));
    __asm ("b.le 0x1058");
    goto label_0;
    x0 = *((x29 + 0x80));
    fclose (x0);
    w0 = *((x29 + 0x8c));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x810 */
#include <stdint.h>
 
void fopen () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x860 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x7e0 */
#include <stdint.h>
 
void exit () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x850 */
#include <stdint.h>
 
void IO_putc () {
    x17 = .plt;
    x16 = 0x12038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x800 */
#include <stdint.h>
 
void fclose () {
    x17 = .plt;
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xbbc */
#include <stdint.h>
 
void dbg_sq (int64_t arg_20h, int64_t arg1) {
    long int big;
    int32_t i;
    int64_t var_8h;
    int64_t var_1ch;
    x0 = arg1;
    /* long int sq(long int big); */
    *((sp + 8)) = x0;
    x0 = *((sp + 8));
    if (x0 != 0) {
        goto label_0;
    }
    *((sp + 0x1c)) = 0;
    while (1) {
        x0 = *(0x12058);
        x1 = *((sp + 8));
        x0 = x1 + x0;
        *((sp + 8)) = x0;
        x0 = *(0x12058);
        x1 = x0 + 2;
        x0 = 0x12058;
        *(x0) = x1;
        w0 = *((sp + 0x1c));
        w0++;
        *((sp + 0x1c)) = w0;
        w1 = *((sp + 0x1c));
        w0 = 0x2327;
        __asm ("b.le 0xbd8");
    }
    goto label_1;
label_0:
    *((sp + 0x1c)) = 0;
    while (1) {
        x0 = *(0x12058);
        x1 = x0 - 2;
        x0 = 0x12058;
        *(x0) = x1;
        x0 = *(0x12058);
        x1 = *((sp + 8));
        x0 = x1 - x0;
        *((sp + 8)) = x0;
        w0 = *((sp + 0x1c));
        w0++;
        *((sp + 0x1c)) = w0;
        w1 = *((sp + 0x1c));
        w0 = 0x2327;
        __asm ("b.le 0xc34");
    }
label_1:
    x0 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xe68 */
#include <stdint.h>
 
void dbg_fib (int64_t arg1) {
    int32_t x;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    x0 = arg1;
    /* unsigned int fib(int x); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((x29 + 0x2c)) = w0;
    w0 = *((x29 + 0x2c));
    __asm ("b.le 0xea8");
    w0 = *((x29 + 0x2c));
    w0--;
    w0 = dbg_fib (w0);
    w19 = w0;
    w0 = *((x29 + 0x2c));
    w0 -= 2;
    w0 = dbg_fib (w0);
    w0 = w19 + w0;
    goto label_0;
    w0 = 0x1;
label_0:
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x7a0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xf40 */
#include <stdint.h>
 
void dbg_mstrcmp (int64_t arg_10h, char * arg1, int64_t arg2) {
    char * d;
    char * c;
    int64_t var_0h;
    char * var_8h;
    x0 = arg1;
    x1 = arg2;
    /* int mstrcmp(char * c,char * d); */
    *((sp + 8)) = x0;
    *(sp) = x1;
    while (w1 == w0) {
        x0 = *((sp + 8));
        w0 = *(x0);
        if (w0 == 0) {
            w0 = 0x0;
            goto label_0;
        }
        x0 = *((sp + 8));
        x0++;
        *((sp + 8)) = x0;
        x0 = *(sp);
        x0++;
        *(sp) = x0;
        x0 = *((sp + 8));
        w1 = *(x0);
        x0 = *(sp);
        w0 = *(x0);
    }
    x0 = *((sp + 8));
    w0 = *(x0);
    w1 = w0;
    x0 = *(sp);
    w0 = *(x0);
    w0 = w1 - w0;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x7c0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 176 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x9fc */
#include <stdint.h>
 
void fcn_000009fc (int64_t arg_18h, int64_t arg_80h) {
    x1 = x29 + 0x18;
    x0 = x29 + 0x80;
    w0 = dbg_stest (x0, x1);
    w1 = w0;
    x0 = results;
    *(x0) = w1;
    x0 = results;
    w1 = results;
    x0 = 0xf90;
    printf (x0, w1);
    return void (*0xb88)() ();
}
