/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x18d8 */
#include <stdint.h>
 
void entry0 () {
    /* [00] -r-x section size 1212 named 0.__TEXT.__text */
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
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x190c */
#include <stdint.h>
 
void SourceCache_Csu_Csu_45_ () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1920");
    r31 = lr;
    r28 = r3;
    r30 = r4;
    r29 = r5;
    sym_dyld_init_check ();
    r9 = r31 + 00000;
    *((r9 + 0x1b8)) = r28;
    r9 = r31 + 00000;
    *((r9 + 0x1b9)) = r30;
    r9 = r31 + 00000;
    *((r9 + 0x1ba)) = r29;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1ce));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1cd));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_imp_keymgr_dwarf2_register_sections ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1bd));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_call_mod_init_funcs ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1bc));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r3 = r31 + 00000;
    r3 += 0x628;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r3 = *((r1 + 0x10));
    if (r3 != 0) {
        sym_imp_atexit ();
    }
    r0 = 0;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1cc));
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
    *((r9 + 0x1bb)) = r0;
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
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1c64 */
#include <stdint.h>
 
void darwin_gcc3_preregister_frame_info () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    __asm ("bdnzl 0x1c74");
    *((r1 - 0x14)) = r1;
    r31 = lr;
    sym_imp_init_keymgr ();
    r9 = r31 + 00000;
    r9 = *((r9 + 0xfa));
    r9 = *((r9 + 0x2));
    if (r9 != 0) {
        r0 = *((r9 + 0x2));
        if (r0 > 2) {
            goto label_0;
        }
    }
    r3 = r31 + 00000;
    r3 = *((r3 + 0xea));
    sym_imp_dyld_register_func_for_add_image (r3);
    r0 = *((r1 + 0x16));
    r3 = r31 + 00000;
    r1 += 0x50;
    r3 = *((r3 + 0xe9));
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
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1cdc */
#include <stdint.h>
 
int32_t main () {
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    r30 = r1;
    __asm ("bdnzl 0x1cf4");
    r31 = lr;
    *((r30 + 0x1e)) = r3;
    r0 = 0;
    *((r30 + 0x10)) = r0;
    r3 = r31 + 00000;
    r3 += 0x2ec;
    sym_imp_printf (r3);
    r0 = 1;
    *((r30 + 0x10)) = r0;
    r0 = *((r30 + 0x1e));
    *((r30 + 0x12)) = r0;
    r0 = 0;
    *((r30 + 0x11)) = r0;
    r3 = r31 + 00000;
    r3 += 0x2fc;
    sym_imp_printf (r3);
    r0 = 2;
    *((r30 + 0x10)) = r0;
    r0 = *((r30 + 0x12));
    if (r0 <= 3) {
        r0 = 3;
        *((r30 + 0x10)) = r0;
        r0 = *((r30 + 0x12));
        *((r30 + 0x11)) = r0;
    }
    r0 = 4;
    *((r30 + 0x10)) = r0;
    r9 = *((r30 + 0x11));
    r0 = *((r30 + 0x12));
    r0 = r9 + r0;
    *((r30 + 0x13)) = r0;
    r3 = r31 + 00000;
    r3 += 0x300;
    r4 = *((r30 + 0x13));
    sym_imp_printf (r3, r4);
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1a8c */
#include <stdint.h>
 
void call_mod_init_funcs () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1aa0");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x4c0;
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
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1b28 */
#include <stdint.h>
 
void dyld_func_lookup () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    ctr = r11;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1ad4 */
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
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1b10 */
#include <stdint.h>
 
void dyld_stub_binding_helper () {
    r12 = 0x0;
    r0 = *((r12 + 0x0));
    ctr = r0;
    r12 = 0x0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1b38 */
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
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1efc */
#include <stdint.h>
 
void calloc () {
    r0 = lr;
    __asm ("bdnzl 0x1f04");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x51));
    ctr = r12;
    r11 += 0x144;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1ed8 */
#include <stdint.h>
 
void keymgr_get_and_lock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1ee0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x59));
    ctr = r12;
    r11 += 0x164;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1b98 */
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
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1e90 */
#include <stdint.h>
 
void abort () {
    r0 = lr;
    __asm ("bdnzl 0x1e98");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x69));
    ctr = r12;
    r11 += 0x1a4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1eb4 */
#include <stdint.h>
 
void keymgr_set_and_unlock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1ebc");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x61));
    ctr = r12;
    r11 += 0x184;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1e6c */
#include <stdint.h>
 
void free () {
    r0 = lr;
    __asm ("bdnzl 0x1e74");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x71));
    ctr = r12;
    r11 += 0x1c4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1ddc */
#include <stdint.h>
 
void keymgr_dwarf2_register_sections () {
    r0 = lr;
    __asm ("bdnzl 0x1de4");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x91));
    ctr = r12;
    r11 += 0x244;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1e24 */
#include <stdint.h>
 
void dyld_register_func_for_add_image () {
    r0 = lr;
    __asm ("bdnzl aav.0x00001e2c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x81));
    ctr = r12;
    r11 += 0x204;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1e00 */
#include <stdint.h>
 
void dyld_register_func_for_remove_image () {
    r0 = lr;
    __asm ("bdnzl 0x1e08");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x89));
    ctr = r12;
    r11 += 0x224;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1e48 */
#include <stdint.h>
 
void init_keymgr () {
    r0 = lr;
    __asm ("bdnzl 0x1e50");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x79));
    ctr = r12;
    r11 += 0x1e4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1db8 */
#include <stdint.h>
 
void atexit () {
    r0 = lr;
    __asm ("bdnzl 0x1dc0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x99));
    ctr = r12;
    r11 += 0x264;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1d94 */
#include <stdint.h>
 
void exit () {
    /* [01] -r-x section size 432 named 1.__TEXT.__picsymbol_stub */
    r0 = lr;
    __asm ("bdnzl 0x1d9c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xa1));
    ctr = r12;
    r11 += 0x284;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/ifthen/ppc_macho_by_boomerang/subject.exe @ 0x1f20 */
#include <stdint.h>
 
void printf () {
    r0 = lr;
    __asm ("bdnzl 0x1f28");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x49));
    ctr = r12;
    r11 += 0x124;
    __asm ("bctr");
}
