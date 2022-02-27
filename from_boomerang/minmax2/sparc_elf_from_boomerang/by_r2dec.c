/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x1054c */
#include <stdint.h>
 
void entry0 () {
    /* [08] -r-x section size 344 named .text */
    fp = 0;
    local_0 = sp + 0x40;
    l0 = *(local_0);
    l1 = sp + 0x44;
    o1 = 0x20800;
    local_1 = o1 + 0xcc;
    *(local_1) = l1;
    l2 = l0 << 2;
    l2 += 4;
    l2 = l1 + l2;
    l3 = 0x20800;
    local_2 = l3 + 0xc0;
    *(local_2) = l2;
    l5 = 0x0;
    g0 |= l5;
    if (g0 == l5) {
        void (*0x105c8)() ();
    }
    l6 = l5 << 2;
    l7 = l6 & 0x300;
    l6 = l5 & 0x3f;
    l6 |= l7;
    l5 = l6 << 0x16;
    l4 = 0x208c4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x1061c */
#include <stdint.h>
 
void test () {
    g1 = -2;
    g4 = -1;
    o5 = o0 >> 0x1f;
    g2 = g1 - o0;
    g4 -= o5;
    g2 &= g4;
    g3 = 0x10400;
    g1 -= g2;
    o0 = g3 + 0x34c;
    g2 = g1 >> 0x1f;
    g1 -= 3;
    g1 &= g2;
    o1 = g1 + 3;
    g1 = o7;
    o7 = g1;
    sym_imp_printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x207b8 */
#include <stdint.h>
 
void printf () {
    g1 = 0x15000;
    void (*0x20764)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x106a4 */
#include <stdint.h>
 
void init () {
    /* [09] -r-x section size 80 named .init */
    0x106b4 ();
    local_0 = o7 + 8;
    o0 = *(local_0);
    o0 = o7 + o0;
    local_1 = o0 - 8;
    l0 = *(local_1);
    local_2 = o0 - 0x10;
    l1 = *(local_2);
    if (l0 != g0) {
        l0 ();
    }
    if (l1 != g0) {
        l1 ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x10670 */
#include <stdint.h>
 
int32_t main () {
    o0 = -5;
    sym_test ();
    o0 = -2;
    sym_test ();
    o0 = 0;
    sym_test ();
    o0 = i0;
    sym_test ();
    o0 = 5;
    sym_test ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x106f4 */
#include <stdint.h>
 
void fini () {
    /* [10] -r-x section size 80 named .fini */
    0x10704 ();
    local_0 = o7 + 8;
    o0 = *(local_0);
    o0 = o7 + o0;
    local_1 = o0 - 4;
    l0 = *(local_1);
    local_2 = o0 - 0xc;
    l1 = *(local_2);
    if (l0 != g0) {
        l0 ();
    }
    if (l1 != g0) {
        l1 ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x207ac */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20764)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x207a0 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20764)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax2/sparc_elf_from_boomerang/subject.exe @ 0x20794 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [15] -rwx section size 100 named .plt */
        g1 = 0xc000;
    } while (1);
}
