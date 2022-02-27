/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1838 */
#include <stdint.h>
 
void entry0 () {
    /* [00] -r-x section size 1328 named 0.__TEXT.__text */
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
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x186c */
#include <stdint.h>
 
void SourceCache_Csu_Csu_45_ () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1880");
    r31 = lr;
    r28 = r3;
    r30 = r4;
    r29 = r5;
    sym_dyld_init_check ();
    r9 = r31 + 00000;
    *((r9 + 0x1e0)) = r28;
    r9 = r31 + 00000;
    *((r9 + 0x1e1)) = r30;
    r9 = r31 + 00000;
    *((r9 + 0x1e2)) = r29;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1f7));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1f6));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_imp_keymgr_dwarf2_register_sections ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1e5));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_call_mod_init_funcs ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1e4));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r3 = r31 + 00000;
    r3 += 0x6c0;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r3 = *((r1 + 0x10));
    if (r3 != 0) {
        sym_imp_atexit ();
    }
    r0 = 0;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1f5));
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
    *((r9 + 0x1e3)) = r0;
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
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1bc4 */
#include <stdint.h>
 
void darwin_gcc3_preregister_frame_info () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    __asm ("bdnzl 0x1bd4");
    *((r1 - 0x14)) = r1;
    r31 = lr;
    sym_imp_init_keymgr ();
    r9 = r31 + 00000;
    r9 = *((r9 + 0x123));
    r9 = *((r9 + 0x2));
    if (r9 != 0) {
        r0 = *((r9 + 0x2));
        if (r0 > 2) {
            goto label_0;
        }
    }
    r3 = r31 + 00000;
    r3 = *((r3 + 0x112));
    sym_imp_dyld_register_func_for_add_image (r3);
    r0 = *((r1 + 0x16));
    r3 = r31 + 00000;
    r1 += 0x50;
    r3 = *((r3 + 0x111));
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
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1c3c */
#include <stdint.h>
 
uint32_t fib1 () {
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x14)) = r1;
    r30 = r1;
    *((r30 + 0x1a)) = r3;
    r3 = *((r30 + 0x1a));
    sym_fib2 (r3);
    r0 = r3;
    r3 = r0;
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1c78 */
#include <stdint.h>
 
uint32_t fib2 () {
    r0 = lr;
    *((r1 - 0x3)) = r29;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    r30 = r1;
    *((r30 + 0x1e)) = r3;
    r0 = *((r30 + 0x1e));
    if (r0 > 1) {
        r9 = *((r30 + 0x1e));
        r0 = r9 + 0xffff;
        r3 = r0;
        sym_fib1 (r3);
        r29 = r3;
        r9 = *((r30 + 0x1e));
        r0 = r9 + 0xfffe;
        r3 = r0;
        sym_fib1 (r3);
        r0 = r3;
        r29 += r0;
        *((r30 + 0x10)) = r29;
    } else {
        r0 = *((r30 + 0x1e));
        *((r30 + 0x10)) = r0;
    }
    r3 = *((r30 + 0x10));
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r29 = *((r1 - 0x3));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1cf0 */
#include <stdint.h>
 
int32_t main () {
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    r30 = r1;
    __asm ("bdnzl 0x1d08");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x2d0;
    sym_imp_printf (r3);
    r3 = r31 + 00000;
    r3 += 0x2e0;
    r4 = r30 + 0x40;
    sym_imp_scanf (r3, r4);
    r3 = *((r30 + 0x10));
    sym_fib1 (r3);
    r0 = r3;
    *((r30 + 0x11)) = r0;
    r3 = r31 + 00000;
    r3 += 0x2e4;
    r4 = *((r30 + 0x10));
    r5 = *((r30 + 0x11));
    sym_imp_printf (r3, r4, r5);
    r0 = 0;
    r3 = r0;
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x19ec */
#include <stdint.h>
 
void call_mod_init_funcs () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1a00");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x558;
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
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1a88 */
#include <stdint.h>
 
void dyld_func_lookup () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    ctr = r11;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1a34 */
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
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1a70 */
#include <stdint.h>
 
void dyld_stub_binding_helper () {
    r12 = 0x0;
    r0 = *((r12 + 0x0));
    ctr = r0;
    r12 = 0x0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1a98 */
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
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1ed0 */
#include <stdint.h>
 
void calloc () {
    r0 = lr;
    __asm ("bdnzl 0x1ed8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x5c));
    ctr = r12;
    r11 += 0x170;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1eac */
#include <stdint.h>
 
void keymgr_get_and_lock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1eb4");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x64));
    ctr = r12;
    r11 += 0x190;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1af8 */
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
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1e64 */
#include <stdint.h>
 
void abort () {
    r0 = lr;
    __asm ("bdnzl 0x1e6c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x74));
    ctr = r12;
    r11 += 0x1d0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1e88 */
#include <stdint.h>
 
void keymgr_set_and_unlock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1e90");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x6c));
    ctr = r12;
    r11 += 0x1b0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1e40 */
#include <stdint.h>
 
void free () {
    r0 = lr;
    __asm ("bdnzl 0x1e48");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x7c));
    ctr = r12;
    r11 += 0x1f0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1db0 */
#include <stdint.h>
 
void keymgr_dwarf2_register_sections () {
    r0 = lr;
    __asm ("bdnzl 0x1db8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x9c));
    ctr = r12;
    r11 += 0x270;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1df8 */
#include <stdint.h>
 
void dyld_register_func_for_add_image () {
    r0 = lr;
    __asm ("bdnzl 0x1e00");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x8c));
    ctr = r12;
    r11 += 0x230;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1dd4 */
#include <stdint.h>
 
void dyld_register_func_for_remove_image () {
    r0 = lr;
    __asm ("bdnzl 0x1ddc");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x94));
    ctr = r12;
    r11 += 0x250;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1e1c */
#include <stdint.h>
 
void init_keymgr () {
    r0 = lr;
    __asm ("bdnzl 0x1e24");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x84));
    ctr = r12;
    r11 += 0x210;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1d8c */
#include <stdint.h>
 
void atexit () {
    r0 = lr;
    __asm ("bdnzl 0x1d94");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xa4));
    ctr = r12;
    r11 += 0x290;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1d68 */
#include <stdint.h>
 
void exit () {
    /* [01] -r-x section size 468 named 1.__TEXT.__picsymbol_stub */
    r0 = lr;
    __asm ("bdnzl 0x1d70");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xac));
    ctr = r12;
    r11 += 0x2b0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1f18 */
#include <stdint.h>
 
void printf () {
    r0 = lr;
    __asm ("bdnzl 0x1f20");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x4c));
    ctr = r12;
    r11 += 0x130;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/fibo2/ppc_macho_by_boomerang/subject.exe @ 0x1ef4 */
#include <stdint.h>
 
void scanf () {
    r0 = lr;
    __asm ("bdnzl 0x1efc");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x54));
    ctr = r12;
    r11 += 0x150;
    __asm ("bctr");
}
