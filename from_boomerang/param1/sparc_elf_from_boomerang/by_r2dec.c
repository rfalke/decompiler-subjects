/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x104c4 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 612 named .text */
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
    o0 = 0x10744;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x2092c;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x207c8 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [15] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x10728 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x105f8 */
#include <stdint.h>
 
void frame_dummy () {
    g1 = 0x0;
    l7 = 0x1016c;
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
        fcn_000207f8 ();
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
        fcn_00020804 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x106d0 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    g1 = 0x0;
    l7 = 0x10094;
    fcn_000106c8 ();
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
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x106a0 */
#include <stdint.h>
 
int32_t main () {
    o0 = i0 - 3;
    o1 = 2;
    sym_cparam ();
    o1 = o0;
    o0 = 0x10760;
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x10688 */
#include <stdint.h>
 
void cparam () {
    if (o0 < 0) {
        o1 = 0;
    }
    o0 += o1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x20810 */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x20798)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x207d4 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20798)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x10744 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x10540 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x10224;
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
        fcn_000207ec ();
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
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x105ec */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x1067c */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x1071c */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x207e0 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20798)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x10538 */
#include <stdint.h>
 
void fcn_00010538 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x207ec */
#include <stdint.h>
 
void fcn_000207ec () {
    g1 = 0x15000;
    void (*0x20798)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x207f8 */
#include <stdint.h>
 
void fcn_000207f8 () {
    g1 = 0x18000;
    void (*0x20798)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x20804 */
#include <stdint.h>
 
void fcn_00020804 () {
    g1 = 0x1b000;
    void (*0x20798)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/param1/sparc_elf_from_boomerang/subject.exe @ 0x106c8 */
#include <stdint.h>
 
void fcn_000106c8 () {
    l7 = o7 + l7;
    return;
}
