/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400670 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1476 named .text */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4006b8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400600)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4006d0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = stdout;
    x0 = stdout;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400710 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = stdout;
    x1 -= x0;
    x1 >>= 3;
    x1 = stdout;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400750 */
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
    w0 = *((x19 + 0x60));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x60)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400780 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400710)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400710)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400c30).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4007e8 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void text (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    *((sp + -0x30)) = x22;
    *((sp + -0x30 + 8)) = x21;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    x8 = 0x411000;
    w8 = .comment;
    w9 = 1;
    w20 = w2;
    w10 = w9 - w0;
    value_0 = BIT_MASK (1, 0x1f);
    value_1 = w1 & value_0;
    value_0 = ~value_0;
    w9 &= value_0;
    w9 |= value_1;
    w1 = w10 + w8;
    w8++;
    w10 = -w20;
    __asm ("madd w2, w8, w9, w10");
    x0 = "\e[%d;%dH";
    x19 = x3;
    printf (x0, w1, w2);
    if (w20 == 0) {
        goto label_0;
    }
    x21 = 0x400c51;
    do {
        x0 = x21;
        x1 = x19;
        w20--;
        printf (x0, x1);
    } while (w20 != 0);
label_0:
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    x22 = *(sp);
    x21 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400c34 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4007c0 */
#include <stdint.h>
 
void new_tower (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    value_0 = x0 >> 0x1e;
    x8 = value_0 << 0x1e;
    x8 = (int64_t) x8;
    x1 = x8 + 0x10;
    w0 = 1;
    x0 = calloc (w0, x1);
    x8 = x0 + 0x10;
    *(x0) = x8;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4005f0 */
#include <stdint.h>
 
void calloc () {
    x16 = 0x411000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400860 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void dbg_add_disk (int64_t arg1, int64_t arg2) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* void add_disk(int i,int d); */
    *((sp + -0x30)) = x22;
    *((sp + -0x30 + 8)) = x21;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    x8 = .comment;
    w19 = w1;
    x9 = *((x8 + 8));
    x10 = .comment;
    w11 = w9 + 1;
    *((x8 + 8)) = w11;
    offset_0 = x9 << 2;
    *((x10 + offset_0)) = w19;
    w8 = .comment;
    x9 = 0x411000;
    w9 = .comment;
    w10 = 1;
    w8 = w10 - w8;
    value_1 = BIT_MASK (1, 0x1f);
    value_2 = w0 & value_1;
    value_1 = ~value_1;
    w10 &= value_1;
    w10 |= value_2;
    w11 = -w19;
    w1 = w8 + w9;
    w8 = w9 + 1;
    __asm ("madd w2, w8, w10, w11");
    x0 = "\e[%d;%dH";
    printf (x0, w1, w2);
    if (w19 == 0) {
        goto label_0;
    }
    x20 = 0x400c51;
    x21 = 0x400c54;
    do {
        x0 = x20;
        x1 = x21;
        w19--;
        printf (x0, x1);
    } while (w19 != 0);
label_0:
    w0 = 0x86a1;
    usleep (w0);
    x8 = 0x411000;
    x0 = .comment;
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    x22 = *(sp);
    x21 = *((sp + 8));
    return void (*0x400640)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400bb8 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400aa8 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int c,char ** v); */
    *((sp + -0x30)) = x22;
    *((sp + -0x30 + 8)) = x21;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    w20 = w0;
    x0 = "\e[H\e[J";
    x19 = x1;
    puts (x0);
    if (w20 >= 2) {
        x0 = *((x19 + 8));
        x1 = 0;
        w2 = 0xa;
        x0 = strtol (x0, x1, w2);
        x19 = x0;
        if (w19 > 0) {
            goto label_0;
        }
    }
    w19 = 8;
label_0:
    value_0 = x19 >> 0x1e;
    x8 = value_0 << 0x1e;
    x8 = (int64_t) x8;
    x20 = x8 + 0x10;
    x21 = 0x411000;
    w0 = 1;
    x1 = x20;
    *((x21 + 0x80)) = w19;
    calloc (x0, x1);
    x8 = x0 + 0x10;
    x22 = 0x411068;
    *(x0) = x8;
    *(x22) = x0;
    w0 = 1;
    x1 = x20;
    x0 = calloc (w0, x1);
    x8 = x0 + 0x10;
    *(x0) = x8;
    *((x22 + 8)) = x0;
    w0 = 1;
    x1 = x20;
    x0 = calloc (w0, x1);
    x8 = x0 + 0x10;
    *(x0) = x8;
    *((x22 + 0x10)) = x0;
    do {
        w0 = 0;
        w1 = w19;
        dbg_add_disk (w0, w1);
        w19--;
    } while (w19 != 0);
    w0 = *((x21 + 0x80));
    w1 = 0;
    w2 = 2;
    w3 = 1;
    dbg_move (w0, w1, w2, w3);
    w1 = *((x21 + 0x80));
    x0 = "\e[%d;%dH";
    w2 = w1;
    printf (x0, w1, w2);
    x0 = 0x400c51;
    x1 = 0x400c61;
    printf (x0, x1);
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    w0 = 0;
    x22 = *(sp);
    x21 = *((sp + 8));
    return 0x400c51;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400914 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void remove_disk (int64_t arg1) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    *((sp + -0x30)) = x22;
    *((sp + -0x30 + 8)) = x21;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    x8 = .comment;
    x10 = 0x411000;
    x9 = *((x8 + 8));
    x11 = .comment;
    x9--;
    *((x8 + 8)) = w9;
    w8 = .comment;
    w19 = .comment;
    w10 = 1;
    value_0 = BIT_MASK (1, 0x1f);
    value_1 = w0 & value_0;
    value_0 = ~value_0;
    w10 &= value_0;
    w10 |= value_1;
    w1 = w8 - w9;
    w8++;
    w9 = -w19;
    __asm ("madd w2, w8, w10, w9");
    x0 = "\e[%d;%dH";
    printf (x0, w1, w2);
    if (w19 == 0) {
        goto label_0;
    }
    x20 = 0x400c51;
    x21 = 0x400c57;
    w22 = w19;
    do {
        x0 = x20;
        x1 = x21;
        w22--;
        printf (x0, x1);
    } while (w22 != 0);
label_0:
    w0 = w19;
    x29 = *((sp + 0x20));
    x30 = *((sp + 0x20 + 8));
    x20 = *((sp + 0x10));
    x19 = *((sp + 0x10 + 8));
    x22 = *(sp);
    x21 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4005a0 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4009b0 */
#include <stdint.h>
 
#define BIT_MASK(t,v) ((t)(-((v)!= 0)))&(((t)-1)>>((sizeof(t)*CHAR_BIT)-(v)))
 
void dbg_move (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_60h;
    int64_t var_60h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    int64_t var_50h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    /* void move(int n,int from,int to,int via); */
    *((sp + -0x60)) = x28;
    *((sp + -0x60 + 8)) = x27;
    *((sp + 0x10)) = x26;
    *((sp + 0x10 + 8)) = x25;
    *((sp + 0x20)) = x24;
    *((sp + 0x20 + 8)) = x23;
    *((sp + 0x30)) = x22;
    *((sp + 0x30 + 8)) = x21;
    *((sp + 0x40)) = x20;
    *((sp + 0x40 + 8)) = x19;
    *((sp + 0x50)) = x29;
    *((sp + 0x50 + 8)) = x30;
    x29 = sp + 0x50;
    w19 = w2;
    w20 = w1;
    w21 = w0;
    if (w21 == 0) {
        goto label_1;
    }
    x28 = 0x411000;
    x22 = "\e[%d;%dH";
    x23 = 0x400c51;
    x24 = 0x400c57;
label_0:
    w25 = w3;
    w21--;
    w0 = w21;
    w1 = w20;
    w2 = w25;
    w3 = w19;
    dbg_move (w0, w1, w2, w3);
    x8 = .comment;
    w11 = 1;
    value_0 = BIT_MASK (1, 0x1f);
    value_1 = w20 & value_0;
    value_0 = ~value_0;
    w11 &= value_0;
    w11 |= value_1;
    x0 = x22;
    x9 = *((x8 + 8));
    x10 = .comment;
    x9--;
    *((x8 + 8)) = w9;
    w8 = *((x28 + 0x80));
    w27 = .comment;
    w1 = w8 - w9;
    w8++;
    w9 = -w27;
    __asm ("madd w2, w8, w11, w9");
    printf (x0, w1, w2);
    w26 = w27;
    if (w27 == 0) {
        goto label_2;
    }
    do {
        x0 = x23;
        x1 = x24;
        w26--;
        printf (x0, x1);
    } while (w26 != 0);
label_2:
    w0 = w19;
    w1 = w27;
    dbg_add_disk (w0, w1);
    w3 = w20;
    w20 = w25;
    if (w21 != 0) {
        goto label_0;
    }
label_1:
    x29 = *((sp + 0x50));
    x30 = *((sp + 0x50 + 8));
    x20 = *((sp + 0x40));
    x19 = *((sp + 0x40 + 8));
    x22 = *((sp + 0x30));
    x21 = *((sp + 0x30 + 8));
    x24 = *((sp + 0x20));
    x23 = *((sp + 0x20 + 8));
    x26 = *((sp + 0x10));
    x25 = *((sp + 0x10 + 8));
    x28 = *(sp);
    x27 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400620 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x411020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400610 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400630 */
#include <stdint.h>
 
void strtol () {
    x17 = .plt;
    x16 = 0x411028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400640 */
#include <stdint.h>
 
void fflush () {
    x17 = .plt;
    x16 = 0x411030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400660 */
#include <stdint.h>
 
void printf () {
    x17 = .plt;
    x16 = 0x411040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x400650 */
#include <stdint.h>
 
void usleep () {
    x17 = .plt;
    x16 = 0x411038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O2/subject.exe @ 0x4005c0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 176 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
