/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x4013c5 */
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
    *(0x0040335c) |= 1;
    eax = 0x402008;
    ecx = 0x402008;
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
    eax = fcn_0040134d ();
    edi = eax;
    rax = void (*0x40139b)() ();
    r12d = edi;
    edi = 0;
    fcn_00401907 (rcx, rdx);
    edi = r12d;
    eax = fcn_00401aa1 ();
    ecx = 0x800;
    eax = 0;
    *((rbp - 0xe040)) = rax;
    *((rbp - 0xe038)) = rax;
    eax = SetDefaultDllDirectories (rbx, r12, r13, r14, r15);
    if (eax == 0) {
        rcx = 0xfffffffffffffff4;
        rax = GetStdHandle ();
        r9 = rbp - 0x8030;
        rdx = 0x00401ae1;
        rcx = rax;
        r8d = 6;
        WriteFile (0);
        ecx = 1;
        ExitProcess ();
    }
    rax = 4;
    *(0x00403000) = eax;
    rax = GetCommandLineW (4);
    r12 = rax;
    rax = GetEnvironmentStringsW ();
    rsi = rbp - 0xc02f;
    rdi = r12;
    r8d = 0x200;
    r13 = rax;
    eax = fcn_0040165c (rbp - 0xd030, rdx, 0x3fff);
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
        eax = fcn_004019fa (rcx, rdx);
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
    al = fcn_00401a09 (rcx, rdx);
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
        eax = fcn_004019fa (rcx, rdx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x401297 */
#include <stdint.h>
 
int64_t fcn_00401297 (int64_t arg4) {
    r9 = arg4;
    edi = 0x403000;
    esi = 0x401ee8;
    if ((*(rdi) & 8) == 0) {
        if ((*(rdi) & 0x20) == 0) {
            if ((*(rdi) & 4) == 0) {
                if (*(r15) != 0) {
                    esi = 0x401eed;
                } else {
                }
                esi = 0x401ef5;
            } else {
            }
            esi = 0x401ee9;
        } else {
        }
        esi = 0x401ef1;
    } else {
        esi = 0x401ef8;
    }
    ecx = 0x40199d;
    rax = 8;
    *(rdi) = rax;
    rdi += 8;
    rax = 8;
    rax += rcx;
    *(rdi) = rax;
    rdi += 8;
    edi = 0x403018;
    r9 |= 0xffffffffffffffff;
    ebx = 0x403030;
label_0:
    if (rdi >= rbx) {
        goto label_1;
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
    goto label_0;
label_1:
    rsi = rdi;
    rbx = rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x40134d */
#include <stdint.h>
 
int32_t fcn_0040134d (void) {
    eax = 0x2a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x401907 */
#include <stdint.h>
 
void fcn_00401907 (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    r12 = rdi;
    rbx = 0x00403040;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x401aa1 */
#include <stdint.h>
 
int32_t fcn_00401aa1 (void) {
    *(0x0040335c) |= 4;
    if ((*(0x00403000) & 4) != 0) {
        ecx = (int32_t) dil;
        ExitProcess ();
    }
    eax = *(0x00403028);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("cli");
    __asm ("lidt [0x401ad2]");
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x40165c */
#include <stdint.h>
 
uint64_t fcn_0040165c (uint32_t arg3, uint32_t arg1, int64_t arg2) {
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
    fcn_00401601 (rcx);
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
        fcn_00401601 (rcx);
    } while (1);
label_3:
    esi = 0;
    rdi = r9;
    fcn_0040162c (rcx);
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
        fcn_00401601 (rcx);
    } while (1);
label_9:
    r10d = 0;
    do {
        if (*((rbp - 0x38)) != 0x22) {
            goto label_10;
        }
        rdi = r9;
        fcn_00401601 (rcx);
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
    rax = fcn_0040162c (rcx);
    goto label_1;
    do {
label_11:
        if (rax <= 1) {
            goto label_12;
        }
        esi = 0x5c;
        rdi = r9;
        *((rbp - 0x68)) = rax;
        fcn_0040162c (rcx);
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
    fcn_0040162c (rcx);
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
        fcn_0040162c (rcx);
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
    fcn_0040162c (rcx);
    rdi = r9;
    fcn_00401601 (rcx);
    goto label_0;
label_6:
    esi = 0;
    rdi = r9;
    fcn_0040162c (rcx);
    goto label_2;
label_5:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x4019fa */
#include <stdint.h>
 
void fcn_004019fa (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    fcn_00401a3c (rcx, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x401a3c */
#include <stdint.h>
 
int32_t fcn_00401a3c (int64_t arg1, int64_t arg2) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x401a09 */
#include <stdint.h>
 
int64_t fcn_00401a09 (int64_t arg1, int64_t arg2) {
    rcx = arg1;
    rdx = arg2;
    eax = 0;
    if (edi <= 0x7f) {
        goto label_0;
    }
    __asm ("bsr ecx, edi");
    edx = 0x401af7;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x4010fb */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x401601 */
#include <stdint.h>
 
uint64_t fcn_00401601 (int64_t arg1) {
    rcx = arg1;
    rdx = rdi;
    rdi = *(rdi);
    eax = *(rdi);
    if (ax <= 0xd7ff) {
        *((rdx + 0x18)) = eax;
        eax = 1;
    } else {
        rsi = rdx + 0x18;
        eax = fcn_004019fa (rcx, rdx);
    }
    rax += rax;
    *(rdx) += rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x40162c */
#include <stdint.h>
 
int64_t fcn_0040162c (int64_t arg1) {
    rcx = arg1;
    rdx = rdi;
    edi = esi;
    r8 = *((rdx + 0x10));
    rax = (int64_t) esi;
    if (esi <= 0x7f) {
        goto label_0;
    }
    al = fcn_00401a09 (rcx, rdx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_pe_orig/subject.exe @ 0x4013b4 */
#include <stdint.h>
 
int32_t fcn_004013b4 (void) {
    eax = *(0x00403018);
    *(0x00403358) = eax;
    rax = 0xffffffffffffffff;
    return eax;
}
