/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x104f4 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 800 named .text */
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
    o0 = 0x10830;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20a34;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x208d4 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 148 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10814 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10630 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x10240;
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
        fcn_00020904 ();
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
        fcn_00020910 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x107b4 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x100bc;
    fcn_000107ac ();
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
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10748 */
#include <stdint.h>
 
int32_t main () {
    o0 = 0x10850;
    sym_imp_printf ();
    o1 = fp - 0x14;
    o0 = 0x10860;
    sym_imp_scanf ();
    local_0 = fp - 0x14;
    o0 = *(local_0);
    sym_fib ();
    local_1 = fp - 0x18;
    *(local_1) = o0;
    o0 = 0x10868;
    local_2 = fp - 0x14;
    o1 = *(local_2);
    local_3 = fp - 0x18;
    o2 = *(local_3);
    sym_imp_printf ();
    o0 = 0;
    i0 = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x2091c */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x208a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x20928 */
#include <stdint.h>
 
void scanf () {
    g1 = 0x21000;
    void (*0x208a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x106c4 */
#include <stdint.h>
 
void fib () {
    do {
label_0:
        local_0 = fp + 0x44;
        *(local_0) = i0;
        local_1 = fp + 0x44;
        o0 = *(local_1);
        if (o0 <= 1) {
            goto label_1;
        }
        local_2 = fp + 0x44;
        o0 = *(local_2);
        o0--;
        sym_fib ();
    } while (1);
    l0 = o0;
    local_3 = fp + 0x44;
    o0 = *(local_3);
    o0 -= 2;
    sym_fib ();
    goto label_0;
    l0 += o0;
    local_4 = fp - 0x14;
    *(local_4) = l0;
    goto label_2;
label_1:
    local_5 = fp + 0x44;
    o0 = *(local_5);
    if (o0 == 1) {
        o0 = 1;
        local_6 = fp - 0x14;
        *(local_6) = o0;
        goto label_2;
    }
    local_7 = fp + 0x44;
    o0 = *(local_7);
    local_8 = fp - 0x14;
    *(local_8) = o0;
label_2:
    local_9 = fp - 0x14;
    i0 = *(local_9);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x208e0 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x208a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10830 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10570 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x10300;
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
        fcn_000208f8 ();
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
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10620 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x106b4 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10804 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x208ec */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x208a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x10568 */
#include <stdint.h>
 
void fcn_00010568 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x208f8 */
#include <stdint.h>
 
void fcn_000208f8 () {
    g1 = 0x15000;
    void (*0x208a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x20904 */
#include <stdint.h>
 
void fcn_00020904 () {
    g1 = 0x18000;
    void (*0x208a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x20910 */
#include <stdint.h>
 
void fcn_00020910 () {
    g1 = 0x1b000;
    void (*0x208a4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/phi/sparc_elf_from_boomerang/subject.exe @ 0x107ac */
#include <stdint.h>
 
void fcn_000107ac () {
    l7 = o7 + l7;
    return;
}
