/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401245 */
#include <stdint.h>
 
void entry0 (int64_t arg_8h, int64_t arg_18h) {
    *(section.2.__DATA.__bss) = 8;
    r12 = *(rsp);
    r13 = rsp + 8;
    r14 = rsp + r12*8 + 0x18;
    eax = 0x401214;
    edi = 0x402010;
    ecx = 0x402050;
    rcx -= rdi;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    eax = 0;
    ecx |= 0xffffffff;
    rdi = r14;
    __asm ("repne scasq rax, qword [rdi]");
    r15 = rdi;
    ebp = 0;
    ebx = segment.__TEXT;
    fcn_00401297 (rdi);
    *(0x0040335c) |= 1;
    eax = 0x402008;
    ecx = 0x402008;
    do {
        if (rcx == rax) {
            goto label_0;
        }
        uint64_t (*rax)(uint64_t, uint64_t) (rcx, rax);
        rax += 8;
    } while (1);
label_0:
    rdi = r12;
    rsi = r13;
    rdx = r14;
    eax = fcn_0040134d ();
    rax = void (*0x40139b)(uint64_t, uint64_t) (eax, rsi);
    r12d = edi;
    fcn_00401907 (0, rsi, rdx);
    edi = r12d;
    return fcn_00401aa1 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x400675 */
#include <stdint.h>
 
int32_t fcn_00400675 (int64_t arg4, int64_t arg3, int64_t arg2, int32_t argc) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = argc;
    edx = esi;
    edx += 5;
    ah = 0x20;
    do {
        __asm ("in al, dx");
        al &= ah;
        if (al != 0) {
            goto label_0;
        }
        __asm ("pause");
    } while (1);
label_0:
    eax = edi;
    edx = esi;
    __asm ("out dx, al");
    rcx = rdx;
    rax = rdx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x400748 */
#include <stdint.h>
 
int32_t fcn_00400748 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    edx = ~edx;
    ecx = edi;
    cl = 0;
    ch &= 0x80;
    tmp_0 = edi;
    edi = ecx;
    ecx = tmp_0;
    ecx -= esi;
    ecx -= edi;
    esi = edi;
    esi += ecx;
    eax = 0x71e0000;
    do {
        *(rdi) = *(rsi);
        rcx--;
        rsi++;
        rdi++;
    } while (rcx != 0);
    rax = rcx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x40114f */
#include <stdint.h>
 
uint64_t fcn_0040114f (int64_t arg1) {
    rdi = arg1;
    rcx = main;
    rbx = rdi;
    rax = fcn_004010fb (rdi, 3, main, rcx);
    *(rax) &= main;
    __asm ("invlpg byte [rbx]");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x4010fb */
#include <stdint.h>
 
int64_t fcn_004010fb (int64_t arg4, uint32_t arg3, uint32_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x40117b */
#include <stdint.h>
 
int64_t fcn_0040117b (char ** envp, char ** argv, int64_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    r9 = rdi;
    r10d = 0;
    do {
        eax = r10d;
        rax *= 0x18;
        if (*((r9 + rax + 8)) == 0) {
            goto label_1;
        }
        r10d++;
    } while (1);
label_1:
    r11d = 1;
    rdx = r9 + 0x18;
    if (r11d >= r10d) {
        return rax;
    }
label_0:
    rbx = *(rdx);
    r13 = *((rdx + 8));
    r8 = rdx;
    r12d = *((rdx + 0x10));
    r14d = *((rdx + 0x14));
    eax = r11d;
    do {
        ecx = r11d;
        eax--;
        if (rbx == *((r8 - 0x18))) {
            goto label_2;
        }
        rsi = r8 - 0x18;
        rdi = r8;
        r8 -= 0x18;
        ecx = 6;
        *(rdi) = *(rsi);
        rcx--;
        rsi += 4;
        rdi += 4;
    } while (eax != 0);
    goto label_3;
label_2:
    eax = ecx;
label_3:
    rax *= 0x18;
    r11d++;
    rdx += 0x18;
    rax += r9;
    do {
    } while (rcx != 0);
    *(rax) = rbx;
    *((rax + 8)) = r13;
    *((rax + 0x10)) = r12d;
    *((rax + 0x14)) = r14d;
    if (r11d < r10d) {
        goto label_0;
    }
    r12 = rbx;
    r13 = rbx;
    r14 = rbx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t fcn_00401000 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* [00] -r-x section size 4096 named 0.__TEXT.__text */
    rcx = rdx;
    r15 = rsi;
    r14d = segment.__TEXT;
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
        r12 = main;
        goto label_1;
    }
label_10:
    *((rbp - 0x38)) = rcx;
    r14 += 0x1000;
    fcn_004010fb (r14, 3, r15, rcx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x400629 */
#include <stdint.h>
 
int32_t fcn_00400629 (int64_t arg4, int64_t arg3, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
    ebx = edi;
    do {
        tmp_0 = esi;
        esi = ebx;
        ebx = tmp_0;
        al = *(rsi);
        rsi++;
        tmp_1 = esi;
        esi = ebx;
        ebx = tmp_1;
        if (al == 0) {
            goto label_0;
        }
        eax = 0x8eb0000;
        fcn_00400675 (eax, rsi, rdx, rcx);
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x400653 */
#include <stdint.h>
 
int8_t fcn_00400653 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    ecx = esi;
    esi = edi;
    edx = 0;
label_0:
    al = *(rsi);
    rsi++;
    dl = al;
    al = *(rsi);
    rsi++;
    dh = al;
    if (eax == 0) {
        goto label_1;
    }
    edx += 5;
    ah = 0x40;
    do {
        __asm ("in al, dx");
        al &= ah;
        __asm ("pause");
    } while (al == 0);
    ecx--;
    if (ecx != 0) {
        goto label_0;
    }
label_1:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x40124e */
#include <stdint.h>
 
void fcn_0040124e (int64_t arg_8h, int64_t arg_18h, int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    if (rdi == 0) {
label_0:
        void (*0x40125e)() ();
    }
    *(section.2.__DATA.__bss) = 0x20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401297 */
#include <stdint.h>
 
int64_t fcn_00401297 (int64_t arg6) {
    r9 = arg6;
    edi = section.2.__DATA.__bss;
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
    r9 |= main;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x40134d */
#include <stdint.h>
 
int32_t fcn_0040134d (void) {
    eax = 0x2a;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401907 */
#include <stdint.h>
 
void fcn_00401907 (int64_t arg4, int64_t arg3, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401aa1 */
#include <stdint.h>
 
int32_t fcn_00401aa1 (void) {
    *(0x0040335c) |= 4;
    if ((*(section.2.__DATA.__bss) & 4) == 0) {
        goto label_0;
    }
    ecx = (int32_t) dil;
    do {
        uint64_t (*0x00402010)() ();
    } while (1);
label_0:
    eax = *(0x00403028);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("cli");
    __asm ("lidt [0x401ad2]");
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x40165c */
#include <stdint.h>
 
uint64_t fcn_0040165c (uint32_t arg5, uint32_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_68h;
    uint32_t var_60h;
    uint32_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    uint32_t var_40h;
    uint32_t var_38h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rsi + rdx;
    r11 = rdx;
    r15 = 0x100002600;
    r9 = rbp - 0x50;
    r13 = rsi;
    ebx = 0;
    *((rbp - 0x50)) = rdi;
    *((rbp - 0x60)) = rcx;
    *((rbp - 0x58)) = r8;
    *((rbp - 0x48)) = rsi;
    *((rbp - 0x40)) = rax;
    fcn_00401601 (r9);
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
        fcn_00401601 (r9);
    } while (1);
label_3:
    fcn_0040162c (r9, 0);
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
        r12++;
        fcn_00401601 (r9);
    } while (1);
label_9:
    r10d = 0;
    do {
        if (*((rbp - 0x38)) != 0x22) {
            goto label_10;
        }
        fcn_00401601 (r9);
        r10++;
    } while (1);
label_10:
    rax = r12;
    if (r10 != 0) {
        goto label_11;
    }
label_1:
    r12--;
    if (r12 == main) {
        goto label_0;
    }
    rax = fcn_0040162c (r9, 0x5c);
    goto label_1;
    do {
label_11:
        if (rax <= 1) {
            goto label_12;
        }
        *((rbp - 0x68)) = rax;
        fcn_0040162c (r9, 0x5c);
        rax = *((rbp - 0x68));
        rax -= 2;
    } while (1);
label_12:
    r12b &= 1;
    if (r12b == 0) {
        goto label_13;
    }
    fcn_0040162c (r9, 0x22);
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
        r14 += 3;
        fcn_0040162c (r9, 0x22);
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
    fcn_0040162c (r9, rsi);
    fcn_00401601 (r9);
    goto label_0;
label_6:
    fcn_0040162c (r9, 0);
    goto label_2;
label_5:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x4019fa */
#include <stdint.h>
 
void fcn_004019fa (void) {
    fcn_00401a3c (rdi, rsi, rdx, rcx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401a3c */
#include <stdint.h>
 
int32_t fcn_00401a3c (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401a09 */
#include <stdint.h>
 
int64_t fcn_00401a09 (int64_t arg4, int64_t arg3, uint32_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x401601 */
#include <stdint.h>
 
uint64_t fcn_00401601 (int64_t arg1) {
    rdi = arg1;
    rdx = rdi;
    rdi = *(rdi);
    eax = *(rdi);
    if (ax <= 0xd7ff) {
        *((rdx + 0x18)) = eax;
        eax = 1;
    } else {
        rsi = rdx + 0x18;
        eax = fcn_004019fa ();
    }
    rax += rax;
    *(rdx) += rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x40162c */
#include <stdint.h>
 
int64_t fcn_0040162c (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rdi;
    edi = esi;
    r8 = *((rdx + 0x10));
    rax = (int64_t) esi;
    if (esi <= 0x7f) {
        goto label_0;
    }
    al = fcn_00401a09 (rdi, rsi, rdx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/life/x64_macho_after_exec_on_mac/subject.exe @ 0x4013b4 */
#include <stdint.h>
 
int32_t fcn_004013b4 (void) {
    eax = *(0x00403018);
    *(0x00403358) = eax;
    rax = main;
    return eax;
}
