/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10940 */
#include <stdint.h>
 
void entry0 () {
    /* [08] -r-x section size 3504 named .text */
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
    o0 = 0x1170c;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x21b40;
    *(o3) = o2;
    main ();
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x21844 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [13] -rwx section size 208 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x116f0 */
#include <stdint.h>
 
void init () {
    /* [09] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10a3c */
#include <stdint.h>
 
void frame_dummy () {
    l7 = 0x10c00;
    0x10a48 ();
    l7 |= 0x1b4;
    l7 += o7;
    o0 = 0x8;
    o1 = 0x0;
    local_0 = l7 + o0;
    o0 = *(local_0);
    o1 |= 0xc;
    local_1 = l7 + o1;
    o1 = *(local_1);
    sym_register_frame_info ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x11458 */
#include <stdint.h>
 
void register_frame_info () {
    l7 = 0x10000;
    0x11464 ();
    l7 |= 0x398;
    l7 += o7;
    local_0 = i1 + 8;
    *(local_0) = i0;
    local_1 = i1 + 4;
    *(local_1) = g0;
    *(i1) = g0;
    o0 = 0x18;
    local_2 = l7 + o0;
    o1 = *(local_2);
    local_3 = i1 + 0xc;
    *(local_3) = g0;
    o0 = *(o1);
    local_4 = i1 + 0x10;
    *(local_4) = g0;
    local_5 = i1 + 0x14;
    *(local_5) = o0;
    *(o1) = i1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x11690 */
#include <stdint.h>
 
void do_global_ctors_aux () {
    l7 = 0x10000;
    0x1169c ();
    l7 |= 0x160;
    l7 += o7;
    o0 = 0x1c;
    local_0 = l7 + o0;
    o0 = *(local_0);
    local_1 = o0 - 4;
    o1 = *(local_1);
    l0 = o0 - 4;
    if (o1 == -1) {
        goto label_0;
    }
    do {
        o0 = *(l0);
        l0 -= 4;
        o0 ();
        o0 = *(l0);
    } while (o0 != -1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10a80 */
#include <stdint.h>
 
int32_t main () {
    l0 = 0x11728;
    o0 = l0;
    o1 = fp - 0x14;
    sym_imp_scanf ();
    o0 = l0;
    o1 = fp - 0x18;
    sym_imp_scanf ();
    local_0 = fp - 0x14;
    o0 = *(local_0);
    l0 = 5;
    o0 = 0x11400;
    if (l0 == o0) {
        o0 |= 0x330;
        sym_imp_printf ();
        local_1 = fp - 0x14;
        o0 = *(local_1);
    }
    o0 = 0x11400;
    if (l0 != o0) {
        o0 |= 0x338;
        sym_imp_printf ();
    }
    local_2 = fp - 0x14;
    o0 = *(local_2);
    o0 = 0x11400;
    if (l0 > o0) {
        o0 |= 0x348;
        sym_imp_printf ();
    }
    local_3 = fp - 0x14;
    o0 = *(local_3);
    o0 = 0x11400;
    if (l0 <= o0) {
        o0 |= 0x358;
        sym_imp_printf ();
        local_4 = fp - 0x14;
        o0 = *(local_4);
    }
    o0 = 0x11400;
    if (l0 >= o0) {
        o0 |= 0x368;
        sym_imp_printf ();
    }
    local_5 = fp - 0x14;
    o0 = *(local_5);
    local_6 = fp - 0x18;
    o0 = *(local_6);
    if (l0 < o0) {
        o0 = 0x11780;
        sym_imp_printf ();
        local_7 = fp - 0x18;
        o0 = *(local_7);
    }
    o0 = 0x11400;
    if (l0 > o0) {
        o0 |= 0x388;
        sym_imp_printf ();
    }
    local_8 = fp - 0x18;
    o0 = *(local_8);
    o0 = 0x11400;
    if (l0 <= o0) {
        o0 |= 0x3a0;
        sym_imp_printf ();
    }
    local_9 = fp - 0x18;
    o0 = *(local_9);
    o0 = 0x11400;
    __asm ("bcs 0x10b84");
    o0 |= 0x3b8;
    sym_imp_printf ();
    local_10 = fp - 0x18;
    o0 = *(local_10);
    o0 = 0x11400;
    __asm ("bcc 0x10b9c");
    o0 |= 0x3c8;
    sym_imp_printf ();
    local_11 = fp - 0x14;
    o0 = *(local_11);
    o0 = 0x11400;
    if (l0 >= o0) {
        o0 |= 0x3d8;
        sym_imp_printf ();
    }
    local_12 = fp - 0x14;
    o0 = *(local_12);
    o0 = 0x11400;
    if (l0 < o0) {
        o0 |= 0x3e0;
        sym_imp_printf ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x21850 */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x114a0 */
#include <stdint.h>
 
void register_frame_info_table () {
    l7 = 0x10000;
    0x114ac ();
    l7 |= 0x350;
    l7 += o7;
    local_0 = i1 + 8;
    *(local_0) = i0;
    local_1 = i1 + 0xc;
    *(local_1) = i0;
    local_2 = i1 + 4;
    *(local_2) = g0;
    o0 = 0x18;
    local_3 = l7 + o0;
    o1 = *(local_3);
    *(i1) = g0;
    o0 = *(o1);
    local_4 = i1 + 0x10;
    *(local_4) = g0;
    local_5 = i1 + 0x14;
    *(local_5) = o0;
    *(o1) = i1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x11568 */
#include <stdint.h>
 
void frame_state_for () {
    o0 = i0;
    sym_find ();
    l2 = o0;
    o0 = l2;
    if (o0 != 0) {
        o1 = fp - 0x28;
        sym_extract_cie_info ();
        l0 = o0;
        o0 = fp - 0x240;
        if (o0 != 0) {
            goto label_0;
        }
    }
    i0 = 0;
    goto label_1;
label_0:
    o1 = 0;
    o2 = 0x218;
    sym_imp_memset ();
    local_0 = fp - 0x16;
    o0 = *(local_0);
    local_1 = fp - 0x24;
    o1 = *(local_1);
    local_2 = fp - 0x96;
    *(local_2) = o0;
    local_3 = fp - 0x23c;
    *(local_3) = o1;
    local_4 = l2 + 4;
    o0 = *(local_4);
    o0 -= 4;
    o0 = l2 - o0;
    o1 = *(o0);
    o0 += o1;
    l1 = o0 + 4;
    local_5 = fp - 0x28;
    o0 = *(local_5);
    __asm ("bcc 0x11604");
    o0 = l0;
    do {
        o1 = fp - 0x240;
        o2 = fp - 0x28;
        o3 = 0;
        sym_execute_cfa_insn ();
        l0 = o0;
        o0 = l0;
        __asm ("bcs 0x115e0");
    } while (1);
    local_6 = fp - 0x28;
    o0 = *(local_6);
    o0 = *(o0);
    l0 = l2 + 0x10;
    if (o0 == 0x7a) {
        o0 = l0;
        o1 = fp - 0x244;
        sym_decode_uleb128 ();
        local_7 = fp - 0x244;
        o1 = *(local_7);
        l0 = o0 + o1;
    }
    o0 = *(l2);
    local_8 = l2 + 8;
    o1 = *(local_8);
    o0 = l2 + o0;
    l1 = o0 + 4;
    local_9 = fp - 0x248;
    *(local_9) = o1;
    __asm ("bcc 0x11674");
    local_10 = fp - 0x248;
    o0 = *(local_10);
    do {
        o0 = l0;
        if (o0 > i0) {
            goto label_2;
        }
        o1 = fp - 0x240;
        o2 = fp - 0x28;
        o3 = fp - 0x248;
        sym_execute_cfa_insn ();
        l0 = o0;
        local_11 = fp - 0x248;
        o0 = *(local_11);
        __asm ("bcs 0x11648");
    } while (1);
label_2:
    o0 = i1;
    o1 = fp - 0x240;
    o2 = 0x214;
    sym_imp_memcpy ();
    i0 = i1;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x114e8 */
#include <stdint.h>
 
void deregister_frame_info () {
    l7 = 0x10000;
    0x114f4 ();
    l7 |= 0x308;
    l7 += o7;
    o0 = 0x18;
    local_0 = l7 + o0;
    o2 = *(local_0);
    o0 = *(o2);
    if (o0 == 0) {
        goto label_0;
    }
    do {
        o1 = *(o2);
        local_1 = o1 + 8;
        o0 = *(local_1);
        local_2 = o1 + 0x14;
        o0 = *(local_2);
        if (o0 == i0) {
            *(o2) = o0;
            o0 = *(o1);
            if (o0 == 0) {
                goto label_1;
            }
            local_3 = o1 + 0xc;
            o0 = *(local_3);
            sym_imp_free ();
        }
        goto label_1;
        o2 = o1 + 0x14;
    } while (o0 != 0);
label_0:
    sym_imp_abort ();
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x1170c */
#include <stdint.h>
 
void fini () {
    /* [10] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x109b4 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l7 = 0x10c00;
    0x109c0 ();
    l7 |= 0x23c;
    l7 += o7;
    o0 = 0x4;
    local_0 = l7 + o0;
    o1 = *(local_0);
    o0 = *(o1);
    o0 = *(o0);
    o0 = 0x0;
    if (o0 == 0) {
        goto label_0;
    }
    l0 = o1;
    o0 = *(l0);
    do {
        o0 += 4;
        *(l0) = o0;
        local_1 = o0 - 4;
        o0 = *(local_1);
        o0 ();
        o0 = *(l0);
        o0 = *(o0);
        o0 = *(l0);
    } while (o0 != 0);
    o0 = 0x8;
label_0:
    local_2 = l7 + o0;
    o0 = *(local_2);
    sym_deregister_frame_info ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10a30 */
#include <stdint.h>
 
void fini_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10a74 */
#include <stdint.h>
 
void init_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10c54 */
#include <stdint.h>
 
void fde_insert () {
    g2 = o1 << 2;
    local_0 = o0 + g2;
    *(local_0) = o2;
    if (o1 == 0) {
        goto label_0;
    }
    o0 = g2 + o0;
    do {
        o3 = *(o0);
        local_1 = o0 - 4;
        o2 = *(local_1);
        local_2 = o3 + 8;
        g3 = *(local_2);
        local_3 = o2 + 8;
        g2 = *(local_3);
        o1--;
        if (o1 >= -1) {
            goto label_0;
        }
        *(o0) = o2;
        local_4 = o0 - 4;
        *(local_4) = o3;
        o0 -= 4;
    } while (o1 != -1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10c08 */
#include <stdint.h>
 
void decode_sleb128 () {
    g3 = 0;
    o2 = g3;
    do {
        o3 = *(o0);
        o0++;
        g2 = o3 & 0x7f;
        g2 <<= g3;
        o2 |= g2;
        g0 = o3 & 0x80;
        g3 += 7;
    } while (o3 != 0x80);
    g0 = o3 & 0x40;
    if (o3 <= 0x40) {
        g2 = -1;
        if (o3 == 0x40) {
            goto label_0;
        }
        g2 <<= g3;
        o2 |= g2;
    }
label_0:
    *(o1) = o2;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10bd4 */
#include <stdint.h>
 
void decode_uleb128 () {
    o2 = 0;
    o3 = o2;
    do {
        g3 = *(o0);
        o0++;
        g2 = g3 & 0x7f;
        g2 <<= o2;
        g0 = g3 & 0x80;
        o3 |= g2;
        if (g3 == 0x80) {
            goto label_0;
        }
        o2 += 7;
    } while (1);
label_0:
    *(o1) = o3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x110ac */
#include <stdint.h>
 
void execute_cfa_insn () {
    o2 = *(i0);
    g0 = o2 & 0x40;
    i0++;
    if (o2 != 0x40) {
        local_0 = i2 + 8;
        o1 = *(local_0);
        o0 = o2 & 0x3f;
        sym_imp_umul ();
        o1 = *(i3);
        o1 += o0;
        *(i3) = o1;
    } else {
        g0 = o2 & 0x80;
        o0 = o2 & 0x3f;
        if (o2 != 0x80) {
            local_1 = fp - 0x18;
            *(local_1) = o0;
            o0 = i0;
        } else {
            g0 = o2 & 0xc0;
            if (o2 != 0x2e) {
                local_2 = fp - 0x18;
                *(local_2) = o0;
                o0 = i1 + o0;
                local_3 = o0 + 0x1ac;
                *(local_3) = g0;
                goto label_0;
            }
            o1 = o2 << 2;
            if (o2 > 0x2e) {
                goto label_1;
            }
            o0 = o7 + 0x14;
            0x11120 ();
            local_4 = o0 + o1;
            o0 = *(local_4);
            __asm ("jmp o7+o0");
        }
        o1 = fp - 0x14;
        sym_decode_uleb128 ();
        local_5 = fp - 0x14;
        o2 = *(local_5);
        i0 = o0;
        local_6 = i2 + 0xc;
        o1 = *(local_6);
        o0 = o2;
        sym_imp_umul ();
        local_7 = fp - 0x14;
        *(local_7) = o0;
        local_8 = fp - 0x18;
        o1 = *(local_8);
        o0 = 1;
        o1 = i1 + o1;
        local_9 = o1 + 0x1ac;
        *(local_9) = o0;
label_1:
        sym_imp_abort ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10f84 */
#include <stdint.h>
 
void extract_cie_info () {
    l7 = 0x10800;
    0x10f90 ();
    l7 |= 0x6c;
    l7 += o7;
    o0 = 0x10;
    local_0 = l7 + o0;
    o1 = *(local_0);
    o0 = i0;
    local_1 = o0 + 4;
    o2 = *(local_1);
    o0 -= o2;
    o0 += 0xd;
    *(i1) = o0;
    sym_imp_strcmp ();
    o1 = 0x0;
    if (o0 != 0) {
        o0 = *(i1);
        o1 |= 0x14;
        local_2 = l7 + o1;
        o1 = *(local_2);
        sym_imp_strcmp ();
        if (o0 == 0) {
            goto label_0;
        }
        o0 = *(i1);
        o0 = *(o0);
        i0 = 0;
        if (o0 != 0x7a) {
            goto label_1;
        }
    }
label_0:
    o0 = *(i1);
    sym_imp_strlen ();
    o1 = 0x0;
    o2 = *(i1);
    o1 |= 0x14;
    local_3 = l7 + o1;
    o1 = *(local_3);
    l0 = o2 + o0;
    i0 = l0 + 1;
    o0 = o2;
    sym_imp_strcmp ();
    local_4 = i1 + 4;
    *(local_4) = g0;
    if (o0 == 0) {
        local_5 = l0 + 1;
        o0 = *(local_5);
        local_6 = i0 + 1;
        o2 = *(local_6);
        local_7 = i0 + 2;
        o1 = *(local_7);
        o0 <<= 0x18;
        o2 <<= 0x10;
        o2 |= o0;
        o1 <<= 8;
        local_8 = i0 + 3;
        o0 = *(local_8);
        o1 |= o2;
        o0 |= o1;
        local_9 = i1 + 4;
        *(local_9) = o0;
        i0 = l0 + 5;
    }
    o0 = i0;
    o1 = i1 + 8;
    sym_decode_uleb128 ();
    o1 = i1 + 0xc;
    sym_decode_sleb128 ();
    i0 = o0;
    o0 = *(i0);
    o1 = *(i1);
    local_10 = i1 + 0x10;
    *(local_10) = o0;
    o0 = *(o1);
    i0++;
    if (o0 == 0x7a) {
        o0 = i0;
        o1 = fp - 0x14;
        sym_decode_uleb128 ();
        local_11 = fp - 0x14;
        o1 = *(local_11);
        i0 = o0 + o1;
    }
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10c9c */
#include <stdint.h>
 
void count_fdes () {
    g2 = *(o0);
    o1 = 0;
    if (g2 == o1) {
        goto label_0;
    }
    do {
        local_0 = o0 + 4;
        g2 = *(local_0);
        g2 = *(o0);
        if (g2 != 0) {
            local_1 = o0 + 8;
            g2 = *(local_1);
            o1++;
            if (g2 == 0) {
            }
            g2 = *(o0);
        }
        g2 = o0 + g2;
        local_2 = g2 + 4;
        g3 = *(local_2);
        o0 = g2 + 4;
    } while (g3 != 0);
label_0:
    o0 = o1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10d8c */
#include <stdint.h>
 
void frame_init () {
    local_0 = i0 + 0xc;
    o0 = *(local_0);
    l0 = o0;
    if (o0 == 0) {
        goto label_0;
    }
    local_1 = fp - 0x14;
    *(local_1) = g0;
    o0 = *(l0);
    local_2 = fp - 0x14;
    o0 = *(local_2);
    if (o0 == 0) {
        goto label_1;
    }
    do {
        o0 = *(l0);
        sym_count_fdes ();
        local_3 = fp - 0x14;
        o1 = *(local_3);
        l0 += 4;
        o1 += o0;
        local_4 = fp - 0x14;
        *(local_4) = o1;
        o0 = *(l0);
        local_5 = fp - 0x14;
        o0 = *(local_5);
    } while (o0 != 0);
    local_6 = i0 + 0x10;
    *(local_6) = o0;
    goto label_2;
label_0:
    local_7 = i0 + 8;
    o0 = *(local_7);
    sym_count_fdes ();
    local_8 = fp - 0x14;
    *(local_8) = o0;
    local_9 = fp - 0x14;
    o0 = *(local_9);
label_1:
    local_10 = i0 + 0x10;
    *(local_10) = o0;
label_2:
    o0 <<= 2;
    sym_imp_malloc ();
    o1 = -1;
    local_11 = fp - 0x18;
    *(local_11) = o1;
    local_12 = fp - 0x1c;
    *(local_12) = g0;
    local_13 = fp - 0x14;
    *(local_13) = g0;
    local_14 = i0 + 0xc;
    o1 = *(local_14);
    l1 = o0;
    if (o1 == 0) {
        goto label_3;
    }
    l0 = o1;
    o0 = *(l0);
    local_15 = fp - 0x18;
    o1 = *(local_15);
    if (o0 == 0) {
        goto label_4;
    }
    o1 = l1;
    do {
        o2 = fp - 0x14;
        o3 = fp - 0x18;
        o0 = *(l0);
        o4 = fp - 0x1c;
        sym_add_fdes ();
        l0 += 4;
        o0 = *(l0);
        o1 = l1;
    } while (o0 != 0);
    local_16 = fp - 0x18;
    o1 = *(local_16);
    goto label_4;
label_3:
    local_17 = i0 + 8;
    o0 = *(local_17);
    o1 = l1;
    o2 = fp - 0x14;
    o3 = fp - 0x18;
    o4 = fp - 0x1c;
    sym_add_fdes ();
    local_18 = fp - 0x18;
    o1 = *(local_18);
label_4:
    local_19 = i0 + 0xc;
    *(local_19) = l1;
    local_20 = fp - 0x1c;
    o0 = *(local_20);
    *(i0) = o1;
    local_21 = i0 + 4;
    *(local_21) = o0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10cf0 */
#include <stdint.h>
 
void add_fdes () {
    l0 = *(i2);
    l2 = *(i3);
    o0 = *(i0);
    l1 = *(i4);
    if (o0 == 0) {
        goto label_0;
    }
    do {
        local_0 = i0 + 4;
        o0 = *(local_0);
        o0 = *(i0);
        if (o0 != 0) {
            local_1 = i0 + 8;
            o0 = *(local_1);
            o1 = l0;
            if (o0 != 0) {
                o0 = i1;
                o2 = i0;
                sym_fde_insert ();
                local_2 = i0 + 8;
                o1 = *(local_2);
                l0++;
                __asm ("bcc 0x10d4c");
                l2 = o1;
                local_3 = i0 + 0xc;
                o0 = *(local_3);
                o0 = o1 + o0;
                l1 = o0;
                if (o0 > l1) {
                    goto label_1;
                }
            }
label_1:
            o0 = *(i0);
        }
        o0 = i0 + o0;
        local_4 = o0 + 4;
        o1 = *(local_4);
        i0 = o0 + 4;
    } while (o1 != 0);
label_0:
    *(i2) = l0;
    *(i3) = l2;
    *(i4) = l1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x10e9c */
#include <stdint.h>
 
void find_fde () {
    l7 = 0x10800;
    0x10ea8 ();
    l7 |= 0x154;
    l7 += o7;
    o0 = 0x18;
    local_0 = l7 + o0;
    o0 = *(local_0);
    l0 = *(o0);
    l1 = i0;
    if (l0 == 0) {
        goto label_0;
    }
    o0 = *(l0);
    do {
        if (l1 == o0) {
            o0 = l0;
            sym_frame_init ();
            o0 = *(l0);
        }
        local_1 = l0 + 0x14;
        l0 = *(local_1);
        __asm ("bcs,a 0x10f08");
        local_2 = l0 + 4;
        o0 = *(local_2);
        __asm ("bcs 0x10f18");
        local_3 = l0 + 0x14;
        l0 = *(local_3);
        o0 = *(l0);
    } while (l0 != 0);
label_0:
    i0 = 0;
    if (l0 == 0) {
        goto label_1;
    }
    local_4 = l0 + 0x10;
    o4 = *(local_4);
    o3 = 0;
    o0 = o3 + o4;
    __asm ("bcc 0x10f7c");
    local_5 = l0 + 0xc;
    o5 = *(local_5);
    do {
        o2 = o0 >> 1;
        o0 = o2 << 2;
        local_6 = o5 + o0;
        i0 = *(local_6);
        local_7 = i0 + 8;
        o1 = *(local_7);
        local_8 = i0 + 0xc;
        o0 = *(local_8);
        __asm ("bcc,a 0x10f5c");
        o4 = o2;
        goto label_2;
        o0 = o1 + o0;
        o3 = o2 + 1;
        if (l1 <= o0) {
            goto label_1;
        }
label_2:
        o0 = o3 + o4;
        __asm ("bcs 0x10f38");
    } while (1);
    i0 = 0;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x116e4 */
#include <stdint.h>
 
void init_dummy_1 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x218c8 */
#include <stdint.h>
 
void abort () {
    g1 = 0x2d000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x21880 */
#include <stdint.h>
 
void malloc () {
    g1 = 0x1b000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x218a4 */
#include <stdint.h>
 
void _umul () {
    g1 = 0x24000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x21874 */
#include <stdint.h>
 
void printf () {
    g1 = 0x18000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x2185c */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x218bc */
#include <stdint.h>
 
void free () {
    g1 = 0x2a000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x2188c */
#include <stdint.h>
 
void strcmp () {
    g1 = 0x1e000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x21868 */
#include <stdint.h>
 
void scanf () {
    g1 = 0x15000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x218d4 */
#include <stdint.h>
 
void memset () {
    g1 = 0x30000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x218b0 */
#include <stdint.h>
 
void memcpy () {
    g1 = 0x27000;
    void (*0x21814)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/branch/sparc_elf_from_boomerang/subject.exe @ 0x21898 */
#include <stdint.h>
 
void strlen () {
    g1 = 0x21000;
    void (*0x21814)() ();
}
