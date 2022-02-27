/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4004f0 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 964 named .text */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4004b0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400538 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x4004c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400550 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400590 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4005d0 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400600 */
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


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4008b0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400640 */
#include <stdint.h>
 
void dbg_rc_crc32 (int64_t arg_40h, int64_t arg1, int64_t arg2, int64_t arg3) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    signed int64_t var_1ch;
    int64_t var_23h;
    int64_t var_24h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_3ch;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* uint32_t rc_crc32(uint32_t crc,char const * buf,size_t len); */
    x8 = rc_crc32.have_table;
    *((sp + 0x3c)) = w0;
    *((sp + 0x30)) = x1;
    *((sp + 0x28)) = x2;
    w0 = rc_crc32.have_table;
    if (w0 != 0) {
        goto label_1;
    }
    *((sp + 0x1c)) = 0;
label_0:
    w8 = *((sp + 0x1c));
    if (w8 >= 0x100) {
        goto label_2;
    }
    w8 = *((sp + 0x1c));
    *((sp + 0x24)) = w8;
    *((sp + 0x18)) = 0;
    do {
        w8 = *((sp + 0x18));
        if (w8 >= 8) {
            goto label_3;
        }
        w8 = *((sp + 0x24));
        if ((w8 & 0) != 0) {
            w8 = 0xefb8;
            w9 = *((sp + 0x24));
            w9 >>= 1;
            *((sp + 0x24)) = w9;
            w9 = *((sp + 0x24));
            w8 = w9 ^ w8;
            *((sp + 0x24)) = w8;
        } else {
            w8 = *((sp + 0x24));
            w8 >>= 1;
            *((sp + 0x24)) = w8;
        }
        w8 = *((sp + 0x18));
        w8++;
        *((sp + 0x18)) = w8;
    } while (1);
label_3:
    x8 = 0x41103c;
    w9 = *((sp + 0x24));
    x10 = *((sp + 0x1c));
    x11 = 4;
    x10 *= x11;
    x8 += x10;
    *(x8) = w9;
    w8 = *((sp + 0x1c));
    w8++;
    *((sp + 0x1c)) = w8;
    goto label_0;
label_2:
    w8 = 1;
    x9 = rc_crc32.have_table;
    *(x9) = w8;
label_1:
    w8 = 0x0;
    w9 = *((sp + 0x3c));
    w8 = w9 ^ w8;
    *((sp + 0x3c)) = w8;
    x10 = *((sp + 0x30));
    x11 = *((sp + 0x28));
    x10 += x11;
    *((sp + 8)) = x10;
    x10 = *((sp + 0x30));
    *((sp + 0x10)) = x10;
    do {
        x8 = *((sp + 0x10));
        x9 = *((sp + 8));
        if (x8 >= x9) {
            goto label_4;
        }
        x8 = 0x41103c;
        x9 = *((sp + 0x10));
        w10 = *(x9);
        *((sp + 0x23)) = w10;
        w10 = *((sp + 0x3c));
        w10 >>= 8;
        w11 = *((sp + 0x3c));
        w11 &= 0xff;
        w12 = *((sp + 0x23));
        w11 ^= w12;
        w9 = w11;
        x9 = (x9 >> 0) & ((1 << 0x20) - 1);
        x13 = 4;
        x9 *= x13;
        x8 += x9;
        w11 = *(x8);
        w10 ^= w11;
        *((sp + 0x3c)) = w10;
        x8 = *((sp + 0x10));
        x8++;
        *((sp + 0x10)) = x8;
    } while (1);
label_4:
    w8 = 0x0;
    w9 = *((sp + 0x3c));
    w0 = w9 ^ w8;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4008b4 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400838 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4007bc */
#include <stdint.h>
 
void dbg_main (int32_t argc) {
    int64_t var_14h;
    char * s;
    int64_t var_0h_3;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_sp_10h;
    int64_t var_0h_2;
    int64_t var_0h;
    x0 = argc;
    /* int main(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w8 = 0;
    x9 = "The quick brown fox jumps over the lazy dog";
    *((x29 - 4)) = 0;
    *((x29 - 0x10)) = x9;
    x1 = *((x29 - 0x10));
    x0 = *((x29 - 0x10));
    *((x29 - 0x14)) = w8;
    *((sp + 0x10)) = x1;
    strlen (x0);
    w8 = *((x29 - 0x14));
    *((sp + 8)) = x0;
    w0 = w8;
    x1 = *((sp + 0x10));
    x2 = *((sp + 8));
    dbg_rc_crc32 (x0, x1, x2, x3);
    x9 = 0x4008f4;
    *((sp + 4)) = w0;
    x0 = x9;
    w1 = *((sp + 4));
    printf (w0, w1);
    w8 = 0;
    *(sp) = w0;
    w0 = w8;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4004a0 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x411000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4004e0 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x411020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400460 */
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
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x4004d0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/crc32/arm64_elf_clang_O0/subject.exe @ 0x400480 */
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
