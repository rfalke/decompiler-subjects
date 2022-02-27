/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1772 named .text */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xd60 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x838 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_0h;
    x0 = argc;
    /* int main(int argc); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    dbg_b ();
    x0 = "ecx is %d, edx is %d\n";
    w2 = 0x0;
    w1 = 0x0;
    printf (x0, w1, w2);
    x0 = 0x12074;
    w1 = *(0x12074);
    x0 = "res is %d\n";
    printf (x0, w1);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x880 */
#include <stdint.h>
 
uint64_t dbg_b () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void b(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0x12038;
    w0 = *(0x12038);
    w1 = w0 - 1;
    x0 = 0x12038;
    *(x0) = w1;
    x0 = 0x12038;
    w0 = *(0x12038);
    if (w0 >= 0) {
        dbg_c ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 2;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8e4 */
#include <stdint.h>
 
uint64_t dbg_c () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void c(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0x1203c;
    w0 = *(0x1203c);
    w1 = w0 - 1;
    x0 = 0x1203c;
    *(x0) = w1;
    x0 = 0x1203c;
    w0 = *(0x1203c);
    if (w0 >= 0) {
        dbg_d ();
    }
    x0 = 0x12048;
    w0 = *(0x12048);
    w1 = w0 - 1;
    x0 = 0x12048;
    *(x0) = w1;
    x0 = 0x12048;
    w0 = *(0x12048);
    if (w0 >= 0) {
        dbg_f ();
    }
    x0 = 0x12054;
    w0 = *(0x12054);
    w1 = w0 - 1;
    x0 = 0x12054;
    *(x0) = w1;
    x0 = 0x12054;
    w0 = *(0x12054);
    if (w0 >= 0) {
        dbg_h ();
    }
    x0 = c_j;
    w0 = c_j;
    w1 = w0 - 1;
    x0 = c_j;
    *(x0) = w1;
    x0 = c_j;
    w0 = c_j;
    if (w0 >= 0) {
        dbg_j ();
    }
    x0 = c_l;
    w0 = c_l;
    w1 = w0 - 1;
    x0 = c_l;
    *(x0) = w1;
    x0 = c_l;
    w0 = c_l;
    if (w0 >= 0) {
        dbg_l ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 3;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xdd8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x728 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x6c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x740 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x778 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x7b8 */
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
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x12030);
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x6a0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x12000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x800 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x778)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x778)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xa18 */
#include <stdint.h>
 
uint64_t dbg_d () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void d(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0x12040;
    w0 = *(0x12040);
    w1 = w0 - 1;
    x0 = 0x12040;
    *(x0) = w1;
    x0 = 0x12040;
    w0 = *(0x12040);
    if (w0 >= 0) {
        dbg_e ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 5;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xa7c */
#include <stdint.h>
 
uint64_t dbg_e () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void e(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0x12044;
    w0 = *(0x12044);
    w1 = w0 - 1;
    x0 = 0x12044;
    *(x0) = w1;
    x0 = 0x12044;
    w0 = *(0x12044);
    if (w0 >= 0) {
        dbg_c ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 7;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xcf8 */
#include <stdint.h>
 
uint64_t dbg_l () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void l(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = l_b;
    w0 = l_b;
    w1 = w0 - 1;
    x0 = l_b;
    *(x0) = w1;
    x0 = l_b;
    w0 = l_b;
    if (w0 >= 0) {
        dbg_b ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 0x1d;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xc30 */
#include <stdint.h>
 
uint64_t dbg_j () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void j(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = j_k;
    w0 = j_k;
    w1 = w0 - 1;
    x0 = j_k;
    *(x0) = w1;
    x0 = j_k;
    w0 = j_k;
    if (w0 >= 0) {
        dbg_k ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 0x17;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xc94 */
#include <stdint.h>
 
uint64_t dbg_k () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void k(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = k_e;
    w0 = k_e;
    w1 = w0 - 1;
    x0 = k_e;
    *(x0) = w1;
    x0 = k_e;
    w0 = k_e;
    if (w0 >= 0) {
        dbg_e ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 0x1b;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xba8 */
#include <stdint.h>
 
uint64_t dbg_h () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void h(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = h_i;
    w0 = h_i;
    w1 = w0 - 1;
    x0 = h_i;
    *(x0) = w1;
    x0 = h_i;
    w0 = h_i;
    if (w0 >= 0) {
        dbg_i ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 0x11;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xc0c */
#include <stdint.h>
 
uint64_t dbg_i () {
    /* void i(); */
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 0x13;
    x0 = 0x12074;
    *(x0) = w1;
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xddc */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xae0 */
#include <stdint.h>
 
uint64_t dbg_f () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void f(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0x1204c;
    w0 = *(0x1204c);
    w1 = w0 - 1;
    x0 = 0x1204c;
    *(x0) = w1;
    x0 = 0x1204c;
    w0 = *(0x1204c);
    if (w0 >= 0) {
        dbg_g ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 0xb;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xb44 */
#include <stdint.h>
 
uint64_t dbg_g () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void g(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = 0x12050;
    w0 = *(0x12050);
    w1 = w0 - 1;
    x0 = 0x12050;
    *(x0) = w1;
    x0 = 0x12050;
    w0 = *(0x12050);
    if (w0 >= 0) {
        dbg_f ();
    }
    x0 = 0x12074;
    w0 = *(0x12074);
    w1 = w0 + 0xd;
    x0 = 0x12074;
    *(x0) = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x12074;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x660 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x680 */
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
