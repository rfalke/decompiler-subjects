/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400490 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1340 named .text */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400450 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400460)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004f0 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400530 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400570 */
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
    w0 = *((x19 + 0x68));
    if (w0 == 0) {
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005a0 */
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


r2dec has crashed (info: SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4009c8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400738 */
#include <stdint.h>
 
void dbg_d () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void d(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x411038;
    w9 = *(0x411038);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_e ();
    }
    x8 = 0x41106c;
    w9 = *(0x41106c);
    w9 += 5;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400778 */
#include <stdint.h>
 
void dbg_e () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void e(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x41103c;
    w9 = *(0x41103c);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_c ();
    }
    x8 = 0x41106c;
    w9 = *(0x41106c);
    w9 += 7;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400688 */
#include <stdint.h>
 
void dbg_c () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void c(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x411034;
    w9 = *(0x411034);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_d ();
    }
    x8 = 0x411040;
    w9 = *(0x411040);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_f ();
    }
    x8 = 0x41104c;
    w9 = *(0x41104c);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_h ();
    }
    x8 = c_j;
    w9 = c_j;
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_j ();
    }
    x8 = c_l;
    w9 = c_l;
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_l ();
    }
    x8 = 0x41106c;
    w9 = *(0x41106c);
    w9 += 3;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400648 */
#include <stdint.h>
 
void dbg_b () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void b(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x411030;
    w9 = *(0x411030);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_c ();
    }
    x8 = 0x41106c;
    w9 = *(0x41106c);
    w9 += 2;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400910 */
#include <stdint.h>
 
void dbg_l () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void l(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = l_b;
    w9 = l_b;
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_b ();
    }
    x8 = 0x41106c;
    w9 = 0x411089;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400890 */
#include <stdint.h>
 
void dbg_j () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void j(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = j_k;
    w9 = j_k;
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_k ();
    }
    x8 = 0x41106c;
    w9 = 0x411083;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4008d0 */
#include <stdint.h>
 
void dbg_k () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void k(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = k_e;
    w9 = k_e;
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_e ();
    }
    x8 = 0x41106c;
    w9 = 0x411087;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400838 */
#include <stdint.h>
 
void dbg_h () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void h(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = h_i;
    w9 = h_i;
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_i ();
    }
    x8 = 0x41106c;
    w9 = 0x41107d;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400878 */
#include <stdint.h>
 
void dbg_i () {
    /* void i(); */
    x8 = 0x41106c;
    w9 = 0x41107f;
    *(x8) = w9;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4009cc */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007b8 */
#include <stdint.h>
 
void dbg_f () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void f(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x411044;
    w9 = *(0x411044);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_g ();
    }
    x8 = 0x41106c;
    w9 = 0x411077;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007f8 */
#include <stdint.h>
 
void dbg_g () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void g(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x411048;
    w9 = *(0x411048);
    w9--;
    *(x8) = w9;
    if ((w9 & 0x1f) == 0) {
        dbg_f ();
    }
    x8 = 0x41106c;
    w9 = 0x411079;
    *(x8) = w9;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400950 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void dbg_main (int32_t argc) {
    int64_t var_ch;
    int64_t var_0h_4;
    int64_t var_0h_3;
    int64_t var_0h_2;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = argc;
    /* int main(int argc); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = 0;
    *((x29 - 8)) = w0;
    dbg_b ();
    x0 = "ecx is %d, edx is %d\n";
    w1 = 0;
    *((x29 - 0xc)) = w1;
    w2 = *((x29 - 0xc));
    printf (x0, w1, w2);
    x30 = 0x41106c;
    w1 = *(0x41106c);
    x30 = "res is %d\n";
    *((sp + 0x10)) = w0;
    x0 = x30;
    printf (w0, w1);
    w1 = 0;
    *((sp + 0xc)) = w0;
    w0 = w1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400480 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400418 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400470 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400430 */
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
