/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x104d8 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 816 named .text */
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
    o0 = 0x10824;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20ad4;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x20974 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 148 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x10808 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x10614 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x102fc;
    fcn_0001054c ();
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
        fcn_000209a4 ();
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
        fcn_000209b0 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x107a8 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x10168;
    fcn_000107a0 ();
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
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x106a8 */
#include <stdint.h>
 
int32_t main () {
    local_0 = i1 + 4;
    o0 = *(local_0);
    o1 = fp - 0x98;
    sym_imp_stat ();
    o5 = 0x10800;
    o1 = o0;
    o0 = o5 | 0x40;
    sym_imp_printf ();
    o4 = 0x10800;
    local_1 = fp - 0x98;
    o1 = *(local_1);
    o0 = o4 | 0x50;
    sym_imp_printf ();
    o3 = 0x10800;
    local_2 = fp - 0x88;
    o1 = *(local_2);
    o0 = o3 | 0x60;
    sym_imp_printf ();
    o2 = 0x10800;
    local_3 = fp - 0x84;
    o1 = *(local_3);
    o0 = o2 | 0x70;
    sym_imp_printf ();
    g1 = 0x10800;
    local_4 = fp - 0x80;
    o1 = *(local_4);
    o0 = g1 | 0x80;
    sym_imp_printf ();
    local_5 = fp - 0x7c;
    o1 = *(local_5);
    i1 = 0x10800;
    o0 = i1 | 0x90;
    sym_imp_printf ();
    local_6 = fp - 0x78;
    o1 = *(local_6);
    i0 = 0x10800;
    o0 = i0 | 0xa0;
    sym_imp_printf ();
    o7 = 0x10800;
    o0 = o7 | 0xb0;
    local_7 = fp - 0x74;
    o1 = *(local_7);
    sym_imp_printf ();
    o5 = 0x10800;
    local_8 = fp - 0x68;
    o1 = *(local_8);
    o0 = o5 | 0xc0;
    sym_imp_printf ();
    o4 = 0x10800;
    local_9 = fp - 0x48;
    o1 = *(local_9);
    o0 = o4 | 0xd0;
    sym_imp_printf ();
    o3 = 0x10800;
    local_10 = fp - 0x44;
    o1 = *(local_10);
    o0 = o3 | 0xe0;
    sym_imp_printf ();
    o2 = 0x10800;
    local_11 = fp - 0x60;
    o1 = *(local_11);
    o0 = o2 | 0xf0;
    sym_imp_printf ();
    g1 = 0x10800;
    local_12 = fp - 0x58;
    o1 = *(local_12);
    o0 = g1 | 0x100;
    sym_imp_printf ();
    g1 = 0x10800;
    local_13 = fp - 0x50;
    o1 = *(local_13);
    o0 = g1 | 0x110;
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x209bc */
#include <stdint.h>
 
void stat () {
    g1 = 0x1e000;
    void (*0x20944)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x209c8 */
#include <stdint.h>
 
void printf () {
    g1 = 0x21000;
    void (*0x20944)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x20980 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20944)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x10824 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x10554 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x103bc;
    fcn_0001054c ();
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
        fcn_00020998 ();
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
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x10604 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x10698 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x107f8 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x2098c */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20944)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x1054c */
#include <stdint.h>
 
void fcn_0001054c () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x20998 */
#include <stdint.h>
 
void fcn_00020998 () {
    g1 = 0x15000;
    void (*0x20944)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x209a4 */
#include <stdint.h>
 
void fcn_000209a4 () {
    g1 = 0x18000;
    void (*0x20944)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x209b0 */
#include <stdint.h>
 
void fcn_000209b0 () {
    g1 = 0x1b000;
    void (*0x20944)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/sparc_elf_from_boomerang/subject.exe @ 0x107a0 */
#include <stdint.h>
 
void fcn_000107a0 () {
    l7 = o7 + l7;
    return;
}
