/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x728 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x11000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x908 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x6f0 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* int main(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x1 = "The quick brown fox jumps over the lazy dog";
    x2 = 0x2b;
    x29 = sp;
    w0 = 0x0;
    w0 = dbg_rc_crc32 (w0, x1, x2);
    w1 = w0;
    x2 = 0x0;
    x0 = x2 + 0x9d0;
    printf (x0, w1, x2);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x870 */
#include <stdint.h>
 
uint32_t dbg_rc_crc32 (int64_t arg1, uint32_t arg2, int64_t arg3) {
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* uint32_t rc_crc32(uint32_t crc,char const * buf,size_t len); */
    x8 = 0x11000;
    w3 = .comment;
    if (w3 != 0) {
        goto label_2;
    }
    x9 = x8 + 0x40;
    x7 = x9 + 8;
    x5 = 0x0;
    w6 = 0xedb88320;
label_0:
    w3 = w5;
    w4 = 0x8;
    do {
        if ((w3 & 0) == 0) {
            goto label_3;
        }
        w3 = w6 ^ (w3 >> 1);
label_1:
        w4--;
    } while (w4 != w4);
    offset_0 = x5 << 2;
    *((x7 + offset_0)) = w3;
    x5++;
    if (x5 != 0x100) {
        goto label_0;
    }
    w3 = 0x1;
    *(x9) = w3;
label_2:
    x4 = x1 + x2;
    w0 = ~w0;
    if (x1 >= x4) {
        goto label_4;
    }
    x3 = x8 + 0x40;
    x3 += 8;
    do {
        w2 = *(x1);
        x1++;
        x2 = x0 ^ x2;
        w2 = (int8_t) w2;
        offset_1 = x2 << 2;
        w2 = *((x3 + offset_1));
        w0 = w2 ^ (w0 >> 8);
    } while (x4 != x1);
label_4:
    w0 = ~w0;
    return w0;
label_3:
    w3 >>= 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x11020;
    return uint64_t (*x17)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x980).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x760 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x6c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x778 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x11038;
    x0 = 0x11038;
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x7b0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x11038;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x11038;
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x7f0 */
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
    w0 = *((x19 + 0x38));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x11030);
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x6a0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x11000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x838 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x7b0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x7b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x984 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x660 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x11018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_gcc_O2/subject.exe @ 0x680 */
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
