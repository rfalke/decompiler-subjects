/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x104d0 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 960 named .text */
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
    o0 = 0x108ac;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20b10;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209a0 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 148 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10890 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10604 */
#include <stdint.h>
 
void frame_dummy () {
    g1 = 0x0;
    l7 = 0x10338;
    fcn_00010544 ();
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
        fcn_000209d0 ();
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
        fcn_000209dc ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10838 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    g1 = 0x0;
    l7 = 0x10104;
    fcn_00010830 ();
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
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10694 */
#include <stdint.h>
 
int32_t main () {
    g1 = 0x10940;
    f8 = *(g1);
    local_0 = fp - 0x14;
    *(local_0) = f8;
    o5 = fp - 0x18;
    g1 = 0x10800;
    o0 = g1 | 0xc8;
    o1 = o5;
    sym_imp_scanf ();
    local_1 = fp - 0x14;
    f8 = *(local_1);
    __asm ("fstod f8, f10");
    local_2 = fp - 0x18;
    f8 = *(local_2);
    __asm ("fstod f8, f8");
    g1 = 0x10800;
    o0 = g1 | 0xd0;
    local_3 = fp - 0x10;
    *(local_3) = f10;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209e8 */
#include <stdint.h>
 
void scanf () {
    g1 = 0x1e000;
    void (*0x20970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209ac */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x108ac */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x1054c */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x103f0;
    fcn_00010544 ();
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
        fcn_000209c4 ();
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
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x105f8 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10688 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10884 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209f4 */
#include <stdint.h>
 
void printf () {
    g1 = 0x21000;
    void (*0x20970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209b8 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10544 */
#include <stdint.h>
 
void fcn_00010544 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209c4 */
#include <stdint.h>
 
void fcn_000209c4 () {
    g1 = 0x15000;
    void (*0x20970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209d0 */
#include <stdint.h>
 
void fcn_000209d0 () {
    g1 = 0x18000;
    void (*0x20970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x209dc */
#include <stdint.h>
 
void fcn_000209dc () {
    g1 = 0x1b000;
    void (*0x20970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch2/sparc_elf_from_boomerang/subject.exe @ 0x10830 */
#include <stdint.h>
 
void fcn_00010830 () {
    l7 = o7 + l7;
    return;
}
