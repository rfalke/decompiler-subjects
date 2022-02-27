/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x104b4 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 648 named .text */
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
    o0 = 0x10758;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x2093c;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x207e8 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x1073c */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x105f0 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x10194;
    fcn_00010528 ();
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
        fcn_00020818 ();
    }
    o0 = 0x14;
    local_3 = l7 + o0;
    i0 = *(local_3);
    o1 = 0x0;
    o0 = *(i0);
    o1 |= 0x1c;
    if (o0 != 0) {
        local_4 = l7 + o1;
        o0 = *(local_4);
        if (o0 == 0) {
            goto label_0;
        }
        fcn_00020824 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x106dc */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x100a8;
    fcn_000106d4 ();
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
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x10684 */
#include <stdint.h>
 
int32_t main () {
    o0 = 0x1078c;
    f2 = *(o0);
    local_0 = fp - 0x14;
    *(local_0) = f2;
    local_1 = fp - 0x14;
    f2 = *(local_1);
    __asm ("fstod f2, f2");
    o0 = 0x10778;
    local_2 = fp - 0x10;
    *(local_2) = f2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x207f4 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x207b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x10758 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x10530 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x10254;
    fcn_00010528 ();
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
    o0 = 0x24;
label_1:
    local_2 = l7 + o0;
    o1 = *(local_2);
    o1 = 0x0;
    if (o1 != 0) {
        o1 |= 4;
        local_3 = l7 + o1;
        o0 = *(local_3);
        fcn_0002080c ();
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
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x105e0 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x10674 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x1072c */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x20830 */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x207b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x20800 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x207b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x10528 */
#include <stdint.h>
 
void fcn_00010528 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x2080c */
#include <stdint.h>
 
void fcn_0002080c () {
    g1 = 0x15000;
    void (*0x207b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x20818 */
#include <stdint.h>
 
void fcn_00020818 () {
    g1 = 0x18000;
    void (*0x207b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x20824 */
#include <stdint.h>
 
void fcn_00020824 () {
    g1 = 0x1b000;
    void (*0x207b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/printpi/sparc_elf_from_boomerang/subject.exe @ 0x106d4 */
#include <stdint.h>
 
void fcn_000106d4 () {
    l7 = o7 + l7;
    return;
}
