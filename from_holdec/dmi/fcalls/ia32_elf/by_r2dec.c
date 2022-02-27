/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80484bf */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048500 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804b02f;
    eax -= obj.stdout;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.stdout);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048530 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = stdout;
    eax -= obj.stdout;
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
        void (*edx)(uint32_t, uint32_t) (obj.stdout, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048570 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048590 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x8048530)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048b30 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80487b0 */
#include <stdint.h>
 
uint32_t a_vararg (void) {
    eax = puts ("a_vararg called");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80483b0 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048a83 */
#include <stdint.h>
 
uint32_t advanced_2_return_in_flags_reg (void) {
    advanced_2_return_in_flags_reg_helper ();
    if (? > ?) {
        eax = puts ("is above 2");
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048a75 */
#include <stdint.h>
 
int32_t advanced_2_return_in_flags_reg_helper (uint32_t arg_10h) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80489d0 */
#include <stdint.h>
 
uint32_t intermediate_2_use_uncommon_registers_for_parameters (int32_t arg_20h) {
    eax = time (0);
    esi = *((esp + 0x20));
    edi = eax;
    eax = sum3_uncommon ();
    if (eax > 0x7b) {
        eax = puts ("un common");
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
void time (void) {
    time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80489b1 */
#include <stdint.h>
 
int32_t sum3_uncommon (void) {
    eax = esi;
    eax += edi;
    eax += edi;
    eax += ebp;
    eax += ebp;
    eax += ebp;
    eax += 0xa;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048b34 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x24c3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048a62 */
#include <stdint.h>
 
uint32_t advanced_1_pass_in_flags_reg (uint32_t arg_10h) {
    eax = advanced_1_pass_in_flags_reg_helper ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048a50 */
#include <stdint.h>
 
uint32_t advanced_1_pass_in_flags_reg_helper (void) {
    if (? > ?) {
        eax = puts ("is above 2");
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048a9a */
#include <stdint.h>
 
void advanced_3_uneven_stack (int32_t arg_10h) {
    esi = *((esp + 0x10));
    if (esi != 0x2a) {
        puts ("it not 42");
    } else {
    }
    puts ("is 42");
    if (esi != 0x2a) {
    } else {
    }
    eax = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048600 */
#include <stdint.h>
 
int32_t sum3_thiscall (int32_t arg_4h, int32_t arg_8h) {
    eax = *((esp + 8));
    edx = *((esp + 4));
    eax *= 3;
    edx = ecx + edx*2;
    eax = edx + eax + 3;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80487d0 */
#include <stdint.h>
 
void basic_2_calling_varargs (void) {
    a_vararg ();
    a_vararg (1);
    a_vararg (1, 2);
    a_vararg (1, 2, 3);
    eax = a_vararg (1, 2, 3, 4);
    eax = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048990 */
#include <stdint.h>
 
int32_t basic_3_accessing_all_registers (void) {
    eax += eax;
    eax = eax + ebx*2;
    eax += ebx;
    eax = eax + ecx*4;
    eax = eax + edx*4;
    eax += edx;
    eax = eax + esi*4;
    eax = eax + esi*2;
    eax = ecx + edi*4;
    eax = ecx + edi*2;
    eax += edi;
    eax = ecx + ebp*8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80485c0 */
#include <stdint.h>
 
int32_t sum3_cdecl (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    eax = *((esp + 8));
    ecx = *((esp + 4));
    edx *= 3;
    eax = ecx + eax*2;
    eax = eax + edx + 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048940 */
#include <stdint.h>
 
uint32_t intermediate_1_accessing_varargs (void) {
    even_more_crude ("low: a %c b %s c\n", 0x30, "hello");
    eax = crude_printf ("higher: a %c b %s c\n", 0x30, "hello");
    eax += 0x2a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048900 */
#include <stdint.h>
 
void even_more_crude (int32_t c, int32_t arg_28h) {
    eax = *((esp + 0x20));
    putchar (eax);
    ebx = *((esp + 0x28));
    fputs (ebx, *(obj.stdout));
    eax = strlen (ebx);
    eax++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80483f0 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
void fputs (void) {
    fputs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048820 */
#include <stdint.h>
 
int32_t crude_printf (int32_t arg_20h, int32_t arg_24h) {
    ebp = *((esp + 0x20));
    eax = *(ebp);
    if (al == 0) {
        goto label_2;
    }
    esi = esp + 0x24;
    ebx = 0;
    while (al == 0x25) {
        eax = *((ebp + 1));
        edi = ebp + 1;
        if (al == 0x25) {
            goto label_3;
        }
        if (al == 0x63) {
            goto label_4;
        }
        if (al == 0x73) {
            goto label_5;
        }
        puts ("Not implemented");
label_1:
        eax = *((edi + 1));
        ebp = edi + 1;
        if (al == 0) {
            goto label_6;
        }
label_0:
    }
    edi = ebp;
    ebx++;
    ebp = edi + 1;
    putchar (eax);
    eax = *((edi + 1));
    if (al != 0) {
        goto label_0;
    }
    do {
label_6:
        eax = ebx;
        return eax;
label_5:
        eax = esi;
        esi += 4;
        ebp = *(eax);
        fputs (ebp, *(obj.stdout));
        eax = strlen (ebp);
        ebx += eax;
        goto label_1;
label_3:
        ebx++;
        putchar (0x25);
        goto label_1;
label_4:
        eax = esi;
        esi += 4;
        eax = *(eax);
        ebx++;
        putchar (eax);
        goto label_1;
label_2:
        ebx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048ad0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2527;
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
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80485e0 */
#include <stdint.h>
 
int32_t sum3_fastcall (int32_t arg_4h) {
    eax = *((esp + 4));
    edx = ecx + edx*2;
    eax *= 3;
    eax = edx + eax + 2;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048680 */
#include <stdint.h>
 
uint32_t basic_1_multiple_calling_conventions_3_ints (int32_t arg_1ch) {
    ebx = *((esp + 0x1c));
    eax = time (0);
    esi = eax;
    eax = sum3_cdecl (ebx, eax, 0x2a);
    if (eax > 0x7b) {
        goto label_4;
    }
label_3:
    edx = esi;
    ecx = ebx;
    eax = sum3_fastcall (0x2a);
    if (eax > 0x7b) {
        goto label_5;
    }
label_2:
    ecx = ebx;
    eax = sum3_thiscall (esi, 0x2a);
    if (eax > 0x7b) {
        goto label_6;
    }
label_1:
    eax = sum3_ms_abi (ebx, esi, 0x2a);
    if (eax > 0x7b) {
        goto label_7;
    }
label_0:
    eax = sum3_sysv_abi (ebx, esi, 0x2a);
    while (1) {
        eax = sum3_stdcall (ebx, esi, 0x2a);
        if (eax > 0x7b) {
            eax = puts ("stdcall");
        }
        eax = 0;
        return eax;
        puts ("sysv_abi");
    }
label_7:
    puts ("ms_abi");
    goto label_0;
label_6:
    puts ("thiscall");
    goto label_1;
label_5:
    puts ("fastcall");
    goto label_2;
label_4:
    puts ("cdecl");
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048420 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_10h;
    /* [14] -r-x section size 1810 named .text */
    ecx = esp + 4;
    esi = *(ecx);
    edi = *((ecx + 4));
    eax = basic_1_multiple_calling_conventions_3_ints (esi, ecx, ebx, esi, edi, ebp);
    ebx = eax;
    eax = basic_2_calling_varargs (esi);
    ebx += eax;
    eax = basic_3_accessing_all_registers ();
    ebx += eax;
    eax = basic_4_tail_call (esi);
    ebx += eax;
    eax = intermediate_1_accessing_varargs ();
    ebx += eax;
    eax = intermediate_2_use_uncommon_registers_for_parameters (esi);
    ebx += eax;
    eax = intermediate_3_calling_noreturn ();
    ebx += eax;
    eax = intermediate_4_asm_instr_with_multiple_results (1, 1);
    ebx += eax;
    eax = intermediate_5_pushs_in_different_blocks (esi);
    ebx += eax;
    eax = advanced_1_pass_in_flags_reg (esi);
    ebx += eax;
    eax = advanced_2_return_in_flags_reg (esi);
    ebx += eax;
    eax = advanced_3_uneven_stack (esi);
    edx = *(edi);
    eax += ebx;
    edx = *(edx);
    esp = ebp - 0x10;
    eax += edx;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048810 */
#include <stdint.h>
 
void basic_4_tail_call (int32_t arg_4h) {
    *((esp + 4)) = 0;
    return time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048a00 */
#include <stdint.h>
 
void intermediate_3_calling_noreturn (void) {
    puts ("before");
    return exit (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x80483c0 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048970 */
#include <stdint.h>
 
int32_t intermediate_4_asm_instr_with_multiple_results (int32_t arg_8h, int32_t arg_ch) {
    eax = *((esp + 8));
    ecx = *((esp + 0xc));
    __asm ("cpuid");
    ecx *= 3;
    ecx = ecx + ebx*2;
    eax += ecx;
    eax = eax + edx*4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048a30 */
#include <stdint.h>
 
uint32_t intermediate_5_pushs_in_different_blocks (uint32_t arg_10h) {
    if (*((esp + 0x10)) != 0x2a) {
        puts ("it not 42");
    } else {
    }
    eax = puts ("is 42");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048660 */
#include <stdint.h>
 
int32_t sum3_stdcall (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    eax = *((esp + 8));
    ecx = *((esp + 4));
    edx *= 3;
    eax = ecx + eax*2;
    eax = eax + edx + 6;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048620 */
#include <stdint.h>
 
int32_t sum3_ms_abi (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    eax = *((esp + 8));
    ecx = *((esp + 4));
    edx *= 3;
    eax = ecx + eax*2;
    eax = eax + edx + 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048640 */
#include <stdint.h>
 
int32_t sum3_sysv_abi (int32_t arg_4h, int32_t arg_8h, int32_t arg_ch) {
    edx = *((esp + 0xc));
    eax = *((esp + 8));
    ecx = *((esp + 4));
    edx *= 3;
    eax = ecx + eax*2;
    eax = eax + edx + 5;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x804836c */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x2c8b;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/fcalls/ia32_elf/subject.exe @ 0x8048410 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
