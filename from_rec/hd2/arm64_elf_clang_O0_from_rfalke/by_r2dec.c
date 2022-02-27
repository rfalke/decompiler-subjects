/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400770 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 1456 named .text */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006f0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x411028);
    x16 = 0x411028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007b8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x400710)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007d0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x411078;
    x0 = 0x411078;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400810 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x411078;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x411078;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400850 */
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
    w0 = *((x19 + 0x78));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x78)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400880 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x410df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x400810)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x400810)() ();
}


r2dec has crashed (info: SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400d08).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400d10 */
#include <stdint.h>
 
void stat (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x2 = x1;
    x1 = x0;
    w0 = 0x0;
    return void (*0x400760)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400d20 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400b04 */
#include <stdint.h>
 
void dbg_hexdump (int64_t arg1) {
    int64_t var_30h;
    void * ptr;
    int64_t var_4h;
    int64_t var_0h_2;
    int64_t var_10h;
    signed int64_t var_1ch;
    int64_t var_20h;
    int64_t var_50h;
    int64_t var_0h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    x0 = arg1;
    /* int hexdump(char * fname); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = x29 - 0x30;
    x1 = sp + 0x20;
    *((x8 + 0x20)) = x0;
    x0 = *((x8 + 0x20));
    *((sp + 0x10)) = x8;
    w0 = stat ();
    if (w0 != 0) {
        x8 = *((sp + 0x10));
        x0 = *((x8 + 0x20));
        perror (x0);
        w9 = 1;
        *((x29 - 4)) = w9;
        goto label_0;
    }
    x8 = 0x400000;
    x1 = x8 + 0xd4e;
    x8 = *((sp + 0x10));
    x0 = *(0x400020);
    fopen (x0, x1);
    x8 = *((sp + 0x10));
    *(x8) = x0;
    if (x0 == 0) {
        x8 = *((sp + 0x10));
        x0 = *((x8 + 0x20));
        perror (x0);
        w9 = 1;
        *((x29 - 4)) = w9;
        goto label_0;
    }
    x8 = *((sp + 0x10));
    *((x8 + 8)) = 0;
    do {
        x8 = *((sp + 0x10));
        x9 = *((x8 + 8));
        x10 = *((sp + 0x50));
        if (x9 >= x10) {
            goto label_1;
        }
        x1 = 1;
        x2 = 0x10;
        x0 = x29 - 0x20;
        x8 = *((sp + 0x10));
        x3 = *(x8);
        w0 = fread (x0, x1, x2, x3);
        w9 = w0;
        *((sp + 0x1c)) = w9;
        w9 = *((sp + 0x1c));
        if (w9 == 0) {
        } else {
            x0 = x29 - 0x20;
            x8 = *((sp + 0x10));
            x1 = *((x8 + 8));
            w2 = *((sp + 0x1c));
            dbg_dumpline (x0, x1, w2);
            x8 = *((sp + 0x1c));
            x0 = *((sp + 0x10));
            x1 = *((x0 + 8));
            x8 = x1 + x8;
            *((x0 + 8)) = x8;
        }
    } while (1);
label_1:
    x8 = *((sp + 0x10));
    x0 = *(x8);
    fclose (x0);
    *((x29 - 4)) = 0;
    *((sp + 0xc)) = w0;
label_0:
    w0 = *((x29 - 4));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400c90 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400c14 */
#include <stdint.h>
 
void dbg_main (int32_t argc, char ** argv) {
    int64_t var_8h;
    int64_t var_sp_8h;
    signed int64_t var_ch;
    char ** var_10h;
    int64_t var_0h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    w8 = 1;
    *((x29 - 4)) = 0;
    *((x29 - 8)) = w0;
    *((sp + 0x10)) = x1;
    *((sp + 8)) = 0;
    *((sp + 0xc)) = w8;
    do {
        w8 = *((sp + 0xc));
        w9 = *((x29 - 8));
        if (w8 >= w9) {
            goto label_0;
        }
        x8 = *((sp + 0xc));
        x9 = *((sp + 0x10));
        x10 = 8;
        x8 *= x10;
        x8 = x9 + x8;
        x0 = *(x8);
        dbg_hexdump (x0);
        w11 = *((sp + 8));
        w11 += w0;
        *((sp + 8)) = w11;
        w8 = *((sp + 0xc));
        w8++;
        *((sp + 0xc)) = w8;
    } while (1);
label_0:
    w0 = *((sp + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4008c0 */
#include <stdint.h>
 
void dbg_dumpline (void * arg1, int64_t arg2, int64_t arg3) {
    int64_t var_14h;
    int64_t var_10h;
    void * var_8h;
    int64_t var_0h_5;
    int64_t var_0h_4;
    int64_t var_sp_10h;
    int64_t var_1ch;
    int64_t var_0h_3;
    char * dest;
    int64_t var_0h_6;
    int64_t var_0h_7;
    int64_t var_0h_2;
    signed int64_t var_44h;
    signed int64_t var_48h;
    char * s1;
    char * var_9h;
    int64_t var_0h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = sp + 0x4c;
    *((x29 - 8)) = x0;
    *((x29 - 0x10)) = x1;
    *((x29 - 0x14)) = w2;
    x2 = *((x29 - 0x10));
    x1 = "%08lX:";
    x0 = x8;
    sprintf (x0, x1, x2);
    w9 = *((x29 - 0x14));
    *((sp + 0x40)) = w0;
    __asm ("b.le 0x400908");
    w8 = 0x10;
    *((x29 - 0x14)) = w8;
    *((sp + 0x48)) = 0;
    do {
        w8 = *((sp + 0x48));
        w9 = *((x29 - 0x14));
        if (w8 >= w9) {
            goto label_0;
        }
        w8 = 3;
        x9 = sp + 0x4c;
        w10 = *((sp + 0x48));
        w8 = w10 * w8;
        w11 = w8;
        x11 = (int64_t) w11;
        x9 += x11;
        x0 = x9 + 9;
        x9 = *((sp + 0x48));
        x11 = *((x29 - 8));
        x9 = x11 + x9;
        w2 = *(x9);
        x1 = " %02lX";
        sprintf (x0, x1, w2);
        *((sp + 0x3c)) = w0;
        w8 = *((sp + 0x48));
        w8++;
        *((sp + 0x48)) = w8;
    } while (1);
label_0:
    while (1) {
        w8 = *((sp + 0x48));
        w9 = w8 + 1;
        *((sp + 0x48)) = w9;
        if (w8 >= 0x10) {
            goto label_1;
        }
        x8 = 0x400000;
        x1 = x8 + 0xd42;
        x0 = sp + 0x4c;
        strcat (x0, x1);
        *((sp + 0x30)) = x0;
    }
label_1:
    x8 = sp + 0x4c;
    x0 = x8;
    *((sp + 0x28)) = x8;
    w0 = strlen (x0);
    w9 = w0;
    *((sp + 0x44)) = w9;
    x8 = *((sp + 0x44));
    x0 = *((sp + 0x28));
    x0 += x8;
    x1 = 0x400d46;
    strcpy (x0, x1);
    w9 = *((sp + 0x44));
    w9 += 3;
    *((sp + 0x44)) = w9;
    *((sp + 0x48)) = 0;
    *((sp + 0x20)) = x0;
    do {
        w8 = *((sp + 0x48));
        w9 = *((x29 - 0x14));
        if (w8 >= w9) {
            goto label_2;
        }
        x8 = *((sp + 0x48));
        x9 = *((x29 - 8));
        x8 = x9 + x8;
        w10 = *(x8);
        if (w10 >= 0x20) {
            x8 = *((sp + 0x48));
            x9 = *((x29 - 8));
            x8 = x9 + x8;
            w10 = *(x8);
            if (w10 <= 0x7e) {
                x8 = *((sp + 0x48));
                x9 = *((x29 - 8));
                x8 = x9 + x8;
                w10 = *(x8);
                *((sp + 0x1c)) = w10;
            }
        } else {
            w8 = 0x2e;
            *((sp + 0x1c)) = w8;
        }
        w0 = *((sp + 0x1c));
        x8 = sp + 0x4c;
        w9 = *((sp + 0x44));
        w10 = *((sp + 0x48));
        w9 += w10;
        w11 = w9;
        x11 = (int64_t) w11;
        x8 += x11;
        *(x8) = w0;
        w8 = *((sp + 0x48));
        w8++;
        *((sp + 0x48)) = w8;
    } while (1);
label_2:
    while (1) {
        w8 = *((sp + 0x48));
        if (w8 >= 0x10) {
            goto label_3;
        }
        w8 = 0x20;
        x9 = sp + 0x4c;
        w10 = *((sp + 0x44));
        w11 = *((sp + 0x48));
        w12 = w11 + 1;
        *((sp + 0x48)) = w12;
        w10 += w11;
        w13 = w10;
        x13 = (int64_t) w13;
        x9 += x13;
        *(x9) = w8;
    }
label_3:
    x8 = sp + 0x4c;
    x9 = *((sp + 0x44));
    x9 = x8 + x9;
    x10 = *((sp + 0x48));
    x0 = x9 + x10;
    x1 = 0x400d48;
    *((sp + 0x10)) = x8;
    strcpy (x0, x1);
    x8 = 0x400d4a;
    *((sp + 8)) = x0;
    x0 = x8;
    x1 = *((sp + 0x10));
    printf (x0, x1);
    *((sp + 4)) = w0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400668 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x411000;
    x17 = *(0x411000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006c0 */
#include <stdint.h>
 
void sprintf () {
    x17 = *(0x411010);
    x16 = 0x411010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400700 */
#include <stdint.h>
 
void strcat () {
    x17 = *(0x411030);
    x16 = 0x411030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400730 */
#include <stdint.h>
 
void fread () {
    x17 = *(0x411048);
    x16 = 0x411048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006b0 */
#include <stdint.h>
 
void perror () {
    x16 = 0x411000;
    x17 = *(0x411008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006d0 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x411018);
    x16 = 0x411018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x411020);
    x16 = 0x411020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400720 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x411040);
    x16 = 0x411040;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400750 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x411058);
    x16 = 0x411058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400740 */
#include <stdint.h>
 
void strcpy () {
    x17 = *(0x411050);
    x16 = 0x411050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400760 */
#include <stdint.h>
 
void xstat () {
    x17 = *(0x411060);
    x16 = 0x411060;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400680 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 240 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x410ff8;
    return uint64_t (*x17)() ();
}
