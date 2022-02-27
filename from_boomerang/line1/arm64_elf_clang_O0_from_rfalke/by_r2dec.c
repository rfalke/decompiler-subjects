/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005d0 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 732 named .text */
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
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400570 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400618 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400580)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400630 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411050;
    x0 = 0x411050;
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
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400670 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411050;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411050;
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
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006b0 */
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
    w0 = *((x19 + 0x50));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x50)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400670)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400670)() ();
}


r2dec has crashed (info: SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4008a8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4008ac */
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
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400830 */
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
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400788 */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    FILE * stream;
    char ** var_20h;
    int64_t var_18h;
    int64_t var_14h;
    int64_t var_bp_10h;
    int64_t var_0h;
    int64_t var_0h_2;
    int64_t var_8h;
    int64_t var_10h_2;
    int64_t var_sp_20h;
    int64_t var_10h;
    int64_t var_10h_3;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0x20)) = x28;
    *((sp + -0x20 + 8)) = x27;
    *((sp + 0x10)) = x29;
    *((sp + 0x10 + 8)) = x30;
    x29 = sp + 0x10;
    *((x29 - 0x14)) = 0;
    *((x29 - 0x18)) = w0;
    *((x29 - 0x20)) = x1;
    w0 = *((x29 - 0x18));
    if (w0 < 2) {
        w8 = 1;
        *((x29 - 0x14)) = w8;
    } else {
        x8 = 0x400000;
        x1 = x8 + 0x8c0;
        x8 = *((x29 - 0x20));
        x0 = .comment;
        fopen (x0, x1);
        *((x29 - 0x28)) = x0;
        x8 = *((x29 - 0x28));
        if (x8 == 0) {
            w8 = 1;
            *((x29 - 0x14)) = w8;
        } else {
            w1 = 0x400;
            x0 = sp + 8;
            x2 = *((x29 - 0x28));
            x0 = dbg_chomp (x0, w1, x2);
            if (x0 != 0) {
                x1 = sp + 8;
                x0 = 0x4008c2;
                printf (x0, x1);
                *((sp + 4)) = w0;
            }
            x0 = *((x29 - 0x28));
            fclose (x0);
            *(sp) = w0;
        }
    }
    w0 = *((x29 - 0x14));
    x29 = *((sp + 0x10));
    x30 = *((sp + 0x10 + 8));
    x28 = *(sp);
    x27 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400720 */
#include <stdint.h>
 
void dbg_chomp (char * arg1, int64_t arg2, FILE * arg3) {
    int64_t var_ch;
    char * s;
    int64_t var_sp_8h;
    char * var_10h;
    FILE * stream;
    int64_t var_10h_2;
    int64_t var_10h_3;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* char * chomp(char * s,int size,FILE * f); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 8)) = x0;
    *((x29 - 0xc)) = w1;
    *((sp + 0x18)) = x2;
    x0 = *((x29 - 8));
    w1 = *((x29 - 0xc));
    x2 = *((sp + 0x18));
    fgets (x0, w1, x2);
    *((sp + 0x10)) = x0;
    x0 = *((sp + 0x10));
    if (x0 != 0) {
        w1 = 0xa;
        x0 = *((sp + 0x10));
        strchr (x0, w1);
        *((sp + 8)) = x0;
        x0 = *((sp + 8));
        if (x0 != 0) {
            x8 = *((sp + 8));
            *(x8) = 0;
        }
    }
    x0 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400518 */
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
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005c0 */
#include <stdint.h>
 
void fgets () {
    x17 = *(0x411038);
    x16 = 0x411038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400550 */
#include <stdint.h>
 
void fclose () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400560 */
#include <stdint.h>
 
void fopen () {
    x16 = 0x411000;
    x17 = *(0x411008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400590 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411020);
    x16 = 0x411020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void strchr () {
    x17 = *(0x411028);
    x16 = 0x411028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005b0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411030);
    x16 = 0x411030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/line1/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400530 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 160 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
