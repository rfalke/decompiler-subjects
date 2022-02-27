/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xaf8 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x10c0 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x920 */
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
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w22 = w0;
    w0 -= 2;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x30)) = x23;
    x19 = (int64_t) w1;
    if (w0 >= 1) {
        w1 = *(x19);
        x0 = "usage: %s n [base]\n";
        printf (x0, w1);
        x0 = "Compute fib(n) and fact(n) and output the result in base 'base';
        puts ("Compute fib(n) and fact(n) and output the result in base 'base');
        w0 = 0x1;
label_1:
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
    w20 = w0;
    w0 = 0xa;
    *(x23) = w0;
    if (w22 == 3) {
        goto label_5;
    }
label_3:
    w1 = w20;
    x0 = "fib(%d) = ";
    printf (x0, w1);
    __asm ("b.le 0xaac");
    w5 = w20;
    w7 = 0x0;
label_0:
    if (w5 == 3) {
        goto label_6;
    }
    w6 = w5 - 2;
    w5 &= 1;
    w3 = w6;
    w4 = 0x0;
    do {
        w0 = w3;
        w3 -= 2;
        fib ();
        w4 += w0;
    } while (w3 != w5);
label_2:
    w4++;
    w5 = w6;
    w7 += w4;
    if (w6 > 2) {
        goto label_0;
    }
    x1 = *((x21 + 0xfa0));
    w0 = w7 + 1;
    w1 = *(x1);
    dbg_print_num (w0, w1);
    w0 = 0xa;
    putchar (w0);
    w1 = w20;
    x0 = "fact(%d) = ";
    printf (x0, w1);
    __asm ("b.le 0xad4");
    x0 = "Overflow";
    printf (x0);
label_4:
    w0 = 0xa;
    putchar (w0);
    w0 = 0x0;
    goto label_1;
label_6:
    w4 = 0x0;
    w6 = 0x1;
    goto label_2;
label_5:
    w0 = w19 + 8;
    x0 = (int64_t) w0;
    w0 = *(x0);
    w0 = atoi (w0);
    w1 = w0 - 2;
    *(x23) = w0;
    if (w1 < 0x22) {
        goto label_3;
    }
    x0 = "Invalid base\n";
    x2 = 0xd;
    x1 = 0x1;
    x3 = .comment;
    fwrite (x0, x1, x2, x3);
    w0 = 0x1;
    goto label_1;
    x1 = *((x21 + 0xfa0));
    w0 = 0x1;
    w1 = *(x1);
    dbg_print_num (w0, w1);
    w0 = 0xa;
    putchar (w0);
    w1 = w20;
    x0 = "fact(%d) = ";
    printf (x0, w1);
    x1 = 0x0;
    w0 = w20;
    x1 += dbg.fact;
    x1 = (int64_t) w1;
    uint64_t (*x1)(uint32_t, uint64_t) (w0, x1);
    x21 = *((x21 + 0xfa0));
    w1 = *(x21);
    dbg_print_num (x0, w1);
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x900 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x12030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x880 */
#include <stdint.h>
 
void atoi () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xd80 */
#include <stdint.h>
 
uint32_t fib (signed int64_t arg1) {
    signed int64_t var_6ch;
    char * var_70h;
    int64_t var_74h;
    int64_t var_78h;
    char * var_7ch;
    char * var_80h;
    int64_t var_84h;
    char * var_88h;
    int64_t var_8ch;
    char * var_90h;
    int64_t var_94h;
    int64_t var_98h;
    int64_t var_9ch;
    int64_t var_a0h;
    int64_t var_a0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_50h_2;
    x0 = arg1;
    __asm ("b.le 0xfc0");
    *((sp + -0xa0)) = x29;
    *((sp + -0xa0 + 8)) = x30;
    x29 = sp;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w25 = w0;
    w0 -= 3;
    w25--;
    w0 &= 1;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    *((x29 + 0x6c)) = w0;
    *((x29 + 0x98)) = 0;
label_12:
    w1 = w25;
    if (w25 == 2) {
        goto label_15;
    }
    *((x29 + 0x94)) = 0;
label_13:
    if (w1 == 3) {
        goto label_16;
    }
    w0 = w1 - 2;
    w1 &= 1;
    *((x29 + 0x70)) = w1;
    *((x29 + 0x80)) = w0;
    *((x29 + 0x80 + 4)) = w0;
    *((x29 + 0x9c)) = 0;
label_5:
    w0 = *((x29 + 0x84));
    if (w0 == 2) {
        goto label_17;
    }
    *((x29 + 0x90)) = 0;
label_4:
    if (w0 == 3) {
        goto label_18;
    }
    w1 = w0 - 2;
    w0 &= 1;
    w27 = w1;
    *((x29 + 0x74)) = w0;
    *((x29 + 0x74 + 4)) = w1;
    *((x29 + 0x8c)) = 0;
label_3:
    w24 = w27;
    if (w27 == 2) {
        goto label_19;
    }
    *((x29 + 0x88)) = 0;
label_2:
    if (w24 == 3) {
        goto label_20;
    }
    w0 = w24 - 2;
    w24 &= 1;
    w22 = w0;
    w23 = 0x0;
    *((x29 + 0x7c)) = w0;
label_1:
    w19 = w22;
    if (w22 == 2) {
        goto label_21;
    }
    w21 = 0x0;
label_0:
    if (w19 == 3) {
        goto label_22;
    }
    w20 = w19 - 2;
    w19 &= 1;
    w26 = w20;
    w28 = 0x0;
    do {
        w0 = w26;
        w26 -= 2;
        w0 = fib ();
        w28 += w0;
    } while (w26 != w19);
    w2 = w28 + 1;
label_6:
    w19 = w20;
    w21 += w2;
    if (w20 > 2) {
        goto label_0;
    }
    w21++;
label_7:
    w22 -= 2;
    w23 += w21;
    if (w24 != w22) {
        goto label_1;
    }
    w23++;
label_8:
    w0 = *((x29 + 0x7c));
    w24 = w0;
    w0 = *((x29 + 0x88));
    w0 += w23;
    *((x29 + 0x88)) = w0;
    if (w0 > 2) {
        goto label_2;
    }
    w0++;
label_9:
    w1 = *((x29 + 0x8c));
    w27 -= 2;
    w0 = w1 + w0;
    *((x29 + 0x8c)) = w0;
    w0 = *((x29 + 0x74));
    if (w0 != w27) {
        goto label_3;
    }
    w0 = *((x29 + 0x8c));
    w0++;
label_10:
    w1 = *((x29 + 0x90));
    w0 = w1 + w0;
    *((x29 + 0x90)) = w0;
    w0 = *((x29 + 0x78));
    if (w0 > 2) {
        goto label_4;
    }
    w0 = *((x29 + 0x90));
    w0++;
label_11:
    w2 = *((x29 + 0x9c));
    w1 = *((x29 + 0x84));
    w0 = w2 + w0;
    *((x29 + 0x9c)) = w0;
    w1 -= 2;
    w0 = *((x29 + 0x70));
    *((x29 + 0x84)) = w1;
    if (w0 != w1) {
        goto label_5;
    }
    w0 = *((x29 + 0x9c));
    w0++;
    goto label_23;
label_22:
    w2 = 0x1;
    w20 = w2;
    goto label_6;
label_21:
    w21 = 0x1;
    goto label_7;
label_20:
    w23 = 0x1;
    *((x29 + 0x7c)) = w23;
    goto label_8;
label_19:
    w0 = 0x1;
    goto label_9;
label_18:
    w0 = 0x1;
    *((x29 + 0x78)) = w0;
    goto label_10;
label_17:
    w0 = 0x1;
    goto label_11;
label_15:
    w0 = 0x1;
label_14:
    w1 = *((x29 + 0x98));
    w25 -= 2;
    w0 = w1 + w0;
    *((x29 + 0x98)) = w0;
    w0 = *((x29 + 0x6c));
    if (w0 != w25) {
        goto label_12;
    }
    w0 = *((x29 + 0x98));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0++;
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
    w0 = 0x1;
    return w0;
label_16:
    w0 = 0x1;
    *((x29 + 0x80)) = w0;
label_23:
    w2 = *((x29 + 0x94));
    w1 = *((x29 + 0x80));
    w0 = w2 + w0;
    *((x29 + 0x94)) = w0;
    if (w1 > 2) {
        goto label_13;
    }
    w0++;
    goto label_14;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xff0 */
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
        w1 = w3 + 0x30;
        w2 = w3 + 0x57;
        w2 = (w3 > 9) ? w2 : w1;
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
    } while (x20 != x19);
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x910 */
#include <stdint.h>
 
void putchar () {
    x17 = .plt;
    x16 = 0x12050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void fwrite () {
    x17 = .plt;
    x16 = 0x12040;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x1138).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xb30 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x8b0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xb48 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xb80 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xbc0 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x870 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xc08 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xb80)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xb80)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x113c */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0xc40 */
#include <stdint.h>
 
void dbg_fact (uint32_t arg1) {
    x0 = arg1;
    /* int fact(int n); */
    w2 = w0;
    __asm ("b.le 0xd40");
    w0 -= 5;
    w1 = w2 - 2;
    w4 = w2 - 1;
    w0 >>= 2;
    w0++;
    w1 = w0 << 2;
    if (w1 < 8) {
        goto label_0;
    }
    v0.4s = 0x1;
    w3 = 0x0;
    q1 = $d;
    v2.4s = 0x4;
    do {
        v0.4s *= v1.4s;
        w3++;
        v1.4s += v2.4s;
    } while (w0 > w3);
    v1.4s = 0x0;
    w1 += 2;
    __asm ("ext v2.16b, v0.16b, v1.16b, 8");
    v0.4s *= v2.4s;
    __asm ("ext v1.16b, v0.16b, v1.16b, 4");
    v0.4s *= v1.4s;
    w0 = v0.s;
    while (1) {
        w3 = w1 + 1;
        w0 *= w1;
        if (w2 >= w3) {
            w4 = w1 + 2;
            w0 *= w3;
            if (w2 < w4) {
                goto label_1;
            }
            w3 = w1 + 3;
            w0 *= w4;
            if (w2 < w3) {
                goto label_1;
            }
            w4 = w1 + 4;
            w0 *= w3;
            if (w2 < w4) {
                goto label_1;
            }
            w3 = w1 + 5;
            w0 *= w4;
            if (w2 < w3) {
                goto label_1;
            }
            w4 = w1 + 6;
            w0 *= w3;
            if (w2 < w4) {
                goto label_1;
            }
            w3 = w1 + 7;
            w0 *= w4;
            if (w2 < w3) {
                goto label_1;
            }
            w1 += 8;
            w0 *= w3;
            if (w2 < w1) {
                goto label_2;
            }
            w0 *= w1;
            return w0;
            w0 = 0x1;
        }
label_1:
        return w0;
        return;
label_0:
        w0 = 0x1;
        w1 = 0x2;
    }
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x1098 */
#include <stdint.h>
 
void help (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x2 = 0x1000;
    w1 = w0;
    x0 = x2 + 0x158;
    x29 = sp;
    printf (x0, w1, x2);
    x29 = *(sp);
    x30 = *((sp + 8));
    x0 = "Compute fib(n) and fact(n) and output the result in base 'base';
    return void (*0x8d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x830 */
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
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x890 */
#include <stdint.h>
 
void malloc () {
    x17 = .plt;
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void free () {
    x17 = .plt;
    x16 = 0x12038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/otcc/otccex/arm64_elf_gcc_O3/subject.exe @ 0x850 */
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
