/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x780 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    /* [13] -r-x section size 700 named .text */
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
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x720 */
#include <stdint.h>
 
void libc_start_main () {
    x16 = 0x11000;
    x17 = *(0x11008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x9c0 */
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
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x8c8 */
#include <stdint.h>
 
uint64_t dbg_main () {
    float b;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int main(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    x1 = x29 + 0x1c;
    x0 = 0xa58;
    isoc99_scanf ();
    s1 = *((x29 + 0x1c));
    d1 = (double) s1;
    d0 = 5;
    x0 = "a is %f, b is %f\n";
    printf (x0);
    s1 = *((x29 + 0x1c));
    s0 = 5;
    while (s1 != s0) {
        x0 = "Not Equal";
        puts ("Not Equal");
        s1 = *((x29 + 0x1c));
        s0 = 5;
        __asm ("fcmpe s1, s0");
        __asm ("b.mi 0x98c");
label_1:
        s1 = *((x29 + 0x1c));
        s0 = 5;
        __asm ("fcmpe s1, s0");
        if (s1 >= s0) {
            goto label_4;
        }
label_0:
        s1 = *((x29 + 0x1c));
        s0 = 5;
        __asm ("fcmpe s1, s0");
        if (s1 < s0) {
            goto label_5;
        }
label_2:
        s1 = *((x29 + 0x1c));
        s0 = 5;
        __asm ("fcmpe s1, s0");
        if (s1 > s0) {
            goto label_6;
        }
label_3:
        w0 = 0x0;
        x29 = *(sp);
        x30 = *((sp + 8));
        return 0x0;
        x0 = 0xa98;
        puts (x0);
        s0 = 5;
        s1 = *((x29 + 0x1c));
    }
label_4:
    x0 = "Less or Equal";
    puts ("Less or Equal");
    goto label_0;
    x0 = "Greater";
    puts ("Greater");
    goto label_1;
label_5:
    x0 = "Greater or Equal";
    puts ("Greater or Equal");
    goto label_2;
label_6:
    x0 = "Less";
    puts ("Less");
    goto label_3;
}


r2dec has crashed (info: SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xa38).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x7b8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x730)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x7d0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x1 = 0x11048;
    x0 = 0x11048;
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
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x808 */
#include <stdint.h>
 
void register_tm_clones () {
    x0 = 0x11048;
    x1 -= x0;
    x1 >>= 3;
    x1 = 0x11048;
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
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x848 */
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
    w0 = *((x19 + 0x48));
    if (w0 == 0) {
        x0 = .comment;
        if (x0 != 0) {
            x0 = *(0x11040);
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 0x48)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x710 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x11000;
    x17 = *(0x11000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x890 */
#include <stdint.h>
 
void entry_init0 () {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = .jcr;
    x1 = .comment;
    while (x1 == 0) {
        void (*0x808)() ();
        x1 = .comment;
    }
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    uint64_t (*x1)() ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return void (*0x808)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0xa3c */
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
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x6d8 */
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
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x740 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x11018);
    x16 = 0x11018;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x750 */
#include <stdint.h>
 
void puts () {
    x17 = *(0x11020);
    x16 = 0x11020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x760 */
#include <stdint.h>
 
void isoc99_scanf () {
    x17 = *(0x11028);
    x16 = 0x11028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x770 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x11030);
    x16 = 0x11030;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/arm64_elf_gcc_O1_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 144 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = .comment;
    x16 = 0x10ff8;
    return uint64_t (*x17)() ();
}
