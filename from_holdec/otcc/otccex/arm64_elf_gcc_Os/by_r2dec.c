/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xa3c */
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
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x20);
    x16 = 0x20;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xca8 */
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
    x20 = 0x11d90;
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x910 */
#include <stdint.h>
 
void dbg_main (uint32_t argc, char ** argv) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,int argv); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w20 = w0;
    w0 -= 2;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x19 = (int64_t) w1;
    if (w0 < 1) {
        goto label_1;
    }
    w0 = *(x19);
    dbg_help (w0);
    do {
        w0 = 0x1;
label_0:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_1:
        w0 = w19 + 4;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w0 = atoi (w0);
        w21 = w0;
        x0 = 0x11000;
        w1 = 0xa;
        x20 = x0;
        x22 = base;
        *(x22) = w1;
        if (w20 != 3) {
            goto label_2;
        }
        w19 += 8;
        x19 = (int64_t) w19;
        w0 = *(x19);
        atoi (w0);
        *(x22) = w0;
        w0 -= 2;
        if (w0 < 0x22) {
            goto label_2;
        }
        x0 = .comment;
        x1 = .comment;
        x0 = "Invalid base\n";
        fputs (x0, x1);
    } while (1);
label_2:
    w1 = w21;
    x0 = "fib(%d) = ";
    printf (x0, w1);
    w0 = w21;
    dbg_fib (w0);
    x20 = *((x20 + 0xfa0));
    w1 = *(x20);
    dbg_print_num (x0, w1);
    w0 = 0xa;
    putchar (w0);
    w1 = w21;
    x0 = "fact(%d) = ";
    printf (x0, w1);
    __asm ("b.le 0xa1c");
    x0 = "Overflow";
    printf (x0);
    do {
        w0 = 0xa;
        putchar (w0);
        w0 = 0x0;
        goto label_0;
        x1 = 0x0;
        w0 = w21;
        x1 += dbg.fact;
        x1 = (int64_t) w1;
        uint64_t (*x1)(uint32_t, uint64_t) (w0, x1);
        w1 = *(x20);
        dbg_print_num (x0, w1);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xc80 */
#include <stdint.h>
 
void dbg_help (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int help(int name); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    x0 = "usage: %s n [base]\n";
    printf (x0, w1);
    x29 = *(sp);
    x30 = *((sp + 8));
    x0 = "Compute fib(n) and fact(n) and output the result in base 'base';
    return void (*0x8d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x880 */
#include <stdint.h>
 
void atoi () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x860 */
#include <stdint.h>
 
void fputs () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xba4 */
#include <stdint.h>
 
void dbg_fib (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int fib(int n); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    w20 = 0x0;
    do {
        __asm ("b.le 0xbd4");
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xbe4 */
#include <stdint.h>
 
void dbg_print_num (int64_t arg1, int64_t arg2) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* int print_num(int n,int b); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w20 = w0;
    x0 = 0x100;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w19 = w1;
    w0 = malloc (x0);
    w2 = w0 + 1;
    x2 = (int64_t) w2;
    do {
        w4 = w20 / w19;
        w21 = w2;
        value_0 = w4 * w19;
        w20 = value_0 - w20;
        w1 = w20 + 0x57;
        w3 = w20 + 0x30;
        w20 = w4;
        w3 = (w20 < 0xa) ? w3 : w1;
        x1 = x2 + 1;
        __asm ("sturb w3, [x2, -1]");
        if (w4 == 0) {
            x20 = (int64_t) w2;
            w19 = w2 - w0;
            x20--;
            x22 = x20 - (w19 << x20);
label_0:
            if (x20 != x22) {
                goto label_1;
            }
            w0 = w21 - w19;
            x0 = (int64_t) w0;
            free (x0);
            x19 = *((sp + 0x10));
            x20 = *((sp + 0x10 + 8));
            x21 = *((sp + 0x20));
            x22 = *((sp + 0x20 + 8));
            x29 = *(sp);
            x30 = *((sp + 8));
            return;
        }
        x2 = x1;
    } while (1);
label_1:
    w0 = *(x20);
    x20 += 0xffffffffffffffff;
    putchar (w0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x890 */
#include <stdint.h>
 
void malloc () {
    x17 = $x;
    x16 = 0x18;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void free () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x900 */
#include <stdint.h>
 
void putchar () {
    x17 = *(0x50);
    x16 = 0x50;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xd20).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xa74 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x8b0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xa88 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x68;
    x0 = 0x68;
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xac0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x68;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x68;
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xb00 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x0;
    w0 = *((x19 + 0x68));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x60);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x68)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x870 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xb48 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xac0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xac0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xd24 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0xb80 */
#include <stdint.h>
 
void dbg_fact (int64_t arg1) {
    x0 = arg1;
    /* int fact(int n); */
    w2 = w0;
    w1 = 0x2;
    w0 = 0x1;
    do {
        __asm ("b.le 0xb98");
        return;
        w0 *= w1;
        w1++;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x828 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x38);
    x16 = 0x38;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_Os/subject.exe @ 0x840 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 208 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
