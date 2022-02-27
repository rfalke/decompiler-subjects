/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400660 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1532 named .text */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x411000;
    x17 = *(0x411008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4006a8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400600)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4006c0 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400700 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400740 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400770 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400700)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400700)() ();
}


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400c58).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4007fc */
#include <stdint.h>
 
void dbg_text (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_4h;
    int64_t var_0h_2;
    int64_t var_0h;
    int64_t var_sp_8h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    /* void text(int y,int i,int d,char const * s); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w8 = 1;
    x9 = height;
    *((x29 - 4)) = w0;
    *((x29 - 8)) = w1;
    *((x29 - 0xc)) = w2;
    *((sp + 8)) = x3;
    w0 = .comment;
    w1 = *((x29 - 4));
    w0 -= w1;
    w1 = w0 + 1;
    w0 = .comment;
    w0++;
    w2 = *((x29 - 8));
    w8 += (w2 << 1);
    w8 = w0 * w8;
    w0 = *((x29 - 0xc));
    w2 = w8 - w0;
    x0 = "\e[%d;%dH";
    printf (w0, w1, w2, x3);
    *((sp + 4)) = w0;
    do {
        w8 = *((x29 - 0xc));
        w9 = w8 - 1;
        *((x29 - 0xc)) = w9;
        if (w8 == 0) {
            goto label_0;
        }
        x1 = *((sp + 8));
        x0 = 0x400c79;
        printf (x0, x1);
        *(sp) = w0;
    } while (1);
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400c5c */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4007b0 */
#include <stdint.h>
 
void dbg_new_tower (int64_t arg1) {
    int64_t var_4h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* tower * new_tower(int cap); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 1;
    x9 = 0x10;
    *((x29 - 4)) = w0;
    __asm ("ldursw x10, [x29, -4]");
    x1 = x9 + (x10 << 2);
    x0 = x8;
    calloc (x0, x1);
    *(sp) = x0;
    x8 = *(sp);
    x8 += 0x10;
    x9 = *(sp);
    *(x9) = x8;
    x0 = *(sp);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4005f0 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400894 */
#include <stdint.h>
 
uint64_t dbg_add_disk (int64_t arg1, int64_t arg2) {
    int64_t var_4h;
    int64_t var_0h_2;
    int64_t var_0h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    x1 = arg2;
    /* void add_disk(int i,int d); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x400000;
    x3 = x8 + 0xc7c;
    x8 = 0x411068;
    *((x29 - 4)) = w0;
    *((sp + 8)) = w1;
    w0 = *((sp + 8));
    __asm ("ldursw x9, [x29, -4]");
    x10 = 8;
    x9 *= x10;
    x9 = x8 + x9;
    x9 = *(x9);
    w1 = *((x9 + 8));
    w11 = w1 + 1;
    *((x9 + 8)) = w11;
    w9 = w1;
    x9 = (int64_t) w9;
    __asm ("ldursw x10, [x29, -4]");
    x12 = 8;
    x10 *= x12;
    x10 = x8 + x10;
    x10 = *(x10);
    x10 = *(x10);
    x12 = 4;
    x9 *= x12;
    x9 = x10 + x9;
    *(x9) = w0;
    __asm ("ldursw x9, [x29, -4]");
    x10 = 8;
    x9 *= x10;
    x8 += x9;
    x8 = *(x8);
    w0 = *((x8 + 8));
    w1 = *((x29 - 4));
    w2 = *((sp + 8));
    dbg_text (w0, w1, w2, x3);
    w0 = 0x86a1;
    usleep (w0);
    x8 = .comment;
    *((sp + 4)) = w0;
    x0 = x8;
    fflush (x0);
    *(sp) = w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x86a1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400640 */
#include <stdint.h>
 
void usleep () {
    x17 = *(0x411038);
    x16 = 0x411038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400630 */
#include <stdint.h>
 
void fflush () {
    x17 = *(0x411030);
    x16 = 0x411030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400be0 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400a9c */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    int64_t var_8h;
    int64_t var_sp_8h;
    int64_t var_0h_2;
    char ** var_10h;
    int64_t var_0h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    x0 = argc;
    x1 = argv;
    /* int main(int c,char ** v); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = "\e[H\e[J";
    *((x29 - 4)) = 0;
    *((x29 - 8)) = w0;
    *((sp + 0x10)) = x1;
    x0 = x8;
    puts (x0);
    w9 = *((x29 - 8));
    *((sp + 0xc)) = w0;
    __asm ("b.le 0x400af4");
    x8 = *((sp + 0x10));
    x0 = *((x8 + 8));
    atoi (x0);
    x8 = height;
    *(x8) = w0;
    if (w0 <= 0) {
        w8 = 8;
        x9 = height;
        *(x9) = w8;
    }
    *((x29 - 8)) = 0;
    do {
        w8 = *((x29 - 8));
        if (w8 >= 3) {
            goto label_0;
        }
        x8 = height;
        w0 = .comment;
        dbg_new_tower (w0);
        x8 = 0x411068;
        __asm ("ldursw x30, [x29, -8]");
        x9 = 8;
        x9 = x30 * x9;
        x8 += x9;
        *(x8) = x0;
        w8 = *((x29 - 8));
        w8++;
        *((x29 - 8)) = w8;
    } while (1);
label_0:
    x8 = height;
    w9 = .comment;
    *((x29 - 8)) = w9;
    do {
        w8 = *((x29 - 8));
        if (w8 == 0) {
            goto label_1;
        }
        w8 = 0;
        w1 = *((x29 - 8));
        w0 = w8;
        dbg_add_disk (w0, w1);
        w8 = *((x29 - 8));
        w8--;
        *((x29 - 8)) = w8;
    } while (1);
label_1:
    w8 = 0;
    w2 = 2;
    w3 = 1;
    x9 = height;
    w0 = .comment;
    w1 = w8;
    dbg_move (w0, w1, x2, x3);
    w8 = 1;
    w0 = 0;
    x9 = 0x400000;
    x3 = x9 + 0xc89;
    *((sp + 8)) = w0;
    w0 = w8;
    w1 = *((sp + 8));
    w2 = w8;
    dbg_text (w0, w1, w2, x3);
    w8 = 0;
    w0 = w8;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400964 */
#include <stdint.h>
 
void dbg_remove_disk (int64_t arg1) {
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* int remove_disk(int i); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x400000;
    x3 = x8 + 0xc7f;
    x8 = 0x411068;
    *((x29 - 4)) = w0;
    __asm ("ldursw x9, [x29, -4]");
    x10 = 8;
    x9 *= x10;
    x9 = x8 + x9;
    x9 = *(x9);
    w0 = *((x9 + 8));
    w0--;
    *((x9 + 8)) = w0;
    w9 = w0;
    x9 = (int64_t) w9;
    __asm ("ldursw x10, [x29, -4]");
    x11 = 8;
    x10 *= x11;
    x10 = x8 + x10;
    x10 = *(x10);
    x10 = *(x10);
    x11 = 4;
    x9 *= x11;
    x9 = x10 + x9;
    w0 = *(x9);
    *((sp + 8)) = w0;
    __asm ("ldursw x9, [x29, -4]");
    x10 = 8;
    x9 *= x10;
    x8 += x9;
    x8 = *(x8);
    w0 = *((x8 + 8));
    w0++;
    w1 = *((x29 - 4));
    w2 = *((sp + 8));
    dbg_text (w0, w1, w2, x3);
    w0 = *((sp + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400598 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400a10 */
#include <stdint.h>
 
void dbg_move (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_4h;
    int64_t var_sp_8h;
    int64_t var_sp_ch;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    /* void move(int n,int from,int to,int via); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 4)) = w0;
    *((x29 - 8)) = w1;
    *((x29 - 0xc)) = w2;
    *((sp + 0x10)) = w3;
    w0 = *((x29 - 4));
    if (w0 == 0) {
    } else {
        w8 = *((x29 - 4));
        w0 = w8 - 1;
        w1 = *((x29 - 8));
        w2 = *((sp + 0x10));
        w3 = *((x29 - 0xc));
        dbg_move (w0, w1, w2, w3);
        w0 = *((x29 - 0xc));
        w8 = *((x29 - 8));
        *((sp + 0xc)) = w0;
        w0 = w8;
        dbg_remove_disk (w0);
        w8 = *((sp + 0xc));
        *((sp + 8)) = w0;
        w0 = w8;
        w1 = *((sp + 8));
        dbg_add_disk (w0, w1);
        w8 = *((x29 - 4));
        w0 = w8 - 1;
        w1 = *((sp + 0x10));
        w2 = *((x29 - 0xc));
        w3 = *((x29 - 8));
        dbg_move (w0, w1, w2, w3);
    }
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400620 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x411028);
    x16 = 0x411028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400610 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411020);
    x16 = 0x411020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x400650 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411040);
    x16 = 0x411040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4005d0 */
#include <stdint.h>
 
void atoi () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_clang_O0/subject.exe @ 0x4005b0 */
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
