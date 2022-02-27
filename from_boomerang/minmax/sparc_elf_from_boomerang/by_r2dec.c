/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x10534 */
#include <stdint.h>
 
void entry0 () {
    /* [08] -r-x section size 280 named .text */
    fp = 0;
    local_0 = sp + 0x40;
    l0 = *(local_0);
    l1 = sp + 0x44;
    o1 = 0x20800;
    local_1 = o1 + 0x8c;
    *(local_1) = l1;
    l2 = l0 << 2;
    l2 += 4;
    l2 = l1 + l2;
    l3 = 0x20800;
    local_2 = l3 + 0x80;
    *(local_2) = l2;
    l5 = 0x0;
    g0 |= l5;
    if (g0 == l5) {
        void (*0x105b0)() ();
    }
    l6 = l5 << 2;
    l7 = l6 & 0x300;
    l6 = l5 & 0x3f;
    l6 |= l7;
    l5 = l6 << 0x16;
    l4 = 0x20884;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x1064c */
#include <stdint.h>
 
void init () {
    /* [09] -r-x section size 80 named .init */
    0x1065c ();
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
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x10604 */
#include <stdint.h>
 
int32_t main () {
    g2 = -2;
    g4 = -1;
    g3 = i0 >> 0x1f;
    o0 = g2 - i0;
    g3 = g4 - g3;
    g3 = o0 & g3;
    o1 = 0x10400;
    g2 -= g3;
    o0 = o1 + 0x2f4;
    g3 = g2 >> 0x1f;
    g2 -= 3;
    g2 &= g3;
    o1 = g2 + 3;
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x20778 */
#include <stdint.h>
 
void printf () {
    g1 = 0x15000;
    void (*0x20724)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x1069c */
#include <stdint.h>
 
void fini () {
    /* [10] -r-x section size 80 named .fini */
    0x106ac ();
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
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x2076c */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20724)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x20760 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20724)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/minmax/sparc_elf_from_boomerang/subject.exe @ 0x20754 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [15] -rwx section size 100 named .plt */
        g1 = 0xc000;
    } while (1);
}
