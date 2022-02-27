/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400015f0 */
#include <stdint.h>
 
int64_t entry0 (void) {
    int64_t var_8h;
label_0:
    *((rsp + 8)) = rsi;
    rax = *(gs:0x30);
    rdi = *((rax + 8));
    esi = 0;
    do {
        eax = 0;
        __asm ("lock cmpxchg qword [0x1400035d8], rdi");
        if (? == ?) {
            goto label_1;
        }
        if (rax == rdi) {
            edi = 1;
            esi = 1;
            goto label_2;
        }
        ecx = 0x3e8;
        Sleep ();
    } while (1);
label_1:
    edi = 1;
label_2:
    eax = *(0x1400035d0);
    if (eax == edi) {
        ecx = 0x1f;
        _amsg_exit ();
    } else {
        eax = *(0x1400035d0);
        if (eax == 0) {
            *(0x1400035d0) = edi;
            rdx = 0x1400021a8;
            rcx = 0x140002190;
            eax = _initterm_e ();
            if (eax == 0) {
                goto label_3;
            }
            eax = 0xff;
            goto label_4;
        }
        *(0x140003044) = edi;
    }
label_3:
    eax = *(0x1400035d0);
    if (eax == edi) {
        rdx = 0x140002188;
        rcx = 0x140002178;
        eax = _initterm ();
        *(0x1400035d0) = 2;
    }
    if (esi == 0) {
        eax = 0;
        tmp_0 = 0x1400035d8;
        0x1400035d8 = rax;
        rax = tmp_0;
    }
    if (*(0x1400035f0) != 0) {
        eax = fcn_140001980 (0x1400035f0);
        if (eax == 0) {
            goto label_5;
        }
        r8d = 0;
        edx = r8 + 2;
        ecx = 0;
        uint64_t (*0x1400035f0)() ();
    }
label_5:
    rcx = *(sym.imp.MSVCR90.dll___initenv);
    rax = *(0x140003028);
    r8 = *(0x140003028);
    rdx = *(0x140003030);
    eax = fcn_140001290 (rax, *(0x140003020));
    *(0x140003040) = eax;
    if (*(0x140003024) == 0) {
        ecx = eax;
        exit (rdi);
    }
    if (*(0x140003044) == 0) {
        _cexit ();
        eax = *(0x140003040);
    }
label_4:
    rsi = *((rsp + 0x30));
    return rax;
    fcn_1400019d4 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001b36 */
#include <stdint.h>
 
void memset (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001300 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint64_t rotate_right64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
void fcn_140001300 (uint32_t arg1) {
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_88h;
    int64_t var_8h;
    rcx = arg1;
    if (rcx == *(section..data)) {
        rcx = rotate_left64 (rcx, 0x10);
        if ((cx & 0xffff) == 0) {
            return;
        }
        rcx = rotate_right64 (rcx, 0x10);
    }
    return void (*0x140001604)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001604 */
#include <stdint.h>
 
uint64_t fcn_140001604 (int64_t arg1) {
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    PRUNTIME_FUNCTION var_50h;
    ULONG_PTR ControlPc;
    PULONG_PTR ImageBase;
    int64_t var_68h;
    int64_t var_70h;
    int64_t var_88h;
    int64_t var_8h;
    rcx = arg1;
    rcx = 0x1400030f0;
    RtlCaptureContext (rcx);
    r11 = *(0x1400031e8);
    *((rsp + 0x58)) = r11;
    r8d = 0;
    rdx = rsp + 0x60;
    rcx = *((rsp + 0x58));
    rax = RtlLookupFunctionEntry ();
    *((rsp + 0x50)) = rax;
    if (*((rsp + 0x50)) != 0) {
        *((rsp + 0x38)) = 0;
        rax = rsp + 0x48;
        *((rsp + 0x30)) = rax;
        rax = rsp + 0x40;
        *((rsp + 0x28)) = rax;
        rax = 0x1400030f0;
        *((rsp + 0x20)) = rax;
        r9 = *((rsp + 0x50));
        r8 = *((rsp + 0x58));
        rdx = *((rsp + 0x60));
        ecx = 0;
        RtlVirtualUnwind ();
    } else {
        rax = *((rsp + 0x88));
        *(0x1400031e8) = rax;
        rax = rsp + 0x88;
        rax += 8;
        *(0x140003188) = rax;
    }
    rax = *(0x1400031e8);
    *(0x140003060) = rax;
    rax = *((rsp + 0x90));
    *(0x140003170) = rax;
    *(0x140003050) = 0xc0000409;
    *(0x140003054) = 1;
    rax = *(section..data);
    rax = *(0x140003008);
    eax = IsDebuggerPresent (rax);
    *(0x1400030e8) = eax;
    ecx = 1;
    _crt_debugger_hook ();
    ecx = 0;
    SetUnhandledExceptionFilter ();
    rcx = 0x1400021d0;
    UnhandledExceptionFilter ();
    if (*(0x1400030e8) == 0) {
        ecx = 1;
        _crt_debugger_hook ();
    }
    rax = GetCurrentProcess ();
    edx = 0xc0000409;
    rcx = rax;
    TerminateProcess ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001000 */
#include <stdint.h>
 
int64_t fcn_140001000 (int64_t arg3, void * arg1, int64_t arg2) {
    char * s;
    char * var_29h;
    int64_t var_70h;
    int64_t var_80h;
    int64_t var_18h;
    int64_t var_20h;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    /* [00] -r-x section size 4096 named .text */
    rax = *(section..data);
    rax ^= rsp;
    edi = r8d;
    r8d = edx;
    rdx = "%08lX:";
    rcx = rsp + 0x20;
    sprintf (rbx, r13, r12, rdi, rsi);
    r14d = 0x10;
    if (edi > r14d) {
        edi = r14d;
    }
    r12d = 0;
    r13d = r12d;
    rbx = r12;
    rsi = (int64_t) edi;
    if (edi <= 0) {
        goto label_0;
    }
    edi = r12d;
    r13d = esi;
    do {
        r8d = *((rbx + rbp));
        rax = (int64_t) edi;
        rdx = " %02lX";
        rcx = rsp + rax + 0x29;
        eax = sprintf ();
        rbx++;
        edi += 3;
    } while (rbx < rsi);
    if (esi >= r14d) {
        goto label_1;
    }
label_0:
    edx = *(0x1400021f0);
    r8d = r14d;
    r8d -= r13d;
    do {
        eax = 0;
        rcx |= 0xffffffffffffffff;
        rdi = rsp + 0x20;
        __asm ("repne scasb al, byte [rdi]");
        r8--;
        *((rdi - 1)) = edx;
    } while (r8 != 0);
label_1:
    rcx |= 0xffffffffffffffff;
    eax = 0;
    rdi = rsp + 0x20;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rcx--;
    rax = (int64_t) ecx;
    ecx += 3;
    *((rsp + rax + 0x20)) = 0x7c2020;
    rax = r12;
    rbx = (int64_t) ecx;
    if (rsi <= 0) {
        goto label_2;
    }
    rdi = rsp + rbx + 0x20;
    r12d = esi;
    do {
        ecx = *((rax + rbp));
        if (cl >= 0x20) {
            edx = (int32_t) cl;
            if (cl <= 0x7e) {
                goto label_3;
            }
        }
        edx = 0x2e;
label_3:
        *((rdi + rax)) = dl;
        rax++;
    } while (rax < rsi);
label_2:
    rdx = (int64_t) r12d;
    if (rdx < r14) {
        rax = rdx + rbx;
        r14 -= rdx;
        dl = 0x20;
        memset (rsp + rax + 0x20, rdx, r14);
        r12d += r14d;
    }
    ecx = 0x7c;
    rax = (int64_t) r12d;
    rdx = rsp + 0x20;
    rax += rbx;
    *((rsp + rax + 0x20)) = cx;
    rcx = 0x1400021f4;
    printf (rdi);
    rcx = *((rsp + 0x70));
    fcn_140001300 (rsp);
    r11 = rsp + 0x80;
    rbx = *((r11 + 0x40));
    rbp = *((r11 + 0x48));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001190 */
#include <stdint.h>
 
int64_t fcn_140001190 (int64_t arg1) {
    int64_t var_20h;
    uint32_t var_34h;
    void * ptr;
    int64_t var_60h;
    int64_t var_88h;
    int64_t var_90h;
    rcx = arg1;
    rax = *(section..data);
    rax ^= rsp;
    rdx = rsp + 0x20;
    rbx = rcx;
    eax = _stat64i32 (rbx);
    if (eax != 0) {
        rcx = rbx;
        perror (rdi);
        eax = 1;
        rcx = *((rsp + 0x60));
        fcn_140001300 (rsp);
        return rax;
    }
    rdx = 0x1400021f8;
    rcx = rbx;
    *((rsp + 0x88)) = rsi;
    rax = fopen (rdi, rsi);
    rsi = rax;
    if (rax == 0) {
        rcx = rbx;
        perror (rdi);
        eax = rsi + 1;
        goto label_0;
    }
    ebx = 0;
    if (*((rsp + 0x34)) <= ebx) {
        goto label_1;
    }
    *((rsp + 0x90)) = rdi;
    do {
        r9 = rsi;
        r8d = rdx + 0xf;
        rax = fread (rdi, rsi, 1, rsp + 0x50);
        rdi = rax;
        if (eax == 0) {
            goto label_2;
        }
        r8d = eax;
        fcn_140001000 (rsp + 0x50, rdx, ebx);
        ebx += edi;
    } while (ebx < *((rsp + 0x34)));
label_2:
label_1:
    rcx = rsi;
    eax = fclose (*((rsp + 0x90)));
    eax = 0;
label_0:
    rsi = *((rsp + 0x88));
    rcx = *((rsp + 0x60));
    fcn_140001300 (rsp);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001864 */
#include <stdint.h>
 
uint64_t fcn_140001864 (void) {
    rax = fcn_1400017b4 (rcx);
    rax = -rax;
    eax -= eax;
    eax = -eax;
    eax--;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400017b4 */
#include <stdint.h>
 
uint64_t fcn_1400017b4 (int64_t arg1) {
    int64_t var_38h;
    int64_t var_40h;
    rcx = arg1;
    rbx = rcx;
    rcx = *(0x1400035e8);
    rax = _decode_pointer (rbx);
    *((rsp + 0x38)) = rax;
    if (rax == -1) {
        rcx = rbx;
        _onexit ();
    } else {
        ecx = 8;
        _lock ();
        rcx = *(0x1400035e8);
        rax = _decode_pointer ();
        rcx = *(0x1400035e0);
        rax = _decode_pointer (rax);
        rcx = rbx;
        rax = _encode_pointer (rax);
        rcx = rax;
        r8 = rsp + 0x40;
        rdx = rsp + 0x38;
        rax = _dllonexit ();
        rbx = rax;
        rcx = *((rsp + 0x38));
        rax = _encode_pointer ();
        *(0x1400035e8) = rax;
        rcx = *((rsp + 0x40));
        rax = _encode_pointer ();
        *(0x1400035e0) = rax;
        ecx = 8;
        _unlock ();
        rax = rbx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400017ac */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400019c8 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400019c2 */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001980 */
#include <stdint.h>
 
uint64_t fcn_140001980 (int64_t arg1) {
    rcx = arg1;
    r8 = rcx;
    r9 = 0x140000000;
    eax = fcn_140001900 (r9);
    if (eax != 0) {
        r8 -= r9;
        rax = fcn_140001930 (r9, r8);
        if (rax == 0) {
            goto label_0;
        }
        eax = *((rax + 0x24));
        eax >>= 0x1f;
        eax = ~eax;
        eax &= 1;
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001290 */
#include <stdint.h>
 
uint32_t fcn_140001290 (int64_t arg1, int64_t arg2) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    rcx = arg1;
    rdx = arg2;
    *((rsp + 8)) = rbx;
    *((rsp + 0x10)) = rbp;
    *((rsp + 0x18)) = rsi;
    edi = 1;
    rsi = (int64_t) ecx;
    ebx = 0;
    if (rdi >= rsi) {
        goto label_0;
    }
    do {
        eax = fcn_140001190 (*((rbp + rdi*8)));
        rdi++;
        ebx += eax;
    } while (rdi < rsi);
label_0:
    rbp = *((rsp + 0x38));
    rsi = *((rsp + 0x40));
    eax = ebx;
    rbx = *((rsp + 0x30));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x14000187c */
#include <stdint.h>
 
int64_t fcn_14000187c (void) {
    int64_t var_8h;
    *((rsp + 8)) = rbx;
    rbx = 0x140002260;
    rdi = 0x140002260;
    while (rbx < rdi) {
        rax = *(rbx);
        if (rax != 0) {
            void (*rax)() ();
        }
        rbx += 8;
    }
    rbx = *((rsp + 0x30));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400019d0 */
#include <stdint.h>
 
int32_t fcn_1400019d0 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400019d4 */
#include <stdint.h>
 
int64_t fcn_1400019d4 (void) {
    LPFILETIME lpSystemTimeAsFileTime;
    LARGE_INTEGER * lpPerformanceCount;
    int64_t var_18h;
    *((rsp + 0x18)) = rbx;
    rax = *(section..data);
    rdi = 0x2b992ddfa232;
    if (rax != rdi) {
        rax = ~rax;
        *(0x140003008) = rax;
    } else {
        rcx = rsp + 0x30;
        GetSystemTimeAsFileTime ();
        rbx = *((rsp + 0x30));
        eax = GetCurrentProcessId ();
        r11d = eax;
        rbx ^= r11;
        eax = GetCurrentThreadId ();
        r11d = eax;
        rbx ^= r11;
        eax = GetTickCount ();
        rcx = rsp + 0x38;
        r11d = eax;
        rbx ^= r11;
        QueryPerformanceCounter ();
        r11 = *((rsp + 0x38));
        r11 ^= rbx;
        rax = 0xffffffffffff;
        r11 &= rax;
        rax = 0x2b992ddfa233;
        if (r11 == rdi) {
            r11 = rax;
        }
        *(section..data) = r11;
        r11 = ~r11;
        *(0x140003008) = r11;
    }
    rbx = *((rsp + 0x40));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001aac */
#include <stdint.h>
 
void RtlLookupFunctionEntry (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001aa6 */
#include <stdint.h>
 
void RtlVirtualUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001a88 */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001a8e */
#include <stdint.h>
 
void void_cdecl_terminate_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001aa0 */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001a9a */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001a94 */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001900 */
#include <stdint.h>
 
int64_t fcn_140001900 (int64_t arg1) {
    rcx = arg1;
    rax = rcx;
    ecx = 0x5a4d;
    if (*(rax) != cx) {
        eax = 0;
        return rax;
    }
    rcx = *((rax + 0x3c));
    rcx += rax;
    eax = 0;
    if (*(rcx) == 0x4550) {
        edx = 0x20b;
        al = (*((rcx + 0x18)) == dx) ? 1 : 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001930 */
#include <stdint.h>
 
uint64_t fcn_140001930 (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r8 = *((rcx + 0x3c));
    r9d = 0;
    r10 = rdx;
    r8 += rcx;
    eax = *((r8 + 0x14));
    r11d = *((r8 + 6));
    rcx = rax + r8 + 0x18;
    if (r11d == 0) {
        goto label_0;
    }
    do {
        edx = *((rcx + 0xc));
        if (r10 >= rdx) {
            eax = *((rcx + 8));
            eax += edx;
            if (r10 < rax) {
                goto label_1;
            }
        }
        r9d++;
        rcx += 0x28;
    } while (r9d < r11d);
label_0:
    eax = 0;
    return eax;
label_1:
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x140001ab4 */
#include <stdint.h>
 
int64_t fcn_140001ab4 (int64_t arg3, int64_t arg1, int64_t arg2) {
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    r11d = *(r8);
    rbx = rdx;
    r9 = rcx;
    r11d &= 0xfffffff8;
    r10 = rcx;
    if ((*(r8) & 4) != 0) {
        eax = *((r8 + 8));
        r10 = *((r8 + 4));
        eax = -eax;
        r10 += rcx;
        rcx = (int64_t) eax;
        r10 &= rcx;
    }
    rax = (int64_t) r11d;
    rdx = *((rax + r10));
    rax = *((rbx + 0x10));
    ecx = *((rax + 8));
    rcx += *((rbx + 8));
    if ((*((rcx + 3)) & 0xf) != 0) {
        eax = *((rcx + 3));
        eax &= 0xfffffff0;
        rax = (int64_t) eax;
        r9 += rax;
    }
    r9 ^= rdx;
    rcx = r9;
    return void (*0x140001300)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_release/subject.exe @ 0x1400018f2 */
#include <stdint.h>
 
void _XcptFilter (void) {
}
