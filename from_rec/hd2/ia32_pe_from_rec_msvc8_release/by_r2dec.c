/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4014ec */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_14h;
    int32_t var_4h;
label_0:
    fcn_004018bc (0x4021d8);
    ebx = 0;
    *((ebp - 4)) = ebx;
    eax = *(fs:0x18);
    esi = *((eax + 4));
    *((ebp - 0x1c)) = ebx;
    edi = 0x403374;
    do {
        eax = InterlockedCompareExchange (edi, esi, ebx);
        if (eax == ebx) {
            goto label_1;
        }
        if (eax == esi) {
            esi = 0;
            esi++;
            *((ebp - 0x1c)) = esi;
            goto label_2;
        }
        Sleep (0x3e8);
    } while (1);
label_1:
    esi = 0;
    esi++;
label_2:
    eax = *(0x403370);
    if (eax == esi) {
        _amsg_exit (0x1f);
    } else {
        eax = *(0x403370);
        if (eax == 0) {
            *(0x403370) = esi;
            eax = _initterm_e (0x4020d0, 0x4020dc);
            if (eax == 0) {
                goto label_3;
            }
            *((ebp - 4)) = 0xfffffffe;
            eax = 0xff;
            goto label_4;
        }
        *(0x403034) = esi;
    }
label_3:
    eax = *(0x403370);
    if (eax == esi) {
        _initterm (0x4020c4, 0x4020cc);
        *(0x403370) = 2;
    }
    if (*((ebp - 0x1c)) == ebx) {
        InterlockedExchange (edi, ebx);
    }
    if (*(0x403380) != ebx) {
        eax = fcn_004017f0 ();
        if (eax == 0) {
            goto label_5;
        }
        uint32_t (*0x403380)(uint32_t, uint32_t, uint32_t) (ebx, 2, ebx);
    }
label_5:
    eax = *(0x40301c);
    ecx = *(sym.imp.MSVCR90.dll___initenv);
    *(ecx) = eax;
    eax = fcn_00401200 (*(0x403018), *(0x403020));
    *(0x403030) = eax;
    if (*(0x403024) == ebx) {
        exit (rdi);
        eax = *((ebp - 0x14));
        ecx = *(eax);
        ecx = *(ecx);
        *((ebp - 0x20)) = ecx;
        _XcptFilter (ecx, eax);
        return eax;
    }
    if (*(0x403034) == ebx) {
        _cexit ();
    }
    *((ebp - 4)) = 0xfffffffe;
    eax = *(0x403030);
label_4:
    fcn_00401901 ();
    return eax;
    fcn_00401968 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a2e */
#include <stdint.h>
 
void memset (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x40123b */
#include <stdint.h>
 
void fcn_0040123b (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    if (ecx == *(section..data)) {
        return;
    }
    return void (*0x4014f6)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4014f6 */
#include <stdint.h>
 
int32_t loc_004014f6 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    *(0x403140) = eax;
    *(0x40313c) = ecx;
    *(0x403138) = edx;
    *(0x403134) = ebx;
    *(0x403130) = esi;
    *(0x40312c) = edi;
    *(0x403158) = ss;
    *(0x40314c) = cs;
    *(0x403128) = ds;
    *(0x403124) = es;
    *(0x403120) = fs;
    *(0x40311c) = gs;
    __asm ("pushfd");
    eax = *(ebp);
    *(0x403144) = eax;
    eax = *((ebp + 4));
    *(0x403148) = eax;
    eax = ebp + 8;
    *(0x403154) = eax;
    eax = *((ebp - 0x320));
    *(0x403090) = 0x10001;
    eax = *(0x403148);
    *(0x403044) = eax;
    *(0x403038) = 0xc0000409;
    *(0x40303c) = 1;
    eax = *(section..data);
    *((ebp - 0x328)) = eax;
    eax = *(0x403004);
    *((ebp - 0x324)) = eax;
    eax = IsDebuggerPresent ();
    *(0x403088) = eax;
    _crt_debugger_hook (1);
    SetUnhandledExceptionFilter (0);
    UnhandledExceptionFilter (0x4020fc);
    if (*(0x403088) == 0) {
        _crt_debugger_hook (1);
    }
    eax = GetCurrentProcess (0xc0000409);
    TerminateProcess (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4019fe */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t fcn_00401000 (int32_t arg_5ch, int32_t arg_68h) {
    int32_t var_1ch;
    void * s;
    int32_t var_1dh;
    int32_t var_54h;
    /* [00] -r-x section size 4096 named .text */
    eax = *(section..data);
    eax ^= esp;
    *((esp + 0x54)) = eax;
    eax = *((esp + 0x5c));
    ebp = *((esp + 0x68));
    edx = esp + 0x18;
    sprintf (edx, "%08lX:", ecx, edi, esi, ebp, ebx);
    if (ebp > 0x10) {
    }
    esi = 0;
    if (ebp <= 0) {
        goto label_1;
    }
    edi = esp + 0x1d;
    while (esi < ebp) {
        eax = *((esp + 0x10));
        ecx = *((eax + esi));
        void (*ebx)(uint32_t, char*, uint32_t) (edi, " %02lX", ecx);
        esi++;
        edi += 3;
    }
    if (esi >= 0x10) {
        goto label_2;
    }
label_1:
    edx = *(0x402114);
    ecx = 0x10;
    ecx -= esi;
label_0:
    edi = esp + 0x14;
    edi--;
    do {
        al = *((edi + 1));
        edi++;
    } while (al != 0);
    ecx--;
    *(edi) = edx;
    if (ecx != 0) {
        goto label_0;
    }
label_2:
    eax = esp + 0x14;
    edx = eax + 1;
    while (cl != 0) {
        cl = *(eax);
        eax++;
    }
    eax -= edx;
    ebx = eax;
    *((esp + ebx + 0x14)) = 0x7c2020;
    ebx += 3;
    esi = 0;
    if (ebp <= 0) {
        goto label_3;
    }
    ecx = esp + ebx + 0x14;
    do {
        edx = *((esp + 0x10));
        al = *((edx + esi));
        if (al >= 0x20) {
            eax = (int32_t) al;
            if (al <= 0x7e) {
                goto label_4;
            }
        }
        eax = 0x2e;
label_4:
        *((ecx + esi)) = al;
        esi++;
    } while (esi < ebp);
    if (esi < 0x10) {
label_3:
        edi = 0x10;
        edi -= esi;
        eax = ebx + esi;
        eax = esp + eax + 0x18;
        memset (eax, 0x20, edi);
        esi += edi;
    }
    ecx = esp + 0x14;
    eax = 0x7c;
    ebx += esi;
    *((esp + ebx + 0x1c)) = ax;
    printf (rdi);
    ecx = *((esp + 0x6c));
    ecx ^= esp;
    fcn_0040123b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401140 */
#include <stdint.h>
 
int32_t fcn_00401140 (void) {
    int32_t var_10h;
    uint32_t var_24h;
    int32_t var_4ch;
    int32_t var_44h;
    eax = *(section..data);
    eax ^= esp;
    *((esp + 0x44)) = eax;
    eax = esp + 0x10;
    esi = ecx;
    eax = _stat64i32 (esi, eax, edi, esi, ebp, ebx);
    while (edi == 0) {
        perror (rdi);
        eax = 1;
        ecx = *((esp + 0x44));
        ecx ^= esp;
        fcn_0040123b ();
        return eax;
        eax = fopen (rdi, rsi);
        edi = eax;
    }
    ebp = 0;
    if (*((esp + 0x24)) <= ebp) {
        goto label_0;
    }
    ebx = *(sym.imp.MSVCR90.dll_fread);
    do {
        ecx = esp + 0x4c;
        eax = void (*ebx)(uint32_t, uint32_t, uint32_t, uint32_t) (ecx, 1, 0x10, edi);
        esi = eax;
        if (esi == 0) {
            goto label_0;
        }
        edx = esp + 0x44;
        ecx = ebp;
        fcn_00401000 (edx, esi);
        ebp += esi;
    } while (ebp < *((esp + 0x24)));
label_0:
    eax = fclose (rdi);
    ecx = *((esp + 0x58));
    ecx ^= esp;
    eax = 0;
    fcn_0040123b ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4016f7 */
#include <stdint.h>
 
uint32_t fcn_004016f7 (int32_t arg_8h) {
    eax = fcn_00401652 (*((ebp + 8)));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401652 */
#include <stdint.h>
 
uint32_t fcn_00401652 (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_004018bc (0x4021f8);
    eax = _decode_pointer (*(0x40337c));
    *((ebp - 0x1c)) = eax;
    if (eax == -1) {
        _onexit (*((ebp + 8)));
    } else {
        _lock (8);
        *((ebp - 4)) = 0;
        eax = void (*esi)(uint32_t*) (*(0x40337c));
        *((ebp - 0x1c)) = eax;
        eax = void (*esi)(uint32_t*) (*(0x403378));
        *((ebp - 0x20)) = eax;
        eax = _encode_pointer (*((ebp + 8)), ebp - 0x1c, ebp - 0x20);
        eax = _dllonexit (eax);
        *((ebp - 0x24)) = eax;
        eax = _encode_pointer (*((ebp - 0x1c)));
        *(0x40337c) = eax;
        eax = _encode_pointer (*((ebp - 0x20)));
        *(0x403378) = eax;
        *((ebp - 4)) = 0xfffffffe;
        fcn_004016ee ();
        eax = *((ebp - 0x24));
    }
    fcn_00401901 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x40164c */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4018bc */
#include <stdint.h>
 
int32_t fcn_004018bc (int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *((esp + 0x10));
    *((esp + 0x10)) = ebp;
    ebp = esp + 0x10;
    eax = *(section..data);
    *((ebp - 4)) ^= eax;
    eax ^= ebp;
    *((ebp - 0x18)) = esp;
    eax = *((ebp - 4));
    *((ebp - 4)) = 0xfffffffe;
    *((ebp - 8)) = eax;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4018b4 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4018ae */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4017f0 */
#include <stdint.h>
 
int32_t fcn_004017f0 (void) {
    int32_t var_18h;
    int32_t var_10h_2;
    int32_t var_4h;
    int32_t var_8h_2;
    int32_t var_10h;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *(section..data);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    *((ebp - 0x18)) = esp;
    *((ebp - 4)) = 0;
    eax = fcn_00401760 (0x400000);
    if (eax == 0) {
        void (*0x401892)() ();
    }
    eax = *((ebp + 8));
    eax -= 0x400000;
    eax = fcn_004017a0 (0x400000, eax);
    if (eax == 0) {
        void (*0x401892)() ();
    }
    eax = *((eax + 0x24));
    eax >>= 0x1f;
    eax = ~eax;
    eax &= 1;
    *((ebp - 4)) = 0xfffffffe;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401760 */
#include <stdint.h>
 
int32_t fcn_00401760 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = 0x5a4d;
    while (*(eax) != 0x4550) {
        eax = 0;
        return eax;
        eax = *((ecx + 0x3c));
        eax += ecx;
    }
    edx = 0;
    ecx = 0x10b;
    dl = (*((eax + 0x18)) == cx) ? 1 : 0;
    eax = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4017a0 */
#include <stdint.h>
 
int32_t fcn_004017a0 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    ecx = *((eax + 0x3c));
    ecx += eax;
    eax = *((ecx + 0x14));
    esi = *((ecx + 6));
    edx = 0;
    eax = eax + ecx + 0x18;
    if (esi <= 0) {
        goto label_0;
    }
    edi = *((ebp + 0xc));
    do {
        ecx = *((eax + 0xc));
        if (edi >= ecx) {
            ebx = *((eax + 8));
            ebx += ecx;
            if (edi < ebx) {
                goto label_1;
            }
        }
        edx++;
        eax += 0x28;
    } while (edx < esi);
label_0:
    eax = 0;
label_1:
    esi = edi;
    ebx = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401200 */
#include <stdint.h>
 
int32_t fcn_00401200 (int32_t arg_8h, int32_t arg_ch) {
    ebx = *((ebp + 8));
    edi = 0;
    esi = edi + 1;
    if (ebx <= esi) {
        goto label_0;
    }
    while (esi < ebx) {
        eax = *((ebp + 0xc));
        ecx = *((eax + esi*4));
        eax = fcn_00401140 ();
        esi++;
        edi += eax;
    }
label_0:
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x40175a */
#include <stdint.h>
 
void _XcptFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401901 */
#include <stdint.h>
 
void fcn_00401901 (void) {
    int32_t var_10h;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x40170e */
#include <stdint.h>
 
int32_t fcn_0040170e (void) {
    eax = 0x4021c8;
    esi = 0x4021c8;
    edi = eax;
    if (eax >= esi) {
        goto label_0;
    }
    do {
        eax = *(edi);
        if (eax != 0) {
            void (*eax)() ();
        }
        edi += 4;
    } while (edi < esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401965 */
#include <stdint.h>
 
int32_t fcn_00401965 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x40193a */
#include <stdint.h>
 
uint32_t fcn_0040193a (void) {
    esi = 0;
    eax = _controlfp_s (esi, 0x10000, 0x30000, esi);
    if (eax != 0) {
        _invoke_watson (esi, esi, esi, esi, esi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a28 */
#include <stdint.h>
 
void _controlfp_s (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a22 */
#include <stdint.h>
 
void _invoke_watson (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401968 */
#include <stdint.h>
 
int32_t fcn_00401968 (void) {
    LARGE_INTEGER * lpPerformanceCount;
    int32_t var_ch;
    LPFILETIME lpSystemTimeAsFileTime;
    int32_t var_4h;
    eax = *(section..data);
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    edi = 0xbb40e64e;
    ebx = 0xffff0000;
    if (eax != edi) {
        if ((ebx & eax) != 0) {
            eax = ~eax;
            *(0x403004) = eax;
        }
    } else {
        GetSystemTimeAsFileTime (ebp - 8, esi);
        esi = *((ebp - 4));
        esi ^= *((ebp - 8));
        eax = GetCurrentProcessId ();
        esi ^= eax;
        eax = GetCurrentThreadId ();
        esi ^= eax;
        eax = GetTickCount ();
        esi ^= eax;
        QueryPerformanceCounter (ebp - 0x10);
        eax = *((ebp - 0xc));
        eax ^= *((ebp - 0x10));
        esi ^= eax;
        if (esi == edi) {
            esi = 0xbb40e64f;
        } else {
            if ((ebx & esi) != 0) {
                goto label_0;
            }
            eax = esi;
            eax <<= 0x10;
            esi |= eax;
        }
label_0:
        *(section..data) = esi;
        esi = ~esi;
        *(0x403004) = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a04 */
#include <stdint.h>
 
void void_cdecl_terminate_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a16 */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a10 */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x4016ee */
#include <stdint.h>
 
void fcn_004016ee (void) {
    _unlock (8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a0a */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe @ 0x401a1c */
#include <stdint.h>
 
void _except_handler4_common (void) {
}
