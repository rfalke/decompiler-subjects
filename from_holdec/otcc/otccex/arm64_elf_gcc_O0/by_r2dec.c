/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x920 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1324 named .text */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xdd0 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xbf4 */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    int32_t f;
    int32_t n;
    int32_t s;
    char * var_18h;
    int64_t var_1ch;
    signed int64_t var_24h;
    char * var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,int argv); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    w0 = *((x29 + 0x1c));
    if (w0 != 2) {
        w0 = *((x29 + 0x1c));
        if (w0 != 3) {
            x0 = *((x29 + 0x18));
            w0 = *(x0);
            *((x29 + 0x2c)) = w0;
            w0 = *((x29 + 0x2c));
            dbg_help (w0);
            w0 = 0x1;
        }
    } else {
        w0 = *((x29 + 0x18));
        w0 += 4;
        x0 = (int64_t) w0;
        w0 = *(x0);
        atoi (w0);
        *((x29 + 0x28)) = w0;
        x0 = base;
        w1 = 0xa;
        *(x0) = w1;
        w0 = *((x29 + 0x1c));
        __asm ("b.le 0xce4");
        w0 = *((x29 + 0x18));
        w0 += 8;
        x0 = (int64_t) w0;
        w0 = *(x0);
        w0 = atoi (w0);
        w1 = w0;
        x0 = base;
        *(x0) = w1;
        x0 = base;
        w0 = base;
        __asm ("b.le 0xcb8");
        x0 = base;
        w0 = base;
        __asm ("b.le 0xce4");
        x0 = .comment;
        x1 = .comment;
        x0 = "Invalid base\n";
        x3 = x1;
        x2 = 0xd;
        x1 = 0x1;
        fwrite ("Invalid base\n", x1, x2, x3);
        w0 = 0x1;
        goto label_0;
        x0 = "fib(%d) = ";
        w1 = *((x29 + 0x28));
        printf (x0, w1);
        w0 = *((x29 + 0x28));
        w0 = dbg_fib (w0);
        w2 = w0;
        x0 = base;
        w0 = base;
        w1 = w0;
        w0 = w2;
        dbg_print_num (w0, w1);
        w0 = 0xa;
        putchar (w0);
        x0 = "fact(%d) = ";
        w1 = *((x29 + 0x28));
        printf (x0, w1);
        w0 = *((x29 + 0x28));
        __asm ("b.le 0xd4c");
        x0 = "Overflow";
        printf (x0);
        goto label_1;
        x0 = 0x0;
        x0 += dbg.fact;
        *((x29 + 0x24)) = w0;
        x0 = *((x29 + 0x24));
        x1 = x0;
        w0 = *((x29 + 0x28));
        w0 = uint64_t (*x1)(uint32_t, uint64_t) (w0, x1);
        w2 = w0;
        x0 = base;
        w0 = base;
        w1 = w0;
        w0 = w2;
        dbg_print_num (w0, w1);
label_1:
        w0 = 0xa;
        putchar (w0);
        w0 = 0x0;
    }
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xe48).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x958 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x8b0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x970 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x9a8 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x9e8 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x870 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xa30 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x11000;
    x0 += dbg.help;
    x1 = *(x0);
    while (x1 == 0) {
        void (*0x9a8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x9a8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xe4c */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xab8 */
#include <stdint.h>
 
void dbg_fact (int64_t arg_20h, int64_t arg1) {
    int32_t n;
    int32_t r;
    int32_t i;
    int64_t var_ch;
    int64_t var_18h;
    int64_t var_1ch;
    x0 = arg1;
    /* int fact(int n); */
    *((sp + 0xc)) = w0;
    w0 = 0x1;
    *((sp + 0x18)) = w0;
    w0 = 0x2;
    *((sp + 0x1c)) = w0;
    while (1) {
        w1 = *((sp + 0x18));
        w0 = *((sp + 0x1c));
        w0 = w1 * w0;
        *((sp + 0x18)) = w0;
        w0 = *((sp + 0x1c));
        w0++;
        *((sp + 0x1c)) = w0;
        w1 = *((sp + 0x1c));
        w0 = *((sp + 0xc));
        __asm ("b.le 0xad4");
    }
    w0 = *((sp + 0x18));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xa68 */
#include <stdint.h>
 
void dbg_fib (int64_t arg1) {
    int32_t n;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int fib(int n); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((x29 + 0x2c)) = w0;
    w0 = *((x29 + 0x2c));
    if (w0 <= 2) {
        w0 = 0x1;
    } else {
        w0 = *((x29 + 0x2c));
        w0--;
        w0 = dbg_fib (w0);
        w19 = w0;
        w0 = *((x29 + 0x2c));
        w0 -= 2;
        w0 = dbg_fib (w0);
        w0 = w19 + w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xb0c */
#include <stdint.h>
 
void dbg_print_num (signed int64_t arg1, char * arg2) {
    int32_t b;
    int32_t n;
    int32_t tab;
    int32_t p;
    char * var_18h;
    signed int64_t var_1ch;
    void * ptr;
    char * var_28h;
    signed int64_t c;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    /* int print_num(int n,int b); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    x0 = 0x100;
    malloc (x0);
    *((x29 + 0x24)) = w0;
    w0 = *((x29 + 0x24));
    *((x29 + 0x2c)) = w0;
    do {
        w0 = *((x29 + 0x1c));
        w1 = *((x29 + 0x18));
        w2 = w0 / w1;
        w1 = *((x29 + 0x18));
        w1 = w2 * w1;
        w0 -= w1;
        *((x29 + 0x28)) = w0;
        w0 = *((x29 + 0x28));
        __asm ("b.le 0xb68");
        w0 = *((x29 + 0x28));
        w0 += 0x57;
        *((x29 + 0x28)) = w0;
        goto label_0;
        w0 = *((x29 + 0x28));
        w0 += 0x30;
        *((x29 + 0x28)) = w0;
label_0:
        x0 = *((x29 + 0x2c));
        w1 = *((x29 + 0x28));
        w1 = (int8_t) w1;
        *(x0) = w1;
        w0 = *((x29 + 0x2c));
        w0++;
        *((x29 + 0x2c)) = w0;
        w1 = *((x29 + 0x1c));
        w0 = *((x29 + 0x18));
        w0 = w1 / w0;
        *((x29 + 0x1c)) = w0;
        w0 = *((x29 + 0x1c));
        if (w0 == 0) {
            goto label_1;
        }
    } while (1);
label_1:
    while (w1 != w0) {
        w0 = *((x29 + 0x2c));
        w0--;
        *((x29 + 0x2c)) = w0;
        x0 = *((x29 + 0x2c));
        w0 = *(x0);
        putchar (w0);
        w1 = *((x29 + 0x2c));
        w0 = *((x29 + 0x24));
    }
    x0 = *((x29 + 0x24));
    free (x0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0xd98 */
#include <stdint.h>
 
uint64_t dbg_help (char * arg1) {
    int32_t name;
    char * var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int help(int name); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    x0 = "usage: %s n [base]\n";
    w1 = *((x29 + 0x1c));
    printf (w0, w1);
    x0 = "Compute fib(n) and fact(n) and output the result in base 'base';
    puts ("Compute fib(n) and fact(n) and output the result in base 'base');
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xec0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x900 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x12030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x830 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x880 */
#include <stdint.h>
 
void atoi () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x890 */
#include <stdint.h>
 
void malloc () {
    x17 = .plt;
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void free () {
    x17 = .plt;
    x16 = 0x12038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void fwrite () {
    x17 = .plt;
    x16 = 0x12040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x910 */
#include <stdint.h>
 
void putchar () {
    x17 = .plt;
    x16 = 0x12050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O0/subject.exe @ 0x850 */
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
