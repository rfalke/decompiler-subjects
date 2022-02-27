/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_2h;
    /* [00] -r-x section size 4096 named .text */
    eax = *(section..bss);
    if (eax != 0) {
        __asm ("int3");
    }
    eax = *((ebp - 2));
    eax &= 0xfffff0c0;
    *((ebp - 2)) = ax;
    eax = *((ebp - 2));
    eax |= 0x33f;
    *((ebp - 2)) = ax;
    _cygwin_crt0 (sym._main);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401470 */
#include <stdint.h>
 
uint32_t cygwin_crt0 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_sp_4h;
    *((ebp - 4)) = esi;
    esi = *((ebp + 8));
    *((ebp - 8)) = ebx;
    eax = _cygwin_crt0_common@8 (esi, 0);
    if (eax == 0) {
        goto label_0;
    }
    do {
        dll_crt0_FP11per_process (0);
label_0:
        ebx = esp + 8;
        _cygwin_crt0_common@8 (esi, ebx, 0);
        *(esp) = ebx;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401040 */
#include <stdint.h>
 
void do_sjlj_init (void) {
    return w32_sharedptr_initialize ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401080 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_4h;
    eax = 0;
    *((ebp - 4)) = ebx;
    ebx = *((ebp + 8));
    fcn_00401440 ();
    _main ();
    if (ebx > 7) {
        void (*0x4010e0)() ();
    }
    /* switch table (8 cases) at 0x4010a8 */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401440 */
#include <stdint.h>
 
int32_t fcn_00401440 (void) {
    ecx = esp;
    ecx += 8;
    do {
        if (eax < 0x1000) {
            goto label_0;
        }
        ecx -= 0x1000;
        eax -= 0x1000;
    } while (1);
label_0:
    ecx -= eax;
    eax = esp;
    ecx = *(eax);
    eax = *((eax + 4));
    return void (*eax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4014d0 */
#include <stdint.h>
 
int32_t main (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4010c8 */
#include <stdint.h>
 
uint32_t case_0x4010a0_2 (void) {
    int32_t var_4h;
    eax = _puts (0x401050);
    ebx = *((ebp - 4));
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4014e0 */
#include <stdint.h>
 
void puts (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4010e0 */
#include <stdint.h>
 
void case_0x4010a0_0 (void) {
    *(esp) = 0x401055;
    return void (*0x4010d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4010e9 */
#include <stdint.h>
 
void case_0x4010a0_3 (void) {
    *(esp) = 0x40105c;
    return void (*0x4010d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4010f2 */
#include <stdint.h>
 
void case_0x4010a0_4 (void) {
    *(esp) = 0x401063;
    return void (*0x4010d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4010fb */
#include <stdint.h>
 
void case_0x4010a0_5 (void) {
    *(esp) = 0x401069;
    return void (*0x4010d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401104 */
#include <stdint.h>
 
void case_0x4010a0_6 (void) {
    *(esp) = 0x40106f;
    return void (*0x4010d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x40110d */
#include <stdint.h>
 
void case_0x4010a0_7 (void) {
    *(esp) = 0x401074;
    return void (*0x4010d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401140 */
#include <stdint.h>
 
int32_t w32_sharedptr_default_unexpected (void) {
    eax = *(0x403040);
    uint32_t (*eax + 4)() ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401160 */
#include <stdint.h>
 
int32_t w32_eh_shared_initialize (int32_t arg_8h) {
    int32_t var_4h;
    eax = 0;
    ecx = 0xc;
    *(esp) = ebx;
    ebx = *((ebp + 8));
    *((esp + 4)) = edi;
    edi = ebx;
    memset (edi, eax, ecx);
    *(ebx) = 0x30;
    eax = *(section..data);
    *((ebx + 0x24)) = 0xffffffff;
    *((ebx + 4)) = 0x401520;
    *((ebx + 0x14)) = eax;
    eax = *(0x403010);
    *((ebx + 8)) = 0x401140;
    edx = *(0x402008);
    *((ebx + 0x1c)) = 0;
    *((ebx + 0x20)) = eax;
    eax = *(0x402004);
    *((ebx + 0x2c)) = edx;
    *((ebx + 0x28)) = eax;
    ebx = *(esp);
    edi = *((esp + 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4011d0 */
#include <stdint.h>
 
int32_t w32_sharedptr_initialize (void) {
    int32_t var_8h_2;
    LPCSTR lpString;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_8h;
    *((ebp - 8)) = esi;
    eax = *(0x403040);
    *((ebp - 4)) = edi;
    if (eax != 0) {
label_0:
        esi = *((ebp - 8));
        edi = *((ebp - 4));
        return eax;
    }
    esi = 0x401120;
    *((ebp - 0x48)) = 0x41414141;
    edi = ebp - 0x28;
    ecx = 7;
    *((ebp - 0x44)) = 0x41414141;
    *((ebp - 0x40)) = 0x41414141;
    *((ebp - 0x3c)) = 0x41414141;
    *((ebp - 0x38)) = 0x41414141;
    *((ebp - 0x34)) = 0x41414141;
    *((ebp - 0x30)) = 0x41414141;
    *((ebp - 0x2c)) = 0x41414141;
    eax = *(0x40113c);
    do {
        *(es:edi) = *(esi);
        ecx--;
        esi += 4;
        es:edi += 4;
    } while (ecx != 0);
    *(edi) = ax;
    eax = *(0x40113e);
    *((edi + 2)) = al;
    edi = ebp - 0x48;
    ax = FindAtomA (edi);
    eax = (int32_t) ax;
    if (ax != 0) {
        goto label_1;
    }
    eax = _malloc (0x30);
    esi = eax;
    if (eax == 0) {
        goto label_2;
    }
    _w32_eh_shared_initialize (eax);
    ax = _w32_sharedptr_set (esi);
    if (ax == 0) {
        goto label_3;
    }
    pthread_atfork (0, 0, sym.___w32_sharedptr_fixup_after_fork);
    do {
        *(0x403040) = esi;
        eax = esi + 4;
        *(0x403030) = eax;
        eax = esi + 8;
        *(0x403050) = eax;
        goto label_0;
label_3:
        _free (esi);
        ax = FindAtomA (edi);
        eax = (int32_t) ax;
label_1:
        eax = _w32_sharedptr_get (eax);
        esi = eax;
    } while (1);
label_2:
    abort ();
    return w32_sharedptr_set ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401310 */
#include <stdint.h>
 
int32_t w32_sharedptr_set (void) {
    LPCSTR lpString;
    int32_t var_38h_2;
    int32_t var_ch;
    int32_t var_8h_2;
    eax = 0x1f;
    edx = 1;
    ebx = *((ebp + 8));
    do {
        cl = 0x41;
        if ((edx & ebx) == 0) {
            cl = 0x61;
        }
        *((eax + ebp - 0x58)) = cl;
        edx += edx;
        eax--;
    } while (eax >= 0);
    esi = 0x401120;
    edi = ebp - 0x38;
    eax = *(0x40113c);
    ecx = 7;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    *(edi) = ax;
    eax = *(0x40113e);
    *((edi + 2)) = al;
    eax = ebp - 0x58;
    ax = AddAtomA (eax);
    esi = (int32_t) ax;
    if (si != 0) {
        goto label_2;
    }
label_0:
    edx = 0;
label_1:
    esp = ebp - 0xc;
    eax = edx;
    return eax;
    do {
label_2:
    } while (ecx != 0);
    eax = _w32_sharedptr_get (esi);
    edx = esi;
    if (eax != ebx) {
        goto label_0;
    }
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4013a0 */
#include <stdint.h>
 
uint32_t w32_sharedptr_get (ATOM nAtom) {
    int32_t var_bp_4h;
    int32_t var_48h;
    LPSTR lpBuffer;
    int32_t nSize;
    edx = ebp - 0x48;
    ebx = 0;
    eax = *((ebp + 8));
    eax = GetAtomNameA (ebx, edx, 0x3f);
    if (eax == 0) {
        goto label_1;
    }
    eax = 0x1f;
    edx = 1;
    do {
        if (*((eax + ebp - 0x48)) == 0x41) {
            goto label_2;
        }
label_0:
        edx += edx;
        eax--;
    } while (eax >= 0);
    if (*(ebx) == 0x30) {
        eax = ebx;
        ebx = *((ebp - 4));
        return eax;
label_2:
        ebx |= edx;
        goto label_0;
    }
label_1:
    abort ();
    return w32_sharedptr_fixup_after_fork ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401410 */
#include <stdint.h>
 
int32_t w32_sharedptr_fixup_after_fork (void) {
    eax = *(0x403040);
    ax = _w32_sharedptr_set (eax);
    if (ax != 0) {
        return eax;
    }
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401530 */
#include <stdint.h>
 
int32_t cygwin_crt0_common_8 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = 0;
    ebx = *((ebp + 0xc));
    if (ebx == 0) {
        goto label_2;
    }
label_1:
    *((ebx + 4)) = 0xa8;
    ecx = 0;
    edx = 0x70;
    *((ebx + 8)) = 0x3ed;
    *((ebx + 0xc)) = 9;
    *((ebx + 0x80)) = ecx;
    *((ebx + 0x84)) = edx;
    *((ebx + 0x2c)) = 0x4017a0;
    *((ebx + 0x30)) = 0x4017ac;
    *((ebx + 0x14)) = 0x403020;
    if (eax == 0) {
        goto label_3;
    }
    eax = *((ebx + 0xa4));
    *(0x403024) = eax;
    do {
        *((ebx + 0x78)) = 0;
        eax = *((ebp + 8));
        *((ebx + 0x48)) = 0x401730;
        *((ebx + 0x4c)) = 0x401720;
        *((ebx + 0x28)) = eax;
        eax = *(ebp);
        *((ebx + 0x50)) = 0x401710;
        *((ebx + 0x54)) = 0x401700;
        *((ebx + 0x24)) = 0x403028;
        *(ebx) = eax;
        *((ebx + 0x18)) = 0x401510;
        *((ebx + 0x1c)) = 0x4014f0;
        *((ebx + 0x20)) = 0x4016f0;
        *((ebx + 0x44)) = 0x4016e0;
        eax = GetModuleHandleA (0);
        *((ebx + 0x7c)) = eax;
        *((ebx + 0x34)) = 0x402000;
        *((ebx + 0x38)) = 0x402010;
        *((ebx + 0x3c)) = 0x403000;
        *((ebx + 0x40)) = 0x403080;
        _pei386_runtime_relocator ();
        eax = 1;
label_0:
        ebx = *((ebp - 4));
        return eax;
label_3:
        *((ebx + 0x10)) = 0x403024;
    } while (1);
label_2:
    eax = cygwin_internal (8);
    edx = eax;
    eax = 0;
    if (edx == -1) {
        goto label_0;
    }
    ebx = edx;
    eax = 1;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401670 */
#include <stdint.h>
 
int32_t do_pseudo_reloc (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    ecx = *((ebp + 8));
    esi = *((ebp + 0x10));
    ebx = *((ebp + 0xc));
    if (ecx >= ebx) {
        goto label_0;
    }
    do {
        eax = *((ecx + 4));
        edx = esi;
        edx += eax;
        eax = *(ecx);
        ecx += 8;
        *(edx) += eax;
    } while (ecx < ebx);
label_0:
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4016b0 */
#include <stdint.h>
 
void pei386_runtime_relocator (void) {
    int32_t var_4h;
    int32_t var_8h;
    _do_pseudo_reloc (section..bss, 0x403000, 0x400000);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401700 */
#include <stdint.h>
 
void cygwin_premain3 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401710 */
#include <stdint.h>
 
void cygwin_premain2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401720 */
#include <stdint.h>
 
void cygwin_premain1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401730 */
#include <stdint.h>
 
void cygwin_premain0 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401790 */
#include <stdint.h>
 
void sjlj_init_ctor (void) {
    return do_sjlj_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4014f0 */
#include <stdint.h>
 
void free (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401740 */
#include <stdint.h>
 
void cygwin_internal (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4016e0 */
#include <stdint.h>
 
void calloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x4016f0 */
#include <stdint.h>
 
void realloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401510 */
#include <stdint.h>
 
void malloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401520 */
#include <stdint.h>
 
void abort (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401500 */
#include <stdint.h>
 
void pthread_atfork (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401750 */
#include <stdint.h>
 
void FindAtomA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401760 */
#include <stdint.h>
 
void AddAtomA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401770 */
#include <stdint.h>
 
void GetAtomNameA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe @ 0x401780 */
#include <stdint.h>
 
void GetModuleHandleA (void) {
}
