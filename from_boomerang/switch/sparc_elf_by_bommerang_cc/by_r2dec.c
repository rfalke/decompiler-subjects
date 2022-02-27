/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x10800 */
#include <stdint.h>
 
void entry0 () {
    /* [08] -r-x section size 448 named .text */
    fp = 0;
    local_0 = sp + 0x40;
    l0 = *(local_0);
    l1 = sp + 0x44;
    o1 = 0x20800;
    local_1 = o1 + 0x3c4;
    *(local_1) = l1;
    l2 = l0 << 2;
    l2 += 4;
    l2 = l1 + l2;
    l3 = 0x20800;
    local_2 = l3 + 0x3a0;
    *(local_2) = l2;
    l5 = 0x0;
    g0 |= l5;
    if (g0 == l5) {
        void (*0x108a0)() ();
    }
    l6 = l5 << 2;
    l7 = l6 & 0x300;
    l6 = l5 & 0x3f;
    l7 = l6 | l7;
    l5 = l7 << 0x16;
    l4 = 0x20bbc;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x109c0 */
#include <stdint.h>
 
void init () {
    /* [09] -r-x section size 56 named .init */
    0x109d0 ();
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
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x1090c */
#include <stdint.h>
 
int32_t main () {
    o1 = i0 - 2;
    o0 = 0x108f4;
    o1 <<= 2;
    if (o1 > 5) {
        void (*0x109ac)() ();
    }
    local_0 = o1 + o0;
    o1 = *(local_0);
    __asm ("jmp o1+o0");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x109f8 */
#include <stdint.h>
 
void fini () {
    /* [10] -r-x section size 56 named .fini */
    0x10a08 ();
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
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x20aa4 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [15] -rwx section size 100 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x20ab0 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20a74)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x20ac8 */
#include <stdint.h>
 
void printf () {
    g1 = 0x15000;
    void (*0x20a74)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/sparc_elf_by_bommerang_cc/subject.exe @ 0x20abc */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20a74)() ();
}
