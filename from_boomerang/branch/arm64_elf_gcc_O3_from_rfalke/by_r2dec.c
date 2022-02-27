/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8a8 */
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
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x11000;
    x17 = *(0x11008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x9f0 */
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
    x20 = 0x10db0;
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
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x730 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int32_t b;
    uint32_t v;
    char * var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_30h_2;
    int64_t var_10h;
    /* int main(); */
    *((sp + -0x30)) = x29;
    *((sp + -0x30 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0xa88;
    x1 = x29 + 0x28;
    x0 = x19;
    isoc99_scanf ();
    x1 = x29 + 0x2c;
    x0 = x19;
    isoc99_scanf ();
    w0 = *((x29 + 0x28));
    if (w0 == 5) {
        goto label_9;
    }
label_8:
    x0 = "Not Equal";
    puts ("Not Equal");
    w0 = *((x29 + 0x28));
    __asm ("b.le 0x870");
label_7:
    x0 = "Less or Equal";
    puts ("Less or Equal");
    w0 = *((x29 + 0x28));
label_6:
    __asm ("b.le 0x854");
label_5:
    x0 = "Less";
    puts ("Less");
label_4:
    w0 = *((x29 + 0x2c));
    if (w0 < 4) {
        goto label_10;
    }
label_3:
    x0 = "Less or Equal Unsigned";
    puts ("Less or Equal Unsigned");
    w0 = *((x29 + 0x2c));
label_2:
    if (w0 < 5) {
        goto label_11;
    }
label_1:
    x0 = "Carry Set";
    puts ("Carry Set");
label_0:
    w0 = *((x29 + 0x28));
    w19 = 0x5;
    w0 = w19 - w0;
    if ((w0 & 0x1f) != 0) {
        goto label_12;
    }
    x0 = "Minus";
    puts ("Minus");
    w0 = *((x29 + 0x28));
    w19 -= w0;
    while (1) {
        x19 = *((sp + 0x10));
        w0 = 0x0;
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
label_12:
        x0 = "Plus";
        puts ("Plus");
    }
label_11:
    x0 = "Carry Clear";
    puts ("Carry Clear");
    w0 = *((x29 + 0x2c));
    if (w0 < 5) {
        goto label_0;
    }
    goto label_1;
label_10:
    x0 = "Greater Unsigned";
    puts ("Greater Unsigned");
    w0 = *((x29 + 0x2c));
    if (w0 < 4) {
        goto label_2;
    }
    goto label_3;
    x0 = "Greater or Equal";
    puts ("Greater or Equal");
    w0 = *((x29 + 0x28));
    __asm ("b.le 0x7a4");
    goto label_4;
    goto label_5;
    x0 = "Greater";
    puts ("Greater");
    w0 = *((x29 + 0x28));
    __asm ("b.le 0x790");
    goto label_6;
    goto label_7;
label_9:
    x0 = 0xaa8;
    puts (x0);
    w0 = *((x29 + 0x28));
    if (w0 == 5) {
        goto label_7;
    }
    goto label_8;
}


r2dec has crashed (info: SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xa68).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8e0 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x6f0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x8f8 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x11040;
    x0 = 0x11040;
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
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x930 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x11040;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x11040;
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
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x970 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = 0x11000;
    w0 = *((x19 + 0x40));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x11038);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x40)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x11000;
    x17 = *(0x11000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x9b8 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x930)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x930)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0xa6c */
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
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x698 */
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
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x700 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x11018);
    x16 = 0x11018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x710 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x11020);
    x16 = 0x11020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x720 */
#include <stdint.h>
 
void isoc99_scanf () {
    x17 = *(0x11028);
    x16 = 0x11028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/arm64_elf_gcc_O3_from_rfalke/subject.exe @ 0x6b0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 128 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x10ff8;
    return uint64_t (*x17)() ();
}
