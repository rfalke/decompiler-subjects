/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x10534 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 1260 named .text */
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
    o0 = 0x10a3c;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x22240;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21f84 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 160 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x10a20 */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x10670 */
#include <stdint.h>
 
void frame_dummy () {
    o1 = 0x0;
    l7 = 0x118b0;
    fcn_000105a8 ();
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
        fcn_00021fb4 ();
    }
    o0 = 0x14;
    local_3 = l7 + o0;
    i0 = *(local_3);
    o1 = 0x0;
    o0 = *(i0);
    o1 |= 0x24;
    if (o0 != 0) {
        local_4 = l7 + o1;
        o0 = *(local_4);
        if (o0 == 0) {
            goto label_0;
        }
        fcn_00021fc0 ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x109c0 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    o0 = 0x0;
    l7 = 0x11560;
    fcn_000109b8 ();
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
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x10704 */
#include <stdint.h>
 
int32_t main () {
    o0 = 0xc;
    sym_imp_malloc ();
    local_0 = fp - 0x18;
    *(local_0) = o0;
    o1 = 4;
    local_1 = fp - 0x18;
    o0 = *(local_1);
    o1 += o0;
    o0 = 0x11f18;
    *(o1) = o0;
    o0 = 2;
    local_2 = fp - 0x14;
    *(local_2) = o0;
    local_3 = fp - 0x18;
    o0 = *(local_3);
    o0 += 4;
    local_4 = fp - 0x18;
    *(local_4) = o0;
label_2:
    local_5 = fp - 0x14;
    o0 = *(local_5);
    o0--;
    local_6 = fp - 0x14;
    *(local_6) = o0;
    if (o0 == 0) {
        goto label_3;
    }
    local_7 = fp - 0x18;
    o0 = *(local_7);
    o0 = *(o0);
    sym_imp_strlen ();
    local_8 = fp - 0x28;
    *(local_8) = o0;
    local_9 = fp - 0x28;
    o0 = *(local_9);
    if (o0 > 0xa) {
        o0 = 0xa;
        local_10 = fp - 0x28;
        *(local_10) = o0;
    }
    local_11 = fp - 0x1c;
    *(local_11) = g0;
label_1:
    local_12 = fp - 0x1c;
    o0 = *(local_12);
    if (o0 > 6) {
        goto label_4;
    }
    local_13 = fp - 0x20;
    *(local_13) = g0;
label_0:
    local_14 = fp - 0x20;
    o1 = *(local_14);
    local_15 = fp - 0x28;
    o0 = *(local_15);
    if (o1 >= o0) {
        goto label_5;
    }
    local_16 = fp - 0x18;
    o0 = *(local_16);
    o1 = *(o0);
    local_17 = fp - 0x20;
    o0 = *(local_17);
    o0 = o1 + o0;
    o0 = *(o0);
    o0 <<= 0x18;
    o0 >>= 0x18;
    o0 -= 0x20;
    local_18 = fp - 0x2c;
    *(local_18) = o0;
    if (o0 < 0) {
        local_19 = fp - 0x2c;
        *(local_19) = g0;
    }
    local_20 = fp - 0x24;
    *(local_20) = g0;
    do {
        local_21 = fp - 0x24;
        o0 = *(local_21);
        if (o0 > 6) {
            goto label_6;
        }
        local_22 = fp - 0x20;
        o0 = *(local_22);
        o1 = o0 << 3;
        o0 = fp - 0x10;
        o1 += o0;
        local_23 = fp - 0x24;
        o0 = *(local_23);
        o3 = o1 + o0;
        o0 = 0x22000;
        o4 = o0 | 0xb4;
        local_24 = fp - 0x2c;
        o1 = *(local_24);
        o0 = o1 >> 0x1f;
        o0 >>= 0x1d;
        o0 = o1 + o0;
        o1 = o0 >> 3;
        o0 = o1;
        o0 <<= 3;
        o0 -= o1;
        local_25 = fp - 0x1c;
        o1 = *(local_25);
        o0 += o1;
        o2 = o0 << 2;
        local_26 = fp - 0x2c;
        o1 = *(local_26);
        o0 = o1 >> 0x1f;
        o0 >>= 0x1d;
        o0 = o1 + o0;
        o0 >>= 3;
        o0 <<= 3;
        o1 -= o0;
        o0 = o1;
        o0 <<= 3;
        o0 -= o1;
        local_27 = fp - 0x24;
        o1 = *(local_27);
        o1 = o0 + o1;
        local_28 = o4 + o2;
        o0 = *(local_28);
        o0 = o1 + o0;
        o0 = *(o0);
        local_29 = o3 - 0x70;
        *(local_29) = o0;
        local_30 = fp - 0x24;
        o0 = *(local_30);
        o0++;
        local_31 = fp - 0x24;
        *(local_31) = o0;
    } while (1);
label_6:
    local_32 = fp - 0x20;
    o0 = *(local_32);
    o1 = o0 << 3;
    o0 = fp - 0x10;
    o1 += o0;
    o0 = 0x20;
    local_33 = o1 - 0x69;
    *(local_33) = o0;
    local_34 = fp - 0x20;
    o0 = *(local_34);
    o0++;
    local_35 = fp - 0x20;
    *(local_35) = o0;
    goto label_0;
label_5:
    local_36 = fp - 0x28;
    o0 = *(local_36);
    o0 <<= 3;
    o0--;
    local_37 = fp - 0x20;
    *(local_37) = o0;
    do {
        local_38 = fp - 0x20;
        o0 = *(local_38);
        if (o0 < 0) {
            goto label_7;
        }
        local_39 = fp - 0x20;
        o1 = *(local_39);
        o0 = fp - 0x10;
        o0 += o1;
        local_40 = o0 - 0x70;
        o0 = *(local_40);
        o0 <<= 0x18;
        o0 >>= 0x18;
        if (o0 != 0x20) {
            goto label_7;
        }
        local_41 = fp - 0x20;
        o1 = *(local_41);
        o0 = fp - 0x10;
        o0 += o1;
        local_42 = o0 - 0x70;
        *(local_42) = g0;
        local_43 = fp - 0x20;
        o0 = *(local_43);
        o0--;
        local_44 = fp - 0x20;
        *(local_44) = o0;
    } while (1);
label_7:
    o0 = fp - 0x80;
    sym_imp_puts ();
    local_45 = fp - 0x1c;
    o0 = *(local_45);
    o0++;
    local_46 = fp - 0x1c;
    *(local_46) = o0;
    goto label_1;
label_4:
    o0 = 0x11f28;
    sym_imp_puts ();
    local_47 = fp - 0x18;
    o0 = *(local_47);
    o0 += 4;
    local_48 = fp - 0x18;
    *(local_48) = o0;
    goto label_2;
label_3:
    o0 = 0;
    i0 = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21f90 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x10a3c */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x105b0 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l1 = 0x0;
    l7 = 0x11970;
    fcn_000105a8 ();
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
    o0 = 0x1c;
label_1:
    local_2 = l7 + o0;
    o1 = *(local_2);
    o1 = 0x0;
    if (o1 != 0) {
        o1 |= 4;
        local_3 = l7 + o1;
        o0 = *(local_3);
        fcn_00021fa8 ();
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
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x10660 */
#include <stdint.h>
 
void call_do_global_dtors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x106f4 */
#include <stdint.h>
 
void call_frame_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x10a10 */
#include <stdint.h>
 
void call_do_global_ctors_aux () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21fcc */
#include <stdint.h>
 
void malloc () {
    g1 = 0x1e000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21f9c */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21fd8 */
#include <stdint.h>
 
void strlen () {
    g1 = 0x21000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21fe4 */
#include <stdint.h>
 
void puts () {
    g1 = 0x24000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x105a8 */
#include <stdint.h>
 
void fcn_000105a8 () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21fa8 */
#include <stdint.h>
 
void fcn_00021fa8 () {
    g1 = 0x15000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21fb4 */
#include <stdint.h>
 
void fcn_00021fb4 () {
    g1 = 0x18000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x21fc0 */
#include <stdint.h>
 
void fcn_00021fc0 () {
    g1 = 0x1b000;
    void (*0x21f54)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/banner/sparc_elf_by_bommerang/subject.exe @ 0x109b8 */
#include <stdint.h>
 
void fcn_000109b8 () {
    l7 = o7 + l7;
    return;
}
