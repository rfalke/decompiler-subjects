/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xa18 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = main;
    x3 = __libc_csu_init;
    x4 = *(0x110a0);
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x820 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xc10 */
#include <stdint.h>
 
void abs () {
    __asm ("fneg d1, d0");
    d0 = (d0 >= 0) ? d0 : d1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xe30 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x870 */
#include <stdint.h>
 
uint64_t dbg_main () {
    char[100] buf1;
    char[100] buf2;
    int64_t var_50h;
    int64_t var_b8h;
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
    x0 = "Start...%c\n\n";
    w1 = 0x7;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x11000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = x29 + 0xb8;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x22 = x29 + 0x50;
    *((sp + 0x40)) = x25;
    printf (x0, w1);
    x23 = results;
    w20 = 0x0;
    x24 = 0x4d38cca;
    do {
        w1 = w20 - 1;
        if (w1 <= 4) {
            x0 = 0xec0;
            offset_0 = w1 << 32;
            w0 = *((x0 + offset_0));
            x1 = 0x8d8;
            x0 = x1 + (w0 << 2);
            uint64_t (*x0)() ();
        }
        x1 = x21;
        x0 = x22;
        w0 = dbg_stest (x0, x1);
        w1 = w0;
        *(x23) = w0;
        x0 = "\ncresult = %d\n";
        printf (w0, w1);
        w20++;
    } while (w20 != 6);
    w1 = 0x7;
    x0 = "\n\n...End%c";
    printf (x0, w1);
    x25 = *((sp + 0x40));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 = 0x0;
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x860 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xd20 */
#include <stdint.h>
 
void dbg_stest (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* int stest(char * b1,char * b2); */
    x9 = x0;
    x10 = x1;
    x8 = 0xec5;
    x7 = "0123456789abcdee";
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w6 = 0x2328;
    w5 = 0x0;
    x29 = sp;
    do {
        x1 = x8;
        x0 = x9;
        dbg_mstrcpy (x0, x1);
        x1 = x7;
        x0 = x10;
        dbg_mstrcpy (x0, x1);
        x1 = x10;
        x0 = x9;
        dbg_mstrcmp (x0, x1);
        w6--;
        w5 += w0;
    } while (w6 != w6);
    w0 = w5;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xd08 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xcdc */
#include <stdint.h>
 
uint32_t dbg_mstrcmp (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    /* int mstrcmp(char * c,char * d); */
    x3 = 0x0;
    do {
        w2 = *((x0 + x3));
        w4 = *((x1 + x3));
        if (w2 != w4) {
            w0 = w2 - w4;
            return w0;
        }
        x3++;
    } while (w2 != 0);
    w0 = 0x0;
    return w0;
}


r2dec has crashed (info: SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xea8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xa50 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x830)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xa68 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xaa0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xae0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x7f0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xb28 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xaa0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xaa0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xc20 */
#include <stdint.h>
 
void dbg_dply () {
    /* double dply(double x); */
    d2 = d0;
    d0 = 0;
    w0 = 0x65;
    do {
        w0--;
        if (w0 == w0) {
            return;
        }
        d1 = d2 * d2;
        d1 *= d2;
        d1 *= d2;
        d1 *= d2;
        d1 *= d2;
        d1 *= d2;
        d1 /= d2;
        d1 /= d2;
        d1 /= d2;
        d1 /= d2;
        d1 /= d2;
        d1 /= d2;
        d1 += d2;
        d1 += d2;
        d1 += d2;
        d1 += d2;
        d1 += d2;
        d1 = d2 + d1;
        d1 -= d2;
        d1 -= d2;
        d1 -= d2;
        d1 -= d2;
        d1 -= d2;
        d0 = d1 - d2;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xbc4 */
#include <stdint.h>
 
void dbg_sroot () {
    /* double sroot(double num); */
    d3 = 0.50000000;
    d2 = d0;
    d5 = $d;
    d1 = d0 * d3;
    do {
        d4 = d1 * d5;
        __asm ("fcmpe d2, d4");
        if (? <= ?) {
            d0 = d1;
            return;
        }
        d4 = d0 / d1;
        d2 = d4 - d1;
        d1 += d4;
        __asm ("fneg d6, d2");
        d1 *= d3;
        d2 = (d2 >= 0) ? d2 : d6;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xeac */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xe24 */
#include <stdint.h>
 
uint32_t dbg_intest () {
    /* int intest(); */
    w0 = 0x7d29;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xd84 */
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
    int64_t var_0h;
    /* int mcopy(); */
    *((sp + -0xa0)) = x29;
    *((sp + -0xa0 + 8)) = x30;
    x1 = "Disk I/O test";
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = x29 + 0x38;
    x0 = x22;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    dbg_mstrcpy (x0, x1);
    x1 = 0xef5;
    x0 = "zyxw.vut";
    x0 = fopen ("zyxw.vut", x1);
    if (x0 != 0) {
        goto label_1;
    }
    x0 = "Cannot open file";
    printf (x0);
    w0 = 0x0;
    exit (w0);
    do {
        x1 = x19;
        IO_putc ();
label_0:
        x20++;
        x0 = x22 + x20;
        w0 = *((x0 - 1));
    } while (w0 != 0);
    do {
        w21--;
        if (w21 == w21) {
            goto label_2;
        }
        x20 = 0x0;
        goto label_0;
label_1:
        x19 = x0;
        w21 = 0x3e8;
    } while (1);
label_2:
    x0 = x19;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x810 */
#include <stdint.h>
 
void fopen () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x7e0 */
#include <stdint.h>
 
void exit () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x850 */
#include <stdint.h>
 
void IO_putc () {
    x17 = .plt;
    x16 = 0x12038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x800 */
#include <stdint.h>
 
void fclose () {
    x17 = .plt;
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xb60 */
#include <stdint.h>
 
void sq (int64_t arg1) {
    x0 = arg1;
    x2 = 0x12000;
    x1 = *(0x12058);
    if (x0 != 0) {
        goto label_0;
    }
    x0 = x1 + 2;
    x4 = 0x2327;
    x3 = 0x4d38cca;
    __asm ("madd x0, x0, x4, x3");
    x4 = 0x4650;
    x0 += x1;
    x1 += x4;
    do {
        *((x2 + 0x58)) = x1;
        return;
label_0:
        x3 = x1 - 2;
        x3 = x0 - x3;
        x0 = 0x4;
        x0 -= x1;
        x4 = 0x4d38cca;
        x5 = 0x2327;
        __asm ("madd x0, x0, x5, x4");
        x0 += x3;
        x3 = 0x464f;
        x1 += x3;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xc9c */
#include <stdint.h>
 
void dbg_fib (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* unsigned int fib(int x); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    w20 = 0x0;
    do {
        __asm ("b.le 0xccc");
        w0 = w19 - 1;
        w19 -= 2;
        w0 = dbg_fib (x0);
        w20 += w0;
    } while (1);
    w0 = w20 + 1;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x7a0 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x7c0 */
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
