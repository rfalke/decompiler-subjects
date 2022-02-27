/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x10500 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 908 named .text */
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
    o0 = 0x108a8;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20b00;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x20994 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 160 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x1088c */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x1063c */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x102f4;
    fcn_00010574 ();
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
        fcn_000209c4 ();
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
        fcn_000209d0 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x1082c */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x10104;
    fcn_00010824 ();
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
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x106d0 */
#include <stdint.h>
 
int32_t main () {
    o2 = 0x10800;
    o0 = o2 | 0xc8;
    o1 = fp - 0x14;
    sym_imp_scanf ();
    local_0 = fp - 0x14;
    f2 = *(local_0);
    g1 = 0x10800;
    __asm ("fstod f2, f4");
    local_1 = g1 + 0x138;
    f3 = *(local_1);
    o1 = 0x10800;
    o0 = o1 | 0xd0;
    __asm ("fstod f3, f0");
    local_2 = fp - 0x10;
    *(local_2) = f4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209dc */
#include <stdint.h>
 
void scanf () {
    g1 = 0x1e000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209a0 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x108a8 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x1057c */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x103b4;
    fcn_00010574 ();
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
        fcn_000209b8 ();
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
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x1062c */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x106c0 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x1087c */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209e8 */
#include <stdint.h>
 
void printf () {
    g1 = 0x21000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209ac */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209f4 */
#include <stdint.h>
 
void puts () {
    g1 = 0x24000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x10574 */
#include <stdint.h>
 
void fcn_00010574 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209b8 */
#include <stdint.h>
 
void fcn_000209b8 () {
    g1 = 0x15000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209c4 */
#include <stdint.h>
 
void fcn_000209c4 () {
    g1 = 0x18000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x209d0 */
#include <stdint.h>
 
void fcn_000209d0 () {
    g1 = 0x1b000;
    void (*0x20964)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe @ 0x10824 */
#include <stdint.h>
 
void fcn_00010824 () {
    l7 = o7 + l7;
    return;
}
