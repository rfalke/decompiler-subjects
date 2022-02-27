/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x738 */
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
    x4 = *(0x11000);
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1520 */
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = argc;
    /* int main(int argc); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x2 = 0x1000;
    w1 = w0;
    x0 = x2 + 0x638;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w1 + (w1 << 1);
    printf (x0, w1, x2);
    w1 = w19;
    x0 = "b(%d)\n";
    printf (x0, w1);
    w0 = w19 - 1;
    c ();
    x19 = *((sp + 0x10));
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x968 */
#include <stdint.h>
 
void c (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x1000;
    w19 = w0;
    x0 = x20 + 0x5f0;
    w19 -= 2;
    printf (x0, w1);
    if (w19 >= 4) {
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    x0 = 0x15b4;
    offset_0 = w19 << 32;
    w0 = *((x0 + offset_0));
    x1 = 0x9b8;
    x0 = x1 + (w0 << 2);
    return uint64_t (*x0)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1598).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x770 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x6c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x788 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x12038;
    x0 = 0x12038;
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7c0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x12038;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x12038;
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x800 */
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
    w0 = *((x19 + 0x38));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x12030);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x38)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6a0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x848 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x7c0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x7c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xfa8 */
#include <stdint.h>
 
void d (int64_t arg1) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = arg1;
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x1000;
    w19 = w0;
    x0 = x20 + 0x5f8;
    *((sp + 0x20)) = x21;
    printf (x0, w1);
    __asm ("b.le 0x1004");
    x21 = 0x1000;
    w1 = w19 - 1;
    x0 = x21 + 0x600;
    w19 = w1 >> 1;
    printf (x0, w1);
    w1 = w19;
    x0 = "c(%d)\n";
    w19 -= 2;
    printf (x0, w1);
    if (w19 >= 4) {
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    x0 = 0x15cc;
    offset_0 = w19 << 32;
    w0 = *((x0 + offset_0));
    x1 = 0x1030;
    x0 = x1 + (w0 << 2);
    return uint64_t (*x0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xe48 */
#include <stdint.h>
 
void b (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x1000;
    w19 = w0;
    x0 = x20 + 0x630;
    printf (x0, w1);
    w1 = w19 - 1;
    x0 = "c(%d)\n";
    w19 -= 3;
    printf (x0, w1);
    if (w19 >= 4) {
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    x0 = 0x15c4;
    offset_0 = w19 << 32;
    w0 = *((x0 + offset_0));
    x1 = 0xea8;
    x0 = x1 + (w0 << 2);
    return uint64_t (*x0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x13b8 */
#include <stdint.h>
 
void l (int64_t arg1) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = arg1;
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x1000;
    w19 = w0;
    x0 = x20 + 0x628;
    *((sp + 0x20)) = x21;
    printf (x0, w1);
    __asm ("b.le 0x1410");
    x21 = 0x1000;
    w1 = w19 + 2;
    x0 = x21 + 0x630;
    printf (x0, w1);
    w1 = w19 + 1;
    x0 = "c(%d)\n";
    w19 -= 2;
    printf (x0, w1);
    if (w19 >= 3) {
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    x0 = 0x15dc;
    offset_0 = w19 << 32;
    w0 = *((x0 + offset_0));
    x1 = 0x1438;
    x0 = x1 + (w0 << 2);
    return uint64_t (*x0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x11a8 */
#include <stdint.h>
 
void j (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w0;
    w1 = w19;
    x0 = "j(%d)\n";
    printf (x0, w1);
    __asm ("b.le 0x1208");
    w1 = w19;
    x0 = "k(%d)\n";
    w19--;
    printf (x0, w1);
    w1 = w19;
    x0 = "e(%d)\n";
    printf (x0, w1);
    w0 = w19 >> 1;
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    void (*0x968)() ();
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1148 */
#include <stdint.h>
 
void h (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w19 = w0;
    w1 = w19;
    x0 = "h(%d)\n";
    printf (x0, w1);
    __asm ("b.le 0x1188");
    w1 = w19 - 1;
    x19 = *((sp + 0x10));
    x0 = "i(%d)\n";
    x29 = *(sp);
    x30 = *((sp + 8));
    void (*0x6e0)() ();
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x159c */
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xc28 */
#include <stdint.h>
 
void f (int64_t arg1) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x22 = 0x1000;
    x21 = x22 + 0x5e8;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    x0 = x21;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    printf (x0, w1);
    __asm ("b.le 0xe30");
    x24 = 0x1000;
    w20 = w19 - 1;
    x23 = x24 + 0x5e0;
    w1 = w20;
    x0 = x23;
    printf (x0, w1);
    if (w20 != 1) {
        w20 = w19 - 2;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        if (w20 == 1) {
            goto label_0;
        }
        w20 = w19 - 3;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 4;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 5;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 6;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 7;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 8;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 9;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0xa;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0xb;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0xc;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0xd;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0xe;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0xf;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0x10;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0x11;
        x0 = x23;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w20 = w19 - 0x12;
        x0 = x21;
        w1 = w20;
        printf (x0, w1);
        __asm ("b.le 0xe30");
        w0 = w19 - 0x13;
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        void (*0x880)() ();
    }
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x880 */
#include <stdint.h>
 
void g (int64_t arg1) {
    int64_t var_10h_2;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    x0 = arg1;
    *((sp + -0x50)) = x29;
    *((sp + -0x50 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w19 = w0;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    w24 = w0 - 3;
    w26 = w0 - 5;
    w25 = w0 - 4;
    w23 = w0 - 2;
    w22 = w0 - 1;
    x20 = "g(%d)\n";
    x21 = "f(%d)\n";
    do {
        w1 = w19;
        x0 = x20;
        printf (x0, w1);
        w1 = w22;
        x0 = x21;
        __asm ("b.le 0x950");
        printf (x0);
        w1 = w23;
        x0 = x20;
        if (w22 == 1) {
            goto label_0;
        }
        printf (x0);
        w1 = w24;
        x0 = x21;
        __asm ("b.le 0x950");
        printf (x0);
        w23 -= 6;
        w1 = w25;
        x0 = x20;
        w22 -= 6;
        w24 -= 6;
        __asm ("b.le 0x950");
        printf (x0);
        w19 -= 6;
        w1 = w26;
        x0 = x21;
        w25 -= 6;
        __asm ("b.le 0x950");
        printf (x0);
        w26 -= 6;
    } while (w26 > 1);
label_0:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xac8 */
#include <stdint.h>
 
void e (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x1000;
    x0 = x20 + 0x600;
    w19 = w1 >> 1;
    printf (x0, w1);
    w1 = w19;
    x0 = "c(%d)\n";
    w19 -= 2;
    printf (x0, w1);
    if (w19 >= 4) {
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    x0 = 0x15bc;
    offset_0 = w19 << 32;
    w0 = *((x0 + offset_0));
    x1 = 0xb28;
    x0 = x1 + (w0 << 2);
    return uint64_t (*x0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1198 */
#include <stdint.h>
 
void i (int64_t arg1) {
    x0 = arg1;
    x2 = 0x1000;
    w1 = w0;
    x0 = x2 + 0x610;
    return void (*0x6e0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1218 */
#include <stdint.h>
 
void k (int64_t arg1) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = arg1;
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = 0x1000;
    w19 = w0;
    x0 = x20 + 0x620;
    *((sp + 0x20)) = x21;
    printf (x0, w1);
    __asm ("b.le 0x1274");
    x21 = 0x1000;
    w1 = w19 - 1;
    x0 = x21 + 0x600;
    w19 = w1 >> 1;
    printf (x0, w1);
    w1 = w19;
    x0 = "c(%d)\n";
    w19 -= 2;
    printf (x0, w1);
    if (w19 >= 4) {
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
    }
    x0 = 0x15d4;
    offset_0 = w19 << 32;
    w0 = *((x0 + offset_0));
    x1 = 0x12a0;
    x0 = x1 + (w0 << 2);
    return uint64_t (*x0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x660 */
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
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x680 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 112 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
