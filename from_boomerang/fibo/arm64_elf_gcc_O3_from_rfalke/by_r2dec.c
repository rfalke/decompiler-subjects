/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x818 */
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
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xd48 */
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
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x740 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int32_t number;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int main(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x0 = "Input number: ";
    x29 = sp;
    printf (x0);
    x1 = x29 + 0x1c;
    x0 = 0xdf0;
    isoc99_scanf ();
    w10 = *((x29 + 0x1c));
    __asm ("b.le 0x80c");
    w8 = w10 - 1;
    w6 = w10 - 3;
    w5 = w10;
    w9 = 0x0;
label_0:
    if (w8 == 1) {
        goto label_2;
    }
    w7 = w5 - 2;
    w0 = w5 - 4;
    w5 = w6 & 0xfffffffe;
    w3 = w7;
    w5 = w0 - w5;
    w4 = 0x0;
    do {
        w0 = w3;
        w3 -= 2;
        fib ();
        w4 += w0;
    } while (w3 != w5);
    w0 = w6 & 1;
label_1:
    w4 = w0 + w4;
    w5 = w7;
    w9 += w4;
    w8 -= 2;
    w6 -= 2;
    if (w7 > 1) {
        goto label_0;
    }
    w2 = w10 & 1;
    do {
        w2 = w9 + w2;
        w1 = w10;
        x0 = "fibonacci(%d) = %d\n";
        printf (x0, w1, w2);
        w0 = 0x0;
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
label_2:
        w0 = w8;
        w7 = w5 - 2;
        w4 = 0x0;
        goto label_1;
        w2 = w10;
        w9 = 0x0;
    } while (1);
}


r2dec has crashed (info: SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xdc0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x850 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x700)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x868 */
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
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8a0 */
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
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8e0 */
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
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x928 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x8a0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x8a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xdc4 */
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
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x960 */
#include <stdint.h>
 
void fib (uint32_t arg1) {
    char * var_68h;
    int64_t var_6ch;
    char * var_70h;
    int64_t var_74h;
    int64_t var_78h;
    char * var_7ch;
    char * var_80h;
    int64_t var_84h;
    char * var_88h;
    int64_t var_8ch;
    char * var_90h;
    uint32_t var_94h;
    int64_t var_98h;
    int64_t var_9ch;
    int64_t var_a0h;
    int64_t var_a4h;
    int64_t var_a8h;
    int64_t var_ach;
    int64_t var_b0h;
    int64_t var_b4h;
    int64_t var_b8h;
    int64_t var_bch;
    int64_t var_c0h;
    int64_t var_c4h;
    int64_t var_c8h;
    int64_t var_cch;
    int64_t var_d0h;
    int64_t var_d0h_2;
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
    *((sp + -0xd0)) = x29;
    *((sp + -0xd0 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    __asm ("b.le 0xccc");
    w1 = w0 - 2;
    w2 = w0 - 3;
    *((x29 + 0x68)) = w1;
    w0--;
    w1 &= 0xfffffffe;
    *((x29 + 0x94)) = w0;
    *((x29 + 0x94 + 4)) = w2;
    w0 = w2 - w1;
    *((x29 + 0xc8)) = 0;
    *((x29 + 0x74)) = w0;
label_12:
    w1 = *((x29 + 0x94));
    w0 = w1;
    if (w1 == 1) {
        goto label_15;
    }
    w2 = w1 - 1;
    w1 -= 3;
    *((x29 + 0xac)) = w2;
    *((x29 + 0xac + 4)) = w1;
    *((x29 + 0xc0)) = 0;
label_13:
    w1 = *((x29 + 0xac));
    if (w1 == 1) {
        goto label_16;
    }
    w1 = w0 - 2;
    w0 -= 4;
    w2 = w0;
    w0 = *((x29 + 0xb0));
    *((x29 + 0x7c)) = w1;
    w0 &= 0xfffffffe;
    *((x29 + 0x8c)) = w1;
    *((x29 + 0x8c + 4)) = w2;
    w0 = w2 - w0;
    *((x29 + 0xb8)) = 0;
    *((x29 + 0x70)) = w0;
label_5:
    w1 = *((x29 + 0x8c));
    w0 = w1;
    if (w1 == 1) {
        goto label_17;
    }
    w2 = w1 - 1;
    w1 -= 3;
    *((x29 + 0xa4)) = w2;
    *((x29 + 0xa4 + 4)) = w1;
    *((x29 + 0xc4)) = 0;
label_4:
    w1 = *((x29 + 0xa4));
    if (w1 == 1) {
        goto label_18;
    }
    w1 = w0 - 2;
    w0 -= 4;
    w2 = w0;
    w0 = *((x29 + 0xa8));
    *((x29 + 0x80)) = w1;
    *((x29 + 0x80 + 4)) = w1;
    w0 &= 0xfffffffe;
    *((x29 + 0x88)) = w2;
    w0 = w2 - w0;
    *((x29 + 0xb4)) = 0;
    *((x29 + 0x6c)) = w0;
label_3:
    w0 = *((x29 + 0x84));
    w25 = w0;
    if (w0 == 1) {
        goto label_19;
    }
    w1 = w0 - 1;
    w0 -= 3;
    *((x29 + 0x9c)) = w1;
    *((x29 + 0x9c + 4)) = w0;
    *((x29 + 0xbc)) = 0;
label_2:
    w0 = *((x29 + 0x9c));
    if (w0 == 1) {
        goto label_20;
    }
    w1 = *((x29 + 0xa0));
    w0 = w25 - 2;
    w25 -= 4;
    w24 = w0;
    w27 = w1 & 0xfffffffe;
    *((x29 + 0x78)) = w0;
    w0 = w25 - w27;
    w26 = 0x0;
    *((x29 + 0xcc)) = w0;
label_1:
    w20 = w24;
    if (w24 == 1) {
        goto label_21;
    }
    w22 = w24 - 1;
    w21 = w24 - 3;
    w27 = 0x0;
label_0:
    w28 = w20 - 2;
    if (w22 == 1) {
        goto label_22;
    }
    w20 -= 4;
    w23 = w21 & 0xfffffffe;
    w19 = w28;
    w23 = w20 - w23;
    w20 = 0x0;
    do {
        w0 = w19;
        w19 -= 2;
        w0 = fib ();
        w20 += w0;
    } while (w23 != w19);
    w0 = w21 & 1;
label_6:
    w20 = w0 + w20;
    w27 += w20;
    w22 -= 2;
    w20 = w28;
    w21 -= 2;
    if (w28 > 1) {
        goto label_0;
    }
    w20 = w25 & 1;
label_7:
    w0 = *((x29 + 0xcc));
    w24 -= 2;
    w20 += w27;
    w25 -= 2;
    w26 += w20;
    if (w0 != w24) {
        goto label_1;
    }
    w0 = *((x29 + 0xa0));
    w0 &= 1;
label_8:
    w1 = *((x29 + 0xbc));
    w0 += w26;
    w25 = *((x29 + 0x78));
    w0 = w1 + w0;
    *((x29 + 0xbc)) = w0;
    w0 = *((x29 + 0x9c));
    w0 -= 2;
    *((x29 + 0x9c)) = w0;
    w0 = *((x29 + 0xa0));
    w0 -= 2;
    *((x29 + 0xa0)) = w0;
    if (w25 > 1) {
        goto label_2;
    }
    w0 = *((x29 + 0x88));
    w25 = w0 & 1;
label_9:
    w1 = *((x29 + 0xbc));
    w0 = *((x29 + 0x84));
    w25 = w1 + w25;
    w1 = *((x29 + 0x6c));
    w0 -= 2;
    *((x29 + 0x84)) = w0;
    w0 = *((x29 + 0xb4));
    w0 += w25;
    *((x29 + 0xb4)) = w0;
    w0 = *((x29 + 0x88));
    w0 -= 2;
    *((x29 + 0x88)) = w0;
    if (w1 != w0) {
        goto label_3;
    }
    w0 = *((x29 + 0xa8));
    w0 &= 1;
label_10:
    w1 = *((x29 + 0xb4));
    w0 = w1 + w0;
    w1 = *((x29 + 0xc4));
    w0 = w1 + w0;
    w1 = *((x29 + 0xa4));
    *((x29 + 0xc4)) = w0;
    w1 -= 2;
    w0 = *((x29 + 0x80));
    *((x29 + 0xa4)) = w1;
    w1 = *((x29 + 0xa8));
    w1 -= 2;
    *((x29 + 0xa8)) = w1;
    if (w0 > 1) {
        goto label_4;
    }
    w0 = *((x29 + 0x90));
    w0 &= 1;
label_11:
    w1 = *((x29 + 0xc4));
    w0 = w1 + w0;
    w1 = *((x29 + 0xb8));
    w0 = w1 + w0;
    w1 = *((x29 + 0x70));
    *((x29 + 0xb8)) = w0;
    w0 = *((x29 + 0x8c));
    w0 -= 2;
    *((x29 + 0x8c)) = w0;
    w0 = *((x29 + 0x90));
    w0 -= 2;
    *((x29 + 0x90)) = w0;
    if (w1 != w0) {
        goto label_5;
    }
    w0 = *((x29 + 0xb0));
    w0 &= 1;
    goto label_23;
label_22:
    w0 = w22;
    w20 = 0x0;
    goto label_6;
label_21:
    w27 = 0x0;
    goto label_7;
label_20:
    w1 = w25 - 2;
    w26 = 0x0;
    w0 = *((x29 + 0x9c));
    *((x29 + 0x78)) = w1;
    goto label_8;
label_19:
    *((x29 + 0xbc)) = 0;
    goto label_9;
label_18:
    w0 -= 2;
    *((x29 + 0xb4)) = 0;
    *((x29 + 0x80)) = w0;
    w0 = *((x29 + 0xa4));
    goto label_10;
label_17:
    *((x29 + 0xc4)) = 0;
    goto label_11;
label_15:
    *((x29 + 0xc0)) = 0;
label_14:
    w2 = *((x29 + 0xc0));
    w1 = *((x29 + 0x94));
    w0 = w2 + w0;
    w2 = *((x29 + 0x74));
    w1 -= 2;
    *((x29 + 0x94)) = w1;
    w1 = *((x29 + 0xc8));
    w0 = w1 + w0;
    *((x29 + 0xc8)) = w0;
    w0 = *((x29 + 0x98));
    w0 -= 2;
    *((x29 + 0x98)) = w0;
    if (w2 != w1) {
        goto label_12;
    }
    w0 = *((x29 + 0x68));
    w0 &= 1;
    goto label_24;
    *((x29 + 0xc8)) = 0;
label_24:
    w1 = *((x29 + 0xc8));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 = w1 + w0;
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
label_16:
    w0 -= 2;
    *((x29 + 0xb8)) = 0;
    *((x29 + 0x7c)) = w0;
    w0 = *((x29 + 0xac));
label_23:
    w1 = *((x29 + 0xb8));
    w2 = *((x29 + 0xc0));
    w1 = w0 + w1;
    w0 = *((x29 + 0x7c));
    w1 = w2 + w1;
    *((x29 + 0xc0)) = w1;
    w1 = *((x29 + 0xac));
    w1 -= 2;
    *((x29 + 0xac)) = w1;
    w1 = *((x29 + 0xb0));
    w1 -= 2;
    *((x29 + 0xb0)) = w1;
    if (w0 > 1) {
        goto label_13;
    }
    w0 = *((x29 + 0x98));
    w0 &= 1;
    goto label_14;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6a0 */
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
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x710 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x720 */
#include <stdint.h>
 
void isoc99_scanf () {
    x17 = .plt;
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x730 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6c0 */
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
