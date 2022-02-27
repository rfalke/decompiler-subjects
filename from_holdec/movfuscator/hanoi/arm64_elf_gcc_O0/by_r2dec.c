/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x900 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1420 named .text */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x880 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xe10 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xce4 */
#include <stdint.h>
 
uint64_t dbg_main (signed int64_t argc, char ** argv) {
    char ** v;
    int32_t c;
    char * str;
    signed int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int c,char ** v); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x10)) = x1;
    x0 = "\e[H\e[J";
    puts ("\e[H\e[J");
    w0 = *((x29 + 0x1c));
    __asm ("b.le 0xd40");
    x0 = *((x29 + 0x10));
    x0 += 8;
    x0 = *(x0);
    w0 = atoi (x0);
    w1 = w0;
    x0 = height;
    *(x0) = w1;
    x0 = height;
    w0 = height;
    if (w0 <= 0) {
        x0 = height;
        w1 = 0x8;
        *(x0) = w1;
    }
    *((x29 + 0x1c)) = 0;
    while (1) {
        x0 = height;
        w0 = height;
        x0 = dbg_new_tower (w0);
        x2 = x0;
        x0 = t;
        x1 = *((x29 + 0x1c));
        offset_0 = x1 << 3;
        *((x0 + offset_0)) = x2;
        w0 = *((x29 + 0x1c));
        w0++;
        *((x29 + 0x1c)) = w0;
        w0 = *((x29 + 0x1c));
        __asm ("b.le 0xd58");
    }
    x0 = height;
    w0 = height;
    *((x29 + 0x1c)) = w0;
    while (w0 != 0) {
        w1 = *((x29 + 0x1c));
        w0 = 0x0;
        dbg_add_disk (w0, w1);
        w0 = *((x29 + 0x1c));
        w0--;
        *((x29 + 0x1c)) = w0;
        w0 = *((x29 + 0x1c));
    }
    x0 = height;
    w0 = height;
    w3 = 0x1;
    w2 = 0x2;
    w1 = 0x0;
    dbg_move (w0, w1, w2, w3);
    x0 = 0xed8;
    x3 = x0;
    w2 = 0x1;
    w1 = 0x0;
    w0 = 0x1;
    dbg_text (w0, w1, w2, x3);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xe88).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x938 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x8a0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x950 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x988 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x9c8 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x860 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xa10 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xa8c */
#include <stdint.h>
 
void dbg_text (int64_t arg1, char * arg2, signed int64_t arg3, char * arg4) {
    char const * s;
    int32_t d;
    int32_t i;
    int32_t y;
    char * var_18h;
    signed int64_t var_24h;
    char * var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    /* void text(int y,int i,int d,char const * s); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x2c)) = w0;
    *((x29 + 0x28)) = w1;
    *((x29 + 0x24)) = w2;
    *((x29 + 0x18)) = x3;
    x0 = height;
    w1 = height;
    w0 = *((x29 + 0x2c));
    w0 = w1 - w0;
    w3 = w0 + 1;
    x0 = height;
    w0 = height;
    w1 = w0 + 1;
    w0 = *((x29 + 0x28));
    w0 <<= 1;
    w0++;
    w1 *= w0;
    w0 = *((x29 + 0x24));
    w1 -= w0;
    x0 = "\e[%d;%dH";
    w2 = w1;
    w1 = w3;
    printf (w0, w1, w2, x3);
    while (w0 != 0) {
        x0 = 0xeb8;
        x1 = *((x29 + 0x18));
        printf (x0, x1);
        w0 = *((x29 + 0x24));
        w1 = w0 - 1;
        *((x29 + 0x24)) = w1;
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xe8c */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xa48 */
#include <stdint.h>
 
uint64_t dbg_new_tower (size_t arg1) {
    int32_t cap;
    tower * t;
    size_t size;
    char * var_28h;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* tower * new_tower(int cap); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    x0 = *((x29 + 0x1c));
    x0 += 4;
    x0 <<= 2;
    x1 = x0;
    x0 = 0x1;
    calloc (x0, x1);
    *((x29 + 0x28)) = x0;
    x0 = *((x29 + 0x28));
    x1 = x0 + 0x10;
    x0 = *((x29 + 0x28));
    *(x0) = x1;
    x0 = *((x29 + 0x28));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x890 */
#include <stdint.h>
 
void calloc () {
    x17 = .text;
    x16 = 0x18;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xb2c */
#include <stdint.h>
 
uint64_t dbg_add_disk (signed int64_t arg1, char * arg2) {
    int32_t d;
    int32_t i;
    char * var_18h;
    signed int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    /* void add_disk(int i,int d); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    x1 = *((x29 + 0x1c));
    x0 = t;
    x2 = t;
    x1 = *((x29 + 0x1c));
    x0 = t;
    w1 = .comment;
    w3 = w1 + 1;
    *((x0 + 8)) = w3;
    x0 = (int64_t) w1;
    x0 <<= 2;
    x0 = x2 + x0;
    w1 = *((x29 + 0x18));
    *(x0) = w1;
    x1 = *((x29 + 0x1c));
    x0 = t;
    w4 = .comment;
    x0 = 0xec0;
    x3 = x0;
    w2 = *((x29 + 0x18));
    w1 = *((x29 + 0x1c));
    w0 = w4;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void usleep () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void fflush () {
    x17 = *(0x38);
    x16 = 0x38;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xbd8 */
#include <stdint.h>
 
uint64_t dbg_remove_disk (signed int64_t arg1) {
    int32_t i;
    int32_t d;
    signed int64_t var_1ch;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = arg1;
    /* int remove_disk(int i); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    x1 = *((x29 + 0x1c));
    x0 = t;
    x1 = t;
    x2 = *((x29 + 0x1c));
    x0 = t;
    w2 = .comment;
    w2--;
    *((x0 + 8)) = w2;
    w0 = .comment;
    x0 = (int64_t) w0;
    x0 <<= 2;
    x0 = x1 + x0;
    w0 = t;
    *((x29 + 0x2c)) = w0;
    x1 = *((x29 + 0x1c));
    x0 = t;
    w0 = .comment;
    w4 = w0 + 1;
    x0 = 0xec8;
    x3 = x0;
    w2 = *((x29 + 0x2c));
    w1 = *((x29 + 0x1c));
    w0 = w4;
    dbg_text (w0, w1, w2, x3);
    w0 = *((x29 + 0x2c));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0xec8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x820 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0xc6c */
#include <stdint.h>
 
void dbg_move (int64_t arg1, char * arg2, int64_t arg3, int64_t arg4) {
    int32_t via;
    int32_t to;
    int32_t from;
    int32_t n;
    int64_t var_10h;
    int64_t var_14h;
    char * var_18h;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    /* void move(int n,int from,int to,int via); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x18)) = w1;
    *((x29 + 0x14)) = w2;
    *((x29 + 0x10)) = w3;
    w0 = *((x29 + 0x1c));
    if (w0 != 0) {
        w0 = *((x29 + 0x1c));
        w0--;
        w3 = *((x29 + 0x14));
        w2 = *((x29 + 0x10));
        w1 = *((x29 + 0x18));
        dbg_move (w0, w1, w2, w3);
        w0 = *((x29 + 0x18));
        w0 = dbg_remove_disk (w0);
        w1 = w0;
        w0 = *((x29 + 0x14));
        dbg_add_disk (w0, w1);
        w0 = *((x29 + 0x1c));
        w0--;
        w3 = *((x29 + 0x18));
        w2 = *((x29 + 0x14));
        w1 = *((x29 + 0x10));
        dbg_move (w0, w1, w2, w3);
    } else {
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x870 */
#include <stdint.h>
 
void atoi () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x28);
    x16 = 0x28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O0/subject.exe @ 0x840 */
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
