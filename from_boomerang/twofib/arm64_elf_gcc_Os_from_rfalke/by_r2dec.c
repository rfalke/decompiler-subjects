/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x780 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x6f0 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x11010);
    x16 = 0x11010;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x908 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x730 */
#include <stdint.h>
 
uint64_t dbg_main () {
    int32_t n;
    int64_t var_1ch;
    int64_t var_20h;
    int64_t var_20h_2;
    /* int main(); */
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x0 = "Enter number: ";
    x29 = sp;
    printf (x0);
    x1 = x29 + 0x1c;
    x0 = 0x9a7;
    scanf (x0, x1);
    w3 = *((x29 + 0x1c));
    w0 = w3;
    w0 = dbg_twofib (w0);
    w2 = w0;
    w1 = w3;
    x0 = "Fibonacci of %d is %d\n";
    printf (x0, w1, w2);
    w0 = 0x0;
    x29 = *(sp);
    x30 = *((sp + 8));
    return 0x0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x720 */
#include <stdint.h>
 
void printf () {
    x17 = *(0x11028);
    x16 = 0x11028;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x6d0 */
#include <stdint.h>
 
void scanf () {
    x16 = 0x11000;
    x17 = *(0x11000);
    x16 += 0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x8c8 */
#include <stdint.h>
 
uint64_t dbg_twofib (int64_t arg1) {
    int64_t var_10h;
    int64_t var_10h_2;
    x0 = arg1;
    /* pair twofib(int n); */
    w1 = w0;
    w0 = 0x1;
    if (w1 != 0) {
        *((sp + -0x10)) = x29;
        *((sp + -0x10 + 8)) = x30;
        w0 = w1 - 1;
        x29 = sp;
        x0 = dbg_twofib (x0);
        x2 = x0 >> 0x20;
        w0 = w2 + w0;
        w1 = w2;
        x29 = *(sp);
        x30 = *((sp + 8));
        x0 = x1 | (x0 << 32);
        return x0;
    }
    x0 = x1 | (x0 << 32);
    return x0;
}


r2dec has crashed (info: SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x980).
Please report the bug at https://github.com/radareorg/r2dec-js/issues
Use the option '--issue' or the command 'pddi' to generate 
the needed data for the issue.
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x7b8 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = .comment;
    if (x0 != 0) {
        void (*0x700)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x7d0 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x808 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x848 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x6e0 */
#include <stdint.h>
 
void cxa_finalize () {
    x16 = 0x11000;
    x17 = *(0x11008);
    x16 += 8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x890 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x984 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x698 */
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
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x710 */
#include <stdint.h>
 
void abort () {
    x17 = *(0x11020);
    x16 = 0x11020;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/arm64_elf_gcc_Os_from_rfalke/subject.exe @ 0x6b0 */
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
