/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xae4 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = *(0xcd000);
    x3 = __libc_csu_init;
    x4 = __libc_csu_fini;
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x870 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xfc8 */
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
    x21 = 0x11000;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x21 += sym.remove_disk;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x900 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc, char ** argv) {
    char * stream;
    char * var_68h;
    int64_t var_70h;
    int64_t var_70h_2;
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
    x0 = argc;
    x1 = argv;
    /* int main(int c,char ** v); */
    *((sp + -0x70)) = x29;
    *((sp + -0x70 + 8)) = x30;
    x2 = 0x1000;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w0;
    x0 = x2 + 0x88;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x20 = x1;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    puts (x0);
    __asm ("b.le 0xaac");
    x0 = *((x20 + 8));
    x1 = 0x11000;
    x19 = x1;
    w2 = 0xa;
    x1 = 0x0;
    *((x29 + 0x68)) = x19;
    w0 = strtol (x0, x1, w2);
    x1 = *((x19 + 0xfd0));
    *(x1) = w0;
    __asm ("b.le 0xab4");
label_1:
    x0 = *((x29 + 0x68));
    x22 = 0x11000;
    x19 = 0x0;
    x23 = t;
    x0 = *((x0 + 0xfd0));
    w21 = *(x0);
    x20 = (int64_t) w21;
    x20 += 4;
    x20 <<= 2;
    do {
        x1 = x20;
        x0 = 0x1;
        calloc (x0, x1);
        *((x19 + x23)) = x0;
        x19 += 8;
        x1 = x0 + 0x10;
        *(x0) = x1;
    } while (x19 != 0x18);
    if (w21 == 0) {
        goto label_2;
    }
    x0 = *((x29 + 0x68));
    x25 = 0x11000;
    x22 = *((x22 + 0xfa8));
    x23 = "\e[%d;%dH";
    x28 = 0x1000;
    w26 = 0x186a0;
    x24 = *((x0 + 0xfd0));
    x0 = .comment;
    *((x29 + 0x60)) = x0;
label_0:
    x2 = *(x22);
    x0 = x23;
    w1 = *((x2 + 8));
    x3 = *(x2);
    w4 = w1 + 1;
    *((x2 + 8)) = w4;
    offset_0 = w1 << 2;
    *((x3 + offset_0)) = w21;
    w3 = *((x2 + 8));
    w1 = *(x24);
    w2 = w1 + 1;
    w1 -= w3;
    w2 -= w21;
    w1++;
    printf (x0, w1, x2, x3, w4);
    if (w21 == 0) {
        goto label_3;
    }
    x0 = 0x1000;
    w27 = w21;
    x20 = x28 + 0x78;
    x19 = x0 + 0x70;
    do {
        x1 = x20;
        x0 = x19;
        printf (x0, x1);
        w27--;
    } while (w27 != w27);
    w0 = w26;
    usleep (w0);
    x0 = *((x25 + 0xfb0));
    x0 = *(x0);
    fflush (x0);
    w21--;
    if (w21 != w21) {
        goto label_0;
    }
label_2:
    x0 = *((x29 + 0x68));
    w3 = 0x1;
    w2 = 0x2;
    w1 = 0x0;
    x0 = *((x0 + 0xfd0));
    w0 = *(x0);
    dbg_move (x0, w1, w2, x3);
    w2 = 0x1;
    w0 = w2;
    x3 = 0x1090;
    w1 = 0x0;
    text ();
    w0 = 0x0;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
    x0 = 0x11000;
    *((x29 + 0x68)) = x0;
    x0 = *((x29 + 0x68));
    w1 = 0x8;
    x0 = *((x0 + 0xfd0));
    *(x0) = w1;
    goto label_1;
label_3:
    w0 = w26;
    w21 = 0x0;
    usleep (x0);
    x0 = *((x29 + 0x60));
    x0 = *(x0);
    fflush (x0);
    goto label_0;
}


r2dec has crashed (info: SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x1040).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xb1c */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x890)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xb30 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xb68 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xba8 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x860 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xbf0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xb68)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xb68)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xc58 */
#include <stdint.h>
 
void text (int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    x3 = arg4;
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    w1 <<= 1;
    x5 = 0x1000;
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
    x0 = x5 + 0x60;
    w2 = w3 - w2;
    printf (w0, w1, w2, w3, x4, x5);
    if (w19 == 0) {
        goto label_0;
    }
    x20 = 0x1070;
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x1044 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xc28 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x880 */
#include <stdint.h>
 
void calloc () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xcd0 */
#include <stdint.h>
 
void add_disk (int64_t arg1, int64_t arg2) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = arg1;
    x1 = arg2;
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    w4 = w0;
    x3 = 0x11000;
    x29 = sp;
    x2 = t;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    w19 = w1;
    x1 = height;
    w5 = w4 << 1;
    x0 = "\e[%d;%dH";
    x3 = t;
    w4 = .comment;
    x2 = t;
    w6 = w4 + 1;
    *((sp + 0x20)) = x21;
    *((x3 + 8)) = w6;
    offset_0 = w4 << 2;
    *((x2 + offset_0)) = w19;
    w1 = height;
    w3 = .comment;
    w2 = w1 + 1;
    __asm ("madd w2, w5, w2, w2");
    w1 -= w3;
    w1++;
    w2 -= w19;
    printf (x0, x1, x2, x3, w4, w5, w6);
    if (w19 == 0) {
        goto label_0;
    }
    x21 = 0x1078;
    x20 = 0x1070;
    do {
        x1 = x21;
        x0 = x20;
        printf (x0, x1);
        w19--;
    } while (w19 != w19);
label_0:
    w0 = 0x186a0;
    usleep (w0);
    x21 = *((sp + 0x20));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    x0 = .comment;
    return void (*0x8d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xd90 */
#include <stdint.h>
 
void remove_disk (int64_t arg1) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    w4 = w0;
    x29 = sp;
    x1 = height;
    w7 = w4 << 1;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x0 = "\e[%d;%dH";
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x3 = t;
    w1 = height;
    w2 = w1 + 1;
    w5 = .comment;
    __asm ("madd w2, w7, w2, w2");
    x6 = t;
    w4 = w5 - 1;
    w1 -= w5;
    *((x3 + 8)) = w4;
    w1++;
    w22 = t;
    w2 -= w22;
    printf (x0, x1, w2, x3, w4, w5, x6);
    if (w22 == 0) {
        goto label_0;
    }
    w19 = w22;
    x21 = 0x1080;
    x20 = 0x1070;
    do {
        x1 = x21;
        x0 = x20;
        printf (x0, x1);
        w19--;
    } while (w19 != w19);
label_0:
    w0 = w22;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x820 */
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
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0xe38 */
#include <stdint.h>
 
void dbg_move (char * arg1, int64_t arg2, int64_t arg3, int64_t arg4) {
    char * var_60h;
    int64_t var_6ch;
    int64_t var_70h;
    int64_t var_70h_2;
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
    *((sp + -0x70)) = x29;
    *((sp + -0x70 + 8)) = x30;
    x29 = sp;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    w24 = w0;
    x0 = (int64_t) w2;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    *((sp + 0x50 + 8)) = x28;
    *((x29 + 0x6c)) = w0;
    if (w24 == 0) {
        goto label_1;
    }
    w26 = w0 << 1;
    w23 = w1;
    w25 = w3;
    w26++;
    x27 = "\e[%d;%dH";
    x22 = 0x1080;
    x21 = 0x1070;
    x28 = 0x11000;
    *((x29 + 0x60)) = x0;
label_0:
    w3 = *((x29 + 0x6c));
    w24--;
    w2 = w25;
    w1 = w23;
    w0 = w24;
    dbg_move (w0, w1, w2, x3);
    x2 = *((x28 + 0xfa8));
    x0 = 0x11000;
    w4 = w23 << 1;
    x1 = height;
    x0 = x27;
    offset_0 = w23 << 3;
    x3 = *((x2 + offset_0));
    w1 = height;
    w5 = *((x3 + 8));
    w2 = w1 + 1;
    x6 = *(x3);
    __asm ("madd w2, w4, w2, w2");
    w4 = w5 - 1;
    *((x3 + 8)) = w4;
    w1 -= w5;
    w1++;
    offset_1 = w4 << 2;
    w19 = *((x6 + offset_1));
    w2 -= w19;
    w20 = w19;
    printf (x0, x1, x2, x3, w4, w5, x6);
    if (w19 == 0) {
        goto label_2;
    }
    do {
        x1 = x22;
        x0 = x21;
        printf (x0, x1);
        w20--;
    } while (w20 != w20);
label_2:
    x3 = *((x29 + 0x60));
    x0 = 0x11000;
    x1 = *((x28 + 0xfa8));
    x20 = 0x1078;
    x2 = height;
    x0 = x27;
    offset_2 = x3 << 3;
    x1 = *((x1 + offset_2));
    w3 = *((x1 + 8));
    x4 = *(x1);
    w5 = w3 + 1;
    *((x1 + 8)) = w5;
    offset_3 = w3 << 2;
    *((x4 + offset_3)) = w19;
    w2 = height;
    w1 = *((x1 + 8));
    w1 = w2 - w1;
    __asm ("madd w2, w2, w26, w26");
    w1++;
    w2 -= w19;
    printf (x0, x1, x2, x3, x4, w5);
    if (w19 == 0) {
        goto label_3;
    }
    do {
        x1 = x20;
        x0 = x21;
        printf (x0, x1);
        w19--;
    } while (w19 != w19);
label_3:
    w0 = 0x186a0;
    usleep (w0);
    x0 = .comment;
    fflush (x0);
    w0 = w25;
    w25 = w23;
    if (w24 != 0) {
        w23 = w0;
        goto label_0;
    }
label_1:
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x23 = *((sp + 0x30));
    x24 = *((sp + 0x30 + 8));
    x25 = *((sp + 0x40));
    x26 = *((sp + 0x40 + 8));
    x27 = *((sp + 0x50));
    x28 = *((sp + 0x50 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x20);
    x16 = 0x20;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x28);
    x16 = 0x28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void strtol () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void fflush () {
    x17 = *(0x38);
    x16 = 0x38;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void usleep () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/movfuscator/hanoi/arm64_elf_gcc_O3/subject.exe @ 0x840 */
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
