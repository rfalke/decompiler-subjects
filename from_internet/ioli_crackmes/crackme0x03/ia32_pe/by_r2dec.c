/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401260 */
#include <stdint.h>
 
void entry0 (void) {
    _set_app_type (1);
    _mingw_CRTStartup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t gnu_exception_handler_4 (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    void * func;
    /* [00] -r-x section size 8192 named .text */
    *((ebp - 8)) = ebx;
    eax = *((ebp + 8));
    ebx = 0;
    *((ebp - 4)) = esi;
    eax = *(eax);
    esi = 0;
    eax = *(eax);
    if (eax > 0xc0000091) {
        goto label_4;
    }
    if (eax < 0xc000008d) {
        goto label_5;
    }
label_0:
    esi = 1;
    do {
        *(esp) = 8;
        edx = 0;
        *((esp + 4)) = edx;
        eax = signal (rdi);
        if (eax == 1) {
            goto label_6;
        }
        if (eax != 0) {
            void (*eax)(uint32_t) (8);
label_2:
            ebx = 0xffffffff;
        }
label_1:
        eax = 0xffffffff;
        esi = *((ebp - 4));
        ebx = *((ebp - 8));
        return eax;
label_4:
    } while (eax == 0xc0000094);
    if (eax > 0xc0000094) {
        goto label_7;
    }
    if (eax == 0xc0000093) {
        goto label_0;
    }
    eax = ebx;
    esi = *((ebp - 4));
    ebx = *((ebp - 8));
    return eax;
label_5:
    if (eax == 0xc0000005) {
        goto label_8;
    }
    if (eax != 0xc000001d) {
label_3:
        goto label_1;
    }
    *(esp) = 4;
    esi = 0;
    *((esp + 4)) = esi;
    eax = signal (rdi);
    if (eax == 1) {
        goto label_9;
    }
    if (eax == 0) {
        goto label_1;
    }
    eax = void (*eax)(uint32_t) (4);
    goto label_2;
label_7:
    goto label_3;
label_6:
    *(esp) = 8;
    eax = 1;
    *((esp + 4)) = eax;
    signal (rdi);
    if (esi == 0) {
        goto label_2;
    }
    eax = _fpreset ();
    goto label_2;
label_8:
    *(esp) = 0xb;
    eax = 0;
    *((esp + 4)) = eax;
    eax = signal (rdi);
    if (eax == 1) {
        goto label_10;
    }
    if (eax == 0) {
        goto label_1;
    }
    void (*eax)(uint32_t) (0xb);
    goto label_2;
label_9:
    *(esp) = 4;
    ecx = 1;
    *((esp + 4)) = ecx;
    do {
        signal (rdi);
        goto label_2;
label_10:
        *(esp) = 0xb;
        eax = 1;
        *((esp + 4)) = eax;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401140 */
#include <stdint.h>
 
uint32_t mingw_CRTStartup (void) {
    int32_t var_bp_ch;
    int32_t var_8h;
    char *** argv;
    char *** envp;
    int32_t var_ch;
    int32_t var_10h;
    _SetUnhandledExceptionFilter@4 (ebx);
    _fpreset ();
    *((ebp - 8)) = 0;
    eax = ebp - 8;
    eax = *(section..data);
    eax = ebp - 0xc;
    eax = section..bss;
    getmainargs (eax, eax, eax);
    eax = *(0x405030);
    if (eax == 0) {
        goto label_0;
    }
    *(0x403010) = eax;
    edx = *(sym.imp.msvcrt.dll__iob);
    while (1) {
        if (edx != 0xffffffe0) {
            eax = *(0x405030);
            eax = *(sym.imp.msvcrt.dll__iob);
            eax = *((eax + 0x30));
            _setmode (eax, eax);
            edx = *(sym.imp.msvcrt.dll__iob);
        }
        if (edx != 0xffffffc0) {
            eax = *(0x405030);
            eax = *(sym.imp.msvcrt.dll__iob);
            eax = *((eax + 0x50));
            _setmode (eax, eax);
        }
label_0:
        _p_fmode ();
        edx = *(0x403010);
        *(eax) = edx;
        _pei386_runtime_relocator ();
        eax = _p_environ ();
        eax = *(eax);
        *((esp + 8)) = eax;
        eax = *(section..bss);
        *((esp + 4)) = eax;
        eax = *(0x405004);
        *(esp) = eax;
        eax = _main ();
        ebx = eax;
        _cexit ();
        eax = _ExitProcess@4 (ebx);
        eax = *(sym.imp.msvcrt.dll__iob);
        eax = *((eax + 0x10));
        _setmode (eax, eax);
        edx = *(sym.imp.msvcrt.dll__iob);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401280 */
#include <stdint.h>
 
void WinMainCRTStartup (void) {
    _set_app_type (2);
    _mingw_CRTStartup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4012a0 */
#include <stdint.h>
 
void atexit (void) {
    return void (*sym.imp.msvcrt.dll_atexit)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4012b0 */
#include <stdint.h>
 
void onexit (void) {
    return void (*sym.imp.msvcrt.dll__onexit)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4012c0 */
#include <stdint.h>
 
int32_t do_frame_init (void) {
    int32_t var_4h;
    _w32_sharedptr_initialize ();
    eax = 0x405010;
    _register_frame_info (0x404150, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402ae0 */
#include <stdint.h>
 
int32_t w32_sharedptr_initialize (void) {
    ATOM var_9ch;
    LPCSTR var_98h;
    char * var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    LPCSTR * lpString;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_ch;
    ecx = *(0x4050b0);
    if (ecx != 0) {
        esp = ebp - 0xc;
        return;
    }
    *((ebp - 0x58)) = 0x41414141;
    eax = "-LIBGCCW32-EH-3-GTHR-MINGW32";
    esi = ebp - 0x58;
    *((ebp - 0x54)) = 0x41414141;
    *((ebp - 0x50)) = 0x41414141;
    *((ebp - 0x38)) = eax;
    eax = *(0x404094);
    *((ebp - 0x4c)) = 0x41414141;
    *((ebp - 0x48)) = 0x41414141;
    *((ebp - 0x34)) = eax;
    eax = *(0x404098);
    *((ebp - 0x44)) = 0x41414141;
    *((ebp - 0x40)) = 0x41414141;
    *((ebp - 0x30)) = eax;
    eax = *(0x40409c);
    *((ebp - 0x3c)) = 0x41414141;
    *((ebp - 0x2c)) = eax;
    eax = *(0x4040a0);
    *((ebp - 0x28)) = eax;
    eax = *(0x4040a4);
    *((ebp - 0x24)) = eax;
    eax = *(0x4040a8);
    *((ebp - 0x20)) = eax;
    eax = *(0x4040ac);
    *((ebp - 0x1c)) = al;
    ax = FindAtomA_4 (esi);
    eax = (int32_t) ax;
    *((ebp - 0x9c)) = eax;
    if (eax != 0) {
        goto label_1;
    }
    eax = malloc (0x40);
    ebx = eax;
    if (eax == 0) {
        goto label_2;
    }
    edi = eax;
    eax = *((ebp - 0x9c));
    ecx = 0x10;
    memset (edi, eax, ecx);
    *((ebx + 4)) = 0x402df0;
    ecx = 1;
    *((ebx + 8)) = 0x402a30;
    eax = *(0x405060);
    *(ebx) = 0x40;
    edx = *(0x405064);
    *((ebx + 0x14)) = eax;
    eax = *(0x403030);
    *((ebx + 0x18)) = edx;
    edx = *(0x403034);
    *((ebx + 0x1c)) = eax;
    eax = *(0x405070);
    *((ebx + 0x20)) = edx;
    edx = *(0x405074);
    *((ebx + 0x28)) = eax;
    eax = *(0x405080);
    *((ebx + 0x30)) = 0xffffffff;
    *((ebx + 0x2c)) = edx;
    *((ebx + 0x34)) = eax;
    edx = *(0x40303c);
    eax = *(0x403038);
    *((ebx + 0x3c)) = edx;
    edx = 0x1f;
    *((ebx + 0x38)) = eax;
    do {
        eax = ebx;
        eax &= ecx;
        eax -= eax;
        al &= 0x20;
        ecx += ecx;
        al += 0x41;
        *((ebp + edx - 0x98)) = al;
        edx--;
    } while (edx >= 0);
    eax = "-LIBGCCW32-EH-3-GTHR-MINGW32";
    *((ebp - 0x78)) = eax;
    eax = *(0x404094);
    *((ebp - 0x74)) = eax;
    eax = *(0x404098);
    *((ebp - 0x70)) = eax;
    eax = *(0x40409c);
    *((ebp - 0x6c)) = eax;
    eax = *(0x4040a0);
    *((ebp - 0x68)) = eax;
    eax = *(0x4040a4);
    *((ebp - 0x64)) = eax;
    eax = *(0x4040a8);
    *((ebp - 0x60)) = eax;
    eax = *(0x4040ac);
    *((ebp - 0x5c)) = al;
    eax = ebp - 0x98;
    ax = _AddAtomA@4 (eax);
    edi = (int32_t) ax;
    while (eax != ebx) {
        edx = 0;
label_0:
        if (edx == 0) {
            _free (ebx);
            ax = FindAtomA_4 (esi);
            eax = (int32_t) ax;
label_1:
            eax = w32_sharedptr_get ();
            ebx = eax;
        }
        *(0x4050b0) = ebx;
        eax = ebx + 4;
        *(0x4050a0) = eax;
        eax = ebx + 8;
        *(0x4050c0) = eax;
        esp = ebp - 0xc;
        return eax;
        eax = edi;
        eax = w32_sharedptr_get ();
        edx = edi;
    }
    goto label_0;
label_2:
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402eb0 */
#include <stdint.h>
 
void FindAtomA_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402de0 */
#include <stdint.h>
 
void malloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402ea0 */
#include <stdint.h>
 
void AddAtomA_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402dd0 */
#include <stdint.h>
 
void free (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402a40 */
#include <stdint.h>
 
uint32_t w32_sharedptr_get (void) {
    int32_t var_bp_4h;
    int32_t var_48h;
    int32_t var_4h_2;
    int32_t var_8h_2;
    LPSTR lpBuffer;
    int32_t nSize;
    edx = 0x3d;
    eax = (int32_t) ax;
    edx = ebp - 0x48;
    ebx = 0;
    eax = GetAtomNameA_12 (ebx, edx, edx);
    edx = 0x1f;
    ecx = 1;
    if (eax != 0) {
        goto label_0;
    }
    goto label_1;
    do {
        ecx += ecx;
        edx--;
        if (edx < 0) {
            goto label_2;
        }
label_0:
    } while (*((ebp + edx - 0x48)) != 0x41);
    ebx |= ecx;
    ecx += ecx;
    edx--;
    if (edx >= 0) {
        goto label_0;
    }
label_2:
    if (*(ebx) == 0x40) {
        eax = ebx;
        ebx = *((ebp - 4));
        return eax;
    }
    edx = 0xf7;
    eax = "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c";
    assert ("w32_sharedptr->size == sizeof(W32_EH_SHARED)", eax, edx);
label_1:
    ebx = 0xf1;
    ecx = "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c";
    assert ("GetAtomNameA (atom, s, sizeof(s)) != 0", ecx, ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402df0 */
#include <stdint.h>
 
void abort (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4018d0 */
#include <stdint.h>
 
int32_t register_frame_info (int32_t arg_8h, void * arg_ch) {
    void * var_4h;
    int32_t var_8h;
    int32_t var_ch;
    eax = 0;
    eax = 0;
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    _register_frame_info_bases (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4017e0 */
#include <stdint.h>
 
int32_t register_frame_info_bases (int32_t arg_8h, void * arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_8h;
    int32_t var_4h;
    LPLONG * lpPreviousCount;
    DWORD * dwMilliseconds;
    *((ebp - 8)) = ebx;
    edx = *((ebp + 8));
    ebx = *((ebp + 0xc));
    *((ebp - 4)) = esi;
    if (edx == 0) {
        goto label_0;
    }
    esi = *(edx);
    while (ecx == 0) {
label_0:
        ebx = *((ebp - 8));
        esi = *((ebp - 4));
        return;
        *(ebx) = 0xffffffff;
        eax = *((ebp + 0x10));
        *((ebx + 4)) = eax;
        eax = *((ebp + 0x14));
        *((ebx + 0x10)) = 0;
        *((ebx + 0xc)) = edx;
        *((ebx + 8)) = eax;
        eax = *((ebx + 0x10));
        eax |= 0x7f8;
        *((ebx + 0x10)) = ax;
        _init_object_mutex_once ();
        ecx = *(0x405090);
        edx = *(0x4050b0);
        esi = edx + 0x14;
        if (ecx != 0) {
            goto label_3;
        }
label_1:
        eax = *((edx + 0xc));
        *((ebx + 0x14)) = eax;
        *((edx + 0xc)) = ebx;
        ebx = edx + 0x14;
    }
    eax = _InterlockedDecrement@4 (ebx);
    if (eax < 0) {
        goto label_0;
    }
    edx = 0;
    eax = 1;
    eax = *((ebx + 4));
    ReleaseSemaphore_12 (eax, eax, edx);
    goto label_0;
label_3:
    eax = _InterlockedIncrement@4 (esi);
    while (eax == 0) {
label_2:
        edx = *(0x4050b0);
        ecx = *(0x405090);
        goto label_1;
        ecx = 0xffffffff;
        eax = *((esi + 4));
        eax = WaitForSingleObject_8 (eax, ecx);
    }
    _InterlockedDecrement@4 (esi);
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4012f0 */
#include <stdint.h>
 
void do_frame_fini (void) {
    _deregister_frame_info (0x404150);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401c30 */
#include <stdint.h>
 
void deregister_frame_info (void) {
    return deregister_frame_info_bases ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401310 */
#include <stdint.h>
 
int32_t shift (char * s) {
    uint32_t var_7ch;
    int32_t var_78h;
    char * var_4h;
    *((ebp - 0x7c)) = 0;
    do {
        eax = *((ebp + 8));
        eax = _strlen (eax);
        if (*((ebp - 0x7c)) >= eax) {
            goto label_0;
        }
        eax = ebp - 0x78;
        edx = eax;
        edx += *((ebp - 0x7c));
        eax = *((ebp - 0x7c));
        eax += *((ebp + 8));
        eax = *(eax);
        al -= 3;
        *(edx) = al;
        eax = ebp - 0x7c;
        *(eax)++;
    } while (1);
label_0:
    eax = ebp - 0x78;
    eax += *((ebp - 0x7c));
    *(eax) = 0;
    eax = ebp - 0x78;
    *((esp + 4)) = eax;
    printf (section..rdata);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x40136a */
#include <stdint.h>
 
int32_t test (int32_t arg_8h, uint32_t arg_ch) {
    eax = *((ebp + 8));
    if (eax != *((ebp + 0xc))) {
        _shift ("Lqydolg#Sdvvzrug$");
    } else {
        _shift ("Sdvvzrug#RN$$$#=,");
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401394 */
#include <stdint.h>
 
int32_t main (void) {
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    fcn_00402d00 ();
    _main ();
    printf ("IOLI Crackme Level 0x03\n");
    printf ("Password: ");
    eax = ebp - 4;
    _scanf (0x40404c, eax);
    *((ebp - 8)) = 0x5a;
    *((ebp - 0xc)) = 0x1ec;
    edx = *((ebp - 0xc));
    eax = ebp - 8;
    *(eax) += edx;
    eax = *((ebp - 8));
    eax *= *((ebp - 8));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax = *((ebp - 4));
    _test (eax, eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402d00 */
#include <stdint.h>
 
int32_t fcn_00402d00 (void) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401500 */
#include <stdint.h>
 
int32_t main (void) {
    eax = *(0x405040);
    if (eax != 0) {
        return eax;
    }
    eax = 1;
    *(0x405040) = eax;
    return do_global_ctors ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402db0 */
#include <stdint.h>
 
void printf (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402da0 */
#include <stdint.h>
 
void scanf (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401430 */
#include <stdint.h>
 
int32_t pei386_runtime_relocator (void) {
    ecx = 0x404300;
    while (ecx < 0x404300) {
        edx = *((ecx + 4));
        eax = *(ecx);
        ecx += 8;
        *((edx + 0x400000)) += eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401460 */
#include <stdint.h>
 
void fpreset (void) {
    __asm ("fninit");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401470 */
#include <stdint.h>
 
int32_t do_global_dtors (void) {
    eax = *(0x403020);
    if (*(eax) == 0) {
        goto label_0;
    }
    do {
        uint32_t (*eax)() ();
        edx = *(0x403020);
        eax = edx + 4;
        edx = *((edx + 4));
        *(0x403020) = eax;
    } while (edx != 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4014a0 */
#include <stdint.h>
 
int32_t do_global_ctors (void) {
    eax = *(0x402ee0);
    if (eax == -1) {
        goto label_1;
    }
label_0:
    ebx = eax;
    if (eax == 0) {
        goto label_2;
    }
    do {
        uint32_t (*ebx*4 + 0x402ee0)() ();
        ebx--;
    } while (ebx != 0);
label_2:
    eax = _atexit (sym.___do_global_dtors);
    return eax;
label_1:
    eax = 0;
    while (ebx != 0) {
        eax++;
        ebx = *((eax*4 + 0x402ee4));
    }
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401520 */
#include <stdint.h>
 
int32_t size_of_encoded_value (void) {
    edx = 0;
    if (al == 0xff) {
        goto label_0;
    }
    eax &= 7;
    edx = 2;
    if (eax == 2) {
        goto label_0;
    }
    if (eax <= 2) {
        goto label_1;
    }
    edx = 4;
    if (eax == 3) {
        goto label_0;
    }
    if (eax == 4) {
        goto label_2;
    }
    do {
        eax = abort ();
label_1:
    } while (eax != 0);
    edx = 4;
label_0:
    eax = edx;
    return eax;
label_2:
    edx = 8;
    eax = 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401570 */
#include <stdint.h>
 
int32_t read_uleb128 (void) {
    int32_t var_10h;
    edi = edx;
    esi = 0;
    ebx = 0;
    *((ebp - 0x10)) = eax;
    do {
        eax = *((ebp - 0x10));
        cl = bl;
        ebx += 7;
        edx = *(eax);
        eax++;
        *((ebp - 0x10)) = eax;
        eax = edx;
        eax &= 0x7f;
        eax <<= cl;
        esi |= eax;
    } while (dl < 0);
    *(edi) = esi;
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4015c0 */
#include <stdint.h>
 
int32_t read_sleb128 (void) {
    int32_t var_14h;
    int32_t var_10h;
    edi = 0;
    esi = 0;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = edx;
    do {
        eax = *((ebp - 0x14));
        ecx = esi;
        esi += 7;
        edx = *(eax);
        eax++;
        *((ebp - 0x14)) = eax;
        ebx = (int32_t) dl;
        eax = ebx;
        eax &= 0x7f;
        eax <<= cl;
        edi |= eax;
    } while (dl < 0);
    if (esi <= 0x1f) {
        if ((bl & 0x40) == 0) {
            goto label_0;
        }
        eax = 0xffffffff;
        ecx = esi;
        eax <<= cl;
        edi |= eax;
    }
label_0:
    eax = *((ebp - 0x10));
    *(eax) = edi;
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401630 */
#include <stdint.h>
 
int32_t read_encoded_value_with_base (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 0xc)) = ebx;
    ecx = *((ebp + 8));
    *((ebp - 8)) = esi;
    bl = al;
    esi = edx;
    *((ebp - 4)) = edi;
    edi = ecx;
    if (al == 0x50) {
        goto label_3;
    }
    eax = ebx;
    eax &= 0xf;
    if (eax > 0xc) {
        goto label_4;
    }
    /* switch table (13 cases) at 0x404050 */
    edx = *(ecx);
    ecx += 4;
    do {
label_0:
        if (edx != 0) {
            eax = ebx;
            eax &= 0x70;
            if (eax == 0x10) {
                goto label_5;
            }
            edx += esi;
label_1:
            if (bl < 0) {
                goto label_6;
            }
        }
label_2:
        eax = *((ebp + 0xc));
        *(eax) = edx;
        ebx = *((ebp - 0xc));
        eax = ecx;
        esi = *((ebp - 8));
        edi = *((ebp - 4));
        return eax;
label_3:
        eax = ecx + 3;
        eax &= 0xfffffffc;
        edx = *(eax);
        ecx = eax + 4;
        eax = *((ebp + 0xc));
        *(eax) = edx;
        ebx = *((ebp - 0xc));
        eax = ecx;
        esi = *((ebp - 8));
        edi = *((ebp - 4));
        return eax;
        edx = *(ecx);
        ecx += 8;
    } while (1);
label_4:
    abort ();
    edx = *(ecx);
    ecx += 2;
    goto label_0;
    edx = ebp - 0x10;
    eax = ecx;
    eax = _read_uleb128 ();
    edx = *((ebp - 0x10));
    ecx = eax;
    goto label_0;
    edx = *(ecx);
    ecx += 2;
    goto label_0;
    edx = ebp - 0x14;
    eax = ecx;
    eax = _read_sleb128 ();
    edx = *((ebp - 0x14));
    ecx = eax;
    goto label_0;
label_5:
    edx += edi;
    goto label_1;
label_6:
    edx = *(edx);
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401700 */
#include <stdint.h>
 
int32_t init_object_mutex (void) {
    int32_t var_bp_4h;
    LONG lInitialCount;
    LONG lMaximumCount;
    LPCSTR lpName;
    ecx = 0;
    eax = *(0x4050b0);
    *((eax + 0x14)) = 0xffffffff;
    ebx = eax + 0x14;
    eax = 0;
    eax = 0xffff;
    eax = _CreateSemaphoreA@16 (ebx, ecx, eax);
    *((ebx + 4)) = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e60 */
#include <stdint.h>
 
void CreateSemaphoreA_16 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401750 */
#include <stdint.h>
 
int32_t init_object_mutex_once (void) {
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 8)) = ebx;
    eax = *(0x405090);
    ebx = *(0x4050b0);
    *((ebp - 4)) = esi;
    esi = ebx + 0x1c;
    if (eax == 0) {
        goto label_0;
    }
    if (esi == 0) {
        goto label_0;
    }
    eax = *((ebx + 0x1c));
    if (eax == 0) {
        goto label_1;
    }
    do {
label_0:
        ebx = *((ebp - 8));
        esi = *((ebp - 4));
        return eax;
label_1:
        eax = ebx + 0x20;
        eax = _InterlockedIncrement@4 (eax);
        if (eax == 0) {
            goto label_2;
        }
    } while (*((ebx + 0x1c)) != 0);
    do {
        Sleep_4 (0);
        eax = *(esi);
    } while (eax == 0);
    goto label_0;
label_2:
    _init_object_mutex ();
    *((ebx + 0x1c)) = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e80 */
#include <stdint.h>
 
void InterlockedIncrement_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e70 */
#include <stdint.h>
 
void Sleep_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401900 */
#include <stdint.h>
 
int32_t register_frame (int32_t arg_8h) {
    void * var_4h;
    ebx = *((ebp + 8));
    eax = *(ebx);
    if (eax == 0) {
        return eax;
    }
    eax = malloc (0x18);
    _register_frame_info (ebx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401940 */
#include <stdint.h>
 
int32_t register_frame_info_table_bases (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_8h;
    LONG * lReleaseCount;
    LPLONG * lpPreviousCount;
    DWORD * dwMilliseconds;
    ebx = *((ebp + 0xc));
    eax = *((ebp + 0x10));
    *(ebx) = 0xffffffff;
    *((ebx + 4)) = eax;
    eax = *((ebp + 0x14));
    *((ebx + 8)) = eax;
    eax = *((ebp + 8));
    *((ebx + 0x10)) = 0;
    *((ebx + 0x10)) |= 2;
    *((ebx + 0xc)) = eax;
    eax = *((ebx + 0x10));
    eax |= 0x7f8;
    *((ebx + 0x10)) = ax;
    _init_object_mutex_once (ebx, esi);
    ecx = *(0x405090);
    edx = *(0x4050b0);
    esi = edx + 0x14;
    if (ecx != 0) {
        goto label_2;
    }
    eax = *((edx + 0xc));
    *((ebx + 0x14)) = eax;
    *((edx + 0xc)) = ebx;
    ebx = edx + 0x14;
    if (ecx != 0) {
        goto label_3;
    }
    do {
label_0:
        esp = ebp - 8;
        return eax;
label_2:
        eax = _InterlockedIncrement@4 (esi);
        if (eax != 0) {
            goto label_4;
        }
label_1:
        edx = *(0x4050b0);
        ecx = *(0x405090);
        eax = *((edx + 0xc));
        *((ebx + 0x14)) = eax;
        *((edx + 0xc)) = ebx;
        ebx = edx + 0x14;
    } while (ecx == 0);
label_3:
    eax = _InterlockedDecrement@4 (ebx);
    if (eax < 0) {
        goto label_0;
    }
    eax = 0;
    eax = 1;
    eax = *((ebx + 4));
    ReleaseSemaphore_12 (eax, eax, eax);
    esp = ebp - 8;
    return eax;
label_4:
    eax = 0xffffffff;
    eax = *((esi + 4));
    eax = WaitForSingleObject_8 (eax, eax);
    if (eax == 0) {
        goto label_1;
    }
    _InterlockedDecrement@4 (esi);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401a40 */
#include <stdint.h>
 
int32_t register_frame_info_table (int32_t arg_8h, void * arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    ecx = 0;
    edx = 0;
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    _register_frame_info_table_bases (ecx, eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401a70 */
#include <stdint.h>
 
uint32_t register_frame_table (int32_t arg_8h) {
    void * var_4h;
    eax = malloc (0x18);
    eax = *((ebp + 8));
    _register_frame_info_table (eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401aa0 */
#include <stdint.h>
 
int32_t deregister_frame_info_bases (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_4h_3;
    LONG * var_4h_2;
    LONG * lReleaseCount;
    LPLONG * lpPreviousCount;
    DWORD * dwMilliseconds;
    ebx = *((ebp + 8));
    if (ebx != 0) {
        eax = *(ebx);
        if (eax != 0) {
            goto label_6;
        }
    }
    esp = ebp - 0xc;
    eax = 0;
    return eax;
label_6:
    _init_object_mutex_once ();
    eax = *(0x405090);
    esi = *(0x4050b0);
    edi = esi + 0x14;
    if (eax != 0) {
        goto label_7;
    }
label_1:
    ecx = esi + 0xc;
    if (*((esi + 0xc)) == 0) {
        goto label_8;
    }
    do {
        eax = *(ecx);
        if (*((eax + 0xc)) == ebx) {
            goto label_9;
        }
        edx = *((eax + 0x14));
        ecx = eax + 0x14;
    } while (edx != 0);
label_8:
    ecx = esi + 0x10;
    while ((*((edx + 0x10)) & 1) != 0) {
        eax = *((edx + 0xc));
        if (*(eax) == ebx) {
            goto label_10;
        }
label_0:
        eax = *((edx + 0x14));
        ecx = edx + 0x14;
        if (eax == 0) {
            goto label_11;
        }
        edx = *(ecx);
    }
    if (*((edx + 0xc)) != ebx) {
        goto label_0;
    }
    ebx = edx;
label_4:
    edx = *((ebx + 0x14));
    *(ecx) = edx;
label_3:
    eax = *(0x405090);
    esi += 0x14;
    while (eax < 0) {
        eax = ebx;
label_2:
        esp = ebp - 0xc;
        return eax;
label_7:
        eax = _InterlockedIncrement@4 (edi);
        if (eax != 0) {
            goto label_12;
        }
label_5:
        esi = *(0x4050b0);
        goto label_1;
        eax = _InterlockedDecrement@4 (esi);
    }
    eax = 0;
    edi = 1;
    eax = *((esi + 4));
    ReleaseSemaphore_12 (eax, edi, eax);
    eax = ebx;
    goto label_2;
label_10:
    ebx = edx;
    edx = *((edx + 0x14));
    *(ecx) = edx;
    eax = *((ebx + 0xc));
    eax = _free (eax);
    esi = *(0x4050b0);
    goto label_3;
label_9:
    ebx = eax;
    goto label_4;
label_11:
    eax = *(0x405090);
    ebx = esi + 0x14;
    while (eax < 0) {
        abort ();
        eax = _InterlockedDecrement@4 (ebx);
    }
    eax = 0;
    eax = 1;
    eax = *((ebx + 4));
    ReleaseSemaphore_12 (eax, eax, eax);
    abort ();
label_12:
    ecx = 0xffffffff;
    eax = *((edi + 4));
    eax = WaitForSingleObject_8 (eax, ecx);
    if (eax == 0) {
        goto label_5;
    }
    _InterlockedDecrement@4 (edi);
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401c40 */
#include <stdint.h>
 
int32_t deregister_frame (int32_t arg_8h) {
    eax = *((ebp + 8));
    edx = *(eax);
    if (edx == 0) {
        return eax;
    }
    eax = _deregister_frame_info (eax);
    *((ebp + 8)) = eax;
    return free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401c70 */
#include <stdint.h>
 
int32_t base_from_object (void) {
    ecx = 0;
    if (al != 0xff) {
        eax &= 0x70;
        if (eax == 0x20) {
            goto label_0;
        }
        if (eax <= 0x20) {
            if (eax == 0) {
                goto label_1;
            }
        } else {
            if (eax == 0x30) {
                goto label_2;
            }
        }
        if (eax == 0x50) {
            goto label_1;
        }
        abort ();
label_2:
        ecx = *((edx + 8));
    }
    eax = ecx;
    return eax;
label_0:
    ecx = *((edx + 4));
    eax = ecx;
    return eax;
label_1:
    ecx = 0;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401cd0 */
#include <stdint.h>
 
int32_t get_cie_encoding (void) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    esi = eax;
    ebx = eax + 9;
    eax = 0;
    if (*((esi + 9)) != 0x7a) {
label_1:
        return eax;
    }
    _strlen (ebx);
    ecx = eax + ebx + 1;
    eax = ecx;
    edx = ebp - 0xc;
    _read_uleb128 ();
    edx = ebp - 0x10;
    ebx = esi + 0xa;
    eax = _read_sleb128 ();
    ecx = eax;
    edx = ebp - 0xc;
    ecx++;
    eax = ecx;
    eax = _read_uleb128 ();
    ecx = eax;
    do {
label_0:
        eax = *(ebx);
        if (al == 0x52) {
            goto label_2;
        }
        if (al == 0x50) {
            goto label_3;
        }
        if (al != 0x4c) {
            goto label_4;
        }
        ecx++;
        ebx++;
    } while (1);
label_3:
    eax = *(ecx);
    edx = ebp - 0x14;
    ebx++;
    edx = ecx + 1;
    eax &= 0x7f;
    edx = 0;
    eax = _read_encoded_value_with_base (edx, edx);
    ecx = eax;
    goto label_0;
label_2:
    eax = *(ecx);
    goto label_1;
label_4:
    eax = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401d60 */
#include <stdint.h>
 
int32_t fde_unencoded_compare (int32_t arg_ch, int32_t arg_10h) {
    ecx = 1;
    eax = *((ebp + 0x10));
    edx = *((eax + 8));
    eax = *((ebp + 0xc));
    if (*((eax + 8)) <= edx) {
        ecx -= ecx;
    }
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401d80 */
#include <stdint.h>
 
uint32_t fde_single_encoding_compare (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_4h;
    ebx = *((ebp + 8));
    eax = *((ebx + 0x10));
    edx = ebx;
    eax >>= 3;
    eax = (int32_t) al;
    eax = _base_from_object (ebx, esi);
    esi = eax;
    edx = ebp - 0xc;
    eax = *((ebx + 0x10));
    edx = *((ebp + 0xc));
    eax >>= 3;
    edx += 8;
    eax = (int32_t) al;
    edx = esi;
    _read_encoded_value_with_base (edx, edx);
    eax = *((ebx + 0x10));
    edx = ebp - 0x10;
    edx = *((ebp + 0x10));
    eax >>= 3;
    edx += 8;
    eax = (int32_t) al;
    edx = esi;
    _read_encoded_value_with_base (edx, edx);
    eax = *((ebp - 0x10));
    edx = 1;
    if (*((ebp - 0xc)) <= eax) {
        edx -= edx;
    }
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401e00 */
#include <stdint.h>
 
int32_t fde_mixed_encoding_compare (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_14h;
    uint32_t var_10h;
    int32_t var_4h;
    esi = *((ebp + 0xc));
    edi = *((ebp + 8));
    ebx = *((esi + 4));
    eax = esi;
    esi += 8;
    eax -= ebx;
    eax += 4;
    al = _get_cie_encoding (ebx, esi, edi);
    ebx = (int32_t) al;
    edx = edi;
    eax = ebx;
    eax = _base_from_object ();
    edx = ebp - 0x10;
    edx = eax;
    eax = ebx;
    _read_encoded_value_with_base (esi, edx);
    eax = *((ebp + 0x10));
    ecx = *((eax + 4));
    eax -= ecx;
    eax += 4;
    al = _get_cie_encoding ();
    ebx = (int32_t) al;
    edx = edi;
    eax = ebx;
    eax = _base_from_object ();
    edx = ebp - 0x14;
    edx = *((ebp + 0x10));
    edx += 8;
    edx = eax;
    eax = ebx;
    _read_encoded_value_with_base (edx, edx);
    eax = *((ebp - 0x14));
    edx = 1;
    if (*((ebp - 0x10)) <= eax) {
        edx -= edx;
    }
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401e90 */
#include <stdint.h>
 
uint32_t frame_downheap (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    int32_t var_8h;
    edi = *((ebp + 0xc));
    *((ebp - 0x10)) = eax;
    esi = *((ebp + 8));
    *((ebp - 0x14)) = edx;
    ebx = edi + edi + 1;
    if (ebx >= *((ebp + 0x10))) {
        goto label_1;
    }
    do {
        eax = ebx + 1;
        *((ebp - 0x18)) = eax;
        eax = *((ebp + 0x10));
        if (*((ebp - 0x18)) < eax) {
            goto label_2;
        }
label_0:
        eax = *((esi + ebx*4));
        eax = *((esi + edi*4));
        eax = *((ebp - 0x10));
        eax = uint32_t (*ebp - 0x14)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        if (eax >= 0) {
            goto label_1;
        }
        edx = *((esi + edi*4));
        eax = *((esi + ebx*4));
        *((esi + edi*4)) = eax;
        edi = ebx;
        *((esi + ebx*4)) = edx;
        ebx = ebx + ebx + 1;
    } while (ebx < *((ebp + 0x10)));
label_1:
    return eax;
label_2:
    eax = *((esi + ebx*4 + 4));
    eax = *((esi + ebx*4));
    eax = *((ebp - 0x10));
    eax = uint32_t (*ebp - 0x14)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
    if (eax >= 0) {
        goto label_0;
    }
    ebx = *((ebp - 0x18));
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401f20 */
#include <stdint.h>
 
int32_t frame_heapsort (void * arg_8h) {
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    int32_t var_8h;
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x14)) = edx;
    edi = *((eax + 4));
    esi = eax + 8;
    eax = edi;
    eax >>= 1;
    ebx = eax;
    while (ebx >= 0) {
        edx = *((ebp - 0x14));
        eax = *((ebp - 0x10));
        _frame_downheap (esi, ebx, edi);
        ebx--;
    }
    ebx = edi - 1;
    while (ebx > 0) {
        eax = *((esi + ebx*4));
        edi = 0;
        edx = *(esi);
        *(esi) = eax;
        eax = *((ebp - 0x10));
        *((esi + ebx*4)) = edx;
        edx = *((ebp - 0x14));
        ebx--;
        _frame_downheap (esi, edi, ebx);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x401f90 */
#include <stdint.h>
 
int32_t classify_object_over_fdes (void) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    edi = eax;
    esi = edx;
    *((ebp - 0x14)) = 0;
    *((ebp - 0x18)) = 0;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x20)) = 0;
    while (eax == 0) {
label_0:
        eax = *(esi);
        eax += esi;
        esi = eax + 4;
        eax = *((eax + 4));
        if (eax == 0) {
            goto label_3;
        }
        eax = *((esi + 4));
    }
    edx = esi;
    edx -= eax;
    eax = edx;
    eax += 4;
    if (eax != *((ebp - 0x14))) {
        *((ebp - 0x14)) = eax;
        eax = _get_cie_encoding ();
        *((ebp - 0x1c)) = eax;
        edx = edi;
        eax = *((ebp - 0x1c));
        eax = _base_from_object ();
        ecx = *((edi + 0x10));
        *((ebp - 0x20)) = eax;
        eax = ecx;
        eax >>= 3;
        eax &= 0xff;
        if (eax == 0xff) {
            goto label_4;
        }
        if (eax == *((ebp - 0x1c))) {
            goto label_2;
        }
        *((edi + 0x10)) |= 4;
    }
label_2:
    ebx = *((ebp - 0x1c));
    eax = ebp - 0x10;
    edx = *((ebp - 0x20));
    eax = esi + 8;
    eax = ebx;
    _read_encoded_value_with_base (eax, eax);
    eax = ebx;
    eax = _size_of_encoded_value ();
    if (eax > 3) {
        goto label_5;
    }
    ecx = eax*8;
    eax = 1;
    eax <<= cl;
    eax--;
label_1:
    edx = *((ebp - 0x10));
    if ((eax & edx) == 0) {
        goto label_0;
    }
    *((ebp - 0x18))++;
    if (*(edi) <= edx) {
        goto label_0;
    }
    *(edi) = edx;
    goto label_0;
label_5:
    eax = 0xffffffff;
    goto label_1;
label_3:
    eax = *((ebp - 0x18));
    return eax;
label_4:
    edx = *((ebp - 0x1c));
    eax = ecx;
    eax &= 0xfffff807;
    edx <<= 3;
    eax |= edx;
    *((edi + 0x10)) = ax;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4020b0 */
#include <stdint.h>
 
uint32_t add_fdes (int32_t arg_8h) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    esi = *((ebp + 8));
    *((ebp - 0x14)) = eax;
    eax = *((eax + 0x10));
    *((ebp - 0x18)) = edx;
    *((ebp - 0x1c)) = 0;
    eax >>= 3;
    edi = (int32_t) al;
    edx = edi;
    eax = (int32_t) dl;
    edx = *((ebp - 0x14));
    eax = _base_from_object (ebx, esi, edi);
    *((ebp - 0x20)) = eax;
    while (eax == 0) {
label_0:
        eax = *(esi);
        eax += esi;
        esi = eax + 4;
        eax = *((eax + 4));
        if (eax == 0) {
            goto label_2;
        }
        eax = *((esi + 4));
    }
    edx = *((ebp - 0x14));
    if ((*((edx + 0x10)) & 4) != 0) {
        edx = esi;
        edx -= eax;
        eax = edx;
        eax += 4;
        if (eax == *((ebp - 0x1c))) {
            goto label_3;
        }
        *((ebp - 0x1c)) = eax;
        eax = _get_cie_encoding ();
        edx = *((ebp - 0x14));
        edi = eax;
        eax = (int32_t) al;
        eax = _base_from_object ();
        *((ebp - 0x20)) = eax;
    }
label_3:
    if (edi != 0) {
        goto label_4;
    }
    eax = *((esi + 8));
    if (eax == 0) {
label_1:
        goto label_0;
    }
    eax = *((ebp - 0x18));
    edx = *(eax);
    if (edx == 0) {
        goto label_0;
    }
    eax = *((edx + 4));
    *((edx + eax*4 + 8)) = esi;
    eax++;
    *((edx + 4)) = eax;
    goto label_0;
label_2:
    return eax;
label_4:
    eax = edi;
    edx = *((ebp - 0x20));
    ebx = (int32_t) al;
    eax = ebp - 0x10;
    eax = esi + 8;
    eax = ebx;
    _read_encoded_value_with_base (eax, eax);
    eax = ebx;
    eax = _size_of_encoded_value ();
    if (eax <= 3) {
        ecx = eax*8;
        eax = 1;
        eax <<= cl;
        eax--;
        goto label_1;
    }
    eax = 0xffffffff;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4021b0 */
#include <stdint.h>
 
uint32_t linear_search_fdes (uint32_t arg_8h) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    esi = edx;
    *((ebp - 0x18)) = eax;
    eax = *((eax + 0x10));
    *((ebp - 0x1c)) = 0;
    eax >>= 3;
    edi = (int32_t) al;
    edx = edi;
    eax = (int32_t) dl;
    edx = *((ebp - 0x18));
    eax = _base_from_object (ebx, esi, edi);
    *((ebp - 0x20)) = eax;
    while (eax == 0) {
label_0:
        eax = *(esi);
        eax += esi;
        esi = eax + 4;
        eax = *((eax + 4));
        if (eax == 0) {
            goto label_3;
        }
        eax = *((esi + 4));
    }
    edx = *((ebp - 0x18));
    if ((*((edx + 0x10)) & 4) != 0) {
        edx = esi;
        edx -= eax;
        eax = edx;
        eax += 4;
        if (eax == *((ebp - 0x1c))) {
            goto label_4;
        }
        *((ebp - 0x1c)) = eax;
        eax = _get_cie_encoding ();
        edx = *((ebp - 0x18));
        edi = eax;
        eax = (int32_t) al;
        eax = _base_from_object ();
        *((ebp - 0x20)) = eax;
    }
label_4:
    if (edi != 0) {
        goto label_5;
    }
    edx = *((esi + 8));
    *((ebp - 0x10)) = edx;
    ecx = *((esi + 0xc));
    *((ebp - 0x14)) = ecx;
    if (edx == 0) {
        goto label_0;
    }
label_1:
    eax = *((ebp + 8));
    eax -= edx;
    if (eax >= ecx) {
        goto label_0;
    }
    eax = esi;
    goto label_6;
label_5:
    eax = edi;
    edx = *((ebp - 0x20));
    ebx = (int32_t) al;
    eax = ebp - 0x10;
    eax = esi + 8;
    eax = ebx;
    eax = _read_encoded_value_with_base (eax, eax);
    ecx = ebx;
    edx = ebp - 0x14;
    ecx &= 0xf;
    edx = 0;
    eax = ecx;
    _read_encoded_value_with_base (eax, edx);
    eax = ebx;
    eax = _size_of_encoded_value ();
    if (eax > 3) {
        goto label_7;
    }
    ecx = eax*8;
    eax = 1;
    eax <<= cl;
    eax--;
label_2:
    edx = *((ebp - 0x10));
    if ((eax & edx) == 0) {
        goto label_0;
    }
    ecx = *((ebp - 0x14));
    goto label_1;
label_3:
    eax = 0;
label_6:
    return eax;
label_7:
    eax = 0xffffffff;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x4022d0 */
#include <stdint.h>
 
int32_t search_object (void) {
    void * ptr;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    uint32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    int32_t var_48h;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    void * var_18h;
    void * var_14h;
    int32_t var_4h;
    int32_t var_8h;
    *((ebp - 0x30)) = edx;
    edx = *((eax + 0x10));
    *((ebp - 0x2c)) = eax;
    if ((dl & 1) == 0) {
        ecx = eax;
        eax = *((eax + 0x10));
        eax >>= 0xb;
        *((ebp - 0x34)) = eax;
        if (eax == 0) {
            goto label_17;
        }
label_10:
        ecx = *((ebp - 0x34));
        if (ecx != 0) {
            goto label_18;
        }
label_2:
        esi = *((ebp - 0x2c));
        eax = 0;
        edx = *((ebp - 0x30));
        if (*(esi) > edx) {
            goto label_15;
        }
        edx = *((esi + 0x10));
    }
    if ((dl & 1) == 0) {
        goto label_19;
    }
    if ((dl & 4) == 0) {
        goto label_20;
    }
    ecx = *((ebp - 0x2c));
    ecx = *((ecx + 0xc));
    *((ebp - 0x50)) = 0;
    esi = *((ecx + 4));
    *((ebp - 0x4c)) = ecx;
    *((ebp - 0x54)) = esi;
    if (*((ebp - 0x50)) >= esi) {
        goto label_1;
    }
    do {
        edi = *((ebp - 0x54));
        esi = *((ebp - 0x50));
        eax = *((ebp - 0x4c));
        esi += edi;
        esi >>= 1;
        edi = *((eax + esi*4 + 8));
        ebx = *((edi + 4));
        eax = edi;
        eax -= ebx;
        eax += 4;
        al = _get_cie_encoding ();
        edx = *((ebp - 0x2c));
        ebx = (int32_t) al;
        eax = ebx;
        eax = _base_from_object ();
        edx = ebp - 0x1c;
        edx = edi + 8;
        edx = eax;
        eax = ebx;
        eax = _read_encoded_value_with_base (edx, edx);
        ebx &= 0xf;
        ecx = ebp - 0x20;
        edx = 0;
        eax = ebx;
        _read_encoded_value_with_base (eax, ecx);
        eax = *((ebp - 0x1c));
        if (*((ebp - 0x30)) >= eax) {
            goto label_21;
        }
        *((ebp - 0x54)) = esi;
        esi = *((ebp - 0x54));
label_5:
    } while (*((ebp - 0x50)) < esi);
label_1:
    eax = 0;
    do {
label_15:
        return eax;
label_19:
        if ((dl & 2) == 0) {
            goto label_22;
        }
        ecx = *((ebp - 0x2c));
        ebx = *((ecx + 0xc));
        goto label_23;
label_0:
        esi = *((ebp - 0x30));
        edx = *(ebx);
        eax = *((ebp - 0x2c));
        eax = _linear_search_fdes (esi);
    } while (eax != 0);
    ebx += 4;
label_23:
    eax = *(ebx);
    if (eax != 0) {
        goto label_0;
    }
    goto label_1;
label_17:
    if ((dl & 2) == 0) {
        goto label_24;
    }
    ebx = *((ecx + 0xc));
    esi = *(ebx);
    if (esi == 0) {
        goto label_7;
    }
    do {
        edx = *(ebx);
        ebx += 4;
        eax = *((ebp - 0x2c));
        eax = _classify_object_over_fdes ();
        *((ebp - 0x34)) += eax;
        esi = *(ebx);
    } while (esi != 0);
label_7:
    ecx = *((ebp - 0x2c));
    eax = *((ebp - 0x34));
    edx = *((ecx + 0x10));
    eax <<= 0xb;
    edx &= 0x7ff;
    edx |= eax;
    eax = edx;
    eax >>= 0xb;
    if (eax == *((ebp - 0x34))) {
        goto label_25;
    }
    edx &= 0x7ff;
    *((ecx + 0x10)) = edx;
    ecx = *((ebp - 0x34));
    if (ecx == 0) {
        goto label_2;
    }
label_18:
    eax = *((ebp - 0x34));
    ebx = eax*4 + 8;
    eax = malloc (ebx);
    *((ebp - 0x18)) = eax;
    if (eax == 0) {
        goto label_2;
    }
    *((eax + 4)) = 0;
    eax = malloc (ebx);
    *((ebp - 0x14)) = eax;
    if (eax != 0) {
        *((eax + 4)) = 0;
    }
    edx = *((ebp - 0x2c));
    if ((*((edx + 0x10)) & 2) == 0) {
        goto label_26;
    }
    ebx = *((edx + 0xc));
    eax = *(ebx);
    if (eax == 0) {
        goto label_16;
    }
    do {
        edx = ebp - 0x18;
        ebx += 4;
        eax = *((ebp - 0x2c));
        _add_fdes (eax);
        eax = *(ebx);
    } while (eax != 0);
label_16:
    eax = *((ebp - 0x18));
    if (eax != 0) {
        goto label_27;
    }
label_11:
    *((ebp - 0x38)) = sym._fde_mixed_encoding_compare;
    eax = *((ebp - 0x2c));
    if ((*((eax + 0x10)) & 4) == 0) {
        eax = *((eax + 0x10));
        *((ebp - 0x38)) = 0x401d60;
        eax >>= 3;
        if (al == 0) {
            goto label_28;
        }
        *((ebp - 0x38)) = sym._fde_single_encoding_compare;
    }
label_28:
    edx = *((ebp - 0x14));
    *((ebp - 0x74)) = edx;
    *((ebp - 0x3c)) = edx;
    if (edx == 0) {
        goto label_29;
    }
    ecx = *((ebp - 0x18));
    ebx = 0;
    eax = *(0x4050b0);
    *((ebp - 0x70)) = ecx;
    edx = *((ecx + 4));
    edi = ecx;
    *((ebp - 0x40)) = ecx;
    esi = eax + 0x24;
    *((ebp - 0x44)) = edx;
    if (ebx < edx) {
        goto label_30;
    }
    goto label_31;
    do {
label_3:
        eax = *((ebp - 0x74));
        *((eax + ebx*4 + 8)) = esi;
        ebx++;
        esi = edi + 8;
        edi += 4;
        if (ebx >= *((ebp - 0x44))) {
            goto label_32;
        }
label_4:
        eax = *(0x4050b0);
label_30:
        eax += 0x24;
    } while (eax == esi);
    eax = *(esi);
    edx = *((ebp - 0x70));
    eax = *((edx + ebx*4 + 8));
    ecx = *((ebp - 0x2c));
    eax = uint32_t (*ebp - 0x38)(uint32_t, uint32_t, uint32_t) (ecx, eax, eax);
    if (eax >= 0) {
        goto label_3;
    }
    edx = *((ebp - 0x70));
    eax = esi;
    ecx = *((ebp - 0x74));
    eax -= edx;
    esi = *((ecx + eax));
    *((ecx + eax)) = 0;
    goto label_4;
label_21:
    ecx = *((ebp - 0x20));
    eax += ecx;
    if (*((ebp - 0x30)) < eax) {
        goto label_33;
    }
    esi++;
    *((ebp - 0x50)) = esi;
    esi = *((ebp - 0x54));
    goto label_5;
label_20:
    edx = *((ebp - 0x2c));
    eax = *((edx + 0x10));
    eax >>= 3;
    eax &= 0xff;
    if (eax != 0) {
        goto label_34;
    }
    ecx = *((edx + 0xc));
    edx = 0;
    edi = *((ecx + 4));
    *((ebp - 0x58)) = ecx;
    if (eax >= edi) {
label_6:
        goto label_1;
    }
    esi = *((ebp - 0x58));
    ecx = edx + edi;
    ecx >>= 1;
    ebx = *((esi + ecx*4 + 8));
    eax = *((ebx + 8));
    esi = *((ebx + 0xc));
    if (*((ebp - 0x30)) >= eax) {
        goto label_35;
    }
    edi = ecx;
    goto label_6;
label_24:
    esi = *((ebp - 0x2c));
    edx = *((esi + 0xc));
    eax = esi;
    eax = _classify_object_over_fdes ();
    *((ebp - 0x34)) = eax;
    goto label_7;
label_34:
    edx = *((ebp - 0x2c));
    ebx = (int32_t) al;
    eax = ebx;
    edx = *((edx + 0xc));
    *((ebp - 0x5c)) = edx;
    edx = *((ebp - 0x2c));
    eax = _base_from_object ();
    *((ebp - 0x64)) = 0;
    ecx = *((ebp - 0x5c));
    *((ebp - 0x60)) = eax;
    esi = *((ecx + 4));
    if (*((ebp - 0x64)) >= esi) {
        goto label_1;
    }
    *((ebp - 0x68)) = ebx;
    eax = ebx;
    eax &= 0xf;
    *((ebp - 0x6c)) = eax;
    goto label_36;
label_8:
    esi = ebx;
label_9:
    if (*((ebp - 0x64)) >= esi) {
        goto label_1;
    }
label_36:
    ebx = *((ebp - 0x64));
    ecx = ebp - 0x24;
    edx = *((ebp - 0x5c));
    ebx += esi;
    ebx >>= 1;
    edi = *((edx + ebx*4 + 8));
    eax = edi + 8;
    edx = *((ebp - 0x60));
    eax = *((ebp - 0x68));
    eax = _read_encoded_value_with_base (eax, ecx);
    edx = ebp - 0x28;
    eax = *((ebp - 0x6c));
    edx = 0;
    _read_encoded_value_with_base (eax, edx);
    eax = *((ebp - 0x24));
    if (*((ebp - 0x30)) < eax) {
        goto label_8;
    }
    edx = *((ebp - 0x28));
    eax += edx;
    if (*((ebp - 0x30)) < eax) {
        goto label_33;
    }
    ebx++;
    *((ebp - 0x64)) = ebx;
    goto label_9;
label_35:
    eax += esi;
    if (eax > *((ebp - 0x30))) {
        goto label_37;
    }
    edx = ecx + 1;
    goto label_6;
label_22:
    eax = *((ebp - 0x2c));
    ecx = *((ebp - 0x30));
    edx = *((eax + 0xc));
    _linear_search_fdes (ecx);
    return eax;
label_25:
    esi = *((ebp - 0x2c));
    *((esi + 0x10)) = edx;
    goto label_10;
label_27:
    esi = *((ebp - 0x34));
    if (*((eax + 4)) == esi) {
        goto label_11;
    }
label_12:
    abort ();
label_32:
    edx = *((ebp - 0x14));
    ecx = *((ebp - 0x18));
    *((ebp - 0x74)) = edx;
    *((ebp - 0x70)) = ecx;
label_31:
    ecx = 0;
    edx = 0;
    ebx = 0;
    if (ecx >= *((ebp - 0x44))) {
        goto label_38;
    }
    do {
        esi = *((ebp - 0x3c));
        esi = *((esi + ebx*4 + 8));
        if (esi == 0) {
            goto label_39;
        }
        esi = *((ebp - 0x40));
        eax = *((esi + ebx*4 + 8));
        ebx++;
        *((esi + edx*4 + 8)) = eax;
        edx++;
label_14:
    } while (ebx < *((ebp - 0x44)));
label_38:
    eax = *((ebp - 0x40));
    esi = *((ebp - 0x70));
    *((eax + 4)) = edx;
    edx = *((ebp - 0x3c));
    *((edx + 4)) = ecx;
    ecx = *((ebp - 0x74));
    edx = *((esi + 4));
    eax = *((ecx + 4));
    eax += edx;
    if (eax != *((ebp - 0x34))) {
        goto label_12;
    }
    eax = *((ebp - 0x74));
    edx = *((ebp - 0x38));
    eax = *((ebp - 0x2c));
    _frame_heapsort (eax);
    edx = *((ebp - 0x14));
    esi = *((ebp - 0x18));
    edi = *((edx + 4));
    *((ebp - 0x74)) = edx;
    if (edi == 0) {
        goto label_40;
    }
    ebx = *((esi + 4));
label_13:
    ecx = *((ebp - 0x74));
    edi--;
    ecx = *((ecx + edi*4 + 8));
    *((ebp - 0x48)) = ecx;
    while (ebx != 0) {
        eax = *((ebp - 0x48));
        eax = *((esi + ebx*4 + 4));
        edx = *((ebp - 0x2c));
        eax = uint32_t (*ebp - 0x38)(uint32_t, uint32_t, uint32_t) (edx, eax, eax);
        if (eax <= 0) {
            goto label_41;
        }
        eax = *((esi + ebx*4 + 4));
        edx = ebx + edi;
        ebx--;
        *((esi + edx*4 + 8)) = eax;
    }
label_41:
    ecx = *((ebp - 0x48));
    eax = ebx + edi;
    *((esi + eax*4 + 8)) = ecx;
    if (edi != 0) {
        goto label_13;
    }
    edx = *((ebp - 0x74));
    ecx = *((ebp - 0x14));
    eax = *((edx + 4));
    *((esi + 4)) += eax;
    *((ebp - 0x74)) = ecx;
label_40:
    esi = *((ebp - 0x74));
    _free (esi);
    do {
        ecx = *((ebp - 0x2c));
        edx = *((ebp - 0x18));
        eax = *((ecx + 0xc));
        *(edx) = eax;
        *((ecx + 0x10)) |= 1;
        *((ecx + 0xc)) = edx;
        goto label_2;
label_39:
        esi = *((ebp - 0x40));
        eax = *((esi + ebx*4 + 8));
        esi = *((ebp - 0x3c));
        ebx++;
        *((esi + ecx*4 + 8)) = eax;
        ecx++;
        goto label_14;
label_33:
        eax = edi;
        goto label_15;
label_26:
        ecx = *((ebp - 0x2c));
        edx = ebp - 0x18;
        eax = *((ecx + 0xc));
        eax = ecx;
        _add_fdes (eax);
        goto label_16;
label_29:
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x38));
        eax = *((ebp - 0x2c));
        _frame_heapsort (eax);
    } while (1);
label_37:
    eax = ebx;
    goto label_15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402850 */
#include <stdint.h>
 
int32_t Unwind_Find_FDE (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_ch;
    LONG * lReleaseCount;
    LPLONG * lpPreviousCount;
    DWORD * dwMilliseconds;
    edi = 0;
    _init_object_mutex_once (ebx, esi, edi);
    eax = *(0x405090);
    ebx = *(0x4050b0);
    esi = ebx + 0x14;
    if (eax != 0) {
        goto label_6;
    }
label_1:
    esi = *((ebx + 0x10));
    while (esi != 0) {
        eax = *((ebp + 8));
        if (*(esi) <= eax) {
            goto label_7;
        }
        esi = *((esi + 0x14));
    }
label_0:
    esi = *((ebx + 0xc));
    if (esi == 0) {
        goto label_3;
    }
    eax = *((esi + 0x14));
    edx = *((ebp + 8));
    *((ebx + 0xc)) = eax;
    eax = esi;
    eax = _search_object ();
    ebx = *(0x4050b0);
    edi = eax;
    eax = *((ebx + 0x10));
    edx = ebx + 0x10;
    if (eax == 0) {
        goto label_8;
    }
    ecx = *(esi);
    do {
        eax = *(edx);
        if (*(eax) < ecx) {
            goto label_9;
        }
        edx = eax + 0x14;
        eax = *((eax + 0x14));
    } while (eax != 0);
    eax = 0;
    *((esi + 0x14)) = eax;
    *(edx) = esi;
    if (edi == 0) {
        goto label_0;
    }
label_3:
    eax = *(0x405090);
    ebx += 0x14;
    if (eax != 0) {
        goto label_10;
    }
label_2:
    if (edi != 0) {
        eax = *((esi + 4));
        edx = *((ebp + 0xc));
        *(edx) = eax;
        eax = *((esi + 8));
        *((edx + 4)) = eax;
        eax = *((esi + 0x10));
        eax >>= 3;
        eax &= 0xff;
        if ((*((esi + 0x10)) & 4) != 0) {
            goto label_11;
        }
label_4:
        ebx = (int32_t) al;
        edx = esi;
        eax = ebx;
        eax = _base_from_object ();
        edx = *((ebp + 0xc));
        edx += 8;
        edx = edi + 8;
        edx = eax;
        eax = ebx;
        _read_encoded_value_with_base (edx, edx);
    }
    esp = ebp - 0xc;
    eax = edi;
    return eax;
label_6:
    eax = _InterlockedIncrement@4 (esi);
    if (eax != 0) {
        goto label_12;
    }
label_5:
    ebx = *(0x4050b0);
    goto label_1;
label_8:
    eax = *(edx);
label_9:
    *((esi + 0x14)) = eax;
    *(edx) = esi;
    if (edi == 0) {
        goto label_0;
    }
    eax = *(0x405090);
    ebx += 0x14;
    if (eax == 0) {
        goto label_2;
    }
label_10:
    eax = _InterlockedDecrement@4 (ebx);
    if (eax < 0) {
        goto label_2;
    }
    eax = 0;
    ecx = 1;
    eax = *((ebx + 4));
    eax = ReleaseSemaphore_12 (eax, ecx, eax);
    goto label_2;
label_7:
    edx = eax;
    eax = esi;
    eax = _search_object ();
    edi = eax;
    if (eax != 0) {
        ebx = *(0x4050b0);
        goto label_3;
    }
    ebx = *(0x4050b0);
    goto label_0;
label_11:
    edx = *((edi + 4));
    eax = edi;
    eax -= edx;
    eax += 4;
    _get_cie_encoding ();
    goto label_4;
label_12:
    eax = 0xffffffff;
    eax = *((esi + 4));
    eax = WaitForSingleObject_8 (eax, eax);
    if (eax == 0) {
        goto label_5;
    }
    _InterlockedDecrement@4 (esi);
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402a30 */
#include <stdint.h>
 
int32_t w32_sharedptr_default_unexpected (void) {
    eax = *(0x4050b0);
    ecx = *((eax + 4));
    return void (*ecx)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402ec0 */
#include <stdint.h>
 
void reg_frame_ctor (void) {
    return do_frame_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402ed0 */
#include <stdint.h>
 
void dereg_frame_dtor (void) {
    return do_frame_fini ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402d80 */
#include <stdint.h>
 
void p_fmode (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e20 */
#include <stdint.h>
 
void SetUnhandledExceptionFilter_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e40 */
#include <stdint.h>
 
void InterlockedDecrement_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e10 */
#include <stdint.h>
 
void ExitProcess_4 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402d90 */
#include <stdint.h>
 
void getmainargs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e50 */
#include <stdint.h>
 
void WaitForSingleObject_8 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e30 */
#include <stdint.h>
 
void ReleaseSemaphore_12 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402dc0 */
#include <stdint.h>
 
void strlen (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e00 */
#include <stdint.h>
 
void assert (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x03/ia32_pe/subject.exe @ 0x402e90 */
#include <stdint.h>
 
void GetAtomNameA_12 (void) {
}
