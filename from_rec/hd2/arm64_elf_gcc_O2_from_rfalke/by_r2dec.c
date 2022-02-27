/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x940 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x880 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xce8 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void dbg_main (uint32_t argc, char ** argv) {
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
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    __asm ("b.le 0x938");
    w21 = w0 - 2;
    x22 = x1;
    x21 += 2;
    x19 = 0x1;
    w20 = 0x0;
    do {
        offset_0 = x19 << 3;
        x0 = *((x22 + offset_0));
        x19++;
        w0 = dbg_hexdump (x0);
        w20 += w0;
    } while (x19 != x21);
    do {
        w0 = w20;
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
        w20 = 0x0;
    } while (1);
}


r2dec has crashed (info: SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xd60).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x978 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x890)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x990 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x9c8 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xa08 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xa50 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x9c8)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x9c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xd64 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xc18 */
#include <stdint.h>
 
void dbg_hexdump (int64_t arg1) {
    unsigned char[16] buff;
    stat st;
    void * ptr;
    int64_t var_40h;
    char * var_70h;
    int64_t var_c0h;
    int64_t var_c0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    x0 = arg1;
    /* int hexdump(char * fname); */
    *((sp + -0xc0)) = x29;
    *((sp + -0xc0 + 8)) = x30;
    x1 = x0;
    x29 = sp;
    x2 = x29 + 0x40;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = x0;
    w0 = 0x0;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    w0 = xstat ();
    if (w0 != 0) {
        goto label_0;
    }
    w22 = w0;
    x1 = 0xda8;
    x0 = x19;
    x0 = fopen (x0, x1);
    x21 = x0;
    if (x0 == 0) {
        goto label_0;
    }
    x0 = *((x29 + 0x70));
    x20 = x29 + 0x30;
    x19 = 0x0;
    if (x0 != 0) {
        goto label_1;
    }
    goto label_2;
    do {
        dbg_dumpline (x0, x1, x2);
        x0 = *((x29 + 0x70));
        if (x0 < x19) {
            goto label_2;
        }
label_1:
        x3 = x21;
        x0 = x20;
        x2 = 0x10;
        x1 = 0x1;
        x0 = fread (x0, x1, x2, x3);
        x3 = x0;
        x1 = x19;
        w2 = w0;
        x19 += (w3 << x19);
        x0 = x20;
    } while (w3 != 0);
label_2:
    x0 = x21;
    fclose (x0);
    w0 = w22;
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    x21 = *((sp + 0x20));
    x22 = *((sp + 0x20 + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
label_0:
    x0 = x19;
    w22 = 0x1;
    perror (x0);
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0xa88 */
#include <stdint.h>
 
void dbg_dumpline (int64_t arg1, int64_t arg2, int64_t arg3) {
    char[80] buff;
    char * s;
    int64_t var_90h;
    int64_t var_90h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_3h;
    int64_t var_3h_2;
    char * var_9h;
    int64_t var_3h_3;
    int64_t var_10h_3;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
    *((sp + -0x90)) = x29;
    *((sp + -0x90 + 8)) = x30;
    x3 = 0x0;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x20 = x29 + 0x40;
    w19 = w2;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x2 = x1;
    x21 = x0;
    x1 = x3 + 0xd80;
    x0 = x20;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    sprintf (x0, x1, x2);
    w0 = 0x10;
    w19 = (w19 <= w0) ? w19 : w0;
    __asm ("b.le 0xbe4");
    x23 = x20 + 9;
    x24 = " %02lX";
    x22 = 0x0;
    do {
        w2 = *((x21 + x22));
        x0 = x23;
        x1 = x24;
        x22++;
        x23 += 3;
        sprintf (x0, x1, x2);
    } while (w19 > w22);
    w22 = w19 + 1;
    if (w19 == 0x10) {
        goto label_3;
    }
label_0:
    x0 = 0xd90;
    w23 = *(0xd90);
    do {
        x0 = x20;
        w22++;
        strlen (x0);
        *((x20 + x0)) = w23;
        w1 = w22 - 1;
        __asm ("b.le 0xb18");
    } while (1);
    x0 += 3;
    x1 = 0xd98;
    w3 = w0 + 3;
    w1 = *(0xd98);
    offset_0 = w0 << 32;
    *((x20 + offset_0)) = w1;
    __asm ("b.le 0xc0c");
label_1:
    w4 = w19 - 1;
    x7 = (int64_t) w3;
    x4++;
    x6 = x20 + x7;
    x0 = 0x0;
    w5 = 0x2e;
    do {
        w1 = *((x21 + x0));
        w2 = w1 - 0x20;
        w2 = (int8_t) w2;
        w1 = (w2 <= 0x5e) ? w1 : w5;
        *((x6 + x0)) = w1;
        x0++;
    } while (x4 != x0);
    if (w19 == 0x10) {
        goto label_4;
    }
label_2:
    w0 = w19 + w3;
    w1 = 0x20;
    x0 = x20 + (w0 << x20);
    do {
        w19++;
        *(x0) = w1;
        x0++;
    } while (w19 != 0x10);
label_4:
    x7 += 0x10;
    x1 = 0xda0;
    x0 = x20;
    w1 = *(x1);
    *((x20 + x7)) = w1;
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
    w22 = 0x1;
    goto label_0;
label_3:
    x0 = x20;
    w0 = strlen (x0);
    w3 = w0 + 3;
    x1 = 0xd98;
    w1 = *(0xd98);
    offset_1 = w0 << 32;
    *((x20 + offset_1)) = w1;
    goto label_1;
    x7 = (int64_t) w3;
    w19 = 0x0;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x7e8 */
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
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x820 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x830 */
#include <stdint.h>
 
void perror () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x850 */
#include <stdint.h>
 
void sprintf () {
    x17 = $x;
    x16 = 0x18;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x860 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x20);
    x16 = 0x20;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x870 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x28);
    x16 = 0x28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void fread () {
    x17 = *(0x50);
    x16 = 0x50;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void xstat () {
    x17 = *(0x58);
    x16 = 0x58;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/arm64_elf_gcc_O2_from_rfalke/subject.exe @ 0x800 */
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
