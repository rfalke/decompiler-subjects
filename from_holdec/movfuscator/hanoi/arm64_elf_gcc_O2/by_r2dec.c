/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xa0c */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x870 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xd28 */
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
    x20 = 0x11d98;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x900 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    x0 = argc;
    x1 = argv;
    /* int main(int c,char ** v); */
    *((sp + -0x40)) = x29;
    *((sp + -0x40 + 8)) = x30;
    x2 = 0x0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    x0 = x2 + 0xde8;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x20 = x1;
    *((sp + 0x30)) = x23;
    puts (x0);
    __asm ("b.le 0x9f8");
    x0 = *((x20 + 8));
    x1 = 0x0;
    x22 = 0x11000;
    w2 = 0xa;
    w0 = strtol (x0, x1, w2);
    x1 = height;
    *(x1) = w0;
    __asm ("b.le 0x9fc");
label_0:
    x0 = *((x22 + 0xfd0));
    x20 = 0x0;
    x23 = t;
    w19 = *(x0);
    x21 = (int64_t) w19;
    x21 += 4;
    x21 <<= 2;
    do {
        x1 = x21;
        x0 = 0x1;
        calloc (x0, x1);
        *((x20 + x23)) = x0;
        x20 += 8;
        x1 = x0 + 0x10;
        *(x0) = x1;
    } while (x20 != 0x18);
    if (w19 == 0) {
        goto label_1;
    }
    do {
        w1 = w19;
        w0 = 0x0;
        dbg_add_disk (w0, w1);
        w19--;
    } while (w19 != w19);
label_1:
    x22 = *((x22 + 0xfd0));
    w3 = 0x1;
    w2 = 0x2;
    w1 = 0x0;
    w0 = *(x22);
    dbg_move (w0, w1, w2, w3);
    w2 = 0x1;
    w0 = w2;
    x3 = 0xdf0;
    w1 = 0x0;
    dbg_text (w0, w1, x2, x3);
    x23 = *((sp + 0x30));
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
    x22 = 0x11000;
    x0 = *((x22 + 0xfd0));
    w1 = 0x8;
    *(x0) = w1;
    goto label_0;
}


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xda0).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xa44 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x890)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xa58 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x60;
    x0 = 0x60;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xa90 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x60;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x60;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xad0 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x0;
    w0 = *((x19 + 0x60));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x58);
            cxa_finalize ();
        }
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x860 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xb18 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x11000;
    x0 += sym.__libc_csu_fini;
    x1 = *(x0);
    while (x1 == 0) {
        void (*0xa90)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xa90)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xb80 */
#include <stdint.h>
 
void dbg_text (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    /* void text(int y,int i,int d,char const * s); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    w1 <<= 1;
    x5 = 0x0;
    x29 = sp;
    x4 = height;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w2;
    w4 = height;
    *((sp + 0x20)) = x21;
    x21 = x3;
    w3 = w4 + 1;
    w0 = w4 - w0;
    __asm ("madd w3, w1, w3, w3");
    w1 = w0 + 1;
    x0 = x5 + 0xdc0;
    w2 = w3 - w2;
    printf (w0, w1, w2, w3, x4, x5);
    if (w19 == 0) {
        goto label_0;
    }
    x20 = 0xdd0;
    do {
        x1 = x21;
        x0 = x20;
        printf (x0, x1);
        w19--;
    } while (w19 != w19);
label_0:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xda4 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xb50 */
#include <stdint.h>
 
uint64_t new_tower (size_t size) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = size;
    x1 = (int64_t) w0;
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x1 += 4;
    x0 = 0x1;
    x29 = sp;
    x1 <<= 2;
    x0 = calloc (x0, x1);
    x2 = x0 + 0x10;
    *(x0) = x2;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x880 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xbf8 */
#include <stdint.h>
 
void dbg_add_disk (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* void add_disk(int i,int d); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    w5 = w1;
    w2 = w1;
    x29 = sp;
    x4 = t;
    w1 = w0;
    x3 = 0xdd8;
    x0 = t;
    w4 = .comment;
    x6 = t;
    w7 = w4 + 1;
    *((x0 + 8)) = w7;
    offset_0 = w4 << 2;
    *((x6 + offset_0)) = w5;
    w0 = .comment;
    dbg_text (w0, x1, x2, x3);
    w0 = 0x186a0;
    usleep (w0);
    x29 = *(sp);
    x30 = *((sp + 8));
    x0 = .comment;
    return void (*0x8d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void usleep () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xc60 */
#include <stdint.h>
 
void dbg_remove_disk (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int remove_disk(int i); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    w1 = w0;
    x29 = sp;
    x3 = 0xde0;
    x2 = t;
    w0 = .comment;
    x5 = t;
    w4 = w0 - 1;
    *((sp + 0x10)) = x19;
    *((x2 + 8)) = w4;
    w19 = t;
    w2 = w19;
    dbg_text (x0, x1, w2, x3);
    w0 = w19;
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x820 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0xcb0 */
#include <stdint.h>
 
void dbg_move (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
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
    if (w0 == 0) {
        /* void move(int n,int from,int to,int via); */
        goto label_0;
    }
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w20 = w1;
    w22 = w2;
    w21 = w3;
    while (w19 != 0) {
        w20 = w0;
        w19--;
        w2 = w21;
        w3 = w22;
        w1 = w20;
        w0 = w19;
        dbg_move (w0, w1, w2, w3);
        w0 = w20;
        w0 = dbg_remove_disk (w0);
        w1 = w0;
        w0 = w22;
        dbg_add_disk (w0, w1);
        w0 = w21;
        w21 = w20;
    }
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x20);
    x16 = 0x20;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x28);
    x16 = 0x28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void fflush () {
    x17 = *(0x38);
    x16 = 0x38;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O2/subject.exe @ 0x840 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 192 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
