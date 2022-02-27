/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x1052c */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 716 named .text */
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
    o0 = 0x10814;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x209f8;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x20898 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x107f8 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x10668 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x101cc;
    fcn_000105a0 ();
    o1 |= 0x20;
    local_0 = l7 + o1;
    o0 = *(local_0);
    o2 = 0x0;
    o3 = 0x0;
    o2 |= 4;
    o3 |= 8;
    if (o0 != 0) {
        local_1 = l7 + o2;
        o0 = *(local_1);
        local_2 = l7 + o3;
        o1 = *(local_2);
        fcn_000208c8 ();
    }
    o0 = 0x14;
    local_3 = l7 + o0;
    i0 = *(local_3);
    o1 = 0x0;
    o0 = *(i0);
    o1 |= 0x24;
    if (o0 != 0) {
        local_4 = l7 + o1;
        o0 = *(local_4);
        if (o0 == 0) {
            goto label_0;
        }
        fcn_000208d4 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x10798 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x1009c;
    fcn_00010790 ();
    o0 |= 0x18;
    local_0 = l7 + o0;
    o1 = *(local_0);
    local_1 = o1 - 4;
    o0 = *(local_1);
    l0 = o1 - 4;
    if (o0 == -1) {
        goto label_0;
    }
    do {
        l0 -= 4;
        o0 ();
        o0 = *(l0);
    } while (o0 != -1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x10754 */
#include <stdint.h>
 
int32_t main () {
    sym_foo1 ();
    o0 = 0x20800;
    o1 = o0 | 0x1b8;
    o0 = 0x10838;
    o1 = *(o1);
    sym_imp_printf ();
    o0 = 0;
    i0 = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x1073c */
#include <stdint.h>
 
void foo1 () {
    sym_foo2 ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x106fc */
#include <stdint.h>
 
void foo2 () {
    o0 = 0x20800;
    o1 = o0 | 0x1b8;
    o0 = 0xc;
    *(o1) = o0;
    o0 = 0x20800;
    o1 = o0 | 0x1b0;
    o0 = 0x10830;
    local_0 = o1 + 4;
    o2 = *(local_0);
    o1 = *(o1);
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x208e0 */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x20868)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x208a4 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20868)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x10814 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x105a8 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x1028c;
    fcn_000105a0 ();
    o0 = l1 | 0xc;
    local_0 = l7 + o0;
    o1 = *(local_0);
    o2 = *(o1);
    o0 = 0x0;
    if (o2 != 0) {
        goto label_0;
    }
    o0 |= 0x10;
    local_1 = l7 + o0;
    o0 = *(local_1);
    o1 = *(o0);
    o1 = *(o1);
    o0 = 0x0;
    if (o1 == 0) {
        goto label_1;
    }
    l0 = o0;
    o0 = *(l0);
    o0 += 4;
    do {
        *(l0) = o0;
        o1 ();
        o0 = *(l0);
        o1 = *(o0);
        o0 += 4;
    } while (o1 != 0);
    o0 = 0x1c;
label_1:
    local_2 = l7 + o0;
    o1 = *(local_2);
    o1 = 0x0;
    if (o1 != 0) {
        o1 |= 4;
        local_3 = l7 + o1;
        o0 = *(local_3);
        fcn_000208bc ();
    }
    o0 = l1 | 0xc;
    local_4 = l7 + o0;
    o2 = *(local_4);
    o1 = 1;
    *(o2) = o1;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x10658 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x106ec */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x107e8 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x208b0 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20868)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x105a0 */
#include <stdint.h>
 
void fcn_000105a0 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x208bc */
#include <stdint.h>
 
void fcn_000208bc () {
    g1 = 0x15000;
    void (*0x20868)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x208c8 */
#include <stdint.h>
 
void fcn_000208c8 () {
    g1 = 0x18000;
    void (*0x20868)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x208d4 */
#include <stdint.h>
 
void fcn_000208d4 () {
    g1 = 0x1b000;
    void (*0x20868)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/global2/sparc_elf_from_boomerang/subject.exe @ 0x10790 */
#include <stdint.h>
 
void fcn_00010790 () {
    l7 = o7 + l7;
    return;
}
