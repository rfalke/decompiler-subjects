/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x178c */
#include <stdint.h>
 
void entry0 () {
    /* [00] -r-x section size 1368 named 0.__TEXT.__text */
    r26 = r1;
    r1 += 0xfffc;
    r1 &= 0xffffffe0;
    r0 = 0;
    *(r1) = r0;
    *((r1 - 0x10)) = r1;
    r3 = *(r26);
    r4 = r26 + 4;
    r27 = r3 + 1;
    r27 <<= 2;
    r5 = r4 + r27;
    sym_SourceCache_Csu_Csu_45_ (r3, r4, r5);
    __asm ("trap");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x17c0 */
#include <stdint.h>
 
void SourceCache_Csu_Csu_45_ () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x17d4");
    r31 = lr;
    r28 = r3;
    r30 = r4;
    r29 = r5;
    sym_dyld_init_check ();
    r9 = r31 + 00000;
    *((r9 + 0x20b)) = r28;
    r9 = r31 + 00000;
    *((r9 + 0x20c)) = r30;
    r9 = r31 + 00000;
    *((r9 + 0x20d)) = r29;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x222));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r9 = r31 + 00000;
    r9 = *((r9 + 0x221));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_imp_keymgr_dwarf2_register_sections ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x210));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_call_mod_init_funcs ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x20f));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r3 = r31 + 00000;
    r3 += 0x6e8;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r3 = *((r1 + 0x10));
    if (r3 != 0) {
        sym_imp_atexit ();
    }
    r0 = 0;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x220));
    *(r9) = r0;
    r11 = *(r30);
    r9 = r11;
    if (r11 == 0) {
        goto label_0;
    }
    r8 = 0;
    r10 = 0;
    r0 = *(r11);
    if (r0 == 0) {
        goto label_1;
    }
    do {
        /* with lock */
        r0 = *(((r9 + r10)));
        if (r0 == 0x2f) {
            r8 = r10 + r9;
        }
        r10++;
        r9 = *(r30);
        /* with lock */
        r0 = *(((r9 + r10)));
    } while (r0 != 0);
label_1:
    if (r8 != 0) {
        r0 = r8 + 1;
    } else {
        r0 = *(r30);
    }
    r9 = r31 + 00000;
    *((r9 + 0x20e)) = r0;
label_0:
    r6 = r29;
    r0 = *(r29);
    if (r0 == 0) {
        goto label_2;
    }
    do {
        r0 = *((r6 + 0x1));
    } while (r0 != 0);
label_2:
    r3 = r28;
    r4 = r30;
    r5 = r29;
    r6 += 4;
    main (r3, r4, r5, r6);
    sym_imp_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1b18 */
#include <stdint.h>
 
void darwin_gcc3_preregister_frame_info () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    __asm ("bdnzl 0x1b28");
    *((r1 - 0x14)) = r1;
    r31 = lr;
    sym_imp_init_keymgr ();
    r9 = r31 + 00000;
    r9 = *((r9 + 0x14e));
    r9 = *((r9 + 0x2));
    if (r9 != 0) {
        r0 = *((r9 + 0x2));
        if (r0 > 2) {
            goto label_0;
        }
    }
    r3 = r31 + 00000;
    r3 = *((r3 + 0x13d));
    sym_imp_dyld_register_func_for_add_image (r3);
    r0 = *((r1 + 0x16));
    r3 = r31 + 00000;
    r1 += 0x50;
    r3 = *((r3 + 0x13c));
    lr = r0;
    r31 = *((r1 - 0x1));
    dyld_register_func_for_remove_image ();
label_0:
    r0 = *((r1 + 0x16));
    r1 += 0x50;
    r31 = *((r1 - 0x1));
    lr = r0;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1b90 */
#include <stdint.h>
 
int32_t main () {
    uint32_t local_0;
    uint32_t local_1;
    uint32_t local_2;
    uint32_t local_3;
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x30)) = r1;
    r30 = r1;
    __asm ("bdnzl 0x1ba8");
    r31 = lr;
    *((r30 + 0x36)) = r3;
    *((r30 + 0x37)) = r4;
    r9 = *((r30 + 0x37));
    r9 += 4;
    r3 = *(r9);
    r4 = r30 + 0x40;
    sym_imp_stat (r3, r4);
    r0 = r3;
    *((r30 + 0x28)) = r0;
    r3 = r31 + 00000;
    r3 += 0x3ac;
    r4 = *((r30 + 0x28));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x3b8;
    r4 = *((r30 + 0x10));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x3c4;
    r4 = *((r30 + 0x11));
    sym_imp_printf (r3, r4);
    r0 = *((r30 + 0x24));
    r3 = r31 + 00000;
    r3 += 0x3d0;
    r4 = r0;
    sym_imp_printf (r3, r4);
    r0 = *((r30 + 0x25));
    r3 = r31 + 00000;
    r3 += 0x3dc;
    r4 = r0;
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x3e8;
    r4 = *((r30 + 0x13));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x3f4;
    r4 = *((r30 + 0x14));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x400;
    r4 = *((r30 + 0x15));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x40c;
    r4 = *((r30 + 0x1c));
    r5 = *((r30 + 0x1d));
    sym_imp_printf (r3, r4, r5);
    r3 = r31 + 00000;
    r3 += 0x418;
    r4 = *((r30 + 0x20));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x428;
    r4 = *((r30 + 0x1e));
    r5 = *((r30 + 0x1f));
    sym_imp_printf (r3, r4, r5);
    r3 = r31 + 00000;
    r3 += 0x434;
    r4 = *((r30 + 0x16));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x440;
    r4 = *((r30 + 0x18));
    sym_imp_printf (r3, r4);
    r3 = r31 + 00000;
    r3 += 0x44c;
    r4 = *((r30 + 0x1a));
    sym_imp_printf (r3, r4);
    r0 = 0;
    r3 = r0;
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1940 */
#include <stdint.h>
 
void call_mod_init_funcs () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1954");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x580;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r12 = *((r1 + 0x10));
    ctr = r12;
    void (*ctr)() ();
    r0 = *((r1 + 0x1a));
    r1 += 0x60;
    lr = r0;
    r31 = *((r1 - 0x1));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x19dc */
#include <stdint.h>
 
void dyld_func_lookup () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    ctr = r11;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1988 */
#include <stdint.h>
 
void dyld_init_check () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    if (r11 != 0) {
        return;
    }
    r5 = 0x4e;
    r4 = 0;
    r4 |= sym.error_message;
    r3 = 2;
    r0 = 4;
    __asm ("sc");
    r3 = 0x3b;
    r0 = 1;
    __asm ("sc");
    __asm ("trap");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x19c4 */
#include <stdint.h>
 
void dyld_stub_binding_helper () {
    r12 = 0x0;
    r0 = *((r12 + 0x0));
    ctr = r0;
    r12 = 0x0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x19ec */
#include <stdint.h>
 
void darwin_unwind_dyld_add_image_hook () {
    r0 = lr;
    *((r1 - 0x5)) = r27;
    *((r1 + 0x2)) = r0;
    r28 = r3;
    *((r1 - 0x18)) = r1;
    r27 = r4;
    r3 = 1;
    r4 = 0x28;
    sym_imp_calloc (r3, r4);
    r0 = 0x28;
    r29 = r3;
    r3 = 0x12d;
    *(r29) = r0;
    *((r29 + 0x1)) = r28;
    *((r29 + 0x2)) = r27;
    sym_imp_keymgr_get_and_lock_processwide_ptr (r3);
    r4 = r29;
    *((r29 + 0x4)) = r3;
    r3 = 0x12d;
    r0 = *((r1 + 0x1a));
    r1 += 0x60;
    r27 = *((r1 - 0x5));
    lr = r0;
    return keymgr_set_and_unlock_processwide_ptr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1e4c */
#include <stdint.h>
 
void calloc () {
    r0 = lr;
    __asm ("bdnzl 0x1e54");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x7d));
    ctr = r12;
    r11 += 0x1f4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1e28 */
#include <stdint.h>
 
void keymgr_get_and_lock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1e30");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x85));
    ctr = r12;
    r11 += 0x214;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1a4c */
#include <stdint.h>
 
uint32_t darwin_unwind_dyld_remove_image_hook () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    r29 = r3;
    *((r1 - 0x18)) = r1;
    r30 = 0;
    r3 = 0x12d;
    r28 = r4;
    sym_imp_keymgr_get_and_lock_processwide_ptr (r3);
    r11 = r1 + 0x40;
    *((r1 + 0x10)) = r3;
    if (r3 == 0) {
        goto label_0;
    }
    do {
        r9 = *(r11);
        r0 = *((r9 + 0x1));
        if (r0 == r29) {
            r0 = *((r9 + 0x2));
            if (r0 != r28) {
                goto label_1;
            }
            r0 = *((r9 + 0x4));
            r30 = r9;
            *(r11) = r0;
            r9 = *(r9);
            if (r9 == 0x28) {
                goto label_2;
            }
            sym_imp_abort ();
        }
label_1:
        r0 = *((r9 + 0x4));
        r11 = r9 + 0x10;
    } while (r0 != 0);
    goto label_0;
label_2:
    r3 = *((r1 + 0x10));
label_0:
    r4 = r3;
    r3 = 0x12d;
    sym_imp_keymgr_set_and_unlock_processwide_ptr (r3);
    if (r30 != 0) {
        r12 = *((r30 + 0x3));
        if (r12 != 0) {
            ctr = r12;
            r3 = r30;
            void (*ctr)() ();
        }
        r3 = r30;
        sym_imp_free (r3);
    }
    r0 = *((r1 + 0x1a));
    r1 += 0x60;
    r28 = *((r1 - 0x4));
    lr = r0;
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1de0 */
#include <stdint.h>
 
void abort () {
    r0 = lr;
    __asm ("bdnzl 0x1de8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x95));
    ctr = r12;
    r11 += 0x254;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1e04 */
#include <stdint.h>
 
void keymgr_set_and_unlock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1e0c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x8d));
    ctr = r12;
    r11 += 0x234;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1dbc */
#include <stdint.h>
 
void free () {
    r0 = lr;
    __asm ("bdnzl 0x1dc4");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x9d));
    ctr = r12;
    r11 += 0x274;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1d2c */
#include <stdint.h>
 
void keymgr_dwarf2_register_sections () {
    r0 = lr;
    __asm ("bdnzl 0x1d34");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xbd));
    ctr = r12;
    r11 += 0x2f4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1d74 */
#include <stdint.h>
 
void dyld_register_func_for_add_image () {
    r0 = lr;
    __asm ("bdnzl 0x1d7c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xad));
    ctr = r12;
    r11 += 0x2b4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1d50 */
#include <stdint.h>
 
void dyld_register_func_for_remove_image () {
    r0 = lr;
    __asm ("bdnzl 0x1d58");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xb5));
    ctr = r12;
    r11 += 0x2d4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1d98 */
#include <stdint.h>
 
void init_keymgr () {
    r0 = lr;
    __asm ("bdnzl 0x1da0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xa5));
    ctr = r12;
    r11 += 0x294;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1d08 */
#include <stdint.h>
 
void atexit () {
    r0 = lr;
    __asm ("bdnzl 0x1d10");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xc5));
    ctr = r12;
    r11 += 0x314;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1ce4 */
#include <stdint.h>
 
void exit () {
    /* [01] -r-x section size 468 named 1.__TEXT.__picsymbol_stub */
    r0 = lr;
    __asm ("bdnzl 0x1cec");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xcd));
    ctr = r12;
    r11 += 0x334;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1e70 */
#include <stdint.h>
 
void printf () {
    r0 = lr;
    __asm ("bdnzl 0x1e78");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x75));
    ctr = r12;
    r11 += 0x1d4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/superstat/ppc_macho_by_boomerang/subject.exe @ 0x1e94 */
#include <stdint.h>
 
void stat () {
    r0 = lr;
    __asm ("bdnzl 0x1e9c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x6d));
    ctr = r12;
    r11 += 0x1b4;
    __asm ("bctr");
}
