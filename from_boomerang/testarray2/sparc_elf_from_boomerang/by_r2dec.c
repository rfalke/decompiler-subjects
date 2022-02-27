/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x104fc */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 876 named .text */
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
    o0 = 0x10884;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20a94;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x20934 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10868 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10638 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x10298;
    fcn_00010570 ();
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
        fcn_00020964 ();
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
        fcn_00020970 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10808 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x100c8;
    fcn_00010800 ();
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
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10744 */
#include <stdint.h>
 
int32_t main () {
    local_0 = fp - 0x18;
    *(local_0) = g0;
    o0 = 0x20a50;
    sym_mid ();
    o0 = 0x20a50;
    o0 -= 0xa;
    sym_fst ();
    o0 = 0x20a50;
    local_1 = fp - 0x1c;
    *(local_1) = o0;
    local_2 = fp - 0x14;
    *(local_2) = g0;
    do {
        local_3 = fp - 0x14;
        o0 = *(local_3);
        if (o0 > 4) {
            goto label_0;
        }
        o3 = fp - 0x1c;
        o1 = *(o3);
        o0 = o1;
        o0 = *(o0);
        o0 <<= 0x18;
        o2 = o0 >> 0x18;
        local_4 = fp - 0x18;
        o0 = *(local_4);
        o0 += o2;
        local_5 = fp - 0x18;
        *(local_5) = o0;
        o1++;
        *(o3) = o1;
        local_6 = fp - 0x14;
        o0 = *(local_6);
        o0++;
        local_7 = fp - 0x14;
        *(local_7) = o0;
    } while (1);
label_0:
    o0 = 0x108d0;
    local_8 = fp - 0x18;
    o1 = *(local_8);
    sym_imp_printf ();
    o0 = 0;
    i0 = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x20940 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20904)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x106cc */
#include <stdint.h>
 
void mid () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    o1 = 2;
    local_1 = fp + 0x44;
    o0 = *(local_1);
    o0 = o1 + o0;
    o0 = *(o0);
    o0 <<= 0x18;
    o1 = o0 >> 0x18;
    o0 = 0x108a0;
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x2097c */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x20904)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10884 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10578 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x10358;
    fcn_00010570 ();
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
        fcn_00020958 ();
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
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10708 */
#include <stdint.h>
 
void fst () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    o1 = 0xa;
    local_1 = fp + 0x44;
    o0 = *(local_1);
    o0 = o1 + o0;
    o0 = *(o0);
    o0 <<= 0x18;
    o1 = o0 >> 0x18;
    o0 = 0x108b8;
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10628 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x106bc */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10858 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x2094c */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20904)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10570 */
#include <stdint.h>
 
void fcn_00010570 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x20958 */
#include <stdint.h>
 
void fcn_00020958 () {
    g1 = 0x15000;
    void (*0x20904)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x20964 */
#include <stdint.h>
 
void fcn_00020964 () {
    g1 = 0x18000;
    void (*0x20904)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x20970 */
#include <stdint.h>
 
void fcn_00020970 () {
    g1 = 0x1b000;
    void (*0x20904)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe @ 0x10800 */
#include <stdint.h>
 
void fcn_00010800 () {
    l7 = o7 + l7;
    return;
}
