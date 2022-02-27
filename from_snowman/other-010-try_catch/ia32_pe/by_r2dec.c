/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4013f6 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_14h;
    int32_t var_4h;
label_0:
    fcn_004018c0 (0x405148);
    ebx = 0;
    if (*(0x4064e4) == ebx) {
        HeapSetInformation (ebx, 1, ebx, ebx);
    }
    *((ebp - 4)) = ebx;
    eax = *(fs:0x18);
    esi = *((eax + 4));
    *((ebp - 0x1c)) = ebx;
    edi = 0x4064cc;
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
    eax = *(0x4064bc);
    if (eax == esi) {
        _amsg_exit (0x1f);
    } else {
        eax = *(0x4064bc);
        if (eax == 0) {
            *(0x4064bc) = esi;
            eax = _initterm_e (0x40430c, 0x404618);
            if (eax == 0) {
                goto label_3;
            }
            *((ebp - 4)) = 0xfffffffe;
            eax = 0xff;
            goto label_4;
        }
        *(0x406184) = esi;
    }
label_3:
    eax = *(0x4064bc);
    if (eax == esi) {
        _initterm (section..rdata, 0x404208);
        *(0x4064bc) = 2;
    }
    if (*((ebp - 0x1c)) == ebx) {
        InterlockedExchange (edi, ebx);
    }
    if (*(0x4064e8) != ebx) {
        eax = fcn_004017f0 ();
        if (eax == 0) {
            goto label_5;
        }
        uint32_t (*0x4064e8)(uint32_t, uint32_t, uint32_t) (ebx, 2, ebx);
    }
label_5:
    eax = *(0x40616c);
    ecx = *(sym.imp.MSVCR100.dll___initenv);
    *(ecx) = eax;
    eax = fcn_00401005 ();
    *(0x406180) = eax;
    if (*(0x406174) == ebx) {
        exit (rdi);
        eax = *((ebp - 0x14));
        ecx = *(eax);
        ecx = *(ecx);
        *((ebp - 0x20)) = ecx;
        _XcptFilter (ecx, eax);
        return eax;
    }
    if (*(0x406184) == ebx) {
        _cexit ();
    }
    *((ebp - 4)) = 0xfffffffe;
    eax = *(0x406180);
label_4:
    fcn_00401905 ();
    return eax;
    fcn_004019a0 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a42 */
#include <stdint.h>
 
int32_t main (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4010b8 */
#include <stdint.h>
 
void _CxxThrowException (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x40157c */
#include <stdint.h>
 
int32_t fcn_0040157c (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_004018c0 (0x405188);
    *((ebp - 0x1c)) = 0;
    esi = *((ebp + 0xc));
    eax = *((ebp + 0xc));
    eax *= *((ebp + 0x10));
    *((ebp + 8)) += eax;
    *((ebp - 4)) = 0;
    do {
        *((ebp + 0x10))--;
        if (*((ebp + 0x10)) < 0) {
            goto label_0;
        }
        *((ebp + 8)) -= esi;
        ecx = *((ebp + 8));
        uint32_t (*ebp + 0x14)() ();
    } while (1);
label_0:
    *((ebp - 0x1c)) = 1;
    *((ebp - 4)) = 0xfffffffe;
    fcn_004015c7 ();
    fcn_00401905 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401506 */
#include <stdint.h>
 
void void_cdecl_operator_delete_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a48 */
#include <stdint.h>
 
void public_void_thiscall_type_info::_type_info_dtor_internal_method_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4016dd */
#include <stdint.h>
 
uint32_t fcn_004016dd (int32_t arg_8h) {
    eax = fcn_0040163c (*((ebp + 8)));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x40163c */
#include <stdint.h>
 
uint32_t fcn_0040163c (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_004018c0 (0x4051a8);
    eax = DecodePointer (*(0x4064e0));
    *((ebp - 0x1c)) = eax;
    if (eax == -1) {
        _onexit (*((ebp + 8)));
    } else {
        _lock (8);
        *((ebp - 4)) = 0;
        eax = void (*esi)(uint32_t*) (*(0x4064e0));
        *((ebp - 0x1c)) = eax;
        eax = void (*esi)(uint32_t*) (*(0x4064d0));
        *((ebp - 0x20)) = eax;
        eax = EncodePointer (*((ebp + 8)), ebp - 0x1c, ebp - 0x20);
        eax = _dllonexit (eax);
        *((ebp - 0x24)) = eax;
        eax = EncodePointer (*((ebp - 0x1c)));
        *(0x4064e0) = eax;
        eax = EncodePointer (*((ebp - 0x20)));
        *(0x4064d0) = eax;
        *((ebp - 4)) = 0xfffffffe;
        fcn_004016d4 ();
        eax = *((ebp - 0x24));
    }
    fcn_00401905 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401630 */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4018c0 */
#include <stdint.h>
 
int32_t fcn_004018c0 (int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *((esp + 0x10));
    *((esp + 0x10)) = ebp;
    ebp = esp + 0x10;
    eax = *(0x406020);
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
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4018b2 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4018ac */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4017f0 */
#include <stdint.h>
 
int32_t fcn_004017f0 (void) {
    int32_t var_18h;
    int32_t var_10h_2;
    int32_t var_4h;
    int32_t var_8h_2;
    int32_t var_10h;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *(0x406020);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    *((ebp - 0x18)) = esp;
    *((ebp - 4)) = 0;
    eax = fcn_00401760 (0x400000);
    if (eax == 0) {
        void (*0x401891)() ();
    }
    eax = *((ebp + 8));
    eax -= 0x400000;
    eax = fcn_004017a0 (0x400000, eax);
    if (eax == 0) {
        void (*0x401891)() ();
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
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401760 */
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
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4017a0 */
#include <stdint.h>
 
int32_t fcn_004017a0 (int32_t arg_8h, int32_t arg_ch) {
    eax = *((ebp + 8));
    ecx = *((eax + 0x3c));
    ecx += eax;
    eax = *((ecx + 0x14));
    esi = *((ecx + 6));
    edx = 0;
    eax = eax + ecx + 0x18;
    if (esi == 0) {
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
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401005 */
#include <stdint.h>
 
int32_t fcn_00401005 (void) {
    char * var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_4h;
    int32_t var_ch;
    eax = *(fs:0);
    eax = *(0x406020);
    eax ^= ebp;
    eax = ebp - 0xc;
    *(fs:0) = eax;
    *((ebp - 0x10)) = esp;
    eax = 0;
    *((ebp - 0x14)) = eax;
    *((ebp - 4)) = eax;
    *((ebp - 0x14)) = 1;
    *((ebp - 0x18)) = "DRAMA!";
    _CxxThrowException (ebp - 0x18, 0x405080, eax, edi, esi, ebx, eax, 0x402d60, 0xffffffffffffffff);
    *((ebp - 0x14))++;
    *((ebp - 4)) = 0xffffffff;
    eax = 0x40106f;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x40174c */
#include <stdint.h>
 
void _XcptFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401905 */
#include <stdint.h>
 
void fcn_00401905 (void) {
    int32_t var_10h;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4016f4 */
#include <stdint.h>
 
int32_t fcn_004016f4 (void) {
    eax = 0x404c70;
    esi = 0x404d70;
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
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401997 */
#include <stdint.h>
 
int32_t fcn_00401997 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401965 */
#include <stdint.h>
 
uint32_t fcn_00401965 (void) {
    esi = 0;
    eax = _controlfp_s (esi, 0x10000, 0x30000, esi);
    if (eax != 0) {
        _invoke_watson (esi, esi, esi, esi, esi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a6c */
#include <stdint.h>
 
void _controlfp_s (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a66 */
#include <stdint.h>
 
void _invoke_watson (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4019a0 */
#include <stdint.h>
 
int32_t fcn_004019a0 (void) {
    LARGE_INTEGER * lpPerformanceCount;
    int32_t var_ch;
    LPFILETIME lpSystemTimeAsFileTime;
    int32_t var_4h;
    eax = *(0x406020);
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    edi = 0xbb40e64e;
    ebx = 0xffff0000;
    if (eax != edi) {
        if ((ebx & eax) != 0) {
            eax = ~eax;
            *(0x406024) = eax;
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
            eax |= 0x4711;
            eax <<= 0x10;
            esi |= eax;
        }
label_0:
        *(0x406020) = esi;
        esi = ~esi;
        *(0x406024) = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a3c */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4015c7 */
#include <stdint.h>
 
void fcn_004015c7 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    uint32_t var_1ch;
    if (*((ebp - 0x1c)) == 0) {
        fcn_0040151e (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x40151e */
#include <stdint.h>
 
void fcn_0040151e (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4h;
    fcn_004018c0 (0x405168);
    *((ebp - 4)) = 0;
    do {
        *((ebp + 0x10))--;
        if (*((ebp + 0x10)) < 0) {
            goto label_0;
        }
        ecx = *((ebp + 8));
        ecx -= *((ebp + 0xc));
        *((ebp + 8)) = ecx;
        uint32_t (*ebp + 0x14)() ();
    } while (1);
label_0:
    *((ebp - 4)) = 0xfffffffe;
    fcn_00401905 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a5a */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a54 */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4016d4 */
#include <stdint.h>
 
void fcn_004016d4 (void) {
    _unlock (8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a4e */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401a60 */
#include <stdint.h>
 
void _except_handler4_common (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x4010a8 */
#include <stdint.h>
 
void fcn_004010a8 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    if (ecx == *(0x406020)) {
        return;
    }
    return void (*0x401400)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-010-try_catch/ia32_pe/subject.exe @ 0x401400 */
#include <stdint.h>
 
int32_t loc_00401400 (int32_t arg_4h, int32_t arg_8h) {
    int32_t var_328h;
    int32_t var_324h;
    int32_t var_320h;
    *(0x406290) = eax;
    *(0x40628c) = ecx;
    *(0x406288) = edx;
    *(0x406284) = ebx;
    *(0x406280) = esi;
    *(0x40627c) = edi;
    *(0x4062a8) = ss;
    *(0x40629c) = cs;
    *(0x406278) = ds;
    *(0x406274) = es;
    *(0x406270) = fs;
    *(0x40626c) = gs;
    __asm ("pushfd");
    eax = *(ebp);
    *(0x406294) = eax;
    eax = *((ebp + 4));
    *(0x406298) = eax;
    eax = ebp + 8;
    *(0x4062a4) = eax;
    eax = *((ebp - 0x320));
    *(0x4061e0) = 0x10001;
    eax = *(0x406298);
    *(0x406194) = eax;
    *(0x406188) = 0xc0000409;
    *(0x40618c) = 1;
    eax = *(0x406020);
    *((ebp - 0x328)) = eax;
    eax = *(0x406024);
    *((ebp - 0x324)) = eax;
    eax = IsDebuggerPresent ();
    *(0x4061d8) = eax;
    _crt_debugger_hook (1);
    SetUnhandledExceptionFilter (0);
    UnhandledExceptionFilter (0x40474c);
    if (*(0x4061d8) == 0) {
        _crt_debugger_hook (1);
    }
    eax = GetCurrentProcess (0xc0000409);
    TerminateProcess (eax);
    return eax;
}
