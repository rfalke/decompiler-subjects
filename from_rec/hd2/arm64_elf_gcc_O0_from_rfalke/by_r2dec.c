/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 1336 named .text */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x880 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xd88 */
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
    x20 = 0x11db0;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xd18 */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    int32_t errs;
    int32_t i;
    char ** var_10h;
    int64_t var_1ch;
    char * var_28h;
    signed int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x10)) = x1;
    *((x29 + 0x28)) = 0;
    w0 = 0x1;
    *((x29 + 0x2c)) = w0;
    while (w1 < w0) {
        x0 = *((x29 + 0x2c));
        x0 <<= 3;
        x1 = *((x29 + 0x10));
        x0 = x1 + x0;
        x0 = *(x0);
        w0 = dbg_hexdump (x0);
        w1 = w0;
        w0 = *((x29 + 0x28));
        w0 += w1;
        *((x29 + 0x28)) = w0;
        w0 = *((x29 + 0x2c));
        w0++;
        *((x29 + 0x2c)) = w0;
        w1 = *((x29 + 0x2c));
        w0 = *((x29 + 0x1c));
    }
    w0 = *((x29 + 0x28));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}


r2dec has crashed (info: SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xe00).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x918 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x890)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x930 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x70;
    x0 = 0x70;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x968 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x70;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x70;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x9a8 */
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
    w0 = *((x19 + 0x70));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x68);
            cxa_finalize ();
        }
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x9f0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x968)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x968)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xe08 */
#include <stdint.h>
 
void stat (char * arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x2 = x1;
    x1 = x0;
    w0 = 0x0;
    return void (*0x8d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xe18 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xc34 */
#include <stdint.h>
 
void dbg_hexdump (char * arg1) {
    char * fname;
    stat st;
    unsigned char[16] buff;
    int32_t cnt;
    FILE * fp;
    long unsigned int offset;
    char * filename;
    int64_t var_28h;
    char * var_58h;
    void * ptr;
    signed int64_t var_bch;
    FILE * stream;
    int64_t var_c8h;
    int64_t var_d0h;
    int64_t var_d0h_2;
    x0 = arg1;
    /* int hexdump(char * fname); */
    *((sp + -0xd0)) = x29;
    *((sp + -0xd0 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x18)) = x0;
    x0 = x29 + 0x28;
    x1 = x0;
    x0 = *((x29 + 0x18));
    w0 = stat ();
    if (w0 != 0) {
        x0 = *((x29 + 0x18));
        perror (x0);
        w0 = 0x1;
        goto label_0;
    }
    x0 = 0xe58;
    x1 = x0;
    x0 = *((x29 + 0x18));
    fopen (x0, x1);
    *((x29 + 0xc0)) = x0;
    x0 = *((x29 + 0xc0));
    if (x0 == 0) {
        x0 = *((x29 + 0x18));
        perror (x0);
        w0 = 0x1;
        goto label_0;
    }
    *((x29 + 0xc8)) = 0;
    while (x1 > x0) {
        x0 = x29 + 0xa8;
        x3 = *((x29 + 0xc0));
        x2 = 0x10;
        x1 = 0x1;
        fread (x0, x1, x2, x3);
        *((x29 + 0xbc)) = w0;
        w0 = *((x29 + 0xbc));
        if (w0 == 0) {
            goto label_1;
        }
        x0 = x29 + 0xa8;
        w2 = *((x29 + 0xbc));
        x1 = *((x29 + 0xc8));
        dbg_dumpline (x0, x1, w2);
        x0 = *((x29 + 0xbc));
        x1 = *((x29 + 0xc8));
        x0 = x1 + x0;
        *((x29 + 0xc8)) = x0;
        x0 = *((x29 + 0x58));
        x1 = x0;
        x0 = *((x29 + 0xc8));
    }
    goto label_2;
label_1:
label_2:
    x0 = *((x29 + 0xc0));
    fclose (x0);
    w0 = 0x0;
label_0:
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0xa28 */
#include <stdint.h>
 
void dbg_dumpline (char * arg1, char * arg2, int64_t arg3) {
    int32_t cnt;
    long unsigned int offset;
    unsigned char * p;
    char[80] buff;
    int32_t len;
    int32_t c;
    int64_t var_1ch;
    char * var_20h;
    char * format;
    char * s;
    char * var_88h;
    char * var_8ch;
    int64_t var_90h;
    int64_t var_90h_2;
    char * var_0h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
    *((sp + -0x90)) = x29;
    *((sp + -0x90 + 8)) = x30;
    x29 = sp;
    *((x29 + 0x28)) = x0;
    *((x29 + 0x20)) = x1;
    *((x29 + 0x1c)) = w2;
    x0 = 0x0;
    x1 = x0 + 0xe30;
    x0 = x29 + 0x38;
    x2 = *((x29 + 0x20));
    sprintf (x0, x1, x2);
    w0 = *((x29 + 0x1c));
    __asm ("b.le 0xa64");
    w0 = 0x10;
    *((x29 + 0x1c)) = w0;
    *((x29 + 0x8c)) = 0;
    while (w1 < w0) {
        w1 = *((x29 + 0x8c));
        w0 = w1;
        w0 <<= 1;
        w0 += w1;
        x0 = (int64_t) w0;
        x0 += 9;
        x1 = x29 + 0x38;
        x3 = x1 + x0;
        x0 = *((x29 + 0x8c));
        x1 = *((x29 + 0x28));
        x0 = x1 + x0;
        w0 = *(x0);
        w1 = w0;
        x0 = " %02lX";
        w2 = w1;
        x1 = x0;
        x0 = x3;
        sprintf (x0, x1, w2);
        w0 = *((x29 + 0x8c));
        w0++;
        *((x29 + 0x8c)) = w0;
        w1 = *((x29 + 0x8c));
        w0 = *((x29 + 0x1c));
    }
    while (1) {
        x0 = x29 + 0x38;
        x0 = strlen (x0);
        x1 = x0;
        x0 = x29 + 0x38;
        x0 += x1;
        x1 = 0xe40;
        w1 = *(0xe40);
        *(x0) = w1;
        w0 = *((x29 + 0x8c));
        w1 = w0 + 1;
        *((x29 + 0x8c)) = w1;
        __asm ("b.le 0xad8");
    }
    x0 = x29 + 0x38;
    strlen (x0);
    *((x29 + 0x88)) = w0;
    x0 = *((x29 + 0x88));
    x1 = x29 + 0x38;
    x0 = x1 + x0;
    x1 = 0xe48;
    w1 = *(0xe48);
    *(x0) = w1;
    w0 = *((x29 + 0x88));
    w0 += 3;
    *((x29 + 0x88)) = w0;
    *((x29 + 0x8c)) = 0;
    while (w1 < w0) {
        w1 = *((x29 + 0x88));
        w0 = *((x29 + 0x8c));
        w2 = w1 + w0;
        x0 = *((x29 + 0x8c));
        x1 = *((x29 + 0x28));
        x0 = x1 + x0;
        w0 = *(x0);
        if (w0 >= 0x1f) {
            x0 = *((x29 + 0x8c));
            x1 = *((x29 + 0x28));
            x0 = x1 + x0;
            w0 = *(x0);
            if (w0 <= 0x7e) {
                x0 = *((x29 + 0x8c));
                x1 = *((x29 + 0x28));
                x0 = x1 + x0;
                w0 = *(x0);
            }
        } else {
            w0 = 0x2e;
        }
        x1 = (int64_t) w2;
        x2 = x29 + 0x38;
        *((x2 + x1)) = w0;
        w0 = *((x29 + 0x8c));
        w0++;
        *((x29 + 0x8c)) = w0;
        w1 = *((x29 + 0x8c));
        w0 = *((x29 + 0x1c));
    }
    while (1) {
        w0 = *((x29 + 0x8c));
        w1 = w0 + 1;
        *((x29 + 0x8c)) = w1;
        w1 = *((x29 + 0x88));
        w0 += w1;
        x0 = (int64_t) w0;
        x1 = x29 + 0x38;
        w2 = 0x20;
        *((x1 + x0)) = w2;
        w0 = *((x29 + 0x8c));
        __asm ("b.le 0xbcc");
    }
    x1 = *((x29 + 0x88));
    x0 = *((x29 + 0x8c));
    x0 = x1 + x0;
    x1 = x29 + 0x38;
    x0 = x1 + x0;
    x1 = 0xe50;
    w1 = *(x1);
    *(x0) = w1;
    x0 = x29 + 0x38;
    puts (x0);
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x7e8 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x820 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x830 */
#include <stdint.h>
 
void perror () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x850 */
#include <stdint.h>
 
void sprintf () {
    x17 = .text;
    x16 = 0x18;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x860 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x20);
    x16 = 0x20;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x870 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x28);
    x16 = 0x28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void fread () {
    x17 = *(0x50);
    x16 = 0x50;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void xstat () {
    x17 = *(0x58);
    x16 = 0x58;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O0_from_rfalke/subject.exe @ 0x800 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 224 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
