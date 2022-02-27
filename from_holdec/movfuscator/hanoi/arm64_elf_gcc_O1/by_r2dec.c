/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x900 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1180 named .text */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x870 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xd20 */
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
    x20 = 0x11000;
    x21 = .init_array;
    x20 += sym.__libc_csu_fini;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xc28 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = argc;
    x1 = argv;
    /* int main(int c,char ** v); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    w19 = w0;
    x20 = x1;
    x0 = "\e[H\e[J";
    puts ("\e[H\e[J");
    __asm ("b.le 0xc78");
    w2 = 0xa;
    x1 = 0x0;
    x0 = *((x20 + 8));
    strtol (x0, x1, w2);
    x1 = height;
    *(x1) = w0;
    if (w0 <= 0) {
        w1 = 0x8;
        x0 = height;
        *(x0) = w1;
    }
    x19 = 0x0;
    x21 = height;
    x20 = t;
    do {
        w0 = *(x21);
        dbg_new_tower (w0);
        *((x20 + x19)) = x0;
        x19 += 8;
    } while (x19 != 0x18);
    x0 = height;
    w19 = height;
    if (w19 == 0) {
        goto label_0;
    }
    do {
        w1 = w19;
        w0 = 0x0;
        dbg_add_disk (w0, w1);
        w19--;
    } while (w19 != w19);
label_0:
    w3 = 0x1;
    w2 = 0x2;
    w1 = 0x0;
    x0 = height;
    w0 = height;
    dbg_move (x0, w1, x2, x3);
    x3 = 0xde8;
    w2 = 0x1;
    w1 = 0x0;
    w0 = w2;
    dbg_text (w0, w1, w2, x3);
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xd98).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x938 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x890)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x950 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x988 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x9c8 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x860 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xa10 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x988)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x988)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xa74 */
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
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    w19 = w2;
    x21 = x3;
    x2 = height;
    w3 = height;
    w1 <<= 1;
    w2 = w3 + 1;
    __asm ("madd w2, w1, w2, w2");
    w0 = w3 - w0;
    w2 -= w19;
    w1 = w0 + 1;
    x0 = "\e[%d;%dH";
    printf (w0, w1, x2, w3);
    if (w19 == 0) {
        goto label_0;
    }
    x20 = 0xdc8;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xd9c */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xa48 */
#include <stdint.h>
 
uint64_t dbg_new_tower (size_t size) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = size;
    /* tower * new_tower(int cap); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x0 = (int64_t) w0;
    x1 = x0 + 4;
    x1 <<= 2;
    x0 = 0x1;
    x0 = calloc (x0, x1);
    x2 = x0 + 0x10;
    *(x0) = x2;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x880 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xaec */
#include <stdint.h>
 
uint64_t dbg_add_disk (int64_t arg1, int64_t arg2) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* void add_disk(int i,int d); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x3 = t;
    x2 = (int64_t) w0;
    x4 = t;
    x6 = t;
    w5 = .comment;
    w7 = w5 + 1;
    *((x4 + 8)) = w7;
    offset_0 = w5 << 2;
    *((x6 + offset_0)) = w1;
    x4 = t;
    x3 = 0xdd0;
    w2 = w1;
    w1 = w0;
    w0 = .comment;
    dbg_text (w0, w1, w2, x3);
    w0 = 0x186a0;
    usleep (w0);
    x0 = .comment;
    fflush (x0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x186a0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void usleep () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void fflush () {
    x17 = *(0x38);
    x16 = 0x38;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xb58 */
#include <stdint.h>
 
uint64_t dbg_remove_disk (int64_t arg1) {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    x0 = arg1;
    /* int remove_disk(int i); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    w1 = w0;
    x2 = t;
    x0 = (int64_t) w0;
    x4 = t;
    x5 = t;
    w3 = .comment;
    w3--;
    *((x4 + 8)) = w3;
    w19 = t;
    x0 = t;
    w0 = .comment;
    x3 = 0xdd8;
    w2 = w19;
    w0++;
    dbg_text (w0, x1, w2, x3);
    w0 = w19;
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x11fa8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x820 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0xbb8 */
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
        return w0;
    }
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w22 = w3;
    w20 = w2;
    w21 = w1;
    w19 = w0 - 1;
    w3 = w2;
    w2 = w22;
    w0 = w19;
    dbg_move (w0, x1, w2, w3);
    w0 = w21;
    w0 = dbg_remove_disk (w0);
    w1 = w0;
    w0 = w20;
    dbg_add_disk (w0, w1);
    w3 = w21;
    w2 = w20;
    w1 = w22;
    w0 = w19;
    dbg_move (w0, w1, w2, w3);
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x20);
    x16 = 0x20;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x28);
    x16 = 0x28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O1/subject.exe @ 0x840 */
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
