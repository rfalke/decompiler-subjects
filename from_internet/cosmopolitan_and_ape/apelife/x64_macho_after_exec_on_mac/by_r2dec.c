/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4011e9 */
#include <stdint.h>
 
int32_t entry0 (int64_t arg_8h, int64_t arg_18h) {
label_0:
    ebx = *(rsp);
    rsi = rsp + 8;
    rdx = rsp + rbx*8 + 0x18;
    ebp = 0;
    eax = 0x40116a;
    edi = 0x41b040;
    ecx = 0x41b338;
    rcx -= rdi;
    ecx >>= 3;
    do {
        *(rdi) = rax;
        rcx--;
        rdi += 8;
    } while (rcx != 0);
    eax = 0;
    ecx |= 0xffffffff;
    rdi = rdx;
    __asm ("repne scasq rax, qword [rdi]");
    fcn_004021c7 (ebx, rsi, rdx, rdi);
    __asm ("ud2");
    *(0x0041c718) = 8;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4021c7 */
#include <stdint.h>
 
uint32_t fcn_004021c7 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    ebx = segment.__TEXT;
    r12d = edi;
    r13 = rsi;
    r14 = rdx;
    r15 = rcx;
    fcn_0040ed3d ();
    rdx = r14;
    rcx = r15;
    eax = fcn_004015b0 (r12d, r13);
    tmp_0 = eax;
    eax = edi;
    edi = tmp_0;
    fcn_0040286f (rdi, rsi);
    __asm ("ud2");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ed3d */
#include <stdint.h>
 
void fcn_0040ed3d (void) {
    fcn_004011f2 (rdi);
    fcn_0040229e ();
    fcn_00402240 (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4011f2 */
#include <stdint.h>
 
int64_t fcn_004011f2 (int64_t arg3) {
    rdx = arg3;
    edi = section.2.__DATA.__bss;
    esi = 0x4199e0;
    __asm ("rdtsc");
    memset (rdi, eax, rcx);
    tmp_0 = eax;
    eax = edx;
    edx = tmp_0;
    memset (rdi, eax, rcx);
    rax = 1;
    *(0x00447fec) = eax;
    *(0x00447fe8) = eax;
    *(0x00447fd0) = 0x447fc8;
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
    if ((*((r8 + 0x1b)) & 0x10) != 0) {
        if ((*((r8 + 0x1b)) & 8) != 0) {
            ecx = 0;
            __asm ("xgetbv");
            eax &= 6;
            if (eax == 6) {
                goto label_3;
            }
        }
        __asm ("btr dword [r8 + 0x18], 0x1c");
        __asm ("btr dword [r8 + 0x34], 5");
    }
label_3:
    rbx = 1;
    eax = 0x40b8f0;
    *(rdi) = rax;
    rdi += 8;
    eax = fcn.0040dcd0;
    *(rdi) = rax;
    rdi += 8;
    if (*(0x0041c008) <= 3) {
        goto label_4;
    }
    r8d = 0;
    r8d = 4;
    do {
        eax = 4;
        ecx = r8d;
        __asm ("cpuid");
        r9d = ebx;
        if ((al & 0x1f) == 0) {
            goto label_4;
        }
        if (al == 0x63) {
            eax = r9d;
            edx = r9d;
            ecx++;
            r9d >>= 0xc;
            eax >>= 0x16;
            edx &= 0xfff;
            r9d &= 0x3ff;
            eax++;
            edx++;
            eax *= edx;
            eax *= ecx;
            ecx = r9 + 1;
            eax *= ecx;
            goto label_5;
        }
        r8d++;
    } while (1);
label_4:
    eax = segment.__TEXT;
label_5:
    eax >>= 1;
    *(rdi) = rax;
    rdi += 8;
    eax = fcn.0040c5f0;
    *(rdi) = rax;
    rdi += 8;
    eax = 0x410e00;
    ecx = 0x410e10;
    if ((*(0x0041c065) & 1) != 0) {
        rax = rcx;
    }
    *(rdi) = rax;
    rdi += 8;
    r13 = 0x00405e9f;
    ecx = 0x418974;
    rax = uint64_t (*0x0041b180)(uint64_t, uint64_t) (r13, r12);
    r12 = rax;
    do {
        rax = *(rsi);
        rsi += 8;
        if (rax == 0) {
            goto label_6;
        }
        rdx = rbx + rax;
        rcx = r12;
        rax = uint64_t (*0x0041b188)() ();
        if (rax == 0) {
            rax = r13;
        }
        *(rdi) = rax;
        rdi += 8;
    } while (1);
label_6:
    eax = 0x40e4e0;
    *(rdi) = rax;
    rdi += 8;
    eax = 0x40e5c0;
    *(rdi) = rax;
    rdi += 8;
    edx = 0x415424;
    ch = 0xf;
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
    rsi += 2;
    *(0x00448018) = r14;
    rax = r13;
    *(rdi) = rax;
    rdi += 8;
    rax = r15;
    *(rdi) = rax;
    rdi += 8;
    rdi += 0x30;
    eax = 0;
    rcx = 0xa;
    do {
        eax++;
        *(rdi) = al;
        rdi++;
        ecx--;
    } while (ecx != 0);
    rdi += 7;
    rcx = 0x1a;
    do {
        eax++;
        *((rdi + 0x20)) = al;
        *(rdi) = al;
        rdi++;
        ecx--;
    } while (ecx != 0);
    rdi += 0xa5;
    rdx = 0x40;
    rax = *(0x0041b1a8);
    fcn_004025f2 (rdi, rsi, rdx);
    rdx = 0x40;
    rax = *(0x0041b1c0);
    fcn_004025f2 (rdi, rsi, rdx);
    rcx = 0x20;
    fcn_0040283c (rdi, rsi, 0x4154d7);
    rcx = 0x20;
    fcn_0040283c (rdi, rsi, 0x41563c);
    ecx = 0x404eb8;
    rdx = 1;
    uint64_t (*0x0041b1e0)(uint64_t) (1);
    rax = *(r13);
    *(rdi) = rax;
    rdi += 8;
    if ((*(rdi) & 2) == 0) {
        if ((*(rdi) & 8) == 0) {
            if ((*(rdi) & 0x20) == 0) {
                if ((*(rdi) & 4) == 0) {
                    if (*(r15) != 0) {
                        esi = 0x41a194;
                    } else {
                        esi = 0x41a194;
                    } else {
                    }
                    esi = 0x41a28d;
                } else {
                }
                esi = 0x41a119;
            } else {
            }
            esi = 0x41a212;
        } else {
        }
    }
    ecx = 0x4147e0;
    rax = 8;
    *(rdi) = rax;
    rdi += 8;
    rax = 8;
    rax += rcx;
    *(rdi) = rax;
    rdi += 8;
    ebx = 0x440a10;
    fcn_0040276d (0x440770, 0x41a337);
    fcn_00410650 (rdi, rsi, rdx);
    ecx = 0x447f60;
    uint64_t (*0x0041b198)() ();
    ecx = 0x447ce0;
    uint64_t (*0x0041b1b0)() ();
    eax = 0x442000;
    rax = 1;
    rax + 0xc = 2;
    edx = *(0x00440958);
    *((rax + 4)) = edx;
    ecx = 0x441000;
    *((rax + 0x18)) = rcx;
    *((rax + 0x20)) = 0x1000;
    ecx = fcn.0040ade0;
    rdx = rcx;
    *((rax + 0x30)) = rdx;
    *(main) = rax;
    eax = main;
    edx = *(main);
    *((rax + 4)) = edx;
    ecx = 0x443000;
    *((rax + 0x18)) = rcx;
    *((rax + 0x20)) = 0x1000;
    ecx = 0x40b050;
    rdx = rcx;
    *((rax + 0x28)) = rdx;
    *(main) = rax;
    eax = main;
    rax + 0xc = 1;
    edx = *(0x00440958);
    *((rax + 4)) = edx;
    ecx = 0x445000;
    *((rax + 0x18)) = rcx;
    *((rax + 0x20)) = 0x1000;
    ecx = fcn.0040ade0;
    rdx = rcx;
    *((rax + 0x30)) = rdx;
    *(main) = rax;
    rax = fcn_004027c0 (rdi, rsi, 0x4b3);
    rsi += 0x4b8;
    rax = fcn_004027c0 (rax, rsi, 0x1f4);
    rdi = rax;
    rsi += 0x1f8;
    fcn_00402140 ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40229e */
#include <stdint.h>
 
void fcn_0040229e (void) {
    eax = 0x41b008;
    ecx = 0x41b038;
    do {
        if (rcx == rax) {
            goto label_0;
        }
        rdi = r12;
        rsi = r13;
        rdx = r14;
        rcx = r15;
        uint64_t (*rax)(uint64_t, uint64_t) (rcx, rax);
        rax += 8;
    } while (1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402240 */
#include <stdint.h>
 
int64_t fcn_00402240 (int64_t arg1) {
    rdi = arg1;
    do {
label_0:
        rsi -= rdi;
        if (rsi > 0) {
            if (rdi == 0) {
                goto label_2;
            }
            rax = rdi;
            rax |= rsi;
            if ((eax & 0xfff) == 0) {
                goto label_3;
            }
        }
label_2:
        return rax;
label_3:
        eax = fcn_00416180 (rdi, rsi, rdx);
        if (eax != 0xffffffff) {
            return rax;
        }
        fcn_00401114 ();
        eax = fcn.004015b0;
        r12d = edi;
        edi = 0x416000;
        if (rax < rdi) {
            goto label_4;
        }
label_1:
        edx = 1;
        esi = segment.__DATA;
        void (*0x402200)(uint64_t) (0x417008);
    } while (1);
    edx = r12d;
    esi = 0x441000;
    edi = segment.__DATA;
    goto label_0;
label_4:
    edx = 0;
    esi = 0x416000;
    void (*0x402200)(uint64_t) (rdi);
    goto label_0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4015b0 */
#include <stdint.h>
 
int64_t fcn_004015b0 (int64_t arg2, int64_t arg1) {
    int64_t var_d0h;
    int64_t var_c8h;
    int64_t var_c0h;
    int64_t var_b0h;
    int64_t var_80h_2;
    int64_t var_7fh;
    int64_t var_7eh;
    uint32_t var_7dh;
    int64_t var_7ch;
    int64_t var_7ah;
    int64_t var_78h_2;
    int64_t var_74h;
    int64_t var_68h_2;
    int64_t var_28h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_68h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_40h;
    rsi = arg2;
    rdi = arg1;
    rax = 0x6566696c657061;
    r13d = 8;
    r12 = rsi;
    ebx = edi;
    *(0x00446360) = rax;
    *(0x0044649c) = 1;
    *(0x00446438) = 1;
    *(0x00446468) = 0x50;
    *(0x00446460) = 0x50;
    *(0x00446478) = 0x18;
    *(0x00446458) = 0x18;
    *(0x00446450) = 0x1000;
    *(0x00446448) = 0x1000;
    do {
label_0:
        eax = fcn_00407fc0 (ebx, r12, 0x417060);
        if (eax == 0xffffffff) {
            goto label_6;
        }
        if (eax == 0x68) {
            goto label_7;
        }
        if (eax > 0x68) {
            goto label_8;
        }
        if (eax != 0x4e) {
            goto label_9;
        }
        *(0x004464a3) = 1;
    } while (1);
label_7:
    rdi = *(0x00447fd8);
    edx = 0;
    esi = 0;
    rax = fcn_004145a0 ();
    if (rax < 8) {
        rax = r13;
    }
    rax += 7;
    rax &= 0xfffffffffffffff8;
    *(0x00446450) = rax;
    goto label_0;
label_9:
    if (eax == 0x57) {
        *(0x004464a4) = 1;
        goto label_0;
label_8:
        if (eax != 0x77) {
            goto label_10;
        }
        rdi = *(0x00447fd8);
        edx = 0;
        esi = 0;
        rax = fcn_004145a0 ();
        if (rax < 8) {
            rax = r13;
        }
        rax += 7;
        rax &= 0xfffffffffffffff8;
        *(0x00446448) = rax;
        goto label_0;
    }
    if (eax != 0x3f) {
        goto label_11;
    }
    rax = fcn_00406750 (*(0x004408b8));
label_10:
    if (eax != 0x7a) {
        goto label_11;
    }
    *(0x00446440)++;
    goto label_0;
label_6:
    if (*(0x00446408) != 0) {
        rax = *(0x00446400);
        fcn_0040f560 (main, *(0x004463f8));
        rax = *(0x00446408);
        fcn_0040f560 (main, *(0x004463f8));
    }
    rax = fcn_004067c0 (0x4463f8, rsi);
    *(0x00446408) = rax;
    rax = fcn_004067c0 (0, rsi);
    *(0x00446400) = rax;
    rax = *(0x00447fe8);
    if (eax < ebx) {
        goto label_12;
    }
label_3:
    r12d = *(0x0041c718);
    r12d &= 4;
    if (r12d != 0) {
        goto label_13;
    }
    fcn_00407100 ();
    r13 = rbp - 0x80;
    ebx = 0x41707f;
    fcn_004064d0 ();
    esi = 0x4463a0;
    fcn_00410a20 (*(0x0044649c));
    rax = fcn_0041571a (0x417078, rdi, rdx);
    rdx = rax;
    fcn_00411a10 (*(0x0044649c), rsi);
    rax = *(0x004409f8);
    esi = 0x4463a0;
    edx = 0x38;
    fcn_004154c0 (r13);
    *((rbp + rax - 0x70)) = 1;
    rax = *(0x00440a00);
    rdx = *(0x004409a0);
    edx |= *(0x004409b0);
    edx |= *(0x004409a8);
    *((rbp + rax - 0x70)) = 1;
    edx |= 8;
    eax = *(0x004409c8);
    edx = ~edx;
    *((rbp - 0x74)) &= edx;
    rdx = *(0x004409d0);
    edx |= *(0x00440998);
    eax |= 0x1f8;
    edx = ~edx;
    edx &= *((rbp - 0x78));
    edx |= *(0x00440990);
    eax = ~eax;
    *((rbp - 0x78)) = edx;
    eax &= *((rbp - 0x80));
    eax |= *(0x004409c0);
    *((rbp - 0x80)) = eax;
    fcn_00410a90 (*(0x0044649c), *(0x004409e0), r13);
    rdi = rbx;
    *(0x004464a2) = 1;
    rax = fcn_0041571a (rdi, rbx, rdx);
    rdx = rax;
    fcn_00411a10 (*(0x0044649c), rsi);
    fcn_0040ed60 (0x407080);
    ecx = 0xa;
    eax = r12d;
    rdi = rbp - 0x78;
    memset (rdi, eax, rcx);
    *((rbp - 0x80)) = 0x406730;
    fcn_004114c0 (2, r13, 0);
    eax = r12d;
    rdi = rbp - 0x78;
    ecx = 0xa;
    memset (rdi, eax, rcx);
    *((rbp - 0x80)) = 0x406740;
    fcn_004114c0 (0x1c, r13, 0);
    rax = fcn_0041571a (rbx, *(0x00446490), rdx);
    rbx = rax;
    rax = fcn_0041571a (0x417029, rsi, rdx);
    *((rbp - 0xc8)) = rax;
    while (esi != 0) {
        fcn_00407100 ();
        *(0x00446490) &= 0xfffffffd;
        fcn_004078f0 ();
label_1:
        xmm0 = 0;
        *(r13) = xmm0;
        *((r13 + 0x10)) = xmm0;
        rax = fcn_00410f90 (0, r13, 0x20);
        if (rax == main) {
            goto label_14;
        }
        eax = *((rbp - 0x80));
        if (al > 0x20) {
            goto label_15;
        }
        if (al > 8) {
            goto label_16;
        }
label_2:
        esi = *(0x00446490);
        if ((sil & 1) != 0) {
            goto label_4;
        }
        esi &= 2;
    }
    if (*(0x004464a1) == 0) {
        goto label_17;
    }
    uint64_t (*0x0041c098)() ();
    *(fp_stack--) = fp_stack[?];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    ? = fp_stack[0];
    fp_stack--;
    if (fp_stack[0] <= fp_stack[1]) {
        goto label_1;
    }
    eax = *(0x00440968);
    *((rbp - 0x80)) = 0;
    *((rbp - 0x7c)) = ax;
    *((rbp - 0x7a)) = 0;
    fcn_00408230 (r13, 1, 0);
    eax = *(0x00440968);
    ax |= *(0x00440960);
    if ((*((rbp - 0x7a)) & ax) != 0) {
        goto label_1;
    }
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] += *(0x00417a68);
    ? = fp_stack[0];
    fp_stack--;
label_17:
    fcn_004078f0 ();
    goto label_1;
label_13:
    r12 = rbp - 0x80;
    edx = 0x48;
    fcn_0041561f (r12, 0);
    eax = 0x407faa;
    *((rbp - 0x78)) = rax;
    rax = fcn_00405f9e (0);
    *((rbp - 0x68)) = rax;
    rax = fcn_00402c92 (0, 0x7f03, rdx, rcx);
    *((rbp - 0x40)) = 0x417700;
    *((rbp - 0x58)) = rax;
    *((rbp - 0x50)) = 0xb;
    ax = fcn_00402cd5 (r12);
    if (ax == 0) {
        goto label_18;
    }
    r9d = 0x80000000;
    rax = fcn_00402bff (0, 0x417700, 0x4177b0, 0xcf0000, 0x80000000, r9d);
    r12 = rax;
    if (rax == 0) {
        goto label_18;
    }
    r15 = rbp - 0xb0;
    rax = fcn_00402c72 (rax, 0, rdx, rcx);
    r13 = rax;
    fcn_00402bdf (rax, 0x800, 0, 0);
    fcn_00402bdf (r13, 0, 0x20, 0x417728);
    fcn_00402bdf (r13, 0, 0x10, 0x417744);
    fcn_00402d3e (r12, 1, rdx, rcx);
    while (eax != 0) {
        fcn_00402d4e (r15);
        fcn_00402c1f (r15);
        eax = fcn_00402c62 (r15, 0, 0, 0);
        r12d = eax;
    }
label_4:
    rsp = rbp - 0x28;
    eax = r12d;
    return rax;
label_16:
    eax -= 9;
    if (al > 0x17) {
        goto label_2;
    }
    eax = (int32_t) al;
    /* switch table (24 cases) at 0x417368 */
label_15:
    eax -= 0x4d;
    if (al > 0x26) {
        goto label_2;
    }
    eax = (int32_t) al;
    /* switch table (39 cases) at 0x417428 */
label_14:
    rax = *(0x00448020);
    rdi = rax;
    if (rax == *(0x00440818)) {
        goto label_2;
    }
    goto label_19;
label_12:
    rdi = *((r12 + rax*8));
    eax = fcn_00406a10 ();
    eax++;
    if (eax != 0) {
        goto label_3;
    }
    eax = *(0x00446498);
    rax = *(0x00447fe8);
    eax = 0;
    r12d = 1;
    fcn_0040ad00 (*(main), 0x41706a, *((r12 + rax*8)), rax + 1, *(0x00446494), 0x417268);
    goto label_4;
label_5:
    if (r15d == 0x40) {
        goto label_20;
    }
    if (r15d != 0x41) {
        goto label_2;
    }
    if (*(0x004464a3) == 0) {
        goto label_21;
    }
    do {
        rdi |= main;
        fcn_00406570 (rdi, 0);
        rdi |= main;
        fcn_00406570 (rdi, 0);
        rdi |= main;
        fcn_00406570 (rdi, 0);
        goto label_2;
label_20:
    } while (*(0x004464a3) == 0);
label_21:
    fcn_00406570 (1, 0);
    fcn_00406570 (1, 0);
    fcn_00406570 (1, 0);
    goto label_2;
    if (*((rbp - 0x7d)) != 0x7e) {
        goto label_2;
    }
    rax = *(0x00446460);
    fcn_00406570 (rax - 2, 0);
    goto label_2;
    r15 = *(0x00446438);
    r14d = 0;
    if (r15 <= 0) {
        goto label_2;
    }
    do {
        fcn_004060a0 ();
        r14++;
    } while (r14 != r15);
    goto label_2;
    *(0x00446438)++;
    goto label_2;
    edi = *(0x0044649c);
    if (*(0x004464a2) == 0) {
        goto label_22;
    }
    rdx = *((rbp - 0xc8));
    *(0x004464a2) = 0;
    fcn_00411a10 (rdi, 0x417029);
    goto label_2;
    eax = *((rbp - 0x7f));
    if (al == 0x74) {
        goto label_23;
    }
    if (al == 0x76) {
        goto label_24;
    }
    if (al != 0x5b) {
        goto label_2;
    }
    eax = *((rbp - 0x7e));
    eax -= 0x35;
    if (al > 0xf) {
        goto label_2;
    }
    eax = (int32_t) al;
    /* switch table (16 cases) at 0x417560 */
label_19:
    fcn_0040286f (0, rsi);
    rdx = *(0x00446450);
    rdx *= *(0x00446448);
    rdx >>= 3;
    fcn_0041561f (*(0x00446408), 0);
    goto label_2;
label_22:
    rdx = rbx;
    *(0x004464a2) = 1;
    fcn_00411a10 (rdi, 0x41707f);
    goto label_2;
    rsi |= main;
    fcn_00406570 (0, rsi);
    goto label_2;
    fcn_00406570 (0, 1);
    goto label_2;
    r15 = rbp - 0xb0;
    rdi = rbp - 0x7d;
    edx = 0xa;
    rsi = r15;
    *((rbp - 0xb0)) = rdi;
    rax = fcn_004145a0 ();
    rdi = *((rbp - 0xb0));
    r14 = rax;
    if (*(rdi) == 0x3b) {
        rdi++;
        *((rbp - 0xb0)) = rdi;
    }
    rcx = *(main);
    edx = 0xa;
    rsi = r15;
    *((rbp - 0xc0)) = rcx;
    rax = fcn_004145a0 ();
    edx = 1;
    rcx = *((rbp - 0xc0));
    rdi = *((rbp - 0xb0));
    if (rax <= 0) {
        rax = rdx;
    }
    if (rax > rcx) {
        rax = rcx;
    }
    eax--;
    *((rbp - 0xc0)) = eax;
    if (*(rdi) == 0x3b) {
        rdi++;
        *((rbp - 0xb0)) = rdi;
    }
    rcx = *(main);
    edx = 0xa;
    rsi = r15;
    *((rbp - 0xd0)) = rcx;
    rax = fcn_004145a0 ();
    edx = 1;
    rcx = *((rbp - 0xd0));
    if (rax <= 0) {
        rax = rdx;
    }
    if (rax > rcx) {
        rax = rcx;
    }
    edx = rax - 1;
    rax = *((rbp - 0xb0));
    al = (*(rax) == 0x6d) ? 1 : 0;
    eax = (int32_t) al;
    eax <<= 2;
    eax |= r14d;
    r15d = eax;
    if (r15d > 0x22) {
        goto label_25;
    }
    if (r15d < 0) {
        goto label_2;
    }
    if (r15d > 0x22) {
        goto label_2;
    }
    /* switch table (35 cases) at 0x4175e0 */
    *(0x004464a1) = 0;
    goto label_2;
    rax = *((rbp - 0xc0));
    rdx = (int64_t) edx;
    *(0x004464a1) = 1;
    *(0x00446430) = rdx;
    *(0x00446428) = rax;
    rax = *(0x00446480);
    *(0x00446420) = rax;
    rax = *(0x00446470);
    *(0x00446418) = rax;
    goto label_2;
    rsi = *((rbp - 0xc0));
    rdi = (int64_t) edx;
    fcn_004065d0 (rdi, rsi);
    goto label_2;
    rsi = *((rbp - 0xc0));
    rdi = (int64_t) edx;
    fcn_004066a0 (rdi, rsi);
    goto label_2;
    rsi = *((rbp - 0xc0));
    rdi = (int64_t) edx;
    fcn_00406e60 (rdi, rsi);
    goto label_2;
    if (*((rbp - 0x7d)) != 0x7e) {
        goto label_2;
    }
label_24:
    rdi -= *(0x00446460);
    fcn_00406570 (2, 0);
    goto label_2;
label_23:
    rax = *(0x00446438);
    edx = 1;
    rax--;
    if (rax <= 0) {
        rax = rdx;
    }
    *(0x00446438) = rax;
    goto label_2;
label_11:
    fcn_00406750 (0x40);
label_25:
    if (r15d == 0x50) {
        goto label_26;
    }
    if (r15d <= 0x50) {
        goto label_5;
    }
    if (r15d != 0x51) {
        goto label_2;
    }
    rsi = *((rbp - 0xc0));
    rdi = (int64_t) edx;
    if (*(0x004464a3) == 0) {
        goto label_27;
    }
    do {
        edx |= 0xffffffff;
        fcn_00407170 (rdi, rsi, rdx);
        goto label_2;
label_26:
        rsi = *((rbp - 0xc0));
        rdi = (int64_t) edx;
    } while (*(0x004464a3) == 0);
label_27:
    fcn_00407170 (rdi, rsi, 1);
    goto label_2;
label_18:
    void (*0x4028b7)(uint64_t, uint64_t) (0, 0);
    edx = 0x41873d;
    while (1) {
        if (*(0x00448024) == 0) {
            edi = 0;
            *(0x00448024) = 1;
            eax = fcn_00410b10 ();
            if (eax != 0) {
                __asm ("int3");
            }
            fcn_0040a090 (2, 0);
            fcn_0040286f (*(0x004408b0), rsi);
        }
        fcn_00401114 ();
        fcn_004028c1 (rdi, rsi, rdx);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40286f */
#include <stdint.h>
 
void fcn_0040286f (char ** argv, int64_t arg1) {
    rsi = argv;
    rdi = arg1;
    fcn_0040ee90 (0, rsi);
    fcn_0040288a ();
    fcn_00416001 ();
    __asm ("ud2");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ee90 */
#include <stdint.h>
 
uint64_t fcn_0040ee90 (char ** argv, int64_t arg1) {
    rsi = argv;
    rdi = arg1;
    r12d = 1;
    rbx = rdi;
    rdi = *(0x00446ac0);
    if (rdi == 0) {
        goto label_3;
    }
label_1:
    edx = *(rdi);
    do {
label_0:
        if (rdx == 0) {
            goto label_4;
        }
        ecx = 0;
        eax = r12d;
        __asm ("tzcnt ecx, edx");
        eax <<= cl;
        eax = ~eax;
        rdx &= rax;
        if (rbx == 0) {
            goto label_5;
        }
        rsi = rcx * 3;
    } while (*((rdi + rsi*8 + 0x20)) != rbx);
label_5:
    *(rdi) &= eax;
    rax = rcx * 3;
    rcx = rdi + rax*8;
    rax = *((rcx + 0x10));
    if (rax == 0) {
        goto label_0;
    }
    rdi = *((rcx + 0x18));
    void (*rax)() ();
    rdi = *(0x00446ac0);
label_2:
    if (rdi != 0) {
        goto label_1;
    }
    do {
label_3:
        return rax;
label_4:
        r13 = *((rdi + 8));
        if (rbx == 0) {
            goto label_6;
        }
    } while (r13 == 0);
    rdi = r13;
    goto label_1;
label_6:
    if (r13 != 0) {
        eax = fcn.0040b701;
        if (rax == 0) {
            goto label_7;
        }
        void (*rax)() ();
    }
label_7:
    *(0x00446ac0) = r13;
    rdi = r13;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40288a */
#include <stdint.h>
 
void fcn_0040288a (void) {
    ecx = 0x41b040;
    eax = 0x41b040;
    if (rcx == rax) {
        goto label_0;
    }
    do {
        rax -= 8;
        uint64_t (*rax)(uint64_t, uint64_t) (rcx, rax);
    } while (rcx != rax);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x416001 */
#include <stdint.h>
 
int32_t fcn_00416001 (void) {
    if ((*(0x0041c718) & 4) == 0) {
        goto label_0;
    }
    ecx = (int32_t) dil;
    do {
        uint64_t (*0x0041b0f0)() ();
    } while (1);
label_0:
    eax = *(0x004408d8);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    __asm ("cli");
    __asm ("lidt [0x416033]");
    return _hlt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4010b0 */
#include <stdint.h>
 
int64_t fcn_004010b0 (int64_t arg4, int64_t arg3, uint32_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rdi;
    r8 = rcx;
    rax >>= 0x27;
    eax &= 0x1ff;
    if (esi == 0) {
        goto label_0;
    }
    esi = rsi * 9;
    ecx = 0x1e;
    r9 = 0x3fffffffff000;
    esi = -esi;
    esi += 0x1e;
    do {
        rax = rdx + rax*8;
        rdx = *(rax);
        if (rdx == 0) {
            rdx = *(r8);
            rdx -= 0x1000;
            *(r8) = rdx;
            rdx |= 3;
            *(rax) = rdx;
        }
        rax = rdi;
        rdx &= r9;
        rax >>= cl;
        ecx -= 9;
        eax &= 0x1ff;
    } while (esi != ecx);
label_0:
    rax = rdx + rax*8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x401000 */
#include <stdint.h>
 
uint64_t fcn_00401000 (int64_t arg3, uint32_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* [00] -r-x section size 106496 named 0.__TEXT.__text */
    if (rsi >= rdx) {
        goto label_0;
    }
    r13 = rdx;
    r12 = rdi;
    rbx = rsi;
    do {
        rax = fcn_004010b0 (rbx + segment.__TEXT, 3, 0x6f000, 0x3220);
        r8 = rax;
        rax = main;
        rbx += 0x1000;
        rax |= r12;
        *(r8) = rax;
    } while (r13 > rbx);
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4025f2 */
#include <stdint.h>
 
uint32_t fcn_004025f2 (int64_t arg3, char ** argv, uint32_t arg1) {
    int64_t var_8h;
    rdx = arg3;
    rsi = argv;
    rdi = arg1;
    rcx = rdi;
    eax = void (*rax)(uint64_t, uint64_t) (rdi, rdx);
    edx = 0;
    ecx = *((rbp - 8));
    if (ecx <= eax) {
        eax = edx;
    }
    if (eax <= 1) {
        goto label_0;
    }
    if (*((rdi + rax - 1)) == 0x5c) {
        goto label_0;
    }
    *((rdi + rax)) = 0x5c;
    eax++;
    do {
label_0:
        rdi++;
        if (*((rdi - 1)) == 0x5c) {
            *((rdi - 1)) = 0x2f;
        }
        ecx--;
    } while (ecx != 0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40283c */
#include <stdint.h>
 
int64_t fcn_0040283c (int64_t arg4, int64_t arg3, int64_t arg2) {
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
    al = ((*(0x0041c03d) & 2) != 0) ? 1 : 0;
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
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40276d */
#include <stdint.h>
 
int64_t fcn_0040276d (int64_t arg6, uint32_t arg1) {
    r9 = arg6;
    rdi = arg1;
    r9 |= main;
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
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410650 */
#include <stdint.h>
 
uint64_t fcn_00410650 (char ** envp, char ** argv, int32_t argc) {
    int64_t var_10h;
    rdx = envp;
    rsi = argv;
    rdi = argc;
    ebx = 0x447b40;
    rax = rbx + 0x18;
    *((rbx + 0x10)) = rax;
    rbx = 3;
    rbx + 8 = 0x10;
    if ((*(0x0041c718) & 2) == 0) {
        rax = 1;
        rcx = 0xfffffffffffffff6;
        *((rbx + 0x28)) = eax;
        *((rbx + 0x40)) = eax;
        *((rbx + 0x58)) = eax;
        rax = void (*0x0041b1a0)(uint64_t, uint64_t) (0xfffffffffffffff6, 1);
        *((rbx + 0x18)) = rax;
        rcx = 0xfffffffffffffff5;
        rax = void (*0x0041b1a0)(uint64_t) (0xfffffffffffffff5);
        *((rbx + 0x30)) = rax;
        rcx = 0xfffffffffffffff4;
        rax = void (*0x0041b1a0)(uint64_t) (0xfffffffffffffff4);
        *((rbx + 0x48)) = rax;
        rsp = rbp - 0x10;
        return rax;
    }
    *((rbx + 0x18)) = main;
    *((rbx + 0x30)) = main;
    *((rbx + 0x48)) = main;
    rax = 5;
    *((rbx + 0x28)) = eax;
    *((rbx + 0x40)) = eax;
    *((rbx + 0x58)) = eax;
    rsp = rbp - 0x10;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4027c0 */
#include <stdint.h>
 
int64_t fcn_004027c0 (uint32_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r8 = rsi;
    rdx += rsi;
    rax = 0xf;
    goto label_2;
    do {
label_0:
        *(rdi) = *(rsi);
        rcx--;
        rsi++;
        rdi++;
    } while (rcx != 0);
    if (rdx <= rsi) {
        goto label_3;
    }
    ecx = r8d;
    r9d = *(rsi);
    r8 = rsi + 2;
    ecx &= eax;
    if (eax == ecx) {
        goto label_4;
    }
label_1:
    rsi = rdi;
    ecx += 4;
    rsi -= r9;
    *(rdi) = *(rsi);
    rcx--;
    rsi++;
    rdi++;
label_2:
    rsi = r8 + 1;
    r8d = *(r8);
    ecx = r8d;
    ecx >>= 4;
    if (ecx != eax) {
        goto label_0;
    }
    do {
        r10d = *(rsi);
        rsi++;
        ecx += r10d;
    } while (r10b == 0xff);
    goto label_0;
    do {
label_4:
        r10d = *(r8);
        r8++;
        ecx += r10d;
    } while (r10b == 0xff);
    goto label_1;
label_3:
    rax = rdi;
    return rax;
    do {
    } while (rcx != 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402140 */
#include <stdint.h>
 
int64_t fcn_00402140 (void) {
    if (*(0x004466c0) == 0) {
        eax = 0x10000;
        if (*(0x00447d08) >= 0x10000) {
            eax = *(0x00447d08);
        }
        rdx = rax - 1;
        if ((rdx & rax) != 0) {
            goto label_0;
        }
        *(0x004466d0) = rax;
        rax = *(section.2.__DATA.__bss);
        *(0x004466c8) = 0x1000;
        *(0x004466d8) = 0x40000;
        rax &= 0xfffffffffffffff8;
        *(0x004466e0) = 0xa00000;
        rax |= 8;
        *(0x004466e8) = 5;
        *(0x00446a70) = 5;
        *(0x004466c0) = rax;
    }
    return rax;
label_0:
    return fcn_00401114 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x401114 */
#include <stdint.h>
 
int32_t fcn_00401114 (void) {
    if ((*(0x0041c718) & 4) == 0) {
        edi = *(0x004408c0);
        rsi = rsp;
        rsi + 8 = main;
        rsi = main;
        edx = 0;
        r10 = 0x10;
        eax = *(0x004408f8);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        eax = *(0x004408e0);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        edi = eax;
        esi = 6;
        eax = *(0x004408e8);
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    }
    edi = 0x86;
    eax = fcn_00416001 ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x407fc0 */
#include <stdint.h>
 
int64_t fcn_00407fc0 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r14 = rsi;
    r13d = edi;
    rbx = rdx;
    esi = *(0x00447fe8);
    if (esi == 0) {
        *(0x00447fe8) = 1;
    }
    ecx = *(0x00447fe0);
    if (ecx == 0) {
        rax = *(0x00447fd0);
        if (*(rax) != 0) {
            goto label_2;
        }
    }
    rax = *(0x00447fe8);
    *(0x00447fe0) = 0;
    rdx = rax;
    rax = *((r14 + rax*8));
    if (edx >= r13d) {
        goto label_3;
    }
    rcx = rax + 1;
    *(main) = rcx;
    if (*(rax) != 0x2d) {
        goto label_3;
    }
    r15 = rax + 2;
    *(main) = r15;
    r12d = *((rax + 1));
    *(0x00447fe4) = r12d;
    if (r12d == 0x2d) {
        goto label_4;
    }
    if (r12d != 0) {
        goto label_5;
    }
    *(0x00447fd0) = 0x447fc8;
    rax = fcn_0041576b (rbx, 0x2d, rdx, rcx, r8);
    if (rax == 0) {
        goto label_6;
    }
    *(0x00447fe4) = 0x2d;
    r15d = 0x447fc8;
label_1:
    r12d = 0x2d;
    do {
        rax = fcn_0041576b (rbx, 0x2d, rdx, rcx, r8);
        if (rax == 0) {
            goto label_7;
        }
        if (*((rax + 1)) == 0x3a) {
            goto label_8;
        }
        *(0x00447fd8) = 0;
        if (*(r15) == 0) {
            *(0x00447fe8)++;
        }
label_0:
        eax = r12d;
        return rax;
label_2:
        r15 = rax + 1;
        *(main) = r15;
        r12d = *(rax);
        *(0x00447fe4) = r12d;
label_5:
    } while (r12d != 0x3a);
label_7:
    if (*(r15) == 0) {
        *(0x00447fe8)++;
    }
    edx = *(0x00447fec);
    if (edx == 0) {
        goto label_9;
    }
    if (*(rbx) == 0x3a) {
        goto label_9;
    }
    eax = 0;
    r12d = 0x3f;
    fcn_0040ad00 (*(0x00442038), 0x417a70, *(0x0041c710), r12d, r8, r9);
    goto label_0;
label_4:
    if (*((rax + 2)) != 0) {
        goto label_1;
    }
    edx++;
    *(0x00447fe8) = edx;
label_3:
    *(0x00447fd0) = 0x447fc8;
label_6:
    r12d = 0xffffffff;
    goto label_0;
    do {
        *(0x00447fd0) = 0x447fc8;
        if (*(rbx) == 0x3a) {
            goto label_10;
        }
        eax = *(0x00447fec);
        if (eax != 0) {
            eax = 0;
            fcn_0040ad00 (*(0x00442038), 0x417a90, *(0x0041c710), r12d, r8, r9);
        }
label_9:
        r12d = 0x3f;
        goto label_0;
label_8:
        edx = *(0x00447fe8);
        eax = rdx + 1;
        if (*(r15) != 0) {
            goto label_11;
        }
        *(0x00447fe8) = eax;
    } while (r13d <= eax);
    rax = (int64_t) eax;
    rax = *((r14 + rax*8));
    *(main) = rax;
    eax = rdx + 2;
    do {
        *(0x00447fd0) = 0x447fc8;
        *(0x00447fe8) = eax;
        goto label_0;
label_11:
        *(0x00447fd8) = r15;
    } while (1);
label_10:
    r12d = 0x3a;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4145a0 */
#include <stdint.h>
 
uint64_t fcn_004145a0 (void) {
    rax = fcn_004142f0 (rdi, rsi, rdx);
    rcx = 0x8000000000000000;
    rdi = rdx;
    rdi -= main;
    if (rdi >= 0) {
        rcx--;
        esi = 0;
        rsi -= rdx;
        if (rsi < 0) {
            rax = rcx;
        }
        return rax;
    }
    rax = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4142f0 */
#include <stdint.h>
 
uint64_t fcn_004142f0 (int64_t arg3, uint32_t arg2, int64_t arg1) {
    uint32_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    uint32_t var_3dh;
    int64_t var_3ch;
    int64_t var_38h;
    int64_t var_34h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r12d = edx;
    rbx = rdi;
    *((rbp - 0x60)) = rsi;
    while (eax != 0) {
        rbx++;
        edi = *(rbx);
        r13d = edi;
        eax = fcn_004148d0 (rdi, rsi);
    }
    *((rbp - 0x3d)) = 0;
    if (r13b != 0x2b) {
        if (r13b != 0x2d) {
            goto label_5;
        }
        *((rbp - 0x3d)) = 1;
    }
    r13d = *((rbx + 1));
    rbx++;
label_5:
    eax = r12 - 2;
    r10d = r12d;
    if (eax <= 0x22) {
        goto label_6;
    }
    r10d = 0xa;
    r12d = 0xa;
    if (r13b == 0x30) {
        goto label_7;
    }
label_0:
    r13d = (int32_t) r13b;
    ecx = *((r13 + 0x41c380));
    if (ecx > r10d) {
        goto label_8;
    }
    if (ecx == 0) {
        goto label_8;
    }
    r8 = (int64_t) r12d;
    ecx--;
    r12d = 0;
    r13d = 0;
    r11 = r8;
    r11 >>= 0x3f;
    while (eax != 0) {
        if (eax > r10d) {
            goto label_4;
        }
        ecx = rax - 1;
        if (eax != 1) {
            rax = r12;
            rax |= r13;
            if (rax == 0) {
                goto label_9;
            }
            __asm ("bsr edx, ecx");
            rsi = r13;
            rdi = r12;
            *((rbp - 0x58)) = r9;
            edx ^= 0x1f;
            *((rbp - 0x50)) = r8;
            *((rbp - 0x48)) = r11;
            *((rbp - 0x3c)) = r10d;
            *((rbp - 0x38)) = ecx;
            *((rbp - 0x34)) = edx;
            eax = fcn_004153f4 ();
            edx = *((rbp - 0x34));
            ecx = *((rbp - 0x38));
            r10d = *((rbp - 0x3c));
            r11 = *((rbp - 0x48));
            edx ^= 0x1f;
            r8 = *((rbp - 0x50));
            r9 = *((rbp - 0x58));
            edx += eax;
            if (edx > 0x7e) {
                goto label_10;
            }
        }
label_9:
        rbx = r9;
        rsi = r13;
        rax = r11;
        r14d = ecx;
        r15d = 0;
        rax *= r12;
        r9 = rbx + 1;
        rsi *= r8;
        rsi += rax;
        rax = r12;
        rdx:rax = rax * r8;
        r12 = rax;
        eax = *((rbx + 1));
        r13 = rdx;
        r13 += rsi;
        r12 += r14;
        eax = *((rax + 0x41c380));
        r13 += r15;
    }
label_4:
    if (*((rbp - 0x60)) != 0) {
label_1:
        rax = *((rbp - 0x60));
        *(rax) = r9;
    }
    rax = r12;
    rdx = r13;
    if (*((rbp - 0x3d)) != 0) {
        rax = -rax;
        rdx += 0;
        rdx = -rdx;
    }
label_2:
    return rax;
label_6:
    if (r13b != 0x30) {
        goto label_0;
    }
    r13d = *((rbx + 1));
    rbx++;
    goto label_0;
label_10:
    if (*((rbp - 0x3d)) == 0) {
        goto label_11;
    }
    if (edx == 0x7f) {
        rsi = r13;
        r11 *= r12;
        rax = r12;
        rdx:rax = rax * r8;
        rsi *= r8;
        r12 = rax;
        r13 = rdx;
        eax = ecx;
        edx = 0;
        rsi += r11;
        r13 += rsi;
        r12 += rax;
        r13 += rdx;
        rbx += 2;
        rax = r13;
        __asm ("btc rax, 0x3f");
        rax |= r12;
        if (rax != 0) {
            r9 = rbx;
            goto label_12;
        }
    }
label_12:
    r13 = 0x8000000000000000;
    r12d = 0;
    if (*((rbp - 0x60)) != 0) {
        goto label_1;
    }
label_3:
    rax = r12;
    rdx = r13;
    goto label_2;
label_11:
    r12 = main;
    r13 = 0x7fffffffffffffff;
    if (*((rbp - 0x60)) != 0) {
        goto label_1;
    }
    goto label_3;
label_7:
    r13d = *((rbx + 1));
    eax = r13d;
    eax &= 0xffffffdf;
    if (al == 0x58) {
        r13d = *((rbx + 2));
        r10d = 0x10;
        rbx += 2;
        r12d = 0x10;
        goto label_0;
    }
    if (al == 0x42) {
        r13d = *((rbx + 2));
        r10d = 2;
        rbx += 2;
        r12d = 2;
        goto label_0;
label_8:
        r9 = rbx;
        r12d = 0;
        r13d = 0;
        goto label_4;
    }
    rbx++;
    r10d = 8;
    r12d = 8;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406750 */
#include <stdint.h>
 
uint64_t fcn_00406750 (int64_t arg1) {
    rdi = arg1;
    r12d = edi;
    rax = fcn_0041571a (0x417008, rdi, rdx);
    rdx = rax;
    fcn_00411a10 (*(0x0044649c), rsi);
    rsi = *(0x0041c710);
    rax = fcn_0041571a (*(0x0041c710), *(rsi), rdx);
    rdx = rax;
    fcn_00411a10 (*(0x0044649c), rsi);
    rax = fcn_0041571a (0x417098, rdi, rdx);
    rdx = rax;
    fcn_00411a10 (*(0x0044649c), rsi);
    fcn_0040286f (r12d, rsi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x41571a */
#include <stdint.h>
 
int64_t fcn_0041571a (int64_t arg3, int64_t arg1, uint32_t arg10) {
    rdx = arg3;
    rdi = arg1;
    xmm3 = arg10;
    rax = rdi;
    ecx = edi;
    ecx &= 0xf;
    rax &= 0xfffffffffffffff0;
    xmm4 = 0;
    __asm ("movdqa xmm3, xmmword [rax]");
    __asm ("pcmpeqb xmm3, xmm4");
    __asm ("pmovmskb edx, xmm3");
    edx >>= cl;
    edx <<= cl;
    __asm ("bsf edx, edx");
    if (edx != 0) {
        goto label_0;
    }
    do {
        rax = rax + 0x10;
        __asm ("movdqa xmm3, xmmword [rax]");
        __asm ("pcmpeqb xmm3, xmm4");
        __asm ("pmovmskb edx, xmm3");
        __asm ("bsf edx, edx");
    } while (edx == 0);
label_0:
    rax += rdx;
    rax -= rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411a10 */
#include <stdint.h>
 
void fcn_00411a10 (int64_t arg3, int64_t arg2) {
    int64_t var_10h;
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    *((rbp - 0x10)) = rsi;
    *((rbp - 8)) = rdx;
    fcn_00411a30 (rdi, rbp - 0x10, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411a30 */
#include <stdint.h>
 
int64_t fcn_00411a30 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_44h;
    int64_t var_40h;
    int64_t var_20h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_1:
    fcn_00402b21 ();
    rax = (int64_t) eax;
    goto label_5;
label_2:
    r13 = rdi;
    rdi = rcx;
    r12 = rdx;
    rbx = rsi;
    if (rdx != 0) {
        goto label_6;
    }
    goto label_7;
    do {
        rbx += 0x10;
        r12--;
        if (r12 == 0) {
            goto label_7;
        }
label_6:
    } while (*((rbx + 8)) == 0);
    r14 = *(0x0041b228);
    rax = fcn_00405e00 (rdi, rbp - 0x40);
    r8d = 0x7ffff000;
    rdx = *(rbx);
    if (*((rbx + 8)) <= main) {
        r8 = *((rbx + 8));
    }
label_0:
    rcx = *(r13);
    r9 = rbp - 0x44;
    eax = void (*r14)(uint64_t) (rax);
    if (eax == 0) {
        goto label_8;
    }
    eax = *((rbp - 0x44));
    if (eax != 0) {
        goto label_9;
    }
    r12 <<= 4;
    r12 += rbx;
    do {
        rbx += 0x10;
    } while (r12 != rbx);
label_9:
    rcx = *(r13);
    uint64_t (*0x0041b100)() ();
    eax = *((rbp - 0x44));
    rsp = rbp - 0x20;
    return rax;
label_7:
    r14 = *(0x0041b228);
    r12d = 0;
    fcn_00405e00 (rdi, rbp - 0x40);
    r8d = 0;
    edx = 0;
    goto label_0;
label_8:
    fcn_004162a0 ();
    rsp = rbp - 0x20;
    return rax;
    if (edi < 0) {
        goto label_1;
    }
    if (edx < 0) {
        goto label_1;
    }
    rax = (int64_t) edi;
    if (rax < *(0x00447b48)) {
        goto label_10;
    }
    if ((*(0x0041c718) & 4) == 0) {
        goto label_11;
    }
    do {
        fcn_00402acd ();
label_5:
        return rax;
label_10:
        rcx = rax * 3;
        rax = *(main);
        r10 = rax + rcx*8;
        eax = *((r10 + 0x10));
        if (eax == 6) {
            goto label_12;
        }
        if (eax == 5) {
            goto label_13;
        }
        if ((*(0x0041c718) & 4) == 0) {
            goto label_11;
        }
        if (eax == 1) {
            goto label_14;
        }
        if (eax == 4) {
            goto label_14;
        }
    } while (eax != 2);
    rdx = (int64_t) edx;
    r9d = 0;
    r8d = 0;
    ecx = 0;
    rdi = r10;
    eax = 0x402fe0;
    void (*rax)() ();
label_11:
    goto label_15;
label_12:
    rdi = *(r10);
    rdx = (int64_t) edx;
    rcx = main;
    eax = 0;
    void (*rax)() ();
label_14:
    rdx = (int64_t) edx;
    rcx = main;
    rdi = r10;
    goto label_2;
label_13:
    rdi = r10;
    rax = (int64_t) edx;
    r9 = rsi;
    if (rax == 0) {
        goto label_16;
    }
    rax <<= 4;
    r11 = rsi + rax;
    eax = 0;
label_4:
    if (*((r9 + 8)) == 0) {
        goto label_17;
    }
    rcx = *(rdi);
    r8d = 0;
    r10 = rax + 1;
    while ((al & 0x20) == 0) {
        __asm ("pause");
        rcx = *(rdi);
label_3:
        esi = ecx;
        edx = rcx + 5;
        __asm ("in al, dx");
    }
    rax = *(r9);
    edx = esi;
    eax = *((rax + r8));
    __asm ("out dx, al");
    rax = r10 + r8;
    r8++;
    if (*((r9 + 8)) > r8) {
        goto label_3;
    }
label_17:
    r9 += 0x10;
    if (r11 != r9) {
        goto label_4;
    }
    return rax;
label_16:
    return rax;
label_15:
    rax = 0x79007920790014;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f370 */
#include <stdint.h>
 
uint64_t fcn_0040f370 (int64_t arg6, uint32_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_3:
    fcn_00401114 ();
    do {
label_0:
        eax = fcn_00402b21 ();
        r15 = (int64_t) eax;
        goto label_4;
    } while (rsi == 0);
    rax = rdi;
    rbx = rdi;
    rax |= r9;
    if (ax != 0) {
        goto label_0;
    }
    rax = 0x800000000000;
    r14d = edx;
    rdx = 0xffffffffffff;
    rax += rdi;
    if (rax > rdx) {
        goto label_0;
    }
    rax = (int64_t) ecx;
    r13d = ecx;
    r15d = r8d;
    dl = ((*(0x004408c8) & rax) == 0) ? 1 : 0;
    al = (r8d != 0xffffffff) ? 1 : 0;
    if (dl != al) {
        goto label_0;
    }
    eax = ecx;
    edx = ecx;
    eax >>= 1;
    edx &= 1;
    eax ^= 1;
    eax &= 1;
    if (al != dl) {
        goto label_0;
    }
    rax = main;
    r12 = rsi;
    ax = 0;
    if (r8d == 0xffffffff) {
        r12 = rax;
    }
    if ((cl & 0x10) != 0) {
        goto label_6;
    }
    rdi = main;
    eax = *(main);
    rdi >>= 0x10;
    r10d = edi;
    if (eax <= 0) {
        goto label_7;
    }
    eax--;
    ecx = 0x10008000;
    edx = rdi + 0x10008000;
    r8 = rax * 3;
    eax = 0;
    r8 <<= 3;
    do {
        esi = *((rax + 0x446eec));
        edi = edx;
        if (esi >= ecx) {
            if (*((rax + 0x446ee8)) >= edx) {
                goto label_5;
            }
            ecx = rsi + 1;
            edx = r10 + rcx;
            edi = edx;
        }
        rax += 0x18;
    } while (r8 != rax);
label_5:
    rbx = (int64_t) ecx;
    rbx <<= 0x10;
    if (edi > 0x20000000) {
        goto label_8;
    }
label_1:
    ecx |= 0x10;
    rax = fcn_0040f880 (rbx, r12, r14d, r13d, r15d, r9);
    r15 = rax;
    if (rbx == rax) {
        if (rax != main) {
            goto label_9;
        }
    }
label_2:
    r15 = main;
    do {
label_4:
        rax = r15;
        return rax;
label_8:
        rax = fcn_00402b8a ();
        r15 = rax;
    } while (1);
label_6:
    rsi = r12;
    *((rbp - 0x38)) = r9;
    eax = fcn_0040f830 (rdi);
    r9 = *((rbp - 0x38));
    if (eax != 0xffffffff) {
        goto label_1;
    }
    goto label_2;
label_9:
    rax = rbx + r12 - 1;
    rbx >>= 0x10;
    rax >>= 0x10;
    eax = fcn_0040fbb0 (0x446ee0, rbx, eax, rdx, r14d, r13d);
    if (eax == 0xffffffff) {
        goto label_3;
    }
    eax = 0;
    if (rax == 0) {
        goto label_4;
    }
    rsi = r12;
    rdi = r15;
    void (*rax)() ();
    goto label_4;
label_7:
    edi += 0x10008000;
    ecx = 0x10008000;
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x416180 */
#include <stdint.h>
 
int64_t fcn_00416180 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_14h;
    int64_t var_10h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r13 = rsi;
    r12 = rdi;
    if ((*(0x0041c718) & 4) != 0) {
        goto label_0;
    }
    rax = *(0x004408f0);
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    r8d = 0xffffffff;
    while (eax != 0) {
        rsp = rbp - 0x10;
        eax = r8d;
        return rax;
        if (rax <= 0xfffffffffffff000) {
            goto label_1;
        }
        eax = -eax;
        *(0x00448020) = eax;
        rsp = rbp - 0x10;
        eax = r8d;
        return rax;
label_0:
        eax = fcn_00416220 (edx, 0);
        r9 = rbp - 0x14;
        rdx = r13;
        r8d = eax;
        rcx = r12;
        eax = uint64_t (*0x0041b218)() ();
        r8d = 0;
    }
    eax = fcn_004162a0 ();
label_1:
    rsp = rbp - 0x10;
    r8d = eax;
    eax = r8d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f560 */
#include <stdint.h>
 
int64_t fcn_0040f560 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    do {
label_0:
        void (*0x402b21)() ();
    } while (di != 0);
    rax = 0x800000000000;
    r13 = rdi;
    rdx = 0xffffffffffff;
    rax += rdi;
    if (rax > rdx) {
        goto label_0;
    }
    if (rsi == 0) {
        goto label_0;
    }
    r12 = main;
    r12w = 0;
    rsi = r12;
    eax = fcn_0040f830 (rdi);
    if (eax != 0xffffffff) {
        eax = 0;
        if ((*(0x0041c718) & 4) == 0) {
            goto label_1;
        }
    }
    return rax;
label_1:
    rsi = r12;
    rdi = r13;
    rax = 0x4900492049000b;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4067c0 */
#include <stdint.h>
 
uint64_t fcn_004067c0 (char ** argv, int64_t arg1) {
    rsi = argv;
    rdi = arg1;
    ecx |= 2;
    r12 = rdi;
    rbx = *(0x00446450);
    rbx *= *(0x00446448);
    rbx >>= 3;
    rbx += 0xfff;
    rbx &= 0xfffffffffffff000;
    r14 = main;
    rbx += 0x11fff;
    bx = 0;
    rax = fcn_0040f370 (0, rbx, 3, *(0x004408c8), 0xffffffff, 0);
    rdi = rax;
    r13 = rax;
    fcn_00416180 (rdi, 0x1000, 0);
    rsi -= r14;
    fcn_00416180 (r13 + r14, rbx, 0);
    if (r12 != 0) {
        *(r12) = rbx;
    }
    rax = main;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x407100 */
#include <stdint.h>
 
uint64_t fcn_00407100 (void) {
    int64_t var_8h;
    int64_t var_6h;
    eax = *(0x00446460);
    eax++;
    *((rbp - 8)) = ax;
    rax = *(0x00446458);
    *((rbp - 6)) = ax;
    fcn_00409ce0 (*(0x0044649c), rbp - 8);
    eax = *((rbp - 8));
    edx = *((rbp - 6));
    eax--;
    *(0x00446458) = rdx;
    rdx += *(0x00446470);
    rax = (int64_t) eax;
    *(0x00446468) = rdx;
    *(0x00446460) = rax;
    rax += *(0x00446480);
    *(0x00446478) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x409ce0 */
#include <stdint.h>
 
uint64_t fcn_00409ce0 (int64_t arg2, int64_t arg1) {
    int64_t var_90h;
    int64_t var_8ch;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_72h;
    int64_t var_70h;
    int64_t var_6eh;
    int64_t var_6ch;
    int64_t var_20h;
    rsi = arg2;
    rdi = arg1;
label_3:
    r14 = rsi;
    esi = 1;
    r13 = rbp - 0x80;
    r12 = rbp - 0x8c;
    rbx = (int64_t) edi;
    edi = ebx;
    *((rbp - 0x8c)) = ebx;
    *((rbp - 0x88)) = 1;
    al = fcn_00410c50 (edi, esi);
    if (al != 0) {
        goto label_4;
    }
    do {
        al = fcn_00410c50 (ebx, 4);
        if (al != 0) {
            goto label_4;
        }
        fcn_00402acd ();
label_1:
        r12 += 4;
        if (r13 == r12) {
            goto label_5;
        }
label_0:
        rbx = *(r12);
        al = fcn_00410c50 (ebx, 1);
    } while (al == 0);
label_4:
    rcx = *(0x00447b50);
    rax = rbx * 3;
    rdx = rbp - 0x90;
    rax = rcx + rax*8;
    rcx = *(rax);
    eax = uint64_t (*0x0041b120)() ();
    if (eax != 0) {
        goto label_6;
    }
    r12 += 4;
    fcn_00402bb4 ();
    if (r13 != r12) {
        goto label_0;
    }
label_5:
    eax = 0xffffffff;
    do {
label_2:
        rsp = rbp - 0x20;
        return rax;
label_6:
        rax = *(r12);
        edx = 0x60;
        fcn_0041561f (r13, 0);
        rdx = *(0x00447b50);
        rax *= 3;
        rsi = r13;
        *((rbp - 0x80)) = 0x60;
        rax = rdx + rax*8;
        rdi = *(rax);
        eax = fcn_00405f4b ();
        if (eax == 0) {
            if ((*(0x00447f9c) & 8) != 0) {
                goto label_7;
            }
            fcn_004162a0 ();
            goto label_1;
        }
        eax = *((rbp - 0x6e));
        *((r14 + 4)) = 0;
        eax++;
        ax -= *((rbp - 0x72));
        *((r14 + 2)) = ax;
        eax = *((rbp - 0x6c));
        eax++;
        ax -= *((rbp - 0x70));
        *(r14) = ax;
        eax = 0;
    } while (1);
label_7:
    edx = *(0x00447f90);
    *((r14 + 2)) = dx;
    edx = *(0x00447f94);
    *((r14 + 4)) = 0;
    *(r14) = dx;
    goto label_2;
    r13d = edi;
    r12 = rsi;
    al = fcn_00409d70 ();
    if (al != 0) {
        rax = fcn_004108b0 (0x418726);
        rdi = rax;
        eax = 0x418720;
        if (rax == 0) {
            rdi = rax;
        }
        ax = fcn_004142f0 (rdi, 0, 0);
        *((r12 + 2)) = ax;
        rax = fcn_004108b0 (0x41872e);
        rdi = rax;
        eax = 0x418723;
        if (rax == 0) {
            rdi = rax;
        }
        ax = fcn_004142f0 (rdi, 0, 0);
        *((r12 + 4)) = 0;
        *(r12) = ax;
        eax = 0;
        return rax;
    }
    rsi = r12;
    edi = r13d;
    if ((*(0x0041c718) & 4) == 0) {
        rdx = rsi;
        rsi = *(0x004409f0);
        void (*0x412380)() ();
    }
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410c50 */
#include <stdint.h>
 
uint64_t fcn_00410c50 (uint32_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    if (edi >= 0) {
        rdi = (int64_t) edi;
        if (rdi >= *(0x00447b48)) {
            goto label_0;
        }
        rdx = *(0x00447b50);
        rax = rdi * 3;
        rax = rdx + rax*8;
        al = (*((rax + 0x10)) == esi) ? 1 : 0;
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402acd */
#include <stdint.h>
 
int32_t fcn_00402acd (void) {
    eax = *(0x004407d0);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402bb4 */
#include <stdint.h>
 
int32_t fcn_00402bb4 (void) {
    eax = *(0x00440890);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x41561f */
#include <stdint.h>
 
void fcn_0041561f (uint32_t arg3, int64_t arg2) {
    rdx = arg3;
    rsi = arg2;
    xmm3 = esi;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
    ebx = 0x41c608;
    uint64_t (*rbx + rcx*8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f4b */
#include <stdint.h>
 
int64_t fcn_00405f4b (void) {
    rax = *(0x0041b130);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40607a */
#include <stdint.h>
 
void loc_0040607a (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r8 = rdx;
    r9 = rcx;
    rcx = rdi;
    rdx = rsi;
    void (*rax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4162a0 */
#include <stdint.h>
 
uint64_t fcn_004162a0 (void) {
    if ((*(0x0041c718) & 4) == 0) {
        fcn_00402b9f ();
        return;
    }
    eax = fcn_00405f8e ();
    *(0x00448020) = eax;
    rax = main;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b9f */
#include <stdint.h>
 
int32_t fcn_00402b9f (void) {
    eax = *(0x00440870);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f8e */
#include <stdint.h>
 
void fcn_00405f8e (void) {
    uint64_t (*0x0041b178)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x409d70 */
#include <stdint.h>
 
uint64_t fcn_00409d70 (void) {
    rax = fcn_004108b0 (0x418733);
    rsi = rax;
    eax = 0;
    if (rsi != 0) {
        edi = 0x418738;
        ecx = 5;
        __asm ("repe cmpsb byte [rsi], byte ptr [rdi]");
        al = (rsi > 0) ? 1 : 0;
        al = (al == 0) ? 1 : 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4108b0 */
#include <stdint.h>
 
int64_t fcn_004108b0 (int64_t arg1) {
    rdi = arg1;
    rcx = *(0x00448018);
    if (rcx == 0) {
        goto label_3;
    }
    r8 = *(rcx);
    if (r8 == 0) {
        goto label_4;
    }
    esi = *(rdi);
    rcx += 8;
label_0:
    if (sil == 0) {
        goto label_5;
    }
    edx = esi;
    eax = 0;
    while (*((r8 + rax)) == dl) {
        rax++;
        edx = *((rdi + rax));
        if (dl == 0) {
            goto label_6;
        }
    }
label_1:
    r8 = *(rcx);
    rcx += 8;
    if (r8 != 0) {
        goto label_0;
    }
label_4:
    rax = r8;
    return rax;
label_6:
    rdx = r8 + rax;
label_2:
    if (*(rdx) != 0x3d) {
        goto label_1;
    }
    r8 = r8 + rax + 1;
    rax = r8;
    return rax;
label_5:
    rdx = r8;
    eax = 0;
    goto label_2;
label_3:
    r8d = 0;
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4064d0 */
#include <stdint.h>
 
int64_t fcn_004064d0 (void) {
    rcx = *(0x00446460);
    rsi = *(0x00446458);
    if (*(0x004464a0) == 0) {
        goto label_0;
    }
    rdx = *(0x00446470);
    rax = *(0x00446480);
    do {
        rdx += rsi;
        rax += rcx;
        *(0x00446468) = rdx;
        *(0x00446478) = rax;
        return rax;
label_0:
        rdx = *(0x00446450);
        rdi = *(0x00446448);
        *(0x004464a0) = 1;
        rax = rdx;
        rax >>= 0x3f;
        rax += rdx;
        rdx = rcx;
        rdx >>= 0x3f;
        rax >>= 1;
        rdx += rcx;
        rdx >>= 1;
        rax -= rdx;
        rdx = rdi;
        rdx >>= 0x3f;
        *(0x00446480) = rax;
        rdx += rdi;
        rdi = rsi;
        rdi >>= 0x3f;
        rdx >>= 1;
        rdi += rsi;
        rdi >>= 1;
        rdx -= rdi;
        *(0x00446470) = rdx;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410a20 */
#include <stdint.h>
 
uint32_t fcn_00410a20 (int64_t arg2) {
    int64_t var_64h;
    int64_t var_60h;
    rsi = arg2;
    r12 = rsi;
    if ((*(0x0041c718) & 4) == 0) {
        rsi = *(0x004409d8);
        rdx = rbp - 0x60;
        eax = fcn_00412380 ();
        if (eax != 0xffffffff) {
            goto label_0;
        }
        return eax;
    }
    eax = fcn_00404f60 (rdi, rsi);
    return eax;
label_0:
    *((rbp - 0x64)) = eax;
    fcn_00411930 (r12, rbp - 0x60);
    eax = *((rbp - 0x64));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412380 */
#include <stdint.h>
 
int64_t fcn_00412380 (void) {
    rax = 0x36003620360010;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404f60 */
#include <stdint.h>
 
int64_t fcn_00404f60 (int64_t arg2, int32_t argc) {
    int64_t var_28h;
    int64_t var_24h;
    int64_t var_18h;
    rsi = arg2;
    rdi = argc;
    rdx = rbp - 0x28;
    rbx = rsi;
    rax = *(0x00447b50);
    rcx = *(rax);
    eax = void (*0x0041b120)(uint64_t, uint64_t, uint64_t) (rbx, r12, r13);
    rdx = rbp - 0x24;
    r12d = eax;
    rax = *(0x00447b50);
    rcx = *((rax + 0x18));
    eax = void (*0x0041b120)() ();
    edi = r12d;
    edi |= eax;
    if (edi == 0) {
        goto label_2;
    }
    edx = 0x38;
    eax = fcn_0041561f (rbx, 0);
    if (r12d == 0) {
        goto label_3;
    }
    edx = *((rbp - 0x28));
    if ((dl & 2) != 0) {
        rcx = *(0x004409a8);
        *((rbx + 0xc)) |= ecx;
    }
    if ((dl & 4) != 0) {
        *((rbx + 0xc)) |= 8;
    }
    edx &= 1;
    if (edx == 0) {
        goto label_0;
    }
    rdx = *(0x004409b8);
    edx |= *(0x004409b0);
    edx |= *((rbx + 0xc));
    *((rbx + 0xc)) = edx;
    if (eax == 0) {
        goto label_0;
    }
label_1:
    *((rbx + 0xc)) = edx;
    do {
label_0:
        rsp = rbp - 0x18;
        eax = 0;
        return rax;
label_2:
        eax = fcn_00402bb4 ();
        rsp = rbp - 0x18;
        return rax;
label_3:
    } while (eax == 0);
    if ((*((rbp - 0x28)) & 1) == 0) {
        goto label_0;
    }
    rdx = *(0x004409b0);
    edx |= *(0x004409b8);
    edx |= *((rbx + 0xc));
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411930 */
#include <stdint.h>
 
int64_t fcn_00411930 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = *(0x0041c718);
    r8 = rsi;
    rax = rdi;
    esi = edx;
    esi &= 8;
    if (esi != 0) {
        edx = 0x38;
        fcn_0041561f (rdi, 0);
        rdx = *(r8);
        rsi = r8 + 0x20;
        *((rdi - 0x10)) = edx;
        rdx = *((r8 + 8));
        *((rdi - 0xc)) = edx;
        rdx = *((r8 + 0x10));
        *((rdi - 8)) = edx;
        rdx = *((r8 + 0x18));
        *((rdi - 4)) = edx;
        edx = 0x14;
        fcn_004154c0 (rdi + 0x10);
        rdx = *((r8 + 0x38));
        *((rax + 0x30)) = edx;
        rdx = *((r8 + 0x40));
        *((rax + 0x34)) = edx;
        return rax;
    }
    edx &= 0x30;
    edx = 0x38;
    if (edx != 0) {
        fcn_0041561f (rdi, rsi);
        edx = *(r8);
        rsi = r8 + 0x10;
        *((rdi - 0x10)) = edx;
        edx = *((r8 + 4));
        *((rdi - 0xc)) = edx;
        edx = *((r8 + 8));
        *((rdi - 8)) = edx;
        edx = *((r8 + 0xc));
        *((rdi - 4)) = edx;
        edx = 0x14;
        fcn_004154c0 (rdi + 0x10);
        edx = *((r8 + 0x24));
        *((rax + 0x30)) = edx;
        edx = *((r8 + 0x28));
        *((rax + 0x34)) = edx;
        return rax;
    }
    rsi = r8;
    fcn_004154c0 (rdi);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4154c0 */
#include <stdint.h>
 
void fcn_004154c0 (uint32_t arg3) {
    rdx = arg3;
    ecx = 0x20;
    if (rdx < rcx) {
        rcx = rdx;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410a90 */
#include <stdint.h>
 
uint64_t fcn_00410a90 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_60h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r13 = rsi;
    r12d = edi;
    if ((*(0x0041c718) & 4) == 0) {
        rax = fcn_00411870 (rbp - 0x60, rdx);
        rsi = r13;
        edi = r12d;
        rdx = rax;
        fcn_00412380 ();
        return rax;
    }
    fcn_00405040 (rdi, rsi, rdx);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411870 */
#include <stdint.h>
 
int64_t fcn_00411870 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = *(0x0041c718);
    r8 = rsi;
    esi = edx;
    esi &= 8;
    if (esi == 0) {
        edx &= 0x30;
        rax = r8;
        if (edx != 0) {
            edx = 0x2c;
            rax = rdi;
            fcn_0041561f (rdi, rsi);
            edx = *(r8);
            rsi = r8 + 0x10;
            *((rdi - 0x10)) = edx;
            edx = *((r8 + 4));
            *((rdi - 0xc)) = edx;
            edx = *((r8 + 8));
            *((rdi - 8)) = edx;
            edx = *((r8 + 0xc));
            *((rdi - 4)) = edx;
            edx = 0x14;
            fcn_004154c0 (rdi + 0x10);
            edx = *((r8 + 0x30));
            *((rax + 0x24)) = edx;
            edx = *((r8 + 0x34));
            *((rax + 0x28)) = edx;
        }
        return rax;
    }
    edx = 0x48;
    rax = rdi;
    fcn_0041561f (rdi, 0);
    ecx = *(r8);
    rsi = r8 + 0x10;
    edx = 0x14;
    *((rdi - 0x20)) = rcx;
    ecx = *((r8 + 4));
    *((rdi - 0x18)) = rcx;
    ecx = *((r8 + 8));
    *((rdi - 0x10)) = rcx;
    ecx = *((r8 + 0xc));
    *((rdi - 8)) = rcx;
    fcn_004154c0 (rdi + 0x20);
    ecx = *((r8 + 0x30));
    *((rax + 0x38)) = rcx;
    ecx = *((r8 + 0x34));
    *((rax + 0x40)) = rcx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405040 */
#include <stdint.h>
 
int64_t fcn_00405040 (int64_t arg3, int64_t arg2, int32_t argc) {
    int64_t var_48h;
    int64_t var_38h;
    int64_t var_34h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = argc;
    r13 = rdx;
    rdx = rbp - 0x38;
    rax = *(0x00447b50);
    *((rbp - 0x48)) = rsi;
    r15 = *(rax);
    rcx = *(rax);
    eax = void (*0x0041b120)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) (rbx, r12, r13, r14, r15);
    rdx = rbp - 0x34;
    ebx = eax;
    rax = *(0x00447b50);
    r14 = *((rax + 0x18));
    rcx = *((rax + 0x18));
    eax = void (*0x0041b120)() ();
    r12d = eax;
    eax = ebx;
    eax |= r12d;
    if (eax == 0) {
        goto label_1;
    }
    if (ebx != 0) {
        rax = *((rbp - 0x48));
        if (*(main) == rax) {
            goto label_2;
        }
label_0:
        eax = *((rbp - 0x38));
        ecx = *((r13 + 0xc));
        eax &= 0xfffffff8;
        rdx = rcx;
        esi = eax;
        esi |= 2;
        if ((*(0x004409a8) & rcx) != 0) {
            eax = esi;
        }
        esi = eax;
        esi |= 4;
        edx &= 8;
        rdx = *(0x004409b0);
        if (edx != 0) {
            eax = esi;
        }
        rdx |= *(0x004409b8);
        esi = eax;
        esi |= 1;
        if ((rdx & rcx) != 0) {
            eax = esi;
        }
        rcx = *(gs:0x60);
        edx = *((rcx + 0x118));
        r9d = eax;
        r9d |= 8;
        edx <<= 8;
        *((rbp - 0x38)) = r9d;
        edx = (int32_t) dx;
        edx |= *((rcx + 0x11c));
        if (edx > 0x9ff) {
            eax |= 0x208;
            *((rbp - 0x38)) = eax;
            r9d = eax;
        }
        edx = r9d;
        rcx = r15;
        uint64_t (*0x0041b1e8)() ();
    }
    if (r12d == 0) {
        goto label_3;
    }
    eax = *((rbp - 0x34));
    edx = *((rbp - 0x34));
    edx |= 3;
    *((rbp - 0x34)) = edx;
    if ((*((r13 + 4)) & 1) == 0) {
        eax |= 0xb;
        *((rbp - 0x34)) = eax;
        edx = eax;
    }
    rcx = *(gs:0x60);
    eax = *((rcx + 0x118));
    eax <<= 8;
    eax = (int32_t) ax;
    eax |= *((rcx + 0x11c));
    if (eax > 0x9ff) {
        edx |= 4;
        *((rbp - 0x34)) = edx;
    }
    rcx = r14;
    r12d = 0;
    uint64_t (*0x0041b1e8)() ();
    do {
label_3:
        rsp = rbp - 0x28;
        eax = r12d;
        return rax;
label_1:
        eax = fcn_00402bb4 ();
        r12d = eax;
    } while (1);
label_2:
    fcn_00405f38 (r15);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ed60 */
#include <stdint.h>
 
void fcn_0040ed60 (int64_t arg1) {
    rdi = arg1;
    edx = 0;
    esi = 0;
    return void (*0x40ede0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4114c0 */
#include <stdint.h>
 
uint64_t fcn_004114c0 (int64_t arg3, int64_t arg2, uint32_t arg1) {
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_54h;
    int64_t var_50h;
    int64_t var_4ch;
    int64_t var_48h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
label_0:
        fcn_00402b21 ();
        goto label_1;
        eax = rdi - 1;
    } while (eax > 0x7e);
    r8d = edi;
    if (edi == 9) {
        goto label_0;
    }
    r14 = (int64_t) edi;
    if (r14 == *(0x00440980)) {
        goto label_0;
    }
    r12 = rsi;
    rbx = rdx;
    if (rsi == 0) {
        goto label_11;
    }
    rax = *(rsi);
    if (rax > 7) {
        if (rax <= 0x400007) {
            goto label_12;
        }
        edx = 0x803ffffe;
        if (rax > rdx) {
            goto label_12;
        }
        rax -= segment.__TEXT;
    }
    r13d = eax;
    eax = *(0x0041c718);
    if ((al & 4) == 0) {
        edx = 0x30;
        rsi = r12;
        r15d = eax;
        al = fcn_004154c0 (rbp - 0x60);
        if ((al & 8) == 0) {
            goto label_13;
        }
        *((rbp - 0x50)) = 0x411b00;
        *((rbp - 0x60)) = 0x411b00;
        if (eax == 0x10) {
            goto label_14;
        }
        if (eax > 0x10) {
            goto label_15;
        }
        if (eax == 8) {
label_2:
            rax = *((rbp - 0x50));
            rdx = *((rbp - 0x58));
            r15d = 8;
            *((rbp - 0x58)) = rax;
            eax = *((rbp - 0x48));
            *((rbp - 0x4c)) = edx;
            *((rbp - 0x50)) = eax;
        }
label_7:
        rsi = rdi;
label_4:
        rcx = rbx;
label_3:
        rdx = rbx;
        edi = r8d;
        eax = fcn_00412420 ();
        if (eax == 0xffffffff) {
            goto label_1;
        }
        if (rbx == 0) {
            goto label_16;
        }
        if (r15d == 0x10) {
            goto label_17;
        }
        if (r15d > 0x10) {
            goto label_18;
        }
        if (r15d == 1) {
            goto label_19;
        }
        if (r15d != 8) {
            goto label_6;
        }
        ecx = *((rbx + 8));
        xmm0 = 0;
        rdx = *((rbx + 0xc));
        *((rbp - 0x70)) = xmm0;
        *((rbp - 0x70)) = ecx;
        __asm ("movdqa xmm3, xmmword [rbp - 0x70]");
        *((rbx + 8)) = rdx;
        __asm ("movups xmmword [rbx + 0x18], xmm3");
        goto label_6;
    }
    eax = 0;
    while (rdx != 0) {
        xmm0 = 0;
        eax = 0;
        __asm ("movups xmmword [rbx], xmm0");
        __asm ("movups xmmword [rbx + 0x10], xmm0");
        __asm ("movups xmmword [rbx + 0x20], xmm0");
label_6:
        rdx = *((r14*4 + 0x447d60));
        rsi = rdx + segment___TEXT;
        if (edx > 7) {
            rdx = rsi;
        }
        *(rbx) = rdx;
label_16:
        if (r12 != 0) {
            *((r14*4 + 0x447d60)) = r13d;
        }
label_1:
        return rax;
label_11:
        r15d = *(0x0041c718);
        r13d = *(0x0041c718);
        r13d &= 4;
        if (r13d == 0) {
            goto label_20;
        }
        r13d = 0;
        eax = 0;
    }
    goto label_1;
label_13:
    if ((al & 1) != 0) {
        rdx = *((rbp - 0x58));
        rcx = *(main);
        if ((rdx & rcx) == 0) {
            goto label_21;
        }
    }
label_10:
    if (r13d > 7) {
        *((rbp - 0x60)) = fcn.00411d3d;
    }
    if (eax == 0x10) {
        goto label_14;
    }
    if (eax > 0x10) {
        goto label_22;
    }
    if (eax == 1) {
        goto label_8;
    }
    if (eax == 8) {
        goto label_2;
    }
label_8:
    rsi = rdi;
label_5:
    ecx = 8;
    goto label_3;
label_20:
    esi = 0;
    if ((r15b & 8) != 0) {
        goto label_4;
    }
    goto label_5;
label_12:
    fcn_00402af7 ();
    return rax;
label_18:
    if (r15d != 0x20) {
        goto label_6;
    }
    __asm ("movdqu xmm0, xmmword [rbx + 0xc]");
    ecx = *((rbx + 8));
    __asm ("movups xmmword [rbx + 0x18], xmm0");
    *((rbx + 8)) = rcx;
    goto label_6;
label_15:
    eax = 0x411b00;
    if (r15d != 0x20) {
        goto label_7;
    }
label_9:
    __asm ("movdqu xmm1, xmmword [rbp - 0x48]");
    *((rbp - 0x60)) = rax;
    __asm ("movups xmmword [rbp - 0x54], xmm1");
    goto label_8;
label_22:
    if (eax != 0x20) {
        goto label_8;
    }
    rax = *((rbp - 0x60));
    goto label_9;
label_14:
    rax = *((rbp - 0x58));
    *((rbp - 0x54)) = eax;
    eax = *((rbp - 0x48));
    *((rbp - 0x58)) = eax;
    goto label_8;
label_21:
    rdx |= rcx;
    *((rbp - 0x50)) = 0x4147d0;
    *((rbp - 0x58)) = rdx;
    goto label_10;
label_17:
    ecx = *((rbx + 8));
    xmm0 = 0;
    rdx = *((rbx + 0xc));
    *((rbp - 0x70)) = xmm0;
    *((rbp - 0x70)) = ecx;
    __asm ("movdqa xmm4, xmmword [rbp - 0x70]");
    *((rbx + 8)) = rdx;
    __asm ("movups xmmword [rbx + 0x18], xmm4");
    goto label_6;
label_19:
    rdx = *((rbx + 0x18));
    *((rbp - 0x68)) = 0;
    *((rbp - 0x70)) = rdx;
    __asm ("movdqa xmm2, xmmword [rbp - 0x70]");
    __asm ("movups xmmword [rbx + 0x18], xmm2");
    goto label_6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4078f0 */
#include <stdint.h>
 
int64_t fcn_004078f0 (void) {
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    signed int64_t var_58h;
    uint32_t var_50h;
    int64_t var_48h;
    uint32_t var_40h;
    signed int64_t var_38h;
    *(0x004463e0) = 0;
    *(0x00446488) = main;
    fcn_004068a0 (0x417048, 3);
    rax = *(0x00446440);
    *((rbp - 0x50)) = rax;
    if (rax != 0) {
        goto label_11;
    }
    esi = 1;
    edi -= edi;
    edi &= 0xffffffe9;
    edi += 0xff;
    fcn_00407850 (rdi);
    edi -= edi;
    esi = 0;
    edi &= 0x17;
    edi += 0xe8;
    fcn_00407850 (rdi);
    rax = *(0x00446478);
    r15 = *(0x00446480);
    r13 = *(0x00446470);
    r12 = *(0x00446468);
    *((rbp - 0x40)) = rax;
    if (r15 >= rax) {
        goto label_4;
    }
label_2:
    if (r13 >= r12) {
        goto label_12;
    }
    rax = r15;
    ebx = r15*8;
    r14 = r13;
    rax >>= 3;
    ebx &= 0x38;
    *((rbp - 0x38)) = rax;
    while (r15 < 0) {
label_0:
        fcn_004068a0 (0x418f76, 1);
label_3:
        r14++;
        if (r14 == r12) {
            goto label_12;
        }
label_1:
    }
    if (*(0x00446450) <= r15) {
        goto label_0;
    }
    if (r14 < 0) {
        goto label_0;
    }
    rdx = *(0x00446448);
    if (rdx <= r14) {
        goto label_0;
    }
    rdx >>= 3;
    rdx *= *((rbp - 0x38));
    rsi = r14;
    rdi = *(0x00446408);
    rsi >>= 3;
    rdx += rsi;
    esi = r14d;
    esi &= 7;
    rdx = *((rdi + rdx*8));
    esi |= ebx;
    if (((rdx >> rsi) & 1) >= 0) {
        goto label_13;
    }
    r14++;
    fcn_004068a0 (0x41704c, 3);
    if (r14 != r12) {
        goto label_1;
    }
label_12:
    r15++;
    if (r15 != *((rbp - 0x40))) {
        goto label_2;
    }
label_4:
    ebx = 0;
    fcn_004068a0 (0x417054, 6);
    fcn_00406d30 (rdi, rsi);
    eax = fcn_0041571a (0x446260, rsi, rdx);
    fcn_004068a0 (rdi, eax);
    rax = fcn_0040a570 (0x446260);
    r12 = *(0x00446458);
    rax = (int64_t) eax;
    r12 -= rax;
    if (r12 <= 0) {
        goto label_14;
    }
    do {
        rbx++;
        fcn_004068a0 (0x417013, 1);
    } while (r12 != rbx);
label_14:
    fcn_004068a0 (0x41705b, 4);
    edx = *(0x004463e0);
    rsi = *(0x004463e8);
    edi = *(0x0044649c);
    void (*0x411a10)() ();
label_13:
    fcn_004068a0 (0x417013, 1);
    goto label_3;
label_11:
    rbx = *(0x00446478);
    r12 = *(0x00446480);
    rsi = *(0x00446470);
    *((rbp - 0x58)) = rbx;
    rdx = rbx + 0xf;
    rbx = *(main);
    rax = r12;
    rdx &= 0xfffffffffffffff0;
    rax &= 0xfffffffffffffff0;
    rsi &= 0xfffffffffffffff0;
    r11 = rbx + 0xf;
    r13 = rdx;
    *((rbp - 0x48)) = rsi;
    r14 = rax;
    r11 &= 0xfffffffffffffff0;
    r13 -= rax;
    *((rbp - 0x60)) = rax;
    rbx = r11;
    rdi = r13;
    *((rbp - 0x38)) = rdx;
    r15 = r11;
    rbx -= rsi;
    esi = 1;
    rdi *= rbx;
    rax = fcn_0040b6fb ();
    *((rbp - 0x40)) = rax;
    if (rax == 0) {
        goto label_4;
    }
    eax = 0;
    rdx = *((rbp - 0x38));
    __asm ("cmovs r14, rax");
    if (*(0x00446450) <= rdx) {
        rdx = *(0x00446450);
    }
    rdi = rdx;
    if (r14 >= rdx) {
        goto label_15;
    }
    rdx = *(0x00446448);
    r11 = r15;
    r8 = r14;
    *((rbp - 0x68)) = r13;
    *((rbp - 0x70)) = r12;
    r12 = rdi;
    r15 = *(0x00446408);
    if (r15 > rdx) {
        r11 = rdx;
    }
    rdx >>= 3;
    *((rbp - 0x38)) = rdx;
    rdx = *((rbp - 0x48));
    __asm ("cmovns rax, rdx");
    r8 -= *((rbp - 0x60));
    r8 *= rbx;
    r9 = rax;
    rax = rbx*8;
    r13 = rax;
    r8 -= rdx;
    r8 += *((rbp - 0x40));
label_6:
    if (r11 <= r9) {
        goto label_16;
    }
    r10 = r14;
    rsi = r9;
    r10 >>= 3;
    r10 *= *((rbp - 0x38));
label_5:
    rax = rsi;
    edi = 8;
    rax >>= 3;
    rax += r10;
    rdx = *((r15 + rax*8));
    rax = rsi + r8;
    do {
        ecx = edx;
        ecx &= 1;
        ecx = -ecx;
        *(rax) = cl;
        rcx = rdx;
        rcx >>= 1;
        ecx &= 1;
        ecx = -ecx;
        *((rax + 1)) = cl;
        rcx = rdx;
        rcx >>= 2;
        ecx &= 1;
        ecx = -ecx;
        *((rax + 2)) = cl;
        rcx = rdx;
        rcx >>= 3;
        ecx &= 1;
        ecx = -ecx;
        *((rax + 3)) = cl;
        rcx = rdx;
        rcx >>= 4;
        ecx &= 1;
        ecx = -ecx;
        *((rax + 4)) = cl;
        rcx = rdx;
        rcx >>= 5;
        ecx &= 1;
        ecx = -ecx;
        *((rax + 5)) = cl;
        rcx = rdx;
        rcx >>= 6;
        ecx &= 1;
        ecx = -ecx;
        *((rax + 6)) = cl;
        ecx = edx;
        rdx >>= 8;
        cl >>= 7;
        *((rax + 7)) = cl;
        rax += rbx;
        rdi--;
    } while (rdi != 0);
    rsi += 8;
    if (rsi < r11) {
        goto label_5;
    }
label_16:
    r14 += 8;
    r8 += r13;
    if (r14 < r12) {
        goto label_6;
    }
    r13 = *((rbp - 0x68));
    r12 = *((rbp - 0x70));
label_15:
    r9d = 0;
    r15 = rbx;
    r14 = r13;
    if (*((rbp - 0x50)) <= 0) {
        goto label_17;
    }
    r12 = *((rbp - 0x40));
    do {
        r8 = r15;
        *((rbp - 0x38)) = r9;
        fcn_00408250 (r13, rbx, r12, r14);
        r14 >>= 1;
        r15 >>= 1;
        fcn_004082b0 (r13, rbx, r12, r14, r15, r9);
        r9 = *((rbp - 0x38));
        r9++;
    } while (r9 < *(0x00446440));
    rax = *(0x00446478);
    r12 = *(0x00446480);
    *((rbp - 0x58)) = rax;
label_17:
    r13d = 1;
    if (r12 >= *((rbp - 0x58))) {
        goto label_18;
    }
    *((rbp - 0x50)) = rbx;
    r15 = *((rbp - 0x60));
label_9:
    rbx = *(0x00446470);
    if (rbx >= *(0x00446468)) {
        goto label_19;
    }
    rax = r12;
    r14 = r12 + 1;
    rax -= r15;
    r14 -= r15;
    *((rbp - 0x38)) = rax;
    while (r12 < 0) {
label_7:
        esi = 1;
        edi -= edi;
        edi &= 0xffffffe9;
        edi += 0xff;
        fcn_00407850 (rdi);
        edi -= edi;
        esi = 0;
        edi &= 0x17;
        edi += 0xe8;
        fcn_00407850 (rdi);
        fcn_004068a0 (0x418f76, 1);
label_8:
        rcx = *(0x00446440);
        rax = r13;
        rax <<= cl;
        esi = ecx;
        rbx += rax;
        if (rbx >= *(0x00446468)) {
            goto label_20;
        }
    }
    if (*(0x00446450) <= r12) {
        goto label_7;
    }
    if (rbx < 0) {
        goto label_7;
    }
    if (*(0x00446448) <= rbx) {
        goto label_7;
    }
    rcx = *(0x00446440);
    rdi = *((rbp - 0x38));
    rsi = rbx;
    rax = *((rbp - 0x50));
    rsi -= *((rbp - 0x48));
    rdi >>= cl;
    rsi >>= cl;
    rsi += *((rbp - 0x40));
    rdi *= rax;
    r8d = *((rsi + rdi));
    rdi = r13;
    rdi <<= cl;
    rdi += r12;
    if (rdi >= *(0x00446478)) {
        goto label_21;
    }
    rdx = r14;
    edi = r8d;
    rdx >>= cl;
    rcx = rdx;
    rcx *= rax;
    ecx = *((rsi + rcx));
    edi |= ecx;
label_10:
    esi = *(0x004464a4);
    if (dil == 0) {
        goto label_22;
    }
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, r8d");
    __asm ("mulsd xmm0, qword [0x00417a50]");
    __asm ("mulsd xmm0, qword [0x00417a58]");
    __asm ("addsd xmm0, qword [0x00417a60]");
    __asm ("cvttsd2si edi, xmm0");
    edi = (int32_t) dil;
    if (sil != 0) {
        esi = 0x1e7;
        esi -= edi;
        edi = (int32_t) sil;
    }
    esi = 1;
    *((rbp - 0x58)) = cl;
    fcn_00407850 (rdi);
    ecx = *((rbp - 0x58));
    xmm0 = 0;
    __asm ("cvtsi2sd xmm0, ecx");
    __asm ("mulsd xmm0, qword [0x00417a50]");
    __asm ("mulsd xmm0, qword [0x00417a58]");
    __asm ("addsd xmm0, qword [0x00417a60]");
    __asm ("cvttsd2si edi, xmm0");
    edi = (int32_t) dil;
    if (*(0x004464a4) != 0) {
        ecx = 0x1e7;
        ecx -= edi;
        edi = (int32_t) cl;
    }
    esi = 0;
    fcn_00407850 (rdi);
    fcn_004068a0 (0x417050, 3);
    goto label_8;
label_19:
    esi = *(0x00446440);
label_20:
    eax = 2;
    ecx = esi;
    rax <<= cl;
    r12 += rax;
    if (r12 < *(0x00446478)) {
        goto label_9;
    }
label_18:
    rdi = *((rbp - 0x40));
    fcn_0040b701 ();
    goto label_4;
label_22:
    esi = 1;
    edi -= edi;
    edi &= 0xffffffe9;
    edi += 0xff;
    fcn_00407850 (rdi);
    edi -= edi;
    esi = 0;
    edi &= 0x17;
    edi += 0xe8;
    fcn_00407850 (rdi);
    fcn_004068a0 (0x417013, 1);
    goto label_8;
label_21:
    edi = r8d;
    ecx = 0;
    goto label_10;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410f90 */
#include <stdint.h>
 
uint64_t fcn_00410f90 (uint32_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_31h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    while (rdx <= 2) {
label_0:
        fcn_00402b8a ();
label_2:
        return;
        *(rsi) = 0;
        rbx = rsi;
        r12 = rdx;
    }
    edx = 1;
    r13d = edi;
    rax = fcn_00410f70 (rdi, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    eax = *((rbp - 0x31));
    *((rbx + 1)) = 0;
    r8 = r12 - 2;
    r14d = 1;
    *(rbx) = al;
label_6:
    r15d = r14d;
    if (al < 0) {
        goto label_8;
    }
    if (al != 0x1b) {
        goto label_9;
    }
    eax = r15 + 2;
    rax = (int64_t) eax;
    if (r12 <= rax) {
        goto label_0;
    }
    edx = 1;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    edx = *((rbp - 0x31));
    rax = (int64_t) r15d;
    r15d++;
    r15 = (int64_t) r15d;
    *((rbx + rax)) = dl;
    r14 = (int64_t) r15d;
    *((rbx + r15)) = 0;
    if (dl > 0x4f) {
        goto label_10;
    }
label_1:
    if (dl > 0x4d) {
        goto label_11;
    }
    edx -= 0x20;
    if (dl > 0xf) {
        goto label_12;
    }
    rax = r15 + 2;
    if (r12 <= rax) {
        goto label_0;
    }
    edx = 1;
    r15++;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    edx = *((rbp - 0x31));
    r14 = (int64_t) r15d;
    *((rbx + r15)) = 0;
    *((rbx + r15 - 1)) = dl;
    if (dl <= 0x4f) {
        goto label_1;
    }
label_10:
    if (dl != 0x5b) {
        goto label_12;
    }
    eax = r14 + 2;
    rax = (int64_t) eax;
    if (r12 <= rax) {
        goto label_0;
    }
    edx = 1;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    edx = *((rbp - 0x31));
    rax = (int64_t) r14d;
    r14d++;
    r14 = (int64_t) r14d;
    *((rbx + rax)) = dl;
    *((rbx + r14)) = 0;
    goto label_13;
label_3:
    edx = *((rbp - 0x31));
    *((rbx + r14)) = 0;
    *((rbx + r14 - 1)) = dl;
label_13:
    edx -= 0x30;
    rax = (int64_t) r14d;
    if (edx > 0xf) {
        goto label_2;
    }
    rax = r14 + 2;
    if (r12 <= rax) {
        goto label_0;
    }
    edx = 1;
    r14++;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax == 1) {
        goto label_3;
    }
label_4:
    rax = main;
    goto label_2;
label_8:
    r9d = r14 + 2;
    rcx = r14 + 2;
    if (al <= 0xbf) {
        goto label_14;
    }
    if (al > 0xfb) {
        goto label_15;
    }
    eax = ~eax;
    r14d = 6;
    eax = (int32_t) al;
    __asm ("bsr eax, eax");
    r14d -= eax;
    if (r12 <= rcx) {
        goto label_0;
    }
    edx = 1;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    edx = *((rbp - 0x31));
    r9d = r15 + 1;
    rax = (int64_t) r15d;
    r15 = (int64_t) r9d;
    *((rbx + rax)) = dl;
    *((rbx + r15)) = 0;
label_7:
    r14d--;
    r14 += r15;
    goto label_16;
label_5:
    eax = *((rbp - 0x31));
    *((rbx + r15)) = 0;
    *((rbx + r15 - 1)) = al;
label_16:
    rax = (int64_t) r15d;
    if (r14 == r15) {
        goto label_2;
    }
    rax = r15 + 2;
    if (r12 <= rax) {
        goto label_0;
    }
    edx = 1;
    r15++;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax == 1) {
        goto label_5;
    }
    goto label_4;
label_14:
    *((rbp - 0x48)) = r8;
    if (r8 == r14) {
        goto label_0;
    }
    edx = 1;
    r14++;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    eax = *((rbp - 0x31));
    r8 = *((rbp - 0x48));
    *((rbx + r14)) = 0;
    *((rbx + r14 - 1)) = al;
    goto label_6;
label_11:
    eax = r14 + 2;
    rax = (int64_t) eax;
    if (r12 <= rax) {
        goto label_0;
    }
    edx = 1;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    edx = *((rbp - 0x31));
    eax = r14 + 1;
    rax = (int64_t) eax;
    *((rbx + r14)) = dl;
    *((rbx + rax)) = 0;
    return rax;
label_12:
    rax = (int64_t) r14d;
    return rax;
label_15:
    *((rbp - 0x50)) = r9d;
    *((rbp - 0x48)) = rcx;
    if (r12 <= rcx) {
        goto label_0;
    }
    edx = 1;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    edx = *((rbp - 0x31));
    rax = (int64_t) r15d;
    rcx = *((rbp - 0x48));
    r9d = *((rbp - 0x50));
    *((rbx + rax)) = dl;
    eax = r15 + 1;
    r15d += 3;
    rax = (int64_t) eax;
    r15 = (int64_t) r15d;
    r14 = rbx + rax;
    *(r14) = 0;
    if (r12 <= r15) {
        goto label_0;
    }
    edx = 1;
    *((rbp - 0x50)) = rcx;
    *((rbp - 0x48)) = r9d;
    rax = fcn_00410f70 (r13d, rbp - 0x31);
    if (rax != 1) {
        goto label_4;
    }
    eax = *((rbp - 0x31));
    rcx = *((rbp - 0x50));
    r15 = *((rbp - 0x48));
    *(r14) = al;
    r14d = 4;
    *((rbx + rcx)) = 0;
    goto label_7;
label_9:
    rax = (int64_t) r14d;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x408230 */
#include <stdint.h>
 
int64_t fcn_00408230 (int64_t arg3, uint32_t arg2, int64_t arg1) {
    int64_t var_454h;
    uint32_t var_450h;
    uint32_t var_448h;
    int64_t var_440h;
    uint32_t var_438h;
    int64_t var_430h;
    int64_t var_428h;
    int64_t var_426h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_1:
    *((rbp - main)) = rdi;
    *((rbp - main)) = rsi;
    *((rbp - 0x454)) = edx;
    if (rsi > 0x40) {
        goto label_2;
    }
    if (rsi == 0) {
        goto label_3;
    }
    rax = *((rbp - main));
    ebx = *(main);
    r14 = main;
    bx |= *(main);
    r13 = *(main);
    r15 = rax + 4;
    rax = *((rbp - main));
    bx |= *(main);
    rax <<= 3;
    *((rbp - main)) = rax;
    rax += r15;
    *((rbp - main)) = rax;
    while (al != 0) {
        rdx = (int64_t) r12d;
        r15 += 8;
        r14 += 0x10;
        rax = rdx * 3;
        rax = *((r13 + rax*8));
        *((r14 - 0x18)) = rax;
        eax = *((r15 - 8));
        eax &= ebx;
        *((r14 - 0x10)) = ax;
        if (r15 == *((rbp - main))) {
            goto label_4;
        }
        r12d = *((r15 - 4));
        al = fcn_00410c50 (r12d, 2);
    }
    fcn_00402acd ();
label_0:
    return rax;
label_4:
    eax = fcn_004033bc (main, *((rbp - 0x450)), *((rbp - 0x454)), rcx);
    edx = 0;
    if (eax == 0xffffffff) {
        goto label_5;
    }
    do {
        ecx = *((rbp + rdx*2 - 0x426));
        rsi = *((rbp - main));
        *((rsi + rdx + 6)) = cx;
        rdx += 8;
    } while (rdx != *((rbp - main)));
    goto label_0;
label_3:
    eax = fcn_004033bc (main, 0, *((rbp - 0x454)), rcx);
    if (eax != 0xffffffff) {
        goto label_0;
    }
label_5:
    fcn_00403070 ();
    goto label_0;
label_2:
    fcn_00402b21 ();
    goto label_0;
    if ((*(0x0041c718) & 4) == 0) {
    } else {
        goto label_1;
    }
    rax = 0xfc00d120e60007;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4033bc */
#include <stdint.h>
 
int64_t fcn_004033bc (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b308);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x403070 */
#include <stdint.h>
 
uint64_t fcn_00403070 (void) {
    eax = fcn_004033ac ();
    eax = fcn_004031c0 (eax);
    *(0x00448020) = eax;
    rax = main;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4033ac */
#include <stdint.h>
 
void fcn_004033ac (void) {
    uint64_t (*0x0041b300)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4031c0 */
#include <stdint.h>
 
int32_t fcn_004031c0 (uint32_t arg1) {
    rdi = arg1;
    if (edi <= 0xea) {
        if (edi == 0) {
            goto label_0;
        }
        if (edi > 0xea) {
            goto label_0;
        }
        eax = edi;
        /* switch table (235 cases) at 0x417ae0 */
    }
    if (edi <= 0x5ac) {
        if (edi > 0x5a9) {
            goto label_1;
        }
        if (edi > 0x4e8) {
            goto label_0;
        }
        if (edi <= 0x48f) {
            goto label_2;
        }
        eax = rdi - 0x490;
        if (eax > 0x58) {
            goto label_0;
        }
        /* switch table (89 cases) at 0x418238 */
    }
    if (edi == 0x271e) {
        goto label_3;
    }
    if (edi <= 0x271e) {
        goto label_4;
    }
    if (edi > 0x2775) {
        goto label_0;
    }
    if (edi <= 0x2749) {
        goto label_5;
    }
    eax = rdi - 0x274a;
    if (eax > 0x2b) {
        goto label_0;
    }
    /* switch table (44 cases) at 0x418500 */
label_2:
    eax = *(0x00440810);
    if (edi == 0x3e5) {
        goto label_6;
    }
    if (edi <= 0x3e5) {
        goto label_7;
    }
    eax = *(0x00440800);
    if (edi != 0x3e6) {
        goto label_0;
    }
    do {
label_6:
        return eax;
label_7:
        if (edi == 0x1e7) {
            goto label_8;
        }
        if (edi != 0x3e3) {
            goto label_0;
        }
        eax = *(0x00440818);
        return eax;
label_5:
        eax = *(0x00440820);
    } while (edi == 0x2726);
    if (edi != 0x2734) {
        goto label_0;
    }
    eax = *(0x004407d8);
    return eax;
label_4:
    if (edi == 0x6f8) {
        goto label_9;
    }
    if (edi > 0x6f8) {
        if (edi == 0x718) {
            goto label_1;
        }
        if (edi != 0x271d) {
            goto label_0;
        }
        eax = *(0x004407b0);
        return eax;
    }
    if (edi == 0x5ae) {
        goto label_1;
    }
    while (edi == 0x5ad) {
label_1:
        eax = *(0x00440868);
        return eax;
    }
label_0:
    eax = edi;
    return eax;
    eax = *(0x00440860);
    return eax;
    eax = *(0x00440850);
    return eax;
    eax = *(0x004408a0);
    return eax;
    eax = *(0x004407e8);
    return eax;
    eax = *(0x00440858);
    return eax;
    eax = *(0x004407f0);
    return eax;
    eax = *(0x00440870);
    return eax;
    eax = *(0x00440808);
    return eax;
label_8:
    eax = *(0x004407c0);
    return eax;
label_3:
    eax = *(0x00440800);
    return eax;
label_9:
    eax = *(0x00440840);
    return eax;
    eax = *(0x004407c8);
    return eax;
    eax = *(0x00440828);
    return eax;
    eax = *(0x004407f8);
    return eax;
    eax = *(0x004407b8);
    return eax;
    eax = *(0x00440888);
    return eax;
    eax = *(0x004408a8);
    return eax;
    eax = *(0x00440880);
    return eax;
    eax = *(0x00440820);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b21 */
#include <stdint.h>
 
int32_t fcn_00402b21 (void) {
    eax = *(0x00440820);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f9e */
#include <stdint.h>
 
void fcn_00405f9e (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b180)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c92 */
#include <stdint.h>
 
int64_t fcn_00402c92 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b290);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402cd5 */
#include <stdint.h>
 
void fcn_00402cd5 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b2b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402bff */
#include <stdint.h>
 
int64_t fcn_00402bff (int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h) {
    rax = *(0x0041b248);
    return void (*0x406064)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406064 */
#include <stdint.h>
 
void loc_00406064 (int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, int64_t arg_28h, int64_t arg_30h, int64_t arg_38h, int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c72 */
#include <stdint.h>
 
int64_t fcn_00402c72 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b280);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402bdf */
#include <stdint.h>
 
int64_t fcn_00402bdf (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b238);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d3e */
#include <stdint.h>
 
int64_t fcn_00402d3e (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b2e0);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d4e */
#include <stdint.h>
 
void fcn_00402d4e (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b2e8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c1f */
#include <stdint.h>
 
void fcn_00402c1f (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b258)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c62 */
#include <stdint.h>
 
int64_t fcn_00402c62 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b278);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406a10 */
#include <stdint.h>
 
uint64_t fcn_00406a10 (void) {
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    *(0x00446498) = 0;
    rax = fcn_0040aad0 (rdi, 0x417015);
    rdi = rax;
    r12 = rax;
    eax = fcn_00406950 (rdi, rsi, rdx);
    if (eax != 0x78) {
        goto label_0;
    }
    eax = fcn_00406950 (r12, rsi, rdx);
    if (eax != 0x20) {
        goto label_0;
    }
    eax = fcn_00406950 (r12, rsi, rdx);
    if (eax != 0x3d) {
        goto label_0;
    }
    eax = fcn_00406950 (r12, rsi, rdx);
    if (eax != 0x20) {
        goto label_0;
    }
    ebx = 0;
    while (eax != 0xffffffff) {
        eax -= 0x30;
        if (eax > 9) {
            goto label_8;
        }
        rax = rbx * 5;
        rbx = rdx + rax*2 - 0x30;
        eax = fcn_00406950 (r12, rsi, rdx);
        rdx = (int64_t) eax;
    }
label_0:
    fcn_0040a890 (r12);
    rdx = *(0x00446400);
    rax = *(0x00446408);
    *(0x00446408) = rdx;
    *(0x00446400) = rax;
    eax = 0xffffffff;
label_7:
    return rax;
    do {
        eax -= 0x30;
        if (eax <= 9) {
            goto label_9;
        }
label_8:
        eax = fcn_00406950 (r12, rsi, rdx);
        rdx = (int64_t) eax;
    } while (eax != 0xffffffff);
    goto label_0;
label_9:
    r13d = 0;
    while (eax != 0xffffffff) {
        eax -= 0x30;
        if (eax > 9) {
            goto label_10;
        }
        rax = r13 * 5;
        r13 = rdx + rax*2 - 0x30;
        eax = fcn_00406950 (r12, rsi, rdx);
        rdx = (int64_t) eax;
    }
    goto label_0;
label_1:
    eax = fcn_00406860 (r12, rsi, rdx);
    rdx = (int64_t) eax;
    if (eax == 0xffffffff) {
        goto label_0;
    }
label_10:
    if (rdx != 0xa) {
        goto label_1;
    }
    rax = *(0x00446450);
    if (rax < r13) {
        goto label_0;
    }
    r8 = *(0x00446448);
    if (r8 < rbx) {
        goto label_0;
    }
    rdx = *(0x00446408);
    *((rbp - 0x50)) = rbx;
    r15d = 0;
    r14d = 0;
    *(0x00446400) = rdx;
    rdx = rax;
    rdx *= r8;
    *(0x00446408) = rdi;
    rdx >>= 3;
    rax = fcn_0041561f (*(0x00446400), 0);
    rdx = rax;
    rdx >>= 0x3f;
    rdx += rax;
    rax = r13;
    rax >>= 0x3f;
    rdx >>= 1;
    rax += r13;
    rax >>= 1;
    rdx -= rax;
    rax = rbx;
    *((rbp - 0x40)) = rdx;
    rax >>= 0x3f;
    rdx >>= 0x3f;
    rax += rbx;
    rdx += r8;
    rax >>= 1;
    rdx >>= 1;
    rdx -= rax;
    *((rbp - 0x48)) = rdx;
label_2:
    eax = fcn_00406950 (r12, rsi, r8);
    rdx = (int64_t) eax;
    rbx = rdx;
    if (edx == 0xffffffff) {
        goto label_0;
    }
    *((rbp - 0x38)) = rdx;
    if (rdx == 0x21) {
        goto label_11;
    }
    eax = fcn_004148d0 (edx, rsi);
    if (eax != 0) {
        goto label_2;
    }
    ecx = rbx - 0x30;
    rdx = *((rbp - 0x38));
    ebx = 1;
    if (ecx <= 9) {
        goto label_12;
    }
label_5:
    if (rdx == 0x24) {
        r14++;
        r15d = 0;
        eax = 0;
        if (r13 == r14) {
            r14 = rax;
        }
        goto label_2;
    }
    if (rdx == 0x62) {
        goto label_13;
    }
    if (rdx != 0x6f) {
        goto label_0;
    }
label_13:
    if (rbx <= 0) {
        goto label_2;
    }
    r10 = *(0x00446448);
    r9 = *(0x00446408);
    eax = 0;
    r8 = *((rbp - 0x50));
    r10 >>= 3;
    goto label_14;
label_3:
    rsi = r15;
    r15++;
label_4:
    if (rdx == 0x6f) {
        rcx = *((rbp - 0x40));
        rsi += *((rbp - 0x48));
        rcx += r14;
        rdi = rcx;
        rcx <<= 3;
        rdi >>= 3;
        ecx &= 0x38;
        rdi *= r10;
        r11 = rdi;
        rdi = rsi;
        esi &= 7;
        rdi >>= 3;
        ecx |= esi;
        esi = 1;
        rdi += r11;
        rsi <<= cl;
        *((r9 + rdi*8)) |= rsi;
    }
    rax++;
    if (rbx == rax) {
        goto label_2;
    }
label_14:
    if (r8 > r15) {
        goto label_3;
    }
    r14++;
    esi = 0;
    ecx = 0;
    r15d = 1;
    if (r13 == r14) {
        r14 = rcx;
    }
    goto label_4;
label_12:
    rbx = rdx - 0x30;
    goto label_15;
label_6:
    eax -= 0x30;
    if (eax > 9) {
        goto label_5;
    }
    rax = rbx * 5;
    rbx = rdx + rax*2 - 0x30;
label_15:
    eax = fcn_00406950 (r12, rsi, rdx);
    rdx = (int64_t) eax;
    if (eax != 0xffffffff) {
        goto label_6;
    }
    goto label_0;
label_11:
    eax = fcn_0040a890 (r12);
    *(0x004464a0) = 0;
    eax = 0;
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ad00 */
#include <stdint.h>
 
uint64_t fcn_0040ad00 (int64_t arg_10h, int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg7, int64_t arg8, int64_t arg9, int64_t arg10, int64_t arg11) {
    int64_t var_c8h;
    int64_t var_c4h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_b0h;
    int64_t var_a0h;
    int64_t var_98h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_10h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    *((rbp - 0xa0)) = rdx;
    *((rbp - 0x98)) = rcx;
    *((rbp - 0x90)) = r8;
    *((rbp - 0x88)) = r9;
    if (al != 0) {
        *((rbp - 0x80)) = xmm0;
        *((rbp - 0x70)) = xmm1;
        *((rbp - 0x60)) = xmm2;
        *((rbp - 0x50)) = xmm3;
        *((rbp - 0x40)) = xmm4;
        *((rbp - 0x30)) = xmm5;
        *((rbp - 0x20)) = xmm6;
        *((rbp - 0x10)) = xmm7;
    }
    rax = rbp + 0x10;
    *((rbp - 0xc8)) = 0x10;
    *((rbp - 0xc0)) = rax;
    rax = rbp - 0xb0;
    *((rbp - 0xc4)) = 0x30;
    *((rbp - 0xb8)) = rax;
    fcn_0040ae80 (rdi, rsi, rbp - 0xc8);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ae80 */
#include <stdint.h>
 
uint32_t fcn_0040ae80 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_10h;
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x10)) = rdi;
    *((rbp - 8)) = 0;
    eax = fcn_00413260 (0x40ae70, rbp - 0x10, rsi, rdx);
    if (eax != 0xffffffff) {
        eax = *((rbp - 8));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x413260 */
#include <stdint.h>
 
uint64_t fcn_00413260 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_4ch;
    int64_t var_48h;
    int64_t var_44h;
    int64_t var_34h;
    int64_t var_28h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    ebx = 0x40116a;
    r14d = *(0x00448020);
    if (rdi != 0) {
        rbx = rdi;
    }
    rdi = *(rdx);
    if (dil == 0) {
        goto label_37;
    }
    r12 = rsi;
    r15 = rdx;
    r13 = rcx;
    while (dil != 0x25) {
        rsi = r12;
        eax = void (*rbx)() ();
        if (eax == 0xffffffff) {
            goto label_3;
        }
        r15++;
label_1:
        rdi = *(r15);
        if (dil == 0) {
            goto label_37;
        }
label_4:
    }
    r15++;
    ecx = 0;
    while (al <= 0x27) {
        if (al == 0x20) {
            goto label_38;
        }
        if (al != 0x23) {
            goto label_39;
        }
        ecx |= 0x10;
label_0:
        r15 = rsi;
        eax = *(r15);
        rsi = r15 + 1;
        if (al == 0x2c) {
            goto label_40;
        }
        if (al > 0x2c) {
            goto label_41;
        }
        if (al == 0x27) {
            goto label_38;
        }
    }
    if (al == 0x2b) {
        ecx |= 4;
        goto label_0;
label_41:
        if (al != 0x30) {
            if (al == 0x60) {
                ecx |= 4;
label_38:
                ecx |= 8;
                goto label_0;
            }
            if (al != 0x2d) {
                goto label_42;
            }
            ecx |= 2;
            goto label_0;
        }
        ecx |= 1;
        goto label_0;
label_40:
        cl |= 0x80;
        goto label_0;
    }
    if (al == 0x2a) {
        goto label_43;
    }
label_39:
    r9d = 0;
label_22:
    edx = 0;
label_32:
    if (al == 0x6a) {
        goto label_44;
    }
    if (al > 0x6a) {
        goto label_45;
    }
    if (al != 0x68) {
        goto label_46;
    }
    eax = *((r15 + 1));
    rdi = r15 + 1;
    esi = 0xf;
    if (al == 0x68) {
        eax = *((r15 + 2));
        rdi = r15 + 2;
        esi = 7;
    }
label_23:
    r15 = rdi + 1;
    if (al == 0x6f) {
        goto label_47;
    }
    if (al > 0x6f) {
        goto label_48;
    }
    if (al == 0x63) {
        goto label_49;
    }
    if (al > 0x63) {
        goto label_50;
    }
    if (al == 0x58) {
        goto label_30;
    }
    if (al <= 0x58) {
        goto label_51;
    }
    r8d = 1;
    edi = 0x41898b;
    if (al != 0x62) {
        goto label_11;
    }
label_2:
    eax = 0x4130c0;
    if (rax == 0) {
        goto label_3;
    }
    r9 = (int64_t) r9d;
    r10d = (int32_t) sil;
    r8d &= 7;
    rsi = r12;
    rdi = rbx;
    ecx = r10d;
    r9 = (int64_t) edx;
    rdx = r13;
    eax = void (*rax)(uint64_t, uint64_t, uint64_t) (r9, rcx, rdi);
    if (eax != 0xffffffff) {
        goto label_1;
    }
    goto label_3;
label_13:
    fp_stack++;
label_3:
    rsp = rbp - 0x28;
    eax = 0xffffffff;
    return eax;
label_46:
    while (al != 0x5a) {
        r15++;
label_7:
        if (al == 0x62) {
            goto label_52;
        }
        if (al <= 0x62) {
            goto label_53;
        }
        if (al != 0x64) {
            if (al <= 0x64) {
                goto label_54;
            }
            if (al == 0x66) {
                goto label_19;
            }
            if (al != 0x69) {
                goto label_11;
            }
        }
        esi = 0x1f;
label_10:
        ecx |= 0x40;
label_14:
        ecx &= 0xffffffef;
        r8d = 0;
        edi = 0x41898b;
        goto label_2;
        if (al == 0x4c) {
            goto label_8;
        }
    }
label_8:
    eax = *((r15 + 1));
label_5:
    r15 += 2;
    if (al == 0x6f) {
        goto label_55;
    }
    if (al > 0x6f) {
label_6:
        goto label_56;
    }
    if (al == 0x63) {
        goto label_57;
    }
    if (al > 0x63) {
        goto label_58;
    }
    if (al == 0x58) {
        goto label_59;
    }
    if (al <= 0x58) {
        goto label_60;
    }
    r8d = 1;
    esi = 0x3f;
    edi = 0x41898b;
    if (al == 0x62) {
        goto label_2;
    }
label_11:
    rdi = (int64_t) al;
    rsi = r12;
    eax = void (*rbx)() ();
    if (eax == 0xffffffff) {
        goto label_3;
    }
    rdi = *(r15);
    if (dil != 0) {
        goto label_4;
    }
label_37:
    rsp = rbp - 0x28;
    eax = 0;
    return eax;
label_45:
    if (al != 0x6c) {
        goto label_61;
    }
    eax = *((r15 + 1));
    if (al != 0x6c) {
        goto label_5;
    }
    eax = *((r15 + 2));
    r15++;
    r15 += 2;
    if (al != 0x6f) {
        goto label_6;
    }
label_55:
    esi = 0x3f;
    goto label_47;
label_61:
    if (al != 0x6b) {
        goto label_62;
    }
label_9:
    r15++;
    if (al == 0x6d) {
        goto label_63;
    }
    if (al <= 0x6d) {
        goto label_7;
    }
    if (al == 0x72) {
        goto label_64;
    }
    if (al <= 0x72) {
        goto label_65;
    }
    if (al == 0x75) {
        goto label_66;
    }
    if (al != 0x78) {
        goto label_67;
    }
    esi = 0x1f;
    goto label_17;
label_62:
    if (al == 0x74) {
        goto label_8;
    }
    if (al == 0x7a) {
        goto label_8;
    }
    goto label_9;
label_51:
    if (al != 0x25) {
        goto label_68;
    }
label_12:
    rsi = r12;
    edi = 0x25;
    eax = void (*rbx)() ();
    if (eax != 0xffffffff) {
        goto label_1;
    }
    goto label_3;
label_50:
    if (al == 0x69) {
        goto label_10;
    }
    if (al <= 0x69) {
        goto label_69;
    }
label_16:
    if (al != 0x6d) {
        goto label_11;
    }
label_63:
    eax = 0;
    if (rax == 0) {
        goto label_70;
    }
    *((rbp - 0x4c)) = edx;
    edi = r14d;
    *((rbp - 0x48)) = r9d;
    *((rbp - 0x44)) = ecx;
    rax = void (*rax)() ();
    ecx = *((rbp - 0x44));
    r9d = *((rbp - 0x48));
    esi = 0;
    edx = *((rbp - 0x4c));
    r10 = rax;
    edi = 0x22;
    goto label_24;
label_60:
    if (al == 0x25) {
        goto label_12;
    }
    if (al != 0x46) {
        goto label_11;
    }
label_18:
    rax = *((r13 + 8));
    rax += 0xf;
    rax &= 0xfffffffffffffff0;
    rsi = rax + 0x10;
    *((r13 + 8)) = rsi;
    *(fp_stack--) = fp_stack[?];
label_15:
    eax = 0x412660;
    if (rax == 0) {
        goto label_13;
    }
    r9 = (int64_t) r9d;
    r8 = (int64_t) ecx;
    rsi = r12;
    ? = fp_stack[0];
    fp_stack--;
    rdi = rbx;
    rcx = r9;
    eax = void (*rax)() ();
    if (eax != 0xffffffff) {
        goto label_1;
    }
    goto label_3;
label_48:
    if (al == 0x73) {
        goto label_27;
    }
    if (al <= 0x73) {
        goto label_71;
    }
    if (al == 0x75) {
        goto label_14;
    }
    if (al != 0x78) {
        goto label_11;
    }
label_17:
    r8d = 4;
    edi = 0x41898b;
    goto label_2;
label_68:
    if (al != 0x46) {
        goto label_11;
    }
label_19:
    eax = *((r13 + 4));
    if (eax <= 0xaf) {
        goto label_72;
    }
    rsi = *((r13 + 8));
    rax = rsi + 8;
    *((r13 + 8)) = rax;
    *(fp_stack--) = *(rsi);
    goto label_15;
label_71:
    if (al != 0x71) {
        if (al != 0x72) {
            goto label_20;
        }
label_21:
        ecx |= 4;
    }
label_29:
    ecx |= 8;
label_27:
    eax = *(r13);
    if (eax > 0x2f) {
        goto label_73;
    }
    edi = eax;
    eax += 8;
    rdi += *((r13 + 0x10));
    *(r13) = eax;
label_26:
    r10 = *(rdi);
    edi = 0x22;
label_24:
    eax = 0x413cc0;
    if (rax == 0) {
        goto label_3;
    }
    rcx = (int64_t) ecx;
    r8 = (int64_t) edx;
    r9 = (int64_t) r9d;
    rdx = r10;
    rsi = r12;
    rdi = rbx;
    eax = void (*rax)(uint64_t, uint64_t) (rsi, rdi);
    if (eax != 0xffffffff) {
        goto label_1;
    }
    goto label_3;
label_20:
    if (al != 0x70) {
        goto label_11;
    }
label_28:
    ecx |= 1;
    r9d = 0xc;
    r8d = 4;
    esi = 0x2f;
    edi = 0x41898b;
    goto label_2;
label_58:
    if (al == 0x69) {
        goto label_74;
    }
    if (al > 0x69) {
        goto label_16;
    }
    if (al != 0x64) {
        goto label_75;
    }
label_74:
    esi = 0x3f;
    goto label_10;
label_56:
    if (al == 0x73) {
        goto label_76;
    }
    if (al <= 0x73) {
        goto label_77;
    }
    if (al == 0x75) {
        goto label_78;
    }
    if (al != 0x78) {
        goto label_11;
    }
    esi = 0x3f;
    goto label_17;
label_75:
    if (al == 0x66) {
        goto label_18;
    }
    goto label_11;
label_69:
    if (al == 0x64) {
        goto label_10;
    }
    if (al == 0x66) {
        goto label_19;
    }
    goto label_11;
label_77:
    if (al == 0x71) {
        goto label_79;
    }
    if (al != 0x72) {
        goto label_20;
    }
    esi = 0x3f;
    goto label_21;
label_43:
    eax = *(r13);
    if (eax > 0x2f) {
        goto label_80;
    }
    edx = eax;
    eax += 8;
    rdx += *((r13 + 0x10));
    *(r13) = eax;
label_25:
    r9d = *(rdx);
    if (r9d < 0) {
        ecx |= 2;
        r9d = -r9d;
    }
    eax = *((r15 + 1));
    r15 = rsi;
label_36:
    if (al != 0x2e) {
        goto label_22;
    }
    edi = *((r15 + 1));
    ecx |= 0x20;
    rsi = r15 + 1;
    edx = rdi - 0x30;
    eax = edi;
    if (edx <= 9) {
        goto label_81;
    }
    if (dil == 0x2a) {
        goto label_82;
    }
label_31:
    r15 = rsi;
    goto label_22;
label_44:
    eax = *((r15 + 1));
    rdi = r15 + 1;
    esi = 0x7f;
    goto label_23;
label_54:
    esi = 0x1f;
    if (al != 0x63) {
        goto label_83;
    }
label_49:
    eax = *(r13);
    ecx |= 0x20;
    if (eax > 0x2f) {
        goto label_84;
    }
label_33:
    edx = eax;
    eax += 8;
    rdx += *((r13 + 0x10));
    *(r13) = eax;
label_34:
    eax = *(rdx);
    edi = 0x27;
    edx = 1;
    r10 = rbp - 0x34;
    *((rbp - 0x34)) = eax;
    goto label_24;
label_53:
    if (al == 0x46) {
        goto label_19;
    }
    if (al == 0x58) {
        esi = 0x1f;
label_30:
        r8d = 4;
        edi = 0x4189c0;
        goto label_2;
    }
    if (al == 0x25) {
        goto label_12;
    }
    goto label_11;
label_78:
    esi = 0x3f;
    ecx &= 0xffffffef;
    r8d = 0;
    edi = 0x41898b;
    goto label_2;
label_80:
    rdx = *((r13 + 8));
    rax = rdx + 8;
    *((r13 + 8)) = rax;
    goto label_25;
label_73:
    rdi = *((r13 + 8));
    rax = rdi + 8;
    *((r13 + 8)) = rax;
    goto label_26;
label_67:
    if (al != 0x73) {
        goto label_11;
    }
    esi = 0x1f;
    goto label_27;
label_65:
    if (al == 0x70) {
        goto label_28;
    }
    if (al == 0x71) {
        esi = 0x1f;
        goto label_29;
    }
    if (al != 0x6f) {
        goto label_11;
    }
    esi = 0x1f;
label_47:
    r8d = 3;
    edi = 0x41898b;
    goto label_2;
label_59:
    esi = 0x3f;
    goto label_30;
label_81:
    edx = rdi - 0x30;
    if (dl > 9) {
        goto label_31;
    }
    edx = 0;
    while (dil <= 9) {
        edi = (int32_t) al;
        eax = rdx * 5;
        rsi++;
        edx = rdi + rax*2 - 0x30;
        eax = *(rsi);
        edi = rax - 0x30;
    }
    r15 = rsi;
    goto label_32;
label_82:
    edx = *(r13);
    if (edx > 0x2f) {
        goto label_85;
    }
    eax = edx;
    edx += 8;
    rax += *((r13 + 0x10));
    *(r13) = edx;
label_35:
    r8d = *(rax);
    edx = 0;
    __asm ("cmovns edx, dword [rax]");
    eax = *((r15 + 2));
    r15 += 2;
    goto label_32;
label_66:
    esi = 0x1f;
    goto label_14;
label_76:
    esi = 0x3f;
    goto label_27;
label_57:
    eax = *(r13);
    esi = 0x3f;
    ecx |= 0x20;
    if (eax <= 0x2f) {
        goto label_33;
    }
label_84:
    rdx = *((r13 + 8));
    rax = rdx + 8;
    *((r13 + 8)) = rax;
    goto label_34;
label_85:
    rax = *((r13 + 8));
    rdx = rax + 8;
    *((r13 + 8)) = rdx;
    goto label_35;
label_70:
    esi = 0;
    edi = 0x22;
    r10d = 0x4189d1;
    goto label_24;
label_72:
    esi = eax;
    eax += 0x10;
    rsi += *((r13 + 0x10));
    *((r13 + 4)) = eax;
    *(fp_stack--) = *(rsi);
    goto label_15;
label_52:
    r8d = 1;
    esi = 0x1f;
    edi = 0x41898b;
    goto label_2;
label_64:
    esi = 0x1f;
    goto label_21;
label_79:
    esi = 0x3f;
    goto label_29;
label_83:
    eax = 0x64;
    goto label_11;
label_42:
    edi = (int32_t) al;
    r9d = 0;
    edx = rdi - 0x30;
    if (edx > 9) {
        goto label_36;
    }
    edx = rax - 0x30;
    r9d = 0;
    if (dl <= 9) {
        goto label_86;
    }
    goto label_36;
    do {
        rsi++;
        edi = (int32_t) al;
label_86:
        eax = r9 * 5;
        r15 = rsi;
        r9d = rdi + rax*2 - 0x30;
        eax = *(rsi);
        edx = rax - 0x30;
    } while (dl <= 9);
    goto label_36;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406570 */
#include <stdint.h>
 
int64_t fcn_00406570 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rcx = *(0x00446440);
    rax = *(0x00446460);
    rdx = rax + rax;
    if (rcx != 0) {
        rax = rdx;
    }
    rdi <<= cl;
    rdi += *(0x00446480);
    rsi <<= cl;
    rsi += *(0x00446470);
    *(0x00446480) = rdi;
    rax <<= cl;
    *(0x00446470) = rsi;
    rax += rdi;
    *(0x00446478) = rax;
    rax = *(0x00446458);
    rax <<= cl;
    rsi += rax;
    *(0x00446468) = rsi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4060a0 */
#include <stdint.h>
 
int64_t fcn_004060a0 (void) {
    int64_t var_a0h;
    int64_t var_98h;
    int64_t var_90h;
    uint32_t var_88h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int32_t var_30h;
    rax = *(0x00446450);
    rbx = *(0x00446448);
    rcx = *(0x00446400);
    r14 = *(0x00446408);
    rax >>= 3;
    rbx >>= 3;
    *((rbp - 0x88)) = rax;
    *((rbp - 0x30)) = rbx;
    *((rbp - 0xa0)) = rcx;
    if (rax <= 0) {
        goto label_2;
    }
    rax = rbx*8;
    *((rbp - 0x60)) = rcx;
    r15 = 0x7f7f7f7f7f7f7f7f;
    *((rbp - 0x90)) = rax;
    *((rbp - 0x58)) = r14;
    *((rbp - 0x38)) = 0;
    *((rbp - 0x80)) = 0;
    *((rbp - 0x98)) = r14;
label_1:
    rax = *((rbp - 0x80));
    rdx = *((rbp - 0x80));
    rax++;
    *((rbp - 0x80)) = rax;
    if (*((rbp - 0x30)) <= 0) {
        goto label_3;
    }
    rsi = *((rbp - 0x88));
    rcx = rdx - 1;
    rdi = *((rbp - 0x30));
    rax = rsi - 1;
    if (rdx != 0) {
        rax = rcx;
    }
    rcx = *((rbp - 0x80));
    rax *= rdi;
    rbx = rax;
    *((rbp - 0x40)) = rax;
    eax = 0;
    if (rsi > rcx) {
        rax = rcx;
    }
    rcx = *((rbp - 0x98));
    rax *= rdi;
    rbx = rcx + rbx*8;
    *((rbp - 0x70)) = rbx;
    rbx = rcx;
    *((rbp - 0x48)) = rax;
    rax = rcx + rax*8;
    ecx = 0;
    *((rbp - 0x68)) = rax;
    rax = rdi - 1;
    *((rbp - 0x78)) = rax;
    while (rcx < *((rbp - 0x30))) {
        rax = *((rbp - 0x38));
        rdi = *((rbp - 0x48));
        r8 = rax + rcx;
        rax = *((rbp - 0x40));
        rdi += rcx;
        rax += rcx;
label_0:
        r8 = *((rbx + r8*8));
        rax = *((rbx + rax*8));
        r14 >>= 1;
        r12 = 0x8080808080808000;
        r10 = r8;
        rax >>= 0x31;
        r10 <<= 0xf;
        eax &= 0x80;
        r8 <<= 7;
        r10 &= r12;
        r10 |= rsi;
        rax |= r10;
        r10 = r13;
        rsi = rax;
        rsi &= rdx;
        rdx ^= rax;
        rax = r9;
        rax >>= 1;
        r10 ^= rsi;
        r13 &= rsi;
        rax &= r15;
        r11 |= r13;
        rsi = rax;
        rax = 0x8080808080808080;
        rax &= r8;
        r8 >>= 8;
        rax |= rsi;
        rsi = r9;
        rsi >>= 9;
        r13 = rax;
        r14 |= rsi;
        r13 &= rdx;
        rdx ^= rax;
        rax = r10;
        rsi = r14;
        r14 = *((rbx + rdi*8));
        rax ^= r13;
        r10 &= r13;
        rsi &= r15;
        r11 |= r10;
        r14 <<= 0x3f;
        rsi |= r14;
        r14 = 0x80808080808080;
        r14 &= r8;
        r14 |= rsi;
        r13 = r14;
        r13 &= rdx;
        rdx ^= r14;
        r9 |= rdx;
        rdx = rax;
        rax &= r13;
        rdx ^= r13;
        rax |= r11;
        rax = ~rax;
        r9 &= rdx;
        r9 &= rax;
        rax = *((rbp - 0x60));
        *((rax + rcx*8 - 8)) = r9;
        if (rcx == *((rbp - 0x30))) {
            goto label_3;
        }
        rax = *((rbp - 0x58));
        r10 = rcx - 1;
        r14 = *((rbp - 0x40));
        r12 = 0xfefefefefefefefe;
        r13 = 0x101010101010100;
        r9 = *((rax + rcx*8));
        rax = *((rbp - 0x70));
        rax = *((rax + rcx*8));
        rsi = r9;
        rsi <<= 8;
        rdi = rax;
        *((rbp - 0x50)) = rax;
        rax = r9;
        rdi >>= 0x38;
        rax <<= 9;
        rdx = rdi + rdi;
        rax |= rdx;
        rax &= r12;
        if (rcx == 0) {
            r10 = *((rbp - 0x78));
        }
        rdi |= rsi;
        rdx = rax;
        rax = *((rbp - 0x38));
        rax += r10;
        r8 = *((rbx + rax*8));
        rax = r14 + r10;
        r10 += *((rbp - 0x48));
        rax = *((rbx + rax*8));
        r11 = r8;
        r8 >>= 0xf;
        r11 >>= 7;
        rax >>= 0x3f;
        rax |= rdx;
        rdx = r11;
        rdx <<= 8;
        rdx &= r13;
        rax |= rdx;
        rdx = r9 + r9;
        rdx &= r12;
        r13 = rdx;
        rdx = 0x101010101010101;
        rdx &= r11;
        r11 = rax;
        rdx |= r13;
        r13 = *((rbp - 0x68));
        r11 &= rdx;
        rax ^= rdx;
        rdx = r9;
        r13 = *((r13 + rcx*8));
        rdx >>= 8;
        r14 = rdx + rdx;
        r14 &= r12;
        r12 = r13;
        r13 <<= 0x39;
        r13 |= r14;
        r14 = 0x1010101010101;
        r8 &= r14;
        r14 = r11;
        r13 |= r8;
        r8 = *((rbx + r10*8));
        r10 = 0x100000000000000;
        r8 <<= 0x31;
        r8 &= r10;
        r13 |= r8;
        r8 = r13;
        r8 &= rax;
        rax ^= r13;
        r14 ^= r8;
        r10 = r8;
        r8 = rdi;
        rdi ^= rax;
        r8 &= rax;
        r11 &= r10;
        r13 = r8;
        r8 = r14;
        r14 &= r13;
        r8 ^= r13;
        r11 |= r14;
        r14 = r12;
        r13 = r8;
        rsi >>= 1;
        r14 <<= 0x38;
        r10 = r11;
        rsi &= r15;
        rcx++;
        rdx |= r14;
        r11 = rdx;
        rdx ^= rdi;
        r11 &= rdi;
        r13 ^= r11;
        r11 &= r8;
        r11 |= r10;
        r10 = *((rbp - 0x50));
        r10 >>= 0x39;
        rsi |= r10;
    }
    rdi = *((rbp - 0x48));
    rax = *((rbp - 0x40));
    r8 = *((rbp - 0x38));
    goto label_0;
label_3:
    rbx = *((rbp - 0x30));
    *((rbp - 0x38)) += rbx;
    rbx = *((rbp - 0x90));
    *((rbp - 0x60)) += rbx;
    *((rbp - 0x58)) += rbx;
    rbx = *((rbp - 0x80));
    if (*((rbp - 0x88)) != rbx) {
        goto label_1;
    }
    r14 = *((rbp - 0x98));
label_2:
    rax = *((rbp - 0xa0));
    *(main) = r14;
    *(main)++;
    *(main) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4065d0 */
#include <stdint.h>
 
uint64_t rotate_left64 (uint64_t value, uint32_t count) {
    const uint64_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_004065d0 (signed int64_t arg2, signed int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    do {
        rax = *(0x00446448);
        rdx = rdi;
        rcx = rdi*8;
        r8 = *(main);
        rdx >>= 3;
        ecx &= 0x38;
        rax >>= 3;
        rax *= rdx;
        rdx = rsi;
        esi &= 7;
        rdx >>= 3;
        ecx |= esi;
        rax += rdx;
        rdx = 0xfffffffffffffffe;
        rdx = rotate_left64 (rdx, cl);
        *((r8 + rax*8)) &= rdx;
        return rax;
        rax = *(0x00446440);
        ecx = 0;
        *(0x00446430) = rdi;
        *(0x004464a1) = 1;
        rdx = *(0x00446470);
        *(0x00446428) = rsi;
        cl = (rax != 0) ? 1 : 0;
        *(0x004464a5) = 0;
        ecx += eax;
        rdi <<= cl;
        rdi += *(0x00446480);
        if (rdi >= 0) {
            ecx = eax;
            rsi <<= cl;
            rsi += rdx;
            if (*(0x00446450) <= rdi) {
                goto label_0;
            }
            if (rsi < 0) {
                goto label_0;
            }
            rax = *(0x00446448);
            if (rax <= rsi) {
                goto label_0;
            }
            rdx = rdi;
            rax >>= 3;
            rcx = rdi*8;
            rdx >>= 3;
            ecx &= 0x38;
            rax *= rdx;
            rdx = rsi;
            rdx >>= 3;
            rax += rdx;
            rdx = *(0x00446408);
            r8 = rdx + rax*8;
            eax = esi;
            rdx = *(r8);
            eax &= 7;
            ecx |= eax;
            rax = rdx;
            rax >>= cl;
            eax &= 1;
            *(0x004464a5) = al;
            if (al != 0) {
                goto label_1;
            }
            __asm ("bts rdx, rcx");
            *(r8) = rdx;
        }
label_0:
        return rax;
label_1:
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4066a0 */
#include <stdint.h>
 
int64_t fcn_004066a0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = *(0x00446430);
    rcx = *(0x00446440);
    rdx = *(0x00446428);
    rax -= rdi;
    rax <<= cl;
    rdx -= rsi;
    rdx <<= cl;
    rsi = rax + rax;
    if (rcx != 0) {
        rax = rsi;
    }
    if (*(0x004464a3) != 0) {
        rax = -rax;
        rdx = -rdx;
    }
    rsi = *(0x00446478);
    rcx = *(0x00446468);
    rsi -= *(0x00446480);
    rcx -= *(0x00446470);
    rax += *(0x00446420);
    rdx += *(0x00446418);
    *(0x00446480) = rax;
    rax += rsi;
    *(0x00446470) = rdx;
    rdx += rcx;
    *(0x00446478) = rax;
    *(0x00446468) = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406e60 */
#include <stdint.h>
 
int64_t fcn_00406e60 (uint32_t arg2, uint32_t arg1) {
    int64_t var_38h;
    rsi = arg2;
    rdi = arg1;
    r15 = rsi;
    if (*(0x00446430) == rdi) {
        if (*(0x00446428) == rsi) {
            goto label_0;
        }
    }
    r13 = *(0x00446440);
    r12d = 0;
    rax = *(0x00446470);
    *(0x00446430) = rdi;
    rbx = main;
    *(0x00446428) = r15;
    *((rbp - 0x38)) = rax;
    r12b = (r13 != 0) ? 1 : 0;
    r12d += r13d;
    ecx = r12d;
    rdi <<= cl;
    rdi += *(0x00446480);
    r14 = rdi;
    rax = fcn_00412150 ();
    ecx = r12d;
    rdx = rbx;
    rdx <<= cl;
    r12 = rdx;
    r12 = ~r12;
    r12 &= rax;
    r12 += r14;
    rax = fcn_00412150 ();
    if (r12 >= 0) {
        ecx = r13d;
        rsi = *((rbp - 0x38));
        rdx = r15;
        rbx <<= cl;
        rdx <<= cl;
        rbx = ~rbx;
        rsi += rdx;
        rbx &= rax;
        rsi += rbx;
        if (*(0x00446450) <= r12) {
            goto label_0;
        }
        if (rsi < 0) {
            goto label_0;
        }
        rax = *(0x00446448);
        if (rax <= rsi) {
            goto label_0;
        }
        if (*(0x004464a5) != 0) {
            goto label_1;
        }
        rdx = r12;
        rax >>= 3;
        rcx = r12*8;
        rdi = *(main);
        rdx >>= 3;
        ecx &= 0x38;
        rax *= rdx;
        rdx = rsi;
        esi &= 7;
        rdx >>= 3;
        ecx |= esi;
        rax += rdx;
        edx = 1;
        rdx <<= cl;
        *((rdi + rax*8)) |= rdx;
    }
label_0:
    return rax;
label_1:
    rdi = r12;
    return void (*0x406480)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x407170 */
#include <stdint.h>
 
int64_t fcn_00407170 (int64_t arg3, signed int64_t arg2, signed int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    if (rdi < 0) {
        goto label_0;
    }
    if (*(0x00446460) <= rdi) {
        goto label_0;
    }
    while (*(0x00446458) <= rsi) {
label_0:
        return;
    }
    rdx = (int64_t) edx;
    eax = 0;
    ecx = 0xe;
    r8 = rsi;
    r9 = *(0x00446440);
    rdx += r9;
    __asm ("cmovns rax, rdx");
    if (rax > 0xe) {
        rax = rcx;
    }
    ecx = r9d;
    r8 <<= cl;
    ecx = eax;
    *(0x00446440) = rax;
    rsi <<= cl;
    r8 -= rsi;
    rsi = rdi;
    r8 >>= cl;
    ecx = 0;
    cl = (r9 != 0) ? 1 : 0;
    ecx += r9d;
    rsi <<= cl;
    ecx = 0;
    cl = (rdx > 0) ? 1 : 0;
    ecx += eax;
    rdi <<= cl;
    ecx = eax;
    rsi -= rdi;
    rdi = rsi;
    rsi = r8;
    rdi >>= cl;
    return void (*0x406570)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f180 */
#include <stdint.h>
 
uint64_t fcn_0040f180 (int64_t arg4, int64_t arg3, uint32_t arg2, int64_t arg1) {
    int64_t var_38h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = rdi;
    r14 = rcx;
    r13 = rsi;
    rbx = rdx;
    fcn_0040f2d0 (*(rdi));
    al = fcn_0040f2d0 (*(r15));
    if (al != 0) {
        goto label_2;
    }
    rax = *(r15);
    r12 = *(r13);
    r8d = 0;
    if (rax == 0) {
        goto label_3;
    }
    do {
        rsi = r12;
        rsi >>= 1;
        rsi += r12;
label_0:
        rax = r12;
        rdx:rax = rax * rbx;
        r12 = rax;
        if (rsi !overflow 0) {
            rax = rbx;
            r14 = rsi + r14 + 1;
            rdx:rax = rax * r14;
            rbx = rax;
            if (rsi !overflow 0) {
                eax = fcn.0040b70d;
                if (rax == 0) {
                    goto label_4;
                }
                rsi = rbx + 0x1f;
                *((rbp - 0x38)) = r8;
                rdi = r8;
                rsi &= 0xffffffffffffffe0;
                rax = void (*rax)() ();
                if (rax == 0) {
                    goto label_4;
                }
                r8 = *((rbp - 0x38));
                if (r8 == 0) {
                    goto label_5;
                }
label_1:
                rbx -= r12;
                rdx = rbx;
                rax = fcn_0041561f (rax + r12, 0);
                *(r13) = r14;
                *(r15) = rax;
                eax = 1;
            }
        } else {
            eax = fcn_00402bc9 ();
            eax = 0;
        }
        return rax;
label_2:
        r8 = *(r15);
        r12 = *(r13);
        rax = r8;
    } while (rax != 0);
label_3:
    edx = 0;
    eax = 0x1f;
    esi = 4;
    rax = rdx:rax / rbx;
    rdx = rdx:rax % rbx;
    if (rax >= 4) {
        rsi = rax;
    }
    goto label_0;
label_4:
    eax = fcn_00402b8a ();
    eax = 0;
    return rax;
label_5:
    rsi = *(r15);
    if (rsi == 0) {
        goto label_1;
    }
    rdx = r12;
    fcn_004154c0 (rax);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ede0 */
#include <stdint.h>
 
uint64_t fcn_0040ede0 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r14 = rdx;
    r13 = rdi;
    r12 = rsi;
    rbx = *(0x00446ac0);
    if (rbx == 0) {
        goto label_1;
    }
label_0:
    ecx = *(rbx);
    while (1) {
        eax = ecx;
        eax = ~eax;
        __asm ("bsr eax, eax");
        __asm ("bts ecx, eax");
        rax *= 3;
        *(rbx) = ecx;
        rax = rbx + rax*8;
        *((rax + 0x10)) = r13;
        *((rax + 0x18)) = r12;
        *((rax + 0x20)) = r14;
        eax = 0;
        r12 = rbx;
        r13 = rbx;
        r14 = rbx;
        return rax;
        eax = fcn.0040b6fb;
        if (rax == 0) {
            goto label_2;
        }
        esi = 0x310;
        edi = 1;
        rax = void (*rax)() ();
        if (rax == 0) {
            goto label_2;
        }
        *((rax + 8)) = rbx;
        ecx = *(rax);
        rbx = rax;
        *(0x00446ac0) = rax;
    }
label_1:
    *(0x00446ac0) = 0x446ac8;
    ebx = 0x446ac8;
    goto label_0;
label_2:
    fcn_00402b8a ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4023b0 */
#include <stdint.h>
 
uint64_t fcn_004023b0 (int64_t arg1) {
    int64_t var_100h;
    int64_t var_e8h;
    int64_t var_18h;
    rdi = arg1;
    r13 = (int64_t) edi;
    r12d = *(0x0041c718);
    r12d &= 4;
    if (r12d != 0) {
        r12d = 0;
        al = fcn_00410c50 (r13d, 1);
        if (al != 0) {
            rdx = *(0x00447b50);
            rax = r13 * 3;
            r12d = 0;
            rax = rdx + rax*8;
            rcx = *(rax);
            eax = uint64_t (*0x0041b170)() ();
            r12b = (eax == 2) ? 1 : 0;
        }
        rsp = rbp - 0x18;
        eax = r12d;
        return rax;
    }
    rsi = rbp - 0x100;
    ebx = *(0x00448020);
    eax = fcn_00402480 (r13d);
    if (eax != 0xffffffff) {
        eax = *((rbp - 0xe8));
        r12d = 0;
        eax &= 0xf000;
        r12b = (eax == 0x2000) ? 1 : 0;
        rsp = rbp - 0x18;
        eax = r12d;
        return rax;
    }
    *(0x00448020) = ebx;
    rsp = rbp - 0x18;
    eax = r12d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402480 */
#include <stdint.h>
 
uint32_t fcn_00402480 (int64_t arg2) {
    rsi = arg2;
    r13 = rsi;
    eax = fcn_004122d0 ();
    r12d = eax;
    if (eax != 0xffffffff) {
        fcn_004024b0 (r13);
    }
    eax = r12d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4122d0 */
#include <stdint.h>
 
int64_t fcn_004122d0 (void) {
    rax = 0x35022721530005;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4024b0 */
#include <stdint.h>
 
int64_t fcn_004024b0 (int64_t arg1) {
    rdi = arg1;
    if (rdi == 0) {
        goto label_1;
    }
    eax = *(0x0041c718);
    if ((al & 8) == 0) {
        goto label_2;
    }
    rbx = *((rdi + 0x18));
    r14d = *((rdi + 6));
    r13d = *((rdi + 4));
    r12 = *((rdi + 0x10));
    r11 = *((rdi + 0x60));
    r10 = *((rdi + 0x70));
    *((rdi + 0x10)) = r14;
    r8 = *((rdi + 0x28));
    r15 = *(rdi);
    *((rdi + 0x28)) = rbx;
    rbx = *((rdi + 0x68));
    r9 = *((rdi + 0x20));
    *((rdi + 0x18)) = r13d;
    rsi = *((rdi + 0x30));
    rcx = *((rdi + 0x38));
    *(rdi) = r15;
    rdx = *((rdi + 0x40));
    *((rdi + 0x1c)) = r12;
    *((rdi + 0x30)) = r11;
    rax = *((rdi + 0x48));
    *((rdi + 0x38)) = r10;
    *((rdi + 0x40)) = rbx;
label_0:
    *((rdi + 0x48)) = r9;
    *((rdi + 0x50)) = r8;
    *((rdi + 0x58)) = rsi;
    *((rdi + 0x60)) = rcx;
    *((rdi + 0x68)) = rdx;
    *((rdi + 0x70)) = rax;
    do {
        r12 = rbx;
        r13 = rbx;
        r14 = rbx;
        r15 = rbx;
        return rax;
label_2:
        if ((al & 0x20) != 0) {
            goto label_3;
        }
    } while ((al & 0x10) == 0);
    r15 = *((rdi + 4));
    r13 = *((rdi + 0x14));
    r14d = *(rdi);
    r12 = *((rdi + 0x1c));
    r9 = *((rdi + 0x20));
    r8 = *((rdi + 0x28));
    *(rdi) = r15;
    r15d = *((rdi + 0x10));
    rbx = *((rdi + 0x50));
    *((rdi + 0x18)) = r14d;
    r11 = *((rdi + 0x60));
    r10 = *((rdi + 0x58));
    *((rdi + 0x1c)) = r13;
    rsi = *((rdi + 0x30));
    rcx = *((rdi + 0x38));
    *((rdi + 0x10)) = r15;
    rdx = *((rdi + 0x40));
    rax = *((rdi + 0x48));
    *((rdi + 0x28)) = r12;
    do {
        *((rdi + 0x30)) = rbx;
        *((rdi + 0x38)) = r11;
        *((rdi + 0x40)) = r10;
        goto label_0;
label_1:
        return rax;
label_3:
        r12d = *((rdi + 0x18));
        rbx = *((rdi + 0x70));
        r11 = *((rdi + 0x80));
        r10 = *((rdi + 0x78));
        r9 = *((rdi + 0x30));
        r8 = *((rdi + 0x38));
        *((rdi + 0x18)) = r12d;
        rsi = *((rdi + 0x40));
        rcx = *((rdi + 0x48));
        rdx = *((rdi + 0x50));
        rax = *((rdi + 0x58));
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b707 */
#include <stdint.h>
 
void fcn_0040b707 (void) {
    uint64_t (*0x0041c090)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b7a0 */
#include <stdint.h>
 
uint64_t fcn_0040b7a0 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rbx = rdi;
    fcn_0041571a (rdi, rsi, rdx);
    r12 = rax + 1;
    rdi = r12;
    rax = fcn_0040b707 ();
    if (rax != 0) {
        rsi = rbx;
        rdx = r12;
        fcn_004154c0 (rax);
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4022d0 */
#include <stdint.h>
 
uint64_t fcn_004022d0 (uint32_t arg3, signed int64_t arg2, uint32_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
        rcx = rdx + rdx + 2;
        rax = rcx - 1;
        r8 = rax;
        if (rdi > rax) {
            r10d = *((rsi + rdx*8));
            if (*((rsi + rax*8)) > r10d) {
                goto label_2;
            }
        }
        if (rdi <= rcx) {
            goto label_3;
        }
        rax = rdx;
label_1:
        r11d = *((rsi + rax*8));
        r8 = rax;
        if (*((rsi + rcx*8)) > r11d) {
            goto label_4;
        }
label_0:
        if (rdx == rax) {
            goto label_3;
        }
        rcx = rsi + rdx*8;
        rdx = rsi + r8*8;
        r8 = *(rdx);
        r9 = *(rcx);
        *(rcx) = r8;
        *(rdx) = r9;
        rdx = rax;
    } while (1);
label_4:
    rax = rcx;
    r8 = rcx;
    goto label_0;
label_2:
    if (rdi <= rcx) {
        goto label_0;
    }
    goto label_1;
label_3:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405e30 */
#include <stdint.h>
 
uint64_t fcn_00405e30 (int64_t arg3) {
    int64_t var_18h;
    signed int64_t var_14h;
    rdx = arg3;
    ecx = *(gs:0x40);
    esi = *(gs:0x48);
    __asm ("rdtsc");
    r12d = ecx;
    rdx <<= 0x20;
    r12 <<= 0x11;
    rdx |= rax;
    r12 ^= rsi;
    r12 ^= rdx;
    rax = fcn_00405f9e (0x417ab8);
    rax = fcn_00405fb1 (rax, 0x418938, rdx, rcx);
    if (rax != 0) {
        rdi = rbp - 0x18;
        eax = void (*rax)() ();
        if (eax == 0) {
            goto label_0;
        }
        eax = *((rbp - 0x18));
        eax *= *((rbp - 0x14));
        rax = (int64_t) eax;
        r12 ^= rax;
    }
label_0:
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405fb1 */
#include <stdint.h>
 
int64_t fcn_00405fb1 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b188);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4029af */
#include <stdint.h>
 
uint8_t fcn_004029af (void) {
    al = fcn_0040a3f0 ();
    if (al != 0) {
        fcn_00416150 (0x418758);
    }
    fcn_00416150 (0x41875d);
    fcn_00416150 (*(0x0041c710));
    edi = 0x418764;
    return void (*0x416150)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x416150 */
#include <stdint.h>
 
void fcn_00416150 (uint32_t arg1) {
    rdi = arg1;
    esi = 0;
    if (*(rdi) == 0) {
        goto label_0;
    }
    do {
        rsi++;
    } while (*((rdi + rsi)) != 0);
label_0:
    fcn_004160c0 (rdi, rsi);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412630 */
#include <stdint.h>
 
void fcn_00412630 (int64_t arg1) {
    rdi = arg1;
    edx = 4;
    if (rdi != 0) {
        __asm ("bsr rdx, rdi");
        edx += 4;
        edx &= 0xfc;
    }
    fcn_00412530 (rdi, rsi, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412530 */
#include <stdint.h>
 
int64_t fcn_00412530 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    ecx = edx;
    rdx = rsi;
    if (dl == 0) {
        goto label_0;
    }
    do {
        ecx -= 4;
        rax = rdi;
        rdx++;
        rax >>= cl;
        eax &= 0xf;
        eax = *((rax + 0x41898b));
        *((rdx - 1)) = al;
    } while (cl != 0);
    rax = rdx;
    *(rdx) = 0;
    rax -= rsi;
    return rax;
label_0:
    *(rdx) = 0;
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4160c0 */
#include <stdint.h>
 
int64_t fcn_004160c0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b228);
    r8 = rdi;
    rdx = rsi;
    if (rax != 0x40116a) {
        if (rax == 0) {
            goto label_1;
        }
        fcn_00416040 (rdi, rsi);
        return rax;
    }
label_1:
    r9 = *(0x00440908);
    while (1) {
        edi = 2;
        rax = r9;
        rsi = r8;
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        if (rax == main) {
            goto label_2;
        }
label_0:
        return rax;
        eax = *(0x0041c718);
        eax &= 8;
        r9 -= r9;
        r9 &= 0xfffffffffe000000;
        r9 += 0x2000004;
    }
label_2:
    eax = *(0x0041c718);
    if (eax != 0) {
        goto label_0;
    }
    if (*(0x00440908) != 0) {
        goto label_0;
    }
    rax = r9;
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x416040 */
#include <stdint.h>
 
void fcn_00416040 (int64_t arg2, int64_t arg1) {
    int64_t var_124h;
    int64_t var_a0h;
    int64_t var_18h;
    rsi = arg2;
    rdi = arg1;
    r13 = rdi;
    rbx = rsi;
    fcn_0041633b (rbp - 0xa0, rsi, rdx, rcx, r8, r9);
    rcx = 0xfffffffffffffff4;
    rax = uint64_t (*0x0041b1a0)() ();
    r8d = ebx;
    rdx = r13;
    r9 = main;
    r12 = rax;
    rcx = rax;
    uint64_t (*0x0041b228)(uint64_t) (0);
    rcx = r12;
    uint64_t (*0x0041b100)() ();
    fcn_004162c8 (rbp - 0xa0);
    rsp = rbp - 0x18;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x41633b */
#include <stdint.h>
 
void fcn_0041633b (int64_t arg1, int64_t arg7, int64_t arg8, int64_t arg9, int64_t arg10, int64_t arg11) {
    rdi = arg1;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    *((rdi - 0x80)) = xmm0;
    *((rdi - 0x70)) = xmm1;
    *((rdi - 0x60)) = xmm2;
    *((rdi - 0x50)) = xmm3;
    *((rdi - 0x40)) = xmm4;
    *((rdi - 0x30)) = xmm5;
    *((rdi - 0x20)) = xmm6;
    *((rdi - 0x10)) = xmm7;
    *(rdi) = xmm8;
    *((rdi + 0x10)) = xmm9;
    *((rdi + 0x20)) = xmm10;
    *((rdi + 0x30)) = xmm11;
    *((rdi + 0x40)) = xmm12;
    *((rdi + 0x50)) = xmm13;
    *((rdi + 0x60)) = xmm14;
    *((rdi + 0x70)) = xmm15;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4162c8 */
#include <stdint.h>
 
void fcn_004162c8 (int64_t arg1) {
    rdi = arg1;
    xmm0 = *((rdi - 0x80));
    xmm1 = *((rdi - 0x70));
    xmm2 = *((rdi - 0x60));
    xmm3 = *((rdi - 0x50));
    xmm4 = *((rdi - 0x40));
    xmm5 = *((rdi - 0x30));
    xmm6 = *((rdi - 0x20));
    xmm7 = *((rdi - 0x10));
    xmm8 = *(rdi);
    xmm9 = *((rdi + 0x10));
    xmm10 = *((rdi + 0x20));
    xmm11 = *((rdi + 0x30));
    xmm12 = *((rdi + 0x40));
    xmm13 = *((rdi + 0x50));
    xmm14 = *((rdi + 0x60));
    xmm15 = *((rdi + 0x70));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412600 */
#include <stdint.h>
 
uint64_t fcn_00412600 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    if (rdi < 0) {
        rdi = -rdi;
        rsi++;
        rax = fcn_00412580 (rdi, 0x2d, rdx);
        rax++;
        return rax;
    }
    fcn_00412580 (rdi, rsi, rdx);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412580 */
#include <stdint.h>
 
int64_t fcn_00412580 (char ** envp, char ** argv, int64_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    r9 = 0xcccccccccccccccd;
    r8d = 0;
    do {
        rax = rdi;
        r10 = rdi;
        rcx = r8;
        r8++;
        rdx:rax = rax * r9;
        rdx >>= 3;
        rax = rdx * 5;
        rax += rax;
        r10 -= rax;
        rax = r10;
        eax += 0x30;
        *((rsi + r8 - 1)) = al;
        rax = rdi;
        rdi = rdx;
    } while (rax > 9);
    *((rsi + r8)) = 0;
    eax = 0;
    if (rcx == 0) {
        goto label_0;
    }
    do {
        edx = *((rsi + rax));
        edi = *((rsi + rcx));
        *((rsi + rax)) = dil;
        rax++;
        *((rsi + rcx)) = dl;
        rcx--;
    } while (rax < rcx);
label_0:
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410b10 */
#include <stdint.h>
 
uint64_t fcn_00410b10 (void) {
    int64_t var_410h;
    if (dil != 0) {
        goto label_2;
    }
    rax = fcn_004108b0 (0x418897);
    while (al == 0x34) {
label_0:
        r12d = 0;
label_1:
        eax = r12d;
        return rax;
        eax = *(0x0041c014);
        eax >>= 8;
        eax ^= *(0x0041c00c);
    }
label_2:
    eax = *(0x0041c718);
    r12d = *(0x0041c718);
    r12d &= 4;
    if (r12d != 0) {
        rax = *(gs:0x60);
        r12d = *((rax + 2));
        eax = r12d;
        return rax;
    }
    if ((al & 1) == 0) {
        goto label_0;
    }
    edx = *(0x00440938);
    edi = *(0x00440780);
    ecx = 0;
    esi = 0x4188a3;
    eax = fcn_004123b0 ();
    r13d = eax;
    if (eax == 0xffffffff) {
        goto label_0;
    }
    edx = 0x3f4;
    rsi = main;
    edi = eax;
    rax = fcn_004123d0 ();
    if (rax != main) {
        *((rbp + rax - 0x410)) = 0;
        rax = fcn_00414cf0 (main, 0x4188c0, rdx, rcx, r8);
        edi = 0x4188c0;
        rsi = rax;
        if (rax == 0) {
            rsi = rdi;
        }
        fcn_0041571a (rdi, rsi, rdx);
        rdi = rsi + rax;
        eax = fcn_00412450 ();
        r12d = eax;
    }
    edi = r13d;
    fcn_00412330 ();
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a090 */
#include <stdint.h>
 
uint64_t fcn_0040a090 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = rsi;
    if (rsi == 0) {
        r12 = rbp;
    }
    if (*(0x00448025) != 0) {
        r13 = r12;
        return;
    }
    *(0x00448025) = 1;
    r13d = edi;
    eax = fcn_00409db0 (rdi, r12);
    while (1) {
        *(0x00448025) = 0;
        return eax;
        rax = fcn_0040a470 ();
        fcn_0040a100 (r13d, r12, rax);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x409db0 */
#include <stdint.h>
 
uint64_t fcn_00409db0 (int64_t arg2, int64_t arg1) {
    int64_t var_cd8h;
    int64_t var_cd0h;
    int64_t var_cc8h;
    int64_t var_cc0h;
    int64_t var_cb4h;
    int64_t var_cb0h;
    uint32_t var_cafh;
    int64_t var_cach;
    int64_t var_ca8h;
    int64_t var_ca4h;
    int64_t var_ca0h;
    int64_t var_c98h;
    int64_t var_c90h;
    int64_t var_c88h;
    int64_t var_8a0h;
    rsi = arg2;
    rdi = arg1;
    r14 = rsi;
    *((rbp - 0xcb4)) = edi;
    rax = fcn_0040f050 ();
    if (rax == 0) {
        goto label_6;
    }
    r12 = rax;
    rax = fcn_0040a4d0 ();
    *((rbp - main)) = rax;
    if (rax == 0) {
        goto label_6;
    }
    *((rbp - 0xca0)) = 0x418767;
    r13d = 0;
    *((rbp - 0xc98)) = 0x418771;
    *((rbp - 0xc90)) = 0x418774;
    *((rbp - main)) = r12;
    ebx = 0;
    if (rbx != 0) {
        goto label_7;
    }
    if (r14 == 0) {
        goto label_8;
    }
label_3:
    rax = main;
    r15d = 4;
    r11d = 0;
    *((rbp - main)) = rbx;
    *((rbp - main)) = rax;
    rax = main;
    rbx = r14;
    r14 = r15;
    *((rbp - main)) = rax;
    r15 = r13;
    r13 = r11;
    r12d = 0;
    while (rcx != r12) {
label_0:
        rax = *((rbp - main));
        r14++;
        rax = *((rbp - main));
        *((rax + r14*8 - 8)) = rdi;
        rcx--;
        eax = 0;
        eax = fcn_00413ac0 (rax + r13, 0x11, 0x41877b, rcx, r8, r9);
        rbx = *(rbx);
        eax++;
        rax = (int64_t) eax;
        r13 += rax;
        if (rbx == 0) {
            goto label_9;
        }
        if (r14 > 0x7e) {
            goto label_9;
        }
        rcx = *((rbx + 8));
    }
    rax = *((rbp - main));
    edx = 0;
    rsi = *((rax + 0x10));
    do {
        r15--;
        rax = r15;
        rax <<= 5;
        rcx = *((rsi + rax + 0x18));
    } while (rcx == rdx);
    goto label_0;
label_9:
    r15 = r14;
label_4:
    r8 = *(0x00448018);
    rcx = *((rbp - main));
    rax = 0xffffffff00000000;
    rdx = *((rbp - main));
    *((rbp + r15*8 - main)) = 0;
    *((rbp - main)) = rax;
    *((rbp - 0xca4)) = 2;
    eax = fcn_0040b0c0 (0, main);
    *((rbp - 0xcc8)) = eax;
    if (eax == 0xffffffff) {
        goto label_6;
    }
    rax = main;
    *((rbp - main)) = rax;
    do {
label_2:
        edx = 0x86f;
        rax = fcn_00410f70 (*((rbp - 0xca8)), *((rbp - main)));
        r12 = rax;
        if (rax <= 0) {
            goto label_10;
        }
        r14 = *((rbp - main));
        goto label_11;
label_1:
        r13 = rax;
        r13 -= r14;
        rdx -= r13;
        rax = fcn_00415783 (rax, 0xa, r12, rcx, r8);
        rbx = rax;
        if (rax == 0) {
            goto label_12;
        }
        if (r15 < rax) {
            eax = 0;
            al = (*((rbx - 1)) == 0xd) ? 1 : 0;
            rbx -= rax;
        }
        rdx = r13;
        fcn_00411a10 (*((rbp - 0xcb4)), r14);
        rax = rbx;
        rax -= r14;
        r12 -= rax;
    } while (r12 == 0);
    r14 = rbx;
label_11:
    rax = fcn_0040b560 (r14, r12, 0x41877f, 0xf);
    r15 = rax;
    if (rax != 0) {
        goto label_1;
    }
label_12:
    rdx = r12;
    fcn_00411a10 (*((rbp - 0xcb4)), r14);
    goto label_2;
label_10:
    fcn_00410160 (*((rbp - 0xca8)), rsi);
    eax = fcn_004119f0 (*((rbp - 0xcc8)), main, 0);
    if (eax == 0xffffffff) {
        goto label_6;
    }
    eax = 0;
    al = (*((rbp - 0xcaf)) != 0) ? 1 : 0;
    eax = -eax;
label_5:
    return rax;
label_7:
    r13 = *(rbx);
    if (r14 != 0) {
        goto label_3;
    }
label_8:
    rax = main;
    r15d = 4;
    *((rbp - main)) = rax;
    goto label_4;
label_6:
    eax = 0xffffffff;
    goto label_5;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a470 */
#include <stdint.h>
 
int64_t fcn_0040a470 (void) {
    if (*(0x00448008) != 0) {
        rax = *(0x00448000);
        return rax;
    }
    *(0x00448008) = 1;
    rax = fcn_0040f050 ();
    rdi = rax;
    if (rax != 0) {
        rax = fcn_0040f5e0 (rdi);
        *(0x00448000) = rax;
        if (rax == 0) {
            goto label_0;
        }
        fcn_0040ede0 (fcn.0040ed90, 0x448000, 0);
    }
    rax = *(0x00448000);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f050 */
#include <stdint.h>
 
int64_t fcn_0040f050 (void) {
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    if (*(0x00446de0) == 0) {
        goto label_2;
    }
label_0:
    r12d = 0x446de0;
    do {
        rax = r12;
        return rax;
label_2:
        r12 = *(0x0041c710);
        rbx = rbp - 0x30;
        r14 = rbp - 0x20;
        r13d = 0x418832;
        rax = fcn_004106f0 (*(0x00440788), rsi);
        *((rbp - 0x28)) = rax;
label_1:
        eax = fcn_0041571a (r12, rsi, rdx);
        edx = rax - 5;
        if (edx > 0xed) {
            goto label_3;
        }
        ecx = 5;
        rdi = r13;
        rsi = r12 + rax - 4;
        __asm ("repe cmpsb byte [rsi], byte ptr [rdi]");
        dl = (edx > 0xed) ? 1 : 0;
    } while (dl == 0);
    rsi = r12;
    rdx = rax;
    rax = fcn_004154c0 (0x446de0);
    rdi += rax;
    edx = 5;
    rsi = r13;
    fcn_004154c0 (rdi);
    edi = 0x446de0;
    al = fcn_00410560 ();
    if (al != 0) {
        goto label_0;
    }
    *(0x00446de0) = 0;
label_3:
    rbx += 8;
    if (r14 != rbx) {
        r12 = *(rbx);
        goto label_1;
    }
    rax = *(0x00440860);
    r12d = 0;
    *(0x00448020) = eax;
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f5e0 */
#include <stdint.h>
 
uint64_t fcn_0040f5e0 (int64_t arg1) {
    int64_t var_28h;
    rdi = arg1;
    *((rbp - 0x28)) = main;
    if (rdi != 0) {
        r12 = rdi;
        rax = fcn_0040f340 (0x200000);
        rsi = rax;
        *((rbp - 0x28)) = rax;
        rax = fcn_0040f900 (r12);
        if (rax == 0) {
            goto label_2;
        }
        r12 = *((rbp - 0x28));
        rax = fcn_0040fdd0 (*((r12 + 8)), *((r12 + 0x10)));
        *((r12 + 0x38)) = rax;
        if (rax == 0) {
            goto label_2;
        }
        rax = *((rbp - 0x28));
        rax = fcn_0040fe50 (*((rax + 8)), *((rax + 0x10)), rax + 0x20);
        r12 = rax;
        if (rax == 0) {
            goto label_2;
        }
        rax = *((rbp - 0x28));
        rdx = *((rax + 0x20));
        *((rax + 0x18)) = main;
        rdx = rdx*8 + 0x40;
        if (rdx <= 0x1fffff) {
            goto label_3;
        }
    }
label_2:
    fcn_0040ed90 (rbp - 0x28);
label_1:
    rax = *((rbp - 0x28));
    edx = 0;
    if (rax == main) {
        rax = rdx;
    }
    return rax;
label_3:
    eax = fcn_0040fef0 (*((rax + 8)), *((rax + 0x10)), rax + 0x28, rax + 0x30);
    rsi = *((rbp - 0x28));
    rdi = *((rsi + 0x20));
    if (rdi == 0) {
        goto label_4;
    }
    r13d = 0;
    ebx = 0;
    eax = 0;
    while (al == 0) {
        rsi = *((rbp - 0x28));
label_0:
        eax = rbx + 1;
        rbx = rax;
        if (rax >= *((rsi + 0x20))) {
            goto label_5;
        }
        rax *= 3;
        r14 = r12 + rax*8;
        al = fcn_0040ffc0 (r14);
    }
    rsi = *((rbp - 0x28));
    rax = *((r14 + 8));
    rdx = *((rsi + 0x28));
    if (rax < rdx) {
        goto label_0;
    }
    if (rax > *((rsi + 0x30))) {
        goto label_0;
    }
    ecx = r13d;
    eax -= edx;
    r13d++;
    rcx = rsi + rcx*8;
    *((rcx + 0x40)) = eax;
    eax = *(r14);
    *((rcx + 0x44)) = eax;
    goto label_0;
label_5:
label_4:
    *((rsi + 0x20)) = rdi;
    rsi += 0x40;
    fcn_00402350 (r13d, rsi);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f340 */
#include <stdint.h>
 
void fcn_0040f340 (int64_t arg1) {
    rdi = arg1;
    ecx = *(0x004408c8);
    rsi = rdi;
    r9d = 0;
    edi = 0;
    r8d = 0xffffffff;
    edx = 3;
    ecx |= 2;
    return void (*0x40f370)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f900 */
#include <stdint.h>
 
uint64_t fcn_0040f900 (int64_t arg2) {
    rsi = arg2;
    r12 = rsi;
    eax = fcn_0040efb0 (rdi);
    if (eax != 0xffffffff) {
        al = fcn_0040ffa0 (*((r12 + 8)), *((r12 + 0x10)));
        if (al == 0) {
            goto label_0;
        }
        rax = *((r12 + 8));
        return rax;
    }
label_0:
    eax = fcn_0040ef50 (r12);
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40efb0 */
#include <stdint.h>
 
uint64_t fcn_0040efb0 (int64_t arg2) {
    rsi = arg2;
    eax = 0;
    r12 = rsi;
    *((rsi + 8)) = main;
    eax = fcn_00410e90 (rdi, *(main), rdx, rcx);
    *(r12) = eax;
    if (eax == 0xffffffff) {
        goto label_0;
    }
    edi = eax;
    rax = fcn_00410930 ();
    *((r12 + 0x10)) = rax;
    if (rax > 0x7ffffffe) {
        goto label_0;
    }
    if (rax != 0) {
        goto label_1;
    }
    *((r12 + 8)) = 0;
    do {
        return rax;
label_1:
        ecx |= 2;
        rax = fcn_0040f370 (0, rax, 1, *(0x004408d0), *(r12), 0);
        *((r12 + 8)) = rax;
        if (rax != main) {
            eax = 0;
            return rax;
        }
label_0:
        fcn_0040ef50 (r12);
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410e90 */
#include <stdint.h>
 
uint64_t fcn_00410e90 (int64_t arg_10h, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_80h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_40h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rbp + 0x10;
    *((rbp - 0x60)) = rax;
    rax = rbp - 0x50;
    *((rbp - 0x40)) = rdx;
    r14d = *((rbp - 0x40));
    *((rbp - 0x68)) = 0x10;
    *((rbp - 0x58)) = rax;
    if (rdi != 0) {
        rbx = rdi;
        r12d = esi;
        r13d = 0;
        if (r13 != 0) {
            eax = 0;
            rsi = rbp - 0x80;
            rax = void (*rax)() ();
            if (rax == main) {
                goto label_0;
            }
            edx = r14d;
            esi = r12d;
            rdi = rbp - 0x80;
            void (*r13)() ();
            return rax;
        }
label_0:
        if ((*(0x0041c718) & 4) == 0) {
            edi = *(0x00440780);
            ecx = r14d;
            edx = r12d;
            rsi = rbx;
            fcn_004123b0 ();
            return rax;
        }
        edx = r14d;
        fcn_00405500 (rbx, r12d);
        return rax;
    }
    fcn_00402af7 ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4123b0 */
#include <stdint.h>
 
int64_t fcn_004123b0 (void) {
    rax = 0x14101f321cf0101;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405500 */
#include <stdint.h>
 
uint64_t fcn_00405500 (int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    int64_t var_28h;
    rsi = arg2;
    rdi = arg1;
    r15 = rdi;
    r13d = esi;
    rax = fcn_00410830 ();
    r12 = rax;
    if (rax == main) {
        goto label_0;
    }
    eax = r13d;
    rbx = r12 * 3;
    r14 = *(main);
    *((rbp - 0x38)) = rax;
    rbx <<= 3;
    rax &= *(0x00440910);
    if (rax == *(0x00440940)) {
        eax = fcn_00414b60 (r15, 0x4188e0);
        if (eax == 0) {
            goto label_1;
        }
    }
    r14 += rbx;
    rax = fcn_004053a0 (r15, r13d, rdx);
    *(r14) = rax;
    if (rax != main) {
        goto label_2;
    }
    eax = fcn_00405f8e ();
    if (eax != 0x50) {
        goto label_3;
    }
    rax = *((rbp - 0x38));
    if ((*(main) & rax) == 0) {
        goto label_3;
    }
    if ((*(0x00440950) & rax) == 0) {
        goto label_3;
    }
    rax = fcn_00402b36 ();
    r12 = rax;
    do {
label_0:
        rsp = rbp - 0x28;
        rax = r12;
        return rax;
label_2:
        rbx += *(0x00447b50);
        *((rbx + 0x10)) = 1;
        *((rbx + 0x14)) = r13d;
    } while (1);
label_1:
    rcx = *(r14);
    eax = void (*0x0041b170)() ();
    if (eax == 2) {
        rax = *(0x00447b50);
        rcx = *((rax + 0x18));
        eax = void (*r15)() ();
        if (eax == 2) {
            goto label_4;
        }
    }
    r14d = *(0x00440910);
    r15 = *(0x00447b50);
    r14d = ~r14d;
    r14d &= r13d;
    r15 += rbx;
    esi |= r14d;
    rax = fcn_004053a0 (0x41890e, *(0x00440938), rdx);
    *(r15) = rax;
    if (rax == main) {
        goto label_3;
    }
    r15 = *(0x00447b50);
    esi |= r14d;
    r15 += rbx;
    rax = fcn_004053a0 (0x418915, *(0x00440958), rdx);
    rbx += *(0x00447b50);
    *((r15 + 8)) = rax;
    do {
        *((rbx + 0x10)) = 4;
        *((rbx + 0x14)) = r13d;
        goto label_0;
label_3:
        rsp = rbp - 0x28;
        void (*0x4162a0)() ();
label_4:
        rax = *(0x00447b50);
        rdx = *(rax);
        rbx += rax;
        *(rbx) = rdx;
        rax = *((rax + 0x18));
        *((rbx + 8)) = rax;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402af7 */
#include <stdint.h>
 
int32_t fcn_00402af7 (void) {
    eax = *(0x00440800);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410930 */
#include <stdint.h>
 
uint64_t fcn_00410930 (void) {
    int64_t var_e0h;
    int64_t var_b0h;
    eax = fcn_00411da0 (rdi, rbp - 0xe0);
    rax = main;
    if (eax != 0xffffffff) {
        rax = *((rbp - 0xb0));
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411da0 */
#include <stdint.h>
 
uint64_t fcn_00411da0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r13 = rsi;
    r12 = (int64_t) edi;
    al = fcn_00410c50 (r12d, 6);
    if (al == 0) {
        if ((*(0x0041c718) & 4) == 0) {
            goto label_0;
        }
        al = fcn_00410c50 (r12d, 1);
        if (al != 0) {
            goto label_1;
        }
        fcn_00402acd ();
        return al;
    }
    rcx = *(0x00447b50);
    rax = r12 * 3;
    rsi = r13;
    edx = 0;
    rax = rcx + rax*8;
    rdi = *(rax);
    void (*rdx)() ();
label_1:
    rdx = *(0x00447b50);
    rax = r12 * 3;
    rsi = r13;
    rax = rdx + rax*8;
    rdi = *(rax);
    void (*0x405bc0)() ();
label_0:
    rsi = r13;
    edi = r12d;
    return void (*0x402480)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f6e */
#include <stdint.h>
 
int64_t fcn_00405f6e (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b160);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4124a0 */
#include <stdint.h>
 
int64_t fcn_004124a0 (char ** argv, int64_t arg1) {
    rsi = argv;
    rdi = arg1;
    rdx = 0xd6bf94d5e57a42bd;
    rax = rdi;
    rdx:rax = rax * rdx;
    rax = 0xfffffffd49ef6f00;
    rdx >>= 0x17;
    rax += rdx;
    rdx *= 0x989680;
    rdi -= rdx;
    rdx = rdi * 5;
    rdx *= 5;
    rdx <<= 2;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f7e */
#include <stdint.h>
 
int64_t fcn_00405f7e (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b168);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ef50 */
#include <stdint.h>
 
uint64_t fcn_0040ef50 (int64_t arg1) {
    rdi = arg1;
    r12d = 0;
    rbx = rdi;
    rdi = *((rdi + 8));
    rax = rdi - 1;
    while (1) {
        edi = *(rbx);
        if (edi != 0xffffffff) {
            eax = fcn_00410160 (rdi, rsi);
            *(rbx) = 0xffffffff;
            r12d |= eax;
        }
        eax = r12d;
        *((rbx + 0x10)) = 0;
        return rax;
        eax = fcn_0040f560 (rdi, *((rbx + 0x10)));
        *((rbx + 8)) = main;
        r12d = eax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ffa0 */
#include <stdint.h>
 
int32_t fcn_0040ffa0 (uint32_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    if (rsi > 0x3f) {
        if (*(rdi) != 0x464c457f) {
            goto label_0;
        }
        al = ((*((rdi + 4)) & 0xfd) == 0) ? 1 : 0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40fdd0 */
#include <stdint.h>
 
uint64_t fcn_0040fdd0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = *((rdi + 0x3c));
    if (ax == 0) {
        goto label_0;
    }
    r14 = rsi;
    r13d = (int32_t) ax;
    eax--;
    eax = (int32_t) ax;
    r12 = rdi;
    ebx = r13 - 1;
    r13d -= 2;
    r13d -= eax;
    do {
        eax = *((r12 + 0x3e));
        if (ebx != eax) {
            edx = ebx;
            eax = fcn_00410010 (r12, r14);
            if (*((rax + 4)) == 3) {
                goto label_1;
            }
        }
        ebx--;
    } while (ebx != r13d);
    eax = 0;
    return eax;
label_1:
    rsi = r14;
    rdi = r12;
    rdx = rax;
    goto label_2;
label_0:
    eax = 0;
    return eax;
label_2:
    r12 = *((rdx + 0x18));
    r12 += rdi;
    fcn_00410090 (rdi, rsi, r12, *((rdx + 0x20)));
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40fe50 */
#include <stdint.h>
 
uint64_t fcn_0040fe50 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    ebx = *((rdi + 0x3c));
    if (bx == 0) {
        goto label_1;
    }
    ebx--;
    r13 = rdi;
    r14 = rsi;
    r12 = rdx;
    ebx = (int32_t) bx;
    while (*((rax + 4)) != 2) {
label_0:
        ebx--;
        if (ebx == 0xffffffff) {
            goto label_1;
        }
        edx = ebx;
        rax = fcn_00410010 (r13, r14);
        r8 = rax;
    }
    if (*((rax + 0x38)) != 0x18) {
        goto label_0;
    }
    if (r12 != 0) {
        rdx = 0xaaaaaaaaaaaaaaab;
        rax = rdx;
        rdx:rax = rax * *((r8 + 0x20));
        rdx >>= 4;
        *(r12) = rdx;
    }
    rsi = r14;
    rdi = r13;
    rdx = r8;
    void (*0x40ffe0)() ();
label_1:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ed90 */
#include <stdint.h>
 
int32_t fcn_0040ed90 (int64_t arg1) {
    rdi = arg1;
    eax = 0;
    r12 = *(rdi);
    rdx = r12 - 1;
    if (rdx > 0xfffffffffffffffd) {
        r12 = rbx;
        return eax;
    }
    *(rdi) = 0;
    eax = fcn_0040ef50 (r12);
    ebx = eax;
    eax = fcn_0040f560 (r12, *((r12 + 0x18)));
    eax |= ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40fef0 */
#include <stdint.h>
 
uint64_t fcn_0040fef0 (int64_t arg4, int64_t arg3, int64_t arg2, uint32_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x38)) = rdx;
    *((rbp - 0x40)) = rcx;
    if (*((rdi + 0x38)) == 0) {
        goto label_0;
    }
    r15 = rdi;
    r13 = rsi;
    ebx = 0;
    r14d = 0;
    r12 = 0x7fffffffffffffff;
    do {
        rax = fcn_00410050 (r15, r13, r14d);
        if (*(rax) == 1) {
            rcx = *((rax + 0x10));
            if (r12 > rcx) {
                r12 = rcx;
            }
            rcx += *((rax + 0x28));
            if (rbx >= rcx) {
                rbx = rcx;
                goto label_1;
            }
        }
label_1:
        eax = *((r15 + 0x38));
        r14d++;
    } while (eax > r14d);
    do {
        rax = *((rbp - 0x38));
        if (rax != 0) {
            *(rax) = r12;
        }
        rax = *((rbp - 0x40));
        if (rax != 0) {
            *(rax) = rbx;
        }
        return rax;
label_0:
        r12 = 0x7fffffffffffffff;
        ebx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ffc0 */
#include <stdint.h>
 
int32_t fcn_0040ffc0 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    if (*((rdi + 0x10)) != 0) {
        eax = *((rdi + 4));
        eax &= 0xf;
        eax--;
        al = (eax <= 1) ? 1 : 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402350 */
#include <stdint.h>
 
int64_t fcn_00402350 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rbx = rdi - 2;
    rbx >>= 1;
    rbx++;
    do {
        rbx--;
        fcn_004022d0 (rdi, rsi, rbx);
    } while (rbx != 0);
    if (rdi == 0) {
        goto label_0;
    }
    rdi--;
    do {
        rax = *((rsi + rdi*8));
        rdx = *(rsi);
        *((rsi + rdi*8)) = rdx;
        fcn_004022d0 (rdi, rax, 0);
        rdi--;
    } while (rdi != main);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a100 */
#include <stdint.h>
 
uint64_t fcn_0040a100 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_178h;
    int64_t var_16ch;
    int64_t var_168h;
    int64_t var_160h;
    int64_t var_158h;
    int64_t var_150h;
    int64_t var_130h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x16c)) = edi;
    *((rbp - main)) = rdx;
    if (rdx == 0) {
        goto label_6;
    }
    eax = 0;
    r15 = rsi;
    *((rbp - main)) = rax;
    if (rsi == 0) {
        goto label_7;
    }
    r12d = 0;
    if (rax != 0) {
        goto label_8;
    }
label_3:
    r13 = main;
    r14 = main;
    rbx = r15;
    while (r15 != rax) {
label_0:
        rax = fcn_00412530 (rbx, r13, 0x30);
        rsi = r13;
        r11 = r14 + rax;
        rdx = rax;
        fcn_004154c0 (r14);
        *(r11) = 0x20;
        r10 = r11 + 1;
        *((rbp - main)) = r10;
        *((rbp - main)) = r11;
        rax = fcn_00412530 (r15, rsi, 0x30);
        r10 = *((rbp - main));
        rsi = r13;
        r11 = *((rbp - main));
        rdx = rax;
        fcn_004154c0 (r10);
        rdi = r10 + rax;
        rax = *((rbp - main));
        *(rdi) = 0x20;
        r10 = rdi + 1;
        rsi = *((rax + 0x20));
        if (rsi != 0) {
            if (r15 < segment.__TEXT) {
                goto label_9;
            }
            if (r15 <= 0x449000) {
                goto label_10;
            }
        }
label_9:
        rax = 0x4e574f4e4b4e55;
        rdi += 8;
        *((rdi - 7)) = rax;
label_1:
        eax = 0xa0d;
        rdx = rdi + 2;
        *(rdi) = ax;
        rdx -= r14;
        rax = fcn_00411a10 (*((rbp - 0x16c)), r14);
        if (rax == main) {
            goto label_6;
        }
        rbx = *(rbx);
        if (rbx == 0) {
            goto label_11;
        }
        r15 = *((rbx + 8));
        eax = 0;
    }
    rax = *((rbp - main));
    rdx = r15;
    rcx = *((rax + 0x10));
    do {
        r12--;
        rax = r12;
        rax <<= 5;
        r15 = *((rcx + rax + 0x18));
    } while (r15 == rdx);
    goto label_0;
label_10:
    r9 = *((rax + 0x28));
    r11 = rax + 0x40;
    rdx = rsi;
    ecx = 0;
    edi = r9d;
    edi = ~edi;
    edi += r15d;
    while (rdx > rcx) {
        rax = rdx + rcx;
        rax >>= 1;
        if (edi > *((r11 + rax*8))) {
            goto label_12;
        }
        rdx = rax;
label_2:
    }
    eax = 0;
    if (rcx != 0) {
        if (rsi == rcx) {
            goto label_13;
        }
        eax = ecx;
        if (edi < *((r11 + rcx*8))) {
            goto label_13;
        }
    }
label_5:
    rax = (int64_t) eax;
    *((rbp - main)) = r9;
    rsi += *((rcx + 0x38));
    *((rbp - main)) = rdx;
    fcn_00414ab0 (r10, *((rdx + 0x44)), rcx + rax*8, *((rbp - main)), r8);
    rdx = *((rbp - main));
    r9 = *((rbp - main));
    r8 = r15;
    edx = *((rdx + 0x40));
    r8 -= r9;
    r8 -= rdx;
    if (r8 < 0) {
        goto label_14;
    }
    *(rax) = 0x2b;
    r10 = rax + 1;
    if (r8 != 0) {
        goto label_15;
    }
label_4:
    rax = r8;
    rsi = r13;
    *((rbp - main)) = r10;
    rax >>= 0x3f;
    r8 ^= rax;
    rdi -= rax;
    rax = fcn_00412630 (r8);
    r10 = *((rbp - main));
    rsi = r13;
    rdx = rax;
    rax = fcn_004154c0 (r10);
    rdi = r10 + rax;
    goto label_1;
label_12:
    rcx = rax + 1;
    goto label_2;
label_7:
    r15 = rbp;
    r12d = 0;
    if (rax != 0) {
label_8:
        rax = *((rbp - main));
        r12 = *(rax);
    }
    if (r15 != 0) {
        goto label_3;
    }
label_11:
    eax = 0;
    do {
        return rax;
label_14:
        *(rax) = 0x2d;
label_15:
        edx = 0x7830;
        r10 = rax + 3;
        *((rax + 1)) = dx;
        goto label_4;
label_13:
        eax = rcx - 1;
        goto label_5;
label_6:
        eax = 0xffffffff;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a3f0 */
#include <stdint.h>
 
uint64_t fcn_0040a3f0 (void) {
    eax = *(0x00448026);
    if (*(0x00448027) != 0) {
        goto label_0;
    }
    if (al != 0) {
        goto label_1;
    }
    rax = fcn_004108b0 (0x418733);
    rsi = rax;
    if (rax == 0) {
        goto label_2;
    }
    edi = 0x418738;
    ecx = 5;
    __asm ("repe cmpsb byte [rsi], byte ptr [rdi]");
    al = (rax > 0) ? 1 : 0;
    al = (al != 0) ? 1 : 0;
    *(0x00448026) = al;
    do {
        *(0x00448027) = 1;
        return rax;
label_1:
        *(0x00448027) = 1;
        return rax;
label_0:
        return rax;
label_2:
        eax = *(0x0041c718);
        eax >>= 3;
        eax &= 1;
        *(0x00448026) = al;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b701 */
#include <stdint.h>
 
void fcn_0040b701 (void) {
    uint64_t (*0x0041c080)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x403110 */
#include <stdint.h>
 
int64_t fcn_00403110 (uint32_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    ecx = 0x10;
    if (rdx <= 0x10) {
        rcx = rdx;
    }
    if (rdx == 0) {
        goto label_0;
    }
    edx = 0x7ffff000;
    r8d = 0;
    while (rax < rdx) {
        *(rdi) = eax;
        r8++;
        rdi += 0x10;
        rdx -= rax;
        rsi += 0x10;
        if (rcx <= r8) {
            goto label_1;
        }
        rax = *(rsi);
        *((rdi + 8)) = rax;
        rax = *((rsi + 8));
    }
    *(rdi) = edx;
    do {
label_1:
        rax = r8;
        return rax;
label_0:
        r8d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4033cc */
#include <stdint.h>
 
int64_t fcn_004033cc (int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
    rax = *(0x0041b310);
    return void (*0x40606a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4033dc */
#include <stdint.h>
 
int64_t fcn_004033dc (int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
    rax = *(0x0041b318);
    return void (*0x40606a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4033fc */
#include <stdint.h>
 
void fcn_004033fc (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b328)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411440 */
#include <stdint.h>
 
uint64_t fcn_00411440 (int64_t arg1) {
    rdi = arg1;
    rbx = (int64_t) edi;
    al = fcn_00411e70 (ebx);
    if (al != 0) {
        rdx = *(0x00447b50);
        rax = rbx * 3;
        if (*(main) <= rbx) {
            rbx = *(0x00447b40);
        }
        rax = rdx + rax*8;
        *((rax + 0x10)) = 0;
        *(0x00447b40) = rbx;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411e70 */
#include <stdint.h>
 
uint64_t fcn_00411e70 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    if (edi >= 0) {
        rdi = (int64_t) edi;
        if (rdi >= *(0x00447b48)) {
            goto label_0;
        }
        rdx = *(0x00447b50);
        rax = rdi * 3;
        rax = rdx + rax*8;
        ecx = *((rax + 0x10));
        al = (ecx != 0) ? 1 : 0;
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4033ec */
#include <stdint.h>
 
int64_t fcn_004033ec (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b320);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410830 */
#include <stdint.h>
 
int64_t fcn_00410830 (void) {
    rax = *(0x00447b40);
    rdi = *(0x00447b48);
    if (rax >= rdi) {
        goto label_0;
    }
    rcx = *(0x00447b50);
    rdx = rax * 3;
    rdx = rcx + rdx*8 + 0x10;
    ecx = 0;
    while (esi != 0) {
        rax++;
        rdx += 0x18;
        ecx = 1;
        if (rax == rdi) {
            goto label_1;
        }
        esi = *(rdx);
    }
    if (cl == 0) {
        goto label_2;
    }
    *(0x00447b40) = rax;
    return rax;
label_1:
    *(0x00447b40) = rdi;
    do {
        rax = fcn_00410960 (rdi);
        rax = (int64_t) eax;
        return rax;
label_0:
        rdi = rax;
    } while (1);
label_2:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410960 */
#include <stdint.h>
 
uint64_t fcn_00410960 (int64_t arg1) {
    rdi = arg1;
    rdx = (int64_t) edi;
    eax = edx;
    rbx = *(0x00447b48);
    if (rdx < rbx) {
        goto label_0;
    }
    eax = fcn.0040b70d;
    if (rax == 0) {
        goto label_1;
    }
    r12d = rdx + 1;
    r14 = rbx + rbx;
    rdi = *(main);
    r13 = rdx;
    r12 = (int64_t) r12d;
    edx = 0;
    if (r14 >= r12) {
        r12 = r14;
    }
    rsi = r12 * 3;
    rsi <<= 3;
    if (rdi == 0x447b58) {
        rdi = rdx;
    }
    rax = void (*rax)() ();
    if (rax == 0) {
        goto label_2;
    }
    rdx = r14 + rbx;
    rdx = rax + rdx*8 + 0x10;
    do {
        rbx++;
        *(rdx) = 0;
        rdx += 0x18;
    } while (r12 > rbx);
    *(0x00447b48) = r12;
    *(0x00447b50) = rax;
    eax = r13d;
label_0:
    return rax;
label_1:
    fcn_00402b4b ();
    return rax;
label_2:
    fcn_00402b8a ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b4b */
#include <stdint.h>
 
int32_t fcn_00402b4b (void) {
    eax = *(0x00440838);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b8a */
#include <stdint.h>
 
int32_t fcn_00402b8a (void) {
    eax = *(0x00440868);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x403c50 */
#include <stdint.h>
 
uint64_t fcn_00403c50 (int64_t arg_10h, int64_t arg_18h, int64_t arg_20h, int64_t arg_28h, int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2) {
    int64_t var_220h;
    int64_t var_28h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    r15d = r9d;
    r14 = r8;
    r13 = rcx;
    r12 = rdx;
    rbx = rsi;
    eax = fcn_00404d00 (rdi, main);
    if (eax == 0xffffffff) {
        goto label_1;
    }
    rax = fcn_00403d30 (rbx + 8);
    rbx = rax;
    if (rax == 0) {
        goto label_1;
    }
    rdi = r12;
    rax = fcn_00404000 ();
    r12 = rax;
    if (rax == 0) {
        goto label_2;
    }
    r8 = r13;
    r9 = r14;
    rdx = rbx;
    rcx = main;
    r13d = 0;
    eax = *((rbp + 0x10));
    ah |= 4;
    eax = uint64_t (*0x0041b0e0)(uint64_t, uint64_t, uint64_t, uint64_t*, uint64_t*, uint64_t*) (r15, rax, rax, *((rbp + 0x18)), *((rbp + 0x20)), *((rbp + 0x28)));
    while (1) {
label_0:
        rdi = rbx;
        fcn_0040b701 ();
        rdi = r12;
        fcn_0040b701 ();
        rsp = rbp - 0x28;
        eax = r13d;
        return rax;
        eax = fcn_004162a0 ();
        r13d = eax;
    }
label_1:
    r12d = 0;
    ebx = 0;
    r13d = 0xffffffff;
    goto label_0;
label_2:
    r13d = 0xffffffff;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405ef5 */
#include <stdint.h>
 
void fcn_00405ef5 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b0c0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f18 */
#include <stdint.h>
 
int64_t fcn_00405f18 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b0d8);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x403720 */
#include <stdint.h>
 
int32_t fcn_00403720 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_34h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_0:
    if (rdx == 0) {
        goto label_1;
    }
    r15 = rcx;
    r14 = rsi;
    r13 = rdi;
    r12 = rdx;
    ebx = 0;
    do {
        rdx = r12;
        rsi = r14 + rbx;
        r8d = 0;
        rdi = r13;
        rdx -= rbx;
        rcx = rbp - 0x34;
        eax = 0;
        void (*r15)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t) (rbx, r12, r13, r14, r15);
        eax = *((rbp - 0x34));
        rbx += rax;
    } while (r12 > rbx);
    return eax;
label_1:
    return eax;
    ecx = 0x405fd4;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405ff4 */
#include <stdint.h>
 
int64_t fcn_00405ff4 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b218);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x416315 */
#include <stdint.h>
 
int32_t fcn_00416315 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = esi;
    if (eax == 0) {
        eax++;
    }
    rsp = *(rdi);
    rbx = *((rdi + 8));
    rbp = *((rdi + 0x10));
    r12 = *((rdi + 0x18));
    r13 = *((rdi + 0x20));
    r14 = *((rdi + 0x28));
    r15 = *((rdi + 0x30));
    uint64_t (*rdi + 0x38)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4156ef */
#include <stdint.h>
 
uint64_t fcn_004156ef (int64_t arg_8h, int64_t arg1) {
    rdi = arg1;
    rax = rsp + 8;
    *(rdi) = rax;
    *((rdi + 8)) = rbx;
    *((rdi + 0x10)) = rbp;
    *((rdi + 0x18)) = r12;
    *((rdi + 0x20)) = r13;
    *((rdi + 0x28)) = r14;
    *((rdi + 0x30)) = r15;
    rax = *(rsp);
    *((rdi + 0x38)) = rax;
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b720 */
#include <stdint.h>
 
uint64_t fcn_0040b720 (int64_t arg3, int64_t arg2, int64_t arg1) {
    uint32_t var_3ch;
    int64_t var_38h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
label_0:
        rdi = r15;
        fcn_0040b701 ();
        void (*0x402b21)() ();
        r15d = edx;
        r13 = rdi;
        r12 = rsi;
        rax = fcn_0041571a (rdi, rsi, rdx);
        rbx = rax;
        rax = fcn_0041571a (rsi, rsi, rdx);
        rdi = rbx + rax + 2;
        r14 = rax;
        rax = fcn_0040b707 ();
        rdx = rbx;
        rsi = r13;
        rbx += rax;
        fcn_004154c0 (rax);
        *(rbx) = 0x3d;
        rsi = r12;
        rdx = r14 + 1;
        rax = fcn_004154c0 (rbx + 1);
        esi = 0;
        rdi = rax;
        sil = (r15d != 0) ? 1 : 0;
        r15 = rdi;
        *((rbp - 0x3c)) = esi;
        rax = fcn_0041576b (rdi, 0x3d, rdx, rcx, r8);
    } while (rax == 0);
    r14 = *(0x00448018);
    r13 = rax + 1;
    r13 -= r15;
    rdi = *(r14);
    *((rbp - 0x38)) = r14;
    if (rdi == 0) {
        goto label_3;
    }
    r12d = 0;
    ebx = 0;
    while (eax != 0) {
        ebx = r12 + 1;
        rcx = *((rbp - 0x38));
        rax = rbx;
        rbx <<= 3;
        r14 = rcx + rbx;
        rdi = *(r14);
        if (rdi == 0) {
            goto label_4;
        }
        r12d = eax;
        eax = fcn_00414c00 (rdi, r15, r13);
    }
    if (*((rbp - 0x3c)) == 0) {
        goto label_5;
    }
label_1:
    rdi = *(r14);
    fcn_0040b701 ();
    rax = *(0x00448018);
    *((rax + rbx)) = r15;
label_2:
    eax = 0;
    return rax;
label_4:
    r12d += 2;
    if (r12d > 0x1ff) {
        goto label_0;
    }
    r12 <<= 3;
    do {
        rax = *((rbp - 0x38));
        *((rax + r12)) = 0;
        goto label_1;
label_5:
        rdi = r15;
        fcn_0040b701 ();
        goto label_2;
label_3:
        r14 = *((rbp - 0x38));
        r12d = 8;
        ebx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x403710 */
#include <stdint.h>
 
void fcn_00403710 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    ecx = 0x406014;
    return void (*0x4036a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f750 */
#include <stdint.h>
 
uint64_t fcn_0040f750 (uint32_t arg1) {
    int64_t var_38h;
    rdi = arg1;
    do {
label_0:
        void (*0x402b21)() ();
    } while (rdi == 0);
    r13 = rdi;
    if (*(rdi) == 0) {
        goto label_0;
    }
    rax = fcn_0041576b (rdi, 0x3d, rdx, rcx, r8);
    if (rax != 0) {
        goto label_0;
    }
    rbx = *(0x00448018);
    if (rbx == 0) {
        goto label_2;
    }
    r15d = 0;
    rax = fcn_0041571a (r13, rsi, rdx);
    r14 = rax;
label_1:
    r12 = *(rbx);
    *((rbp - 0x38)) = rbx;
    if (r12 == 0) {
        goto label_3;
    }
    do {
        eax = fcn_00414c00 (r12, r13, r14);
        r8d = eax;
        rax = rbx + 8;
        if (r8d == 0) {
            if (*((r12 + r14)) == 0x3d) {
                goto label_4;
            }
        }
        if (r15 != 0) {
            goto label_5;
        }
        r12 = *(rax);
        if (r12 == 0) {
            goto label_2;
        }
        *((rbp - 0x38)) = rax;
        rbx = rax;
    } while (1);
label_3:
    if (r15 == 0) {
        goto label_2;
    }
label_5:
    rax = *((rbp - 0x38));
    *((rax + r15*8)) = r12;
    if (*(rbx) == 0) {
        goto label_2;
    }
    rax = rbx + 8;
    do {
        rbx = rax;
        goto label_1;
label_2:
        eax = 0;
        return rax;
label_4:
        r15--;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404d00 */
#include <stdint.h>
 
void fcn_00404d00 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = 0xffffffff;
    return void (*0x404be0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x403d30 */
#include <stdint.h>
 
uint64_t fcn_00403d30 (int64_t arg1) {
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_4ch;
    int64_t var_48h;
    uint32_t var_40h;
    uint32_t var_38h;
    rdi = arg1;
    rcx = *(rdi);
    *((rbp - 0x48)) = 0;
    *((rbp - 0x40)) = 0;
    *((rbp - 0x38)) = 0;
    if (rcx == 0) {
        goto label_10;
    }
    r13 = rdi;
    r15d = 1;
label_4:
    rdi = rcx;
    *((rbp - 0x58)) = rcx;
    fcn_00414ba0 (rdi, 0x41882c);
    rcx = *((rbp - 0x58));
    if (*((rcx + rax)) == 0) {
        goto label_11;
    }
label_3:
    eax = fcn_0040b4f0 (rbp - 0x48, rbp - 0x40, rbp - 0x38, 0x22);
    if (eax == 0xffffffff) {
        goto label_7;
    }
    rcx = *(r13);
    r14d = 1;
label_1:
    ebx = 0;
    while (dl < 0) {
        eax = fcn_00414d40 (rdi, rbp - 0x50, rdx, rcx, r8, r9);
        edx = eax;
        esi = eax;
        edx >>= 0x1f;
        esi ^= edx;
        esi -= edx;
        edx = *((rbp - 0x50));
        rsi = (int64_t) esi;
        rbx += rsi;
        if (edx <= 0xd7ff) {
            goto label_12;
        }
        eax = fcn_004149f0 (rbp - 0x4c, 2, rdx, rcx);
        edx = eax;
        edi = eax;
        rax = *((rbp - 0x40));
        edx >>= 0x1f;
        edi ^= edx;
        edi -= edx;
        r12 = (int64_t) edi;
        rdx = rax + r12;
        if (rdx >= *((rbp - 0x38))) {
            goto label_13;
        }
label_0:
        rdx = *((rbp - 0x48));
        rsi = rbp - 0x4c;
        rdx = r12 + r12;
        fcn_004154c0 (rdx + rax*2);
        rax = *((rbp - 0x40));
        r12 += rax;
        *((rbp - 0x40)) = r12;
        if (rax == main) {
            goto label_7;
        }
        rcx = *(r13);
        rdi = rcx + rbx;
        edx = *(rdi);
        if (r14d != 0) {
            goto label_14;
        }
        if (dl == 0) {
            goto label_15;
        }
label_2:
    }
    *((rbp - 0x50)) = edx;
    rbx++;
label_12:
    rax = *((rbp - 0x40));
    r12d = 1;
    *((rbp - 0x4c)) = dx;
    rdx = rax + r12;
    if (rdx < *((rbp - 0x38))) {
        goto label_0;
    }
label_13:
    al = fcn_0040f180 (rbp - 0x48, rbp - 0x38, 2, r12);
    if (al == 0) {
        goto label_7;
    }
    rax = *((rbp - 0x40));
    goto label_0;
label_11:
    r14d = 0;
    goto label_1;
label_14:
    if (dl != 0x5c) {
        goto label_16;
    }
    eax = r15d;
    eax -= ebx;
    do {
        r12d = rax + rbx;
        rbx++;
        edx = *((rcx + rbx));
    } while (dl == 0x5c);
    r12d += r12d;
label_5:
    eax = 0;
    al = (dl == 0x22) ? 1 : 0;
    r12d += eax;
    while (r12d != 0) {
        r12d--;
        eax = fcn_0040b4f0 (rbp - 0x48, rbp - 0x40, rbp - 0x38, 0x5c);
        if (eax == 0xffffffff) {
            goto label_7;
        }
    }
    rdi = *(r13);
    rdi += rbx;
    edx = *(rdi);
    if (dl != 0) {
        goto label_2;
    }
label_15:
    rsi = rbp - 0x40;
    rdi = rbp - 0x48;
    if (r14d != 0) {
        goto label_17;
    }
label_6:
    r13 += 8;
    if (*(r13) == 0) {
        goto label_18;
    }
    *((rbp - 0x60)) = rsi;
    *((rbp - 0x58)) = rdi;
    eax = fcn_0040b4f0 (rdi, rsi, rbp - 0x38, 0x20);
    if (eax == 0xffffffff) {
        goto label_7;
    }
    rcx = *(r13);
    rdi = *((rbp - 0x58));
    rsi = *((rbp - 0x60));
    if (rcx == 0) {
        goto label_3;
    }
    goto label_4;
label_8:
    rax = fcn_00402ab8 ();
label_7:
    rdi = *((rbp - 0x48));
    eax = fcn_0040b701 ();
    eax = 0;
label_9:
    return rax;
label_16:
    r12d = 0;
    goto label_5;
label_17:
    *((rbp - 0x60)) = rsi;
    *((rbp - 0x58)) = rdi;
    eax = fcn_0040b4f0 (rdi, rsi, rbp - 0x38, 0x22);
    rdi = *((rbp - 0x58));
    rsi = *((rbp - 0x60));
    if (eax != 0xffffffff) {
        goto label_6;
    }
    goto label_7;
label_18:
    eax = fcn_0040b4f0 (rdi, rsi, rbp - 0x38, 0);
    if (eax == 0xffffffff) {
        goto label_7;
    }
    if (*((rbp - 0x40)) > main) {
        goto label_8;
    }
    do {
        rax = *((rbp - 0x48));
        goto label_9;
label_10:
        fcn_00402b21 ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404000 */
#include <stdint.h>
 
uint64_t fcn_00404000 (void) {
    int64_t var_60h;
    int64_t var_54h;
    int64_t var_48h;
    int64_t var_44h;
    uint32_t var_40h;
    int64_t var_38h;
    *((rbp - 0x40)) = 8;
    *((rbp - 0x38)) = 0;
    rax = fcn_00404190 (rdi);
    *((rbp - 0x60)) = rax;
    if (rax == 0) {
        goto label_3;
    }
    rdi = *((rbp - 0x40));
    esi = 2;
    rbx = rax;
    rax = fcn_0040b6fb ();
    *((rbp - 0x38)) = rax;
    if (rax == 0) {
        goto label_3;
    }
    rdi = *(rbx);
    r15 = rbx;
    r13d = 0;
    if (rdi == 0) {
        goto label_2;
    }
label_1:
    r14d = 0;
    while (dl < 0) {
        eax = fcn_00414d40 (rdi, rbp - 0x48, rdx, rcx, r8, r9);
        edx:eax = (int64_t) eax;
        eax ^= edx;
        r8d = eax;
        r8d -= edx;
        edx = *((rbp - 0x48));
        if (edx <= 0xd7ff) {
            goto label_4;
        }
        eax = fcn_004149f0 (rbp - 0x44, 2, rdx, rcx);
        edx = eax;
        edi = eax;
        edx >>= 0x1f;
        edi ^= edx;
        edi -= edx;
        rbx = (int64_t) edi;
        r12 = r13 + rbx;
        if (r12 >= *((rbp - 0x40))) {
            goto label_5;
        }
label_0:
        rax = *((rbp - 0x38));
        rsi = rbp - 0x44;
        rdx = rbx + rbx;
        fcn_004154c0 (rax + r13*2);
        if (r13 == main) {
            goto label_3;
        }
        eax = *((rbp - 0x48));
        if (eax == 0) {
            goto label_6;
        }
        r8 = (int64_t) r8d;
        rdi = *(r15);
        r13 = r12;
        r14 += r8;
        rdi += r14;
        edx = *(rdi);
    }
    *((rbp - 0x48)) = edx;
    r8d = 1;
label_4:
    ebx = 1;
    *((rbp - 0x44)) = dx;
    r12 = r13 + rbx;
    if (r12 < *((rbp - 0x40))) {
        goto label_0;
    }
label_5:
    *((rbp - 0x54)) = r8d;
    al = fcn_0040f180 (rbp - 0x38, rbp - 0x40, 2, rbx);
    r8d = *((rbp - 0x54));
    if (al != 0) {
        goto label_0;
    }
label_3:
    rdi = *((rbp - 0x60));
    fcn_0040b701 ();
    rdi = *((rbp - 0x38));
    eax = fcn_0040b701 ();
    eax = 0;
    do {
        return rax;
label_6:
        rdi = *((r15 + 8));
        r15 += 8;
        if (rdi == 0) {
            goto label_7;
        }
        r13 = r12;
        goto label_1;
label_2:
        rdi = *((rbp - 0x60));
        fcn_0040b701 ();
        rax = *((rbp - 0x38));
    } while (1);
label_7:
    r9 = r12 + 1;
    if (r9 <= 0x7fff) {
        goto label_2;
    }
    fcn_00402ab8 ();
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414ba0 */
#include <stdint.h>
 
int64_t fcn_00414ba0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    ecx = *(rdi);
    r8d = 0;
    if (cl == 0) {
        goto label_1;
    }
    r9d = *(rsi);
    r8d = 0;
label_0:
    eax = r9d;
    edx = 0;
    if (r9b != 0) {
        goto label_2;
    }
    goto label_3;
    do {
        eax = rdx + 1;
        rdx = rax;
        eax = *((rsi + rax));
        if (al == 0) {
            goto label_3;
        }
label_2:
    } while (cl != al);
label_1:
    rax = r8;
    return rax;
label_3:
    r8++;
    ecx = *((rdi + r8));
    if (cl != 0) {
        goto label_0;
    }
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b4f0 */
#include <stdint.h>
 
int64_t fcn_0040b4f0 (int64_t arg4, uint32_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r13d = ecx;
    r12 = rdi;
    rbx = rsi;
    rsi = rdx;
    rax = *(rbx);
    rdx = rax + 1;
    if (rdx >= *(rsi)) {
        goto label_1;
    }
label_0:
    rdx = *(r12);
    *((rdx + rax*2)) = r13w;
    rax = *(rbx);
    rdx = rax + 1;
    *(rbx) = rdx;
    do {
        return rax;
label_1:
        eax = fcn_0040f180 (rdi, rsi, 2, 1);
        r8d = eax;
        eax = 0xffffffff;
    } while (r8b == 0);
    rax = *(rbx);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414d40 */
#include <stdint.h>
 
int32_t fcn_00414d40 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    eax = 1;
    ebx = *(rdi);
    edx = ebx;
    edx &= 0xffffffc0;
    if (dl == 0x80) {
        goto label_4;
    }
    edx = 1;
    if (ebx > 0x7f) {
        goto label_5;
    }
label_0:
    if (rsi != 0) {
        *(rsi) = ebx;
    }
    eax = edx;
label_2:
    rcx = rdx;
    rbx = rdx;
    rsi = rdx;
    rdi = rdx;
    r8 = rdx;
    r9 = rdx;
    return eax;
    do {
        eax = edx;
label_4:
        edx = rax + 1;
        eax = *((rdi + rax));
        ecx = eax;
        ecx &= 0xffffffc0;
    } while (cl == 0x80);
    ebx = (int32_t) al;
    if (ebx <= 0x7f) {
        goto label_0;
    }
label_5:
    if (ebx > 0xfb) {
        goto label_6;
    }
    ecx = ebx;
    eax = 1;
    r8d = 7;
    cl ^= 0xff;
    __asm ("bsr ecx, ecx");
    eax <<= cl;
    r8d -= ecx;
    eax--;
    eax |= 3;
    ebx &= eax;
    if (r8d <= 1) {
        goto label_0;
    }
label_3:
    r9d = 1;
    r9d -= edx;
    goto label_7;
label_1:
    eax &= 0x3f;
    ebx <<= 6;
    ebx |= eax;
    eax = r9 + rdx;
    if (r8d <= eax) {
        goto label_0;
    }
label_7:
    ecx = edx;
    edx++;
    eax = *((rdi + rcx));
    ecx = eax;
    ecx &= 0xffffffc0;
    if (cl == 0x80) {
        goto label_1;
    }
    eax = 0xffffffff;
    if (rsi == 0) {
        goto label_2;
    }
    *(rsi) = 0xfffd;
    goto label_2;
label_6:
    ebx &= 3;
    r8d = 6;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4149f0 */
#include <stdint.h>
 
int32_t fcn_004149f0 (int64_t arg4, uint32_t arg3, uint32_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    if (rsi == 0) {
        goto label_2;
    }
    if (edx > 0x1f) {
        goto label_3;
    }
    if (cl == 0) {
        goto label_3;
    }
    eax = edx;
    if (rsi > 1) {
        goto label_4;
    }
label_1:
    *(rdi) = ax;
    eax = 1;
    do {
label_0:
        rcx = rdx;
        rsi = rdx;
        rdi = rdx;
        return eax;
label_3:
        eax = rdx - 0xe000;
        if (eax <= 0x1fff) {
            goto label_5;
        }
        if (edx <= 0xd7ff) {
            goto label_5;
        }
        edx -= 0x10000;
        if (rsi <= 1) {
            goto label_6;
        }
        if (edx > 0xfffff) {
            goto label_6;
        }
        eax = edx;
        dx &= 0x3ff;
        eax >>= 0xa;
        dx -= 0x2400;
        ax -= 0x2800;
        *((rdi + 2)) = dx;
        *(rdi) = ax;
        rcx = rdx;
        eax = 2;
        rsi = rdx;
        rdi = rdx;
        return eax;
label_2:
        return eax;
label_4:
        ecx = 0xffffd800;
        dx |= 0xdc00;
        eax = 2;
        *(rdi) = cx;
        *((rdi + 2)) = dx;
    } while (1);
label_6:
    eax = 0xfffffffd;
    *(rdi) = ax;
    eax = 0xffffffff;
    goto label_0;
label_5:
    eax = edx;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402ab8 */
#include <stdint.h>
 
int32_t fcn_00402ab8 (void) {
    eax = *(0x004407a8);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404190 */
#include <stdint.h>
 
uint64_t fcn_00404190 (uint32_t arg1) {
    rdi = arg1;
    r13 = rdi;
    r12d = 0;
    if (*(rdi) == 0) {
        goto label_3;
    }
    do {
        rbx = r12;
        r12 = r12 + 1;
    } while (*((r13 + rbx*8 + 8)) != 0);
    r14 = rbx*8 + 0x10;
    rdi = r14;
    rax = fcn_0040b707 ();
    if (rax == 0) {
        goto label_4;
    }
    rsi = r13;
    rdx = r14;
    rax = fcn_004154c0 (rax);
    if (r12 == 1) {
        goto label_4;
    }
    r8d = 1;
label_0:
    r10 = *((rax + r8*8));
    rcx = r8*8;
label_1:
    r9 = *((rax + rcx - 8));
    esi = *(r10);
    edi = 0;
    edx = *(r9);
    if (dl == sil) {
        goto label_5;
    }
    goto label_6;
    do {
        rdi++;
        esi = *((r10 + rdi));
        edx = *((r9 + rdi));
        if (sil != dl) {
            goto label_6;
        }
label_5:
    } while (dl != 0);
    rdi = rax + rcx;
    do {
        *(rdi) = r10;
        rdx = r8 + 1;
        if (rbx == r8) {
            goto label_4;
        }
label_2:
        r8 = rdx;
        goto label_0;
label_6:
        rdi = rax + rcx;
    } while (esi >= edx);
    *((rax + rcx)) = r9;
    rcx -= 8;
    if (rcx != 0) {
        goto label_1;
    }
    rdi = rax;
    rdx = r8 + 1;
    *(rdi) = r10;
    if (rbx != r8) {
        goto label_2;
    }
    do {
label_4:
        return rax;
label_3:
        edi = 8;
        rax = fcn_0040b707 ();
    } while (rax == 0);
    rsi = r13;
    edx = 8;
    fcn_004154c0 (rax);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b6fb */
#include <stdint.h>
 
void fcn_0040b6fb (void) {
    uint64_t (*0x0041c078)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4047d0 */
#include <stdint.h>
 
int64_t fcn_004047d0 (int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    uint32_t var_40h;
    int64_t var_38h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rsi;
    rax += rdx;
    r15 = 0xaaaaaaaaaaaaaaab;
    r13 = r8;
    r12d = 0;
    *((rbp - 0x50)) = rdi;
    *((rbp - 0x68)) = rsi;
    *((rbp - 0x60)) = rdx;
    *((rbp - 0x58)) = rcx;
    *((rbp - 0x48)) = rsi;
    *((rbp - 0x40)) = rax;
    eax = fcn_00404760 (rbp - 0x50);
    *((rbp - 0x38)) = eax;
    edi = eax;
    if (eax != 0) {
        goto label_1;
    }
    goto label_10;
    do {
        eax = fcn_00404760 (rbp - 0x50);
        *((rbp - 0x38)) = eax;
        edi = eax;
        if (eax == 0) {
            goto label_11;
        }
label_1:
        eax = fcn_004148d0 (rdi, rsi);
    } while (eax != 0);
    r12++;
    if (r12 < r13) {
        rax = *((rbp - 0x48));
        edx = 0;
        rbx = *((rbp - 0x58));
        if (rax >= *((rbp - 0x40))) {
            rax = rdx;
        }
        *((rbx + r12*8 - 8)) = rax;
    }
    r14d = *((rbp - 0x38));
    ebx = 0;
    if (r14d == 0) {
        goto label_12;
    }
label_0:
    if (bl == 0) {
        eax = fcn_004148d0 (r14d, rsi);
        if (eax != 0) {
            goto label_13;
        }
    }
    if (r14d == 0x22) {
        goto label_14;
    }
    if (r14d == 0x5c) {
        goto label_14;
    }
    rax = (int64_t) r14d;
    if (r14d <= 0x7f) {
        goto label_15;
    }
    al = fcn_00414845 (r14d);
    while (rdx < *((rbp - 0x40))) {
        rcx = rdx + 1;
        *((rbp - 0x48)) = rcx;
        *(rdx) = al;
        rax >>= 8;
        if (rax == 0) {
            goto label_16;
        }
label_15:
        rdx = *((rbp - 0x48));
    }
label_16:
    eax = fcn_00404760 (rbp - 0x50);
    *((rbp - 0x38)) = eax;
    r14d = eax;
label_2:
    if (r14d != 0) {
        goto label_0;
    }
label_13:
    rax = *((rbp - 0x48));
    if (rax < *((rbp - 0x40))) {
label_7:
        rdx = rax + 1;
        *((rbp - 0x48)) = rdx;
        *(rax) = 0;
    }
    edi = *((rbp - 0x38));
    if (edi != 0) {
        goto label_1;
    }
    rax = *((rbp - 0x48));
label_8:
    r8d = r12d;
    goto label_9;
label_14:
    eax = *((rbp - 0x38));
    esi = 0;
    if (eax != 0x5c) {
        goto label_17;
    }
    do {
        eax = fcn_00404760 (rbp - 0x50);
        *((rbp - 0x38)) = eax;
        rsi++;
    } while (eax == 0x5c);
    if (eax != 0x22) {
        goto label_18;
    }
label_5:
    r9d = 0;
    do {
        eax = fcn_00404760 (rbp - 0x50);
        rcx = r9;
        *((rbp - 0x38)) = eax;
        r9++;
    } while (eax == 0x22);
    if (r9 == 0) {
        goto label_18;
    }
    rdx = rsi;
    if (rsi <= 1) {
        goto label_19;
    }
    do {
        rax = *((rbp - 0x48));
        if (rax < *((rbp - 0x40))) {
            rdi = rax + 1;
            *((rbp - 0x48)) = rdi;
            *(rax) = 0x5c;
        }
        rdx -= 2;
    } while (rdx > 1);
    esi &= 1;
label_19:
    if (rsi != 0) {
        goto label_20;
    }
label_4:
    if (bl == 0) {
        goto label_21;
    }
    rsi = r9 + 1;
    rdi = r9;
label_6:
    edx = 3;
    if (rsi <= 2) {
        goto label_22;
    }
    do {
        rax = *((rbp - 0x48));
        if (rax < *((rbp - 0x40))) {
            rcx = rax + 1;
            *((rbp - 0x48)) = rcx;
            *(rax) = 0x22;
        }
        rdx += 3;
    } while (rdx <= rsi);
label_22:
    rax = 0x5555555555555555;
    rdi *= r15;
    bl = (rdi <= rax) ? 1 : 0;
label_3:
    r14d = *((rbp - 0x38));
    goto label_2;
label_18:
    rdx = rsi - 1;
    if (rsi == 0) {
        goto label_23;
    }
    do {
        rax = *((rbp - 0x48));
        if (rax < *((rbp - 0x40))) {
            rcx = rax + 1;
            *((rbp - 0x48)) = rcx;
            *(rax) = 0x5c;
        }
        rdx--;
    } while (rdx != main);
    goto label_3;
label_20:
    rax = *((rbp - 0x48));
    if (rax < *((rbp - 0x40))) {
        rdx = rax + 1;
        *((rbp - 0x48)) = rdx;
        *(rax) = 0x22;
    }
    if (rcx == 0) {
        goto label_3;
    }
    r9 = rcx;
    goto label_4;
label_17:
    if (eax == 0x22) {
        goto label_5;
    }
    r14d = eax;
    goto label_2;
label_11:
    rax = *((rbp - 0x48));
    r8d = r12d;
label_9:
    if (rax < *((rbp - 0x40))) {
        rdx = rax + 1;
        *((rbp - 0x48)) = rdx;
        *(rax) = 0;
    }
    rbx = *((rbp - 0x60));
    if (rbx != 0) {
        rsi = *((rbp - 0x68));
        rax = *((rbp - 0x48));
        rbx--;
        rax -= rsi;
        if (rax > rbx) {
            rax = rbx;
        }
        *((rsi + rax)) = 0;
    }
    if (r13 != 0) {
        r13--;
        rax = *((rbp - 0x58));
        if (r13 > r12) {
            r13 = r12;
        }
        *((rax + r13*8)) = 0;
    }
    eax = r8d;
    return rax;
label_21:
    rdi = r9 - 1;
    rsi = r9;
    goto label_6;
label_23:
    eax = *((rbp - 0x38));
    r14d = *((rbp - 0x38));
    goto label_2;
label_12:
    rax = *((rbp - 0x48));
    if (rax < *((rbp - 0x40))) {
        goto label_7;
    }
    goto label_8;
label_10:
    rax = *((rbp - 0x48));
    r8d = 0;
    goto label_9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404b30 */
#include <stdint.h>
 
uint64_t fcn_00404b30 (uint32_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, uint32_t arg1) {
    int64_t var_40h;
    uint32_t var_38h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = rdx;
    r13d = 0;
    *((rbp - 0x40)) = rcx;
    *((rbp - 0x38)) = r8;
    if (rdx == 0) {
        goto label_0;
    }
    rbx = rdi;
    r12 = rdx - 1;
    r14 = rsi;
    if (*(rdi) == 0) {
        goto label_1;
    }
    do {
        eax = r13 + 1;
        r15 = (int64_t) r13d;
        rdx = (int64_t) eax;
        if (rdx < *((rbp - 0x38))) {
            rdi = *((rbp - 0x40));
            r13d = eax;
            *((rdi + r15*8)) = r14;
            r15 = rdx;
        }
        rax = fcn_00414e40 (r14, r12, rbx, rcx, r8, r9);
        rsi = rax;
        rbx = rbx + rdx*2;
        r14 = r14 + rax + 1;
        rsi = ~rsi;
        r12 += rsi;
    } while (*(rbx) != 0);
    do {
        *(r14) = 0;
label_0:
        if (r15 < *((rbp - 0x38))) {
            rax = *((rbp - 0x40));
            *((rax + r15*8)) = 0;
        }
        eax = r13d;
        return rax;
label_1:
        r15d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f84e */
#include <stdint.h>
 
int64_t fcn_0040f84e (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rsi;
    rdi = rdx;
    rsi = rcx;
    rdx = r8;
    rcx = r9;
    rbp = 0;
    void (*rax)() ();
    __asm ("ud2");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410600 */
#include <stdint.h>
 
int32_t fcn_00410600 (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = esi;
    edx = edi;
    eax >>= 2;
    edx &= 2;
    eax &= 0x20000000;
    eax |= edx;
    edx = esi;
    edx <<= 5;
    edx &= 0x80000000;
    eax |= edx;
    edx = rdi*4;
    edx &= 4;
    eax |= edx;
    edx = rdi*8;
    edx &= 0x20;
    eax |= edx;
    esi &= 2;
    if (esi != 0) {
        edx = eax;
        edi &= 3;
        edx |= 1;
        if (edi != 3) {
            eax = edx;
            goto label_0;
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404760 */
#include <stdint.h>
 
uint64_t fcn_00404760 (int64_t arg1) {
    rdi = arg1;
    rdx = *(rdi);
    do {
        r8d = *(rdx);
        rcx = rdx + 2;
        eax = r8d;
        if (r8d != 0) {
            ax &= 0xfc00;
            if (ax == 0xdc00) {
                goto label_0;
            }
            if (ax == 0xd800) {
                goto label_1;
            }
        }
        *(rdi) = rcx;
        eax = r8d;
        return eax;
label_1:
        rax = rdx + 4;
        *(rdi) = rax;
        eax = *((rdx + 2));
        if (eax == 0) {
            goto label_2;
        }
        r8d -= 0xd800;
        r8d <<= 0xa;
        r8d = rax + r8 + 0x2400;
        eax = r8d;
        return rax;
label_0:
        rdx = rcx;
    } while (1);
label_2:
    r8d = 0;
    eax = r8d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4148d0 */
#include <stdint.h>
 
uint32_t fcn_004148d0 (int64_t arg3, uint32_t arg1) {
    rdx = arg3;
    rdi = arg1;
    eax = rdi - 9;
    al = (eax <= 4) ? 1 : 0;
    dl = (edi == 0x20) ? 1 : 0;
    eax |= edx;
    eax = (int32_t) al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414845 */
#include <stdint.h>
 
int64_t fcn_00414845 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    if (edi <= 0x7f) {
        goto label_0;
    }
    __asm ("bsr ecx, edi");
    ecx = *((rcx*2 + 0x4189d2));
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
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414e40 */
#include <stdint.h>
 
int64_t fcn_00414e40 (int64_t arg3, uint32_t arg2, int64_t arg1, int64_t arg8, uint32_t arg9, uint32_t arg10) {
    int64_t var_20h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    xmm1 = arg8;
    xmm2 = arg9;
    xmm3 = arg10;
    r10 = rdx;
    r8d = 0;
    r9 = rdi;
    rcx = r8;
    ebx = 0;
    rdx = r10 + rbx*2;
    rax = rdx;
    __asm ("movdqa xmm3, xmmword [0x00418a20]");
    if ((al & 0xf) == 0) {
        goto label_5;
    }
label_0:
    edi = *(rdx);
    r11 = rbx + 1;
    eax = edi;
    if (edi == 0) {
        goto label_6;
    }
label_2:
    ax &= 0xfc00;
    if (ax == 0xdc00) {
        goto label_7;
    }
    if (ax == 0xd800) {
        goto label_8;
    }
label_3:
    rax = (int64_t) edi;
    if (edi > 0x7f) {
        rax = fcn_00414845 (rdi);
    }
    if (rax == 0) {
        goto label_7;
    }
    rdx = r8 + 1;
    if (rsi > rdx) {
        goto label_9;
    }
    goto label_7;
    do {
        rdx++;
        if (rdx >= rsi) {
            goto label_7;
        }
label_9:
        *((r9 + rdx - 1)) = al;
        rax >>= 8;
        r8 = rdx;
    } while (rax != 0);
label_7:
    rbx = r11;
    rcx = r8;
    rdx = r10 + rbx*2;
    rax = rdx;
    if ((al & 0xf) != 0) {
        goto label_0;
    }
label_5:
    xmm0 = 0;
    r11 = r8 + 8;
    *((rbp - 0x20)) = xmm0;
    if (rsi <= r11) {
        goto label_0;
    }
    xmm0 = 0;
    goto label_10;
label_1:
    __asm ("movdqa xmm0, xmmword [rbp - 0x20]");
    r11 = rdi;
label_10:
    __asm ("movdqu xmm1, xmmword [rax]");
    rdx = rax;
    r8 = rcx;
    __asm ("movdqa xmm2, xmm1");
    __asm ("pcmpgtw xmm2, xmm0");
    __asm ("movdqa xmm0, xmm1");
    __asm ("pcmpgtw xmm0, xmm3");
    __asm ("pandn xmm0, xmm2");
    __asm ("pmovmskb eax, xmm0");
    if (eax != 0xffff) {
        goto label_0;
    }
    rdi = r11 + 8;
    __asm ("movdqa xmm0, xmm1");
    rax = rdx + 0x10;
    rbx += 8;
    __asm ("packsswb xmm0, xmm1");
    *((r9 + rcx)) = xmm0;
    rcx += 8;
    if (rdi < rsi) {
        goto label_1;
    }
    rdx = r10 + rbx*2;
    rcx = r11;
    r8 = r11;
    edi = *(rdx);
    r11 = rbx + 1;
    eax = edi;
    if (edi != 0) {
        goto label_2;
    }
label_6:
    if (rsi <= rcx) {
        goto label_11;
    }
label_4:
    *((r9 + rcx)) = 0;
    do {
label_11:
        rax = r8;
        rdx = r11;
        return rax;
label_8:
        edx = *((r10 + r11*2));
        rbx += 2;
        if (edx != 0) {
            eax = edi;
            r11 = rbx;
            eax <<= 0xa;
            edi = rdx + rax - 0x35fdc00;
            goto label_3;
        }
        r11 = rbx;
    } while (rsi <= rcx);
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414b60 */
#include <stdint.h>
 
int64_t fcn_00414b60 (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    if (rdi == rsi) {
        goto label_0;
    }
    ecx = *(rdi);
    edx = *(rsi);
    eax = 0;
    if (cl == dl) {
        goto label_1;
    }
    goto label_2;
    do {
        rax++;
        ecx = *((rdi + rax));
        edx = *((rsi + rax));
        if (cl != dl) {
            goto label_2;
        }
label_1:
    } while (dl != 0);
    edx = 0;
label_2:
    eax = (int32_t) cl;
    eax -= edx;
    return rax;
label_0:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414fc0 */
#include <stdint.h>
 
int64_t fcn_00414fc0 (int64_t arg3, uint32_t arg2, int64_t arg1, uint32_t arg8) {
    int64_t var_30h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    xmm1 = arg8;
    r10 = rdx;
    eax = 0;
    edx = 0;
    xmm2 = 0;
    r11d = 6;
    ebx = 1;
    do {
label_3:
        rcx = r10 + rdx;
        r12 = rax;
        r9 = rcx;
        if ((cl & 0xf) == 0) {
            goto label_9;
        }
label_1:
        r9d = *(r9);
        r13 = rdx + 1;
        r8d = r9d;
        ecx = r9d;
        r8d &= 0xc0;
        if (r8d == 0x80) {
            goto label_10;
        }
        r8d = (int32_t) r9b;
        r9d &= 0x80;
        if (r9d != 0) {
            goto label_11;
        }
label_6:
        if (r8d == 0) {
            goto label_12;
        }
label_7:
        ecx = r8d;
        rdx = r13;
        goto label_4;
label_0:
        *((rdi + rax*2 - 2)) = cx;
        rcx >>= 0x10;
    } while (rcx == 0);
label_4:
    r8 = rax;
    rax++;
    if (rsi > rax) {
        goto label_0;
    }
    rax = r8;
    rcx = r10 + rdx;
    r9 = rcx;
    r12 = rax;
    if ((cl & 0xf) != 0) {
        goto label_1;
    }
label_9:
    xmm0 = 0;
    r8 = rax + 0x10;
    *((rbp - 0x30)) = xmm0;
    if (rsi <= r8) {
        goto label_1;
label_2:
        r8 = rax;
        rcx = r10 + rdx;
    }
    __asm ("movdqu xmm0, xmmword [r10 + rdx]");
    r9 = rcx;
    rax = r12;
    __asm ("movdqa xmm1, xmm0");
    __asm ("pcmpgtb xmm1, xmm2");
    __asm ("pmovmskb ecx, xmm1");
    if (ecx != 0xffff) {
        goto label_1;
    }
    rax = r8 + 0x10;
    __asm ("movdqa xmm1, xmm0");
    rdx += 0x10;
    __asm ("punpcklbw xmm1, xmm2");
    __asm ("punpckhbw xmm0, xmm2");
    __asm ("movups xmmword [rdi + r12*2], xmm1");
    r12 += 0x10;
    __asm ("movups xmmword [rdi + r8*2 - 0x10], xmm0");
    if (rsi > rax) {
        goto label_2;
    }
    r9 = r10 + rdx;
    r12 = r8;
    rax = r8;
    goto label_1;
label_11:
    if (r8d <= 0xfb) {
        goto label_13;
    }
    r8d = ecx;
    r9d = 5;
    r8d &= 3;
label_5:
    r9d--;
    rcx = rdx + 2;
    r13 = rdx + r9 + 3;
    while (r9b != 0) {
        ecx = r8d;
        r9d &= 0x3f;
        ecx <<= 6;
        r9d |= ecx;
        rcx = rdx + 1;
        r8d = r9d;
        if (r13 == rcx) {
            goto label_14;
        }
        r9d = *((r10 + rcx - 1));
        rdx = rcx;
    }
    do {
label_8:
        if (rsi > r12) {
            ecx = 0;
            *((rdi + r12*2)) = cx;
        }
        return rax;
label_10:
        rdx = r13;
        goto label_3;
label_14:
    } while (r9d == 0);
    if (r9d <= 0xffff) {
        goto label_15;
    }
    r9d = r9 - 0x10000;
    ecx = 0xfffd;
    if (r9d > 0xfffff) {
        goto label_4;
    }
    ecx = r8d;
    r9d >>= 0xa;
    ecx &= 0x3ff;
    r8d = r9 + 0xd800;
    ecx += 0xdc00;
    ecx <<= 0x10;
    ecx |= r8d;
    goto label_4;
label_13:
    ecx = r8d;
    r9d = ebx;
    cl ^= 0xff;
    __asm ("bsr ecx, ecx");
    r9d <<= cl;
    r9d--;
    r9d |= 3;
    r8d &= r9d;
    r9d = r11d;
    r9d -= ecx;
    if (r9d != 0) {
        goto label_5;
    }
    goto label_6;
label_15:
    r13 = rdx;
    goto label_7;
label_12:
    rdx = r13;
    goto label_8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b60 */
#include <stdint.h>
 
int32_t fcn_00402b60 (void) {
    eax = *(0x00440848);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405ed5 */
#include <stdint.h>
 
int64_t fcn_00405ed5 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b058);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405ec5 */
#include <stdint.h>
 
int64_t fcn_00405ec5 (int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
    rax = *(0x0041b050);
    return void (*0x406076)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405ee5 */
#include <stdint.h>
 
int64_t fcn_00405ee5 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b060);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410160 */
#include <stdint.h>
 
uint64_t fcn_00410160 (char ** envp, int64_t arg1) {
    rdx = envp;
    rdi = arg1;
    do {
        void (*0x402b21)() ();
    } while (edi < 0);
    rbx = (int64_t) edi;
    if (rbx < *(0x00447b48)) {
        goto label_3;
    }
    if ((*(0x0041c718) & 4) == 0) {
        goto label_0;
    }
label_1:
    fcn_00402acd ();
    do {
label_2:
        if (rbx < *(0x00447b48)) {
            rcx = *(0x00447b50);
            rdx = rbx * 3;
            if (*(main) <= rbx) {
                rbx = *(0x00447b40);
            }
            rdx = rcx + rdx*8;
            *((rdx + 0x10)) = 0;
            *(0x00447b40) = rbx;
        }
        return;
label_0:
        fcn_00412330 ();
    } while (1);
label_3:
    rsi = *(0x00447b50);
    rax = rbx * 3;
    rax = rsi + rax*8;
    eax = *((rax + 0x10));
    if (eax == 6) {
        goto label_4;
    }
    if (eax == 7) {
        goto label_5;
    }
    if ((*(0x0041c718) & 4) == 0) {
        goto label_0;
    }
    if (eax == 2) {
        goto label_6;
    }
    edx = rax - 3;
    if (edx <= 1) {
        goto label_7;
    }
    if (eax != 1) {
        goto label_1;
    }
label_7:
    fcn_00404ed0 (rdi);
    goto label_2;
label_6:
    eax = 0x403090;
    void (*rax)() ();
    goto label_2;
label_4:
    eax = 0;
    void (*rax)() ();
    goto label_2;
label_5:
    eax = 0;
    void (*rax)() ();
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405eb5 */
#include <stdint.h>
 
int64_t fcn_00405eb5 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b048);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405ea5 */
#include <stdint.h>
 
int64_t fcn_00405ea5 (int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
    rax = *(0x0041b040);
    return void (*0x406070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f38 */
#include <stdint.h>
 
void fcn_00405f38 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b0f8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411d3d */
#include <stdint.h>
 
int32_t fcn_00411d3d (char ** envp, char ** argv, int64_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    edi &= 0x7f;
    eax = *((rdi*4 + 0x447d60));
    if (eax < 8) {
        goto label_0;
    }
    eax = rax + segment___TEXT;
    void (*rax)() ();
    eax = 1;
    do {
        return eax;
label_0:
        eax = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404be0 */
#include <stdint.h>
 
uint64_t fcn_00404be0 (int64_t arg4, int64_t arg3, int64_t arg2, uint32_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r13d = 0x4188e0;
    r12 = rdi;
    rbx = rsi;
    if (*(rdi) == 0x2f) {
        r14d = edx;
        eax = fcn_00414b60 (rdi, r13);
        if (eax == 0) {
            goto label_2;
        }
label_0:
        eax = fcn_00414b60 (r12, r13 + 9);
        if (eax == 0) {
            goto label_3;
        }
        eax = fcn_00414b60 (r12, r13 + 0x13);
        if (eax == 0) {
            goto label_4;
        }
        r13 += 0x35;
        eax = fcn_00414b60 (r12, r13 + 0x1e);
        if (eax == 0) {
            r12 = r13;
        }
    }
label_1:
    rax = fcn_00414fc0 (rbx, 0xe8, r12, rcx);
    if (rax == 0xe7) {
        goto label_5;
    }
    rsi = rbx;
    rdx = rbx + rax*2;
    if (rax == 0) {
        goto label_6;
    }
    do {
        if (*(rsi) == 0x2f) {
            ecx = 0x5c;
            *(rsi) = cx;
        }
        rsi += 2;
    } while (rsi != rdx);
label_6:
    return rax;
label_2:
    edx = r14d;
    edx &= *(0x00440910);
    if (rdx == *(0x00440938)) {
        goto label_4;
    }
    if (rdx != *(0x00440958)) {
        goto label_0;
    }
    r12 = r13 + 0x35;
    goto label_1;
label_5:
    fcn_00402b60 ();
    return rax;
label_4:
    r12 = r13 + 0x2e;
    goto label_1;
label_3:
    r12 = r13 + 0x2a;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f08 */
#include <stdint.h>
 
int64_t fcn_00405f08 (int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
    rax = *(0x0041b0d0);
    return void (*0x406070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f28 */
#include <stdint.h>
 
int64_t fcn_00405f28 (int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
    rax = *(0x0041b0e8);
    return void (*0x406070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4053a0 */
#include <stdint.h>
 
void fcn_004053a0 (int64_t arg4, int64_t arg2, int64_t arg1) {
    int64_t var_214h;
    int64_t var_210h;
    int64_t var_18h;
    rcx = arg4;
    rsi = arg2;
    rdi = arg1;
    edx = esi;
    ebx = esi;
    eax = fcn_00404be0 (rdi, main, edx, rcx);
    if (eax == 0xffffffff) {
        goto label_1;
    }
    r9d = ebx;
    eax = ebx;
    r13d = ebx;
    r9d <<= 8;
    eax &= 0xf000100;
    r9d &= 0xf0000000;
    r9d |= eax;
    rax = *(0x00440930);
    r9d |= 0x2080;
    rax &= r13;
    if ((*(0x00440928) & r13) == 0) {
        goto label_2;
    }
    if (rax == 0) {
        goto label_3;
    }
    r8d = 1;
    edx = 0;
    do {
label_0:
        ebx &= 0xd0000009;
        ecx = 0x418920;
        esi |= 0x20120116;
        rax = fcn_00405f08 (main, ebx);
        r12 = rax;
        if (rax == main) {
            goto label_1;
        }
        if ((*(0x00440948) & r13) != 0) {
            goto label_4;
        }
        rsp = rbp - 0x18;
        rax = r12;
        return rax;
label_2:
        rdx = *(0x00440950);
        rdx &= r13;
        r8d -= r8d;
        r8d &= 0xfffffffe;
        r8d += 5;
        edx -= edx;
        edx &= 7;
    } while (1);
label_3:
    rax = *(0x00440950);
    edx = 7;
    rax &= r13;
    r8d -= r8d;
    r8d &= 2;
    r8d += 2;
    goto label_0;
label_1:
    rsp = rbp - 0x18;
    r12 = main;
    rax = r12;
    return rax;
label_4:
    rax = main;
    edx = 0;
    r9d = 0;
    r8d = 0;
    ecx = 0;
    fcn_00405f28 (r12, 0x900c4);
    rsp = rbp - 0x18;
    rax = r12;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b36 */
#include <stdint.h>
 
int32_t fcn_00402b36 (void) {
    eax = *(0x00440830);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405e00 */
#include <stdint.h>
 
int64_t fcn_00405e00 (int64_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    if (rdi != main) {
        xmm0 = 0;
        rax = rsi;
        __asm ("movups xmmword [rsi + 0x10], xmm0");
        __asm ("movups xmmword [rsi], xmm0");
        *((rsi + 0x10)) = rdi;
        return rax;
    }
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405bc0 */
#include <stdint.h>
 
uint64_t fcn_00405bc0 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_4ch;
    int64_t var_44h;
    int64_t var_3ch;
    int64_t var_34h;
    int64_t var_30h;
    int64_t var_2ch;
    int64_t var_28h;
    int64_t var_24h;
    int64_t var_20h;
    int64_t var_10h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r12 = rdi;
    rbx = rsi;
    eax = fcn_00405f6e (rdi, rbp - 0x50, rdx, rcx);
    if (eax == 0) {
        goto label_1;
    }
    edx = 0xe0;
    fcn_0041561f (rbx, 0);
    rcx = r12;
    eax = uint64_t (*0x0041b170)() ();
    esi = *((rbp - 0x50));
    edx = esi;
    ecx = esi;
    edx &= 1;
    edx -= edx;
    ecx <<= 8;
    edx &= 0x80;
    ecx &= 0x8000;
    edx += 0x140;
    ecx |= edx;
    dh |= 0xa0;
    if ((esi & 0x200000) != 0) {
        ecx = edx;
    }
    edx = 0x4000;
    esi &= 0x10;
    if (esi == 0) {
        edx = 0x6000;
        if (eax == 1) {
            goto label_0;
        }
        edx = 0x2000;
        if (eax != 2) {
            goto label_2;
        }
    }
label_0:
    ecx |= edx;
    *((rbx + 0x18)) = ecx;
    rax = fcn_004124a0 (*((rbp - 0x44)), rsi);
    *((rbx + 0x48)) = rax;
    *((rbx + 0x50)) = rdx;
    rax = fcn_004124a0 (*((rbp - 0x3c)), rsi);
    *((rbx + 0x58)) = rax;
    *((rbx + 0x60)) = rdx;
    rax = fcn_004124a0 (*((rbp - 0x4c)), rsi);
    *((rbx + 0x38)) = main;
    *((rbx + 0x68)) = rax;
    eax = *((rbp - 0x30));
    *((rbx + 0x70)) = rdx;
    edx = *((rbp - 0x2c));
    rax <<= 0x20;
    rax |= rdx;
    edx = *((rbp - 0x20));
    *((rbx + 0x30)) = rax;
    eax = *((rbp - 0x34));
    *(rbx) = rax;
    eax = *((rbp - 0x24));
    rax <<= 0x20;
    rax |= rdx;
    *((rbx + 8)) = rax;
    eax = *((rbp - 0x28));
    *((rbx + 0x10)) = rax;
    eax = fcn_00405f7e (r12, 8, rbp - 0x60, 0x10);
    if (eax != 0) {
        goto label_3;
    }
    rax = *((rbx + 0x30));
    do {
        rdx = 0x7ffffffffffff8;
        rax += 0xfff;
        rax >>= 9;
        rax &= rdx;
        *((rbx + 0x40)) = rax;
        rsp = rbp - 0x10;
        eax = 0;
        return rax;
label_3:
        rax = *((rbp - 0x60));
    } while (1);
label_1:
    eax = fcn_004162a0 ();
    rsp = rbp - 0x10;
    return rax;
label_2:
    edx = 0x1000;
    if (eax != 3) {
        edx = esi;
    }
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406004 */
#include <stdint.h>
 
int64_t fcn_00406004 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b220);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4124e0 */
#include <stdint.h>
 
int64_t fcn_004124e0 (int64_t arg2, int32_t argc) {
    rsi = arg2;
    rdi = argc;
    rdx = 0xd6bf94d5e57a42bd;
    rax = rsi;
    rdx:rax = rax * rdx;
    rax = 0xfffffffd49ef6f00;
    rdx >>= 0x17;
    rax += rdx;
    rdx *= 0x989680;
    *(rdi) = rax;
    rsi -= rdx;
    rdx = 0xcccccccccccccccd;
    rax = rsi;
    rdx:rax = rax * rdx;
    rdx >>= 3;
    *((rdi + 8)) = rdx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402ae2 */
#include <stdint.h>
 
int32_t fcn_00402ae2 (void) {
    eax = *(0x004407e0);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x41548b */
#include <stdint.h>
 
int64_t fcn_0041548b (char ** argv, int64_t arg1) {
    rsi = argv;
    rdi = arg1;
    rax = rdi;
    rdx = 0xa3d70a3d70a3d70b;
    rdx:rax = rax * rdx;
    rax = rdx + rdi;
    rdi >>= 0x3f;
    rax >>= 6;
    rax -= rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x415469 */
#include <stdint.h>
 
void fcn_00415469 (void) {
    cl = 0xb;
    rdx = 0x346dc5d63886594b;
    return void (*0x415898)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x415898 */
#include <stdint.h>
 
int64_t loc_00415898 (char ** envp, char ** argv, int64_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    rax = rdi;
    rdx:rax = rax * rdx;
    rax = rdx;
    rax >>= cl;
    rdi >>= 0x3f;
    rax -= rdi;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405fe4 */
#include <stdint.h>
 
int64_t fcn_00405fe4 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b208);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b0c */
#include <stdint.h>
 
int32_t fcn_00402b0c (void) {
    eax = *(0x00440818);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40aa80 */
#include <stdint.h>
 
int64_t fcn_0040aa80 (char ** envp, char ** argv, uint32_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    r12 = rdi;
    eax = *((rdi + 0x10));
    if (eax >= *((rdi + 0x14))) {
        rax = *((rdi + 0x28));
        if (rax == 0) {
            goto label_0;
        }
        eax = void (*rax)() ();
        if (eax == 0xffffffff) {
            goto label_1;
        }
        eax = *((r12 + 0x10));
    }
    rdx = *((r12 + 0x18));
    ecx = rax + 1;
    *((r12 + 0x10)) = ecx;
    eax = *((rdx + rax));
    do {
label_1:
        return rax;
label_0:
        fcn_0040ad90 (rdi);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ad90 */
#include <stdint.h>
 
int64_t fcn_0040ad90 (int64_t arg1) {
    rdi = arg1;
    esi = 0xffffffff;
    eax = *((rdi + 8));
    if (esi == 0) {
        goto label_0;
    }
    if (eax <= 0) {
        eax = esi;
    }
    *((rdi + 8)) = eax;
    if (esi <= 0) {
        goto label_1;
    }
    *(0x00448020) = esi;
    do {
label_1:
        rax = main;
        return rax;
label_0:
    } while (eax > 0);
    *((rdi + 8)) = 0xffffffff;
    rax = main;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b70d */
#include <stdint.h>
 
void fcn_0040b70d (void) {
    uint64_t (*0x0041c0b0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406860 */
#include <stdint.h>
 
uint32_t fcn_00406860 (char ** envp, char ** argv, int64_t arg1) {
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    *(0x00446494)++;
    eax = fcn_0040aa80 (rdi, rsi, rdx);
    if (eax != 0xffffffff) {
        if (eax == 0xa) {
            goto label_0;
        }
    }
    return eax;
label_0:
    *(0x00446498)++;
    *(0x00446494) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4068a0 */
#include <stdint.h>
 
int64_t fcn_004068a0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r8d = *(0x004463e0);
    r9 = *(0x004463e8);
    edx = *(0x004463e4);
    rax = r9;
    r14d = rsi + r8 + 1;
    r13d = r8d;
    r12 = rdi;
    ebx = esi;
    if (r14d > edx) {
        goto label_1;
    }
label_0:
    edx = ebx;
    ebx += r8d;
    rsi = r12;
    rdi += rax;
    *(0x004463e0) = ebx;
    fcn_004154c0 (r13d);
    *((r9 + rbx)) = 0;
    do {
        return rax;
label_1:
        eax = edx;
        rdi = r9;
        eax >>= 1;
        eax += edx;
        edx = 0x10;
        if (eax < 0x10) {
            eax = edx;
        }
        if (eax >= r14d) {
            r14d = eax;
        }
        esi = r14d;
        rax = fcn_0040b70d ();
    } while (rax == 0);
    *(0x004463e8) = rax;
    r8d = *(0x004463e0);
    r9 = rax;
    *(0x004463e4) = r14d;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40aad0 */
#include <stdint.h>
 
uint64_t fcn_0040aad0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r14 = rsi;
    r12 = rdi;
    eax = fcn_0040ac60 (rsi);
    rdx = (int64_t) eax;
    r8 = rdx;
    rdx &= *(0x00440910);
    if (rdx == *(0x00440938)) {
        goto label_8;
    }
    if (*(0x00440958) != rdx) {
        goto label_2;
    }
    while (*((r12 + 1)) != 0) {
label_4:
        edi = 0x4187a4;
        ecx = 0xc;
        rsi = r12;
        __asm ("repe cmpsb byte [rsi], byte ptr [rdi]");
        al = (*(r12) > 0x2d) ? 1 : 0;
        if (al == 0) {
            goto label_3;
        }
label_2:
        eax = 0;
        eax = fcn_00410e90 (r12, r8d, 0x1b6, rcx);
        ebx = 0;
        r13d = eax;
label_1:
        if (r13d == 0xffffffff) {
            goto label_6;
        }
label_0:
        rax = fcn_0040aec0 (r13d, r14);
        r12 = rax;
        if (rax == 0) {
            goto label_9;
        }
        *((rax + 1)) = bl;
label_7:
        rax = r12;
        return rax;
    }
label_3:
    ebx = 1;
    eax = fcn_0040af80 (*(0x00446038));
    r13d = eax;
    if (r13d != 0xffffffff) {
        goto label_0;
    }
label_6:
    r12d = 0;
    rax = r12;
    return rax;
label_8:
    eax = *(r12);
    if (eax != 0x2d) {
        goto label_10;
    }
    while (al == 0) {
label_5:
        ebx = 1;
        eax = fcn_0040af80 (*(0x00444038));
        r13d = eax;
        goto label_1;
label_10:
        if (rdx == *(0x00440958)) {
            goto label_11;
        }
        edi = 0x4187b0;
        ecx = 0xb;
        rsi = r12;
        __asm ("repe cmpsb byte [rsi], byte ptr [rdi]");
        al = (rdx > *(0x00440958)) ? 1 : 0;
    }
    goto label_2;
label_11:
    if (eax != 0x2d) {
        goto label_12;
    }
    if (*((r12 + 1)) == 0) {
        goto label_3;
    }
label_12:
    edi = 0x4187b0;
    ecx = 0xb;
    rsi = r12;
    __asm ("repe cmpsb byte [rsi], byte ptr [rdi]");
    al = (*((r12 + 1)) > 0) ? 1 : 0;
    if (al != 0) {
        goto label_4;
    }
    goto label_5;
label_9:
    if (bl != 0) {
        goto label_6;
    }
    fcn_00410160 (r13d, rsi);
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406950 */
#include <stdint.h>
 
uint32_t fcn_00406950 (char ** envp, char ** argv, int64_t arg1) {
    int64_t var_11h;
    rdx = envp;
    rsi = argv;
    rdi = arg1;
    rbx = rdi;
label_1:
    eax = fcn_00406860 (rbx, rsi, rdx);
    if (eax == 0xffffffff) {
        goto label_2;
    }
    if (eax != 0x23) {
        goto label_3;
    }
    if (*(0x00446494) != 1) {
        goto label_3;
    }
    do {
        eax = fcn_00406860 (rbx, rsi, rdx);
        if (eax == 0xffffffff) {
            goto label_2;
        }
label_0:
    } while (eax == 0xd);
    if (eax == 0xa) {
        goto label_4;
    }
    *((rbp - 0x11)) = al;
    fcn_004068a0 (rbp - 0x11, 1);
    eax = fcn_00406860 (rbx, rsi, rdx);
    if (eax != 0xffffffff) {
        goto label_0;
    }
label_2:
    eax = 0xffffffff;
label_3:
    return eax;
label_4:
    eax = *(0x004463e0);
    if (eax == 0) {
        goto label_1;
    }
    r8 = *(0x004463e8);
    if (*(r8) != 0x4e) {
        goto label_1;
    }
    if (eax <= 2) {
        goto label_1;
    }
    eax -= 2;
    edx = 0x3f;
    rsi = r8 + 2;
    edi = main;
    if (eax > 0x3f) {
        eax = edx;
    }
    edx = eax;
    fcn_004154c0 (rdi);
    *((rdx + 0x446360)) = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a890 */
#include <stdint.h>
 
int64_t fcn_0040a890 (int64_t arg1) {
    int64_t var_18h;
    rdi = arg1;
    r12d = 0;
    *((rbp - 0x18)) = rdi;
    if (rdi == 0) {
        goto label_1;
    }
    fcn_0040aa40 (rdi);
    fcn_0040a950 (*((rbp - 0x18)));
    rdi = *((rbp - 0x18));
    eax = *((rdi + 0x24));
    if (eax == 0) {
        goto label_2;
    }
    *((rdi + 8)) = 0xffffffff;
    if (*((rdi + 1)) == 0) {
        goto label_3;
    }
    do {
        *((rdi + 0xc)) = 0xffffffff;
        r12d = 0;
label_0:
        fcn_0040f140 (rbp - 0x18);
label_1:
        eax = r12d;
        return eax;
label_2:
        rdi += 0x18;
        fcn_0040f140 (rdi);
        rdi = *((rbp - 0x18));
        *((rdi + 8)) = 0xffffffff;
    } while (*((rdi + 1)) != 0);
label_3:
    rdi += 0xc;
    eax = fcn_0040ed70 (rdi, rsi);
    if (eax == 0xffffffff) {
        goto label_4;
    }
    rax = *((rbp - 0x18));
    eax = *((rax + 8));
    do {
        if (eax == 0xffffffff) {
            goto label_5;
        }
        *(0x00448020) = eax;
        r12d = 0xffffffff;
        goto label_0;
label_4:
        eax = *(0x00448020);
        rdx = *((rbp - 0x18));
        *((rdx + 8)) = eax;
    } while (1);
label_5:
    r12d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ecb0 */
#include <stdint.h>
 
int64_t fcn_0040ecb0 (int64_t arg1) {
    rdi = arg1;
    rdx = 0x5555555555555555;
    rax = rdi;
    rax >>= 1;
    rax &= rdx;
    rdx = 0x3333333333333333;
    rdi -= rax;
    rax = rdi;
    rdi &= rdx;
    rax >>= 2;
    rax &= rdx;
    rdi += rax;
    rax = rdi;
    rax >>= 4;
    rax += rdi;
    rdi = 0xf0f0f0f0f0f0f0f;
    rdi &= rax;
    rax = rdi;
    rax >>= 0x20;
    rax += rdi;
    rdx = rax;
    rdx >>= 0x10;
    rdx += rax;
    rax = rdx;
    rax >>= 8;
    rax += rdx;
    eax &= 0x7f;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x413ac0 */
#include <stdint.h>
 
uint64_t fcn_00413ac0 (int64_t arg_10h, int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg7, int64_t arg8, int64_t arg9, int64_t arg10, int64_t arg11) {
    int64_t var_c8h;
    int64_t var_c4h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_b0h;
    int64_t var_98h;
    int64_t var_90h;
    int64_t var_88h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_10h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    xmm0 = arg7;
    xmm1 = arg8;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    *((rbp - 0x98)) = rcx;
    *((rbp - 0x90)) = r8;
    *((rbp - 0x88)) = r9;
    if (al != 0) {
        *((rbp - 0x80)) = xmm0;
        *((rbp - 0x70)) = xmm1;
        *((rbp - 0x60)) = xmm2;
        *((rbp - 0x50)) = xmm3;
        *((rbp - 0x40)) = xmm4;
        *((rbp - 0x30)) = xmm5;
        *((rbp - 0x20)) = xmm6;
        *((rbp - 0x10)) = xmm7;
    }
    rax = rbp + 0x10;
    *((rbp - 0xc8)) = 0x18;
    *((rbp - 0xc0)) = rax;
    rax = rbp - 0xb0;
    *((rbp - 0xc4)) = 0x30;
    *((rbp - 0xb8)) = rax;
    fcn_00414600 (rdi, rsi, rdx, rbp - 0xc8);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414600 */
#include <stdint.h>
 
int64_t fcn_00414600 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_20h;
    uint32_t var_18h;
    int64_t var_10h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rbp - 0x20)) = rdi;
    *((rbp - 0x10)) = rsi;
    *((rbp - 0x18)) = 0;
    fcn_00413260 (0x4145e0, rbp - 0x20, rdx, rcx);
    rax = *((rbp - 0x10));
    if (rax != 0) {
        rax--;
        rdx = *((rbp - 0x20));
        if (*((rbp - 0x18)) <= rax) {
            rax = *((rbp - 0x18));
        }
        *((rdx + rax)) = 0;
    }
    eax = *((rbp - 0x18));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412150 */
#include <stdint.h>
 
uint64_t fcn_00412150 (void) {
    int64_t var_8h;
    if ((*(0x0041c023) & 0x40) != 0) {
        goto label_0;
    }
    if ((*(0x0041c718) & 4) != 0) {
        goto label_1;
    }
    fcn_00412210 (rbp - 8, 8);
    do {
        rax = fcn_004121e0 (0x448010);
        rax ^= *((rbp - 8));
        return rax;
label_1:
        rax = fcn_00405e30 (rdi);
        *((rbp - 8)) = rax;
    } while (1);
label_0:
    fcn_004121b0 ();
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412210 */
#include <stdint.h>
 
uint64_t fcn_00412210 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    if ((*(0x0041c718) & 4) == 0) {
        goto label_1;
    }
    eax = fcn_00402b9f ();
    r13d = eax;
    do {
label_0:
        eax = r13d;
        return eax;
label_1:
        edx = *(0x00440938);
        rbx = rdi;
        r12 = rsi;
        ecx = 0;
        edi = *(0x00440780);
        esi = 0x418945;
        eax = fcn_004123b0 ();
        r13d = eax;
    } while (eax == 0xffffffff);
    r12 += rbx;
    if (rbx < r12) {
        goto label_2;
    }
    goto label_3;
    do {
        if (rax == 0) {
            goto label_4;
        }
        rbx += rax;
        if (r12 <= rbx) {
            goto label_3;
        }
label_2:
        rdx = r12;
        rsi = rbx;
        edi = r13d;
        rdx -= rbx;
        rax = fcn_004123d0 ();
    } while (rax != main);
label_4:
    edi = r13d;
    r13d = 0xffffffff;
    fcn_00412330 ();
    goto label_0;
label_3:
    edi = r13d;
    r13d = 0;
    fcn_00412330 ();
    r13b = (r12 != rbx) ? 1 : 0;
    r13d = -r13d;
    eax = r13d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4123d0 */
#include <stdint.h>
 
int64_t fcn_004123d0 (void) {
    rax = 0x3000320030000;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412330 */
#include <stdint.h>
 
int64_t fcn_00412330 (void) {
    rax = 0x6000620060003;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4121e0 */
#include <stdint.h>
 
int64_t fcn_004121e0 (int64_t arg1) {
    rdi = arg1;
    rax = *(rdi);
    rdx = *(rdi);
    rdx <<= 0xd;
    rdx ^= rax;
    rax = rdx;
    rax >>= 7;
    rdx ^= rax;
    rax = rdx;
    rax <<= 0x11;
    rax ^= rdx;
    *(rdi) = rax;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4121b0 */
#include <stdint.h>
 
int64_t fcn_004121b0 (void) {
label_0:
    eax = 0xa;
    do {
        __asm ("rdrand r8");
        if (? < ?) {
            goto label_1;
        }
        rax--;
    } while (rax != 0);
    __asm ("pause");
    goto label_0;
label_1:
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402dca */
#include <stdint.h>
 
void fcn_00402dca (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b070)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402cc5 */
#include <stdint.h>
 
int64_t fcn_00402cc5 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b2a8);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402ca2 */
#include <stdint.h>
 
int64_t fcn_00402ca2 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b298);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c0f */
#include <stdint.h>
 
int64_t fcn_00402c0f (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b250);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406fa0 */
#include <stdint.h>
 
uint64_t fcn_00406fa0 (int64_t arg1) {
    int64_t var_3a0h;
    int64_t var_398h;
    int64_t var_388h;
    int64_t var_370h;
    int64_t var_368h;
    int64_t var_340h;
    int64_t var_300h;
    int64_t var_200h;
    rdi = arg1;
    edx = 0x98;
    r12 = rdi;
    rax = rbp - 0x200;
    rax = fcn_0041561f (main, 0);
    *((rbp - 0x3a0)) = 0x98;
    *((rbp - main)) = r12;
    *((rbp - main)) = rax;
    *((rbp - 0x368)) = 0xf8;
    *((rbp - 0x388)) = 0x4172b0;
    *((rbp - 0x340)) = 0x81800;
    eax = fcn_00402dca (rdi);
    if (eax == 0) {
        return rax;
    }
    fcn_00414e40 (main, 0xf8, *((rbp - main)), rcx, r8, r9);
    rdi = main;
    eax = fcn_00406a10 ();
    while (1) {
        fcn_00402cc5 (r12, 0, 0, 1);
        return rax;
        fcn_00402ca2 (r12, 0x417758, 0x417710, 0x10);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d1b */
#include <stdint.h>
 
void fcn_00402d1b (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b2d0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402ce8 */
#include <stdint.h>
 
void fcn_00402ce8 (void) {
    uint64_t (*0x0041b2b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d08 */
#include <stdint.h>
 
void fcn_00402d08 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b2c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c52 */
#include <stdint.h>
 
void fcn_00402c52 (void) {
    uint64_t (*0x0041b270)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402cb2 */
#include <stdint.h>
 
void fcn_00402cb2 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b2a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402bef */
#include <stdint.h>
 
int64_t fcn_00402bef (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b240);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d81 */
#include <stdint.h>
 
void fcn_00402d81 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b090)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d71 */
#include <stdint.h>
 
int64_t fcn_00402d71 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b088);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402dba */
#include <stdint.h>
 
int64_t fcn_00402dba (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b0a8);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c42 */
#include <stdint.h>
 
int64_t fcn_00402c42 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b268);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d61 */
#include <stdint.h>
 
int64_t fcn_00402d61 (int64_t arg6, int64_t arg5) {
    r9 = arg6;
    r8 = arg5;
    rax = *(0x0041b080);
    return void (*0x40606a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402da7 */
#include <stdint.h>
 
void fcn_00402da7 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b0a0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d94 */
#include <stdint.h>
 
void fcn_00402d94 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b098)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x406d30 */
#include <stdint.h>
 
int64_t fcn_00406d30 (char ** argv, int32_t argc) {
    int64_t var_64h;
    uint32_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    rsi = argv;
    rdi = argc;
    rax = *(0x00446478);
    rdx = *(0x00446448);
    r14 = *(0x00446450);
    r11 = *(0x00446468);
    *((rbp - 0x38)) = rax;
    rax = rdx;
    r10 = *(0x00446480);
    rax *= r14;
    r9 = *(0x00446470);
    r13 = *(0x00446440);
    r15 = *(0x00446438);
    rax >>= 6;
    if (rax <= 0) {
        goto label_1;
    }
    ecx = *(0x0041c020);
    rbx = *(0x00446408);
    r12d = 0;
    ecx &= 0x800000;
    rax = rbx + rax*8;
    *((rbp - 0x64)) = ecx;
    *((rbp - 0x60)) = rax;
    while (eax != 0) {
        __asm ("popcnt rax, rdi");
        rbx += 8;
        r12 += rax;
        if (*((rbp - 0x60)) == rbx) {
            goto label_2;
        }
label_0:
        eax = *((rbp - 0x64));
        rdi = *(rbx);
    }
    *((rbp - 0x58)) = rdx;
    rbx += 8;
    *((rbp - 0x50)) = r9;
    *((rbp - 0x48)) = r10;
    *((rbp - 0x40)) = r11;
    rax = fcn_0040ecb0 (rdi);
    rdx = *((rbp - 0x58));
    r9 = *((rbp - 0x50));
    r10 = *((rbp - 0x48));
    r11 = *((rbp - 0x40));
    r12 += rax;
    if (*((rbp - 0x60)) != rbx) {
        goto label_0;
    }
    do {
label_2:
        eax = 0;
        fcn_00413ac0 (0x446260, 0x100, 0x417230, 0x446360, *(0x00446410), r12);
        rsp = rbp - 0x28;
        return rax;
label_1:
        r12d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402d2e */
#include <stdint.h>
 
int64_t fcn_00402d2e (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b2d8);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c32 */
#include <stdint.h>
 
int64_t fcn_00402c32 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b260);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402c82 */
#include <stdint.h>
 
int64_t fcn_00402c82 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b288);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402cf8 */
#include <stdint.h>
 
int64_t fcn_00402cf8 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = *(0x0041b2c0);
    return void (*0x40607a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x407850 */
#include <stdint.h>
 
uint64_t fcn_00407850 (uint32_t arg1) {
    int64_t var_40h;
    rdi = arg1;
    ebx = (int32_t) sil;
    if (*((rbx*4 + 0x446488)) != edi) {
        r12d = edi;
        r13d = (int32_t) sil;
        fcn_004068a0 (0x417041, 2);
        eax = r13 * 5;
        rdi = (int64_t) edi;
        rax = fcn_00412600 (rax + rax + 0x26, rbp - 0x40);
        fcn_004068a0 (rbp - 0x40, rax);
        fcn_004068a0 (0x417044, 3);
        rdi = (int64_t) r12d;
        rax = fcn_00412600 (rdi, rbp - 0x40);
        fcn_004068a0 (rbp - 0x40, rax);
        fcn_004068a0 (0x41705e, 1);
        *((rbx*4 + 0x446488)) = r12d;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a570 */
#include <stdint.h>
 
uint64_t fcn_0040a570 (uint32_t arg1) {
    rdi = arg1;
    rsi = main;
    if (rsi == 0) {
        goto label_7;
    }
    rax = rdi + 1;
    r15d = 0;
    r14 = rsi - 1;
    ebx = 0;
    edi = *(rdi);
    if (edi == 0) {
        goto label_8;
    }
label_0:
    ecx = rdi - 0x20;
    r12 = r14 - 1;
    if (ecx <= 0x5e) {
        goto label_9;
    }
    if (edi == 9) {
        goto label_9;
    }
    if (edi == 0x1b) {
        goto label_10;
    }
    if (edi <= 0xbf) {
        goto label_11;
    }
    if (edi > 0xfb) {
        goto label_12;
    }
    ecx = edi;
    esi = 1;
    r8d = 6;
    cl ^= 0xff;
    __asm ("bsr ecx, ecx");
    esi <<= cl;
    r8d -= ecx;
    esi--;
    esi |= 3;
    edi &= esi;
    if (r14 == 0) {
        goto label_2;
    }
    r13 = rax + 1;
    eax = *(rax);
    esi = eax;
    if (al == 0) {
        goto label_2;
    }
label_5:
    r8d--;
    r8 += r13;
    do {
        eax &= 0xc0;
        r14 = r12 - 1;
        if (eax != 0x80) {
            goto label_13;
        }
        edi <<= 6;
        esi &= 0x3f;
        edi |= esi;
        if (r8 == r13) {
            goto label_13;
        }
        if (r14 == main) {
            goto label_2;
        }
        eax = *(r13);
        r13++;
        esi = eax;
        if (al == 0) {
            goto label_2;
        }
        r12 = r14;
    } while (1);
label_9:
    r15d++;
    if (r14 == 0) {
        goto label_2;
    }
label_1:
    edi = *(rax);
    if (edi == 0) {
        goto label_2;
    }
    rax++;
    r14 = r12;
    goto label_0;
label_12:
    edi &= 3;
    if (r14 == 0) {
        goto label_2;
    }
    esi = *(rax);
    ecx = esi;
    if (sil == 0) {
        goto label_2;
    }
    esi &= 0xc0;
    if (esi == 0x80) {
        goto label_14;
    }
    r13 = rax + 1;
    r14 -= 2;
label_13:
    eax = fcn_0040a810 (rdi);
    __asm ("cmovs eax, ebx");
    r15d += eax;
    if (r12 == 0) {
        goto label_2;
    }
    edi = *(r13);
    rax = r13 + 1;
    if (edi != 0) {
        goto label_0;
    }
label_2:
    eax = r15d;
label_6:
    return rax;
label_11:
    if (r14 != 0) {
        goto label_1;
    }
    goto label_2;
label_10:
    if (r14 == 0) {
        goto label_2;
    }
    rsi = rax + 1;
    eax = *(rax);
    if (eax == 0) {
        goto label_2;
    }
label_4:
    rcx = r12 - 1;
    if (eax == 0x5b) {
        goto label_15;
    }
    eax -= 0x20;
    if (eax <= 0xf) {
        goto label_16;
    }
    if (r12 == 0) {
        goto label_2;
    }
    edi = *(rsi);
    rax = rsi + 1;
    if (edi == 0) {
        goto label_2;
    }
    r14 = rcx;
    goto label_0;
label_15:
    if (r12 == 0) {
        goto label_2;
    }
    eax = *(rsi);
    rdx = rsi + 1;
    if (eax == 0) {
        goto label_2;
    }
label_3:
    eax -= 0x30;
    r14 = rcx - 1;
    if (eax <= 0xf) {
        goto label_17;
    }
    if (rcx == 0) {
        goto label_2;
    }
    edi = *(rdx);
    rax = rdx + 1;
    if (edi != 0) {
        goto label_0;
    }
    goto label_2;
label_17:
    if (r14 == main) {
        goto label_2;
    }
    eax = *(rdx);
    rdx++;
    if (eax == 0) {
        goto label_2;
    }
    rcx = r14;
    goto label_3;
label_16:
    if (rcx == main) {
        goto label_2;
    }
    eax = *(rsi);
    rsi++;
    if (eax == 0) {
        goto label_2;
    }
    r12 = rcx;
    goto label_4;
label_7:
    eax = 0;
    return rax;
label_14:
    edi <<= 6;
    ecx &= 0x3f;
    r14 -= 2;
    edi |= ecx;
    if (r12 == 0) {
        goto label_2;
    }
    r13 = rax + 2;
    eax = *((rax + 1));
    esi = eax;
    if (al == 0) {
        goto label_2;
    }
    r12 = r14;
    r8d = 4;
    goto label_5;
label_8:
    eax = 0;
    goto label_6;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x408250 */
#include <stdint.h>
 
int64_t fcn_00408250 (signed int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2) {
    int64_t var_38h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    *((rbp - 0x38)) = rdx;
    if (r8 <= 1) {
        goto label_0;
    }
    r13 = rcx;
    if (rcx <= 0) {
        goto label_0;
    }
    r14 = rsi;
    r15 = r8;
    r12 = rdx;
    ebx = 0;
    do {
        rbx++;
        fcn_004097e0 (r15, r12, 0x447ff8);
        r12 += r14;
    } while (r13 != rbx);
label_0:
    rax = *((rbp - 0x38));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4082b0 */
#include <stdint.h>
 
int64_t fcn_004082b0 (int32_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, uint32_t arg8, uint32_t arg10, uint32_t arg11) {
    int64_t var_f8h;
    int64_t var_f0h;
    uint32_t var_e8h;
    int64_t var_e0h;
    signed int64_t var_d8h;
    int64_t var_d0h;
    int64_t var_c8h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_b0h;
    uint32_t var_a8h;
    int64_t var_a0h;
    signed int64_t var_98h;
    signed int64_t var_94h;
    signed int64_t var_90h;
    signed int64_t var_8ch;
    signed int64_t var_88h;
    signed int64_t var_80h;
    signed int64_t var_78h;
    signed int64_t var_70h;
    int32_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    xmm1 = arg8;
    xmm3 = arg10;
    xmm4 = arg11;
    rdi = rdx;
    *((rbp - 0xa0)) = rdx;
    rdx = rcx + 1;
    rax = *(main);
    *((rbp - 0xb8)) = rsi;
    rsi = rdx;
    rsi >>= 0x3f;
    *((rbp - 0x68)) = r8;
    rsi += rdx;
    rsi >>= 1;
    *((rbp - 0xd8)) = rsi;
    if (rdx <= 1) {
        goto label_2;
    }
    if (r8 <= 0) {
        goto label_2;
    }
    edx = eax;
    *((rbp - 0x48)) = rdi;
    di = (int16_t) al;
    __asm ("movdqa xmm4, xmmword [0x00418710]");
    edx <<= 8;
    xmm2 = 0;
    *((rbp - 0x98)) = di;
    edi = eax;
    edx >>= 0x18;
    di >>= 8;
    *((rbp - 0xc8)) = 0;
    *((rbp - 0x90)) = edx;
    rdx = rax;
    rdx <<= 0x18;
    *((rbp - 0x94)) = di;
    edi = eax;
    xmm15 = *((rbp - 0x98));
    rdx >>= 0x38;
    edi >>= 0x18;
    *((rbp - 0xa8)) = 0x10;
    __asm ("punpcklwd xmm15, xmm15");
    xmm12 = edi;
    *((rbp - 0x88)) = rdx;
    rdx = rax;
    xmm13 = *((rbp - 0x90));
    rdx <<= 0x10;
    __asm ("punpcklwd xmm13, xmm13");
    xmm14 = *((rbp - 0x94));
    *((rbp - 0x8c)) = edi;
    rdx >>= 0x38;
    __asm ("punpcklwd xmm14, xmm14");
    __asm ("punpcklwd xmm12, xmm12");
    *((rbp - 0xc0)) = main;
    *((rbp - 0x80)) = rdx;
    rdx = rax;
    rax >>= 0x38;
    xmm11 = *((rbp - 0x88));
    *((rbp - 0x70)) = rax;
    rax = r8;
    rdx <<= 8;
    __asm ("punpcklwd xmm11, xmm11");
    rax &= 0xfffffffffffffff0;
    rdx >>= 0x38;
    *((rbp - 0xb0)) = 0;
    __asm ("pshufd xmm15, xmm15, 0");
    *((rbp - 0x78)) = rdx;
    xmm10 = *((rbp - 0x80));
    __asm ("pshufd xmm14, xmm14, 0");
    __asm ("pshufd xmm13, xmm13, 0");
    *((rbp - 0xf0)) = rax;
    rax = r8;
    xmm0 = *((rbp - 0x70));
    __asm ("punpcklwd xmm10, xmm10");
    rax &= 0xfffffffffffffff0;
    __asm ("punpcklwd xmm0, xmm0");
    __asm ("pshufd xmm12, xmm12, 0");
    xmm9 = *((rbp - 0x78));
    *((rbp - 0xf8)) = rax;
    rax = rcx - 1;
    __asm ("pshufd xmm7, xmm0, 0");
    __asm ("punpcklwd xmm9, xmm9");
    *((rbp - 0x40)) = xmm7;
    xmm7 = 0;
    __asm ("pshufd xmm11, xmm11, 0");
    *((rbp - 0xe0)) = rax;
    rax = r8 - 1;
    __asm ("pshufd xmm10, xmm10, 0");
    __asm ("pshufd xmm9, xmm9, 0");
    *((rbp - 0xe8)) = rax;
label_1:
    rax = *((rbp - 0xc0));
    *((rbp - 0xb0))++;
    r10d = 0;
    ebx = 0;
    rsi = *((rbp - 0xb8));
    r9d = 0;
    rdi = *((rbp - 0xa0));
    r8 = rax;
    rdx = rax + 3;
    r11 = *((rbp - 0xb0));
    __asm ("cmovns r10, rax");
    r10 *= rsi;
    r8++;
    __asm ("cmovs r8, rbx");
    rbx = rax;
    r8 *= rsi;
    rbx += 2;
    r15 = rdi + r10;
    __asm ("cmovns r9, rbx");
    *((rbp - 0xc0)) = rbx;
    rbx = *((rbp - 0xe0));
    r9 *= rsi;
    r14 = rdi + r8;
    if (rdx > rbx) {
        rdx = rbx;
    }
    rdx *= rsi;
    r13 = rdi + r9;
    rcx = rdi + rdx;
    *((rbp - 0xd0)) = rcx;
    rcx = rax + 4;
    if (rcx > rbx) {
        rcx = rbx;
    }
    rcx *= rsi;
    r12 = rdi + rcx;
    rdi = r11 + r11;
    r11 = rsi;
    *((rbp - 0x60)) = r12;
    r12 = *((rbp - 0xa0));
    if (rdi > rbx) {
        rdi = rbx;
    }
    rdi *= rsi;
    rsi = r12;
    rsi += rdi;
    *((rbp - 0x58)) = rsi;
    rsi = rax + 6;
    if (rsi > rbx) {
        rsi = rbx;
    }
    rax += 7;
    rsi *= r11;
    r12 += rsi;
    if (rax > rbx) {
        rax = rbx;
    }
    *((rbp - 0x50)) = r12;
    r12 = *((rbp - 0xa0));
    rax *= r11;
    r11 = r10 + 0x10;
    rbx = r12 + rax;
    r12 = *((rbp - 0xc8));
    r11b = (r12 >= r11) ? 1 : 0;
    r10b = (r10 >= *((rbp - 0xa8))) ? 1 : 0;
    r11d |= r10d;
    r10b = (*((rbp - 0xe8)) > 0xe) ? 1 : 0;
    r11d &= r10d;
    r10 = rax + 0x10;
    r10b = (r12 >= r10) ? 1 : 0;
    al = (rax >= *((rbp - 0xa8))) ? 1 : 0;
    r10d |= eax;
    rax = rsi + 0x10;
    r11d &= r10d;
    al = (r12 >= rax) ? 1 : 0;
    sil = (rsi >= *((rbp - 0xa8))) ? 1 : 0;
    eax |= esi;
    rsi = *((rbp - 0xa8));
    r11d &= eax;
    rax = rcx + 0x10;
    r10b = (r12 >= rax) ? 1 : 0;
    al = (rcx >= rsi) ? 1 : 0;
    r10d |= eax;
    rax = rdx + 0x10;
    r11d &= r10d;
    cl = (r12 >= rax) ? 1 : 0;
    al = (rdx >= rsi) ? 1 : 0;
    ecx |= eax;
    rax = r9 + 0x10;
    r11d &= ecx;
    dl = (r12 >= rax) ? 1 : 0;
    al = (r9 >= rsi) ? 1 : 0;
    edx |= eax;
    rax = r8 + 0x10;
    r11d &= edx;
    al = (r12 >= rax) ? 1 : 0;
    dl = (r8 >= rsi) ? 1 : 0;
    eax |= edx;
    if ((r11b & al) == 0) {
        goto label_3;
    }
    rax = rdi + 0x10;
    al = (r12 >= rax) ? 1 : 0;
    dl = (rdi >= rsi) ? 1 : 0;
    al |= dl;
    if (al == 0) {
        goto label_3;
    }
    rdx = *((rbp - 0x48));
    rcx = *((rbp - 0xf0));
    eax = 0;
    rsi = *((rbp - 0x50));
    rdi = *((rbp - 0x58));
    r8 = *((rbp - 0x60));
    r12 = *((rbp - 0xd0));
    do {
        __asm ("movdqu xmm8, xmmword [r15 + rax]");
        __asm ("movdqu xmm0, xmmword [r14 + rax]");
        __asm ("movdqu xmm5, xmmword [r13 + rax]");
        __asm ("movdqu xmm3, xmmword [r12 + rax]");
        __asm ("movdqa xmm1, xmm8");
        __asm ("punpcklbw xmm0, xmm2");
        __asm ("punpckhbw xmm8, xmm2");
        __asm ("punpcklbw xmm1, xmm2");
        __asm ("pmullw xmm0, xmm14");
        __asm ("movdqa xmm6, xmm3");
        __asm ("pmullw xmm1, xmm15");
        __asm ("punpcklbw xmm6, xmm2");
        __asm ("punpckhbw xmm3, xmm2");
        __asm ("pmullw xmm6, xmm12");
        __asm ("pmullw xmm3, xmm12");
        __asm ("pmullw xmm8, xmm15");
        __asm ("paddw xmm1, xmm0");
        __asm ("movdqa xmm0, xmm5");
        __asm ("punpckhbw xmm5, xmm2");
        __asm ("punpcklbw xmm0, xmm2");
        __asm ("pmullw xmm5, xmm13");
        __asm ("pmullw xmm0, xmm13");
        __asm ("paddw xmm5, xmm3");
        __asm ("movdqu xmm3, xmmword [r14 + rax]");
        __asm ("paddw xmm0, xmm6");
        __asm ("movdqu xmm6, xmmword [rdi + rax]");
        __asm ("paddw xmm1, xmm0");
        __asm ("movdqu xmm0, xmmword [r8 + rax]");
        __asm ("punpckhbw xmm3, xmm2");
        __asm ("punpcklbw xmm6, xmm2");
        __asm ("pmullw xmm3, xmm14");
        __asm ("punpcklbw xmm0, xmm2");
        __asm ("pmullw xmm6, xmm10");
        __asm ("pmullw xmm0, xmm11");
        __asm ("paddw xmm8, xmm3");
        __asm ("paddw xmm5, xmm8");
        __asm ("movdqu xmm8, xmmword [r8 + rax]");
        __asm ("paddw xmm0, xmm6");
        __asm ("paddw xmm0, xmmword [0x00418700]");
        __asm ("movdqu xmm6, xmmword [rbx + rax]");
        __asm ("punpckhbw xmm8, xmm2");
        __asm ("paddw xmm1, xmm0");
        __asm ("movdqu xmm0, xmmword [rsi + rax]");
        __asm ("punpcklbw xmm6, xmm2");
        __asm ("pmullw xmm6, xmmword [rbp - 0x40]");
        __asm ("pmullw xmm8, xmm11");
        __asm ("punpcklbw xmm0, xmm2");
        __asm ("pmullw xmm0, xmm9");
        __asm ("paddw xmm0, xmm6");
        __asm ("movdqu xmm6, xmmword [rdi + rax]");
        __asm ("paddw xmm1, xmm0");
        __asm ("movdqu xmm0, xmmword [rsi + rax]");
        __asm ("punpckhbw xmm6, xmm2");
        __asm ("psraw xmm1, 5");
        __asm ("movdqa xmm3, xmm6");
        __asm ("punpckhbw xmm0, xmm2");
        __asm ("movdqa xmm6, xmm4");
        __asm ("pmullw xmm3, xmm10");
        __asm ("pmullw xmm0, xmm9");
        xmm6 &= xmm1;
        __asm ("paddw xmm8, xmm3");
        __asm ("movdqa xmm3, xmm1");
        __asm ("paddw xmm8, xmmword [0x00418700]");
        __asm ("psubusw xmm3, xmm4");
        __asm ("paddw xmm5, xmm8");
        __asm ("movdqu xmm8, xmmword [rbx + rax]");
        __asm ("pcmpeqw xmm3, xmm7");
        __asm ("punpckhbw xmm8, xmm2");
        __asm ("pmullw xmm8, xmmword [rbp - 0x40]");
        __asm ("paddw xmm0, xmm8");
        __asm ("paddw xmm5, xmm0");
        xmm3 &= xmm4;
        __asm ("psraw xmm5, 5");
        __asm ("movdqa xmm0, xmm5");
        __asm ("psubusw xmm5, xmm4");
        __asm ("pcmpeqw xmm5, xmm7");
        __asm ("movdqa xmm8, xmm0");
        __asm ("pcmpgtw xmm8, xmm4");
        xmm5 &= xmm4;
        __asm ("packuswb xmm3, xmm5");
        __asm ("movdqa xmm5, xmm4");
        xmm8 &= xmm4;
        xmm5 &= xmm0;
        __asm ("packuswb xmm6, xmm5");
        __asm ("movdqa xmm5, xmm1");
        __asm ("pcmpgtw xmm5, xmm4");
        xmm6 &= xmm3;
        xmm5 &= xmm4;
        __asm ("packuswb xmm5, xmm8");
        __asm ("movdqa xmm8, xmm7");
        __asm ("pcmpgtw xmm8, xmm1");
        __asm ("movdqa xmm1, xmm8");
        __asm ("movdqa xmm8, xmm7");
        __asm ("pcmpgtw xmm8, xmm0");
        __asm ("pandn xmm1, xmm4");
        __asm ("movdqa xmm0, xmm1");
        __asm ("movdqa xmm1, xmm5");
        __asm ("pandn xmm8, xmm4");
        __asm ("packuswb xmm0, xmm8");
        __asm ("pandn xmm1, xmm0");
        xmm5 |= xmm1;
        __asm ("pandn xmm3, xmm5");
        xmm6 |= xmm3;
        __asm ("movups xmmword [rdx + rax], xmm6");
        rax += 0x10;
    } while (rcx != rax);
    rax = *((rbp - 0xf8));
    if (*((rbp - 0x68)) != rax) {
        goto label_4;
    }
    goto label_5;
    do {
        edi = 0xffffffff;
        if (r10w >= 0x100) {
            r10d = edi;
        }
label_0:
        rsi = *((rbp - 0x48));
        *((rsi + rax)) = r10b;
        rax++;
        if (*((rbp - 0x68)) <= rax) {
            goto label_5;
        }
label_4:
        r11d = *((r15 + rax));
        r10d = *((r14 + rax));
        r11w *= *((rbp - 0x98));
        rcx = *((rbp - 0x60));
        r10w *= *((rbp - 0x94));
        r9d = *((r13 + rax));
        r9w *= *((rbp - 0x90));
        r8d = *((r12 + rax));
        rsi = *((rbp - 0x58));
        edi = *((rcx + rax));
        r8w *= *((rbp - 0x8c));
        rdx = *((rbp - 0x50));
        r10d = r11 + r10 + 0x10;
        di *= *((rbp - 0x88));
        r10d += r9d;
        esi = *((rsi + rax));
        si *= *((rbp - 0x80));
        ecx = *((rdx + rax));
        r10d += r8d;
        cx *= *((rbp - 0x78));
        edx = *((rbx + rax));
        r10d += edi;
        dx *= *((rbp - 0x70));
        r10d += esi;
        r10d += ecx;
        r10d += edx;
        r10w >>= 5;
    } while (r10w >= 0);
    r10d = 0;
    goto label_0;
label_3:
    r12 = *((rbp - 0xd0));
    eax = 0;
    do {
        rdx = *((rbp - 0x60));
        r11d = *((r15 + rax));
        r10d = *((r14 + rax));
        r9d = *((r13 + rax));
        r11w *= *((rbp - 0x98));
        edi = *((rdx + rax));
        r10w *= *((rbp - 0x94));
        rdx = *((rbp - 0x58));
        r9w *= *((rbp - 0x90));
        r8d = *((r12 + rax));
        r8w *= *((rbp - 0x8c));
        esi = *((rdx + rax));
        rdx = *((rbp - 0x50));
        si *= *((rbp - 0x80));
        r10d = r11 + r10 + 0x10;
        di *= *((rbp - 0x88));
        r10d += r9d;
        r10d += r8d;
        ecx = *((rdx + rax));
        cx *= *((rbp - 0x78));
        r8d = 0;
        edx = *((rbx + rax));
        dx *= *((rbp - 0x70));
        r10d += edi;
        r10d += esi;
        r10d += ecx;
        edx += r10d;
        dx >>= 5;
        if (dx >= 0) {
            r8d = 0xffffffff;
            if (dx > 0xff) {
                r8d = edx;
                goto label_6;
            }
        }
label_6:
        rdx = *((rbp - 0x48));
        *((rdx + rax)) = r8b;
        rax++;
    } while (*((rbp - 0x68)) != rax);
label_5:
    rax = *((rbp - 0xb8));
    rbx = *((rbp - 0xb0));
    *((rbp - 0xa8)) += rax;
    *((rbp - 0xc8)) += rax;
    *((rbp - 0x48)) += rax;
    if (*((rbp - 0xd8)) > rbx) {
        goto label_1;
    }
label_2:
    rax = *((rbp - 0xa0));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x41576b */
#include <stdint.h>
 
uint64_t fcn_0041576b (int64_t arg2, int64_t arg1, uint32_t arg9, uint32_t arg10, uint32_t arg11) {
    rsi = arg2;
    rdi = arg1;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    r9d = 0;
    edx = (int32_t) sil;
    rsi |= main;
    r8 = 0;
    rax = rdi - 1;
    do {
        rax++;
        rsi--;
        if (rsi < 0) {
            goto label_5;
        }
        if ((al & 0x1f) == 0) {
            goto label_6;
        }
label_0:
        cl = *(rax);
        if (dl == cl) {
            goto label_7;
        }
        if (dh == cl) {
            goto label_8;
        }
    } while (1);
label_7:
    rax -= r8;
    goto label_9;
label_5:
    r9 = r10;
label_8:
    rax -= r8;
    rax &= r9;
label_9:
    return rax;
    do {
        rsi += 0x20;
        goto label_0;
label_6:
        ecx = (int32_t) dl;
        xmm0 = ecx;
        ecx = (int32_t) dh;
        xmm1 = ecx;
        rax -= 0x20;
        if ((*(0x0041c03c) & 0x20) == 0) {
            goto label_10;
        }
        __asm ("vpbroadcastb ymm0, xmm0");
        __asm ("vpbroadcastb ymm1, xmm1");
label_1:
        rax += 0x20;
        rsi -= 0x20;
label_2:
    } while (rsi < 0);
    __asm ("vmovdqa ymm2, ymmword [rax]");
    __asm ("vpcmpeqb ymm3, ymm2, ymm0");
    __asm ("vpcmpeqb ymm2, ymm2, ymm1");
    __asm ("vpor ymm2, ymm2, ymm3");
    __asm ("vpmovmskb ecx, ymm2");
    __asm ("bsf ecx, ecx");
    if (rsi == 0) {
        goto label_1;
    }
    __asm ("vzeroupper");
label_4:
    rax += rcx;
    goto label_0;
label_10:
    __asm ("punpcklbw xmm0, xmm0");
    __asm ("punpcklwd xmm0, xmm0");
    __asm ("pshufd xmm0, xmm0, 0");
    __asm ("punpcklbw xmm1, xmm1");
    __asm ("punpcklwd xmm1, xmm1");
    __asm ("pshufd xmm1, xmm1, 0");
label_3:
    rax += 0x20;
    rsi -= 0x20;
    if (rsi < 0) {
        goto label_2;
    }
    __asm ("movdqa xmm2, xmmword [rax]");
    __asm ("movdqa xmm3, xmmword [rax + 0x10]");
    __asm ("movdqa xmm4, xmm3");
    __asm ("pcmpeqb xmm3, xmm0");
    __asm ("pcmpeqb xmm4, xmm1");
    xmm3 |= xmm4;
    __asm ("pmovmskb ecx, xmm3");
    ecx <<= 0x10;
    __asm ("movdqa xmm4, xmm2");
    __asm ("pcmpeqb xmm2, xmm0");
    __asm ("pcmpeqb xmm4, xmm1");
    xmm2 |= xmm4;
    __asm ("pmovmskb r11d, xmm2");
    ecx |= r11d;
    __asm ("bsf ecx, ecx");
    if (ecx == 0) {
        goto label_3;
    }
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4097e0 */
#include <stdint.h>
 
uint64_t fcn_004097e0 (int64_t arg3, int64_t arg2, uint32_t arg1) {
    int64_t var_130h;
    int64_t var_128h;
    int64_t var_120h;
    int64_t var_11fh;
    int64_t var_11eh;
    int64_t var_11dh;
    int64_t var_11ch;
    int64_t var_11bh;
    int64_t var_11ah;
    int64_t var_119h;
    int64_t var_118h;
    int64_t var_117h;
    int64_t var_116h;
    int64_t var_115h;
    int64_t var_114h;
    int64_t var_113h;
    int64_t var_112h;
    int64_t var_111h;
    int64_t var_110h;
    int64_t var_10fh;
    int64_t var_10eh;
    int64_t var_10dh;
    int64_t var_10ch;
    int64_t var_10bh;
    int64_t var_10ah;
    int64_t var_109h;
    int64_t var_108h;
    int64_t var_107h;
    int64_t var_106h;
    int64_t var_105h;
    int64_t var_104h;
    int64_t var_103h;
    int64_t var_102h;
    int64_t var_101h;
    int64_t var_100h;
    int64_t var_ffh;
    int64_t var_feh;
    int64_t var_fdh;
    int64_t var_fch;
    int64_t var_fbh;
    int64_t var_fah;
    int64_t var_f9h;
    int64_t var_f8h;
    int64_t var_f7h;
    int64_t var_f6h;
    int64_t var_f5h;
    int64_t var_f4h;
    int64_t var_f3h;
    int64_t var_f2h;
    int64_t var_f1h;
    int64_t var_f0h;
    int64_t var_efh;
    int64_t var_eeh;
    int64_t var_edh;
    int64_t var_ech;
    int64_t var_ebh;
    int64_t var_eah;
    int64_t var_e9h;
    int64_t var_e8h;
    int64_t var_e7h;
    int64_t var_e6h;
    int64_t var_e5h;
    int64_t var_e4h;
    int64_t var_e3h;
    int64_t var_e2h;
    int64_t var_e1h;
    int64_t var_e0h;
    int64_t var_d8h;
    int64_t var_d0h;
    int64_t var_c8h;
    int64_t var_c0h;
    int64_t var_b8h;
    int64_t var_b0h;
    int64_t var_a0h;
    int64_t var_90h;
    int64_t var_80h;
    int64_t var_70h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_40h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r12 = rsi;
    ecx = *(rdx);
    eax = *((rdx + 1));
    __asm ("movdqa xmm5, xmmword [0x00418700]");
    *((rbp - 0x120)) = cl;
    *((rbp - 0x11f)) = al;
    *((rbp - 0x11e)) = cl;
    *((rbp - 0x11d)) = al;
    *((rbp - 0x11c)) = cl;
    *((rbp - 0x11b)) = al;
    *((rbp - 0x11a)) = cl;
    *((rbp - 0x119)) = al;
    *((rbp - 0x118)) = cl;
    *((rbp - 0x117)) = al;
    *((rbp - 0x116)) = cl;
    *((rbp - 0x115)) = al;
    *((rbp - 0x114)) = cl;
    *((rbp - 0x113)) = al;
    *((rbp - 0x112)) = cl;
    ecx = *((rdx + 2));
    *((rbp - 0x111)) = al;
    eax = *((rdx + 3));
    *((rbp - 0x110)) = cl;
    *((rbp - 0x10f)) = al;
    *((rbp - 0x10e)) = cl;
    *((rbp - 0x10d)) = al;
    *((rbp - 0x10c)) = cl;
    *((rbp - 0x10b)) = al;
    *((rbp - 0x10a)) = cl;
    *((rbp - 0x109)) = al;
    *((rbp - 0x108)) = cl;
    *((rbp - 0x107)) = al;
    *((rbp - 0x106)) = cl;
    *((rbp - 0x105)) = al;
    *((rbp - 0x104)) = cl;
    *((rbp - 0x103)) = al;
    *((rbp - 0x102)) = cl;
    ecx = *((rdx + 4));
    *((rbp - 0x101)) = al;
    eax = *((rdx + 5));
    *((rbp - 0x100)) = cl;
    *((rbp - 0xff)) = al;
    *((rbp - 0xfe)) = cl;
    *((rbp - 0xfd)) = al;
    *((rbp - 0xfc)) = cl;
    *((rbp - 0xfb)) = al;
    *((rbp - 0xfa)) = cl;
    *((rbp - 0xf9)) = al;
    *((rbp - 0xf8)) = cl;
    *((rbp - 0xf7)) = al;
    *((rbp - 0xf6)) = cl;
    *((rbp - 0xf5)) = al;
    *((rbp - 0xf4)) = cl;
    *((rbp - 0xf3)) = al;
    *((rbp - 0xf2)) = cl;
    ecx = *((rdx + 6));
    *((rbp - 0xf1)) = al;
    eax = *((rdx + 7));
    *((rbp - 0xf0)) = cl;
    *((rbp - 0xef)) = al;
    *((rbp - 0xee)) = cl;
    *((rbp - 0xed)) = al;
    *((rbp - 0xec)) = cl;
    *((rbp - 0xeb)) = al;
    *((rbp - 0xea)) = cl;
    *((rbp - 0xe9)) = al;
    *((rbp - 0xe8)) = cl;
    *((rbp - 0xe7)) = al;
    *((rbp - 0xe6)) = cl;
    *((rbp - 0xe5)) = al;
    *((rbp - 0xe4)) = cl;
    *((rbp - 0xe3)) = al;
    *((rbp - 0xe2)) = cl;
    *((rbp - 0xe1)) = al;
    while (r15 == 0) {
label_0:
        rax = r12;
        return rax;
        eax = *(rsi);
        r10 = rsi + rdi - 1;
        r15 = rdi + 1;
        r13 = rdi;
        r14 = 0x101010101010101;
        r9 = rbp - 0xd0;
        rcx = rax;
        rdx:rax = rax * r14;
        rcx *= r14;
        *((rbp - 0xe0)) = rax;
        rdx += rcx;
        *((rbp - 0xd8)) = rdx;
        eax = *(r10);
        rcx = rax;
        rdx:rax = rax * r14;
        rcx *= r14;
        *((rbp - 0xd0)) = rax;
        rdx += rcx;
        *((rbp - 0xc8)) = rdx;
        edx = 0x10;
        if (rdi <= 0x10) {
            rdx = rdi;
        }
        fcn_004154c0 (r9);
        r15 >>= 1;
    }
    r8d = *(0x0041c020);
    ebx = 0;
    goto label_5;
label_1:
    __asm ("movdqu xmm6, xmmword [r12 + rbx*2]");
    *((rbp - 0xc0)) = xmm6;
label_2:
    if ((r8d & 0x200) == 0) {
        goto label_6;
    }
label_3:
    __asm ("movdqa xmm4, xmmword [rbp - 0xd0]");
    __asm ("movdqa xmm0, xmmword [rbp - 0xe0]");
    __asm ("movdqa xmm3, xmmword [rbp - 0xc0]");
    __asm ("movdqa xmm6, xmmword [rbp - 0x120]");
    __asm ("palignr xmm3, xmm4, 1");
    __asm ("movdqa xmm2, xmm4");
    __asm ("movdqa xmm1, xmm4");
    __asm ("movdqa xmm7, xmmword [rbp - 0x110]");
    __asm ("palignr xmm2, xmm0, 0xd");
    __asm ("palignr xmm1, xmm0, 0xf");
    *((rbp - 0xb0)) = xmm2;
    __asm ("movdqa xmm0, xmmword [rbp - 0xc0]");
    __asm ("pmaddubsw xmm2, xmm6");
    __asm ("palignr xmm0, xmm4, 3");
    *((rbp - 0xa0)) = xmm1;
    __asm ("movdqa xmm4, xmmword [rbp - 0x100]");
    __asm ("pmaddubsw xmm1, xmm7");
    *((rbp - 0x80)) = xmm0;
    *((rbp - 0x60)) = xmm1;
    __asm ("movdqa xmm1, xmm3");
    __asm ("movdqa xmm3, xmmword [rbp - 0xf0]");
    __asm ("pmaddubsw xmm1, xmm4");
    __asm ("pmaddubsw xmm0, xmm3");
    *((rbp - 0x70)) = xmm2;
    *((rbp - 0x50)) = xmm1;
    *((rbp - 0x40)) = xmm0;
label_4:
    __asm ("movdqa xmm0, xmmword [rbp - 0x70]");
    __asm ("movdqa xmm6, xmmword [rbp - 0x60]");
    __asm ("movdqa xmm7, xmmword [rbp - 0x50]");
    __asm ("movdqa xmm3, xmmword [rbp - 0xc0]");
    __asm ("paddw xmm0, xmm5");
    __asm ("paddw xmm0, xmm6");
    __asm ("paddw xmm0, xmm7");
    __asm ("movdqa xmm7, xmmword [rbp - 0xd0]");
    __asm ("movdqa xmm6, xmmword [rbp - 0x40]");
    *((rbp - 0xd0)) = xmm3;
    __asm ("paddw xmm0, xmm6");
    *((rbp - 0xe0)) = xmm7;
    __asm ("psraw xmm0, 5");
    *((rbp - 0x70)) = xmm0;
    __asm ("packuswb xmm0, xmm0");
    *((rbp - 0x90)) = xmm0;
    *((r12 + rbx - 8)) = xmm0;
    if (rbx >= r15) {
        goto label_0;
    }
label_5:
    rax = rbx;
    rbx += 8;
    rsi = rax + rax + 0x20;
    if (rsi <= r13) {
        goto label_1;
    }
    eax = *(r10);
    rsi -= 0x10;
    rdi = rbp - 0xc0;
    rcx = rax;
    rdx:rax = rax * r14;
    rcx *= r14;
    *((rbp - 0xc0)) = rax;
    rdx += rcx;
    *((rbp - 0xb8)) = rdx;
    if (rsi >= r13) {
        goto label_2;
    }
    rax = rbx;
    rsi += r12;
    rax = -rax;
    rdx = r13 + rax*2;
    fcn_004154c0 (rdi);
    if ((r8d & 0x200) != 0) {
        goto label_3;
    }
label_6:
    *((rbp - main)) = r10;
    fcn_00415200 (rbp - 0xb0, r9, rbp - 0xe0, 0xd, r8);
    r9 = rbp - 0xd0;
    rsi = r9;
    *((rbp - main)) = r9;
    fcn_00415200 (rbp - 0xa0, rsi, rbp - 0xe0, 0xf, r8);
    r9 = *((rbp - main));
    fcn_00415200 (rbp - 0x90, rbp - 0xc0, r9, 1, r8);
    r9 = *((rbp - main));
    fcn_00415200 (rbp - 0x80, rbp - 0xc0, r9, 3, r8);
    fcn_00415240 (rbp - 0x70, rbp - 0xb0, main);
    fcn_00415240 (rbp - 0x60, rbp - 0xa0, main);
    fcn_00415240 (rbp - 0x50, rbp - 0x90, rbp - 0x100);
    fcn_00415240 (rbp - 0x40, rbp - 0x80, rbp - 0xf0);
    r8d = *(0x0041c020);
    __asm ("movdqa xmm5, xmmword [0x00418700]");
    r10 = *((rbp - main));
    r9 = *((rbp - main));
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x415200 */
#include <stdint.h>
 
int32_t fcn_00415200 (uint32_t arg4, int64_t arg1, int64_t arg8, int64_t arg9, int64_t arg10) {
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_10h;
    rcx = arg4;
    rdi = arg1;
    xmm1 = arg8;
    xmm2 = arg9;
    xmm3 = arg10;
    eax = 0x20;
    xmm0 = 0;
    __asm ("movdqu xmm1, xmmword [rdx]");
    __asm ("movdqu xmm2, xmmword [rsi]");
    if (rcx >= 0x20) {
        rcx = rax;
    }
    *((rbp - 0x10)) = xmm0;
    *((rbp - 0x30)) = xmm1;
    *((rbp - 0x20)) = xmm2;
    __asm ("movdqu xmm3, xmmword [rbp + rcx - 0x30]");
    __asm ("movups xmmword [rdi], xmm3");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x415240 */
#include <stdint.h>
 
int32_t fcn_00415240 (int64_t arg3, int64_t arg2, int32_t argc) {
    rdx = arg3;
    rsi = arg2;
    rdi = argc;
    eax = *(rdx);
    ecx = *(rsi);
    r8d = *((rsi + 1));
    ecx *= eax;
    eax = *((rdx + 1));
    eax *= r8d;
    eax += ecx;
    ecx = 0x7fff;
    if (eax <= 0x7fff) {
        ecx = 0xffff8000;
        if (eax < 0xffff8000) {
            ecx = eax;
            goto label_0;
        }
    }
label_0:
    *(rdi) = cx;
    eax = *((rsi + 2));
    ecx = *((rdx + 2));
    r8d = *((rsi + 3));
    ecx *= eax;
    eax = *((rdx + 3));
    eax *= r8d;
    eax += ecx;
    ecx = 0x7fff;
    if (eax <= 0x7fff) {
        ecx = 0xffff8000;
        if (eax < 0xffff8000) {
            ecx = eax;
            goto label_1;
        }
    }
label_1:
    *((rdi + 2)) = cx;
    eax = *((rdx + 4));
    ecx = *((rsi + 4));
    r8d = *((rsi + 5));
    ecx *= eax;
    eax = *((rdx + 5));
    eax *= r8d;
    eax += ecx;
    ecx = 0x7fff;
    if (eax <= 0x7fff) {
        ecx = 0xffff8000;
        if (eax < 0xffff8000) {
            ecx = eax;
            goto label_2;
        }
    }
label_2:
    *((rdi + 4)) = cx;
    eax = *((rdx + 6));
    ecx = *((rsi + 6));
    r8d = *((rsi + 7));
    ecx *= eax;
    eax = *((rdx + 7));
    eax *= r8d;
    eax += ecx;
    ecx = 0x7fff;
    if (eax <= 0x7fff) {
        ecx = 0xffff8000;
        if (eax < 0xffff8000) {
            ecx = eax;
            goto label_3;
        }
    }
label_3:
    *((rdi + 6)) = cx;
    eax = *((rdx + 8));
    ecx = *((rsi + 8));
    r8d = *((rsi + 9));
    ecx *= eax;
    eax = *((rdx + 9));
    eax *= r8d;
    eax += ecx;
    ecx = 0x7fff;
    if (eax <= 0x7fff) {
        ecx = 0xffff8000;
        if (eax < 0xffff8000) {
            ecx = eax;
            goto label_4;
        }
    }
label_4:
    *((rdi + 8)) = cx;
    eax = *((rdx + 0xa));
    ecx = *((rsi + 0xa));
    r8d = *((rsi + 0xb));
    ecx *= eax;
    eax = *((rdx + 0xb));
    eax *= r8d;
    eax += ecx;
    ecx = 0x7fff;
    if (eax <= 0x7fff) {
        ecx = 0xffff8000;
        if (eax < 0xffff8000) {
            ecx = eax;
            goto label_5;
        }
    }
label_5:
    *((rdi + 0xa)) = cx;
    eax = *((rdx + 0xc));
    ecx = *((rsi + 0xc));
    r8d = *((rsi + 0xd));
    ecx *= eax;
    eax = *((rdx + 0xd));
    eax *= r8d;
    eax += ecx;
    ecx = 0x7fff;
    if (eax <= 0x7fff) {
        ecx = 0xffff8000;
        if (eax < 0xffff8000) {
            ecx = eax;
            goto label_6;
        }
    }
label_6:
    *((rdi + 0xc)) = cx;
    eax = *((rsi + 0xf));
    ecx = *((rdx + 0xf));
    edx = *((rdx + 0xe));
    ecx *= eax;
    eax = *((rsi + 0xe));
    eax *= edx;
    edx = 0x7fff;
    eax += ecx;
    if (eax <= 0x7fff) {
        edx = 0xffff8000;
        if (eax < 0xffff8000) {
            edx = eax;
            goto label_7;
        }
    }
label_7:
    *((rdi + 0xe)) = dx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4028c1 */
#include <stdint.h>
 
uint64_t fcn_004028c1 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_40h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r14 = rdi;
    r13 = rdx;
    r12 = rsi;
    ebx = *(0x00448020);
    fcn_004029af ();
    fcn_00416150 (0x418740);
    rsi = rbp - 0x40;
    rax = fcn_00412630 (r14);
    fcn_004160c0 (rbp - 0x40, rax);
    fcn_00416150 (0x417013);
    fcn_00416150 (r13);
    fcn_00416150 (0x41874d);
    rsi = rbp - 0x40;
    rax = fcn_00412630 (r12);
    fcn_004160c0 (rbp - 0x40, rax);
    fcn_00416150 (0x418751);
    rdi = (int64_t) ebx;
    rax = fcn_00412600 (rdi, rbp - 0x40);
    fcn_004160c0 (rbp - 0x40, rax);
    fcn_00416150 (0x418754);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a4d0 */
#include <stdint.h>
 
uint64_t fcn_0040a4d0 (void) {
    int64_t var_110h;
    esi = 0x418767;
    edi = 0x418790;
    r13 = rsi;
    rax = fcn_004108b0 (rdi);
    if (rax == 0) {
        goto label_0;
    }
    r12 = rax;
    if (*(rax) == 0) {
        goto label_1;
    }
    eax = fcn_004100e0 (rax, *(0x00440778));
    if (eax == 0xffffffff) {
        goto label_1;
    }
    eax = fcn_0040b7a0 (r12, rsi, rdx);
    return rax;
    do {
label_1:
        eax = 0;
        return rax;
label_0:
        rax = fcn_00410390 (r13, main, rdx);
        rdi = rax;
    } while (rax == 0);
    fcn_0040b7a0 (rdi, rsi, rdx);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4100e0 */
#include <stdint.h>
 
uint32_t fcn_004100e0 (int64_t arg2, int64_t arg1) {
    int64_t var_200h;
    rsi = arg2;
    rdi = arg1;
    if (rdi != 0) {
        r12d = esi;
        if ((*(0x0041c718) & 4) != 0) {
            eax = fcn_00404d00 (rdi, rbp - 0x200);
            if (eax != 0xffffffff) {
                fcn_00404d10 (rbp - 0x200, r12d);
            }
            return eax;
        }
        edx = esi;
        rsi = rdi;
        edi = *(0x00440780);
        ecx = 0;
        fcn_00412360 ();
        return eax;
    }
    fcn_00402af7 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404d10 */
#include <stdint.h>
 
int64_t fcn_00404d10 (int64_t arg2, int64_t arg1) {
    int64_t var_464h;
    int64_t var_460h;
    int64_t var_45ch;
    int64_t var_458h;
    int64_t var_454h;
    int64_t var_450h;
    int64_t var_448h;
    int64_t var_440h;
    int64_t var_438h;
    int64_t var_430h;
    int64_t var_410h;
    int64_t var_10h;
    rsi = arg2;
    rdi = arg1;
    rax = 0x12011600120089;
    edx = 0x14;
    r13 = main;
    r12 = rdi;
    *((rbp - 0x464)) = esi;
    *((rbp - 0x458)) = 0;
    *((rbp - 0x460)) = 0;
    *((rbp - 0x45c)) = 0x400;
    *((rbp - 0x454)) = 0x14;
    rax = fcn_0041561f (r13, 0);
    *((rbp - main)) = rax;
    rsi = main;
    rax = 0x1f01ff001200a0;
    *((rbp - main)) = rax;
    fcn_00405ed5 (main, rsi, rdx, rcx);
    ecx = 0;
    r8 = main;
    rdx = main;
    *((rbp - main)) = 0xffffffffffffffff;
    *((rbp - main)) = 0xffffffffffffffff;
    eax = fcn_00405ec5 (r12, 7);
    if (eax == 0) {
        goto label_0;
    }
    rax = uint64_t (*0x0041b138)() ();
    eax = fcn_00405ee5 (rax, 0x2000e, main, rcx);
    while (eax == 0) {
label_0:
        eax = fcn_004162a0 ();
        r12d = eax;
label_1:
        fcn_00410160 (*((rbp - 0x448)), rsi);
        fcn_00410160 (*((rbp - 0x450)), rsi);
        rsp = rbp - 0x10;
        eax = r12d;
        return rax;
        eax = fcn_00405eb5 (*((rbp - main)), 2, main, rcx);
    }
    rax = main;
    edx = *((rbp - 0x464));
    rcx = main;
    rax = main;
    r9 = main;
    r8 = r13;
    eax = fcn_00405ea5 (main, *((rbp - main)));
    if (eax == 0) {
        goto label_0;
    }
    r12d = *((rbp - 0x460));
    if (r12d != 0) {
        goto label_2;
    }
    eax = *((rbp - 0x464));
    if (rax != *(0x00440770)) {
        goto label_0;
    }
    goto label_1;
label_2:
    r12d = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412360 */
#include <stdint.h>
 
int64_t fcn_00412360 (void) {
    rax = 0x13901e921d2010d;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410390 */
#include <stdint.h>
 
uint64_t fcn_00410390 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_144h;
    int64_t var_138h;
    int64_t var_130h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
        fcn_00402b21 ();
        r15d = 0;
        goto label_1;
        eax = *(0x00448020);
        *((rbp - 0x144)) = eax;
        rax = fcn_0041571a (rdi, rsi, rdx);
        if (rax == 0) {
            goto label_4;
        }
        rbx = rsi;
        rdx = rax;
        r12 = rdi;
        r13 = rax;
        rax = fcn_00415783 (rdi, 0x3d, rdx, rcx, r8);
        r15 = rax;
    } while (rax != 0);
    r14d = *(0x0041c718);
    r14d &= 4;
    if (r14d == 0) {
        goto label_5;
    }
    eax = fcn_004102a0 (rbx, 0x41c480, r12, r13);
    while (eax != 0xffffffff) {
label_0:
        eax = *((rbp - 0x144));
        r15 = rbx;
        *(0x00448020) = eax;
label_1:
        rax = r15;
        return rax;
        eax = fcn_004102a0 (rbx, 0x41c4c0, r12, r13);
    }
label_5:
    eax = fcn_004102a0 (rbx, 0x418757, r12, r13);
    if (eax != 0xffffffff) {
        goto label_0;
    }
    rax = fcn_00414c50 (r12, 0x41887f, rdx, rcx, r8);
    if (rax != 0) {
        goto label_1;
    }
    rax = fcn_004108b0 (0x418882);
    rsi = rax;
    if (rax == 0) {
        goto label_6;
    }
    eax = 0x418862;
    if (*(rax) == 0) {
        rsi = rax;
    }
label_3:
    rax = fcn_004148f0 (main, rsi, 0, 0xf8, r8);
    if (rax == 0) {
        goto label_7;
    }
    rax = main;
    r14d = 0x417046;
    *((rbp - main)) = rax;
    eax = 0x417068;
    if (r14d == 0) {
        r14 = rax;
    }
label_2:
    rax = fcn_00414cb0 (main, r14);
    r15 = rax;
    if (rax == 0) {
        goto label_1;
    }
    rax = fcn_0041576b (r15, 0x3d, rdx, rcx, r8);
    if (rax != 0) {
        goto label_2;
    }
    eax = fcn_004102a0 (rbx, r15, r12, r13);
    if (eax == 0xffffffff) {
        goto label_2;
    }
    goto label_0;
label_4:
    r15d = 0;
    fcn_00402b75 ();
    goto label_1;
label_7:
    eax = fcn_00402b8a ();
    if (eax != 0xffffffff) {
        goto label_0;
    }
    goto label_1;
label_6:
    esi = 0x418862;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b0c0 */
#include <stdint.h>
 
uint64_t fcn_0040b0c0 (uint32_t arg4, int64_t arg2) {
    int64_t var_ch;
    int64_t var_8h;
    int64_t var_4h;
    rcx = arg4;
    rsi = arg2;
    do {
        eax = fcn_00402b21 ();
        goto label_0;
    } while (*(rcx) == 0);
    eax = 0;
    *((rbp - 0xc)) = eax;
    rax = 1;
    *((rbp - 8)) = eax;
    rax = 2;
    *((rbp - 4)) = eax;
    rax = rbp - 0xc;
    if (rsi == 0) {
        rsi = rax;
    }
    if ((*(0x0041c718) & 4) == 0) {
        fcn_0040b110 (rdi, rsi, rdx, rcx, r8);
label_0:
        return rax;
    }
    fcn_00403410 (rdi, rsi, rdx, rcx, r8);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b110 */
#include <stdint.h>
 
uint64_t fcn_0040b110 (int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_90h;
    int64_t var_84h;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_54h;
    int64_t var_52h;
    int64_t var_51h;
    int64_t var_4fh;
    int64_t var_4eh;
    int64_t var_4ch;
    int64_t var_4bh;
    int64_t var_49h;
    uint32_t var_48h;
    uint32_t var_44h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rbx = rdx;
    *((rbp - 0x84)) = edi;
    rdi = rdx;
    *((rbp - 0x70)) = rsi;
    *((rbp - 0x80)) = rdx;
    *((rbp - 0x68)) = rcx;
    *((rbp - 0x90)) = r8;
    *((rbp - 0x78)) = 0;
    al = fcn_00414880 (rdi, 0x418fe0, rdx);
    if (al != 0) {
        goto label_10;
    }
    al = fcn_00414880 (rbx, 0x4187c3, rdx);
    if (al != 0) {
        goto label_10;
    }
label_0:
    rax = *((rbp - 0x70));
    r12d = 0;
    if (*(rax) == 0xffffffff) {
        goto label_11;
    }
label_1:
    rax = *((rbp - 0x70));
    if (*((rax + 4)) == 0xffffffff) {
        goto label_12;
    }
label_2:
    rax = *((rbp - 0x70));
    if (*((rax + 8)) == 0xffffffff) {
        goto label_13;
    }
label_3:
    if (r12d != 0xffffffff) {
        eax = fcn_0040b4ae (rdi);
        r12d = eax;
        if (eax == 0) {
            goto label_14;
        }
    }
    ebx = 0;
    do {
        rax = *((rbp - 0x70));
        if (*((rax + rbx*4)) == 0xffffffff) {
            goto label_15;
        }
label_6:
        rbx++;
    } while (rbx != 3);
    rax = *((rbp - 0x78));
    if (rax != 0) {
        rdi = rax;
        fcn_0040b701 ();
    }
    eax = r12d;
    return rax;
label_10:
    edx = *(0x00440938);
    rsi = *((rbp - 0x80));
    ecx = 0;
    *((rbp - 0x48)) = 0;
    edi = *(main);
    eax = fcn_004123b0 ();
    edx = 8;
    rsi = rbp - 0x48;
    r12d = eax;
    edi = eax;
    fcn_004123d0 ();
    edi = r12d;
    fcn_00412330 ();
    if (*((rbp - 0x48)) == 0x46715a4d) {
        goto label_16;
    }
label_4:
    eax = 1;
label_5:
    if (eax != 0) {
        goto label_0;
    }
    rax = *((rbp - 0x68));
    if (*((rax + 8)) == 0) {
        goto label_17;
    }
    eax = 1;
    do {
        rsi = *((rbp - 0x68));
        rbx = rax;
        rax = rax + 1;
    } while (*((rsi + rbx*8 + 8)) != 0);
    rdi = rbx*8 + 0x20;
    rax = fcn_0040b707 ();
    *((rbp - 0x78)) = rax;
    if (rax == 0) {
        goto label_0;
    }
    rax = *((rbp - 0x78));
    rcx = *((rbp - 0x80));
    *(rax) = 0x4187c0;
    *((rax + 8)) = rcx;
    eax = 1;
    do {
        rcx = *((rbp - 0x68));
        rdx = rax;
        rax++;
        rsi = *((rbp - 0x78));
        rcx = *((rcx + rax*8 - 8));
        *((rsi + rax*8)) = rcx;
    } while (rdx != rbx);
    rax = rbx*8 + 0x10;
label_9:
    rdx = *((rbp - 0x78));
    r12d = 0;
    *((rbp - 0x80)) = 0x4187bb;
    *((rdx + rax)) = 0;
    rax = *((rbp - 0x70));
    *((rbp - 0x68)) = rdx;
    if (*(rax) != 0xffffffff) {
        goto label_1;
    }
label_11:
    rdi = rbp - 0x40;
    eax = fcn_004100bb ();
    r12d = eax;
    rax = *((rbp - 0x70));
    if (*((rax + 4)) != 0xffffffff) {
        goto label_2;
    }
label_12:
    rdi = rbp - 0x38;
    eax = fcn_004100bb ();
    r12d |= eax;
    rax = *((rbp - 0x70));
    if (*((rax + 8)) != 0xffffffff) {
        goto label_3;
    }
label_13:
    rdi = rbp - 0x30;
    eax = fcn_004100bb ();
    r12d |= eax;
    goto label_3;
label_14:
    if ((*((rbp - 0x84)) & 1) != 0) {
        goto label_18;
    }
label_8:
    ebx = 0;
    do {
        rax = *((rbp - 0x70));
        edi = *((rax + rbx*4));
        if (edi == 0xffffffff) {
            ecx = 1;
            *((rbp - 0x52)) = 0;
            r12 = rbx + rbx;
            *((rbp - 0x54)) = cx;
            rax = *((rbp + rbx - 0x54));
            rax += r12;
            edi = *((rbp + rax*4 - 0x40));
            eax = fcn_00412330 ();
            esi = 1;
            eax = 0;
            *((rbp - 0x4f)) = 0;
            *((rbp - 0x51)) = si;
            al = (*((rbp + rbx - 0x51)) == 0) ? 1 : 0;
            r12 += rax;
            edi = *((rbp + r12*4 - 0x40));
        }
        esi = ebx;
        rbx++;
        fcn_00412340 ();
    } while (rbx != 3);
    rdx = *((rbp - 0x90));
    rsi = *((rbp - 0x68));
    rdi = *((rbp - 0x80));
    fcn_00412350 ();
label_7:
    eax = fcn_00401114 ();
label_16:
    eax = 0;
    if (*((rbp - 0x44)) != 0x4470) {
        goto label_4;
    }
    goto label_5;
label_15:
    eax = 1;
    *((rbp - 0x4c)) = 0;
    r13 = rbx + rbx;
    *((rbp - 0x4e)) = ax;
    eax = 0;
    al = (*((rbx + rbp - 0x4e)) == 0) ? 1 : 0;
    rax += r13;
    edi = *((rbp + rax*4 - 0x40));
    fcn_00412330 ();
    edx = 1;
    *((rbp - 0x49)) = 0;
    *((rbp - 0x4b)) = dx;
    rax = *((rbp + rbx - 0x4b));
    r13 += rax;
    edi = *((rbp + r13*4 - 0x40));
    if (r12d == 0xffffffff) {
        goto label_19;
    }
    rax = *((rbp - 0x70));
    *((rax + rbx*4)) = edi;
    goto label_6;
label_18:
    eax = fcn_004114b0 ();
    if (eax == 0xffffffff) {
        goto label_7;
    }
    eax = fcn_00412370 ();
    if (eax == 0xffffffff) {
        goto label_7;
    }
    if (eax <= 0) {
        goto label_8;
    }
    edi = 0;
    fcn_00416001 ();
label_19:
    fcn_00412330 ();
    goto label_6;
label_17:
    edi = 0x20;
    rax = fcn_0040b707 ();
    *((rbp - 0x78)) = rax;
    if (rax == 0) {
        goto label_0;
    }
    rax = *((rbp - 0x78));
    rcx = *((rbp - 0x80));
    *(rax) = 0x4187c0;
    *((rax + 8)) = rcx;
    eax = 0x10;
    goto label_9;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x403410 */
#include <stdint.h>
 
uint64_t fcn_00403410 (int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_110h;
    int64_t var_108h;
    int64_t var_100h;
    int64_t var_f4h;
    int64_t var_f0h;
    int64_t var_e8h;
    int64_t var_d8h;
    int64_t var_cch;
    int64_t var_c0h;
    int64_t var_beh;
    int64_t var_b8h;
    int64_t var_a0h;
    int64_t var_64h;
    int64_t var_50h;
    int64_t var_28h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r14 = rbp - 0xa0;
    rbx = rsi;
    *((rbp - 0xf4)) = edi;
    *((rbp - 0x100)) = rdx;
    edx = 0x68;
    *((rbp - main)) = rcx;
    *((rbp - main)) = r8;
    fcn_0041561f (r14, 0);
    *((rbp - 0xa0)) = 0x68;
    *((rbp - 0x64)) = 0x100;
    rax = fcn_00410830 ();
    r13 = rax;
    if (eax == 0xffffffff) {
        goto label_3;
    }
    r15d = 0;
    r12d = 0;
    do {
        rax = *((rbx + r12*4));
        if (eax == 0xffffffff) {
            goto label_4;
        }
        rcx = *(0x00447b50);
        rax *= 3;
        rax = rcx + rax*8;
        *((r14 + r12*8 + 0x50)) = rax;
label_0:
        r12++;
    } while (r12 != 3);
    if (r15 != main) {
        ecx = *((rbp - 0xf4));
        edx = 0x1000208;
        rsi = *((rbp - main));
        rdi = *((rbp - 0x100));
        eax = ecx;
        eax &= 1;
        if (eax != 0) {
            eax = edx;
        }
        ecx >>= 1;
        rdx = rbp - 0xc0;
        r9d = ecx;
        r15d = 0;
        r9d &= 1;
        eax = fcn_00403c50 (rdi, rsi, *((rbp - main)), 0x418920, 0, 1);
        if (eax != 0xffffffff) {
            goto label_5;
        }
    }
label_2:
    r12d = 0;
    do {
        if (*((rbx + r12*4)) == 0xffffffff) {
            goto label_6;
        }
label_1:
        r12++;
    } while (r12 != 3);
    rax = (int64_t) r13d;
    rdx = rax * 3;
    rax = *(main);
    rax = rax + rdx*8;
    rdx = *(main);
    *((rax + 0x10)) = 3;
    *(rax) = r15;
    *((rax + 0x14)) = edx;
label_3:
    rsp = rbp - 0x28;
    eax = r13d;
    return rax;
label_4:
    edi = 1;
    *((rbp - 0xbe)) = 0;
    rsi = rbp + r12*8 - 0x50;
    *((rbp - 0xc0)) = di;
    rdi = rbp - 0xd8;
    if (*((rbp + r12 - 0xc0)) != 0) {
        rdi = rsi;
        rsi = rbp - 0xd8;
    }
    *((rbp - 0xf0)) = rsi;
    *((rbp - 0xe8)) = rdi;
    eax = fcn_00410830 ();
    rdi = *((rbp - 0xe8));
    rsi = *((rbp - 0xf0));
    *((rbp + r12*4 - 0xcc)) = eax;
    while (eax == 0) {
        r15 = main;
        goto label_0;
label_6:
        rdi = *((rbp + r12*4 - 0xcc));
        if (r15 == main) {
            goto label_7;
        }
        rdx = *(0x00447b50);
        rax = rdi * 3;
        *((rbx + r12*4)) = edi;
        rax = rdx + rax*8;
        *((rax + 0x10)) = 1;
        fcn_00405ef5 (*((r14 + r12*8 + 0x50)));
        goto label_1;
label_5:
        rax = fcn_00405ef5 (*((rbp - 0xb8)));
        r15 = *((rbp - 0xc0));
        goto label_2;
        *((rbp - 0xe8)) = rax;
        eax = fcn_00405f18 (rdi, rsi, 0x418920, 0);
    }
    r10 = *((rbp - 0xe8));
    rsi = *(main);
    rdx = *((rbp - 0xd8));
    r10 = (int64_t) r10d;
    rax = r10 * 3;
    rax = rsi + rax*8;
    *(rax) = rdx;
    goto label_0;
label_7:
    fcn_00405ef5 (rdi);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410f70 */
#include <stdint.h>
 
void fcn_00410f70 (int64_t arg3, int64_t arg2) {
    int64_t var_10h;
    int64_t var_8h;
    rdx = arg3;
    rsi = arg2;
    *((rbp - 0x10)) = rsi;
    *((rbp - 8)) = rdx;
    fcn_00411370 (rdi, rbp - 0x10, 1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411370 */
#include <stdint.h>
 
int64_t fcn_00411370 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_44h;
    int64_t var_40h;
    int64_t var_18h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_0:
    fcn_00402b21 ();
    rax = (int64_t) eax;
    goto label_3;
label_1:
    r12 = rdi;
    rdi = rcx;
    rbx = rsi;
    if (rdx != 0) {
        goto label_4;
    }
    goto label_5;
    do {
        rbx += 0x10;
        rdx--;
        if (rdx == 0) {
            goto label_5;
        }
label_4:
    } while (*((rbx + 8)) == 0);
    r13 = *(0x0041b1d0);
    rax = fcn_00405e00 (rdi, rbp - 0x40);
    r8d = 0x7ffff000;
    rdx = *(rbx);
    r8 = *((rbx + 8));
    while (1) {
        rcx = *(r12);
        r9 = rbp - 0x44;
        eax = void (*r13)(uint64_t) (rax);
        if (eax != 0) {
            goto label_6;
        }
        eax = 0;
        edx = *(gs:0x68);
        if (edx != 0x6d) {
            goto label_7;
        }
        rsp = rbp - 0x18;
        return rax;
label_5:
        r13 = *(0x0041b1d0);
        fcn_00405e00 (rdi, rbp - 0x40);
        r8d = 0;
        edx = 0;
    }
label_7:
    fcn_004162a0 ();
    rsp = rbp - 0x18;
    return rax;
label_6:
    eax = *((rbp - 0x44));
    rsp = rbp - 0x18;
    return rax;
    if (edi < 0) {
        goto label_0;
    }
    if (edx < 0) {
        goto label_0;
    }
    rax = (int64_t) edi;
    if (rax < *(0x00447b48)) {
        goto label_8;
    }
    if ((*(0x0041c718) & 4) == 0) {
        goto label_9;
    }
    do {
        fcn_00402acd ();
label_3:
        return rax;
label_8:
        rcx = rax * 3;
        rax = *(main);
        r10 = rax + rcx*8;
        eax = *((r10 + 0x10));
        if (eax == 6) {
            goto label_10;
        }
        if (eax == 5) {
            goto label_11;
        }
        if ((*(0x0041c718) & 4) == 0) {
            goto label_9;
        }
        if (eax == 1) {
            goto label_12;
        }
        if (eax == 4) {
            goto label_12;
        }
    } while (eax != 2);
    rdx = (int64_t) edx;
    r9d = 0;
    r8d = 0;
    ecx = 0;
    rdi = r10;
    eax = 0x402f50;
    void (*rax)() ();
label_9:
    goto label_13;
label_10:
    rdi = *(r10);
    rdx = (int64_t) edx;
    rcx = main;
    eax = 0;
    void (*rax)() ();
label_12:
    rdx = (int64_t) edx;
    rcx = main;
    rdi = r10;
    goto label_1;
label_11:
    rdi = r10;
    rbx = (int64_t) edx;
    if (ebx <= 0) {
        goto label_14;
    }
    edx = rbx - 1;
    rax = rsi + 8;
    rdx <<= 4;
    rdx = rsi + rdx + 0x18;
    while (*(rax) == 0) {
        rax += 0x10;
        if (rax == rdx) {
            goto label_14;
        }
    }
    while ((al & 1) == 0) {
        __asm ("pause");
        rcx = *(rdi);
        edx = rcx + 5;
        __asm ("in al, dx");
    }
    r9d = 0;
    r8d = 0;
    r10d = 0;
    while (*((rdx + 8)) != r8) {
label_2:
        rcx = *(rdi);
        edx = rcx + 5;
        __asm ("in al, dx");
        if ((al & 1) == 0) {
            goto label_15;
        }
        r9++;
        edx = ecx;
        __asm ("in al, dx");
        rdx = r10;
        rdx <<= 4;
        rdx += rsi;
        r11 = *(rdx);
        *((r11 + r8)) = al;
        r8++;
    }
    r10++;
    if (rbx != r10) {
        r8d = 0;
        goto label_2;
    }
label_15:
    rax = r9;
    return rax;
label_14:
    eax = 0;
    return rax;
label_13:
    rax = 0x78007820780013;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x415783 */
#include <stdint.h>
 
void fcn_00415783 (int64_t arg2, int64_t arg1, int64_t arg9, int64_t arg10, int64_t arg11) {
    rsi = arg2;
    rdi = arg1;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    tmp_0 = rdx;
    rdx = rsi;
    rsi = tmp_0;
    dh = dl;
    r8 = 0;
    r10 = 0;
    return void (*0x4157b1)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b560 */
#include <stdint.h>
 
uint64_t fcn_0040b560 (int64_t arg4, int64_t arg3, uint32_t arg2, int64_t arg1) {
    int64_t var_40h;
    int64_t var_38h;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    if (rcx > rsi) {
        goto label_5;
    }
    r8 = rdi;
    r12 = rcx;
    *((rbp - 0x38)) = rdi;
    if (rcx != 0) {
        r13 = rsi;
        esi = *(rdx);
        rbx = rdx;
        r15d = esi;
        rax = fcn_00415783 (rdi, rsi, r13, rcx, r8);
        r14 = rax;
        r8 = rax;
        if (rax == 0) {
            goto label_2;
        }
        if (r12 == 1) {
            goto label_2;
        }
        r9 = *((rbp - 0x38));
        *((rbp - 0x40)) = rax;
        rax -= r9;
        r13 -= rax;
        if (r12 >= r13) {
            goto label_6;
        }
        eax = fcn_00414960 (r14, rbx, r12, rcx, r8);
        r8 = r14;
        if (eax != 0) {
            goto label_6;
        }
    }
label_2:
    rax = r8;
    return rax;
label_6:
    r8 = r12*8 + 8;
    rdi = r8;
    *((rbp - 0x38)) = r8;
    fcn_0040b707 ();
    r8 = *((rbp - 0x38));
    *(rax) = main;
    rdi = rax;
    *((rax + 8)) = 0;
    if (r12 <= 2) {
        goto label_7;
    }
    eax = r15d;
    ecx = 0;
    edx = 2;
    while (*((rbx + rdx - 1)) != al) {
        if (rcx <= 0) {
            goto label_8;
        }
        rcx = *((rdi + rcx*8));
label_3:
        if (r12 <= rdx) {
            goto label_7;
        }
label_0:
        eax = *((rbx + rcx));
        rsi = rdx;
    }
    rcx++;
    rdx++;
    *((rdi + rsi*8)) = rcx;
    if (r12 > rdx) {
        goto label_0;
    }
label_7:
    *((rdi + r8 - 8)) = 0;
    if (r13 <= 0) {
        goto label_9;
    }
    esi = 0;
    r8d = 0;
    edx = 0;
    while (*((r14 + r8)) != r15b) {
        rcx = *((rdi + rdx*8));
        rsi = r8;
        rsi -= rcx;
        if (rdx <= 0) {
            goto label_10;
        }
        rdx = rcx;
        if (r13 <= r8) {
            goto label_11;
        }
label_1:
        r15d = *((rbx + rdx));
    }
    rdx++;
    if (r12 == rdx) {
        goto label_11;
    }
label_10:
    r8 = rdx + rsi;
    if (r13 > r8) {
        goto label_1;
    }
label_11:
    rbx = rsi;
label_4:
    fcn_0040b701 ();
    r8d = 0;
    if (r13 <= rbx) {
        goto label_2;
    }
    r8 = r14 + rbx;
    goto label_2;
label_8:
    *((rdi + rsi*8)) = 0;
    rdx++;
    goto label_3;
label_5:
    r8d = 0;
    rax = r8;
    return rax;
label_9:
    ebx = 0;
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4119f0 */
#include <stdint.h>
 
int64_t fcn_004119f0 (int64_t arg3, int64_t arg2, uint32_t arg1) {
    int64_t var_354h;
    int64_t var_350h;
    int64_t var_348h;
    int64_t var_340h;
    int64_t var_338h;
    int64_t var_330h;
    int64_t var_230h;
    int64_t var_28h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_5:
    r14 = (int64_t) edx;
    r12 = rcx;
    rbx = rsi;
    if (edi == 0xffffffff) {
        goto label_6;
    }
    r13d = edi;
    al = fcn_00410c50 (rdi, 3);
    if (al == 0) {
        goto label_7;
    }
    rax = (int64_t) r13d;
    rdx = *(0x00447b50);
    *((rbp - 0x330)) = r13d;
    r13d = 1;
    rax *= 3;
    rax = rdx + rax*8;
    *((rbp - main)) = rax;
label_0:
    r14 &= *(main);
    do {
        *((rbp - 0x354)) = 0x103;
        if (r14 == 0) {
            goto label_8;
        }
        eax = fcn_00406004 (r13d, main, 0, 0);
        if (eax == 0x102) {
            goto label_9;
        }
label_2:
        if (eax == 0xffffffff) {
            goto label_10;
        }
        r15d = eax;
        rdx = main;
        rcx = *((rbp + r15*8 - main));
        eax = uint64_t (*0x0041b150)() ();
        if (eax == 0) {
            goto label_10;
        }
        eax = *((rbp - 0x354));
    } while (eax == 0x103);
    if (rbx != 0) {
        eax <<= 8;
        eax &= 0xffff;
        *(rbx) = eax;
    }
    if (r12 != 0) {
        edx = 0x400;
        fcn_0041561f (r12, 0);
        rax = uint64_t (*0x0041b138)() ();
        r9 = main;
        r8 = main;
        rcx = rax;
        rax = main;
        rdx = main;
        uint64_t (*0x0041b190)(uint64_t) (rax);
        fcn_004124e0 (r12, *((rbp - main)));
        fcn_004124e0 (r12 + 0x10, *((rbp - main)));
    }
    rax = *((rbp + r15*4 - 0x330));
    rbx = rax * 3;
    r12 = rax;
    rax = *(0x00447b50);
    rbx <<= 3;
    fcn_00405ef5 (*((rax + rbx)));
    rax = *(0x00447b50);
    *((rax + rbx + 0x10)) = 0;
label_1:
    rsp = rbp - 0x28;
    eax = r12d;
    return rax;
label_3:
    if (r13d != 0) {
        goto label_0;
    }
    do {
label_7:
        eax = fcn_00402ae2 ();
        r12d = eax;
        goto label_1;
label_8:
        fcn_00406004 (r13d, main, 0, 0xffffffff);
        goto label_2;
label_6:
        rax = *(0x00447b48);
        ecx = rax - 1;
    } while (eax == 0);
    rdi = *(0x00447b50);
    eax = ecx;
    r13d = 0;
    rax *= 3;
    rax = rdi + rax*8;
    goto label_11;
label_4:
    ecx--;
    rsi = rax - 0x18;
    if (rdi == rax) {
        goto label_3;
    }
    rax = rsi;
label_11:
    if (*((rax + 0x10)) != 3) {
        goto label_4;
    }
    rsi = *(rax);
    edx = r13d;
    r13d++;
    *((rbp + rdx*4 - 0x330)) = ecx;
    *((rbp + rdx*8 - main)) = rsi;
    if (r13d != 0x40) {
        goto label_4;
    }
    goto label_0;
label_10:
    eax = fcn_004162a0 ();
    r12d = eax;
    goto label_1;
label_9:
    r12d = 0;
    goto label_1;
    ecx = 0;
    if ((*(0x0041c718) & 4) == 0) {
    } else {
        goto label_5;
    }
    rax = 0xb00072007003d;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414ab0 */
#include <stdint.h>
 
int64_t fcn_00414ab0 (int64_t arg3, int64_t arg2, int64_t arg1, uint32_t arg7, int64_t arg8) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    xmm0 = arg7;
    xmm1 = arg8;
    rax = rsi;
    rcx = rsi;
    eax &= 0xf;
    if (eax == 0) {
        goto label_1;
    }
    eax = 0;
    while (dl != 0) {
        rax++;
        rcx = rsi + rax;
        if ((cl & 0xf) == 0) {
            goto label_1;
        }
        edx = *((rsi + rax));
        r8 = rdi + rax;
        *((rdi + rax)) = dl;
    }
label_0:
    rax = r8;
    return rax;
label_1:
    xmm2 = 0;
    while (edx == 0) {
        __asm ("movups xmmword [rdi + rax], xmm1");
        rax += 0x10;
        rcx = rsi + rax;
        __asm ("movdqu xmm1, xmmword [rsi + rax]");
        r8 = rdi + rax;
        __asm ("movdqa xmm0, xmm1");
        __asm ("pcmpeqb xmm0, xmm2");
        __asm ("pmovmskb edx, xmm0");
    }
    edx = *(rcx);
    *(r8) = dl;
    if (dl == 0) {
        goto label_0;
    }
    rax++;
    rdi += rax;
    rax += rsi;
    do {
        edx = *(rax);
        r8 = rdi;
        rax++;
        rdi++;
        *((rdi - 1)) = dl;
    } while (dl != 0);
    rax = r8;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a810 */
#include <stdint.h>
 
int64_t fcn_0040a810 (uint32_t arg1) {
    rdi = arg1;
    eax = 0;
    if (edi == 0) {
        goto label_0;
    }
    eax = rdi - 0x7f;
    if (eax <= 0x20) {
        goto label_1;
    }
    if (edi <= 0x1f) {
        goto label_1;
    }
    eax = 1;
    if (edi < 0) {
        goto label_0;
    }
    while (((ecx >> edx) & 1) >= 0) {
        eax = 1;
        if (edi < *(0x0041879c)) {
            eax = edi;
            edi &= 7;
            eax >>= 3;
            ecx = edi;
            rax = (int64_t) eax;
            eax = *((rax + 0x438768));
            eax >>= cl;
            eax &= 1;
            eax++;
            return rax;
label_1:
            eax = 0xffffffff;
        }
label_0:
        return rax;
        eax = edi;
        edx = edi;
        eax >>= 3;
        edx &= 7;
        rax = (int64_t) eax;
        ecx = *((rax + 0x41c728));
        eax = 0;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40aa40 */
#include <stdint.h>
 
int64_t fcn_0040aa40 (uint32_t arg1) {
    rdi = arg1;
    edx = 0x446660;
    rax = *(rdx);
    if (rax == 0) {
        goto label_0;
    }
    rdx = *((rdx + 0x10));
    rdx = rdx + rax*8 - 8;
    while (*(rdx) != rdi) {
        rdx -= 8;
        rax--;
        if (rax == 0) {
            goto label_0;
        }
    }
    rdx = 0;
    return rax;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40a950 */
#include <stdint.h>
 
int64_t fcn_0040a950 (uint32_t arg1) {
    rdi = arg1;
label_1:
    if (rdi == 0) {
        goto label_2;
    }
    rbx = rdi;
    if (*((rdi + 0xc)) == 0xffffffff) {
        goto label_3;
    }
    r12d = *((rdi + 8));
    if (r12d == 0) {
        goto label_4;
    }
    goto label_5;
    do {
        eax = *((rbx + 0x14));
        if (eax != 0) {
            goto label_0;
        }
        eax = fcn_0040ade0 (rbx);
        ecx = *((rbx + 8));
        edx = r12 + rax;
        if (eax != 0xffffffff) {
            r12d = edx;
        }
        if (ecx != 0) {
            goto label_0;
        }
label_4:
        edx = *((rbx + 0x10));
    } while (edx != 0);
    do {
label_0:
        eax = r12d;
        return eax;
label_3:
        eax = *((rdi + 0x10));
        r12d = 0;
    } while (eax == 0);
    if (eax >= *((rdi + 0x20))) {
        goto label_0;
    }
    rdx = *((rdi + 0x18));
    *((rdx + rax)) = 0;
    goto label_0;
label_2:
    rbx = *(0x00446660);
    if (rbx == 0) {
        goto label_5;
    }
    rbx--;
    r12d = 0;
    do {
        rax = *(0x00446670);
        rdi = *((rax + rbx*8));
        if (rdi != 0) {
            eax = fcn_0040a950 (rdi);
            goto label_1;
            if (eax == 0xffffffff) {
                goto label_6;
            }
            r12d += eax;
        }
        rbx--;
    } while (rbx != main);
    eax = r12d;
    return rax;
label_6:
    r12d = 0xffffffff;
    goto label_0;
label_5:
    r12d = 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f140 */
#include <stdint.h>
 
uint8_t fcn_0040f140 (int64_t arg1) {
    rdi = arg1;
    r12d = 0;
    tmp_0 = rdi;
    rdi = r12;
    r12 = tmp_0;
    al = fcn_0040f2d0 (r12);
    if (al == 0) {
        return al;
    }
    rdi = r12;
    return void (*0x40f867)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f2d0 */
#include <stdint.h>
 
int64_t fcn_0040f2d0 (signed int64_t arg1) {
    rdi = arg1;
    rax = rsp;
    rax ^= rdi;
    r12d = 0;
    if ((rax & 0xffffffffffff0000) == 0) {
        goto label_0;
    }
    while (*(0x00446ee0) <= eax) {
label_0:
        eax = r12d;
        r12 = rbx;
        return rax;
        rbx = rdi;
        rbx >>= 0x10;
        eax = fcn_0040f8b0 (0x446ee0, ebx);
    }
    rax = (int64_t) eax;
    rax *= 3;
    rax = main;
    if (*((rax + 8)) > ebx) {
        goto label_0;
    }
    r12b = (*((rax + 0xc)) >= ebx) ? 1 : 0;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f867 */
#include <stdint.h>
 
int32_t loc_0040f867 (void) {
    eax = fcn.0040b701;
    if (rax != 0) {
        fcn_0040b701 ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ed70 */
#include <stdint.h>
 
int32_t fcn_0040ed70 (char ** envp, int64_t arg1) {
    rdx = envp;
    rdi = arg1;
    r8 = rdi;
    edi = 0xffffffff;
    tmp_0 = r8;
    r8 = edi;
    edi = tmp_0;
    if (edi != 0xffffffff) {
        void (*0x410160)() ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ade0 */
#include <stdint.h>
 
uint64_t fcn_0040ade0 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    edx = *((rdi + 0x10));
    rax = fcn_00411a10 (*((rdi + 0xc)), *((rdi + 0x18)));
    if (rax == main) {
        goto label_0;
    }
    edx = *((r12 + 0x10));
    if (rdx == rax) {
        goto label_1;
    }
    rdx -= rax;
    rsi = rdi + rax;
    eax = fcn_004154c0 (*((r12 + 0x18)));
    *((r12 + 0x10)) -= eax;
    do {
        return rax;
label_1:
        *((r12 + 0x10)) = 0;
        return rax;
label_0:
        rdx = *(0x00448020);
        eax = 0;
    } while (rdx == *(0x00440818));
    fcn_0040b0b0 (r12);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b0b0 */
#include <stdint.h>
 
void fcn_0040b0b0 (int64_t arg1) {
    rdi = arg1;
    esi = *(0x00448020);
    return void (*0x40ada0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ac60 */
#include <stdint.h>
 
uint32_t fcn_0040ac60 (int64_t arg1) {
    rdi = arg1;
    esi = *(0x00440918);
    rdx = *(0x00440928);
    r8d = 0;
    edx |= *(0x00440958);
    ecx = *(0x00440938);
    esi |= edx;
    edx |= *(0x00440950);
    do {
label_0:
        eax = *(rdi);
        rdi++;
        if (al == 0x72) {
            goto label_1;
        }
        if (al == 0x77) {
            goto label_2;
        }
        if (al == 0x61) {
            goto label_3;
        }
        if (al == 0x2b) {
            goto label_4;
        }
        if (al == 0x78) {
            goto label_5;
        }
        if (al == 0x65) {
            goto label_6;
        }
    } while (al != 0);
    eax = r8d;
    return eax;
label_1:
    r8d |= ecx;
    goto label_0;
label_2:
    r8d |= edx;
    goto label_0;
label_3:
    r8d |= esi;
    goto label_0;
label_4:
    r8d |= *(0x00440940);
    goto label_0;
label_5:
    r8d |= *(0x00440930);
    goto label_0;
label_6:
    r8d |= *(0x00440920);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40aec0 */
#include <stdint.h>
 
uint64_t fcn_0040aec0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r14 = rsi;
    esi = 0x38;
    r13d = edi;
    edi = 1;
    rax = fcn_0040b6fb ();
    r12 = rax;
    if (rax == 0) {
        goto label_0;
    }
    *((rax + 0xc)) = r13d;
    *((rax + 0x28)) = 0x40b050;
    *((rax + 0x30)) = fcn.0040ade0;
    eax = fcn_004023b0 (r13d);
    r12 = (eax != 0) ? 1 : 0;
    eax = fcn_0040ac60 (r14);
    edi = 0x1000;
    *((r12 + 0x20)) = 0x1000;
    *((r12 + 4)) = eax;
    rax = fcn_0040b713 ();
    *((r12 + 0x18)) = rax;
    if (rax == 0) {
        goto label_1;
    }
    eax = *((r12 + 4));
    rax &= *(0x00440910);
    if (rax == *(0x00440938)) {
        goto label_0;
    }
    fcn_00401fa0 (r12);
    do {
label_0:
        rax = r12;
        return rax;
label_1:
        rdi = r12;
        r12d = 0;
        fcn_0040b701 ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b713 */
#include <stdint.h>
 
void fcn_0040b713 (void) {
    uint64_t (*0x0041c0b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x401fa0 */
#include <stdint.h>
 
int64_t fcn_00401fa0 (int64_t arg1) {
    rdi = arg1;
    r12 = rdi;
    if (*(0x00446670) == 0) {
        goto label_2;
    }
label_1:
    rbx = *(0x00446660);
    if (rbx == 0) {
        goto label_3;
    }
    rax = *(0x00446670);
    rdx = rbx;
    rax = rax + rbx*8 - 8;
    while (*(rax) != 0) {
        rax -= 8;
        rdx--;
        if (rdx == 0) {
            goto label_3;
        }
    }
    *(rax) = r12;
    eax = 0;
label_0:
    return rax;
label_3:
    r13 = rbx + 1;
    while (al != 0) {
        rax = *(0x00446670);
        *((rax + rbx*8)) = r12;
        eax = ebx;
        *(0x00446660) = r13;
        return rax;
        al = fcn_0040f180 (0x446670, 0x446668, 8, 1);
    }
    eax = 0xffffffff;
    goto label_0;
label_2:
    *(0x00446670) = 0x446678;
    0x00446668 = 8;
    fcn_0040ede0 (fcn.0040a950, 0, 0);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40af80 */
#include <stdint.h>
 
int32_t fcn_0040af80 (int64_t arg1) {
    rdi = arg1;
    eax = *((rdi + 0xc));
    if (eax != 0xffffffff) {
        return eax;
    }
    fcn_00402acd ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414880 */
#include <stdint.h>
 
uint64_t fcn_00414880 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = fcn_0041571a (rdi, rsi, rdx);
    r9 = rax;
    r8 = rdi;
    rax = fcn_0041571a (rsi, rsi, rdx);
    if (r9 >= rax) {
        r9 -= rax;
        eax = fcn_00414960 (r8 + r9, rsi, rax, rcx, r8);
        r10b = (eax == 0) ? 1 : 0;
        eax = r10d;
        return rax;
    }
    r10d = 0;
    eax = r10d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414960 */
#include <stdint.h>
 
int32_t fcn_00414960 (uint32_t arg3, int64_t arg2, int64_t arg1, uint32_t arg7, int64_t arg8) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    xmm0 = arg7;
    xmm1 = arg8;
    if (rdx == 0) {
        goto label_0;
    }
    ecx = 0;
    while (rcx <= rdx) {
        __asm ("movdqu xmm0, xmmword [rdi + rcx - 0x10]");
        __asm ("movdqu xmm1, xmmword [rsi + rcx - 0x10]");
        __asm ("pcmpeqb xmm0, xmm1");
        __asm ("pmovmskb eax, xmm0");
        eax -= 0xffff;
        if (eax != 0) {
            goto label_1;
        }
        r8 = rcx;
        rcx += 0x10;
    }
    if (r8 < rdx) {
        goto label_2;
    }
    goto label_0;
    do {
        r8++;
        if (rdx == r8) {
            goto label_3;
        }
label_2:
        eax = *((rdi + r8));
        ecx = *((rsi + r8));
        eax -= ecx;
    } while (eax == 0);
    return eax;
label_0:
    eax = 0;
    return eax;
label_1:
    __asm ("tzcnt eax, eax");
    rdx = (int64_t) eax;
    rdx += r8;
    eax = *((rdi + rdx));
    edx = *((rsi + rdx));
    eax -= edx;
    return eax;
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b4ae */
#include <stdint.h>
 
uint64_t fcn_0040b4ae (int64_t arg_8h) {
    int64_t var_160h;
    int64_t var_154h;
    int64_t var_150h;
    int64_t var_148h;
    int64_t var_140h;
    int64_t var_138h;
    int64_t var_120h;
    int64_t var_f0h;
    int64_t var_a0h;
    int64_t var_64h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_18h;
label_2:
    r10 = rsp + 8;
    rax = fcn_00410830 ();
    *((rbp - main)) = rax;
    *((rbp - 0x154)) = eax;
    if (eax != 0xffffffff) {
        eax = fcn_004156ef (rbp - 0xf0, rsi);
        r12d = eax;
        if (eax == 0) {
            goto label_3;
        }
        *((rbp - 0x154)) = 0;
    }
label_1:
    eax = *((rbp - 0x154));
    rsp = rbp - 0x18;
    rsp = r10 - 8;
    return rax;
label_3:
    eax = fcn_00405f18 (main, rbp - 0x148, 0x418920, 0);
    if (eax == 0) {
        goto label_4;
    }
    rax = fcn_00412580 (*((rbp - main)), main, rdx);
    rcx = main;
    rax += rcx;
    *(rax) = 0x20;
    fcn_00412580 (*((rbp - 0x148)), rax + 1, rdx);
    fcn_0040b720 (0x4187dc, main, 1);
    edx = 0x68;
    r8d = 0;
    rax = *(0x00447b50);
    r9d = 1;
    rax = fcn_0041561f (rbp - 0xa0, r12d);
    rdx = *(rax);
    *((rbp - 0xa0)) = 0x68;
    *((rbp - 0x64)) = 0x100;
    *((rbp - 0x50)) = rdx;
    rdx = *((rax + 0x18));
    rax = *((rax + 0x30));
    *((rbp - 0x48)) = rdx;
    rdx = main;
    *((rbp - 0x40)) = rax;
    rax = *(main);
    rdi = *(rax);
    eax = fcn_00403c50 (*(rdi), rax, *(0x00448018), 0x418920, r8, r9);
    if (eax == 0xffffffff) {
        goto label_5;
    }
    fcn_00405ef5 (*((rbp - main)));
    fcn_00405ef5 (*((rbp - main)));
    rax = *((rbp - 0x160));
    rdx = rax * 3;
    rax = *(main);
    rax = rax + rdx*8;
    rdx = *((rbp - main));
    *((rax + 0x10)) = 3;
    *(rax) = rdx;
    rdx = *(main);
    *((rax + 0x14)) = edx;
    fcn_00403710 (*((rbp - 0x148)), rbp - 0xf0, 0x40);
    fcn_00403710 (*((rbp - 0x148)), 0x446ee0, 4);
    eax = *(0x00446ee0);
    rdi = *((rbp - 0x148));
    if (eax <= 0) {
        goto label_6;
    }
    ebx = 0x446ee8;
    while ((*((rbx + 0x14)) & 2) == 0) {
label_0:
        r12d++;
        rbx += 0x18;
        if (*(0x00446ee0) <= r12d) {
            goto label_6;
        }
        fcn_00403710 (rdi, rbx, 0x18);
        rdi = *((rbp - 0x148));
    }
    rsi = *(rbx);
    edx -= esi;
    rsi <<= 0x10;
    rdx = (int64_t) edx;
    rdx <<= 0x10;
    rdx += 0x10000;
    fcn_00403710 (rdi, rsi, *((rbx + 4)));
    rdi = *((rbp - 0x148));
    goto label_0;
label_4:
    eax = fcn_004162a0 ();
    *((rbp - 0x154)) = eax;
    goto label_1;
label_6:
    rdx -= section.2.__DATA.__bss;
    fcn_00403710 (rdi, section.2.__DATA.__bss, 0x449000);
    fcn_00405ef5 (*((rbp - 0x148)));
label_5:
    fcn_0040f750 (0x4187dc);
    goto label_1;
    if ((*(0x0041c718) & 4) != 0) {
        goto label_2;
    }
    eax = *(0x00440900);
    if (eax == 0xffffffff) {
        goto label_7;
    }
    if ((*(0x0041c718) & 0x38) == 0) {
        rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
        if (rax >= 0xfffffffffffff001) {
            goto label_8;
        }
        return rax;
    }
    rax = syscall_80h (rdi, rsi, rdx, r10, r8, r9);
    if (rax < 0xfffffffffffff001) {
        goto label_9;
    }
    return rax;
label_8:
    eax = -eax;
    do {
label_9:
        *(0x00448020) = eax;
        rax = main;
        __asm ("stc");
        return rax;
label_7:
        eax = *(0x00440870);
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4100bb */
#include <stdint.h>
 
uint32_t fcn_004100bb (void) {
    esi = 0;
    eax = fcn_00412310 ();
    if ((*(0x0041c718) & 8) != 0) {
        if (eax == 0xffffffff) {
            goto label_0;
        }
        *(rdi) = eax;
        *((rdi + 4)) = edx;
        eax = 0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412310 */
#include <stdint.h>
 
int64_t fcn_00412310 (void) {
    rax = 0x107021e202a0016;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412340 */
#include <stdint.h>
 
int64_t fcn_00412340 (void) {
    rax = 0x5a005a205a0021;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412350 */
#include <stdint.h>
 
int64_t fcn_00412350 (void) {
    rax = 0x3b003b203b003b;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4114b0 */
#include <stdint.h>
 
void fcn_004114b0 (void) {
    return void (*0x412410)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412410 */
#include <stdint.h>
 
int64_t loc_00412410 (void) {
    rax = 0x93009320930070;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412370 */
#include <stdint.h>
 
int64_t fcn_00412370 (void) {
    rax = 0x2000220020039;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414c00 */
#include <stdint.h>
 
int64_t fcn_00414c00 (uint32_t arg3, int64_t arg2, uint32_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    if (rdi == rsi) {
        goto label_0;
    }
    if (rdx == 0) {
        goto label_0;
    }
    r8d = *(rdi);
    ecx = *(rsi);
    rdx--;
    eax = 0;
    if (r8b == cl) {
        goto label_1;
    }
    goto label_2;
    do {
        if (rax == rdx) {
            goto label_2;
        }
        rax++;
        r8d = *((rdi + rax));
        ecx = *((rsi + rax));
        if (r8b != cl) {
            goto label_2;
        }
label_1:
    } while (cl != 0);
    ecx = 0;
label_2:
    eax = (int32_t) r8b;
    eax -= ecx;
    return rax;
label_0:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40c5f0 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_0040c5f0 (uint32_t arg1) {
    rdi = arg1;
label_6:
    rax = *(0);
    __asm ("ud2");
    do {
label_0:
        fcn_00401114 ();
        fcn_00401114 ();
        fcn_00401114 ();
        fcn_00401114 ();
        if (rdi > 0xe0) {
            goto label_53;
        }
        if (rdi > 0xe) {
            goto label_54;
        }
        edx = *(0x00446700);
        ecx = 4;
        ebx = 0x20;
        eax = edx;
        eax >>= cl;
        if ((al & 3) == 0) {
            goto label_55;
        }
label_1:
        eax = ~eax;
        eax &= 1;
        ecx += eax;
        eax = rcx + rcx;
        r9d = rcx*8;
        r8 = main;
        rsi = r9;
        rax = *((r8 + 0x10));
        rdi = *((rax + 0x10));
        if (r8 == rdi) {
            goto label_56;
        }
    } while (*(0x00446718) > rdi);
    if (*((rdi + 0x18)) != rax) {
        goto label_0;
    }
    *((rdi + 0x18)) = r8;
    *((r8 + 0x10)) = rdi;
label_8:
    esi |= 3;
    ebx = esi;
    *((rax + 8)) = rbx;
    *((rax + r9 + 8)) |= 1;
    rax += 0x10;
label_12:
    return rax;
label_54:
    rbx = rdi + 0x1f;
    edx = *(main);
    rbx &= 0xfffffffffffffff0;
    rcx = rbx;
    eax = edx;
    rcx >>= 3;
    eax >>= cl;
    if ((al & 3) != 0) {
        goto label_1;
    }
label_55:
    rsi = *(0x00446708);
    if (rsi >= rbx) {
        goto label_57;
    }
    if (eax == 0) {
        goto label_58;
    }
    r8d = 1;
    eax <<= cl;
    edi = r8d;
    edi <<= cl;
    r9d = rdi + rdi;
    edi = r9d;
    edi = -edi;
    edi |= r9d;
    eax &= edi;
    ecx = eax;
    ecx = -ecx;
    eax &= ecx;
    ecx = 0;
    __asm ("tzcnt ecx, eax");
    eax = rcx + rcx;
    r11d = rcx*8;
    r9 = main;
    r10 = r11;
    rax = *((r9 + 0x10));
    rdi = *((rax + 0x10));
    if (r9 == rdi) {
        goto label_59;
    }
    if (*(0x00446718) > rdi) {
        goto label_0;
    }
    if (*((rdi + 0x18)) != rax) {
        goto label_0;
    }
    *((rdi + 0x18)) = r9;
    *((r9 + 0x10)) = rdi;
label_17:
    rdi = r11;
    rdx = rax + r11;
    rdi -= rbx;
    if (rdi <= 0x1f) {
        goto label_60;
    }
    rcx = rbx;
    rbx += rax;
    rcx |= 3;
    *((rax + 8)) = rcx;
    rcx = rdi;
    rcx |= 1;
    *((rbx + 8)) = rcx;
    rcx = rsi;
    *(rdx) = rdi;
    rcx >>= 3;
    if (rsi == 0) {
        goto label_61;
    }
    esi = rcx + rcx;
    r9d = *(0x00446700);
    rdx = *(0x00446720);
    r8 = main;
    esi = 1;
    esi <<= cl;
    ecx = esi;
    if ((r9d & esi) == 0) {
        goto label_62;
    }
    rcx = *((r8 + 0x10));
    if (rcx < *(main)) {
        goto label_0;
    }
label_14:
    *((r8 + 0x10)) = rdx;
    *((rcx + 0x18)) = rdx;
    *((rdx + 0x10)) = rcx;
    *((rdx + 0x18)) = r8;
label_61:
    *(main) = rdi;
    *(main) = rbx;
    do {
label_2:
        rax += 0x10;
        return rax;
label_53:
        rsi = *(0x00446708);
        if (rdi <= 0xffffffffffffff7f) {
            r9d = *(0x00446704);
            rbx = rdi + 0x1f;
            rbx &= 0xfffffffffffffff0;
            if (r9d != 0) {
                goto label_63;
            }
label_9:
            if (rbx <= rsi) {
                goto label_57;
            }
label_3:
            rax = *(0x00446710);
            if (rax <= rbx) {
                goto label_64;
            }
            rax -= rbx;
            *(0x00446710) = rax;
            rdx = rax;
            rax = *(0x00446728);
            rdx |= 1;
            rcx = rax + rbx;
            rbx |= 3;
            rax += 0x10;
            *(0x00446728) = rcx;
            *((rcx + 8)) = rdx;
            *((rax - 8)) = rbx;
            return rax;
        }
        if (rsi == main) {
            goto label_65;
        }
        rax = *(0x00446710);
        rdx = *(0x004466d0);
        rbx = main;
        if ((*(0x00446a70) & 1) == 0) {
            goto label_66;
        }
label_5:
        r12 = rdx;
        r12 = -r12;
        if (rbx < *(0x004466d8)) {
            goto label_67;
        }
        if (rax == 0) {
            goto label_67;
        }
        rax = *(0x00446a68);
        r13 = rbx + rdx + 0x3e;
        r13 &= r12;
        if (rax != 0) {
            rcx = *(0x00446a58);
            rsi = r13 + rcx;
            if (rax < rsi) {
                goto label_68;
            }
            if (rcx >= rsi) {
                goto label_68;
            }
        }
        if (rbx >= r13) {
            goto label_67;
        }
        fcn_0040f340 (r13);
        rdx = r13 - 0x20;
        *((rax + 8)) = rdx;
        rdx = *(main);
        *(rax) = 0;
        *((rax + r13 - 0x18)) = 0xb;
        *((rax + r13 - 0x10)) = 0;
        if (rdx != 0) {
            if (rax >= rdx) {
                goto label_69;
            }
        }
        *(0x00446718) = rax;
label_69:
        r13 += *(0x00446a58);
        *(0x00446a58) = r13;
    } while (r13 <= *(0x00446a60));
    *(0x00446a60) = r13;
    goto label_2;
label_58:
    r9d = *(0x00446704);
    if (r9d == 0) {
        goto label_3;
    }
    eax = r9d;
    eax = -eax;
    eax &= r9d;
    __asm ("tzcnt eax, eax");
    rcx = *((rax*8 + main));
    r8 = *((rcx + 8));
    rax = rcx;
    r8 &= 0xfffffffffffffff8;
    r8 -= rbx;
    while (rdi != 0) {
label_4:
        rcx = *((rdi + 8));
        rcx &= 0xfffffffffffffff8;
        rcx -= rbx;
        if (rcx < r8) {
            r8 = rcx;
            rax = rdi;
        }
        rcx = rdi;
        rdi = *((rcx + 0x20));
    }
    rdi = *((rcx + 0x28));
    if (rdi != 0) {
        goto label_4;
    }
    r12 = *(0x00446718);
    if (r12 > rax) {
        goto label_0;
    }
    r11 = rax + rbx;
    r13 = rbx + r8;
    if (r11 <= rax) {
        goto label_0;
    }
    rdi = *((rax + 0x18));
    r14 = *((rax + 0x30));
    if (rdi == rax) {
        goto label_70;
    }
    rcx = *((rax + 0x10));
    if (r12 > rcx) {
        goto label_0;
    }
    if (*((rcx + 0x18)) != rax) {
        goto label_0;
    }
    if (*((rdi + 0x10)) != rax) {
        goto label_0;
    }
    *((rcx + 0x18)) = rdi;
    *((rdi + 0x10)) = rcx;
label_29:
    if (r14 == 0) {
        goto label_43;
    }
    ecx = *((rax + 0x38));
    r9 = rcx + 0x4a;
    if (*((rcx*8 + main)) == rax) {
        goto label_71;
    }
label_44:
    if (r12 > r14) {
        goto label_0;
    }
    if (*((r14 + 0x20)) == rax) {
        goto label_72;
    }
    *((r14 + 0x28)) = rdi;
label_36:
    if (rdi == 0) {
        goto label_43;
    }
label_35:
    if (r12 > rdi) {
        goto label_0;
    }
    rcx = *((rax + 0x20));
    *((rdi + 0x30)) = r14;
    if (rcx == 0) {
        goto label_73;
    }
    if (r12 > rcx) {
        goto label_0;
    }
    *((rdi + 0x20)) = rcx;
    *((rcx + 0x30)) = rdi;
label_73:
    rcx = *((rax + 0x28));
    if (rcx == 0) {
        goto label_43;
    }
    if (r12 > rcx) {
        goto label_0;
    }
    *((rdi + 0x28)) = rcx;
    *((rcx + 0x30)) = rdi;
label_43:
    if (r8 <= 0x1f) {
        goto label_74;
    }
    rcx = r8;
    rbx |= 3;
    rcx |= 1;
    *((rax + 8)) = rbx;
    *((r11 + 8)) = rcx;
    *((r11 + r8)) = r8;
    if (rsi != 0) {
        rsi >>= 3;
        rdi = *(0x00446720);
        r9d = rsi + rsi;
        rcx = rsi;
        r10 = main;
        r9d = 1;
        r9d <<= cl;
        if ((edx & r9d) != 0) {
            goto label_75;
        }
        edx |= r9d;
        *(0x00446700) = edx;
        rdx = r10;
label_33:
        *((r10 + 0x10)) = rdi;
        *((rdx + 0x18)) = rdi;
        *((rdi + 0x10)) = rdx;
        *((rdi + 0x18)) = r10;
    }
    *(main) = r8;
    *(main) = r11;
    goto label_2;
label_64:
    rdx = *(0x004466d0);
    r12 = *(0x004466d0);
    r12 = -r12;
    if ((*(0x00446a70) & 1) != 0) {
        goto label_5;
    }
label_67:
    rax = rbx + rdx + 0x5f;
    r12 &= rax;
    if (rbx >= r12) {
        goto label_66;
    }
    rax = *(0x00446a68);
    if (rax != 0) {
        rcx = *(0x00446a58);
label_11:
        rdx = r12 + rcx;
        if (rdx <= rcx) {
            goto label_66;
        }
        if (rax < rdx) {
            goto label_66;
        }
    }
    rax = fcn_0040f340 (r12);
    rdx = *(0x00446a58);
    rdx += r12;
    *(0x00446a58) = rdx;
    if (rdx > *(0x00446a60)) {
        goto label_76;
    }
label_13:
    rdi = *(0x00446728);
    if (rdi == 0) {
        goto label_77;
    }
    rsi = *(0x00446a78);
    r8 = *(0x00446a80);
    rdx = rsi + r8;
    if (rax == rdx) {
        goto label_78;
    }
label_16:
    if (rax < *(0x00446718)) {
        *(0x00446718) = rax;
    }
    rcx = rax + r12;
    edx = main;
    if (rsi != rcx) {
        goto label_79;
    }
    ecx = *(0x00446a90);
    r9d = *(0x00446a90);
    r9d &= 8;
    if (r9d != 0) {
        goto label_79;
    }
    ecx &= 1;
    if (ecx == 0) {
        goto label_79;
    }
    r8 += r12;
    *(0x00446a78) = rax;
    rdx = rsi + 0x10;
    *(main) = r8;
    if ((sil & 0xf) != 0) {
        rdx = -rdx;
        edx &= 0xf;
        rsi += rdx;
    }
    rdx = rsi;
    r8 = rax + rbx;
    rdx -= rax;
    rdx -= rbx;
    rbx |= 3;
    *((rax + 8)) = rbx;
    if (rdi == rsi) {
        goto label_80;
    }
    if (*(0x00446720) == rsi) {
        goto label_81;
    }
    r10 = *((rsi + 8));
    rcx = *((rsi + 8));
    ecx &= 3;
    if (rcx == 1) {
        goto label_82;
    }
    rcx = rdx;
    r10 &= 0xfffffffffffffffe;
    rcx |= 1;
    *((rsi + 8)) = r10;
    *((r8 + 8)) = rcx;
    *(rsi) = rdx;
    rsi = rdx;
    rsi >>= 3;
    if (rdx > 0xff) {
        goto label_83;
    }
label_39:
    ecx = esi;
    edx = rsi + rsi;
    edi = 1;
    esi = *(0x00446700);
    edi <<= cl;
    rdx = main;
    if ((esi & edi) != 0) {
        goto label_84;
    }
    esi |= edi;
    rcx = rdx;
    *(0x00446700) = esi;
label_42:
    *((rdx + 0x10)) = r8;
    *((rcx + 0x18)) = r8;
    *((r8 + 0x10)) = rcx;
    *((r8 + 0x18)) = rdx;
    goto label_2;
label_7:
    rdx = *((rdx + 0x10));
    if (rdx == 0) {
        goto label_6;
    }
    rsi = *(rdx);
label_79:
    if (rdi < rsi) {
        goto label_7;
    }
    rsi += *((rdx + 8));
    if (rdi >= rsi) {
        goto label_7;
    }
    rcx = rsi - 0x4f;
    rdx = 0xffffffffffffffa1;
    if ((cl & 0xf) != 0) {
        rcx = -rcx;
        ecx &= 0xf;
        rdx = rcx - 0x5f;
    }
    rdx += rsi;
    rcx = rdi + 0x20;
    __asm ("movdqu xmm0, xmmword [0x00446a78]");
    *(0x00446728) = rax;
    rcx = r12 - 0x50;
    if (rdx < rcx) {
        rdx = rdi;
    }
    *(0x00446710) = rcx;
    r8 = rcx;
    rcx = *(0x004466e0);
    r8 |= 1;
    *((rax + 8)) = r8;
    *(main) = rcx;
    *((rax + r12 - 0x48)) = 0x50;
    __asm ("movups xmmword [rdx + 0x10], xmm0");
    __asm ("movdqu xmm1, xmmword [0x00446a88]");
    *((rdx + 8)) = 0x33;
    __asm ("movups xmmword [rdx + 0x20], xmm1");
    *(main) = r12;
    *(main) = 1;
    *(main) = rax;
    rax = rdx + 0x10;
    *(main) = rax;
    rax = rdx + 0x38;
    do {
        *(rax) = 0xb;
        rax += 8;
    } while (rsi > rax);
    if (rdi == rdx) {
        goto label_85;
    }
    rsi = rdx;
    *((rdx + 8)) &= main;
    rsi -= rdi;
    rax = rsi;
    rcx = rsi;
    rax |= 1;
    rcx >>= 3;
    *((rdi + 8)) = rax;
    *(rdx) = rsi;
    if (rsi > 0xff) {
        goto label_86;
    }
    eax = rcx + rcx;
    esi = *(0x00446700);
    rdx = main;
    eax = 1;
    eax <<= cl;
    if ((esi & eax) != 0) {
        goto label_87;
    }
    eax |= esi;
    *(0x00446700) = eax;
    rax = rdx;
label_24:
    *((rdx + 0x10)) = rdi;
    r12 = *(main);
    *((rax + 0x18)) = rdi;
    *((rdi + 0x10)) = rax;
    *((rdi + 0x18)) = rdx;
    goto label_18;
label_57:
    rax = *(0x00446720);
    rdx = rsi;
    rdx -= rbx;
    rcx = rax + rsi;
    if (rdx <= 0x1f) {
        goto label_88;
    }
    rdi = rdx;
    rsi = rax + rbx;
    rbx |= 3;
    *(0x00446708) = rdx;
    rdi |= 1;
    *(0x00446720) = rsi;
    *((rsi + 8)) = rdi;
    *(rcx) = rdx;
    *((rax + 8)) = rbx;
    goto label_2;
label_56:
    __asm ("btr edx, ecx");
    *(0x00446700) = edx;
    goto label_8;
label_65:
    rax = *(0x00446720);
    rcx = rax - 1;
label_19:
    *(main) = 0;
    *(main) = 0;
    *((rax + 8)) = rsi;
    *((rcx + 8)) |= 1;
    goto label_2;
label_63:
    rax = rbx;
    r10 = rbx;
    rax >>= 8;
    r10 = -r10;
    r11d = eax;
    if (eax == 0) {
        goto label_89;
    }
    if (eax <= 0xffff) {
        goto label_90;
    }
    rax = *(0x00446a50);
    r8 = rbx;
    r11d = 0x1f;
    if (rax == 0) {
        goto label_9;
    }
label_15:
    ecx = 0;
    r12d = 0;
    while (rax != 0) {
        r8 += r8;
        rdx = *((rax + 8));
        rdi = *((rax + 8));
        rdi &= 0xfffffffffffffff8;
        rdi -= rbx;
        if (rdi < r10) {
            if (rdi == 0) {
                goto label_91;
            }
            r10 = rdi;
            r12 = rax;
        }
        rdx = r8;
        rdi = *((rax + 0x28));
        rdx >>= 0x3f;
        rdx += 4;
        rax = *((rax + rdx*8));
        if (rdi != 0) {
            if (rdi == rax) {
                rcx = rdi;
                goto label_92;
            }
        }
label_92:
    }
    rax = r12;
    rax |= rcx;
    if (rax == 0) {
        goto label_21;
    }
    if (rcx == 0) {
        goto label_93;
    }
    rdx = *((rcx + 8));
    rax = r12;
    rdi = r10;
    while (r8 != 0) {
label_10:
        rdx = *((r8 + 8));
        rcx = r8;
label_20:
        rdx &= 0xfffffffffffffff8;
        rdx -= rbx;
        if (rdi > rdx) {
            rdi = rdx;
            rax = rcx;
        }
        r8 = *((rcx + 0x20));
    }
    r8 = *((rcx + 0x28));
    if (r8 != 0) {
        goto label_10;
    }
label_37:
    if (rax == 0) {
        goto label_9;
    }
    rdx = rsi;
    rdx -= rbx;
    if (rdx <= rdi) {
        goto label_9;
    }
    r11 = *(0x00446718);
    if (rax < r11) {
        goto label_0;
    }
    r10 = rax + rbx;
    r13 = rbx + rdi;
    if (rax >= r10) {
        goto label_0;
    }
    rcx = *((rax + 0x18));
    r12 = *((rax + 0x30));
    if (rax == rcx) {
        goto label_94;
    }
    rdx = *((rax + 0x10));
    if (r11 > rdx) {
        goto label_0;
    }
    if (rax != *((rdx + 0x18))) {
        goto label_0;
    }
    if (rax != *((rcx + 0x10))) {
        goto label_0;
    }
    *((rdx + 0x18)) = rcx;
    *((rcx + 0x10)) = rdx;
label_26:
    if (r12 == 0) {
        goto label_40;
    }
    edx = *((rax + 0x38));
    rsi = rdx + 0x4a;
    if (rax == *((rdx*8 + main))) {
        goto label_95;
    }
label_41:
    if (r11 > r12) {
        goto label_0;
    }
    if (rax == *((r12 + 0x20))) {
        goto label_96;
    }
    *((r12 + 0x28)) = rcx;
label_34:
    if (rcx == 0) {
        goto label_40;
    }
label_30:
    if (r11 > rcx) {
        goto label_0;
    }
    rdx = *((rax + 0x20));
    *((rcx + 0x30)) = r12;
    if (rdx == 0) {
        goto label_97;
    }
    if (r11 > rdx) {
        goto label_0;
    }
    *((rcx + 0x20)) = rdx;
    *((rdx + 0x30)) = rcx;
label_97:
    rdx = *((rax + 0x28));
    if (rdx == 0) {
        goto label_40;
    }
    if (r11 > rdx) {
        goto label_0;
    }
    *((rcx + 0x28)) = rdx;
    *((rdx + 0x30)) = rcx;
label_40:
    if (rdi <= 0x1f) {
        goto label_74;
    }
    rdx = rdi;
    rbx |= 3;
    rcx = rdi;
    rdx |= 1;
    *((rax + 8)) = rbx;
    rcx >>= 3;
    *((r10 + 8)) = rdx;
    *((r10 + rdi)) = rdi;
    if (rdi > 0xff) {
        goto label_98;
    }
    edx = rcx + rcx;
    edi = *(0x00446700);
    rsi = main;
    edx = 1;
    edx <<= cl;
    if ((edi & edx) != 0) {
        goto label_99;
    }
    edx |= edi;
    *(0x00446700) = edx;
    rdx = rsi;
label_31:
    *((rsi + 0x10)) = r10;
    *((rdx + 0x18)) = r10;
    *((r10 + 0x10)) = rdx;
    *((r10 + 0x18)) = rsi;
    goto label_2;
label_68:
    rdx = rbx + rdx + 0x5f;
    r12 &= rdx;
    if (r12 > rbx) {
        goto label_11;
    }
label_66:
    eax = 0;
    goto label_12;
label_76:
    *(0x00446a60) = rdx;
    goto label_13;
label_62:
    ecx |= r9d;
    *(0x00446700) = ecx;
    rcx = r8;
    goto label_14;
label_89:
    rax = *(0x00446958);
    ecx = 0x39;
    if (rax == 0) {
        goto label_100;
    }
label_22:
    r8 = rbx;
    r8 <<= cl;
    goto label_15;
label_78:
    edx = *(0x00446a90);
    if ((dl & 8) != 0) {
        goto label_16;
    }
    edx &= 1;
    if (edx == 0) {
        goto label_16;
    }
    if (rdi < rsi) {
        goto label_16;
    }
    if (rax <= rdi) {
        goto label_16;
    }
    rdx = *(0x00446710);
    r8 += r12;
    rax = rdi + 0x10;
    *(main) = r8;
    rdx += r12;
    if ((dil & 0xf) == 0) {
        goto label_101;
    }
    rax = -rax;
    r12 = rdx;
    eax &= 0xf;
    rcx = rdi + rax;
    r12 -= rax;
label_38:
    rax = r12;
    *(0x00446728) = rcx;
    rax |= 1;
    *(0x00446710) = r12;
    *((rcx + 8)) = rax;
    rax = *(main);
    *((rdi + rdx + 8)) = 0x50;
    *(main) = rax;
label_18:
    if (rbx < r12) {
        rax = *(0x00446728);
        r12 -= rbx;
        *(0x00446710) = r12;
        r12 |= 1;
        rdx = rax + rbx;
        rbx |= 3;
        rax += 0x10;
        *(0x00446728) = rdx;
        *((rdx + 8)) = r12;
        *((rax - 8)) = rbx;
        goto label_12;
label_59:
        r8d <<= cl;
        r8d = ~r8d;
        edx &= r8d;
        *(0x00446700) = edx;
        goto label_17;
    }
    eax = fcn_00402b8a ();
    eax = 0;
    goto label_12;
label_60:
    r10d |= 3;
    ebx = r10d;
    *((rax + 8)) = rbx;
    *((rdx + 8)) |= 1;
    goto label_2;
label_77:
    rdx = *(0x00446718);
    if (rdx != 0) {
        if (rax >= rdx) {
            goto label_102;
        }
    }
    *(0x00446718) = rax;
label_102:
    rdx = *(0x004466c0);
    ecx = 0x446948;
    *(0x00446a78) = rax;
    *(0x00446a80) = r12;
    *(0x00446a90) = 1;
    *(0x00446738) = 0x80;
    *(0x00446740) = rdx;
    edx = 0x446748;
    do {
        *((rdx + 0x18)) = rdx;
        *((rdx + 0x10)) = rdx;
        rdx += 0x10;
    } while (rcx != rdx);
    r12 -= 0x50;
    *(0x00446728) = rax;
    rdx = r12;
    *(0x00446710) = r12;
    rdx |= 1;
    *((rax + 8)) = rdx;
    *((rax + r12 + 8)) = 0x50;
    rax = *(main);
    *(main) = rax;
    goto label_18;
label_88:
    rsi |= 3;
    goto label_19;
label_86:
    rax = rsi;
    rax >>= 8;
    ecx = eax;
    if (eax == 0) {
        goto label_103;
    }
    if (eax > 0xffff) {
        goto label_104;
    }
    __asm ("bsr eax, eax");
    ecx = 0x26;
    rdx = rsi;
    eax ^= 0x1f;
    ecx -= eax;
    rdx >>= cl;
    ecx = 0x1f;
    ecx -= eax;
    edx &= 1;
    eax = 1;
    r9d = rdx + rcx*2;
    rcx = r9;
    r8 = main;
    eax <<= cl;
    edx = eax;
label_23:
    eax = *(0x00446704);
    *((rdi + 0x38)) = ecx;
    *((rdi + 0x28)) = 0;
    *((rdi + 0x20)) = 0;
    if ((eax & edx) != 0) {
        goto label_105;
    }
    eax |= edx;
    r8 += 0x446700;
    *((r9*8 + main)) = rdi;
    r12 = *(main);
    *(main) = eax;
    *((rdi + 0x30)) = r8;
    *((rdi + 0x18)) = rdi;
    *((rdi + 0x10)) = rdi;
    goto label_18;
label_74:
    rdx = r13;
    rdx |= 3;
    *((rax + 8)) = rdx;
    *((rax + r13 + 8)) |= 1;
    goto label_2;
label_85:
    r12 = *(0x00446710);
    goto label_18;
label_21:
    eax = 0xfffffffe;
    ecx = r11d;
    eax <<= cl;
label_27:
    eax &= r9d;
    if (eax == 0) {
        goto label_9;
    }
    edx = eax;
    edx = -edx;
    eax &= edx;
    __asm ("tzcnt eax, eax");
    rcx = *((rax*8 + main));
    if (rcx == 0) {
        goto label_9;
    }
    rdx = *((rcx + 8));
    rdi = r10;
    eax = 0;
    goto label_20;
label_90:
    __asm ("bsr eax, eax");
    ecx = 0x26;
    rdx = rbx;
    eax ^= 0x1f;
    ecx -= eax;
    rdx >>= cl;
    ecx = 0x1f;
    edx &= 1;
    ecx -= eax;
    eax = rdx + rcx*2;
    r11 = rax;
    rax = *((rax*8 + main));
    if (rax == 0) {
        goto label_21;
    }
    r8 = rbx;
    if (r11d == 0x1f) {
        goto label_15;
    }
    edx = r11d;
    ecx = 0x39;
    edx >>= 1;
    ecx -= edx;
    goto label_22;
label_91:
    rcx = rax;
    goto label_20;
label_98:
    rdx = rdi;
    rdx >>= 8;
    ecx = edx;
    if (edx == 0) {
        goto label_106;
    }
    if (edx > 0xffff) {
        goto label_107;
    }
    __asm ("bsr edx, edx");
    ecx = 0x26;
    rbx = rdi;
    esi = 0x1f;
    edx ^= 0x1f;
    ecx -= edx;
    esi -= edx;
    edx = 1;
    rbx >>= cl;
    rcx = rbx;
    ecx &= 1;
    r8d = rcx + rsi*2;
    esi = edx;
    rcx = r8;
    r9 = main;
    esi <<= cl;
label_32:
    edx = *(0x00446704);
    *((r10 + 0x38)) = ecx;
    *((r10 + 0x28)) = 0;
    *((r10 + 0x20)) = 0;
    if ((edx & esi) == 0) {
        goto label_108;
    }
    rsi = *((r8*8 + main));
    r8 = rdi;
    if (ecx == 0x1f) {
        goto label_109;
    }
    ecx >>= 1;
    edx = 0x39;
    edx -= ecx;
    ecx = edx;
    r8 <<= cl;
    while (rdi != rdx) {
        rdx = r8;
        r8 += r8;
        rdx >>= 0x3f;
        rdx += 4;
        rcx = *((rsi + rdx*8));
        if (rcx == 0) {
            goto label_110;
        }
        rsi = rcx;
label_109:
        rdx = *((rsi + 8));
        rdx &= 0xfffffffffffffff8;
    }
    rdx = *((rsi + 0x10));
    if (r11 > rsi) {
        goto label_0;
    }
    if (r11 > rdx) {
        goto label_0;
    }
    *((rdx + 0x18)) = r10;
    *((rsi + 0x10)) = r10;
    *((r10 + 0x10)) = rdx;
    *((r10 + 0x18)) = rsi;
    *((r10 + 0x30)) = 0;
    goto label_2;
label_105:
    rdx = *((r9*8 + main));
    r8 = rsi;
    if (ecx == 0x1f) {
        goto label_111;
    }
    ecx >>= 1;
    eax = 0x39;
    eax -= ecx;
    ecx = eax;
    r8 <<= cl;
    while (rsi != rax) {
        rax = r8;
        r8 += r8;
        rax >>= 0x3f;
        rax += 4;
        rcx = *((rdx + rax*8));
        if (rcx == 0) {
            goto label_112;
        }
        rdx = rcx;
label_111:
        rax = *((rdx + 8));
        rax &= 0xfffffffffffffff8;
    }
    rax = *((rdx + 0x10));
    rcx = *(main);
    if (rax < rcx) {
        goto label_0;
    }
    if (rdx < rcx) {
        goto label_0;
    }
    *((rax + 0x18)) = rdi;
    r12 = *(main);
    *((rdx + 0x10)) = rdi;
    *((rdi + 0x10)) = rax;
    *((rdi + 0x18)) = rdx;
    *((rdi + 0x30)) = 0;
    goto label_18;
label_103:
    edx = 1;
    r8d = 0x258;
    r9d = eax;
    goto label_23;
label_87:
    rax = *((rdx + 0x10));
    if (rax >= *(main)) {
        goto label_24;
    }
    goto label_0;
label_94:
    rdx = *((rax + 0x28));
    rsi = rax + 0x28;
    if (rdx == 0) {
        goto label_113;
    }
    do {
label_25:
        r8 = rsi;
        rcx = rdx;
        rsi = rdx + 0x28;
        rdx = *((rdx + 0x28));
    } while (rdx != 0);
    rdx = *((rcx + 0x20));
    rsi = rcx + 0x20;
    if (rdx != 0) {
        goto label_25;
    }
    if (r11 > r8) {
        goto label_0;
    }
    *(r8) = 0;
    goto label_26;
label_100:
    eax = 0xfffffffe;
    goto label_27;
label_70:
    rcx = *((rax + 0x28));
    if (rcx == 0) {
        goto label_114;
    }
    r9 = rax + 0x28;
    do {
label_28:
        r10 = r9;
        rdi = rcx;
        r9 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rdi + 0x20));
    r9 = rdi + 0x20;
    if (rcx != 0) {
        goto label_28;
    }
    if (r12 > r10) {
        goto label_0;
    }
    *(r10) = 0;
    goto label_29;
label_95:
    *((rsi*8 + main)) = rcx;
    goto label_30;
label_99:
    rdx = *((rsi + 0x10));
    if (r11 <= rdx) {
        goto label_31;
    }
    goto label_0;
label_106:
    esi = 1;
    r9d = 0x258;
    r8d = edx;
    goto label_32;
label_75:
    rdx = *((r10 + 0x10));
    if (r12 <= rdx) {
        goto label_33;
    }
    goto label_0;
label_104:
    edx = 0x80000000;
    r8d = 0x350;
    ecx = 0x1f;
    r9d = 0x1f;
    goto label_23;
label_112:
    rcx = rdx + rax*8;
    if (*(main) > rcx) {
        goto label_0;
    }
    *((rdx + rax*8)) = rdi;
    r12 = *(main);
    *((rdi + 0x30)) = rdx;
    *((rdi + 0x18)) = rdi;
    *((rdi + 0x10)) = rdi;
    goto label_18;
label_96:
    *((r12 + 0x20)) = rcx;
    goto label_34;
label_71:
    *((r9*8 + main)) = rdi;
    goto label_35;
label_108:
    edx |= esi;
    r9 += 0x446700;
    *((r8*8 + main)) = r10;
    *(main) = edx;
    *((r10 + 0x30)) = r9;
    *((r10 + 0x18)) = r10;
    *((r10 + 0x10)) = r10;
    goto label_2;
label_72:
    *((r14 + 0x20)) = rdi;
    goto label_36;
label_110:
    rcx = rsi + rdx*8;
    if (r11 > rcx) {
        goto label_0;
    }
    *((rsi + rdx*8)) = r10;
    *((r10 + 0x30)) = rsi;
    *((r10 + 0x18)) = r10;
    *((r10 + 0x10)) = r10;
    goto label_2;
label_113:
    rdx = *((rax + 0x20));
    if (rdx == 0) {
        goto label_115;
    }
    rsi = rax + 0x20;
    goto label_25;
label_107:
    esi = 0x80000000;
    r9d = 0x350;
    ecx = 0x1f;
    r8d = 0x1f;
    goto label_32;
label_93:
    rax = r12;
    rdi = r10;
    goto label_37;
label_114:
    rcx = *((rax + 0x20));
    if (rcx == 0) {
        goto label_116;
    }
    r9 = rax + 0x20;
    goto label_28;
label_80:
    rdx += *(0x00446710);
    *(0x00446728) = r8;
    *(0x00446710) = rdx;
    rdx |= 1;
    *((r8 + 8)) = rdx;
    goto label_2;
label_101:
    r12 = rdx;
    rcx = rdi;
    goto label_38;
label_82:
    rbx = r10;
    rcx = r10;
    rdi = *((rsi + 0x18));
    rbx &= 0xfffffffffffffff8;
    rcx >>= 3;
    if (r10 > 0xff) {
        goto label_117;
    }
    r11d = rcx + rcx;
    r10 = *((rsi + 0x10));
    r11 = main;
    if (r10 != r11) {
        goto label_118;
    }
label_52:
    if (r10 == rdi) {
        goto label_119;
    }
    if (r11 != rdi) {
        goto label_120;
    }
label_51:
    *((r10 + 0x18)) = rdi;
    *((rdi + 0x10)) = r10;
label_45:
    rdx += rbx;
    *((rsi + rbx + 8)) &= main;
    rcx = rdx;
    rsi = rdx;
    rcx |= 1;
    rsi >>= 3;
    *((r8 + 8)) = rcx;
    *((r8 + rdx)) = rdx;
    if (rdx <= 0xff) {
        goto label_39;
    }
label_83:
    rsi = rdx;
    rsi >>= 8;
    edi = esi;
    if (esi != 0) {
        edi = 0x1f;
        if (esi > 0xffff) {
            goto label_121;
        }
        __asm ("bsr esi, esi");
        ecx = 0x26;
        rbx = rdx;
        esi ^= 0x1f;
        ecx -= esi;
        edi -= esi;
        rbx >>= cl;
        rcx = rbx;
        ecx &= 1;
        edi = rcx + rdi*2;
    }
label_121:
    r10d = 1;
    ecx = edi;
    esi = *(0x00446704);
    *((r8 + 0x38)) = edi;
    r10d <<= cl;
    *((r8 + 0x28)) = 0;
    *((r8 + 0x20)) = 0;
    if ((esi & r10d) != 0) {
        goto label_122;
    }
    esi |= r10d;
    rdx = main;
    *((rdi*8 + main)) = r8;
    *(main) = esi;
    *((r8 + 0x30)) = rdx;
    *((r8 + 0x18)) = r8;
    *((r8 + 0x10)) = r8;
    goto label_2;
label_81:
    rdx += *(0x00446708);
    *(0x00446720) = r8;
    rcx = rdx;
    *(0x00446708) = rdx;
    rcx |= 1;
    *((r8 + 8)) = rcx;
    *((r8 + rdx)) = rdx;
    goto label_2;
label_115:
    if (r12 == 0) {
        goto label_40;
    }
    r8d = *((rax + 0x38));
    ecx = 0;
    rsi = r8 + 0x4a;
    if (*((r8*8 + main)) != rax) {
        goto label_41;
    }
    *((rsi*8 + main)) = 0;
    __asm ("btr r9d, r8d");
    *(0x00446704) = r9d;
    goto label_40;
label_84:
    rcx = *((rdx + 0x10));
    if (rcx >= *(main)) {
        goto label_42;
    }
    goto label_0;
label_116:
    if (r14 == 0) {
        goto label_43;
    }
    r10d = *((rax + 0x38));
    edi = 0;
    r15 = r10 + 0x4a;
    if (rax != *((r10*8 + main))) {
        goto label_44;
    }
    *((r15*8 + main)) = 0;
    __asm ("btr r9d, r10d");
    *(0x00446704) = r9d;
    goto label_43;
label_122:
    ecx = edi;
    rsi = *((rcx*8 + main));
    if (edi != 0x1f) {
        edi >>= 1;
        r9d = 0x39;
        r9d -= edi;
    }
    rdi = rdx;
    ecx = r9d;
    rdi <<= cl;
    while (rdx != rcx) {
        rcx = rdi;
        rdi += rdi;
        rcx >>= 0x3f;
        rcx += 4;
        r9 = *((rsi + rcx*8));
        if (r9 == 0) {
            goto label_123;
        }
        rsi = r9;
        rcx = *((rsi + 8));
        rcx &= 0xfffffffffffffff8;
    }
    rdx = *((rsi + 0x10));
    rcx = *(main);
    if (rdx < rcx) {
        goto label_0;
    }
    if (rsi < rcx) {
        goto label_0;
    }
    *((rdx + 0x18)) = r8;
    *((rsi + 0x10)) = r8;
    *((r8 + 0x10)) = rdx;
    *((r8 + 0x18)) = rsi;
    *((r8 + 0x30)) = 0;
    goto label_2;
label_117:
    r11 = *((rsi + 0x30));
    if (rdi == rsi) {
        goto label_124;
    }
    rcx = *((rsi + 0x10));
    if (rcx < *(main)) {
        goto label_0;
    }
    if (*((rcx + 0x18)) != rsi) {
        goto label_0;
    }
    if (*((rdi + 0x10)) != rsi) {
        goto label_0;
    }
    *((rcx + 0x18)) = rdi;
    *((rdi + 0x10)) = rcx;
label_49:
    if (r11 == 0) {
        goto label_45;
    }
    r10d = *((rsi + 0x38));
    rcx = r10;
    r12 = r10 + 0x4a;
    if (*((r10*8 + main)) == rsi) {
        goto label_125;
    }
    if (r11 < *(0x00446718)) {
        goto label_0;
    }
    if (*((r11 + 0x20)) == rsi) {
        goto label_126;
    }
    *((r11 + 0x28)) = rdi;
label_46:
    if (rdi == 0) {
        goto label_45;
    }
label_47:
    r10 = *(0x00446718);
    if (rdi < r10) {
        goto label_127;
    }
    rcx = *((rsi + 0x20));
    *((rdi + 0x30)) = r11;
    if (rcx == 0) {
        goto label_128;
    }
    if (r10 > rcx) {
        goto label_0;
    }
    *((rdi + 0x20)) = rcx;
    *((rcx + 0x30)) = rdi;
label_128:
    rcx = *((rsi + 0x28));
    if (rcx == 0) {
        goto label_45;
    }
    if (r10 > rcx) {
        goto label_0;
    }
    *((rdi + 0x28)) = rcx;
    *((rcx + 0x30)) = rdi;
    goto label_45;
label_123:
    rdx = rsi + rcx*8;
    if (*(main) > rdx) {
        goto label_0;
    }
    *((rsi + rcx*8)) = r8;
    *((r8 + 0x30)) = rsi;
    *((r8 + 0x18)) = r8;
    *((r8 + 0x10)) = r8;
    goto label_2;
label_126:
    *((r11 + 0x20)) = rdi;
    goto label_46;
label_119:
    edi = 0xfffffffe;
    edi = rotate_left32 (edi, cl);
    *(0x00446700) &= edi;
    goto label_45;
label_125:
    *((r12*8 + main)) = rdi;
    if (rdi != 0) {
        goto label_47;
    }
    edi = 0xfffffffe;
    edi = rotate_left32 (edi, cl);
    *(0x00446704) &= edi;
    goto label_45;
label_124:
    rdi = *((rsi + 0x28));
    if (rdi == 0) {
        goto label_129;
    }
    r10 = rsi + 0x28;
label_50:
    rcx = rdi;
    do {
label_48:
        r12 = r10;
        rdi = rcx;
        r10 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((rdi + 0x20));
    r10 = rdi + 0x20;
    if (rcx != 0) {
        goto label_48;
    }
    if (*(0x00446718) > r12) {
        goto label_0;
    }
    *(r12) = 0;
    goto label_49;
label_129:
    rdi = *((rsi + 0x20));
    if (rdi == 0) {
        goto label_49;
    }
    r10 = rsi + 0x20;
    goto label_50;
label_120:
    if (*(0x00446718) > rdi) {
        goto label_0;
    }
    if (*((rdi + 0x10)) == rsi) {
        goto label_51;
    }
    goto label_0;
label_118:
    if (r10 < *(0x00446718)) {
        goto label_0;
    }
    if (*((r10 + 0x18)) == rsi) {
        goto label_52;
    }
    goto label_0;
label_127:
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40b940 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_0040b940 (char ** argv, int64_t arg1) {
    int64_t var_38h;
    rsi = argv;
    rdi = arg1;
label_2:
    fcn_00401114 ();
    eax = *(0x18);
    __asm ("ud2");
    rbx = rdi;
    rax = *((rdi + main));
    if (rax == 0) {
        goto label_1;
    }
    edx = *((rax + 0x18));
    r15d = *((rax + 0x18));
    r15d &= 1;
    while (edx != 0) {
label_1:
        r12d = 0;
label_0:
        *((rbx + 0x38)) = 0x80;
        rax = r12;
        return rax;
        edx &= 8;
    }
    rdi = *(rax);
    rdx = rdi + 0x10;
    r14 = rdi;
    if ((dil & 0xf) != 0) {
        rdx = -rdx;
        edx &= 0xf;
        r14 = rdi + rdx;
    }
    rdx = *((r14 + 8));
    r12d = 0;
    rcx = rdx;
    ecx &= 3;
    if (rcx != 1) {
        goto label_0;
    }
    r12 = *((rax + 8));
    rdx &= 0xfffffffffffffff8;
    r13 = rdx;
    rcx = r14 + rdx;
    rdx = rdi + r12 - 0x50;
    if (rcx < rdx) {
        goto label_1;
    }
    rax = *((rax + 0x10));
    *((rbp - 0x38)) = rax;
    if (*((rbx + 0x20)) == r14) {
        goto label_10;
    }
    rdx = *((r14 + 0x18));
    r9 = *((r14 + 0x30));
    if (rdx == r14) {
        goto label_11;
    }
    rax = *((r14 + 0x10));
    if (*((rbx + 0x18)) > rax) {
        goto label_2;
    }
    if (*((rax + 0x18)) != r14) {
        goto label_2;
    }
    if (*((rdx + 0x10)) != r14) {
        goto label_2;
    }
    *((rax + 0x18)) = rdx;
    *((rdx + 0x10)) = rax;
label_4:
    if (r9 == 0) {
        goto label_8;
    }
    eax = *((r14 + 0x38));
    rax = rbx + rax*8;
    if (*((rax + main)) == r14) {
        goto label_12;
    }
label_9:
    rax = *((rbx + 0x18));
    if (rax > r9) {
        goto label_2;
    }
    if (*((r9 + 0x20)) == r14) {
        goto label_13;
    }
    *((r9 + 0x28)) = rdx;
label_7:
    if (rdx == 0) {
        goto label_8;
    }
label_5:
    if (rdx < rax) {
        goto label_2;
    }
    rcx = *((r14 + 0x20));
    *((rdx + 0x30)) = r9;
    if (rcx == 0) {
        goto label_14;
    }
    if (rcx < rax) {
        goto label_2;
    }
    *((rdx + 0x20)) = rcx;
    *((rcx + 0x30)) = rdx;
label_14:
    rcx = *((r14 + 0x28));
    if (rcx == 0) {
        goto label_8;
    }
    if (rcx < rax) {
        goto label_2;
    }
    *((rdx + 0x28)) = rcx;
    *((rcx + 0x30)) = rdx;
    do {
label_8:
        eax = fcn_0040f560 (rdi, r12);
        if (eax == 0) {
            rax = *((rbp - 0x38));
            *((rbx + main)) -= r12;
            *((rbx + main)) = rax;
            goto label_0;
        }
        rax = r13;
        edx = 0x258;
        rax >>= 8;
        esi = eax;
        rcx = rsi;
        if (eax != 0) {
            if (eax > 0xffff) {
                goto label_15;
            }
            __asm ("bsr eax, eax");
            ecx = 0x26;
            rdx = r13;
            r15d = 1;
            eax ^= 0x1f;
            ecx -= eax;
            rdx >>= cl;
            ecx = 0x1f;
            edx &= 1;
            ecx -= eax;
            esi = rdx + rcx*2;
            rcx = rsi;
            rdx = main;
            r15d <<= cl;
        }
label_6:
        eax = *((rbx + 4));
        *((r14 + 0x38)) = ecx;
        *((r14 + 0x28)) = 0;
        *((r14 + 0x20)) = 0;
        if ((eax & r15d) != 0) {
            goto label_16;
        }
        r15d |= eax;
        rdx += rbx;
        r12d = 0;
        *((rbx + 4)) = r15d;
        *((rbx + rsi*8 + main)) = r14;
        *((r14 + 0x30)) = rdx;
        *((r14 + 0x18)) = r14;
        *((r14 + 0x10)) = r14;
        goto label_0;
label_10:
        *((rbx + 0x20)) = 0;
        *((rbx + 8)) = 0;
    } while (1);
label_16:
    rdx = *((rbx + rsi*8 + main));
    rsi = r13;
    if (ecx == 0x1f) {
        goto label_17;
    }
    ecx >>= 1;
    eax = 0x39;
    eax -= ecx;
    ecx = eax;
    rsi <<= cl;
    while (rax != r13) {
        rax = rsi;
        rsi += rsi;
        rax >>= 0x3f;
        rax += 4;
        rcx = *((rdx + rax*8));
        if (rcx == 0) {
            goto label_18;
        }
        rdx = rcx;
label_17:
        rax = *((rdx + 8));
        rax &= 0xfffffffffffffff8;
    }
    rax = *((rdx + 0x10));
    rcx = *((rbx + 0x18));
    if (rcx > rax) {
        goto label_2;
    }
    if (rcx > rdx) {
        goto label_2;
    }
    *((rax + 0x18)) = r14;
    r12d = 0;
    *((rdx + 0x10)) = r14;
    *((r14 + 0x10)) = rax;
    *((r14 + 0x18)) = rdx;
    *((r14 + 0x30)) = 0;
    goto label_0;
label_11:
    rax = *((r14 + 0x28));
    rcx = r14 + 0x28;
    if (rax == 0) {
        goto label_19;
    }
    do {
label_3:
        rsi = rcx;
        rdx = rax;
        rcx = rax + 0x28;
        rax = *((rax + 0x28));
    } while (rax != 0);
    rax = *((rdx + 0x20));
    rcx = rdx + 0x20;
    if (rax != 0) {
        goto label_3;
    }
    if (*((rbx + 0x18)) > rsi) {
        goto label_2;
    }
    *(rsi) = 0;
    goto label_4;
label_12:
    *((rax + main)) = rdx;
    rax = *((rbx + 0x18));
    goto label_5;
label_15:
    r15d = 0x80000000;
    edx = 0x350;
    ecx = 0x1f;
    esi = 0x1f;
    goto label_6;
label_18:
    rcx = rdx + rax*8;
    if (*((rbx + 0x18)) > rcx) {
        goto label_2;
    }
    *((rdx + rax*8)) = r14;
    r12d = 0;
    *((r14 + 0x30)) = rdx;
    *((r14 + 0x18)) = r14;
    *((r14 + 0x10)) = r14;
    goto label_0;
label_13:
    *((r9 + 0x20)) = rdx;
    goto label_7;
label_19:
    rax = *((r14 + 0x20));
    if (rax != 0) {
        rcx = r14 + 0x20;
        goto label_3;
    }
    if (r9 == 0) {
        goto label_8;
    }
    eax = *((r14 + 0x38));
    edx = 0;
    rcx = rax;
    rax = rbx + rax*8;
    if (*((rax + main)) != r14) {
        goto label_9;
    }
    *((rax + main)) = 0;
    eax = 0xfffffffe;
    eax = rotate_left32 (eax, cl);
    *((rbx + 4)) &= eax;
    goto label_8;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f550 */
#include <stdint.h>
 
void fcn_0040f550 (void) {
    fcn_00402b9f ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40e5d0 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_0040e5d0 (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rdx;
    r12 = rdi;
    rbx = rsi;
    rsi = *((rsi + 8));
    r10 = *((r12 + 0x18));
    rdx = rsi;
    rdx &= 0xfffffffffffffff8;
    rdi = rbx + rdx;
    if (r10 > rbx) {
        void (*0x402a38)() ();
    }
    r8 = rsi;
    r8d &= 3;
    if (r8 == 1) {
        void (*0x402a38)() ();
    }
    if (rbx >= rdi) {
        void (*0x402a38)() ();
    }
    r9 = *((rdi + 8));
    if ((r9b & 1) == 0) {
        void (*0x402a38)() ();
    }
    if (r8 == 0) {
        goto label_9;
    }
    if (rdx >= rax) {
        rdx -= rax;
        r14 = rbx;
        if (rdx > 0x1f) {
            goto label_10;
        }
label_0:
        rax = r14;
        return rax;
    }
    if (*((r12 + 0x28)) == rdi) {
        goto label_11;
    }
    if (*((r12 + 0x20)) == rdi) {
        goto label_12;
    }
    if ((r9b & 2) != 0) {
        goto label_13;
    }
    r9 &= 0xfffffffffffffff8;
    r11 = rdx + r9;
    if (r11 < rax) {
        goto label_13;
    }
    rdx = r11;
    rcx = r9;
    r8 = *((rdi + 0x18));
    rdx -= rax;
    rcx >>= 3;
    if (r9 <= 0xf8) {
        goto label_14;
    }
    r14 = *((rdi + 0x30));
    if (r8 == rdi) {
        goto label_15;
    }
    rcx = *((rdi + 0x10));
    if (r10 > rcx) {
        void (*0x402a38)() ();
    }
    if (*((rcx + 0x18)) != rdi) {
        void (*0x402a38)() ();
    }
    if (*((r8 + 0x10)) != rdi) {
        void (*0x402a38)() ();
    }
    *((rcx + 0x18)) = r8;
    *((r8 + 0x10)) = rcx;
label_3:
    if (r14 == 0) {
        goto label_1;
    }
    ecx = *((rdi + 0x38));
    rcx = r12 + rcx*8;
    if (*((rcx + main)) == rdi) {
        goto label_16;
    }
label_8:
    if (r10 > r14) {
        void (*0x402a38)() ();
    }
    if (*((r14 + 0x20)) == rdi) {
        goto label_17;
    }
    *((r14 + 0x28)) = r8;
label_5:
    if (r8 == 0) {
        goto label_1;
    }
label_4:
    if (r10 > r8) {
        void (*0x402a38)() ();
    }
    rcx = *((rdi + 0x20));
    *((r8 + 0x30)) = r14;
    if (rcx == 0) {
        goto label_18;
    }
    if (r10 > rcx) {
        void (*0x402a38)() ();
    }
    *((r8 + 0x20)) = rcx;
    *((rcx + 0x30)) = r8;
label_18:
    rcx = *((rdi + 0x28));
    if (rcx == 0) {
        goto label_1;
    }
    if (r10 > rcx) {
        void (*0x402a38)() ();
    }
    *((r8 + 0x28)) = rcx;
    *((rcx + 0x30)) = r8;
label_1:
    esi &= 1;
    rcx = rbx + r11;
    if (rdx > 0x1f) {
        goto label_19;
    }
    rsi |= r11;
    r14 = rbx;
    rsi |= 2;
    *((rbx + 8)) = rsi;
    *((rcx + 8)) |= 1;
    goto label_0;
label_9:
    if (rax <= 0xff) {
        goto label_13;
    }
    rsi = rax + 8;
    rdi = *(main);
    if (rdx < rsi) {
        goto label_20;
    }
    r8 = rdx;
    rsi = rdi + rdi;
    r14 = rbx;
    r8 -= rax;
    if (r8 <= rsi) {
        goto label_0;
    }
label_20:
    r15 = *(rbx);
    r13 = rdi + rax + 0x3e;
    rdi = -rdi;
    r8d = 0;
    r13 &= rdi;
    rbx -= r15;
    rsi = rdx + r15 + 0x20;
    rdx = r13;
    rdi = rbx;
    *((rbp - 0x38)) = rsi;
    rax = fcn_0040f550 ();
    if (rax == main) {
        goto label_13;
    }
    rdx = r13;
    r14 = rax + r15;
    rsi = *((rbp - 0x38));
    rdx -= r15;
    rcx = rdx - 0x20;
    *((r14 + 8)) = rcx;
    *((r14 + rdx - 0x18)) = 0xb;
    *((r14 + rdx - 0x10)) = 0;
    if (rax < *((r12 + 0x18))) {
        *((r12 + 0x18)) = rax;
    }
    r13 += *((r12 + main));
    r13 -= rsi;
    *((r12 + main)) = r13;
    if (r13 <= *((r12 + main))) {
        goto label_0;
    }
    *((r12 + main)) = r13;
    goto label_0;
label_12:
    rdx += *((r12 + 8));
    if (rdx >= rax) {
        goto label_21;
    }
    do {
label_13:
        r14d = 0;
        goto label_0;
label_10:
        esi &= 1;
        r8 = rbx + rax;
        rax |= rsi;
        rax |= 2;
        *((rbx + 8)) = rax;
        rax = rdx;
        rax |= 3;
        *((r8 + 8)) = rax;
        *((rdi + 8)) |= 1;
        rax = fcn_0040bea0 (r12, r8, rdx);
        goto label_0;
label_11:
        rdx += *((r12 + 0x10));
    } while (rdx <= rax);
    esi &= 1;
    rdx -= rax;
    rcx = rbx + rax;
    r14 = rbx;
    rax |= rsi;
    rax |= 2;
    *((rbx + 8)) = rax;
    rax = rdx;
    rax |= 1;
    *((rcx + 8)) = rax;
    *((r12 + 0x28)) = rcx;
    *((r12 + 0x10)) = rdx;
    goto label_0;
label_21:
    rdi = rdx;
    rcx = rbx + rdx;
    esi &= 1;
    rdi -= rax;
    if (rdi > 0x1f) {
        rsi |= rax;
        r8 = rbx + rax;
        rax = rdi;
        r14 = rbx;
        rdx = rsi;
        rax |= 1;
        rdx |= 2;
        *((rbx + 8)) = rdx;
        *((r8 + 8)) = rax;
        *(rcx) = rdi;
        *((rcx + 8)) &= main;
        *((r12 + 8)) = rdi;
        *((r12 + 0x20)) = r8;
        goto label_0;
label_14:
        r13d = rcx + rcx;
        r9 = *((rdi + 0x10));
        r13 = r12 + r13*8 + 0x48;
        if (r13 != r9) {
            goto label_22;
        }
        if (r8 != r9) {
            goto label_23;
        }
label_6:
        edi = 0xfffffffe;
        edi = rotate_left32 (edi, cl);
        *(r12) &= edi;
        goto label_1;
label_19:
        r8 = rbx + rax;
        rsi |= rax;
        rax = rdx;
        rsi |= 2;
        rax |= 3;
        r14 = rbx;
        *((rbx + 8)) = rsi;
        *((r8 + 8)) = rax;
        *((rcx + 8)) |= 1;
        rax = fcn_0040bea0 (r12, r8, rdx);
        goto label_0;
    }
    rdx |= rsi;
    r14 = rbx;
    rdx |= 2;
    *((rbx + 8)) = rdx;
    *((rcx + 8)) |= 1;
    *((r12 + 8)) = 0;
    *((r12 + 0x20)) = 0;
    goto label_0;
label_15:
    rcx = *((rdi + 0x28));
    r9 = rdi + 0x28;
    if (rcx == 0) {
        goto label_24;
    }
    do {
label_2:
        r13 = r9;
        r8 = rcx;
        r9 = rcx + 0x28;
        rcx = *((rcx + 0x28));
    } while (rcx != 0);
    rcx = *((r8 + 0x20));
    r9 = r8 + 0x20;
    if (rcx != 0) {
        goto label_2;
    }
    if (r10 > r13) {
        void (*0x402a38)() ();
    }
    *(r13) = 0;
    goto label_3;
label_16:
    *((rcx + main)) = r8;
    goto label_4;
label_17:
    *((r14 + 0x20)) = r8;
    goto label_5;
label_22:
    if (r10 > r9) {
        void (*0x402a38)() ();
    }
    if (*((r9 + 0x18)) != rdi) {
        void (*0x402a38)() ();
    }
    if (r8 == r9) {
        goto label_6;
    }
    if (r13 == r8) {
label_7:
        *((r9 + 0x18)) = r8;
        *((r8 + 0x10)) = r9;
        goto label_1;
label_24:
        rcx = *((rdi + 0x20));
        if (rcx == 0) {
            goto label_25;
        }
        r9 = rdi + 0x20;
        goto label_2;
    }
label_23:
    if (r10 > r8) {
        void (*0x402a38)() ();
    }
    if (*((r8 + 0x10)) == rdi) {
        goto label_7;
    }
    void (*0x402a38)() ();
label_25:
    if (r14 == 0) {
        goto label_1;
    }
    r8d = *((rdi + 0x38));
    r9 = r12 + r8*8;
    rcx = r8;
    r8d = 0;
    if (*((r9 + main)) != rdi) {
        goto label_8;
    }
    *((r9 + main)) = 0;
    edi = 0xfffffffe;
    edi = rotate_left32 (edi, cl);
    *((r12 + 4)) &= edi;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40dcd0 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_0040dcd0 (uint32_t arg1) {
    rdi = arg1;
label_11:
    if (rsi > 0xffffffffffffff7f) {
        eax = 0;
        return eax;
    }
    r12 = rdi;
    rax = *((rdi + 0x28));
    if (rax == 0) {
        goto label_26;
    }
    rdx = *((rdi + 0x10));
    rsi += 0x50;
    if (rdx <= rsi) {
        goto label_1;
    }
    r8 = main;
    rbx = r8;
    while (rax < rdi) {
label_0:
        rbx = *((rbx + 0x10));
        if (rbx == 0) {
            goto label_27;
        }
        rdi = *(rbx);
    }
    r9 = *((rbx + 8));
    rcx = rdi + r9;
    if (rax >= rcx) {
        goto label_0;
    }
    eax = *((rbx + 0x18));
    if ((al & 8) == 0) {
        goto label_28;
    }
    do {
label_1:
        r13d = 0;
label_3:
        rax = fcn_0040b940 (r12, rsi);
        r8 = rax;
        eax = 1;
        r13 += r8;
        if (r13 == 0) {
            rax = *((r12 + 0x30));
            if (*((r12 + 0x10)) > rax) {
                *((r12 + 0x30)) = main;
            }
label_26:
            eax = 0;
        }
        return rax;
label_28:
    } while ((al & 1) == 0);
    r10 = *(0x004466d0);
    rax = rdx + r10 - 1;
    edx = 0;
    rax -= rsi;
    rax = rdx:rax / r10;
    rdx = rdx:rax % r10;
    r13 = rax - 1;
    r13 *= r10;
    if (r13 > r9) {
        goto label_1;
    }
label_2:
    if (rdi > r8) {
        goto label_29;
    }
    if (rcx > r8) {
        goto label_1;
    }
label_29:
    r8 = *((r8 + 0x10));
    if (r8 != 0) {
        goto label_2;
    }
    r14 = r9;
    r8d = 0;
    ecx = 0;
    rsi = r9;
    r14 -= r13;
    rdx = r14;
    rax = fcn_0040f550 ();
    if (rax == main) {
        goto label_30;
    }
label_4:
    if (r13 == 0) {
        goto label_1;
    }
    rdx = *((r12 + 0x10));
    rcx = *((r12 + 0x28));
    *((rbx + 8)) -= r13;
    rdx -= r13;
    *((r12 + main)) -= r13;
    rax = rcx + 0x10;
    if ((cl & 0xf) == 0) {
        goto label_31;
    }
    rax = -rax;
    rbx = rdx;
    eax &= 0xf;
    rbx -= rax;
    rsi = rcx + rax;
    rax = rbx;
    do {
        *((r12 + 0x10)) = rax;
        rax |= 1;
        *((r12 + 0x28)) = rsi;
        *((rsi + 8)) = rax;
        rax = *(main);
        *((rcx + rdx + 8)) = 0x50;
        *((r12 + 0x30)) = rax;
        goto label_3;
label_31:
        rax = rdx;
        rsi = rcx;
    } while (1);
label_30:
    rdi += r14;
    eax = fcn_0040f560 (*(rbx), r13);
    if (eax != 0) {
        goto label_1;
    }
    goto label_4;
label_27:
    void (*0x402a11)() ();
    if (rdi == 0) {
        goto label_32;
    }
    rdx = rdi;
    rdi = rdi - 0x10;
    r9 = *(0x00446718);
    if (r9 > rdi) {
        void (*0x402a33)() ();
    }
    rcx = *((rdx - 8));
    r8 = *((rdx - 8));
    r8d &= 3;
    if (r8 == 1) {
        void (*0x402a33)() ();
    }
    rax = rcx;
    rax &= 0xfffffffffffffff8;
    ecx &= 1;
    rsi = rdi + rax;
    if (ecx != 0) {
        goto label_9;
    }
    rdx = *((rdx - 0x10));
    rdi -= rdx;
    if (r8 == 0) {
        goto label_33;
    }
    rax += rdx;
    if (r9 > rdi) {
        void (*0x402a33)() ();
    }
    if (*(0x00446720) == rdi) {
        goto label_34;
    }
    rcx = rdx;
    r8 = *((rdi + 0x18));
    rcx >>= 3;
    if (rdx > 0xff) {
        goto label_35;
    }
    r10d = rcx + rcx;
    rdx = *((rdi + 0x10));
    r10 = main;
    if (r10 != rdx) {
        goto label_36;
    }
label_23:
    if (r8 == rdx) {
        goto label_37;
    }
    if (r10 != r8) {
        goto label_38;
    }
label_25:
    *((rdx + 0x18)) = r8;
    *((r8 + 0x10)) = rdx;
label_9:
    if (rdi >= rsi) {
        void (*0x402a33)() ();
    }
    rdx = *((rsi + 8));
    if ((dl & 1) == 0) {
        void (*0x402a33)() ();
    }
    if ((dl & 2) != 0) {
        goto label_39;
    }
    r11 = *(0x00446720);
    if (*(0x00446728) == rsi) {
        goto label_40;
    }
    if (r11 == rsi) {
        goto label_41;
    }
    rdx &= 0xfffffffffffffff8;
    r8 = *((rsi + 0x18));
    rcx = rdx;
    rax += rdx;
    rcx >>= 3;
    if (rdx <= 0xf8) {
        goto label_42;
    }
    rbx = *((rsi + 0x30));
    if (r8 == rsi) {
        goto label_43;
    }
    rdx = *((rsi + 0x10));
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    if (*((rdx + 0x18)) != rsi) {
        void (*0x402a2e)() ();
    }
    if (*((r8 + 0x10)) != rsi) {
        void (*0x402a2e)() ();
    }
    *((rdx + 0x18)) = r8;
    *((r8 + 0x10)) = rdx;
label_16:
    if (rbx == 0) {
        goto label_17;
    }
    edx = *((rsi + 0x38));
    rcx = rdx;
    r10 = rdx + 0x4b;
    if (*((rdx*8 + main)) == rsi) {
        goto label_44;
    }
    if (r9 > rbx) {
        void (*0x402a2e)() ();
    }
    if (*((rbx + 0x20)) == rsi) {
        goto label_45;
    }
    *((rbx + 0x28)) = r8;
label_14:
    if (r8 == 0) {
        goto label_17;
    }
label_20:
    if (r9 > r8) {
        goto label_46;
    }
    rdx = *((rsi + 0x20));
    *((r8 + 0x30)) = rbx;
    if (rdx == 0) {
        goto label_47;
    }
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    *((r8 + 0x20)) = rdx;
    *((rdx + 0x30)) = r8;
label_47:
    rdx = *((rsi + 0x28));
    if (rdx == 0) {
        goto label_17;
    }
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    *((r8 + 0x28)) = rdx;
    *((rdx + 0x30)) = r8;
    goto label_17;
label_39:
    rdx &= 0xfffffffffffffffe;
    *((rsi + 8)) = rdx;
    rdx = rax;
    rdx |= 1;
    *((rdi + 8)) = rdx;
    *((rdi + rax)) = rax;
label_8:
    rcx = rax;
    rcx >>= 3;
    if (rax > 0xff) {
        goto label_48;
    }
    eax = rcx + rcx;
    esi = *(0x00446700);
    rdx = main;
    eax = 1;
    eax <<= cl;
    if ((esi & eax) == 0) {
        goto label_49;
    }
    rax = *((rdx + 0x10));
    if (r9 > rax) {
        void (*0x402a2e)() ();
    }
label_7:
    *((rdx + 0x10)) = rdi;
    *((rax + 0x18)) = rdi;
    *((rdi + 0x10)) = rax;
    *((rdi + 0x18)) = rdx;
label_5:
    return rax;
label_32:
    return rax;
label_48:
    rdx = rax;
    rdx >>= 8;
    ecx = edx;
    if (edx == 0) {
        goto label_50;
    }
    if (edx > 0xffff) {
        goto label_51;
    }
    __asm ("bsr edx, edx");
    ecx = 0x26;
    rbx = rax;
    esi = 0x1f;
    edx ^= 0x1f;
    ecx -= edx;
    esi -= edx;
    rbx >>= cl;
    rcx = rbx;
    ecx &= 1;
    edx = rcx + rsi*2;
    rcx = rdx;
    rsi = main;
    edx = 1;
    edx <<= cl;
label_6:
    r8d = *(0x00446704);
    *((rdi + 0x38)) = ecx;
    r10 = main;
    *((rdi + 0x28)) = 0;
    *((rdi + 0x20)) = 0;
    if ((edx & r8d) == 0) {
        goto label_52;
    }
    rsi = *((rsi + main));
    r8 = rax;
    if (ecx == 0x1f) {
        goto label_53;
    }
    ecx >>= 1;
    edx = 0x39;
    edx -= ecx;
    ecx = edx;
    r8 <<= cl;
    while (rdx != rax) {
        rdx = r8;
        r8 += r8;
        rdx >>= 0x3f;
        rdx += 4;
        rcx = *((rsi + rdx*8));
        if (rcx == 0) {
            goto label_54;
        }
        rsi = rcx;
label_53:
        rdx = *((rsi + 8));
        rdx &= 0xfffffffffffffff8;
    }
    rax = *((rsi + 0x10));
    if (r9 > rsi) {
        void (*0x402a2e)() ();
    }
    if (r9 > rax) {
        void (*0x402a2e)() ();
    }
    *((rax + 0x18)) = rdi;
    *((rsi + 0x10)) = rdi;
    *((rdi + 0x10)) = rax;
    *((rdi + 0x18)) = rsi;
    *((rdi + 0x30)) = 0;
label_10:
    *(main)--;
    if (*(main) != 0) {
        goto label_5;
    }
    edi = 0x446700;
    void (*0x40b940)() ();
label_50:
    edx = 1;
    esi = 0x258;
    goto label_6;
label_49:
    eax |= esi;
    *(0x00446700) = eax;
    rax = rdx;
    goto label_7;
label_42:
    r10d = rcx + rcx;
    rdx = *((rsi + 0x10));
    r10 = main;
    if (r10 != rdx) {
        goto label_55;
    }
label_22:
    if (r8 == rdx) {
        goto label_56;
    }
    if (r8 != r10) {
        goto label_57;
    }
label_24:
    *((rdx + 0x18)) = r8;
    *((r8 + 0x10)) = rdx;
label_17:
    rdx = rax;
    rdx |= 1;
    *((rdi + 8)) = rdx;
    *((rdi + rax)) = rax;
    if (r11 != rdi) {
        goto label_8;
    }
    *(0x00446708) = rax;
    goto label_5;
label_34:
    rdx = *((rsi + 8));
    rcx = *((rsi + 8));
    ecx &= 3;
    if (rcx != 3) {
        goto label_9;
    }
    rdx &= 0xfffffffffffffffe;
    *(0x00446708) = rax;
    *((rsi + 8)) = rdx;
    rdx = rax;
    rdx |= 1;
    *((rdi + 8)) = rdx;
    *(rsi) = rax;
    goto label_5;
label_35:
    r11 = *((rdi + 0x30));
    if (r8 == rdi) {
        goto label_58;
    }
    rdx = *((rdi + 0x10));
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    if (*((rdx + 0x18)) != rdi) {
        void (*0x402a2e)() ();
    }
    if (*((r8 + 0x10)) != rdi) {
        void (*0x402a2e)() ();
    }
    *((rdx + 0x18)) = r8;
    *((r8 + 0x10)) = rdx;
label_19:
    if (r11 == 0) {
        goto label_9;
    }
    edx = *((rdi + 0x38));
    rcx = rdx;
    r10 = rdx + 0x4b;
    if (*((rdx*8 + main)) == rdi) {
        goto label_59;
    }
    if (r9 > r11) {
        void (*0x402a2e)() ();
    }
    if (*((r11 + 0x20)) == rdi) {
        goto label_60;
    }
    *((r11 + 0x28)) = r8;
label_21:
    if (r8 == 0) {
        goto label_9;
    }
label_12:
    if (r9 > r8) {
        goto label_61;
    }
    rdx = *((rdi + 0x20));
    *((r8 + 0x30)) = r11;
    if (rdx == 0) {
        goto label_62;
    }
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    *((r8 + 0x20)) = rdx;
    *((rdx + 0x30)) = r8;
label_62:
    rdx = *((rdi + 0x28));
    if (rdx == 0) {
        goto label_9;
    }
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    *((r8 + 0x28)) = rdx;
    *((rdx + 0x30)) = r8;
    goto label_9;
label_52:
    edx |= r8d;
    *(0x00446704) = edx;
    *((rsi + main)) = rdi;
    *((rdi + 0x30)) = r10;
    *((rdi + 0x18)) = rdi;
    *((rdi + 0x10)) = rdi;
    goto label_10;
label_54:
    rax = rsi + rdx*8;
    if (r9 > rax) {
        void (*0x402a2e)() ();
    }
    *((rsi + rdx*8)) = rdi;
    *((rdi + 0x30)) = rsi;
    *((rdi + 0x18)) = rdi;
    *((rdi + 0x10)) = rdi;
    goto label_10;
label_33:
    rbx = rax + rdx + 0x20;
    eax = fcn_0040f560 (rdi, rbx);
    if (eax != 0) {
        goto label_5;
    }
    *(0x00446a58) -= rbx;
    goto label_5;
label_51:
    edx = 0x80000000;
    esi = 0x350;
    ecx = 0x1f;
    goto label_6;
label_40:
    rax += *(0x00446710);
    *(0x00446728) = rdi;
    rdx = rax;
    *(0x00446710) = rax;
    rdx |= 1;
    *((rdi + 8)) = rdx;
    if (r11 == rdi) {
        goto label_63;
    }
label_13:
    if (rax <= *(0x00446730)) {
        goto label_5;
    }
    esi = 0;
    edi = 0x446700;
    goto label_11;
label_59:
    *((r10*8 + main)) = r8;
    if (r8 != 0) {
        goto label_12;
    }
    edx = 0xfffffffe;
    edx = rotate_left32 (edx, cl);
    *(0x00446704) &= edx;
    goto label_9;
label_63:
    *(0x00446720) = 0;
    *(0x00446708) = 0;
    goto label_13;
label_45:
    *((rbx + 0x20)) = r8;
    goto label_14;
label_41:
    rax += *(0x00446708);
    *(0x00446720) = rdi;
    rdx = rax;
    *(0x00446708) = rax;
    rdx |= 1;
    *((rdi + 8)) = rdx;
    *((rdi + rax)) = rax;
    goto label_5;
label_43:
    rdx = *((rsi + 0x28));
    rcx = rsi + 0x28;
    if (rdx == 0) {
        goto label_64;
    }
    do {
label_15:
        r10 = rcx;
        r8 = rdx;
        rcx = rdx + 0x28;
        rdx = *((rdx + 0x28));
    } while (rdx != 0);
    rdx = *((r8 + 0x20));
    rcx = r8 + 0x20;
    if (rdx != 0) {
        goto label_15;
    }
    if (r9 > r10) {
        void (*0x402a2e)() ();
    }
    *(r10) = 0;
    goto label_16;
label_56:
    edx = 0xfffffffe;
    edx = rotate_left32 (edx, cl);
    *(0x00446700) &= edx;
    goto label_17;
label_58:
    rdx = *((rdi + 0x28));
    rcx = rdi + 0x28;
    if (rdx == 0) {
        goto label_65;
    }
    do {
label_18:
        r10 = rcx;
        r8 = rdx;
        rcx = rdx + 0x28;
        rdx = *((rdx + 0x28));
    } while (rdx != 0);
    rdx = *((r8 + 0x20));
    rcx = r8 + 0x20;
    if (rdx != 0) {
        goto label_18;
    }
    if (r9 > r10) {
        void (*0x402a2e)() ();
    }
    *(r10) = 0;
    goto label_19;
label_37:
    edx = 0xfffffffe;
    edx = rotate_left32 (edx, cl);
    *(0x00446700) &= edx;
    goto label_9;
label_44:
    *((r10*8 + main)) = r8;
    if (r8 != 0) {
        goto label_20;
    }
    edx = 0xfffffffe;
    edx = rotate_left32 (edx, cl);
    *(0x00446704) &= edx;
    goto label_17;
label_60:
    *((r11 + 0x20)) = r8;
    goto label_21;
label_55:
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    if (*((rdx + 0x18)) == rsi) {
        goto label_22;
    }
    void (*0x402a2e)() ();
label_36:
    if (r9 > rdx) {
        void (*0x402a2e)() ();
    }
    if (*((rdx + 0x18)) == rdi) {
        goto label_23;
    }
    void (*0x402a2e)() ();
label_64:
    rdx = *((rsi + 0x20));
    if (rdx == 0) {
        goto label_66;
    }
    rcx = rsi + 0x20;
    goto label_15;
label_65:
    rdx = *((rdi + 0x20));
    if (rdx == 0) {
        goto label_67;
    }
    rcx = rdi + 0x20;
    goto label_18;
label_57:
    if (r9 > r8) {
        void (*0x402a2e)() ();
    }
    if (*((r8 + 0x10)) == rsi) {
        goto label_24;
    }
    void (*0x402a2e)() ();
label_38:
    if (r9 > r8) {
        void (*0x402a2e)() ();
    }
    if (*((r8 + 0x10)) == rdi) {
        goto label_25;
    }
    void (*0x402a2e)() ();
label_66:
    r8d = 0;
    goto label_16;
label_67:
    r8d = 0;
    goto label_19;
label_61:
    void (*0x402a2e)() ();
label_46:
    return void (*0x402a2e)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40bea0 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int64_t fcn_0040bea0 (uint32_t arg3, uint32_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
label_0:
        fcn_00401114 ();
        rbx = rdi;
        rdi = rsi;
        rsi += rdx;
        rax = *((rdi + 8));
        if ((al & 1) != 0) {
            goto label_20;
        }
        r10 = *(rdi);
        rdi -= r10;
        if ((al & 3) == 0) {
            goto label_21;
        }
        r9 = *((rbx + 0x18));
        rdx += r10;
    } while (r9 > rdi);
    if (*((rbx + 0x20)) == rdi) {
        goto label_22;
    }
    rcx = r10;
    r8 = *((rdi + 0x18));
    rcx >>= 3;
    if (r10 <= 0xff) {
        goto label_23;
    }
    r11 = *((rdi + 0x30));
    if (rdi == r8) {
        goto label_24;
    }
    rax = *((rdi + 0x10));
    if (r9 > rax) {
        goto label_0;
    }
    if (*((rax + 0x18)) != rdi) {
        goto label_0;
    }
    if (*((r8 + 0x10)) != rdi) {
        goto label_0;
    }
    *((rax + 0x18)) = r8;
    *((r8 + 0x10)) = rax;
label_10:
    if (r11 == 0) {
        goto label_3;
    }
    eax = *((rdi + 0x38));
    rax = rbx + rax*8;
    if (*((rax + main)) == rdi) {
        goto label_25;
    }
label_19:
    if (r9 > r11) {
        goto label_0;
    }
    if (*((r11 + 0x20)) == rdi) {
        goto label_26;
    }
    *((r11 + 0x28)) = r8;
label_6:
    if (r8 == 0) {
        goto label_3;
    }
label_12:
    if (r9 > r8) {
        goto label_0;
    }
    rax = *((rdi + 0x20));
    *((r8 + 0x30)) = r11;
    if (rax == 0) {
        goto label_27;
    }
    if (r9 > rax) {
        goto label_0;
    }
    *((r8 + 0x20)) = rax;
    *((rax + 0x30)) = r8;
label_27:
    rax = *((rdi + 0x28));
    if (rax == 0) {
        goto label_3;
    }
    if (r9 > rax) {
        goto label_0;
    }
    *((r8 + 0x28)) = rax;
    *((rax + 0x30)) = r8;
    goto label_3;
label_20:
    r9 = *((rbx + 0x18));
label_3:
    if (r9 > rsi) {
        goto label_0;
    }
    rax = *((rsi + 8));
    if ((al & 2) != 0) {
        goto label_28;
    }
    r11 = *((rbx + 0x20));
    if (*((rbx + 0x28)) == rsi) {
        goto label_29;
    }
    if (r11 == rsi) {
        goto label_30;
    }
    rax &= 0xfffffffffffffff8;
    r8 = *((rsi + 0x18));
    rcx = rax;
    rdx += rax;
    rcx >>= 3;
    if (rax <= 0xf8) {
        goto label_31;
    }
    r12 = *((rsi + 0x30));
    if (r8 == rsi) {
        goto label_32;
    }
    rax = *((rsi + 0x10));
    if (r9 > rax) {
        goto label_0;
    }
    if (*((rax + 0x18)) != rsi) {
        goto label_0;
    }
    if (*((r8 + 0x10)) != rsi) {
        goto label_0;
    }
    *((rax + 0x18)) = r8;
    *((r8 + 0x10)) = rax;
label_8:
    if (r12 == 0) {
        goto label_2;
    }
    eax = *((rsi + 0x38));
    rax = rbx + rax*8;
    if (*((rax + main)) == rsi) {
        goto label_33;
    }
label_18:
    if (r9 > r12) {
        goto label_0;
    }
    if (*((r12 + 0x20)) == rsi) {
        goto label_34;
    }
    *((r12 + 0x28)) = r8;
label_13:
    if (r8 == 0) {
        goto label_2;
    }
label_11:
    if (r8 < r9) {
        goto label_0;
    }
    rax = *((rsi + 0x20));
    *((r8 + 0x30)) = r12;
    if (rax == 0) {
        goto label_35;
    }
    if (r9 > rax) {
        goto label_0;
    }
    *((r8 + 0x20)) = rax;
    *((rax + 0x30)) = r8;
label_35:
    rax = *((rsi + 0x28));
    if (rax == 0) {
        goto label_2;
    }
    if (r9 > rax) {
        goto label_0;
    }
    *((r8 + 0x28)) = rax;
    *((rax + 0x30)) = r8;
label_2:
    rax = rdx;
    rax |= 1;
    *((rdi + 8)) = rax;
    *((rdi + rdx)) = rdx;
    if (r11 == rdi) {
        *((rbx + 8)) = rdx;
        goto label_4;
label_28:
        rax &= 0xfffffffffffffffe;
        *((rsi + 8)) = rax;
        rax = rdx;
        rax |= 1;
        *((rdi + 8)) = rax;
        *((rdi + rdx)) = rdx;
    }
    rcx = rdx;
    rcx >>= 3;
    if (rdx > 0xff) {
        goto label_36;
    }
    eax = rcx + rcx;
    esi = *(rbx);
    rdx = rbx + rax*8 + 0x48;
    eax = 1;
    eax <<= cl;
    if ((esi & eax) == 0) {
        goto label_37;
    }
    rax = *((rdx + 0x10));
    if (rax < r9) {
        goto label_0;
    }
label_1:
    *((rdx + 0x10)) = rdi;
    *((rax + 0x18)) = rdi;
    *((rdi + 0x10)) = rax;
    r12 = rbx;
    *((rdi + 0x18)) = rdx;
    return rax;
label_36:
    rax = rdx;
    rax >>= 8;
    ecx = eax;
    if (eax == 0) {
        goto label_38;
    }
    if (eax > 0xffff) {
        goto label_39;
    }
    __asm ("bsr eax, eax");
    ecx = 0x26;
    rsi = rdx;
    eax ^= 0x1f;
    ecx -= eax;
    rsi >>= cl;
    rcx = rsi;
    esi = 0x1f;
    ecx &= 1;
    esi -= eax;
    eax = 1;
    r10d = rcx + rsi*2;
    rcx = r10;
    r8 = main;
    eax <<= cl;
    do {
label_5:
        esi = *((rbx + 4));
        *((rdi + 0x38)) = ecx;
        *((rdi + 0x28)) = 0;
        *((rdi + 0x20)) = 0;
        if ((eax & esi) != 0) {
            goto label_40;
        }
        eax |= esi;
        *((rbx + 4)) = eax;
        *((rbx + r10*8 + main)) = rdi;
        rbx += r8;
        *((rdi + 0x30)) = rbx;
        *((rdi + 0x18)) = rdi;
        *((rdi + 0x10)) = rdi;
label_4:
        r12 = rbx;
        return rax;
label_38:
        eax = 1;
        r8d = 0x258;
        r10d = ecx;
    } while (1);
label_37:
    eax |= esi;
    *(rbx) = eax;
    rax = rdx;
    goto label_1;
label_31:
    r10d = rcx + rcx;
    rax = *((rsi + 0x10));
    r10 = rbx + r10*8 + 0x48;
    if (r10 != rax) {
        goto label_41;
    }
    if (r8 != rax) {
        goto label_42;
    }
label_14:
    eax = 0xfffffffe;
    eax = rotate_left32 (eax, cl);
    *(rbx) &= eax;
    goto label_2;
label_23:
    r10d = rcx + rcx;
    rax = *((rdi + 0x10));
    r10 = rbx + r10*8 + 0x48;
    if (r10 != rax) {
        goto label_43;
    }
    if (r8 != rax) {
        goto label_44;
    }
label_15:
    eax = 0xfffffffe;
    eax = rotate_left32 (eax, cl);
    *(rbx) &= eax;
    goto label_3;
label_21:
    r12 = r10 + rdx + 0x20;
    eax = fcn_0040f560 (rdi, r12);
    if (eax != 0) {
        goto label_4;
    }
    *((rbx + main)) -= r12;
    goto label_4;
label_40:
    rsi = *((rbx + r10*8 + main));
    r8 = rdx;
    if (ecx == 0x1f) {
        goto label_45;
    }
    ecx >>= 1;
    eax = 0x39;
    eax -= ecx;
    ecx = eax;
    r8 <<= cl;
    while (rax != rdx) {
        rax = r8;
        r8 += r8;
        rax >>= 0x3f;
        rax += 4;
        rcx = *((rsi + rax*8));
        if (rcx == 0) {
            goto label_46;
        }
        rsi = rcx;
label_45:
        rax = *((rsi + 8));
        rax &= 0xfffffffffffffff8;
    }
    rax = *((rsi + 0x10));
    if (r9 > rsi) {
        goto label_0;
    }
    if (r9 > rax) {
        goto label_0;
    }
    *((rax + 0x18)) = rdi;
    *((rsi + 0x10)) = rdi;
    *((rdi + 0x10)) = rax;
    *((rdi + 0x18)) = rsi;
    *((rdi + 0x30)) = 0;
    goto label_4;
label_22:
    rax = *((rsi + 8));
    rcx = *((rsi + 8));
    ecx &= 3;
    if (rcx != 3) {
        goto label_3;
    }
    rax &= 0xfffffffffffffffe;
    *((rbx + 8)) = rdx;
    *((rsi + 8)) = rax;
    rax = rdx;
    rax |= 1;
    *((rdi + 8)) = rax;
    *(rsi) = rdx;
    goto label_4;
label_39:
    eax = 0x80000000;
    r8d = 0x350;
    ecx = 0x1f;
    r10d = 0x1f;
    goto label_5;
label_46:
    rdx = rsi + rax*8;
    if (r9 > rdx) {
        goto label_0;
    }
    *((rsi + rax*8)) = rdi;
    *((rdi + 0x30)) = rsi;
    *((rdi + 0x18)) = rdi;
    *((rdi + 0x10)) = rdi;
    goto label_4;
label_29:
    rdx += *((rbx + 0x10));
    *((rbx + 0x28)) = rdi;
    *((rbx + 0x10)) = rdx;
    rdx |= 1;
    *((rdi + 8)) = rdx;
    if (r11 != rdi) {
        goto label_4;
    }
    *((rbx + 0x20)) = 0;
    *((rbx + 8)) = 0;
    goto label_4;
label_30:
    rdx += *((rbx + 8));
    *((rbx + 0x20)) = rdi;
    rax = rdx;
    *((rbx + 8)) = rdx;
    rax |= 1;
    *((rdi + 8)) = rax;
    *((rdi + rdx)) = rdx;
    goto label_4;
label_26:
    *((r11 + 0x20)) = r8;
    goto label_6;
label_32:
    rax = *((rsi + 0x28));
    rcx = rsi + 0x28;
    if (rax == 0) {
        goto label_47;
    }
    do {
label_7:
        r10 = rcx;
        r8 = rax;
        rcx = rax + 0x28;
        rax = *((rax + 0x28));
    } while (rax != 0);
    rax = *((r8 + 0x20));
    rcx = r8 + 0x20;
    if (rax != 0) {
        goto label_7;
    }
    if (r9 > r10) {
        goto label_0;
    }
    *(r10) = 0;
    goto label_8;
label_24:
    rax = *((rdi + 0x28));
    rcx = rdi + 0x28;
    if (rax == 0) {
        goto label_48;
    }
    do {
label_9:
        r10 = rcx;
        r8 = rax;
        rcx = rax + 0x28;
        rax = *((rax + 0x28));
    } while (rax != 0);
    rax = *((r8 + 0x20));
    rcx = r8 + 0x20;
    if (rax != 0) {
        goto label_9;
    }
    if (r9 > r10) {
        goto label_0;
    }
    *(r10) = 0;
    goto label_10;
label_33:
    *((rax + main)) = r8;
    goto label_11;
label_25:
    *((rax + main)) = r8;
    goto label_12;
label_34:
    *((r12 + 0x20)) = r8;
    goto label_13;
label_41:
    if (r9 > rax) {
        goto label_0;
    }
    if (*((rax + 0x18)) != rsi) {
        goto label_0;
    }
    if (r8 == rax) {
        goto label_14;
    }
    if (r10 != r8) {
        goto label_42;
    }
label_16:
    *((rax + 0x18)) = r8;
    *((r8 + 0x10)) = rax;
    goto label_2;
label_43:
    if (r9 > rax) {
        goto label_0;
    }
    if (*((rax + 0x18)) != rdi) {
        goto label_0;
    }
    if (r8 == rax) {
        goto label_15;
    }
    if (r10 != r8) {
        goto label_44;
    }
label_17:
    *((rax + 0x18)) = r8;
    *((r8 + 0x10)) = rax;
    goto label_3;
label_47:
    rax = *((rsi + 0x20));
    if (rax == 0) {
        goto label_49;
    }
    rcx = rsi + 0x20;
    goto label_7;
label_48:
    rax = *((rdi + 0x20));
    if (rax == 0) {
        goto label_50;
    }
    rcx = rdi + 0x20;
    goto label_9;
label_42:
    if (r8 < r9) {
        goto label_0;
    }
    if (*((r8 + 0x10)) == rsi) {
        goto label_16;
    }
    goto label_0;
label_44:
    if (r9 > r8) {
        goto label_0;
    }
    if (*((r8 + 0x10)) == rdi) {
        goto label_17;
    }
    goto label_0;
label_49:
    if (r12 == 0) {
        goto label_2;
    }
    eax = *((rsi + 0x38));
    r8d = 0;
    rcx = rax;
    rax = rbx + rax*8;
    if (*((rax + main)) != rsi) {
        goto label_18;
    }
    *((rax + main)) = 0;
    eax = 0xfffffffe;
    eax = rotate_left32 (eax, cl);
    *((rbx + 4)) &= eax;
    goto label_2;
label_50:
    if (r11 == 0) {
        goto label_3;
    }
    eax = *((rdi + 0x38));
    r8d = 0;
    rcx = rax;
    rax = rbx + rax*8;
    if (rdi != *((rax + main))) {
        goto label_19;
    }
    *((rax + main)) = 0;
    eax = 0xfffffffe;
    eax = rotate_left32 (eax, cl);
    *((rbx + 4)) &= eax;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40ed20 */
#include <stdint.h>
 
int64_t fcn_0040ed20 (int64_t arg4, uint32_t arg1) {
    rcx = arg4;
    rdi = arg1;
    rax = rdi;
    if (rdi > 1) {
        rax--;
        __asm ("bsr rcx, rax");
        eax = 1;
        ecx++;
        rax <<= cl;
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4106f0 */
#include <stdint.h>
 
int64_t fcn_004106f0 (int64_t arg3, uint32_t arg1) {
    int64_t var_3ch;
    uint32_t var_38h;
    rdx = arg3;
    rdi = arg1;
    r8d = 0;
    if (rdi == main) {
        goto label_5;
    }
    r13 = rdi;
    eax = *(0x0041c718);
    if ((al & 4) == 0) {
        goto label_6;
    }
label_3:
    rax = *(0x00440788);
    *((rbp - 0x38)) = rax;
label_0:
    r8d = 0;
    if (r13 == *((rbp - 0x38))) {
        goto label_7;
    }
    do {
label_1:
        rax = r8;
        return rax;
label_6:
        rsi = *(0x0041c378);
    } while (rsi == 0);
    if ((al & 8) == 0) {
        goto label_8;
    }
    rax = *(0x00440788);
    *((rbp - 0x38)) = rax;
    if (rdi == 0) {
        goto label_0;
    }
    if (rdi == rax) {
        goto label_9;
    }
    r14 = *(rsi);
    r12 = rdi;
    eax = fcn_0041571a (rdi, rsi, rdx);
    *((rbp - 0x3c)) = eax;
    if (r14 == 0) {
        goto label_1;
    }
label_4:
    ebx = eax;
    r15 = rsi + 8;
    goto label_10;
label_2:
    r14 = *(r15);
    r15 += 8;
    if (r14 == 0) {
        goto label_0;
    }
label_10:
    eax = fcn_00414c00 (r14, r12, rbx);
    if (eax != 0) {
        goto label_2;
    }
    if (*((r14 + rbx)) != 0x3d) {
        goto label_2;
    }
    eax = *((rbp - 0x3c));
    r8d = rax + 1;
    r8 += r14;
    goto label_1;
    do {
        if (r13 == rax) {
            goto label_11;
        }
        rsi += 0x10;
label_8:
        rax = *(rsi);
    } while (rax != 0);
    goto label_3;
label_5:
    rax = r8;
    return rax;
label_9:
    r14 = *(rsi);
    r12 = rdi;
    eax = fcn_0041571a (0x418887, rsi, rdx);
    *((rbp - 0x3c)) = eax;
    if (r14 != 0) {
        goto label_4;
    }
label_7:
    r8 = *(0x0041c710);
    goto label_1;
label_11:
    r8 = *((rsi + 8));
    if (r8 != 0) {
        goto label_1;
    }
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410560 */
#include <stdint.h>
 
uint32_t fcn_00410560 (void) {
    int64_t var_200h;
    if ((*(0x0041c718) & 4) == 0) {
        goto label_1;
    }
    eax = fcn_00404d00 (rdi, rbp - 0x200);
    r8d = eax;
    eax = 1;
    if (r8d == 0xffffffff) {
        return eax;
    }
    eax = fcn_00405f5b (rbp - 0x200);
    do {
label_0:
        al = (eax != 0xffffffff) ? 1 : 0;
        return eax;
label_1:
        ebx = *(main);
        eax = fcn_004117e0 (rdi, rbp - 0x200, rdx);
    } while (eax != 0xffffffff);
    rdx = *(0x00448020);
    if (rdx == *(0x00440860)) {
        goto label_2;
    }
    if (rdx != *(0x00440878)) {
        goto label_0;
    }
label_2:
    *(0x00448020) = ebx;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405f5b */
#include <stdint.h>
 
void fcn_00405f5b (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b158)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4117e0 */
#include <stdint.h>
 
uint64_t fcn_004117e0 (char ** envp, int64_t arg2, int64_t arg1) {
    int64_t var_30h;
    rdx = envp;
    rsi = arg2;
    rdi = arg1;
    r12 = rsi;
    rbx = rdi;
    r13d = 0;
    if (r13 != 0) {
        eax = 0;
        rsi = rbp - 0x30;
        rax = void (*rax)() ();
        if (rax == main) {
            goto label_0;
        }
        rsi = r12;
        rdi = rbp - 0x30;
        void (*r13)() ();
        return rax;
    }
label_0:
    if ((*(0x0041c718) & 4) != 0) {
        rsi = r12;
        fcn_004057d0 (rbx);
        return rax;
    }
    rdx = r12;
    rsi = rbx;
    ecx = 0;
    fcn_00411e40 (*(0x00440780));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4057d0 */
#include <stdint.h>
 
void fcn_004057d0 (int64_t arg2) {
    int64_t var_210h;
    int64_t var_18h;
    rsi = arg2;
    r14 = rsi;
    eax = fcn_00404d00 (rdi, main);
    r12d = eax;
    if (eax != 0xffffffff) {
        edx = 7;
        ecx = 0;
        r9d = 0x2000080;
        r8d = 3;
        rax = fcn_00405f08 (main, 0x80);
        r13 = rax;
        if (r13 == main) {
            goto label_0;
        }
        eax = fcn_00405bc0 (r13, r14, rdx, rcx);
        r12d = eax;
        fcn_00405ef5 (r13);
    }
    rsp = rbp - 0x18;
    eax = r12d;
    return;
label_0:
    eax = fcn_004162a0 ();
    rsp = rbp - 0x18;
    r12d = eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411e40 */
#include <stdint.h>
 
uint32_t fcn_00411e40 (int64_t arg3) {
    rdx = arg3;
    r13 = rdx;
    eax = fcn_004122e0 ();
    r12d = eax;
    if (eax != 0xffffffff) {
        fcn_004024b0 (r13);
    }
    eax = r12d;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4122e0 */
#include <stdint.h>
 
int64_t fcn_004122e0 (void) {
    rax = 0x2a022821d60106;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402bc9 */
#include <stdint.h>
 
int32_t fcn_00402bc9 (void) {
    eax = *(0x00440898);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f8b0 */
#include <stdint.h>
 
uint64_t fcn_0040f8b0 (signed int64_t arg2, signed int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = *(rdi);
    r8d = 0;
    while (edx > r8d) {
        eax = rdx + r8;
        eax >>= 1;
        ecx = eax;
        rcx *= 3;
        if (*((rdi + rcx*8 + 8)) < esi) {
            goto label_1;
        }
        edx = eax;
label_0:
    }
    if (r8d != 0) {
        edx = r8 - 1;
        rax = rdx;
        rdx *= 3;
        if (*((rdi + rdx*8 + 0xc)) < esi) {
            r8d = eax;
            goto label_2;
        }
    }
label_2:
    eax = r8d;
    return rax;
label_1:
    r8d = rax + 1;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f880 */
#include <stdint.h>
 
uint64_t fcn_0040f880 (int64_t arg6, uint32_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_38h;
    int64_t var_28h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
label_1:
    r15 = rsi;
    r14d = ecx;
    rcx = main;
    r13d = edx;
    rbx = r9;
    *((rbp - 0x38)) = rdi;
    if (r8d != 0xffffffff) {
        rdx = *(0x00447b50);
        r8 = (int64_t) r8d;
        rax = r8 * 3;
        rax = rdx + rax*8;
        rcx = *(rax);
    }
    r9 = r15;
    r8d = 0x40;
    edx = 0;
    r9 >>= 0x20;
    rax = uint64_t (*0x0041b0c8)(uint64_t, uint64_t, uint64_t) (r15, 0, main);
    r12 = rax;
    if (rax == 0) {
        goto label_2;
    }
    eax = fcn_00410600 (r13d, r14d);
    r9d = ebx;
    rbx >>= 0x20;
    edx = eax;
    r8 = rbx;
    rcx = r12;
    rax = uint64_t (*0x0041b1c8)(uint64_t, uint64_t*, uint64_t) (r15, *((rbp - 0x38)), main);
    if (rax == 0) {
        goto label_3;
    }
    do {
label_0:
        rsp = rbp - 0x28;
        rdx = r12;
        return rax;
label_2:
        fcn_004162a0 ();
        r12 = main;
    } while (1);
label_3:
    r12 = main;
    fcn_00405ef5 (r12);
    fcn_004162a0 ();
    goto label_0;
    if ((*(0x0041c718) & 4) != 0) {
        goto label_1;
    }
    r8 = (int64_t) r8d;
    fcn_004100ae (rdi);
    rdx = main;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f830 */
#include <stdint.h>
 
uint64_t fcn_0040f830 (int64_t arg1) {
    int64_t var_3ch;
    int64_t var_38h;
    rdi = arg1;
    do {
label_2:
        void (*0x402b21)() ();
        rdx = rdi + rsi - 1;
        rdi >>= 0x10;
        ecx = 0x40fd50;
        esi = edi;
        rdx >>= 0x10;
        edi = 0x446ee0;
        r15d = *(rdi);
        *((rbp - 0x38)) = rcx;
        if (r15d == 0) {
            goto label_6;
        }
        r12 = rdi;
        r14d = esi;
        ebx = edx;
        eax = fcn_0040f8b0 (rdi, rsi);
        r13d = eax;
        if (r15d == eax) {
            goto label_6;
        }
        if (eax != 0) {
            goto label_8;
        }
        ecx = *((r12 + 8));
        if (ecx > ebx) {
            goto label_6;
        }
label_0:
        *((rbp - 0x3c)) = ecx;
        eax = fcn_0040f8b0 (r12, ebx);
        ecx = *((rbp - 0x3c));
        if (r15d != eax) {
            edx = eax;
            if (r13d >= eax) {
                goto label_9;
            }
            rsi = rdx * 3;
            if (*((r12 + rsi*8 + 8)) <= ebx) {
                goto label_9;
            }
        }
        edx = rax - 1;
        rax = rdx;
label_9:
        rdx *= 3;
        rdi = r12 + rdx*8;
        esi = *((rdi + 0xc));
        if (eax != r13d) {
            goto label_10;
        }
        if (r14d > ecx) {
            goto label_11;
        }
label_1:
        if (ebx < *((rdi + 8))) {
            goto label_12;
        }
        if (esi <= ebx) {
            goto label_12;
        }
    } while ((*(0x0041c718) & 4) != 0);
label_4:
    ebx++;
    eax--;
    *((rdi + 8)) = ebx;
label_3:
    if (eax >= r13d) {
        goto label_13;
    }
    do {
label_6:
        eax = 0;
label_7:
        return rax;
label_8:
        rax *= 3;
        ecx = *((r12 + rax*8 + 8));
    } while (ecx > ebx);
    goto label_0;
label_12:
    if ((*(0x0041c718) & 4) != 0) {
        rbx = *((rbp - 0x38));
        if (rbx == 0) {
            goto label_13;
        }
        *((rbp - 0x38)) = eax;
        edx = eax;
        esi = r13d;
        rdi = r12;
        void (*rbx)() ();
        eax = *((rbp - 0x38));
    }
label_13:
    edx -= r13d;
    eax = fcn_0040f960 (r12, r13d, rax + 1);
    eax = 0;
    return rax;
label_10:
    if (r14d <= ecx) {
        goto label_1;
    }
    edx = r13d;
    rcx = rdx * 3;
    if (r14d > *((r12 + rcx*8 + 0xc))) {
        goto label_1;
    }
label_5:
    if ((*(0x0041c718) & 4) != 0) {
        goto label_2;
    }
    rdx *= 3;
    r14d--;
    r13d++;
    *((r12 + rdx*8 + 0xc)) = r14d;
    if (*((rdi + 8)) > ebx) {
        goto label_3;
    }
    if (*((rdi + 0xc)) <= ebx) {
        goto label_3;
    }
    goto label_4;
label_11:
    edx = r13d;
    rcx = rdx * 3;
    ecx = *((r12 + rcx*8 + 0xc));
    if (ecx > ebx) {
        goto label_14;
    }
    if (ecx < r14d) {
        goto label_1;
    }
    goto label_5;
label_14:
    if (r15d != 0x80) {
        r13 = (int64_t) r13d;
        rdx = r12 + 8;
        r14d--;
        ebx++;
        rax = r13 * 3;
        rax <<= 3;
        rax = (int64_t) r15d;
        rax -= r13;
        rax = r13 * 3;
        rax = r12 + rax*8;
        rdx <<= 3;
        fcn_004155fc (rdx + rax, rdx + rax - 0x18, rax + rax*2);
        *(r12)++;
        *((rax + 0xc)) = r14d;
        *((rax + 0x20)) = ebx;
        goto label_6;
    }
    fcn_00402b8a ();
    goto label_7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40fbb0 */
#include <stdint.h>
 
uint64_t fcn_0040fbb0 (int64_t arg6, int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_34h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15d = edx;
    r14 = rcx;
    r13d = r8d;
    r12 = rdi;
    ebx = esi;
    *((rbp - 0x34)) = r9d;
    eax = fcn_0040f8b0 (rdi, rsi);
    rdx = *(r12);
    if (eax != 0) {
        ecx = rax - 1;
        rcx *= 3;
        rsi = r12 + rcx*8;
        edi = *((rsi + 0xc));
        ecx = rdi + 1;
        if (ecx == ebx) {
            goto label_3;
        }
    }
label_2:
    while (esi != *((rcx + 8))) {
label_0:
        if (edx == 0x80) {
            goto label_4;
        }
        r8 = (int64_t) eax;
        rsi = r12 + 8;
        rcx = r8 * 3;
        rdx -= r8;
        rax *= 3;
        r8d = 0;
        rax = r12 + rax*8;
        rcx <<= 3;
        rdx <<= 3;
        fcn_004155fc (rsi + rcx, rsi + rcx - 0x18, rdx + rdx*2);
        *(r12)++;
        *((rax + 8)) = ebx;
        ebx = *((rbp - 0x34));
        *((rax + 0xc)) = r15d;
        *((rax + 0x10)) = r14;
        *((rax + 0x18)) = r13d;
        *((rax + 0x1c)) = ebx;
label_1:
        eax = r8d;
        return rax;
        ecx = eax;
        esi = r15 + 1;
        rcx *= 3;
        rcx = r12 + rcx*8;
    }
    if (*((rcx + 0x10)) != r14) {
        goto label_0;
    }
    if (*((rcx + 0x18)) != r13d) {
        goto label_0;
    }
    edi = *((rbp - 0x34));
    if (*((rcx + 0x1c)) != edi) {
        goto label_0;
    }
    *((rcx + 8)) = ebx;
    r8d = 0;
    goto label_1;
label_4:
    eax = fcn_00402b8a ();
    r8d = eax;
    goto label_1;
label_3:
    if (*((rsi + 0x10)) != r14) {
        goto label_2;
    }
    if (*((rsi + 0x18)) != r13d) {
        goto label_2;
    }
    edi = *((rbp - 0x34));
    if (*((rsi + 0x1c)) != edi) {
        goto label_2;
    }
    *((rsi + 0xc)) = r15d;
    r8d = 0;
    if (eax >= edx) {
        goto label_1;
    }
    edx = eax;
    r15d++;
    rcx = rdx * 3;
    rcx = r12 + rcx*8;
    if (r15d != *((rcx + 8))) {
        goto label_1;
    }
    if (*((rcx + 0x10)) != r14) {
        goto label_1;
    }
    rdx *= 0x18;
    rdx += r12;
    if (*((rdx + 0x18)) != r13d) {
        goto label_1;
    }
    if (*((rdx + 0x1c)) != edi) {
        goto label_1;
    }
    edx = *((rcx + 0xc));
    *((rsi + 0xc)) = edx;
    fcn_0040f960 (r12, eax, 1);
    r8d = 0;
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4100ae */
#include <stdint.h>
 
void fcn_004100ae (int64_t arg6) {
    r9 = arg6;
    fcn_00412300 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412300 */
#include <stdint.h>
 
int64_t fcn_00412300 (void) {
    rax = 0xc501dd20c50009;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x40f960 */
#include <stdint.h>
 
int64_t fcn_0040f960 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rdx = (int64_t) edx;
    rsi = (int64_t) esi;
    rcx = rdi + 8;
    rax = rdi;
    r8 = rdx;
    rdx += rsi;
    rsi *= 3;
    rdi = rcx + rsi*8;
    rsi = rdx * 3;
    rsi = rcx + rsi*8;
    rcx = *(rax);
    rcx -= rdx;
    rdx = rcx * 3;
    rdx <<= 3;
    rax = fcn_004154c0 (rdi);
    *(rax) -= r8d;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4155fc */
#include <stdint.h>
 
void fcn_004155fc (int64_t arg3, int64_t arg2, uint32_t arg1) {
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
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410010 */
#include <stdint.h>
 
int64_t fcn_00410010 (char ** argv, int64_t arg1) {
    rsi = argv;
    rdi = arg1;
    edx = (int32_t) dx;
    ecx = *((rdi + 0x3a));
    r12 = *((rdi + 0x28));
    rdx *= rcx;
    r12 += rdi;
    r12 += rdx;
    fcn_00410090 (rdi, rsi, r12, rcx);
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410090 */
#include <stdint.h>
 
void fcn_00410090 (int64_t arg4, int64_t arg3, int64_t arg2, signed int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    do {
label_0:
        fcn_00401114 ();
    } while (rdi > rdx);
    rdx += rcx;
    rdi += rsi;
    if (rdx > rdi) {
        goto label_0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410050 */
#include <stdint.h>
 
int64_t fcn_00410050 (int64_t arg3, char ** argv, int64_t arg1) {
    rdx = arg3;
    rsi = argv;
    rdi = arg1;
    ecx = *((rdi + 0x36));
    r12 = *((rdi + 0x20));
    rdx *= rcx;
    r12 += rdi;
    r12 += rdx;
    fcn_00410090 (rdi, rsi, r12, rcx);
    rax = r12;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x404ed0 */
#include <stdint.h>
 
int64_t fcn_00404ed0 (int64_t arg1) {
    int64_t var_10h;
    rdi = arg1;
    rdi = (int64_t) edi;
    rax = *(0x00447b50);
    rbx = rdi * 3;
    rbx <<= 3;
    rax += rbx;
    rdi = *(rax);
    if (*((rax + 0x10)) == 1) {
        rcx = rdi;
        uint64_t (*0x0041b100)() ();
        rax = *(0x00447b50);
    }
    eax = fcn_00405ef5 (*((rax + rbx)));
    rbx += *(0x00447b50);
    r12d = eax;
    while (1) {
        eax = 0;
        if (r12d != 0) {
            rsp = rbp - 0x10;
            return rax;
        }
        fcn_004162a0 ();
        rsp = rbp - 0x10;
        return rax;
        eax = fcn_00405ef5 (*((rbx + 8)));
        r12d &= eax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410c20 */
#include <stdint.h>
 
uint32_t fcn_00410c20 (char ** envp, int64_t arg1) {
    int64_t var_e0h;
    int64_t var_c8h;
    rdx = envp;
    rdi = arg1;
    eax = fcn_004117e0 (rdi, rbp - 0xe0, rdx);
    r8d = eax;
    eax = 0;
    if (r8d == 0) {
        al = ((*((rbp - 0xc8)) & 0x49) != 0) ? 1 : 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4026e0 */
#include <stdint.h>
 
uint64_t fcn_004026e0 (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = fcn_0041571a (rdi, rsi, rdx);
    rsi = rax;
    rax = rdi;
    if (rsi == 0) {
        goto label_1;
    }
    rcx = rsi - 1;
    r8 = rax + rcx;
    rdi = rcx;
    edx = *(r8);
    if (edx == 0x5c) {
        goto label_2;
    }
    if (edx != 0x2f) {
        goto label_3;
    }
    goto label_2;
    do {
        edx = *((rax + rcx - 1));
        rsi = rcx;
        rcx--;
label_0:
        if (edx == 0x2f) {
            goto label_4;
        }
label_3:
        if (edx == 0x5c) {
            goto label_4;
        }
    } while (rcx != 0);
label_1:
    return rax;
    do {
        edx = *((rax + rdi - 1));
        rcx = rdi - 1;
        if (edx != 0x2f) {
            if (edx != 0x5c) {
                goto label_5;
            }
        }
        rdi = rcx;
label_2:
    } while (rdi != 0);
    rax = r8;
    return rax;
label_4:
    rax += rsi;
    return rax;
label_5:
    rsi = rdi;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410260 */
#include <stdint.h>
 
uint64_t fcn_00410260 (int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg1) {
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rdi = arg1;
    r12 = rdi;
    rax = fcn_00414ab0 (rdi + rsi, rdx, rdx, rcx, r8);
    rax -= r12;
    rbx = rax;
    al = fcn_00410c20 (r12, rsi);
    rax = main;
    if (al == 0) {
        rbx = rax;
    }
    eax = ebx;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4102a0 */
#include <stdint.h>
 
uint64_t fcn_004102a0 (int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r8 = rdx;
    r14 = rcx;
    r13 = rdi;
    rax = fcn_0041571a (rsi, rsi, rdx);
    rdx = r14 + rax + 7;
    if (rdx > 0xf8) {
        goto label_4;
    }
    rdx = rax;
    rax = fcn_004154c0 (r13);
    rdi = r13 + rax;
    while (*((r13 + rax - 1)) == 0x2f) {
label_0:
        rsi = r8;
        rdx = r14;
        r12 = rdi + r14;
        fcn_004154c0 (rdi);
        r12 -= r13;
        rax = fcn_004026e0 (r8, rsi, rdx);
        rax = fcn_00415783 (rax, 0x2e, r14, rcx, r8);
        if (rax != 0) {
label_1:
            edx = 0x418757;
label_2:
            rsi = r12;
            rdi = r13;
            void (*0x410260)() ();
        }
        eax = fcn_00410260 (r13, r12, 0x418fe0, rcx);
        if (eax == 0xffffffff) {
            goto label_5;
        }
label_3:
        return rax;
    }
    *(rdi) = 0x2f;
    rdi++;
    goto label_0;
label_5:
    edx = 0x4187c3;
    if ((*(0x0041c718) & 4) == 0) {
        goto label_1;
    }
    goto label_2;
label_4:
    eax = 0xffffffff;
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414c50 */
#include <stdint.h>
 
int64_t fcn_00414c50 (uint32_t arg2, int64_t arg1, int64_t arg9, int64_t arg10, int64_t arg11) {
    rsi = arg2;
    rdi = arg1;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    r9d = *(rsi);
    if (r9b == 0) {
        goto label_1;
    }
    if (*((rsi + 1)) == 0) {
        goto label_2;
    }
    ecx = *(rdi);
    if (cl == 0) {
        goto label_1;
    }
    r8 = rdi;
label_0:
    eax = r9d;
    edx = 0;
    do {
        if (cl == al) {
            goto label_3;
        }
        eax = rdx + 1;
        rdx = rax;
        eax = *((rsi + rax));
    } while (al != 0);
    ecx = *((r8 + 1));
    r8++;
    if (cl != 0) {
        goto label_0;
    }
label_1:
    r8d = 0;
label_3:
    rax = r8;
    return rax;
label_2:
    esi = (int32_t) r9b;
    return void (*0x41576b)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4148f0 */
#include <stdint.h>
 
uint64_t fcn_004148f0 (int64_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r13 = rcx;
    r12 = rsi;
    rbx = rdi;
    rax = fcn_00415783 (r12, edx, rcx, rcx, r8);
    if (rax != 0) {
        rax -= r12;
        rsi = r12;
        rdx = rax + 1;
        fcn_004154c0 (rbx);
        rax = rbx + rdx;
        return rax;
    }
    rsi = r12;
    rdx = r13;
    fcn_004154c0 (rbx);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414cb0 */
#include <stdint.h>
 
int64_t fcn_00414cb0 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    r12 = *(rdi);
    if (r12 == 0) {
        goto label_0;
    }
    rbx = rdi;
    fcn_00414ba0 (r12, rsi);
    edx = 0;
    rcx = r12 + rax;
    while (1) {
        *(rbx) = rdx;
label_0:
        rax = r12;
        return rax;
        *(rcx) = 0;
        rdx = r12 + rax + 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x402b75 */
#include <stdint.h>
 
int32_t fcn_00402b75 (void) {
    eax = *(0x00440860);
    *(0x00448020) = eax;
    rax = main;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414cf0 */
#include <stdint.h>
 
uint64_t fcn_00414cf0 (uint32_t arg2, uint32_t arg1, int64_t arg9, int64_t arg10, int64_t arg11) {
    rsi = arg2;
    rdi = arg1;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    eax = *(rsi);
    if (al == 0) {
        goto label_1;
    }
    if (*((rsi + 1)) == 0) {
        goto label_2;
    }
label_0:
    r8d = eax;
    edx = 0;
    while (cl != 0) {
        if (cl != r8b) {
            goto label_3;
        }
        rdx++;
        r8d = *((rsi + rdx));
        if (r8b == 0) {
            goto label_1;
        }
        ecx = *((rdi + rdx));
    }
label_3:
    rdi++;
    if (*((rdi - 1)) != 0) {
        goto label_0;
    }
    eax = 0;
    return eax;
label_1:
    rax = rdi;
    return rax;
label_2:
    esi = (int32_t) al;
    return void (*0x41576b)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412450 */
#include <stdint.h>
 
uint64_t fcn_00412450 (void) {
    rax = fcn_004142f0 (rdi, 0, 0xa);
    rcx = 0xffffffff7fffffff;
    rcx = main;
    rcx -= rdx;
    if (rcx < 0) {
        ecx = 0x80000000;
        edx = 0x7fffffff;
        if (rdx >= 0) {
            eax = edx;
        }
        return rax;
    }
    eax = 0x80000000;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411490 */
#include <stdint.h>
 
uint64_t fcn_00411490 (void) {
label_0:
    eax = uint64_t (*0x0041c0a8)() ();
    if (eax != 0xc0000135) {
        eax = 0;
        return eax;
    }
    eax = 0x10;
    do {
        __asm ("pause");
        rax--;
    } while (rax != 0);
    eax = 0;
    return rax;
    if ((*(0x0041c718) & 4) == 0) {
    } else {
        goto label_0;
    }
    rax = 0x12a014b103c0018;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411d70 */
#include <stdint.h>
 
void fcn_00411d70 (void) {
    int64_t var_10h;
    rsi = rbp - 0x10;
    fcn_00412010 (rdi);
    *(fp_stack--) = *((rbp - 8));
    fp_stack[0] *= *(0x004188d8);
    *(fp_stack--) = *((rbp - 0x10));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412010 */
#include <stdint.h>
 
uint64_t fcn_00412010 (int64_t arg2) {
    int64_t var_18h;
    rsi = arg2;
    r12 = rsi;
    eax = *(0x0041c718);
    if ((al & 4) == 0) {
        if ((al & 8) == 0) {
            if (rsi != 0) {
                *(rsi) = 0;
                *((rsi + 8)) = 0;
            }
            rsi = r12;
            fcn_00412320 ();
            return eax;
        }
        if (rsi == 0) {
            goto label_0;
        }
        *(rsi) = 0;
        *((rsi + 8)) = 0;
        esi = 0;
        fcn_00412114 (r12);
        rdx = *((r12 + 8)) * 0x3e8;
        *((r12 + 8)) = rdx;
        return eax;
    }
    fcn_00405fc1 (rbp - 0x18);
    rax = fcn_004124a0 (*((rbp - 0x18)), rsi);
    *(r12) = rax;
    eax = 0;
    *((r12 + 8)) = rdx;
    return rax;
label_0:
    esi = 0;
    fcn_00412114 (0);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412320 */
#include <stdint.h>
 
int64_t fcn_00412320 (void) {
    rax = 0x5700e8ffff00e4;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412114 */
#include <stdint.h>
 
uint64_t fcn_00412114 (int64_t arg2) {
    rsi = arg2;
    if (rsi != 0) {
        rsi = 0;
    }
    esi = 0;
    edx = 0;
    rax = fcn_004122f0 ();
    if ((*(0x0041c718) & 8) != 0) {
        if (rdi == 0) {
            goto label_0;
        }
        if (rax == 0) {
            goto label_0;
        }
        *(rdi) = rax;
        *((rdi + 8)) = rdx;
    }
label_0:
    eax = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x405fc1 */
#include <stdint.h>
 
void fcn_00405fc1 (int64_t arg1) {
    rdi = arg1;
    rcx = rdi;
    uint64_t (*0x0041b1b8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x411ea0 */
#include <stdint.h>
 
uint64_t fcn_00411ea0 (int64_t arg2, int64_t arg1, int64_t arg8) {
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    rsi = arg2;
    rdi = arg1;
    xmm1 = arg8;
label_1:
    r12 = rdi;
    rbx = rsi;
    if (rsi != 0) {
        __asm ("movdqu xmm1, xmmword [rdi]");
        __asm ("movups xmmword [rsi], xmm1");
    }
    r13d = 1;
    rax = fcn_0041548b (*((r12 + 8)), rsi);
    rdx = rbp - 0x28;
    ecx = 1;
    r8 = rax;
    rax = *(r12) * 0x989680;
    rax += r8;
    if (rax <= 0) {
        rax = r13;
    }
    r12 = rax;
    rax = -rax;
    *((rbp - 0x28)) = rax;
    eax = uint64_t (*main)() ();
    eax >>= 0x1e;
    while (eax != 0xc0) {
        eax = 0;
        if (rbx != 0) {
            xmm0 = 0;
            __asm ("movups xmmword [rbx], xmm0");
        }
label_0:
        rsp = rbp - 0x18;
        return rax;
        rdi = r12;
        rax = fcn_00415469 ();
        rdi = r13;
        esi = 1;
        if (rax > 0) {
            rdi = rax;
        }
        eax = fcn_00405fe4 (rdi, rsi, rdx, rcx);
    }
    fcn_00402b0c ();
    goto label_0;
    if (rdi != 0) {
        eax = *(0x0041c718);
        if ((al & 4) == 0) {
            if ((al & 8) == 0) {
                goto label_2;
            }
        } else {
            fcn_00402af7 ();
            return rax;
        }
        goto label_1;
    }
    rbx = rdi;
    rax = fcn_0041547a (*((rdi + 8)), rsi);
    rdx = *(rbx);
    r8 = rbp - 0x20;
    *((rbp - 0x20)) = rdx;
    edx = 1;
    if (rax <= 0) {
        rax = rdx;
    }
    ecx = 0;
    edx = 0;
    esi = 0;
    edi = 0;
    *((rbp - 0x18)) = rax;
    fcn_00412400 ();
    return rax;
label_2:
    rax = 0x5b00f0ffff0023;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x41547a */
#include <stdint.h>
 
void fcn_0041547a (char ** argv, int64_t arg1) {
    rsi = argv;
    rdi = arg1;
    cl = 7;
    rdx = 0x20c49ba5e353f7cf;
    return void (*0x415898)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412400 */
#include <stdint.h>
 
int64_t fcn_00412400 (void) {
    rax = 0x47005d205d0017;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x410c80 */
#include <stdint.h>
 
uint64_t fcn_00410c80 (void) {
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_28h;
    *(fp_stack--) = 1.0;
    ebx = 1;
    r12 = *(0x00440798);
    do {
        ? = fp_stack[0];
        fp_stack--;
        fcn_00411490 ();
        edi = r12d;
        rax = fcn_00411d70 ();
        ? = fp_stack[0];
        fp_stack--;
        __asm ("rdtsc");
        rdx <<= 0x20;
        *((rbp - 0x30)) = 0;
        rdx |= rax;
        *((rbp - 0x28)) = main;
        r13 = rdx;
        fcn_00411ea0 (rbp - 0x30, 0, rdx);
        edi = r12d;
        rax = fcn_00411d70 ();
        __asm ("rdtsc");
        *(fp_stack--) = fp_stack[?];
        rdx <<= 0x20;
        rax |= rdx;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] *= *(0x004188cc);
        *(fp_stack--) = fp_stack[?];
        if (r13 != rax) {
            rax -= r13;
            *((rbp - 0x40)) = rax;
            *(fp_stack--) = *((rbp - 0x40));
            if (rax < 0) {
                goto label_1;
            }
label_0:
            fp_stack[0] /= fp_stack[2];
            fp_stack++;
        }
        fp_stack[1] -= fp_stack[0];
        *((rbp - 0x40)) = ebx;
        *(fp_stack--) = *((rbp - 0x40));
        ebx++;
        fp_stack[0] /= fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
    } while (ebx != 5);
    ? = fp_stack[0];
    fp_stack--;
    edi = *(0x004407a0);
    rax = fcn_00411d70 ();
    ? = fp_stack[0];
    fp_stack--;
    __asm ("rdtsc");
    rdx <<= 0x20;
    *(0x00447d20) = 1;
    rdx |= rax;
    *(0x00447d28) = rdx;
    return rax;
label_1:
    fp_stack[0] += *(0x004188d0);
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412420 */
#include <stdint.h>
 
int64_t fcn_00412420 (void) {
    rax = 0x2e01a0202e000d;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4122f0 */
#include <stdint.h>
 
int64_t fcn_004122f0 (void) {
    rax = 0x43007420740060;
    uint64_t (*0x0041c720)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4147b4 */
#include <stdint.h>
 
int32_t fcn_004147b4 (void) {
    *(fp_stack--) = fp_stack[?];
    __asm ("fxtract");
    fp_stack++;
    *(rsp) = fp_stack[0];
    fp_stack--;
    eax = *(rsp);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x413b40 */
#include <stdint.h>
 
uint32_t fcn_00413b40 (uint32_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    if (rdx == 0) {
        goto label_0;
    }
    r14 = rdi;
    r15 = rsi;
    r13 = rdx;
    r12d = 0;
    ebx = 0;
    do {
        rsi = r15;
        edi = 0x20;
        ebx++;
        eax = void (*r14)() ();
        r12d |= eax;
    } while (r13d != ebx);
    do {
        eax = r12d;
        return eax;
label_0:
        r12d = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414795 */
#include <stdint.h>
 
void fcn_00414795 (char ** envp, char ** argv, int32_t argc) {
    rdx = envp;
    rsi = argv;
    rdi = argc;
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = log_2(10);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] = round(fp_stack[0]);
    fp_stack[1] -= fp_stack[0];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] = pow(2, fp_stack[0]) - 1.0;
    *(fp_stack--) = 1.0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    __asm ("fscale");
    fp_stack[1] = fp_stack[0];
    fp_stack--;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x414650 */
#include <stdint.h>
 
int64_t fcn_00414650 (int64_t arg5, uint32_t arg4, uint32_t arg3, int64_t arg2, uint32_t arg1, int64_t arg7) {
    int64_t var_20h;
    int64_t var_18h;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    xmm0 = arg7;
    rax = rsi;
    r9 = rsi;
    r10 = rdi;
    rax -= rcx;
    r11 = rsi;
    if (rax < 0) {
        goto label_0;
    }
    rsi = rdx;
    rdi = rcx;
    if (rcx == 0) {
        goto label_1;
    }
    __asm ("bsr rcx, rcx");
    __asm ("bsr r9, r9");
    rcx ^= 0x3f;
    r9 ^= 0x3f;
    ecx -= r9d;
    __asm ("shld rdi, rdx, cl");
    rsi <<= cl;
    edx = 0;
    if ((cl & 0x40) != 0) {
        rdi = rsi;
    }
    if ((cl & 0x40) != 0) {
        rsi = rdx;
    }
    eax = 0;
    if (ecx < 0) {
        goto label_2;
    }
    r9d = 0;
    do {
        rax = rsi;
        rdx = rdi;
        rax += main;
        rdx += main;
        rdx -= r11;
        r9 += r9;
        rdx >>= 0x3f;
        rax = rdx;
        eax &= 1;
        r9 |= rax;
        rax = rdx;
        rdx &= rdi;
        rax &= rsi;
        r10 -= rax;
        r11 -= rdx;
        ecx--;
        __asm ("shrd rsi, rdi, 1");
        rdi >>= 1;
    } while (ecx != 0xffffffff);
    rax = r9;
label_2:
    if (r8 != 0) {
        *(r8) = r10;
        *((r8 + 8)) = r11;
    }
    edx = 0;
    return rax;
label_1:
    *((rbp - 0x18)) = 0;
    if (rdx > r9) {
        goto label_3;
    }
    rax = r9;
    edx = 0;
    rax = rdx:rax / rsi;
    rdx = rdx:rax % rsi;
    r9 = rax;
    rax = r10;
    rax = rdx:rax / rsi;
    rdx = rdx:rax % rsi;
    *((rbp - 0x20)) = rdx;
    do {
        if (r8 != 0) {
            __asm ("movdqa xmm0, xmmword [rbp - 0x20]");
            *(r8) = xmm0;
        }
        rdx = r9;
        return rax;
label_0:
        if (r8 == 0) {
            goto label_4;
        }
        *(r8) = rdi;
        eax = 0;
        edx = 0;
        *((r8 + 8)) = rsi;
        return rax;
label_3:
        rdx = r9;
        rax = r10;
        r9d = 0;
        rax = rdx:rax / rsi;
        rdx = rdx:rax % rsi;
        *((rbp - 0x20)) = rdx;
    } while (1);
label_4:
    eax = 0;
    edx = 0;
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x412c10 */
#include <stdint.h>
 
int64_t fcn_00412c10 (uint32_t arg_10h, uint32_t arg_18h, int64_t arg_20h, int64_t arg_28h, int64_t arg_2ch, int64_t arg_30h, int64_t arg_78h, int64_t arg6, uint32_t arg5, int64_t arg4, int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_e8h;
    int64_t var_e0h;
    uint32_t var_d8h;
    uint32_t var_d4h;
    int64_t var_d0h;
    int64_t var_c0h;
    r9 = arg6;
    r8 = arg5;
    rcx = arg4;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    rax = rdx;
    rdx = rcx;
    r13 = rsi;
    r12 = rdi;
    rbx = rcx;
    rbx |= rax;
    r15 = *((rbp + 0x28));
    *((rbp - 0xd8)) = r8d;
    if (rbx == 0) {
        ecx = *((rbp + 0x20));
        ecx &= 0xffffffef;
        *((rbp + 0x20)) = ecx;
        if ((*((rbp + 0x20)) & 0x20) != 0) {
            goto label_14;
        }
    }
    r11d = *((rbp + 0x20));
    esi = 0xffffffff;
    ecx = r9d;
    ebx = 0;
    esi <<= cl;
    *((rbp - 0xe0)) = r12;
    r14d = 0;
    r10 = rax;
    r11b >>= 7;
    esi = ~esi;
    *((rbp - 0xe8)) = r13;
    r13d = r9d;
    r12d = r11d;
    *((rbp - 0xd4)) = esi;
    r11 = rdx;
    while (r13d != 0) {
        ecx = r13d;
        esi = r10d;
        r8d = 0;
        esi &= *((rbp - 0xd4));
        __asm ("shrd r10, r11, cl");
        r11 >>= cl;
        ecx &= 0x40;
        if (ecx != 0) {
            r10 = r11;
        }
        if (ecx != 0) {
            r11 = r8;
        }
label_0:
        ecx = r14 + 1;
        if (ebx == 3) {
            if (r12b != 0) {
                goto label_15;
            }
        }
        edi = ecx;
        ebx++;
        ecx = r14d;
        r14d = edi;
label_1:
        esi = *((r15 + rsi));
        rax = r11;
        rax |= r10;
        *((rbp + rcx - 0xc0)) = sil;
        if (rax == 0) {
            goto label_16;
        }
    }
    rax = fcn_00414650 (r10, r11, 0xa, 0, rbp - 0xd0, r9);
    esi = *((rbp - 0xd0));
    r10 = rax;
    r11 = rdx;
    goto label_0;
label_15:
    edi = r14d;
    ebx = 1;
    r14d += 2;
    *((rbp + rdi - 0xc0)) = 0x2c;
    goto label_1;
label_16:
    r9d = r13d;
    r12 = *((rbp - 0xe0));
    r13 = *((rbp - 0xe8));
label_8:
    ecx = *((rbp + 0x20));
    eax = ecx;
    eax &= 2;
    *((rbp - 0xd4)) = al;
    if (eax != 0) {
        goto label_12;
    }
    edx = ecx;
    edi = *((rbp + 0x18));
    edx &= 1;
    sil = (r14d <= 0x8f) ? 1 : 0;
    al = (r14d < *((rbp + 0x10))) ? 1 : 0;
    eax &= esi;
    if (edi != 0) {
        goto label_17;
    }
    if (al == 0) {
        goto label_18;
    }
label_6:
    eax = r14d;
    esi = *((rbp + 0x10));
    rax = rbp + rax - 0xc0;
    do {
        r14d++;
        *(rax) = 0x30;
        rax++;
        if (esi <= r14d) {
            goto label_18;
        }
    } while (r14d <= 0x8f);
label_18:
    if (dl == 0) {
        goto label_12;
    }
    sil = (r14d <= 0x8f) ? 1 : 0;
label_7:
    if (r14d >= *((rbp + 0x18))) {
        goto label_12;
    }
    if (sil == 0) {
        goto label_12;
    }
    eax = r14d;
    edx = *((rbp + 0x18));
    rax = rbp + rax - 0xc0;
    while (r14d < edx) {
        if (r14d > 0x8f) {
            goto label_12;
        }
        r14d++;
        *(rax) = 0x30;
        rax++;
    }
label_12:
    if ((cl & 0x10) != 0) {
        al = (r9d == 4) ? 1 : 0;
        if ((cl & 0x20) == 0) {
            goto label_19;
        }
label_9:
        dl = (r14d <= 0x8f) ? 1 : 0;
        eax &= edx;
label_10:
        if (al == 0) {
            goto label_20;
        }
        eax = r14d;
        r14d++;
        *((rbp + rax - 0xc0)) = 0x78;
label_11:
        if (r14d > 0x8f) {
            goto label_4;
        }
        eax = r14d;
        r14d++;
        *((rbp + rax - 0xc0)) = 0x30;
    }
    if (r14d <= 0x8f) {
        if (*((rbp - 0xd8)) == 0) {
            goto label_21;
        }
        eax = r14d;
        r14d++;
        *((rbp + rax - 0xc0)) = 0x2d;
label_5:
        ecx &= 3;
        if (ecx != 0) {
            goto label_22;
        }
        if (*((rbp + 0x18)) <= r14d) {
            goto label_22;
        }
        edx -= r14d;
        eax = fcn_00413b40 (r12, r13, *((rbp + 0x18)));
        if (eax != 0xffffffff) {
            goto label_22;
        }
label_2:
        eax = 0xffffffff;
label_3:
        return rax;
    }
label_4:
    ecx &= 3;
    if (ecx == 0) {
        if (*((rbp + 0x18)) > r14d) {
            goto label_23;
        }
    }
label_13:
    if (r14d == 0) {
        goto label_24;
    }
label_22:
    ebx = r14 - 1;
    r15d = 0;
    while (eax != 0xffffffff) {
        r15d++;
        if (r15d >= r14d) {
            goto label_25;
        }
        eax = ebx;
        rsi = r13;
        eax -= r15d;
        rdi = *((rbp + rax - 0xc0));
        eax = void (*r12)() ();
    }
    goto label_2;
label_24:
    r15d = 0;
label_25:
    if (*((rbp - 0xd4)) != 0) {
        if (*((rbp + 0x18)) > r15d) {
            goto label_26;
        }
    }
    eax = 0;
    goto label_3;
label_21:
    if ((cl & 4) != 0) {
        goto label_27;
    }
    if ((cl & 8) == 0) {
        goto label_4;
    }
    eax = r14d;
    r14d++;
    *((rbp + rax - 0xc0)) = 0x20;
    goto label_5;
label_17:
    if (dl == 0) {
        goto label_28;
    }
    if (*((rbp - 0xd8)) == 0) {
        if ((cl & 0xc) == 0) {
            goto label_29;
        }
    }
    *((rbp + 0x18))--;
label_29:
    if (al != 0) {
        goto label_6;
    }
    goto label_7;
label_14:
    r14d = 0;
    goto label_8;
label_19:
    if (r14d == 0) {
        goto label_30;
    }
    dl = (*((rbp + 0x10)) == r14d) ? 1 : 0;
    sil = (r14d == *((rbp + 0x18))) ? 1 : 0;
    dl |= sil;
    if (dl == 0) {
        goto label_9;
    }
    edi = r14 - 1;
    rsi = rdi;
    if (*((rbp + rdi - 0xc0)) != 0x30) {
        goto label_9;
    }
    if (edi == 0) {
        goto label_31;
    }
    dl = (r9d == 1) ? 1 : 0;
    dl |= al;
    if (dl == 0) {
        goto label_32;
    }
    edi = r14 - 2;
    r14 = rdi;
    if (*((rbp + rdi - 0xc0)) == 0x30) {
        goto label_10;
    }
    r14d = esi;
    dl = (esi <= 0x8f) ? 1 : 0;
    eax &= edx;
    goto label_10;
label_20:
    if (r9d != 1) {
        goto label_11;
    }
    if (dl == 0) {
        goto label_11;
    }
    eax = r14d;
    r14d++;
    *((rbp + rax - 0xc0)) = 0x62;
    goto label_11;
label_30:
    edx = 1;
    goto label_10;
label_28:
    if (al != 0) {
        goto label_6;
    }
    goto label_12;
label_27:
    eax = r14d;
    r14d++;
    *((rbp + rax - 0xc0)) = 0x2b;
    goto label_5;
label_23:
    edx -= r14d;
    eax = fcn_00413b40 (r12, r13, *((rbp + 0x18)));
    if (eax != 0xffffffff) {
        goto label_13;
    }
    goto label_2;
label_26:
    edx -= r15d;
    eax = fcn_00413b40 (r12, r13, *((rbp + 0x18)));
    al = (eax == 0xffffffff) ? 1 : 0;
    eax = (int32_t) al;
    eax = -eax;
    goto label_3;
label_31:
    r14d = 0;
    goto label_10;
label_32:
    r14d = edi;
    goto label_11;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x415409 */
#include <stdint.h>
 
int32_t fcn_00415409 (void) {
    edi = (int32_t) dil;
    ecx = rdi - 7;
    if (cl > 0x55) {
        void (*0x415442)() ();
    }
    eax = 0x5c;
    ecx = (int32_t) cl;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4157a4 */
#include <stdint.h>
 
void fcn_004157a4 (int64_t arg2, int64_t arg1, int64_t arg9, int64_t arg10, int64_t arg11) {
    rsi = arg2;
    rdi = arg1;
    xmm2 = arg9;
    xmm3 = arg10;
    xmm4 = arg11;
    r10 |= main;
    edx = 0;
    r8 = rdi;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4158c8 */
#include <stdint.h>
 
int32_t fcn_004158c8 (uint32_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    do {
        if (eax >= esi) {
            goto label_0;
        }
        if (*((rdi + rax*4)) == 0) {
            goto label_0;
        }
        eax++;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4158b1 */
#include <stdint.h>
 
int32_t fcn_004158b1 (uint32_t arg2, uint32_t arg1) {
    rsi = arg2;
    rdi = arg1;
    eax = 0;
    do {
        if (eax >= esi) {
            goto label_0;
        }
        if (*((rdi + rax*2)) == 0) {
            goto label_0;
        }
        eax++;
    } while (1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x4153f4 */
#include <stdint.h>
 
int32_t fcn_004153f4 (void) {
    __asm ("bsr rax, rsi");
    if (? != ?) {
        goto label_0;
    }
    __asm ("bsr rax, rdi");
    do {
        return;
label_0:
        eax += 0x40;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/cosmopolitan_and_ape/apelife/x64_macho_after_exec_on_mac/subject.exe @ 0x416220 */
#include <stdint.h>
 
int32_t fcn_00416220 (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    edx = edi;
    eax = esi;
    edx &= 7;
    if (edx == 7) {
        goto label_0;
    }
    edx = edi;
    esi = 4;
    edx &= 3;
    if (edx == 3) {
        goto label_1;
    }
    edx = edi;
    esi = 0x20;
    edx &= 5;
    if (edx == 5) {
        goto label_1;
    }
    esi = edi;
    edx = 0x10;
    esi &= 1;
    esi++;
    esi = edx;
    while ((al & 1) != 0) {
label_1:
        eax |= edi;
        eax &= 0xdd000000;
        eax |= esi;
        return eax;
label_0:
        esi = 0x40;
    }
    rcx = *(0x004408c8);
    rdx = (int64_t) eax;
    rdx &= rcx;
    edx = 0x80;
    if (rcx != rdx) {
        esi = edx;
    }
    eax |= edi;
    eax &= 0xdd000000;
    eax |= esi;
    return eax;
}
