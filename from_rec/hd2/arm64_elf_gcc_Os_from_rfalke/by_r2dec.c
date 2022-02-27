/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x9c0 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x8f0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x12030);
    x16 = 0x12030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xd18 */
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
    x21 += sym._fini;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x970 */
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
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w21 = w0;
    x22 = x1;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = 0x0;
    w20 = 0x0;
    do {
        x19++;
        if (w21 <= w19) {
            w0 = w20;
            x19 = *((sp + 0x10));
            x20 = *((sp + 0x10 + 8));
            x21 = *((sp + 0x20));
            x22 = *((sp + 0x20 + 8));
            x29 = *(sp);
            x30 = *((sp + 8));
            return;
        }
        offset_0 = x19 << 3;
        x0 = *((x22 + offset_0));
        w0 = dbg_hexdump (x0);
        w20 += w0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xc60 */
#include <stdint.h>
 
void dbg_hexdump (int64_t arg1) {
    unsigned char[16] buff;
    stat st;
    void * ptr;
    int64_t var_50h;
    char * var_80h;
    int64_t var_d0h;
    int64_t var_d0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    x0 = arg1;
    /* int hexdump(char * fname); */
    *((sp + -0xd0)) = x29;
    *((sp + -0xd0 + 8)) = x30;
    x29 = sp;
    x1 = x29 + 0x50;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x19 = x0;
    *((sp + 0x30)) = x23;
    w0 = stat ();
    while (x0 == 0) {
        x0 = x19;
        w20 = 0x1;
        perror (x0);
label_0:
        w0 = w20;
        x23 = *((sp + 0x30));
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        w20 = w0;
        x1 = 0xdd2;
        x0 = x19;
        x0 = fopen (x0, x1);
        x21 = x0;
    }
    x23 = x29 + 0x40;
    x19 = 0x0;
    do {
        x0 = *((x29 + 0x80));
        if (x19 < x0) {
            x3 = x21;
            x0 = x23;
            x2 = 0x10;
            x1 = 0x1;
            x0 = fread (x0, x1, x2, x3);
            x22 = x0;
            if (w0 != 0) {
                goto label_1;
            }
        }
        x0 = x21;
        fclose (x0);
        goto label_0;
label_1:
        w2 = w0;
        x1 = x19;
        x0 = x23;
        x19 += (w22 << x19);
        dbg_dumpline (x0, x1, x2);
    } while (1);
}


r2dec has crashed (info: SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xd90).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x9f8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x910)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xa10 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x12080;
    x0 = 0x12080;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xa48 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x12080;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x12080;
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xa88 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x12000;
    w0 = *((x19 + 0x80));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x12078);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x80)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x12010);
    x16 = 0x12010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xad0 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xa48)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xa48)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xd98 */
#include <stdint.h>
 
void stat (int64_t arg1, int64_t arg2) {
    x0 = arg1;
    x1 = arg2;
    x2 = x1;
    x1 = x0;
    w0 = 0x0;
    return void (*0x960)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xda8 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0xb08 */
#include <stdint.h>
 
void dbg_dumpline (void * arg1, int64_t arg2, int64_t arg3) {
    char[80] buff;
    char * s1;
    int64_t var_90h;
    int64_t var_90h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    char * dest;
    char * var_9h;
    int64_t var_3h;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
    *((sp + -0x90)) = x29;
    *((sp + -0x90 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = x29 + 0x40;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w22 = w2;
    x2 = x1;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    x1 = "%08lX:";
    x23 = x0;
    x0 = x20;
    x21 = x20 + 9;
    x24 = " %02lX";
    x19 = 0x0;
    sprintf (x0, x1, x2);
    w0 = 0x10;
    w22 = (w22 <= 0x10) ? w22 : w0;
    do {
        if (w22 <= w19) {
            w19 = (w22 >= 0) ? w22 : 0;
            x24 = 0xdca;
            w21 = w19;
label_0:
            __asm ("b.le 0xc20");
            x0 = x20;
            x0 = strlen (x0);
            x21 = x0;
            x0 = x20 + (w0 << x20);
            x1 = 0xdce;
            strcpy (x0, x1);
            w0 = w21 + 3;
            x1 = 0x0;
            w4 = 0x2e;
            x5 = x20 + (w0 << x20);
label_1:
            if (w22 > w1) {
                goto label_3;
            }
            x1 = (int64_t) w19;
            w19 = w0 + w19;
            w3 = 0x20;
            x19 = (int64_t) w19;
            x19 -= x1;
            x19 = x20 + x19;
label_2:
            __asm ("b.le 0xc54");
            x1 = (int64_t) w1;
            x0 = x1 + (w0 << x1);
            x1 = 0xdd0;
            x0 = x20 + x0;
            strcpy (x0, x1);
            x0 = x20;
            puts (x0);
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
        w2 = *((x23 + x19));
        x0 = x21;
        x1 = x24;
        x19++;
        x21 += 3;
        sprintf (x0, x1, x2);
    } while (1);
    x1 = x24;
    x0 = x20;
    w21++;
    strcat (x0, x1);
    goto label_0;
label_3:
    w2 = *((x23 + x1));
    w3 = w2 - 0x20;
    w3 = (int8_t) w3;
    w2 = (w3 <= 0x5e) ? w2 : w4;
    *((x5 + x1)) = w2;
    x1++;
    goto label_1;
    *((x19 + x1)) = w3;
    x1++;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void sprintf () {
    x17 = *(0x12018);
    x16 = 0x12018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x890 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x12000;
    x17 = *(0x12000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x950 */
#include <stdint.h>
 
void strcpy () {
    x17 = *(0x12060);
    x16 = 0x12060;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x930 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x12050);
    x16 = 0x12050;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x900 */
#include <stdint.h>
 
void strcat () {
    x17 = *(0x12038);
    x16 = 0x12038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x858 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void perror () {
    x16 = 0x12000;
    x17 = *(0x12008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x12020);
    x16 = 0x12020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x12028);
    x16 = 0x12028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x920 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x12048);
    x16 = 0x12048;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x940 */
#include <stdint.h>
 
void fread () {
    x17 = *(0x12058);
    x16 = 0x12058;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x960 */
#include <stdint.h>
 
void xstat () {
    x17 = *(0x12068);
    x16 = 0x12068;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x870 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 256 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x11ff8;
    return uint64_t (*x17)() ();
}
