/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x181c */
#include <stdint.h>
 
void entry0 () {
    /* [00] -r-x section size 1416 named 0.__TEXT.__text */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1850 */
#include <stdint.h>
 
void SourceCache_Csu_Csu_45_ () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x1864");
    r31 = lr;
    r28 = r3;
    r30 = r4;
    r29 = r5;
    sym_dyld_init_check ();
    r9 = r31 + 00000;
    *((r9 + 0x1e7)) = r28;
    r9 = r31 + 00000;
    *((r9 + 0x1e8)) = r30;
    r9 = r31 + 00000;
    *((r9 + 0x1e9)) = r29;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x205));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r9 = r31 + 00000;
    r9 = *((r9 + 0x204));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_imp_keymgr_dwarf2_register_sections ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1ec));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_call_mod_init_funcs ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x1eb));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r3 = r31 + 00000;
    r3 += 0x6f4;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r3 = *((r1 + 0x10));
    if (r3 != 0) {
        sym_imp_atexit ();
    }
    r0 = 0;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x203));
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
    *((r9 + 0x1ea)) = r0;
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1ba8 */
#include <stdint.h>
 
void darwin_gcc3_preregister_frame_info () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    __asm ("bdnzl 0x1bb8");
    *((r1 - 0x14)) = r1;
    r31 = lr;
    sym_imp_init_keymgr ();
    r9 = r31 + 00000;
    r9 = *((r9 + 0x131));
    r9 = *((r9 + 0x2));
    if (r9 != 0) {
        r0 = *((r9 + 0x2));
        if (r0 > 2) {
            goto label_0;
        }
    }
    r3 = r31 + 00000;
    r3 = *((r3 + 0x119));
    sym_imp_dyld_register_func_for_add_image (r3);
    r0 = *((r1 + 0x16));
    r3 = r31 + 00000;
    r1 += 0x50;
    r3 = *((r3 + 0x118));
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d84 */
#include <stdint.h>
 
void func1 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d88 */
#include <stdint.h>
 
void func2 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d8c */
#include <stdint.h>
 
void func3 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d90 */
#include <stdint.h>
 
void func4 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d94 */
#include <stdint.h>
 
void func5 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d98 */
#include <stdint.h>
 
void func6 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d9c */
#include <stdint.h>
 
void func7 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1da0 */
#include <stdint.h>
 
void func8 () {
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1c20 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t main () {
    r4 = _mfcr ();
    r2 = lr;
    __asm ("bdnzl 0x1c30");
    *((r1 - 0x1)) = r31;
    r0 = 1;
    *((r1 + 0x2)) = r2;
    r31 = lr;
    *((r1 + 0x1)) = r4;
    *((r1 - 0x14)) = r1;
    if (r3 <= 1) {
        r0 = 0;
    }
    if (r0 != 0) {
        r3 = r31 + 00000;
        r0 = *((r3 + 0x103));
    } else {
        r4 = r31 + 00000;
        r0 = *((r4 + 0x102));
    }
    if (r0 != 0) {
        r5 = r31 + 00000;
        r11 = *((r5 + 0x101));
    } else {
        r6 = r31 + 00000;
        r11 = *((r6 + 0x100));
    }
    if (r0 != 0) {
        r7 = r31 + 00000;
        r10 = *((r7 + 0xff));
    } else {
        r8 = r31 + 00000;
        r10 = *((r8 + 0xfe));
    }
    if (r0 != 0) {
        r12 = r31 + 00000;
        r8 = *((r12 + 0xfd));
    } else {
        r2 = r31 + 00000;
        r8 = *((r2 + 0xfc));
    }
    if (r3 > 1) {
        r5 = r31 + 00000;
        r3 = 0;
        r4 = *((r5 + 0x103));
        if (r0 != r4) {
            goto label_0;
        }
        r6 = r31 + 00000;
        r0 = *((r6 + 0x101));
        if (r11 != r0) {
            goto label_0;
        }
        r7 = r31 + 00000;
        r11 = *((r7 + 0xff));
        if (r10 != r11) {
            goto label_0;
        }
        r10 = r31 + 00000;
        r9 = *((r10 + 0xfd));
    } else {
        r2 = r31 + 00000;
        r3 = 0;
        r12 = *((r2 + 0x102));
        if (r0 != r12) {
            goto label_0;
        }
        r5 = r31 + 00000;
        r4 = *((r5 + 0x100));
        if (r11 != r4) {
            goto label_0;
        }
        r6 = r31 + 00000;
        r0 = *((r6 + 0xfe));
        if (r10 != r0) {
            goto label_0;
        }
        r11 = r31 + 00000;
        r9 = *((r11 + 0xfc));
    }
    if (r8 == r9) {
        r3 = 1;
    }
label_0:
    if (r3 != 0) {
        r9 = r31 + 00000;
        r3 = r9 + 0x3c0;
    } else {
        r8 = r31 + 00000;
        r3 = r8 + 0x3c8;
    }
    sym_imp_puts (r3);
    r10 = *((r1 + 0x16));
    r1 += 0x50;
    r3 = _mfcr ();
    r3 = rotate_left64 (r3, 19);
    r3 &= 0x1;
    r7 = *((r1 + 0x1));
    lr = r10;
    r31 = *((r1 - 0x1));
    _mtcrf (8, r7);
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x19d0 */
#include <stdint.h>
 
void call_mod_init_funcs () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x19e4");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x58c;
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1a6c */
#include <stdint.h>
 
void dyld_func_lookup () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    ctr = r11;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1a18 */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1a54 */
#include <stdint.h>
 
void dyld_stub_binding_helper () {
    r12 = 0x0;
    r0 = *((r12 + 0x0));
    ctr = r0;
    r12 = 0x0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1a7c */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1f0c */
#include <stdint.h>
 
void calloc () {
    r0 = lr;
    __asm ("bdnzl 0x1f14");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x55));
    ctr = r12;
    r11 += 0x154;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1ee8 */
#include <stdint.h>
 
void keymgr_get_and_lock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1ef0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x5d));
    ctr = r12;
    r11 += 0x174;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1adc */
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
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1ea0 */
#include <stdint.h>
 
void abort () {
    r0 = lr;
    __asm ("bdnzl 0x1ea8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x6d));
    ctr = r12;
    r11 += 0x1b4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1ec4 */
#include <stdint.h>
 
void keymgr_set_and_unlock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1ecc");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x65));
    ctr = r12;
    r11 += 0x194;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1e7c */
#include <stdint.h>
 
void free () {
    r0 = lr;
    __asm ("bdnzl 0x1e84");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x75));
    ctr = r12;
    r11 += 0x1d4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1dec */
#include <stdint.h>
 
void keymgr_dwarf2_register_sections () {
    r0 = lr;
    __asm ("bdnzl 0x1df4");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x95));
    ctr = r12;
    r11 += 0x254;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1e34 */
#include <stdint.h>
 
void dyld_register_func_for_add_image () {
    r0 = lr;
    __asm ("bdnzl 0x1e3c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x85));
    ctr = r12;
    r11 += 0x214;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1e10 */
#include <stdint.h>
 
void dyld_register_func_for_remove_image () {
    r0 = lr;
    __asm ("bdnzl 0x1e18");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x8d));
    ctr = r12;
    r11 += 0x234;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1e58 */
#include <stdint.h>
 
void init_keymgr () {
    r0 = lr;
    __asm ("bdnzl 0x1e60");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x7d));
    ctr = r12;
    r11 += 0x1f4;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1dc8 */
#include <stdint.h>
 
void atexit () {
    r0 = lr;
    __asm ("bdnzl 0x1dd0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x9d));
    ctr = r12;
    r11 += 0x274;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1da4 */
#include <stdint.h>
 
void exit () {
    /* [01] -r-x section size 432 named 1.__TEXT.__picsymbol_stub */
    r0 = lr;
    __asm ("bdnzl 0x1dac");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xa5));
    ctr = r12;
    r11 += 0x294;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/condcodexform/ppc_macho_by_boomerang_o4/subject.exe @ 0x1f30 */
#include <stdint.h>
 
void puts () {
    r0 = lr;
    __asm ("bdnzl 0x1f38");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x4d));
    ctr = r12;
    r11 += 0x134;
    __asm ("bctr");
}
