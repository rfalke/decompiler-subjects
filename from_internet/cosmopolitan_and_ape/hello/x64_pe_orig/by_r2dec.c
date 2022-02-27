/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401867 */
#include <stdint.h>
 
void entry0 (void) {
    int64_t var_e044h_2;
    int64_t var_e040h_2;
    int64_t var_e030h_2;
    uint32_t var_e044h;
    int64_t var_e040h;
    int64_t var_e038h;
    int64_t var_e030h;
    int64_t var_d030h_2;
    int64_t var_d030h;
    int64_t var_c02fh;
    int64_t var_8030h_2;
    int64_t var_8030h;
    int64_t var_32h;
label_2:
    ebp = 0;
    ebx = 0x400000;
    fcn_00401297 (rcx);
    *(0x0040783c) |= 1;
    eax = 0x403008;
    ecx = 0x403010;
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
    eax = fcn_0040141f ();
    edi = eax;
    eax = fcn_004017fd (rcx, rdx);
    ecx = 0x800;
    eax = 0;
    *((rbp - 0xe040)) = rax;
    *((rbp - 0xe038)) = rax;
    eax = SetDefaultDllDirectories (rbx, r12, r13, r14, r15);
    if (eax == 0) {
        rcx = 0xfffffffffffffff4;
        rax = GetStdHandle ();
        r9 = rbp - 0x8030;
        rdx = 0x004029ad;
        rcx = rax;
        r8d = 6;
        WriteFile (0);
        ecx = 1;
        ExitProcess ();
    }
    rax = 4;
    *(0x00404630) = eax;
    rax = GetCommandLineW (4);
    r12 = rax;
    rax = GetEnvironmentStringsW ();
    rsi = rbp - 0xc02f;
    rdi = r12;
    r8d = 0x200;
    r13 = rax;
    eax = fcn_00401afe (rbp - 0xd030, rdx, 0x3fff);
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
        eax = fcn_0040262d (rcx, rdx);
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
    al = fcn_0040263c (rcx, rdx);
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
        eax = fcn_0040262d (rcx, rdx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401297 */
#include <stdint.h>
 
int64_t fcn_00401297 (int64_t arg2) {
    rdx = arg2;
    edi = 0x404000;
    esi = 0x402e68;
    r8 = rdi;
    eax = 0;
    do {
        ecx = 0;
        __asm ("cpuid");
        memset (rdi, eax, rcx);
        tmp_0 = eax;
        eax = ebx;
        ebx = tmp_0;
        memset (rdi, eax, rcx);
        tmp_1 = eax;
        eax = ecx;
        ecx = tmp_1;
        memset (rdi, eax, rcx);
        tmp_2 = eax;
        eax = edx;
        edx = tmp_2;
        memset (rdi, eax, rcx);
label_0:
        rax = 1;
        if (eax == 0) {
            goto label_3;
        }
    } while (al <= *(r8));
    rdi += 0x10;
    goto label_0;
label_3:
    rbx = 1;
    edx = 0x4026e7;
    ch = 0x11;
label_1:
    eax = 0;
    al = *(rsi);
    rsi++;
    cl = al;
    al = *(rsi);
    rsi++;
    rax += rdx;
    do {
        *(rdi) = rax;
        rdi += 8;
        cl--;
    } while (cl != 0);
    ch--;
    if (ch != 0) {
        goto label_1;
    }
    rsi += 6;
    fcn_00401636 ();
    fcn_004017ec ();
    rcx = 0x20;
    edx = 0x402764;
    fcn_004017be (rcx, rdx);
    rcx = 0x20;
    edx = 0x40288a;
    fcn_004017be (rcx, rdx);
    if ((*(rdi) & 8) == 0) {
        if ((*(rdi) & 0x20) == 0) {
            if ((*(rdi) & 4) == 0) {
                if (*(r15) != 0) {
                    esi = 0x402f0c;
                } else {
                }
                esi = 0x402f22;
            } else {
            }
            esi = 0x402f01;
        } else {
        }
        esi = 0x402f17;
    } else {
        esi = 0x402f33;
    }
    ecx = 0x4025d0;
    rax = 8;
    *(rdi) = rax;
    rdi += 8;
    rax = 8;
    rax += rcx;
    *(rdi) = rax;
    rdi += 8;
    edi = 0x404648;
    r9 |= 0xffffffffffffffff;
    ebx = 0x404690;
label_2:
    if (rdi >= rbx) {
        goto label_4;
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
    goto label_2;
label_4:
    rsi = rdi;
    rbx = rdi;
    rax = 0x00406000;
    rax + 0xc = 1;
    edx = *(0x00404688);
    *((rax + 4)) = edx;
    rcx = 0x00405000;
    *((rax + 0x18)) = rcx;
    *((rax + 0x20)) = 0x1000;
    rcx = fcn_00402083;
    rdx = 0x00402115;
    if ((*(0x00404630) & 2) == 0) {
        rdx = rcx;
    }
    *((rax + 0x30)) = rdx;
    *(0x00406038) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40141f */
#include <stdint.h>
 
uint32_t fcn_0040141f (void) {
    rdi = 0x004029a1;
    eax = fcn_00401e0a ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401e0a */
#include <stdint.h>
 
uint32_t fcn_00401e0a (void) {
    r12 = *(0x00406038);
    rsi = r12;
    eax = fcn_00401eaa ();
    while (eax == 0) {
        eax |= 0xffffffff;
        goto label_0;
        rsi = r12;
        edi = 0xa;
        ebx = eax;
        eax = fcn_00401e45 ();
        eax++;
    }
    eax = rbx + 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4017fd */
#include <stdint.h>
 
void fcn_004017fd (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r12d = edi;
    edi = 0;
    fcn_004021f0 (rcx, rdx);
    edi = r12d;
    return fcn_00402941 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4021f0 */
#include <stdint.h>
 
void fcn_004021f0 (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r12 = rdi;
    rbx = 0x004060a0;
label_1:
    rdi = *(rbx);
    if (rdi == 0) {
        goto label_3;
    }
    esi = 1;
label_2:
    eax = *(rdi);
    do {
label_0:
        if (rax == 0) {
            goto label_4;
        }
        __asm ("bsf ecx, eax");
        edx = esi;
        edx <<= cl;
        edx = ~edx;
        rax &= rdx;
        if (r12 == 0) {
            goto label_5;
        }
        r8 = rcx * 0x18;
    } while (*((rdi + r8 + 0x20)) != r12);
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
            rax = 0x00000000;
            if (rax == 0) {
                goto label_6;
            }
            0 ();
        }
label_6:
        *(rbx) = r13;
        goto label_1;
    }
    if (r13 != 0) {
        rdi = r13;
        goto label_2;
    }
label_3:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x402941 */
#include <stdint.h>
 
int32_t fcn_00402941 (void) {
    *(0x0040783c) |= 4;
    if ((*(0x00404630) & 4) != 0) {
        ecx = (int32_t) dil;
        ExitProcess ();
    }
    eax = *(0x00404680);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("cli");
    __asm ("lidt [0x402972]");
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401609 */
#include <stdint.h>
 
uint32_t fcn_00401609 (void) {
    int64_t var_14h;
    r13 = rsi;
    eax = fcn_004025b0 ();
    if (eax != 0xffffffff) {
        rdi = r13;
        *((rbp - 0x14)) = eax;
        fcn_0040168d ();
        eax = *((rbp - 0x14));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4025b0 */
#include <stdint.h>
 
int64_t fcn_004025b0 (void) {
    rax = 0x35022721530005;
    uint64_t (*0x00404638)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40168d */
#include <stdint.h>
 
int64_t fcn_0040168d (void) {
    if (rdi != 0) {
        eax = *(0x00404630);
        if ((al & 8) != 0) {
            rbx = *((rdi + 0x18));
            r14d = *((rdi + 6));
            r13d = *((rdi + 4));
            r10 = *((rdi + 0x70));
            r15 = *(rdi);
            r12 = *((rdi + 0x10));
            r11 = *((rdi + 0x60));
            r8 = *((rdi + 0x28));
            *((rdi + 0x28)) = rbx;
            rbx = *((rdi + 0x68));
            r9 = *((rdi + 0x20));
            rsi = *((rdi + 0x30));
            rcx = *((rdi + 0x38));
            rdx = *((rdi + 0x40));
            rax = *((rdi + 0x48));
            *(rdi) = r15;
            *((rdi + 0x10)) = r14;
            *((rdi + 0x18)) = r13d;
            *((rdi + 0x1c)) = r12;
            *((rdi + 0x30)) = r11;
            *((rdi + 0x38)) = r10;
            *((rdi + 0x40)) = rbx;
        } else {
            if ((al & 0x20) != 0) {
                r12d = *((rdi + 0x18));
                r11 = *((rdi + 0x80));
                rbx = *((rdi + 0x70));
                r10 = *((rdi + 0x78));
                r9 = *((rdi + 0x30));
                r8 = *((rdi + 0x38));
                rsi = *((rdi + 0x40));
                rcx = *((rdi + 0x48));
                rdx = *((rdi + 0x50));
                rax = *((rdi + 0x58));
                *((rdi + 0x18)) = r12d;
            } else {
                if ((al & 0x10) == 0) {
                    goto label_0;
                }
                r15 = *((rdi + 4));
                r12 = *((rdi + 0x1c));
                r14d = *(rdi);
                r13 = *((rdi + 0x14));
                r11 = *((rdi + 0x60));
                rbx = *((rdi + 0x50));
                r10 = *((rdi + 0x58));
                rsi = *((rdi + 0x30));
                *(rdi) = r15;
                r15d = *((rdi + 0x10));
                rcx = *((rdi + 0x38));
                rdx = *((rdi + 0x40));
                rax = *((rdi + 0x48));
                r9 = *((rdi + 0x20));
                r8 = *((rdi + 0x28));
                *((rdi + 0x18)) = r14d;
                *((rdi + 0x10)) = r15;
                *((rdi + 0x1c)) = r13;
                *((rdi + 0x28)) = r12;
            }
            *((rdi + 0x30)) = rbx;
            *((rdi + 0x38)) = r11;
            *((rdi + 0x40)) = r10;
        }
        *((rdi + 0x48)) = r9;
        *((rdi + 0x50)) = r8;
        *((rdi + 0x58)) = rsi;
        *((rdi + 0x60)) = rcx;
        *((rdi + 0x68)) = rdx;
        *((rdi + 0x70)) = rax;
label_0:
        r12 = rbx;
        r13 = rbx;
        r14 = rbx;
        r15 = rbx;
        return rax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40245f */
#include <stdint.h>
 
int32_t fcn_0040245f (void) {
    eax = 0;
    if (edi != 0) {
        rdi = (int64_t) edi;
        rdi *= 0x18;
        rdi += *(0x004076b0);
        al = (*((rdi + 0x10)) == esi) ? 1 : 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401dd2 */
#include <stdint.h>
 
void fcn_00401dd2 (void) {
    rcx = rdi;
    GetFileType ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401afe */
#include <stdint.h>
 
uint64_t fcn_00401afe (uint32_t arg3, uint32_t arg1, int64_t arg2) {
    int64_t var_68h;
    uint32_t var_60h;
    uint32_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    uint32_t var_40h;
    uint32_t var_38h;
    r8 = arg3;
    rcx = arg1;
    rdx = arg2;
    rax = rsi + rdx;
    r11 = rdx;
    r15 = 0x100002600;
    r9 = rbp - 0x50;
    r13 = rsi;
    ebx = 0;
    *((rbp - 0x50)) = rdi;
    rdi = r9;
    *((rbp - 0x60)) = rcx;
    *((rbp - 0x58)) = r8;
    *((rbp - 0x48)) = rsi;
    *((rbp - 0x40)) = rax;
    fcn_00401aa3 (rcx);
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
        rdi = r9;
        fcn_00401aa3 (rcx);
    } while (1);
label_3:
    esi = 0;
    rdi = r9;
    fcn_00401ace (rcx);
    if (r11 != 0) {
        rax = *((rbp - 0x48));
        r11--;
        rax -= r13;
        if (rax > r11) {
            rax = r11;
        }
        *((r13 + rax)) = 0;
    }
    if (*((rbp - 0x58)) == 0) {
        goto label_5;
    }
    r8 = *((rbp - 0x58));
    rax = *((rbp - 0x60));
    r8--;
    if (r8 > rbx) {
        r8 = rbx;
    }
    *((rax + r8*8)) = 0;
    goto label_5;
label_4:
    rbx++;
    if (rbx < *((rbp - 0x58))) {
        rax = *((rbp - 0x48));
        if (rax >= *((rbp - 0x40))) {
            eax = 0;
        }
        rdx = *((rbp - 0x60));
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
        rdi = r9;
        r12++;
        fcn_00401aa3 (rcx);
    } while (1);
label_9:
    r10d = 0;
    do {
        if (*((rbp - 0x38)) != 0x22) {
            goto label_10;
        }
        rdi = r9;
        fcn_00401aa3 (rcx);
        r10++;
    } while (1);
label_10:
    rax = r12;
    if (r10 != 0) {
        goto label_11;
    }
label_1:
    r12--;
    if (r12 == -1) {
        goto label_0;
    }
    esi = 0x5c;
    rdi = r9;
    rax = fcn_00401ace (rcx);
    goto label_1;
    do {
label_11:
        if (rax <= 1) {
            goto label_12;
        }
        esi = 0x5c;
        rdi = r9;
        *((rbp - 0x68)) = rax;
        fcn_00401ace (rcx);
        rax = *((rbp - 0x68));
        rax -= 2;
    } while (1);
label_12:
    r12b &= 1;
    if (r12b == 0) {
        goto label_13;
    }
    esi = 0x22;
    rdi = r9;
    fcn_00401ace (rcx);
    r10--;
    if (r10 == 0) {
        goto label_0;
    }
label_13:
    r14d = 3;
    r12 = r10 + 1;
    do {
        if (r12 < r14) {
            goto label_14;
        }
        esi = 0x22;
        rdi = r9;
        r14 += 3;
        fcn_00401ace (rcx);
    } while (1);
label_14:
    edx = 0;
    ecx = 3;
    rax = r10;
    rax = rdx:rax / rcx;
    rdx = rdx:rax % rcx;
    r14b = (rdx == 0) ? 1 : 0;
    goto label_0;
label_8:
    rdi = r9;
    fcn_00401ace (rcx);
    rdi = r9;
    fcn_00401aa3 (rcx);
    goto label_0;
label_6:
    esi = 0;
    rdi = r9;
    fcn_00401ace (rcx);
    goto label_2;
label_5:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40262d */
#include <stdint.h>
 
void fcn_0040262d (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    fcn_0040266f (rcx, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40266f */
#include <stdint.h>
 
int32_t fcn_0040266f (int64_t arg1, int64_t arg2) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40263c */
#include <stdint.h>
 
int64_t fcn_0040263c (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    eax = 0;
    if (edi <= 0x7f) {
        goto label_0;
    }
    __asm ("bsr ecx, edi");
    edx = 0x4029c3;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4010fb */
#include <stdint.h>
 
int64_t fcn_004010fb (int64_t arg1, uint32_t arg2) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401636 */
#include <stdint.h>
 
uint64_t fcn_00401636 (void) {
    rcx = 0xfffffffffffffff6;
    rbx = 0x004076a0;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4017ec */
#include <stdint.h>
 
void fcn_004017ec (void) {
    ecx = 0;
label_0:
    al = *(rsi);
    rsi++;
    tmp_0 = cl;
    cl = al;
    al = tmp_0;
    al = *(rsi);
    rsi++;
    __asm ("jrcxz 0x4017fc");
    do {
        *(rdi) = al;
        rdi++;
        ecx--;
    } while (ecx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4017be */
#include <stdint.h>
 
int64_t fcn_004017be (int64_t arg1, int64_t arg2) {
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
    al = ((*(0x00404035) & 2) != 0) ? 1 : 0;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40156c */
#include <stdint.h>
 
uint32_t fcn_0040156c (void) {
    int64_t var_104h;
    int64_t var_100h;
    int64_t var_e8h;
    r13d = *(0x00404630);
    r13d &= 4;
    if (r13d == 0) {
        rsi = rbp - 0x100;
        ebx = *(0x00407838);
        eax = fcn_00401609 ();
        eax++;
        if (eax != 0) {
            eax = *((rbp - 0xe8));
            eax &= 0xf000;
        } else {
            *(0x00407838) = ebx;
        } else {
            esi = 1;
            *((rbp - 0x104)) = edi;
            r13d = 0;
            al = fcn_0040245f ();
            edi = *((rbp - 0x104));
            if (al == 0) {
                goto label_0;
            }
            r12 = (int64_t) edi;
            r12 *= 0x18;
            r12 += *(0x004076b0);
            rdi = *(r12);
            eax = fcn_00401dd2 ();
        }
        r13b = (eax == 2) ? 1 : 0;
        r13d = (int32_t) r13b;
    }
label_0:
    eax = r13d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40215b */
#include <stdint.h>
 
uint64_t fcn_0040215b (int64_t arg2) {
    rdx = arg2;
    r14 = rdx;
    r13 = rdi;
    r12 = rsi;
    rbx = *(0x004060a0);
    if (rbx == 0) {
        rbx = 0x004060a8;
        *(0x004060a0) = rbx;
    }
    if (*(rbx) == 0xffffffff) {
        rax = 0x00000000;
        if (rax != 0) {
            esi = 0x310;
            edi = 1;
            rax = void (*rax)() ();
            if (rax != 0) {
                *((rax + 8)) = rbx;
                *(0x004060a0) = rax;
                rbx = rax;
            }
        } else {
            fcn_00401836 ();
        }
    } else {
        edx = *(rbx);
        eax = *(rbx);
        eax = ~eax;
        __asm ("bsr eax, eax");
        __asm ("bts edx, eax");
        rax *= 0x18;
        *(rbx) = edx;
        rbx += rax;
        eax = 0;
        *((rbx + 0x10)) = r13;
        *((rbx + 0x18)) = r12;
        *((rbx + 0x20)) = r14;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x402286 */
#include <stdint.h>
 
uint64_t fcn_00402286 (int64_t arg1, int64_t arg2) {
    int64_t var_40h;
    int64_t var_38h;
    rcx = arg1;
    rdx = arg2;
    r15d = 0;
    r14 = rcx;
    r13 = rdi;
    r12 = rsi;
    rbx = rdx;
    rdi = *(rdi);
    fcn_004023ce ();
    rdi = *(r13);
    al = fcn_004023ce ();
    if (al != 0) {
        r15 = *(r13);
    }
    rdi = *(r12);
    if (*(r13) != 0) {
        rsi = rdi;
        rsi >>= 1;
        rsi += rdi;
    } else {
        edx = 0;
        eax = 0x1f;
        esi = 4;
        rax = rdx:rax / rbx;
        rdx = rdx:rax % rbx;
        if (rax < 4) {
            rsi = rax;
            goto label_0;
        }
    }
label_0:
    if (rdi != 0) {
        rax = rbx;
        r8 = rbx;
        r8 *= rdi;
        rax |= rdi;
        if ((rax & 0xffffffffffff0000) == 0) {
            goto label_1;
        }
        edx = 0;
        rax = r8;
        rax = rdx:rax / rdi;
        rdx = rdx:rax % rdi;
        if (rbx != rax) {
            goto label_2;
        }
    } else {
        r8d = 0;
    }
label_1:
    rcx = rsi + r14 + 1;
    if (rcx != 0) {
        rax = rbx;
        r14 = rbx;
        r14 *= rcx;
        rax |= rcx;
        if ((rax & 0xffffffffffff0000) == 0) {
            goto label_3;
        }
        edx = 0;
        rax = r14;
        rax = rdx:rax / rcx;
        rdx = rdx:rax % rcx;
        if (rbx != rax) {
            goto label_2;
        }
    } else {
        r14d = 0;
    }
label_3:
    rax = 0x00000000;
    *((rbp - 0x40)) = r8;
    *((rbp - 0x38)) = rcx;
    if (rax != 0) {
        rsi = r14 + 0x1f;
        rdi = r15;
        rsi &= 0xffffffffffffffe0;
        rax = void (*rax)() ();
        if (rax != 0) {
            rcx = *((rbp - 0x38));
            r8 = *((rbp - 0x40));
            if (r15 == 0) {
                rsi = *(r13);
                if (rsi == 0) {
                    goto label_4;
                }
                rdi = rax;
                fcn_00402750 (rcx, r8);
            }
label_4:
            rdi = rax + r8;
            esi = 0;
            rdx -= r8;
            rax = fcn_00402870 (rcx, r14);
            *(r12) = rcx;
            *(r13) = rax;
            al = 1;
        }
    } else {
        fcn_00401836 ();
        goto label_5;
label_2:
        eax = fcn_00401856 ();
label_5:
        eax = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401aa3 */
#include <stdint.h>
 
uint64_t fcn_00401aa3 (int64_t arg1) {
    rcx = arg1;
    rdx = rdi;
    rdi = *(rdi);
    eax = *(rdi);
    if (ax <= 0xd7ff) {
        *((rdx + 0x18)) = eax;
        eax = 1;
    } else {
        rsi = rdx + 0x18;
        eax = fcn_0040262d (rcx, rdx);
    }
    rax += rax;
    *(rdx) += rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401ace */
#include <stdint.h>
 
int64_t fcn_00401ace (int64_t arg1) {
    rcx = arg1;
    rdx = rdi;
    edi = esi;
    r8 = *((rdx + 0x10));
    rax = (int64_t) esi;
    if (esi <= 0x7f) {
        goto label_0;
    }
    al = fcn_0040263c (rcx, rdx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401dad */
#include <stdint.h>
 
int64_t fcn_00401dad (void) {
    rdx = rdi;
    r8 = rsi;
    if (rdi != -1) {
        ecx = 8;
        eax = 0;
        rdi = rsi;
        memset (rdi, eax, rcx);
        *((rsi + 0x10)) = rdx;
    } else {
        r8d = 0;
    }
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40297a */
#include <stdint.h>
 
uint64_t fcn_0040297a (void) {
    if ((*(0x00404630) & 4) != 0) {
        eax = fcn_00401deb ();
        *(0x00407838) = eax;
        rax |= 0xffffffffffffffff;
        return rax;
    }
    fcn_00401846 ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401deb */
#include <stdint.h>
 
void fcn_00401deb (void) {
    GetLastError ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401846 */
#include <stdint.h>
 
int32_t fcn_00401846 (void) {
    eax = *(0x00404668);
    *(0x00407838) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401eaa */
#include <stdint.h>
 
uint64_t fcn_00401eaa (void) {
    r14d = 0;
    r13 = rdi;
    rbx = rsi;
    do {
label_0:
        dl = *(r13);
        if (dl == 0) {
            goto label_1;
        }
        eax = *((rbx + 0x14));
        rcx = *((rbx + 0x18));
        r13++;
        *((rcx + rax)) = dl;
        esi = *((rbx + 0x20));
        eax = *((rbx + 0x14));
        ecx = rsi - 1;
        eax++;
        eax &= ecx;
        ecx = *((rbx + 0x10));
        *((rbx + 0x14)) = eax;
        if (eax != ecx) {
            sil = *(rbx);
            if (sil == 2) {
                goto label_2;
            }
            sil--;
            if (sil != 0) {
                goto label_3;
            }
            if (dl != 0xa) {
                goto label_3;
            }
        }
label_2:
        rdx = *((rbx + 0x30));
        if (rdx != 0) {
            rdi = rbx;
            eax = void (*rdx)() ();
        } else {
            if (eax != ecx) {
                goto label_3;
            }
            rdi = rbx;
            eax = fcn_00401f6e ();
        }
        r12d = eax;
        if (eax != 0xffffffff) {
            goto label_3;
        }
        rdi = rbx;
        rax = fcn_00401fa1 ();
        rax = (int64_t) eax;
    } while (rax == *(0x00404650));
    rdi = rbx;
    eax = fcn_00401f97 ();
    if (eax != 0) {
        rax = *(0x00404678);
        *((rbx + 8)) = eax;
        *(0x00407838) = eax;
        goto label_4;
label_3:
        r14d++;
        goto label_0;
label_1:
        r12d = r14 + 1;
    }
label_4:
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401e45 */
#include <stdint.h>
 
int32_t fcn_00401e45 (void) {
    r8 = rsi;
    if (edi != 0xffffffff) {
        eax = *((rsi + 0x14));
        rdx = *((rsi + 0x18));
        *((rdx + rax)) = dil;
        eax = *((rsi + 0x14));
        esi = *((rsi + 0x20));
        eax++;
        edx = rsi - 1;
        eax &= edx;
        edx = *((r8 + 0x10));
        *((r8 + 0x14)) = eax;
        if (eax != edx) {
            cl = *(r8);
            if (cl == 2) {
                goto label_0;
            }
            cl--;
            if (cl != 0) {
                goto label_1;
            }
            if (dil != 0xa) {
                goto label_1;
            }
        }
label_0:
        rcx = *((r8 + 0x30));
        if (rcx != 0) {
            rdi = r8;
            eax = void (*rcx)() ();
        }
        if (eax != edx) {
label_1:
            eax = (int32_t) dil;
        }
    } else {
        rdi = r8;
        fcn_00401f6e ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401f6e */
#include <stdint.h>
 
void fcn_00401f6e (void) {
    esi |= 0xffffffff;
    return void (*0x401f76)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401fa1 */
#include <stdint.h>
 
int32_t fcn_00401fa1 (void) {
    eax = 0;
    __asm ("cmovns eax, dword [rdi + 8]");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401f97 */
#include <stdint.h>
 
int32_t fcn_00401f97 (void) {
    eax = 0;
    al = (*((rdi + 8)) == 0xffffffff) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401faf */
#include <stdint.h>
 
int64_t fcn_00401faf (void) {
    int64_t var_18h;
    do {
        if (rdi != 0) {
            goto label_2;
        }
        rax = *(0x00406040);
        r12d = 0;
        r13 = rax - 1;
label_0:
        if (r13 == -1) {
            goto label_3;
        }
        rax = *(0x00406050);
        rdi = *((rax + r13*8));
        if (rdi == 0) {
            goto label_4;
        }
        eax = fcn_00401faf ();
    } while (1);
    while (eax == 0xffffffff) {
        r12d |= 0xffffffff;
        goto label_3;
        r12d += eax;
label_4:
        r13--;
        goto label_0;
label_2:
        r12d = 0;
        if (*((rdi + 0xc)) == 0xffffffff) {
            goto label_3;
        }
        eax = *((rdi + 4));
        if ((*(0x00404688) & rax) == 0) {
            goto label_3;
        }
        r12d = *((rdi + 8));
        if (r12d != 0) {
            goto label_5;
        }
label_1:
        eax = *((rdi + 0x14));
        if (*((rdi + 0x10)) == eax) {
            goto label_3;
        }
        *((rbp - 0x18)) = rdi;
        eax = fcn_00402083 ();
    }
    rdi = *((rbp - 0x18));
    r12d += eax;
    goto label_1;
label_5:
    if (r12d != 0xffffffff) {
        esi = r12d;
        eax = fcn_00401f76 ();
        r12d = eax;
    } else {
        r12d = 0;
    }
label_3:
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x402083 */
#include <stdint.h>
 
uint64_t fcn_00402083 (void) {
    r12 = rdi;
    esi = *((rdi + 0x10));
    ebx = *((rdi + 0x14));
    if (esi >= ebx) {
        ebx = *((rdi + 0x20));
    }
    ebx -= esi;
    rsi += *((r12 + 0x18));
    edi = *((r12 + 0xc));
    edx = ebx;
    rax = fcn_0040247a (rcx);
    if (rax == -1) {
        rdi = r12;
        eax = fcn_00402150 ();
    } else {
        ecx = *((r12 + 0x20));
        eax += *((r12 + 0x10));
        edx = rcx - 1;
        eax &= edx;
        *((r12 + 0x10)) = eax;
        eax = ebx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401f76 */
#include <stdint.h>
 
int64_t fcn_00401f76 (void) {
    if (esi == 0) {
        esi |= 0xffffffff;
    }
    eax = *((rdi + 8));
    if (eax <= 0) {
        eax = esi;
    }
    *((rdi + 8)) = eax;
    if (esi > 0) {
        *(0x00407838) = esi;
    }
    rax |= 0xffffffffffffffff;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40247a */
#include <stdint.h>
 
int64_t fcn_0040247a (int64_t arg2) {
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg2;
    r12 = (int64_t) edi;
    if (r12d == 0xffffffff) {
        fcn_00401826 ();
        rax = (int64_t) eax;
    } else {
        r14 = rsi;
        edi = r12d;
        esi = 5;
        r13 = rdx;
        al = fcn_0040245f ();
        if (al != 0) {
            r12 *= 0x18;
            rsi = rbp - 0x30;
            *((rbp - 0x30)) = r14;
            r12 += *(0x004076b0);
            *((rbp - 0x28)) = r13;
            rcx |= 0xffffffffffffffff;
            edx = 1;
            rax = 0x00000000;
            rdi = *(r12);
            void (*rax)() ();
        } else {
            if ((*(0x00404630) & 4) == 0) {
                rdx = r13;
                rsi = r14;
                edi = r12d;
                fcn_004025c0 ();
            } else {
                esi = 2;
                edi = r12d;
                al = fcn_0040245f ();
                if (al != 0) {
                    rdi = (int64_t) r12d;
                    rsi = rbp - 0x30;
                    *((rbp - 0x30)) = r14;
                    rdi *= 0x18;
                    *((rbp - 0x28)) = r13;
                    r9d = 0;
                    rdi += *(0x004076b0);
                    r8d = 0;
                    ecx = 0;
                    edx = 1;
                    rax = 0x00000000;
                    void (*rax)() ();
                } else {
                    esi = 1;
                    edi = r12d;
                    al = fcn_0040245f ();
                    if (al == 0) {
                        esi = 4;
                        edi = r12d;
                        al = fcn_0040245f ();
                        if (al == 0) {
                            goto label_0;
                        }
                    }
                    rdi = (int64_t) r12d;
                    rsi = rbp - 0x30;
                    rcx |= 0xffffffffffffffff;
                    rdi *= 0x18;
                    edx = 1;
                    *((rbp - 0x30)) = r14;
                    rdi += *(0x004076b0);
                    *((rbp - 0x28)) = r13;
                    fcn_00401d0b (rcx, rdx);
                    goto label_1;
label_0:
                    fcn_00401816 ();
                }
            }
        }
    }
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x402150 */
#include <stdint.h>
 
void fcn_00402150 (void) {
    esi = *(0x00407838);
    return void (*0x401f76)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401836 */
#include <stdint.h>
 
int32_t fcn_00401836 (void) {
    eax = *(0x00404660);
    *(0x00407838) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4023ce */
#include <stdint.h>
 
int64_t fcn_004023ce (void) {
    eax = 0x7fffd;
    rdx = 0xfffffffffff;
    rax <<= 0x2d;
    rax += rdi;
    if (rax > rdx) {
        rdx = *(0x004063c0);
        r12 = 0x004063c0;
        rbx = rdi;
        rsi = r12 + 8;
        rbx >>= 0x10;
        edi = ebx;
        rax = fcn_0040243f (rcx);
        rdx = rax;
        eax = 0;
        if (rdx != 0) {
            rcx = rdx - 1;
            eax = 1;
            if (*((r12 + rdx*8)) != ebx) {
                eax = 0;
                al = (*((r12 + rcx*8 + 0xc)) == ebx) ? 1 : 0;
            }
            eax &= 1;
        }
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x40243f */
#include <stdint.h>
 
int64_t fcn_0040243f (signed int64_t arg2) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x402750 */
#include <stdint.h>
 
void fcn_00402750 (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x402870 */
#include <stdint.h>
 
void fcn_00402870 (int64_t arg1, uint32_t arg2) {
    rcx = arg1;
    rdx = arg2;
    xmm3 = esi;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
    ebx = 0x404528;
    uint64_t (*rbx + rcx*8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401856 */
#include <stdint.h>
 
int32_t fcn_00401856 (void) {
    eax = *(0x00404670);
    *(0x00407838) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401826 */
#include <stdint.h>
 
int32_t fcn_00401826 (void) {
    eax = *(0x00404658);
    *(0x00407838) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x4025c0 */
#include <stdint.h>
 
int64_t fcn_004025c0 (void) {
    rax = 0x4000420040001;
    uint64_t (*0x00404638)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401d0b */
#include <stdint.h>
 
uint64_t fcn_00401d0b (int64_t arg1, int64_t arg2) {
    LPDWORD * lpNumberOfBytesWritten;
    int64_t var_40h;
    int64_t var_18h;
    rcx = arg1;
    rdx = arg2;
    r13 = rdi;
    rdi = rcx;
    r12 = rsi;
    rbx = rdx;
    do {
        if (rbx == 0) {
            goto label_0;
        }
        if (*((r12 + 8)) != 0) {
            goto label_0;
        }
        r12 += 0x10;
        rbx--;
    } while (1);
label_0:
    rsi = rbp - 0x40;
    rax = fcn_00401dad ();
    if (rbx != 0) {
        r8d = *((r12 + 8));
        rdx = *(r12);
    } else {
        r8d = 0;
        edx = 0;
    }
    r9 = rbp - 0x44;
    rcx = *(r13);
    eax = WriteFile (rax, rcx);
    if (eax == 0) {
        goto label_1;
    }
    if (*((rbp - 0x44)) != 0) {
        goto label_2;
    }
    eax = 0;
    do {
        if (rbx == rax) {
            goto label_2;
        }
        rax++;
    } while (1);
label_2:
    rcx = *(r13);
    FlushFileBuffers ();
    eax = *((rbp - 0x44));
    goto label_3;
label_1:
    fcn_0040297a ();
label_3:
    rsp = rbp - 0x18;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_pe_orig/subject.exe @ 0x401816 */
#include <stdint.h>
 
int32_t fcn_00401816 (void) {
    eax = *(0x00404648);
    *(0x00407838) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
