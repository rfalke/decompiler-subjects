/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x104f4 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 804 named .text */
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
    o0 = 0x10834;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20a1c;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x208bc */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 148 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10818 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10630 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x10228;
    fcn_00010568 ();
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
        fcn_000208ec ();
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
        fcn_000208f8 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x107b8 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x100a0;
    fcn_000107b0 ();
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
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10760 */
#include <stdint.h>
 
int32_t main () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    local_1 = fp + 0x48;
    *(local_1) = i1;
    o1 = 4;
    local_2 = fp + 0x48;
    o0 = *(local_2);
    o1 += o0;
    local_3 = fp + 0x44;
    o0 = *(local_3);
    o1 = *(o1);
    sym_proc1 ();
    o1 = o0;
    o0 = 0x10860;
    sym_imp_printf ();
    o0 = 0;
    i0 = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x106c4 */
#include <stdint.h>
 
void proc1 () {
    local_0 = fp + 0x44;
    *(local_0) = i0;
    local_1 = fp + 0x48;
    *(local_1) = i1;
    local_2 = fp + 0x44;
    o0 = *(local_2);
    if (o0 > 2) {
        local_3 = fp + 0x48;
        o0 = *(local_3);
        sym_imp_strlen ();
        local_4 = fp + 0x44;
        *(local_4) = o0;
        local_5 = fp + 0x48;
        o0 = *(local_5);
        sym_imp_strlen ();
        local_6 = fp - 0x14;
        *(local_6) = o0;
        local_7 = fp + 0x44;
        o1 = *(local_7);
        local_8 = fp - 0x14;
        o0 = *(local_8);
        o1 += o0;
        o0 = 0x10850;
        sym_imp_printf ();
        goto label_0;
    }
    local_9 = fp + 0x48;
    o0 = *(local_9);
    sym_imp_strlen ();
    local_10 = fp + 0x44;
    *(local_10) = o0;
label_0:
    o0 = 0x10858;
    local_11 = fp + 0x44;
    o1 = *(local_11);
    local_12 = fp - 0x14;
    o2 = *(local_12);
    sym_imp_printf ();
    local_13 = fp + 0x44;
    o0 = *(local_13);
    i0 = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x20910 */
#include <stdint.h>
 
void printf () {
    g1 = 0x21000;
    void (*0x2088c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x208c8 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x2088c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10834 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10570 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x102e8;
    fcn_00010568 ();
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
        fcn_000208e0 ();
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
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10620 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x106b4 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10808 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x20904 */
#include <stdint.h>
 
void strlen () {
    g1 = 0x1e000;
    void (*0x2088c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x208d4 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x2088c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x10568 */
#include <stdint.h>
 
void fcn_00010568 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x208e0 */
#include <stdint.h>
 
void fcn_000208e0 () {
    g1 = 0x15000;
    void (*0x2088c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x208ec */
#include <stdint.h>
 
void fcn_000208ec () {
    g1 = 0x18000;
    void (*0x2088c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x208f8 */
#include <stdint.h>
 
void fcn_000208f8 () {
    g1 = 0x1b000;
    void (*0x2088c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe @ 0x107b0 */
#include <stdint.h>
 
void fcn_000107b0 () {
    l7 = o7 + l7;
    return;
}
