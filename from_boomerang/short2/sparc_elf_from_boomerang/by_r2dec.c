/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x104c4 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 732 named .text */
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
    o0 = 0x107bc;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x209f4;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x20890 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [15] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x107a0 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x105f8 */
#include <stdint.h>
 
void frame_dummy () {
    g1 = 0x0;
    l7 = 0x10234;
    fcn_00010538 ();
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
        fcn_000208c0 ();
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
        fcn_000208cc ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x10748 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    g1 = 0x0;
    l7 = 0x100e4;
    fcn_00010740 ();
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
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x106b4 */
#include <stdint.h>
 
int32_t main () {
    o2 = 6;
    o1 = 5;
    o0 = 4;
    sym_test ();
    o3 = 0x10400;
    o1 = o0;
    o0 = o3 | 0x3d8;
    sym_imp_printf ();
    o2 = 4;
    o1 = 5;
    o0 = 6;
    sym_test ();
    o1 = o0;
    o2 = 0x10400;
    o0 = o2 | 0x3f0;
    sym_imp_printf ();
    o2 = 5;
    o1 = 6;
    o0 = 4;
    sym_test ();
    g1 = 0x10800;
    o1 = o0;
    o0 = g1 | 8;
    sym_imp_printf ();
    o1 = 4;
    o2 = 5;
    o0 = 6;
    sym_test ();
    o1 = o0;
    o0 = 0x10820;
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x10688 */
#include <stdint.h>
 
void test () {
    g1 = 1;
    o0 = 1;
    if (o0 >= o1) {
        o0 = 0;
    }
    if (o1 >= o2) {
        g1 = 0;
    }
    o0 &= g1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x208d8 */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x20860)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x2089c */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20860)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x107bc */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x10540 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x102ec;
    fcn_00010538 ();
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
        fcn_000208b4 ();
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
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x105ec */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x1067c */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x10794 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x208a8 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20860)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x10538 */
#include <stdint.h>
 
void fcn_00010538 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x208b4 */
#include <stdint.h>
 
void fcn_000208b4 () {
    g1 = 0x15000;
    void (*0x20860)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x208c0 */
#include <stdint.h>
 
void fcn_000208c0 () {
    g1 = 0x18000;
    void (*0x20860)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x208cc */
#include <stdint.h>
 
void fcn_000208cc () {
    g1 = 0x1b000;
    void (*0x20860)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/short2/sparc_elf_from_boomerang/subject.exe @ 0x10740 */
#include <stdint.h>
 
void fcn_00010740 () {
    l7 = o7 + l7;
    return;
}
