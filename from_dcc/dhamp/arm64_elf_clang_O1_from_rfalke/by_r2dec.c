/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400600 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1668 named .text */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4005b0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4009b8 */
#include <stdint.h>
 
void dbg_abs () {
    /* double abs(double x); */
    __asm ("fneg d1, d0");
    d0 = (d0 < 0) ? d1 : d0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400648 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x4005c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400660 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411058;
    x0 = 0x411058;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411058;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411058;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4006e0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400710 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
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


r2dec has crashed (info: SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400c80).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4009c8 */
#include <stdint.h>
 
void dbg_dply () {
    /* double dply(double x); */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x40094c */
#include <stdint.h>
 
void dbg_sroot () {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    /* double sroot(double num); */
    *((sp + -0x40)) = d13;
    *((sp + -0x40 + 8)) = d12;
    *((sp + 0x10)) = d11;
    *((sp + 0x10 + 8)) = d10;
    *((sp + 0x20)) = d9;
    *((sp + 0x20 + 8)) = d8;
    *((sp + 0x30)) = x29;
    *((sp + 0x30 + 8)) = x30;
    x29 = sp + 0x30;
    x8 = 0x400000;
    d10 = $d.2;
    v9.16b = v0.16b;
    d11 = 0;
    d8 = d9 * d11;
    d0 = d8 * d10;
    if (d0 >= d9) {
        goto label_0;
    }
    do {
        d12 = d9 / d8;
        d0 = d12 - d8;
        dbg_abs ();
        d1 = d8 + d12;
        d8 = d1 * d11;
        d1 = d8 * d10;
    } while (d0 > d1);
label_0:
    v0.16b = v8.16b;
    x29 = *((sp + 0x30));
    x30 = *((sp + 0x30 + 8));
    d9 = *((sp + 0x20));
    d8 = *((sp + 0x20 + 8));
    d11 = *((sp + 0x10));
    d10 = *((sp + 0x10 + 8));
    d13 = *(sp);
    d12 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400c84 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400a7c */
#include <stdint.h>
 
void dbg_stest (int64_t arg1, int64_t arg2) {
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
    /* int stest(char * b1,char * b2); */
    *((sp + -0x40)) = x24;
    *((sp + -0x40 + 8)) = x23;
    *((sp + 0x10)) = x22;
    *((sp + 0x10 + 8)) = x21;
    *((sp + 0x20)) = x20;
    *((sp + 0x20 + 8)) = x19;
    *((sp + 0x30)) = x29;
    *((sp + 0x30 + 8)) = x30;
    x29 = sp + 0x30;
    x19 = x1;
    x20 = x0;
    w21 = 0;
    w24 = 0x2328;
    x22 = "0123456789abcdef";
    x23 = "0123456789abcdee";
    do {
        x0 = x20;
        x1 = x22;
        dbg_mstrcpy (x0, x1);
        x0 = x19;
        x1 = x23;
        dbg_mstrcpy (x0, x1);
        x0 = x20;
        x1 = x19;
        w0 = dbg_mstrcmp (x0, x1);
        w21 = w0 + w21;
        w24--;
    } while (w24 != 0);
    w0 = w21;
    x29 = *((sp + 0x30));
    x30 = *((sp + 0x30 + 8));
    x20 = *((sp + 0x20));
    x19 = *((sp + 0x20 + 8));
    x22 = *((sp + 0x10));
    x21 = *((sp + 0x10 + 8));
    x24 = *(sp);
    x23 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400b38 */
#include <stdint.h>
 
void dbg_mstrcpy (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    do {
        /* void mstrcpy(char * c,char * d); */
        w8 = *(x1);
        x1++;
        *(x0) = w8;
        x0++;
    } while (w8 != 0);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400af8 */
#include <stdint.h>
 
uint32_t dbg_mstrcmp (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int mstrcmp(char * c,char * d); */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400c00 */
#include <stdint.h>
 
uint32_t dbg_intest () {
    /* int intest(); */
    w0 = 0x7d29;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400c08 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400b48 */
#include <stdint.h>
 
uint64_t dbg_mcopy () {
    int64_t var_bp_30h;
    int64_t var_ch;
    int64_t var_1h;
    int64_t var_1h_2;
    int64_t var_10h;
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
    x1 = "Disk I/O test";
    x0 = sp + 0xc;
    x21 = sp + 0xc;
    dbg_mstrcpy (x0, x1);
    x0 = "zyxw.vut";
    x1 = 0x400da0;
    x0 = fopen ("zyxw.vut", x1);
    x19 = x0;
    if (x19 == 0) {
        goto label_1;
    }
    w20 = *((sp + 0xc));
    x21++;
    w22 = 1;
label_0:
    x23 = x21;
    w8 = w20;
    if (w20 == 0) {
        goto label_2;
    }
    do {
        w0 = w8 & 0xff;
        x1 = x19;
        IO_putc ();
        w8 = *(x23);
        x23++;
    } while (w8 != 0);
label_2:
    w22++;
    if (w22 != 0x3e8) {
        goto label_0;
    }
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400750 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_bp_50h;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_50h_2;
    int64_t var_60h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    int64_t var_20h_2;
    int64_t var_20h_3;
    int64_t var_30h_2;
    int64_t var_30h_3;
    int64_t var_40h_2;
    int64_t var_40h_3;
    int64_t var_50h;
    int64_t var_50h_3;
    /* int main(); */
    *((sp + -0x60)) = x28;
    *((sp + -0x60 + 8)) = x27;
    *((sp + 0x10)) = x26;
    *((sp + 0x10 + 8)) = x25;
    *((sp + 0x20)) = x24;
    *((sp + 0x20 + 8)) = x23;
    *((sp + 0x30)) = x22;
    *((sp + 0x30 + 8)) = x21;
    *((sp + 0x40)) = x20;
    *((sp + 0x40 + 8)) = x19;
    *((sp + 0x50)) = x29;
    *((sp + 0x50 + 8)) = x30;
    x29 = sp + 0x50;
    x0 = 0x400cd8;
    w1 = 7;
    printf (x0, w1);
    w27 = 0;
    x19 = 0x400ca0;
    x28 = 0x411060;
    x20 = "\niresult = %d\n";
    x21 = "\nuresult = %u\n";
    x22 = "\nlresult = %ld";
    x23 = "\n square = %ld\n";
    x24 = "\ndresult = %f\n";
    x25 = "  dmath = %f\n";
    while (w27 != 6) {
        w8 = w27;
        if (w27 <= 5) {
            offset_0 = x8 << 3;
            x8 = *((x19 + offset_0));
            uint64_t (*x8)() ();
        }
        w27++;
    }
    x0 = "\n\n...End%c";
    w1 = 7;
    printf (x0, w1);
    w0 = 0;
    x29 = *((sp + 0x50));
    x30 = *((sp + 0x50 + 8));
    x20 = *((sp + 0x40));
    x19 = *((sp + 0x40 + 8));
    x22 = *((sp + 0x30));
    x21 = *((sp + 0x30 + 8));
    x24 = *((sp + 0x20));
    x23 = *((sp + 0x20 + 8));
    x26 = *((sp + 0x10));
    x25 = *((sp + 0x10 + 8));
    x28 = *(sp);
    x27 = *((sp + 8));
    return 0x400d5c;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4005f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411038);
    x16 = 0x411038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4008fc */
#include <stdint.h>
 
void dbg_sq (int64_t arg1) {
    x0 = arg1;
    /* long int sq(long int big); */
    x8 = 0x411000;
    x9 = *(0x411050);
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400a2c */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400548 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400580 */
#include <stdint.h>
 
void exit () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400590 */
#include <stdint.h>
 
void fclose () {
    x16 = 0x411000;
    x17 = *(0x411008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4005d0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411028);
    x16 = 0x411028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void IO_putc () {
    x17 = *(0x411030);
    x16 = 0x411030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400560 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 160 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4007e8 */
#include <stdint.h>
 
void aav_0x004007e8 (int64_t arg_8h, int64_t arg_6ch) {
    do {
        w1 = w8;
        printf (x0, w1);
        w27++;
        x0 = sp + 0x6c;
        x1 = sp + 8;
        w0 = dbg_stest (x0, x1);
        w8 = w0;
        x9 = 0x411000;
        *((x9 + 0x60)) = w8;
        x0 = "\ncresult = %d\n";
    } while (1);
}
