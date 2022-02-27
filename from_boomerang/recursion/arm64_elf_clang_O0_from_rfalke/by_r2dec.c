/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400490 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1380 named .text */
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400450 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400460)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411030;
    x0 = 0x411030;
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400530 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411030;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411030;
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400570 */
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
    w0 = *((x19 + 0x30));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x30)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005a0 */
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


r2dec has crashed (info: SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4009f0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400710 */
#include <stdint.h>
 
void dbg_d (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void d(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "d(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    *((sp + 8)) = w0;
    __asm ("b.le 0x40074c");
    w8 = *((x29 - 4));
    w0 = w8 - 1;
    dbg_e (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400480 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400874 */
#include <stdint.h>
 
uint64_t dbg_e (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void e(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "e(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    w1 >>= 1;
    *((sp + 8)) = w0;
    w0 = w1;
    dbg_c (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x400a54;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400670 */
#include <stdint.h>
 
void dbg_c (int64_t arg1) {
    int64_t var_8h;
    int64_t var_4h;
    int64_t var_0h_2;
    int64_t var_sp_8h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void c(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    x8 = "c(%d)\n";
    *((x29 - 8)) = w0;
    x0 = x8;
    w1 = *((x29 - 8));
    printf (w0, w1);
    w1 = *((x29 - 4));
    w1 -= 2;
    w8 = w1;
    w1 -= 4;
    *((x29 - 0xc)) = w0;
    *((sp + 8)) = x8;
    *((sp + 4)) = w1;
    if (w1 <= w1) {
        x9 = *((sp + 8));
        x8 = *(0x400a10);
        uint64_t (*x8)() ();
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400630 */
#include <stdint.h>
 
uint64_t dbg_b (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void b(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "b(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    w1--;
    *((sp + 8)) = w0;
    w0 = w1;
    dbg_c (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x400a3f;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x40082c */
#include <stdint.h>
 
void dbg_l (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void l(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "l(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    *((sp + 8)) = w0;
    if (w1 >= 2) {
        w8 = *((x29 - 4));
        w0 = w8 + 2;
        dbg_b (w0);
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007e8 */
#include <stdint.h>
 
void dbg_j (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void j(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "j(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    *((sp + 8)) = w0;
    if (w1 >= 2) {
        w0 = *((x29 - 4));
        dbg_k (w0);
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x40092c */
#include <stdint.h>
 
void dbg_k (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void k(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "k(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    *((sp + 8)) = w0;
    if (w1 >= 2) {
        w8 = *((x29 - 4));
        w0 = w8 - 1;
        dbg_e (w0);
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007a0 */
#include <stdint.h>
 
void dbg_h (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void h(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "h(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    *((sp + 8)) = w0;
    __asm ("b.le 0x4007dc");
    w8 = *((x29 - 4));
    w0 = w8 - 1;
    dbg_i (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4008fc */
#include <stdint.h>
 
uint64_t dbg_i (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void i(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "i(%d)\n";
    printf (w0, w1);
    *((sp + 8)) = w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x400a70;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4009f4 */
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400758 */
#include <stdint.h>
 
void dbg_f (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void f(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "f(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    *((sp + 8)) = w0;
    __asm ("b.le 0x400794");
    w8 = *((x29 - 4));
    w0 = w8 - 1;
    dbg_g (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4008b4 */
#include <stdint.h>
 
void dbg_g (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* void g(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    w1 = *((x29 - 4));
    x0 = "g(%d)\n";
    printf (w0, w1);
    w1 = *((x29 - 4));
    *((sp + 8)) = w0;
    __asm ("b.le 0x4008f0");
    w8 = *((x29 - 4));
    w0 = w8 - 1;
    dbg_f (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400978 */
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc) {
    int64_t var_0h_2;
    int64_t var_8h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = argc;
    /* int main(int argc); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = 0;
    *((sp + 8)) = w0;
    w1 = *((sp + 8));
    x0 = "a(%d)\n";
    printf (w0, w1);
    w1 = 3;
    w8 = *((sp + 8));
    w8 *= w1;
    *((sp + 4)) = w0;
    w0 = w8;
    dbg_b (w0);
    w8 = 0;
    w0 = w8;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x400a38;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400418 */
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400470 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400430 */
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
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006cc */
#include <stdint.h>
 
void aav_0x004006cc (int64_t arg1) {
    x0 = arg1;
    w0 = 2;
    dbg_d (w0);
    return void (*0x400704)() ();
}
