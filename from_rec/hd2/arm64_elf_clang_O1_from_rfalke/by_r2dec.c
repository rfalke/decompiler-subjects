/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400720 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1136 named .text */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4006b0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = .plt;
    x16 = 0x411028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400768 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x4006d0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400780 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411070;
    x0 = 0x411070;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4007c0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411070;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411070;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400800 */
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
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x70)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400830 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x4007c0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x4007c0)() ();
}


r2dec has crashed (info: SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400b78).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400b80 */
#include <stdint.h>
 
void stat (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x2 = x1;
    x1 = x0;
    w0 = 0x0;
    return void (*0x400710)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400b90 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4009f8 */
#include <stdint.h>
 
void dbg_hexdump (int64_t arg1) {
    void * ptr;
    int64_t var_bp_20h;
    int64_t var_0h;
    int64_t var_10h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h_2;
    int64_t var_10h_3;
    int64_t var_20h;
    int64_t var_20h_3;
    x0 = arg1;
    /* int hexdump(char * fname); */
    *((sp + -0x30)) = x22;
    *((sp + -0x30 + 8)) = x21;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    x1 = sp;
    x20 = x0;
    w0 = stat ();
    if (w0 != 0) {
        goto label_0;
    }
    x1 = 0x400bbe;
    x0 = x20;
    x0 = fopen (x0, x1);
    x19 = x0;
    if (x19 == 0) {
        goto label_0;
    }
    x8 = *((sp + 0x30));
    if (x8 == 0) {
        goto label_1;
    }
    x20 = 0;
    do {
        x0 = x29 - 0x30;
        w1 = 1;
        w2 = 0x10;
        x3 = x19;
        x0 = fread (x0, w1, w2, x3);
        x21 = x0;
        if (w21 == 0) {
            goto label_1;
        }
        x0 = x29 - 0x30;
        x1 = x20;
        w2 = w21;
        dbg_dumpline (x0, x1, w2);
        x8 = *((sp + 0x30));
        x20 += (w21 << x20);
    } while (x20 overflow x8);
label_1:
    x0 = x19;
    fclose (x0);
    w0 = 0;
    do {
        x29 = *((sp + 0x20));
        x30 = *((sp + 0x20 + 8));
        x20 = *((sp + 0x10));
        x19 = *((sp + 0x10 + 8));
        x22 = *(sp);
        x21 = *((sp + 8));
        return;
label_0:
        x0 = x20;
        perror (x0);
        w0 = 1;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400b00 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400aac */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0x30)) = x22;
    *((sp + -0x30 + 8)) = x21;
    *((sp + 0x10)) = x20;
    *((sp + 0x10 + 8)) = x19;
    *((sp + 0x20)) = x29;
    *((sp + 0x20 + 8)) = x30;
    x29 = sp + 0x20;
    if (w0 < 2) {
        goto label_0;
    }
    w19 = 0;
    x20 = x1 + 8;
    w21 = w0 - 1;
    do {
        x0 = *(x20);
        x20 += 8;
        w0 = dbg_hexdump (x0);
        w19 = w0 + w19;
        w21--;
    } while (w21 != 0);
    goto label_1;
label_0:
    w19 = 0;
label_1:
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400870 */
#include <stdint.h>
 
void dbg_dumpline (void * arg1, int64_t arg2, int64_t arg3) {
    int64_t var_bp_50h;
    char * s;
    void * var_3h;
    char * var_9h;
    int64_t var_3h_2;
    int64_t var_10h;
    int64_t var_20h;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_60h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    int64_t var_20h_2;
    int64_t var_20h_3;
    int64_t var_30h_2;
    int64_t var_30h_3;
    int64_t var_40h_2;
    int64_t var_40h_3;
    int64_t var_50h;
    int64_t var_50h_2;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
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
    x8 = x1;
    w20 = w2;
    x19 = x0;
    x1 = "%08lX:";
    x0 = sp;
    x2 = x8;
    w22 = 0x2020;
    x24 = sp;
    sprintf (x0, x1, x2);
    w25 = 0x10;
    w23 = (w20 > 0x10) ? w25 : w20;
    __asm ("b.le 0x400910");
    x26 = 0;
    x27 = (int64_t) w23;
    x20 = x24 + 9;
    x21 = " %02lX";
    do {
        w2 = *((x19 + x26));
        x0 = x20;
        x1 = x21;
        sprintf (x0, x1, w2);
        x26++;
        x20 += 3;
    } while (x26 < x27);
    __asm ("b.le 0x400914");
    goto label_0;
    w26 = 0;
    w20 = w25 - w26;
    do {
        x0 = sp;
        strlen (x0);
        w20--;
        *((x24 + x0)) = w22;
    } while (w20 != 0);
label_0:
    x0 = sp;
    x21 = sp;
    w0 = strlen (x0);
    x9 = (int64_t) w0;
    w8 = w22 + (0x5c0 << 12);
    x20 = x9 + 3;
    *((x21 + x9)) = w8;
    if (w23 < 1) {
        goto label_1;
    }
    w10 = w0 + 3;
    x8 = 0;
    x9 = (int64_t) w23;
    x10 = x21 + (w10 << x21);
    w11 = 0x2e;
    do {
        w12 = *((x19 + x8));
        w13 = w12 - 0x20;
        w12 = (w13 < 0x5f) ? w12 : w11;
        *((x10 + x8)) = w12;
        x8++;
    } while (x8 < x9);
    __asm ("b.le 0x400994");
    goto label_2;
label_1:
    w8 = 0;
    x9 = 0x300000000;
    x9 += (x0 << 32);
    w10 = 0xf;
    x9 >>= 0x20;
    w10 -= w8;
    x8 = x9 + (w8 << x9);
    x0 = x21 + x8;
    x2 = x10 + 1;
    w1 = 0x20;
    memset (x0, w1, x2);
    w8 = 0x10;
label_2:
    x9 = sp;
    x9 += x20;
    w10 = 0x7c;
    x0 = sp;
    offset_0 = w8 << 32;
    *((x9 + offset_0)) = w10;
    puts (x0);
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400620 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400660 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x411000;
    x17 = .plt;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400680 */
#include <stdint.h>
 
void sprintf () {
    x17 = .plt;
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4006c0 */
#include <stdint.h>
 
void memset () {
    x17 = .plt;
    x16 = 0x411030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4006f0 */
#include <stdint.h>
 
void puts () {
    x17 = .plt;
    x16 = 0x411048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400700 */
#include <stdint.h>
 
void fread () {
    x17 = .plt;
    x16 = 0x411050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400670 */
#include <stdint.h>
 
void perror () {
    x16 = 0x411000;
    x17 = .plt;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400690 */
#include <stdint.h>
 
void fclose () {
    x17 = .plt;
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
void fopen () {
    x17 = .plt;
    x16 = 0x411020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
void abort () {
    x17 = .plt;
    x16 = 0x411040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400710 */
#include <stdint.h>
 
void xstat () {
    x17 = .plt;
    x16 = 0x411058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O1_from_rfalke/subject.exe @ 0x400640 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 224 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
