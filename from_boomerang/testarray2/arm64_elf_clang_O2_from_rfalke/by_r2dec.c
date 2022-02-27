/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400490 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 612 named .text */
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
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400450 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x4004d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400460)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411038;
    x0 = 0x411038;
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
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400530 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411038;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411038;
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
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400570 */
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
    w0 = *((x19 + 0x35));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x35)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400530)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400530)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x4006f0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x4006f4 */
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
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void mid (int64_t arg1) {
    x0 = arg1;
    w1 = *((x0 + 2));
    x0 = "Middle elment is %d\n";
    return void (*0x400480)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400678 */
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
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x4005f0 */
#include <stdint.h>
 
void fst (int64_t arg1) {
    x0 = arg1;
    w1 = *((x0 + 0xa));
    x0 = "First element is %d\n";
    return void (*0x400480)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400600 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(); */
    *((sp + -0x20)) = x20;
    *((sp + -0x20 + 8)) = x19;
    *((sp + 0x10)) = x29;
    *((sp + 0x10 + 8)) = x30;
    x29 = sp + 0x10;
    x19 = 0x411030;
    w1 = *((x19 + 2));
    x0 = "Middle elment is %d\n";
    printf (x0, w1);
    w1 = *(x19);
    x0 = "First element is %d\n";
    printf (x0, w1);
    w8 = *(x19);
    w9 = *((x19 + 1));
    w10 = *((x19 + 2));
    w11 = *((x19 + 3));
    w12 = *((x19 + 4));
    w8 = w9 + w8;
    w8 = w10 + w8;
    w8 = w11 + w8;
    w1 = w12 + w8;
    x0 = "Sum is %d\n";
    printf (x0, w1);
    x29 = *((sp + 0x10));
    x30 = *((sp + 0x10 + 8));
    w0 = 0;
    x20 = *(sp);
    x19 = *((sp + 8));
    return 0x400732;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400480 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400418 */
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
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400470 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/arm64_elf_clang_O2_from_rfalke/subject.exe @ 0x400430 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 96 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
