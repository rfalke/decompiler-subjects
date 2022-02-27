/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x118a8 */
#include <stdint.h>
 
void entry0 () {
    /* [09] -r-x section size 34484 named .text */
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
    o0 = 0x19f78;
    sym_imp_atexit ();
    sym_init ();
    o0 = l0;
    o1 = l1;
    o2 = l0 << 2;
    o2 += 4;
    o2 = l1 + o2;
    o3 = 0x2daac;
    *(o3) = o2;
    return main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a930 */
#include <stdint.h>
 
void atexit () {
    do {
        /* [14] -rwx section size 568 named .plt */
        g1 = 0xc000;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19f5c */
#include <stdint.h>
 
void init () {
    /* [10] -r-x section size 28 named .init */
    sym_frame_dummy ();
    sym_do_global_ctors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x119ec */
#include <stdint.h>
 
void frame_dummy () {
    l7 = 0x18eec;
    loc_gcc2_compiled_ ();
    o0 = 0x1c;
    local_0 = l7 + o0;
    o0 = *(local_0);
    o0 = 0x0;
    if (o0 != 0) {
        o0 |= 8;
        local_1 = l7 + o0;
        o0 = *(local_1);
        o1 = 0x4;
        local_2 = l7 + o1;
        o1 = *(local_2);
        fcn_0002a960 ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1191c */
#include <stdint.h>
 
void loc_gcc2_compiled_ () {
    l7 = o7 + l7;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a960 */
#include <stdint.h>
 
void fcn_0002a960 () {
    g1 = 0x18000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19efc */
#include <stdint.h>
 
void do_global_ctors_aux () {
    l7 = 0x109dc;
    loc_Letext ();
    o0 = 0x14;
    local_0 = l7 + o0;
    o0 = *(local_0);
    l0 = o0 - 4;
    local_1 = o0 - 4;
    o0 = *(local_1);
    if (o0 == -1) {
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
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14a04 */
#include <stdint.h>
 
int32_t main () {
    o1 = i1;
    o0 = i0;
    sym_f_setarg ();
    sym_f_setsig ();
    sym_f_init ();
    o0 = 0x14cac;
    sym_imp_atexit ();
    sym_MAIN_ ();
    return sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14a40 */
#include <stdint.h>
 
void f_setarg () {
    g2 = 0x2d800;
    g3 = 0x2d800;
    local_0 = g2 + 0x1fc;
    *(local_0) = o0;
    local_1 = g3 + 0x200;
    *(local_1) = o1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14afc */
#include <stdint.h>
 
void f_setsig () {
    o1 = 0x14a54;
    o0 = 8;
    sym_imp_signal ();
    o1 = 0x14a70;
    o0 = 6;
    sym_imp_signal ();
    o1 = 0x14ae0;
    o0 = 5;
    sym_imp_signal ();
    o1 = 0x14a8c;
    o0 = 3;
    sym_imp_signal ();
    o1 = 0x14800;
    if (o0 == 1) {
        o0 = 3;
        o1 = 1;
        sym_imp_signal ();
        o1 = 0x14aa8;
    }
    o0 = 2;
    sym_imp_signal ();
    o1 = 0x14800;
    if (o0 == 1) {
        o0 = 2;
        o1 = 1;
        sym_imp_signal ();
        o1 = 0x14ac4;
    }
    o0 = 0xf;
    sym_imp_signal ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x153f4 */
#include <stdint.h>
 
void f_init () {
    l3 = 0x2d800;
    local_0 = l3 + 0x29c;
    o0 = *(local_0);
    g0 = o0 & 2;
    o1 = 0x1a400;
    if (o0 != 2) {
        o1 |= 0x300;
        o0 = 0x83;
        sym_f_fatal ();
    }
    l1 = 0x2c3b8;
    l0 = 0x2c400;
    l2 = 1;
    local_1 = l0 + 0x33c;
    *(local_1) = l1;
    l0 |= 0x33c;
    o0 = l1;
    local_2 = l3 + 0x29c;
    *(local_2) = l2;
    sym_f_canseek ();
    local_3 = l0 + 0x14;
    *(local_3) = o0;
    local_4 = l0 + 0x18;
    *(local_4) = l2;
    local_5 = l0 + 0x28;
    *(local_5) = l2;
    l0 += 0xf0;
    o1 = l1 - 0x20;
    *(l0) = o1;
    o0 = o1;
    sym_f_canseek ();
    local_6 = l0 + 0x14;
    *(local_6) = o0;
    local_7 = l0 + 0x18;
    *(local_7) = l2;
    local_8 = l0 + 0x28;
    *(local_8) = g0;
    l0 += 0x30;
    l1 -= 0x10;
    o0 = l1;
    *(l0) = l1;
    sym_f_canseek ();
    local_9 = l0 + 0x28;
    *(local_9) = l2;
    local_10 = l0 + 0x14;
    *(local_10) = o0;
    local_11 = l0 + 0x18;
    *(local_11) = l2;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1516c */
#include <stdint.h>
 
void f_fatal () {
    o3 = i0;
    o2 = i1;
    if (o3 <= 0x63) {
        o0 = o2;
        sym_imp_perror ();
        o3 = 0x2ac00;
    } else {
        o0 = o3 + 1;
        o0 = 0x2c000;
        if (o0 > 0x85) {
            o1 = 0x1a400;
            o0 |= 0x3b8;
            o1 |= 0x190;
            sym_imp_fprintf ();
            o3 = 0x2ac00;
        } else {
            o1 = o3 - 0x64;
            if (o3 == -1) {
                o0 = 0x2c000;
                o1 = 0x1a400;
                o0 |= 0x3b8;
                o1 |= 0x1b0;
                sym_imp_fprintf ();
                o3 = 0x2ac00;
            } else {
                o0 = 0x2ad30;
                o1 <<= 2;
                local_0 = o0 + o1;
                o3 = *(local_0);
                o0 = 0x2c000;
                o1 = 0x1a400;
                o0 |= 0x3b8;
                o1 |= 0x1c8;
                sym_imp_fprintf ();
                o3 = 0x2ac00;
            }
        }
    }
    local_1 = o3 + 0x1b4;
    o0 = *(local_1);
    o0 = 0x2d800;
    if (o0 != 0) {
        o0 = 0x2c000;
        o1 = 0x1a5d0;
        o0 |= 0x3b8;
        sym_imp_fprintf ();
        sym_imp_abort ();
    }
    local_2 = o0 + 0x29c;
    o2 = *(local_2);
    o1 = 1;
    l1 = o0;
    g0 = o2 & 1;
    local_3 = o3 + 0x1b4;
    *(local_3) = o1;
    if (o2 != 1) {
        o0 = 0x2d800;
        local_4 = o0 + 0x290;
        o1 = *(local_4);
        i1 = o0;
        if (o1 != 0) {
            o0 = 0x2c73c;
            o0 = o1 - o0;
            o2 = o0 << 2;
            o2 += o0;
            o1 = o2 << 4;
            o2 += o1;
            o0 = o2 << 8;
            o2 += o0;
            o1 = o2 << 0x10;
            o2 += o1;
            l0 = 0x2c000;
            o2 = g0 - o2;
            i0 = l0 | 0x3b8;
            o1 = 0x1a600;
            o2 >>= 4;
            o0 = i0;
            sym_imp_fprintf ();
            local_5 = i1 + 0x290;
            o1 = *(local_5);
            local_6 = o1 + 4;
            o0 = *(local_6);
            o0 = 0x1a400;
            if (o0 != 0) {
                o3 = o0 | 0x220;
            } else {
                o0 = 0x1a400;
                o3 = o0 | 0x230;
                local_7 = i1 + 0x290;
                o1 = *(local_7);
            }
            o0 = i0;
            local_8 = o1 + 4;
            o2 = *(local_8);
            o1 = o3;
            sym_imp_fprintf ();
            o0 = 0x2d800;
        } else {
            l0 = 0x2c000;
            o1 = 0x1a640;
            o0 = l0 | 0x3b8;
            sym_imp_fprintf ();
            o0 = 0x2d800;
        }
        local_9 = o0 + 0x20c;
        o3 = *(local_9);
        o0 = 0x2d800;
        if (o3 != 0) {
            local_10 = o0 + 0x210;
            o2 = *(local_10);
            o1 = 0x1a660;
            o0 = l0 | 0x3b8;
            sym_imp_fprintf ();
        }
        o0 = 0x2d800;
        local_11 = o0 + 0x288;
        o2 = *(local_11);
        o1 = 0x1a400;
        g2 = o1 | 0x278;
        l0 |= 0x3b8;
        if (o2 != 0) {
            o0 = 0x1a400;
            o2 = o0 | 0x290;
        } else {
            o0 = 0x1a400;
            o2 = o0 | 0x298;
        }
        o0 = 0x2d800;
        local_12 = o0 + 0x284;
        o1 = *(local_12);
        o0 = 0x1a400;
        if (o1 != 0) {
            o3 = o0 | 0x2a0;
        } else {
            o0 = 0x1a400;
            o3 = o0 | 0x2b0;
        }
        o0 = 0x2d800;
        local_13 = o0 + 0x2b8;
        o1 = *(local_13);
        o0 = 0x1a400;
        if (o1 != 0) {
            o4 = o0 | 0x2b8;
        } else {
            o0 = 0x1a400;
            o4 = o0 | 0x2c8;
        }
        o0 = 0x2d800;
        local_14 = o0 + 0x2b4;
        o1 = *(local_14);
        o0 = 0x1a400;
        if (o1 != 0) {
            o5 = o0 | 0x2d8;
        } else {
            o0 = 0x1a400;
            o5 = o0 | 0x2e8;
        }
        o0 = l0;
        o1 = g2;
        sym_imp_fprintf ();
    }
    local_15 = l1 + 0x29c;
    o1 = *(local_15);
    o0 = 0x1a400;
    o1 &= -3;
    local_16 = l1 + 0x29c;
    *(local_16) = o1;
    o0 |= 0x2f8;
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x150bc */
#include <stdint.h>
 
void f_canseek () {
    o0 = i0;
    sym_imp_fileno ();
    o1 = fp - 0x98;
    sym_imp_fstat ();
    local_0 = fp - 0x84;
    o1 = *(local_0);
    if (o0 >= 0) {
        o0 = 0xf000;
        o1 &= o0;
        o0 = 0x4000;
        local_1 = fp - 0x80;
        o0 = *(local_1);
        if (o1 != o0) {
            o0 = 0x2000;
            if (o1 <= o0) {
                if (o1 == o0) {
                    goto label_0;
                }
                i0 = 0;
                goto label_1;
            }
            o0 = 0x6000;
            o0 = 0x8000;
            if (o1 == o0) {
                goto label_2;
            }
            i0 = 0;
            if (o1 != o0) {
                goto label_1;
            }
            local_2 = fp - 0x80;
            o0 = *(local_2);
        }
        i0 = g0 + 0;
        goto label_1;
label_0:
        o0 = i0;
        sym_imp_fileno ();
        sym_imp_isatty ();
        i0 = g0 + 1;
        goto label_1;
label_2:
        i0 = 1;
    } else {
        i0 = 0;
    }
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x11a40 */
#include <stdint.h>
 
void MAIN_ () {
    o1 = 0x2ac00;
    o0 = o1;
    sym_s_wsle ();
    o1 = 0x19c00;
    o0 = o1 | 0x3d8;
    o2 = 0x19c00;
    o1 = o2 | 0x3dc;
    o3 = 0x19c00;
    o2 = o3 | 0x398;
    o3 = 0xa;
    sym_do_lio ();
    sym_e_wsle ();
    o1 = 0x2ac00;
    o0 = o1 | 0x14;
    sym_s_rsle ();
    o2 = fp - 0x14;
    o1 = 0x19c00;
    o0 = o1 | 0x3e0;
    o3 = 0x19c00;
    o1 = o3 | 0x3dc;
    o3 = 4;
    sym_do_lio ();
    sym_e_rsle ();
    o1 = 0x11800;
    o0 = o1 | 0x324;
    local_0 = fp - 0x18;
    *(local_0) = o0;
    local_1 = fp - 0x14;
    o0 = *(local_1);
    if (o0 == 2) {
        o1 = 0x11800;
        o0 = o1 | 0x368;
        local_2 = fp - 0x18;
        *(local_2) = o0;
    }
    local_3 = fp - 0x14;
    o0 = *(local_3);
    if (o0 == 3) {
        o1 = 0x11800;
        o0 = o1 | 0x3ac;
        local_4 = fp - 0x18;
        *(local_4) = o0;
    }
    local_5 = fp - 0x14;
    o0 = *(local_5);
    if (o0 == 4) {
        o1 = 0x11800;
        o0 = o1 | 0x3f0;
        local_6 = fp - 0x18;
        *(local_6) = o0;
    }
    local_7 = fp - 0x18;
    o0 = *(local_7);
    __asm ("jmp o0");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a93c */
#include <stdint.h>
 
void exit () {
    g1 = 0xf000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1566c */
#include <stdint.h>
 
void err_fl () {
    o1 = i2;
    if (i0 == 0) {
        o0 = i1;
        sym_f_fatal ();
    }
    o0 = 0x2c400;
    local_0 = o0 + 0x31c;
    o0 = *(local_0);
    o0 = 0x2d800;
    if (o0 != 0) {
        o0 ();
        o0 = 0x2d800;
    }
    local_1 = o0 + 0x29c;
    o1 = *(local_1);
    o2 = 0x2c400;
    o1 &= -3;
    local_2 = o0 + 0x29c;
    *(local_2) = o1;
    local_3 = o2 + 0xf8;
    *(local_3) = i1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x147e4 */
#include <stdint.h>
 
void e_wsfe () {
    o1 = 1;
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    *(local_0) = o1;
    sym_en_fio ();
    o1 = 0x2d800;
    local_1 = o1 + 0x20c;
    *(local_1) = g0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16a74 */
#include <stdint.h>
 
void en_fio () {
    o0 = 1;
    local_0 = fp - 0x14;
    *(local_0) = o0;
    o0 = fp - 0x14;
    o1 = 0;
    o2 = 0;
    sym_do_fio ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x165a8 */
#include <stdint.h>
 
void do_fio () {
    o0 = *(i0);
    l2 = 0;
    i0 = 0;
    if (l2 >= o0) {
        goto label_2;
    }
label_0:
    o0 = 0x2c400;
    do {
label_1:
        local_0 = o0 + 0xf0;
        o2 = *(local_0);
        o1 = 0x2afb4;
        o2 <<= 4;
        l1 = o0;
        local_1 = o2 + o1;
        o0 = *(local_1);
        l0 = o2 + o1;
        sym_type ();
        o1 = o0 - 1;
        o0 = 0x16800;
        if (o1 <= 0x20) {
            o0 |= 0x1f0;
            o1 <<= 2;
            local_2 = o0 + o1;
            o2 = *(local_2);
            __asm ("jmp o2");
        }
        o1 = 0x2d800;
        local_3 = o1 + 0x210;
        o3 = *(local_3);
        o5 = 0x2d800;
        o2 = *(l0);
        o0 = 0x2c000;
        o1 = 0x1a400;
        local_4 = o5 + 0x20c;
        o4 = *(local_4);
        o0 |= 0x3b8;
        o1 |= 0x340;
        sym_imp_fprintf ();
        o1 = 0x2c400;
        local_5 = o1 + 0x324;
        o0 = *(local_5);
        o2 = *(o0);
        o2 = 0x2d800;
        if (o2 != 0) {
            local_6 = o2 + 0x29c;
            o0 = *(local_6);
            o3 = 0x2c400;
            o0 &= -3;
            o1 = 0x64;
            local_7 = o2 + 0x29c;
            *(local_7) = o0;
            local_8 = o3 + 0xf8;
            *(local_8) = o1;
        } else {
            o1 = 0x1a768;
            o0 = 0x64;
            sym_f_fatal ();
        }
        i0 = 0x64;
        goto label_2;
        o0 = 0x2c400;
        local_9 = o0 + 0x320;
        o1 = *(local_9);
        o0 = l0;
        o1 ();
        o1 = 0x2c400;
        if (o0 != 0) {
            goto label_3;
        }
        local_10 = l1 + 0xf0;
        o0 = *(local_10);
        o0++;
        local_11 = l1 + 0xf0;
        *(local_11) = o0;
        goto label_4;
        g2 = 0x2c400;
        local_12 = g2 + 0xdc;
        o3 = *(local_12);
        o0 = 0x2d800;
        o4 = o3 << 2;
        o5 = o0 | 0x228;
        local_13 = o5 + o4;
        o2 = *(local_13);
        if (i1 > 0) {
            goto label_5;
        }
        o0 = 0x2c400;
        local_14 = o0 + 0xf0;
        o1 = *(local_14);
        o2 = o3 - 1;
        o1++;
        local_15 = g2 + 0xdc;
        *(local_15) = o2;
        local_16 = o0 + 0xf0;
        *(local_16) = o1;
    } while (1);
label_5:
    o0 = 0x2d800;
    if (i1 == 0) {
        goto label_6;
    }
    local_17 = o0 + 0x294;
    o3 = *(local_17);
    o2--;
    local_18 = o5 + o4;
    *(local_18) = o2;
    o1 = 0x2d800;
    o0 = 1;
    local_19 = o1 + 0x27c;
    *(local_19) = o0;
    o0 = l0;
    o1 = i1;
    o2 = i2;
    o3 ();
    o3 = 0x2c400;
    if (o0 > 0) {
        o0 = 0x2c400;
        local_20 = o0 + 0x324;
        o1 = *(local_20);
        o0 = *(o1);
        o2 = 0x1a400;
        local_21 = o3 + 0xf8;
        o1 = *(local_21);
        o2 |= 0x370;
        sym_err_fl ();
        i0 = o0;
        goto label_2;
    }
    o0 = *(i0);
    if (o0 >= 0) {
        goto label_7;
    }
    o0 = 0x2c400;
    local_22 = o0 + 0x324;
    o1 = *(local_22);
    local_23 = o1 + 8;
    o2 = *(local_23);
    o2 = 0x2d800;
    if (o2 != 0) {
        local_24 = o2 + 0x29c;
        o0 = *(local_24);
        o3 = 0x2c400;
        o0 &= -3;
        o1 = -1;
        local_25 = o2 + 0x29c;
        *(local_25) = o0;
        local_26 = o3 + 0xf8;
        *(local_26) = o1;
    } else {
        o1 = 0x1a770;
        o0 = -1;
        sym_f_fatal ();
    }
    i0 = -1;
    goto label_2;
    g2 = 0x2c400;
    local_27 = g2 + 0xdc;
    o3 = *(local_27);
    o5 = 0x2c400;
    local_28 = o5 + 0xf0;
    o2 = *(local_28);
    o3++;
    local_29 = l0 + 4;
    o4 = *(local_29);
    o0 = 0x2da28;
    o1 = o3 << 2;
    local_30 = o0 + o1;
    *(local_30) = o4;
    o2++;
    local_31 = o5 + 0xf0;
    *(local_31) = o2;
    local_32 = g2 + 0xdc;
    *(local_32) = o3;
    goto label_0;
    g2 = 0x2c400;
    local_33 = g2 + 0xf4;
    o3 = *(local_33);
    o5 = 0x2c400;
    local_34 = o5 + 0xf0;
    o2 = *(local_34);
    o3++;
    local_35 = l0 + 4;
    o4 = *(local_35);
    o0 = 0x2da50;
    o1 = o3 << 2;
    local_36 = o0 + o1;
    *(local_36) = o4;
    o2++;
    local_37 = o5 + 0xf0;
    *(local_37) = o2;
    local_38 = g2 + 0xf4;
    *(local_38) = o3;
    goto label_0;
    g2 = 0x2c400;
    local_39 = g2 + 0xdc;
    o5 = *(local_39);
    o0 = 0x2da28;
    o2 = o5 << 2;
    local_40 = o0 + o2;
    o1 = *(local_40);
    o1--;
    local_41 = o2 + o0;
    *(local_41) = o1;
    if (o1 <= 0) {
        o3 = 0x2c400;
        o4 = 0x2c400;
        local_42 = o3 + 0xf4;
        o1 = *(local_42);
        o2 = o5 - 1;
        local_43 = o4 + 0xf0;
        o0 = *(local_43);
        o1--;
        o0++;
        local_44 = g2 + 0xdc;
        *(local_44) = o2;
        local_45 = o3 + 0xf4;
        *(local_45) = o1;
        local_46 = o4 + 0xf0;
        *(local_46) = o0;
        goto label_0;
    }
    o5 = 0x2c400;
    local_47 = o5 + 0xf4;
    o3 = *(local_47);
    o0 = 0x2d800;
    o1 = o3 << 2;
    o0 |= 0x250;
    local_48 = o0 + o1;
    o2 = *(local_48);
    o4 = 0x2c400;
    o2++;
    o3--;
    local_49 = o4 + 0xf0;
    *(local_49) = o2;
    local_50 = o5 + 0xf4;
    *(local_50) = o3;
    goto label_0;
    local_51 = l0 + 4;
    o0 = *(local_51);
    o2 = 0x2c400;
    o1 = 0x2c400;
    local_52 = l1 + 0xf0;
    *(local_52) = o0;
    local_53 = o1 + 0xdc;
    *(local_53) = g0;
    local_54 = o2 + 0xf4;
    *(local_54) = g0;
    if (i1 == 0) {
        goto label_6;
    }
    o0 = 0x2d800;
    local_55 = o0 + 0x27c;
    o1 = *(local_55);
    o1 = 0x2d800;
    if (o1 == 0) {
        goto label_8;
    }
    local_56 = o1 + 0x278;
    o0 = *(local_56);
    o0 ();
    o0 = 0x2c400;
    if (o0 == 0) {
        goto label_1;
    }
    i0 = o0;
    goto label_2;
    o1 = 0x2c400;
    if (i1 == 0) {
label_6:
        o1 = 0x2c400;
        local_57 = o1 + 0x31c;
        o0 = *(local_57);
        o0 ();
        i0 = o0;
        goto label_2;
    }
label_3:
    local_58 = o1 + 0xf0;
    o0 = *(local_58);
    o0++;
    local_59 = o1 + 0xf0;
    *(local_59) = o0;
    goto label_0;
    o3 = 0x2c400;
    local_60 = o3 + 0xf0;
    o1 = *(local_60);
    o2 = 0x2d800;
    o1++;
    o0 = 1;
    local_61 = o2 + 0x2a0;
    *(local_61) = o0;
    local_62 = o3 + 0xf0;
    *(local_62) = o1;
    goto label_0;
    o0 = 0x2c400;
    local_63 = o0 + 0xf0;
    o1 = *(local_63);
    o2 = 0x2c400;
    o1++;
    local_64 = o0 + 0xf0;
    *(local_64) = o1;
    local_65 = o2 + 0x10c;
    *(local_65) = g0;
    goto label_1;
    o3 = 0x2c400;
    local_66 = o3 + 0xf0;
    o1 = *(local_66);
    o2 = 0x2c400;
    o1++;
    o0 = 1;
    local_67 = o2 + 0x10c;
    *(local_67) = o0;
    local_68 = o3 + 0xf0;
    *(local_68) = o1;
    goto label_0;
    o3 = 0x2c400;
    local_69 = o3 + 0xf0;
    o0 = *(local_69);
    o2 = 0x2c400;
    local_70 = l0 + 4;
    o1 = *(local_70);
    o0++;
    local_71 = o2 + 0x338;
    *(local_71) = o1;
    local_72 = o3 + 0xf0;
    *(local_72) = o0;
    goto label_0;
    o0 = 0x2c400;
    local_73 = o0 + 0xf0;
    o1 = *(local_73);
    o2 = 0x2d800;
    o1++;
    local_74 = o0 + 0xf0;
    *(local_74) = o1;
    local_75 = o2 + 0x204;
    *(local_75) = g0;
    goto label_1;
    o3 = 0x2c400;
    local_76 = o3 + 0xf0;
    o1 = *(local_76);
    o2 = 0x2d800;
    o1++;
    o0 = 1;
    local_77 = o2 + 0x204;
    *(local_77) = o0;
    local_78 = o3 + 0xf0;
    *(local_78) = o1;
    goto label_0;
label_4:
    o0 = *(i0);
label_7:
    l2++;
    i1 += i2;
    if (l2 < o0) {
        goto label_0;
    }
label_8:
    i0 = 0;
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x164b4 */
#include <stdint.h>
 
void type_f () {
    o1 = o0;
    g3 = o1 - 1;
    g2 = 0x16400;
    if (g3 <= 0x23) {
        g2 |= 0x118;
        g3 <<= 2;
        local_0 = g2 + g3;
        o0 = *(local_0);
        __asm ("jmp o0");
    }
    o0 = o1;
    goto label_0;
    o0 = 1;
    goto label_0;
    o0 = 2;
    goto label_0;
    o0 = 3;
    goto label_0;
    o0 = 6;
    goto label_0;
    o0 = 9;
    goto label_0;
    o0 = 8;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aaec */
#include <stdint.h>
 
void fprintf () {
    g1 = 0x7b000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x13034 */
#include <stdint.h>
 
void c_le () {
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    o1 = *(local_0);
    l0 = o0;
    if (o1 != 1) {
        sym_f_init ();
    }
    local_1 = i0 + 4;
    o5 = *(local_1);
    o1 = 0x2c400;
    o0 = o5 << 1;
    o0 += o5;
    o1 |= 0x33c;
    o0 <<= 4;
    o0 += o1;
    o2 = 0x1a000;
    g2 = 0x2d800;
    o2 |= 0xd0;
    g3 = 3;
    o3 = 0x2d800;
    o4 = 0x2d800;
    o1 = 7;
    l1 = g2;
    local_2 = o3 + 0x20c;
    *(local_2) = o2;
    local_3 = o4 + 0x210;
    *(local_3) = o1;
    local_4 = l0 + 0x29c;
    *(local_4) = g3;
    local_5 = g2 + 0x290;
    *(local_5) = o0;
    if (o5 > 0x63) {
        o0 = *(i0);
        o0 = 1;
        if (o0 != 0) {
            o2 = 0x2c400;
            o1 = 0x65;
            local_6 = l0 + 0x29c;
            *(local_6) = o0;
            local_7 = o2 + 0xf8;
            *(local_7) = o1;
        } else {
            o1 = 0x1a0d8;
            o0 = 0x65;
            sym_f_fatal ();
        }
        i0 = 0x65;
    } else {
        local_8 = l1 + 0x290;
        o0 = *(local_8);
        o2 = 0x2c400;
        o3 = *(o0);
        o1 = 0x2d800;
        o0 = 0x2c400;
        local_9 = o1 + 0x21c;
        *(local_9) = g0;
        local_10 = o2 + 0x338;
        *(local_10) = g0;
        local_11 = o0 + 0x324;
        *(local_11) = i0;
        if (o3 == 0) {
            local_12 = i0 + 4;
            o2 = *(local_12);
            o0 = 3;
            o1 = 5;
            sym_fk_open ();
            local_13 = l1 + 0x290;
            o0 = *(local_13);
            if (o0 != 0) {
                o0 = *(i0);
                local_14 = l0 + 0x29c;
                o0 = *(local_14);
                if (o0 != 0) {
                    o2 = 0x2c400;
                    o0 &= -3;
                    o1 = 0x66;
                    local_15 = l0 + 0x29c;
                    *(local_15) = o0;
                    local_16 = o2 + 0xf8;
                    *(local_16) = o1;
                } else {
                    o1 = 0x1a0e0;
                    o0 = 0x66;
                    sym_f_fatal ();
                }
                i0 = 0x66;
            } else {
                local_17 = l1 + 0x290;
                o0 = *(local_17);
            }
            o3 = 0x2c400;
            local_18 = o0 + 0x18;
            o1 = *(local_18);
            o2 = *(o0);
            local_19 = o3 + 0xd8;
            *(local_19) = o2;
            if (o1 == 0) {
                o0 = *(i0);
                local_20 = l0 + 0x29c;
                o0 = *(local_20);
                if (o0 != 0) {
                    o2 = 0x2c400;
                    o0 &= -3;
                    o1 = 0x67;
                    local_21 = l0 + 0x29c;
                    *(local_21) = o0;
                    local_22 = o2 + 0xf8;
                    *(local_22) = o1;
                } else {
                    o1 = 0x1a0e0;
                    o0 = 0x67;
                    sym_f_fatal ();
                }
                i0 = 0x67;
            } else {
                i0 = 0;
            }
        }
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x13708 */
#include <stdint.h>
 
void s_rsle () {
    o1 = 1;
    o0 = 0x2d800;
    o2 = 0x2d800;
    o3 = 0x2d800;
    local_0 = o0 + 0x2b8;
    *(local_0) = o1;
    local_1 = o2 + 0x288;
    *(local_1) = o1;
    local_2 = o3 + 0x2b4;
    *(local_2) = o1;
    o0 = i0;
    sym_c_le ();
    o0 = 0x2d800;
    if (o0 != 0) {
        i0 = o0;
    } else {
        local_3 = o0 + 0x290;
        g2 = *(local_3);
        l0 = o0;
        local_4 = g2 + 0x28;
        o5 = *(local_4);
        o1 = 0x131d0;
        o0 = 0x2c400;
        o2 = 0x2c400;
        o3 = 0x2d800;
        o4 = 0x2c400;
        local_5 = o0 + 0x100;
        *(local_5) = o1;
        local_6 = o2 + 0x330;
        *(local_6) = g0;
        local_7 = o3 + 0x218;
        *(local_7) = g0;
        local_8 = o4 + 0xfc;
        *(local_8) = g0;
        if (o5 != 0) {
            o0 = g2;
            sym_f_nowreading ();
            local_9 = l0 + 0x290;
            o0 = *(local_9);
            if (o0 != 0) {
                o0 = *(i0);
                o3 = 0x2d800;
                if (o0 != 0) {
                    local_10 = o3 + 0x29c;
                    o0 = *(local_10);
                    o1 = 0x2c400;
                    o0 &= -3;
                    l0 = o1;
                    local_11 = o3 + 0x29c;
                    *(local_11) = o0;
                } else {
                    l0 = 0x2c400;
                    o1 = 0x1a000;
                    local_12 = l0 + 0xf8;
                    o0 = *(local_12);
                    o1 |= 0xf0;
                    sym_f_fatal ();
                }
                local_13 = l0 + 0xf8;
                i0 = *(local_13);
            } else {
                local_14 = l0 + 0x290;
                o0 = *(local_14);
            }
            local_15 = o0 + 0x24;
            o1 = *(local_15);
            o0 = 0x2c400;
            if (o1 != 0) {
                local_16 = o0 + 0x324;
                o1 = *(local_16);
                local_17 = o1 + 8;
                o2 = *(local_17);
                o2 = 0x2d800;
                if (o2 != 0) {
                    local_18 = o2 + 0x29c;
                    o0 = *(local_18);
                    o3 = 0x2c400;
                    o0 &= -3;
                    o1 = -1;
                    local_19 = o2 + 0x29c;
                    *(local_19) = o0;
                    local_20 = o3 + 0xf8;
                    *(local_20) = o1;
                } else {
                    o1 = 0x1a0f0;
                    o0 = -1;
                    sym_f_fatal ();
                }
                i0 = -1;
            } else {
                o0 = 0x11c00;
                o1 = 0x2a800;
                o2 = 0x14000;
                o0 |= 0x64;
                o1 |= 0x1cc;
                o2 |= 0x28c;
                o3 = 0x2d800;
                o4 = 0x2d800;
                o5 = 0x2c400;
                local_21 = o3 + 0x280;
                *(local_21) = o0;
                local_22 = o4 + 0x224;
                *(local_22) = o1;
                local_23 = o5 + 0x31c;
                *(local_23) = o2;
                i0 = 0;
            }
        }
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x13a1c */
#include <stdint.h>
 
void x_putc () {
    o0 = 0x2ac00;
    local_0 = o0 + 0x12c;
    o1 = *(local_0);
    l0 = 0x2d800;
    local_1 = l0 + 0x21c;
    o0 = *(local_1);
    o0 = 0x2ac00;
    if (o0 >= o1) {
        loc_Letext ();
        o0 = 0x2ac00;
    }
    local_2 = l0 + 0x21c;
    o1 = *(local_2);
    local_3 = o0 + 0x128;
    o2 = *(local_3);
    local_4 = o2 + o1;
    *(local_4) = i0;
    o1++;
    local_5 = l0 + 0x21c;
    *(local_5) = o1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x13870 */
#include <stdint.h>
 
void loc_Letext_1 () {
    o0 = 0x2ac00;
    o1 = 0x2ac00;
    l1 = o1;
    local_0 = o0 + 0x128;
    o2 = *(local_0);
    o1 |= 0x218;
    l0 = o0;
    o1 = 0x2ac00;
    if (o2 == o1) {
        o0 = 0x400;
        local_1 = o1 + 0x12c;
        *(local_1) = o0;
    }
    local_2 = o1 + 0x12c;
    o0 = *(local_2);
    o2 = o1;
    if (o0 > i0) {
        goto label_0;
    }
    o0 <<= 1;
    do {
        o0 <<= 1;
    } while (o0 <= i0);
    local_3 = o2 + 0x12c;
    *(local_3) = o0;
label_0:
    local_4 = o1 + 0x12c;
    o0 = *(local_4);
    sym_imp_malloc ();
    i0 = o0;
    local_5 = l0 + 0x128;
    o1 = *(local_5);
    if (o0 == 0) {
        o1 = 0x1a118;
        o0 = 0x71;
        sym_f_fatal ();
        local_6 = l0 + 0x128;
        o1 = *(local_6);
    }
    i1 = o1 + i1;
    o2 = i0;
    __asm ("bcc 0x13914");
    do {
        o0 = *(o1);
        o1++;
        *(o2) = o0;
        o2++;
        __asm ("bcs 0x138fc");
    } while (1);
    local_7 = l0 + 0x128;
    o2 = *(local_7);
    o0 = l1 | 0x218;
    local_8 = l0 + 0x128;
    *(local_8) = i0;
    if (o2 != o0) {
        o0 = o2;
        sym_imp_free ();
        local_9 = l0 + 0x128;
        *(local_9) = i0;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19f78 */
#include <stdint.h>
 
void fini () {
    /* [11] -r-x section size 20 named .fini */
    sym_do_global_dtors_aux ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x11924 */
#include <stdint.h>
 
void do_global_dtors_aux () {
    l7 = 0x18fb4;
    loc_gcc2_compiled_ ();
    o0 = 0xc;
    local_0 = l7 + o0;
    o0 = *(local_0);
    o0 = *(o0);
    o0 = 0x0;
    if (o0 != 0) {
        goto label_0;
    }
    o0 |= 0x10;
    local_1 = l7 + o0;
    o0 = *(local_1);
    o0 = *(o0);
    o0 = *(o0);
    o0 = 0x0;
    if (o0 == 0) {
        goto label_1;
    }
    o0 |= 0x10;
    local_2 = l7 + o0;
    l0 = *(local_2);
    o0 = *(l0);
    do {
        o0 += 4;
        *(l0) = o0;
        local_3 = o0 - 4;
        o0 = *(local_3);
        o0 ();
        o0 = *(l0);
        o0 = *(o0);
        o0 = *(l0);
    } while (o0 != 0);
label_1:
    o0 = 0x18;
    local_4 = l7 + o0;
    o0 = *(local_4);
    o0 = 0x0;
    if (o0 != 0) {
        o0 |= 8;
        local_5 = l7 + o0;
        o0 = *(local_5);
        fcn_0002a954 ();
    }
    o0 = 0xc;
    local_6 = l7 + o0;
    o1 = *(local_6);
    o0 = 1;
    *(o1) = o0;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x15564 */
#include <stdint.h>
 
void f_nowwriting () {
    local_0 = i0 + 0x1c;
    o0 = *(local_0);
    g0 = o0 & 2;
    o0 = 1;
    if (o0 == 2) {
        local_1 = i0 + 4;
        o3 = *(local_1);
        o1 = 0x2c400;
        if (o3 != 0) {
            local_2 = i0 + 0x10;
            o0 = *(local_2);
            l0 = 0;
            if (o0 == 0) {
                local_3 = i0 + 0x18;
                l0 = *(local_3);
            }
            local_4 = i0 + 0x28;
            o0 = *(local_4);
            o0 = *(i0);
            if (o0 == 3) {
                o0 = 0x2ad18;
                o2 = l0 << 2;
                local_5 = o0 + o2;
                o1 = *(local_5);
                l0 = 0x2c400;
                o2 = *(i0);
                o0 = o3;
                sym_imp_freopen ();
                *(i0) = o0;
                local_6 = l0 + 0xd8;
                *(local_6) = o0;
                if (o0 == 0) {
                    goto label_0;
                }
                o0 = 2;
                local_7 = i0 + 0x1c;
                *(local_7) = o0;
                goto label_1;
            }
            l0 |= 2;
            sym_imp_ftell ();
            l1 = o0;
            o0 = 0x2ad18;
            o2 = l0 << 2;
            local_8 = o0 + o2;
            o1 = *(local_8);
            l0 = 0x2c400;
            local_9 = i0 + 4;
            o0 = *(local_9);
            o2 = *(i0);
            sym_imp_freopen ();
            o1 = o0;
            *(i0) = o1;
            local_10 = l0 + 0xd8;
            *(local_10) = o1;
            if (o1 != 0) {
                goto label_2;
            }
            *(i0) = g0;
label_0:
            o1 = 0x2c400;
        }
        o0 = 0x7f;
        local_11 = o1 + 0xf8;
        *(local_11) = o0;
        i0 = 1;
        goto label_3;
label_2:
        o0 = 3;
        local_12 = i0 + 0x1c;
        *(local_12) = o0;
        o0 = o1;
        o1 = l1;
        o2 = 0;
        sym_imp_fseek ();
label_1:
        o0 = 1;
    }
    local_13 = i0 + 0x28;
    *(local_13) = o0;
    i0 = 0;
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14808 */
#include <stdint.h>
 
void g_char () {
    o3 = o2 + o1;
    o1 = o0 + o1;
    do {
        o1--;
        if (o1 <= o0) {
            *(o2) = g0;
            goto label_0;
        }
        g2 = *(o1);
        o3--;
    } while (g2 == 0x20);
    *(o3) = g0;
    o3--;
    do {
        g2 = *(o1);
        g3 = o1;
        *(o3) = g2;
        o3--;
        o1--;
    } while (g3 > o0);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x163ec */
#include <stdint.h>
 
void pars_f () {
    o1 = 0x2d800;
    o0 = 0x2c400;
    o2 = 0x2d800;
    local_0 = o0 + 0xf0;
    *(local_0) = g0;
    local_1 = o1 + 0x220;
    *(local_1) = g0;
    local_2 = o2 + 0x28c;
    *(local_2) = g0;
    o0 = i0;
    o1 = 0;
    sym_f_s ();
    o1 = o0 - i0;
    if (o0 != 0) {
        goto label_0;
    }
    o0 = 0x2d800;
    o2 = 0;
    local_3 = o0 + 0x210;
    *(local_3) = g0;
    o3 = o0;
    while (o4 <= 0x29) {
        o2++;
        if (o1 != 0x28) {
        }
        o0++;
        local_4 = o3 + 0x210;
        *(local_4) = o0;
        i0++;
        o1 = *(i0);
        o4 = *(i0);
        if (o1 == 0x29) {
            o2--;
            if (o4 <= 0x29) {
                goto label_1;
            }
        }
        if (o4 == 0x29) {
            goto label_1;
        }
        local_5 = o3 + 0x210;
        o0 = *(local_5);
    }
label_1:
    i0 = -1;
    if (o4 == 0x29) {
        local_6 = o3 + 0x210;
        o0 = *(local_6);
        o0++;
        local_7 = o3 + 0x210;
        *(local_7) = o0;
        goto label_2;
label_0:
        o0 = 0x2d800;
        local_8 = o0 + 0x210;
        *(local_8) = o1;
        i0 = 0;
    }
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18314 */
#include <stdint.h>
 
void rd_ned () {
    o0 = *(i0);
    o1 = o0 - 4;
    o0 = 0x18400;
    if (o1 <= 0xb) {
        o0 |= 0x1c;
        o1 <<= 2;
        local_0 = o0 + o1;
        o2 = *(local_0);
        __asm ("jmp o2");
    }
    o0 = 0x2c000;
    o1 = 0x1a400;
    o2 = *(i0);
    o1 |= 0x3e8;
    o0 |= 0x3b8;
    sym_imp_fprintf ();
    o1 = 0x2d800;
    local_1 = o1 + 0x20c;
    o0 = *(local_1);
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x195bc */
#include <stdint.h>
 
void sig_die () {
    o0 = 0x2c000;
    l0 = o0 | 0x3b8;
    o1 = 0x1a898;
    o2 = i0;
    o0 = l0;
    sym_imp_fprintf ();
    if (i1 != 0) {
        o0 = l0;
        sym_imp_fflush ();
        sym_f_exit ();
        o0 = l0;
        sym_imp_fflush ();
        o1 = 0;
        o0 = 6;
        sym_imp_signal ();
        sym_imp_abort ();
    }
    return sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa74 */
#include <stdint.h>
 
void fflush () {
    g1 = 0x5d000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14cac */
#include <stdint.h>
 
void f_exit () {
    o3 = 0x2d800;
    local_0 = o3 + 0x29c;
    o0 = *(local_0);
    g0 = o0 & 1;
    o2 = 0x2ac00;
    if (o0 == 1) {
        goto label_0;
    }
    local_1 = o2 + 0x3a8;
    o1 = *(local_1);
    o0 &= -3;
    o4 = o2 | 0x3a8;
    local_2 = o3 + 0x29c;
    *(local_2) = o0;
    if (o1 != 0) {
        goto label_0;
    }
    o0 = 1;
    local_3 = o2 + 0x3a8;
    *(local_3) = o0;
    l1 = o4;
    local_4 = o4 + 8;
    *(local_4) = g0;
    l0 = 0;
    local_5 = l1 + 4;
    *(local_5) = l0;
    do {
        o0 = l1;
        sym_f_clos ();
        l0++;
        local_6 = l1 + 4;
        *(local_6) = l0;
    } while (l0 <= 0x63);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa5c */
#include <stdint.h>
 
void signal () {
    g1 = 0x57000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aaf8 */
#include <stdint.h>
 
void abort () {
    g1 = 0x7e000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x17f80 */
#include <stdint.h>
 
void rd_POS () {
    o0 = *(i0);
    i0++;
    o1 = *(i0);
    o0 <<= 0x18;
    if (o1 == 0) {
        goto label_1;
    }
    l0 = o0;
    o0 >>= 0x18;
    while (o1 != o0) {
label_0:
        local_0 = o1 + 0x298;
        o0 = *(local_0);
        o0 ();
        if (o0 < 0xa) {
            i0 = o0;
            goto label_2;
        }
        o0 = 0x20;
        if (o0 != 0xa) {
        }
        *(i0) = o0;
        i0++;
        o1 = *(i0);
        o0 = l0 >> 0x18;
        if (o1 == 0) {
            goto label_1;
        }
        o1 = 0x2d800;
    }
    local_1 = i0 + 1;
    o0 = *(local_1);
    o1 = 0x2d800;
    if (o0 == o1) {
        goto label_0;
    }
label_1:
    i0 = 1;
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x17f18 */
#include <stdint.h>
 
void rd_H () {
    l0 = 0;
    i0 = 1;
    if (l0 >= i0) {
        goto label_0;
    }
    l1 = 0x2d800;
    do {
        local_0 = l1 + 0x298;
        o0 = *(local_0);
        o0 ();
        o1 = i1;
        if (o0 < 0) {
            i0 = o0;
            goto label_0;
        }
        i1 = o1 + 1;
        o2 = 0x20;
        if (o0 != 0xa) {
            o2 = o0;
        }
        l0++;
        *(o1) = o2;
    } while (l0 < i0);
    i0 = 1;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14d60 */
#include <stdint.h>
 
void f_end () {
    l0 = 0x2d800;
    local_0 = l0 + 0x29c;
    o0 = *(local_0);
    g0 = o0 & 2;
    o1 = 0x1a000;
    if (o0 != 2) {
        o1 |= 0x220;
        o0 = 0x83;
        sym_f_fatal ();
    }
    local_1 = i0 + 4;
    o0 = *(local_1);
    o3 = o0;
    if (o0 > 0x63) {
        o0 = *(i0);
        local_2 = l0 + 0x29c;
        o0 = *(local_2);
        if (o0 != 0) {
            o2 = 0x2c400;
            o0 &= -3;
            o1 = 0x65;
            local_3 = l0 + 0x29c;
            *(local_3) = o0;
            local_4 = o2 + 0xf8;
            *(local_4) = o1;
        } else {
            o1 = 0x1a230;
            o0 = 0x65;
            sym_f_fatal ();
        }
        i0 = 0x65;
    } else {
        o0 = o3 << 1;
        o0 += o3;
        o1 = 0x2c400;
        o0 <<= 4;
        o1 |= 0x33c;
        local_5 = o0 + o1;
        o2 = *(local_5);
        o4 = o0 + o1;
        if (o2 == 0) {
            l0 = fp - 0x20;
            o1 = 0x1a000;
            o2 = o3;
            o1 |= 0x238;
            o0 = l0;
            sym_imp_sprintf ();
            o2 = 0x2ac00;
            local_6 = o2 + 0x118;
            o1 = *(local_6);
            o0 = l0;
            sym_imp_fopen ();
            i0 = 0;
            if (o0 == 0) {
                goto label_0;
            }
            o7 += 0x2c;
            sym_imp_fclose ();
        }
        local_7 = o4 + 0x14;
        o1 = *(local_7);
        o0 = 1;
        local_8 = o4 + 0x24;
        *(local_8) = o0;
        if (o1 != 0) {
            o0 = i0;
            sym_t_runc ();
            i0 = o0;
        } else {
            o0 = 0;
            i0 = o0;
        }
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14b98 */
#include <stdint.h>
 
void f_clos () {
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    o1 = *(local_0);
    g0 = o1 & 2;
    o1 = 0x1a000;
    if (o1 != 2) {
        o1 |= 0x210;
        o0 = 0x83;
        sym_f_fatal ();
    }
    local_1 = i0 + 4;
    o1 = *(local_1);
    o0 = o1 << 1;
    if (o1 <= 0x63) {
        o0 += o1;
        o1 = 0x2c400;
        o0 <<= 4;
        o1 |= 0x33c;
        local_2 = o0 + o1;
        o2 = *(local_2);
        l0 = o0 + o1;
        if (o2 != 0) {
            local_3 = l0 + 0x2c;
            o0 = *(local_3);
            if (o0 != 1) {
                local_4 = i0 + 8;
                o0 = *(local_4);
                local_5 = l0 + 0x28;
                o0 = *(local_5);
                if (o0 != 0) {
                    o0 = *(o0);
                    local_6 = l0 + 0x28;
                    o0 = *(local_6);
                    if (o0 == 0x4b) {
                        goto label_0;
                    }
                    if (o0 <= 0x64) {
                    }
                    if (o0 == 0x44) {
                        goto label_1;
                    }
                    local_7 = l0 + 0x28;
                    o0 = *(local_7);
                }
label_0:
                local_8 = l0 + 4;
                o0 = *(local_8);
                if (o0 == 1) {
                    o0 = i0;
                    sym_t_runc ();
                    local_9 = l0 + 4;
                    o0 = *(local_9);
                }
                *(l0) = g0;
                if (o0 == 0) {
                    goto label_2;
                }
                o0 = *(l0);
                sym_imp_fclose ();
                local_10 = l0 + 4;
                o0 = *(local_10);
                sym_imp_free ();
                *(l0) = g0;
            } else {
label_1:
                o0 = *(l0);
                sym_imp_fclose ();
                local_11 = l0 + 4;
                o0 = *(local_11);
                *(l0) = g0;
                if (o0 == 0) {
                    goto label_2;
                }
                sym_imp_unlink ();
                local_12 = l0 + 4;
                o0 = *(local_12);
                sym_imp_free ();
                *(l0) = g0;
            }
        }
label_2:
        local_13 = l0 + 4;
        *(local_13) = g0;
        local_14 = l0 + 0x24;
        *(local_14) = g0;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x11cf8 */
#include <stdint.h>
 
void e_rsle () {
    o0 = 0x2d800;
    local_0 = o0 + 0x290;
    o1 = *(local_0);
    l2 = o0;
    local_1 = o1 + 0x24;
    o3 = *(local_1);
    o2 = 0x2d800;
    o0 = 1;
    local_2 = o2 + 0x29c;
    *(local_2) = o0;
    if (o3 != 0) {
        goto label_0;
    }
    l0 = 0x2c400;
    l1 = 0x2c400;
    i0 = 1;
    while (o0 != -1) {
        local_3 = l0 + 0xd8;
        o0 = *(local_3);
        if (o3 == 0) {
            local_4 = o0 + 0xc;
            o1 = *(local_4);
            g0 = o1 & 0x10;
            local_5 = l2 + 0x290;
            o0 = *(local_5);
            if (o1 != 0x10) {
                local_6 = l1 + 0xfc;
                *(local_6) = i0;
                local_7 = o0 + 0x24;
                *(local_7) = i0;
            }
            i0 = -1;
            goto label_1;
        }
        sym_t_getc ();
    }
label_0:
    i0 = 0;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1961c */
#include <stdint.h>
 
void f_icvt () {
    *(i3) = g0;
    if (i0 <= 0) {
        if (i0 == 0) {
            if (i0 > 0) {
                *(i3) = g0;
            }
        } else {
            *(i3) = g0;
            if (i0 < 0) {
                o0 = 1;
                i1 = g0 - i1;
                *(i3) = o0;
                i0 = g0 - i0;
            } else {
                o0 = 1;
                *(i2) = o0;
                i0 = 0x2c378;
                o0 = 0x30;
                local_0 = i0 + 0x16;
                *(local_0) = o0;
                i0 += 0x16;
                goto label_0;
            }
        }
    }
    l4 = 0x2c000;
    l3 = l4 | 0x378;
    i3 = 0x17;
    l2 = i4 >> 0x1f;
    l1 = i4;
    do {
        l0 = l2;
        o0 = i0;
        o1 = i1;
        o2 = l0;
        o3 = l1;
        sym_imp_urem64 ();
        o2 = o1 + 0x30;
        i3--;
        local_1 = l3 + i3;
        *(local_1) = o2;
        o0 = i0;
        o1 = i1;
        o2 = l0;
        o3 = l1;
        sym_imp_udiv64 ();
        i0 = o0;
        i1 = o1;
        g0 = i0 | i1;
        l1 = i4;
    } while (i0 != i1);
    o0 = 0x17;
    o0 -= i3;
    i0 = l4 | 0x378;
    *(i2) = o0;
    i0 = i3 + i0;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x15490 */
#include <stdint.h>
 
void f_nowreading () {
    local_0 = i0 + 0x1c;
    o0 = *(local_0);
    g0 = o0 & 1;
    local_1 = i0 + 0x28;
    *(local_1) = g0;
    if (o0 == 1) {
        local_2 = i0 + 4;
        o0 = *(local_2);
        o1 = 0x2c400;
        if (o0 != 0) {
            local_3 = i0 + 0x10;
            o0 = *(local_3);
            l0 = 0;
            if (o0 == 0) {
                local_4 = i0 + 0x18;
                l0 = *(local_4);
            }
            o0 = *(i0);
            l2 = 3;
            sym_imp_ftell ();
            l1 = o0;
            o2 = 0x2ac00;
            o0 = l0 | 2;
            o2 |= 0x118;
            o0 <<= 2;
            local_5 = o2 + o0;
            o1 = *(local_5);
            local_6 = i0 + 4;
            o0 = *(local_6);
            o2 = *(i0);
            sym_imp_freopen ();
            o0 = *(i0);
            if (o0 != 0) {
                goto label_0;
            }
            o0 = 0x2ad10;
            o2 = l0 << 2;
            local_7 = o0 + o2;
            o1 = *(local_7);
            l2 = 1;
            local_8 = i0 + 4;
            o0 = *(local_8);
            o2 = *(i0);
            sym_imp_freopen ();
            o0 = *(i0);
            if (o0 != 0) {
                goto label_0;
            }
            o1 = 0x2c400;
        }
        o0 = 0x7e;
        local_9 = o1 + 0xf8;
        *(local_9) = o0;
        i0 = 1;
        goto label_1;
label_0:
        o1 = l1;
        o2 = 0;
        sym_imp_fseek ();
        local_10 = i0 + 0x1c;
        *(local_10) = l2;
        local_11 = i0 + 0x28;
        *(local_11) = g0;
    }
    i0 = 0;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x13acc */
#include <stdint.h>
 
void f_open () {
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    o1 = *(local_0);
    l2 = o0;
    if (o1 != 1) {
        sym_f_init ();
    }
    local_1 = i0 + 4;
    o2 = *(local_1);
    o1 = 0x2d800;
    o0 = 1;
    local_2 = o1 + 0x2b4;
    *(local_2) = o0;
    if (o2 > 0x63) {
        o0 = *(i0);
        local_3 = l2 + 0x29c;
        o0 = *(local_3);
        if (o0 != 0) {
            o2 = 0x2c400;
            o0 &= -3;
            o1 = 0x65;
            local_4 = l2 + 0x29c;
            *(local_4) = o0;
            local_5 = o2 + 0xf8;
            *(local_5) = o1;
        } else {
            o1 = 0x1a128;
            o0 = 0x65;
            sym_f_fatal ();
        }
        i0 = 0x65;
        goto label_0;
    }
    local_6 = i0 + 4;
    o1 = *(local_6);
    o2 = 0x2c400;
    o0 = o1 << 1;
    o0 += o1;
    o0 <<= 4;
    o2 |= 0x33c;
    local_7 = o0 + o2;
    o3 = *(local_7);
    l1 = o0 + o2;
    o1 = 0x2d800;
    local_8 = o1 + 0x290;
    *(local_8) = l1;
    if (o3 == 0) {
        goto label_1;
    }
    local_9 = i0 + 8;
    o0 = *(local_9);
    l0 = fp - 0x110;
    if (o0 != 0) {
        goto label_2;
    }
    local_10 = i0 + 0x20;
    o0 = *(local_10);
    do {
        i0 = 0;
        if (o0 == 0) {
            goto label_0;
        }
        o0 = *(o0);
        o1 = 0;
        if (o0 != 0x7a) {
            local_11 = l1 + 0x20;
            *(local_11) = o1;
            if (o0 != 0x5a) {
                goto label_3;
            }
        }
        o1 = 1;
        local_12 = l1 + 0x20;
        *(local_12) = o1;
        goto label_3;
label_2:
        local_13 = i0 + 0xc;
        o1 = *(local_13);
        o2 = l0;
        sym_g_char ();
        o1 = fp - 0x124;
        o0 = l0;
        sym_f_inode ();
        local_14 = l1 + 8;
        o1 = *(local_14);
        local_15 = i0 + 4;
        o1 = *(local_15);
        if (o0 != o1) {
            goto label_4;
        }
        local_16 = fp - 0x124;
        o1 = *(local_16);
        local_17 = l1 + 0xc;
        o0 = *(local_17);
        local_18 = i0 + 0x20;
        o0 = *(local_18);
    } while (o1 == o0);
    local_19 = i0 + 4;
    o1 = *(local_19);
label_4:
    local_20 = fp - 0x118;
    *(local_20) = g0;
    o0 = *(i0);
label_1:
    local_21 = i0 + 0x1c;
    o0 = *(local_21);
    local_22 = l1 + 0x10;
    *(local_22) = o0;
    local_23 = i0 + 0x20;
    o0 = *(local_23);
    o1 = 0;
    if (o0 != 0) {
        o0 = *(o0);
        if (o0 != 0x5a) {
            local_24 = l1 + 0x20;
            *(local_24) = o1;
            if (o0 != 0x5a) {
                goto label_5;
            }
        }
        o1 = 1;
    }
    local_25 = l1 + 0x20;
    *(local_25) = o1;
label_5:
    local_26 = i0 + 0x18;
    o0 = *(local_26);
    o0 = *(o0);
    if (o0 == 0) {
        local_27 = l1 + 0x10;
        o0 = *(local_27);
        local_28 = l1 + 0x18;
        *(local_28) = g0;
        if (o0 > 0) {
            goto label_6;
        }
        o0 = 1;
    } else {
        if (o0 != 0x46) {
            local_29 = l1 + 0x18;
            *(local_29) = g0;
            if (o0 != 0x46) {
                goto label_6;
            }
        }
        o0 = 1;
    }
    local_30 = l1 + 0x18;
    *(local_30) = o0;
label_6:
    local_31 = i0 + 8;
    o0 = *(local_31);
    local_32 = l1 + 0x18;
    l5 = *(local_32);
    if (o0 != 0) {
        l0 = fp - 0x110;
        local_33 = i0 + 0xc;
        o1 = *(local_33);
        o2 = l0;
        sym_g_char ();
        local_34 = fp - 0x110;
        o0 = *(local_34);
        l3 = l0;
        if (o0 == 0) {
            o0 = *(i0);
            local_35 = l2 + 0x29c;
            o0 = *(local_35);
            if (o0 != 0) {
                o2 = 0x2c400;
                o0 &= -3;
                o1 = 0x6b;
                local_36 = l2 + 0x29c;
                *(local_36) = o0;
                local_37 = o2 + 0xf8;
                *(local_37) = o1;
            } else {
                o1 = 0x1a128;
                o2 = i0;
                o0 = 0x6b;
                sym_opn_err ();
            }
            i0 = 0x6b;
        } else {
            l0 = fp - 0x110;
            o1 = 0x1a000;
            local_38 = i0 + 4;
            o2 = *(local_38);
            o1 |= 0x130;
            o0 = l0;
            sym_imp_sprintf ();
            l3 = l0;
        }
        o0 = 3;
        local_39 = l1 + 0x1c;
        *(local_39) = o0;
        local_40 = l1 + 0x2c;
        *(local_40) = g0;
        local_41 = l1 + 0x24;
        *(local_41) = g0;
        local_42 = l1 + 0x28;
        *(local_42) = g0;
        *(l1) = g0;
        local_43 = i0 + 0x10;
        o0 = *(local_43);
        o1 = 0x27;
        if (o0 != 0) {
            o0 = *(o0);
            o1 = o0 - 0x4e;
        }
        o1 <<= 2;
        if (o1 <= 0x25) {
            o0 = 0x1413c;
            local_44 = o0 + o1;
            o2 = *(local_44);
            __asm ("jmp o2");
        }
        o0 = l3;
        sym_imp_strlen ();
        o0++;
        sym_imp_malloc ();
        local_45 = l1 + 4;
        *(local_45) = o0;
        if (o0 == 0) {
            o0 = *(i0);
            local_46 = l2 + 0x29c;
            o0 = *(local_46);
            if (o0 != 0) {
                o2 = 0x2c400;
                o0 &= -3;
                o1 = 0x71;
                local_47 = l2 + 0x29c;
                *(local_47) = o0;
                local_48 = o2 + 0xf8;
                *(local_48) = o1;
            } else {
                o1 = 0x1a140;
                o2 = i0;
                o0 = 0x71;
                sym_opn_err ();
            }
            i0 = 0x71;
        } else {
            local_49 = l1 + 4;
            o0 = *(local_49);
            o1 = l3;
            sym_imp_strcpy ();
            local_50 = i0 + 0x14;
            l0 = *(local_50);
            o1 = 0x2ac00;
            if (l0 != 0) {
                local_51 = l1 + 0x10;
                o0 = *(local_51);
                l5 = 0;
                if (o0 != 0) {
                    goto label_7;
                }
                o1 = 0x2ac00;
            }
label_7:
            o0 = l5 | 2;
            o0 <<= 2;
            l4 = o1 | 0x118;
            local_52 = l4 + o0;
            o1 = *(local_52);
            o0 = l3;
            sym_imp_fopen ();
            o2 = o0;
            o0 = o2;
            if (o0 == 0) {
                o0 = 0x2ad10;
                l0 = l5 << 2;
                local_53 = o0 + l0;
                o1 = *(local_53);
                o0 = l3;
                sym_imp_fopen ();
                o2 = o0;
                o0 = 1;
                if (o0 != 0) {
                    local_54 = l1 + 0x1c;
                    *(local_54) = o0;
                } else {
                    local_55 = l4 + l0;
                    o1 = *(local_55);
                    o0 = l3;
                    sym_imp_fopen ();
                    o2 = o0;
                    o0 = 1;
                    if (o0 != 0) {
                        o1 = 2;
                        local_56 = l1 + 0x28;
                        *(local_56) = o0;
                        local_57 = l1 + 0x1c;
                        *(local_57) = o1;
                    } else {
                        o0 = *(i0);
                        local_58 = l2 + 0x29c;
                        o1 = *(local_58);
                        if (o0 != 0) {
                            o0 = 0x2c400;
                            o1 &= -3;
                            l0 = o0;
                            local_59 = l2 + 0x29c;
                            *(local_59) = o1;
                        } else {
                            l0 = 0x2c400;
                            o1 = 0x1a000;
                            local_60 = l0 + 0xf8;
                            o0 = *(local_60);
                            o1 |= 0x128;
                            sym_f_fatal ();
                        }
                        local_61 = l0 + 0xf8;
                        i0 = *(local_61);
                        goto label_0;
                    }
                }
                o0 = o2;
            }
            *(l1) = o2;
            sym_f_canseek ();
            local_62 = l1 + 0x14;
            *(local_62) = o0;
            o0 = l3;
            o1 = l1 + 0xc;
            sym_f_inode ();
            local_63 = l1 + 8;
            *(local_63) = o0;
            if (o0 == -1) {
                o0 = *(i0);
                local_64 = l2 + 0x29c;
                o0 = *(local_64);
                if (o0 != 0) {
                    o2 = 0x2c400;
                    o0 &= -3;
                    o1 = 0x6c;
                    local_65 = l2 + 0x29c;
                    *(local_65) = o0;
                    local_66 = o2 + 0xf8;
                    *(local_66) = o1;
                } else {
                    o1 = 0x1a128;
                    o2 = i0;
                    o0 = 0x6c;
                    sym_opn_err ();
                }
                i0 = 0x6c;
            } else {
                local_67 = l1 + 0x14;
                o0 = *(local_67);
                i0 = 0;
                if (o0 == 0) {
                    goto label_0;
                }
                local_68 = i0 + 0x1c;
                o0 = *(local_68);
                local_69 = i0 + 0x14;
                l0 = *(local_69);
                if (o0 != 0) {
                    o0 = *(l1);
                    sym_imp_rewind ();
                    i0 = 0;
                } else {
                    i0 = 0;
                    if (l0 == 0) {
                        goto label_0;
                    }
                    o0 = *(l0);
                    if (o0 != 0x41) {
                        i0 = 0;
                        if (o0 != 0x41) {
                            goto label_0;
                        }
                    }
                    o0 = *(l1);
                    o1 = 0;
                    o2 = 2;
                    sym_imp_fseek ();
                    i0 = 0;
                    if (o0 == 0) {
                        goto label_0;
                    }
                    o0 = *(i0);
                    local_70 = l2 + 0x29c;
                    o0 = *(local_70);
                    if (o0 != 0) {
                        o2 = 0x2c400;
                        o0 &= -3;
                        o1 = 0x81;
                        local_71 = l2 + 0x29c;
                        *(local_71) = o0;
                        local_72 = o2 + 0xf8;
                        *(local_72) = o1;
                    } else {
                        o1 = 0x1a128;
                        o2 = i0;
                        o0 = 0x81;
                        sym_opn_err ();
                    }
                    i0 = 0x81;
                    goto label_0;
label_3:
                    i0 = 0;
                }
            }
        }
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14324 */
#include <stdint.h>
 
void x_getc () {
    o0 = 0x2d800;
    local_0 = o0 + 0x290;
    o1 = *(local_0);
    local_1 = o1 + 0x24;
    o2 = *(local_1);
    l1 = o0;
    if (o2 == 0) {
        o1 = 0x2c400;
        l0 = o1;
        local_2 = o1 + 0xd8;
        o1 = *(local_2);
        o0 = *(o1);
        o0--;
        *(o1) = o0;
        if (o0 < 0) {
            o0 = o1;
            sym_imp_filbuf ();
            i0 = o0;
        } else {
            local_3 = o1 + 4;
            o0 = *(local_3);
            i0 = *(o0);
            o0++;
            local_4 = o1 + 4;
            *(local_4) = o0;
        }
        if (i0 != 0xa) {
            o1 = 0x2d800;
            if (i0 == 0xa) {
                goto label_0;
            }
            local_5 = o1 + 0x21c;
            o0 = *(local_5);
            o0++;
            local_6 = o1 + 0x21c;
            *(local_6) = o0;
            goto label_1;
        }
label_0:
        local_7 = l1 + 0x290;
        o2 = *(local_7);
        if (i0 == 0xa) {
            local_8 = l0 + 0xd8;
            o1 = *(local_8);
            o0 = 0xa;
            sym_imp_ungetc ();
            i0 = 0xa;
            goto label_1;
        }
        local_9 = o2 + 0x24;
        o0 = *(local_9);
        o0 = 0x2c400;
        if (o0 == 0) {
            local_10 = l0 + 0xd8;
            o0 = *(local_10);
            local_11 = o0 + 0xc;
            o1 = *(local_11);
            g0 = o1 & 0x10;
            o0 = 0x2c400;
            if (o1 == 0x10) {
                goto label_2;
            }
        }
        local_12 = o0 + 0xf8;
        *(local_12) = g0;
        o1 = 1;
        local_13 = o2 + 0x24;
        *(local_13) = o1;
    }
label_2:
    i0 = -1;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14edc */
#include <stdint.h>
 
void t_runc () {
    local_0 = i0 + 4;
    o1 = *(local_0);
    o2 = 0x2c400;
    o0 = o1 << 1;
    o0 += o1;
    l2 = o0 << 4;
    l4 = o2 | 0x33c;
    l1 = l2 + l4;
    local_1 = l1 + 0x10;
    o0 = *(local_1);
    l5 = 0;
    if (o0 == 0) {
        local_2 = l2 + l4;
        l0 = *(local_2);
        o0 = l0;
        sym_imp_ftell ();
        l3 = o0;
        o1 = 0;
        o2 = 2;
        o0 = l0;
        sym_imp_fseek ();
        o0 = l0;
        sym_imp_ftell ();
        i0 = 0;
        if (l3 >= o0) {
            goto label_0;
        }
        local_3 = l1 + 0x14;
        o0 = *(local_3);
        i0 = 0;
        if (o0 == 0) {
            goto label_0;
        }
        local_4 = l1 + 4;
        o0 = *(local_4);
        i0 = 0;
        if (o0 == 0) {
            goto label_0;
        }
        local_5 = l2 + l4;
        o0 = *(local_5);
        sym_imp_fclose ();
        o0 = 0x2ac00;
        if (l3 == 0) {
            local_6 = l1 + 0x18;
            o2 = *(local_6);
            o0 = 0x2ad18;
            o2 <<= 2;
            local_7 = o0 + o2;
            o1 = *(local_7);
            local_8 = l1 + 4;
            o0 = *(local_8);
            sym_imp_fopen ();
            l0 = o0;
            l5 = 1;
            if (o0 != 0) {
            }
            local_9 = l1 + 0x28;
            o0 = *(local_9);
            o0 = 1;
            if (o0 == 0) {
                goto label_1;
            }
            local_10 = l1 + 0x28;
            *(local_10) = o0;
        } else {
            local_11 = o0 + 0x110;
            o1 = *(local_11);
            local_12 = l1 + 4;
            o0 = *(local_12);
            sym_imp_fopen ();
            l0 = o0;
            l5 = 1;
            if (o0 == 0) {
                goto label_1;
            }
            sym_imp_tmpfile ();
            l2 = o0;
            o0 = l0;
            if (o0 == 0) {
                l5 = 1;
            } else {
                o1 = l3;
                o2 = l2;
                sym_copy ();
                o0 = 0x2ac00;
                if (o0 != 0) {
                    l5 = 1;
                } else {
                    local_13 = o0 + 0x118;
                    o1 = *(local_13);
                    o2 = l0;
                    local_14 = l1 + 4;
                    o0 = *(local_14);
                    sym_imp_freopen ();
                    l0 = o0;
                    l5 = 1;
                    if (o0 == 0) {
                        goto label_2;
                    }
                    o0 = l2;
                    sym_imp_rewind ();
                    o1 = l3;
                    o0 = l2;
                    o2 = l0;
                    sym_copy ();
                    l5 = 1;
                    if (o0 != 0) {
                        goto label_2;
                    }
                    o0 = 2;
                    local_15 = l1 + 0x1c;
                    *(local_15) = o0;
                }
label_2:
                o0 = l2;
                sym_imp_fclose ();
            }
        }
label_1:
        o0 = 0x2c400;
        local_16 = o0 + 0xd8;
        *(local_16) = l0;
        *(l1) = l0;
        if (l5 != 0) {
            o0 = *(i0);
            o2 = 0x2d800;
            if (o0 != 0) {
                local_17 = o2 + 0x29c;
                o0 = *(local_17);
                o3 = 0x2c400;
                o0 &= -3;
                o1 = 0x6f;
                local_18 = o2 + 0x29c;
                *(local_18) = o0;
                local_19 = o3 + 0xf8;
                *(local_19) = o1;
            } else {
                o1 = 0x1a230;
                o0 = 0x6f;
                sym_f_fatal ();
            }
            i0 = 0x6f;
        }
    } else {
        i0 = 0;
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1393c */
#include <stdint.h>
 
void f_putbuf () {
    o0 = 0x2d800;
    local_0 = o0 + 0x2b0;
    o1 = *(local_0);
    l1 = 0x2d800;
    local_1 = l1 + 0x21c;
    o0 = *(local_1);
    local_2 = l1 + 0x21c;
    *(local_2) = o1;
    if (o1 <= o0) {
    }
    local_3 = l1 + 0x21c;
    o3 = *(local_3);
    o1 = 0x2ac00;
    local_4 = o1 + 0x12c;
    o0 = *(local_4);
    o2 = o3 + 1;
    o0 = o2;
    if (o2 >= o0) {
        o1 = o3;
        loc_Letext ();
    }
    o0 = 0x2ac00;
    local_5 = o0 + 0x128;
    l0 = *(local_5);
    local_6 = l1 + 0x21c;
    o0 = *(local_6);
    l1 = l0 + o0;
    if (i0 != 0) {
        local_7 = l0 + o0;
        *(local_7) = i0;
        l1++;
    }
    *(l1) = g0;
    i0 = 0x2c400;
    while (1) {
        o0 = *(o2);
        o0--;
        *(o2) = o0;
        if (o0 < 0) {
            o0 = *(l0);
            o1 = o2;
            l0++;
            sym_imp_flsbuf ();
            local_8 = i0 + 0xd8;
            o1 = *(local_8);
        } else {
            local_9 = o2 + 4;
            o1 = *(local_9);
            o0 = *(l0);
            *(o1) = o0;
            o1++;
            local_10 = o2 + 4;
            *(local_10) = o1;
            l0++;
            local_11 = i0 + 0xd8;
            o1 = *(local_11);
        }
        o0 = l0;
        sym_imp_fputs ();
        o0 = l0;
        sym_imp_strlen ();
        l0 += o0;
        local_12 = i0 + 0xd8;
        o2 = *(local_12);
        __asm ("bcs 0x139ac");
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x131d0 */
#include <stdint.h>
 
void l_read () {
    l4 = i0;
    o0 = *(l4);
    l3 = 0;
    i0 = 0;
    if (l3 >= o0) {
        goto label_2;
    }
    o1 = 0x2c400;
label_1:
    local_0 = o1 + 0x330;
    o0 = *(local_0);
    l2 = o1;
    if (o0 != 0) {
        goto label_3;
    }
    o0 = 0x2c400;
    local_1 = o0 + 0xfc;
    o1 = *(local_1);
    o0 = 0x2c400;
    if (o1 != 0) {
        local_2 = o0 + 0x324;
        o1 = *(local_2);
        local_3 = o1 + 8;
        o2 = *(local_3);
        o2 = 0x2d800;
        if (o2 == 0) {
            o1 = 0x1a000;
        } else {
            o1 = 0x2d800;
            local_4 = o1 + 0x218;
            o0 = *(local_4);
            l1 = o1;
            if (o0 != 0) {
                goto label_4;
            }
            o0 = 0x2c400;
            local_5 = o0 + 0x334;
            *(local_5) = g0;
            l0 = 0x2d800;
            local_6 = l0 + 0x280;
            o0 = *(local_6);
            o0 ();
            o4 = o0;
            o1 = o4 + 1;
            o1 <<= 2;
            if (o1 > 0x30) {
                goto label_5;
            }
            o0 = 0x13644;
            local_7 = o0 + o1;
            o2 = *(local_7);
            __asm ("jmp o2");
        }
        local_8 = o2 + 0x29c;
        o0 = *(local_8);
        o3 = 0x2c400;
        o0 &= -3;
        o1 = -1;
        local_9 = o2 + 0x29c;
        *(local_9) = o0;
        local_10 = o3 + 0xf8;
        *(local_10) = o1;
        goto label_6;
        o1 = 0x1a0e8;
    }
    o0 = -1;
    sym_f_fatal ();
label_6:
    i0 = -1;
    goto label_2;
    o0 = 1;
    local_11 = l2 + 0x330;
    *(local_11) = o0;
    goto label_7;
    o0 = 1;
    local_12 = l1 + 0x218;
    *(local_12) = o0;
    goto label_7;
label_5:
    o0 = 0x2d800;
    o2 = 0x2c400;
    local_13 = o0 + 0x224;
    o3 = *(local_13);
    local_14 = o2 + 0xd8;
    o1 = *(local_14);
    o0 = o4;
    o3 ();
label_4:
    o1 = i3 - 2;
    o0 = 0x13400;
    if (o1 <= 0xc) {
        o0 |= 0x210;
        o1 <<= 2;
        local_15 = o0 + o1;
        o2 = *(local_15);
        __asm ("jmp o2");
    }
    l0 = 0x2d800;
    local_16 = l0 + 0x280;
    o0 = *(local_16);
    do {
label_0:
        o0 ();
        o4 = o0;
        local_17 = l0 + 0x280;
        o0 = *(local_17);
    } while (o4 == 0x20);
    local_18 = l0 + 0x280;
    o0 = *(local_18);
    if (o4 == 9) {
        goto label_0;
    }
    o0 = 0x2d800;
    if (o4 == 0x2c) {
        local_19 = l1 + 0x218;
        o0 = *(local_19);
        o0 = 0x2d800;
        if (o0 <= 1) {
            goto label_7;
        }
    }
    o2 = 0x2c400;
    local_20 = o0 + 0x224;
    o3 = *(local_20);
    local_21 = o2 + 0xd8;
    o1 = *(local_21);
    o0 = o4;
    o3 ();
label_7:
    local_22 = l2 + 0x330;
    o0 = *(local_22);
    i0 = 0;
    if (o0 != 0) {
        goto label_2;
    }
    o0 = 0x2c400;
    local_23 = o0 + 0xd8;
    o0 = *(local_23);
    o0 = 0x2c400;
    if (o0 != 0) {
        local_24 = o0 + 0xc;
        o1 = *(local_24);
        g0 = o1 & 0x20;
        o1 &= 0xcf;
        if (o1 != 0x20) {
            local_25 = o0 + 0xc;
            *(local_25) = o1;
            o0 = 0x2c400;
            local_26 = o0 + 0x324;
            o1 = *(local_26);
            o3 = 0x2c400;
            o0 = *(o1);
            o2 = 0x1a000;
            local_27 = o3 + 0xf8;
            o1 = *(local_27);
            o2 |= 0xe8;
            sym_err_fl ();
            i0 = o0;
            goto label_2;
        }
        o0 = 0x2c400;
    }
    local_28 = o0 + 0x334;
    o1 = *(local_28);
    o1 = i3 - 2;
    if (o1 != 0) {
        o0 = 0x13400;
        if (o1 > 0xc) {
            goto label_8;
        }
        o0 |= 0x1dc;
        o1 <<= 2;
        local_29 = o0 + o1;
        o2 = *(local_29);
        __asm ("jmp o2");
    }
label_8:
    local_30 = l1 + 0x218;
    o0 = *(local_30);
    o0--;
    if (o0 > 0) {
        local_31 = l1 + 0x218;
        *(local_31) = o0;
    }
    o1 = 0x2c400;
    local_32 = o1 + 0x108;
    o0 = *(local_32);
    i1 += i2;
    if (o0 != 0) {
        o0++;
        local_33 = o1 + 0x108;
        *(local_33) = o0;
    }
    o0 = *(l4);
    l3++;
    o1 = 0x2c400;
    if (l3 < o0) {
        goto label_1;
    }
label_3:
    i0 = 0;
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14428 */
#include <stdint.h>
 
void x_rev () {
    i0 = 0;
    sym_xrd_SL ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1428c */
#include <stdint.h>
 
void xrd_SL () {
    o0 = 0x2d800;
    local_0 = o0 + 0x290;
    o1 = *(local_0);
    l2 = o0;
    local_1 = o1 + 0x24;
    o0 = *(local_1);
    l1 = 0x2d800;
    l0 = 0x2d800;
    if (o0 != 0) {
        goto label_0;
    }
    i0 = 0x2c400;
    while (o2 != -1) {
        local_2 = i0 + 0xd8;
        o1 = *(local_2);
        if (o0 == 0) {
            local_3 = l2 + 0x290;
            o1 = *(local_3);
            o0 = 1;
            local_4 = o1 + 0x24;
            *(local_4) = o0;
            goto label_0;
            local_5 = i0 + 0xd8;
            o1 = *(local_5);
        }
        o0 = *(o1);
        o0--;
        *(o1) = o0;
        if (o0 < 0) {
            o0 = o1;
            sym_imp_filbuf ();
            o2 = o0;
        } else {
            local_6 = o1 + 4;
            o0 = *(local_6);
            o2 = *(o0);
            o0++;
            local_7 = o1 + 4;
            *(local_7) = o0;
        }
    }
label_0:
    local_8 = l0 + 0x21c;
    *(local_8) = g0;
    local_9 = l1 + 0x208;
    *(local_9) = g0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14860 */
#include <stdint.h>
 
void b_char () {
    o3 = 0;
    while (g2 != 0) {
        *(o1) = g3;
        o3++;
        o0++;
        o1++;
        o3 = o2 - o3;
        if (o3 >= o2) {
            goto label_0;
        }
        g2 = *(o0);
        g3 = *(o0);
    }
    o3 = o2 - o3;
    if (o3 >= o2) {
        goto label_0;
    }
    g2 = 0x20;
    do {
        *(o1) = g2;
        o3--;
        o1++;
    } while (o3 != -1);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x148f0 */
#include <stdint.h>
 
void s_wsle () {
    o0 = i0;
    sym_c_le ();
    o0 = 0x2d800;
    if (o0 != 0) {
        i0 = o0;
    } else {
        local_0 = o0 + 0x290;
        g1 = *(local_0);
        o1 = 0x13800;
        local_1 = g1 + 0x28;
        l3 = *(local_1);
        o0 = 0x17000;
        o2 = 0x19000;
        l0 = 1;
        o1 |= 0x21c;
        o0 |= 0x90;
        o2 |= 0x2d4;
        l1 = 0x2d800;
        l2 = 0x2d800;
        o5 = 0x2d800;
        g2 = 0x2d800;
        g3 = 0x2c400;
        o7 = 0x2c000;
        o3 = 0x50;
        o4 = 0x2d800;
        local_2 = o5 + 0x2b8;
        *(local_2) = l0;
        local_3 = g2 + 0x2a4;
        *(local_3) = o1;
        local_4 = g3 + 0x100;
        *(local_4) = o0;
        local_5 = o7 + 0x390;
        *(local_5) = o3;
        local_6 = o4 + 0x214;
        *(local_6) = o2;
        local_7 = l1 + 0x288;
        *(local_7) = g0;
        local_8 = l2 + 0x2b4;
        *(local_8) = l0;
        if (l3 != 1) {
            o0 = g1;
            sym_f_nowwriting ();
            i0 = 0;
            if (o0 == 0) {
                goto label_0;
            }
            o0 = *(i0);
            o3 = 0x2d800;
            if (o0 != 0) {
                local_9 = o3 + 0x29c;
                o0 = *(local_9);
                o1 = 0x2c400;
                o0 &= -3;
                l0 = o1;
                local_10 = o3 + 0x29c;
                *(local_10) = o0;
            } else {
                l0 = 0x2c400;
                o1 = 0x1a000;
                local_11 = l0 + 0xf8;
                o0 = *(local_11);
                o1 |= 0x198;
                sym_f_fatal ();
            }
            local_12 = l0 + 0xf8;
            i0 = *(local_12);
        } else {
            i0 = 0;
        }
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1443c */
#include <stdint.h>
 
void s_rsfe () {
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    o1 = *(local_0);
    l1 = o0;
    if (o1 != 1) {
        sym_f_init ();
    }
    o1 = 1;
    o0 = 0x2d800;
    o2 = 3;
    o3 = 0x2d800;
    o4 = 0x2d800;
    o5 = 0x2d800;
    local_1 = o0 + 0x2b4;
    *(local_1) = o1;
    local_2 = l1 + 0x29c;
    *(local_2) = o2;
    local_3 = o3 + 0x288;
    *(local_3) = o1;
    local_4 = o4 + 0x284;
    *(local_4) = o1;
    local_5 = o5 + 0x2b8;
    *(local_5) = o1;
    o0 = i0;
    sym_c_sfe ();
    local_6 = i0 + 4;
    o0 = *(local_6);
    if (o0 != 0) {
        i0 = o0;
    } else {
        o1 = 0x2c400;
        o2 = o0 << 1;
        o2 += o0;
        o1 |= 0x33c;
        o2 <<= 4;
        local_7 = o2 + o1;
        o7 = *(local_7);
        g3 = 0x2d800;
        local_8 = i0 + 0xc;
        o0 = *(local_8);
        o2 += o1;
        l0 = 0x2c400;
        g2 = 0x2d800;
        o3 = 0x2d800;
        o4 = 0x2c400;
        o5 = 0x2d800;
        o1 = 0x2c400;
        l2 = g3;
        local_9 = o1 + 0xd8;
        *(local_9) = o7;
        local_10 = o3 + 0x21c;
        *(local_10) = g0;
        local_11 = g2 + 0x208;
        *(local_11) = g0;
        local_12 = o4 + 0x338;
        *(local_12) = g0;
        local_13 = o5 + 0x20c;
        *(local_13) = o0;
        local_14 = g3 + 0x290;
        *(local_14) = o2;
        local_15 = l0 + 0x324;
        *(local_15) = i0;
        sym_pars ();
        l3 = l0;
        if (o0 < 0) {
            o0 = *(i0);
            local_16 = l1 + 0x29c;
            o0 = *(local_16);
            if (o0 != 0) {
                o2 = 0x2c400;
                o0 &= -3;
                o1 = 0x64;
                local_17 = l1 + 0x29c;
                *(local_17) = o0;
                local_18 = o2 + 0xf8;
                *(local_18) = o1;
            } else {
                o1 = 0x1a170;
                o0 = 0x64;
                sym_f_fatal ();
            }
            i0 = 0x64;
        } else {
            o0 = 0x14000;
            o1 = 0x18000;
            o2 = 0x18000;
            o0 |= 0x324;
            o1 |= 0x10;
            o2 |= 0x314;
            o3 = 0x2d800;
            o4 = 0x2d800;
            o5 = 0x2c400;
            local_19 = o3 + 0x298;
            *(local_19) = o0;
            local_20 = o4 + 0x294;
            *(local_20) = o1;
            local_21 = o5 + 0x320;
            *(local_21) = o2;
            sym_fmt_bg ();
            local_22 = l2 + 0x290;
            g1 = *(local_22);
            o2 = 0x14000;
            local_23 = g1 + 0x28;
            o7 = *(local_23);
            o0 = 0x14000;
            local_24 = g1 + 0x20;
            l0 = *(local_24);
            o1 = 0x14400;
            o2 |= 0x3fc;
            o0 |= 0x28c;
            o1 |= 0x28;
            o3 = 0x2c400;
            o4 = 0x2d800;
            o5 = 0x2d800;
            g2 = 0x2d800;
            g3 = 0x2c400;
            local_25 = o3 + 0x31c;
            *(local_25) = o2;
            local_26 = o4 + 0x214;
            *(local_26) = o0;
            local_27 = o5 + 0x278;
            *(local_27) = o1;
            local_28 = g2 + 0x204;
            *(local_28) = l0;
            local_29 = g3 + 0x10c;
            *(local_29) = g0;
            if (o7 != 0) {
                o0 = g1;
                sym_f_nowreading ();
                local_30 = l2 + 0x290;
                o0 = *(local_30);
                if (o0 != 0) {
                    o0 = *(i0);
                    local_31 = l1 + 0x29c;
                    o1 = *(local_31);
                    if (o0 != 0) {
                        o0 = 0x2c400;
                        o1 &= -3;
                        l0 = o0;
                        local_32 = l1 + 0x29c;
                        *(local_32) = o1;
                    } else {
                        l0 = 0x2c400;
                        o1 = 0x1a000;
                        local_33 = l0 + 0xf8;
                        o0 = *(local_33);
                        o1 |= 0x178;
                        sym_f_fatal ();
                    }
                    local_34 = l0 + 0xf8;
                    i0 = *(local_34);
                } else {
                    local_35 = l2 + 0x290;
                    o0 = *(local_35);
                }
                local_36 = o0 + 0x24;
                o1 = *(local_36);
                local_37 = l3 + 0x324;
                o0 = *(local_37);
                if (o1 != 0) {
                    local_38 = o0 + 8;
                    o1 = *(local_38);
                    local_39 = l1 + 0x29c;
                    o0 = *(local_39);
                    if (o1 != 0) {
                        o2 = 0x2c400;
                        o0 &= -3;
                        o1 = -1;
                        local_40 = l1 + 0x29c;
                        *(local_40) = o0;
                        local_41 = o2 + 0xf8;
                        *(local_41) = o1;
                    } else {
                        o1 = 0x1a178;
                        o0 = -1;
                        sym_f_fatal ();
                    }
                    i0 = -1;
                } else {
                    i0 = 0;
                }
            }
        }
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19700 */
#include <stdint.h>
 
void wrt_E () {
    l6 = i3;
    l7 = 0;
    if (i3 <= 0) {
        i3 = 2;
    }
    o0 = 0x2c400;
    local_0 = o0 + 0x338;
    o1 = *(local_0);
    l4 = o0;
    if (o1 != 0) {
        o0 = i2 + 2;
        i1--;
        if (i1 >= -1) {
            goto label_0;
        }
        o0 = g0 - i2;
        i1--;
        if (i1 <= -1) {
            goto label_0;
        }
    }
    i2--;
    if (o1 > 0) {
    }
    f4 = *(i0);
    if (i4 == 4) {
        f2 = *(i0);
        __asm ("fstod f2, f4");
    }
    g2 = 0x1a800;
    local_1 = g2 + 0xb8;
    f2 = *(local_1);
    __asm ("fcmped f4, f2");
    __asm ("fbuge 0x19790");
    o0 = 0x2c400;
    __asm ("fnegs f4, f4");
    l5 = 1;
    l2 = 1;
    goto label_1;
    local_2 = o0 + 0x10c;
    l2 = *(local_2);
    __asm ("fcmpd f4, f2");
    __asm ("fbne 0x197ac");
    l5 = 0;
    __asm ("fmovs f2, f4");
    __asm ("fmovs f3, f5");
label_1:
    o0 = i2 + 4;
    o0 = l2 + o0;
    local_3 = l4 + 0x338;
    o1 = *(local_3);
    o0 += i3;
    i0 = i1 - o0;
    if (o1 <= 0) {
        if (i0 <= 0) {
            goto label_2;
        }
        i0--;
        l7 = 1;
        goto label_3;
    }
label_2:
    local_4 = l4 + 0x338;
    o0 = *(local_4);
    if (i0 >= 0) {
        goto label_4;
    }
    i1--;
label_0:
    l0 = 0x2d800;
    if (i1 < -1) {
        goto label_5;
    }
    local_5 = l0 + 0x2a4;
    o1 = *(local_5);
    do {
        o0 = 0x2a;
        o1 ();
        i1--;
        local_6 = l0 + 0x2a4;
        o1 = *(local_6);
    } while (i1 >= -1);
    local_7 = l4 + 0x338;
    o0 = *(local_7);
label_3:
    goto label_5;
label_4:
    i2 += o0;
    if (o0 >= 0) {
    }
    l1 = i2 - 0x28;
    if (i2 > 0x28) {
        i2 = 0x28;
    } else {
        l1 = 0;
    }
    local_8 = fp - 0x10;
    *(local_8) = f4;
label_5:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1919c */
#include <stdint.h>
 
void w_ned () {
    o0 = *(i0);
    o1 = o0 - 4;
    o0 = 0x19000;
    if (o1 <= 0xb) {
        o0 |= 0x2a4;
        o1 <<= 2;
        local_0 = o0 + o1;
        o2 = *(local_0);
        __asm ("jmp o2");
    }
    o2 = *(i0);
    o0 = 0x2c000;
    o1 = 0x1a860;
    o0 |= 0x3b8;
    sym_imp_fprintf ();
    o1 = 0x2d800;
    local_1 = o1 + 0x20c;
    o0 = *(local_1);
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18c1c */
#include <stdint.h>
 
void wrt_AP () {
    o0 = 0x2d800;
    local_0 = o0 + 0x208;
    o1 = *(local_0);
    o2 = *(i0);
    if (o1 != 0) {
        loc_Letext ();
        o2 = *(i0);
        if (o0 == 0) {
            goto label_0;
        }
        i0 = o0;
        goto label_1;
    }
label_0:
    i0++;
    o0 = *(i0);
    o1 = *(i0);
    if (o0 == 0) {
        goto label_2;
    }
    o0 = o2 << 0x18;
    l1 = o0 >> 0x18;
    l0 = 0x2d800;
    do {
        o0 = o1 << 0x18;
        o0 >>= 0x18;
        local_1 = l0 + 0x2a4;
        o1 = *(local_1);
        if (o0 != l1) {
            i0++;
            o1 ();
            o0 = *(i0);
        } else {
            i0++;
            o2 = *(i0);
            i0 = 1;
            if (o2 != o0) {
                goto label_1;
            }
            local_2 = l0 + 0x2a4;
            o1 = *(local_2);
            o0 = o2;
            o1 ();
            i0++;
            o0 = *(i0);
        }
        o1 = *(i0);
    } while (o0 != 0);
label_2:
    i0 = 1;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18cd4 */
#include <stdint.h>
 
void wrt_H () {
    o0 = 0x2d800;
    local_0 = o0 + 0x208;
    o1 = *(local_0);
    i0--;
    if (o1 != 0) {
        loc_Letext ();
        if (i0 == -1) {
            goto label_0;
        }
        i0 = o0;
        goto label_1;
    }
label_0:
    i0 = 1;
    if (i0 == -1) {
        goto label_1;
    }
    l0 = 0x2d800;
    o0 = *(i1);
    do {
        local_1 = l0 + 0x2a4;
        o1 = *(local_1);
        i1++;
        o1 ();
        i0--;
        o0 = *(i1);
    } while (i0 != -1);
    i0 = 1;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19c84 */
#include <stdint.h>
 
void wrt_F () {
    o2 = i2;
    if (i3 == 4) {
        f2 = *(i0);
        __asm ("fstod f2, f2");
    } else {
        f2 = *(i0);
    }
    i2 = 0;
    if (o2 > 0x157) {
        i2 = o2 - 0x158;
        o2 = 0x158;
    }
    g2 = 0x1a800;
    local_0 = g2 + 0xc8;
    f4 = *(local_0);
    __asm ("fcmped f2, f4");
    __asm ("fbuge 0x19cdc");
    __asm ("fcmpd f2, f4");
    __asm ("fnegs f2, f2");
    l0 = 1;
    goto label_0;
    __asm ("fbne 0x19cf0");
    l0 = 0;
    __asm ("fmovs f4, f2");
    __asm ("fmovs f5, f3");
label_0:
    o0 = 0x2c400;
    local_1 = o0 + 0x338;
    o3 = *(local_1);
    i3 = fp - 0x2a0;
    o1 = 0x1a800;
    if (o3 == 0) {
        goto label_1;
    }
    g3 = 0x1a800;
    if (o3 <= 0) {
        goto label_2;
    }
    local_2 = g3 + 0xd0;
    f4 = *(local_2);
    do {
        o3--;
        __asm ("fmuld f2, f4, f2");
    } while (o3 > 0);
    local_3 = fp - 0x10;
    *(local_3) = f2;
    void (*0x19d44)() ();
label_2:
    o0 = 0x1a800;
    local_4 = o0 + 0xd8;
    f4 = *(local_4);
    do {
        o3++;
        __asm ("fmuld f2, f4, f2");
    } while (o3 < 1);
label_1:
    local_5 = fp - 0x10;
    *(local_5) = f2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x149dc */
#include <stdint.h>
 
void e_wsle () {
    o1 = 1;
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    *(local_0) = o1;
    o0 = 0xa;
    sym_f_putbuf ();
    o1 = 0x2d800;
    local_1 = o1 + 0x21c;
    *(local_1) = g0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18d44 */
#include <stdint.h>
 
void wrt_L () {
    if (i2 == 1) {
        i0 = *(i0);
    } else {
        i0 = *(i0);
        if (i2 != 1) {
            goto label_0;
        }
        i0 = *(i0);
    }
label_0:
    o0 = i1 - 1;
    i2 = 0x2d800;
    if (o0 <= 0) {
        goto label_1;
    }
    i1 = o0;
    local_0 = i2 + 0x2a4;
    o1 = *(local_0);
    do {
        o0 = 0x20;
        o1 ();
        i1--;
        local_1 = i2 + 0x2a4;
        o1 = *(local_1);
    } while (i1 != -1);
label_1:
    local_2 = i2 + 0x2a4;
    o1 = *(local_2);
    if (i0 != 0) {
        o0 = 0x54;
        o1 ();
    } else {
        o0 = 0x46;
        o1 ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14d14 */
#include <stdint.h>
 
void G77_flush_0 () {
    o0 = 0x2c400;
    i0 = o0 | 0x33c;
    l0 = 0x63;
    do {
        o1 = *(i0);
        l0--;
        if (l0 != -1) {
            local_0 = i0 + 0x28;
            o0 = *(local_0);
            l0--;
            if (l0 == -1) {
                goto label_0;
            }
            o0 = o1;
            sym_imp_fflush ();
            l0--;
        }
label_0:
        i0 += 0x30;
    } while (l0 >= -1);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1468c */
#include <stdint.h>
 
void e_rsfe () {
    o1 = 1;
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    *(local_0) = o1;
    sym_en_fio ();
    o1 = 0x2d800;
    local_1 = o1 + 0x20c;
    *(local_1) = g0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x146b0 */
#include <stdint.h>
 
void c_sfe () {
    local_0 = i0 + 4;
    o0 = *(local_0);
    local_1 = i0 + 4;
    o3 = *(local_1);
    if (o0 > 0x63) {
        o0 = *(i0);
        o2 = 0x2d800;
        if (o0 != 0) {
            local_2 = o2 + 0x29c;
            o0 = *(local_2);
            o3 = 0x2c400;
            o0 &= -3;
            o1 = 0x65;
            local_3 = o2 + 0x29c;
            *(local_3) = o0;
            local_4 = o3 + 0xf8;
            *(local_4) = o1;
        } else {
            o1 = 0x1a188;
            o0 = 0x65;
            sym_f_fatal ();
        }
        i0 = 0x65;
    } else {
        o0 = 0x2c400;
        o1 = o3 << 1;
        o1 += o3;
        o1 <<= 4;
        o0 |= 0x33c;
        local_5 = o1 + o0;
        o2 = *(local_5);
        l0 = o1 + o0;
        if (o2 == 0) {
            o2 = o3;
            o0 = 3;
            o1 = 5;
            sym_fk_open ();
            local_6 = l0 + 0x18;
            o0 = *(local_6);
            if (o0 != 0) {
                o0 = *(i0);
                o2 = 0x2d800;
                if (o0 != 0) {
                    local_7 = o2 + 0x29c;
                    o0 = *(local_7);
                    o3 = 0x2c400;
                    o0 &= -3;
                    o1 = 0x72;
                    local_8 = o2 + 0x29c;
                    *(local_8) = o0;
                    local_9 = o3 + 0xf8;
                    *(local_9) = o1;
                } else {
                    o1 = 0x1a190;
                    o0 = 0x72;
                    sym_f_fatal ();
                }
                i0 = 0x72;
            } else {
                local_10 = l0 + 0x18;
                o0 = *(local_10);
            }
            i0 = 0;
            if (o0 != 0) {
                goto label_0;
            }
            o0 = *(i0);
            o2 = 0x2d800;
            if (o0 != 0) {
                local_11 = o2 + 0x29c;
                o0 = *(local_11);
                o3 = 0x2c400;
                o0 &= -3;
                o1 = 0x66;
                local_12 = o2 + 0x29c;
                *(local_12) = o0;
                local_13 = o3 + 0xf8;
                *(local_13) = o1;
            } else {
                o1 = 0x1a190;
                o0 = 0x66;
                sym_f_fatal ();
            }
            i0 = 0x66;
        }
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18010 */
#include <stdint.h>
 
void rd_ed () {
    o0 = 0x2d800;
    local_0 = o0 + 0x208;
    o1 = *(local_0);
    l1 = o0;
    if (o1 <= 0) {
        goto label_0;
    }
    l2 = 0x2d800;
    l0 = l1;
    do {
        local_1 = l2 + 0x298;
        o0 = *(local_1);
        o0 ();
        i0 = o0;
        if (o0 < 0) {
            goto label_1;
        }
        local_2 = l0 + 0x208;
        o0 = *(local_2);
        o0--;
        local_3 = l0 + 0x208;
        *(local_3) = o0;
    } while (o0 > 0);
label_0:
    local_4 = l1 + 0x208;
    o1 = *(local_4);
    o0 = *(i0);
    if (o1 < 0) {
        o0 = 0x2d800;
        l0 = o0;
        local_5 = o0 + 0x21c;
        o0 = *(local_5);
        g0 = o0 + o1;
        o0 = 0x2d800;
        if (o0 < o1) {
            o0 = g0 - o0;
            local_6 = l1 + 0x208;
            *(local_6) = o0;
            o0 = 0x2d800;
        }
        local_7 = o0 + 0x2b4;
        o1 = *(local_7);
        o0 = 0x2d800;
        if (o1 == 0) {
            o0 = 0x2c400;
            local_8 = o0 + 0x328;
            o1 = *(local_8);
            local_9 = l1 + 0x208;
            o2 = *(local_9);
            o1 += o2;
            local_10 = o0 + 0x328;
            *(local_10) = o1;
        } else {
            local_11 = o0 + 0x290;
            o0 = *(local_11);
            o0 = 0x2c400;
            if (o0 != 0) {
                local_12 = o0 + 0x14;
                o0 = *(local_12);
                o1 = 0x2c400;
                if (o0 != 0) {
                    local_13 = o1 + 0xd8;
                    o0 = *(local_13);
                    o2 = 1;
                    local_14 = l1 + 0x208;
                    o1 = *(local_14);
                    sym_imp_fseek ();
                    local_15 = l0 + 0x21c;
                    o0 = *(local_15);
                    goto label_2;
                }
                o0 = 0x2c400;
            }
            local_16 = o0 + 0x324;
            o1 = *(local_16);
            o2 = *(o1);
            o2 = 0x2d800;
            if (o2 != 0) {
                local_17 = o2 + 0x29c;
                o0 = *(local_17);
                o3 = 0x2c400;
                o0 &= -3;
                o1 = 0x6a;
                local_18 = o2 + 0x29c;
                *(local_18) = o0;
                local_19 = o3 + 0xf8;
                *(local_19) = o1;
            } else {
                o1 = 0x1a7c0;
                o0 = 0x6a;
                sym_f_fatal ();
            }
            i0 = 0x6a;
            goto label_1;
        }
        local_20 = l0 + 0x21c;
        o0 = *(local_20);
label_2:
        local_21 = l1 + 0x208;
        o1 = *(local_21);
        o0 += o1;
        local_22 = l0 + 0x21c;
        *(local_22) = o0;
        local_23 = l1 + 0x208;
        *(local_23) = g0;
        o0 = *(i0);
    }
    o1 = o0 - 7;
    o3 = o0;
    if (o1 <= 0x1d) {
        o0 = 0x1829c;
        o1 <<= 2;
        local_24 = o0 + o1;
        o2 = *(local_24);
        __asm ("jmp o2");
    }
    o0 = 0x2c000;
    o1 = 0x1a7c8;
    o0 |= 0x3b8;
    o2 = o3;
    sym_imp_fprintf ();
    o1 = 0x2d800;
    local_25 = o1 + 0x20c;
    o0 = *(local_25);
    sym_sig_die ();
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16a98 */
#include <stdint.h>
 
void fmt_bg () {
    o4 = 0x2d800;
    o3 = 0x2c400;
    o1 = 0x2c400;
    g3 = 0x2c400;
    g2 = 0x2d800;
    o2 = 0x2d800;
    o0 = 0x2d800;
    local_0 = g2 + 0x208;
    *(local_0) = g0;
    local_1 = g3 + 0xf0;
    *(local_1) = g0;
    local_2 = o1 + 0xf4;
    *(local_2) = g0;
    local_3 = o3 + 0xdc;
    *(local_3) = g0;
    local_4 = o4 + 0x27c;
    *(local_4) = g0;
    local_5 = o0 + 0x250;
    *(local_5) = g0;
    local_6 = o2 + 0x228;
    *(local_6) = g0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x11c64 */
#include <stdint.h>
 
void t_getc () {
    o0 = 0x2d800;
    local_0 = o0 + 0x290;
    o1 = *(local_0);
    local_1 = o1 + 0x24;
    o2 = *(local_1);
    l1 = o0;
    if (o2 == 0) {
        o1 = 0x2c400;
        l0 = o1;
        local_2 = o1 + 0xd8;
        o1 = *(local_2);
        o0 = *(o1);
        o0--;
        *(o1) = o0;
        if (o0 < 0) {
            o0 = o1;
            sym_imp_filbuf ();
            i0 = o0;
        } else {
            local_3 = o1 + 4;
            o0 = *(local_3);
            i0 = *(o0);
            o0++;
            local_4 = o1 + 4;
            *(local_4) = o0;
        }
        local_5 = l0 + 0xd8;
        o0 = *(local_5);
        if (i0 != -1) {
            goto label_0;
        }
        local_6 = o0 + 0xc;
        o1 = *(local_6);
        g0 = o1 & 0x10;
        o1 = 1;
        if (o1 == 0x10) {
            goto label_1;
        }
        local_7 = l1 + 0x290;
        o2 = *(local_7);
        o0 = 0x2c400;
        local_8 = o0 + 0xfc;
        *(local_8) = o1;
        local_9 = o2 + 0x24;
        *(local_9) = o1;
    }
label_1:
    i0 = -1;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x11c3c */
#include <stdint.h>
 
void do_lio () {
    o1 = 0x2c400;
    local_0 = o1 + 0x100;
    o4 = *(local_0);
    o0 = i1;
    o3 = *(i0);
    o1 = i2;
    o2 = i3;
    o4 ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x148bc */
#include <stdint.h>
 
void f_inode () {
    o0 = i0;
    o1 = fp - 0x98;
    sym_imp_stat ();
    local_0 = fp - 0x98;
    o0 = *(local_0);
    if (o0 >= 0) {
        local_1 = fp - 0x88;
        i0 = *(local_1);
        *(i1) = o0;
    } else {
        i0 = -1;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x17090 */
#include <stdint.h>
 
void l_write () {
    o0 = *(i0);
    l0 = 0;
    if (l0 >= o0) {
        void (*0x171bc)() ();
    }
    o1 = i3 - 2;
    o0 = 0x17000;
    if (o1 <= 0xc) {
        o0 |= 0x1c4;
        o1 <<= 2;
        local_0 = o0 + o1;
        o2 = *(local_0);
        __asm ("jmp o2");
    }
    o1 = 0x1a788;
    o0 = 0xcc;
    sym_f_fatal ();
    o0 = *(i1);
    o0 <<= 0x18;
    o3 = o0 >> 0x18;
    goto label_0;
    o0 = *(i1);
    o0 <<= 0x10;
    o3 = o0 >> 0x10;
    goto label_0;
    o2 = o0 >> 0x1f;
label_0:
    o0 = o2;
    o1 = o3;
    sym_lwrt_I ();
    o0 = *(i0);
    void (*0x171ac)() ();
    f2 = *(i1);
    __asm ("fstod f2, f4");
    local_1 = fp - 0x18;
    *(local_1) = f4;
    return void (*0x1713c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16b00 */
#include <stdint.h>
 
void lwrt_I () {
    o0 = i0;
    o1 = i1;
    o2 = fp - 0x14;
    o3 = fp - 0x18;
    o4 = 0xa;
    sym_f_icvt ();
    o1 = 0x2d800;
    local_0 = o1 + 0x21c;
    o2 = *(local_0);
    o3 = 0x2c000;
    local_1 = fp - 0x14;
    o1 = *(local_1);
    i0 = o0;
    local_2 = o3 + 0x390;
    o0 = *(local_2);
    o2 += o1;
    o0 = 0x2d800;
    if (o2 >= o0) {
        loc_Letext ();
        o0 = 0x2d800;
    }
    local_3 = o0 + 0x2a4;
    o1 = *(local_3);
    i1 = o0;
    o0 = 0x20;
    o1 ();
    local_4 = fp - 0x18;
    o0 = *(local_4);
    o0 = *(i0);
    if (o0 == 0) {
        goto label_0;
    }
    local_5 = i1 + 0x2a4;
    o1 = *(local_5);
    o0 = 0x2d;
    o1 ();
    o0 = *(i0);
    while (o0 != 0) {
        o0 = o1 << 0x18;
        local_6 = i1 + 0x2a4;
        o1 = *(local_6);
        o0 >>= 0x18;
        o1 ();
        i0++;
        o0 = *(i0);
label_0:
        o1 = *(i0);
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x143fc */
#include <stdint.h>
 
void x_endp () {
    i0 = 0;
    sym_xrd_SL ();
    o1 = 0x2d800;
    local_0 = o1 + 0x290;
    o2 = *(local_0);
    local_1 = o2 + 0x24;
    o0 = *(local_1);
    i0 = -1;
    if (o0 != 1) {
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x141d4 */
#include <stdint.h>
 
void fk_open () {
    l0 = fp - 0x20;
    o1 = 0x1a130;
    o2 = i2;
    o0 = l0;
    sym_imp_sprintf ();
    o1 = 1;
    local_0 = fp - 0x48;
    *(local_0) = o1;
    local_1 = fp - 0x44;
    *(local_1) = i2;
    o0 = l0;
    local_2 = fp - 0x40;
    *(local_2) = l0;
    sym_imp_strlen ();
    local_3 = fp - 0x3c;
    *(local_3) = o0;
    local_4 = fp - 0x38;
    *(local_4) = g0;
    if (i0 == 3) {
        o0 = 0x1a150;
    } else {
        o0 = 0x1a158;
    }
    local_5 = fp - 0x34;
    *(local_5) = o0;
    if (i1 == 5) {
        o0 = 0x1a160;
    } else {
        o0 = 0x1a168;
    }
    local_6 = fp - 0x30;
    *(local_6) = o0;
    l1 = 0x2d800;
    o0 = i0 ^ 4;
    local_7 = l1 + 0x29c;
    l0 = *(local_7);
    o0 = l0 & -3;
    o1 = g0 + 1;
    local_8 = l1 + 0x29c;
    *(local_8) = o0;
    local_9 = fp - 0x2c;
    *(local_9) = o1;
    local_10 = fp - 0x28;
    *(local_10) = g0;
    o0 = fp - 0x48;
    sym_f_open ();
    l0 |= 1;
    local_11 = l1 + 0x29c;
    *(local_11) = l0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x193b4 */
#include <stdint.h>
 
void s_wsfe () {
    o0 = 0x2d800;
    local_0 = o0 + 0x29c;
    o1 = *(local_0);
    l3 = o0;
    if (o1 != 1) {
        sym_f_init ();
    }
    o1 = 1;
    o0 = 0x2d800;
    o2 = 3;
    o3 = 0x2d800;
    o4 = 0x2d800;
    o5 = 0x2d800;
    local_1 = o0 + 0x2b4;
    *(local_1) = o1;
    local_2 = l3 + 0x29c;
    *(local_2) = o2;
    local_3 = o3 + 0x288;
    *(local_3) = g0;
    local_4 = o4 + 0x284;
    *(local_4) = o1;
    local_5 = o5 + 0x2b8;
    *(local_5) = o1;
    o0 = i0;
    sym_c_sfe ();
    local_6 = i0 + 4;
    o0 = *(local_6);
    if (o0 != 0) {
        i0 = o0;
    } else {
        o1 = 0x2c400;
        o2 = o0 << 1;
        o2 += o0;
        o1 |= 0x33c;
        o2 <<= 4;
        local_7 = o2 + o1;
        l1 = *(local_7);
        l2 = 0x2d800;
        local_8 = i0 + 0xc;
        o0 = *(local_8);
        o2 += o1;
        o4 = 0x2c400;
        o5 = 0x2d800;
        o3 = 0x2d800;
        g2 = 0x2d800;
        g3 = 0x2c400;
        o7 = 0x2d800;
        o1 = 0x2c400;
        l0 = 0x2d800;
        local_9 = o1 + 0xd8;
        *(local_9) = l1;
        local_10 = o4 + 0x324;
        *(local_10) = i0;
        local_11 = o3 + 0x21c;
        *(local_11) = g0;
        local_12 = o5 + 0x208;
        *(local_12) = g0;
        local_13 = l0 + 0x2b0;
        *(local_13) = g0;
        local_14 = g2 + 0x2a0;
        *(local_14) = g0;
        local_15 = g3 + 0x338;
        *(local_15) = g0;
        local_16 = o7 + 0x20c;
        *(local_16) = o0;
        local_17 = l2 + 0x290;
        *(local_17) = o2;
        sym_pars ();
        l4 = l2;
        if (o0 < 0) {
            o0 = *(i0);
            local_18 = l3 + 0x29c;
            o0 = *(local_18);
            if (o0 != 0) {
                o2 = 0x2c400;
                o0 &= -3;
                o1 = 0x64;
                local_19 = l3 + 0x29c;
                *(local_19) = o0;
                local_20 = o2 + 0xf8;
                *(local_20) = o1;
            } else {
                o1 = 0x1a880;
                o0 = 0x64;
                sym_f_fatal ();
            }
            i0 = 0x64;
        } else {
            o0 = 0x13800;
            o1 = 0x18c00;
            o2 = 0x19000;
            o3 = 0x19000;
            o4 = 0x19000;
            o5 = 0x19000;
            o0 |= 0x21c;
            o1 |= 0x380;
            o2 |= 0x19c;
            o3 |= 0x308;
            o4 |= 0x36c;
            o5 |= 0x2d4;
            g2 = 0x2d800;
            g3 = 0x2d800;
            o7 = 0x2c400;
            l2 = 0x2d800;
            l0 = 0x2c400;
            l1 = 0x2d800;
            local_21 = g2 + 0x2a4;
            *(local_21) = o0;
            local_22 = g3 + 0x294;
            *(local_22) = o1;
            local_23 = o7 + 0x320;
            *(local_23) = o2;
            local_24 = l0 + 0x31c;
            *(local_24) = o3;
            local_25 = l2 + 0x214;
            *(local_25) = o5;
            local_26 = l1 + 0x278;
            *(local_26) = o4;
            sym_fmt_bg ();
            local_27 = l4 + 0x290;
            l2 = *(local_27);
            o3 = 0x2c400;
            local_28 = l2 + 0x28;
            o2 = *(local_28);
            o0 = 0x2d800;
            local_29 = l2 + 0x20;
            o1 = *(local_29);
            local_30 = o0 + 0x204;
            *(local_30) = o1;
            local_31 = o3 + 0x10c;
            *(local_31) = g0;
            if (o2 != 1) {
                o0 = l2;
                sym_f_nowwriting ();
                i0 = 0;
                if (o0 == 0) {
                    goto label_0;
                }
                o0 = *(i0);
                local_32 = l3 + 0x29c;
                o1 = *(local_32);
                if (o0 != 0) {
                    o0 = 0x2c400;
                    o1 &= -3;
                    l0 = o0;
                    local_33 = l3 + 0x29c;
                    *(local_33) = o1;
                } else {
                    l0 = 0x2c400;
                    o1 = 0x1a800;
                    local_34 = l0 + 0xf8;
                    o0 = *(local_34);
                    o1 |= 0x88;
                    sym_f_fatal ();
                }
                local_35 = l0 + 0xf8;
                i0 = *(local_35);
            } else {
                i0 = 0;
            }
        }
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x192d4 */
#include <stdint.h>
 
void x_wSL () {
    o0 = 0xa;
    sym_f_putbuf ();
    o2 = 0x2d800;
    o1 = 0x2d800;
    o0 = 0x2d800;
    local_0 = o0 + 0x208;
    *(local_0) = g0;
    local_1 = o1 + 0x21c;
    *(local_1) = g0;
    local_2 = o2 + 0x2b0;
    *(local_2) = g0;
    i0 = g0 + 1;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18f80 */
#include <stdint.h>
 
void w_ed () {
    o0 = 0x2d800;
    local_0 = o0 + 0x208;
    o1 = *(local_0);
    o0 = *(i0);
    if (o1 != 0) {
        loc_Letext ();
        if (o0 != 0) {
            goto label_0;
        }
        o0 = *(i0);
    }
    o1 = o0 - 7;
    o3 = o0;
    if (o1 <= 0x1d) {
        o0 = 0x19124;
        o1 <<= 2;
        local_1 = o0 + o1;
        o2 = *(local_1);
        __asm ("jmp o2");
    }
    o0 = 0x2c000;
    o1 = 0x1a840;
    o0 |= 0x3b8;
    o2 = o3;
    sym_imp_fprintf ();
    o1 = 0x2d800;
    local_2 = o1 + 0x20c;
    o0 = *(local_2);
    sym_sig_die ();
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x11a34 */
#include <stdint.h>
 
void init_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x119e0 */
#include <stdint.h>
 
void fini_dummy () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x12a00 */
#include <stdint.h>
 
void l_CHAR () {
    o1 = 0x2d800;
    local_0 = o1 + 0x218;
    o0 = *(local_0);
    l2 = o1;
    if (o0 > 0) {
        i0 = 0;
        goto label_5;
    }
    o0 = 0x2c400;
    l4 = o0;
    local_1 = o0 + 0x32c;
    o0 = *(local_1);
    o1 = 0x2c400;
    l5 = o1;
    local_2 = o1 + 0x334;
    *(local_2) = g0;
    if (o0 != 0) {
        sym_imp_free ();
    }
    o0 = 0x80;
    sym_imp_malloc ();
    l0 = o0;
    l3 = 0x80;
    local_3 = l4 + 0x32c;
    *(local_3) = o0;
    if (l0 == 0) {
        o0 = 0x2c400;
        local_4 = o0 + 0x324;
        o1 = *(local_4);
        o2 = 0x1a000;
        o0 = *(o1);
        o2 |= 0xa0;
        goto label_6;
    }
    o1 = 0x2d800;
    local_5 = o1 + 0x280;
    o0 = *(local_5);
    l6 = o1;
    o0 ();
    o1 = 0x2c400;
    l7 = o1;
    i0 = o0;
    o1 |= 0x111;
    local_6 = i0 + o1;
    o0 = *(local_6);
    g0 = o0 & 4;
    l1 = 1;
    if (o0 == 4) {
        goto label_7;
    }
    o0 = i0 - 0x30;
    local_7 = l2 + 0x218;
    *(local_7) = o0;
    *(l0) = i0;
    l0++;
    do {
label_0:
        local_8 = l6 + 0x280;
        o0 = *(local_8);
        o0 ();
        i0 = o0;
        o1 = i0 + 1;
        o0 = 0x12c00;
        if (o1 <= 0x30) {
            o0 |= 0x370;
            o1 <<= 2;
            local_9 = o0 + o1;
            o2 = *(local_9);
            __asm ("jmp o2");
        }
        o0 = l7 | 0x111;
        local_10 = i0 + o0;
        o1 = *(local_10);
        g0 = o1 & 4;
        *(l0) = i0;
        if (o1 == 4) {
            o0 = 0x2c400;
            local_11 = o0 + 0x108;
            o2 = *(local_11);
            o1 = 1;
            local_12 = l2 + 0x218;
            *(local_12) = o1;
            if (o2 == 0) {
                goto label_8;
            }
            o0 = 0x2c400;
            local_13 = o0 + 0x324;
            o1 = *(local_13);
            o2 = 0x1a000;
            o0 = *(o1);
            o2 |= 0xb0;
            o1 = 0x70;
            goto label_9;
        }
        local_14 = l2 + 0x218;
        o1 = *(local_14);
        l1++;
        o0 = o1 << 2;
        o0 += o1;
        o0 <<= 1;
        o0 += i0;
        o0 -= 0x30;
        local_15 = l2 + 0x218;
        *(local_15) = o0;
        l0++;
    } while (l1 != l3);
    l3 = l1 + 0x80;
    local_16 = l4 + 0x32c;
    o0 = *(local_16);
    o1 = l3;
    sym_imp_realloc ();
    local_17 = l4 + 0x32c;
    *(local_17) = o0;
    if (o0 == 0) {
        goto label_10;
    }
    local_18 = l4 + 0x32c;
    o0 = *(local_18);
    l0 = o0 + l1;
    goto label_0;
label_7:
    o0 = 0x2d800;
    o2 = 0x2c400;
    local_19 = o0 + 0x224;
    o3 = *(local_19);
    local_20 = o2 + 0xd8;
    o1 = *(local_20);
    o0 = i0;
    o3 ();
    local_21 = l6 + 0x280;
    o0 = *(local_21);
    o0 ();
    i0 = o0;
    if (i0 != 0x22) {
        o0 = 0x2ac00;
        if (i0 != 0x22) {
            goto label_11;
        }
    }
    o1 = i0;
    goto label_12;
label_11:
    o0 |= 0x78;
    o1 = i0 + 1;
    local_22 = o0 + o1;
    o0 = *(local_22);
    g0 = o0 & 2;
    o0 = 0x2d800;
    if (o0 == 2) {
        g0 = o0 & 1;
        if (i0 != 0xa) {
            o0 = 0x2d800;
            if (i0 != 0xa) {
                goto label_13;
            }
        }
        o0 = 0x2c400;
        if (i0 != -1) {
            goto label_14;
        }
        o0 = 0x2d800;
    }
label_13:
    local_23 = o0 + 0x224;
    o3 = *(local_23);
    o2 = 0x2c400;
    o0 = i0;
    local_24 = o2 + 0xd8;
    o1 = *(local_24);
    i0 = 0;
    o3 ();
    local_25 = o0 + 0x108;
    o1 = *(local_25);
label_14:
    goto label_5;
    o0 = 0x2d800;
    if (o1 > 1) {
        o2 = 0x2c400;
        local_26 = o0 + 0x224;
        o3 = *(local_26);
        local_27 = o2 + 0xd8;
        o1 = *(local_27);
        o0 = i0;
        o3 ();
        o1 = 0x2c400;
        o0 = 2;
        i0 = 0;
        local_28 = o1 + 0x330;
        *(local_28) = o0;
        goto label_5;
    }
    *(l0) = i0;
    l0++;
    l1 = 1;
    do {
label_1:
        local_29 = l6 + 0x280;
        o0 = *(local_29);
        o0 ();
        i0 = o0;
        o1 = i0 + 1;
        o0 = 0x12c00;
        if (o1 <= 0x30) {
            o0 |= 0x2ac;
            o1 <<= 2;
            local_30 = o0 + o1;
            o2 = *(local_30);
            __asm ("jmp o2");
        }
label_8:
        *(l0) = i0;
        l1++;
        l0++;
    } while (l1 != l3);
    l3 = l1 + 0x80;
    local_31 = l4 + 0x32c;
    o0 = *(local_31);
    o1 = l3;
    sym_imp_realloc ();
    local_32 = l4 + 0x32c;
    *(local_32) = o0;
    if (o0 == 0) {
        goto label_10;
    }
    local_33 = l4 + 0x32c;
    o0 = *(local_33);
    l0 = o0 + l1;
    goto label_1;
label_12:
    o0 = 9;
    local_34 = l5 + 0x334;
    *(local_34) = o0;
    l5 = o1 << 0x18;
    l1 = 0;
label_2:
    l2 = l5 >> 0x18;
    while (l1 < l3) {
        l0++;
label_3:
        local_35 = l6 + 0x280;
        o0 = *(local_35);
        o0 ();
        i0 = o0;
        if (i0 == 0xa) {
            goto label_15;
        }
        if (i0 == -1) {
            goto label_15;
        }
        if (l1 == l3) {
            goto label_16;
        }
        l1++;
        *(l0) = i0;
    }
label_15:
label_16:
    if (i0 == -1) {
        l3 += 0x80;
label_4:
        local_36 = l4 + 0x32c;
        o0 = *(local_36);
        o1 = l3;
        sym_imp_realloc ();
        local_37 = l4 + 0x32c;
        *(local_37) = o0;
        if (o0 == 0) {
label_10:
            o0 = 0x2c400;
            local_38 = o0 + 0x324;
            o1 = *(local_38);
            o2 = 0x2ac00;
            o0 = *(o1);
            o2 |= 0x100;
label_6:
            o1 = 0x71;
label_9:
            sym_err_fl ();
            i0 = o0;
            goto label_5;
        }
        local_39 = l4 + 0x32c;
        o0 = *(local_39);
        o0 += l1;
        local_40 = o0 - 1;
        *(local_40) = i0;
        l0 = o0;
        goto label_2;
    }
    if (i0 == 0xa) {
        i0 = -1;
        goto label_5;
    }
    local_41 = l6 + 0x280;
    o0 = *(local_41);
    if (i0 != 0xa) {
        goto label_17;
    }
    local_42 = l0 - 1;
    o0 = *(local_42);
    l2 = l5 >> 0x18;
    if (o0 != 0x5c) {
        goto label_3;
    }
    l0--;
    goto label_18;
label_17:
    o0 ();
    i0 = o0;
    o0 = l5 >> 0x18;
    o0 = 0x2d800;
    if (i0 != o0) {
        goto label_19;
    }
    l1++;
label_18:
    l3 += 0x80;
    if (l1 >= l3) {
        goto label_4;
    }
    *(l0) = i0;
    l0++;
    goto label_2;
label_19:
    o2 = 0x2c400;
    local_43 = o0 + 0x224;
    o3 = *(local_43);
    local_44 = o2 + 0xd8;
    o1 = *(local_44);
    o0 = i0;
    o3 ();
    i0 = 0;
    *(l0) = g0;
label_5:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x12330 */
#include <stdint.h>
 
void rd_count () {
    i0 -= 0x30;
    o0 = 0x2d800;
    if (i0 > 9) {
        i0 = 1;
        goto label_0;
    }
    local_0 = o0 + 0x218;
    *(local_0) = i0;
    i0 = o0;
    l0 = 0x2d800;
    l1 = 0x2d800;
    l2 = 0x2c400;
    while (o3 <= 0x39) {
        o0 = o1 << 2;
        o0 += o1;
        o0 <<= 1;
        o0 += o3;
        o0 -= 0x30;
        local_1 = i0 + 0x218;
        *(local_1) = o0;
        local_2 = l0 + 0x280;
        o0 = *(local_2);
        o0 ();
        o3 = o0;
        if (o3 <= 0x39) {
            goto label_1;
        }
        local_3 = i0 + 0x218;
        o1 = *(local_3);
    }
label_1:
    local_4 = l2 + 0xd8;
    o1 = *(local_4);
    local_5 = l1 + 0x224;
    o2 = *(local_5);
    o0 = o3;
    o2 ();
    local_6 = i0 + 0x218;
    o1 = *(local_6);
    i0 = 1;
    if (o1 > 0) {
        i0 = 0;
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x123cc */
#include <stdint.h>
 
void l_C () {
    l0 = 0x2d800;
    local_0 = l0 + 0x218;
    o0 = *(local_0);
    i0 = 0;
    if (o0 > 0) {
        goto label_0;
    }
    o1 = 0x2d800;
    o2 = 0x2c400;
    local_1 = o1 + 0x280;
    o0 = *(local_1);
    l1 = o1;
    i2 = o2;
    local_2 = o2 + 0x334;
    *(local_2) = g0;
    o0 ();
    i0 = o0;
    o0 = 0x2c400;
    if (i0 != 0x28) {
        local_3 = o0 + 0x108;
        o1 = *(local_3);
        i1 = o0;
        if (o1 > 1) {
            o0 = i0 - 0x30;
            o0 = 0x2d800;
            if (o0 <= 9) {
                goto label_1;
            }
            o2 = 0x2c400;
            local_4 = o0 + 0x224;
            o3 = *(local_4);
            local_5 = o2 + 0xd8;
            o1 = *(local_5);
            o0 = i0;
            o3 ();
            o1 = 0x2c400;
            o0 = 2;
            i0 = 0;
            local_6 = o1 + 0x330;
            *(local_6) = o0;
            goto label_0;
        }
label_1:
        o0 = i0;
        sym_rd_count ();
        o0 = 0x2c400;
        if (o0 != 0) {
            local_7 = o0 + 0xd8;
            o0 = *(local_7);
            o0 = 0x2c400;
            if (o0 != 0) {
                local_8 = o0 + 0xc;
                o0 = *(local_8);
                g0 = o0 & 0x10;
                o0 = 0x2c400;
                if (o0 != 0x10) {
                    goto label_2;
                }
            }
            local_9 = o0 + 0x324;
            o1 = *(local_9);
            o2 = 0x1a000;
            o0 = *(o1);
            o2 |= 0x38;
            goto label_3;
label_2:
            local_10 = o0 + 0x324;
            o1 = *(local_10);
            o2 = *(o1);
            o2 = 0x2d800;
            if (o2 == 0) {
                o1 = 0x1a000;
            } else {
                local_11 = l1 + 0x280;
                o0 = *(local_11);
                o0 ();
                o0 = 0x2c400;
                if (o0 == 0x2a) {
                    goto label_4;
                }
                local_12 = o0 + 0xd8;
                o0 = *(local_12);
                o0 = 0x2c400;
                if (o0 != 0) {
                    local_13 = o0 + 0xc;
                    o0 = *(local_13);
                    g0 = o0 & 0x10;
                    o0 = 0x2c400;
                    if (o0 != 0x10) {
                        goto label_5;
                    }
                }
                local_14 = o0 + 0x324;
                o1 = *(local_14);
                o2 = 0x1a000;
                o0 = *(o1);
                o2 |= 0x50;
                goto label_3;
label_5:
                local_15 = o0 + 0x324;
                o1 = *(local_15);
                o2 = *(o1);
                o2 = 0x2d800;
                if (o2 == 0) {
                    goto label_6;
                }
            }
            local_16 = o2 + 0x29c;
            o0 = *(local_16);
            o3 = 0x2c400;
            o0 &= -3;
            o1 = -1;
            local_17 = o2 + 0x29c;
            *(local_17) = o0;
            local_18 = o3 + 0xf8;
            *(local_18) = o1;
            goto label_7;
label_6:
            o1 = 0x1a048;
        }
        o0 = -1;
        sym_f_fatal ();
label_7:
        i0 = -1;
        goto label_0;
label_4:
        local_19 = l1 + 0x280;
        o0 = *(local_19);
        o0 ();
        i0 = o0;
        o0 = 0x2d800;
        if (i0 == 0x28) {
            goto label_8;
        }
        local_20 = o0 + 0x224;
        o3 = *(local_20);
        o2 = 0x2c400;
        o0 = i0;
        local_21 = o2 + 0xd8;
        o1 = *(local_21);
        i0 = 0;
        o3 ();
        o0 = 1;
    }
    goto label_0;
    local_22 = l0 + 0x218;
    *(local_22) = o0;
    i1 = 0x2c400;
label_8:
    o0 = 0x2ac00;
    l0 = o0 | 0x78;
    l6 = 0x2d800;
    l5 = 0x2c400;
    local_23 = l1 + 0x280;
    o0 = *(local_23);
    do {
        o0 ();
        i0 = o0;
        o0 = i0 + 1;
        local_24 = l0 + o0;
        o1 = *(local_24);
        g0 = o1 & 0x20;
        local_25 = l1 + 0x280;
        o0 = *(local_25);
    } while (o1 != 0x20);
    local_26 = l5 + 0xd8;
    o1 = *(local_26);
    local_27 = l6 + 0x224;
    o2 = *(local_27);
    o0 = i0;
    o2 ();
    local_28 = i1 + 0x108;
    l7 = *(local_28);
    o0 = 1;
    local_29 = i1 + 0x108;
    *(local_29) = g0;
    o1 = 0;
    sym_l_R ();
    i0 = o0;
    local_30 = i2 + 0x334;
    o0 = *(local_30);
    if (o0 == 0) {
        o1 = 0x2c400;
        if (o0 == 0) {
            o0 = 0x2c400;
            local_31 = o0 + 0x324;
            o1 = *(local_31);
            o2 = 0x1a000;
            o0 = *(o1);
            o2 |= 0x58;
        } else {
            o0 = 0x2ac00;
        }
label_3:
        o1 = 0x70;
        sym_err_fl ();
        i0 = o0;
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1277c */
#include <stdint.h>
 
void l_L () {
    o4 = 0x2d800;
    local_0 = o4 + 0x218;
    o0 = *(local_0);
    i0 = 0;
    if (o0 > 0) {
        goto label_0;
    }
    o2 = 0x2d800;
    o3 = 0x2c400;
    o1 = 1;
    local_1 = o2 + 0x280;
    o0 = *(local_1);
    local_2 = o4 + 0x218;
    *(local_2) = o1;
    l0 = o2;
    l1 = o3;
    local_3 = o3 + 0x334;
    *(local_3) = g0;
    o0 ();
    o1 = 0x2c400;
    o4 = o0;
    o1 |= 0x111;
    local_4 = o4 + o1;
    o0 = *(local_4);
    g0 = o0 & 4;
    if (o4 != 0x2e) {
        o0 = o4;
        sym_rd_count ();
        local_5 = l0 + 0x280;
        o0 = *(local_5);
        o0 ();
        o0 = 0x2c400;
        if (o0 != 0x2a) {
            local_6 = o0 + 0xd8;
            o0 = *(local_6);
            o0 = 0x2c400;
            if (o0 != 0) {
                local_7 = o0 + 0xc;
                o0 = *(local_7);
                g0 = o0 & 0x10;
                o0 = 0x2c400;
                if (o0 != 0x10) {
                    goto label_1;
                }
            }
            local_8 = o0 + 0x324;
            o1 = *(local_8);
            o2 = 0x1a000;
            o0 = *(o1);
            o2 |= 0x50;
            goto label_2;
label_1:
            local_9 = o0 + 0x324;
            o1 = *(local_9);
            o2 = *(o1);
            o2 = 0x2d800;
            if (o2 != 0) {
                local_10 = o2 + 0x29c;
                o0 = *(local_10);
                o3 = 0x2c400;
                o0 &= -3;
                o1 = -1;
                local_11 = o2 + 0x29c;
                *(local_11) = o0;
                local_12 = o3 + 0xf8;
                *(local_12) = o1;
            } else {
                o1 = 0x1a048;
                o0 = -1;
                sym_f_fatal ();
            }
            i0 = -1;
            goto label_0;
        }
        local_13 = l0 + 0x280;
        o0 = *(local_13);
        o0 ();
        o4 = o0;
    }
    if (o4 == 0x54) {
        local_14 = l0 + 0x280;
        o0 = *(local_14);
        o0 ();
        o4 = o0;
    }
    o2 = 0x2c400;
    if (o4 != 0x54) {
        if (o4 <= 0x66) {
            o0 = 0x2ac00;
            if (o4 == 0x46) {
                goto label_3;
            }
            o0 |= 0x78;
            goto label_4;
        }
        if (o4 == 0x74) {
            goto label_5;
        }
        o0 = 0x2ac00;
        if (o4 != 0x74) {
            goto label_6;
        }
        o2 = 0x2c400;
    }
    o0 = 0x3ff00000;
    goto label_7;
label_5:
    o2 = 0x2c400;
label_3:
    o0 = 0;
label_7:
    o1 = 0;
    o0 |= 0x78;
label_6:
    goto label_8;
label_4:
    o1 = o4 + 1;
    local_15 = o0 + o1;
    o0 = *(local_15);
    g0 = o0 & 2;
    o0 = 0x2d800;
    if (o0 == 2) {
        g0 = o0 & 1;
        o0 = 0x2d800;
        if (o0 != 1) {
            goto label_9;
        }
        o0 = 0x2c400;
        if (o4 != -1) {
            goto label_10;
        }
        o0 = 0x2d800;
    }
label_9:
    o2 = 0x2c400;
    local_16 = o0 + 0x224;
    o3 = *(local_16);
    i0 = 0;
    local_17 = o2 + 0xd8;
    o1 = *(local_17);
    o0 = o4;
    o3 ();
    local_18 = o0 + 0x108;
    o1 = *(local_18);
label_10:
    goto label_0;
    o0 = 0x2d800;
    if (o1 > 1) {
        o2 = 0x2c400;
        local_19 = o0 + 0x224;
        o3 = *(local_19);
        i0 = 0;
        local_20 = o2 + 0xd8;
        o1 = *(local_20);
        o0 = o4;
        o3 ();
        o1 = 0x2c400;
        o0 = 2;
        local_21 = o1 + 0x330;
        *(local_21) = o0;
        goto label_0;
    }
    o0 = 0x2c400;
    local_22 = o0 + 0x324;
    o1 = *(local_22);
    o2 = 0x1a000;
    o0 = *(o1);
    o2 |= 0x98;
label_2:
    o1 = 0x70;
    sym_err_fl ();
    i0 = o0;
    goto label_0;
label_8:
    o1 = 3;
    o0 = 0x2ac00;
    i0 = o0 | 0x78;
    local_23 = l1 + 0x334;
    *(local_23) = o1;
    local_24 = l0 + 0x280;
    o0 = *(local_24);
    do {
        o0 ();
        o2 = o0;
        o0 = o2 + 1;
        local_25 = i0 + o0;
        o1 = *(local_25);
        g0 = o1 & 1;
        if (o2 != -1) {
            goto label_11;
        }
        local_26 = l0 + 0x280;
        o0 = *(local_26);
    } while (o2 != -1);
label_11:
    o0 = 0x2d800;
    local_27 = o0 + 0x224;
    o3 = *(local_27);
    i0 = 0;
    o0 = o2;
    o2 = 0x2c400;
    local_28 = o2 + 0xd8;
    o1 = *(local_28);
    o3 ();
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x11d78 */
#include <stdint.h>
 
void l_R () {
    i4 = i1;
    if (i0 != 0) {
        goto label_0;
    }
    o1 = 0x2d800;
    local_0 = o1 + 0x218;
    o0 = *(local_0);
    i0 = 0;
    if (o0 > 0) {
        void (*0x12328)() ();
    }
    o0 = 1;
    local_1 = o1 + 0x218;
    *(local_1) = o0;
label_0:
    o3 = 0x2ac00;
    o2 = 0x2c400;
    o0 = 0;
    o1 = 0;
    i5 = o3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x13a64 */
#include <stdint.h>
 
void opn_err () {
    local_0 = i2 + 8;
    o0 = *(local_0);
    o0 = 0x2ac00;
    if (o0 != 0) {
        local_1 = o0 + 0x12c;
        o1 = *(local_1);
        local_2 = i2 + 0xc;
        o0 = *(local_2);
        o0 = 0x2ac00;
        if (o0 >= o1) {
            o1 = 0;
            loc_Letext ();
            o0 = 0x2ac00;
        }
        local_3 = o0 + 0x128;
        o4 = *(local_3);
        o2 = 0x2d800;
        local_4 = o2 + 0x290;
        o3 = *(local_4);
        local_5 = i2 + 0xc;
        o1 = *(local_5);
        o2 = o4;
        local_6 = i2 + 8;
        o0 = *(local_6);
        local_7 = o3 + 4;
        *(local_7) = o4;
        sym_g_char ();
    }
    o0 = i0;
    o1 = i1;
    sym_f_fatal ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14a54 */
#include <stdint.h>
 
void loc_Letext_8 () {
    o0 = 0x1a1b0;
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14a8c */
#include <stdint.h>
 
void sigqdie () {
    o0 = 0x1a1d8;
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14aa8 */
#include <stdint.h>
 
void sigindie () {
    o0 = 0x1a1e8;
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14a70 */
#include <stdint.h>
 
void sigidie () {
    o0 = 0x1a1c8;
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14ac4 */
#include <stdint.h>
 
void sigtdie () {
    o0 = 0x1a1f8;
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14ae0 */
#include <stdint.h>
 
void sigtrdie () {
    o0 = 0x1a200;
    return sym_sig_die ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x14e68 */
#include <stdint.h>
 
void copy () {
    l1 = fp - 0x410;
    do {
        l0 = i1;
        if (i1 > 0x400) {
            l0 = 0x400;
        }
        o0 = l1;
        o1 = l0;
        o2 = 1;
        o3 = i0;
        sym_imp_fread ();
        o0 = l1;
        if (o0 == 0) {
            goto label_0;
        }
        o1 = l0;
        o2 = 1;
        o3 = i2;
        sym_imp_fwrite ();
        i1 -= l0;
        if (o0 == 0) {
            i0 = 1;
            goto label_1;
        }
    } while (i1 > 0x400);
label_0:
    i0 = 0;
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x156c0 */
#include <stdint.h>
 
void loc_Letext_12 () {
    o2 = *(i0);
    i0++;
    o0 = *(i0);
    o1 = *(i0);
    if (o0 == 0) {
        goto label_0;
    }
    o0 = o2 << 0x18;
    o2 = o0 >> 0x18;
    do {
        o0 = o1 << 0x18;
        o1 = o0 >> 0x18;
        i0++;
        if (o1 == o2) {
            o0 = *(i0);
            if (o0 != o1) {
                goto label_1;
            }
            i0++;
        }
        o0 = *(i0);
        o1 = *(i0);
    } while (o0 != 0);
label_0:
    o0 = 0x2c400;
    local_0 = o0 + 0x324;
    o1 = *(local_0);
    o2 = *(o1);
    o1 = 0x2c400;
    if (o2 == 0) {
        o1 = 0x1a710;
        o0 = 0x64;
        sym_f_fatal ();
        i0 = 0;
    } else {
        o0 = 0x64;
        local_1 = o1 + 0xf8;
        *(local_1) = o0;
        i0 = 0;
    }
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x15df0 */
#include <stdint.h>
 
void e_d () {
    l3 = i0;
    o1 = fp - 0x14;
    o2 = 1;
    o0 = l3;
    sym_gt_num ();
    i0 = o0;
    local_0 = fp - 0x14;
    o1 = *(local_0);
    o0 = 6;
    o2 = 0;
    o3 = 0;
    sym_op_gen ();
    o1 = *(i0);
    l2 = 0;
    o1 -= 0x41;
    o1 <<= 0x18;
    o1 >>= 0x18;
    l0 = 0;
    i0++;
    if (o1 > 0x39) {
        void (*0x1615c)() ();
    }
    o0 = 0x16190;
    o1 <<= 2;
    local_1 = o0 + o1;
    o2 = *(local_1);
    __asm ("jmp o2");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x157d0 */
#include <stdint.h>
 
void gt_num () {
    g3 = *(o0);
    o4 = 0;
    o5 = 0;
    goto label_1;
label_0:
    g2 += o4;
    g2 <<= 1;
    g2 += o3;
    o4 = g2 - 0x30;
    o5++;
    do {
        o0++;
        g3 = *(o0);
label_1:
        g2 = g3 << 0x18;
        o3 = g2 >> 0x18;
        g2 = g3 - 0x30;
    } while (o3 == 0x20);
    g2 &= 0xff;
    g2 = o4 << 2;
    if (g2 <= 9) {
        goto label_0;
    }
    *(o1) = o4;
    if (o5 == 0) {
        o0 = 0;
        if (o2 != 0) {
        }
        *(o1) = o2;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x15760 */
#include <stdint.h>
 
void op_gen () {
    l1 = 0x2c400;
    local_0 = l1 + 0xf0;
    o1 = *(local_0);
    o0 = 0x2ac00;
    l2 = o1 << 4;
    l3 = o0 | 0x3b4;
    l0 = l2 + l3;
    if (o1 > 0x12b) {
        o0 = 0x2c000;
        o1 = 0x1a720;
        o0 |= 0x3b8;
        sym_imp_fprintf ();
        o1 = 0x2d800;
        local_1 = o1 + 0x20c;
        o0 = *(local_1);
        local_2 = l1 + 0xf0;
        o0 = *(local_2);
    }
    sym_sig_die ();
    local_3 = l2 + l3;
    *(local_3) = i0;
    i0 = o0;
    o0++;
    local_4 = l0 + 0xc;
    *(local_4) = i3;
    local_5 = l1 + 0xf0;
    *(local_5) = o0;
    local_6 = l0 + 4;
    *(local_6) = i1;
    local_7 = l0 + 8;
    *(local_7) = i2;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x15844 */
#include <stdint.h>
 
void f_s () {
    o0 = *(i0);
    while (o0 == 0x20) {
        o0 = *(i0);
        i0++;
    }
    o0 = *(i0);
    i0++;
    if (o0 == 0x28) {
        o1 = 0x2d800;
        local_0 = o1 + 0x28c;
        o0 = *(local_0);
        o0++;
        local_1 = o1 + 0x28c;
        *(local_1) = o0;
        if (o0 == 2) {
            o0 = 0x2d800;
            local_2 = o0 + 0x220;
            *(local_2) = i1;
        }
        o1 = i1;
        o0 = 1;
        o2 = 0;
        o3 = 0;
        sym_op_gen ();
        i0 = 0;
        if (o0 < 0) {
            goto label_0;
        }
        o0 = i0;
        sym_f_list ();
        i0 = o0;
        if (o0 != 0) {
            goto label_0;
        }
    }
    i0 = 0;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x158d0 */
#include <stdint.h>
 
void ne_d () {
    o0 = *(i0);
    o0 -= 2;
    o0 <<= 0x18;
    o1 = o0 >> 0x18;
    l0 = 0;
    if (o1 > 0x76) {
        void (*0x159fc)() ();
    }
    o0 = 0x15c14;
    o1 <<= 2;
    local_0 = o0 + o1;
    o2 = *(local_0);
    __asm ("jmp o2");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16278 */
#include <stdint.h>
 
void i_tem () {
    o0 = *(i0);
    l0 = fp - 0x14;
    if (o0 != 0x29) {
        o0 = i0;
        o1 = l0;
        sym_ne ();
        local_0 = fp - 0x14;
        i0 = *(local_0);
        if (o0 != 0) {
            goto label_0;
        }
        o1 = l0;
        o0 = i0;
        sym_e ();
        o0 = i0;
        if (o0 != 0) {
            local_1 = fp - 0x14;
            i0 = *(local_1);
        } else {
            o1 = fp - 0x18;
            o2 = 1;
            sym_gt_num ();
            i0 = o0;
            local_2 = fp - 0x18;
            o1 = *(local_2);
            o0 = 6;
            o2 = 0;
            o3 = 0;
            sym_op_gen ();
            o1 = o0;
            i0 = 0;
            if (o0 < 0) {
                goto label_0;
            }
            o0 = i0;
            sym_f_s ();
            i0 = o0;
        }
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16308 */
#include <stdint.h>
 
void f_list () {
    o0 = *(i0);
    o1 = *(i0);
    if (o0 == 0) {
        goto label_1;
    }
    l0 = 0x2d800;
label_0:
    if (o1 != 0x20) {
        goto label_2;
    }
    i0++;
    do {
        o0 = *(i0);
        i0++;
    } while (o0 == 0x20);
label_2:
    o0 = i0;
    sym_i_tem ();
    i0 = o0;
    i0 = 0;
    if (o0 == 0) {
        goto label_3;
    }
    o0 = *(i0);
    while (o0 == 0x20) {
        o0 = *(i0);
        i0++;
    }
    o0 = *(i0);
    if (o0 == 0x29) {
        i0++;
    } else {
        o0 = *(i0);
        if (o0 != 0x29) {
            goto label_4;
        }
        local_0 = l0 + 0x28c;
        o0 = *(local_0);
        o0--;
        local_1 = l0 + 0x28c;
        *(local_1) = o0;
        if (o0 == 0) {
            o0 = 0x2d800;
            local_2 = o0 + 0x220;
            o1 = *(local_2);
            o2 = 0;
            o0 = 2;
        } else {
            o0 = 3;
            o1 = 0;
            o2 = 0;
        }
        o3 = 0;
        sym_op_gen ();
        i0++;
        goto label_3;
    }
    o0 = *(i0);
label_4:
    o1 = *(i0);
    if (o0 != 0) {
        goto label_0;
    }
label_1:
    i0 = 0;
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16ad4 */
#include <stdint.h>
 
void loc_Letext_13 () {
    o0 = 0x2d800;
    local_0 = o0 + 0x21c;
    o1 = *(local_0);
    o1 = 0x2d800;
    if (o1 != 0) {
        local_1 = o1 + 0x214;
        o0 = *(local_1);
        o0 ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16bf4 */
#include <stdint.h>
 
void lwrt_A () {
    o0 = 0x2c400;
    local_0 = o0 + 0x104;
    o1 = *(local_0);
    l1 = 0;
    l0 = i0 + i1;
    l2 = 0x2d800;
    o2 = 0x2c000;
    if (o1 == 0) {
        goto label_0;
    }
    l1 = 3;
    if (i1 <= 1) {
        goto label_1;
    }
    local_1 = l0 - 1;
    o0 = *(local_1);
    if (i0 != l0) {
        goto label_2;
    }
    i1--;
    do {
        o0 = i1 + i0;
        if (i1 <= 1) {
            goto label_3;
        }
        local_2 = o0 - 1;
        o1 = *(local_2);
        i1--;
    } while (o1 == 0x20);
label_3:
    l0 = i0 + i1;
label_1:
label_2:
    o1 = i0;
    __asm ("bcc 0x16c84");
    o0 = *(o1);
    do {
        o1++;
        if (o0 == 0x27) {
            l1++;
        }
        o0 = *(o1);
        __asm ("bcs,a 0x16c68");
    } while (1);
label_0:
    local_3 = l2 + 0x21c;
    o0 = *(local_3);
    local_4 = o2 + 0x390;
    o1 = *(local_4);
    o0 += i1;
    o0 += l1;
    if (l1 >= 0) {
        loc_Letext ();
    }
    o0 = 0x2d800;
    if (l1 == 0) {
        local_5 = l2 + 0x21c;
        o0 = *(local_5);
        if (l1 != 0) {
            goto label_4;
        }
        o0 = 0x2d800;
    }
    local_6 = o0 + 0x2a4;
    o1 = *(local_6);
    o0 = 0x20;
    o1 ();
label_4:
    o0 = 0x2d800;
    if (l1 == 0) {
        goto label_5;
    }
    local_7 = o0 + 0x2a4;
    o1 = *(local_7);
    i1 = o0;
    o0 = 0x27;
    while (1) {
        local_8 = i1 + 0x2a4;
        o1 = *(local_8);
        if (o0 == 0x27) {
            o0 = 0x27;
            o1 ();
            o0 = *(i0);
            local_9 = i1 + 0x2a4;
            o1 = *(local_9);
        }
        i0++;
        o1 ();
        o0 = *(i0);
        __asm ("bcs,a 0x16cf0");
    }
    local_10 = i1 + 0x2a4;
    o1 = *(local_10);
    o0 = 0x27;
    o1 ();
label_5:
    goto label_6;
    l1 = 0x2d800;
    __asm ("bcc 0x16d5c");
    o0 = *(i0);
    do {
        local_11 = l1 + 0x2a4;
        o1 = *(local_11);
        i0++;
        o1 ();
        o0 = *(i0);
        __asm ("bcs,a 0x16d44");
    } while (1);
label_6:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16f6c */
#include <stdint.h>
 
void lwrt_C () {
    l0 = fp - 0x28;
    o1 = i0;
    o2 = i1;
    o0 = l0;
    sym_l_g ();
    local_0 = fp - 0x28;
    o1 = *(local_0);
    l1 = fp - 0x40;
    i0 = o0;
    l3 = 0x2d800;
    l4 = 0x2c000;
    l2 = 0x2d800;
    if (o1 != 0x20) {
        goto label_0;
    }
    do {
        l0++;
        o0 = *(l0);
        i0--;
    } while (o0 == 0x20);
label_0:
    o1 = i2;
    o2 = i3;
    o0 = l1;
    sym_l_g ();
    local_1 = fp - 0x40;
    o1 = *(local_1);
    i1 = o0 + 1;
    i2 = l1;
    if (o1 != 0x20) {
        goto label_1;
    }
    do {
        i2++;
        o0 = *(i2);
        i1--;
    } while (o0 == 0x20);
label_1:
    local_2 = l3 + 0x21c;
    o0 = *(local_2);
    o0 += i0;
    o0 += i1;
    local_3 = l4 + 0x390;
    o1 = *(local_3);
    o0 += 3;
    local_4 = l2 + 0x2a4;
    o1 = *(local_4);
    if (o0 >= o1) {
        loc_Letext ();
        local_5 = l2 + 0x2a4;
        o1 = *(local_5);
    }
    o0 = 0x20;
    o1 ();
    local_6 = l2 + 0x2a4;
    o2 = *(local_6);
    o0 = 0x28;
    o2 ();
    o0 = l0;
    sym_l_put ();
    local_7 = l2 + 0x2a4;
    o1 = *(local_7);
    o0 = 0x2c;
    o1 ();
    local_8 = l3 + 0x21c;
    o0 = *(local_8);
    local_9 = l4 + 0x390;
    o1 = *(local_9);
    o0 += i1;
    o1 = 0x2d800;
    if (o0 >= o1) {
        local_10 = o1 + 0x214;
        o0 = *(local_10);
        o0 ();
        local_11 = l2 + 0x2a4;
        o1 = *(local_11);
        o0 = 0x20;
        o1 ();
    }
    o0 = i2;
    sym_l_put ();
    local_12 = l2 + 0x2a4;
    o1 = *(local_12);
    o0 = 0x29;
    o1 ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16f1c */
#include <stdint.h>
 
void lwrt_F () {
    l0 = fp - 0x28;
    o1 = i0;
    o2 = i1;
    o0 = l0;
    sym_l_g ();
    o1 = 0x2d800;
    local_0 = o1 + 0x21c;
    o2 = *(local_0);
    o3 = 0x2c000;
    local_1 = o3 + 0x390;
    o1 = *(local_1);
    o2 += o0;
    if (o2 >= o1) {
        loc_Letext ();
    }
    o0 = l0;
    sym_l_put ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16d64 */
#include <stdint.h>
 
void l_g () {
    local_0 = fp - 0x18;
    *(local_0) = i1;
    local_1 = fp - 0x14;
    *(local_1) = i2;
    local_2 = fp - 0x18;
    f2 = *(local_2);
    o1 = 0x1a400;
    __asm ("fmovs f2, f4");
    l0 = i0;
    o0 = 0x20;
    __asm ("fmovs f3, f5");
    local_3 = o1 + 0x380;
    f2 = *(local_3);
    __asm ("fcmped f4, f2");
    __asm ("fbuge 0x16da4");
    *(l0) = o0;
    __asm ("fnegs f4, f4");
    o0 = 0x2d;
    local_4 = l0 + 1;
    *(local_4) = o0;
    o4 = 0x1a400;
    local_5 = o4 + 0x380;
    f2 = *(local_5);
    __asm ("fcmpd f4, f2");
    __asm ("fbne 0x16dd8");
    i0 = l0 + 2;
    o0 = 0x30;
    *(i0) = o0;
    i0++;
    o0 = 0x2e;
    *(i0) = o0;
    goto label_0;
    local_6 = fp - 0x18;
    *(local_6) = f4;
label_0:
    i0++;
    *(i0) = g0;
    goto label_1;
    do {
        o0 = *(i0);
        i0++;
    } while (o0 != 0);
    i0 -= l0;
    goto label_2;
    *(i0) = o1;
    o2 = 0x45;
    do {
        o1 = o2;
        i0++;
        o2 = *(i0);
        o0 = o1 << 0x18;
        *(i0) = o1;
    } while (o0 != 0);
    i0 -= l0;
    goto label_2;
label_1:
    i0 -= l0;
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16ee8 */
#include <stdint.h>
 
void l_put () {
    o1 = *(i0);
    o0 = 0x2d800;
    local_0 = o0 + 0x2a4;
    l0 = *(local_0);
    while (o1 != 0) {
        o0 = o1;
        l0 ();
        o1 = *(i0);
        i0++;
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x16bb0 */
#include <stdint.h>
 
void lwrt_L () {
    o0 = 0x2d800;
    local_0 = o0 + 0x21c;
    o1 = *(local_0);
    o2 = 0x2c000;
    local_1 = o2 + 0x390;
    o0 = *(local_1);
    o1 += 2;
    local_2 = fp + 0x44;
    *(local_2) = i0;
    if (o1 >= o0) {
        loc_Letext ();
    }
    o2 = i1;
    o0 = fp + 0x44;
    o1 = 2;
    sym_wrt_L ();
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x17de8 */
#include <stdint.h>
 
void rd_AW () {
    l0 = i1;
    o0 = l0 - i2;
    if (l0 < i2) {
        goto label_1;
    }
    i1 = 0;
    l0 = o0;
    if (i1 >= o0) {
        goto label_2;
    }
    l1 = 0x2d800;
    local_0 = l1 + 0x298;
    o0 = *(local_0);
    do {
        o0 ();
        i1++;
        if (o0 < 0) {
            goto label_3;
        }
        local_1 = l1 + 0x298;
        o0 = *(local_1);
    } while (i1 < l0);
    i1 = 0;
label_2:
    i0 = 0;
    if (i1 >= i2) {
        goto label_4;
    }
    l0 = 0x2d800;
    do {
        local_2 = l0 + 0x298;
        o0 = *(local_2);
        o0 ();
        o2 = i0;
        if (o0 < 0) {
            goto label_3;
        }
        i0++;
        o1 = 0x20;
        if (o0 != 0xa) {
            o1 = o0;
        }
        i1++;
        *(o2) = o1;
    } while (i1 < i2);
    i0 = 0;
    goto label_4;
    do {
label_3:
        i0 = o0;
        goto label_4;
label_1:
        i1 = 0;
        o0 = i2 - l0;
        if (i1 >= l0) {
            goto label_5;
        }
        l1 = 0x2d800;
label_0:
        local_3 = l1 + 0x298;
        o0 = *(local_3);
        o0 ();
        o2 = i0;
    } while (o0 < 0);
    i0++;
    o1 = 0x20;
    if (o0 != 0xa) {
        o1 = o0;
    }
    i1++;
    *(o2) = o1;
    if (i1 < l0) {
        goto label_0;
    }
    o0 = i2 - l0;
label_5:
    i0 = 0;
    if (o0 <= 0) {
        goto label_4;
    }
    i1 = o0;
    o0 = 0x20;
    do {
        *(i0) = o0;
        i1--;
        i0++;
    } while (i1 != -1);
    i0 = 0;
label_4:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x17d80 */
#include <stdint.h>
 
void rd_A () {
    l0 = 0;
    i0 = 0;
    if (l0 >= i1) {
        goto label_0;
    }
    l1 = 0x2d800;
    do {
        local_0 = l1 + 0x298;
        o0 = *(local_0);
        o0 ();
        o1 = i0;
        if (o0 < 0) {
            i0 = o0;
            goto label_0;
        }
        i0 = o1 + 1;
        o2 = 0x20;
        if (o0 != 0xa) {
            o2 = o0;
        }
        l0++;
        *(o1) = o2;
    } while (l0 < i1);
    i0 = 0;
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x177e4 */
#include <stdint.h>
 
void rd_F () {
    l0 = fp - 0x48;
    o0 = 0;
    o1 = 0;
    i4 = l0;
    l7 = i0;
    l6 = l0;
    l3 = fp - 0x20;
    l1 = g0 - i2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x17464 */
#include <stdint.h>
 
void rd_I () {
    l3 = i0;
    l0 = 0;
    l1 = 0;
    if (i1 <= 0) {
        goto label_0;
    }
    l2 = 0x2d800;
    while (i0 == 0x2c) {
        i1--;
        if (i2 == 4) {
            goto label_1;
        }
        local_0 = l2 + 0x298;
        o0 = *(local_0);
        o0 ();
        i0 = o0;
        if (i0 < 0x20) {
            goto label_2;
        }
    }
    l5 = 0;
    if (i0 != 0x2c) {
        if (i0 <= 0x2d) {
            if (i0 != 0x2b) {
                o0 = i0 - 0x30;
                if (i0 == 0x2b) {
                    goto label_3;
                }
            } else {
                o0 = i0 - 0x30;
            }
        }
        if (o0 == 9) {
            goto label_4;
        }
    } else {
        i1 = 0;
        goto label_0;
label_4:
        l5 = 1;
        goto label_3;
    }
    if (i2 > 4) {
        goto label_1;
    }
    l1 = o0;
    l0 = o0 >> 0x1f;
label_3:
    i1--;
    if (l5 == 0) {
        goto label_5;
    }
    l4 = 0x2d800;
    local_1 = l2 + 0x298;
    o0 = *(local_1);
    do {
        o0 ();
        i0 = o0;
        o0 = i0 - 0x30;
        if (o0 < 0) {
            goto label_2;
        }
        o3 = i3;
        if (o0 <= 9) {
            o2 = i3 >> 0x1f;
            o0 = l0;
            o1 = l1;
            sym_imp_mul64 ();
            o3 = i0;
            o1 += o3;
            o2 = i0 >> 0x1f;
            o0 += o2;
            l1 = o1 - 0x30;
            l0 = o0 - 1;
        } else {
            if (i0 != 0xa) {
                if (i0 != 0x2c) {
                    if (l5 != 0) {
                        goto label_5;
                    }
                }
                i1 = 0;
                goto label_6;
            }
            local_2 = l4 + 0x204;
            o0 = *(local_2);
            o3 = i3;
            if (o0 == 0) {
                goto label_7;
            }
            o0 = l0;
            o1 = l1;
            o2 = i3 >> 0x1f;
            sym_imp_mul64 ();
            l0 = o0;
            l1 = o1;
        }
label_7:
        i1--;
        local_3 = l2 + 0x298;
        o0 = *(local_3);
    } while (i1 != -1);
label_6:
label_5:
    if (i2 != 4) {
        l1 = g0 - l1;
        l0 = g0 - l0;
label_0:
    }
label_1:
    if (i2 == 1) {
        *(l3) = l1;
    } else {
        if (i2 == 8) {
            *(l3) = l1;
        } else {
            *(l3) = l1;
            if (i2 != 8) {
                goto label_8;
            }
        }
    }
label_8:
    i1--;
    if (i1 == -1) {
        goto label_9;
    }
    l0 = 0x2d800;
    if (i1 == -1) {
        goto label_10;
    }
    local_4 = l0 + 0x298;
    o0 = *(local_4);
    do {
        o0 ();
        i0 = o0;
        i1--;
        if (i1 < -1) {
            goto label_2;
        }
        local_5 = l0 + 0x298;
        o0 = *(local_5);
    } while (i1 != -1);
label_10:
    o1 = 0x2c400;
    o0 = 0x73;
    local_6 = o1 + 0xf8;
    *(local_6) = o0;
    i0 = 0x73;
    goto label_2;
label_9:
    i0 = 0;
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1765c */
#include <stdint.h>
 
void rd_L () {
    l1 = 0x2d800;
    if (i1 <= 0) {
        goto label_3;
    }
    local_0 = l1 + 0x298;
    o0 = *(local_0);
    while (o0 == 0x20) {
        local_1 = l1 + 0x298;
        o0 = *(local_1);
        if (i1 == 0) {
            goto label_3;
        }
        o0 ();
        if (o0 < 0x20) {
            goto label_1;
        }
        i1--;
    }
    l0 = 0;
    do {
        o0 = 1;
        if (o0 == 0x54) {
            goto label_4;
        }
        if (o0 <= 0x66) {
            l0++;
            if (o0 == 0x2e) {
                goto label_5;
            }
            if (o0 <= 0x46) {
                if (o0 == 0x2c) {
                    goto label_6;
                }
                if (i1 == 0) {
                    goto label_6;
                }
                goto label_3;
            }
            if (i1 == 0) {
                goto label_7;
            }
            goto label_3;
        }
        if (o0 == 0x74) {
            goto label_7;
        }
        if (i1 == 0) {
            goto label_8;
        }
label_5:
        goto label_3;
        if (i1 != 0) {
            goto label_3;
        }
        local_2 = l1 + 0x298;
        o0 = *(local_2);
        if (i1 == 0) {
            goto label_3;
        }
        o0 ();
        i1--;
    } while (o0 >= 0);
    do {
label_1:
        i0 = o0;
        goto label_9;
label_8:
        o0 = 1;
        goto label_4;
label_7:
        o0 = 0;
        goto label_4;
label_3:
        l0 = 0x2d800;
        if (o0 <= 0) {
            goto label_6;
        }
        local_3 = l0 + 0x298;
        o0 = *(local_3);
label_0:
        o0 ();
        i1--;
    } while (o0 < 0);
    local_4 = l0 + 0x298;
    o0 = *(local_4);
    if (i1 > 0) {
        goto label_0;
    }
label_6:
    o1 = 0x2c400;
    o0 = 0x74;
    local_5 = o1 + 0xf8;
    *(local_5) = o0;
    i0 = 0x74;
    goto label_9;
label_4:
    if (i2 != 2) {
        *(i0) = o0;
        if (i2 == 2) {
            goto label_10;
        }
        *(i0) = o0;
    } else {
        *(i0) = o0;
    }
label_10:
    o0 = i1;
label_2:
    i1--;
    if (o0 <= 0) {
        goto label_11;
    }
    local_6 = l1 + 0x298;
    o0 = *(local_6);
    o0 ();
    if (o0 < 0x2c) {
        goto label_1;
    }
    if (o0 == 0xa) {
        goto label_11;
    }
    o0 = i1;
    if (o0 != 0xa) {
        goto label_2;
    }
label_11:
    i0 = 0;
label_9:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x171f8 */
#include <stdint.h>
 
void loc_Letext_14 () {
    o0 = 0x2c000;
    o3 = o0 | 0x278;
    local_0 = o3 + 0x30;
    o1 = *(local_0);
    i4 = o0;
    i3 = i0;
    l5 = 0;
    l3 = fp - 0x38;
    l1 = fp - 0x28;
    l4 = fp - 0x18;
    if (o1 != 0) {
        goto label_1;
    }
    o0 = 0x1a400;
    local_1 = o0 + 0x3a0;
    i0 = *(local_1);
    l0 = o0 | 0x3a0;
    l0++;
    o2 = 0x1a400;
    if (i0 == 0) {
        goto label_2;
    }
    o1 = o3;
    do {
        o0 = i0 - 0x2f;
        local_2 = o1 + i0;
        *(local_2) = o0;
        i0 = *(l0);
        l0++;
    } while (i0 != 0);
label_2:
    local_3 = o2 + 0x3b0;
    i0 = *(local_3);
    l0 = o2 | 0x3b0;
    l0++;
    if (i0 == 0) {
        goto label_1;
    }
    o0 = 0x2c000;
    o2 = o0 | 0x278;
    do {
        o1 = i0 - 0x36;
        o0 = i0 + 0x20;
        local_4 = o0 + o2;
        *(local_4) = o1;
        local_5 = o2 + i0;
        *(local_5) = o1;
        i0 = *(l0);
        l0++;
    } while (i0 != 0);
label_1:
    l2 = l3;
    l0 = l2;
    if (i2 > 0x10) {
        o1 = 0x2c400;
        o0 = 0x75;
        local_6 = o1 + 0xf8;
        *(local_6) = o0;
        i0 = 0x75;
        goto label_3;
    }
    o0 = 0x2c000;
    l7 = o0 | 0x278;
    l6 = 0x2d800;
    goto label_4;
label_0:
    i1--;
    if (i2 <= 0x10) {
        goto label_4;
    }
    o0 = i0 & 0xff;
    local_7 = l7 + o0;
    o1 = *(local_7);
    l5++;
    if (o1 != 0) {
    }
    *(l0) = i0;
    l0++;
    if (i1 != 0) {
        goto label_5;
    }
    o3 = l3;
    l0 = l1;
    __asm ("bcc 0x17334");
    do {
        o0 = *(l0);
        *(o3) = o0;
        o3++;
        l0++;
        __asm ("bcs 0x17314");
    } while (1);
    l0 = l1;
label_4:
label_5:
    local_8 = l6 + 0x298;
    o0 = *(local_8);
    if (i1 == 0) {
        goto label_6;
    }
    o0 ();
    i0 = o0;
    if (i0 < 0x2c) {
        goto label_3;
    }
    if (i0 == 0xa) {
        goto label_6;
    }
    if (i0 != 0x20) {
        goto label_0;
    }
label_6:
    o1 = 0x2c400;
    if (l5 != 0) {
        o0 = 0x73;
        local_9 = o1 + 0xf8;
        *(local_9) = o0;
        i0 = 0x73;
        goto label_3;
    }
    o0 = 0x2ac00;
    local_10 = o0 + 0x1b8;
    o1 = *(local_10);
    o4 = l0 - l3;
    o0 = o4 + 1;
    o2 = o0 >> 1;
    o3 = i3;
    i1 = i2;
    if (o1 != 0) {
        o0 = i1 - 1;
        o3 += o0;
        o5 = -1;
    } else {
        o5 = 1;
    }
    if (i1 <= 0) {
        goto label_7;
    }
    do {
        *(o3) = g0;
        i1--;
        o3 += o5;
    } while (i1 > o2);
label_7:
    if (i1 == o2) {
        goto label_8;
    }
    g0 = o4 & 1;
    if (o4 < 1) {
        o0 = i1 << 1;
        l2 = l0 - o0;
    } else {
        o1 = i4 | 0x278;
        if (o4 == 1) {
            goto label_9;
        }
        o2 = *(l3);
        local_11 = o1 + o2;
        o0 = *(local_11);
        l2 = l3 + 1;
        o0--;
        i1--;
        *(o3) = o0;
        if (i1 == -1) {
            goto label_8;
        }
        o3 += o5;
    }
label_9:
    o0 = 0x2c000;
    o4 = o0 | 0x278;
    do {
        o1 = *(l2);
        i1--;
        local_12 = l2 + 1;
        o2 = *(local_12);
        local_13 = o4 + o1;
        o0 = *(local_13);
        l2 += 2;
        local_14 = o4 + o2;
        o1 = *(local_14);
        o0--;
        o0 <<= 4;
        o1--;
        o0 |= o1;
        *(o3) = o0;
        o3 += o5;
    } while (i1 != -1);
label_8:
    i0 = 0;
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18dbc */
#include <stdint.h>
 
void wrt_A () {
    o0 = i1;
    i1--;
    if (i1 <= 0) {
        goto label_0;
    }
    l0 = 0x2d800;
    do {
        o0 = *(i0);
        local_0 = l0 + 0x2a4;
        o1 = *(local_0);
        i0++;
        o1 ();
        o0 = i1;
        i1--;
    } while (i1 > 0);
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18e5c */
#include <stdint.h>
 
void wrt_G () {
    o4 = i4;
    o5 = i0;
    o0 = 0x1a800;
    o1 = i1;
    o2 = i2;
    o3 = i3;
    local_0 = o0 + 0x20;
    f6 = *(local_0);
    i0 = 0;
    if (o4 == 4) {
        f2 = *(o5);
        __asm ("fstod f2, f4");
    } else {
        f4 = *(o5);
    }
    o0 = 0x1a800;
    local_1 = o0 + 0x28;
    f8 = *(local_1);
    __asm ("fcmped f4, f8");
    __asm ("fbl,a 0x18eb0");
    __asm ("fnegs f4, f4");
    o0 = 0x1a800;
    local_2 = o0 + 0x30;
    f2 = *(local_2);
    __asm ("fcmped f4, f2");
    __asm ("fbuge 0x18f64");
    __asm ("fcmpd f4, f8");
    __asm ("fbne 0x18f6c");
    i0 = 1;
    o0 = 0x2c400;
    goto label_1;
label_0:
    __asm ("fbge 0x18f54");
    o0 = 0x1a800;
    o0 = 0x2c400;
label_1:
    local_3 = o0 + 0x338;
    l1 = *(local_3);
    i2 = o0;
    l0 = o3 + 2;
    local_4 = o0 + 0x338;
    *(local_4) = g0;
    if (o3 == 0) {
        l0 = 4;
    }
    o2 -= i0;
    o0 = o5;
    o1 -= l0;
    o3 = o4;
    sym_wrt_F ();
    i0 = o0;
    if (l0 <= 0) {
        goto label_2;
    }
    i1 = l0;
    l0 = 0x2d800;
    local_5 = l0 + 0x2a4;
    o1 = *(local_5);
    do {
        o0 = 0x20;
        o1 ();
        i1--;
        local_6 = l0 + 0x2a4;
        o1 = *(local_6);
    } while (i1 != -1);
label_2:
    local_7 = i2 + 0x338;
    *(local_7) = l1;
    goto label_3;
    local_8 = o0 + 0x38;
    f2 = *(local_8);
    __asm ("fmuld f6, f2, f6");
    i0++;
    __asm ("fcmped f4, f6");
    if (i0 <= o2) {
        goto label_0;
    }
    o0 = o5;
    sym_wrt_E ();
    i0 = o0;
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18880 */
#include <stdint.h>
 
void wrt_I () {
    l0 = i1;
    o4 = i3;
    if (i2 == 4) {
        o0 = *(i0);
        o3 = o0;
    } else {
        if (i2 == 8) {
            o0 = *(i0);
            o0 <<= 0x18;
            o3 = o0 >> 0x18;
        } else {
            o0 = *(i0);
            if (i2 == 8) {
                o0 <<= 0x10;
            }
            goto label_0;
            o3 = o0 >> 0x10;
        }
    }
    o2 = o0 >> 0x1f;
label_0:
    o1 = o3;
    o0 = o2;
    o2 = fp - 0x14;
    o3 = fp - 0x18;
    sym_f_icvt ();
    i0 = o0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x186f8 */
#include <stdint.h>
 
void wrt_Z () {
    o0 = 0x2ac00;
    local_0 = o0 + 0x1c0;
    o1 = *(local_0);
    i3--;
    if (o1 != 0) {
        l0 = i0;
        i0 += i3;
        l1 = -1;
    } else {
        l0 = i0 + i3;
        l1 = 1;
    }
    do {
        o1 = l0 - i0;
        if (i0 == l0) {
            goto label_0;
        }
        o0 = *(i0);
        i0 += l1;
    } while (o0 == 0);
    o1 = l0 - i0;
label_0:
    o0 = l1;
    sym_imp_umul ();
    o1 = o0 << 1;
    o0 = *(i0);
    g0 = o0 & 0xf0;
    i3 = o1 + 1;
    if (o0 != 0xf0) {
        i3 = o1 + 2;
    }
    if (i1 <= 0) {
        goto label_1;
    }
    l1 = i1;
    if (i1 <= 0) {
        goto label_2;
    }
    l0 = 0x2d800;
    local_1 = l0 + 0x2a4;
    o1 = *(local_1);
    do {
        o0 = 0x2a;
        o1 ();
        l1--;
        local_2 = l0 + 0x2a4;
        o1 = *(local_2);
    } while (l1 != -1);
    i2 -= i3;
label_1:
    goto label_2;
    i3 += i2;
    if (i2 <= 0) {
    }
    i1--;
    i2--;
    l2 = 0x2d800;
    if (i1 < i3) {
        goto label_3;
    }
    local_3 = l2 + 0x2a4;
    o1 = *(local_3);
    do {
        o0 = 0x20;
        o1 ();
        i1--;
        local_4 = l2 + 0x2a4;
        o1 = *(local_4);
    } while (i1 >= i3);
label_3:
    o0 = *(i0);
    if (i2 < 0) {
        goto label_4;
    }
    local_5 = l2 + 0x2a4;
    o1 = *(local_5);
    do {
        o0 = 0x30;
        o1 ();
        i2--;
        local_6 = l2 + 0x2a4;
        o1 = *(local_6);
    } while (i2 >= -1);
    o0 = *(i0);
label_4:
    g0 = o0 & 0xf0;
    o1 = *(i0);
    if (o0 == 0xf0) {
        o2 = 0x2ac00;
        o1 &= 0xf;
        o2 |= 0x1c8;
        local_7 = l2 + 0x2a4;
        o3 = *(local_7);
        local_8 = o2 + o1;
        o0 = *(local_8);
        o3 ();
        if (i0 == l0) {
            goto label_2;
        }
        i0 += l1;
    }
    o0 = 0x2ac00;
    i2 = o0 | 0x1c8;
    i1 = 0x2d800;
    do {
        o1 = *(i0);
        o1 >>= 4;
        local_9 = i1 + 0x2a4;
        o2 = *(local_9);
        local_10 = i2 + o1;
        o0 = *(local_10);
        o2 ();
        o1 = *(i0);
        o1 &= 0xf;
        local_11 = i1 + 0x2a4;
        o2 = *(local_11);
        local_12 = i2 + o1;
        o0 = *(local_12);
        o2 ();
        i0 += l1;
    } while (i0 != l0);
label_2:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x18df4 */
#include <stdint.h>
 
void wrt_AW () {
    o0 = i1;
    if (i1 <= i2) {
        goto label_0;
    }
    l0 = 0x2d800;
    local_0 = l0 + 0x2a4;
    o1 = *(local_0);
    do {
        i1--;
        o0 = 0x20;
        o1 ();
        local_1 = l0 + 0x2a4;
        o1 = *(local_1);
    } while (i1 > i2);
    o0 = i1;
label_0:
    i1--;
    if (o0 <= 0) {
        goto label_1;
    }
    l0 = 0x2d800;
    do {
        o0 = *(i0);
        local_2 = l0 + 0x2a4;
        o1 = *(local_2);
        i0++;
        o1 ();
        o0 = i1;
        i1--;
    } while (i1 > 0);
label_1:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x189f8 */
#include <stdint.h>
 
void wrt_IM () {
    l0 = i1;
    o4 = i4;
    if (i3 == 4) {
        o0 = *(i0);
        i1 = o0;
    } else {
        if (i3 == 8) {
            o0 = *(i0);
            o0 <<= 0x18;
            i1 = o0 >> 0x18;
        } else {
            o0 = *(i0);
            if (i3 == 8) {
                o0 <<= 0x10;
            }
            goto label_0;
            i1 = o0 >> 0x10;
        }
    }
    i0 = o0 >> 0x1f;
label_0:
    o1 = i1;
    o0 = i0;
    o2 = fp - 0x14;
    o3 = fp - 0x18;
    sym_f_icvt ();
    local_0 = fp - 0x18;
    o1 = *(local_0);
    i3 = o0;
    if (o1 == 0) {
        o0 = 0x2c400;
        local_1 = o0 + 0x10c;
        o1 = *(local_1);
        o1 = 0;
        if (o1 == 0) {
            goto label_1;
        }
    }
    o1 = 1;
label_1:
    local_2 = fp - 0x14;
    o0 = *(local_2);
    o2 = o0;
    o0 += o1;
    if (l0 <= 0) {
        o0 = i2 + o1;
        if (l0 <= 0) {
            goto label_2;
        }
    }
    i1 = l0;
    if (l0 <= 0) {
        goto label_3;
    }
    i0 = 0x2d800;
    local_3 = i0 + 0x2a4;
    o1 = *(local_3);
    do {
        o0 = 0x2a;
        o1 ();
        i1--;
        local_4 = i0 + 0x2a4;
        o1 = *(local_4);
    } while (i1 != -1);
    g0 = i0 | i1;
label_2:
    goto label_3;
    if (o2 != i2) {
        goto label_4;
    }
    if (o2 != i2) {
        goto label_4;
    }
    i1 = l0;
    if (l0 <= 0) {
        goto label_3;
    }
    i0 = 0x2d800;
    local_5 = i0 + 0x2a4;
    o1 = *(local_5);
    do {
        o0 = 0x20;
        o1 ();
        i1--;
        local_6 = i0 + 0x2a4;
        o1 = *(local_6);
    } while (i1 != -1);
    goto label_3;
label_4:
    o0 = l0 - o2;
    if (i1 < -1) {
        o0 = l0 - i2;
    }
    i1 = o0 - o1;
    local_7 = fp - 0x18;
    o0 = *(local_7);
    if (i1 <= 0) {
        goto label_5;
    }
    i0 = 0x2d800;
    local_8 = i0 + 0x2a4;
    o1 = *(local_8);
    do {
        o0 = 0x20;
        o1 ();
        i1--;
        local_9 = i0 + 0x2a4;
        o1 = *(local_9);
    } while (i1 != -1);
    local_10 = fp - 0x18;
    o0 = *(local_10);
label_5:
    o0 = 0x2d800;
    if (o0 != 0) {
        local_11 = o0 + 0x2a4;
        o1 = *(local_11);
        o0 = 0x2d;
        o1 ();
        local_12 = fp - 0x14;
        o0 = *(local_12);
    } else {
        o0 = 0x2c400;
        local_13 = o0 + 0x10c;
        o1 = *(local_13);
        o0 = 0x2d800;
        if (o1 != 0) {
            local_14 = o0 + 0x2a4;
            o1 = *(local_14);
            o0 = 0x2b;
            o1 ();
        }
        local_15 = fp - 0x14;
        o0 = *(local_15);
    }
    i1 = 0;
    o0 = i2 - o0;
    local_16 = fp - 0x14;
    o0 = *(local_16);
    if (i1 >= o0) {
        goto label_6;
    }
    l0 = 0x2d800;
    local_17 = l0 + 0x2a4;
    o1 = *(local_17);
    do {
        o0 = 0x30;
        o1 ();
        local_18 = fp - 0x14;
        o0 = *(local_18);
        i1++;
        o0 = i2 - o0;
        local_19 = l0 + 0x2a4;
        o1 = *(local_19);
    } while (i1 < o0);
    local_20 = fp - 0x14;
    o0 = *(local_20);
    i1 = 0;
label_6:
    l0 = 0x2d800;
    if (i1 >= o0) {
        goto label_3;
    }
    o0 = *(i3);
    do {
        i1++;
        local_21 = l0 + 0x2a4;
        o1 = *(local_21);
        i3++;
        o1 ();
        local_22 = fp - 0x14;
        o0 = *(local_22);
        o0 = *(i3);
    } while (i1 < o0);
label_3:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1844c */
#include <stdint.h>
 
void loc_Letext_15 () {
    o0 = 0x2d800;
    o1 = 0x2d800;
    local_0 = o1 + 0x2b4;
    o2 = *(local_0);
    local_1 = o0 + 0x208;
    i0 = *(local_1);
    local_2 = o0 + 0x208;
    *(local_2) = g0;
    if (o2 != 0) {
        goto label_0;
    }
    o1 = 0x2d800;
    if (i0 < 0) {
        o3 = 0x2d800;
        local_3 = o3 + 0x21c;
        o2 = *(local_3);
        local_4 = o1 + 0x2b0;
        o0 = *(local_4);
        local_5 = o1 + 0x2b0;
        *(local_5) = o2;
        if (o0 >= o2) {
        }
        o0 = 0x2c400;
        local_6 = o0 + 0x328;
        o1 = *(local_6);
        o2 += i0;
        o1 += i0;
        local_7 = o0 + 0x328;
        *(local_7) = o1;
        local_8 = o3 + 0x21c;
        *(local_8) = o2;
        if (o2 >= 0) {
            goto label_1;
        }
        o0 = 0x2c400;
        local_9 = o0 + 0x324;
        o1 = *(local_9);
        o2 = *(o1);
        o2 = 0x2d800;
        if (o2 != 0) {
            goto label_2;
        }
        o1 = 0x1a800;
        goto label_3;
    }
    o0 = 0x2d800;
    if (o2 <= 0) {
        goto label_1;
    }
    local_10 = o0 + 0x2a8;
    o3 = *(local_10);
    o1 = 0x2d800;
    local_11 = o1 + 0x21c;
    o0 = *(local_11);
    local_12 = o3 + 0x10;
    o2 = *(local_12);
    o0 += i0;
    o5 = o1;
    if (o0 >= o2) {
        o0 = 0x2c400;
        local_13 = o0 + 0x324;
        o1 = *(local_13);
        o2 = *(o1);
        o2 = 0x2d800;
        if (o2 != 0) {
            goto label_2;
        }
        o1 = 0x1a818;
        goto label_4;
    }
    o0 = 0x2d800;
    local_14 = o0 + 0x2b0;
    o3 = *(local_14);
    local_15 = o5 + 0x21c;
    o2 = *(local_15);
    o4 = o2 + i0;
    if (o3 > o2) {
        goto label_5;
    }
    l0 = 0x2d800;
    if (i0 <= 0) {
        goto label_1;
    }
    local_16 = l0 + 0x2a4;
    o1 = *(local_16);
    do {
        o0 = 0x20;
        o1 ();
        i0--;
        local_17 = l0 + 0x2a4;
        o1 = *(local_17);
    } while (i0 > 0);
    i0 = 0;
    goto label_6;
label_5:
    o1 = 0x2c400;
    if (o3 > o4) {
        goto label_7;
    }
    o0 = 0x2c400;
    local_18 = o0 + 0x328;
    o1 = *(local_18);
    o2 = o3 - o2;
    o1 += o2;
    i0 -= o2;
    local_19 = o0 + 0x328;
    *(local_19) = o1;
    local_20 = o5 + 0x21c;
    *(local_20) = o3;
    if (i0 <= 0) {
        goto label_1;
    }
    l0 = 0x2d800;
    local_21 = l0 + 0x2a4;
    o1 = *(local_21);
    do {
        o0 = 0x20;
        o1 ();
        i0--;
        local_22 = l0 + 0x2a4;
        o1 = *(local_22);
    } while (i0 > 0);
    i0 = 0;
    goto label_6;
label_7:
    local_23 = o1 + 0x328;
    o0 = *(local_23);
    local_24 = o5 + 0x21c;
    *(local_24) = o4;
    o0 += i0;
    local_25 = o1 + 0x328;
    *(local_25) = o0;
    goto label_1;
label_0:
    o0 = 0x2d800;
    if (i0 <= 0) {
        goto label_8;
    }
    local_26 = o0 + 0x2b0;
    o1 = *(local_26);
    o3 = 0x2d800;
    local_27 = o3 + 0x21c;
    o0 = *(local_27);
    o2 = o0 + i0;
    if (o1 > o0) {
        goto label_9;
    }
    l0 = 0x2d800;
    local_28 = l0 + 0x2a4;
    o1 = *(local_28);
    do {
        o0 = 0x20;
        o1 ();
        i0--;
        local_29 = l0 + 0x2a4;
        o1 = *(local_29);
    } while (i0 > 0);
    i0 = 0;
    goto label_6;
label_9:
    local_30 = o3 + 0x21c;
    *(local_30) = o2;
    if (o1 > o2) {
        goto label_1;
    }
    o0 = o1 - o0;
    i0 -= o0;
    local_31 = o3 + 0x21c;
    *(local_31) = o1;
    if (i0 <= 0) {
        goto label_1;
    }
    l0 = 0x2d800;
    local_32 = l0 + 0x2a4;
    o1 = *(local_32);
    do {
        o0 = 0x20;
        o1 ();
        i0--;
        local_33 = l0 + 0x2a4;
        o1 = *(local_33);
    } while (i0 > 0);
    i0 = 0;
    goto label_6;
label_8:
    i0 = 0;
    if (i0 < 0) {
        o0 = 0x2d800;
        local_34 = o0 + 0x21c;
        o1 = *(local_34);
        g0 = i0 + o1;
        o5 = o0;
        if (i0 < o1) {
            o0 = 0x2c400;
            local_35 = o0 + 0x324;
            o1 = *(local_35);
            o2 = *(o1);
            o2 = 0x2d800;
            if (o2 != 0) {
label_2:
                local_36 = o2 + 0x29c;
                o0 = *(local_36);
                o3 = 0x2c400;
                o0 &= -3;
                o1 = 0x6e;
                local_37 = o2 + 0x29c;
                *(local_37) = o0;
                local_38 = o3 + 0xf8;
                *(local_38) = o1;
            } else {
                o1 = 0x1a808;
label_3:
label_4:
                o0 = 0x6e;
                sym_f_fatal ();
            }
            i0 = 0x6e;
        } else {
            o2 = 0x2d800;
            local_39 = o2 + 0x2b0;
            o0 = *(local_39);
            local_40 = o5 + 0x21c;
            o1 = *(local_40);
            local_41 = o2 + 0x2b0;
            *(local_41) = o1;
            if (o0 >= o1) {
            }
            o0 = o1 + i0;
            local_42 = o5 + 0x21c;
            *(local_42) = o0;
label_1:
            i0 = 0;
        }
    }
label_6:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19308 */
#include <stdint.h>
 
void xw_end () {
    o0 = 0x2d800;
    local_0 = o0 + 0x2a0;
    o1 = *(local_0);
    if (o1 != 0) {
        o0 = 0;
        sym_f_putbuf ();
        o1 = 0x2c400;
        local_1 = o1 + 0xd8;
        o0 = *(local_1);
        i0 = 0;
        sym_imp_fflush ();
        o2 = 0x2d800;
    } else {
        o0 = 0xa;
        sym_f_putbuf ();
        i0 = o0;
        o2 = 0x2d800;
    }
    o1 = 0x2d800;
    o0 = 0x2d800;
    local_2 = o0 + 0x208;
    *(local_2) = g0;
    local_3 = o1 + 0x21c;
    *(local_3) = g0;
    local_4 = o2 + 0x2b0;
    *(local_4) = g0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x1936c */
#include <stdint.h>
 
void xw_rev () {
    l0 = 0x2d800;
    local_0 = l0 + 0x27c;
    o0 = *(local_0);
    i0 = 0;
    if (o0 != 0) {
        o0 = 0xa;
        sym_f_putbuf ();
        i0 = o0;
        local_1 = l0 + 0x27c;
        *(local_1) = g0;
    }
    o2 = 0x2d800;
    o1 = 0x2d800;
    o0 = 0x2d800;
    local_2 = o0 + 0x208;
    *(local_2) = g0;
    local_3 = o1 + 0x21c;
    *(local_3) = g0;
    local_4 = o2 + 0x2b0;
    *(local_4) = g0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19f50 */
#include <stdint.h>
 
void init_dummy_1 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa8c */
#include <stdint.h>
 
void fwrite () {
    g1 = 0x63000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aad4 */
#include <stdint.h>
 
void isatty () {
    g1 = 0x75000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa68 */
#include <stdint.h>
 
void unlink () {
    g1 = 0x5a000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2ab1c */
#include <stdint.h>
 
void urem64 () {
    g1 = 0x87000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aabc */
#include <stdint.h>
 
void fileno () {
    g1 = 0x6f000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa50 */
#include <stdint.h>
 
void stat () {
    g1 = 0x54000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9c0 */
#include <stdint.h>
 
void dtoll () {
    g1 = 0x30000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a990 */
#include <stdint.h>
 
void atof () {
    g1 = 0x24000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a978 */
#include <stdint.h>
 
void atoi () {
    g1 = 0x1e000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aaa4 */
#include <stdint.h>
 
void tmpfile () {
    g1 = 0x69000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa14 */
#include <stdint.h>
 
void strcpy () {
    g1 = 0x45000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a984 */
#include <stdint.h>
 
void sprintf () {
    g1 = 0x21000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a948 */
#include <stdint.h>
 
void exit () {
    g1 = 0x12000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa98 */
#include <stdint.h>
 
void ftell () {
    g1 = 0x66000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a96c */
#include <stdint.h>
 
void filbuf () {
    g1 = 0x1b000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9cc */
#include <stdint.h>
 
void ungetc () {
    g1 = 0x33000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa2c */
#include <stdint.h>
 
void fclose () {
    g1 = 0x4b000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9f0 */
#include <stdint.h>
 
void strlen () {
    g1 = 0x3c000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9d8 */
#include <stdint.h>
 
void flsbuf () {
    g1 = 0x36000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa20 */
#include <stdint.h>
 
void fopen () {
    g1 = 0x48000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aae0 */
#include <stdint.h>
 
void perror () {
    g1 = 0x78000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2ab28 */
#include <stdint.h>
 
void udiv64 () {
    g1 = 0x8a000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a99c */
#include <stdint.h>
 
void free () {
    g1 = 0x27000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2ab10 */
#include <stdint.h>
 
void _umul () {
    g1 = 0x84000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa38 */
#include <stdint.h>
 
void rewind () {
    g1 = 0x4e000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9b4 */
#include <stdint.h>
 
void realloc () {
    g1 = 0x2d000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2ab04 */
#include <stdint.h>
 
void mul64 () {
    g1 = 0x81000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aab0 */
#include <stdint.h>
 
void freopen () {
    g1 = 0x6c000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aac8 */
#include <stdint.h>
 
void fstat () {
    g1 = 0x72000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9a8 */
#include <stdint.h>
 
void malloc () {
    g1 = 0x2a000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa80 */
#include <stdint.h>
 
void fread () {
    g1 = 0x60000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9fc */
#include <stdint.h>
 
void access () {
    g1 = 0x3f000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa08 */
#include <stdint.h>
 
void tempnam () {
    g1 = 0x42000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2aa44 */
#include <stdint.h>
 
void fseek () {
    g1 = 0x51000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a9e4 */
#include <stdint.h>
 
void fputs () {
    g1 = 0x39000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x2a954 */
#include <stdint.h>
 
void fcn_0002a954 () {
    g1 = 0x15000;
    void (*0x2a900)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/asgngoto/sparc_elf_by_bommerang/subject.exe @ 0x19ef4 */
#include <stdint.h>
 
void loc_Letext_20 () {
    l7 = o7 + l7;
    return;
}
