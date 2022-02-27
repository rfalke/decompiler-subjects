/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x105cc */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 1508 named .text */
    fp = 0;
    local_0 = sp + 0x40;
    l0 = *(local_0);
    l1 = sp + 0x44;
    sp -= 0x20;
    g0 |= g1;
    o0 = g1;
    if (g0 != g1) {
        sym_imp_atexit ();
    }
    o0 = 0x10bcc;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20e04;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x20ca0 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10bb0 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10700 */
#include <stdint.h>
 
void frame_dummy () {
    g1 = 0x0;
    l7 = 0x1053c;
    fcn_00010640 ();
    g1 |= 0x20;
    o4 = 0x0;
    o3 = 0x0;
    local_0 = l7 + g1;
    o5 = *(local_0);
    o4 |= 4;
    o3 |= 0x14;
    if (o5 != 0) {
        local_1 = l7 + o4;
        o0 = *(local_1);
        local_2 = l7 + o3;
        o1 = *(local_2);
        fcn_00020cd0 ();
    }
    g1 = 0x8;
    local_3 = l7 + g1;
    i0 = *(local_3);
    o5 = 0x0;
    g1 = *(i0);
    o5 |= 0x1c;
    if (g1 != 0) {
        local_4 = l7 + o5;
        g1 = *(local_4);
        if (g1 == 0) {
            goto label_0;
        }
        fcn_00020cdc ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10b58 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    g1 = 0x0;
    l7 = 0x100e4;
    fcn_00010b50 ();
    g1 |= 0x18;
    local_0 = l7 + g1;
    o5 = *(local_0);
    local_1 = o5 - 4;
    g1 = *(local_1);
    l0 = o5 - 4;
    if (g1 == -1) {
        goto label_0;
    }
    do {
        l0 -= 4;
        g1 ();
        g1 = *(l0);
    } while (g1 != -1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x107ac */
#include <stdint.h>
 
int32_t main () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10800;
    o0 = g1 | 0x3e8;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    o5 = *(local_2);
    g1 = o5;
    g1 += g1;
    g1 += o5;
    o0 = g1;
    sym ();
    g1 = 0;
    i0 = g1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x20ce8 */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x20c70)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x107f4 */
#include <stdint.h>
 
void b () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10800;
    o0 = g1 | 0x3f0;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    g1--;
    o0 = g1;
    sym ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10830 */
#include <stdint.h>
 
void c () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10800;
    o0 = g1 | 0x3f8;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 6) {
        void (*0x108d4)() ();
    }
    local_3 = fp + 0x44;
    g1 = *(local_3);
    o5 = g1 << 2;
    g1 = 0x10790;
    local_4 = o5 + g1;
    g1 = *(local_4);
    __asm ("jmp g1");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x20cac */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20c70)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10bcc */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10648 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x105f4;
    fcn_00010640 ();
    g1 = l1 | 0x10;
    local_0 = l7 + g1;
    o5 = *(local_0);
    o4 = *(o5);
    g1 = 0x0;
    if (o4 != 0) {
        goto label_0;
    }
    g1 |= 0xc;
    local_1 = l7 + g1;
    g1 = *(local_1);
    o5 = *(g1);
    o5 = *(o5);
    g1 = 0x0;
    if (o5 == 0) {
        goto label_1;
    }
    l0 = g1;
    g1 = *(l0);
    g1 += 4;
    do {
        *(l0) = g1;
        o5 ();
        g1 = *(l0);
        o5 = *(g1);
        g1 += 4;
    } while (o5 != 0);
    g1 = 0x24;
label_1:
    local_2 = l7 + g1;
    o5 = *(local_2);
    g1 = 0x0;
    if (o5 != 0) {
        g1 |= 4;
        local_3 = l7 + g1;
        o0 = *(local_3);
        fcn_00020cc4 ();
    }
    g1 = l1 | 0x10;
    local_4 = l7 + g1;
    o4 = *(local_4);
    o5 = 1;
    *(o4) = o5;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x108e0 */
#include <stdint.h>
 
void d () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 1) {
        local_3 = fp + 0x44;
        g1 = *(local_3);
        g1--;
        o0 = g1;
        sym ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x1092c */
#include <stdint.h>
 
void e () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 8;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    g1 >>= 1;
    o0 = g1;
    sym ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10968 */
#include <stdint.h>
 
void f () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 0x10;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 1) {
        local_3 = fp + 0x44;
        g1 = *(local_3);
        g1--;
        o0 = g1;
        sym_g ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x109b4 */
#include <stdint.h>
 
void g () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 0x18;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 1) {
        local_3 = fp + 0x44;
        g1 = *(local_3);
        g1--;
        o0 = g1;
        sym ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10a00 */
#include <stdint.h>
 
void h () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 0x20;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 0) {
        local_3 = fp + 0x44;
        g1 = *(local_3);
        g1--;
        o0 = g1;
        sym_i ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10a4c */
#include <stdint.h>
 
void i () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 0x28;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10a74 */
#include <stdint.h>
 
void j () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 0x30;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 1) {
        local_3 = fp + 0x44;
        o0 = *(local_3);
        sym_k ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10ab8 */
#include <stdint.h>
 
void k () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 0x38;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 1) {
        local_3 = fp + 0x44;
        g1 = *(local_3);
        g1--;
        o0 = g1;
        sym ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10b04 */
#include <stdint.h>
 
void l () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    g1 = 0x10c00;
    o0 = g1 | 0x40;
    local_1 = fp + 0x44;
    o1 = *(local_1);
    sym_imp_printf ();
    local_2 = fp + 0x44;
    g1 = *(local_2);
    if (g1 > 1) {
        local_3 = fp + 0x44;
        g1 = *(local_3);
        g1 += 2;
        o0 = g1;
        sym ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x106f4 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10784 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10ba4 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x20cb8 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20c70)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10640 */
#include <stdint.h>
 
void fcn_00010640 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x20cc4 */
#include <stdint.h>
 
void fcn_00020cc4 () {
    g1 = 0x15000;
    void (*0x20c70)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x20cd0 */
#include <stdint.h>
 
void fcn_00020cd0 () {
    g1 = 0x18000;
    void (*0x20c70)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x20cdc */
#include <stdint.h>
 
void fcn_00020cdc () {
    g1 = 0x1b000;
    void (*0x20c70)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/recursion/sparc_elf_from_boomerang/subject.exe @ 0x10b50 */
#include <stdint.h>
 
void fcn_00010b50 () {
    l7 = o7 + l7;
    return;
}
