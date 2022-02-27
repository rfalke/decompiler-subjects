/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400490 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1660 named .text */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400450 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4004d8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400460)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4004f0 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400530 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400570 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4005a0 */
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


r2dec has crashed (info: SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400b08).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4007a0 */
#include <stdint.h>
 
void dbg_d () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void d(); */
    x8 = 0x411000;
    w9 = *(0x411038);
    w10 = w9 - 1;
    *((x8 + 0x38)) = w10;
    __asm ("b.le 0x4007f0");
    x8 = 0x411000;
    w9 = *(0x41103c);
    w9--;
    *((x8 + 0x3c)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x9 = 0x411000;
    w8 = *(0x41106c);
    w8 += 7;
    *((x9 + 0x6c)) = w8;
    goto label_0;
    x8 = 0x411000;
    w8 = *(0x41106c);
label_0:
    w8 += 5;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400648 */
#include <stdint.h>
 
void b () {
    int64_t var_10h;
    int64_t var_10h_2;
    x8 = 0x411000;
    w9 = *(0x411030);
    w9--;
    *((x8 + 0x30)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x8 = 0x411000;
    w9 = *(0x41106c);
    w9 += 2;
    *((x8 + 0x6c)) = w9;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400680 */
#include <stdint.h>
 
void dbg_c () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void c(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x411000;
    w9 = *(0x411034);
    w9--;
    *((x8 + 0x34)) = w9;
    if (w9 >= w9) {
        dbg_d ();
    }
    x8 = 0x411000;
    w9 = *(0x411040);
    w9--;
    *((x8 + 0x40)) = w9;
    if (w9 >= w9) {
        dbg_f ();
    }
    x8 = 0x411000;
    w9 = *(0x41104c);
    w9--;
    *((x8 + 0x4c)) = w9;
    if (w9 >= w9) {
        x10 = 0x411000;
        w11 = h_i;
        x8 = 0x411000;
        w9 = *(0x41106c);
        w11--;
        *((x10 + 0x50)) = w11;
        if (w11 >= w11) {
            w9 += 0x13;
            *((x8 + 0x6c)) = w9;
        }
        w9 += 0x11;
        *((x8 + 0x6c)) = w9;
    }
    x8 = 0x411000;
    w9 = c_j;
    w9--;
    *((x8 + 0x54)) = w9;
    if (w9 >= w9) {
        dbg_j ();
    }
    x8 = 0x411000;
    w9 = c_l;
    w10 = w9 - 1;
    *((x8 + 0x60)) = w10;
    __asm ("b.le 0x40076c");
    x8 = 0x411000;
    w9 = l_b;
    w10 = w9 - 1;
    *((x8 + 0x64)) = w10;
    __asm ("b.le 0x400778");
    x8 = 0x411000;
    w9 = *(0x411030);
    w9--;
    *((x8 + 0x30)) = w9;
    if (w9 >= w9) {
        dbg_c ();
    }
    x9 = 0x411000;
    w8 = *(0x41106c);
    w8 += 2;
    *((x9 + 0x6c)) = w8;
    goto label_0;
    x8 = 0x411000;
    w8 = *(0x41106c);
    goto label_1;
    x8 = 0x411000;
    w8 = *(0x41106c);
label_0:
    w8 += 0x1d;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
label_1:
    w8 += 3;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400a24 */
#include <stdint.h>
 
void l () {
    int64_t var_10h;
    int64_t var_10h_2;
    x8 = 0x411000;
    w9 = l_b;
    w10 = w9 - 1;
    *((x8 + 0x64)) = w10;
    __asm ("b.le 0x400a74");
    x8 = 0x411000;
    w9 = *(0x411030);
    w9--;
    *((x8 + 0x30)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x9 = 0x411000;
    w8 = *(0x41106c);
    w8 += 2;
    *((x9 + 0x6c)) = w8;
    goto label_0;
    x8 = 0x411000;
    w8 = *(0x41106c);
label_0:
    w8 += 0x1d;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400924 */
#include <stdint.h>
 
void dbg_j () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void j(); */
    x8 = 0x411000;
    w9 = j_k;
    w10 = w9 - 1;
    *((x8 + 0x58)) = w10;
    __asm ("b.le 0x40098c");
    x8 = 0x411000;
    w9 = k_e;
    w10 = w9 - 1;
    *((x8 + 0x5c)) = w10;
    __asm ("b.le 0x400998");
    x8 = 0x411000;
    w9 = *(0x41103c);
    w9--;
    *((x8 + 0x3c)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x9 = 0x411000;
    w8 = *(0x41106c);
    w8 += 7;
    *((x9 + 0x6c)) = w8;
    goto label_0;
    x8 = 0x411000;
    w8 = *(0x41106c);
    goto label_1;
    x8 = 0x411000;
    w8 = *(0x41106c);
label_0:
    w8 += 0x1b;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
label_1:
    w8 += 0x17;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4008e0 */
#include <stdint.h>
 
void h () {
    x10 = 0x411000;
    w11 = h_i;
    x8 = 0x411000;
    w9 = *(0x41106c);
    w11--;
    *((x10 + 0x50)) = w11;
    if (w11 >= w11) {
        w9 += 0x13;
        *((x8 + 0x6c)) = w9;
    }
    w9 += 0x11;
    *((x8 + 0x6c)) = w9;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400b0c */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400840 */
#include <stdint.h>
 
void dbg_f () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* void f(); */
    x8 = 0x411000;
    w9 = *(0x411044);
    w10 = w9 - 1;
    *((x8 + 0x44)) = w10;
    __asm ("b.le 0x400890");
    x8 = 0x411000;
    w9 = *(0x411048);
    w9--;
    *((x8 + 0x48)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_f ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x9 = 0x411000;
    w8 = 0x411079;
    *((x9 + 0x6c)) = w8;
    goto label_0;
    x8 = 0x411000;
    w8 = *(0x41106c);
label_0:
    w8 += 0xb;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400a90 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4008a8 */
#include <stdint.h>
 
void g () {
    int64_t var_10h;
    int64_t var_10h_2;
    x8 = 0x411000;
    w9 = *(0x411048);
    w9--;
    *((x8 + 0x48)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_f ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x8 = 0x411000;
    w9 = 0x411079;
    *((x8 + 0x6c)) = w9;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400808 */
#include <stdint.h>
 
void e () {
    int64_t var_10h;
    int64_t var_10h_2;
    x8 = 0x411000;
    w9 = *(0x41103c);
    w9--;
    *((x8 + 0x3c)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x8 = 0x411000;
    w9 = *(0x41106c);
    w9 += 7;
    *((x8 + 0x6c)) = w9;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400910 */
#include <stdint.h>
 
void i () {
    x8 = 0x411000;
    w9 = 0x41107f;
    *((x8 + 0x6c)) = w9;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4009bc */
#include <stdint.h>
 
void k () {
    int64_t var_10h;
    int64_t var_10h_2;
    x8 = 0x411000;
    w9 = k_e;
    w10 = w9 - 1;
    *((x8 + 0x5c)) = w10;
    __asm ("b.le 0x400a0c");
    x8 = 0x411000;
    w9 = *(0x41103c);
    w9--;
    *((x8 + 0x3c)) = w9;
    if (w9 >= w9) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        x29 = sp;
        dbg_c ();
        x29 = *(sp);
        x30 = *((sp + 8));
    }
    x9 = 0x411000;
    w8 = *(0x41106c);
    w8 += 7;
    *((x9 + 0x6c)) = w8;
    goto label_0;
    x8 = 0x411000;
    w8 = *(0x41106c);
label_0:
    w8 += 0x1b;
    x9 = 0x411000;
    *((x9 + 0x6c)) = w8;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(int argc); */
    *((sp + -0x20)) = x20;
    *((sp + -0x20 + 8)) = x19;
    *((sp + 0x10)) = x29;
    *((sp + 0x10 + 8)) = x30;
    x29 = sp + 0x10;
    x8 = 0x411000;
    w9 = *(0x411030);
    w9--;
    *((x8 + 0x30)) = w9;
    if (w9 >= w9) {
        dbg_c ();
    }
    x19 = 0x411000;
    w8 = *(0x41106c);
    w1 = 0;
    w2 = 0;
    w8 += 2;
    x0 = "ecx is %d, edx is %d\n";
    *((x19 + 0x6c)) = w8;
    printf (x0, w1, w2);
    w1 = *(0x41106c);
    x0 = "res is %d\n";
    printf (x0, w1);
    x29 = *((sp + 0x10));
    x30 = *((sp + 0x10 + 8));
    w0 = 0;
    x20 = *(sp);
    x19 = *((sp + 8));
    return 0x400b36;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400480 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400418 */
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
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400470 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion2/arm64_elf_clang_Os_from_rfalke/subject.exe @ 0x400430 */
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
