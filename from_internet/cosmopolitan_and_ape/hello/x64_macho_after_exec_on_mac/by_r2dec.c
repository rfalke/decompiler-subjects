/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401245 */
#include <stdint.h>
 
void entry0 (int64_t arg_8h, int64_t arg_18h) {
    *(0x00404630) = 8;
    r12 = *(rsp);
    r13 = rsp + 8;
    r14 = rsp + r12*8 + 0x18;
    eax = 0x401214;
    edi = 0x403018;
    ecx = 0x403070;
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
    *(0x0040783c) |= 1;
    eax = 0x403008;
    ecx = 0x403010;
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
    eax = fcn_0040141f ();
    return fcn_004017fd (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x400675 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x400748 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40114f */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4010fb */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40117b */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t fcn_00401000 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* [00] -r-x section size 8192 named 0.__TEXT.__text */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x400629 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x400653 */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40124e */
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
    *(0x00404630) = 0x20;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401636 */
#include <stdint.h>
 
uint64_t fcn_00401636 (char ** envp, int64_t arg2, int64_t arg1) {
    rdx = envp;
    rsi = arg2;
    rdi = arg1;
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
    rax = void (*0x00403050)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) (1, 0x10, 3, rbx, rsi, rdi, 0xfffffffffffffff6);
    rcx = 0xfffffffffffffff5;
    *((rbx + 0x18)) = rax;
    rax = void (*0x00403050)(uint64_t) (0xfffffffffffffff5);
    rcx = 0xfffffffffffffff4;
    *((rbx + 0x30)) = rax;
    rax = void (*0x00403050)(uint64_t) (0xfffffffffffffff4);
    *((rbx + 0x48)) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4017ec */
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4017be */
#include <stdint.h>
 
int64_t fcn_004017be (int64_t arg4, int64_t arg3, int64_t arg2) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401e0a */
#include <stdint.h>
 
uint32_t fcn_00401e0a (void) {
    r12 = *(0x00406038);
    eax = fcn_00401eaa (rdi, r12);
    while (eax == 0) {
        eax |= 0xffffffff;
        goto label_0;
        ebx = eax;
        eax = fcn_00401e45 (0xa, r12);
        eax++;
    }
    eax = rbx + 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40156c */
#include <stdint.h>
 
uint32_t fcn_0040156c (int64_t arg1) {
    int64_t var_104h;
    int64_t var_100h;
    int64_t var_e8h;
    rdi = arg1;
    r13d = *(0x00404630);
    r13d &= 4;
    if (r13d == 0) {
        rsi = rbp - 0x100;
        ebx = *(main);
        eax = fcn_00401609 (rdi);
        eax++;
        if (eax != 0) {
            eax = *((rbp - 0xe8));
            eax &= 0xf000;
        } else {
            *(0x00407838) = ebx;
        } else {
            *((rbp - 0x104)) = edi;
            r13d = 0;
            al = fcn_0040245f (rdi, 1, rdx);
            edi = *((rbp - 0x104));
            if (al == 0) {
                goto label_0;
            }
            r12 = (int64_t) edi;
            r12 *= 0x18;
            r12 += *(0x004076b0);
            eax = fcn_00401dd2 (*(r12));
        }
        r13b = (eax == 2) ? 1 : 0;
        r13d = (int32_t) r13b;
    }
label_0:
    eax = r13d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40215b */
#include <stdint.h>
 
uint64_t fcn_0040215b (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
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
                *(main) = rax;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x402286 */
#include <stdint.h>
 
uint64_t fcn_00402286 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
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
    fcn_004023ce (*(rdi));
    al = fcn_004023ce (*(r13));
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
                rdx = r8;
                fcn_00402750 (rax, rsi);
            }
label_4:
            rdx -= r8;
            rax = fcn_00402870 (rax + r8, 0, r14);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401297 */
#include <stdint.h>
 
int64_t fcn_00401297 (int64_t arg3) {
    rdx = arg3;
    edi = section.2.__DATA.__bss;
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
    fcn_00401636 (rdi, rsi, rdx);
    fcn_004017ec ();
    rcx = 0x20;
    fcn_004017be (rdi, rsi, 0x402764);
    rcx = 0x20;
    fcn_004017be (rdi, rsi, 0x40288a);
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
    r9 |= main;
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
    *(main) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40141f */
#include <stdint.h>
 
uint32_t fcn_0040141f (void) {
    rdi = 0x004029a1;
    eax = fcn_00401e0a ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4017fd */
#include <stdint.h>
 
void fcn_004017fd (int64_t arg1) {
    rdi = arg1;
    r12d = edi;
    fcn_004021f0 (0, rsi, rdx);
    edi = r12d;
    return fcn_00402941 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4021f0 */
#include <stdint.h>
 
void fcn_004021f0 (int64_t arg4, int64_t arg3, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x402941 */
#include <stdint.h>
 
int32_t fcn_00402941 (void) {
    *(0x0040783c) |= 4;
    if ((*(0x00404630) & 4) == 0) {
        goto label_0;
    }
    ecx = (int32_t) dil;
    do {
        uint64_t (*0x00403018)() ();
    } while (1);
label_0:
    eax = *(0x00404680);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("cli");
    __asm ("lidt [0x402972]");
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401609 */
#include <stdint.h>
 
uint32_t fcn_00401609 (int64_t arg2) {
    int64_t var_14h;
    rsi = arg2;
    r13 = rsi;
    eax = fcn_004025b0 ();
    if (eax != 0xffffffff) {
        *((rbp - 0x14)) = eax;
        fcn_0040168d (r13);
        eax = *((rbp - 0x14));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4025b0 */
#include <stdint.h>
 
int64_t fcn_004025b0 (void) {
    rax = 0x35022721530005;
    uint64_t (*0x00404638)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40168d */
#include <stdint.h>
 
int64_t fcn_0040168d (int64_t arg1) {
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40245f */
#include <stdint.h>
 
int32_t fcn_0040245f (char ** envp, char ** argv, uint32_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401dd2 */
#include <stdint.h>
 
void fcn_00401dd2 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x00403040)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401afe */
#include <stdint.h>
 
uint64_t fcn_00401afe (uint32_t arg5, uint32_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
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
    fcn_00401aa3 (r9);
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
        fcn_00401aa3 (r9);
    } while (1);
label_3:
    fcn_00401ace (r9, 0);
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
        fcn_00401aa3 (r9);
    } while (1);
label_9:
    r10d = 0;
    do {
        if (*((rbp - 0x38)) != 0x22) {
            goto label_10;
        }
        fcn_00401aa3 (r9);
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
    rax = fcn_00401ace (r9, 0x5c);
    goto label_1;
    do {
label_11:
        if (rax <= 1) {
            goto label_12;
        }
        *((rbp - 0x68)) = rax;
        fcn_00401ace (r9, 0x5c);
        rax = *((rbp - 0x68));
        rax -= 2;
    } while (1);
label_12:
    r12b &= 1;
    if (r12b == 0) {
        goto label_13;
    }
    fcn_00401ace (r9, 0x22);
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
        fcn_00401ace (r9, 0x22);
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
    fcn_00401ace (r9, rsi);
    fcn_00401aa3 (r9);
    goto label_0;
label_6:
    fcn_00401ace (r9, 0);
    goto label_2;
label_5:
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40262d */
#include <stdint.h>
 
void fcn_0040262d (void) {
    fcn_0040266f (rdi, rsi, rdx, rcx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40266f */
#include <stdint.h>
 
int32_t fcn_0040266f (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40263c */
#include <stdint.h>
 
int64_t fcn_0040263c (int64_t arg4, int64_t arg3, uint32_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401aa3 */
#include <stdint.h>
 
uint64_t fcn_00401aa3 (int64_t arg1) {
    rdi = arg1;
    rdx = rdi;
    rdi = *(rdi);
    eax = *(rdi);
    if (ax <= 0xd7ff) {
        *((rdx + 0x18)) = eax;
        eax = 1;
    } else {
        rsi = rdx + 0x18;
        eax = fcn_0040262d ();
    }
    rax += rax;
    *(rdx) += rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401ace */
#include <stdint.h>
 
int64_t fcn_00401ace (uint32_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rdi;
    edi = esi;
    r8 = *((rdx + 0x10));
    rax = (int64_t) esi;
    if (esi <= 0x7f) {
        goto label_0;
    }
    al = fcn_0040263c (rdi, rsi, rdx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401dad */
#include <stdint.h>
 
int64_t fcn_00401dad (int64_t arg2, uint32_t arg1) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40297a */
#include <stdint.h>
 
uint64_t fcn_0040297a (void) {
    if ((*(0x00404630) & 4) != 0) {
        eax = fcn_00401deb ();
        *(0x00407838) = eax;
        rax |= main;
        return rax;
    }
    fcn_00401846 ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401deb */
#include <stdint.h>
 
void fcn_00401deb (void) {
    uint64_t (*0x00403048)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401846 */
#include <stdint.h>
 
int32_t fcn_00401846 (void) {
    eax = *(0x00404668);
    *(0x00407838) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401eaa */
#include <stdint.h>
 
uint64_t fcn_00401eaa (int64_t arg2, int64_t arg1) {
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
            eax = fcn_00401f6e (rbx, rsi);
        }
        r12d = eax;
        if (eax != 0xffffffff) {
            goto label_3;
        }
        rax = fcn_00401fa1 (rbx);
        rax = (int64_t) eax;
    } while (rax == *(0x00404650));
    eax = fcn_00401f97 (rbx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401e45 */
#include <stdint.h>
 
int32_t fcn_00401e45 (int64_t arg2, uint32_t arg1) {
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
        fcn_00401f6e (r8, rsi);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401f6e */
#include <stdint.h>
 
void fcn_00401f6e (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    esi |= 0xffffffff;
    return void (*0x401f76)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401fa1 */
#include <stdint.h>
 
int32_t fcn_00401fa1 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    __asm ("cmovns eax, dword [rdi + 8]");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401f97 */
#include <stdint.h>
 
int32_t fcn_00401f97 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    al = (*((rdi + 8)) == 0xffffffff) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401faf */
#include <stdint.h>
 
int64_t fcn_00401faf (uint32_t arg1) {
    uint32_t var_18h;
    rdi = arg1;
    do {
        if (rdi != 0) {
            goto label_2;
        }
        rax = *(0x00406040);
        r12d = 0;
        r13 = rax - 1;
label_0:
        if (r13 == main) {
            goto label_3;
        }
        rax = *(0x00406050);
        rdi = *((rax + r13*8));
        if (rdi == 0) {
            goto label_4;
        }
        eax = fcn_00401faf (rdi);
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
        eax = fcn_00402083 (rdi);
    }
    rdi = *((rbp - 0x18));
    r12d += eax;
    goto label_1;
label_5:
    if (r12d != 0xffffffff) {
        eax = fcn_00401f76 (rdi, r12d);
        r12d = eax;
    } else {
        r12d = 0;
    }
label_3:
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x402083 */
#include <stdint.h>
 
uint64_t fcn_00402083 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    esi = *((rdi + 0x10));
    ebx = *((rdi + 0x14));
    if (esi >= ebx) {
        ebx = *((rdi + 0x20));
    }
    ebx -= esi;
    rsi += *((r12 + 0x18));
    rax = fcn_0040247a (*((r12 + 0xc)), rsi, ebx);
    if (rax == main) {
        eax = fcn_00402150 (r12);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401f76 */
#include <stdint.h>
 
int64_t fcn_00401f76 (int64_t arg2, int64_t arg1) {
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
        *(0x00407838) = esi;
    }
    rax |= main;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40247a */
#include <stdint.h>
 
int64_t fcn_0040247a (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_30h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r12 = (int64_t) edi;
    if (r12d == 0xffffffff) {
        fcn_00401826 ();
        rax = (int64_t) eax;
    } else {
        r14 = rsi;
        r13 = rdx;
        al = fcn_0040245f (r12d, 5, rdx);
        if (al != 0) {
            r12 *= 0x18;
            rsi = rbp - 0x30;
            *((rbp - 0x30)) = r14;
            r12 += *(main);
            *((rbp - 0x28)) = r13;
            rcx |= main;
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
                al = fcn_0040245f (r12d, 2, rdx);
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
                    al = fcn_0040245f (r12d, 1, rdx);
                    if (al == 0) {
                        al = fcn_0040245f (r12d, 4, rdx);
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
                    fcn_00401d0b (rdi, rbp - 0x30, 1, rcx);
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x402150 */
#include <stdint.h>
 
void fcn_00402150 (int64_t arg1) {
    rdi = arg1;
    esi = *(0x00407838);
    return void (*0x401f76)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401836 */
#include <stdint.h>
 
int32_t fcn_00401836 (void) {
    eax = *(0x00404660);
    *(0x00407838) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4023ce */
#include <stdint.h>
 
int64_t fcn_004023ce (int64_t arg1) {
    rdi = arg1;
    eax = 0x7fffd;
    rdx = 0xfffffffffff;
    rax <<= 0x2d;
    rax += rdi;
    if (rax > rdx) {
        rdx = *(0x004063c0);
        r12 = 0x004063c0;
        rbx = rdi;
        rbx >>= 0x10;
        rax = fcn_0040243f (ebx, r12 + 8, *(rdx));
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x40243f */
#include <stdint.h>
 
int64_t fcn_0040243f (signed int64_t arg3, int64_t arg2, signed int64_t arg1) {
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x402750 */
#include <stdint.h>
 
void fcn_00402750 (int64_t arg4, uint32_t arg3) {
    rcx = arg4;
    rdx = arg3;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x402870 */
#include <stdint.h>
 
void fcn_00402870 (int64_t arg4, uint32_t arg3, int64_t arg2) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    xmm3 = esi;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
    ebx = 0x404528;
    uint64_t (*rbx + rcx*8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401856 */
#include <stdint.h>
 
int32_t fcn_00401856 (void) {
    eax = *(0x00404670);
    *(0x00407838) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401826 */
#include <stdint.h>
 
int32_t fcn_00401826 (void) {
    eax = *(0x00404658);
    *(0x00407838) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x4025c0 */
#include <stdint.h>
 
int64_t fcn_004025c0 (void) {
    rax = 0x4000420040001;
    uint64_t (*0x00404638)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401d0b */
#include <stdint.h>
 
uint64_t fcn_00401d0b (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
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
    rax = fcn_00401dad (rdi, rbp - 0x40);
    if (rbx != 0) {
        r8d = *((r12 + 8));
        rdx = *(r12);
    } else {
        r8d = 0;
        edx = 0;
    }
    r9 = rbp - 0x44;
    rcx = *(r13);
    eax = uint64_t (*0x00403060)(uint64_t, uint64_t) (rax, rcx);
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
    uint64_t (*0x00403020)() ();
    eax = *((rbp - 0x44));
    goto label_3;
label_1:
    fcn_0040297a ();
label_3:
    rsp = rbp - 0x18;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/hello/x64_macho_after_exec_on_mac/subject.exe @ 0x401816 */
#include <stdint.h>
 
int32_t fcn_00401816 (void) {
    eax = *(0x00404648);
    *(0x00407838) = eax;
    rax = main;
    return eax;
}
