/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x0 */
#include <stdint.h>
 
void entry0 (int16_t arg1) {
    ax = arg1;
    /* [00] -rwx section size 7600 named seg_000 */
    dx = 0x1db;
    *(cs:0x1f8) = dx;
    ah = 0x30;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x162 */
#include <stdint.h>
 
int16_t fcn_00000162 (int16_t arg3) {
    bx = arg3;
    ax = 0x3500;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x74) = bx;
    *(0x76) = es;
    ax = 0x3504;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x78) = bx;
    *(0x7a) = es;
    ax = 0x3505;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x7c) = bx;
    *(0x7e) = es;
    ax = 0x3506;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x80) = bx;
    *(0x82) = es;
    ax = 0x2500;
    dx = cs;
    ds = cs;
    dx = 0x158;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x336 */
#include <stdint.h>
 
int16_t fcn_00000336 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    *(cs:0x332) = ds;
    es = *(0x90);
    si = 0x80;
    ah = 0;
    al = *(es:si);
    es:si++;
    ax++;
    tmp_0 = si;
    si = dx;
    dx = tmp_0;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    si = *(0x8a);
    si += 2;
    cx = 1;
    if (*(0x92) >= 3) {
        es = *(0x8c);
        di = si;
        cl = 0x7f;
        al = 0;
        __asm ("repne scasb al, byte es:[di]");
        __asm ("jcxz 0x3e7");
        cl ^= 0x7f;
    }
    ax = 1;
    ax += bx;
    ax += cx;
    ax &= 0xfffe;
    di = sp;
    di -= ax;
    if (di < 0) {
        goto label_2;
    }
    ax = es;
    ds = es;
    ax = ss;
    es = ss;
    cx--;
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    al = 0;
    *(es:di) = al;
    es:di++;
    ds = bp;
    tmp_2 = dx;
    dx = si;
    si = tmp_2;
    tmp_3 = cx;
    cx = bx;
    bx = tmp_3;
    ax = bx;
    dx = bx;
    bx++;
label_0:
    fcn_000003bf ();
    if (bx > 0) {
        goto label_3;
    }
    do {
        if (bx < 0) {
            goto label_4;
        }
        al = fcn_000003bf ();
    } while (bx > 0);
label_3:
    if (al == 0x20) {
        goto label_5;
    }
    if (al == 0xd) {
        goto label_5;
    }
    if (al != 9) {
        goto label_0;
    }
label_5:
    al = 0;
    goto label_0;
    do {
label_2:
        void (*0x1e2)() ();
label_4:
        cx += dx;
        ds = *(cs:);
        *(0x84) = bx;
        bx++;
        bx += bx;
        si = sp;
        bp -= bx;
    } while (bp < 0);
    *(0x86) = bp;
label_1:
    __asm ("jcxz 0x417");
    *(bp) = si;
    bp += 2;
    do {
        al = *(ss:);
        ss:++;
        al |= al;
        __asm ("loopne 0x40f");
    } while (1);
    if (al == 0) {
        goto label_1;
    }
    ax = 0;
    *(bp) = ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x421 */
#include <stdint.h>
 
uint16_t fcn_00000421 (void) {
    cx = *(0x8a);
    ax = fcn_00000570 (cx);
    di = ax;
    ax |= ax;
    if (ax == 0) {
        goto label_0;
    }
    es = ds;
    ds = *(0x8c);
    si = 0;
    do {
        *(es:di) = *(si);
        cx--;
        si++;
        es:di++;
    } while (cx != 0);
    di = ax;
    ax = fcn_00000570 (*(0x8e));
    bx = ax;
    *(0x88) = ax;
    ax |= ax;
    if (ax == 0) {
label_0:
        void (*0x1e2)() ();
    }
    ax = 0;
    cx = 0xffff;
    do {
        *(bx) = di;
        bx += 2;
        __asm ("repne scasb al, byte es:[di]");
    } while (*(es:di) != al);
    *(bx) = ax;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x265 */
#include <stdint.h>
 
int16_t fcn_00000265 (void) {
    int16_t var_8h;
    int16_t var_6h;
    uint32_t var_4h;
    signed int16_t var_2h;
    ax = 0x194;
    fcn_00000e4b (ax, bp);
    ax = 0x1b0;
    fcn_000016d4 (ax, bp - 4);
    ax = 0x1b4;
    fcn_00000e4b (ax, *((bp - 4)));
    *((bp - 6)) = 0;
    *((bp - 8)) = 1;
    while (dx < *((bp - 2))) {
label_0:
        fcn_00000245 ();
        *((bp - 8))++;
        *((bp - 6)) += 0;
        dx = *((bp - 6));
        ax = *((bp - 8));
    }
    if (dx > *((bp - 2))) {
        goto label_1;
    }
    if (ax <= *((bp - 4))) {
        goto label_0;
    }
label_1:
    ax = 0x1ce;
    fcn_00000e4b (ax);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x301 */
#include <stdint.h>
 
int16_t fcn_00000301 (int16_t arg_4h) {
    while (ax != 0) {
        bx = *(0x23e);
        bx <<= 1;
        uint16_t (*bx + 0x5e8)() ();
        ax = *(0x23e);
        *(0x23e)--;
        ax |= ax;
    }
    uint16_t (*0x234)() ();
    uint16_t (*0x236)() ();
    uint16_t (*0x238)() ();
    fcn_00000121 ();
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1a5 */
#include <stdint.h>
 
int16_t fcn_000001a5 (void) {
    ax = 0x2500;
    __asm ("lds dx, [0x74]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2504;
    __asm ("lds dx, [0x78]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2505;
    __asm ("lds dx, [0x7c]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2506;
    __asm ("lds dx, [0x80]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1da */
#include <stdint.h>
 
void fcn_000001da (void) {
    ah = 0x40;
    bx = 2;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1fa */
#include <stdint.h>
 
void fcn_000001fa (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1ff */
#include <stdint.h>
 
void fcn_000001ff (void) {
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
    fcn_000001fa ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x222 */
#include <stdint.h>
 
void fcn_00000222 (void) {
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
    fcn_000001ff ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xe4b */
#include <stdint.h>
 
int16_t fcn_00000e4b (int16_t arg_4h, int16_t arg_6h) {
    ax = 0xf81;
    ax = 0x352;
    fcn_00001073 (bp + 6, *((bp + 4)));
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1073 */
#include <stdint.h>
 
int16_t fcn_00001073 (int16_t arg_6h, int16_t arg1) {
    int16_t var_98h;
    int16_t var_96h;
    int16_t var_92h;
    int16_t var_90h;
    int16_t var_8dh;
    int16_t var_8ch;
    int16_t var_8ah;
    int16_t var_58h;
    signed int16_t var_55h;
    int16_t var_54h;
    uint32_t var_2h;
    ax = arg1;
    *((bp - 0x58)) = 0;
    *((bp - 0x55)) = 0x50;
    *((bp - 2)) = 0;
    di = bp - 0x54;
    *((bp - 0x96)) = di;
    di = *((bp - 0x96));
    si = *((bp + 6));
    do {
label_0:
        al = *(si);
        si++;
        al |= al;
        if (al == 0) {
            goto label_2;
        }
        if (al == 0x25) {
            goto label_3;
        }
label_1:
        *(di) = al;
        di++;
        *((bp - 0x55))--;
    } while (*((bp - 0x55)) > 0);
    al = fcn_000010a1 ();
    goto label_0;
label_2:
    goto label_4;
label_3:
    *((bp - 0x8a)) = si;
    al = *(si);
    si++;
    if (al == 0x25) {
        goto label_1;
    }
    *((bp - 0x96)) = di;
    cx = 0;
    *((bp - 0x8c)) = cx;
    *((bp - 0x98)) = cx;
    *((bp - 0x8d)) = cl;
    *((bp - 0x92)) = 0xffff;
    *((bp - 0x90)) = 0xffff;
    ah = 0;
    dx = ax;
    bx = ax;
    bl -= 0x20;
    if (bl < 0x60) {
        bl = *((bx + fcn.000004f9));
        ax = bx;
        if (ax > 0x17) {
            goto label_5;
        }
        bx = ax;
        bx <<= 1;
        /* switch table (24 cases) at 0x1145 */
    }
label_5:
    si = *((bp - 0x8a));
    di = *((bp - 0x96));
    al = 0x25;
    do {
        al = fcn_00001099 ();
        al = *(si);
        si++;
        al |= al;
    } while (al != 0);
label_4:
    if (*((bp - 0x55)) < 0x50) {
        fcn_000010a1 ();
    }
    if (*((bp - 2)) != 0) {
        ax = 0xffff;
    } else {
        ax = *((bp - 0x58));
    }
    return ax;
    ax += 0x505;
    ax += 0x505;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0xf;
    __asm ("invd");
    al += 0x14;
    al += 7;
    al += 0x16;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0xd;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    *((bp + si)) += cl;
    dl |= *(si);
    al += 6;
    al += 0x12;
    cx |= *(0x1414);
    *(si) += dx;
    al |= 0x14;
    al += 0xd;
    al += 0x14;
    al += 0x14;
    al += 0x14;
    al += 0;
    *((bp + si)) += al;
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bx + di));
    *((bx + di)) += ax;
    *((bx + di)) += ax;
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    *((bp + si)) += ax;
    al += *((bp + si));
    al += *((bp + di));
    al += *((bp + si));
    al += *((bp + si));
    al += 2;
    al += *((bp + si));
    al += *((bp + si));
    ax += 0x505;
    ax += 0x505;
    ax += 0x505;
    ax += 0x505;
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    dl |= *(di);
    cl |= *(si);
    *((bp + si)) |= ax;
    cl += *((bp + di));
    dl += *(si);
    al += *((bp + si));
    al += *((bp + si));
    cl += *((bx + si));
    al += *((bp + si));
    al += *((bp + si));
    dl += *((bx + si));
    dl += *((bx + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *(0xa07);
    cl |= *((bp + si));
    al |= 9;
    al += *((bp + si));
    ax |= 0x1102;
    ax += *((bp + si));
    cl += *(bx);
    cl += *((bx + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    al += *((bp + si));
    dl += dl;
    dx += dx;
    cx += bx;
    *(0x430d) += di;
    ax |= 0xd43;
    bx++;
    ax |= 0xd43;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    /* [02] -rwx section size 128 named seg_002 */
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    *((bx + si)) += al;
    bh += bh;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x16d4 */
#include <stdint.h>
 
uint16_t fcn_000016d4 (int16_t arg_4h, int16_t arg_6h) {
    ax = 0x342;
    ax = 0x1d65;
    ax = fcn.000007f2;
    fcn_000016f3 (ax, ax, ax, *((bp + 4)), bp + 6);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x16f3 */
#include <stdint.h>
 
int32_t fcn_000016f3 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, uint32_t arg3) {
    int16_t var_29h;
    uint32_t var_28h;
    int16_t var_26h;
    int16_t var_22h;
    bx = arg3;
    *((bp - 0x28)) = 0;
    *((bp - 0x26)) = 0;
    si = *((bp + 0xa));
label_0:
    al = *(si);
    si++;
    al |= al;
    if (al == 0) {
        goto label_1;
    }
    if (al == 0x25) {
        goto label_2;
    }
    eax = (int32_t) ax;
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    *((bp - 0x26))++;
    ax = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
    ax |= ax;
    if (ax < 0) {
        goto label_3;
    }
    di |= di;
    if (di < 0) {
        goto label_4;
    }
    if (*((di + 0x55a)) != 1) {
        goto label_4;
    }
    do {
        tmp_1 = ax;
        ax = bx;
        bx = tmp_1;
        bl |= bl;
        if (bl < 0) {
            goto label_5;
        }
        if (*((bx + 0x55a)) != 1) {
            goto label_5;
        }
        *((bp - 0x26))++;
        ax = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
        ax |= ax;
    } while (ax > 0);
label_3:
    goto label_6;
label_5:
    ax = uint16_t (*bp + 6)(uint16_t, uint16_t*) (bx, *((bp + 8)));
    *((bp - 0x26))--;
    goto label_0;
label_4:
    if (ax == di) {
        goto label_0;
    }
    al = uint16_t (*bp + 6)(uint16_t, uint16_t*) (ax, *((bp + 8)));
    *((bp - 0x26))--;
    goto label_7;
label_1:
    goto label_7;
label_2:
    *((bp - 0x22)) = 0xffff;
    *((bp - 0x29)) = 0;
    al = *(si);
    si++;
    eax = (int32_t) ax;
    *((bp + 0xa)) = si;
    tmp_2 = ax;
    ax = di;
    di = tmp_2;
    di |= di;
    if (di >= 0) {
        bl = *((di + 0x55a));
        bh = 0;
        ax = bx;
        if (ax > 0x15) {
            goto label_6;
        }
        bx = ax;
        bx <<= 1;
        /* switch table (22 cases) at 0x17b7 */
    }
    goto label_7;
label_6:
    ax = 0xffff;
    uint16_t (*bp + 6)(uint16_t, uint16_t*) (ax, *((bp + 8)));
label_7:
    ax = *((bp - 0x28));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x245 */
#include <stdint.h>
 
void fcn_00000245 (void) {
    fcn_00000222 ();
    fcn_00000222 ();
    fcn_00000222 ();
    fcn_00000222 ();
    fcn_00000222 ();
    fcn_00000222 ();
    fcn_00000222 ();
    fcn_00000222 ();
    fcn_00000222 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x121 */
#include <stdint.h>
 
uint16_t fcn_00000121 (void) {
    ds = *(cs:);
    fcn_000001a5 ();
    ax = uint16_t (*0x5dc)(uint16_t) (cs);
    ax = 0;
    si = ax;
    cx = 0x2f;
    do {
        al += *(si);
        ah += 0;
        si++;
        __asm ("loop 0x137");
    } while (1);
    ax -= 0xd37;
    if (ax != 0) {
        cx = 0x19;
        dx = 0x2f;
        fcn_000001da ();
    }
    ah = 0x4c;
    al = *((bp + 2));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    cx = 0xe;
    dx = 0x48;
    return void (*0x1e9)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x3bf */
#include <stdint.h>
 
int16_t fcn_000003bf (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    ax |= ax;
    if (ax != 0) {
        dx++;
        *(es:di) = al;
        es:di++;
        al |= al;
        if (al != 0) {
            goto label_0;
        }
        bx++;
    }
label_0:
    tmp_0 = al;
    al = ah;
    ah = tmp_0;
    al = 0;
    __asm ("stc");
    __asm ("jcxz 0x3e6");
    al = *(si);
    si++;
    cx--;
    al -= 0x22;
    if (al != 0) {
        al += 0x22;
        if (al == 0x5c) {
            if (*(si) != 0x22) {
                goto label_1;
            }
            al = *(si);
            si++;
            cx--;
        }
label_1:
        si |= si;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x570 */
#include <stdint.h>
 
int16_t fcn_00000570 (int16_t arg_4h) {
    di = *((bp + 4));
    di |= di;
    if (di != 0) {
        if (di <= 0xfff4) {
            goto label_0;
        }
    }
    ax = 0;
    goto label_1;
label_0:
    ax = di;
    ax += 0xb;
    ax &= 0xfff8;
    di = ax;
    if (*(0x62c) == 0) {
        fcn_00000536 (di);
        goto label_1;
    }
    si = *(0x62a);
    ax = *(0x62a);
    ax |= ax;
    if (ax == 0) {
        goto label_2;
    }
    do {
        ax = *(si);
        dx = di;
        dx += 0x28;
        if (ax >= dx) {
            fcn_000004bf (si, di);
            goto label_1;
        }
        ax = *(si);
        if (ax >= di) {
            fcn_00000491 (si);
            *(si)++;
            ax = si;
            ax += 4;
            goto label_1;
        }
        si = *((si + 6));
    } while (si != *(0x62a));
label_2:
    fcn_000004f9 (di);
label_1:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x607 */
#include <stdint.h>
 
int16_t fcn_00000607 (int16_t arg_4h, int16_t arg_6h) {
    ax = *((bp + 4));
    dx = *((bp + 6));
    ax += *(0x9e);
    dx += 0;
    cx = ax;
    cx += 0x100;
    dx += 0;
    dx |= dx;
    if (dx == 0) {
        if (cx < sp) {
            tmp_0 = 0x9e;
            0x9e = ax;
            ax = tmp_0;
        }
    } else {
        *(0x94) = 8;
        ax = 0xffff;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x536 */
#include <stdint.h>
 
int16_t fcn_00000536 (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_00000607 (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        *(0x62c) = si;
        *(0x628) = si;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        ax = si;
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x4bf */
#include <stdint.h>
 
int16_t fcn_000004bf (int16_t arg_4h, int16_t arg_6h) {
    di = *((bp + 4));
    ax = *((bp + 6));
    *(di) -= ax;
    si = *(di);
    si += di;
    ax = *((bp + 6));
    ax++;
    *(si) = ax;
    *((si + 2)) = di;
    ax = *(0x628);
    if (ax == di) {
        *(0x628) = si;
    } else {
        di = si;
        di += *((bp + 6));
        *((di + 2)) = si;
    }
    ax = si;
    ax += 4;
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x491 */
#include <stdint.h>
 
int16_t fcn_00000491 (int16_t arg_4h) {
    di = *((bp + 4));
    ax = *((di + 6));
    *(0x62a) = ax;
    if (ax == di) {
        *(0x62a) = 0;
    } else {
        si = *((di + 4));
        bx = *(0x62a);
        *((bx + 4)) = si;
        ax = *(0x62a);
        *((si + 6)) = ax;
    }
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x4f9 */
#include <stdint.h>
 
int16_t fcn_000004f9 (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_00000607 (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        ax = *(0x628);
        *((si + 2)) = ax;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        *(0x628) = si;
        ax = *(0x628);
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x5e3 */
#include <stdint.h>
 
int16_t fcn_000005e3 (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = sp;
    dx -= 0x100;
    if (ax < dx) {
        *(0x9e) = ax;
        ax = 0;
    } else {
        *(0x94) = 8;
        ax = 0xffff;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xdcd */
#include <stdint.h>
 
int32_t fcn_00000dcd (int16_t arg_4h) {
    si = *((bp + 4));
    ax = *((si + 0xe));
    if (ax != si) {
        ax = 0xffff;
    } else {
        if (*(si) >= 0) {
            if ((*((si + 2)) & 8) == 0) {
                ax = *((si + 0xa));
                dx = si;
                dx += 5;
                if (ax != dx) {
                    goto label_0;
                }
            }
            *(si) = 0;
            ax = *((si + 0xa));
            dx = si;
            dx += 5;
            if (ax == dx) {
                ax = *((si + 8));
                *((si + 0xa)) = ax;
            }
label_0:
            ax = 0;
        } else {
            di = *((si + 6));
            di += *(si);
            di++;
            *(si) -= di;
            ax = *((si + 8));
            *((si + 0xa)) = ax;
            al = *((si + 4));
            eax = (int32_t) ax;
            ax = fcn_00000acf (ax, ax, di);
            if (ax != di) {
                if ((*((si + 2)) & 0x200) == 0) {
                    *((si + 2)) |= 0x10;
                    ax = 0xffff;
                }
            } else {
                ax = 0;
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x65b */
#include <stdint.h>
 
int16_t fcn_0000065b (int16_t arg_4h) {
    int16_t var_2h;
    bx = *((bp + 4));
    si = *(bx);
    ax = *(bx);
    *((bp - 2)) = ax;
    bx = *((bp + 4));
    if ((*((bx + 2)) & 0x40) != 0) {
        ax = si;
        goto label_0;
    }
    bx = *((bp + 4));
    di = *((bx + 0xa));
    while (ax != 0) {
        bx = di;
        di++;
        if (*(bx) == 0xa) {
            *((bp - 2))++;
        }
        ax = si;
        si--;
        ax |= ax;
    }
    ax = *((bp - 2));
label_0:
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xc28 */
#include <stdint.h>
 
int32_t fcn_00000c28 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x482)) &= 0xfdff;
    ah = 0x42;
    al = *((bp + 0xa));
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (*((bx + 0x482)) >= 0) {
    } else {
        fcn_000002c5 (ax);
        edx:eax = (int64_t) eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1d4e */
#include <stdint.h>
 
int16_t fcn_00001d4e (int16_t arg_4h) {
    ax = 1;
    ax = 0;
    fcn_00000c28 (*((bp + 4)), ax, ax, ax, bp);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x75b */
#include <stdint.h>
 
int16_t fcn_0000075b (void) {
    di = 0x14;
    si = 0x342;
    while (ax != 0) {
        ax = *((si + 2));
        ax &= 0x300;
        if (ax == 0x300) {
            fcn_00000dcd (si);
        }
        si += 0x10;
        ax = di;
        di--;
        ax |= ax;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x9f7 */
#include <stdint.h>
 
int16_t fcn_000009f7 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h) {
    int16_t var_4h;
    int16_t var_1h;
    ax = *((bp + 8));
    ax++;
    if (ax >= 2) {
        bx = *((bp + 4));
        bx <<= 1;
        if ((*((bx + 0x482)) & 0x200) == 0) {
            goto label_1;
        }
    }
    ax = 0;
    goto label_2;
label_1:
    ax = fcn_00000ab3 (*((bp + 4)), *((bp + 6)), *((bp + 8)));
    *((bp - 4)) = ax;
    ax = *((bp - 4));
    ax++;
    if (ax >= 2) {
        bx = *((bp + 4));
        bx <<= 1;
        if ((*((bx + 0x482)) & 0x8000) == 0) {
            goto label_3;
        }
    }
    ax = *((bp - 4));
    goto label_2;
label_3:
    cx = *((bp - 4));
    si = *((bp + 6));
    es = ds;
    di = si;
    bx = si;
    do {
label_0:
        al = *(si);
        si++;
        if (al == 0x1a) {
            goto label_4;
        }
        if (al == 0xd) {
            goto label_5;
        }
        *(es:di) = al;
        es:di++;
        __asm ("loop 0xa55");
    } while (1);
    goto label_6;
label_5:
    __asm ("loop 0xa55");
    goto label_0;
    ax = 1;
    fcn_00000ab3 (*((bp + 4)), bp - 1, ax, bx);
    al = *((bp - 1));
    *(es:di) = al;
    es:di++;
label_6:
    if (di == bx) {
        goto label_1;
    }
    goto label_7;
label_4:
    ax = 2;
    cx = -cx;
    ax -= ax;
    fcn_00000c28 (*((bp + 4)), cx, ax, ax, bx);
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x482)) |= 0x200;
label_7:
    ax = di;
    ax -= bx;
label_2:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x7f2 */
#include <stdint.h>
 
int32_t fcn_000007f2 (int16_t arg_4h) {
    uint32_t var_1h;
    si = *((bp + 4));
    do {
        *(si)--;
        if (*(si) >= 0) {
            *((si + 0xa))++;
            bx = *((si + 0xa));
            al = *((bx - 1));
            ah = 0;
            goto label_1;
        }
        *(si)++;
        if (*(si) >= 0) {
            if ((*((si + 2)) & 0x110) == 0) {
                goto label_0;
            }
        }
        *((si + 2)) |= 0x10;
        ax = 0xffff;
        goto label_1;
label_0:
        *((si + 2)) |= 0x80;
        if (*((si + 6)) == 0) {
            goto label_2;
        }
        ax = fcn_00000782 (si);
        ax |= ax;
        if (ax != 0) {
            ax = 0xffff;
            goto label_1;
        }
    } while (1);
label_2:
    if (*(0x4aa) != 0) {
        goto label_3;
    }
    ax = 0x342;
    if (ax != si) {
        goto label_3;
    }
    al = *((si + 4));
    eax = (int32_t) ax;
    ax = fcn_000008f2 (ax);
    ax |= ax;
    if (ax == 0) {
        *((si + 2)) &= 0xfdff;
    }
    ax = 0x200;
    if ((*((si + 2)) & 0x200) != 0) {
        ax = 1;
    } else {
        ax = 0;
    }
    ax = 0;
    fcn_00000904 (si, ax, ax);
    goto label_0;
    do {
label_3:
        if ((*((si + 2)) & 0x200) != 0) {
            fcn_0000075b ();
        }
        ax = 1;
        al = *((si + 4));
        eax = (int32_t) ax;
        ax = fcn_00000ab3 (ax, bp - 1, ax);
        if (ax != 1) {
            al = *((si + 4));
            eax = (int32_t) ax;
            ax = fcn_00000d5f (ax);
            if (ax != 1) {
                *((si + 2)) |= 0x10;
            } else {
                ax = *((si + 2));
                ax &= 0xfe7f;
                ax |= 0x20;
                *((si + 2)) = ax;
            }
            ax = 0xffff;
            goto label_1;
        }
        if (*((bp - 1)) != 0xd) {
            goto label_4;
        }
    } while ((*((si + 2)) & 0x40) == 0);
label_4:
    *((si + 2)) &= 0xffdf;
    al = *((bp - 1));
    ah = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x782 */
#include <stdint.h>
 
int32_t fcn_00000782 (int16_t arg_4h) {
    si = *((bp + 4));
    if ((*((si + 2)) & 0x200) != 0) {
        fcn_0000075b ();
    }
    ax = *((si + 8));
    *((si + 0xa)) = ax;
    al = *((si + 4));
    eax = (int32_t) ax;
    ax = fcn_000009f7 (ax, ax, *((si + 6)));
    *(si) = ax;
    ax |= ax;
    if (ax > 0) {
        *((si + 2)) &= 0xffdf;
        ax = 0;
    } else {
        if (*(si) == 0) {
            ax = *((si + 2));
            ax &= 0xfe7f;
            ax |= 0x20;
            *((si + 2)) = ax;
        } else {
            *(si) = 0;
            *((si + 2)) |= 0x10;
        }
        ax = 0xffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x8f2 */
#include <stdint.h>
 
int16_t fcn_000008f2 (int16_t arg_4h, int16_t arg2) {
    dx = arg2;
    ax = 0x4400;
    bx = *((bp + 4));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = dx;
    ax &= 0x80;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x904 */
#include <stdint.h>
 
int16_t fcn_00000904 (int16_t arg_4h, uint32_t arg_6h, signed int16_t arg_8h, int16_t arg_ah) {
    di = *((bp + 0xa));
    si = *((bp + 4));
    ax = *((si + 0xe));
    if (ax == si) {
        if (*((bp + 8)) > 2) {
            goto label_0;
        }
        if (di <= 0x7fff) {
            goto label_1;
        }
    }
label_0:
    ax = 0xffff;
    goto label_2;
label_1:
    if (*(0x4ac) == 0) {
        ax = 0x352;
        if (ax == si) {
            *(0x4ac) = 1;
        }
    } else {
        if (*(0x4aa) != 0) {
            goto label_3;
        }
        ax = 0x342;
        if (ax != si) {
            goto label_3;
        }
        *(0x4aa) = 1;
    }
label_3:
    if (*(si) != 0) {
        ax = 1;
        ax = 0;
        fcn_000006a2 (si, ax, ax, ax);
    }
    if ((*((si + 2)) & 4) != 0) {
        fcn_000016ad (*((si + 8)));
    }
    *((si + 2)) &= 0xfff3;
    *((si + 6)) = 0;
    ax = si;
    ax += 5;
    *((si + 8)) = ax;
    *((si + 0xa)) = ax;
    if (*((bp + 8)) != 2) {
        di |= di;
        if (di <= 0) {
            goto label_4;
        }
        *(0x234) = 0x9d6;
        if (*((bp + 6)) == 0) {
            ax = fcn_00000570 (di);
            *((bp + 6)) = ax;
            ax |= ax;
            if (ax != 0) {
                *((si + 2)) |= 4;
            } else {
                ax = 0xffff;
                goto label_2;
            }
        }
        ax = *((bp + 6));
        *((si + 0xa)) = ax;
        *((si + 8)) = ax;
        *((si + 6)) = di;
        if (*((bp + 8)) != 1) {
            goto label_4;
        }
        *((si + 2)) |= 8;
    }
label_4:
    ax = 0;
label_2:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xab3 */
#include <stdint.h>
 
void fcn_00000ab3 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg1) {
    ax = arg1;
    ah = 0x3f;
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
    } else {
        fcn_000002c5 (ax);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xd5f */
#include <stdint.h>
 
int16_t fcn_00000d5f (int16_t arg_4h) {
    uint32_t var_4h;
    uint32_t var_2h;
    bx = *((bp + 4));
    bx <<= 1;
    if ((*((bx + 0x482)) & 0x200) != 0) {
        ax = 1;
    } else {
        ax = 0x4400;
        bx = *((bp + 4));
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        if ((*((bx + 0x482)) & 0x200) >= 0) {
            if ((dl & 0x80) == 0) {
                ax = 0x4201;
                cx = 0;
                dx = 0;
                eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
                if ((dl & 0x80) >= 0) {
                    ax = 0x4202;
                    cx = 0;
                    dx = 0;
                    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
                    *((bp - 4)) = ax;
                    *((bp - 2)) = dx;
                    dx = ax;
                    cx = ax;
                    if ((dl & 0x80) < 0) {
                        goto label_0;
                    }
                    ax = 0x4200;
                    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
                    if ((dl & 0x80) < 0) {
                        goto label_0;
                    }
                    if (dx >= *((bp - 2))) {
                        if (dx <= *((bp - 2))) {
                            if (ax < *((bp - 4))) {
                                goto label_1;
                            }
                        }
                        ax = 1;
                    }
                } else {
label_1:
                    ax = 0;
                }
            }
        } else {
label_0:
            fcn_000002c5 (ax);
        }
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x6a2 */
#include <stdint.h>
 
int32_t fcn_000006a2 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, uint32_t arg_ah) {
    si = *((bp + 4));
    ax = fcn_00000dcd (si);
    ax |= ax;
    if (ax != 0) {
        ax = 0xffff;
    } else {
        if (*((bp + 0xa)) == 1) {
            if (*(si) <= 0) {
                goto label_0;
            }
            ax = fcn_0000065b (si);
            edx:eax = (int64_t) eax;
            *((bp + 6)) -= ax;
            *((bp + 8)) -= dx;
        }
label_0:
        *((si + 2)) &= 0xfe5f;
        *(si) = 0;
        ax = *((si + 8));
        *((si + 0xa)) = ax;
        al = *((si + 4));
        eax = (int32_t) ax;
        ax = fcn_00000c28 (ax, *((bp + 6)), *((bp + 8)), *((bp + 0xa)));
        if (dx == -1) {
            if (ax == -1) {
                ax = 0xffff;
            }
        } else {
            ax = 0;
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x16ad */
#include <stdint.h>
 
int16_t fcn_000016ad (int16_t arg_4h) {
    si = *((bp + 4));
    si |= si;
    if (si == 0) {
    } else {
        ax = si;
        ax += 0xfffc;
        si = ax;
        if (si == *(0x628)) {
            fcn_00001606 ();
        } else {
            fcn_0000165f (si);
        }
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x2c5 */
#include <stdint.h>
 
int32_t fcn_000002c5 (int16_t arg_4h) {
    si = *((bp + 4));
    si |= si;
    if (si < 0) {
        goto label_0;
    }
    while (si > 0x23) {
        si = 0x57;
        *(0x1d8) = si;
        al = *((si + fcn.000001da));
        eax = (int32_t) ax;
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        goto label_1;
label_0:
        si = -si;
    }
    *(0x1d8) = 0xffff;
label_1:
    ax = si;
    *(0x94) = ax;
    ax = 0xffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xbe2 */
#include <stdint.h>
 
int16_t fcn_00000be2 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 4));
    bx <<= 1;
    if ((*((bx + 0x482)) & 0x800) != 0) {
        ax = 2;
        ax = 0;
        ax = fcn_00000c28 (*((bp + 4)), ax, ax, ax);
    }
    ah = 0x40;
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if ((*((bx + 0x482)) & 0x800) >= 0) {
        bx = *((bp + 4));
        bx <<= 1;
        *((bx + 0x482)) |= 0x1000;
    } else {
        fcn_000002c5 (ax);
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xc53 */
#include <stdint.h>
 
int16_t fcn_00000c53 (int16_t arg_4h, uint32_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg2) {
    int16_t var_22h;
    dx = arg2;
    di = *((bp + 0xa));
    es = ds;
    bx = *((bp + 8));
    if (bx > 0x24) {
        goto label_0;
    }
    if (bl < 2) {
        goto label_0;
    }
    ax = *((bp + 0xc));
    cx = *((bp + 0xe));
    cx |= cx;
    if (cx < 0) {
        if (*((bp + 6)) == 0) {
            goto label_1;
        }
        *(di) = 0x2d;
        di++;
        cx = -cx;
        ax = -ax;
    }
label_1:
    si = bp - 0x22;
    __asm ("jcxz 0xc9d");
    do {
        tmp_0 = ax;
        ax = cx;
        cx = tmp_0;
        dx -= dx;
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        tmp_1 = ax;
        ax = cx;
        cx = tmp_1;
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        *(si) = dl;
        si++;
        __asm ("jcxz 0xca4");
    } while (1);
    do {
        dx -= dx;
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        *(si) = dl;
        si++;
        ax |= ax;
    } while (ax != 0);
    cx = bp - 0x22;
    cx = -cx;
    cx += si;
    do {
        si--;
        al = *(si);
        al -= 0xa;
        if (al < 0) {
            al += 0x3a;
        } else {
            al += *((bp + 4));
        }
        *(es:di) = al;
        es:di++;
        __asm ("loop 0xcb0");
    } while (1);
label_0:
    al = 0;
    *(es:di) = al;
    es:di++;
    es = ds;
    ax = *((bp + 0xa));
    di = ds;
    si = ds;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xacf */
#include <stdint.h>
 
int16_t fcn_00000acf (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h) {
    uint32_t var_8ah;
    uint32_t var_88h;
    int16_t var_85h;
    int16_t var_84h;
    int16_t var_82h;
    ax = *((bp + 8));
    ax++;
    if (ax < 2) {
        ax = 0;
        goto label_0;
    }
    bx = *((bp + 4));
    bx <<= 1;
    if ((*((bx + 0x482)) & 0x8000) != 0) {
        fcn_00000be2 (*((bp + 4)), *((bp + 6)), *((bp + 8)));
        goto label_0;
    }
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x482)) &= 0xfdff;
    ax = *((bp + 6));
    *((bp - 0x84)) = ax;
    ax = *((bp + 8));
    *((bp - 0x88)) = ax;
    si = bp - 0x82;
    while (1) {
        *((bp - 0x88))--;
        bx = *((bp - 0x84));
        *((bp - 0x84))++;
        al = *(bx);
        *((bp - 0x85)) = al;
        if (al == 0xa) {
            *(si) = 0xd;
            si++;
        }
        al = *((bp - 0x85));
        *(si) = al;
        si++;
        ax = bp - 0x82;
        dx = si;
        dx -= ax;
        if (dx >= 0x80) {
            ax = bp - 0x82;
            di = si;
            di -= ax;
            ax = fcn_00000be2 (*((bp + 4)), bp - 0x82, di);
            *((bp - 0x8a)) = ax;
            if (ax != di) {
                if (*((bp - 0x8a)) < 0) {
                    ax = 0xffff;
                } else {
                    ax = *((bp + 8));
                    ax -= *((bp - 0x88));
                    ax += *((bp - 0x8a));
                    ax -= di;
                }
                goto label_0;
            }
            si = bp - 0x82;
        }
        if (*((bp - 0x88)) == 0) {
            goto label_1;
        }
    }
label_1:
    ax = bp - 0x82;
    di = si;
    di -= ax;
    ax = di;
    ax |= ax;
    if (ax > 0) {
        ax = fcn_00000be2 (*((bp + 4)), bp - 0x82, di);
        *((bp - 0x8a)) = ax;
        if (ax != di) {
            if (*((bp - 0x8a)) < 0) {
                ax = 0xffff;
            } else {
                ax = *((bp + 8));
                ax += *((bp - 0x8a));
                ax -= di;
            }
        }
    } else {
        ax = *((bp + 8));
    }
label_0:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xe7d */
#include <stdint.h>
 
int32_t fcn_00000e7d (int16_t arg_4h, int16_t arg_6h) {
    uint32_t var_1h;
    si = *((bp + 6));
    al = *((bp + 4));
    *((bp - 1)) = al;
    do {
        *(si)++;
        if (*(si) < 0) {
            al = *((bp - 1));
            *((si + 0xa))++;
            bx = *((si + 0xa));
            *((bx - 1)) = al;
            if ((*((si + 2)) & 8) != 0) {
                if (*((bp - 1)) != 0xa) {
                    if (*((bp - 1)) != 0xd) {
                        goto label_0;
                    }
                }
                ax = fcn_00000dcd (si);
                ax |= ax;
                if (ax == 0) {
                    goto label_0;
                }
                ax = 0xffff;
                goto label_1;
            }
label_0:
            al = *((bp - 1));
            ah = 0;
            goto label_1;
        }
        *(si)--;
        if ((*((si + 2)) & 0x90) == 0) {
            if ((*((si + 2)) & 2) != 0) {
                goto label_2;
            }
        }
        *((si + 2)) |= 0x10;
        ax = 0xffff;
        goto label_1;
label_2:
        *((si + 2)) |= 0x100;
        if (*((si + 6)) == 0) {
            goto label_3;
        }
        if (*(si) != 0) {
            ax = fcn_00000dcd (si);
            ax |= ax;
            if (ax != 0) {
                ax = 0xffff;
                goto label_1;
            }
        } else {
            ax = *((si + 6));
            dx = 0xffff;
            dx -= ax;
            *(si) = dx;
        }
    } while (1);
label_3:
    if (*((bp - 1)) == 0xa) {
        if ((*((si + 2)) & 0x40) != 0) {
            goto label_4;
        }
        ax = 1;
        ax = 0x4e0;
        al = *((si + 4));
        eax = (int32_t) ax;
        ax = fcn_00000be2 (ax, ax, ax);
        if (ax != 1) {
            goto label_5;
        }
    }
label_4:
    ax = 1;
    al = *((si + 4));
    eax = (int32_t) ax;
    ax = fcn_00000be2 (ax, bp + 4, ax);
    if (ax != 1) {
label_5:
        if ((*((si + 2)) & 0x200) == 0) {
            *((si + 2)) |= 0x10;
            ax = 0xffff;
        }
    } else {
        al = *((bp - 1));
        ah = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xe64 */
#include <stdint.h>
 
int32_t fcn_00000e64 (int16_t arg_4h, int16_t arg_6h, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 6));
    *(bx)--;
    al = *((bp + 4));
    eax = (int32_t) ax;
    fcn_00000e7d (ax, *((bp + 6)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x10a1 */
#include <stdint.h>
 
uint16_t fcn_000010a1 (int16_t arg_8h, int16_t arg_ah, int16_t arg3, int16_t arg4, int16_t arg2) {
    int16_t var_58h;
    int16_t var_55h;
    int16_t var_54h;
    int16_t var_2h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = bp - 0x54;
    di -= ax;
    ax = uint16_t (*bp + 0xa)(uint16_t*, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t, uint16_t) (*((bp + 8)), di, bp - 0x54, es, dx, cx, bx);
    ax |= ax;
    if (ax == 0) {
        *((bp - 2)) = 1;
    }
    *((bp - 0x55)) = 0x50;
    *((bp - 0x58)) += di;
    di = bp - 0x54;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0xa */
#include <stdint.h>
 
int16_t fcn_0000000a (int16_t arg1) {
    tf = arg1;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    bp = *(2);
    bx = *(0x2c);
    ds = dx;
    *(0x92) = ax;
    *(0x90) = es;
    *(0x8c) = bx;
    *(0xac) = bp;
    *(0x96) = 0xffff;
    fcn_00000162 ();
    __asm ("les di, [0x8a]");
    ax = di;
    bx = di;
    cx = 0x7fff;
    do {
        if (*(es:di) == 0x3738) {
            dx = *((es:di + 2));
            if (dl != 0x3d) {
                goto label_0;
            }
            dh &= 0xdf;
            *(0x96)++;
            if (dh != 0x59) {
                goto label_0;
            }
            *(0x96)++;
        }
label_0:
        __asm ("repne scasb al, byte es:[di]");
        __asm ("jcxz 0xbe");
        bx++;
    } while (*(es:di) != al);
    ch |= 0x80;
    cx = -cx;
    *(0x8a) = cx;
    cx = 1;
    bx <<= cl;
    bx += 8;
    bx &= 0xfff8;
    *(0x8e) = bx;
    dx = ds;
    bp -= dx;
    di = *(0x23c);
    if (di < 0x200) {
        di = 0x200;
        *(0x23c) = di;
    }
    di += 0x62e;
    if (di >= 0) {
        di += *(0x23a);
        if (di >= 0) {
            cl = 4;
            di >>= cl;
            di++;
            if (bp < di) {
                goto label_1;
            }
            if (*(0x23c) != 0) {
                if (*(0x23a) != 0) {
                    goto label_2;
                }
            }
            di = 0x1000;
            if (bp > di) {
                goto label_2;
            }
            di = bp;
        }
    } else {
label_1:
        goto label_3;
    }
label_2:
    bx = di;
    bx += dx;
    *(0xa4) = bx;
    *(0xa8) = bx;
    ax = *(0x90);
    bx -= ax;
    es = ax;
    ah = 0x4a;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    di <<= cl;
    __asm ("cli");
    ss = dx;
    __asm ("sti");
    ax = 0;
    es = *(cs:);
    di = 0x5e8;
    cx = 0x62e;
    cx -= di;
    *(es:di) = al;
    cx--;
    es:di++;
    uint16_t (*0x5da)(uint16_t) (cs);
    fcn_00000336 ();
    fcn_00000421 ();
    ah = 0;
    eax = syscall_1ah (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x98) = dx;
    *(0x9a) = cx;
    uint16_t (*0x5de)() ();
    ax = fcn_00000265 ();
    fcn_00000301 (ax);
label_3:
    cx = 0x1e;
    dx = 0x56;
    ds = *(cs:);
    fcn_000001da ();
    ax = 3;
    al = fcn_00000121 ();
    *((bx + si)) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1099 */
#include <stdint.h>
 
void fcn_00001099 (int16_t arg3, int16_t arg4, int16_t arg2) {
    int16_t var_55h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    *(di) = al;
    di++;
    *((bp - 0x55))--;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x10cc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1048 */
#include <stdint.h>
 
int8_t fcn_00001048 (int16_t arg_4h) {
    dx = *((bp + 4));
    cx = 0xf04;
    bx = 0x4e9;
    al = dh;
    al >>= cl;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    al = dh;
    al &= ch;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    al = dl;
    al >>= cl;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    al = dl;
    al &= ch;
    __asm ("xlatb");
    *(es:di) = al;
    es:di++;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x108c */
#include <stdint.h>
 
int8_t fcn_0000108c (void) {
    cx = 0xffff;
    al = 0;
    __asm ("repne scasb al, byte es:[di]");
    cx = ~cx;
    cx--;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1044 */
#include <stdint.h>
 
void fcn_00001044 (void) {
    uint16_t (*0x5e0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x63b */
#include <stdint.h>
 
void fcn_0000063b (int16_t arg_4h) {
    fcn_000005e3 (*((bp + 4)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1596 */
#include <stdint.h>
 
int16_t fcn_00001596 (int16_t arg_4h) {
    si = *((bp + 4));
    if (*(0x62a) != 0) {
        bx = *(0x62a);
        di = *((bx + 6));
        bx = *(0x62a);
        *((bx + 6)) = si;
        *((di + 4)) = si;
        *((si + 6)) = di;
        ax = *(0x62a);
        *((si + 4)) = ax;
    } else {
        *(0x62a) = si;
        *((si + 4)) = si;
        *((si + 6)) = si;
    }
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x15cf */
#include <stdint.h>
 
int16_t fcn_000015cf (int16_t arg_4h, int16_t arg_6h) {
    int16_t var_2h;
    si = *((bp + 6));
    di = *((bp + 4));
    ax = *(si);
    *(di) += ax;
    ax = *(0x628);
    if (ax == si) {
        *(0x628) = di;
    } else {
        ax = *(si);
        ax += si;
        *((bp - 2)) = ax;
        bx = *((bp - 2));
        *((bx + 2)) = di;
    }
    fcn_00000491 (si);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1606 */
#include <stdint.h>
 
int16_t fcn_00001606 (void) {
    ax = *(0x62c);
    if (ax == *(0x628)) {
        ax = fcn_0000063b (*(0x62c));
        ax = 0;
        *(0x628) = ax;
        *(0x62c) = ax;
    } else {
        bx = *(0x628);
        si = *((bx + 2));
        if ((*(si) & 1) == 0) {
            ax = fcn_00000491 (si);
            if (si == *(0x62c)) {
                ax = 0;
                *(0x628) = ax;
                *(0x62c) = ax;
            } else {
                ax = *((si + 2));
                *(0x628) = ax;
            }
            fcn_0000063b (si);
        } else {
            fcn_0000063b (*(0x628));
            *(0x628) = si;
        }
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x165f */
#include <stdint.h>
 
int16_t fcn_0000165f (int16_t arg_4h) {
    int16_t var_2h;
    si = *((bp + 4));
    *(si)--;
    ax = *(si);
    ax += si;
    *((bp - 2)) = ax;
    di = *((si + 2));
    if ((*(di) & 1) == 0) {
        if (si != *(0x62c)) {
            ax = *(si);
            *(di) += ax;
            bx = *((bp - 2));
            *((bx + 2)) = di;
            si = di;
        }
    } else {
        fcn_00001596 (si);
    }
    bx = *((bp - 2));
    if ((*(bx) & 1) == 0) {
        fcn_000015cf (si, *((bp - 2)));
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1bcc */
#include <stdint.h>
 
int32_t fcn_00001bcc (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg_10h, int16_t arg3, int16_t arg1) {
    uint32_t var_5h;
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    ax = arg1;
    *((bp - 5)) = 0;
    *((bp - 4)) = 0;
    *((bp - 2)) = 1;
    di = 0x241;
    do {
        *((bp - 4))++;
        ax = uint16_t (*bp + 4)(uint16_t*, uint16_t, uint16_t, uint16_t) (*((bp + 8)), es, di, si);
        ax |= ax;
        if (ax < 0) {
            goto label_1;
        }
        eax = (int32_t) ax;
        tmp_0 = ax;
        ax = bx;
        bx = tmp_0;
        if ((bl & 0x80) != 0) {
            goto label_2;
        }
    } while ((*((bx + di)) & 1) != 0);
label_2:
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    *((bp + 0xc))--;
    if (*((bp + 0xc)) >= 0) {
        if (al != 0x2b) {
            if (al != 0x2d) {
                goto label_3;
            }
            *((bp - 5))++;
        }
        *((bp + 0xc))--;
        if (*((bp + 0xc)) >= 0) {
            *((bp - 4))++;
            ax = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
            ax |= ax;
            if (ax >= 0) {
label_3:
                si -= si;
                di = si;
                cx = *((bp + 0xa));
                __asm ("jcxz 0x1c7b");
                if (cx > 0x24) {
                    goto label_0;
                }
                if (cl < 2) {
                    goto label_0;
                }
                if (al != 0x30) {
                    goto label_4;
                }
                if (cl != 0x10) {
                    goto label_5;
                }
                *((bp + 0xc))--;
                if (*((bp + 0xc)) < 0) {
                    goto label_6;
                }
                *((bp - 4))++;
                al = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
                if (al == 0x78) {
                    goto label_5;
                }
                if (al == 0x58) {
                    goto label_5;
                }
                goto label_7;
            }
label_1:
            *((bp - 2)) = 0xffff;
        }
    } else {
label_0:
        *((bp - 2)) = 0;
    }
    ax = uint16_t (*bp + 6)(uint16_t, uint16_t*) (ax, *((bp + 8)));
    *((bp - 4))--;
    ax -= ax;
    edx:eax = (int64_t) eax;
    goto label_8;
    do {
label_6:
        goto label_9;
        *((bp + 0xa)) = 0xa;
        if (al != 0x30) {
            goto label_4;
        }
        *((bp + 0xc))--;
    } while (*((bp + 0xc)) < 0);
    *((bp - 4))++;
    al = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
    *((bp + 0xa)) = 8;
    if (al != 0x78) {
        if (al != 0x58) {
            goto label_7;
        }
    }
    *((bp + 0xa)) = 0x10;
label_5:
    goto label_10;
label_4:
    cx = *((bp + 0xa));
    tmp_2 = ax;
    ax = bx;
    bx = tmp_2;
    ax = fcn_00001b9e ();
    tmp_3 = ax;
    ax = bx;
    bx = tmp_3;
    if (al < 0x58) {
        goto label_0;
    }
    tmp_4 = ax;
    ax = si;
    si = tmp_4;
    while (*((bp - 4)) >= 0) {
        tmp_5 = ax;
        ax = si;
        si = tmp_5;
        dx:ax = ax * *((bp + 0xa));
        si += ax;
        di += dx;
        if (di != 0) {
            goto label_11;
        }
label_10:
        *((bp + 0xc))--;
        if (*((bp + 0xc)) < 0) {
            goto label_9;
        }
        *((bp - 4))++;
        ax = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
label_7:
        cx = *((bp + 0xa));
        tmp_6 = ax;
        ax = bx;
        bx = tmp_6;
        ax = fcn_00001b9e ();
        tmp_7 = ax;
        ax = bx;
        bx = tmp_7;
    }
    goto label_12;
    do {
        tmp_8 = ax;
        ax = si;
        si = tmp_8;
        dx:ax = ax * cx;
        tmp_9 = ax;
        ax = di;
        di = tmp_9;
        tmp_10 = dx;
        dx = cx;
        cx = tmp_10;
        dx:ax = ax * dx;
        si += di;
        ax += cx;
        tmp_11 = ax;
        ax = di;
        di = tmp_11;
        dl += dh;
        if (dl != 0) {
            goto label_13;
        }
label_11:
        *((bp + 0xc))--;
        if (*((bp + 0xc)) < 0) {
            goto label_9;
        }
        *((bp - 4))++;
        ax = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
        cx = *((bp + 0xa));
        tmp_12 = ax;
        ax = bx;
        bx = tmp_12;
        ax = fcn_00001b9e ();
        tmp_13 = ax;
        ax = bx;
        bx = tmp_13;
    } while (*((bp - 4)) >= 0);
label_12:
    ax = uint16_t (*bp + 6)(uint16_t, uint16_t*) (ax, *((bp + 8)));
    *((bp - 4))--;
label_9:
    dx = di;
    tmp_14 = ax;
    ax = si;
    si = tmp_14;
    if (*((bp - 5)) == 0) {
        goto label_8;
    }
    dx = -dx;
    ax = -ax;
    do {
label_8:
        di = *((bp + 0xe));
        bx = *((bp - 4));
        *(di) += bx;
        di = *((bp + 0x10));
        bx = *((bp - 2));
        *(di) = bx;
        goto label_14;
label_13:
        ax = 0xffff;
        dx = 0x7fff;
        al += *((bp - 5));
        ah += 0;
        dx += 0;
        *((bp - 2)) = 2;
    } while (1);
label_14:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1708 */
#include <stdint.h>
 
void fcn_00001708 (int16_t arg_ch) {
    int16_t var_29h;
    di = *((bp + 0xc));
    if ((*((bp - 0x29)) & 0x20) != 0) {
        __asm ("les di, [di]");
        *((bp + 0xc)) += 4;
        return;
    }
    di = *(di);
    es = ds;
    *((bp + 0xc)) += 2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1898 */
#include <stdint.h>
 
uint16_t fcn_00001898 (int16_t arg_4h, int16_t arg_8h, uint32_t arg3, int16_t arg1) {
    int16_t var_26h;
    bx = arg3;
    ax = arg1;
    while (*((bx + 0x55a)) == 1) {
        *((bp - 0x26))++;
        ax = uint16_t (*bp + 4)(uint16_t*) (*((bp + 8)));
        ax |= ax;
        if (ax <= 0) {
            goto label_0;
        }
        al |= al;
        if (al < 0) {
            goto label_1;
        }
        tmp_0 = ax;
        ax = bx;
        bx = tmp_0;
        tmp_1 = ax;
        ax = bx;
        bx = tmp_1;
    }
    do {
label_1:
        cx += 3;
        void (*cx)() ();
label_0:
    } while (cx == 0);
    return void (*0x1aeb)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x18af */
#include <stdint.h>
 
uint16_t fcn_000018af (int16_t arg_4h, int16_t arg_8h, int16_t arg2, int16_t arg1) {
    int16_t var_26h;
    int16_t var_22h;
    dx = arg2;
    ax = arg1;
    dx -= dx;
    cx = 4;
    do {
        *((bp - 0x22))--;
        if (*((bp - 0x22)) < 0) {
            goto label_0;
        }
        *((bp - 0x26))++;
        ax = uint16_t (*bp + 4)(uint16_t*, uint16_t, uint16_t) (*((bp + 8)), cx, dx);
        ax |= ax;
        if (ax <= 0) {
            goto label_1;
        }
        cl--;
        if (cl < 0) {
            goto label_1;
        }
        ch = al;
        ch -= 0x30;
        if (ch < 0) {
            goto label_1;
        }
        if (ch >= 0xa) {
            ch -= 0x11;
            if (ch < 0) {
                goto label_1;
            }
            if (ch >= 6) {
                ch -= 0x20;
                if (ch < 0) {
                    goto label_1;
                }
                if (ch >= 6) {
                    goto label_1;
                }
            }
            ch += 0xa;
        }
        dx <<= 1;
        dx <<= 1;
        dx <<= 1;
        dx <<= 1;
        dl += ch;
    } while (1);
label_0:
    ax -= ax;
label_1:
    if (cl != 4) {
        cx += 3;
        void (*cx)() ();
    }
    return void (*0x1aeb)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x18cf */
#include <stdint.h>
 
void fcn_000018cf (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    return void (*0x1b2c)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1b92 */
#include <stdint.h>
 
void fcn_00001b92 (void) {
    uint16_t (*0x5e2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1b96 */
#include <stdint.h>
 
void fcn_00001b96 (void) {
    uint16_t (*0x5e4)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1b9a */
#include <stdint.h>
 
void fcn_00001b9a (void) {
    uint16_t (*0x5e6)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x196f */
#include <stdint.h>
 
void fcn_0000196f (int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    return void (*0x1b06)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchfn/ia32_mz_from_dcc/subject.exe @ 0x1b9e */
#include <stdint.h>
 
void fcn_00001b9e (int16_t arg3) {
    bx = arg3;
    bl -= 0x30;
    if (bl < 0) {
        goto label_0;
    }
    if (bl > 9) {
        if (bl <= 0x2a) {
            bl -= 7;
        } else {
            bl -= 0x27;
        }
        if (bl <= 9) {
            goto label_0;
        }
    }
    if (bl >= cl) {
        goto label_0;
    }
    __asm ("clc");
    bh = 0;
    do {
        goto label_1;
label_0:
        __asm ("stc");
    } while (1);
label_1:
}
