/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048493 */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804a02b;
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
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048500 */
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
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048540 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048560 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048500)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048940 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048844 */
#include <stdint.h>
 
int32_t intermediate_10_subregs (void) {
    ah = *(obj.global_char1);
    al = *(obj.global_char2);
    bx = ax;
    ecx = ebx;
    eax = ebx;
    ah += ah;
    al += al;
    al += al;
    ebx = (int32_t) al;
    ecx = (int32_t) ah;
    eax = 0;
    eax += ebx;
    eax += ecx;
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048725 */
#include <stdint.h>
 
int32_t basic_6_reg_overwrite_in_block (int32_t c) {
    eax = *((esp + 4));
    ebx = 0x7b;
    ebx = 0x30;
    eax += ebx;
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80484c0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048741 */
#include <stdint.h>
 
int32_t intermediate_1_mem_in_block (int32_t c) {
    eax = *((esp + 4));
    *(obj.global_var) = 0x30;
    eax += *(obj.global_var);
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048944 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x16b3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x804868d */
#include <stdint.h>
 
int32_t basic_1_reg_in_block (int32_t c) {
    eax = *((esp + 4));
    ebx = 0x30;
    eax += ebx;
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x804881a */
#include <stdint.h>
 
int32_t intermediate_6_mem_overwrite_in_block (int32_t c) {
    eax = *((esp + 4));
    *(obj.global_var) = 0x7b;
    *(obj.global_var) = 0x30;
    eax += *(obj.global_var);
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x804858b */
#include <stdint.h>
 
int32_t advanced_3_value_range_analysis (int32_t arg_10h) {
    if (*((esp + 0x10)) > 0xa) {
        if (*((esp + 0x10)) > 0xa) {
            eax = 0x62;
        } else {
            eax = 0x61;
        }
        putchar (eax);
        if (*((esp + 0x10)) <= 0xa) {
            eax = 0x42;
        } else {
            eax = 0x41;
        }
        putchar (eax);
        if (*((esp + 0x10)) > 9) {
            eax = 0x31;
        } else {
            eax = 0x30;
        }
        putchar (eax);
        if (*((esp + 0x10)) <= 8) {
            goto label_0;
        }
        puts (0x8048964);
    }
label_0:
    if (*((esp + 0x10)) == 0x2a) {
        if (*((esp + 0x10)) == 0x2a) {
            eax = 0x62;
        } else {
            eax = 0x61;
        }
        putchar (eax);
        if (*((esp + 0x10)) != 0x2a) {
            eax = 0x42;
        } else {
            eax = 0x41;
        }
        putchar (eax);
        if (*((esp + 0x10)) == 0x64) {
            eax = 0x31;
        } else {
            eax = 0x30;
        }
        putchar (eax);
        if (*((esp + 0x10)) == 0x65) {
            goto label_1;
        }
        puts ("= 42");
    }
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80486e3 */
#include <stdint.h>
 
int32_t basic_4_reg_cond_change (int32_t arg_4h) {
    eax = *((esp + 4));
    ebx = 0x41;
    if (eax != 0x2a) {
        ebx += 0x20;
    }
    eax += ebx;
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80488e0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1717;
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
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    /* [14] -r-x section size 1394 named .text */
    ecx = esp + 4;
    esi = *(ecx);
    edi = *((ecx + 4));
    eax = basic_1_reg_in_block (esi, ecx, ebx, esi, edi, ebp);
    ebx = eax;
    eax = basic_2_reg_in_prev_block (esi);
    ebx += eax;
    eax = basic_3_reg_cond_overwrite (esi);
    ebx += eax;
    eax = basic_4_reg_cond_change (esi);
    ebx += eax;
    eax = basic_5_reg_different_values (esi);
    ebx += eax;
    eax = basic_6_reg_overwrite_in_block (esi);
    ebx += eax;
    eax = intermediate_1_mem_in_block (esi);
    ebx += eax;
    eax = intermediate_2_mem_in_prev_block (esi);
    ebx += eax;
    eax = intermediate_3_mem_cond_overwrite (esi);
    ebx += eax;
    eax = intermediate_4_mem_cond_change (esi);
    ebx += eax;
    eax = intermediate_5_mem_different_values (esi);
    ebx += eax;
    eax = intermediate_6_mem_overwrite_in_block (esi);
    ebx += eax;
    eax = intermediate_10_subregs ();
    ebx += eax;
    eax = advanced_1_writes_can_be_omitted_for_non_mem_access_calls (esi);
    ebx += eax;
    eax = advanced_2_mem_values_can_be_propagated_for_non_write_calls (*(edi));
    ebx += eax;
    eax = advanced_3_value_range_analysis (esi);
    edx = *(edi);
    ebx += eax;
    edx = *(edx);
    ebx += edx;
    return exit (ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80486a4 */
#include <stdint.h>
 
int32_t basic_2_reg_in_prev_block (int32_t arg_4h) {
    eax = *((esp + 4));
    ebx = 0x30;
    while (1) {
        eax += ebx;
        eax = putchar (eax);
        eax = 0;
        return eax;
        eax++;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80486c2 */
#include <stdint.h>
 
int32_t basic_3_reg_cond_overwrite (int32_t arg_4h) {
    eax = *((esp + 4));
    ebx = 0x41;
    if (eax != 0x2a) {
        ebx = 0x61;
    }
    eax += ebx;
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048702 */
#include <stdint.h>
 
int32_t basic_5_reg_different_values (int32_t arg_4h) {
    eax = *((esp + 4));
    if (eax != 0x2a) {
        ebx = 0x41;
    } else {
        ebx = 0x61;
    }
    eax += ebx;
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048761 */
#include <stdint.h>
 
int32_t intermediate_2_mem_in_prev_block (int32_t arg_ch) {
    edi = *((esp + 0xc));
    *(obj.global_var) = 0x30;
    while (1) {
        eax = edi;
        eax += *(obj.global_var);
        eax = putchar (eax);
        eax = 0;
        return eax;
        edi++;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x804878e */
#include <stdint.h>
 
int32_t intermediate_3_mem_cond_overwrite (int32_t arg_4h) {
    eax = *((esp + 4));
    *(obj.global_var) = 0x41;
    if (eax != 0x2a) {
        *(obj.global_var) = 0x61;
    }
    eax += *(obj.global_var);
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80487bd */
#include <stdint.h>
 
int32_t intermediate_4_mem_cond_change (int32_t arg_4h) {
    eax = *((esp + 4));
    *(obj.global_var) = 0x41;
    if (eax != 0x2a) {
        *(obj.global_var) += 0x20;
    }
    eax += *(obj.global_var);
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80487e9 */
#include <stdint.h>
 
int32_t intermediate_5_mem_different_values (int32_t arg_4h) {
    eax = *((esp + 4));
    if (eax != 0x2a) {
        *(obj.global_var) = 0x41;
    } else {
        *(obj.global_var) = 0x61;
    }
    eax += *(obj.global_var);
    eax = putchar (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048877 */
#include <stdint.h>
 
uint32_t advanced_1_writes_can_be_omitted_for_non_mem_access_calls (int32_t arg_8h) {
    int32_t var_ch;
    *(obj.global_var) = 1;
    eax = abs (*((ebp + 8)));
    *((ebp - 0xc)) = eax;
    *(obj.global_var) = 2;
    edx = *(obj.global_var);
    eax = *((ebp - 0xc));
    eax += edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void abs (void) {
    abs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80488af */
#include <stdint.h>
 
uint32_t advanced_2_mem_values_can_be_propagated_for_non_write_calls (char * s) {
    size_t var_ch;
    *(obj.global_var) = 1;
    eax = strlen (*((ebp + 8)));
    *((ebp - 0xc)) = eax;
    eax = *(obj.global_var);
    *((ebp - 0xc)) += eax;
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048390 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048380 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048328 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1ccf;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/value_prop/ia32_elf/subject.exe @ 0x8048370 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
