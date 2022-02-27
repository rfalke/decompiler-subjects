/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400900 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = __libc_csu_init;
    rdi = main;
    GLIBC_2_2_5 (rsp, rax);
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0xe4db40 */
#include <stdint.h>
 
void libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15d = edi;
    r12 = segment_LOAD1;
    rbp = 0x0105de18;
    r14 = rsi;
    r13 = rdx;
    rbp -= r12;
    rbp >>= 3;
    _init ();
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r13;
        rsi = r14;
        edi = r15d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400828 */
#include <stdint.h>
 
int64_t init (void) {
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0xe4dbb0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0xe4dbb4 */
#include <stdint.h>
 
void fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400850 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400860 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400870 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400880 */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400890 */
#include <stdint.h>
 
void srand (void) {
    srand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x4008a0 */
#include <stdint.h>
 
void getchar (void) {
    getchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x4008b0 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x4008c0 */
#include <stdint.h>
 
void time (void) {
    time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x4008d0 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x4008e0 */
#include <stdint.h>
 
void fflush (void) {
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x4008f0 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400da9 */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_ba4a0h;
    int64_t var_94a34h;
    int64_t var_908cch;
    int64_t var_908c8h;
    int64_t var_908c4h;
    int64_t var_908c0h;
    int64_t var_908bch;
    int64_t var_908b8h;
    int64_t var_908b4h;
    int64_t var_908b0h;
    int64_t var_908ach;
    int64_t var_908a8h;
    int64_t var_65f48h;
    int64_t var_65f40h;
    void * var_5dbc0h;
    int64_t var_5dbb8h;
    int64_t var_5dbb0h;
    int64_t var_5dba8h;
    int64_t var_5dba0h;
    int64_t var_5db98h;
    int64_t var_5db90h;
    int64_t var_5db88h;
    int64_t var_5db80h;
    int64_t var_5db78h;
    int64_t var_5db70h;
    int64_t var_5db68h;
    int64_t var_5db60h;
    void * s1;
    void * var_2ab40h;
    void * var_28600h;
    void * var_25aa0h;
    void * var_22f40h;
    int64_t var_18h;
    rax = *(fs:0x28);
    *((rbp - 0x18)) = rax;
    eax = 0;
    eax = time (0);
    srand (eax);
    *((rbp - 0xba4a0)) = 0;
    *((rbp - 0x94a34)) = 0;
    *((rbp - 0x65f48)) = 0;
    rax = rbp - 0x2d080;
    ecx = 0xe4dc00;
    memcpy (rax, rcx, 0x253c);
    rax = rbp - 0x2ab40;
    ecx = 0xe50140;
    memcpy (rax, rcx, 0x253c);
    rax = rbp - 0x28600;
    ecx = 0xe52680;
    memcpy (rax, rcx, 0x2b5c);
    rax = rbp - 0x25aa0;
    ecx = 0xe551e0;
    memcpy (rax, rcx, 0x2b5c);
    rax = rbp - 0x22f40;
    ecx = 0xe57d40;
    memcpy (rax, rcx, 0x56b8);
    *((rbp - 0x65f40)) = 0;
    rax = *((rbp - 0x65f40));
    edx = eax;
    rax = rbp - 0x2ab40;
    *((rbp - 0x5db78)) = rax;
    rax = rbp - 0x2d080;
    *((rbp - 0x5db70)) = rax;
    *((rbp - 0x908b0)) = edx;
    rax = *((rbp - 0x5db70));
    *((rbp - 0x5db68)) = rax;
    eax = *((rbp - 0x908b0));
    *((rbp - 0x908ac)) = eax;
    eax = *((rbp - 0x908ac));
    ecx = eax * 0x7aa;
    edx = 0x3700c083;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 9;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax *= 0x94f;
    ecx -= eax;
    eax = ecx;
    rax = (int64_t) eax;
    rdx = rax*4;
    rax = *((rbp - 0x5db68));
    rax += rdx;
    eax = *(rax);
    rdx = *((rbp - 0x5db78));
    *((rbp - 0x5db60)) = rdx;
    *((rbp - 0x908a8)) = eax;
    eax = *((rbp - 0x908a8));
    ecx = eax * 0x5a5;
    edx = 0x3700c083;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 9;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax *= 0x94f;
    ecx -= eax;
    eax = ecx;
    rax = (int64_t) eax;
    rdx = rax*4;
    rax = *((rbp - 0x5db60));
    rax += rdx;
    eax = *(rax);
    rdx = rbp - 0x25aa0;
    *((rbp - 0x5db98)) = rdx;
    rdx = rbp - 0x28600;
    *((rbp - 0x5db90)) = rdx;
    *((rbp - 0x908bc)) = eax;
    rax = *((rbp - 0x5db90));
    *((rbp - 0x5db88)) = rax;
    eax = *((rbp - 0x908bc));
    *((rbp - 0x908b8)) = eax;
    eax = *((rbp - 0x908b8));
    ecx = eax * 0x259;
    edx = 0x2f3bafed;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 9;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax *= 0xad7;
    ecx -= eax;
    eax = ecx;
    rax = (int64_t) eax;
    rdx = rax*4;
    rax = *((rbp - 0x5db88));
    rax += rdx;
    eax = *(rax);
    rdx = *((rbp - 0x5db98));
    *((rbp - 0x5db80)) = rdx;
    *((rbp - 0x908b4)) = eax;
    eax = *((rbp - 0x908b4));
    ecx = eax * 0x1d5;
    edx = 0x2f3bafed;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 9;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax *= 0xad7;
    ecx -= eax;
    eax = ecx;
    rax = (int64_t) eax;
    rdx = rax*4;
    rax = *((rbp - 0x5db80));
    rax += rdx;
    esi = *(rax);
    rax = *((rbp - 0x65f40));
    rdx = rax + 1;
    *((rbp - 0x65f40)) = rdx;
    edx = eax;
    rax = rbp - 0x2ab40;
    *((rbp - 0x5dbb8)) = rax;
    rax = rbp - 0x2d080;
    *((rbp - 0x5dbb0)) = rax;
    *((rbp - 0x908c8)) = edx;
    rax = *((rbp - 0x5dbb0));
    *((rbp - 0x5dba8)) = rax;
    eax = *((rbp - 0x908c8));
    *((rbp - 0x908c4)) = eax;
    eax = *((rbp - 0x908c4));
    ecx = eax * 0x7aa;
    edx = 0x3700c083;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 9;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax *= 0x94f;
    ecx -= eax;
    eax = ecx;
    rax = (int64_t) eax;
    rdx = rax*4;
    rax = *((rbp - 0x5dba8));
    rax += rdx;
    eax = *(rax);
    rdx = *((rbp - 0x5dbb8));
    *((rbp - 0x5dba0)) = rdx;
    *((rbp - 0x908c0)) = eax;
    eax = *((rbp - 0x908c0));
    ecx = eax * 0x5a5;
    edx = 0x3700c083;
    eax = ecx;
    edx:eax = eax * edx;
    edx >>= 9;
    eax = ecx;
    eax >>= 0x1f;
    edx -= eax;
    eax = edx;
    eax *= 0x94f;
    ecx -= eax;
    eax = ecx;
    rax = (int64_t) eax;
    rdx = rax*4;
    rax = *((rbp - 0x5dba0));
    rax += rdx;
    eax = *(rax);
    rax = (int64_t) eax;
    rax = *((rbp + rax*8 - 0x22f40));
    *((rbp - 0x5dbc0)) = rax;
    *((rbp - 0x908cc)) = esi;
    eax = *((rbp - 0x908cc));
    rdx = (int64_t) eax;
    rax = *((rbp - 0x5dbc0));
    rax += rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400930 */
#include <stdint.h>
 
int32_t fcn_00400930 (void) {
    eax = stdout;
    if (rax != obj.stdout) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = stdout;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400b14 */
#include <stdint.h>
 
int64_t fcn_00400b14 (void * arg2, uint32_t arg1) {
    void * var_2ch;
    uint32_t var_28h;
    uint32_t var_18h;
    rsi = arg2;
    rdi = arg1;
    do {
        *((rbp - 0x28)) = rdi;
        *((rbp - 0x2c)) = esi;
        if (*((rbp - 0x28)) == 0) {
            eax = 0;
            goto label_0;
        }
        rax = *((rbp - 0x28));
        rax = *(rax);
        if (rax == 0) {
            rax = malloc (0x10);
            *((rbp - 0x18)) = rax;
            if (*((rbp - 0x18)) == 0) {
                exit (0);
            }
            rax = *((rbp - 0x18));
            edx = *((rbp - 0x2c));
            *((rax + 8)) = edx;
            rax = *((rbp - 0x28));
            rdx = *(rax);
            rax = *((rbp - 0x18));
            *(rax) = rdx;
            goto label_1;
        }
        rax = *((rbp - 0x28));
        rax = *(rax);
        rdx = *(rax);
        rax = *((rbp - 0x28));
        rbx = *(rax);
        eax = *((rbp - 0x2c));
        rax = fcn_00400b14 (rdx, *((rbp - 0x2c)));
    } while (1);
    *(rbx) = rax;
    rax = *((rbp - 0x28));
    rax = *(rax);
    *((rbp - 0x18)) = rax;
label_1:
    rax = *((rbp - 0x28));
    rdx = *((rbp - 0x18));
    *(rax) = rdx;
    rax = *((rbp - 0x28));
    rax = *(rax);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400cb5 */
#include <stdint.h>
 
int64_t fcn_00400cb5 (int64_t arg2, uint32_t arg1) {
    int64_t var_ch;
    uint32_t var_8h;
    rsi = arg2;
    rdi = arg1;
    do {
        *((rbp - 8)) = rdi;
        *((rbp - 0xc)) = esi;
        if (*((rbp - 8)) == 0) {
            goto label_0;
        }
        eax = *((rbp - 0xc));
        edx = rax + 1;
        rax = *((rbp - 8));
        rax = *(rax);
        fcn_00400cb5 (rax, edx);
    } while (1);
    goto label_1;
label_0:
    eax = *((rbp - 0xc));
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400ce9 */
#include <stdint.h>
 
int64_t fcn_00400ce9 (int64_t arg1) {
    int64_t var_8h;
    rdi = arg1;
    *((rbp - 8)) = rdi;
    rax = *((rbp - 8));
    fcn_00400cb5 (rax, 0);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x4009d7 */
#include <stdint.h>
 
int64_t fcn_004009d7 (uint32_t arg1) {
    uint32_t var_18h;
    int64_t var_ch;
    void * ptr;
    rdi = arg1;
    *((rbp - 0x18)) = rdi;
    if (*((rbp - 0x18)) != 0) {
        rax = *((rbp - 0x18));
        rax = *(rax);
        if (rax != 0) {
            goto label_0;
        }
    }
    eax = 0;
    goto label_1;
label_0:
    rax = *((rbp - 0x18));
    rax = *(rax);
    *((rbp - 8)) = rax;
    rax = *((rbp - 0x18));
    rax = *(rax);
    rdx = *(rax);
    rax = *((rbp - 0x18));
    *(rax) = rdx;
    rax = *((rbp - 8));
    eax = *((rax + 8));
    *((rbp - 0xc)) = eax;
    rax = *((rbp - 8));
    *((rax + 8)) = 0;
    rax = *((rbp - 8));
    *(rax) = 0;
    rax = *((rbp - 8));
    free (*((rbp - 8)));
    *((rbp - 8)) = 0;
    eax = *((rbp - 0xc));
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400d55 */
#include <stdint.h>
 
int64_t fcn_00400d55 (int64_t arg3, uint32_t arg2, int64_t arg1) {
    int64_t var_20h;
    uint32_t var_1ch;
    int64_t var_18h;
    int64_t var_8h;
    int64_t var_4h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x18)) = rdi;
    *((rbp - 0x1c)) = esi;
    *((rbp - 0x20)) = edx;
    rax = *((rbp - 0x18));
    eax = fcn_00400ce9 (*((rbp - 0x18)));
    eax--;
    *((rbp - 4)) = eax;
    *((rbp - 8)) = 0;
    while (*((rbp - 0x1c)) != eax) {
        rax = *((rbp - 0x18));
        rax = *(rax);
        *((rbp - 0x18)) = rax;
        *((rbp - 8))++;
        eax = *((rbp - 4));
        eax -= *((rbp - 8));
    }
    rax = *((rbp - 0x18));
    edx = *((rbp - 0x20));
    *((rax + 8)) = edx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400d08 */
#include <stdint.h>
 
int64_t fcn_00400d08 (uint32_t arg2, int64_t arg1) {
    uint32_t var_1ch;
    int64_t var_18h;
    int64_t var_8h;
    int64_t var_4h;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x18)) = rdi;
    *((rbp - 0x1c)) = esi;
    rax = *((rbp - 0x18));
    eax = fcn_00400ce9 (*((rbp - 0x18)));
    eax--;
    *((rbp - 4)) = eax;
    *((rbp - 8)) = 0;
    while (*((rbp - 0x1c)) != eax) {
        rax = *((rbp - 0x18));
        rax = *(rax);
        *((rbp - 0x18)) = rax;
        *((rbp - 8))++;
        eax = *((rbp - 4));
        eax -= *((rbp - 8));
    }
    rax = *((rbp - 0x18));
    eax = *((rax + 8));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0x400aae */
#include <stdint.h>
 
uint64_t fcn_00400aae (void * arg2, uint32_t arg1) {
    void * var_1ch;
    uint32_t var_18h;
    uint32_t var_8h;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x18)) = rdi;
    *((rbp - 0x1c)) = esi;
    if (*((rbp - 0x18)) == 0) {
        eax = 0xffffffff;
    } else {
        rax = malloc (0x10);
        *((rbp - 8)) = rax;
        if (*((rbp - 8)) == 0) {
            exit (0);
        }
        rax = *((rbp - 8));
        edx = *((rbp - 0x1c));
        *((rax + 8)) = edx;
        rax = *((rbp - 0x18));
        rdx = *(rax);
        rax = *((rbp - 8));
        *(rax) = rdx;
        rax = *((rbp - 0x18));
        rdx = *((rbp - 8));
        *(rax) = rdx;
        eax = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/MarsAnalytica/x64_elf_decompressed/subject.exe @ 0xe59c06 */
#include <stdint.h>
 
int64_t fcn_00e59c06 (void) {
    *(rax) += al;
}
