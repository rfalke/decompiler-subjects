/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xac0 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xd58 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x920 */
#include <stdint.h>
 
void dbg_main (uint32_t argc, char ** argv) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,int argv); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w20 = w0;
    w0 -= 2;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    x19 = (int64_t) w1;
    if (w0 >= 1) {
        w1 = *(x19);
        x0 = "usage: %s n [base]\n";
        printf (x0, w1);
        x0 = "Compute fib(n) and fact(n) and output the result in base 'base';
        puts ("Compute fib(n) and fact(n) and output the result in base 'base');
        w0 = 0x1;
label_0:
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    w0 = w19 + 4;
    x21 = 0x11000;
    x0 = (int64_t) w0;
    w0 = *(x0);
    atoi (w0);
    x23 = base;
    w22 = w0;
    w0 = 0xa;
    *(x23) = w0;
    if (w20 == 3) {
        goto label_3;
    }
label_1:
    w1 = w22;
    x0 = "fib(%d) = ";
    printf (x0, w1);
    __asm ("b.le 0xa74");
    w1 = w22;
    w2 = 0x0;
    do {
        w0 = w1 - 1;
        w1 -= 2;
        fib ();
        w2 += w0;
    } while (w1 > 2);
    x1 = *((x21 + 0xfa0));
    w0 = w2 + 1;
    w1 = *(x1);
    dbg_print_num (w0, w1);
    w0 = 0xa;
    putchar (w0);
    w1 = w22;
    x0 = "fact(%d) = ";
    printf (x0, w1);
    __asm ("b.le 0xa9c");
    x0 = "Overflow";
    printf (x0);
label_2:
    w0 = 0xa;
    putchar (w0);
    w0 = 0x0;
    goto label_0;
label_3:
    w19 += 8;
    x19 = (int64_t) w19;
    w0 = *(x19);
    w0 = atoi (w0);
    w1 = w0 - 2;
    *(x23) = w0;
    if (w1 < 0x22) {
        goto label_1;
    }
    x0 = "Invalid base\n";
    x2 = 0xd;
    x1 = 0x1;
    x3 = .comment;
    fwrite (x0, x1, x2, x3);
    w0 = 0x1;
    goto label_0;
    x1 = *((x21 + 0xfa0));
    w0 = 0x1;
    w1 = *(x1);
    dbg_print_num (w0, w1);
    w0 = 0xa;
    putchar (w0);
    w1 = w22;
    x0 = "fact(%d) = ";
    printf (x0, w1);
    x1 = 0x0;
    w0 = w22;
    x1 += dbg.fact;
    x1 = (int64_t) w1;
    uint64_t (*x1)(uint32_t, uint64_t) (w0, x1);
    x21 = *((x21 + 0xfa0));
    w1 = *(x21);
    dbg_print_num (x0, w1);
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x900 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x12030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x880 */
#include <stdint.h>
 
void atoi () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xc38 */
#include <stdint.h>
 
uint32_t fib (signed int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    __asm ("b.le 0xc7c");
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    w20 = 0x0;
    do {
        w0 = w19 - 1;
        w19 -= 2;
        w0 = fib ();
        w20 += w0;
    } while (w19 > 2);
    w0 = w20 + 1;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
    w0 = 0x1;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xc88 */
#include <stdint.h>
 
uint64_t dbg_print_num (int64_t arg1, int64_t arg2) {
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
    w22 = w1;
    x0 = malloc (x0);
    x21 = x0;
    w0++;
    x0 = (int64_t) w0;
    while (w20 != 0) {
        x0 = x4;
        w2 = w20 / w22;
        x19 = (int64_t) w0;
        x4 = x0 + 1;
        value_0 = w2 * w22;
        w3 = value_0 - w20;
        w20 = w2;
        w1 = w3 + 0x57;
        w2 = w3 + 0x30;
        w2 = (w3 < 0xa) ? w2 : w1;
        __asm ("sturb w2, [x0, -1]");
    }
    if (w21 == w19) {
        goto label_0;
    }
    w1 = ~w21;
    x20 = x19 - 2;
    w0 = w1 + w0;
    x19--;
    x20 -= x0;
    do {
        w0 = *(x19);
        x19 += 0xffffffffffffffff;
        putchar (w0);
    } while (x19 != x20);
label_0:
    x0 = (int64_t) w21;
    free (x0);
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x910 */
#include <stdint.h>
 
void putchar () {
    x17 = .plt;
    x16 = 0x12050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void fwrite () {
    x17 = .plt;
    x16 = 0x12040;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xdd0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xaf8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x8b0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xb10 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x12068;
    x0 = 0x12068;
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xb48 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x12068;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x12068;
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xb88 */
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
    w0 = *((x19 + 0x68));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x12060);
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x870 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xbd0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xb48)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xb48)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xdd4 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xc08 */
#include <stdint.h>
 
uint32_t dbg_fact (signed int64_t arg1) {
    x0 = arg1;
    /* int fact(int n); */
    __asm ("b.le 0xc30");
    w2 = w0 + 1;
    w1 = 0x2;
    w0 = 0x1;
    do {
        w0 *= w1;
        w1++;
    } while (w1 != w2);
    return;
    w0 = 0x1;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0xd30 */
#include <stdint.h>
 
void help (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x2 = 0x0;
    w1 = w0;
    x0 = x2 + 0xdf0;
    x29 = sp;
    printf (x0, w1, x2);
    x29 = *(sp);
    x30 = *((sp + 8));
    x0 = "Compute fib(n) and fact(n) and output the result in base 'base';
    return void (*0x8d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x830 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x890 */
#include <stdint.h>
 
void malloc () {
    x17 = .plt;
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void free () {
    x17 = .plt;
    x16 = 0x12038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O2/subject.exe @ 0x850 */
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
