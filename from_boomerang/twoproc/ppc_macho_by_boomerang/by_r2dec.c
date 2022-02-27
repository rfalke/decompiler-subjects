/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x18d0 */
#include <stdint.h>
 
void entry0 () {
    /* [00] -r-x section size 1284 named 0.__TEXT.__text */
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
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1904 */
#include <stdint.h>
 
void SourceCache_Csu_Csu_45_ () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1918");
    r31 = lr;
    r28 = r3;
    r30 = r4;
    r29 = r5;
    sym_dyld_init_check ();
    r9 = r31 + 00000;
    *((r9 + 0x1ba)) = r28;
    r9 = r31 + 00000;
    *((r9 + 0x1bb)) = r30;
    r9 = r31 + 00000;
    *((r9 + 0x1bc)) = r29;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1d0));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1cf));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_imp_keymgr_dwarf2_register_sections ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1bf));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_call_mod_init_funcs ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1be));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r3 = r31 + 00000;
    r3 += 0x52c;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r3 = *((r1 + 0x10));
    if (r3 != 0) {
        sym_imp_atexit ();
    }
    r0 = 0;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1ce));
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
    *((r9 + 0x1bd)) = r0;
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
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1cd0 */
#include <stdint.h>
 
uint32_t darwin_gcc3_preregister_frame_info () {
    uint32_t local_0;
    uint32_t local_1;
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    r30 = r1;
    __asm ("bdnzl 0x1ce8");
    r31 = lr;
    sym_imp_init_keymgr ();
    r2 = r31 + 00000;
    r2 = *((r2 + 0xdd));
    r0 = *((r2 + 0x2));
    *((r30 + 0x10)) = r0;
    r0 = *((r30 + 0x10));
    if (r0 != 0) {
        r2 = *((r30 + 0x10));
        r0 = *((r2 + 0x2));
        if (r0 > 2) {
        }
    } else {
        r2 = r31 + 00000;
        r3 = *((r2 + 0xcd));
        sym_imp_dyld_register_func_for_add_image (r3);
        r2 = r31 + 00000;
        r3 = *((r2 + 0xcc));
        sym_imp_dyld_register_func_for_remove_image (r3);
    }
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1d80 */
#include <stdint.h>
 
int32_t main () {
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x14)) = r1;
    r30 = r1;
    __asm ("bdnzl 0x1d98");
    r31 = lr;
    r3 = 0xb;
    r4 = 4;
    sym_proc1 (r3, r4);
    r0 = r3;
    r3 = r31 + 00000;
    r3 += 0x144;
    r4 = r0;
    sym_imp_printf (r3, r4);
    r3 = r0;
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1d50 */
#include <stdint.h>
 
uint32_t proc1 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    *((r30 + 0x12)) = r3;
    *((r30 + 0x13)) = r4;
    r2 = *((r30 + 0x12));
    r0 = *((r30 + 0x13));
    r0 = r2 - r0;
    r3 = r0;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1a84 */
#include <stdint.h>
 
void call_mod_init_funcs () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1a98");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x3c4;
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
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1b20 */
#include <stdint.h>
 
void dyld_func_lookup () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    ctr = r11;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1acc */
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
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1b08 */
#include <stdint.h>
 
void dyld_stub_binding_helper () {
    r12 = 0x0;
    r0 = *((r12 + 0x0));
    ctr = r0;
    r12 = 0x0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1b30 */
#include <stdint.h>
 
uint32_t darwin_unwind_dyld_add_image_hook () {
    r0 = lr;
    *((r1 - 0x3)) = r29;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    r30 = r1;
    *((r30 + 0x1e)) = r3;
    *((r30 + 0x1f)) = r4;
    r3 = 1;
    r4 = 0x28;
    sym_imp_calloc (r3, r4);
    r0 = r3;
    *((r30 + 0x10)) = r0;
    r2 = *((r30 + 0x10));
    r0 = *((r30 + 0x1e));
    *((r2 + 0x1)) = r0;
    r2 = *((r30 + 0x10));
    r0 = *((r30 + 0x1f));
    *((r2 + 0x2)) = r0;
    r2 = *((r30 + 0x10));
    r0 = 0x28;
    *(r2) = r0;
    r29 = *((r30 + 0x10));
    r3 = 0x12d;
    sym_imp_keymgr_get_and_lock_processwide_ptr (r3);
    *((r29 + 0x4)) = r3;
    r3 = 0x12d;
    r4 = *((r30 + 0x10));
    sym_imp_keymgr_set_and_unlock_processwide_ptr (r3, r4);
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r29 = *((r1 - 0x3));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1fc0 */
#include <stdint.h>
 
void calloc () {
    r0 = lr;
    __asm ("bdnzl 0x1fc8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x20));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1fa0 */
#include <stdint.h>
 
void keymgr_get_and_lock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1fa8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x27));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1f80 */
#include <stdint.h>
 
void keymgr_set_and_unlock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1f88");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x2e));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1bb4 */
#include <stdint.h>
 
uint32_t darwin_unwind_dyld_remove_image_hook () {
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    r30 = r1;
    *((r30 + 0x1e)) = r3;
    *((r30 + 0x1f)) = r4;
    r0 = 0;
    *((r30 + 0x12)) = r0;
    r3 = 0x12d;
    sym_imp_keymgr_get_and_lock_processwide_ptr (r3);
    *((r30 + 0x10)) = r3;
    r0 = r30 + 0x40;
    *((r30 + 0x11)) = r0;
    do {
        r2 = *((r30 + 0x11));
        r0 = *(r2);
        if (r0 == 0) {
        } else {
            r2 = *((r30 + 0x11));
            r2 = *(r2);
            r2 = *((r2 + 0x1));
            r0 = *((r30 + 0x1e));
            if (r2 == r0) {
                r2 = *((r30 + 0x11));
                r2 = *(r2);
                r2 = *((r2 + 0x2));
                r0 = *((r30 + 0x1f));
                if (r2 != r0) {
                    goto label_0;
                }
                r2 = *((r30 + 0x11));
                r0 = *(r2);
                *((r30 + 0x12)) = r0;
                r9 = *((r30 + 0x11));
                r2 = *((r30 + 0x12));
                r0 = *((r2 + 0x4));
                *(r9) = r0;
                r2 = *((r30 + 0x12));
                r0 = *(r2);
                if (r0 == 0x28) {
                    goto label_1;
                }
                sym_imp_abort ();
            }
label_0:
            r2 = *((r30 + 0x11));
            r2 = *(r2);
            r0 = r2 + 0x10;
            *((r30 + 0x11)) = r0;
        } while (1);
    }
label_1:
    r3 = 0x12d;
    r4 = *((r30 + 0x10));
    sym_imp_keymgr_set_and_unlock_processwide_ptr (r3, r4);
    r0 = *((r30 + 0x12));
    if (r0 != 0) {
        r2 = *((r30 + 0x12));
        r0 = *((r2 + 0x3));
        if (r0 != 0) {
            r2 = *((r30 + 0x12));
            r0 = *((r2 + 0x3));
            r3 = *((r30 + 0x12));
            r12 = r0;
            ctr = r12;
            void (*ctr)() ();
        }
        r3 = *((r30 + 0x12));
        sym_imp_free (r3);
    }
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1e1c */
#include <stdint.h>
 
void keymgr_dwarf2_register_sections () {
    r0 = lr;
    __asm ("bdnzl 0x1e24");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x81));
    ctr = r12;
    r11 += 0x204;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1f00 */
#include <stdint.h>
 
void dyld_register_func_for_add_image () {
    r0 = lr;
    __asm ("bdnzl 0x1f08");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x4a));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1ee0 */
#include <stdint.h>
 
void dyld_register_func_for_remove_image () {
    /* [04] -r-x section size 288 named 4.__TEXT.__picsymbolstub1 */
    r0 = lr;
    __asm ("bdnzl 0x1ee8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x51));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1f20 */
#include <stdint.h>
 
void init_keymgr () {
    r0 = lr;
    __asm ("bdnzl 0x1f28");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x43));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1f60 */
#include <stdint.h>
 
void abort () {
    r0 = lr;
    __asm ("bdnzl 0x1f68");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x35));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1df8 */
#include <stdint.h>
 
void atexit () {
    r0 = lr;
    __asm ("bdnzl 0x1e00");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x89));
    ctr = r12;
    r11 += 0x224;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1dd4 */
#include <stdint.h>
 
void exit () {
    /* [01] -r-x section size 108 named 1.__TEXT.__picsymbol_stub */
    r0 = lr;
    __asm ("bdnzl 0x1ddc");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x91));
    ctr = r12;
    r11 += 0x244;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1f40 */
#include <stdint.h>
 
void free () {
    r0 = lr;
    __asm ("bdnzl 0x1f48");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x3c));
    ctr = r12;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/twoproc/ppc_macho_by_boomerang/subject.exe @ 0x1fe0 */
#include <stdint.h>
 
void printf () {
    r0 = lr;
    __asm ("bdnzl 0x1fe8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x19));
    ctr = r12;
    __asm ("bctr");
}
