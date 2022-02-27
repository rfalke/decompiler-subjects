/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x104e0 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 832 named .text */
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
    o0 = 0x1083c;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x20a40;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x208e0 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 148 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x10820 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x1061c */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x10260;
    fcn_00010554 ();
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
        fcn_00020910 ();
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
        fcn_0002091c ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x107c0 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x100bc;
    fcn_000107b8 ();
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
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x1074c */
#include <stdint.h>
 
int32_t main () {
    o0 = 0x10858;
    sym_imp_printf ();
    o1 = fp - 0x14;
    o0 = 0x10868;
    sym_imp_scanf ();
    o0 = fp - 0x20;
    local_0 = sp + 0x40;
    *(local_0) = o0;
    local_1 = fp - 0x14;
    o0 = *(local_1);
    sym_twofib ();
    o0 = 0x10870;
    local_2 = fp - 0x14;
    o1 = *(local_2);
    local_3 = fp - 0x20;
    o2 = *(local_3);
    sym_imp_printf ();
    o0 = 0;
    i0 = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x20928 */
#include <stdint.h>
 
void printf () {
    g1 = 0x1e000;
    void (*0x208b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x20934 */
#include <stdint.h>
 
void scanf () {
    g1 = 0x21000;
    void (*0x208b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x106b0 */
#include <stdint.h>
 
void twofib () {
    do {
        local_0 = fp + 0x40;
        o0 = *(local_0);
        local_1 = fp - 0x20;
        *(local_1) = o0;
        local_2 = fp + 0x44;
        *(local_2) = i0;
        local_3 = fp + 0x44;
        o0 = *(local_3);
        if (o0 == 0) {
            local_4 = fp - 0x18;
            *(local_4) = g0;
            o0 = 1;
            local_5 = fp - 0x14;
            *(local_5) = o0;
            goto label_0;
        }
        local_6 = fp + 0x44;
        o0 = *(local_6);
        o1 = o0 - 1;
        o0 = fp - 0x18;
        local_7 = sp + 0x40;
        *(local_7) = o0;
        o0 = o1;
        sym_twofib ();
    } while (1);
    local_8 = fp - 0x18;
    o0 = *(local_8);
    local_9 = fp - 0x1c;
    *(local_9) = o0;
    local_10 = fp - 0x14;
    o0 = *(local_10);
    local_11 = fp - 0x18;
    *(local_11) = o0;
    local_12 = fp - 0x14;
    o1 = *(local_12);
    local_13 = fp - 0x1c;
    o0 = *(local_13);
    o0 = o1 + o0;
    local_14 = fp - 0x14;
    *(local_14) = o0;
label_0:
    local_15 = fp - 0x18;
    o0 = *(local_15);
    local_16 = fp - 0x20;
    o1 = *(local_16);
    *(o1) = o0;
    local_17 = fp - 0x14;
    o0 = *(local_17);
    local_18 = fp - 0x20;
    o1 = *(local_18);
    local_19 = o1 + 4;
    *(local_19) = o0;
    local_20 = fp - 0x20;
    i0 = *(local_20);
    return __asm ("jmp i7+0xc");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x208ec */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x208b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x1083c */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x1055c */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x10320;
    fcn_00010554 ();
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
        fcn_00020904 ();
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
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x1060c */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x106a0 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x10810 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x208f8 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x208b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x10554 */
#include <stdint.h>
 
void fcn_00010554 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x20904 */
#include <stdint.h>
 
void fcn_00020904 () {
    g1 = 0x15000;
    void (*0x208b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x20910 */
#include <stdint.h>
 
void fcn_00020910 () {
    g1 = 0x18000;
    void (*0x208b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x2091c */
#include <stdint.h>
 
void fcn_0002091c () {
    g1 = 0x1b000;
    void (*0x208b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe @ 0x107b8 */
#include <stdint.h>
 
void fcn_000107b8 () {
    l7 = o7 + l7;
    return;
}
