/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x870 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1732 named .text */
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = *(0x11000);
    x3 = __libc_csu_init;
    x4 = *(0x11000);
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x820 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xac0 */
#include <stdint.h>
 
void abs () {
    __asm ("fcmpe d0, 0.0");
    __asm ("b.mi 0xacc");
    while (1) {
        return;
        __asm ("fneg d0, d0");
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xeb8 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xd24 */
#include <stdint.h>
 
uint64_t dbg_main () {
    char[100] buf2;
    char[100] buf1;
    int64_t var_50h;
    int64_t var_120h;
    int64_t var_120h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    /* int main(); */
    *((sp + -0x120)) = x29;
    *((sp + -0x120 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    w1 = 0x7;
    x0 = "Start...%c\n\n";
    printf (x0, w1);
    w19 = 0x1;
    x20 = 0xf4c;
    x21 = 0x11000;
    x22 = results;
    x24 = x29 + 0x50;
    while (1) {
        w19++;
        w0 = w19 - 1;
        if (w0 <= 5) {
            offset_0 = w0 << 32;
            w0 = *((x20 + offset_0));
            x1 = 0xdac;
            x0 = x1 + (w0 << 2);
            uint64_t (*x0)() ();
label_0:
            w1 = 0x7;
            x0 = "\n\n...End%c";
            printf (x0, w1);
            w0 = 0x0;
            x19 = *((sp + 0x10));
            x20 = *((sp + 0x10 + 8));
            x21 = *((sp + 0x20));
            x22 = *((sp + 0x20 + 8));
            x23 = *((sp + 0x30));
            x24 = *((sp + 0x30 + 8));
            x25 = *((sp + 0x40));
            x29 = *(sp);
            x30 = *((sp + 8));
            return 0x0;
        }
        __asm ("b.le 0xd8c");
    }
    goto label_0;
}


r2dec has crashed (info: SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf30).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x8a8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x830)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x8c0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x8f8 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x938 */
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
        x0 = *(0x1100f);
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x7f0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x980 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x8f8)() ();
        x1 = *(0x1f00d);
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xad4 */
#include <stdint.h>
 
void dbg_dply () {
    /* double dply(double x); */
    w0 = 0x64;
    do {
        w0--;
    } while (w0 != w0);
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
    d1 = d0 + d1;
    d1 -= d0;
    d1 -= d0;
    d1 -= d0;
    d1 -= d0;
    d1 -= d0;
    d0 = d1 - d0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xa60 */
#include <stdint.h>
 
void dbg_sroot () {
    /* double sroot(double num); */
    d1 = 0.50000000;
    d1 = d0 * d1;
    d2 = $d;
    d2 = d1 * d2;
    __asm ("fcmpe d0, d2");
    __asm ("b.le 0xab0");
    d5 = 0.50000000;
    d4 = $d;
    while (? >= ?) {
label_0:
        d1 = d3 + d1;
        d1 *= d5;
        d3 = d1 * d4;
        __asm ("fcmpe d3, d2");
        if (? >= ?) {
            goto label_1;
        }
        d3 = d0 / d1;
        d2 = d3 - d1;
        __asm ("fcmpe d2, 0");
    }
    __asm ("fneg d2, d2");
    goto label_0;
label_1:
    d0 = d1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xf34 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xbe8 */
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
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x22 = x0;
    x21 = x1;
    w19 = 0x2328;
    w20 = 0x0;
    x24 = "0123456789abcdef";
    x23 = "0123456789abcdee";
    do {
        x1 = x24;
        x0 = x22;
        dbg_mstrcpy (x0, x1);
        x1 = x23;
        x0 = x21;
        dbg_mstrcpy (x0, x1);
        x1 = x21;
        x0 = x22;
        w0 = dbg_mstrcmp (x0, x1);
        w20 += w0;
        w19--;
    } while (w19 != w19);
    w0 = w20;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xbd0 */
#include <stdint.h>
 
void dbg_mstrcpy (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* void mstrcpy(char * c,char * d); */
    x2 = 0x0;
    do {
        w3 = *((x1 + x2));
        *((x0 + x2)) = w3;
        x2++;
    } while (w3 != 0);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xb88 */
#include <stdint.h>
 
uint32_t dbg_mstrcmp (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int mstrcmp(char * c,char * d); */
    w3 = *(x0);
    w4 = *(x1);
    if (w3 != w4) {
        goto label_0;
    }
    if (w3 == 0) {
        goto label_1;
    }
    x2 = 0x1;
    do {
        w3 = *((x0 + x2));
        w4 = *((x1 + x2));
        if (w3 != w4) {
            goto label_0;
        }
        x2++;
    } while (w3 != 0);
    w0 = 0x0;
    return w0;
label_0:
    w0 = w3 - w4;
    return w0;
label_1:
    w0 = 0x0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xd00 */
#include <stdint.h>
 
uint32_t dbg_intest () {
    /* int intest(); */
    w1 = 0x3e8;
label_0:
    w0 = 0x1;
    do {
        w0 += 2;
    } while (w0 != 0x167);
    w1--;
    if (w1 != w1) {
        goto label_0;
    }
    w0 = 0x7d29;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xc64 */
#include <stdint.h>
 
uint64_t dbg_mcopy () {
    char[100] buf;
    int64_t var_38h;
    int64_t var_a0h;
    int64_t var_a0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_1h;
    int64_t var_1h_2;
    /* int mcopy(); */
    *((sp + -0xa0)) = x29;
    *((sp + -0xa0 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x1 = "Disk I/O test";
    x0 = x29 + 0x38;
    dbg_mstrcpy (x0, "Disk I/O test");
    x1 = 0xf98;
    x0 = "zyxw.vut";
    x0 = fopen (x0, x1);
    x20 = x0;
    w21 = 0x3e7;
    x22 = x29 + 0x38;
    if (x0 != 0) {
        goto label_1;
    }
    x0 = "Cannot open file";
    printf (x0);
    w0 = 0x0;
    exit (w0);
    do {
label_0:
        x1 = x20;
        IO_putc ();
        w0 = *(x19);
        x19++;
    } while (w0 != 0);
    do {
        w21--;
        if (w21 == w21) {
            goto label_2;
        }
label_1:
        w0 = *((x29 + 0x38));
    } while (w0 == 0);
    x19 = x22 + 1;
    goto label_0;
label_2:
    x0 = x20;
    fclose (x0);
    w0 = 0x3e8;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x3e8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x810 */
#include <stdint.h>
 
void fopen () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x860 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x7e0 */
#include <stdint.h>
 
void exit () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x850 */
#include <stdint.h>
 
void IO_putc () {
    x17 = .plt;
    x16 = 0x12038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x800 */
#include <stdint.h>
 
void fclose () {
    x17 = .plt;
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x9b8 */
#include <stdint.h>
 
void dbg_sq (int64_t arg1) {
    x0 = arg1;
    if (x0 != 0) {
        /* long int sq(long int big); */
        goto label_0;
    }
    x0 = 0x12000;
    x2 = *(0x12058);
    x0 = x2;
    x1 = x2 + (4 << 12);
    x1 += 0x650;
    do {
        x0 += 2;
    } while (x0 != x1);
    x0 = x2 + 2;
    x1 = 0x4d38cca;
    x3 = 0x2327;
    __asm ("madd x0, x0, x3, x1");
    x0 += x2;
    x2 += (4 << 12);
    x2 += 0x650;
    x1 = 0x12000;
    *((x1 + 0x58)) = x2;
    return;
label_0:
    x1 = 0x12000;
    x3 = *(0x12058);
    x4 = x3 - 2;
    x1 = x4;
    x2 = x3 - (4 << 12);
    x2 -= 0x652;
    do {
        x1 -= 2;
    } while (x1 != x2);
    x1 = x0 - x4;
    x0 = 0x4;
    x0 -= x3;
    x2 = 0x4d38cca;
    x4 = 0x2327;
    __asm ("madd x0, x0, x4, x2");
    x0 += x1;
    x3 -= (4 << 12);
    x3 -= 0x650;
    x1 = 0x12000;
    *((x1 + 0x58)) = x3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xb44 */
#include <stdint.h>
 
void dbg_fib (signed int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* unsigned int fib(int x); */
    if (w0 <= 2) {
        w0 = 0x1;
        return w0;
    }
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    w0--;
    w0 = dbg_fib (w0);
    w20 = w0;
    w0 = w19 - 2;
    w0 = dbg_fib (w0);
    w0 = w20 + w0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x7a0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x7c0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xd68 */
#include <stdint.h>
 
void fcn_00000d68 (int64_t arg_b8h) {
    x1 = x24;
    x0 = x29 + 0xb8;
    dbg_stest (x0, x1);
    x1 = *((x21 + 0xfd0));
    *(x1) = w0;
    w1 = w0;
    x0 = "\ncresult = %d\n";
    printf (w0, x1);
}
