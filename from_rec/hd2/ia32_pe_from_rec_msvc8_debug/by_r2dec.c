/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411136 */
#include <stdint.h>
 
void entry0 (void) {
    return void (*0x411d50)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411d50 */
#include <stdint.h>
 
void loc_00411d50 (void) {
    fcn_00411055 ();
    fcn_00411d70 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411055 */
#include <stdint.h>
 
int32_t fcn_00411055 (void) {
    LARGE_INTEGER * lpPerformanceCount;
    int32_t var_14h;
    LPFILETIME var_ch;
    LPFILETIME lpSystemTimeAsFileTime;
    int32_t var_4h;
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    if (*(section..data) != 0xbb40e64e) {
        eax = *(section..data);
        eax &= 0xffff0000;
        if (eax != 0) {
            ecx = *(section..data);
            ecx = ~ecx;
            *(0x417004) = ecx;
        }
    } else {
        GetSystemTimeAsFileTime (ebp - 8);
        eax = *((ebp - 8));
        *((ebp - 0xc)) = eax;
        ecx = *((ebp - 0xc));
        ecx ^= *((ebp - 4));
        *((ebp - 0xc)) = ecx;
        eax = GetCurrentProcessId ();
        eax ^= *((ebp - 0xc));
        *((ebp - 0xc)) = eax;
        eax = GetCurrentThreadId ();
        eax ^= *((ebp - 0xc));
        *((ebp - 0xc)) = eax;
        eax = GetTickCount ();
        eax ^= *((ebp - 0xc));
        *((ebp - 0xc)) = eax;
        QueryPerformanceCounter (ebp - 0x18);
        eax = *((ebp - 0xc));
        eax ^= *((ebp - 0x18));
        *((ebp - 0xc)) = eax;
        ecx = *((ebp - 0xc));
        ecx ^= *((ebp - 0x14));
        *((ebp - 0xc)) = ecx;
        if (*((ebp - 0xc)) == 0xbb40e64e) {
            *((ebp - 0xc)) = 0xbb40e64f;
        } else {
            edx = *((ebp - 0xc));
            edx &= 0xffff0000;
            if (edx != 0) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax <<= 0x10;
            eax |= *((ebp - 0xc));
            *((ebp - 0xc)) = eax;
        }
label_0:
        ecx = *((ebp - 0xc));
        *(section..data) = ecx;
        edx = *((ebp - 0xc));
        edx = ~edx;
        *(0x417004) = edx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411d70 */
#include <stdint.h>
 
int32_t fcn_00411d70 (void) {
    int32_t var_2ch;
    uint32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_10h_2;
    int32_t var_4h;
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
    *((ebp - 0x24)) = 0;
    fcn_0041111d ();
    eax = *((eax + 4));
    *((ebp - 0x20)) = eax;
    *((ebp - 0x1c)) = 0;
    do {
        ecx = *((ebp - 0x20));
        eax = InterlockedCompareExchange (0x417570, ecx, 0);
        *((ebp - 0x24)) = eax;
        if (*((ebp - 0x24)) == 0) {
            goto label_0;
        }
        edx = *((ebp - 0x24));
        if (edx == *((ebp - 0x20))) {
            *((ebp - 0x1c)) = 1;
        } else {
            Sleep (0x3e8);
        }
    } while (1);
label_0:
    if (*(0x417560) == 1) {
        fcn_004111a9 ();
    } else {
        if (*(0x417560) == 0) {
            *(0x417560) = 1;
            eax = fcn_004111fe ();
            if (eax != 0) {
                *((ebp - 0x2c)) = 0xff;
                *((ebp - 4)) = 0xfffffffe;
                eax = *((ebp - 0x2c));
                goto label_1;
            }
        } else {
            *(0x417160) = 1;
        }
    }
    if (*(0x417560) == 1) {
        fcn_004110b9 ();
        *(0x417560) = 2;
    }
    if (*(0x417560) != 2) {
        eax = _CrtDbgReportW (2, "f:\\dd\\vctools\\crt_bld\\self_x86\\crt\\src\\crtexe.c", 0x1f4, 0, "__native_startup_state == __initialized");
        if (eax != 1) {
            goto label_2;
        }
        __asm ("int3");
    }
label_2:
    if (*((ebp - 0x1c)) == 0) {
        InterlockedExchange (0x417570, 0);
    }
    if (*(0x417594) != 0) {
        eax = fcn_0041119f ();
        if (eax == 0) {
            goto label_3;
        }
        uint32_t (*0x417594)(uint32_t, uint32_t, uint32_t) (0, 2, 0);
    }
label_3:
    _CrtSetCheckCount (1);
    ecx = *(sym.imp.MSVCR90D.dll___initenv);
    edx = *(0x417148);
    *(ecx) = edx;
    eax = *(0x417148);
    ecx = *(0x41714c);
    edx = *(0x417144);
    eax = fcn_0041116d (edx, ecx);
    *(0x41715c) = eax;
    if (*(0x417150) == 0) {
        eax = *(0x41715c);
        exit (rdi);
    }
    if (*(0x417160) == 0) {
        _cexit ();
    }
    *((ebp - 4)) = 0xfffffffe;
    eax = *(0x41715c);
label_1:
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411168 */
#include <stdint.h>
 
void fcn_00411168 (int32_t arg_4h) {
    return void (*0x411990)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411990 */
#include <stdint.h>
 
void loc_00411990 (int32_t arg_4h) {
    if (? == ?) {
        return;
    }
    eax = *((ebp + 4));
    fcn_004111e0 (eax, 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4111e0 */
#include <stdint.h>
 
void fcn_004111e0 (int32_t arg_8h, int32_t arg_ch) {
    return void (*0x412380)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412380 */
#include <stdint.h>
 
int32_t loc_00412380 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 0xc));
    if (eax <= 4) {
        ecx = *((eax*4 + 0x417008));
        edx = *((eax*4 + 0x415b64));
        if (ecx != -1) {
            eax = *((ebp + 8));
            fcn_004123f0 (eax, ecx, eax, edx);
        }
        return eax;
    }
    edx = "Unknown Runtime Check Error\n\r";
    eax = 5;
    eax = *((ebp + 8));
    ecx = 1;
    fcn_004123f0 (eax, ecx, eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4123f0 */
#include <stdint.h>
 
int32_t fcn_004123f0 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_e3ch;
    uint32_t var_e38h;
    char * var_e34h;
    char * var_e30h;
    int32_t var_e2ch;
    int32_t var_a2ch;
    int32_t var_720h;
    int32_t var_414h;
    int32_t var_20ch;
    int32_t var_4h;
    eax = *(section..data);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    ebx = *((ebp + 8));
    edi = *((ebp + 0x14));
    *((ebp - 0xe3c)) = edi;
    *((ebp - 0xe38)) = 0;
    eax = fcn_0041103c ();
    *((ebp - 0xe30)) = eax;
    if (eax == 0) {
        eax = fcn_00411203 ();
        *((ebp - 0xe38)) = eax;
    }
    eax = MultiByteToWideChar (0xfde9, 0, edi, 0xffffffffffffffff, 0, 0);
    if (eax < 0x200) {
        eax = void (*esi)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (0xfde9, 0, edi, 0xffffffffffffffff, ebp - 0xe2c, eax);
        if (eax != 0) {
            ecx = ebp - 0xe2c;
            *((ebp - 0xe34)) = ecx;
        }
    } else {
        *((ebp - 0xe34)) = "Runtime Check Error.\n\r Unable to display RTC Message.";
    }
    eax = fcn_004122d0 ();
    edi = *((ebp + 0x10));
    if (eax != 0) {
        edx = *((ebp - 0xe34));
        eax = *((edi*4 + 0x415b7c));
        eax = fcn_00412680 ();
        if (eax != 0) {
            goto label_0;
        }
        al = 0;
    } else {
        al = 1;
    }
    esi = *((ebp - 0xe30));
    if (*((ebp - 0xe38)) == 0) {
        if (esi == 0) {
            goto label_1;
        }
    }
    if (al != 0) {
        eax = IsDebuggerPresent ();
        if (eax != 0) {
            goto label_1;
        }
    }
    ebx += 0xfffffffb;
    fcn_00411190 (ebx, ebp - 0x20c, 0x104, ebp - 0xe30, ebp - 0x414, 0x104);
    if (esi != 0) {
        ecx = *((ebp - 0xe34));
        eax = *((ebp - 0xe30));
        edx = *((ebp + 0xc));
        void (*esi)(uint32_t, uint32_t, uint32_t, uint32_t, char*, uint32_t, uint32_t) (edx, ebp - 0x20c, eax, ebp - 0x414, "Run-Time Check Failure #%d - %s", edi, ecx);
    } else {
        ebx = "Unknown Filename";
        eax = WideCharToMultiByte (0xfde9, 0, ebp - 0x20c, 0xffffffffffffffff, ebp - 0xa2c, 0x30a, 0, 0);
        if (eax != 0) {
            ebx = ebp - 0xa2c;
        }
        esi = "Unknown Module Name";
        eax = void (*edi)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (0xfde9, 0, ebp - 0x414, 0xffffffffffffffff, ebp - 0x720, 0x30a, 0, 0);
        if (eax != 0) {
            esi = ebp - 0x720;
        }
        ecx = *((ebp - 0xe3c));
        edx = *((ebp + 0x10));
        eax = *((ebp - 0xe30));
        ecx = *((ebp + 0xc));
        eax = uint32_t (*ebp - 0xe38)(uint32_t, uint32_t, uint32_t, uint32_t, char*, uint32_t, uint32_t) (ecx, ebx, eax, esi, "Run-Time Check Failure #%d - %s", edx, ecx);
    }
    if (eax == 1) {
label_1:
        DebugBreak ();
    }
label_0:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00411023 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110aa */
#include <stdint.h>
 
void fcn_004110aa (void) {
    return void (*0x41195e)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41195e */
#include <stdint.h>
 
void strcat (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110be */
#include <stdint.h>
 
void fcn_004110be (void) {
    return void (*0x411958)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411958 */
#include <stdint.h>
 
void strlen (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110c8 */
#include <stdint.h>
 
void fcn_004110c8 (void) {
    return void (*0x411952)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411952 */
#include <stdint.h>
 
void strcpy (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411096 */
#include <stdint.h>
 
int32_t fcn_00411096 (int32_t arg_4h) {
    int32_t var_4h;
    edi = 0;
    esi = edx;
    ebx = ecx;
    *((ebp - 4)) = edi;
    if (*(esi) <= edi) {
        goto label_0;
    }
    do {
        eax = *((esi + 4));
        ecx = *((eax + edi));
        eax += edi;
        if (*((ecx + ebx - 4)) == 0xcccccccc) {
            edx = *((eax + 4));
            edx += ecx;
            if (*((edx + ebx)) == 0xcccccccc) {
                goto label_1;
            }
        }
        eax = *((esi + 4));
        ecx = *((eax + edi + 8));
        edx = *((ebp + 4));
        fcn_004110f0 (edx, ecx);
label_1:
        eax = *((ebp - 4));
        eax++;
        edi += 0xc;
        *((ebp - 4)) = eax;
    } while (eax < *(esi));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411023 */
#include <stdint.h>
 
void fcn_00411023 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    return void (*0x411970)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411970 */
#include <stdint.h>
 
int32_t loc_00411970 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    do {
        goto label_0;
        if (ecx == *(section..data)) {
            return;
        }
    } while (1);
label_0:
    *(0x417278) = eax;
    *(0x417274) = ecx;
    *(0x417270) = edx;
    *(0x41726c) = ebx;
    *(0x417268) = esi;
    *(0x417264) = edi;
    *(0x417290) = ss;
    *(0x417284) = cs;
    *(0x417260) = ds;
    *(0x41725c) = es;
    *(0x417258) = fs;
    *(0x417254) = gs;
    __asm ("pushfd");
    eax = *(ebp);
    *(0x41727c) = eax;
    eax = *((ebp + 4));
    *(0x417280) = eax;
    eax = ebp + 8;
    *(0x41728c) = eax;
    eax = *((ebp - 0x320));
    *(0x4171c8) = 0x10001;
    eax = *(0x417280);
    *(0x41717c) = eax;
    *(0x417170) = 0xc0000409;
    *(0x417174) = 1;
    ecx = *(section..data);
    *((ebp - 0x328)) = ecx;
    edx = *(0x417004);
    *((ebp - 0x324)) = edx;
    eax = IsDebuggerPresent ();
    *(0x4171c0) = eax;
    fcn_004110ff ();
    SetUnhandledExceptionFilter (0);
    UnhandledExceptionFilter (0x415838);
    if (*(0x4171c0) == 0) {
        fcn_004110ff ();
    }
    eax = GetCurrentProcess (0xc0000409);
    TerminateProcess (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110ff */
#include <stdint.h>
 
void fcn_004110ff (void) {
    return void (*0x4133f4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4133f4 */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411860 */
#include <stdint.h>
 
int32_t fcn_00411860 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_c0h;
    edi = ebp - 0xc0;
    ecx = 0x30;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    esi = esp;
    eax = *((ebp + 0xc));
    ecx = *((ebp + 8));
    _stat64i32 (ecx, eax, edi, esi, ebx);
    fcn_00411168 ();
    fcn_00411168 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110c3 */
#include <stdint.h>
 
void fcn_004110c3 (void * arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_20h) {
    uint32_t var_138h;
    int32_t var_70h;
    int32_t var_64h;
    char * s;
    char * var_4fh;
    int32_t var_4h;
    edi = ebp - 0x138;
    ecx = 0x4e;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    eax = *(section..data);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    esi = esp;
    eax = *((ebp + 0xc));
    sprintf (ebp - 0x58, "%08lX:", eax, edi, esi, ebx);
    fcn_00411168 ();
    if (*((ebp + 0x10)) > 0x10) {
        *((ebp + 0x10)) = 0x10;
    }
    *((ebp - 0x64)) = 0;
    while (1) {
        eax = *((ebp - 0x64));
        eax++;
        *((ebp - 0x64)) = eax;
        eax = *((ebp - 0x64));
        if (eax >= *((ebp + 0x10))) {
            goto label_0;
        }
        eax = *((ebp + 8));
        eax += *((ebp - 0x64));
        ecx = *(eax);
        esi = esp;
        edx = *((ebp - 0x64));
        edx *= 3;
        sprintf (ebp + edx - 0x4f, " %02lX", ecx);
        fcn_00411168 ();
    }
    do {
label_0:
        eax = *((ebp - 0x64));
        ecx = *((ebp - 0x64));
        ecx++;
        *((ebp - 0x64)) = ecx;
        if (eax < 0x10) {
            *((ebp - 0x138)) = 1;
        } else {
            *((ebp - 0x138)) = 0;
        }
        if (*((ebp - 0x138)) == 0) {
            goto label_1;
        }
        eax = ebp - 0x58;
        fcn_004110aa ();
    } while (1);
label_1:
    eax = ebp - 0x58;
    eax = fcn_004110be ();
    *((ebp - 0x70)) = eax;
    eax = *((ebp - 0x70));
    ecx = ebp + eax - 0x58;
    fcn_004110c8 ();
    eax = *((ebp - 0x70));
    eax += 3;
    *((ebp - 0x70)) = eax;
    *((ebp - 0x64)) = 0;
    while (1) {
        eax = *((ebp - 0x64));
        eax++;
        *((ebp - 0x64)) = eax;
        eax = *((ebp - 0x64));
        if (eax >= *((ebp + 0x10))) {
            goto label_2;
        }
        eax = *((ebp + 8));
        eax += *((ebp - 0x64));
        ecx = *(eax);
        if (ecx >= 0x20) {
            edx = *((ebp + 8));
            edx += *((ebp - 0x64));
            eax = *(edx);
            if (eax <= 0x7e) {
                ecx = *((ebp + 8));
                ecx += *((ebp - 0x64));
                edx = *(ecx);
                *((ebp - 0x138)) = edx;
            }
        } else {
            *((ebp - 0x138)) = 0x2e;
        }
        eax = *((ebp - 0x70));
        eax += *((ebp - 0x64));
        cl = *((ebp - 0x138));
        *((ebp + eax - 0x58)) = cl;
    }
    do {
label_2:
        if (*((ebp - 0x64)) >= 0x10) {
            goto label_3;
        }
        eax = *((ebp - 0x70));
        eax += *((ebp - 0x64));
        *((ebp + eax - 0x58)) = 0x20;
        ecx = *((ebp - 0x64));
        ecx++;
        *((ebp - 0x64)) = ecx;
    } while (1);
label_3:
    eax = *((ebp - 0x70));
    ecx = ebp + eax - 0x58;
    ecx += *((ebp - 0x64));
    fcn_004110c8 ();
    esi = esp;
    eax = ebp - 0x58;
    printf (rdi);
    eax = fcn_00411168 ();
    ecx = ebp;
    edx = 0x411600;
    fcn_00411096 (eax);
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00411023 ();
    fcn_00411168 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411163 */
#include <stdint.h>
 
void fcn_00411163 (char * filename) {
    int32_t var_138h;
    uint32_t var_74h;
    int32_t var_68h;
    uint32_t var_54h;
    FILE * stream;
    int32_t var_24h;
    void * ptr;
    int32_t var_4h;
    edi = ebp - 0x138;
    ecx = 0x4e;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    eax = *(section..data);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    ecx = *((ebp + 8));
    eax = fcn_00411860 (ecx, ebp - 0x68);
    if (eax != 0) {
        esi = esp;
        eax = *((ebp + 8));
        perror (rdi);
        fcn_00411168 ();
        eax = 1;
        goto label_0;
    }
    eax = *((ebp + 8));
    fopen (rdi, esp);
    eax = fcn_00411168 ();
    *((ebp - 0x30)) = eax;
    if (*((ebp - 0x30)) == 0) {
        esi = esp;
        eax = *((ebp + 8));
        perror (rdi);
        fcn_00411168 ();
        eax = 1;
        goto label_0;
    }
    *((ebp - 0x24)) = 0;
    do {
        eax = *((ebp - 0x24));
        if (eax >= *((ebp - 0x54))) {
            goto label_1;
        }
        eax = *((ebp - 0x30));
        fread (rdi, esp, rdx, ebp - 0x18);
        eax = fcn_00411168 ();
        *((ebp - 0x74)) = eax;
        if (*((ebp - 0x74)) == 0) {
        } else {
            eax = *((ebp - 0x74));
            ecx = *((ebp - 0x24));
            fcn_004110c3 (ebp - 0x18, ecx, eax);
            eax = *((ebp - 0x24));
            eax += *((ebp - 0x74));
            *((ebp - 0x24)) = eax;
        }
    } while (1);
label_1:
    esi = esp;
    eax = *((ebp - 0x30));
    fclose (rdi);
    eax = fcn_00411168 ();
    eax = 0;
label_0:
    ecx = ebp;
    edx = 0x4117dc;
    fcn_00411096 (eax);
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00411023 ();
    fcn_00411168 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110f0 */
#include <stdint.h>
 
int32_t fcn_004110f0 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_408h;
    int32_t var_404h;
    int32_t var_4h;
    eax = *(section..data);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x408)) = eax;
    eax = *((ebp + 0xc));
    if (*(0x417010) == -1) {
        goto label_0;
    }
    if (*(eax) == 0) {
        goto label_1;
    }
    ecx = eax;
    esi = ecx + 1;
    do {
        dl = *(ecx);
        ecx++;
    } while (dl != 0);
    ecx -= esi;
    ecx += 0x2d;
    if (ecx > 0x400) {
        goto label_1;
    }
    ebx = ebp - 0x404;
    ecx = 0;
    do {
        dl = *((ecx + str.Stack_around_the_variable_));
        *((ebp + ecx - 0x404)) = dl;
        ecx++;
    } while (dl != 0);
    edx = eax;
    do {
        cl = *(eax);
        eax++;
    } while (cl != 0);
    edi = ebp - 0x404;
    eax -= edx;
    edi--;
    do {
        cl = *((edi + 1));
        edi++;
    } while (cl != 0);
    ecx = eax;
    ecx >>= 2;
    esi = edx;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = eax;
    ecx &= 3;
    eax = ' was corrupted.";
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    ecx = eax;
    do {
        dl = *(eax);
        eax++;
    } while (dl != 0);
    edi = ebp - 0x404;
    eax -= ecx;
    esi = ecx;
    edi--;
    do {
        cl = *((edi + 1));
        edi++;
    } while (cl != 0);
    ecx = eax;
    ecx >>= 2;
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    ecx = eax;
    ecx &= 3;
    *(es:edi) = *(esi);
    ecx--;
    esi++;
    es:edi++;
    goto label_2;
label_1:
    ebx = "Stack corrupted near unknown variable";
label_2:
    eax = *(0x417010);
    ecx = *((ebp - 0x408));
    fcn_004123f0 (ecx, eax, 2, ebx);
label_0:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00411023 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4111e5 */
#include <stdint.h>
 
void fcn_004111e5 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_144h;
    int32_t var_140h;
    int32_t var_4ch;
    int32_t var_18h;
    int32_t var_4h;
    return void (*0x412890)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412890 */
#include <stdint.h>
 
int32_t loc_00412890 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_144h;
    LPCSTR lpString;
    int32_t var_4ch;
    int32_t var_18h;
    int32_t var_4h;
    eax = *(section..data);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    ebx = *(0x417018);
    esi = *((ebp + 0xc));
    edi = *((ebp + 8));
    *((ebp - 0x144)) = edi;
    if (ebx != -1) {
        eax = LoadLibraryA ("user32.dll");
        if (eax != 0) {
            eax = GetProcAddress (eax, "wsprintfA");
            *(0x417534) = eax;
            if (esi == 0) {
                goto label_0;
            }
            if (eax == 0) {
                goto label_0;
            }
            ecx = *((ebp + 0x10));
            edx = *((esi + 0xc));
            edx -= 0x24;
            ecx = ebp - 0x140;
            void (*eax)(uint32_t, char*, char*, char*, uint32_t, char*, uint32_t, char*, uint32_t, char*) (ecx, "%s%s%p%s%ld%s%d%s", "Stack area around _alloca memory reserved by this function is corrupted", "\nAddress: 0x", esi + 0x20, "\nSize: ", edx, "\nAllocation number within this function: ", ecx, "\nData: <");
            edx = *((esi + 0xc));
            edx -= 0x24;
            fcn_00412a10 (ebp - 0x18, ebp - 0x4c, edi, edx);
            lstrlenA (ebp - 0x140, "%s%s%s%s", ebp - 0x18, 0x415de4, ebp - 0x4c, 0x415de8);
            uint32_t (*0x417534)(uint32_t) (ebp + eax - 0x140);
            ecx = *((ebp - 0x144));
            fcn_004123f0 (ecx, ebx, 4, ebp - 0x140);
            ecx = *((ebp - 4));
            ecx ^= ebp;
            fcn_00411023 ();
            return eax;
        }
label_0:
        fcn_004123f0 (edi, ebx, 4, "Stack area around _alloca memory reserved by this function is corrupted\n");
    }
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00411023 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412a10 */
#include <stdint.h>
 
int32_t fcn_00412a10 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0xc));
    esi = *((ebp + 8));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    edi = 0;
    eax -= esi;
    *((ebp - 8)) = eax;
    do {
        ecx = *((ebp + 0x14));
        if (ecx >= 0x10) {
            ecx = 0x10;
        }
        if (edi >= ecx) {
            goto label_0;
        }
        bl = *((eax + esi));
        edx = *((ebp - 4));
        ecx = (int32_t) bl;
        uint32_t (*0x417534)(uint32_t, char*, uint32_t) (edx, "%.2X ", ecx);
        *((ebp - 4)) += 3;
        eax = *((ebp - 8));
        *(esi) = bl;
        edi++;
        esi++;
    } while (1);
label_0:
    ecx = *((ebp + 0xc));
    eax = *((ebp + 8));
    edx = ecx + edi*2;
    *((edi + eax)) = 0;
    *((edi + edx)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411195 */
#include <stdint.h>
 
void fcn_00411195 (void) {
    return void (*0x412ca6)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412ca6 */
#include <stdint.h>
 
void _CRT_RTC_INITW (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411113 */
#include <stdint.h>
 
void fcn_00411113 (int32_t arg_8h) {
    return void (*0x412c60)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412c60 */
#include <stdint.h>
 
int32_t loc_00412c60 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    eax = *(0x41753c);
    *(0x41753c) = ecx;
    *(0x417538) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412060 */
#include <stdint.h>
 
int32_t fcn_00412060 (void) {
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    *((ebp - 4)) = 0x400000;
    eax = *((ebp - 4));
    ecx = *(eax);
    if (ecx != 0x5a4d) {
        eax = 0;
    } else {
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax += *((edx + 0x3c));
        *((ebp - 8)) = eax;
        ecx = *((ebp - 8));
        if (*(ecx) != 0x4550) {
            eax = 0;
        } else {
            edx = *((ebp - 8));
            edx += 0x18;
            *((ebp - 0xc)) = edx;
            eax = *((ebp - 0xc));
            ecx = *(eax);
            *((ebp - 0x14)) = ecx;
            if (*((ebp - 0x14)) != 0x10b) {
                if (*((ebp - 0x14)) != 0x20b) {
                } else {
                    edx = *((ebp - 0xc));
                    if (*((edx + 0x5c)) <= 0xe) {
                        eax = 0;
                        goto label_0;
                    }
                    eax = *((ebp - 0xc));
                    ecx = 0;
                    cl = (*((eax + 0xd0)) != 0) ? 1 : 0;
                    eax = ecx;
                    goto label_0;
                }
                edx = *((ebp - 0xc));
                *((ebp - 0x10)) = edx;
                eax = *((ebp - 0x10));
                if (*((eax + 0x6c)) <= 0xe) {
                    eax = 0;
                    goto label_0;
                }
                ecx = *((ebp - 0x10));
                eax = 0;
                al = (*((ecx + 0xe0)) != 0) ? 1 : 0;
                goto label_0;
            }
            eax = 0;
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411172 */
#include <stdint.h>
 
int32_t fcn_00411172 (void) {
    esi = 0x4164a0;
    eax = 0x4164a0;
    if (eax >= 0x4166a4) {
        goto label_0;
    }
    do {
        eax = *(esi);
        if (eax != 0) {
            void (*eax)() ();
        }
        esi += 4;
    } while (esi < 0x4166a4);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41100a */
#include <stdint.h>
 
void fcn_0041100a (void) {
    return void (*0x412df0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412df0 */
#include <stdint.h>
 
int32_t loc_00412df0 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411005 */
#include <stdint.h>
 
void fcn_00411005 (void) {
    return void (*0x412d50)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412d50 */
#include <stdint.h>
 
uint32_t loc_00412d50 (void) {
    eax = fcn_0041117c ();
    fcn_0041112c (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41117c */
#include <stdint.h>
 
void fcn_0041117c (void) {
    return void (*0x4139c2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4139c2 */
#include <stdint.h>
 
void _controlfp_s (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41112c */
#include <stdint.h>
 
int32_t fcn_0041112c (uint32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    if (*((ebp + 8)) == 0) {
    } else {
        eax = *((ebp + 0x1c));
        ecx = *((ebp + 0x18));
        edx = *((ebp + 0x14));
        eax = *((ebp + 0x10));
        ecx = *((ebp + 0xc));
        fcn_0041118b ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411073 */
#include <stdint.h>
 
void fcn_00411073 (int32_t arg_8h) {
    return void (*0x412fc0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412fc0 */
#include <stdint.h>
 
int32_t loc_00412fc0 (int32_t arg_8h) {
    eax = *((ebp + 8));
    eax = fcn_00411118 (eax);
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411118 */
#include <stdint.h>
 
int32_t fcn_00411118 (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    eax = *(fs:0);
    eax = *(section..data);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    eax = *(0x417584);
    eax = _decode_pointer (eax, eax, edi, esi, ebx);
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) == -1) {
        ecx = *((ebp + 8));
        _onexit (ecx);
    } else {
        fcn_0041108c ();
        *((ebp - 4)) = 0;
        edx = *(0x417584);
        eax = _decode_pointer (edx);
        *((ebp - 0x1c)) = eax;
        eax = *(0x417574);
        eax = _decode_pointer (eax);
        *((ebp - 0x24)) = eax;
        eax = *((ebp + 8));
        eax = _encode_pointer (eax, ebp - 0x1c, ebp - 0x24);
        eax = fcn_004111f4 ();
        *((ebp - 0x20)) = eax;
        ecx = *((ebp - 0x1c));
        eax = _encode_pointer (ecx);
        *(0x417584) = eax;
        edx = *((ebp - 0x24));
        eax = _encode_pointer (edx);
        *(0x417574) = eax;
        *((ebp - 4)) = 0xfffffffe;
        fcn_00412f55 ();
        eax = *((ebp - 0x20));
    }
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4111a9 */
#include <stdint.h>
 
void fcn_004111a9 (void) {
    return void (*0x412ff0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412ff0 */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41111d */
#include <stdint.h>
 
void fcn_0041111d (void) {
    return void (*0x412050)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412050 */
#include <stdint.h>
 
int32_t loc_00412050 (void) {
    eax = *(fs:0x18);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4111fe */
#include <stdint.h>
 
void fcn_004111fe (void) {
    return void (*0x4133b2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4133b2 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110b9 */
#include <stdint.h>
 
void fcn_004110b9 (void) {
    return void (*0x4133ac)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4133ac */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41119f */
#include <stdint.h>
 
int32_t fcn_0041119f (void) {
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
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
    *((ebp - 0x1c)) = 0x400000;
    *((ebp - 4)) = 0;
    eax = *((ebp - 0x1c));
    eax = fcn_00411104 (eax);
    if (eax == 0) {
        *((ebp - 0x2c)) = 0;
        *((ebp - 4)) = 0xfffffffe;
        eax = *((ebp - 0x2c));
    } else {
        ecx = *((ebp + 8));
        ecx -= *((ebp - 0x1c));
        *((ebp - 0x24)) = ecx;
        edx = *((ebp - 0x24));
        eax = *((ebp - 0x1c));
        eax = fcn_004110e1 (eax, edx);
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x20)) == 0) {
            *((ebp - 0x30)) = 0;
            *((ebp - 4)) = 0xfffffffe;
            eax = *((ebp - 0x30));
        } else {
            ecx = *((ebp - 0x20));
            edx = *((ecx + 0x24));
            edx &= 0x80000000;
            edx = -edx;
            edx -= edx;
            edx++;
            *((ebp - 0x34)) = edx;
            *((ebp - 4)) = 0xfffffffe;
            eax = *((ebp - 0x34));
        }
    }
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41116d */
#include <stdint.h>
 
int32_t fcn_0041116d (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_d8h;
    int32_t var_14h;
    int32_t var_8h;
    edi = ebp - 0xd8;
    ecx = 0x36;
    eax = 0xcccccccc;
    memset (edi, eax, ecx);
    *((ebp - 0x14)) = 0;
    *((ebp - 8)) = 1;
    while (1) {
        eax = *((ebp - 8));
        eax++;
        *((ebp - 8)) = eax;
        eax = *((ebp - 8));
        if (eax >= *((ebp + 8))) {
            goto label_0;
        }
        eax = *((ebp - 8));
        ecx = *((ebp + 0xc));
        edx = *((ecx + eax*4));
        eax = fcn_00411163 (edx);
        eax += *((ebp - 0x14));
        *((ebp - 0x14)) = eax;
    }
label_0:
    eax = *((ebp - 0x14));
    fcn_00411168 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4111ae */
#include <stdint.h>
 
void fcn_004111ae (void) {
    return void (*0x413118)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x413118 */
#include <stdint.h>
 
void _XcptFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4122d0 */
#include <stdint.h>
 
int32_t fcn_004122d0 (void) {
    ULONG_PTR * lpArguments;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_19h;
    int32_t var_18h;
    int32_t var_4h;
    int32_t var_8h_2;
    DWORD dwExceptionFlags;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *(section..data);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    *((ebp - 0x18)) = esp;
    eax = 0;
    *((ebp - 0x19)) = al;
    *((ebp - 0x34)) = 0x1001;
    ecx = *((ebp + 8));
    *((ebp - 0x30)) = ecx;
    edx = ebp - 0x19;
    *((ebp - 0x2c)) = edx;
    *((ebp - 4)) = eax;
    RaiseException (0x406d1388, eax, 6, ebp - 0x34, eax, edi, esi, ebx, eax, 0x411087, 0x416ad8, 0xfffffffffffffffe);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41103c */
#include <stdint.h>
 
void fcn_0041103c (void) {
    return void (*0x412ca0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412ca0 */
#include <stdint.h>
 
int32_t loc_00412ca0 (void) {
    eax = *(0x41753c);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411203 */
#include <stdint.h>
 
void fcn_00411203 (void) {
    return void (*0x412c90)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412c90 */
#include <stdint.h>
 
int32_t loc_00412c90 (void) {
    eax = *(0x417538);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412680 */
#include <stdint.h>
 
int32_t fcn_00412680 (void) {
    ULONG_PTR * lpArguments;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_19h;
    int32_t var_18h;
    int32_t var_4h;
    int32_t var_8h_2;
    int32_t var_ch;
    int32_t var_10h_2;
    int32_t var_14h;
    DWORD dwExceptionFlags;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *(section..data);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    *((ebp - 0x18)) = esp;
    eax = 0;
    *((ebp - 0x19)) = al;
    *((ebp - 0x34)) = 0x1002;
    ecx = *((ebp + 8));
    *((ebp - 0x30)) = ecx;
    edx = *((ebp + 0xc));
    *((ebp - 0x2c)) = edx;
    ecx = *((ebp + 0x10));
    *((ebp - 0x28)) = ecx;
    edx = ebp - 0x19;
    *((ebp - 0x24)) = edx;
    ecx = *((ebp + 0x14));
    *((ebp - 0x20)) = ecx;
    *((ebp - 4)) = eax;
    RaiseException (0x406d1388, eax, 6, ebp - 0x34, eax, edi, esi, ebx, eax, 0x411087, 0x416af8, 0xfffffffffffffffe);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411190 */
#include <stdint.h>
 
int32_t fcn_00411190 (LPCVOID lpAddress, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, LPWSTR lpFilename, DWORD nSize) {
    PMEMORY_BASIC_INFORMATION lpBuffer;
    HMODULE hModule;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 0x14));
    edx = *((ebp + 0xc));
    esi = *((ebp + 8));
    *(eax) = 0;
    ecx = 0;
    esi--;
    *(edx) = cx;
    eax = VirtualQuery (esi, ebp - 0x44, 0x1c, esi);
    while (eax == 0) {
label_0:
        eax = 0;
        return eax;
        ecx = *((ebp + 0x1c));
        edx = *((ebp + 0x18));
        eax = *((ebp - 0x40));
        eax = GetModuleFileNameW (eax, edx, ecx);
    }
    edx = *((ebp - 0x40));
    ecx = 0x5a4d;
    if (*(edx) != cx) {
        goto label_0;
    }
    eax = *((edx + 0x3c));
    if (eax <= 0) {
        goto label_0;
    }
    eax += edx;
    if (*(eax) != 0x4550) {
        goto label_0;
    }
    ecx = *((eax + 6));
    edi = *((eax + 0x14));
    eax = edi + eax + 0x18;
    esi -= edx;
    edi = 0;
    ebx = 0;
    if (ecx <= 0) {
        goto label_1;
    }
    eax += 0xc;
    do {
        edx = *(eax);
        if (esi >= edx) {
            edi = esi;
            edi -= edx;
            if (esi < *((eax - 4))) {
                goto label_1;
            }
        }
        ebx++;
        eax += 0x28;
    } while (ebx < ecx);
label_1:
    if (ebx != ecx) {
        ebx++;
        if (*(0x417558) == 0) {
            if (*(0x417554) != 0) {
                goto label_2;
            }
            eax = fcn_00413770 ();
            *(0x417554) = eax;
            if (eax == 0) {
                goto label_2;
            }
            *(0x417558) = 1;
        } else {
            eax = *(0x417554);
        }
        eax = GetProcAddress (eax, "PDBOpenValidate5");
        esi = 0;
        if (eax == esi) {
            goto label_2;
        }
        edx = *((ebp + 0x18));
        eax = void (*eax)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (edx, esi, esi, esi, ebp - 0x28, esi, esi, ebp - 0x10);
        if (eax != 0) {
            goto label_3;
        }
    }
label_2:
    eax = 0;
    return eax;
label_3:
    ecx = *((ebp - 0x10));
    eax = *(ecx);
    edx = *(eax);
    *((ebp - 0x1c)) = esi;
    eax = void (*edx)() ();
    if (eax != 0x131a5b5) {
        goto label_4;
    }
    ecx = *((ebp - 0x10));
    eax = *(ecx);
    eax = *((eax + 0x1c));
    eax = void (*eax)(uint32_t, uint32_t, uint32_t) (esi, 0x416154, ebp - 0x18);
    if (eax == 0) {
        goto label_4;
    }
    ecx = *((ebp - 0x18));
    edx = *(ecx);
    edx = *((edx + 0x20));
    eax = void (*edx)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (ebx, edi, ebp - 0xc, esi, esi, esi);
    if (eax == 0) {
        goto label_5;
    }
    ecx = *((ebp - 0xc));
    *((ebp - 4)) = esi;
    eax = *(ecx);
    eax = *((eax + 0x68));
    al = void (*eax)(uint32_t) (ebp - 4);
    if (al == 0) {
        goto label_6;
    }
    ecx = *((ebp - 4));
    if (ecx == esi) {
        goto label_6;
    }
    edx = *(ecx);
    eax = *((edx + 8));
    eax = void (*eax)() ();
    if (eax == 0) {
        goto label_7;
    }
    do {
        ecx = *((ebp - 4));
        edx = *(ecx);
        edx = *((edx + 0xc));
        al = void (*edx)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (0, ebp - 0x14, ebp + 8, ebp - 0x20, ebp - 8, 0);
        if (al == 0) {
            goto label_8;
        }
        eax = *((ebp + 8));
        if (eax == ebx) {
            eax = *((ebp - 0x14));
            if (eax > edi) {
                goto label_9;
            }
            ecx = *((ebp - 0x20));
            eax += ecx;
            if (edi < eax) {
                goto label_10;
            }
        }
label_9:
        ecx = *((ebp - 4));
        edx = *(ecx);
        eax = *((edx + 8));
        eax = void (*eax)() ();
    } while (eax != 0);
    goto label_7;
label_10:
    eax = *((ebp - 8));
    if (eax == 0) {
        goto label_8;
    }
    if (eax >= 0x1fffffff) {
        goto label_8;
    }
    eax = GetProcessHeap (0, eax*8);
    eax = HeapAlloc (eax);
    esi = eax;
    if (esi == 0) {
        goto label_8;
    }
    ecx = *((ebp - 4));
    edx = *(ecx);
    edx = *((edx + 0xc));
    al = void (*edx)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (ebp - 0x24, 0, 0, 0, ebp - 8, esi);
    if (al == 0) {
        goto label_7;
    }
    edi -= *((ebp - 0x14));
    if (edi < *(esi)) {
        goto label_7;
    }
    ecx = *((ebp - 8));
    eax = 1;
    if (ecx <= eax) {
        goto label_11;
    }
    do {
        if (edi < *((esi + eax*8))) {
            goto label_11;
        }
        eax++;
    } while (eax < ecx);
label_11:
    eax = *((esi + eax*8 - 4));
    ecx = *((ebp + 0x14));
    eax &= 0xffffff;
    *(ecx) = eax;
    ecx = *((ebp - 0xc));
    edx = *(ecx);
    edx = *((edx + 0x70));
    eax = *((ebp + 0xc));
    eax = *((ebp - 0x24));
    al = void (*edx)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) (eax, eax, ebp + 0x10, 0, 0, 0);
    if (al != 0) {
        *((ebp - 0x1c)) = 1;
    }
label_7:
    eax = GetProcessHeap (0, esi);
    HeapFree (eax);
label_8:
    ecx = *((ebp - 4));
    eax = *(ecx);
    edx = *(eax);
    void (*edx)() ();
label_6:
    ecx = *((ebp - 0xc));
    eax = *(ecx);
    edx = *((eax + 0x40));
    void (*edx)() ();
label_5:
    ecx = *((ebp - 0x18));
    eax = *(ecx);
    edx = *((eax + 0x38));
    void (*edx)() ();
label_4:
    ecx = *((ebp - 0x10));
    eax = *(ecx);
    edx = *((eax + 0x28));
    void (*edx)() ();
    eax = *((ebp - 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110a5 */
#include <stdint.h>
 
void fcn_004110a5 (void) {
    return void (*0x4139bc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4139bc */
#include <stdint.h>
 
void void_cdecl_terminate_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41118b */
#include <stdint.h>
 
void fcn_0041118b (void) {
    return void (*0x4139c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4139c8 */
#include <stdint.h>
 
void _invoke_watson (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41108c */
#include <stdint.h>
 
void fcn_0041108c (void) {
    return void (*0x4139da)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4139da */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4111f4 */
#include <stdint.h>
 
void fcn_004111f4 (void) {
    return void (*0x4139d4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4139d4 */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x412f55 */
#include <stdint.h>
 
void fcn_00412f55 (void) {
    fcn_0041114f ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x41114f */
#include <stdint.h>
 
void fcn_0041114f (void) {
    return void (*0x4139ce)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4139ce */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x411104 */
#include <stdint.h>
 
int32_t fcn_00411104 (int32_t arg_8h) {
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    ecx = *((ebp - 8));
    edx = *(ecx);
    if (edx != 0x5a4d) {
        eax = 0;
    } else {
        eax = *((ebp - 8));
        ecx = *((ebp - 8));
        ecx += *((eax + 0x3c));
        *((ebp - 0xc)) = ecx;
        edx = *((ebp - 0xc));
        if (*(edx) != 0x4550) {
            eax = 0;
        } else {
            eax = *((ebp - 0xc));
            eax += 0x18;
            *((ebp - 4)) = eax;
            ecx = *((ebp - 4));
            edx = *(ecx);
            if (edx != 0x10b) {
                eax = 0;
            } else {
                eax = 1;
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4110e1 */
#include <stdint.h>
 
int32_t fcn_004110e1 (int32_t arg_8h, uint32_t arg_ch) {
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    ecx = *((ebp + 8));
    ecx += *((eax + 0x3c));
    *((ebp - 4)) = ecx;
    *((ebp - 8)) = 0;
    edx = *((ebp - 4));
    eax = *((edx + 0x14));
    ecx = *((ebp - 4));
    edx = ecx + eax + 0x18;
    *((ebp - 0xc)) = edx;
    while (1) {
        eax = *((ebp - 8));
        eax++;
        *((ebp - 8)) = eax;
        ecx = *((ebp - 0xc));
        ecx += 0x28;
        *((ebp - 0xc)) = ecx;
        edx = *((ebp - 4));
        eax = *((edx + 6));
        if (*((ebp - 8)) >= eax) {
            goto label_0;
        }
        ecx = *((ebp - 0xc));
        edx = *((ebp + 0xc));
        if (edx >= *((ecx + 0xc))) {
            eax = *((ebp - 0xc));
            ecx = *((eax + 0xc));
            edx = *((ebp - 0xc));
            ecx += *((edx + 8));
            if (*((ebp + 0xc)) >= ecx) {
                goto label_1;
            }
            eax = *((ebp - 0xc));
            goto label_2;
        }
label_1:
    }
label_0:
    eax = 0;
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4111c7 */
#include <stdint.h>
 
void fcn_004111c7 (void) {
    return void (*0x4139e6)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x4139e6 */
#include <stdint.h>
 
void _except_handler4_common (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe @ 0x413770 */
#include <stdint.h>
 
int32_t fcn_00413770 (void) {
    int32_t var_118h;
    LSTATUS var_114h;
    int32_t var_110h;
    int32_t var_10ch;
    LPCSTR lpLibFileName;
    int32_t var_4h;
    eax = *(section..data);
    eax ^= ebp;
    *((ebp - 4)) = eax;
    if (*(0x41755c) != 0) {
        eax = 0;
        ecx = *((ebp - 4));
        ecx ^= ebp;
        fcn_00411023 ();
        return eax;
    }
    eax = *(str.MSPDB80.DLL);
    *(0x41755c) = 1;
    eax = LoadLibraryA (eax, esi);
    if (eax != 0) {
        goto label_0;
    }
    eax = void (*esi)(char*) ("ADVAPI32.DLL");
    esi = eax;
    if (esi == 0) {
        ecx = *((ebp - 4));
        ecx ^= ebp;
        fcn_00411023 ();
        return eax;
    }
    eax = GetProcAddress (esi, "RegOpenKeyExA", ebx);
    *((ebp - 0x114)) = eax;
    if (eax == 0) {
        ecx = *((ebp - 4));
        ecx ^= ebp;
        fcn_00411023 ();
        return eax;
    }
    eax = void (*ebx)(uint32_t, char*, uint32_t) (esi, "RegQueryValueExA", edi);
    edi = eax;
    if (edi == 0) {
        goto label_1;
    }
    eax = void (*ebx)(uint32_t, char*) (esi, "RegCloseKey");
    ebx = eax;
    if (ebx == 0) {
        goto label_1;
    }
    eax = uint32_t (*ebp - 0x114)(uint32_t, char*, uint32_t, uint32_t, uint32_t) (0x80000002, "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS", 0, 1, ebp - 0x110);
    if (eax != 0) {
        goto label_2;
    }
    ecx = *((ebp - 0x110));
    eax = void (*edi)(uint32_t, char*, uint32_t, uint32_t, uint32_t, uint32_t) (ecx, "EnvironmentDirectory", 0, ebp - 0x118, eax, ebp - 0x10c);
    if (eax != 0) {
        goto label_2;
    }
    eax = *((ebp - 0x10c));
    edx = 0x7fffffff;
    edx -= eax;
    if (edx < 0xd) {
        goto label_2;
    }
    eax += 0xd;
    if (eax >= 0x104) {
        goto label_2;
    }
    eax = *((ebp - 0x110));
    eax = void (*edi)(uint32_t, char*, uint32_t, uint32_t, uint32_t, uint32_t) (eax, "EnvironmentDirectory", 0, ebp - 0x118, ebp - 0x108, ebp - 0x10c);
    ecx = *((ebp - 0x110));
    edi = eax;
    void (*ebx)(uint32_t) (ecx);
    FreeLibrary (esi);
    if (edi != 0) {
        goto label_1;
    }
    ecx = *((ebp - 0x10c));
    al = 0x5c;
    if (*((ebp + ecx - 0x10a)) != al) {
        *((ebp + ecx - 0x109)) = al;
    } else {
        ecx--;
        *((ebp - 0x10c)) = ecx;
    }
    esi = *(str.MSPDB80.DLL);
    eax = 0;
    ecx = ebp + ecx - 0x108;
    do {
        dl = *((esi + eax));
        *((ecx + eax)) = dl;
        eax++;
    } while (eax <= 0xb);
    LoadLibraryA (ebp - 0x108);
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00411023 ();
    return eax;
label_2:
    eax = FreeLibrary (esi);
label_1:
    eax = 0;
label_0:
    ecx = *((ebp - 4));
    ecx ^= ebp;
    fcn_00411023 ();
    return eax;
}
