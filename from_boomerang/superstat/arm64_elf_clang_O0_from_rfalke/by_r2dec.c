/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 888 named .text */
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
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004a0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400538 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x4004b0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400550 */
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
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400590 */
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
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005d0 */
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
    w0 = *((x19 + 0x38));
    if (w0 == 0) {
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
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400600 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400590)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400590)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400850).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400858 */
#include <stdint.h>
 
void stat (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x2 = x1;
    x1 = x0;
    w0 = 0x0;
    return void (*0x4004e0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400868 */
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
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007d8 */
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
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400640 */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    char ** var_10h;
    int64_t var_0h_16;
    int64_t var_0h_15;
    int64_t var_0h_14;
    int64_t var_0h_13;
    int64_t var_0h_12;
    int64_t var_0h_11;
    int64_t var_0h_10;
    int64_t var_0h_9;
    int64_t var_0h_8;
    int64_t var_0h_7;
    int64_t var_0h_6;
    int64_t var_0h_5;
    int64_t var_0h_4;
    int64_t var_0h_3;
    int64_t var_3ch;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_54h;
    int64_t var_58h;
    int64_t var_5ch;
    int64_t var_60h;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_98h;
    int64_t var_a8h;
    int64_t var_0h_2;
    int64_t var_0h;
    int64_t var_sp_10h;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = x29 - 0x10;
    x9 = sp + 0x40;
    *((x29 - 4)) = 0;
    *((x29 - 8)) = w0;
    *(x8) = x1;
    x8 = *(x8);
    x0 = *((x8 + 8));
    x1 = x9;
    stat ();
    *((sp + 0x3c)) = w0;
    w1 = *((sp + 0x3c));
    x0 = "res: %i\n";
    printf (w0, w1);
    x1 = *((sp + 0x40));
    x8 = 0x4008b6;
    *((sp + 0x38)) = w0;
    x0 = x8;
    printf (w0, x1);
    x1 = *((sp + 0x48));
    x8 = "ino: %i\n";
    *((sp + 0x34)) = w0;
    x0 = x8;
    printf (w0, x1);
    w1 = *((sp + 0x50));
    x8 = "mode: %i\n";
    *((sp + 0x30)) = w0;
    x0 = x8;
    printf (w0, w1);
    w1 = *((sp + 0x54));
    x8 = "nlink: %i\n";
    *((sp + 0x2c)) = w0;
    x0 = x8;
    printf (w0, w1);
    w1 = *((sp + 0x58));
    x8 = "uid: %i\n";
    *((sp + 0x28)) = w0;
    x0 = x8;
    printf (w0, w1);
    w1 = *((sp + 0x5c));
    x8 = "gid: %i\n";
    *((sp + 0x24)) = w0;
    x0 = x8;
    printf (w0, w1);
    x1 = *((sp + 0x60));
    x8 = "rdev: %i\n";
    *((sp + 0x20)) = w0;
    x0 = x8;
    printf (w0, x1);
    x1 = *((sp + 0x70));
    x8 = 0x4008c2;
    *((sp + 0x1c)) = w0;
    x0 = x8;
    printf (w0, x1);
    w1 = *((sp + 0x78));
    x8 = "blksize: %i\n";
    *((sp + 0x18)) = w0;
    x0 = x8;
    printf (w0, w1);
    x1 = *((sp + 0x80));
    x8 = "blocks: %i\n";
    *((sp + 0x14)) = w0;
    x0 = x8;
    printf (w0, x1);
    x1 = *((sp + 0x88));
    x8 = "atime: %i\n";
    *((sp + 0x10)) = w0;
    x0 = x8;
    printf (w0, x1);
    x1 = *((sp + 0x98));
    x8 = "mtime: %i\n";
    *((sp + 0xc)) = w0;
    x0 = x8;
    printf (w0, x1);
    x1 = *((sp + 0xa8));
    x8 = "ctime: %i\n";
    *((sp + 8)) = w0;
    x0 = x8;
    printf (w0, x1);
    w10 = 0;
    *((sp + 4)) = w0;
    w0 = w10;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004d0 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400460 */
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
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004c0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4004e0 */
#include <stdint.h>
 
void xstat () {
    x17 = .plt;
    x16 = 0x411020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400480 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 112 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
