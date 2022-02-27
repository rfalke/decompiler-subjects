/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7f8 */
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
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x11000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xad0 */
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
    x20 = 0x10db0;
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
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x740 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int32_t number;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int main(); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x0 = "Input number: ";
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x0;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x21 = x20 + 0xb68;
    printf (x0);
    x1 = x29 + 0x3c;
    x0 = x21;
    isoc99_scanf ();
    w19 = *((x29 + 0x3c));
    w1 = w19;
    while (1) {
        w2 = w19;
        x0 = "fibonacci(%d) = %d\n";
        printf (x0, x1, w2);
        w0 = 0x0;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
        if (w19 != 2) {
            goto label_1;
        }
        w19 = 0x1;
        w22 = 0x0;
label_0:
        w0 = w22;
        w0 = fib ();
        w1 = w0 + w19;
        x0 = x20 + 0xb68;
        printf (x0, w1);
        w1 = *((x29 + 0x3c));
    }
label_1:
    w0 = w19 - 2;
    w0 = fib ();
    w22 = w0 - 1;
    w19 = w0;
    w0 = w22;
    w0 = fib ();
    w1 = w19 + w0;
    x0 = x21;
    printf (x0, w1);
    goto label_0;
}


r2dec has crashed (info: SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xb48).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x830 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x700)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x848 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x11040;
    x0 = 0x11040;
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
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x880 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x11040;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x11040;
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
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x11000;
    w0 = *((x19 + 0x40));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x11038);
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
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x11000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x908 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x880)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x880)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xb4c */
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
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x940 */
#include <stdint.h>
 
void fib (uint32_t arg1) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    x0 = arg1;
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    if (w0 <= 1) {
        w0 = w19;
        x23 = *((sp + 0x30));
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    if (w0 != 2) {
        goto label_3;
    }
    w20 = 0x1;
    x21 = 0x0;
    w19 = w20;
    do {
label_0:
        w1 = w20;
        x0 = x21 + 0xb68;
        printf (x0, w1);
        x23 = *((sp + 0x30));
        w0 = w19;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_3:
        if (w0 != 3) {
            goto label_4;
        }
        x21 = 0x0;
        w1 = 0x1;
        x0 = x21 + 0xb68;
        w20 = w1;
        w19 = w1;
        printf (x0, w1);
    } while (1);
label_4:
    w0 -= 3;
    x21 = 0x0;
    x23 = x21 + 0xb68;
    w0 = fib ();
    w20 = w0 - 1;
    w19 = w0;
    w0 = w20;
    w0 = fib ();
    w1 = w19 + w0;
    x0 = x23;
    printf (x0, w1);
    __asm ("b.le 0xab8");
    w20 = w19 - 2;
    w0 = w20;
    w0 = fib ();
    w22 = w0;
    w0--;
    w0 = fib ();
    w1 = w22 + w0;
    x0 = x23;
    printf (x0, w1);
    w1 = w19 + w22;
    x0 = x23;
    printf (x0, w1);
    if (w20 > 1) {
        goto label_5;
    }
    if (w20 == 1) {
        goto label_6;
    }
    w22 = w19 - 3;
    do {
label_1:
        w1 = w20 + w22;
label_2:
        x0 = x21 + 0xb68;
        w20 = w19 + w20;
        printf (x0, w1);
        goto label_0;
label_5:
        w0 = w19 - 3;
        w0 = fib ();
        w22 = w0 - 1;
        w20 = w0;
        w0 = w22;
        w0 = fib ();
        w1 = w20 + w0;
        x0 = x23;
        printf (x0, w1);
        __asm ("b.le 0xa4c");
    } while (1);
    w0 = w20 - 2;
    w0 = fib ();
    w22 = w0;
    w0--;
    w0 = fib ();
    w1 = w22 + w0;
    x0 = x23;
    printf (x0, w1);
    goto label_1;
label_6:
    w1 = w20;
    goto label_2;
    w20 = w19 + w20;
    x0 = x23;
    w1 = w20;
    printf (x0, w1);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x730 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x11028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6a0 */
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
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x710 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x11018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x720 */
#include <stdint.h>
 
void isoc99_scanf () {
    x17 = .plt;
    x16 = 0x11020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6c0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x10ff8;
    return uint64_t (*x17)() ();
}
