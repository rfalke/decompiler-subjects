/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x104a8 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 780 named .text */
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
    o0 = 0x107d0;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x209dc;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x20878 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [15] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x107b4 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x105dc */
#include <stdint.h>
 
void frame_dummy () {
    g1 = 0x0;
    l7 = 0x10238;
    fcn_0001051c ();
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
        fcn_000208a8 ();
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
        fcn_000208b4 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x1075c */
#include <stdint.h>
 
void do_global_ctors_aux () {
    g1 = 0x0;
    l7 = 0x100b8;
    fcn_00010754 ();
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
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x106a4 */
#include <stdint.h>
 
int32_t main () {
    g1 = 0xa;
    o3 = g1 - i0;
    if (i0 > 7) {
        goto label_0;
    }
    o1 = 0x10400;
    o0 = i0 << 2;
    o5 = o1 | 0x284;
    local_0 = o5 + o0;
    o4 = *(local_0);
    __asm ("jmp o4");
    do {
label_0:
        o3 = 0x10400;
        o0 = o3 | 0x3e8;
        goto label_1;
        o2 = 0x10400;
        o0 = o2 | 0x3f0;
        goto label_1;
        g1 = 0x10400;
        o0 = g1 | 0x3f8;
        goto label_1;
        o4 = 0x10800;
        o0 = o4;
        goto label_1;
        o5 = 0x10800;
        o0 = o5 | 8;
        goto label_1;
        o1 = 0x10800;
        o0 = o1 | 0x10;
        goto label_1;
        g1 = o3 - 3;
        i0 = 0x10400;
    } while (g1 > 5);
    o3 = g1 << 2;
    o7 = i0 | 0x26c;
    local_1 = o7 + o3;
    o2 = *(local_1);
    __asm ("jmp o2");
label_1:
    i0 = 0;
    sym_imp_puts ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x208c0 */
#include <stdint.h>
 
void puts () {
    g1 = 0x1e000;
    void (*0x20848)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x20884 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20848)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x107d0 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x10524 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x102f0;
    fcn_0001051c ();
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
        fcn_0002089c ();
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
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x105d0 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x10660 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x107a8 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x20890 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20848)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x1051c */
#include <stdint.h>
 
void fcn_0001051c () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x2089c */
#include <stdint.h>
 
void fcn_0002089c () {
    g1 = 0x15000;
    void (*0x20848)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x208a8 */
#include <stdint.h>
 
void fcn_000208a8 () {
    g1 = 0x18000;
    void (*0x20848)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x208b4 */
#include <stdint.h>
 
void fcn_000208b4 () {
    g1 = 0x1b000;
    void (*0x20848)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/nestedswitch/sparc_elf_from_boomerang/subject.exe @ 0x10754 */
#include <stdint.h>
 
void fcn_00010754 () {
    l7 = o7 + l7;
    return;
}
