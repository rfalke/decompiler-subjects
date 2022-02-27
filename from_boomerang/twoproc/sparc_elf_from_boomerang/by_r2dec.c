/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x10538 */
#include <stdint.h>
 
void entry0 () {
    /* [08] -r-x section size 264 named .text */
    fp = 0;
    local_0 = sp + 0x40;
    l0 = *(local_0);
    l1 = sp + 0x44;
    o1 = 0x20800;
    local_1 = o1 + 0x54;
    *(local_1) = l1;
    l2 = l0 << 2;
    l2 += 4;
    l2 = l1 + l2;
    l3 = 0x20800;
    local_2 = l3 + 0x48;
    *(local_2) = l2;
    l5 = 0x0;
    g0 |= l5;
    if (g0 == l5) {
        void (*0x105b4)() ();
    }
    l6 = l5 << 2;
    l7 = l6 & 0x300;
    l6 = l5 & 0x3f;
    l6 |= l7;
    l5 = l6 << 0x16;
    l4 = 0x2084c;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x10640 */
#include <stdint.h>
 
void init () {
    /* [09] -r-x section size 80 named .init */
    0x10650 ();
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
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x10618 */
#include <stdint.h>
 
void proc1 () {
    o0 -= o1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x10620 */
#include <stdint.h>
 
int32_t main () {
    o0 = 0xb;
    o1 = 4;
    sym_proc1 ();
    i1 = o0;
    g2 = 0x20800;
    return sym_imp_printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x10690 */
#include <stdint.h>
 
void fini () {
    /* [10] -r-x section size 80 named .fini */
    0x106a0 ();
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
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x20740 */
#include <stdint.h>
 
void printf () {
    g1 = 0x15000;
    void (*0x206ec)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x20734 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x206ec)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x20728 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x206ec)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/sparc_elf_from_boomerang/subject.exe @ 0x2071c */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 100 named .plt */
        g1 = 0xc000;
    } while (1);
}
