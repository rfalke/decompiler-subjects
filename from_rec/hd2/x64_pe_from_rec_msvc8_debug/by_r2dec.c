/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001b50 */
#include <stdint.h>
 
void entry0 (void) {
    fcn_140002ae0 ();
    fcn_140001b70 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002ae0 */
#include <stdint.h>
 
int64_t fcn_140002ae0 (void) {
    LPFILETIME lpSystemTimeAsFileTime;
    LPFILETIME var_28h;
    LARGE_INTEGER * lpPerformanceCount;
    *((rsp + 0x20)) = 0;
    rax = 0x2b992ddfa232;
    if (*(section..data) != rax) {
        rax = *(section..data);
        rax = ~rax;
        *(0x140009008) = rax;
    } else {
        rcx = rsp + 0x20;
        GetSystemTimeAsFileTime ();
        r11 = *((rsp + 0x20));
        eax = GetCurrentProcessId (r11);
        ecx = eax;
        rax = *((rsp + 0x28));
        rax ^= rcx;
        eax = GetCurrentThreadId (rax);
        ecx = eax;
        rax = *((rsp + 0x28));
        rax ^= rcx;
        eax = GetTickCount (rax);
        ecx = eax;
        rax = *((rsp + 0x28));
        rax ^= rcx;
        rcx = rsp + 0x30;
        QueryPerformanceCounter (rax);
        r11 = *((rsp + 0x30));
        rax = *((rsp + 0x28));
        rax ^= r11;
        *((rsp + 0x28)) = rax;
        rcx = 0xffffffffffff;
        rax = *((rsp + 0x28));
        rax &= rcx;
        *((rsp + 0x28)) = rax;
        rax = 0x2b992ddfa232;
        if (*((rsp + 0x28)) == rax) {
            rax = 0x2b992ddfa233;
            *((rsp + 0x28)) = rax;
        }
        rax = *((rsp + 0x28));
        *(section..data) = rax;
        rax = *((rsp + 0x28));
        rax = ~rax;
        *(0x140009008) = rax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001b70 */
#include <stdint.h>
 
int64_t fcn_140001b70 (void) {
    char * var_20h;
    uint32_t var_30h;
    int64_t var_38h;
    uint32_t var_40h;
    *((rsp + 0x40)) = 0;
    fcn_140001d70 ();
    rax = *((rax + 8));
    *((rsp + 0x38)) = rax;
    *((rsp + 0x30)) = 0;
    do {
        rdx = *((rsp + 0x38));
        rcx = 0x140009738;
        eax = 0;
        __asm ("lock cmpxchg qword [rcx], rdx");
        *((rsp + 0x40)) = rax;
        if (*((rsp + 0x40)) == 0) {
            goto label_0;
        }
        rax = *((rsp + 0x38));
        if (*((rsp + 0x40)) == rax) {
            *((rsp + 0x30)) = 1;
        } else {
            ecx = 0x3e8;
            Sleep ();
        }
    } while (1);
label_0:
    eax = *(0x140009728);
    if (eax == 1) {
        ecx = 0x1f;
        _amsg_exit ();
    } else {
        eax = *(0x140009728);
        if (eax == 0) {
            *(0x140009728) = 1;
            rdx = 0x140006660;
            rcx = 0x140006330;
            eax = _initterm_e ();
            if (eax != 0) {
                eax = 0xff;
                goto label_1;
            }
        } else {
            *(0x14000917c) = 1;
        }
    }
    eax = *(0x140009728);
    if (eax == 1) {
        rdx = 0x140006220;
        rcx = section__rdata;
        _initterm ();
        *(0x140009728) = 2;
    }
    eax = *(0x140009728);
    if (eax != 2) {
        rax = "__native_startup_state == __initialized";
        r9d = 0;
        r8d = 0x1f4;
        rdx = "f:\\dd\\vctools\\crt_bld\\self_64_amd64\\crt\\src\\crtexe.c";
        ecx = 2;
        eax = _CrtDbgReportW (rax);
        if (eax != 1) {
            goto label_2;
        }
        __asm ("int3");
    }
label_2:
    if (*((rsp + 0x30)) == 0) {
        ecx = 0;
        rax = 0x140009738;
        tmp_0 = rax;
        rax = rcx;
        rcx = tmp_0;
    }
    if (*(0x140009760) != 0) {
        eax = fcn_140002d40 (0x140009760);
        if (eax == 0) {
            goto label_3;
        }
        r8d = 0;
        edx = 2;
        ecx = 0;
        uint64_t (*0x140009760)() ();
    }
label_3:
    ecx = 1;
    _CrtSetCheckCount ();
    r11 = *(sym.imp.MSVCR90D.dll___initenv);
    rax = *(0x140009160);
    *(r11) = rax;
    r8 = *(0x140009160);
    rdx = *(0x140009168);
    eax = fcn_140001005 (rcx, *(0x140009158));
    *(0x140009178) = eax;
    if (*(0x14000915c) == 0) {
        ecx = *(0x140009178);
        exit (rdi);
    }
    if (*(0x14000917c) == 0) {
        _cexit ();
    }
    eax = *(0x140009178);
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001776 */
#include <stdint.h>
 
void strcat (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001770 */
#include <stdint.h>
 
void strlen (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x14000176a */
#include <stdint.h>
 
void strcpy (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x1400017c0 */
#include <stdint.h>
 
int64_t fcn_1400017c0 (int64_t arg1, signed int64_t arg2) {
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_10h;
    int64_t var_18h;
    rcx = arg1;
    rdx = arg2;
    *((rsp + 0x10)) = rbp;
    *((rsp + 0x18)) = rsi;
    edi = 0;
    rsi = rdx;
    if (*(rdx) <= edi) {
        goto label_0;
    }
    *((rsp + 0x30)) = rbx;
    rbx = rdi;
    do {
        rax = *((rsi + 8));
        rcx = *((rax + rbx));
        if (*((rcx + rbp - 4)) == 0xcccccccc) {
            rax = *((rax + rbx + 4));
            rax += rcx;
            if (*((rax + rbp)) == 0xcccccccc) {
                goto label_1;
            }
        }
        rdx = *((rsi + 8));
        fcn_140002360 (*((rsp + 0x28)), *((rdx + rbx + 8)));
label_1:
        edi++;
        rbx += 0x10;
    } while (edi < *(rsi));
    rbx = *((rsp + 0x30));
label_0:
    rbp = *((rsp + 0x38));
    rsi = *((rsp + 0x40));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x1400017a0 */
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
 
void fcn_1400017a0 (uint32_t arg1) {
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
    return void (*0x140001e80)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001e80 */
#include <stdint.h>
 
uint64_t fcn_140001e80 (int64_t arg1) {
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
    rcx = 0x140009220;
    RtlCaptureContext (rcx);
    r11 = *(0x140009318);
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
        rax = 0x140009220;
        *((rsp + 0x20)) = rax;
        r9 = *((rsp + 0x50));
        r8 = *((rsp + 0x58));
        rdx = *((rsp + 0x60));
        ecx = 0;
        RtlVirtualUnwind ();
    } else {
        rax = *((rsp + 0x88));
        *(0x140009318) = rax;
        rax = rsp + 0x88;
        rax += 8;
        *(0x1400092b8) = rax;
    }
    rax = *(0x140009318);
    *(0x140009190) = rax;
    rax = *((rsp + 0x90));
    *(0x1400092a0) = rax;
    *(0x140009180) = 0xc0000409;
    *(0x140009184) = 1;
    rax = *(section..data);
    rax = *(0x140009008);
    eax = IsDebuggerPresent (rax);
    *(0x140009218) = eax;
    ecx = 1;
    _crt_debugger_hook ();
    ecx = 0;
    SetUnhandledExceptionFilter ();
    rcx = 0x1400069b0;
    UnhandledExceptionFilter ();
    if (*(0x140009218) == 0) {
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
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001430 */
#include <stdint.h>
 
int32_t fcn_140001430 (signed int64_t arg1, signed int64_t arg2) {
    signed int64_t var_8h;
    signed int64_t var_10h;
    rcx = arg1;
    rdx = arg2;
    rdi = rsp;
    rcx = 8;
    eax = 0xcccccccc;
    memset (rdi, eax, rcx);
    rcx = *((rsp + 0x30));
    rdx = *((rsp + 0x38));
    rcx = *((rsp + 0x30));
    _stat64i32 (rdx, rcx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x14000100a */
#include <stdint.h>
 
int64_t fcn_14000100a (size_t arg3, char ** arg1, size_t arg2) {
    char * dest;
    char * var_39h;
    char ** var_84h;
    size_t var_88h;
    uint32_t var_98h;
    int64_t var_9ch;
    int64_t var_a0h;
    char ** var_8h;
    size_t var_10h;
    size_t var_18h;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rdi = rsp;
    rcx = 0x2c;
    eax = 0xcccccccc;
    memset (rdi, eax, rcx);
    rcx = *((rsp + 0xc0));
    rax = *(section..data);
    rax ^= rsp;
    r8d = *((rsp + 0xc8));
    rdx = "%08lX:";
    rcx = rsp + 0x30;
    sprintf (r8d, rcx);
    if (*((rsp + 0xd0)) > 0x10) {
        *((rsp + 0xd0)) = 0x10;
    }
    *((rsp + 0x84)) = 0;
    while (1) {
        eax = *((rsp + 0x84));
        eax++;
        *((rsp + 0x84)) = eax;
        eax = *((rsp + 0xd0));
        if (*((rsp + 0x84)) >= eax) {
            goto label_0;
        }
        rcx = *((rsp + 0x84));
        rax = *((rsp + 0xc0));
        r8d = *((rax + rcx));
        eax = *((rsp + 0x84));
        eax *= 3;
        rax = (int64_t) eax;
        rcx = rsp + rax + 0x39;
        rdx = " %02lX";
        sprintf ();
    }
    do {
label_0:
        ecx = *((rsp + 0x84));
        eax = *((rsp + 0x84));
        eax++;
        *((rsp + 0x84)) = eax;
        if (ecx < 0x10) {
            *((rsp + 0x98)) = 1;
        } else {
            *((rsp + 0x98)) = 0;
        }
        if (*((rsp + 0x98)) == 0) {
            goto label_1;
        }
        rdx = 0x1400067a0;
        rcx = rsp + 0x30;
        strcat ();
    } while (1);
label_1:
    rcx = rsp + 0x30;
    eax = strlen ();
    *((rsp + 0x88)) = eax;
    rax = *((rsp + 0x88));
    strcpy (rsp + rax + 0x30, 0x1400067a4);
    eax = *((rsp + 0x88));
    eax += 3;
    *((rsp + 0x88)) = eax;
    *((rsp + 0x84)) = 0;
    while (1) {
        eax = *((rsp + 0x84));
        eax++;
        *((rsp + 0x84)) = eax;
        eax = *((rsp + 0xd0));
        if (*((rsp + 0x84)) >= eax) {
            goto label_2;
        }
        rcx = *((rsp + 0x84));
        rax = *((rsp + 0xc0));
        eax = *((rax + rcx));
        if (eax >= 0x20) {
            rcx = *((rsp + 0x84));
            rax = *((rsp + 0xc0));
            eax = *((rax + rcx));
            if (eax <= 0x7e) {
                rcx = *((rsp + 0x84));
                rax = *((rsp + 0xc0));
                eax = *((rax + rcx));
                *((rsp + 0x9c)) = eax;
            }
        } else {
            *((rsp + 0x9c)) = 0x2e;
        }
        ecx = *((rsp + 0x84));
        eax = *((rsp + 0x88));
        eax += ecx;
        rcx = (int64_t) eax;
        eax = *((rsp + 0x9c));
        *((rsp + rcx + 0x30)) = al;
    }
    do {
label_2:
        if (*((rsp + 0x84)) >= 0x10) {
            goto label_3;
        }
        ecx = *((rsp + 0x84));
        eax = *((rsp + 0x88));
        eax += ecx;
        rax = (int64_t) eax;
        *((rsp + rax + 0x30)) = 0x20;
        eax = *((rsp + 0x84));
        eax++;
        *((rsp + 0x84)) = eax;
    } while (1);
label_3:
    rax = *((rsp + 0x88));
    rax = *((rsp + 0x84));
    rcx += rax;
    strcpy (rsp + rax + 0x30, 0x1400067a8);
    rdx = rsp + 0x30;
    rcx = 0x1400067ac;
    printf (rdi);
    fcn_1400017c0 (rsp, 0x140006800);
    rcx = *((rsp + 0xa0));
    fcn_1400017a0 (rsp);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x14000100f */
#include <stdint.h>
 
int64_t fcn_14000100f (char * arg1) {
    void * ptr;
    size_t var_44h;
    file* stream;
    int64_t var_58h;
    int64_t var_6ch;
    size_t var_94h;
    int64_t var_a0h;
    char * filename;
    rcx = arg1;
    *((rsp + 8)) = rcx;
    rdi = rsp;
    rcx = 0x2c;
    eax = 0xcccccccc;
    memset (rdi, eax, rcx);
    rcx = *((rsp + 0xc0));
    rax = *(section..data);
    rax ^= rsp;
    *((rsp + 0xa0)) = rax;
    eax = fcn_140001430 (*((rsp + 0xc0)), rsp + 0x58);
    if (eax != 0) {
        rcx = *((rsp + 0xc0));
        perror (rdi);
        eax = 1;
        goto label_0;
    }
    rdx = 0x1400067b0;
    rcx = *((rsp + 0xc0));
    rax = fopen (rdi, rsi);
    *((rsp + 0x48)) = rax;
    if (*((rsp + 0x48)) == 0) {
        rcx = *((rsp + 0xc0));
        perror (rdi);
        eax = 1;
        goto label_0;
    }
    *((rsp + 0x44)) = 0;
    do {
        eax = *((rsp + 0x6c));
        if (*((rsp + 0x44)) >= eax) {
            goto label_1;
        }
        r9 = *((rsp + 0x48));
        r8d = 0x10;
        eax = fread (rdi, rsi, 1, rsp + 0x28);
        *((rsp + 0x94)) = eax;
        if (*((rsp + 0x94)) == 0) {
        } else {
            r8d = *((rsp + 0x94));
            fcn_14000100a (rsp + 0x28, rdx, *((rsp + 0x44)));
            r11d = *((rsp + 0x94));
            eax = *((rsp + 0x44));
            eax += r11d;
            *((rsp + 0x44)) = eax;
        } while (1);
    }
label_1:
    rcx = *((rsp + 0x48));
    eax = fclose (rdi);
    eax = 0;
label_0:
    rdi = rax;
    fcn_1400017c0 (rsp, 0x1400068a0);
    rax = rdi;
    rcx = *((rsp + 0xa0));
    fcn_1400017a0 (rsp);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001670 */
#include <stdint.h>
 
int64_t fcn_140001670 (int64_t arg3, int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    *((rsp + 0x18)) = r8;
    *((rsp + 0x10)) = rdx;
    *((rsp + 8)) = rcx;
    rax = *((rsp + 0x70));
    eax = *(rax);
    eax &= 0xfffffff8;
    *((rsp + 0x38)) = eax;
    rax = *((rsp + 0x60));
    *((rsp + 0x40)) = rax;
    rax = *((rsp + 0x70));
    eax = *(rax);
    eax >>= 2;
    eax &= 1;
    if (eax != 0) {
        rax = *((rsp + 0x70));
        rax = *((rax + 4));
        rdx = *((rsp + 0x60));
        rdx += rax;
        rax = *((rsp + 0x70));
        eax = *((rax + 8));
        eax = -eax;
        rcx = (int64_t) eax;
        rax = rdx;
        rax &= rcx;
        *((rsp + 0x40)) = rax;
    }
    rcx = *((rsp + 0x38));
    rax = *((rsp + 0x40));
    rax = *((rax + rcx));
    *((rsp + 0x20)) = rax;
    rax = *((rsp + 0x68));
    rax = *((rax + 0x10));
    eax = *((rax + 8));
    rcx = *((rsp + 0x68));
    rax += *((rcx + 8));
    *((rsp + 0x30)) = rax;
    rax = *((rsp + 0x60));
    *((rsp + 0x28)) = rax;
    rax = *((rsp + 0x30));
    eax = *((rax + 3));
    al &= 0xf;
    eax = (int32_t) al;
    if (eax != 0) {
        rax = *((rsp + 0x30));
        eax = *((rax + 3));
        al >>= 4;
        al &= 0xf;
        eax = (int32_t) al;
        eax *= 0x10;
        rcx = (int64_t) eax;
        rax = *((rsp + 0x28));
        rax += rcx;
        *((rsp + 0x28)) = rax;
    }
    rcx = *((rsp + 0x28));
    rax = *((rsp + 0x20));
    rax ^= rcx;
    *((rsp + 0x20)) = rax;
    fcn_1400017a0 (*((rsp + 0x20)));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002360 */
#include <stdint.h>
 
int64_t fcn_140002360 (uint32_t arg1, uint32_t arg2) {
    int64_t var_20h;
    int64_t var_420h;
    int64_t var_430h;
    rcx = arg1;
    rdx = arg2;
    rax = *(section..data);
    rax ^= rsp;
    *((rsp + 0x420)) = rax;
    r10d = *(0x140009018);
    r11 = rcx;
    if (r10d == 0xffffffff) {
        goto label_0;
    }
    *((rsp + 0x430)) = rdi;
    if (*(rdx) == 0) {
        goto label_1;
    }
    rcx |= 0xffffffffffffffff;
    eax = 0;
    rdi = rdx;
    __asm ("repne scasb al, byte [rdi]");
    rcx = ~rcx;
    rcx += 0x2c;
    if (rcx > 0x400) {
        goto label_1;
    }
    r9 = rsp + 0x20;
    ecx = 0;
    rdi = "Stack around the variable ';
    do {
        eax = *((rcx + rdi));
        rcx++;
        *((rsp + rcx + 0x1f)) = al;
    } while (al != 0);
    eax = 0;
    rcx |= 0xffffffffffffffff;
    rdi = rsp + 0x20;
    __asm ("repne scasb al, byte [rdi]");
    ecx = 0;
    do {
        eax = *((rdx + rcx));
        rcx++;
        *((rdi + rcx - 2)) = al;
    } while (al != 0);
    eax = 0;
    rcx |= 0xffffffffffffffff;
    rdi = rsp + 0x20;
    __asm ("repne scasb al, byte [rdi]");
    ecx = 0;
    rdx = ' was corrupted.";
    do {
        eax = *((rdx + rcx));
        rcx++;
        *((rdi + rcx - 2)) = al;
    } while (al != 0);
    goto label_2;
label_1:
label_2:
    r8d = 2;
    fcn_1400020b0 (r11, rdx, r10d, "Stack corrupted near unknown variable");
    rdi = *((rsp + 0x430));
label_0:
    rcx = *((rsp + 0x420));
    fcn_1400017a0 (rsp);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002470 */
#include <stdint.h>
 
int64_t fcn_140002470 (int64_t arg3, int64_t arg1, int64_t arg2) {
    int64_t var_20h;
    char * var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_68h;
    LPCSTR lpString;
    int64_t var_1b0h;
    int64_t var_1c0h;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rax = *(section..data);
    rax ^= rsp;
    *((rsp + 0x1b0)) = rax;
    edi = *(0x140009020);
    r12d = r8d;
    rsi = rdx;
    if (edi != 0xffffffff) {
        rcx = "user32.dll";
        rax = LoadLibraryA ();
        if (rax != 0) {
            rdx = "wsprintfA";
            rcx = rax;
            rax = GetProcAddress ();
            *(0x1400096f0) = rax;
            if (rsi != 0) {
                if (rax == 0) {
                    goto label_0;
                }
                rcx = *((rsi + 0xc));
                rdx = "\nData: <";
                rcx -= 0x24;
                rdx = "\nAllocation number within this function: ";
                rbx = rsi + 0x20;
                r9 = "\nAddress: 0x";
                rcx = "\nSize: ";
                r8 = "Stack area around _alloca memory reserved by this function is corrupted";
                rdx = "%s%s%p%s%I64d%s%d%s";
                rcx = rsp + 0xa0;
                void (*rax)(uint64_t) (rbx);
                r9 -= 0x24;
                fcn_140002610 (rsp + 0x50, rsp + 0x68, rbx, *((rsi + 0xc)));
                rcx = rsp + 0xa0;
                eax = lstrlenA ();
                r9 = 0x140006ebc;
                rdx = "%s%s%s%s";
                r8 = (int64_t) eax;
                rax = 0x140006eac;
                rax = rsp + 0x68;
                rcx = rsp + r8 + 0xa0;
                r8 = rsp + 0x50;
                uint64_t (*0x1400096f0)(uint64_t) (rax);
                r8d = 4;
                fcn_1400020b0 (rbp, rdx, edi, rsp + 0xa0);
                rbx = *((rsp + 0x1c0));
            }
        } else {
label_0:
            r8d = 4;
            fcn_1400020b0 (rbp, rdx, edi, "Stack area around _alloca memory reserved by this function is corrupted\n");
        }
    }
    rcx = *((rsp + 0x1b0));
    fcn_1400017a0 (rsp);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002878 */
#include <stdint.h>
 
void _CRT_RTC_INITW (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002840 */
#include <stdint.h>
 
int64_t fcn_140002840 (int64_t arg1) {
    rcx = arg1;
    rax = *(0x140009700);
    *(0x1400096f8) = 0;
    *(0x140009700) = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001d80 */
#include <stdint.h>
 
uint64_t fcn_140001d80 (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    uint32_t var_20h;
    int64_t var_24h;
    int64_t var_28h;
    rax = 0x140000000;
    *(rsp) = rax;
    rax = *(rsp);
    eax = *(rax);
    if (eax != 0x5a4d) {
        eax = 0;
    } else {
        rax = *(rsp);
        rcx = *((rax + 0x3c));
        rax = *(rsp);
        rax += rcx;
        *((rsp + 8)) = rax;
        rax = *((rsp + 8));
        if (*(rax) != 0x4550) {
            eax = 0;
        } else {
            rax = *((rsp + 8));
            rax += 0x18;
            *((rsp + 0x10)) = rax;
            rax = *((rsp + 0x10));
            eax = *(rax);
            *((rsp + 0x20)) = eax;
            if (*((rsp + 0x20)) != 0x10b) {
                if (*((rsp + 0x20)) != 0x20b) {
                } else {
                    rax = *((rsp + 0x10));
                    if (*((rax + 0x5c)) <= 0xe) {
                        eax = 0;
                        goto label_0;
                    }
                    rax = *((rsp + 0x10));
                    if (*((rax + 0xd0)) != 0) {
                        *((rsp + 0x24)) = 1;
                    } else {
                        *((rsp + 0x24)) = 0;
                    }
                    eax = *((rsp + 0x24));
                    goto label_0;
                }
                rax = *((rsp + 0x10));
                *((rsp + 0x18)) = rax;
                rax = *((rsp + 0x18));
                if (*((rax + 0x6c)) <= 0xe) {
                    eax = 0;
                    goto label_0;
                }
                rax = *((rsp + 0x18));
                if (*((rax + 0xe0)) != 0) {
                    *((rsp + 0x28)) = 1;
                } else {
                    *((rsp + 0x28)) = 0;
                }
                eax = *((rsp + 0x28));
                goto label_0;
            }
            eax = 0;
        }
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002950 */
#include <stdint.h>
 
int64_t fcn_140002950 (void) {
    int64_t var_8h;
    *((rsp + 8)) = rbx;
    rbx = 0x1400075c0;
    rdi = 0x1400077d8;
    if (rbx >= rdi) {
        goto label_0;
    }
    do {
        rax = *(rbx);
        if (rax != 0) {
            void (*rax)() ();
        }
        rbx += 8;
    } while (rbx < rdi);
label_0:
    rbx = *((rsp + 0x30));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002940 */
#include <stdint.h>
 
int32_t fcn_140002940 (void) {
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002a90 */
#include <stdint.h>
 
uint64_t fcn_140002a90 (int64_t arg1) {
    int64_t var_20h;
    int64_t var_8h;
    rcx = arg1;
    *((rsp + 8)) = rcx;
    rax = fcn_1400029d0 (*((rsp + 0x40)));
    if (rax == 0) {
        *((rsp + 0x20)) = 0xffffffff;
    } else {
        *((rsp + 0x20)) = 0;
    }
    eax = *((rsp + 0x20));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002ad0 */
#include <stdint.h>
 
void _amsg_exit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001d70 */
#include <stdint.h>
 
int64_t fcn_140001d70 (void) {
    rax = *(gs:0x30);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002dd8 */
#include <stdint.h>
 
void _initterm_e (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002dd2 */
#include <stdint.h>
 
void _initterm (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002d40 */
#include <stdint.h>
 
uint64_t fcn_140002d40 (int64_t arg1) {
    int64_t var_20h;
    uint32_t var_28h;
    int64_t var_30h;
    int64_t var_44h;
    int64_t var_8h;
    rcx = arg1;
    *((rsp + 8)) = rcx;
    rax = 0x140000000;
    *((rsp + 0x20)) = rax;
    eax = fcn_140002c10 (*((rsp + 0x20)));
    if (eax == 0) {
        eax = 0;
    } else {
        rcx = *((rsp + 0x20));
        rax = *((rsp + 0x60));
        rax -= rcx;
        *((rsp + 0x30)) = rax;
        rax = fcn_140002c90 (*((rsp + 0x20)), *((rsp + 0x30)));
        *((rsp + 0x28)) = rax;
        if (*((rsp + 0x28)) == 0) {
            eax = 0;
        } else {
            rax = *((rsp + 0x28));
            eax = *((rax + 0x24));
            eax &= 0x80000000;
            if (eax == 0) {
                *((rsp + 0x44)) = 1;
            } else {
                *((rsp + 0x44)) = 0;
            }
            eax = *((rsp + 0x44));
        }
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140001005 */
#include <stdint.h>
 
int64_t fcn_140001005 (int64_t arg1, signed int64_t arg2) {
    signed int64_t var_20h;
    int64_t var_24h;
    int64_t var_8h;
    signed int64_t var_10h;
    rcx = arg1;
    rdx = arg2;
    *((rsp + 0x10)) = rdx;
    *((rsp + 8)) = ecx;
    rdi = rsp;
    rcx = 0xc;
    eax = 0xcccccccc;
    memset (rdi, eax, rcx);
    ecx = *((rsp + 0x40));
    *((rsp + 0x24)) = 0;
    *((rsp + 0x20)) = 1;
    while (1) {
        eax = *((rsp + 0x20));
        eax++;
        *((rsp + 0x20)) = eax;
        eax = *((rsp + 0x40));
        if (*((rsp + 0x20)) >= eax) {
            goto label_0;
        }
        rax = *((rsp + 0x20));
        rcx = *((rsp + 0x48));
        eax = fcn_14000100f (*((rcx + rax*8)));
        r11d = eax;
        eax = *((rsp + 0x24));
        eax += r11d;
        *((rsp + 0x24)) = eax;
    }
label_0:
    eax = *((rsp + 0x24));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140003466 */
#include <stdint.h>
 
void RtlLookupFunctionEntry (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140003460 */
#include <stdint.h>
 
void RtlVirtualUnwind (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002dde */
#include <stdint.h>
 
void _crt_debugger_hook (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002000 */
#include <stdint.h>
 
uint64_t fcn_140002000 (int64_t arg1) {
    ULONG_PTR * lpArguments;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_60h;
    rcx = arg1;
    rax = rsp + 0x60;
    r9 = rsp + 0x20;
    edx = 0;
    r8d = rdx + 0xa;
    ecx = 0x406d1388;
    RaiseException (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x1400020b0 */
#include <stdint.h>
 
int64_t fcn_1400020b0 (LPCSTR arg4, int64_t arg3, LPCSTR arg1, int64_t arg2) {
    LPWSTR lpWideCharStr;
    int64_t cchWideChar;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    LPCWCH var_50h;
    LPCWCH var_260h;
    int64_t var_470h;
    int64_t var_780h;
    int64_t var_a90h;
    int64_t var_e90h;
    int64_t var_ea8h;
    r9 = arg4;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rax = *(section..data);
    rax ^= rsp;
    *((rsp + 0xe90)) = rax;
    r15d = 0;
    r13 = r9;
    rbp = (int64_t) r8d;
    r14d = edx;
    rdi = rcx;
    r12 = r15;
    rax = fcn_140002870 ();
    rbx = rax;
    if (rax == 0) {
        rcx = rdi;
        rax = fcn_140002860 ();
        r12 = rax;
    }
    r9d |= 0xffffffff;
    r8 = r13;
    edx = 0;
    ecx = 0xfde9;
    eax = MultiByteToWideChar (r15d);
    if (eax < 0x200) {
        rax = rsp + 0xa90;
        r9d |= 0xffffffff;
        r8 = r13;
        edx = 0;
        ecx = 0xfde9;
        eax = MultiByteToWideChar (eax);
        if (eax != 0) {
            rsi = rsp + 0xa90;
        }
    } else {
        rsi = "Runtime Check Error.\n\r Unable to display RTC Message.";
    }
    ecx = 0x1002;
    eax = fcn_140002000 (rcx);
    if (eax != 0) {
        r8 = rdi;
        eax = fcn_140002310 (0x140006ca0, ebp, *((rcx + rbp*4)), rsi);
        if (eax != 0) {
            goto label_0;
        }
    } else {
        al = 1;
    }
    if (r12 == 0) {
        if (rbx == 0) {
            goto label_1;
        }
    }
    if (al != 0) {
        eax = IsDebuggerPresent ();
        if (eax != 0) {
            goto label_1;
        }
    }
    rax = rsp + 0x50;
    r8d = 0x104;
    *((rsp + 0x28)) = 0x104;
    *((rsp + 0x20)) = rax;
    fcn_140002df0 (rdi - 5, rsp + 0x260, r8, rsp + 0x40);
    if (rbx != 0) {
        r8d = *((rsp + 0x40));
        rax = "Run-Time Check Failure #%d - %s";
        r9 = rsp + 0x50;
        rdx = rsp + 0x260;
        ecx = r14d;
        eax = void (*rbx)(uint64_t) (rsi);
    } else {
        rax = rsp + 0x470;
        r8 = rsp + 0x260;
        r9d |= 0xffffffff;
        edx = 0;
        ecx = 0xfde9;
        rdi = "Unknown Filename";
        eax = WideCharToMultiByte (r15);
        *((rsp + 0x38)) = r15;
        rax = rsp + 0x780;
        *((rsp + 0x30)) = r15;
        rbx = rsp + 0x470;
        r8 = rsp + 0x50;
        ecx = 0xfde9;
        if (eax == 0) {
            rbx = rdi;
        }
        r9d |= 0xffffffff;
        edx = 0;
        rdi = "Unknown Module Name";
        eax = WideCharToMultiByte (0x30a);
        r8d = *((rsp + 0x40));
        *((rsp + 0x30)) = r13;
        rax = "Run-Time Check Failure #%d - %s";
        r9 = rsp + 0x780;
        rdx = rbx;
        ecx = r14d;
        if (eax == 0) {
            r9 = rdi;
        }
        eax = void (*r12)(uint64_t) (ebp);
    }
    if (eax == 1) {
label_1:
        DebugBreak ();
    }
label_0:
    rsi = *((rsp + 0xea8));
    rcx = *((rsp + 0xe90));
    fcn_1400017a0 (rsp);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002870 */
#include <stdint.h>
 
int64_t fcn_140002870 (void) {
    rax = *(0x140009700);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002860 */
#include <stdint.h>
 
int64_t fcn_140002860 (void) {
    rax = *(0x1400096f8);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002310 */
#include <stdint.h>
 
uint64_t fcn_140002310 (int64_t arg4, int64_t arg3, int64_t arg1, int64_t arg2) {
    ULONG_PTR * lpArguments;
    int64_t var_28h;
    int64_t var_2ch;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_60h;
    r9 = arg4;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rax = rsp + 0x60;
    r9 = rsp + 0x20;
    edx = 0;
    r8d = rdx + 0xa;
    ecx = 0x406d1388;
    RaiseException (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002df0 */
#include <stdint.h>
 
uint64_t fcn_140002df0 (int64_t arg_30h, LPWSTR lpFilename, DWORD nSize, int64_t arg4, int64_t arg3, LPCVOID lpAddress, int64_t arg2) {
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
    PMEMORY_BASIC_INFORMATION lpBuffer;
    HMODULE hModule;
    int64_t var_b8h;
    int64_t var_c0h;
    int64_t var_f0h;
    int64_t var_f8h;
    int64_t var_18h;
    int64_t var_108h;
    r9 = arg4;
    r8 = arg3;
    rcx = lpAddress;
    rdx = arg2;
    *((rsp + 0x18)) = r8d;
    ebp = 0;
    rsi = rcx - 1;
    r14 = rdx;
    *(r9) = ebp;
    *(rdx) = bp;
    rdx = rsp + 0x78;
    r8d = rbp + 0x30;
    rcx = rsi;
    r13 = r9;
    rax = VirtualQuery (r14, r13, rsi, rbp);
    while (eax == 0) {
label_0:
        eax = 0;
        return rax;
        r8d = *((rsp + 0x118));
        rdx = *((rsp + 0x110));
        rcx = *((rsp + 0x80));
        eax = GetModuleFileNameW ();
    }
    r9 = *((rsp + 0x80));
    eax = 0x5a4d;
    if (*(r9) != ax) {
        goto label_0;
    }
    rax = *((r9 + 0x3c));
    if (eax <= 0) {
        goto label_0;
    }
    rcx = r9 + rax;
    if (*((r9 + rax)) != 0x4550) {
        goto label_0;
    }
    r8d = *((rcx + 6));
    eax = *((rcx + 0x14));
    *((rsp + 0xc0)) = rbx;
    esi -= r9d;
    *((rsp + 0xb8)) = rdi;
    ebx = ebp;
    rdx = rax + rcx + 0x18;
    edi = ebp;
    if (r8d == 0) {
        goto label_1;
    }
    do {
        eax = ebx;
        rcx = rax * 5;
        eax = *((rdx + rcx*8 + 0xc));
        if (esi >= eax) {
            edi = esi;
            edi -= eax;
            if (esi < *((rdx + rcx*8 + 8))) {
                goto label_1;
            }
        }
        ebx++;
    } while (ebx < r8d);
label_1:
    if (ebx != r8d) {
        ebx++;
        if (*(0x140009720) == bpl) {
            if (*(0x140009718) != rbp) {
                goto label_2;
            }
            rax = fcn_1400031d0 ();
            *(0x140009718) = rax;
            if (rax == 0) {
                goto label_2;
            }
            *(0x140009720) = 1;
        } else {
            rax = *(0x140009718);
        }
        rdx = "PDBOpenValidate5";
        rcx = rax;
        rax = GetProcAddress ();
        if (rax == 0) {
            goto label_2;
        }
        rcx = rsp + 0x58;
        r9d = 0;
        r8d = 0;
        rcx = rsp + 0x70;
        rcx = *((rsp + 0x110));
        edx = 0;
        eax = void (*rax)(uint64_t) (rcx);
        if (eax != 0) {
            goto label_3;
        }
    }
label_2:
    eax = 0;
    goto label_4;
label_3:
    rcx = *((rsp + 0x58));
    rax = *(rcx);
    eax = uint64_t (*rax)() ();
    if (eax != 0x131a5b5) {
        goto label_5;
    }
    rcx = *((rsp + 0x58));
    r9 = rsp + 0x68;
    r8 = 0x1400070e4;
    rax = *(rcx);
    edx = 0;
    eax = uint64_t (*rax + 0x38)() ();
    if (eax == 0) {
        goto label_5;
    }
    rcx = *((rsp + 0x68));
    r9 = rsp + 0x48;
    rax = *(rcx);
    r8d = edi;
    edx = (int32_t) bx;
    eax = uint64_t (*rax + 0x40)(uint64_t) (rbp);
    if (eax == 0) {
        goto label_6;
    }
    rcx = *((rsp + 0x48));
    rdx = rsp + 0x40;
    rax = *(rcx);
    al = uint64_t (*rax + 0xd0)(uint64_t) (rbp);
    if (al == 0) {
        goto label_7;
    }
    rcx = *((rsp + 0x40));
    if (rcx == 0) {
        goto label_7;
    }
    rax = *(rcx);
    rsi = rbp;
    eax = uint64_t (*rax + 0x10)() ();
    if (eax == 0) {
        goto label_8;
    }
    do {
        rcx = *((rsp + 0x40));
        rdx = rsp + 0xf8;
        rax = *(rcx);
        rdx = rsp + 0x60;
        r9 = rsp + 0xf0;
        r8 = rsp + 0x108;
        edx = 0;
        al = uint64_t (*rax + 0x18)(uint64_t) (rbp);
        if (al == 0) {
            goto label_9;
        }
        eax = *((rsp + 0xf0));
        if (eax == ebx) {
            ecx = *((rsp + 0x108));
            if (ecx > edi) {
                goto label_10;
            }
            eax = *((rsp + 0x60));
            ecx += eax;
            if (edi < ecx) {
                goto label_11;
            }
        }
label_10:
        rcx = *((rsp + 0x40));
        rax = *(rcx);
        eax = uint64_t (*rax + 0x10)() ();
    } while (eax != 0);
    goto label_8;
label_11:
    eax = *((rsp + 0xf8));
    if (eax == 0) {
        goto label_9;
    }
    rbx = rax;
    rax = 0x1fffffffffffffff;
    if (rbx >= rax) {
        goto label_9;
    }
    rbx <<= 3;
    rax = GetProcessHeap ();
    r8 = rbx;
    rcx = rax;
    edx = 0;
    rax = HeapAlloc ();
    rsi = rax;
    if (rax == 0) {
        goto label_9;
    }
    rcx = *((rsp + 0x40));
    rax = rsp + 0xf8;
    r10 = *(rcx);
    rdx = rsp + 0x50;
    r9d = 0;
    r8d = 0;
    al = uint64_t (*r10 + 0x18)(uint64_t) (rax);
    if (al == 0) {
        goto label_8;
    }
    edi -= *((rsp + 0x108));
    if (edi < *(rsi)) {
        goto label_8;
    }
    edx = *((rsp + 0xf8));
    ebx = 1;
    ecx = 1;
    if (edx <= ebx) {
        goto label_12;
    }
    rax = rsi + 8;
    do {
        if (edi < *(rax)) {
            goto label_12;
        }
        ecx++;
        rax += 8;
    } while (ecx < edx);
label_12:
    edx = *((rsp + 0x50));
    eax = rcx - 1;
    rcx = *((rsp + 0x48));
    eax = *((rsi + rax*8 + 4));
    r9 = rsp + 0x100;
    eax &= 0xffffff;
    r8 = r14;
    *(r13) = eax;
    rax = *(rcx);
    al = uint64_t (*rax + 0xe0)(uint64_t) (rbp);
    if (al != 0) {
    }
label_8:
    rax = GetProcessHeap ();
    r8 = rsi;
    edx = 0;
    rcx = rax;
    HeapFree ();
label_9:
    rcx = *((rsp + 0x40));
    rax = *(rcx);
    uint64_t (*rax)() ();
label_7:
    rcx = *((rsp + 0x48));
    rdx = *(rcx);
    uint64_t (*rdx + 0x80)() ();
label_6:
    rcx = *((rsp + 0x68));
    rdx = *(rcx);
    uint64_t (*rdx + 0x70)() ();
label_5:
    rcx = *((rsp + 0x58));
    rdx = *(rcx);
    uint64_t (*rdx + 0x50)() ();
    eax = ebp;
label_4:
    rbx = *((rsp + 0xc0));
    rdi = *((rsp + 0xb8));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002610 */
#include <stdint.h>
 
uint64_t fcn_140002610 (uint32_t arg4, int64_t arg3, int64_t arg1, int64_t arg2) {
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    r9 = arg4;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    edi = 0;
    r13 = r8;
    r15 = rdx;
    r14 = rcx;
    if (r9 < rbp) {
    }
    if (rbp == 0) {
        goto label_0;
    }
    r12 = rdx;
    rsi = rcx;
    r13 -= rcx;
    rdi = rbp;
    do {
        ebx = *((r13 + rsi));
        rdx = "%.2X ";
        rcx = r12;
        r8d = ebx;
        uint64_t (*0x1400096f0)(uint64_t) (rbx);
        *(rsi) = bl;
        rsi++;
        r12 += 3;
        rbp--;
    } while (rbp != 0);
    r12 = *((rsp + 0x60));
    rsi = *((rsp + 0x58));
    rbx = *((rsp + 0x50));
label_0:
    rax = r15 + rdi*2;
    *((rdi + r14)) = 0;
    *((rdi + rax)) = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x14000341e */
#include <stdint.h>
 
void void_cdecl_terminate_void_ (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140003430 */
#include <stdint.h>
 
void _lock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x14000342a */
#include <stdint.h>
 
void _dllonexit (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140003424 */
#include <stdint.h>
 
void _unlock (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x1400029d0 */
#include <stdint.h>
 
uint64_t fcn_1400029d0 (int64_t arg1) {
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_8h;
    rcx = arg1;
    rcx = *(0x140009758);
    rax = _decode_pointer (rcx);
    *((rsp + 0x20)) = rax;
    if (*((rsp + 0x20)) == -1) {
        rcx = *((rsp + 0x50));
        _onexit ();
    } else {
        ecx = 8;
        _lock ();
        rcx = *(0x140009758);
        rax = _decode_pointer ();
        rcx = *(0x140009740);
        rax = _decode_pointer (rax);
        rcx = *((rsp + 0x50));
        rax = _encode_pointer (rax);
        r8 = rsp + 0x30;
        rdx = rsp + 0x20;
        rcx = rax;
        rax = _dllonexit ();
        rcx = *((rsp + 0x20));
        rax = _encode_pointer (rax);
        *(0x140009758) = rax;
        rcx = *((rsp + 0x30));
        rax = _encode_pointer ();
        *(0x140009740) = rax;
        ecx = 8;
        _unlock ();
        rax = *((rsp + 0x28));
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002c10 */
#include <stdint.h>
 
int64_t fcn_140002c10 (int64_t arg1) {
    int64_t var_8h_2;
    int64_t var_10h;
    int64_t var_8h;
    rcx = arg1;
    *((rsp + 8)) = rcx;
    rax = *((rsp + 0x30));
    *((rsp + 8)) = rax;
    rax = *((rsp + 8));
    eax = *(rax);
    if (eax != 0x5a4d) {
        eax = 0;
    } else {
        rax = *((rsp + 8));
        rcx = *((rax + 0x3c));
        rax = *((rsp + 8));
        rax += rcx;
        *((rsp + 0x10)) = rax;
        rax = *((rsp + 0x10));
        if (*(rax) != 0x4550) {
            eax = 0;
        } else {
            rax = *((rsp + 0x10));
            rax += 0x18;
            *(rsp) = rax;
            rax = *(rsp);
            eax = *(rax);
            if (eax != 0x20b) {
                eax = 0;
            } else {
                eax = 1;
            }
        }
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002c90 */
#include <stdint.h>
 
int64_t fcn_140002c90 (int64_t arg1, uint32_t arg2) {
    uint32_t var_8h_2;
    int64_t var_10h_2;
    int64_t var_8h;
    uint32_t var_10h;
    rcx = arg1;
    rdx = arg2;
    *((rsp + 0x10)) = rdx;
    *((rsp + 8)) = rcx;
    rax = *((rsp + 0x30));
    rcx = *((rax + 0x3c));
    rax = *((rsp + 0x30));
    rax += rcx;
    *(rsp) = rax;
    *((rsp + 8)) = 0;
    rax = *(rsp);
    ecx = *((rax + 0x14));
    rax = *(rsp);
    rax = rax + rcx + 0x18;
    *((rsp + 0x10)) = rax;
    while (1) {
        eax = *((rsp + 8));
        eax++;
        *((rsp + 8)) = eax;
        rax = *((rsp + 0x10));
        rax += 0x28;
        *((rsp + 0x10)) = rax;
        rax = *(rsp);
        eax = *((rax + 6));
        if (*((rsp + 8)) >= eax) {
            goto label_0;
        }
        rax = *((rsp + 0x10));
        eax = *((rax + 0xc));
        if (*((rsp + 0x38)) >= rax) {
            rax = *((rsp + 0x10));
            eax = *((rax + 0xc));
            rcx = *((rsp + 0x10));
            eax += *((rcx + 8));
            if (*((rsp + 0x38)) >= rax) {
                goto label_1;
            }
            rax = *((rsp + 0x10));
            goto label_2;
        }
label_1:
    }
label_0:
    eax = 0;
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x1400031d0 */
#include <stdint.h>
 
int64_t fcn_1400031d0 (void) {
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_34h;
    HMODULE hLibModule;
    LPCSTR lpLibFileName;
    int64_t var_150h;
    int64_t var_160h;
    int64_t var_170h;
    int64_t var_178h;
    int64_t var_180h;
    int64_t var_188h;
    rax = *(section..data);
    rax ^= rsp;
    *((rsp + 0x150)) = rax;
    if (*(0x140009724) != 0) {
        eax = 0;
        rcx = *((rsp + 0x150));
        fcn_1400017a0 (rsp);
        return rax;
    }
    rcx = *(str.MSPDB80.DLL);
    *(0x140009724) = 1;
    rax = LoadLibraryA ();
    if (rax != 0) {
        goto label_0;
    }
    rcx = "ADVAPI32.DLL";
    rax = LoadLibraryA (rsi);
    rsi = rax;
    if (rax == 0) {
        goto label_1;
    }
    rdx = "RegOpenKeyExA";
    rcx = rax;
    rax = GetProcAddress (rbx);
    rbx = rax;
    if (rax == 0) {
        goto label_2;
    }
    rdx = "RegQueryValueExA";
    rcx = rsi;
    rax = GetProcAddress (rbp);
    if (rax == 0) {
        goto label_3;
    }
    rdx = "RegCloseKey";
    rcx = rsi;
    rax = GetProcAddress (r12);
    r12 = rax;
    if (rax != 0) {
        rax = rsp + 0x38;
        rdx = "SOFTWARE\\Microsoft\\VisualStudio\\9.0\\Setup\\VS";
        r9d = 1;
        r8d = 0;
        rcx = 0xffffffff80000002;
        eax = void (*rbx)(uint64_t) (rax);
        if (eax == 0) {
            goto label_4;
        }
        rcx = rsi;
        eax = FreeLibrary ();
    }
    eax = 0;
    goto label_5;
label_4:
    rcx = *((rsp + 0x38));
    rax = rsp + 0x30;
    r9 = rsp + 0x34;
    rdx = "EnvironmentDirectory";
    edi = 0;
    r8d = 0;
    eax = void (*rbp)(uint64_t) (rdi);
    if (eax != 0) {
        goto label_6;
    }
    ecx = *((rsp + 0x30));
    eax = 0x7fffffff;
    eax -= ecx;
    if (eax < 0xd) {
        goto label_6;
    }
    eax = rcx + 0xd;
    if (eax >= 0x104) {
        goto label_6;
    }
    rcx = *((rsp + 0x38));
    rax = rsp + 0x30;
    r9 = rsp + 0x34;
    rax = rsp + 0x40;
    rdx = "EnvironmentDirectory";
    r8d = 0;
    eax = void (*rbp)(uint64_t) (rax);
    rcx = *((rsp + 0x38));
    ebx = eax;
    void (*r12)() ();
    rcx = rsi;
    FreeLibrary ();
    if (ebx != 0) {
        goto label_7;
    }
    edx = *((rsp + 0x30));
    eax = rdx - 2;
    if (*((rsp + rax + 0x40)) != 0x5c) {
        eax = rdx - 1;
        *((rsp + rax + 0x40)) = 0x5c;
    } else {
        edx--;
        *((rsp + 0x30)) = edx;
    }
    r8 = *(str.MSPDB80.DLL);
    do {
        eax = *((rdi + r8));
        ecx = edx;
        rdi++;
        edx++;
        *((rsp + rcx + 0x40)) = al;
    } while (rdi <= 0xb);
    rcx = rsp + 0x40;
    LoadLibraryA ();
    goto label_8;
label_6:
    rcx = rsi;
    eax = FreeLibrary ();
label_7:
    eax = 0;
label_8:
    rdi = *((rsp + 0x188));
label_5:
    r12 = *((rsp + 0x160));
label_3:
    rbp = *((rsp + 0x178));
label_2:
    rbx = *((rsp + 0x170));
label_1:
    rsi = *((rsp + 0x180));
label_0:
    rcx = *((rsp + 0x150));
    fcn_1400017a0 (rsp);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_pe_from_rec_msvc8_debug/subject.exe @ 0x140002be4 */
#include <stdint.h>
 
void _XcptFilter (void) {
}
