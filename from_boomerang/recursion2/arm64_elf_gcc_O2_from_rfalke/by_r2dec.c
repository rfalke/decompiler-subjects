/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x730 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x11000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xc58 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(int argc); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    dbg_b ();
    w2 = 0x0;
    x0 = "ecx is %d, edx is %d\n";
    w1 = 0x0;
    printf (x0, w1, w2);
    x1 = 0x11000;
    x0 = "res is %d\n";
    w1 = *(0x11074);
    printf (x0, x1);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xaa0 */
#include <stdint.h>
 
uint32_t dbg_b () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void b(); */
    x1 = 0x11038;
    w0 = b_c;
    w0--;
    *((x1 + 0x24)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = *(0x11074);
        w0 += 2;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = *(0x11074);
    w0 += 2;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x9d0 */
#include <stdint.h>
 
void dbg_c () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    /* void c(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x11000;
    x1 = x19 + 0x38;
    w0 = *((x1 + 0x10));
    w0--;
    *((x1 + 0x10)) = w0;
    if ((w0 & 0x1f) == 0) {
        dbg_d ();
    }
    x1 = x19 + 0x38;
    w0 = *((x1 + 0x14));
    w0--;
    *((x1 + 0x14)) = w0;
    if ((w0 & 0x1f) == 0) {
        dbg_f ();
    }
    x1 = x19 + 0x38;
    x20 = 0x11000;
    w0 = *((x1 + 0x18));
    w0--;
    *((x1 + 0x18)) = w0;
    if ((w0 & 0x1f) != 0) {
        goto label_0;
    }
    w0 = *((x1 + 8));
    x20 = 0x11000;
    w0--;
    *((x1 + 8)) = w0;
    if ((w0 & 0x1f) != 0) {
        goto label_1;
    }
    w0 = *((x20 + 0x74));
    w0 += 0x13;
    do {
        w0 += 0x11;
        *((x20 + 0x74)) = w0;
label_0:
        x1 = x19 + 0x38;
        w0 = *((x1 + 0x1c));
        w0--;
        *((x1 + 0x1c)) = w0;
        if ((w0 & 0x1f) == 0) {
            dbg_j ();
        }
        x19 += 0x38;
        w0 = *((x19 + 0x20));
        w0--;
        *((x19 + 0x20)) = w0;
        if ((w0 & 0x1f) == 0) {
            dbg_l ();
        }
        w0 = *((x20 + 0x74));
        w0 += 3;
        *((x20 + 0x74)) = w0;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_1:
        w0 = *((x20 + 0x74));
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x11020;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xcd0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x768 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x6c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x780 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = .bss;
    x0 = .bss;
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x7b8 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = .bss;
    x1 -= x0;
    x1 >>= 3;
    x1 = .bss;
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x7f8 */
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
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x11030);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x70)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x6a0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x11000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x7b8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x7b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xb50 */
#include <stdint.h>
 
uint32_t dbg_d () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void d(); */
    x1 = 0x11038;
    w0 = d_e;
    w0--;
    *((x1 + 0x2c)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_e ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = *(0x11074);
        w0 += 5;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = *(0x11074);
    w0 += 5;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xaf8 */
#include <stdint.h>
 
uint32_t dbg_e () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void e(); */
    x1 = 0x11038;
    w0 = e_c;
    w0--;
    *((x1 + 0x28)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = *(0x11074);
        w0 += 7;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = *(0x11074);
    w0 += 7;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x978 */
#include <stdint.h>
 
uint32_t dbg_l () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void l(); */
    x1 = 0x11038;
    w0 = *(0x11044);
    w0--;
    *((x1 + 0xc)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_b ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x11091;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = 0x11091;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xc00 */
#include <stdint.h>
 
uint32_t dbg_j () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void j(); */
    x1 = 0x11038;
    w0 = j_k;
    w0--;
    *((x1 + 0x34)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_k ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x1108b;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = 0x1108b;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xba8 */
#include <stdint.h>
 
uint32_t dbg_k () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void k(); */
    x1 = 0x11038;
    w0 = k_e;
    w0--;
    *((x1 + 0x30)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_e ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x1108f;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = 0x1108f;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x920 */
#include <stdint.h>
 
uint32_t h () {
    x1 = 0x11038;
    w0 = *(0x11040);
    w0--;
    *((x1 + 8)) = w0;
    x1 = 0x11000;
    if ((w0 & 0x1f) == 0) {
        w0 = *((x1 + 0x74));
        w0 += 0x13;
        w0 += 0x11;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    w0 = *((x1 + 0x74));
    w0 += 0x11;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xcd4 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x8c8 */
#include <stdint.h>
 
uint32_t dbg_f () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void f(); */
    x1 = 0x11038;
    w0 = *(0x1103c);
    w0--;
    *((x1 + 4)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_g ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x1107f;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = 0x1107f;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x878 */
#include <stdint.h>
 
uint32_t dbg_g () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void g(); */
    x1 = 0x11000;
    w0 = *(0x11038);
    w0--;
    *((x1 + 0x38)) = w0;
    if ((w0 & 0x1f) == 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_f ();
        x1 = 0x11000;
        x29 = *(sp);
        x30 = *((sp + 8));
        w0 = 0x11081;
        *((x1 + 0x74)) = w0;
        return w0;
    }
    x1 = 0x11000;
    w0 = 0x11081;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x960 */
#include <stdint.h>
 
uint32_t i () {
    x1 = 0x11000;
    w0 = 0x11087;
    *((x1 + 0x74)) = w0;
    return w0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x660 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x11018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x680 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 112 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x10ff8;
    return uint64_t (*x17)() ();
}
