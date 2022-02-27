/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401260 */
#include <stdint.h>
 
void entry0 (void) {
    _set_app_type (1);
    return fcn_00401140 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4014de */
#include <stdint.h>
 
int32_t main (int32_t argc) {
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_4h;
    eax = 0;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    *((ebp - 0x7c)) = eax;
    eax = *((ebp - 0x7c));
    fcn_00402e20 ();
    fcn_00401620 ();
    printf ("IOLI Crackme Level 0x09\n");
    printf ("Password: ");
    eax = ebp - 0x78;
    scanf (0x405055, eax);
    eax = *((ebp + 0x10));
    eax = ebp - 0x78;
    fcn_0040141a (eax, eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402e20 */
#include <stdint.h>
 
int32_t fcn_00402e20 (void) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401620 */
#include <stdint.h>
 
int32_t fcn_00401620 (void) {
label_1:
    eax = *(0x403030);
    if (eax == -1) {
        goto label_2;
    }
label_0:
    ebx = eax;
    if (eax == 0) {
        goto label_3;
    }
    do {
        uint32_t (*ebx*4 + 0x403030)() ();
        ebx--;
    } while (ebx != 0);
label_3:
    *(esp) = 0x401590;
    eax = fcn_004012a0 ();
    return eax;
label_2:
    eax = 0;
    while (ebx != 0) {
        eax++;
        ebx = *((eax*4 + 0x403034));
    }
    goto label_0;
    eax = *(0x406050);
    if (eax != 0) {
        return eax;
    }
    eax = 1;
    *(0x406050) = eax;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4012a0 */
#include <stdint.h>
 
void fcn_004012a0 (void) {
    return void (*sym.imp.msvcrt.dll_atexit)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402ef0 */
#include <stdint.h>
 
void printf (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402ec0 */
#include <stdint.h>
 
void scanf (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x40141a */
#include <stdint.h>
 
int32_t fcn_0040141a (char * s, int32_t arg_ch) {
    char * var_dh;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_bp_4h;
    char * format;
    int32_t var_sp_8h;
    *((ebp - 8)) = 0;
    *((ebp - 0xc)) = 0;
    do {
        eax = *((ebp + 8));
        eax = strlen (eax);
        if (*((ebp - 0xc)) >= eax) {
            goto label_0;
        }
        eax = *((ebp - 0xc));
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 0xd)) = al;
        eax = ebp - 4;
        eax = ebp - 0xd;
        sscanf (eax, 0x40501a, eax);
        edx = *((ebp - 4));
        eax = ebp - 8;
        *(eax) += edx;
        if (*((ebp - 8)) == 0x10) {
            eax = *((ebp + 0xc));
            eax = *((ebp + 8));
            fcn_004013a3 (eax, eax);
        }
        eax = ebp - 0xc;
        *(eax)++;
    } while (1);
label_0:
    fcn_00401385 ();
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    eax = fcn_00401310 (eax);
    if (eax == 0) {
        goto label_1;
    }
    *((ebp - 0xc)) = 0;
    do {
        if (*((ebp - 0xc)) > 9) {
            goto label_1;
        }
        eax = *((ebp - 4));
        eax &= 1;
        if (eax == 0) {
            printf ("wtf?\n");
            exit (0);
        }
        eax = ebp - 0xc;
        *(eax)++;
    } while (1);
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401580 */
#include <stdint.h>
 
void fcn_00401580 (void) {
    __asm ("fninit");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f70 */
#include <stdint.h>
 
void SetUnhandledExceptionFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402eb0 */
#include <stdint.h>
 
void _getmainargs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402ea0 */
#include <stdint.h>
 
void _p_fmode (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401550 */
#include <stdint.h>
 
int32_t fcn_00401550 (void) {
    ecx = 0x405310;
    while (ecx < 0x405310) {
        edx = *((ecx + 4));
        eax = *(ecx);
        ecx += 8;
        *((edx + 0x400000)) += eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f60 */
#include <stdint.h>
 
void ExitProcess (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401140 */
#include <stdint.h>
 
uint32_t fcn_00401140 (void) {
    int32_t var_bp_ch;
    int32_t var_8h;
    VOID var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    int32_t var_10h;
    SetUnhandledExceptionFilter (ebx);
    fcn_00401580 ();
    *((ebp - 8)) = 0;
    eax = ebp - 8;
    eax = *(section..data);
    eax = ebp - 0xc;
    eax = section..bss;
    _getmainargs (eax, eax, eax);
    eax = *(0x406040);
    if (eax == 0) {
        goto label_0;
    }
    *(0x404010) = eax;
    edx = *(sym.imp.msvcrt.dll__iob);
    while (1) {
        if (edx != 0xffffffe0) {
            eax = *(0x406040);
            eax = *(sym.imp.msvcrt.dll__iob);
            eax = *((eax + 0x30));
            _setmode (eax, eax);
            edx = *(sym.imp.msvcrt.dll__iob);
        }
        if (edx != 0xffffffc0) {
            eax = *(0x406040);
            eax = *(sym.imp.msvcrt.dll__iob);
            eax = *((eax + 0x50));
            _setmode (eax, eax);
        }
label_0:
        _p_fmode ();
        edx = *(0x404010);
        *(eax) = edx;
        fcn_00401550 ();
        eax = _p_environ ();
        eax = *(eax);
        *((esp + 8)) = eax;
        eax = *(section..bss);
        *((esp + 4)) = eax;
        eax = *(0x406004);
        eax = main (eax);
        ebx = eax;
        _cexit ();
        eax = ExitProcess (ebx);
        eax = *(sym.imp.msvcrt.dll__iob);
        eax = *((eax + 0x10));
        _setmode (eax, eax);
        edx = *(sym.imp.msvcrt.dll__iob);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402c00 */
#include <stdint.h>
 
int32_t fcn_00402c00 (void) {
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
    ecx = *(0x4060c0);
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
    eax = *(0x4050a4);
    *((ebp - 0x4c)) = 0x41414141;
    *((ebp - 0x48)) = 0x41414141;
    *((ebp - 0x34)) = eax;
    eax = *(0x4050a8);
    *((ebp - 0x44)) = 0x41414141;
    *((ebp - 0x40)) = 0x41414141;
    *((ebp - 0x30)) = eax;
    eax = *(0x4050ac);
    *((ebp - 0x3c)) = 0x41414141;
    *((ebp - 0x2c)) = eax;
    eax = *(0x4050b0);
    *((ebp - 0x28)) = eax;
    eax = *(0x4050b4);
    *((ebp - 0x24)) = eax;
    eax = *(0x4050b8);
    *((ebp - 0x20)) = eax;
    eax = *(0x4050bc);
    *((ebp - 0x1c)) = al;
    ax = FindAtomA (esi);
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
    *((ebx + 4)) = 0x402f40;
    ecx = 1;
    *((ebx + 8)) = 0x402b50;
    eax = *(0x406070);
    *(ebx) = 0x40;
    edx = *(0x406074);
    *((ebx + 0x14)) = eax;
    eax = *(0x404030);
    *((ebx + 0x18)) = edx;
    edx = *(0x404034);
    *((ebx + 0x1c)) = eax;
    eax = *(0x406080);
    *((ebx + 0x20)) = edx;
    edx = *(0x406084);
    *((ebx + 0x28)) = eax;
    eax = *(0x406090);
    *((ebx + 0x30)) = 0xffffffff;
    *((ebx + 0x2c)) = edx;
    *((ebx + 0x34)) = eax;
    edx = *(0x40403c);
    eax = *(0x404038);
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
    eax = *(0x4050a4);
    *((ebp - 0x74)) = eax;
    eax = *(0x4050a8);
    *((ebp - 0x70)) = eax;
    eax = *(0x4050ac);
    *((ebp - 0x6c)) = eax;
    eax = *(0x4050b0);
    *((ebp - 0x68)) = eax;
    eax = *(0x4050b4);
    *((ebp - 0x64)) = eax;
    eax = *(0x4050b8);
    *((ebp - 0x60)) = eax;
    eax = *(0x4050bc);
    *((ebp - 0x5c)) = al;
    eax = ebp - 0x98;
    ax = AddAtomA (eax);
    edi = (int32_t) ax;
    while (eax != ebx) {
        edx = 0;
label_0:
        if (edx == 0) {
            free (ebx);
            ax = FindAtomA (esi);
            eax = (int32_t) ax;
label_1:
            eax = fcn_00402b60 ();
            ebx = eax;
        }
        *(0x4060c0) = ebx;
        eax = ebx + 4;
        *(0x4060b0) = eax;
        eax = ebx + 8;
        *(0x4060d0) = eax;
        esp = ebp - 0xc;
        return eax;
        eax = edi;
        eax = fcn_00402b60 ();
        edx = edi;
    }
    goto label_0;
label_2:
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x403000 */
#include <stdint.h>
 
void FindAtomA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f30 */
#include <stdint.h>
 
void malloc (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402ff0 */
#include <stdint.h>
 
void AddAtomA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f20 */
#include <stdint.h>
 
void free (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402b60 */
#include <stdint.h>
 
uint32_t fcn_00402b60 (void) {
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
    eax = GetAtomNameA (ebx, edx, edx);
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
    _assert ("w32_sharedptr->size == sizeof(W32_EH_SHARED)", eax, edx);
label_1:
    ebx = 0xf1;
    ecx = "../../gcc-3.4.5-20060117-1/gcc/config/i386/w32-shared-ptr.c";
    _assert ("GetAtomNameA (atom, s, sizeof(s)) != 0", ecx, ebx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f40 */
#include <stdint.h>
 
void abort (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4019f0 */
#include <stdint.h>
 
int32_t fcn_004019f0 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    eax = 0;
    eax = 0;
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    fcn_00401900 (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401900 */
#include <stdint.h>
 
int32_t fcn_00401900 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
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
        fcn_00401870 ();
        ecx = *(0x4060a0);
        edx = *(0x4060c0);
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
    eax = InterlockedDecrement (ebx);
    if (eax < 0) {
        goto label_0;
    }
    edx = 0;
    eax = 1;
    eax = *((ebx + 4));
    ReleaseSemaphore (eax, eax, edx);
    goto label_0;
label_3:
    eax = InterlockedIncrement (esi);
    while (eax == 0) {
label_2:
        edx = *(0x4060c0);
        ecx = *(0x4060a0);
        goto label_1;
        ecx = 0xffffffff;
        eax = *((esi + 4));
        eax = WaitForSingleObject (eax, ecx);
    }
    InterlockedDecrement (esi);
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401d50 */
#include <stdint.h>
 
int32_t fcn_00401d50 (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_4h_3;
    LONG * var_4h_2;
    LONG * lReleaseCount;
    LPLONG * lpPreviousCount;
    DWORD * dwMilliseconds;
label_6:
    ebx = *((ebp + 8));
    if (ebx != 0) {
        eax = *(ebx);
        if (eax != 0) {
            goto label_7;
        }
    }
    esp = ebp - 0xc;
    eax = 0;
    return eax;
label_7:
    fcn_00401870 ();
    eax = *(0x4060a0);
    esi = *(0x4060c0);
    edi = esi + 0x14;
    if (eax != 0) {
        goto label_8;
    }
label_1:
    ecx = esi + 0xc;
    if (*((esi + 0xc)) == 0) {
        goto label_9;
    }
    do {
        eax = *(ecx);
        if (*((eax + 0xc)) == ebx) {
            goto label_10;
        }
        edx = *((eax + 0x14));
        ecx = eax + 0x14;
    } while (edx != 0);
label_9:
    ecx = esi + 0x10;
    while ((*((edx + 0x10)) & 1) != 0) {
        eax = *((edx + 0xc));
        if (*(eax) == ebx) {
            goto label_11;
        }
label_0:
        eax = *((edx + 0x14));
        ecx = edx + 0x14;
        if (eax == 0) {
            goto label_12;
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
    eax = *(0x4060a0);
    esi += 0x14;
    while (eax < 0) {
        eax = ebx;
label_2:
        esp = ebp - 0xc;
        return eax;
label_8:
        eax = InterlockedIncrement (edi);
        if (eax != 0) {
            goto label_13;
        }
label_5:
        esi = *(0x4060c0);
        goto label_1;
        eax = InterlockedDecrement (esi);
    }
    eax = 0;
    edi = 1;
    eax = *((esi + 4));
    ReleaseSemaphore (eax, edi, eax);
    eax = ebx;
    goto label_2;
label_11:
    ebx = edx;
    edx = *((edx + 0x14));
    *(ecx) = edx;
    eax = *((ebx + 0xc));
    eax = free (eax);
    esi = *(0x4060c0);
    goto label_3;
label_10:
    ebx = eax;
    goto label_4;
label_12:
    eax = *(0x4060a0);
    ebx = esi + 0x14;
    while (eax < 0) {
        abort ();
        eax = InterlockedDecrement (ebx);
    }
    eax = 0;
    eax = 1;
    eax = *((ebx + 4));
    ReleaseSemaphore (eax, eax, eax);
    abort ();
label_13:
    ecx = 0xffffffff;
    eax = *((edi + 4));
    eax = WaitForSingleObject (eax, ecx);
    if (eax == 0) {
        goto label_5;
    }
    InterlockedDecrement (edi);
    goto label_5;
    goto label_6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f10 */
#include <stdint.h>
 
void strncmp (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f00 */
#include <stdint.h>
 
void exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402ee0 */
#include <stdint.h>
 
void sscanf (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401310 */
#include <stdint.h>
 
int32_t fcn_00401310 (char * s1) {
    int32_t var_8h;
    int32_t var_4h;
    char * s2;
    size_t * n;
    *((ebp - 4)) = 0;
    do {
        eax = *((ebp - 4));
        edx = eax*4;
        eax = *((ebp + 0xc));
        if (*((edx + eax)) == 0) {
            goto label_0;
        }
        eax = *((ebp - 4));
        ecx = eax*4;
        edx = *((ebp + 0xc));
        eax = ebp - 4;
        *(eax)++;
        eax = *((ecx + edx));
        eax = strncmp (eax, "LOLO", 3);
    } while (eax != 0);
    *(0x406030) = 1;
    *((ebp - 8)) = 1;
    goto label_1;
label_0:
    exit (0xffffffff);
label_1:
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402ed0 */
#include <stdint.h>
 
void strlen (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4013a3 */
#include <stdint.h>
 
uint32_t fcn_004013a3 (char * s, char * arg_ch) {
    int32_t var_bp_8h;
    int32_t var_4h;
    char * format;
    int32_t var_8h;
    eax = ebp - 4;
    eax = *((ebp + 8));
    sscanf (eax, 0x40501a, eax);
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    eax = fcn_00401310 (eax);
    if (eax == 0) {
        goto label_0;
    }
    *((ebp - 8)) = 0;
    do {
        if (*((ebp - 8)) > 9) {
            goto label_0;
        }
        eax = *((ebp - 4));
        eax &= 1;
        if (eax == 0) {
            if (*(0x406030) == 1) {
                printf ("Password OK!\n");
            }
            exit (0);
        }
        eax = ebp - 8;
        *(eax)++;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401385 */
#include <stdint.h>
 
void fcn_00401385 (void) {
    int32_t var_4h;
    int32_t var_bp_8h;
    int32_t var_ch;
    int32_t var_sp_4h;
    int32_t var_8h;
    printf ("Password Incorrect!\n");
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401690 */
#include <stdint.h>
 
int32_t fcn_00401690 (void) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4016e0 */
#include <stdint.h>
 
int32_t fcn_004016e0 (void) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402fb0 */
#include <stdint.h>
 
void CreateSemaphoreA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402fd0 */
#include <stdint.h>
 
void InterlockedIncrement (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402fc0 */
#include <stdint.h>
 
void Sleep (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401820 */
#include <stdint.h>
 
int32_t fcn_00401820 (void) {
    int32_t var_bp_4h;
    LONG lInitialCount;
    LONG lMaximumCount;
    LPCSTR lpName;
    ecx = 0;
    eax = *(0x4060c0);
    *((eax + 0x14)) = 0xffffffff;
    ebx = eax + 0x14;
    eax = 0;
    eax = 0xffff;
    eax = CreateSemaphoreA (ebx, ecx, eax);
    *((ebx + 4)) = eax;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401870 */
#include <stdint.h>
 
int32_t fcn_00401870 (void) {
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 8)) = ebx;
    eax = *(0x4060a0);
    ebx = *(0x4060c0);
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
        eax = InterlockedIncrement (eax);
        if (eax == 0) {
            goto label_2;
        }
    } while (*((ebx + 0x1c)) != 0);
    do {
        Sleep (0);
        eax = *(esi);
    } while (eax == 0);
    goto label_0;
label_2:
    fcn_00401820 ();
    *((ebx + 0x1c)) = 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f90 */
#include <stdint.h>
 
void InterlockedDecrement (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f80 */
#include <stdint.h>
 
void ReleaseSemaphore (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402fa0 */
#include <stdint.h>
 
void WaitForSingleObject (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401a60 */
#include <stdint.h>
 
int32_t fcn_00401a60 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
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
    fcn_00401870 ();
    ecx = *(0x4060a0);
    edx = *(0x4060c0);
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
        eax = InterlockedIncrement (esi);
        if (eax != 0) {
            goto label_4;
        }
label_1:
        edx = *(0x4060c0);
        ecx = *(0x4060a0);
        eax = *((edx + 0xc));
        *((ebx + 0x14)) = eax;
        *((edx + 0xc)) = ebx;
        ebx = edx + 0x14;
    } while (ecx == 0);
label_3:
    eax = InterlockedDecrement (ebx);
    if (eax < 0) {
        goto label_0;
    }
    eax = 0;
    eax = 1;
    eax = *((ebx + 4));
    ReleaseSemaphore (eax, eax, eax);
    esp = ebp - 8;
    return eax;
label_4:
    eax = 0xffffffff;
    eax = *((esi + 4));
    eax = WaitForSingleObject (eax, eax);
    if (eax == 0) {
        goto label_1;
    }
    InterlockedDecrement (esi);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401b60 */
#include <stdint.h>
 
int32_t fcn_00401b60 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    ecx = 0;
    edx = 0;
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    fcn_00401a60 (ecx, eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401750 */
#include <stdint.h>
 
int32_t fcn_00401750 (int32_t arg_8h, int32_t arg_ch) {
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
    /* switch table (13 cases) at 0x405060 */
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
    eax = fcn_00401690 ();
    edx = *((ebp - 0x10));
    ecx = eax;
    goto label_0;
    edx = *(ecx);
    ecx += 2;
    goto label_0;
    edx = ebp - 0x14;
    eax = ecx;
    eax = fcn_004016e0 ();
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401d90 */
#include <stdint.h>
 
int32_t fcn_00401d90 (void) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401df0 */
#include <stdint.h>
 
int32_t fcn_00401df0 (void) {
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
    strlen (ebx);
    ecx = eax + ebx + 1;
    eax = ecx;
    edx = ebp - 0xc;
    fcn_00401690 ();
    edx = ebp - 0x10;
    ebx = esi + 0xa;
    eax = fcn_004016e0 ();
    ecx = eax;
    edx = ebp - 0xc;
    ecx++;
    eax = ecx;
    eax = fcn_00401690 ();
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
    eax = fcn_00401750 (edx, edx);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401fb0 */
#include <stdint.h>
 
uint32_t fcn_00401fb0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x401640 */
#include <stdint.h>
 
int32_t fcn_00401640 (void) {
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4022d0 */
#include <stdint.h>
 
uint32_t fcn_004022d0 (uint32_t arg_8h) {
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
    eax = fcn_00401d90 ();
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
        eax = fcn_00401df0 ();
        edx = *((ebp - 0x18));
        edi = eax;
        eax = (int32_t) al;
        eax = fcn_00401d90 ();
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
    eax = fcn_00401750 (eax, eax);
    ecx = ebx;
    edx = ebp - 0x14;
    ecx &= 0xf;
    edx = 0;
    eax = ecx;
    fcn_00401750 (eax, edx);
    eax = ebx;
    eax = fcn_00401640 ();
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4020b0 */
#include <stdint.h>
 
int32_t fcn_004020b0 (void) {
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
        eax = fcn_00401df0 ();
        *((ebp - 0x1c)) = eax;
        edx = edi;
        eax = *((ebp - 0x1c));
        eax = fcn_00401d90 ();
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
    fcn_00401750 (eax, eax);
    eax = ebx;
    eax = fcn_00401640 ();
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4021d0 */
#include <stdint.h>
 
uint32_t fcn_004021d0 (int32_t arg_8h) {
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
    eax = fcn_00401d90 ();
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
        eax = fcn_00401df0 ();
        edx = *((ebp - 0x14));
        edi = eax;
        eax = (int32_t) al;
        eax = fcn_00401d90 ();
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
    fcn_00401750 (eax, eax);
    eax = ebx;
    eax = fcn_00401640 ();
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402040 */
#include <stdint.h>
 
int32_t fcn_00402040 (void * arg_8h) {
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
        fcn_00401fb0 (esi, ebx, edi);
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
        fcn_00401fb0 (esi, edi, ebx);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x4023f0 */
#include <stdint.h>
 
int32_t fcn_004023f0 (void) {
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
        al = fcn_00401df0 ();
        edx = *((ebp - 0x2c));
        ebx = (int32_t) al;
        eax = ebx;
        eax = fcn_00401d90 ();
        edx = ebp - 0x1c;
        edx = edi + 8;
        edx = eax;
        eax = ebx;
        eax = fcn_00401750 (edx, edx);
        ebx &= 0xf;
        ecx = ebp - 0x20;
        edx = 0;
        eax = ebx;
        fcn_00401750 (eax, ecx);
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
        eax = fcn_004022d0 (esi);
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
        eax = fcn_004020b0 ();
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
        fcn_004021d0 (eax);
        eax = *(ebx);
    } while (eax != 0);
label_16:
    eax = *((ebp - 0x18));
    if (eax != 0) {
        goto label_27;
    }
label_11:
    *((ebp - 0x38)) = 0x401f20;
    eax = *((ebp - 0x2c));
    if ((*((eax + 0x10)) & 4) == 0) {
        eax = *((eax + 0x10));
        *((ebp - 0x38)) = 0x401e80;
        eax >>= 3;
        if (al == 0) {
            goto label_28;
        }
        *((ebp - 0x38)) = 0x401ea0;
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
    eax = *(0x4060c0);
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
        eax = *(0x4060c0);
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
    eax = fcn_004020b0 ();
    *((ebp - 0x34)) = eax;
    goto label_7;
label_34:
    edx = *((ebp - 0x2c));
    ebx = (int32_t) al;
    eax = ebx;
    edx = *((edx + 0xc));
    *((ebp - 0x5c)) = edx;
    edx = *((ebp - 0x2c));
    eax = fcn_00401d90 ();
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
    eax = fcn_00401750 (eax, ecx);
    edx = ebp - 0x28;
    eax = *((ebp - 0x6c));
    edx = 0;
    fcn_00401750 (eax, edx);
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
    fcn_004022d0 (ecx);
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
    fcn_00402040 (eax);
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
    free (esi);
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
        fcn_004021d0 (eax);
        goto label_16;
label_29:
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x38));
        eax = *((ebp - 0x2c));
        fcn_00402040 (eax);
    } while (1);
label_37:
    eax = ebx;
    goto label_15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402fe0 */
#include <stdint.h>
 
void GetAtomNameA (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x09/ia32_pe/subject.exe @ 0x402f50 */
#include <stdint.h>
 
void _assert (void) {
}
