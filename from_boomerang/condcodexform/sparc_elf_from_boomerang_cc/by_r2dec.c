/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10958 */
#include <stdint.h>
 
void entry0 () {
    /* [08] -r-x section size 808 named .text */
    fp = 0;
    local_0 = sp + 0x40;
    l0 = *(local_0);
    l1 = sp + 0x44;
    o1 = 0x20c00;
    local_1 = o1 + 0x260;
    *(local_1) = l1;
    l2 = l0 << 2;
    l2 += 4;
    l2 = l1 + l2;
    l3 = 0x20c00;
    local_2 = l3 + 0x23c;
    *(local_2) = l2;
    l5 = 0x0;
    g0 |= l5;
    if (g0 == l5) {
        void (*0x109f8)() ();
    }
    l6 = l5 << 2;
    l7 = l6 & 0x300;
    l6 = l5 & 0x3f;
    l7 = l6 | l7;
    l5 = l7 << 0x16;
    l4 = 0x20e58;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10c80 */
#include <stdint.h>
 
void init () {
    /* [09] -r-x section size 56 named .init */
    0x10c90 ();
    local_0 = o7 + 8;
    o0 = *(local_0);
    o0 = o7 + o0;
    local_1 = o0 - 8;
    l0 = *(local_1);
    if (l0 != g0) {
        l0 ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10a5c */
#include <stdint.h>
 
void func1 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10a74 */
#include <stdint.h>
 
void func2 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10a8c */
#include <stdint.h>
 
void func3 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10aa4 */
#include <stdint.h>
 
void func4 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10abc */
#include <stdint.h>
 
void func5 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10ad4 */
#include <stdint.h>
 
void func6 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10aec */
#include <stdint.h>
 
void func7 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10b04 */
#include <stdint.h>
 
void func8 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10b0c */
#include <stdint.h>
 
int32_t main () {
    o0 = 1;
    o0 = 0;
    if (i0 > 1) {
    }
    g0 |= o0;
    o0 = 0x10800;
    if (g0 != o0) {
        o0 += 0x25c;
    } else {
        o0 = 0x10a74;
    }
    o1 = 0x10800;
    if (g0 != o0) {
        o3 = o1 + 0x28c;
    } else {
        o1 = 0x10800;
        o3 = o1 + 0x2a4;
    }
    o1 = 0x10800;
    if (g0 != o0) {
        o2 = o1 + 0x2bc;
    } else {
        o1 = 0x10800;
        o2 = o1 + 0x2d4;
    }
    o1 = 0x10800;
    if (g0 != o0) {
        o1 += 0x2ec;
    } else {
        o1 = 0x10b04;
    }
    o4 = 0x10800;
    if (g0 != o0) {
        o4 += 0x25c;
        o0 = 0x10800;
        if (o0 == o4) {
            o0 += 0x28c;
            i1 = 0;
            if (o3 == o0) {
                o0 = 0x10abc;
                i1 = 0;
                if (o2 != o0) {
                    goto label_0;
                }
                o0 = 0x10aec;
                i1 = 0;
                if (o1 != o0) {
                    goto label_0;
                }
                i1 = 1;
            } else {
                i1 = 0;
            }
label_0:
        } else {
            o4 = 0x10a74;
            o0 = 0x10800;
            if (o0 == o4) {
                o0 += 0x2a4;
                if (o3 == o0) {
                    o0 = 0x10ad4;
                    if (o2 != o0) {
                        goto label_1;
                    }
                    o0 = 0x10b04;
                    if (o1 != o0) {
                        goto label_1;
                    }
                    i1 = 1;
                }
            } else {
label_1:
                i1 = 0;
            }
        }
    }
    g1 = 0x10c00;
    if (i1 != 0) {
        o0 = g1 + 0xf8;
        sym_imp_printf ();
        i0 = 0;
    } else {
        g1 = 0x10c00;
        o0 = g1 + 0x100;
        sym_imp_printf ();
        i0 = 0;
    }
    i0 = 1;
    if (i1 != 0) {
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x10cb8 */
#include <stdint.h>
 
void fini () {
    /* [10] -r-x section size 56 named .fini */
    0x10cc8 ();
    local_0 = o7 + 8;
    o0 = *(local_0);
    o0 = o7 + o0;
    local_1 = o0 - 4;
    l0 = *(local_1);
    if (l0 != g0) {
        l0 ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x20d40 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [15] -rwx section size 100 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x20d4c */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20d10)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x20d64 */
#include <stdint.h>
 
void printf () {
    g1 = 0x15000;
    void (*0x20d10)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/sparc_elf_from_boomerang_cc/subject.exe @ 0x20d58 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20d10)() ();
}
