/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80483f7 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048430 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a023;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048460 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6532;
    eax -= obj.completed.6532;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80484a0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80484c0 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048460)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80486c0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80485e4 */
#include <stdint.h>
 
int32_t intermediate_4_swap_with_xor (int32_t c, int32_t arg_14h) {
    ebx = *((esp + 0x10));
    esi = *((esp + 0x14));
    ebx ^= esi;
    esi ^= ebx;
    ebx ^= esi;
    putchar (ebx);
    putchar (esi);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048350 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048420 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80484eb */
#include <stdint.h>
 
int32_t intermediate_1_cmp_with_are_constant (int32_t arg_10h) {
    if (*((esp + 0x10)) == 1) {
        if (*((esp + 0x10)) != 2) {
            goto label_0;
        }
        puts ("not reached");
    }
label_0:
    if (*((esp + 0x10)) == 1) {
        if (*((esp + 0x10)) <= 2) {
            goto label_1;
        }
        puts ("not reached");
    }
label_1:
    if (*((esp + 0x10)) < 0) {
        if (*((esp + 0x10)) <= 0) {
            goto label_2;
        }
        puts ("not reached");
    }
label_2:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80486c4 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1933;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80485be */
#include <stdint.h>
 
int32_t intermediate_3_division_by_multiplication (int32_t arg_1ch) {
    edx = 0x92492493;
    ecx = *((esp + 0x1c));
    eax = *((esp + 0x1c));
    edx:eax = eax * edx;
    edx += ecx;
    ecx >>= 0x1f;
    edx >>= 2;
    edx -= ecx;
    eax = putchar (edx);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048660 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1997;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    _init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048370 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    /* [14] -r-x section size 850 named .text */
    ecx = esp + 4;
    esi = *(ecx);
    edi = *((ecx + 4));
    eax = intermediate_1_cmp_with_are_constant (esi, ecx, ebx, esi, edi, ebp);
    ebx = eax;
    eax = intermediate_2_cmp_with_extra (esi);
    ebx += eax;
    eax = intermediate_3_division_by_multiplication (esi);
    ebx += eax;
    eax = intermediate_4_swap_with_xor (0x30, 0x61);
    edx = 0x55555556;
    ebx += eax;
    eax = esi;
    edx:eax = eax * edx;
    eax = esi;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx * 3;
    al = (esi == eax) ? 1 : 0;
    eax = (int32_t) al;
    eax = esi;
    eax = ~eax;
    eax &= 1;
    eax = 0;
    al = (esi == 0) ? 1 : 0;
    eax = advanced_1_boolean_minization (eax, eax, eax);
    edx = *(edi);
    ebx += eax;
    edx = *(edx);
    ebx += edx;
    return exit (ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048551 */
#include <stdint.h>
 
int32_t intermediate_2_cmp_with_extra (int32_t arg_10h) {
    if (*((esp + 0x10)) > 0xa) {
        if (*((esp + 0x10)) > 0x13) {
            goto label_0;
        }
        if (*((esp + 0x10)) == 0x1e) {
            goto label_0;
        }
        puts ("!=30 is always true");
    }
label_0:
    if (*((esp + 0x10)) == 1) {
        if (*((esp + 0x10)) == 2) {
            goto label_1;
        }
        puts ("!=2 is always true");
    }
label_1:
    if (*((esp + 0x10)) > 0xa) {
        if (*((esp + 0x10)) <= 9) {
            goto label_2;
        }
        puts (">9 is always true");
    }
label_2:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x804861a */
#include <stdint.h>
 
int32_t advanced_1_boolean_minization (uint32_t arg_4h, uint32_t arg_8h, uint32_t arg_ch) {
    if (*((esp + 4)) == 0) {
        if (*((esp + 8)) != 0) {
            goto label_0;
        }
        if (*((esp + 0xc)) != 0) {
            goto label_1;
        }
    }
label_0:
    if (*((esp + 4)) == 0) {
        if (*((esp + 8)) == 0) {
            goto label_2;
        }
        if (*((esp + 0xc)) != 0) {
            goto label_1;
        }
    }
label_2:
    if (*((esp + 4)) != 0) {
        if (*((esp + 8)) == 0) {
label_1:
            eax = 1;
        }
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x80482ec */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1d0b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/exp/ia32_elf/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
