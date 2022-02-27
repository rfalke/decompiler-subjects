/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400600 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [14] -r-x section size 2412 named .text */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005b0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x412018);
    x16 = 0x412018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400ab0 */
#include <stdint.h>
 
void dbg_abs (int64_t arg_10h) {
    int64_t var_0h;
    int64_t var_8h;
    /* double abs(double x); */
    *((sp + 8)) = d0;
    d0 = *((sp + 8));
    if (d0 < 0) {
        d0 = *((sp + 8));
        __asm ("fneg d0, d0");
        *(sp) = d0;
    } else {
        d0 = *((sp + 8));
        *(sp) = d0;
    }
    d0 = *(sp);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400648 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x4005c0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400660 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x412058;
    x0 = 0x412058;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x412058;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x412058;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4006e0 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x412000;
    w0 = *((x19 + 0x58));
    if (w0 == 0) {
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x58)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400710 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = 0x411df0;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x4006a0)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x4006a0)() ();
}


r2dec has crashed (info: SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400f68).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400ae8 */
#include <stdint.h>
 
void dbg_dply (int64_t arg_20h) {
    int64_t var_8h;
    int64_t var_14h;
    int64_t var_18h;
    /* double dply(double x); */
    w8 = 0x64;
    *((sp + 0x18)) = d0;
    *((sp + 0x14)) = w8;
    do {
        w8 = *((sp + 0x14));
        w9 = w8 - 1;
        *((sp + 0x14)) = w9;
        if (w8 == 0) {
            goto label_0;
        }
        d0 = *((sp + 0x18));
        d1 = *((sp + 0x18));
        d0 *= d1;
        d1 = *((sp + 0x18));
        d0 *= d1;
        d1 = *((sp + 0x18));
        d0 *= d1;
        d1 = *((sp + 0x18));
        d0 *= d1;
        d1 = *((sp + 0x18));
        d0 *= d1;
        d1 = *((sp + 0x18));
        d0 *= d1;
        *((sp + 8)) = d0;
        d0 = *((sp + 8));
        d1 = *((sp + 0x18));
        d0 /= d1;
        d1 = *((sp + 0x18));
        d0 /= d1;
        d1 = *((sp + 0x18));
        d0 /= d1;
        d1 = *((sp + 0x18));
        d0 /= d1;
        d1 = *((sp + 0x18));
        d0 /= d1;
        d1 = *((sp + 0x18));
        d0 /= d1;
        *((sp + 8)) = d0;
        d0 = *((sp + 8));
        d1 = *((sp + 0x18));
        d0 += d1;
        d1 = *((sp + 0x18));
        d0 += d1;
        d1 = *((sp + 0x18));
        d0 += d1;
        d1 = *((sp + 0x18));
        d0 += d1;
        d1 = *((sp + 0x18));
        d0 += d1;
        d1 = *((sp + 0x18));
        d0 += d1;
        *((sp + 8)) = d0;
        d0 = *((sp + 8));
        d1 = *((sp + 0x18));
        d0 -= d1;
        d1 = *((sp + 0x18));
        d0 -= d1;
        d1 = *((sp + 0x18));
        d0 -= d1;
        d1 = *((sp + 0x18));
        d0 -= d1;
        d1 = *((sp + 0x18));
        d0 -= d1;
        d1 = *((sp + 0x18));
        d0 -= d1;
        *((sp + 8)) = d0;
    } while (1);
label_0:
    d0 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400a14 */
#include <stdint.h>
 
void dbg_sroot () {
    int64_t var_8h;
    int64_t var_sp_8h;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    /* double sroot(double num); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    d1 = 2;
    *((x29 - 8)) = d0;
    d0 = *((x29 - 8));
    d0 /= d1;
    *((sp + 8)) = d0;
    d0 = *((x29 - 8));
    *((sp + 0x10)) = d0;
    do {
        x8 = 0x400000;
        d0 = $d.2;
        d1 = *((sp + 0x10));
        d2 = *((sp + 8));
        d0 *= d2;
        __asm ("b.le 0x400aa0");
        d0 = *((x29 - 8));
        d1 = *((sp + 8));
        d0 /= d1;
        d1 = *((sp + 8));
        d0 -= d1;
        *((sp + 0x10)) = d0;
        d0 = *((sp + 0x10));
        dbg_abs (x0);
        d1 = 2;
        *((sp + 0x10)) = d0;
        d0 = *((x29 - 8));
        d2 = *((sp + 8));
        d0 /= d2;
        d2 = *((sp + 8));
        d0 += d2;
        d0 /= d1;
        *((sp + 8)) = d0;
    } while (1);
    d0 = *((sp + 8));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400f6c */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400c5c */
#include <stdint.h>
 
void dbg_stest (int64_t arg1, int64_t arg2) {
    int64_t var_bp_8h;
    int64_t var_8h;
    int64_t var_ch;
    int64_t var_10h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    x0 = arg1;
    x1 = arg2;
    /* int stest(char * b1,char * b2); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((x29 - 8)) = x0;
    *((sp + 0x10)) = x1;
    *((sp + 0xc)) = 0;
    *((sp + 8)) = 0;
    do {
        w8 = 0x2328;
        w9 = *((sp + 0xc));
        if (w9 >= w8) {
            goto label_0;
        }
        x8 = 0x401000;
        x1 = x8 + 0x4f;
        x0 = *((x29 - 8));
        dbg_mstrcpy (x0, x1, x2);
        x8 = 0x401000;
        x1 = x8 + 0x60;
        x0 = *((sp + 0x10));
        dbg_mstrcpy (x0, x1, x2);
        x0 = *((x29 - 8));
        x1 = *((sp + 0x10));
        dbg_mstrcmp (x0, x1, x2);
        w9 = *((sp + 8));
        w9 += w0;
        *((sp + 8)) = w9;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400e74 */
#include <stdint.h>
 
void dbg_intest (int64_t arg_10h, int64_t arg1) {
    int64_t var_0h;
    int64_t var_4h;
    int64_t var_8h;
    int64_t var_ch;
    x0 = arg1;
    /* int intest(); */
    *((sp + 0xc)) = 0;
label_0:
    w8 = *((sp + 0xc));
    if (w8 >= 0x3e8) {
        goto label_1;
    }
    w8 = 1;
    *(sp) = 0;
    *((sp + 8)) = 0;
    *((sp + 4)) = w8;
    do {
        w8 = *((sp + 8));
        if (w8 >= 0xb3) {
            goto label_2;
        }
        w8 = *((sp + 4));
        w9 = *(sp);
        w8 = w9 + w8;
        *(sp) = w8;
        w8 = *((sp + 4));
        w8 += 2;
        *((sp + 4)) = w8;
        w8 = *((sp + 8));
        w8++;
        *((sp + 8)) = w8;
    } while (1);
label_2:
    w8 = *((sp + 0xc));
    w8++;
    *((sp + 0xc)) = w8;
    goto label_0;
label_1:
    w0 = *(sp);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400ef0 */
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
    x20 = 0x411de8;
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400d5c */
#include <stdint.h>
 
void dbg_mstrcpy (int64_t arg_10h, int64_t arg1, int64_t arg2) {
    int64_t var_0h;
    int64_t var_8h;
    x0 = arg1;
    x1 = arg2;
    /* void mstrcpy(char * c,char * d); */
    *((sp + 8)) = x0;
    *(sp) = x1;
    do {
        x8 = *(sp);
        x9 = x8 + 1;
        *(sp) = x9;
        w10 = *(x8);
        x8 = *((sp + 8));
        x9 = x8 + 1;
        *((sp + 8)) = x9;
        *(x8) = w10;
        w10 = (int8_t) w10;
        if (w10 == 0) {
            goto label_0;
        }
    } while (1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400d9c */
#include <stdint.h>
 
void dbg_mcopy () {
    FILE * stream;
    int64_t var_0h;
    int64_t var_0h_2;
    int64_t var_0h_3;
    signed int64_t var_ch;
    int64_t var_10h;
    int64_t var_14h;
    int64_t var_10h_2;
    int64_t var_10h_3;
    /* int mcopy(); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    x8 = 0x401000;
    x1 = x8 + 0x71;
    x0 = sp + 0x14;
    dbg_mstrcpy (x0, x1, x2);
    x8 = 0x401000;
    x0 = x8 + 0x7f;
    x8 = 0x401000;
    x1 = x8 + 0x88;
    fopen (x0, x1);
    *((x29 - 8)) = x0;
    if (x0 == 0) {
        x0 = "Cannot open file";
        printf (x0);
        w8 = 0x0;
        *((sp + 8)) = w0;
        w0 = w8;
        exit (w0);
    }
    *((sp + 0x10)) = 0;
label_0:
    w8 = *((sp + 0x10));
    w8++;
    *((sp + 0x10)) = w8;
    if (w8 >= 0x3e8) {
        goto label_1;
    }
    *((sp + 0xc)) = 0;
    do {
        x8 = sp + 0x14;
        x9 = *((sp + 0xc));
        x8 += x9;
        w10 = *(x8);
        w10 = (int8_t) w10;
        if (w10 == 0) {
            goto label_2;
        }
        x8 = sp + 0x14;
        x9 = *((sp + 0xc));
        x8 += x9;
        w0 = *(x8);
        x1 = *((x29 - 8));
        IO_putc ();
        *((sp + 4)) = w0;
        w8 = *((sp + 0xc));
        w8++;
        *((sp + 0xc)) = w8;
    } while (1);
label_2:
    goto label_0;
label_1:
    x0 = *((x29 - 8));
    fclose (x0);
    w8 = *((sp + 0x10));
    *(sp) = w0;
    w0 = w8;
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005a0 */
#include <stdint.h>
 
void fopen () {
    x17 = *(0x412010);
    x16 = 0x412010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005f0 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x412038);
    x16 = 0x412038;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400580 */
#include <stdint.h>
 
void exit () {
    x16 = 0x412000;
    x17 = *(0x412000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005e0 */
#include <stdint.h>
 
void IO_putc () {
    x17 = *(0x412030);
    x16 = 0x412030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400590 */
#include <stdint.h>
 
void fclose () {
    x16 = 0x412000;
    x17 = *(0x412008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400750 */
#include <stdint.h>
 
uint64_t dbg_main (int32_t argc) {
    int64_t var_14h;
    int64_t var_bp_10h;
    int64_t var_0h_2;
    int64_t var_10h_2;
    int64_t var_0h_3;
    int64_t var_30h;
    int64_t var_0h;
    int64_t var_50h;
    int64_t var_20h;
    int64_t var_10h;
    int64_t var_10h_3;
    x0 = argc;
    /* int main(); */
    *((sp + -0x20)) = x28;
    *((sp + -0x20 + 8)) = x27;
    *((sp + 0x10)) = x29;
    *((sp + 0x10 + 8)) = x30;
    x29 = sp + 0x10;
    *((x29 - 0x14)) = 0;
    *((sp + 0x50)) = 0;
    x0 = 0x400fc0;
    w1 = 7;
    printf (x0, w1);
    *((sp + 0x3c)) = w0;
    do {
        w8 = *((sp + 0x50));
        if (w8 >= 6) {
            goto label_0;
        }
        w8 = *((sp + 0x50));
        w9 = w8;
        w8 = w9;
        w8 -= 5;
        *((sp + 0x30)) = x9;
        *((sp + 0x2c)) = w8;
        if (w8 <= w8) {
            x9 = *((sp + 0x30));
            x8 = *(0x400f88);
            uint64_t (*x8)() ();
        }
        w8 = *((sp + 0x50));
        w8++;
        *((sp + 0x50)) = w8;
    } while (1);
label_0:
    x0 = "\n\n...End%c";
    w1 = 7;
    printf (x0, w1);
    w1 = *((x29 - 0x14));
    *((sp + 8)) = w0;
    w0 = w1;
    x29 = *((sp + 0x10));
    x30 = *((sp + 0x10 + 8));
    x28 = *(sp);
    x27 = *((sp + 8));
    return 0x401044;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400960 */
#include <stdint.h>
 
void dbg_sq (int64_t arg_10h, int64_t arg1) {
    int64_t var_4h;
    int64_t var_8h;
    x0 = arg1;
    /* long int sq(long int big); */
    *((sp + 8)) = x0;
    x0 = *((sp + 8));
    if (x0 != 0) {
        goto label_0;
    }
    *((sp + 4)) = 0;
    do {
        w8 = 0x2328;
        w9 = *((sp + 4));
        if (w9 >= w8) {
            goto label_1;
        }
        x8 = 0x412050;
        x9 = *(0x412050);
        x10 = *((sp + 8));
        x9 = x10 + x9;
        *((sp + 8)) = x9;
        x9 = *(0x412050);
        x9 += 2;
        *(x8) = x9;
        w8 = *((sp + 4));
        w8++;
        *((sp + 4)) = w8;
    } while (1);
label_1:
    goto label_2;
label_0:
    *((sp + 4)) = 0;
    do {
        w8 = 0x2328;
        w9 = *((sp + 4));
        if (w9 >= w8) {
            goto label_3;
        }
        x9 = *(0x412050);
        x9 -= 2;
        *(x8) = x9;
        x8 = *(0x412050);
        x9 = *((sp + 8));
        x8 = x9 - x8;
        *((sp + 8)) = x8;
        w8 = *((sp + 4));
        w8++;
        *((sp + 4)) = w8;
    } while (1);
label_3:
label_2:
    x0 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400bf8 */
#include <stdint.h>
 
void dbg_fib (int64_t arg1) {
    int64_t var_4h;
    int64_t var_sp_4h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* unsigned int fib(int x); */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    *((sp + 8)) = w0;
    w0 = *((sp + 8));
    __asm ("b.le 0x400c44");
    w8 = *((sp + 8));
    w0 = w8 - 1;
    dbg_fib (w0);
    w8 = *((sp + 8));
    w8 -= 2;
    *((sp + 4)) = w0;
    w0 = w8;
    dbg_fib (w0);
    w8 = *((sp + 4));
    w8 += w0;
    *((x29 - 4)) = w8;
    goto label_0;
    w8 = 1;
    *((x29 - 4)) = w8;
label_0:
    w0 = *((x29 - 4));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400548 */
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
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400ce0 */
#include <stdint.h>
 
void dbg_mstrcmp (int64_t arg_20h, int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_1ch;
    x0 = arg1;
    x1 = arg2;
    /* int mstrcmp(char * c,char * d); */
    *((sp + 0x10)) = x0;
    *((sp + 8)) = x1;
    do {
        x8 = *((sp + 0x10));
        w9 = *(x8);
        x8 = *((sp + 8));
        w10 = *(x8);
        if (w9 != w10) {
            goto label_0;
        }
        x8 = *((sp + 0x10));
        w9 = *(x8);
        w9 = (int8_t) w9;
        if (w9 == 0) {
            *((sp + 0x1c)) = 0;
            goto label_1;
        }
        x8 = *((sp + 0x10));
        x8++;
        *((sp + 0x10)) = x8;
        x8 = *((sp + 8));
        x8++;
        *((sp + 8)) = x8;
    } while (1);
label_0:
    x8 = *((sp + 0x10));
    w9 = *(x8);
    x8 = *((sp + 8));
    w10 = *(x8);
    w9 -= w10;
    *((sp + 0x1c)) = w9;
label_1:
    w0 = *((sp + 0x1c));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4005d0 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x412028);
    x16 = 0x412028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x400560 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [13] -r-x section size 160 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x411ff8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/arm64_elf_clang_O0_from_rfalke/subject.exe @ 0x4007b8 */
#include <stdint.h>
 
void aav_0x004007b8 (int64_t arg_54h) {
    int64_t var_78h;
    x1 = sp + 0x54;
    x0 = x29 - 0x78;
    dbg_stest (x0, x1);
    x1 = 0x412060;
    *(x1) = w0;
    w1 = .comment;
    x0 = "\ncresult = %d\n";
    printf (w0, x1);
    *((sp + 0x28)) = w0;
    return void (*0x400924)() ();
}
