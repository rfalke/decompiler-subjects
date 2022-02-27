/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x104d8 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 1056 named .text */
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
    o0 = 0x10914;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20cd8;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x20b7c */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 136 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x108f8 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x10614 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x10504;
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
        fcn_00020bac ();
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
        fcn_00020bb8 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x10898 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x10280;
    fcn_00010890 ();
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
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x106a8 */
#include <stdint.h>
 
int32_t main () {
    do {
label_0:
        if (i0 <= 0) {
            goto label_4;
        }
        o2 = i2 + 1;
        if (i0 <= 2) {
            goto label_5;
        }
label_2:
        o0 = i0 + 1;
        if (i0 < i1) {
            goto label_6;
        }
        o1 = i0 - 0x1b;
label_1:
        o2 = i2;
        o0 = -0x5e;
        main ();
    } while (1);
    i0 = 0x10;
    if (o0 == 0) {
        goto label_7;
    }
    i0 = 0x10;
    if (i0 != 2) {
        goto label_7;
    }
    o2 = 0x10800;
    if (i1 > 0xc) {
        i0 = 9;
        goto label_7;
    }
    o1 = i1 + 1;
    o2 |= 0x130;
    o0 = 2;
    do {
label_3:
        main ();
        goto label_0;
        i0 = o0;
        goto label_7;
label_6:
        o1 = i1;
        o2 = i2;
        main ();
        goto label_0;
        o1 = i0 - 0x1b;
        goto label_1;
label_5:
        o1 = 0;
        o0 = -0x56;
        main ();
        goto label_0;
        o0 = i2 + o0;
        o2 = o0;
        o1 = 1;
        o1 -= i1;
        o0 = -0x57;
        main ();
        goto label_0;
        o0 = i2 + o0;
        o2 = o0;
        o0 = -0x4f;
        o1 = -0xd;
        main ();
        goto label_0;
        goto label_2;
label_4:
        if (i0 < 0) {
            goto label_8;
        }
        o2 = 0x10800;
        if (i0 <= 0) {
            goto label_9;
        }
        o2 |= 0x140;
        o0 = 2;
        o1 = 2;
    } while (1);
label_9:
    o1 = *(i2);
    i0 = 0;
    if (o1 != 0x2f) {
        o2 = 0x10948;
        o0 = -0x3d;
        main ();
        goto label_0;
        o1 = o0;
        o2 = i2 + 1;
        o0 = 0;
        main ();
        goto label_0;
        if (o0 == 0) {
            goto label_7;
        }
    }
    i0 = 1;
    goto label_7;
label_8:
    if (i0 >= -0x32) {
        o0 = *(i2);
        if (i0 < -0x32) {
            o2 = i2 + 1;
            if (i1 != o0) {
                o1 = i1;
                o0 = -0x41;
                goto label_3;
            }
            o1 = 0x20c00;
            local_0 = o1 + 0xf0;
            o0 = *(local_0);
            o3 = o1 | 0xf0;
            o0--;
            local_1 = o1 + 0xf0;
            *(local_1) = o0;
            if (o0 >= 0) {
                local_2 = i2 + 0x1f;
                o1 = *(local_2);
                local_3 = o3 + 4;
                o0 = *(local_3);
                i0 = o1;
                *(o0) = o1;
                o0++;
                local_4 = o3 + 4;
                *(local_4) = o0;
                goto label_7;
            }
            local_5 = i2 + 0x1f;
            o0 = *(local_5);
            o1 = o3;
            sym_imp_flsbuf ();
            i0 = o0;
            goto label_7;
        }
        o2 = i2 + 1;
        o0 ^= 0x2f;
        o0 = i0 + 1;
        o1 = i1;
        goto label_3;
    }
    o2 = 0x10800;
    o0 = i1;
    o1 = i0;
    o2 |= 0x188;
    goto label_3;
label_7:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x20b88 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20b4c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x10914 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x10554 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x105c4;
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
        fcn_00020ba0 ();
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
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x10604 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x10698 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x108e8 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x20bc4 */
#include <stdint.h>
 
void flsbuf () {
    g1 = 0x1e000;
    void (*0x20b4c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x20b94 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20b4c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x1054c */
#include <stdint.h>
 
void fcn_0001054c () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x20ba0 */
#include <stdint.h>
 
void fcn_00020ba0 () {
    g1 = 0x15000;
    void (*0x20b4c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x20bac */
#include <stdint.h>
 
void fcn_00020bac () {
    g1 = 0x18000;
    void (*0x20b4c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x20bb8 */
#include <stdint.h>
 
void fcn_00020bb8 () {
    g1 = 0x1b000;
    void (*0x20b4c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/sparc_elf_from_boomerang/subject.exe @ 0x10890 */
#include <stdint.h>
 
void fcn_00010890 () {
    l7 = o7 + l7;
    return;
}
