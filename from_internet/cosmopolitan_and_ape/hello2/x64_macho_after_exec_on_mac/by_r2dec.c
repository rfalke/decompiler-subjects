/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40129e */
#include <stdint.h>
 
void entry0 (int64_t arg_8h, int64_t arg_18h) {
    *(0x00440668) = 8;
    r12 = *(rsp);
    r13 = rsp + 8;
    r14 = rsp + r12*8 + 0x18;
    eax = 0x40126d;
    edi = 0x406018;
    ecx = 0x4060b8;
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
    fcn_004012f0 (rdi);
    *(0x00443c74) |= 1;
    eax = 0x406008;
    ecx = 0x406010;
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
    eax = fcn_004014ce ();
    return fcn_004018ae (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x400675 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x400748 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4011ac */
#include <stdint.h>
 
uint64_t fcn_004011ac (int64_t arg1) {
    rdi = arg1;
    rbx = rdi;
    rax = fcn_00401158 (rdi, 3, 0x6f000, 0x3220);
    *(rax) &= main;
    __asm ("invlpg byte [rbx]");
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401158 */
#include <stdint.h>
 
int64_t fcn_00401158 (int64_t arg4, uint32_t arg3, uint32_t arg2, int64_t arg1) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4011d4 */
#include <stdint.h>
 
int64_t fcn_004011d4 (char ** envp, char ** argv, int64_t arg1) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40105d */
#include <stdint.h>
 
int64_t fcn_0040105d (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
    fcn_00401158 (r14, 3, r15, rcx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x400629 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x400653 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4012a7 */
#include <stdint.h>
 
void fcn_004012a7 (int64_t arg_8h, int64_t arg_18h, int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_0;
    }
    if (rdi == 0) {
label_0:
        void (*0x4012b7)() ();
    }
    *(0x00440668) = 0x20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x405211 */
#include <stdint.h>
 
int32_t fcn_00405211 (void) {
    *(0x00443c74) |= 4;
    if ((*(0x00440668) & 4) == 0) {
        goto label_0;
    }
    ecx = (int32_t) dil;
    do {
        uint64_t (*0x00406038)() ();
    } while (1);
label_0:
    eax = *(0x00440738);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("cli");
    __asm ("lidt [0x405242]");
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40161f */
#include <stdint.h>
 
uint64_t fcn_0040161f (char ** envp, int64_t arg2, int64_t arg1) {
    rdx = envp;
    rsi = arg2;
    rdi = arg1;
    rcx = 0xfffffffffffffff6;
    ebx = 0x443aa0;
    rax = rbx + 0x18;
    rbx = 3;
    *((rbx + 0x10)) = rax;
    rbx + 8 = 0x10;
    rax = 1;
    *((rbx + 0x28)) = eax;
    *((rbx + 0x40)) = eax;
    *((rbx + 0x58)) = eax;
    rax = void (*0x00406080)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) (1, 0x10, 3, rbx, rsi, rdi, 0xfffffffffffffff6);
    rcx = 0xfffffffffffffff5;
    *((rbx + 0x18)) = rax;
    rax = void (*0x00406080)(uint64_t) (0xfffffffffffffff5);
    rcx = 0xfffffffffffffff4;
    *((rbx + 0x30)) = rax;
    rax = void (*0x00406080)(uint64_t) (0xfffffffffffffff4);
    *((rbx + 0x48)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40189d */
#include <stdint.h>
 
void fcn_0040189d (void) {
    ecx = 0;
label_0:
    al = *(rsi);
    rsi++;
    tmp_0 = cl;
    cl = al;
    al = tmp_0;
    al = *(rsi);
    rsi++;
    __asm ("jrcxz 0x4018ad");
    do {
        *(rdi) = al;
        rdi++;
        ecx--;
    } while (ecx != 0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40186f */
#include <stdint.h>
 
int64_t fcn_0040186f (int64_t arg4, int64_t arg3, int64_t arg2) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
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
    al = ((*(0x0044003d) & 2) != 0) ? 1 : 0;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4015cb */
#include <stdint.h>
 
void fcn_004015cb (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    fcn_00404491 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404491 */
#include <stdint.h>
 
uint64_t fcn_00404491 (void) {
    if (*(0x00442460) == 0) {
        eax = 0x10000;
        if (*(0x00443c68) >= 0x10000) {
            eax = *(0x00443c68);
        }
        rdx = rax - 1;
        if ((rdx & rax) != 0) {
            rax = fcn_00401000 ();
        }
        *(0x00442470) = rax;
        rax = *(section.2.__DATA.__bss);
        *(0x00442468) = 0x1000;
        *(0x00442478) = 0x40000;
        *(0x00442480) = 0xa00000;
        *(0x00442488) = 5;
        rax &= 0xfffffffffffffff8;
        *(0x00442410) = 5;
        rax |= 8;
        *(0x00442460) = rax;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401000 */
#include <stdint.h>
 
int32_t fcn_00401000 (void) {
    /* [00] -r-x section size 20480 named 0.__TEXT.__text */
    *(0x00443c74) |= 2;
    if ((*(0x00440668) & 4) == 0) {
        edi = *(0x00440720);
        rsi = rsp;
        rsi + 8 = main;
        rsi = main;
        edx = 0;
        r10 = 0x10;
        eax = *(0x00440750);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        eax = *(0x00440740);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        edi = eax;
        esi = 6;
        eax = *(0x00440748);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    }
    edi = 0x86;
    return fcn_00405211 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401f47 */
#include <stdint.h>
 
uint32_t fcn_00401f47 (void) {
    r12 = *(0x00442038);
    eax = fcn_00401fe7 (rdi, r12);
    while (eax == 0) {
        eax |= 0xffffffff;
        goto label_0;
        ebx = eax;
        eax = fcn_00401f82 (0xa, r12);
        eax++;
    }
    eax = rbx + 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401674 */
#include <stdint.h>
 
uint32_t fcn_00401674 (int64_t arg1) {
    int64_t var_104h;
    int64_t var_100h;
    int64_t var_e8h;
    rdi = arg1;
    r13d = *(0x00440668);
    r13d &= 4;
    if (r13d == 0) {
        rsi = rbp - 0x100;
        ebx = *(main);
        eax = fcn_00401711 (rdi);
        eax++;
        if (eax != 0) {
            eax = *((rbp - 0xe8));
            eax &= 0xf000;
        } else {
            *(0x00443c70) = ebx;
        } else {
            *((rbp - 0x104)) = edi;
            r13d = 0;
            al = fcn_00404c6c (rdi, 1, rdx);
            edi = *((rbp - 0x104));
            if (al == 0) {
                goto label_0;
            }
            r12 = (int64_t) edi;
            r12 *= 0x18;
            r12 += *(0x00443ab0);
            eax = fcn_00401eb0 (*(r12));
        }
        r13b = (eax == 2) ? 1 : 0;
        r13d = (int32_t) r13b;
    }
label_0:
    eax = r13d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404540 */
#include <stdint.h>
 
uint64_t fcn_00404540 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r14 = rdx;
    r13 = rdi;
    r12 = rsi;
    rbx = *(0x004424a0);
    if (rbx == 0) {
        *(0x004424a0) = 0x4424a8;
        ebx = 0x4424a8;
    }
    if (*(rbx) == 0xffffffff) {
        eax = 0x402296;
        if (rax != 0) {
            esi = 0x310;
            edi = 1;
            rax = void (*rax)() ();
            if (rax != 0) {
                *((rax + 8)) = rbx;
                *(main) = rax;
                rbx = rax;
            }
        } else {
            fcn_004018e7 ();
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40466a */
#include <stdint.h>
 
uint64_t fcn_0040466a (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15d = 0;
    r14 = rcx;
    r13 = rdi;
    r12 = rsi;
    rbx = rdx;
    fcn_004047b0 (*(rdi), rsi);
    al = fcn_004047b0 (*(r13), rsi);
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
    eax = 0x4022a2;
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
                rdx = r8;
                fcn_00404f70 (rax, rsi);
            }
label_4:
            rdx -= r8;
            rax = fcn_004050b2 (rax + r8, 0, r14);
            *(r12) = rcx;
            *(r13) = rax;
            al = 1;
        }
    } else {
        fcn_004018e7 ();
        goto label_5;
label_2:
        eax = fcn_00401907 ();
label_5:
        eax = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4012f0 */
#include <stdint.h>
 
int64_t fcn_004012f0 (int64_t arg3) {
    rdx = arg3;
    edi = section.2.__DATA.__bss;
    esi = 0x4058f0;
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
            goto label_3;
        }
    } while (al <= *(r8));
    rdi += 0x10;
    goto label_0;
label_3:
    rbx = 1;
    edx = 0x404f07;
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
    rax = r15;
    *(rdi) = rax;
    rdi += 8;
    fcn_0040161f (rdi, rsi, rdx);
    rax = fcn_0040189d ();
    rax |= main;
    *(rdi) = rax;
    rdi += 8;
    *(rdi) = rax;
    rdi += 8;
    eax = 0x40517e;
    *(rdi) = rax;
    rdi += 8;
    rcx = 0x20;
    fcn_0040186f (rdi, rsi, 0x404f84);
    rcx = 0x20;
    fcn_0040186f (rdi, rsi, 0x4050cc);
    rax = *(r13);
    *(rdi) = rax;
    rdi += 8;
    eax = 0x4051e0;
    *(rdi) = rax;
    rdi += 8;
    if ((*(rdi) & 8) == 0) {
        if ((*(rdi) & 0x20) == 0) {
            if ((*(rdi) & 4) == 0) {
                if (*(r15) != 0) {
                    esi = 0x4059b6;
                } else {
                }
                esi = 0x405a0d;
            } else {
            }
            esi = 0x405989;
        } else {
        }
        esi = 0x4059e1;
    } else {
        esi = 0x405a52;
    }
    ecx = 0x404df0;
    rax = 8;
    *(rdi) = rax;
    rdi += 8;
    rax = 8;
    rax += rcx;
    *(rdi) = rax;
    rdi += 8;
    edi = 0x440698;
    r9 |= main;
    ebx = 0x4407a0;
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
    ecx = 0x443c40;
    uint64_t (*0x00406088)() ();
    rax = 0x00442000;
    rax + 0xc = 1;
    edx = *(0x00440798);
    *((rax + 4)) = edx;
    rcx = 0x00441000;
    *((rax + 0x18)) = rcx;
    *((rax + 0x20)) = 0x1000;
    rcx = fcn_004021be;
    rdx = 0x00402250;
    if ((*(0x00440668) & 2) == 0) {
        rdx = rcx;
    }
    *((rax + 0x30)) = rdx;
    *(main) = rax;
    eax = 0x403fed;
    *(rdi) = rax;
    rdi += 8;
    fcn_004015cb (rdi, rsi);
    eax = fcn.00403ae8;
    *(rdi) = rax;
    rdi += 8;
    eax = 0x4043d8;
    *(rdi) = rax;
    rdi += 8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4014ce */
#include <stdint.h>
 
uint32_t fcn_004014ce (void) {
    edi = 0x405301;
    eax = fcn_00401f47 ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4018ae */
#include <stdint.h>
 
void fcn_004018ae (int64_t arg1) {
    rdi = arg1;
    r12d = edi;
    fcn_004045d5 (0, rsi, rdx, rcx);
    edi = r12d;
    return fcn_00405211 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4045d5 */
#include <stdint.h>
 
void fcn_004045d5 (int64_t arg4, int64_t arg3, char ** argv, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = argv;
    rdi = arg1;
    r12 = rdi;
    ebx = 1;
label_1:
    rdi = *(0x004424a0);
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
            eax = fcn.0040229c;
            if (rax == 0) {
                goto label_6;
            }
            fcn_0040229c ();
        }
label_6:
        *(0x004424a0) = r13;
        goto label_1;
    }
    if (r13 != 0) {
        rdi = r13;
        goto label_2;
    }
label_3:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401711 */
#include <stdint.h>
 
uint32_t fcn_00401711 (int64_t arg2) {
    int64_t var_14h;
    rsi = arg2;
    r13 = rsi;
    eax = fcn_00404db0 ();
    if (eax != 0xffffffff) {
        *((rbp - 0x14)) = eax;
        fcn_0040173e (r13);
        eax = *((rbp - 0x14));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404db0 */
#include <stdint.h>
 
int64_t fcn_00404db0 (void) {
    rax = 0x35022721530005;
    uint64_t (*0x00440670)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40173e */
#include <stdint.h>
 
int64_t fcn_0040173e (int64_t arg1) {
    rdi = arg1;
    if (rdi != 0) {
        eax = *(0x00440668);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404c6c */
#include <stdint.h>
 
int32_t fcn_00404c6c (char ** envp, char ** argv, uint32_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    eax = 0;
    if (edi != 0) {
        rdi = (int64_t) edi;
        rdi *= 0x18;
        rdi += *(0x00443ab0);
        al = (*((rdi + 0x10)) == esi) ? 1 : 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401eb0 */
#include <stdint.h>
 
void fcn_00401eb0 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x00406070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401bad */
#include <stdint.h>
 
uint64_t fcn_00401bad (int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_60h;
    int64_t var_58h;
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
    r10 = r8;
    r15 = 0x100002600;
    r13 = rsi;
    ebx = 0;
    *((rbp - 0x50)) = rdi;
    *((rbp - 0x58)) = rcx;
    *((rbp - 0x48)) = rsi;
    *((rbp - 0x40)) = rax;
    fcn_00401b52 (rbp - 0x50);
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
        fcn_00401b52 (rbp - 0x50);
    } while (1);
label_3:
    fcn_00401b7d (rbp - 0x50, 0);
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
        r12++;
        fcn_00401b52 (rbp - 0x50);
    } while (1);
label_9:
    r9d = 0;
    do {
        if (*((rbp - 0x38)) != 0x22) {
            goto label_10;
        }
        fcn_00401b52 (rbp - 0x50);
        r9++;
    } while (1);
label_10:
    rax = r12;
    if (r9 != 0) {
        goto label_11;
    }
label_1:
    r12--;
    if (r12 == main) {
        goto label_0;
    }
    rax = fcn_00401b7d (rbp - 0x50, 0x5c);
    goto label_1;
    do {
label_11:
        if (rax <= 1) {
            goto label_12;
        }
        *((rbp - 0x60)) = rax;
        fcn_00401b7d (rbp - 0x50, 0x5c);
        rax = *((rbp - 0x60));
        rax -= 2;
    } while (1);
label_12:
    r12b &= 1;
    if (r12b == 0) {
        goto label_13;
    }
    fcn_00401b7d (rbp - 0x50, 0x22);
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
        r14 += 3;
        fcn_00401b7d (rbp - 0x50, 0x22);
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
    fcn_00401b7d (rbp - 0x50, rsi);
    fcn_00401b52 (rbp - 0x50);
    goto label_0;
label_6:
    fcn_00401b7d (rbp - 0x50, 0);
    goto label_2;
label_5:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404e4d */
#include <stdint.h>
 
void fcn_00404e4d (void) {
    fcn_00404e8f (rdi, rsi, rdx, rcx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404e8f */
#include <stdint.h>
 
int32_t fcn_00404e8f (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404e5c */
#include <stdint.h>
 
int64_t fcn_00404e5c (int64_t arg4, int64_t arg3, uint32_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
    eax = 0;
    if (edi <= 0x7f) {
        goto label_0;
    }
    __asm ("bsr ecx, edi");
    edx = 0x405347;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401b52 */
#include <stdint.h>
 
uint64_t fcn_00401b52 (int64_t arg1) {
    rdi = arg1;
    rdx = rdi;
    rdi = *(rdi);
    eax = *(rdi);
    if (ax <= 0xd7ff) {
        *((rdx + 0x18)) = eax;
        eax = 1;
    } else {
        rsi = rdx + 0x18;
        eax = fcn_00404e4d ();
    }
    rax += rax;
    *(rdx) += rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401b7d */
#include <stdint.h>
 
int64_t fcn_00401b7d (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rdi;
    edi = esi;
    r8 = *((rdx + 0x10));
    rax = (int64_t) esi;
    if (esi <= 0x7f) {
        goto label_0;
    }
    al = fcn_00404e5c (rdi, rsi, rdx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401e5c */
#include <stdint.h>
 
int64_t fcn_00401e5c (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rdi;
    r8 = rsi;
    if (rdi != main) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4052d6 */
#include <stdint.h>
 
uint64_t fcn_004052d6 (void) {
    if ((*(0x00440668) & 4) != 0) {
        eax = fcn_00401ec9 ();
        *(0x00443c70) = eax;
        rax |= main;
        return rax;
    }
    fcn_004018f7 ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401ec9 */
#include <stdint.h>
 
void fcn_00401ec9 (void) {
    uint64_t (*0x00406078)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4018f7 */
#include <stdint.h>
 
int32_t fcn_004018f7 (void) {
    eax = *(0x00440700);
    *(0x00443c70) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401fe7 */
#include <stdint.h>
 
uint64_t fcn_00401fe7 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
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
            eax = fcn_004020ab (rbx, rsi);
        }
        r12d = eax;
        if (eax != 0xffffffff) {
            goto label_3;
        }
        rax = fcn_004020de (rbx);
        rax = (int64_t) eax;
    } while (rax == *(0x004406b8));
    eax = fcn_004020d4 (rbx);
    if (eax != 0) {
        rax = *(0x00440710);
        *((rbx + 8)) = eax;
        *(0x00443c70) = eax;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401f82 */
#include <stdint.h>
 
int32_t fcn_00401f82 (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
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
        fcn_004020ab (r8, rsi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4020ab */
#include <stdint.h>
 
void fcn_004020ab (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    esi |= 0xffffffff;
    return void (*0x4020b3)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4020de */
#include <stdint.h>
 
int32_t fcn_004020de (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    __asm ("cmovns eax, dword [rdi + 8]");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4020d4 */
#include <stdint.h>
 
int32_t fcn_004020d4 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    al = (*((rdi + 8)) == 0xffffffff) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4020ec */
#include <stdint.h>
 
int64_t fcn_004020ec (uint32_t arg1) {
    uint32_t var_18h;
    rdi = arg1;
    do {
        if (rdi != 0) {
            goto label_2;
        }
        rax = *(0x00442040);
        r12d = 0;
        r13 = rax - 1;
label_0:
        if (r13 == main) {
            goto label_3;
        }
        rax = *(0x00442050);
        rdi = *((rax + r13*8));
        if (rdi == 0) {
            goto label_4;
        }
        eax = fcn_004020ec (rdi);
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
        if ((*(0x00440798) & rax) == 0) {
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
        eax = fcn_004021be (rdi);
    }
    rdi = *((rbp - 0x18));
    r12d += eax;
    goto label_1;
label_5:
    if (r12d != 0xffffffff) {
        eax = fcn_004020b3 (rdi, r12d);
        r12d = eax;
    } else {
        r12d = 0;
    }
label_3:
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4021be */
#include <stdint.h>
 
uint64_t fcn_004021be (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    esi = *((rdi + 0x10));
    ebx = *((rdi + 0x14));
    if (esi >= ebx) {
        ebx = *((rdi + 0x20));
    }
    ebx -= esi;
    rsi += *((r12 + 0x18));
    rax = fcn_00404c87 (*((r12 + 0xc)), rsi, ebx);
    if (rax == main) {
        eax = fcn_0040228b (r12);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4020b3 */
#include <stdint.h>
 
int64_t fcn_004020b3 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    if (esi == 0) {
        esi |= 0xffffffff;
    }
    eax = *((rdi + 8));
    if (eax <= 0) {
        eax = esi;
    }
    *((rdi + 8)) = eax;
    if (esi > 0) {
        *(0x00443c70) = esi;
    }
    rax |= main;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404c87 */
#include <stdint.h>
 
int64_t fcn_00404c87 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r12 = (int64_t) edi;
    if (r12d == 0xffffffff) {
        fcn_004018d7 ();
        rax = (int64_t) eax;
    } else {
        r14 = rsi;
        r13 = rdx;
        al = fcn_00404c6c (r12d, 5, rdx);
        if (al != 0) {
            r12 *= 0x18;
            rsi = rbp - 0x30;
            *((rbp - 0x30)) = r14;
            r12 += *(main);
            *((rbp - 0x28)) = r13;
            rcx |= main;
            edx = 1;
            eax = 0;
            rdi = *(r12);
            void (*rax)() ();
        } else {
            if ((*(0x00440668) & 4) == 0) {
                rdx = r13;
                rsi = r14;
                edi = r12d;
                fcn_00404de0 ();
            } else {
                al = fcn_00404c6c (r12d, 2, rdx);
                if (al != 0) {
                    rdi = (int64_t) r12d;
                    rsi = rbp - 0x30;
                    *((rbp - 0x30)) = r14;
                    rdi *= 0x18;
                    *((rbp - 0x28)) = r13;
                    r9d = 0;
                    rdi += *(0x00443ab0);
                    r8d = 0;
                    ecx = 0;
                    edx = 1;
                    eax = 0;
                    void (*rax)() ();
                } else {
                    al = fcn_00404c6c (r12d, 1, rdx);
                    if (al == 0) {
                        al = fcn_00404c6c (r12d, 4, rdx);
                        if (al == 0) {
                            goto label_0;
                        }
                    }
                    rdi = (int64_t) r12d;
                    rcx |= main;
                    rdi *= 0x18;
                    *((rbp - 0x30)) = r14;
                    rdi += *(main);
                    *((rbp - 0x28)) = r13;
                    fcn_00401dba (rdi, rbp - 0x30, 1, rcx);
                    goto label_1;
label_0:
                    fcn_004018c7 ();
                }
            }
        }
    }
label_1:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40228b */
#include <stdint.h>
 
void fcn_0040228b (int64_t arg1) {
    rdi = arg1;
    esi = *(0x00443c70);
    return void (*0x4020b3)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40452c */
#include <stdint.h>
 
void fcn_0040452c (void) {
    ebx = segment.__TEXT;
    fcn_00404ac1 (rdi, rsi, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404ac1 */
#include <stdint.h>
 
uint64_t fcn_00404ac1 (int64_t arg4, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    rax = rdi - 1;
    if (rax > 0xfffffffffffffffd) {
        goto label_0;
    }
    if (rsi == 0) {
        goto label_0;
    }
    rsi += 0xffff;
    rdi >>= 0x10;
    rsi >>= 0x10;
    r12d = edi;
    r13d = 0;
    rax = fcn_00404c04 (rdi + rsi - 1, 0x4427c8, *(0x004427c0));
    r14 = rax;
    do {
        if (rax == 0) {
            goto label_1;
        }
        rbx = rax - 1;
        esi = *((rbx*8 + 0x4427cc));
        edx = *((rbx*8 + 0x4427c8));
        if (r12d > esi) {
            goto label_1;
        }
        rdi = (int64_t) edx;
        rdi <<= 0x10;
        if ((*(0x00440668) & 4) == 0) {
            esi -= edx;
            esi++;
            rsi = (int64_t) esi;
            rsi <<= 0x10;
            eax = fcn_00404dd0 ();
            r13d |= eax;
        } else {
            eax = fcn_00401ef5 (rdi);
            rdi = *((rbx*8 + main));
            r15d |= 0xffffffff;
            if (eax == 0) {
                r13d = r15d;
            }
            eax = fcn_00401e81 (rdi);
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
        rdx = *(0x004427c0);
        if (rdx > r14) {
            r9 = rax + 1;
            r10 = r14 + 1;
            rdx -= r14;
            rdx <<= 3;
            r8 = r10*8;
            rdi = main;
            fcn_00405092 (rdi, main, rdx, r9*8);
            rdi = main;
            rdx -= r14;
            rdx <<= 3;
            rax = fcn_00405092 (rdi, main, *(0x004427c0), rcx);
        }
        rax += *(0x004427c0);
        rax -= r14;
        *(0x004427c0) = rax;
        goto label_3;
label_0:
        r13d = 0;
    }
label_3:
    eax = r13d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404abb */
#include <stdint.h>
 
void fcn_00404abb (void) {
    fcn_004018f7 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4022a8 */
#include <stdint.h>
 
int64_t fcn_004022a8 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
    rax = *(main);
    *((rsi + rdx + 8)) = 0x50;
    *((rdi + 0x30)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4022ef */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_004022ef (int64_t arg1) {
    int64_t var_38h;
    rdi = arg1;
    r14d = 0;
    r12 = rdi;
    rax = *((rdi + main));
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
    if (*((rdx + main)) != rbx) {
        goto label_5;
    }
    *((rdx + main)) = rax;
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
    eax = fcn_0040452c ();
    if (eax == 0) {
        r8 = *((rbp - 0x38));
        *((r12 + main)) -= r14;
        *((r12 + main)) = r8;
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
        rax = main;
        edx |= ecx;
        *((r12 + 4)) = edx;
        *((r12 + rsi*8 + main)) = rbx;
        *((rbx + 0x30)) = rax;
        goto label_8;
    }
    rdx = *((r12 + rsi*8 + main));
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404518 */
#include <stdint.h>
 
void fcn_00404518 (void) {
    ebx = segment.__TEXT;
    fcn_0040481d (rdi, rsi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40481d */
#include <stdint.h>
 
int64_t fcn_0040481d (int64_t arg5, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_34h;
    int64_t var_28h;
    r8 = arg5;
    rdi = arg1;
    rcx = *(0x00440728);
    ecx |= *(0x00440730);
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
    r14d = *(0x00440668);
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
    rdx = *(0x004427c0);
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
    r10d = *((rdx*8 + 0x4427c4));
    r8 = rbx;
    r8 >>= 0x10;
    do {
        rax--;
        esi = *((rax*8 + 0x4427cc));
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
        rax = fcn_004018e7 ();
        r12 = rax;
    } else {
        if (ecx != 0) {
            rsi = rbx;
            rdi = r15;
            fcn_0040452c ();
        } else {
            rax = main;
            rcx = r15;
            rcx >>= 0x10;
            rax >>= 0x10;
            fcn_00404c04 (rax + rcx - 1, 0x4427c8, rdx);
        }
        r13d |= 0x10;
        if (r14d == 0) {
            r9 = *((rbp - 0x40));
            edx = *((rbp - 0x34));
            r8 = (int64_t) r12d;
            ecx = r13d;
            rsi = rbx;
            fcn_00404c24 (r15);
        } else {
            r14 = rbx;
            *((rbp - 0x38)) = ebx;
            r14 >>= 0x20;
            eax = fcn_0040524a (*((rbp - 0x34)), r13d);
            rdi |= main;
            r8d = *((rbp - 0x38));
            edx = eax;
            if (r12d != 0xffffffff) {
                r12 *= 0x18;
                r12 += *(0x00443ab0);
            }
            r9d = 0;
            ecx = r14d;
            rax = fcn_00401e9a (*(r12), 0x405320);
            r14 = rax;
            if (rax != 0) {
                eax = fcn_00404c31 (*((rbp - 0x34)), r13d);
                rdx = *((rbp - 0x40));
                rdx >>= 0x20;
                rax = fcn_00401edf (r14, eax, *(rdx), *((rbp - 0x40)), rbx, r15);
                r12 = rax;
                if (rax != 0) {
                    goto label_4;
                }
                fcn_00401e81 (r14);
            }
            rax = fcn_004052d6 ();
        }
        r12 = rax;
        r14 |= main;
label_4:
        if (r12 == main) {
            goto label_5;
        }
        r13 = r12;
        r13 >>= 0x10;
        rax = fcn_00404c04 (r13d, 0x4427c8, *(0x004427c0));
        rdx = *(0x004427c0);
        if (rdx > rax) {
            r8 = rax + 2;
            rdx -= rax;
            rdx <<= 3;
            rdi = main;
            rax = fcn_00405092 (rdi, main, rdx, r8*8);
            rdi = main;
            rdx -= rax;
            rdx <<= 3;
            fcn_00405092 (rdi, main, *(0x004427c0), rcx);
        }
        rbx += 0xffff;
        *(0x004427c0)++;
        *((rax*8 + 0x4427c8)) = r13d;
        rbx >>= 0x10;
        *((rax*8 + main)) = r14;
        edx = rbx + r13 - 1;
        *((rax*8 + 0x4427cc)) = edx;
    }
label_5:
    rsp = rbp - 0x28;
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4018e7 */
#include <stdint.h>
 
int32_t fcn_004018e7 (void) {
    eax = *(0x004406f8);
    *(0x00443c70) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x402b64 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_00402b64 (int64_t arg4, uint32_t arg1) {
    rcx = arg4;
    rdi = arg1;
    if (rdi > 0xe0) {
        goto label_4;
    }
    ebx = 0x20;
    if (rdi > 0xe) {
        rbx = rdi + 0x1f;
        rbx &= 0xfffffffffffffff0;
    }
    esi = *(0x004420a0);
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
        rdi = main;
        rdx = r9;
        rax = *((rdi + 0x10));
        r8 = *((rax + 0x10));
        if (rdi == r8) {
            __asm ("btr esi, ecx");
            *(0x004420a0) = esi;
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
    r9 = *(0x004420a8);
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
        r10 = main;
        r8 = rdi;
        rax = *((r10 + 0x10));
        r11 = *((rax + 0x10));
        if (r10 == r11) {
            edx <<= cl;
            edx = ~edx;
            esi &= edx;
            *(0x004420a0) = esi;
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
            r10d = *(0x004420a0);
            rcx = r9;
            r11d = 1;
            rcx >>= 3;
            rdx = *(0x004420c0);
            r8d = rcx + rcx;
            r11d <<= cl;
            r8 = main;
            if ((r10d & r11d) == 0) {
                r10d |= r11d;
                rcx = r8;
                *(0x004420a0) = r10d;
            } else {
                rcx = *((r8 + 0x10));
            }
            *((r8 + 0x10)) = rdx;
            *((rcx + 0x18)) = rdx;
            *((rdx + 0x10)) = rcx;
            *((rdx + 0x18)) = r8;
        }
        *(main) = rsi;
        *(main) = rbx;
        goto label_5;
    }
    edi = *(0x004420a4);
    if (edi == 0) {
        goto label_6;
    }
    eax = edi;
    eax = -eax;
    eax &= edi;
    __asm ("bsf eax, eax");
    rcx = *((rax*8 + main));
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
    if (*((r11*8 + main)) != rax) {
        goto label_10;
    }
    *((r13*8 + main)) = rdx;
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
        *(0x004420a4) = edi;
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
        rdx = *(0x004420c0);
        rcx >>= 3;
        edi = rcx + rcx;
        r9d <<= cl;
        rdi = main;
        if ((esi & r9d) == 0) {
            esi |= r9d;
            rcx = rdi;
            *(0x004420a0) = esi;
        } else {
            rcx = *((rdi + 0x10));
        }
        *((rdi + 0x10)) = rdx;
        *((rcx + 0x18)) = rdx;
        *((rdx + 0x10)) = rcx;
        *((rdx + 0x18)) = rdi;
    }
    *(main) = r8;
    *(main) = r10;
    goto label_5;
label_4:
    if (rdi > 0xffffffffffffff7f) {
        goto label_12;
    }
    rbx = rdi + 0x1f;
    edi = *(main);
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
    rax = *((rax*8 + main));
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
    rdx = *((rax*8 + main));
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
    rdx = *(0x004420a8);
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
    if (*((r8*8 + main)) != rax) {
        goto label_21;
    }
    *((r11*8 + main)) = rdx;
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
        *(0x004420a4) = edi;
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
        esi = *(0x004420a0);
        edi = 1;
        edx = rcx + rcx;
        edi <<= cl;
        rdx = main;
        if ((esi & edi) == 0) {
            esi |= edi;
            rcx = rdx;
            *(0x004420a0) = esi;
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
    esi = *(0x004420a4);
    ecx = edx;
    edi = 1;
    edi <<= cl;
    *((r8 + 0x38)) = edx;
    *((r8 + 0x28)) = 0;
    ecx = edi;
    *((r8 + 0x20)) = 0;
    edi = edx;
    if ((esi & edi) == 0) {
        rdx = main;
        esi |= ecx;
        *((rdi*8 + main)) = r8;
        *(main) = esi;
        *((r8 + 0x30)) = rdx;
        goto label_24;
    }
    ecx = 0;
    rsi = *((rdi*8 + main));
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
    rbx |= main;
label_6:
    rdx = *(0x004420a8);
    if (rdx >= rbx) {
        rax = *(0x004420c0);
        rcx = rdx;
        rcx -= rbx;
        rsi = rax + rdx;
        if (rcx > 0x1f) {
            rdx = rax + rbx;
            rdi = rcx;
            *(0x004420a8) = rcx;
            rdi |= 1;
            *(0x004420c0) = rdx;
            *((rdx + 8)) = rdi;
            *(rsi) = rcx;
            goto label_27;
        }
        rdx |= 3;
        *(0x004420a8) = 0;
        *(0x004420c0) = 0;
        *((rax + 8)) = rdx;
        *((rsi + 8)) |= 1;
        goto label_5;
    }
    rax = *(0x004420b0);
    if (rax > rbx) {
        rax -= rbx;
        rdx = rax;
        goto label_28;
    }
    rcx = *(0x00442470);
    rdx = *(0x00442470);
    rdx = -rdx;
    if ((*(0x00442410) & 1) != 0) {
        if (rbx < *(0x00442478)) {
            goto label_29;
        }
        if (rax == 0) {
            goto label_29;
        }
        rsi = *(0x00442408);
        r12 = rbx + rcx + 0x3e;
        r12 &= rdx;
        if (rsi != 0) {
            rdi = *(0x004423f8);
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
        fcn_00404518 ();
        rdx = r12 - 0x20;
        *(rax) = 0;
        *((rax + 8)) = rdx;
        rdx = *(main);
        *((rax + r12 - 0x18)) = 0xb;
        *((rax + r12 - 0x10)) = 0;
        if (rdx != 0) {
            if (rax >= rdx) {
                goto label_30;
            }
        }
        *(0x004420b8) = rax;
label_30:
        r12 += *(0x004423f8);
        *(0x004423f8) = r12;
        if (r12 <= *(0x00442400)) {
            goto label_5;
        }
        *(0x00442400) = r12;
        goto label_5;
    }
label_29:
    r12 = rbx + rcx + 0x5f;
    r12 &= rdx;
    if (rbx >= r12) {
        goto label_31;
    }
    rdx = *(0x00442408);
    if (rdx != 0) {
        rcx = *(0x004423f8);
        rax = r12 + rcx;
        if (rcx >= rax) {
            goto label_31;
        }
        if (rdx < rax) {
            goto label_31;
        }
    }
    rdi = r12;
    rax = fcn_00404518 ();
    r9 = rax;
    rax = *(0x004423f8);
    rax += r12;
    *(0x004423f8) = rax;
    if (rax > *(0x00442400)) {
        *(0x00442400) = rax;
    }
    r10 = *(0x004420c8);
    if (r10 != 0) {
        goto label_32;
    }
    rax = *(0x004420b8);
    if (rax != 0) {
        if (r9 >= rax) {
            goto label_33;
        }
    }
    *(0x004420b8) = r9;
label_33:
    rax = *(0x00442460);
    *(0x00442418) = r9;
    edx = 0x4422e8;
    *(0x00442420) = r12;
    *(0x00442430) = 1;
    *(0x004420d8) = 0x80;
    *(0x004420e0) = rax;
    eax = 0x4420e8;
    do {
        *((rax + 0x18)) = rax;
        *((rax + 0x10)) = rax;
        rax += 0x10;
    } while (rdx != rax);
    rdx = r12 - 0x50;
    rsi = r9;
    goto label_34;
label_32:
    rax = *(0x00442418);
    rdx = *(0x00442420);
    rcx = rax + rdx;
    if (r9 == rcx) {
        ecx = *(0x00442430);
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
        *(0x00442420) = rdx;
        rdx += r12;
label_34:
        rax = fcn_004022a8 (0x4420a0, r10, *(0x004420b0));
        goto label_36;
    }
label_35:
    if (r9 < *(0x004420b8)) {
        *(0x004420b8) = r9;
    }
    rsi = r9 + r12;
    ecx = main;
    if (rax != rsi) {
        goto label_37;
    }
    esi = *(0x00442430);
    r11d = *(0x00442430);
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
    *(0x00442418) = r9;
    ecx &= 0xf;
    *(0x00442420) = rdx;
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
        r8 += *(0x004420b0);
        *(0x004420c8) = rax;
        *(0x004420b0) = r8;
        r8 |= 1;
        *((rax + 8)) = r8;
        goto label_38;
    }
    if (rdx == *(0x004420c0)) {
        r8 += *(0x004420a8);
        *(0x004420c0) = rax;
        rdx = r8;
        *(0x004420a8) = r8;
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
            *(0x004420a0) &= esi;
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
    if (rdx != *((r10*8 + main))) {
        goto label_42;
    }
    *((r12*8 + main)) = rsi;
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
        *(0x004420a4) &= esi;
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
    *((rdx + 8)) &= main;
    rcx = r8;
    rdx = r8;
    rdx |= 1;
    rcx >>= 3;
    *((rax + 8)) = rdx;
    *((rax + r8)) = r8;
    if (r8 <= 0xff) {
        esi = *(0x004420a0);
        edi = 1;
        edx = rcx + rcx;
        edi <<= cl;
        rdx = main;
        if ((esi & edi) == 0) {
            esi |= edi;
            rcx = rdx;
            *(0x004420a0) = esi;
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
    esi = *(0x004420a4);
    ecx = edx;
    edi = 1;
    edi <<= cl;
    *((rax + 0x38)) = edx;
    *((rax + 0x28)) = 0;
    ecx = edi;
    *((rax + 0x20)) = 0;
    edi = edx;
    if ((esi & edi) == 0) {
        rdx = main;
        esi |= ecx;
        *((rdi*8 + main)) = rax;
        *(main) = esi;
        *((rax + 0x30)) = rdx;
        goto label_45;
    }
    rsi = *((rdi*8 + main));
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
    edi = 0x4420a0;
    if (r11 < rax) {
        r11 = r10;
    }
    fcn_004022a8 (rdi, rsi, rdx);
    rax = r11 + 0x10;
    *((r11 + 8)) = 0x33;
    rdi = r11 + 0x10;
    esi = main;
    ecx = 8;
    *(rdi) = *(rsi);
    rcx--;
    rsi += 4;
    rdi += 4;
    *(0x00442428) = rax;
    rax = r11 + 0x38;
    *(main) = r9;
    *(main) = r12;
    *(main) = 1;
    do {
        *(rax) = 0xb;
        rax += 8;
    } while (r13 > rax);
    if (r10 == r11) {
        goto label_36;
    }
    rsi = r11;
    *((r11 + 8)) &= main;
    rsi -= r10;
    rax = rsi;
    rcx = rsi;
    rax |= 1;
    rcx >>= 3;
    *((r10 + 8)) = rax;
    *(r11) = rsi;
    if (rsi <= 0xff) {
        edx = *(0x004420a0);
        esi = 1;
        eax = rcx + rcx;
        esi <<= cl;
        rax = main;
        if ((edx & esi) == 0) {
            edx |= esi;
            *(0x004420a0) = edx;
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
    edx = *(0x004420a4);
    ecx = eax;
    edi = 1;
    edi <<= cl;
    *((r10 + 0x38)) = eax;
    *((r10 + 0x28)) = 0;
    ecx = edi;
    *((r10 + 0x20)) = 0;
    edi = eax;
    if ((edx & edi) == 0) {
        rax = main;
        edx |= ecx;
        *((rdi*8 + main)) = r10;
        *(main) = edx;
        *((r10 + 0x30)) = rax;
        goto label_51;
    }
    ecx = 0;
    rdx = *((rdi*8 + main));
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
    rdx = *(main);
    if (rbx < rdx) {
        rdx -= rbx;
label_28:
        rax = *(0x004420c8);
        *(0x004420b0) = rdx;
        rdx |= 1;
        rcx = rax + rbx;
        *(main) = rcx;
        *((rcx + 8)) = rdx;
label_27:
        rbx |= 3;
        *((rax + 8)) = rbx;
label_5:
        rax += 0x10;
    } else {
        eax = fcn_004018e7 ();
label_31:
        eax = 0;
    }
label_48:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4050b2 */
#include <stdint.h>
 
void fcn_004050b2 (int64_t arg4, uint32_t arg3, int64_t arg2) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    xmm3 = esi;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
    ebx = 0x440550;
    uint64_t (*rbx + rcx*8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4026e8 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_004026e8 (uint32_t arg3, uint32_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
        eax = fcn_0040452c ();
        if (eax != 0) {
            goto label_3;
        }
        *((rbx + main)) -= r12;
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
    if (*((r9 + main)) != rdi) {
        goto label_6;
    }
    *((r9 + main)) = rax;
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
    if (*((r9 + main)) != rsi) {
        goto label_11;
    }
    *((r9 + main)) = rax;
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
        rax = main;
        esi |= ecx;
        *((rbx + 4)) = esi;
        *((rbx + r8*8 + main)) = rdi;
        *((rdi + 0x30)) = rax;
        goto label_14;
    }
    ecx = 0;
    rsi = *((rbx + r8*8 + main));
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x403ae8 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
void fcn_00403ae8 (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
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
    rcx = main;
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
    r10 = *(0x00442470);
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
    rax = fcn_00404abb ();
    rax++;
    if (rax != 0) {
        goto label_10;
    }
    rdi = *(r13);
    rsi = rbx;
    rdi += r14;
    eax = fcn_0040452c ();
    if (eax != 0) {
        goto label_0;
    }
label_10:
    if (rbx != 0) {
        *((r13 + 8)) -= rbx;
        *((r12 + main)) -= rbx;
        rdx -= rbx;
        fcn_004022a8 (r12, *((r12 + 0x28)), *((r12 + 0x10)));
    }
label_7:
    rax = fcn_004022ef (r12);
    rbx += rax;
    if (rbx != 0) {
        goto label_6;
    }
    rax = *((r12 + 0x30));
    if (*((r12 + 0x10)) <= rax) {
        goto label_2;
    }
    *((r12 + 0x30)) = main;
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
        eax = fcn_0040452c ();
        if (eax != 0) {
            goto label_13;
        }
        *(0x004423f8) -= rbx;
        goto label_13;
    }
    rax += r8;
    if (*(0x004420c0) == rdi) {
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
            *(0x004420a0) &= edx;
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
    if (*((r9*8 + main)) != rdi) {
        goto label_16;
    }
    *((r10*8 + main)) = rdx;
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
        *(0x004420a4) &= edx;
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
        *(0x004420a8) = rax;
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
    r10 = *(0x004420c0);
    if (*(0x004420c8) == rsi) {
        rax += *(0x004420b0);
        *(0x004420c8) = rdi;
        rdx = rax;
        *(0x004420b0) = rax;
        rdx |= 1;
        *((rdi + 8)) = rdx;
        if (rdi == r10) {
            *(0x004420c0) = 0;
            *(0x004420a8) = 0;
        }
        if (rax <= *(0x004420d0)) {
            goto label_13;
        }
        esi = 0;
        edi = 0x4420a0;
        goto label_4;
    }
    if (rsi == r10) {
        rax += *(0x004420a8);
        *(0x004420c0) = rdi;
        rdx = rax;
        *(0x004420a8) = rax;
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
            *(0x004420a0) &= edx;
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
    if (*((r9*8 + main)) != rsi) {
        goto label_21;
    }
    *((r11*8 + main)) = rdx;
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
        *(0x004420a4) &= edx;
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
        *(0x004420a8) = rax;
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
        edx = *(0x004420a0);
        esi = 1;
        eax = rcx + rcx;
        esi <<= cl;
        rax = main;
        if ((edx & esi) == 0) {
            edx |= esi;
            *(0x004420a0) = edx;
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
    esi = *(0x004420a4);
    ecx = edx;
    r8d = 1;
    r8d <<= cl;
    *((rdi + 0x38)) = edx;
    *((rdi + 0x28)) = 0;
    ecx = r8d;
    *((rdi + 0x20)) = 0;
    r8d = edx;
    if ((esi & r8d) == 0) {
        rax = main;
        esi |= ecx;
        *((r8*8 + main)) = rdi;
        *(main) = esi;
        *((rdi + 0x30)) = rax;
        goto label_24;
    }
    ecx = 0;
    rsi = *((r8*8 + main));
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
    *(0x004420d8)--;
    if (*(0x004420d8) == 0) {
        edi = 0x4420a0;
        void (*0x4022ef)() ();
    }
label_13:
    return;
label_11:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404049 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_00404049 (int64_t arg5, int64_t arg3, int64_t arg2, int64_t arg1) {
    r8 = arg5;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r13 = rsi;
    r12 = rdi;
    rdi = rdx;
    rsi = *((rsi + 8));
    rdx = *((rsi + 8));
    rdx &= 0xfffffffffffffff8;
    if ((sil & 3) != 0) {
        goto label_2;
    }
    while (rax == main) {
label_0:
        r13d = 0;
        goto label_3;
        rsi = rdi + 8;
        rax = *(main);
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
        rax = fcn_00404abb ();
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
    rbx += *((r12 + main));
    rbx -= r15;
    *((r12 + main)) = rbx;
    if (rbx <= *((r12 + main))) {
        goto label_3;
    }
    *((r12 + main)) = rbx;
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
        *((rax + 8)) &= main;
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
    if (*((rdx + main)) != r9) {
        goto label_9;
    }
    *((rdx + main)) = rax;
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
        rdx |= 2;
        *((r13 + 8)) = rdx;
        rdx = r11;
        rdx |= 3;
        *((rsi + 8)) = rdx;
        *((rax + 8)) |= 1;
label_4:
        fcn_004026e8 (r12, r13 + rdi, r11);
    }
label_3:
    rax = r13;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404f70 */
#include <stdint.h>
 
void fcn_00404f70 (int64_t arg4, uint32_t arg3) {
    rcx = arg4;
    rdx = arg3;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40229c */
#include <stdint.h>
 
void fcn_0040229c (void) {
    uint64_t (*0x00440680)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4047b0 */
#include <stdint.h>
 
int64_t fcn_004047b0 (int64_t arg4, int64_t arg1) {
    rcx = arg4;
    rdi = arg1;
    eax = 0x7fffd;
    rdx = 0xfffffffffff;
    rax <<= 0x2d;
    rax += rdi;
    if (rax > rdx) {
        rbx = rdi;
        rbx >>= 0x10;
        rax = fcn_00404c04 (ebx, 0x4427c8, *(0x004427c0));
        rdx = rax;
        eax = 0;
        if (rdx != 0) {
            rcx = rdx - 1;
            eax = 1;
            if (*((rdx*8 + 0x4427c0)) != ebx) {
                eax = 0;
                al = (*((rcx*8 + 0x4427cc)) == ebx) ? 1 : 0;
            }
            eax &= 1;
        }
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404c04 */
#include <stdint.h>
 
int64_t fcn_00404c04 (signed int64_t arg3, int64_t arg2, signed int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401907 */
#include <stdint.h>
 
int32_t fcn_00401907 (void) {
    eax = *(0x00440708);
    *(0x00443c70) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404c24 */
#include <stdint.h>
 
void fcn_00404c24 (int64_t arg6) {
    r9 = arg6;
    fcn_00404dc0 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404dc0 */
#include <stdint.h>
 
int64_t fcn_00404dc0 (void) {
    rax = 0xc501dd20c50009;
    uint64_t (*0x00440670)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x40524a */
#include <stdint.h>
 
int32_t fcn_0040524a (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = edi;
    eax = esi;
    edx &= 7;
    if (edx == 7) {
        edx = 0x40;
        if ((al & 1) != 0) {
            goto label_0;
        }
        rsi = *(0x00440728);
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
            rcx = *(0x00440728);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401e9a */
#include <stdint.h>
 
int64_t fcn_00401e9a (int64_t arg_10h, int64_t arg_18h) {
    rax = *(0x00406020);
    return void (*0x401f20)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401f20 */
#include <stdint.h>
 
void loc_00401f20 (int64_t arg_10h, int64_t arg_18h, int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r8 = rdx;
    r9 = rcx;
    rcx = rdi;
    rdx = rsi;
    void (*rax)(uint64_t, uint64_t, uint64_t*, uint64_t*) (r8, r9, *((rbp + 0x10)), *((rbp + 0x18)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404c31 */
#include <stdint.h>
 
int32_t fcn_00404c31 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401edf */
#include <stdint.h>
 
int64_t fcn_00401edf (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x00406090);
    return void (*0x401f20)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401e81 */
#include <stdint.h>
 
void fcn_00401e81 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x00406018)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x405092 */
#include <stdint.h>
 
void fcn_00405092 (int64_t arg4, int64_t arg3, int64_t arg2, uint32_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404dd0 */
#include <stdint.h>
 
int64_t fcn_00404dd0 (void) {
    rax = 0x4900492049000b;
    uint64_t (*0x00440670)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401ef5 */
#include <stdint.h>
 
void fcn_00401ef5 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x004060a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4018d7 */
#include <stdint.h>
 
int32_t fcn_004018d7 (void) {
    eax = *(0x004406c0);
    *(0x00443c70) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x404de0 */
#include <stdint.h>
 
int64_t fcn_00404de0 (void) {
    rax = 0x4000420040001;
    uint64_t (*0x00440670)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x401dba */
#include <stdint.h>
 
uint64_t fcn_00401dba (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    uint32_t var_44h;
    int64_t var_40h;
    int64_t var_18h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
    rax = fcn_00401e5c (rdi, rbp - 0x40);
    if (rbx != 0) {
        r8d = *((r12 + 8));
        rdx = *(r12);
    } else {
        r8d = 0;
        edx = 0;
    }
    r9 = rbp - 0x44;
    rcx = *(r13);
    eax = uint64_t (*0x004060a8)(uint64_t, uint64_t) (rax, rcx);
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
    uint64_t (*0x00406040)() ();
    eax = *((rbp - 0x44));
    goto label_3;
label_1:
    fcn_004052d6 ();
label_3:
    rsp = rbp - 0x18;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello2/x64_macho_after_exec_on_mac/subject.exe @ 0x4018c7 */
#include <stdint.h>
 
int32_t fcn_004018c7 (void) {
    eax = *(0x004406a8);
    *(0x00443c70) = eax;
    rax = main;
    return eax;
}
