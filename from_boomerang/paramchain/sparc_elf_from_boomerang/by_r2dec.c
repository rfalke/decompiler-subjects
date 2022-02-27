/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x10840 */
#include <stdint.h>
 
void entry0 () {
    /* [08] -r-x section size 336 named .text */
    fp = 0;
    local_0 = sp + 0x40;
    l0 = *(local_0);
    l1 = sp + 0x44;
    o1 = 0x20800;
    local_1 = o1 + 0x35c;
    *(local_1) = l1;
    l2 = l0 << 2;
    l2 += 4;
    l2 = l1 + l2;
    l3 = 0x20800;
    local_2 = l3 + 0x338;
    *(local_2) = l2;
    l5 = 0x0;
    g0 |= l5;
    if (g0 == l5) {
        void (*0x108e0)() ();
    }
    l6 = l5 << 2;
    l7 = l6 & 0x300;
    l6 = l5 & 0x3f;
    l7 = l6 | l7;
    l5 = l7 << 0x16;
    l4 = 0x20b54;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x10934 */
#include <stdint.h>
 
void addem () {
    g1 = o0 + o1;
    g1 += o2;
    *(o3) = g1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x10990 */
#include <stdint.h>
 
void init () {
    /* [09] -r-x section size 56 named .init */
    0x109a0 ();
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
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x10960 */
#include <stdint.h>
 
int32_t main () {
    o3 = fp - 4;
    o0 = 5;
    o1 = 0xa;
    o2 = 0x28;
    sym_passem ();
    g1 = 0x20800;
    o0 = g1 + 0x360;
    local_0 = fp - 4;
    o1 = *(local_0);
    sym_imp_printf ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x10954 */
#include <stdint.h>
 
void passem () {
    g1 = o7;
    o7 = g1;
    return sym_addem ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x20a60 */
#include <stdint.h>
 
void printf () {
    g1 = 0x15000;
    void (*0x20a0c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x109c8 */
#include <stdint.h>
 
void fini () {
    /* [10] -r-x section size 56 named .fini */
    0x109d8 ();
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
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x20a48 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20a0c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x20a54 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20a0c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/paramchain/sparc_elf_from_boomerang/subject.exe @ 0x20a3c */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 100 named .plt */
        g1 = 0xc000;
    } while (1);
}
