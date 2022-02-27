/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401577 */
#include <stdint.h>
 
void entry0 (void) {
label_2:
    ebp = 0;
    ebx = 0x400000;
    fcn_004012f0 (rcx);
    *(0x00437fb4) |= 1;
    eax = 0x405008;
    ecx = 0x405008;
    do {
        if (rcx == rax) {
            goto label_3;
        }
        uint64_t (*rax)(uint64_t, uint64_t) (rcx, rax);
        rax += 8;
    } while (1);
label_3:
    rdi = r12;
    rsi = r13;
    rdx = r14;
    eax = fcn_00401460 ();
    edi = eax;
    eax = fcn_0040153d (rcx, rdx);
    ecx = 0x800;
    eax = 0;
    *((rbp - 0xe040)) = rax;
    *((rbp - 0xe038)) = rax;
    eax = SetDefaultDllDirectories (rbx, r12, r13, r14, r15);
    if (eax == 0) {
        rcx = 0xfffffffffffffff4;
        rax = GetStdHandle ();
        r9 = rbp - 0x8030;
        rcx = rax;
        r8d = 6;
        edx = 0x4047b1;
        WriteFile (0);
        ecx = 1;
        ExitProcess ();
    }
    rax = 4;
    *(0x004362b8) = eax;
    rax = GetCommandLineW (4);
    r12 = rax;
    rax = GetEnvironmentStringsW ();
    rsi = rbp - 0xc02f;
    rdi = r12;
    r8d = 0x200;
    r13 = rax;
    eax = fcn_0040180c (rbp - 0xd030, rdx, 0x3fff);
    r12d = eax;
    eax = 0;
    do {
        rcx = *((rbp - 0xd030));
        rcx += rax;
        dl = *(rcx);
        if (dl == 0) {
            goto label_4;
        }
        if (dl == 0x5c) {
            *(rcx) = 0x2f;
        }
        rax++;
    } while (1);
label_4:
    eax = *(r13);
    if (ax <= 0xd7ff) {
        *((rbp - 0xe044)) = eax;
        eax = 1;
    } else {
        rsi = rbp - 0xe044;
        rdi = r13;
        eax = fcn_0040436d (rcx, rdx);
    }
    rcx = rbp - 0x8030;
    r10 = rbp - 0x32;
    rax += rax;
    rsi = rbp - 0xe044;
    r8d = 0;
    rdx = r13 + rax;
    r11 = rcx;
    ebx = 0;
    r14d = 0x7ffd;
label_1:
    if (*((rbp - 0xe044)) == 0) {
        goto label_5;
    }
    r8++;
    if (r8 <= 0x1ff) {
        rax = rbx;
        if (rcx < r10) {
            rax = rcx;
        }
        *((rbp + r8*8 - 0xe038)) = rax;
    }
label_0:
    r9d = *((rbp - 0xe044));
    rax = (int64_t) r9d;
    if (r9d <= 0x7f) {
        goto label_6;
    }
    edi = r9d;
    al = fcn_0040437c (rcx, rdx);
    do {
label_6:
        if (rcx >= r10) {
            goto label_7;
        }
        rcx++;
        *((rcx - 1)) = al;
        rax >>= 8;
    } while (rax != 0);
label_7:
    eax = *(rdx);
    if (ax <= 0xd7ff) {
        *((rbp - 0xe044)) = eax;
        eax = 1;
    } else {
        rdi = rdx;
        eax = fcn_0040436d (rcx, rdx);
    }
    rax += rax;
    rdx += rax;
    if (r9d != 0) {
        goto label_0;
    }
    rax = rcx;
    rax -= r11;
    if (rax > 0x7ffd) {
        rax = r14;
    }
    *((rbp + rax - 0x8030)) = 0;
    goto label_1;
label_5:
    if (rcx < r10) {
        *(rcx) = 0;
        rcx++;
    }
    rcx -= r11;
    eax = 0x7ffe;
    r14 = rbp - 0xe030;
    r15 = rbp - 0xe040;
    if (rcx > 0x7ffe) {
        rcx = rax;
    }
    eax = 0x1ff;
    if (r8 > 0x1ff) {
        r8 = rax;
    }
    *((rbp + rcx - 0x8030)) = 0;
    rcx = r13;
    *((rbp + r8*8 - 0xe030)) = 0;
    r13 = rbp - 0xd030;
    FreeEnvironmentStringsW ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4012f0 */
#include <stdint.h>
 
int64_t fcn_004012f0 (int64_t arg2) {
    rdx = arg2;
    edi = 0x436000;
    esi = 0x404d28;
    __asm ("rdtsc");
    memset (rdi, eax, rcx);
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    memset (rdi, eax, rcx);
    r8 = rdi;
    eax = 0;
    do {
        ecx = 0;
        __asm ("cpuid");
        memset (rdi, eax, rcx);
        tmp_1 = eax;
        eax = ebx;
        ebx = tmp_1;
        memset (rdi, eax, rcx);
        tmp_2 = eax;
        eax = ecx;
        ecx = tmp_2;
        memset (rdi, eax, rcx);
        tmp_3 = eax;
        eax = edx;
        edx = tmp_3;
        memset (rdi, eax, rcx);
label_0:
        rax = 1;
        if (eax == 0) {
            goto label_2;
        }
    } while (al <= *(r8));
    rdi += 0x10;
    goto label_0;
label_2:
    rbx = 1;
    rax = r15;
    *(rdi) = rax;
    rdi += 8;
    rax = fcn_004014ba ();
    rax |= 0xffffffffffffffff;
    *(rdi) = rax;
    rdi += 8;
    *(rdi) = rax;
    rdi += 8;
    *(rdi) = rax;
    rdi += 8;
    rcx = 0x20;
    edx = 0x404434;
    fcn_0040150f (0x40462e, rdx);
    rcx = 0x20;
    edx = 0x40457c;
    fcn_0040150f (rcx, rdx);
    rax = *(r13);
    *(rdi) = rax;
    rdi += 8;
    eax = 0x404690;
    *(rdi) = rax;
    rdi += 8;
    if ((*(rdi) & 8) == 0) {
        if ((*(rdi) & 0x20) == 0) {
            if ((*(rdi) & 4) == 0) {
                if (*(r15) != 0) {
                    esi = 0x404da2;
                } else {
                }
                esi = 0x404df1;
            } else {
            }
            esi = 0x404d79;
        } else {
        }
        esi = 0x404dc9;
    } else {
        esi = 0x404e30;
    }
    ecx = 0x404310;
    rax = 8;
    *(rdi) = rax;
    rdi += 8;
    rax = 8;
    rax += rcx;
    *(rdi) = rax;
    rdi += 8;
    edi = 0x4362e8;
    r9 |= 0xffffffffffffffff;
    ebx = 0x4363d8;
label_1:
    if (rdi >= rbx) {
        goto label_3;
    }
    ecx = 0;
    edx = 0;
    do {
        al = *(rsi);
        rsi++;
        r8 = rax;
        r8d &= 0x7f;
        r8 <<= cl;
        ecx += 7;
        rdx |= r8;
    } while (al < 0);
    if ((al & 0x40) != 0) {
        rax = r9;
        rax <<= cl;
        rdx |= rax;
    }
    rax = rdx;
    if (*(rdi) != 0) {
        rax = *(rdi);
    }
    *(rdi) = rax;
    rdi += 8;
    goto label_1;
label_3:
    rsi = rdi;
    rbx = rdi;
    ecx = 0x437f80;
    GetSystemInfo ();
    eax = 0x403817;
    *(rdi) = rax;
    rdi += 8;
    fcn_00401466 ();
    eax = fcn.00403312;
    *(rdi) = rax;
    rdi += 8;
    eax = 0x403c02;
    *(rdi) = rax;
    rdi += 8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401460 */
#include <stdint.h>
 
int32_t fcn_00401460 (void) {
    eax = 0x2a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40153d */
#include <stdint.h>
 
void fcn_0040153d (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r12d = edi;
    edi = 0;
    fcn_004041e6 (rcx, rdx);
    edi = r12d;
    return fcn_004046c1 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4041e6 */
#include <stdint.h>
 
void fcn_004041e6 (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r12 = rdi;
    ebx = 1;
label_1:
    rdi = *(0x004367e0);
    if (rdi == 0) {
        goto label_3;
    }
label_2:
    eax = *(rdi);
    do {
label_0:
        if (rax == 0) {
            goto label_4;
        }
        __asm ("bsf ecx, eax");
        edx = ebx;
        edx <<= cl;
        edx = ~edx;
        rax &= rdx;
        if (r12 == 0) {
            goto label_5;
        }
        rsi = rcx * 0x18;
    } while (*((rdi + rsi + 0x20)) != r12);
label_5:
    rcx *= 0x18;
    *(rdi) &= edx;
    rcx += rdi;
    rdx = *((rcx + 0x10));
    if (rdx == 0) {
        goto label_0;
    }
    rdi = *((rcx + 0x18));
    void (*rdx)() ();
    goto label_1;
label_4:
    r13 = *((rdi + 8));
    if (r12 == 0) {
        if (r13 != 0) {
            eax = fcn.00401acc;
            if (rax == 0) {
                goto label_6;
            }
            fcn_00401acc ();
        }
label_6:
        *(0x004367e0) = r13;
        goto label_1;
    }
    if (r13 != 0) {
        rdi = r13;
        goto label_2;
    }
label_3:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4046c1 */
#include <stdint.h>
 
int32_t fcn_004046c1 (void) {
    *(0x00437fb4) |= 4;
    if ((*(0x004362b8) & 4) != 0) {
        ecx = (int32_t) dil;
        ExitProcess ();
    }
    eax = *(0x00436370);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("cli");
    __asm ("lidt [0x4046f2]");
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40180c */
#include <stdint.h>
 
uint64_t fcn_0040180c (int64_t arg3, int64_t arg1, int64_t arg2) {
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    uint32_t var_40h;
    uint32_t var_38h;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rax = rsi + rdx;
    r11 = rdx;
    r10 = r8;
    r15 = 0x100002600;
    r13 = rsi;
    ebx = 0;
    *((rbp - 0x50)) = rdi;
    rdi = rbp - 0x50;
    *((rbp - 0x58)) = rcx;
    *((rbp - 0x48)) = rsi;
    *((rbp - 0x40)) = rax;
    fcn_004017b1 (rcx);
label_2:
    if (*((rbp - 0x38)) == 0) {
        goto label_3;
    }
    do {
        eax = *((rbp - 0x38));
        if (eax == 0) {
            goto label_3;
        }
        if (eax > 0x20) {
            goto label_4;
        }
        if (((r15 >> rax) & 1) >= 0) {
            goto label_4;
        }
        rdi = rbp - 0x50;
        fcn_004017b1 (rcx);
    } while (1);
label_3:
    rdi = rbp - 0x50;
    esi = 0;
    fcn_004017dc (rcx);
    if (r11 != 0) {
        rax = *((rbp - 0x48));
        r11--;
        rax -= r13;
        if (rax > r11) {
            rax = r11;
        }
        *((r13 + rax)) = 0;
    }
    if (r10 == 0) {
        goto label_5;
    }
    r10--;
    rax = *((rbp - 0x58));
    if (r10 > rbx) {
        r10 = rbx;
    }
    *((rax + r10*8)) = 0;
    goto label_5;
label_4:
    rbx++;
    if (rbx < r10) {
        rax = *((rbp - 0x48));
        if (rax >= *((rbp - 0x40))) {
            eax = 0;
        }
        rdx = *((rbp - 0x58));
        *((rdx + rbx*8 - 8)) = rax;
    }
    r14d = 0;
label_0:
    esi = *((rbp - 0x38));
    if (esi == 0) {
        goto label_6;
    }
    if (r14b == 0) {
        if (esi > 0x20) {
            goto label_7;
        }
        if (((r15 >> rsi) & 1) >= 0) {
            goto label_8;
        }
        goto label_6;
    }
label_7:
    if (esi != 0x22) {
        if (esi != 0x5c) {
            goto label_8;
        }
    }
    r12d = 0;
    do {
        if (*((rbp - 0x38)) != 0x5c) {
            goto label_9;
        }
        rdi = rbp - 0x50;
        r12++;
        fcn_004017b1 (rcx);
    } while (1);
label_9:
    r9d = 0;
    do {
        if (*((rbp - 0x38)) != 0x22) {
            goto label_10;
        }
        rdi = rbp - 0x50;
        fcn_004017b1 (rcx);
        r9++;
    } while (1);
label_10:
    rax = r12;
    if (r9 != 0) {
        goto label_11;
    }
label_1:
    r12--;
    if (r12 == -1) {
        goto label_0;
    }
    rdi = rbp - 0x50;
    esi = 0x5c;
    rax = fcn_004017dc (rcx);
    goto label_1;
    do {
label_11:
        if (rax <= 1) {
            goto label_12;
        }
        rdi = rbp - 0x50;
        esi = 0x5c;
        *((rbp - 0x60)) = rax;
        fcn_004017dc (rcx);
        rax = *((rbp - 0x60));
        rax -= 2;
    } while (1);
label_12:
    r12b &= 1;
    if (r12b == 0) {
        goto label_13;
    }
    rdi = rbp - 0x50;
    esi = 0x22;
    fcn_004017dc (rcx);
    r9--;
    if (r9 == 0) {
        goto label_0;
    }
label_13:
    r14d = 3;
    r12 = r9 + 1;
    do {
        if (r12 < r14) {
            goto label_14;
        }
        rdi = rbp - 0x50;
        esi = 0x22;
        r14 += 3;
        fcn_004017dc (rcx);
    } while (1);
label_14:
    edx = 0;
    ecx = 3;
    rax = r9;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r14b = (rdx == 0) ? 1 : 0;
    goto label_0;
label_8:
    rdi = rbp - 0x50;
    fcn_004017dc (rcx);
    rdi = rbp - 0x50;
    fcn_004017b1 (rcx);
    goto label_0;
label_6:
    rdi = rbp - 0x50;
    esi = 0;
    fcn_004017dc (rcx);
    goto label_2;
label_5:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40436d */
#include <stdint.h>
 
void fcn_0040436d (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    fcn_004043af (rcx, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4043af */
#include <stdint.h>
 
int32_t fcn_004043af (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    eax = 0;
    do {
        edx = eax;
        ebx = eax;
        eax++;
        edx = *((rdi + rdx*2));
        ecx = edx;
        cx &= 0xfc00;
    } while (cx == 0xdc00);
    if (cx != 0xd800) {
        *(rsi) = edx;
    } else {
        eax = *((rdi + rax*2));
        ecx = eax;
        cx &= 0xfc00;
        if (cx != 0xdc00) {
            *(rsi) = 0xfffd;
            eax |= 0xffffffff;
        } else {
            edx <<= 0xa;
            eax = rdx + rax - 0x35fdc00;
            *(rsi) = eax;
            eax = rbx + 2;
        }
    }
    rcx = rdx;
    rbx = rdx;
    rsi = rdx;
    rdi = rdx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40437c */
#include <stdint.h>
 
int64_t fcn_0040437c (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    eax = 0;
    if (edi <= 0x7f) {
        goto label_0;
    }
    __asm ("bsr ecx, edi");
    edx = 0x4047e7;
    ecx = *((rdx + rcx*2 - 0xe));
    do {
        edx = edi;
        edi >>= 6;
        dl &= 0x3f;
        al |= 0x80;
        al |= dl;
        rax <<= 8;
        cl--;
    } while (cl != 0);
    al |= ch;
label_0:
    rax |= rdi;
    rcx = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401158 */
#include <stdint.h>
 
int64_t fcn_00401158 (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r8 = rcx;
    r9 = 0x3fffffffff000;
    ecx = 0x27;
    do {
        rax = rdi;
        esi--;
        rax >>= cl;
        eax &= 0x1ff;
        if (esi == 0xffffffff) {
            rax = rdx + rax*8;
            return rax;
        }
        rdx = rdx + rax*8;
        if (*(rdx) == 0) {
            rax = *(r8);
            rax -= 0x1000;
            *(r8) = rax;
            rax |= 3;
            *(rdx) = rax;
        }
        rax = *(rdx);
        ecx -= 9;
        rax &= r9;
        rdx = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4014ba */
#include <stdint.h>
 
uint64_t fcn_004014ba (void) {
    rcx = 0xfffffffffffffff6;
    ebx = 0x437de0;
    rax = rbx + 0x18;
    rbx = 3;
    *((rbx + 0x10)) = rax;
    rbx + 8 = 0x10;
    rax = 1;
    *((rbx + 0x28)) = eax;
    *((rbx + 0x40)) = eax;
    *((rbx + 0x58)) = eax;
    rax = GetStdHandle (1, 0x10, 3, rbx, rsi, rdi, 0xfffffffffffffff6);
    rcx = 0xfffffffffffffff5;
    *((rbx + 0x18)) = rax;
    rax = GetStdHandle (0xfffffffffffffff5);
    rcx = 0xfffffffffffffff4;
    *((rbx + 0x30)) = rax;
    rax = GetStdHandle (0xfffffffffffffff4);
    *((rbx + 0x48)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40150f */
#include <stdint.h>
 
int64_t fcn_0040150f (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r8b = (? != ?) ? 1 : 0;
    r8b <<= 1;
    do {
        eax = 0;
        al = *(rsi);
        rsi++;
        rax += rdx;
        *(rdi) = rax;
        rdi += 8;
        ecx--;
    } while (ecx != 0);
    eax = 0;
    al = ((*(0x0043603d) & 2) != 0) ? 1 : 0;
    al |= r8b;
    al = *((rsi + rax));
    rax += rdx;
    *(rdi) = rax;
    rdi += 8;
    rax = *(rsi);
    rsi += 8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401466 */
#include <stdint.h>
 
void fcn_00401466 (void) {
    fcn_00403cbb ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x403cbb */
#include <stdint.h>
 
uint64_t fcn_00403cbb (void) {
    if (*(0x004367a0) == 0) {
        eax = 0x10000;
        if (*(0x00437fa8) >= 0x10000) {
            eax = *(0x00437fa8);
        }
        rdx = rax - 1;
        if ((rdx & rax) != 0) {
            rax = fcn_00401000 ();
        }
        *(0x004367b0) = rax;
        rax = *(0x00436000);
        *(0x004367a8) = 0x1000;
        *(0x004367b8) = 0x40000;
        *(0x004367c0) = 0xa00000;
        *(0x004367c8) = 5;
        rax &= 0xfffffffffffffff8;
        *(0x00436750) = 5;
        rax |= 8;
        *(0x004367a0) = rax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t fcn_00401000 (void) {
    int64_t var_38h;
    /* [00] sr-x section size 16384 named .text */
    *(0x00437fb4) |= 2;
    if ((*(0x004362b8) & 4) == 0) {
        edi = *(0x00436358);
        rsi = rsp;
        rsi + 8 = 0xffffffffffffffff;
        rsi = 0xffffffffffffffff;
        edx = 0;
        r10 = 0x10;
        eax = *(0x00436388);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        eax = *(0x00436378);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        edi = eax;
        esi = 6;
        eax = *(0x00436380);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    }
    edi = 0x86;
    fcn_004046c1 ();
    rcx = rdx;
    r15 = rsi;
    r14d = 0x400000;
    r13 = rdi;
    r12d = 0x100000;
    rbx = rdi;
label_3:
    if (*((rbx + 8)) == 0) {
        goto label_4;
    }
    do {
        edx = *((rbx + 0x10));
        rax = rbx;
        rbx += 0x18;
        edx--;
        if (edx == 0) {
            goto label_5;
        }
    } while (*((rbx + 8)) != 0);
    goto label_6;
label_5:
    rbx = rax;
label_6:
    if (*(rbx) >= r12) {
        r12 = *(rbx);
    }
    r12 += 0xfff;
label_1:
    r12 &= 0xfffffffffffff000;
label_2:
    rax = *((rbx + 8));
    rax += *(rbx);
    rax &= 0xfffffffffffff000;
    if (r12 >= rax) {
        goto label_7;
    }
    do {
        rdx = *((r13 + 8));
        if (rdx == 0) {
            goto label_8;
        }
        if (*((r13 + 0x10)) != 1) {
            goto label_9;
        }
label_0:
        r13 += 0x18;
    } while (1);
label_9:
    rax = *(r13);
    rax += rdx;
    if (rax < r12) {
        goto label_0;
    }
label_8:
    rax = *(r13);
    if (rax <= r12) {
        rax += rdx;
        if (rax <= r12) {
            goto label_10;
        }
        r12 = rax + 0xfff;
        goto label_1;
    }
label_10:
    rdi = r14;
    esi = 3;
    *((rbp - 0x38)) = rcx;
    r14 += 0x1000;
    fcn_00401158 (rcx, r15);
    rdx = r12;
    rcx = *((rbp - 0x38));
    r12 += 0x1000;
    rdx |= 3;
    *(rax) = rdx;
    goto label_2;
label_7:
    rbx += 0x18;
    goto label_3;
label_4:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4017b1 */
#include <stdint.h>
 
uint64_t fcn_004017b1 (int64_t arg1) {
    rcx = arg1;
    rdx = rdi;
    rdi = *(rdi);
    eax = *(rdi);
    if (ax <= 0xd7ff) {
        *((rdx + 0x18)) = eax;
        eax = 1;
    } else {
        rsi = rdx + 0x18;
        eax = fcn_0040436d (rcx, rdx);
    }
    rax += rax;
    *(rdx) += rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4017dc */
#include <stdint.h>
 
int64_t fcn_004017dc (int64_t arg1) {
    rcx = arg1;
    rdx = rdi;
    edi = esi;
    r8 = *((rdx + 0x10));
    rax = (int64_t) esi;
    if (esi <= 0x7f) {
        goto label_0;
    }
    al = fcn_0040437c (rcx, rdx);
    do {
label_0:
        rcx = *((rdx + 8));
        if (r8 <= rcx) {
            goto label_1;
        }
        rsi = rcx + 1;
        *((rdx + 8)) = rsi;
        *(rcx) = al;
        rax >>= 8;
    } while (rax != 0);
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x403d56 */
#include <stdint.h>
 
void fcn_00403d56 (void) {
    ebx = 0x400000;
    fcn_0040400e (rcx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40400e */
#include <stdint.h>
 
uint64_t fcn_0040400e (int64_t arg1) {
    rcx = arg1;
    rax = rdi - 1;
    if (rax > 0xfffffffffffffffd) {
        goto label_0;
    }
    if (rsi == 0) {
        goto label_0;
    }
    rsi += 0xffff;
    rdi >>= 0x10;
    rdx = *(0x00436b00);
    rsi >>= 0x10;
    r12d = edi;
    r13d = 0;
    edi = rdi + rsi - 1;
    esi = 0x436b08;
    rax = fcn_0040427b (rcx);
    r14 = rax;
    do {
        if (rax == 0) {
            goto label_1;
        }
        rbx = rax - 1;
        esi = *((rbx*8 + 0x436b0c));
        edx = *((rbx*8 + 0x436b08));
        if (r12d > esi) {
            goto label_1;
        }
        rdi = (int64_t) edx;
        rdi <<= 0x10;
        if ((*(0x004362b8) & 4) == 0) {
            esi -= edx;
            esi++;
            rsi = (int64_t) esi;
            rsi <<= 0x10;
            eax = fcn_00404300 ();
            r13d |= eax;
        } else {
            eax = fcn_00401a74 ();
            rdi = *((rbx*8 + 0x437468));
            r15d |= 0xffffffff;
            if (eax == 0) {
                r13d = r15d;
            }
            eax = fcn_00401a19 ();
            if (eax != 0) {
                r13d = r15d;
                goto label_2;
            }
        }
label_2:
        rax = rbx;
    } while (1);
label_1:
    if (rax < r14) {
        rdx = *(0x00436b00);
        if (rdx > r14) {
            r9 = rax + 1;
            r10 = r14 + 1;
            rdx -= r14;
            rdx <<= 3;
            r8 = r10*8;
            rdi = rcx + 0x436b00;
            rsi = r8 + 0x436b00;
            fcn_00404542 (r9*8, rdx);
            rdi = rcx + 0x437460;
            rsi = r8 + 0x437460;
            rdx -= r14;
            rdx <<= 3;
            rax = fcn_00404542 (rcx, *(0x00436b00));
        }
        rax += *(0x00436b00);
        rax -= r14;
        *(0x00436b00) = rax;
        goto label_3;
label_0:
        r13d = 0;
    }
label_3:
    eax = r13d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x404008 */
#include <stdint.h>
 
void fcn_00404008 (void) {
    fcn_00401566 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401566 */
#include <stdint.h>
 
int32_t fcn_00401566 (void) {
    eax = *(0x00436348);
    *(0x00437fb0) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401ad2 */
#include <stdint.h>
 
int64_t fcn_00401ad2 (int64_t arg2) {
    rdx = arg2;
    rax = rsi;
    rcx = rsi + 0x10;
    eax &= 0xf;
    if (eax != 0) {
        rax = rcx;
        rax = -rax;
        eax &= 0xf;
    }
    r8 = rdx;
    rcx = rsi + rax;
    r8 -= rax;
    rax = r8;
    *((rdi + 0x28)) = rcx;
    *((rdi + 0x10)) = r8;
    rax |= 1;
    *((rcx + 8)) = rax;
    rax = *(0x004367c0);
    *((rsi + rdx + 8)) = 0x50;
    *((rdi + 0x30)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401b19 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_00401b19 (void) {
    int64_t var_38h;
    r14d = 0;
    r12 = rdi;
    rax = *((rdi + 0x388));
    if (rax == 0) {
        goto label_1;
    }
    r13d = *((rax + 0x18));
    if ((r13b & 1) == 0) {
        goto label_1;
    }
    r13d &= 8;
    if (r13d != 0) {
        goto label_1;
    }
    rdi = *(rax);
    rdx = *(rax);
    rbx = rdi + 0x10;
    edx &= 0xf;
    if (edx != 0) {
        rbx = -rbx;
        ebx &= 0xf;
        rdx = rbx;
    }
    rbx = rdi + rdx;
    r14d = 0;
    r15 = *((rbx + 8));
    rdx = *((rbx + 8));
    edx &= 3;
    rdx--;
    if (rdx != 0) {
        goto label_1;
    }
    r14 = *((rax + 8));
    r15 &= 0xfffffffffffffff8;
    rcx = rbx + r15;
    rdx = rdi + r14 - 0x50;
    if (rcx < rdx) {
        goto label_2;
    }
    r8 = *((rax + 0x10));
    if (*((r12 + 0x20)) == rbx) {
        *((r12 + 0x20)) = 0;
        *((r12 + 8)) = 0;
        goto label_3;
    }
    rax = *((rbx + 0x18));
    rsi = *((rbx + 0x30));
    if (rax != rbx) {
        rdx = *((rbx + 0x10));
        *((rdx + 0x18)) = rax;
        *((rax + 0x10)) = rdx;
        goto label_4;
    }
    rax = *((rax + 0x28));
    rcx = rbx + 0x28;
    if (rax == 0) {
        rax = *((rbx + 0x20));
        if (rax == 0) {
            goto label_4;
        }
        rcx = rbx + 0x20;
    }
    rdx = rax;
    do {
label_0:
        r9 = rcx;
        rax = rdx;
        rcx = rdx + 0x28;
        rdx = *((rdx + 0x28));
    } while (rdx != 0);
    rdx = *((rax + 0x20));
    rcx = rax + 0x20;
    if (rdx != 0) {
        goto label_0;
    }
    *(r9) = 0;
label_4:
    if (rsi == 0) {
        goto label_3;
    }
    edx = *((rbx + 0x38));
    rcx = rdx;
    rdx = r12 + rdx*8;
    if (*((rdx + 0x258)) != rbx) {
        goto label_5;
    }
    *((rdx + 0x258)) = rax;
    while (rax != 0) {
        rdx = *((rbx + 0x20));
        *((rax + 0x30)) = rsi;
        if (rdx == 0) {
            goto label_6;
        }
        *((rax + 0x20)) = rdx;
        *((rdx + 0x30)) = rax;
        goto label_6;
        eax = 0xfffffffe;
        eax = rotate_left32 (eax, cl);
        *((r12 + 4)) &= eax;
        goto label_3;
label_5:
        if (*((rsi + 0x20)) == rbx) {
            *((rsi + 0x20)) = rax;
        } else {
            *((rsi + 0x28)) = rax;
        }
    }
    goto label_3;
label_6:
    rdx = *((rbx + 0x28));
    if (rdx != 0) {
        *((rax + 0x28)) = rdx;
        *((rdx + 0x30)) = rax;
    }
label_3:
    rsi = r14;
    *((rbp - 0x38)) = r8;
    eax = fcn_00403d56 ();
    if (eax == 0) {
        r8 = *((rbp - 0x38));
        *((r12 + 0x358)) -= r14;
        *((r12 + 0x388)) = r8;
        goto label_1;
    }
    rdx = r15;
    rdx >>= 8;
    eax = edx;
    if (edx != 0) {
        eax = 0x1f;
        if (edx > 0xffff) {
            goto label_7;
        }
        __asm ("bsr edx, edx");
        ecx = 0x26;
        rdi = r15;
        edx ^= 0x1f;
        ecx -= edx;
        eax -= edx;
        rdi >>= cl;
        rcx = rdi;
        ecx &= 1;
        eax = rcx + rax*2;
    }
label_7:
    edx = *((r12 + 4));
    ecx = eax;
    esi = 1;
    esi <<= cl;
    *((rbx + 0x38)) = eax;
    *((rbx + 0x28)) = 0;
    ecx = esi;
    *((rbx + 0x20)) = 0;
    esi = eax;
    if ((edx & esi) == 0) {
        rax = r12 + rsi*8 + 0x258;
        edx |= ecx;
        *((r12 + 4)) = edx;
        *((r12 + rsi*8 + 0x258)) = rbx;
        *((rbx + 0x30)) = rax;
        goto label_8;
    }
    rdx = *((r12 + rsi*8 + 0x258));
    if (eax != 0x1f) {
        eax >>= 1;
        r13d = 0x39;
        r13d -= eax;
    }
    ecx = r13d;
    rax = r15;
    rax <<= cl;
    rcx = rax;
    do {
        rax = *((rdx + 8));
        rax &= 0xfffffffffffffff8;
        if (rax == r15) {
            goto label_9;
        }
        rax = rcx;
        rcx += rcx;
        rax >>= 0x3f;
        rax += 4;
        rsi = *((rdx + rax*8));
        if (rsi == 0) {
            goto label_10;
        }
        rdx = rsi;
    } while (1);
label_10:
    *((rdx + rax*8)) = rbx;
    *((rbx + 0x30)) = rdx;
label_8:
    *((rbx + 0x18)) = rbx;
    *((rbx + 0x10)) = rbx;
    goto label_2;
label_9:
    rax = *((rdx + 0x10));
    *((rax + 0x18)) = rbx;
    *((rdx + 0x10)) = rbx;
    *((rbx + 0x10)) = rax;
    *((rbx + 0x18)) = rdx;
    *((rbx + 0x30)) = 0;
label_2:
    r14d = 0;
label_1:
    *((r12 + 0x38)) = 0x80;
    rax = r14;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x403d42 */
#include <stdint.h>
 
void fcn_00403d42 (void) {
    ebx = 0x400000;
    fcn_00403d6a (rcx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x403d6a */
#include <stdint.h>
 
int64_t fcn_00403d6a (int64_t arg3) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_34h;
    int64_t var_28h;
    r8 = arg3;
    rcx = *(0x00436360);
    ecx |= *(0x00436368);
    rsi = rdi;
    r9d = 0;
    r8d |= 0xffffffff;
    edx = 3;
    edi = 0;
    ecx |= 2;
    r15 = rdi;
    r13d = ecx;
    r12 = (int64_t) r8d;
    rbx = rsi;
    r14d = *(0x004362b8);
    *((rbp - 0x34)) = edx;
    *((rbp - 0x40)) = r9;
    r14d &= 4;
    if (r14d != 0) {
        if (r12d != 0xffffffff) {
            goto label_0;
        }
    }
    rbx += 0xffff;
    bx = 0;
label_0:
    ecx = r13d;
    rdx = *(0x00436b00);
    ecx &= 0x10;
    if (ecx != 0) {
        goto label_1;
    }
    if (r15 != 0) {
        goto label_2;
    }
    rax = rdx;
    r15 = 0x200000000000;
    if (rdx == 0) {
        goto label_2;
    }
    r10d = *((rdx*8 + 0x436b04));
    r8 = rbx;
    r8 >>= 0x10;
    do {
        rax--;
        esi = *((rax*8 + 0x436b0c));
        edi = rsi + 1;
        rdi = (int64_t) edi;
        r9 = rdi + r8;
        if (r9 <= 0x30000000) {
            if (esi <= 0x1ffffffe) {
                goto label_3;
            }
            rdi <<= 0x10;
            r15 = rdi;
            goto label_2;
        }
label_3:
    } while (rax != 0);
    r10d++;
    r10 = (int64_t) r10d;
    r10 <<= 0x10;
    r15 = r10;
label_2:
    r15w = 0;
label_1:
    if (rdx == 0x12c) {
        rax = fcn_00401556 ();
        r12 = rax;
    } else {
        if (ecx != 0) {
            rsi = rbx;
            rdi = r15;
            fcn_00403d56 ();
        } else {
            rax = rbx + 0xffff;
            esi = 0x436b08;
            rcx >>= 0x10;
            rax >>= 0x10;
            edi = rax + rcx - 1;
            fcn_0040427b (r15);
        }
        r13d |= 0x10;
        if (r14d == 0) {
            r9 = *((rbp - 0x40));
            edx = *((rbp - 0x34));
            r8 = (int64_t) r12d;
            ecx = r13d;
            rsi = rbx;
            rdi = r15;
            fcn_0040429b (rcx);
        } else {
            edi = *((rbp - 0x34));
            r14 = rbx;
            esi = r13d;
            *((rbp - 0x38)) = ebx;
            r14 >>= 0x20;
            eax = fcn_004046fa ();
            rdi |= 0xffffffffffffffff;
            r8d = *((rbp - 0x38));
            edx = eax;
            if (r12d != 0xffffffff) {
                r12 *= 0x18;
                r12 += *(0x00437df0);
                rdi = *(r12);
            }
            r9d = 0;
            ecx = r14d;
            esi = 0x4047c0;
            rax = fcn_00401a32 ();
            r14 = rax;
            if (rax != 0) {
                edi = *((rbp - 0x34));
                esi = r13d;
                eax = fcn_004042a8 ();
                rdx = *((rbp - 0x40));
                esi = eax;
                rdi = r14;
                rdx >>= 0x20;
                rax = fcn_00401a5e (rcx, *((rbp - 0x40)), rbx, r15);
                r12 = rax;
                if (rax != 0) {
                    goto label_4;
                }
                rdi = r14;
                fcn_00401a19 ();
            }
            rax = fcn_00404786 ();
        }
        r12 = rax;
        r14 |= 0xffffffffffffffff;
label_4:
        if (r12 == -1) {
            goto label_5;
        }
        rdx = *(0x00436b00);
        r13 = r12;
        esi = 0x436b08;
        r13 >>= 0x10;
        edi = r13d;
        rax = fcn_0040427b (rcx);
        rdx = *(0x00436b00);
        if (rdx > rax) {
            r8 = rax + 2;
            rdx -= rax;
            rdx <<= 3;
            rdi = rcx + 0x436b00;
            rsi = rcx + 0x436af8;
            rax = fcn_00404542 (r8*8, rdx);
            rdi = rcx + 0x437460;
            rsi = rcx + 0x437458;
            rdx -= rax;
            rdx <<= 3;
            fcn_00404542 (rcx, *(0x00436b00));
        }
        rbx += 0xffff;
        *(0x00436b00)++;
        *((rax*8 + 0x436b08)) = r13d;
        rbx >>= 0x10;
        *((rax*8 + 0x437468)) = r14;
        edx = rbx + r13 - 1;
        *((rax*8 + 0x436b0c)) = edx;
    }
label_5:
    rsp = rbp - 0x28;
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401556 */
#include <stdint.h>
 
int32_t fcn_00401556 (void) {
    eax = *(0x00436340);
    *(0x00437fb0) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40238e */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_0040238e (int64_t arg1) {
    rcx = arg1;
    if (rdi > 0xe0) {
        goto label_4;
    }
    ebx = 0x20;
    if (rdi > 0xe) {
        rbx = rdi + 0x1f;
        rbx &= 0xfffffffffffffff0;
    }
    esi = *(0x004363e0);
    rcx = rbx;
    rcx >>= 3;
    eax = esi;
    eax >>= cl;
    if ((al & 3) != 0) {
        eax = ~eax;
        eax &= 1;
        ecx += eax;
        eax = rcx + rcx;
        r9d = rcx*8;
        rdi = rax*8 + 0x436428;
        rdx = r9;
        rax = *((rdi + 0x10));
        r8 = *((rax + 0x10));
        if (rdi == r8) {
            __asm ("btr esi, ecx");
            *(0x004363e0) = esi;
        } else {
            *((r8 + 0x18)) = rdi;
            *((rdi + 0x10)) = r8;
        }
        edx |= 3;
        ebx = edx;
        *((rax + 8)) = rbx;
        *((rax + r9 + 8)) |= 1;
        goto label_5;
    }
    r9 = *(0x004363e8);
    if (r9 >= rbx) {
        goto label_6;
    }
    if (eax != 0) {
        edx = 1;
        eax <<= cl;
        edi = edx;
        edi <<= cl;
        r8d = rdi + rdi;
        edi = r8d;
        edi = -edi;
        edi |= r8d;
        eax &= edi;
        ecx = eax;
        ecx = -ecx;
        eax &= ecx;
        __asm ("bsf ecx, eax");
        eax = rcx + rcx;
        edi = rcx*8;
        r10 = rax*8 + 0x436428;
        r8 = rdi;
        rax = *((r10 + 0x10));
        r11 = *((rax + 0x10));
        if (r10 == r11) {
            edx <<= cl;
            edx = ~edx;
            esi &= edx;
            *(0x004363e0) = esi;
        } else {
            *((r11 + 0x18)) = r10;
            *((r10 + 0x10)) = r11;
        }
        rsi = rdi;
        rdx = rax + rdi;
        rsi -= rbx;
        if (rsi <= 0x1f) {
            r8d |= 3;
            ebx = r8d;
            *((rax + 8)) = rbx;
            *((rdx + 8)) |= 1;
            goto label_5;
        }
        rcx = rbx;
        rbx += rax;
        rcx |= 3;
        *((rax + 8)) = rcx;
        rcx = rsi;
        rcx |= 1;
        *((rbx + 8)) = rcx;
        *(rdx) = rsi;
        if (r9 != 0) {
            r10d = *(0x004363e0);
            rcx = r9;
            r11d = 1;
            rcx >>= 3;
            rdx = *(0x00436400);
            r8d = rcx + rcx;
            r11d <<= cl;
            r8 = r8*8 + 0x436428;
            if ((r10d & r11d) == 0) {
                r10d |= r11d;
                rcx = r8;
                *(0x004363e0) = r10d;
            } else {
                rcx = *((r8 + 0x10));
            }
            *((r8 + 0x10)) = rdx;
            *((rcx + 0x18)) = rdx;
            *((rdx + 0x10)) = rcx;
            *((rdx + 0x18)) = r8;
        }
        *(0x004363e8) = rsi;
        *(0x00436400) = rbx;
        goto label_5;
    }
    edi = *(0x004363e4);
    if (edi == 0) {
        goto label_6;
    }
    eax = edi;
    eax = -eax;
    eax &= edi;
    __asm ("bsf eax, eax");
    rcx = *((rax*8 + 0x436638));
    r8 = *((rcx + 8));
    rax = rcx;
    r8 &= 0xfffffffffffffff8;
    r8 -= rbx;
    do {
        rdx = *((rcx + 0x20));
        if (rdx == 0) {
            goto label_7;
        }
label_0:
        rcx = *((rdx + 8));
        rcx &= 0xfffffffffffffff8;
        rcx -= rbx;
        if (rcx < r8) {
            r8 = rcx;
            rax = rdx;
        }
        rcx = rdx;
    } while (1);
label_7:
    rdx = *((rcx + 0x28));
    if (rdx != 0) {
        goto label_0;
    }
    rdx = *((rax + 0x18));
    r10 = *((rax + 0x30));
    r12 = rbx + r8;
    if (rdx != rax) {
        rcx = *((rax + 0x10));
        *((rcx + 0x18)) = rdx;
        *((rdx + 0x10)) = rcx;
        goto label_8;
    }
    rdx = *((rax + 0x28));
    r11 = rax + 0x28;
    if (rdx == 0) {
        rdx = *((rax + 0x20));
        if (rdx == 0) {
            goto label_8;
        }
        r11 = rax + 0x20;
    }
    rcx = rdx;
    do {
label_1:
        r13 = r11;
        rdx = rcx;
        r11 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rdx + 0x20));
    r11 = rdx + 0x20;
    if (rcx != 0) {
        goto label_1;
    }
    *(r13) = 0;
label_8:
    if (r10 == 0) {
        goto label_9;
    }
    r11d = *((rax + 0x38));
    r13 = r11 + 0x4a;
    if (*((r11*8 + 0x436638)) != rax) {
        goto label_10;
    }
    *((r13*8 + 0x4363e8)) = rdx;
    while (rdx != 0) {
        rcx = *((rax + 0x20));
        *((rdx + 0x30)) = r10;
        if (rcx == 0) {
            goto label_11;
        }
        *((rdx + 0x20)) = rcx;
        *((rcx + 0x30)) = rdx;
        goto label_11;
        __asm ("btr edi, r11d");
        *(0x004363e4) = edi;
        goto label_9;
label_10:
        if (*((r10 + 0x20)) == rax) {
            *((r10 + 0x20)) = rdx;
        } else {
            *((r10 + 0x28)) = rdx;
        }
    }
    goto label_9;
label_11:
    rcx = *((rax + 0x28));
    if (rcx != 0) {
        *((rdx + 0x28)) = rcx;
        *((rcx + 0x30)) = rdx;
    }
label_9:
    if (r8 <= 0x1f) {
        rdx = r12;
        rdx |= 3;
        *((rax + 8)) = rdx;
        *((rax + r12 + 8)) |= 1;
        goto label_5;
    }
    r10 = rax + rbx;
    rdx = r8;
    rbx |= 3;
    rdx |= 1;
    *((rax + 8)) = rbx;
    *((r10 + 8)) = rdx;
    *((r10 + r8)) = r8;
    if (r9 != 0) {
        rcx = r9;
        r9d = 1;
        rdx = *(0x00436400);
        rcx >>= 3;
        edi = rcx + rcx;
        r9d <<= cl;
        rdi = rdi*8 + 0x436428;
        if ((esi & r9d) == 0) {
            esi |= r9d;
            rcx = rdi;
            *(0x004363e0) = esi;
        } else {
            rcx = *((rdi + 0x10));
        }
        *((rdi + 0x10)) = rdx;
        *((rcx + 0x18)) = rdx;
        *((rdx + 0x10)) = rcx;
        *((rdx + 0x18)) = rdi;
    }
    *(0x004363e8) = r8;
    *(0x00436400) = r10;
    goto label_5;
label_4:
    if (rdi > 0xffffffffffffff7f) {
        goto label_12;
    }
    rbx = rdi + 0x1f;
    edi = *(0x004363e4);
    rbx &= 0xfffffffffffffff0;
    if (edi == 0) {
        goto label_6;
    }
    rax = rbx;
    r9 = rbx;
    rax >>= 8;
    r9 = -r9;
    esi = eax;
    if (eax != 0) {
        esi = 0x1f;
        if (eax > 0xffff) {
            goto label_13;
        }
        __asm ("bsr eax, eax");
        ecx = 0x26;
        rdx = rbx;
        eax ^= 0x1f;
        ecx -= eax;
        esi -= eax;
        rdx >>= cl;
        edx &= 1;
        esi = rdx + rsi*2;
    }
label_13:
    eax = esi;
    edx = 0;
    rax = *((rax*8 + 0x436638));
    if (rax == 0) {
        goto label_14;
    }
    ecx = 0;
    if (esi != 0x1f) {
        edx = esi;
        ecx = 0x39;
        edx >>= 1;
        ecx -= edx;
    }
    rdx = rbx;
    r11d = 0;
    r10d = 0;
    rdx <<= cl;
    rcx = rdx;
    do {
        rdx = *((rax + 8));
        rdx &= 0xfffffffffffffff8;
        rdx -= rbx;
        if (rdx < r9) {
            if (rdx == 0) {
                goto label_15;
            }
            r9 = rdx;
            r10 = rax;
        }
        rdx = *((rax + 0x28));
        r8 = rcx;
        r8 >>= 0x3f;
        r8 += 4;
        rax = *((rax + r8*8));
        if (rdx != 0) {
            if (rdx != rax) {
                goto label_16;
            }
        }
        rdx = r11;
label_16:
        if (rax == 0) {
            goto label_17;
        }
        rcx += rcx;
        r11 = rdx;
    } while (1);
label_15:
    rdx = rax;
    r9d = 0;
    goto label_14;
label_17:
    rax = r10;
label_14:
    rcx = rdx;
    rcx |= rax;
    if (rcx != 0) {
        goto label_18;
    }
    eax = 0xfffffffe;
    ecx = esi;
    eax <<= cl;
    eax &= edi;
    edx = eax;
    if (eax == 0) {
        goto label_6;
    }
    eax = -eax;
    eax &= edx;
    __asm ("bsf eax, eax");
    rdx = *((rax*8 + 0x436638));
    eax = 0;
    while (rdx != 0) {
        rcx = *((rdx + 8));
        rcx &= 0xfffffffffffffff8;
        rcx -= rbx;
        if (rcx < r9) {
            r9 = rcx;
            rax = rdx;
        }
        rcx = *((rdx + 0x20));
        if (rcx == 0) {
            rcx = *((rdx + 0x28));
        }
        rdx = *((rdx + 0x28));
label_18:
    }
    rdx = *(0x004363e8);
    if (rax == 0) {
        goto label_6;
    }
    rdx -= rbx;
    if (r9 >= rdx) {
        goto label_6;
    }
    rdx = *((rax + 0x18));
    rsi = *((rax + 0x30));
    r10 = rbx + r9;
    if (rdx != rax) {
        rcx = *((rax + 0x10));
        *((rcx + 0x18)) = rdx;
        *((rdx + 0x10)) = rcx;
        goto label_19;
    }
    rdx = *((rax + 0x28));
    r8 = rax + 0x28;
    if (rdx == 0) {
        rdx = *((rax + 0x20));
        if (rdx == 0) {
            goto label_19;
        }
        r8 = rax + 0x20;
    }
    rcx = rdx;
    do {
label_2:
        r11 = r8;
        rdx = rcx;
        r8 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rdx + 0x20));
    r8 = rdx + 0x20;
    if (rcx != 0) {
        goto label_2;
    }
    *(r11) = 0;
label_19:
    if (rsi == 0) {
        goto label_20;
    }
    r8d = *((rax + 0x38));
    r11 = r8 + 0x4a;
    if (*((r8*8 + 0x436638)) != rax) {
        goto label_21;
    }
    *((r11*8 + 0x4363e8)) = rdx;
    while (rdx != 0) {
        rcx = *((rax + 0x20));
        *((rdx + 0x30)) = rsi;
        if (rcx == 0) {
            goto label_22;
        }
        *((rdx + 0x20)) = rcx;
        *((rcx + 0x30)) = rdx;
        goto label_22;
        __asm ("btr edi, r8d");
        *(0x004363e4) = edi;
        goto label_20;
label_21:
        if (*((rsi + 0x20)) == rax) {
            *((rsi + 0x20)) = rdx;
        } else {
            *((rsi + 0x28)) = rdx;
        }
    }
    goto label_20;
label_22:
    rcx = *((rax + 0x28));
    if (rcx != 0) {
        *((rdx + 0x28)) = rcx;
        *((rcx + 0x30)) = rdx;
    }
label_20:
    if (r9 <= 0x1f) {
        rdx = r10;
        rdx |= 3;
        *((rax + 8)) = rdx;
        *((rax + r10 + 8)) |= 1;
        goto label_5;
    }
    r8 = rax + rbx;
    rdx = r9;
    rcx = r9;
    rbx |= 3;
    rdx |= 1;
    rcx >>= 3;
    *((rax + 8)) = rbx;
    *((r8 + 8)) = rdx;
    *((r8 + r9)) = r9;
    if (r9 <= 0xff) {
        esi = *(0x004363e0);
        edi = 1;
        edx = rcx + rcx;
        edi <<= cl;
        rdx = rdx*8 + 0x436428;
        if ((esi & edi) == 0) {
            esi |= edi;
            rcx = rdx;
            *(0x004363e0) = esi;
        } else {
            rcx = *((rdx + 0x10));
        }
        *((rdx + 0x10)) = r8;
        *((rcx + 0x18)) = r8;
        *((r8 + 0x10)) = rcx;
        *((r8 + 0x18)) = rdx;
        goto label_5;
    }
    rsi = r9;
    rsi >>= 8;
    edx = esi;
    if (esi != 0) {
        edx = 0x1f;
        if (esi > 0xffff) {
            goto label_23;
        }
        __asm ("bsr esi, esi");
        ecx = 0x26;
        rbx = r9;
        esi ^= 0x1f;
        ecx -= esi;
        edx -= esi;
        rbx >>= cl;
        rcx = rbx;
        ecx &= 1;
        edx = rcx + rdx*2;
    }
label_23:
    esi = *(0x004363e4);
    ecx = edx;
    edi = 1;
    edi <<= cl;
    *((r8 + 0x38)) = edx;
    *((r8 + 0x28)) = 0;
    ecx = edi;
    *((r8 + 0x20)) = 0;
    edi = edx;
    if ((esi & edi) == 0) {
        rdx = rdi*8 + 0x436638;
        esi |= ecx;
        *((rdi*8 + 0x436638)) = r8;
        *(0x004363e4) = esi;
        *((r8 + 0x30)) = rdx;
        goto label_24;
    }
    ecx = 0;
    rsi = *((rdi*8 + 0x436638));
    if (edx != 0x1f) {
        edx >>= 1;
        ecx = 0x39;
        ecx -= edx;
    }
    rbx = r9;
    rbx <<= cl;
    rcx = rbx;
    do {
        rdx = *((rsi + 8));
        rdx &= 0xfffffffffffffff8;
        if (r9 == rdx) {
            goto label_25;
        }
        rdx = rcx;
        rcx += rcx;
        rdx >>= 0x3f;
        rdx += 4;
        rdi = *((rsi + rdx*8));
        if (rdi == 0) {
            goto label_26;
        }
        rsi = rdi;
    } while (1);
label_26:
    *((rsi + rdx*8)) = r8;
    *((r8 + 0x30)) = rsi;
label_24:
    *((r8 + 0x18)) = r8;
    *((r8 + 0x10)) = r8;
    goto label_5;
label_25:
    rdx = *((rsi + 0x10));
    *((rdx + 0x18)) = r8;
    *((rsi + 0x10)) = r8;
    *((r8 + 0x10)) = rdx;
    *((r8 + 0x18)) = rsi;
    *((r8 + 0x30)) = 0;
    goto label_5;
label_12:
    rbx |= 0xffffffffffffffff;
label_6:
    rdx = *(0x004363e8);
    if (rdx >= rbx) {
        rax = *(0x00436400);
        rcx = rdx;
        rcx -= rbx;
        rsi = rax + rdx;
        if (rcx > 0x1f) {
            rdx = rax + rbx;
            rdi = rcx;
            *(0x004363e8) = rcx;
            rdi |= 1;
            *(0x00436400) = rdx;
            *((rdx + 8)) = rdi;
            *(rsi) = rcx;
            goto label_27;
        }
        rdx |= 3;
        *(0x004363e8) = 0;
        *(0x00436400) = 0;
        *((rax + 8)) = rdx;
        *((rsi + 8)) |= 1;
        goto label_5;
    }
    rax = *(0x004363f0);
    if (rax > rbx) {
        rax -= rbx;
        rdx = rax;
        goto label_28;
    }
    rcx = *(0x004367b0);
    rdx = *(0x004367b0);
    rdx = -rdx;
    if ((*(0x00436750) & 1) != 0) {
        if (rbx < *(0x004367b8)) {
            goto label_29;
        }
        if (rax == 0) {
            goto label_29;
        }
        rsi = *(0x00436748);
        r12 = rbx + rcx + 0x3e;
        r12 &= rdx;
        if (rsi != 0) {
            rdi = *(0x00436738);
            rax = rdi + r12;
            if (rdi >= rax) {
                goto label_29;
            }
            if (rsi < rax) {
                goto label_29;
            }
        }
        if (rbx >= r12) {
            goto label_29;
        }
        rdi = r12;
        fcn_00403d42 ();
        rdx = r12 - 0x20;
        *(rax) = 0;
        *((rax + 8)) = rdx;
        rdx = *(0x004363f8);
        *((rax + r12 - 0x18)) = 0xb;
        *((rax + r12 - 0x10)) = 0;
        if (rdx != 0) {
            if (rax >= rdx) {
                goto label_30;
            }
        }
        *(0x004363f8) = rax;
label_30:
        r12 += *(0x00436738);
        *(0x00436738) = r12;
        if (r12 <= *(0x00436740)) {
            goto label_5;
        }
        *(0x00436740) = r12;
        goto label_5;
    }
label_29:
    r12 = rbx + rcx + 0x5f;
    r12 &= rdx;
    if (rbx >= r12) {
        goto label_31;
    }
    rdx = *(0x00436748);
    if (rdx != 0) {
        rcx = *(0x00436738);
        rax = r12 + rcx;
        if (rcx >= rax) {
            goto label_31;
        }
        if (rdx < rax) {
            goto label_31;
        }
    }
    rdi = r12;
    rax = fcn_00403d42 ();
    r9 = rax;
    rax = *(0x00436738);
    rax += r12;
    *(0x00436738) = rax;
    if (rax > *(0x00436740)) {
        *(0x00436740) = rax;
    }
    r10 = *(0x00436408);
    if (r10 != 0) {
        goto label_32;
    }
    rax = *(0x004363f8);
    if (rax != 0) {
        if (r9 >= rax) {
            goto label_33;
        }
    }
    *(0x004363f8) = r9;
label_33:
    rax = *(0x004367a0);
    *(0x00436758) = r9;
    edx = 0x436628;
    *(0x00436760) = r12;
    *(0x00436770) = 1;
    *(0x00436418) = 0x80;
    *(0x00436420) = rax;
    eax = 0x436428;
    do {
        *((rax + 0x18)) = rax;
        *((rax + 0x10)) = rax;
        rax += 0x10;
    } while (rdx != rax);
    rdx = r12 - 0x50;
    rsi = r9;
    goto label_34;
label_32:
    rax = *(0x00436758);
    rdx = *(0x00436760);
    rcx = rax + rdx;
    if (r9 == rcx) {
        ecx = *(0x00436770);
        if ((cl & 8) != 0) {
            goto label_35;
        }
        cl &= 1;
        if (cl == 0) {
            goto label_35;
        }
        if (r10 < rax) {
            goto label_35;
        }
        if (r9 <= r10) {
            goto label_35;
        }
        rdx += r12;
        rsi = r10;
        *(0x00436760) = rdx;
        rdx = *(0x004363f0);
        rdx += r12;
label_34:
        edi = 0x4363e0;
        rax = fcn_00401ad2 (rcx);
        goto label_36;
    }
label_35:
    if (r9 < *(0x004363f8)) {
        *(0x004363f8) = r9;
    }
    rsi = r9 + r12;
    ecx = 0x436758;
    if (rax != rsi) {
        goto label_37;
    }
    esi = *(0x00436770);
    r11d = *(0x00436770);
    r11d &= 8;
    if (r11d != 0) {
        goto label_37;
    }
    sil &= 1;
    if (sil == 0) {
        goto label_37;
    }
    rcx = rax;
    rdx += r12;
    *(0x00436758) = r9;
    ecx &= 0xf;
    *(0x00436760) = rdx;
    rdx = rax + 0x10;
    if (ecx != 0) {
        rdx = -rdx;
        rcx = rdx;
        ecx &= 0xf;
    }
    rdx = rax + rcx;
    rax = r9 + rbx;
    r8 = rdx;
    r8 -= r9;
    r8 -= rbx;
    rbx |= 3;
    *((r9 + 8)) = rbx;
    if (r10 == rdx) {
        r8 += *(0x004363f0);
        *(0x00436408) = rax;
        *(0x004363f0) = r8;
        r8 |= 1;
        *((rax + 8)) = r8;
        goto label_38;
    }
    if (rdx == *(0x00436400)) {
        r8 += *(0x004363e8);
        *(0x00436400) = rax;
        rdx = r8;
        *(0x004363e8) = r8;
        rdx |= 1;
        *((rax + 8)) = rdx;
        *((rax + r8)) = r8;
        goto label_38;
    }
    rdi = *((rdx + 8));
    rcx = *((rdx + 8));
    ecx &= 3;
    rcx--;
    if (rcx != 0) {
        goto label_39;
    }
    rbx = rdi;
    rcx = rdi;
    rsi = *((rdx + 0x18));
    rbx &= 0xfffffffffffffff8;
    rcx >>= 3;
    if (rdi <= 0xff) {
        rdi = *((rdx + 0x10));
        if (rdi == rsi) {
            esi = 0xfffffffe;
            esi = rotate_left32 (esi, cl);
            *(0x004363e0) &= esi;
            goto label_40;
        }
        *((rdi + 0x18)) = rsi;
        *((rsi + 0x10)) = rdi;
        goto label_40;
    }
    rdi = *((rdx + 0x30));
    if (rdx != rsi) {
        rcx = *((rdx + 0x10));
        *((rcx + 0x18)) = rsi;
        *((rsi + 0x10)) = rcx;
        goto label_41;
    }
    rsi = *((rdx + 0x28));
    r10 = rdx + 0x28;
    if (rsi == 0) {
        rsi = *((rdx + 0x20));
        if (rsi == 0) {
            goto label_41;
        }
        r10 = rdx + 0x20;
    }
    rcx = rsi;
    do {
label_3:
        r12 = r10;
        rsi = rcx;
        r10 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rsi + 0x20));
    r10 = rsi + 0x20;
    if (rcx != 0) {
        goto label_3;
    }
    *(r12) = 0;
label_41:
    if (rdi == 0) {
        goto label_40;
    }
    r10d = *((rdx + 0x38));
    r12 = r10 + 0x4a;
    rcx = r10;
    if (rdx != *((r10*8 + 0x436638))) {
        goto label_42;
    }
    *((r12*8 + 0x4363e8)) = rsi;
    while (rsi != 0) {
        rcx = *((rdx + 0x20));
        *((rsi + 0x30)) = rdi;
        if (rcx == 0) {
            goto label_43;
        }
        *((rsi + 0x20)) = rcx;
        *((rcx + 0x30)) = rsi;
        goto label_43;
        esi = 0xfffffffe;
        esi = rotate_left32 (esi, cl);
        *(0x004363e4) &= esi;
        goto label_40;
label_42:
        if (rdx == *((rdi + 0x20))) {
            *((rdi + 0x20)) = rsi;
        } else {
            *((rdi + 0x28)) = rsi;
        }
    }
    goto label_40;
label_43:
    rcx = *((rdx + 0x28));
    if (rcx != 0) {
        *((rsi + 0x28)) = rcx;
        *((rcx + 0x30)) = rsi;
    }
label_40:
    rdx += rbx;
    r8 += rbx;
label_39:
    *((rdx + 8)) &= 0xfffffffffffffffe;
    rcx = r8;
    rdx = r8;
    rdx |= 1;
    rcx >>= 3;
    *((rax + 8)) = rdx;
    *((rax + r8)) = r8;
    if (r8 <= 0xff) {
        esi = *(0x004363e0);
        edi = 1;
        edx = rcx + rcx;
        edi <<= cl;
        rdx = rdx*8 + 0x436428;
        if ((esi & edi) == 0) {
            esi |= edi;
            rcx = rdx;
            *(0x004363e0) = esi;
        } else {
            rcx = *((rdx + 0x10));
        }
        *((rdx + 0x10)) = rax;
        *((rcx + 0x18)) = rax;
        *((rax + 0x10)) = rcx;
        *((rax + 0x18)) = rdx;
        goto label_38;
    }
    rsi = r8;
    rsi >>= 8;
    edx = esi;
    if (esi != 0) {
        edx = 0x1f;
        if (esi > 0xffff) {
            goto label_44;
        }
        __asm ("bsr esi, esi");
        ecx = 0x26;
        rbx = r8;
        esi ^= 0x1f;
        ecx -= esi;
        edx -= esi;
        rbx >>= cl;
        rcx = rbx;
        ecx &= 1;
        edx = rcx + rdx*2;
    }
label_44:
    esi = *(0x004363e4);
    ecx = edx;
    edi = 1;
    edi <<= cl;
    *((rax + 0x38)) = edx;
    *((rax + 0x28)) = 0;
    ecx = edi;
    *((rax + 0x20)) = 0;
    edi = edx;
    if ((esi & edi) == 0) {
        rdx = rdi*8 + 0x436638;
        esi |= ecx;
        *((rdi*8 + 0x436638)) = rax;
        *(0x004363e4) = esi;
        *((rax + 0x30)) = rdx;
        goto label_45;
    }
    rsi = *((rdi*8 + 0x436638));
    if (edx != 0x1f) {
        edx >>= 1;
        r11d = 0x39;
        r11d -= edx;
    }
    ecx = r11d;
    rbx = r8;
    rbx <<= cl;
    rcx = rbx;
    do {
        rdx = *((rsi + 8));
        rdx &= 0xfffffffffffffff8;
        if (r8 == rdx) {
            goto label_46;
        }
        rdx = rcx;
        rcx += rcx;
        rdx >>= 0x3f;
        rdx += 4;
        rdi = *((rsi + rdx*8));
        if (rdi == 0) {
            goto label_47;
        }
        rsi = rdi;
    } while (1);
label_47:
    *((rsi + rdx*8)) = rax;
    *((rax + 0x30)) = rsi;
label_45:
    *((rax + 0x18)) = rax;
    *((rax + 0x10)) = rax;
    goto label_38;
label_46:
    rdx = *((rsi + 0x10));
    *((rdx + 0x18)) = rax;
    *((rsi + 0x10)) = rax;
    *((rax + 0x10)) = rdx;
    *((rax + 0x18)) = rsi;
    *((rax + 0x30)) = 0;
label_38:
    rax = r9 + 0x10;
    goto label_48;
    do {
label_37:
        r13 = *(rcx);
        if (r10 >= r13) {
            r13 += *((rcx + 8));
            if (r10 < r13) {
                goto label_49;
            }
        }
        rcx = *((rcx + 0x10));
    } while (rcx != 0);
    rax = *(0);
    __asm ("ud2");
label_49:
    rax = r13 - 0x4f;
    rdx = rax;
    edx &= 0xf;
    if (edx != 0) {
        rax = -rax;
        eax &= 0xf;
        rdx = rax;
    }
    r11 = r13 + rdx - 0x5f;
    rax = r10 + 0x20;
    rdx = r12 - 0x50;
    rsi = r9;
    edi = 0x4363e0;
    if (r11 < rax) {
        r11 = r10;
    }
    fcn_00401ad2 (rcx);
    rax = r11 + 0x10;
    *((r11 + 8)) = 0x33;
    rdi = r11 + 0x10;
    esi = 0x436758;
    ecx = 8;
    *(rdi) = *(rsi);
    rcx--;
    rsi += 4;
    rdi += 4;
    *(0x00436768) = rax;
    rax = r11 + 0x38;
    *(0x00436758) = r9;
    *(0x00436760) = r12;
    *(0x00436770) = 1;
    do {
        *(rax) = 0xb;
        rax += 8;
    } while (r13 > rax);
    if (r10 == r11) {
        goto label_36;
    }
    rsi = r11;
    *((r11 + 8)) &= 0xfffffffffffffffe;
    rsi -= r10;
    rax = rsi;
    rcx = rsi;
    rax |= 1;
    rcx >>= 3;
    *((r10 + 8)) = rax;
    *(r11) = rsi;
    if (rsi <= 0xff) {
        edx = *(0x004363e0);
        esi = 1;
        eax = rcx + rcx;
        esi <<= cl;
        rax = rax*8 + 0x436428;
        if ((edx & esi) == 0) {
            edx |= esi;
            *(0x004363e0) = edx;
            rdx = rax;
        } else {
            rdx = *((rax + 0x10));
        }
        *((rax + 0x10)) = r10;
        *((rdx + 0x18)) = r10;
        *((r10 + 0x10)) = rdx;
        *((r10 + 0x18)) = rax;
        goto label_36;
    }
    rdx = rsi;
    rdx >>= 8;
    eax = edx;
    if (edx != 0) {
        eax = 0x1f;
        if (edx > 0xffff) {
            goto label_50;
        }
        __asm ("bsr edx, edx");
        ecx = 0x26;
        rdi = rsi;
        edx ^= 0x1f;
        ecx -= edx;
        eax -= edx;
        rdi >>= cl;
        rcx = rdi;
        ecx &= 1;
        eax = rcx + rax*2;
    }
label_50:
    edx = *(0x004363e4);
    ecx = eax;
    edi = 1;
    edi <<= cl;
    *((r10 + 0x38)) = eax;
    *((r10 + 0x28)) = 0;
    ecx = edi;
    *((r10 + 0x20)) = 0;
    edi = eax;
    if ((edx & edi) == 0) {
        rax = rdi*8 + 0x436638;
        edx |= ecx;
        *((rdi*8 + 0x436638)) = r10;
        *(0x004363e4) = edx;
        *((r10 + 0x30)) = rax;
        goto label_51;
    }
    ecx = 0;
    rdx = *((rdi*8 + 0x436638));
    if (eax != 0x1f) {
        eax >>= 1;
        ecx = 0x39;
        ecx -= eax;
    }
    rax = rsi;
    rax <<= cl;
    rcx = rax;
    do {
        rax = *((rdx + 8));
        rax &= 0xfffffffffffffff8;
        if (rsi == rax) {
            goto label_52;
        }
        rax = rcx;
        rcx += rcx;
        rax >>= 0x3f;
        rax += 4;
        rdi = *((rdx + rax*8));
        if (rdi == 0) {
            goto label_53;
        }
        rdx = rdi;
    } while (1);
label_53:
    *((rdx + rax*8)) = r10;
    *((r10 + 0x30)) = rdx;
label_51:
    *((r10 + 0x18)) = r10;
    *((r10 + 0x10)) = r10;
    goto label_36;
label_52:
    rax = *((rdx + 0x10));
    *((rax + 0x18)) = r10;
    *((rdx + 0x10)) = r10;
    *((r10 + 0x10)) = rax;
    *((r10 + 0x18)) = rdx;
    *((r10 + 0x30)) = 0;
label_36:
    rdx = *(0x004363f0);
    if (rbx < rdx) {
        rdx -= rbx;
label_28:
        rax = *(0x00436408);
        *(0x004363f0) = rdx;
        rdx |= 1;
        rcx = rax + rbx;
        *(0x00436408) = rcx;
        *((rcx + 8)) = rdx;
label_27:
        rbx |= 3;
        *((rax + 8)) = rbx;
label_5:
        rax += 0x10;
    } else {
        eax = fcn_00401556 ();
label_31:
        eax = 0;
    }
label_48:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x404562 */
#include <stdint.h>
 
void fcn_00404562 (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    xmm3 = esi;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
    ebx = 0x4361a0;
    uint64_t (*rbx + rcx*8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401f12 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_00401f12 (uint32_t arg2) {
    rdx = arg2;
    rbx = rdi;
    rdi = rsi;
    rax = *((rdi + 8));
    rsi += rdx;
    if ((al & 1) != 0) {
        goto label_2;
    }
    r8 = *(rdi);
    rdi -= r8;
    if ((al & 3) == 0) {
        r12 = r8 + rdx + 0x20;
        rsi = r12;
        eax = fcn_00403d56 ();
        if (eax != 0) {
            goto label_3;
        }
        *((rbx + 0x358)) -= r12;
        goto label_3;
    }
    rdx += r8;
    if (*((rbx + 0x20)) == rdi) {
        goto label_4;
    }
    rcx = r8;
    rax = *((rdi + 0x18));
    rcx >>= 3;
    if (r8 <= 0xff) {
        r8 = *((rdi + 0x10));
        if (r8 == rax) {
            eax = 0xfffffffe;
            eax = rotate_left32 (eax, cl);
            *(rbx) &= eax;
            goto label_2;
        }
        *((r8 + 0x18)) = rax;
        *((rax + 0x10)) = r8;
        goto label_2;
    }
    r8 = *((rdi + 0x30));
    if (rdi != rax) {
        rcx = *((rdi + 0x10));
        *((rcx + 0x18)) = rax;
        *((rax + 0x10)) = rcx;
        goto label_5;
    }
    rax = *((rdi + 0x28));
    r9 = rdi + 0x28;
    if (rax == 0) {
        rax = *((rdi + 0x20));
        if (rax == 0) {
            goto label_5;
        }
        r9 = rdi + 0x20;
    }
    rcx = rax;
    do {
label_0:
        r10 = r9;
        rax = rcx;
        r9 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rax + 0x20));
    r9 = rax + 0x20;
    if (rcx != 0) {
        goto label_0;
    }
    *(r10) = 0;
label_5:
    if (r8 == 0) {
        goto label_2;
    }
    r9d = *((rdi + 0x38));
    rcx = r9;
    r9 = rbx + r9*8;
    if (*((r9 + 0x258)) != rdi) {
        goto label_6;
    }
    *((r9 + 0x258)) = rax;
    while (rax != 0) {
        rcx = *((rdi + 0x20));
        *((rax + 0x30)) = r8;
        if (rcx == 0) {
            goto label_7;
        }
        *((rax + 0x20)) = rcx;
        *((rcx + 0x30)) = rax;
        goto label_7;
        eax = 0xfffffffe;
        eax = rotate_left32 (eax, cl);
        *((rbx + 4)) &= eax;
        goto label_2;
label_6:
        if (*((r8 + 0x20)) == rdi) {
            *((r8 + 0x20)) = rax;
        } else {
            *((r8 + 0x28)) = rax;
        }
    }
    goto label_2;
label_7:
    rcx = *((rdi + 0x28));
    if (rcx != 0) {
        *((rax + 0x28)) = rcx;
        *((rcx + 0x30)) = rax;
        goto label_2;
label_4:
        rax = *((rsi + 8));
        rcx = *((rsi + 8));
        ecx &= 3;
        if (rcx != 3) {
            goto label_2;
        }
        rax &= 0xfffffffffffffffe;
        *((rbx + 8)) = rdx;
        *((rsi + 8)) = rax;
        rax = rdx;
        rax |= 1;
        *((rdi + 8)) = rax;
        *(rsi) = rdx;
        goto label_3;
    }
label_2:
    r8 = *((rsi + 8));
    if ((r8b & 2) != 0) {
        goto label_8;
    }
    r10 = *((rbx + 0x20));
    if (*((rbx + 0x28)) == rsi) {
        rdx += *((rbx + 0x10));
        *((rbx + 0x28)) = rdi;
        *((rbx + 0x10)) = rdx;
        rdx |= 1;
        *((rdi + 8)) = rdx;
        if (rdi != r10) {
            goto label_3;
        }
        *((rbx + 0x20)) = 0;
        *((rbx + 8)) = 0;
        goto label_3;
    }
    if (rsi == r10) {
        rdx += *((rbx + 8));
        *((rbx + 0x20)) = rdi;
        rax = rdx;
        *((rbx + 8)) = rdx;
        rax |= 1;
        *((rdi + 8)) = rax;
        *((rdi + rdx)) = rdx;
        goto label_3;
    }
    r8 &= 0xfffffffffffffff8;
    rax = *((rsi + 0x18));
    rcx = r8;
    rdx += r8;
    rcx >>= 3;
    if (r8 <= 0xf8) {
        rsi = *((rsi + 0x10));
        if (rsi == rax) {
            eax = 0xfffffffe;
            eax = rotate_left32 (eax, cl);
            *(rbx) &= eax;
            goto label_9;
        }
        *((rsi + 0x18)) = rax;
        *((rax + 0x10)) = rsi;
        goto label_9;
    }
    r8 = *((rsi + 0x30));
    if (rsi != rax) {
        rcx = *((rsi + 0x10));
        *((rcx + 0x18)) = rax;
        *((rax + 0x10)) = rcx;
        goto label_10;
    }
    rax = *((rsi + 0x28));
    r9 = rsi + 0x28;
    if (rax == 0) {
        rax = *((rsi + 0x20));
        if (rax == 0) {
            goto label_10;
        }
        r9 = rsi + 0x20;
    }
    rcx = rax;
    do {
label_1:
        r11 = r9;
        rax = rcx;
        r9 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rax + 0x20));
    r9 = rax + 0x20;
    if (rcx != 0) {
        goto label_1;
    }
    *(r11) = 0;
label_10:
    if (r8 == 0) {
        goto label_9;
    }
    r9d = *((rsi + 0x38));
    rcx = r9;
    r9 = rbx + r9*8;
    if (*((r9 + 0x258)) != rsi) {
        goto label_11;
    }
    *((r9 + 0x258)) = rax;
    while (rax != 0) {
        rcx = *((rsi + 0x20));
        *((rax + 0x30)) = r8;
        if (rcx == 0) {
            goto label_12;
        }
        *((rax + 0x20)) = rcx;
        *((rcx + 0x30)) = rax;
        goto label_12;
        eax = 0xfffffffe;
        eax = rotate_left32 (eax, cl);
        *((rbx + 4)) &= eax;
        goto label_9;
label_11:
        if (*((r8 + 0x20)) == rsi) {
            *((r8 + 0x20)) = rax;
        } else {
            *((r8 + 0x28)) = rax;
        }
    }
    goto label_9;
label_12:
    rcx = *((rsi + 0x28));
    if (rcx != 0) {
        *((rax + 0x28)) = rcx;
        *((rcx + 0x30)) = rax;
    }
label_9:
    rax = rdx;
    rax |= 1;
    *((rdi + 8)) = rax;
    *((rdi + rdx)) = rdx;
    if (rdi == r10) {
        *((rbx + 8)) = rdx;
        goto label_3;
label_8:
        rax = rdx;
        r8 &= 0xfffffffffffffffe;
        rax |= 1;
        *((rsi + 8)) = r8;
        *((rdi + 8)) = rax;
        *((rdi + rdx)) = rdx;
    }
    rcx = rdx;
    rcx >>= 3;
    if (rdx <= 0xff) {
        edx = *(rbx);
        esi = 1;
        eax = rcx + rcx;
        esi <<= cl;
        rax = rbx + rax*8 + 0x48;
        if ((edx & esi) == 0) {
            edx |= esi;
            *(rbx) = edx;
            rdx = rax;
        } else {
            rdx = *((rax + 0x10));
        }
        *((rax + 0x10)) = rdi;
        *((rdx + 0x18)) = rdi;
        *((rdi + 0x10)) = rdx;
        *((rdi + 0x18)) = rax;
        goto label_3;
    }
    rsi = rdx;
    rsi >>= 8;
    eax = esi;
    if (esi != 0) {
        eax = 0x1f;
        if (esi > 0xffff) {
            goto label_13;
        }
        __asm ("bsr esi, esi");
        ecx = 0x26;
        r11 = rdx;
        esi ^= 0x1f;
        ecx -= esi;
        eax -= esi;
        r11 >>= cl;
        rcx = r11;
        ecx &= 1;
        eax = rcx + rax*2;
    }
label_13:
    esi = *((rbx + 4));
    ecx = eax;
    r8d = 1;
    r8d <<= cl;
    *((rdi + 0x38)) = eax;
    *((rdi + 0x28)) = 0;
    ecx = r8d;
    *((rdi + 0x20)) = 0;
    r8d = eax;
    if ((esi & r8d) == 0) {
        rax = rbx + r8*8 + 0x258;
        esi |= ecx;
        *((rbx + 4)) = esi;
        *((rbx + r8*8 + 0x258)) = rdi;
        *((rdi + 0x30)) = rax;
        goto label_14;
    }
    ecx = 0;
    rsi = *((rbx + r8*8 + 0x258));
    if (eax != 0x1f) {
        eax >>= 1;
        ecx = 0x39;
        ecx -= eax;
    }
    rax = rdx;
    rax <<= cl;
    rcx = rax;
    do {
        rax = *((rsi + 8));
        rax &= 0xfffffffffffffff8;
        if (rax == rdx) {
            goto label_15;
        }
        rax = rcx;
        rcx += rcx;
        rax >>= 0x3f;
        rax += 4;
        r8 = *((rsi + rax*8));
        if (r8 == 0) {
            goto label_16;
        }
        rsi = r8;
    } while (1);
label_16:
    *((rsi + rax*8)) = rdi;
    *((rdi + 0x30)) = rsi;
label_14:
    *((rdi + 0x18)) = rdi;
    *((rdi + 0x10)) = rdi;
    goto label_3;
label_15:
    rax = *((rsi + 0x10));
    *((rax + 0x18)) = rdi;
    *((rsi + 0x10)) = rdi;
    *((rdi + 0x10)) = rax;
    *((rdi + 0x18)) = rsi;
    *((rdi + 0x30)) = 0;
label_3:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x403312 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_00403312 (void) {
label_4:
    while (rax == 0) {
label_2:
        ebx = 0;
        goto label_6;
        rax = *((rdi + 0x28));
        r12 = rdi;
    }
    rdx = *((rdi + 0x10));
    rsi += 0x50;
    if (rdx <= rsi) {
label_0:
        ebx = 0;
        goto label_7;
    }
    rcx = rdi + 0x378;
    r13 = rcx;
    do {
        rdi = *(r13);
        if (rax >= rdi) {
            r9 = *((r13 + 8));
            r8 = rdi + r9;
            if (rax < r8) {
                goto label_8;
            }
        }
        r13 = *((r13 + 0x10));
    } while (r13 != 0);
    eax = *(0x18);
    __asm ("ud2");
label_8:
    eax = *((r13 + 0x18));
    if ((al & 8) != 0) {
        goto label_0;
    }
    if ((al & 1) == 0) {
        goto label_0;
    }
    r10 = *(0x004367b0);
    rax = rdx + r10 - 1;
    edx = 0;
    rax -= rsi;
    rax = rdx:rax / r10;
    rdx = rdx:rax % r10;
    rbx = rax - 1;
    rbx *= r10;
    if (rbx > r9) {
        goto label_0;
    }
label_1:
    if (rdi > rcx) {
        goto label_9;
    }
    if (r8 > rcx) {
        goto label_0;
    }
label_9:
    rcx = *((rcx + 0x10));
    if (rcx != 0) {
        goto label_1;
    }
    r14 = r9;
    r8d = 0;
    ecx = 0;
    r14 -= rbx;
    rsi = r9;
    rdx = r14;
    rax = fcn_00404008 ();
    rax++;
    if (rax != 0) {
        goto label_10;
    }
    rdi = *(r13);
    rsi = rbx;
    rdi += r14;
    eax = fcn_00403d56 ();
    if (eax != 0) {
        goto label_0;
    }
label_10:
    if (rbx != 0) {
        *((r13 + 8)) -= rbx;
        rdx = *((r12 + 0x10));
        rdi = r12;
        *((r12 + 0x358)) -= rbx;
        rsi = *((r12 + 0x28));
        rdx -= rbx;
        fcn_00401ad2 (rcx);
    }
label_7:
    rdi = r12;
    rax = fcn_00401b19 ();
    rbx += rax;
    if (rbx != 0) {
        goto label_6;
    }
    rax = *((r12 + 0x30));
    if (*((r12 + 0x10)) <= rax) {
        goto label_2;
    }
    *((r12 + 0x30)) = 0xffffffffffffffff;
label_6:
    eax = 0;
    al = (rbx != 0) ? 1 : 0;
    return rax;
    if (rdi == 0) {
        goto label_11;
    }
    rdx = rdi;
    rdi = rdi - 0x10;
    rcx = *((rdx - 8));
    rax = *((rdx - 8));
    rax &= 0xfffffffffffffff8;
    rsi = rdi + rax;
    if ((cl & 1) != 0) {
        goto label_12;
    }
    r8 = *((rdx - 0x10));
    rdi -= r8;
    cl &= 3;
    if (cl == 0) {
        rbx = rax + r8 + 0x20;
        rsi = rbx;
        eax = fcn_00403d56 ();
        if (eax != 0) {
            goto label_13;
        }
        *(0x00436738) -= rbx;
        goto label_13;
    }
    rax += r8;
    if (*(0x00436400) == rdi) {
        goto label_14;
    }
    rcx = r8;
    rdx = *((rdi + 0x18));
    rcx >>= 3;
    if (r8 <= 0xff) {
        r8 = *((rdi + 0x10));
        if (r8 == rdx) {
            edx = 0xfffffffe;
            edx = rotate_left32 (edx, cl);
            *(0x004363e0) &= edx;
            goto label_12;
        }
        *((r8 + 0x18)) = rdx;
        *((rdx + 0x10)) = r8;
        goto label_12;
    }
    r8 = *((rdi + 0x30));
    if (rdi != rdx) {
        rcx = *((rdi + 0x10));
        *((rcx + 0x18)) = rdx;
        *((rdx + 0x10)) = rcx;
        goto label_15;
    }
    rdx = *((rdi + 0x28));
    r9 = rdi + 0x28;
    if (rdx == 0) {
        rdx = *((rdi + 0x20));
        if (rdx == 0) {
            goto label_15;
        }
        r9 = rdi + 0x20;
    }
    rcx = rdx;
    do {
label_3:
        r10 = r9;
        rdx = rcx;
        r9 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rdx + 0x20));
    r9 = rdx + 0x20;
    if (rcx != 0) {
        goto label_3;
    }
    *(r10) = 0;
label_15:
    if (r8 == 0) {
        goto label_12;
    }
    r9d = *((rdi + 0x38));
    r10 = r9 + 0x4a;
    rcx = r9;
    if (*((r9*8 + 0x436638)) != rdi) {
        goto label_16;
    }
    *((r10*8 + 0x4363e8)) = rdx;
    while (rdx != 0) {
        rcx = *((rdi + 0x20));
        *((rdx + 0x30)) = r8;
        if (rcx == 0) {
            goto label_17;
        }
        *((rdx + 0x20)) = rcx;
        *((rcx + 0x30)) = rdx;
        goto label_17;
        edx = 0xfffffffe;
        edx = rotate_left32 (edx, cl);
        *(0x004363e4) &= edx;
        goto label_12;
label_16:
        if (*((r8 + 0x20)) == rdi) {
            *((r8 + 0x20)) = rdx;
        } else {
            *((r8 + 0x28)) = rdx;
        }
    }
    goto label_12;
label_17:
    rcx = *((rdi + 0x28));
    if (rcx != 0) {
        *((rdx + 0x28)) = rcx;
        *((rcx + 0x30)) = rdx;
        goto label_12;
label_14:
        rdx = *((rsi + 8));
        rcx = *((rsi + 8));
        ecx &= 3;
        if (rcx != 3) {
            goto label_12;
        }
        rdx &= 0xfffffffffffffffe;
        *(0x004363e8) = rax;
        *((rsi + 8)) = rdx;
        rdx = rax;
        rdx |= 1;
        *((rdi + 8)) = rdx;
        *(rsi) = rax;
        goto label_13;
    }
label_12:
    r8 = *((rsi + 8));
    if ((r8b & 2) != 0) {
        goto label_18;
    }
    r10 = *(0x00436400);
    if (*(0x00436408) == rsi) {
        rax += *(0x004363f0);
        *(0x00436408) = rdi;
        rdx = rax;
        *(0x004363f0) = rax;
        rdx |= 1;
        *((rdi + 8)) = rdx;
        if (rdi == r10) {
            *(0x00436400) = 0;
            *(0x004363e8) = 0;
        }
        if (rax <= *(0x00436410)) {
            goto label_13;
        }
        esi = 0;
        edi = 0x4363e0;
        goto label_4;
    }
    if (rsi == r10) {
        rax += *(0x004363e8);
        *(0x00436400) = rdi;
        rdx = rax;
        *(0x004363e8) = rax;
        rdx |= 1;
        *((rdi + 8)) = rdx;
        *((rdi + rax)) = rax;
        goto label_13;
    }
    r8 &= 0xfffffffffffffff8;
    rdx = *((rsi + 0x18));
    rcx = r8;
    rax += r8;
    rcx >>= 3;
    if (r8 <= 0xf8) {
        rsi = *((rsi + 0x10));
        if (rsi == rdx) {
            edx = 0xfffffffe;
            edx = rotate_left32 (edx, cl);
            *(0x004363e0) &= edx;
            goto label_19;
        }
        *((rsi + 0x18)) = rdx;
        *((rdx + 0x10)) = rsi;
        goto label_19;
    }
    r8 = *((rsi + 0x30));
    if (rsi != rdx) {
        rcx = *((rsi + 0x10));
        *((rcx + 0x18)) = rdx;
        *((rdx + 0x10)) = rcx;
        goto label_20;
    }
    rdx = *((rsi + 0x28));
    r9 = rsi + 0x28;
    if (rdx == 0) {
        rdx = *((rsi + 0x20));
        if (rdx == 0) {
            goto label_20;
        }
        r9 = rsi + 0x20;
    }
    rcx = rdx;
    do {
label_5:
        r11 = r9;
        rdx = rcx;
        r9 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rdx + 0x20));
    r9 = rdx + 0x20;
    if (rcx != 0) {
        goto label_5;
    }
    *(r11) = 0;
label_20:
    if (r8 == 0) {
        goto label_19;
    }
    r9d = *((rsi + 0x38));
    r11 = r9 + 0x4a;
    rcx = r9;
    if (*((r9*8 + 0x436638)) != rsi) {
        goto label_21;
    }
    *((r11*8 + 0x4363e8)) = rdx;
    while (rdx != 0) {
        rcx = *((rsi + 0x20));
        *((rdx + 0x30)) = r8;
        if (rcx == 0) {
            goto label_22;
        }
        *((rdx + 0x20)) = rcx;
        *((rcx + 0x30)) = rdx;
        goto label_22;
        edx = 0xfffffffe;
        edx = rotate_left32 (edx, cl);
        *(0x004363e4) &= edx;
        goto label_19;
label_21:
        if (*((r8 + 0x20)) == rsi) {
            *((r8 + 0x20)) = rdx;
        } else {
            *((r8 + 0x28)) = rdx;
        }
    }
    goto label_19;
label_22:
    rcx = *((rsi + 0x28));
    if (rcx != 0) {
        *((rdx + 0x28)) = rcx;
        *((rcx + 0x30)) = rdx;
    }
label_19:
    rdx = rax;
    rdx |= 1;
    *((rdi + 8)) = rdx;
    *((rdi + rax)) = rax;
    if (rdi == r10) {
        *(0x004363e8) = rax;
        goto label_13;
label_18:
        rdx = rax;
        r8 &= 0xfffffffffffffffe;
        rdx |= 1;
        *((rsi + 8)) = r8;
        *((rdi + 8)) = rdx;
        *((rdi + rax)) = rax;
    }
    rcx = rax;
    rcx >>= 3;
    if (rax <= 0xff) {
        edx = *(0x004363e0);
        esi = 1;
        eax = rcx + rcx;
        esi <<= cl;
        rax = rax*8 + 0x436428;
        if ((edx & esi) == 0) {
            edx |= esi;
            *(0x004363e0) = edx;
            rdx = rax;
        } else {
            rdx = *((rax + 0x10));
        }
        *((rax + 0x10)) = rdi;
        *((rdx + 0x18)) = rdi;
        *((rdi + 0x10)) = rdx;
        *((rdi + 0x18)) = rax;
        goto label_13;
    }
    rsi = rax;
    rsi >>= 8;
    edx = esi;
    if (esi != 0) {
        edx = 0x1f;
        if (esi > 0xffff) {
            goto label_23;
        }
        __asm ("bsr esi, esi");
        ecx = 0x26;
        rbx = rax;
        esi ^= 0x1f;
        ecx -= esi;
        edx -= esi;
        rbx >>= cl;
        rcx = rbx;
        ecx &= 1;
        edx = rcx + rdx*2;
    }
label_23:
    esi = *(0x004363e4);
    ecx = edx;
    r8d = 1;
    r8d <<= cl;
    *((rdi + 0x38)) = edx;
    *((rdi + 0x28)) = 0;
    ecx = r8d;
    *((rdi + 0x20)) = 0;
    r8d = edx;
    if ((esi & r8d) == 0) {
        rax = r8*8 + 0x436638;
        esi |= ecx;
        *((r8*8 + 0x436638)) = rdi;
        *(0x004363e4) = esi;
        *((rdi + 0x30)) = rax;
        goto label_24;
    }
    ecx = 0;
    rsi = *((r8*8 + 0x436638));
    if (edx != 0x1f) {
        edx >>= 1;
        ecx = 0x39;
        ecx -= edx;
    }
    rbx = rax;
    rbx <<= cl;
    rcx = rbx;
    do {
        rdx = *((rsi + 8));
        rdx &= 0xfffffffffffffff8;
        if (rdx == rax) {
            goto label_25;
        }
        rdx = rcx;
        rcx += rcx;
        rdx >>= 0x3f;
        rdx += 4;
        r8 = *((rsi + rdx*8));
        if (r8 == 0) {
            goto label_26;
        }
        rsi = r8;
    } while (1);
label_26:
    *((rsi + rdx*8)) = rdi;
    *((rdi + 0x30)) = rsi;
label_24:
    *((rdi + 0x18)) = rdi;
    *((rdi + 0x10)) = rdi;
    goto label_27;
label_25:
    rax = *((rsi + 0x10));
    *((rax + 0x18)) = rdi;
    *((rsi + 0x10)) = rdi;
    *((rdi + 0x10)) = rax;
    *((rdi + 0x18)) = rsi;
    *((rdi + 0x30)) = 0;
label_27:
    *(0x00436418)--;
    if (*(0x00436418) == 0) {
        edi = 0x4363e0;
        void (*0x401b19)() ();
    }
label_13:
    return;
label_11:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x403873 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_00403873 (int64_t arg3, int64_t arg2) {
    r8 = arg3;
    rdx = arg2;
    r13 = rsi;
    r12 = rdi;
    rdi = rdx;
    rsi = *((rsi + 8));
    rdx = *((rsi + 8));
    rdx &= 0xfffffffffffffff8;
    if ((sil & 3) != 0) {
        goto label_2;
    }
    while (rax == -1) {
label_0:
        r13d = 0;
        goto label_3;
        rsi = rdi + 8;
        rax = *(0x004367b0);
        if (rdx >= rsi) {
            rsi = rax + rax;
            r8 = rdx;
            r8 -= rdi;
            if (r8 <= rsi) {
                goto label_3;
            }
        }
        r14 = *(r13);
        rbx = rax + rdi + 0x3e;
        rax = -rax;
        rdi = r13;
        r8d = 0;
        rbx &= rax;
        r15 = rdx + r14 + 0x20;
        rdi -= r14;
        rdx = rbx;
        rsi = r15;
        rax = fcn_00404008 ();
    }
    rdx = rbx;
    r13 = rax + r14;
    rdx -= r14;
    rcx = rdx - 0x20;
    *((r13 + 8)) = rcx;
    *((r13 + rdx - 0x18)) = 0xb;
    *((r13 + rdx - 0x10)) = 0;
    if (rax < *((r12 + 0x18))) {
        *((r12 + 0x18)) = rax;
    }
    rbx += *((r12 + 0x358));
    rbx -= r15;
    *((r12 + 0x358)) = rbx;
    if (rbx <= *((r12 + 0x360))) {
        goto label_3;
    }
    *((r12 + 0x360)) = rbx;
    goto label_3;
label_2:
    r9 = r13 + rdx;
    if (rdx >= rdi) {
        rdx -= rdi;
        if (rdx <= 0x1f) {
            goto label_3;
        }
        esi &= 1;
        r8 = r13 + rdi;
        rax = rdx;
        rdi |= rsi;
        rax |= 3;
        rdi |= 2;
        rsi = r8;
        *((r13 + 8)) = rdi;
        *((r8 + 8)) = rax;
        *((r9 + 8)) |= 1;
        goto label_4;
    }
    if (*((r12 + 0x28)) != r9) {
        goto label_5;
    }
    rdx += *((r12 + 0x10));
    r9 = rdx;
    if (rdx <= rdi) {
        goto label_0;
    }
    esi &= 1;
    r9 -= rdi;
    rax = r13 + rdi;
    rdx = rsi;
    rdx |= rdi;
    rdx |= 2;
    *((r13 + 8)) = rdx;
    rdx = r9;
    rdx |= 1;
    *((rax + 8)) = rdx;
    *((r12 + 0x28)) = rax;
    *((r12 + 0x10)) = r9;
    goto label_3;
label_5:
    if (*((r12 + 0x20)) != r9) {
        goto label_6;
    }
    rcx = *((r12 + 8));
    rcx += rdx;
    if (rcx < rdi) {
        goto label_0;
    }
    r8 = rcx;
    esi &= 1;
    rax = r13 + rcx;
    r8 -= rdi;
    rdx = rsi;
    if (r8 > 0x1f) {
        rdx |= rdi;
        rcx = r13 + rdi;
        rdx |= 2;
        *((r13 + 8)) = rdx;
        rdx = r8;
        rdx |= 1;
        *((rcx + 8)) = rdx;
        *(rax) = r8;
        *((rax + 8)) &= 0xfffffffffffffffe;
        *((r12 + 8)) = r8;
        *((r12 + 0x20)) = rcx;
        goto label_3;
    }
    rcx |= rsi;
    rcx |= 2;
    *((r13 + 8)) = rcx;
    *((rax + 8)) |= 1;
    *((r12 + 8)) = 0;
    *((r12 + 0x20)) = 0;
    goto label_3;
label_6:
    r10 = *((r9 + 8));
    if ((r10b & 2) != 0) {
        goto label_0;
    }
    r10 &= 0xfffffffffffffff8;
    r8 = rdx + r10;
    if (r8 < rdi) {
        goto label_0;
    }
    r11 = r8;
    rcx = r10;
    rax = *((r9 + 0x18));
    r11 -= rdi;
    rcx >>= 3;
    if (r10 <= 0xf8) {
        rdx = *((r9 + 0x10));
        if (rdx == rax) {
            eax = 0xfffffffe;
            eax = rotate_left32 (eax, cl);
            *(r12) &= eax;
            goto label_7;
        }
        *((rdx + 0x18)) = rax;
        *((rax + 0x10)) = rdx;
        goto label_7;
    }
    r10 = *((r9 + 0x30));
    if (r9 != rax) {
        rdx = *((r9 + 0x10));
        *((rdx + 0x18)) = rax;
        *((rax + 0x10)) = rdx;
        goto label_8;
    }
    rax = *((r9 + 0x28));
    rcx = r9 + 0x28;
    if (rax == 0) {
        rax = *((r9 + 0x20));
        if (rax == 0) {
            goto label_8;
        }
        rcx = r9 + 0x20;
    }
    rdx = rax;
    do {
label_1:
        rbx = rcx;
        rax = rdx;
        rcx = rdx + 0x28;
        rdx = *((rdx + 0x28));
    } while (rdx != 0);
    rdx = *((rax + 0x20));
    rcx = rax + 0x20;
    if (rdx != 0) {
        goto label_1;
    }
    *(rbx) = 0;
label_8:
    if (r10 == 0) {
        goto label_7;
    }
    edx = *((r9 + 0x38));
    rcx = rdx;
    rdx = r12 + rdx*8;
    if (*((rdx + 0x258)) != r9) {
        goto label_9;
    }
    *((rdx + 0x258)) = rax;
    while (rax != 0) {
        rdx = *((r9 + 0x20));
        *((rax + 0x30)) = r10;
        if (rdx == 0) {
            goto label_10;
        }
        *((rax + 0x20)) = rdx;
        *((rdx + 0x30)) = rax;
        goto label_10;
        eax = 0xfffffffe;
        eax = rotate_left32 (eax, cl);
        *((r12 + 4)) &= eax;
        goto label_7;
label_9:
        if (*((r10 + 0x20)) == r9) {
            *((r10 + 0x20)) = rax;
        } else {
            *((r10 + 0x28)) = rax;
        }
    }
    goto label_7;
label_10:
    rdx = *((r9 + 0x28));
    if (rdx != 0) {
        *((rax + 0x28)) = rdx;
        *((rdx + 0x30)) = rax;
    }
label_7:
    esi &= 1;
    rax = r13 + r8;
    rdx = rsi;
    if (r11 <= 0x1f) {
        rdx |= r8;
        rdx |= 2;
        *((r13 + 8)) = rdx;
        *((rax + 8)) |= 1;
    } else {
        rdx |= rdi;
        rsi = r13 + rdi;
        rdx |= 2;
        *((r13 + 8)) = rdx;
        rdx = r11;
        rdx |= 3;
        *((rsi + 8)) = rdx;
        *((rax + 8)) |= 1;
        rdx = r11;
label_4:
        rdi = r12;
        fcn_00401f12 (rcx);
    }
label_3:
    rax = r13;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x404420 */
#include <stdint.h>
 
void fcn_00404420 (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40427b */
#include <stdint.h>
 
int64_t fcn_0040427b (signed int64_t arg2) {
    rdx = arg2;
    eax = 0;
    do {
label_0:
        if (edx <= eax) {
            goto label_1;
        }
        ecx = rdx + rax;
        ecx >>= 1;
        r8 = (int64_t) ecx;
        if (*((rsi + r8*8)) > edi) {
            goto label_2;
        }
        eax = rcx + 1;
    } while (1);
label_2:
    edx = ecx;
    goto label_0;
label_1:
    rax = (int64_t) eax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x40429b */
#include <stdint.h>
 
void fcn_0040429b (int64_t arg4) {
    r9 = arg4;
    fcn_004042f0 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4042f0 */
#include <stdint.h>
 
int64_t fcn_004042f0 (void) {
    rax = 0xc501dd20c50009;
    uint64_t (*0x004362c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4046fa */
#include <stdint.h>
 
int32_t fcn_004046fa (void) {
    edx = edi;
    eax = esi;
    edx &= 7;
    if (edx == 7) {
        edx = 0x40;
        if ((al & 1) != 0) {
            goto label_0;
        }
        rsi = *(0x00436360);
        rcx = (int64_t) eax;
        rcx &= rsi;
        ecx = 0x80;
        if (rsi != rcx) {
            edx = ecx;
        }
    } else {
        edx = edi;
        edx &= 3;
        if (edx == 3) {
            edx = 4;
            if ((al & 1) != 0) {
                goto label_0;
            }
            rcx = *(0x00436360);
            rdx = (int64_t) esi;
            rdx &= rcx;
            dl = (rcx != rdx) ? 1 : 0;
            edx = (int32_t) dl;
            edx = rdx*4 + 4;
        } else {
            ecx = edi;
            edx = 0x20;
            ecx &= 5;
            if (ecx == 5) {
                goto label_0;
            }
            edx = 0x10;
            if ((dil & 4) != 0) {
                goto label_0;
            }
            edx = edi;
            edx &= 1;
            edx++;
        }
    }
label_0:
    eax |= edi;
    eax &= 0xdd000000;
    eax |= edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401a32 */
#include <stdint.h>
 
int64_t fcn_00401a32 (void) {
    int64_t var_10h;
    int64_t var_18h;
    rax = *(sym.imp.KernelBase.dll_CreateFileMappingNumaW);
    return void (*0x401a9f)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401a9f */
#include <stdint.h>
 
void loc_00401a9f (int64_t arg_10h, int64_t arg_18h, int64_t arg4, int64_t arg3, int64_t arg1, int64_t arg2) {
    r9 = arg4;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    r8 = rdx;
    r9 = rcx;
    rcx = rdi;
    rdx = rsi;
    void (*rax)(uint64_t, uint64_t, uint64_t*, uint64_t*) (r8, r9, *((rbp + 0x10)), *((rbp + 0x18)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x4042a8 */
#include <stdint.h>
 
int32_t fcn_004042a8 (void) {
    eax = esi;
    edx = edi;
    eax >>= 1;
    edx &= 2;
    eax &= 1;
    eax |= edx;
    edx = esi;
    esi <<= 5;
    edx >>= 2;
    esi &= 0x80000000;
    edx &= 0x20000000;
    eax |= edx;
    eax |= esi;
    esi = rdi*4;
    edi <<= 3;
    edi &= 0x20;
    esi &= 4;
    eax |= esi;
    eax |= edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401a5e */
#include <stdint.h>
 
int64_t fcn_00401a5e (int64_t arg4, int64_t arg3, int64_t arg1, int64_t arg2) {
    r9 = arg4;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rax = *(sym.imp.KernelBase.dll_MapViewOfFileExNuma);
    return void (*0x401a9f)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401a19 */
#include <stdint.h>
 
void fcn_00401a19 (void) {
    rcx = rdi;
    CloseHandle ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x404786 */
#include <stdint.h>
 
uint64_t fcn_00404786 (void) {
    if ((*(0x004362b8) & 4) != 0) {
        eax = fcn_00401a48 ();
        *(0x00437fb0) = eax;
        rax |= 0xffffffffffffffff;
        return rax;
    }
    fcn_00401566 ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401a48 */
#include <stdint.h>
 
void fcn_00401a48 (void) {
    GetLastError ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x404542 */
#include <stdint.h>
 
void fcn_00404542 (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    rcx = rdx;
    if (rdi < rsi) {
        goto label_0;
    }
    rdi = rdi + rcx - 1;
    rsi = rsi + rcx - 1;
    __asm ("std");
    do {
label_0:
        *(rdi) = *(rsi);
        rcx--;
        rsi++;
        rdi++;
    } while (rcx != 0);
    rdi = rsi;
    rcx = rsi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x404300 */
#include <stdint.h>
 
int64_t fcn_00404300 (void) {
    rax = 0x4900492049000b;
    uint64_t (*0x004362c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401a74 */
#include <stdint.h>
 
void fcn_00401a74 (void) {
    rcx = rdi;
    UnmapViewOfFile ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life2/x64_pe_orig/subject.exe @ 0x401acc */
#include <stdint.h>
 
void fcn_00401acc (void) {
    uint64_t (*0x004362d0)() ();
}
