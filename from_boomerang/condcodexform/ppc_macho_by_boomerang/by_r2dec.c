/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x16ac */
#include <stdint.h>
 
void entry0 () {
    /* [00] -r-x section size 1780 named 0.__TEXT.__text */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x16e0 */
#include <stdint.h>
 
void SourceCache_Csu_Csu_45_ () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x16f4");
    r31 = lr;
    r28 = r3;
    r30 = r4;
    r29 = r5;
    sym_dyld_init_check ();
    r9 = r31 + 00000;
    *((r9 + 0x243)) = r28;
    r9 = r31 + 00000;
    *((r9 + 0x244)) = r30;
    r9 = r31 + 00000;
    *((r9 + 0x245)) = r29;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x261));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r9 = r31 + 00000;
    r9 = *((r9 + 0x260));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_imp_keymgr_dwarf2_register_sections ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x248));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_call_mod_init_funcs ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x247));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r3 = r31 + 00000;
    r3 += 0x860;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r3 = *((r1 + 0x10));
    if (r3 != 0) {
        sym_imp_atexit ();
    }
    r0 = 0;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x25f));
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
    *((r9 + 0x246)) = r0;
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1a38 */
#include <stdint.h>
 
void darwin_gcc3_preregister_frame_info () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    __asm ("bdnzl 0x1a48");
    *((r1 - 0x14)) = r1;
    r31 = lr;
    sym_imp_init_keymgr ();
    r9 = r31 + 00000;
    r9 = *((r9 + 0x18d));
    r9 = *((r9 + 0x2));
    if (r9 != 0) {
        r0 = *((r9 + 0x2));
        if (r0 > 2) {
            goto label_0;
        }
    }
    r3 = r31 + 00000;
    r3 = *((r3 + 0x175));
    sym_imp_dyld_register_func_for_add_image (r3);
    r0 = *((r1 + 0x16));
    r3 = r31 + 00000;
    r1 += 0x50;
    r3 = *((r3 + 0x174));
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1ab0 */
#include <stdint.h>
 
void func1 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1ac8 */
#include <stdint.h>
 
void func2 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1ae0 */
#include <stdint.h>
 
void func3 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1af8 */
#include <stdint.h>
 
void func4 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1b10 */
#include <stdint.h>
 
void func5 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1b28 */
#include <stdint.h>
 
void func6 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1b40 */
#include <stdint.h>
 
void func7 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1b58 */
#include <stdint.h>
 
void func8 () {
    *((r1 - 0x2)) = r30;
    *((r1 - 0xc)) = r1;
    r30 = r1;
    r1 = *(r1);
    r30 = *((r1 - 0x2));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1b70 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t main () {
    r0 = lr;
    *((r1 - 0x2)) = r30;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x20)) = r1;
    r30 = r1;
    __asm ("bdnzl 0x1b88");
    r31 = lr;
    *((r30 + 0x26)) = r3;
    *((r30 + 0x27)) = r4;
    r0 = 0;
    *((r30 + 0x14)) = r0;
    r0 = 1;
    *((r30 + 0x16)) = r0;
    r0 = *((r30 + 0x26));
    if (r0 <= 1) {
        r0 = 0;
        *((r30 + 0x16)) = r0;
    }
    r0 = *((r30 + 0x16));
    *((r30 + 0x15)) = r0;
    r0 = *((r30 + 0x15));
    if (r0 != 0) {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x12d));
        *((r30 + 0x17)) = r9;
    } else {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x12c));
        *((r30 + 0x17)) = r9;
    }
    r0 = *((r30 + 0x17));
    *((r30 + 0x10)) = r0;
    r0 = *((r30 + 0x15));
    if (r0 != 0) {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x12b));
        *((r30 + 0x18)) = r9;
    } else {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x12a));
        *((r30 + 0x18)) = r9;
    }
    r0 = *((r30 + 0x18));
    *((r30 + 0x11)) = r0;
    r0 = *((r30 + 0x15));
    if (r0 != 0) {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x129));
        *((r30 + 0x19)) = r9;
    } else {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x128));
        *((r30 + 0x19)) = r9;
    }
    r0 = *((r30 + 0x19));
    *((r30 + 0x12)) = r0;
    r0 = *((r30 + 0x15));
    if (r0 != 0) {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x127));
        *((r30 + 0x1a)) = r9;
    } else {
        r9 = r31 + 00000;
        r9 = *((r9 + 0x126));
        *((r30 + 0x1a)) = r9;
    }
    r0 = *((r30 + 0x1a));
    *((r30 + 0x13)) = r0;
    r0 = *((r30 + 0x26));
    if (r0 > 1) {
        r0 = 0;
        *((r30 + 0x14)) = r0;
        r11 = *((r30 + 0x10));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x12d));
        if (r11 != r0) {
            goto label_0;
        }
        r11 = *((r30 + 0x11));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x12b));
        if (r11 != r0) {
            goto label_0;
        }
        r11 = *((r30 + 0x12));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x129));
        if (r11 != r0) {
            goto label_0;
        }
        r11 = *((r30 + 0x13));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x127));
        if (r11 != r0) {
            goto label_0;
        }
        r0 = 1;
        *((r30 + 0x14)) = r0;
    } else {
        r0 = 0;
        *((r30 + 0x14)) = r0;
        r11 = *((r30 + 0x10));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x12c));
        if (r11 != r0) {
            goto label_0;
        }
        r11 = *((r30 + 0x11));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x12a));
        if (r11 != r0) {
            goto label_0;
        }
        r11 = *((r30 + 0x12));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x128));
        if (r11 != r0) {
            goto label_0;
        }
        r11 = *((r30 + 0x13));
        r9 = r31 + 00000;
        r0 = *((r9 + 0x126));
        if (r11 != r0) {
            goto label_0;
        }
        r0 = 1;
        *((r30 + 0x14)) = r0;
    }
label_0:
    r0 = *((r30 + 0x14));
    if (r0 != 0) {
        r3 = r31 + 00000;
        r3 += 0x464;
        sym_imp_printf (r3);
    } else {
        r3 = r31 + 00000;
        r3 += 0x46c;
        sym_imp_printf (r3);
    }
    r0 = *((r30 + 0x14));
    r0 = _mfcr ();
    r0 = rotate_left64 (r0, 31);
    r0 &= 0x1;
    r3 = r0;
    r1 = *(r1);
    r0 = *((r1 + 0x2));
    lr = r0;
    r30 = *((r1 - 0x2));
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1860 */
#include <stdint.h>
 
void call_mod_init_funcs () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1874");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x6f8;
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x18fc */
#include <stdint.h>
 
void dyld_func_lookup () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    ctr = r11;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x18a8 */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x18e4 */
#include <stdint.h>
 
void dyld_stub_binding_helper () {
    r12 = 0x0;
    r0 = *((r12 + 0x0));
    ctr = r0;
    r12 = 0x0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x190c */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1f08 */
#include <stdint.h>
 
void calloc () {
    r0 = lr;
    __asm ("bdnzl 0x1f10");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x56));
    ctr = r12;
    r11 += 0x158;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1ee4 */
#include <stdint.h>
 
void keymgr_get_and_lock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1eec");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x5e));
    ctr = r12;
    r11 += 0x178;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x196c */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1e9c */
#include <stdint.h>
 
void abort () {
    r0 = lr;
    __asm ("bdnzl 0x1ea4");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x6e));
    ctr = r12;
    r11 += 0x1b8;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1ec0 */
#include <stdint.h>
 
void keymgr_set_and_unlock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1ec8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x66));
    ctr = r12;
    r11 += 0x198;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1e78 */
#include <stdint.h>
 
void free () {
    r0 = lr;
    __asm ("bdnzl aav.0x00001e80");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x76));
    ctr = r12;
    r11 += 0x1d8;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1de8 */
#include <stdint.h>
 
void keymgr_dwarf2_register_sections () {
    r0 = lr;
    __asm ("bdnzl 0x1df0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x96));
    ctr = r12;
    r11 += 0x258;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1e30 */
#include <stdint.h>
 
void dyld_register_func_for_add_image () {
    r0 = lr;
    __asm ("bdnzl 0x1e38");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x86));
    ctr = r12;
    r11 += 0x218;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1e0c */
#include <stdint.h>
 
void dyld_register_func_for_remove_image () {
    r0 = lr;
    __asm ("bdnzl 0x1e14");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x8e));
    ctr = r12;
    r11 += 0x238;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1e54 */
#include <stdint.h>
 
void init_keymgr () {
    r0 = lr;
    __asm ("bdnzl 0x1e5c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x7e));
    ctr = r12;
    r11 += 0x1f8;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1dc4 */
#include <stdint.h>
 
void atexit () {
    r0 = lr;
    __asm ("bdnzl 0x1dcc");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x9e));
    ctr = r12;
    r11 += 0x278;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1da0 */
#include <stdint.h>
 
void exit () {
    /* [01] -r-x section size 432 named 1.__TEXT.__picsymbol_stub */
    r0 = lr;
    __asm ("bdnzl 0x1da8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xa6));
    ctr = r12;
    r11 += 0x298;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang/subject.exe @ 0x1f2c */
#include <stdint.h>
 
void printf () {
    r0 = lr;
    __asm ("bdnzl 0x1f34");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x4e));
    ctr = r12;
    r11 += 0x138;
    __asm ("bctr");
}
