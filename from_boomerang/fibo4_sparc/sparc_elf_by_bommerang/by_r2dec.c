/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x104e8 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 724 named .text */
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
    o0 = 0x107d8;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x209f0;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x20880 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 148 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x107bc */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x1061c */
#include <stdint.h>
 
void frame_dummy () {
    g1 = 0x0;
    l7 = 0x10200;
    fcn_0001055c ();
    g1 |= 0x20;
    o4 = 0x0;
    o3 = 0x0;
    local_0 = l7 + g1;
    o5 = *(local_0);
    o4 |= 4;
    o3 |= 0x14;
    if (o5 != 0) {
        local_1 = l7 + o4;
        o0 = *(local_1);
        local_2 = l7 + o3;
        o1 = *(local_2);
        fcn_000208b0 ();
    }
    g1 = 0x8;
    local_3 = l7 + g1;
    i0 = *(local_3);
    o5 = 0x0;
    g1 = *(i0);
    o5 |= 0x1c;
    if (g1 != 0) {
        local_4 = l7 + o5;
        g1 = *(local_4);
        if (g1 == 0) {
            goto label_0;
        }
        fcn_000208bc ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x10764 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    g1 = 0x0;
    l7 = 0x100b8;
    fcn_0001075c ();
    g1 |= 0x18;
    local_0 = l7 + g1;
    o5 = *(local_0);
    local_1 = o5 - 4;
    g1 = *(local_1);
    l0 = o5 - 4;
    if (g1 == -1) {
        goto label_0;
    }
    do {
        l0 -= 4;
        g1 ();
        g1 = *(l0);
    } while (g1 != -1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x106fc */
#include <stdint.h>
 
int32_t main () {
    g1 = 0x10400;
    o0 = g1 | 0x3f8;
    sym_imp_printf ();
    o5 = fp - 0x14;
    g1 = 0x10800;
    o0 = g1 | 8;
    o1 = o5;
    sym_imp_scanf ();
    local_0 = fp - 0x14;
    i4 = *(local_0);
    sym_fib ();
    local_1 = fp - 0x18;
    *(local_1) = o2;
    g1 = 0x10800;
    o0 = g1 | 0x10;
    local_2 = fp - 0x14;
    o1 = *(local_2);
    local_3 = fp - 0x18;
    o2 = *(local_3);
    sym_imp_printf ();
    g1 = 0;
    i0 = g1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x208c8 */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x20850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x208d4 */
#include <stdint.h>
 
void scanf () {
    g1 = 0x21000;
    void (*0x20850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x106ac */
#include <stdint.h>
 
void fib () {
    do {
label_0:
        sp -= 0x60;
        local_0 = sp + 0x50;
        *(local_0) = i4;
        local_1 = sp + 0x54;
        *(local_1) = o7;
        if (i4 <= 1) {
            goto label_1;
        }
        i4--;
        sym_fib ();
    } while (1);
    local_2 = sp + 0x58;
    *(local_2) = o2;
    local_3 = sp + 0x50;
    i4 = *(local_3);
    i4 -= 2;
    sym_fib ();
    goto label_0;
    local_4 = sp + 0x58;
    g1 = *(local_4);
    o2 += g1;
    goto label_2;
label_1:
    o2 = i4;
label_2:
    local_5 = sp + 0x54;
    o7 = *(local_5);
    local_6 = sp + 0x50;
    i4 = *(local_6);
    sp += 0x60;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x2088c */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x20850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x107d8 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x10564 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x102b8;
    fcn_0001055c ();
    g1 = l1 | 0x10;
    local_0 = l7 + g1;
    o5 = *(local_0);
    o4 = *(o5);
    g1 = 0x0;
    if (o4 != 0) {
        goto label_0;
    }
    g1 |= 0xc;
    local_1 = l7 + g1;
    g1 = *(local_1);
    o5 = *(g1);
    o5 = *(o5);
    g1 = 0x0;
    if (o5 == 0) {
        goto label_1;
    }
    l0 = g1;
    g1 = *(l0);
    g1 += 4;
    do {
        *(l0) = g1;
        o5 ();
        g1 = *(l0);
        o5 = *(g1);
        g1 += 4;
    } while (o5 != 0);
    g1 = 0x24;
label_1:
    local_2 = l7 + g1;
    o5 = *(local_2);
    g1 = 0x0;
    if (o5 != 0) {
        g1 |= 4;
        local_3 = l7 + g1;
        o0 = *(local_3);
        fcn_000208a4 ();
    }
    g1 = l1 | 0x10;
    local_4 = l7 + g1;
    o4 = *(local_4);
    o5 = 1;
    *(o4) = o5;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x10610 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x106a0 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x107b0 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x20898 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x20850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x1055c */
#include <stdint.h>
 
void fcn_0001055c () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x208a4 */
#include <stdint.h>
 
void fcn_000208a4 () {
    g1 = 0x15000;
    void (*0x20850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x208b0 */
#include <stdint.h>
 
void fcn_000208b0 () {
    g1 = 0x18000;
    void (*0x20850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x208bc */
#include <stdint.h>
 
void fcn_000208bc () {
    g1 = 0x1b000;
    void (*0x20850)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe @ 0x1075c */
#include <stdint.h>
 
void fcn_0001075c () {
    l7 = o7 + l7;
    return;
}
