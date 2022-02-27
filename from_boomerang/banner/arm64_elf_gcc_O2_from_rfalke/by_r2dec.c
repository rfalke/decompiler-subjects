/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x1014 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xed0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x13010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x1158 */
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
    x20 = 0x12db0;
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xf10 */
#include <stdint.h>
 
uint64_t dbg_main () {
    char[80] line;
    int64_t var_4fh;
    char * s;
    int64_t var_a0h;
    int64_t var_a0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_0h;
    int64_t var_8h;
    int64_t var_0h_2;
    int64_t var_sp_4fh;
    /* int main(); */
    *((sp + -0xa0)) = x29;
    *((sp + -0xa0 + 8)) = x30;
    x0 = 0xc;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x1000;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    malloc (x0);
    x1 = x19 + 0x1f0;
    x21 = x29 + 0x4f;
    x23 = 0x11fa;
    x22 = 0x13040;
    x25 = x29 + 0x50;
    w20 = 0x0;
    w24 = 0x20;
    *((x0 + 8)) = x1;
label_1:
    x4 = x19 + 0x1f0;
    x3 = x25;
label_0:
    w1 = *(x4);
    x0 = 0x0;
    w1 -= 0x20;
    w1 = (w1 >= w1) ? w1 : 0;
    w6 = w1 & 7;
    w1 >>= 3;
    w2 = w6 << 3;
    w5 = w20 + (w1 << 3);
    w2 -= w6;
    w1 = w5 - w1;
    offset_0 = w1 << 3;
    x1 = *((x22 + offset_0));
    x1 += (w2 << x1);
    do {
        w2 = *((x1 + x0));
        *((x3 + x0)) = w2;
        x0++;
    } while (x0 != 7);
    x4++;
    *((x3 + 7)) = w24;
    x3 += 8;
    if (x23 != x4) {
        goto label_0;
    }
    x0 = x25 + 0x4f;
    do {
        w1 = *(x0);
        if (w1 != 0x20) {
            goto label_2;
        }
        *(x0) = 0;
        x0 += 0xffffffffffffffff;
    } while (x21 != x0);
label_2:
    x0 = x25;
    w20++;
    puts (x0);
    if (w20 != 7) {
        goto label_1;
    }
    x0 = 0x21f8;
    puts (x0);
    x25 = *((sp + 0x40));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 = 0x0;
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}


r2dec has crashed (info: SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x11d0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x104c */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0xee0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x1060 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x1098 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x10d8 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x13000;
    w0 = *((x19 + 0x2e0));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x13038);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x2e0)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xeb0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x1120 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x1098)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x1098)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x11d4 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xe70 */
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
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xec0 */
#include <stdint.h>
 
void malloc () {
    x16 = 0x13000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xef0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x13020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xf00 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x13028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xe90 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x12ff8;
    return uint64_t (*x17)() ();
}
