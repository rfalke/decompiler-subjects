/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x15b4 */
#include <stdint.h>
 
void entry0 () {
    /* [00] -r-x section size 1556 named 0.__TEXT.__text */
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
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x15e8 */
#include <stdint.h>
 
void SourceCache_Csu_Csu_45_ () {
    r0 = lr;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x15fc");
    r31 = lr;
    r28 = r3;
    r30 = r4;
    r29 = r5;
    sym_dyld_init_check ();
    r9 = r31 + 00000;
    *((r9 + 0x281)) = r28;
    r9 = r31 + 00000;
    *((r9 + 0x282)) = r30;
    r9 = r31 + 00000;
    *((r9 + 0x283)) = r29;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x297));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r9 = r31 + 00000;
    r9 = *((r9 + 0x296));
    r12 = *(r9);
    if (r12 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_imp_keymgr_dwarf2_register_sections ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x286));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    sym_call_mod_init_funcs ();
    r9 = r31 + 00000;
    r12 = *((r9 + 0x285));
    r0 = *(r12);
    if (r0 != 0) {
        ctr = r12;
        void (*ctr)() ();
    }
    r3 = r31 + 00000;
    r3 += 0x780;
    r4 = r1 + 0x40;
    sym_dyld_func_lookup (r3, r4);
    r3 = *((r1 + 0x10));
    if (r3 != 0) {
        sym_imp_atexit ();
    }
    r0 = 0;
    r9 = r31 + 00000;
    r9 = *((r9 + 0x295));
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
    *((r9 + 0x284)) = r0;
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
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1940 */
#include <stdint.h>
 
void darwin_gcc3_preregister_frame_info () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    __asm ("bdnzl 0x1950");
    *((r1 - 0x14)) = r1;
    r31 = lr;
    sym_imp_init_keymgr ();
    r9 = r31 + 00000;
    r9 = *((r9 + 0x1c3));
    r9 = *((r9 + 0x2));
    if (r9 != 0) {
        r0 = *((r9 + 0x2));
        if (r0 > 2) {
            goto label_0;
        }
    }
    r3 = r31 + 00000;
    r3 = *((r3 + 0x1b3));
    sym_imp_dyld_register_func_for_add_image (r3);
    r0 = *((r1 + 0x16));
    r3 = r31 + 00000;
    r1 += 0x50;
    r3 = *((r3 + 0x1b2));
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
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x19b8 */
#include <stdint.h>
 
int32_t main () {
    uint32_t local_0;
    uint32_t local_1;
    r6 = _mfcr ();
    r2 = lr;
    __asm ("bdnzl 0x19c8");
    *((r1 + 0x2)) = r2;
    *((r1 - 0x4)) = r28;
    *((r1 + 0x1)) = r6;
    r31 = lr;
    *((r1 - 0x14)) = r1;
    r30 = r3;
    r29 = r5;
    r28 = r4;
    if (r3 > 1) {
        if (r3 <= 2) {
            r4 = 0;
            r5++;
            r3 = 0xffaa;
            main (r3);
            r4 = r28 - 1;
            r5 = r29 + r3;
            r3 = 0xffa9;
            main (r3);
            r4 = 0xfff3;
            r5 = r29 + r3;
            r3 = 0xffb1;
            main (r3);
        }
        if (r30 < r28) {
            r3 = r30 + 1;
            r4 = r28;
            r5 = r29;
            main (r3, r4, r5);
        }
        r4 = r30 + 0xffe5;
        r5 = r29;
        r3 = 0xffa2;
        main (r3);
        if (r3 != 0) {
            if (r3 == 2) {
                if (r28 <= 0xc) {
                    r6 = r31 + 00000;
                    r4 = r28 + 1;
                    r3 = 2;
                    r5 = r6 + 0x44c;
                    goto label_0;
                }
                r30 = 9;
            }
            r30 = 0x10;
        } else {
        } else {
        }
    }
    if (r3 < 0) {
        if (r3 < 0xffb8) {
            r7 = r31 + 00000;
            r3 = r4;
            r5 = r7 + 0x458;
            r4 = r30;
        } else {
        }
        if (r3 < 0xffce) {
            r5 = *(r5);
            r3 = (int64_t) r5;
            if (r4 == r3) {
                r4 = *((r29 + 0x1f));
                r11 = r31 + 00000;
                r10 = *((r11 + 0x1a6));
                r3 = (int64_t) r4;
                r4 = r10 + 0x58;
                r8 = *((r4 + 0x2));
                r9 = r8 + 0xffff;
                *((r4 + 0x2)) = r9;
                if (r9 < 0) {
                    r12 = *((r4 + 0x6));
                    if (r9 < r12) {
                        goto label_1;
                    }
                    if (r3 == 0xa) {
                        goto label_1;
                    }
                }
                r29 = *(r4);
                local_0 = r3 & 0xff;
                local_1 = r0 & 0xffffff00;
                r0 = local_1 | local_0;
                *(r29) = r3;
                r28 = r29 + 1;
                *(r4) = r28;
                goto label_2;
label_1:
                sym_imp_swbuf ();
                r0 = r3;
label_2:
                r30 = r0;
                goto label_3;
            }
            r5 = r29 + 1;
            r3 = 0xffbf;
            r9 = *(r5);
            r5++;
            r0 = r9 ^ 0x2f;
            __asm ("addze r3, r3");
        } else {
        } else {
        }
    }
    if (r3 <= 0xa) {
        goto label_4;
    }
    r30 = r31 + 00000;
    r3 = 2;
    r4 = 2;
    r5 = r30 + 0x5f4;
label_0:
    main (r3, r4, r5);
    r30 = r3;
    goto label_3;
label_4:
    r2 = *(r5);
    r30 = 0;
    r4 = (int64_t) r2;
    if (r4 != 0x2f) {
        r6 = r31 + 00000;
        r3 = 0xffc3;
        r5 = r6 + 0x5f8;
        main (r3, r4, r5);
        r5 = r29 + 1;
        r4 = r3;
        r3 = 0;
        main (r3);
        if (r3 == 0) {
            goto label_3;
        }
    }
    r30 = 1;
label_3:
    r5 = *((r1 + 0x16));
    r3 = r30;
    r1 += 0x50;
    r7 = *((r1 + 0x1));
    lr = r5;
    r28 = *((r1 - 0x4));
    _mtcrf (8, r7);
    return r3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1768 */
#include <stdint.h>
 
void call_mod_init_funcs () {
    r0 = lr;
    *((r1 - 0x1)) = r31;
    *((r1 + 0x2)) = r0;
    *((r1 - 0x18)) = r1;
    __asm ("bdnzl 0x177c");
    r31 = lr;
    r3 = r31 + 00000;
    r3 += 0x618;
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
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1804 */
#include <stdint.h>
 
void dyld_func_lookup () {
    r11 = 0x0;
    r11 = *((r11 + 0x0));
    ctr = r11;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x17b0 */
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
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x17ec */
#include <stdint.h>
 
void dyld_stub_binding_helper () {
    r12 = 0x0;
    r0 = *((r12 + 0x0));
    ctr = r0;
    r12 = 0x0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1814 */
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
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d30 */
#include <stdint.h>
 
void calloc () {
    r0 = lr;
    __asm ("bdnzl 0x1d38");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xc4));
    ctr = r12;
    r11 += 0x310;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d0c */
#include <stdint.h>
 
void keymgr_get_and_lock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1d14");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xcc));
    ctr = r12;
    r11 += 0x330;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1874 */
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
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1cc4 */
#include <stdint.h>
 
void abort () {
    r0 = lr;
    __asm ("bdnzl 0x1ccc");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xdc));
    ctr = r12;
    r11 += 0x370;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1ce8 */
#include <stdint.h>
 
void keymgr_set_and_unlock_processwide_ptr () {
    r0 = lr;
    __asm ("bdnzl 0x1cf0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xd4));
    ctr = r12;
    r11 += 0x350;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1ca0 */
#include <stdint.h>
 
void free () {
    r0 = lr;
    __asm ("bdnzl 0x1ca8");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xe4));
    ctr = r12;
    r11 += 0x390;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1c10 */
#include <stdint.h>
 
void keymgr_dwarf2_register_sections () {
    r0 = lr;
    __asm ("bdnzl 0x1c18");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x104));
    ctr = r12;
    r11 += 0x410;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1d54 */
#include <stdint.h>
 
void swbuf () {
    r0 = lr;
    __asm ("bdnzl 0x1d5c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xbc));
    ctr = r12;
    r11 += 0x2f0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1c58 */
#include <stdint.h>
 
void dyld_register_func_for_add_image () {
    r0 = lr;
    __asm ("bdnzl 0x1c60");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xf4));
    ctr = r12;
    r11 += 0x3d0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1c34 */
#include <stdint.h>
 
void dyld_register_func_for_remove_image () {
    r0 = lr;
    __asm ("bdnzl 0x1c3c");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xfc));
    ctr = r12;
    r11 += 0x3f0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1c7c */
#include <stdint.h>
 
void init_keymgr () {
    r0 = lr;
    __asm ("bdnzl 0x1c84");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0xec));
    ctr = r12;
    r11 += 0x3b0;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1bec */
#include <stdint.h>
 
void atexit () {
    r0 = lr;
    __asm ("bdnzl 0x1bf4");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x10c));
    ctr = r12;
    r11 += 0x430;
    __asm ("bctr");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ppc_macho_by_boomerang_o4/subject.exe @ 0x1bc8 */
#include <stdint.h>
 
void exit () {
    /* [01] -r-x section size 432 named 1.__TEXT.__picsymbol_stub */
    r0 = lr;
    __asm ("bdnzl 0x1bd0");
    r11 = lr;
    r11 += 00000;
    lr = r0;
    r12 = *((r11 + 0x114));
    ctr = r12;
    r11 += 0x450;
    __asm ("bctr");
}
