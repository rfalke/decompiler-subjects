/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x9f8 */
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
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x880 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x30);
    x16 = 0x30;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1440 */
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
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void dbg_main (uint32_t argc, char ** argv) {
    void * ptr;
    int64_t var_70h;
    int64_t var_a0h;
    int64_t var_f0h;
    int64_t var_f0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_40h;
    int64_t var_40h_2;
    int64_t var_50h;
    x0 = argc;
    x1 = argv;
    /* int main(int argc,char ** argv); */
    *((sp + -0xf0)) = x29;
    *((sp + -0xf0 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    *((sp + 0x40)) = x25;
    *((sp + 0x40 + 8)) = x26;
    *((sp + 0x50)) = x27;
    __asm ("b.le 0x9f0");
    w24 = w0 - 2;
    x25 = x1;
    x24 += 2;
    x26 = x29 + 0x70;
    x27 = 0x1500;
    x20 = x29 + 0x60;
    x22 = 0x1;
    w23 = 0x0;
label_0:
    offset_0 = x22 << 3;
    x19 = *((x25 + offset_0));
    x2 = x26;
    w0 = 0x0;
    x1 = x19;
    w0 = xstat ();
    if (w0 == 0) {
        goto label_2;
    }
    x1 = x27;
    x0 = x19;
    x0 = fopen (x0, x1);
    x21 = x0;
    if (x0 == 0) {
        goto label_2;
    }
    x0 = *((x29 + 0xa0));
    x19 = 0x0;
    if (x0 != 0) {
        goto label_3;
    }
    goto label_4;
    do {
        dbg_dumpline (x0, x1, x2);
        x0 = *((x29 + 0xa0));
        if (x19 >= x0) {
            goto label_4;
        }
label_3:
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
label_4:
    x0 = x21;
    fclose (x0);
    w0 = 0x0;
label_1:
    x22++;
    w23 += w0;
    if (x24 != x22) {
        goto label_0;
    }
    do {
        w0 = w23;
        x27 = *((sp + 0x50));
        x19 = *((sp + 0x10));
        x20 = *((sp + 0x10 + 8));
        x21 = *((sp + 0x20));
        x22 = *((sp + 0x20 + 8));
        x23 = *((sp + 0x30));
        x24 = *((sp + 0x30 + 8));
        x25 = *((sp + 0x40));
        x26 = *((sp + 0x40 + 8));
        x29 = *(sp);
        x30 = *((sp + 8));
        return;
label_2:
        x0 = x19;
        perror (x0);
        w0 = 0x1;
        goto label_1;
        w23 = 0x0;
    } while (1);
}


r2dec has crashed (info: SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x14b8).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xa30 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x890)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xa48 */
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
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xa80 */
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
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xac0 */
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
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x840 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x10);
    x16 = 0x10;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xb08 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0xa80)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0xa80)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x14bc */
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
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x1370 */
#include <stdint.h>
 
uint64_t hexdump (int64_t arg1) {
    void * ptr;
    int64_t var_40h;
    char * var_70h;
    int64_t var_c0h;
    int64_t var_c0h_2;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_20h;
    x0 = arg1;
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
    w0 = xstat ();
    if (w0 == 0) {
        goto label_0;
    }
    x0 = x19;
    x1 = 0x1500;
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
    x21 = *((sp + 0x20));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
label_0:
    x0 = x19;
    perror (x0);
    x21 = *((sp + 0x20));
    x19 = *((sp + 0x10));
    x20 = *((sp + 0x10 + 8));
    w0 = 0x1;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xb40 */
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
    int64_t var_1h;
    int64_t var_0h;
    int64_t var_0h_2;
    int64_t var_0h_3;
    int64_t var_0h_4;
    char * var_0h_5;
    int64_t var_0h_6;
    int64_t var_0h_7;
    int64_t var_0h_8;
    int64_t var_0h_9;
    int64_t var_0h_10;
    int64_t var_0h_11;
    int64_t var_0h_12;
    int64_t var_0h_13;
    int64_t var_fh;
    int64_t var_10h_3;
    x0 = arg1;
    x1 = arg2;
    x2 = arg3;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
    *((sp + -0x90)) = x29;
    *((sp + -0x90 + 8)) = x30;
    x3 = 0x1000;
    x29 = sp;
    *((sp + 0x10)) = x19;
    *((sp + 0x10 + 8)) = x20;
    x19 = x29 + 0x40;
    w20 = w2;
    *((sp + 0x20)) = x21;
    *((sp + 0x20 + 8)) = x22;
    x2 = x1;
    x22 = x0;
    x1 = x3 + 0x4d8;
    x0 = x19;
    *((sp + 0x30)) = x23;
    *((sp + 0x30 + 8)) = x24;
    sprintf (x0, x1, x2);
    w0 = 0x10;
    w20 = (w20 <= w0) ? w20 : w0;
    __asm ("b.le 0x133c");
    x23 = x19 + 9;
    x24 = " %02lX";
    x21 = 0x0;
    do {
        w2 = *((x22 + x21));
        x0 = x23;
        x1 = x24;
        x21++;
        x23 += 3;
        sprintf (x0, x1, x2);
    } while (w20 > w21);
    w21 = w20 + 1;
    if (w20 == 0x10) {
        goto label_5;
    }
label_2:
    x0 = 0x14f0;
    w23 = *(0x14f0);
    do {
        x0 = x19;
        w21++;
        strlen (x0);
        *((x19 + x0)) = w23;
        w1 = w21 - 1;
        __asm ("b.le 0xbd0");
    } while (1);
    x0 += 3;
    x2 = 0x14e8;
    x4 = (int64_t) w0;
    w1 = w0;
    w2 = *(0x14e8);
    *((x19 + x4)) = w2;
    __asm ("b.le 0x1354");
label_1:
    x0 = -x22;
    w0 &= 0xf;
    w0 = (w0 <= w20) ? w0 : w20;
    w0 = (w20 > 0x10) ? w0 : w20;
    if (w0 == 0) {
        goto label_6;
    }
    w3 = *(x22);
    w2 = 0x2e;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_0 = w1 << 32;
    *((x19 + offset_0)) = w3;
    if (w0 == 1) {
        goto label_7;
    }
    w3 = *((x22 + 1));
    w6 = w1 + 1;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_1 = w6 << 32;
    *((x19 + offset_1)) = w3;
    if (w0 == 2) {
        goto label_7;
    }
    w3 = *((x22 + 2));
    w6 = w1 + 2;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_2 = w6 << 32;
    *((x19 + offset_2)) = w3;
    if (w0 == 3) {
        goto label_7;
    }
    w3 = *((x22 + 3));
    w6 = w1 + 3;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_3 = w6 << 32;
    *((x19 + offset_3)) = w3;
    if (w0 == 4) {
        goto label_7;
    }
    w3 = *((x22 + 4));
    w6 = w1 + 4;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_4 = w6 << 32;
    *((x19 + offset_4)) = w3;
    if (w0 == 5) {
        goto label_7;
    }
    w3 = *((x22 + 5));
    w6 = w1 + 5;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_5 = w6 << 32;
    *((x19 + offset_5)) = w3;
    if (w0 == 6) {
        goto label_7;
    }
    w3 = *((x22 + 6));
    w6 = w1 + 6;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_6 = w6 << 32;
    *((x19 + offset_6)) = w3;
    if (w0 == 7) {
        goto label_7;
    }
    w3 = *((x22 + 7));
    w6 = w1 + 7;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_7 = w6 << 32;
    *((x19 + offset_7)) = w3;
    if (w0 == 8) {
        goto label_7;
    }
    w3 = *((x22 + 8));
    w6 = w1 + 8;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w2 = (w5 <= 0x5e) ? w3 : w2;
    offset_8 = w6 << 32;
    *((x19 + offset_8)) = w2;
    if (w0 == 9) {
        goto label_8;
    }
    w3 = *((x22 + 9));
    w6 = w1 + 9;
    w2 = 0x2e;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_9 = w6 << 32;
    *((x19 + offset_9)) = w3;
    if (w0 == 0xa) {
        goto label_7;
    }
    w3 = *((x22 + 0xa));
    w6 = w1 + 0xa;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_10 = w6 << 32;
    *((x19 + offset_10)) = w3;
    if (w0 == 0xb) {
        goto label_7;
    }
    w3 = *((x22 + 0xb));
    w6 = w1 + 0xb;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_11 = w6 << 32;
    *((x19 + offset_11)) = w3;
    if (w0 == 0xc) {
        goto label_7;
    }
    w3 = *((x22 + 0xc));
    w6 = w1 + 0xc;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_12 = w6 << 32;
    *((x19 + offset_12)) = w3;
    if (w0 == 0xd) {
        goto label_7;
    }
    w3 = *((x22 + 0xd));
    w6 = w1 + 0xd;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_13 = w6 << 32;
    *((x19 + offset_13)) = w3;
    if (w0 == 0xe) {
        goto label_7;
    }
    w3 = *((x22 + 0xe));
    w6 = w1 + 0xe;
    w5 = w3 - 0x20;
    w5 = (int8_t) w5;
    w3 = (w5 <= 0x5e) ? w3 : w2;
    offset_14 = w6 << 32;
    *((x19 + offset_14)) = w3;
    if (w0 != 0x10) {
        goto label_9;
    }
    w5 = *((x22 + 0xf));
    w6 = w1 + 0xf;
    w3 = w5 - 0x20;
    w3 = (int8_t) w3;
    w3 = w0;
    w2 = (w3 <= 0x5e) ? w5 : w2;
    offset_15 = w6 << 32;
    *((x19 + offset_15)) = w2;
    do {
label_3:
        if (w0 != w20) {
label_0:
            w7 = w20 - w0;
            w6 = w20 - 1;
            w2 = w7 - 0x10;
            w6 -= w0;
            w5 = w0;
            w2 >>= 4;
            w2++;
            w8 = w2 << 4;
            if (w6 >= 0xe) {
                offset_16 = w0 << 32;
                q4 = *((x22 + offset_16));
                x6 = x5 + x4;
                v2.16b = 0xe0;
                v1.16b = 0x5e;
                x0 = x22 + x5;
                v0.16b = 0x2e;
                x5 = x19 + x6;
                v3.16b = v4.16b + v2.16b;
                __asm ("cmhs v3.16b, v1.16b, v3.16b");
                __asm ("bsl v3.16b, v4.16b, v0.16b");
                *((x19 + x6)) = q3;
                if (w2 != 1) {
                    q4 = *((x0 + 0x10));
                    v3.16b = v4.16b + v2.16b;
                    __asm ("cmhs v3.16b, v1.16b, v3.16b");
                    __asm ("bsl v3.16b, v4.16b, v0.16b");
                    *((x5 + 0x10)) = q3;
                    if (w2 == 2) {
                        goto label_10;
                    }
                    q4 = *((x0 + 0x20));
                    v3.16b = v4.16b + v2.16b;
                    __asm ("cmhs v3.16b, v1.16b, v3.16b");
                    __asm ("bsl v3.16b, v4.16b, v0.16b");
                    *((x5 + 0x20)) = q3;
                    if (w2 == 3) {
                        goto label_10;
                    }
                    q4 = *((x0 + 0x30));
                    v3.16b = v4.16b + v2.16b;
                    __asm ("cmhs v3.16b, v1.16b, v3.16b");
                    __asm ("bsl v3.16b, v4.16b, v0.16b");
                    *((x5 + 0x30)) = q3;
                    if (w2 == 4) {
                        goto label_10;
                    }
                    q3 = *((x0 + 0x40));
                    v2.16b = v3.16b + v2.16b;
                    __asm ("cmhs v1.16b, v1.16b, v2.16b");
                    __asm ("bit v0.16b, v3.16b, v1.16b");
                    *((x5 + 0x40)) = q0;
                }
label_10:
                w3 += w8;
                if (w8 == w7) {
                    goto label_11;
                }
            }
            offset_17 = w3 << 32;
            w5 = *((x22 + offset_17));
            w6 = w3 + w1;
            w2 = 0x2e;
            w0 = w5 - 0x20;
            w0 = (int8_t) w0;
            w0 = w3 + 1;
            w5 = (w0 <= 0x5e) ? w5 : w2;
            offset_18 = w6 << 32;
            *((x19 + offset_18)) = w5;
            __asm ("b.le 0x1198");
            offset_19 = w0 << 32;
            w6 = *((x22 + offset_19));
            w5 = w0 + w1;
            w0 = w3 + 2;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_20 = w5 << 32;
            *((x19 + offset_20)) = w6;
            __asm ("b.le 0x1198");
            offset_21 = w0 << 32;
            w6 = *((x22 + offset_21));
            w5 = w0 + w1;
            w0 = w3 + 3;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_22 = w5 << 32;
            *((x19 + offset_22)) = w6;
            __asm ("b.le 0x1198");
            offset_23 = w0 << 32;
            w6 = *((x22 + offset_23));
            w5 = w0 + w1;
            w0 = w3 + 4;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_24 = w5 << 32;
            *((x19 + offset_24)) = w6;
            __asm ("b.le 0x1198");
            offset_25 = w0 << 32;
            w6 = *((x22 + offset_25));
            w5 = w0 + w1;
            w0 = w3 + 5;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_26 = w5 << 32;
            *((x19 + offset_26)) = w6;
            __asm ("b.le 0x1198");
            offset_27 = w0 << 32;
            w6 = *((x22 + offset_27));
            w5 = w0 + w1;
            w0 = w3 + 6;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_28 = w5 << 32;
            *((x19 + offset_28)) = w6;
            __asm ("b.le 0x1198");
            offset_29 = w0 << 32;
            w6 = *((x22 + offset_29));
            w5 = w0 + w1;
            w0 = w3 + 7;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_30 = w5 << 32;
            *((x19 + offset_30)) = w6;
            __asm ("b.le 0x1198");
            offset_31 = w0 << 32;
            w6 = *((x22 + offset_31));
            w5 = w0 + w1;
            w0 = w3 + 8;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_32 = w5 << 32;
            *((x19 + offset_32)) = w6;
            __asm ("b.le 0x1198");
            offset_33 = w0 << 32;
            w6 = *((x22 + offset_33));
            w5 = w0 + w1;
            w0 = w3 + 9;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w2;
            offset_34 = w5 << 32;
            *((x19 + offset_34)) = w6;
            __asm ("b.le 0x1198");
            offset_35 = w0 << 32;
            w6 = *((x22 + offset_35));
            w5 = w0 + w1;
            w0 = w3 + 0xa;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w2 = (w7 <= 0x5e) ? w6 : w2;
            offset_36 = w5 << 32;
            *((x19 + offset_36)) = w2;
            __asm ("b.le 0x1198");
            offset_37 = w0 << 32;
            w6 = *((x22 + offset_37));
            w2 = w0 + w1;
            w5 = 0x2e;
            w0 = w6 - 0x20;
            w0 = (int8_t) w0;
            w0 = w3 + 0xb;
            w6 = (w0 <= 0x5e) ? w6 : w5;
            offset_38 = w2 << 32;
            *((x19 + offset_38)) = w6;
            __asm ("b.le 0x1198");
            offset_39 = w0 << 32;
            w6 = *((x22 + offset_39));
            w2 = w0 + w1;
            w0 = w3 + 0xc;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w5;
            offset_40 = w2 << 32;
            *((x19 + offset_40)) = w6;
            __asm ("b.le 0x1198");
            offset_41 = w0 << 32;
            w6 = *((x22 + offset_41));
            w2 = w0 + w1;
            w0 = w3 + 0xd;
            w7 = w6 - 0x20;
            w7 = (int8_t) w7;
            w6 = (w7 <= 0x5e) ? w6 : w5;
            offset_42 = w2 << 32;
            *((x19 + offset_42)) = w6;
            __asm ("b.le 0x1198");
            offset_43 = w0 << 32;
            w6 = *((x22 + offset_43));
            w2 = w0 + w1;
            w0 = w3 + 0xe;
            w3 = w6 - 0x20;
            w3 = (int8_t) w3;
            w6 = (w3 <= 0x5e) ? w6 : w5;
            offset_44 = w2 << 32;
            *((x19 + offset_44)) = w6;
            __asm ("b.le 0x1198");
            offset_45 = w0 << 32;
            w2 = *((x22 + offset_45));
            w0 += w1;
            w3 = w2 - 0x20;
            w3 = (int8_t) w3;
            w2 = (w3 <= 0x5e) ? w2 : w5;
            offset_46 = w0 << 32;
            *((x19 + offset_46)) = w2;
        }
label_11:
        if (w20 != 0x10) {
            w2 = w20 + w1;
            w0 = w20 + 1;
            w3 = 0x20;
            offset_47 = w2 << 32;
            *((x19 + offset_47)) = w3;
            if (w0 == 0x10) {
                goto label_12;
            }
            w0 += w1;
            w20 += 2;
            offset_48 = w0 << 32;
            *((x19 + offset_48)) = w3;
            if (w20 == 0x10) {
                goto label_12;
            }
label_4:
            w3 = w20 + w1;
            w2 = w20 + 1;
            w0 = 0x20;
            offset_49 = w3 << 32;
            *((x19 + offset_49)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 2;
            offset_50 = w3 << 32;
            *((x19 + offset_50)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 3;
            offset_51 = w3 << 32;
            *((x19 + offset_51)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 4;
            offset_52 = w3 << 32;
            *((x19 + offset_52)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 5;
            offset_53 = w3 << 32;
            *((x19 + offset_53)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 6;
            offset_54 = w3 << 32;
            *((x19 + offset_54)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 7;
            offset_55 = w3 << 32;
            *((x19 + offset_55)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 8;
            offset_56 = w3 << 32;
            *((x19 + offset_56)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 9;
            offset_57 = w3 << 32;
            *((x19 + offset_57)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 0xa;
            offset_58 = w3 << 32;
            *((x19 + offset_58)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 0xb;
            offset_59 = w3 << 32;
            *((x19 + offset_59)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w3 = w2 + w1;
            w2 = w20 + 0xc;
            offset_60 = w3 << 32;
            *((x19 + offset_60)) = w0;
            if (w2 == 0x10) {
                goto label_12;
            }
            w2 += w1;
            offset_61 = w2 << 32;
            *((x19 + offset_61)) = w0;
            if (w20 != 2) {
                goto label_12;
            }
            w1 += 0xf;
            offset_62 = w1 << 32;
            *((x19 + offset_62)) = w0;
        }
label_12:
        x4 += 0x10;
        x1 = 0x14f8;
        x0 = x19;
        w1 = *(x1);
        *((x19 + x4)) = w1;
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
label_7:
        w3 = w0;
    } while (1);
label_6:
    w3 = 0x0;
    goto label_0;
label_5:
    x0 = x19;
    w0 = strlen (x0);
    x4 = (int64_t) w0;
    w1 = w0;
    x2 = 0x14e8;
    w0 = *(0x14e8);
    *((x19 + x4)) = w0;
    goto label_1;
    w21 = 0x1;
    goto label_2;
label_9:
    w3 = 0xf;
    goto label_3;
label_8:
    w3 = 0x9;
    goto label_3;
    w2 = 0x20;
    w0++;
    w20 = 0x2;
    *((x19 + x4)) = w2;
    offset_63 = w0 << 32;
    *((x19 + offset_63)) = w2;
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x7e8 */
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
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x820 */
#include <stdint.h>
 
void strlen () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x830 */
#include <stdint.h>
 
void perror () {
    x16 = 0x0;
    x17 = .comment;
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x850 */
#include <stdint.h>
 
void sprintf () {
    x17 = $x;
    x16 = 0x18;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x860 */
#include <stdint.h>
 
void fclose () {
    x17 = *(0x20);
    x16 = 0x20;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x870 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x28);
    x16 = 0x28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8a0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x40);
    x16 = 0x40;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8b0 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x48);
    x16 = 0x48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8c0 */
#include <stdint.h>
 
void fread () {
    x17 = *(0x50);
    x16 = 0x50;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8d0 */
#include <stdint.h>
 
void xstat () {
    x17 = *(0x58);
    x16 = 0x58;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x800 */
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
