/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4014a4 */
#include <stdint.h>
 
int32_t entry0 (void) {
    int32_t var_20h;
    uint32_t var_1ch;
    int32_t var_14h;
    int32_t var_4h;
label_0:
    fcn_00401860 (0x404148);
    ebx = 0;
    if (*(0x4054ec) == ebx) {
        HeapSetInformation (ebx, 1, ebx, ebx);
    }
    *((ebp - 4)) = ebx;
    eax = *(fs:0x18);
    esi = *((eax + 4));
    *((ebp - 0x1c)) = ebx;
    edi = 0x4054d4;
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
    eax = *(0x4054c4);
    if (eax == esi) {
        _amsg_exit (0x1f);
    } else {
        eax = *(0x4054c4);
        if (eax == 0) {
            *(0x4054c4) = esi;
            eax = _initterm_e (0x40330c, 0x403618);
            if (eax == 0) {
                goto label_3;
            }
            *((ebp - 4)) = 0xfffffffe;
            eax = 0xff;
            goto label_4;
        }
        *(0x40518c) = esi;
    }
label_3:
    eax = *(0x4054c4);
    if (eax == esi) {
        _initterm (section..rdata, 0x403208);
        *(0x4054c4) = 2;
    }
    if (*((ebp - 0x1c)) == ebx) {
        InterlockedExchange (edi, ebx);
    }
    if (*(0x4054f0) != ebx) {
        eax = fcn_00401790 ();
        if (eax == 0) {
            goto label_5;
        }
        uint32_t (*0x4054f0)(uint32_t, uint32_t, uint32_t) (ebx, 2, ebx);
    }
label_5:
    eax = *(0x405174);
    ecx = *(sym.imp.MSVCR100.dll___initenv);
    *(ecx) = eax;
    eax = fcn_0040100f ();
    *(0x405188) = eax;
    if (*(0x40517c) == ebx) {
        exit (rdi);
        eax = *((ebp - 0x14));
        ecx = *(eax);
        ecx = *(ecx);
        *((ebp - 0x20)) = ecx;
        _XcptFilter (ecx, eax);
        return eax;
    }
    if (*(0x40518c) == ebx) {
        _cexit ();
    }
    *((ebp - 4)) = 0xfffffffe;
    eax = *(0x405188);
label_4:
    fcn_004018a5 ();
    return eax;
    fcn_00401940 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401014 */
#include <stdint.h>
 
void fcn_00401014 (void) {
    return void (*0x401040)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401040 */
#include <stdint.h>
 
int32_t loc_00401040 (void) {
    eax = ecx;
    *(eax) = vtable.AAAAA.0;
    *((eax + 4)) = 0x64;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4011c2 */
#include <stdint.h>
 
void void_cdecl_operator_new_unsigned_int_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401019 */
#include <stdint.h>
 
void fcn_00401019 (void) {
    return void (*0x401070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401070 */
#include <stdint.h>
 
int32_t loc_00401070 (void) {
    esi = ecx;
    fcn_00401014 ();
    *((esi + 4))++;
    *(esi) = vtable.BBBBB.0;
    eax = esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401524 */
#include <stdint.h>
 
int32_t fcn_00401524 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00401860 (0x404188);
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
    fcn_0040156f ();
    fcn_004018a5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4014ae */
#include <stdint.h>
 
void void_cdecl_operator_delete_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4019e2 */
#include <stdint.h>
 
void public_void_thiscall_type_info::_type_info_dtor_internal_method_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401685 */
#include <stdint.h>
 
uint32_t fcn_00401685 (int32_t arg_8h) {
    eax = fcn_004015e4 (*((ebp + 8)));
    eax = -eax;
    eax -= eax;
    eax = -eax;
    eax--;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4015e4 */
#include <stdint.h>
 
uint32_t fcn_004015e4 (int32_t arg_8h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_4h;
    fcn_00401860 (0x4041a8);
    eax = DecodePointer (*(0x4054e8));
    *((ebp - 0x1c)) = eax;
    if (eax == -1) {
        _onexit (*((ebp + 8)));
    } else {
        _lock (8);
        *((ebp - 4)) = 0;
        eax = void (*esi)(uint32_t*) (*(0x4054e8));
        *((ebp - 0x1c)) = eax;
        eax = void (*esi)(uint32_t*) (*(0x4054d8));
        *((ebp - 0x20)) = eax;
        eax = EncodePointer (*((ebp + 8)), ebp - 0x1c, ebp - 0x20);
        eax = _dllonexit (eax);
        *((ebp - 0x24)) = eax;
        eax = EncodePointer (*((ebp - 0x1c)));
        *(0x4054e8) = eax;
        eax = EncodePointer (*((ebp - 0x20)));
        *(0x4054d8) = eax;
        *((ebp - 4)) = 0xfffffffe;
        fcn_0040167c ();
        eax = *((ebp - 0x24));
    }
    fcn_004018a5 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4015d8 */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401860 */
#include <stdint.h>
 
int32_t fcn_00401860 (int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h_2;
    int32_t var_4h;
    eax = *((esp + 0x10));
    *((esp + 0x10)) = ebp;
    ebp = esp + 0x10;
    eax = *(0x405058);
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
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401852 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x40184c */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401790 */
#include <stdint.h>
 
int32_t fcn_00401790 (void) {
    int32_t var_18h;
    int32_t var_10h_2;
    int32_t var_4h;
    int32_t var_8h_2;
    int32_t var_10h;
    int32_t var_8h;
    eax = *(fs:0);
    eax = *(0x405058);
    *((ebp - 8)) ^= eax;
    eax ^= ebp;
    eax = ebp - 0x10;
    *(fs:0) = eax;
    *((ebp - 0x18)) = esp;
    *((ebp - 4)) = 0;
    eax = fcn_00401700 (0x400000);
    if (eax == 0) {
        void (*0x401831)() ();
    }
    eax = *((ebp + 8));
    eax -= 0x400000;
    eax = fcn_00401740 (0x400000, eax);
    if (eax == 0) {
        void (*0x401831)() ();
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
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401700 */
#include <stdint.h>
 
int32_t fcn_00401700 (int32_t arg_8h) {
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
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401740 */
#include <stdint.h>
 
int32_t fcn_00401740 (int32_t arg_8h, int32_t arg_ch) {
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
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x40100f */
#include <stdint.h>
 
uint32_t fcn_0040100f (void) {
    eax = void_cdecl_operator_new_unsigned_int_ (8, edi, esi, ebp);
    if (eax != 0) {
        ecx = eax;
        eax = fcn_00401019 ();
    } else {
        ebp = 0;
    }
    eax = void_cdecl_operator_new_unsigned_int_ (8);
    if (eax != 0) {
        ecx = eax;
        eax = fcn_00401014 ();
        ebx = eax;
    } else {
        ebx = 0;
    }
    eax = void_cdecl_operator_new_unsigned_int_ (8);
    if (eax != 0) {
        ecx = eax;
        eax = fcn_00401019 ();
        edi = eax;
    } else {
        edi = 0;
    }
    eax = void_cdecl_operator_new_unsigned_int_ (8);
    if (eax != 0) {
        ecx = eax;
        eax = fcn_00401014 ();
        esi = eax;
    } else {
        esi = 0;
    }
    eax = *(ebx);
    edx = *(eax);
    ecx = ebx;
    eax = void (*edx)() ();
    ebx = eax;
    eax = *(esi);
    edx = *(eax);
    ecx = esi;
    void (*edx)() ();
    esi = ebx + eax;
    eax = *(edi);
    edx = *(eax);
    ecx = edi;
    eax = void (*edx)() ();
    esi += eax;
    eax = *(ebp);
    edx = *(eax);
    ecx = ebp;
    eax = void (*edx)() ();
    eax += esi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4016f4 */
#include <stdint.h>
 
void _XcptFilter (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4018a5 */
#include <stdint.h>
 
void fcn_004018a5 (void) {
    int32_t var_10h;
    ecx = *((ebp - 0x10));
    *(fs:0) = ecx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x40169c */
#include <stdint.h>
 
int32_t fcn_0040169c (void) {
    eax = 0x403d38;
    esi = 0x403e38;
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
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401937 */
#include <stdint.h>
 
int32_t fcn_00401937 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401905 */
#include <stdint.h>
 
uint32_t fcn_00401905 (void) {
    esi = 0;
    eax = _controlfp_s (esi, 0x10000, 0x30000, esi);
    if (eax != 0) {
        _invoke_watson (esi, esi, esi, esi, esi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401a16 */
#include <stdint.h>
 
void _controlfp_s (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401a10 */
#include <stdint.h>
 
void _invoke_watson (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401940 */
#include <stdint.h>
 
int32_t fcn_00401940 (void) {
    LARGE_INTEGER * lpPerformanceCount;
    int32_t var_ch;
    LPFILETIME lpSystemTimeAsFileTime;
    int32_t var_4h;
    eax = *(0x405058);
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    edi = 0xbb40e64e;
    ebx = 0xffff0000;
    if (eax != edi) {
        if ((ebx & eax) != 0) {
            eax = ~eax;
            *(0x40505c) = eax;
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
        *(0x405058) = esi;
        esi = ~esi;
        *(0x40505c) = esi;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4019dc */
#include <stdint.h>
 
void void_cdecl_terminate_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x40156f */
#include <stdint.h>
 
void fcn_0040156f (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    uint32_t var_1ch;
    if (*((ebp - 0x1c)) == 0) {
        fcn_004014c6 (*((ebp + 8)), *((ebp + 0xc)), *((ebp + 0x10)), *((ebp + 0x14)));
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4014c6 */
#include <stdint.h>
 
void fcn_004014c6 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4h;
    fcn_00401860 (0x404168);
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
    fcn_004018a5 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4019f4 */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4019ee */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x40167c */
#include <stdint.h>
 
void fcn_0040167c (void) {
    _unlock (8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x4019e8 */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401a0a */
#include <stdint.h>
 
void _except_handler4_common (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-017-nested_ctor/ia32_pe/subject.exe @ 0x401b22 */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
