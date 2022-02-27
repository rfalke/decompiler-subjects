/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x0 */
#include <stdint.h>
 
int16_t entry0 (int16_t arg1) {
    ax = arg1;
    /* [00] -rwx section size 1536 named seg_000 */
    dx = 0x60;
    *(cs:0x1f8) = dx;
    ah = 0x30;
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
    di = *(0x19c);
    if (di < 0x200) {
        di = 0x200;
        *(0x19c) = di;
    }
    di += 0x1ec;
    if (di >= 0) {
        di += *(0x19a);
        if (di >= 0) {
            cl = 4;
            di >>= cl;
            di++;
            if (bp < di) {
                goto label_1;
            }
            if (*(0x19c) != 0) {
                if (*(0x19a) != 0) {
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
    di = 0x1a6;
    cx = 0x1ec;
    cx -= di;
    *(es:di) = al;
    cx--;
    es:di++;
    uint16_t (*0x1a0)(uint16_t) (cs);
    fcn_000002d5 ();
    fcn_000003c0 ();
    ah = 0;
    eax = syscall_1ah (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x98) = dx;
    *(0x9a) = cx;
    uint16_t (*0x1a4)() ();
    ax = fcn_00000283 ();
    fcn_000002a0 (ax);
label_3:
    cx = 0x1e;
    dx = 0x56;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x162 */
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
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x2d5 */
#include <stdint.h>
 
int16_t fcn_000002d5 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    *(cs:0x2d1) = ds;
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
        __asm ("jcxz 0x386");
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
    fcn_0000035e ();
    if (bx > 0) {
        goto label_3;
    }
    do {
        if (bx < 0) {
            goto label_4;
        }
        al = fcn_0000035e ();
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
    __asm ("jcxz 0x3b6");
    *(bp) = si;
    bp += 2;
    do {
        al = *(ss:);
        ss:++;
        al |= al;
        __asm ("loopne 0x3ae");
    } while (1);
    if (al == 0) {
        goto label_1;
    }
    ax = 0;
    *(bp) = ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x3c0 */
#include <stdint.h>
 
uint16_t fcn_000003c0 (void) {
    cx = *(0x8a);
    ax = fcn_0000050f (cx);
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
    ax = fcn_0000050f (*(0x8e));
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
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x283 */
#include <stdint.h>
 
uint16_t fcn_00000283 (void) {
    int16_t var_78h;
    int16_t var_50h;
    int16_t var_28h;
    ax = bp - 0x28;
    ax = bp - 0x50;
    ax = bp - 0x78;
    fcn_000001fa ();
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x1fa */
#include <stdint.h>
 
int16_t fcn_000001fa (void) {
    si = 0;
    goto label_2;
label_1:
    di = 0;
    goto label_3;
label_0:
    *((bp - 2)) = 0;
    while (*((bp - 2)) < 4) {
        bx = si;
        bx <<= 1;
        bx <<= 1;
        bx <<= 1;
        bx += *((bp + 4));
        ax = *((bp - 2));
        ax <<= 1;
        bx += ax;
        ax = *(bx);
        ax = *((bp - 2));
        dx = 0xa;
        dx:ax = ax * dx;
        bx = ax;
        bx += *((bp + 6));
        ax = di;
        ax <<= 1;
        bx += ax;
        dx:ax = ax * *(bx);
        ax = si;
        dx = 0xa;
        dx:ax = ax * dx;
        bx = ax;
        bx += *((bp + 8));
        ax = di;
        ax <<= 1;
        bx += ax;
        ax += *(bx);
        ax = si;
        dx = 0xa;
        dx:ax = ax * dx;
        bx = ax;
        bx += *((bp + 8));
        ax = di;
        ax <<= 1;
        bx += ax;
        *(bx) = ax;
        *((bp - 2))++;
    }
    di++;
label_3:
    if (di < 4) {
        goto label_0;
    }
    si++;
label_2:
    if (si < 5) {
        goto label_1;
    }
    di = ax;
    si = ax;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x2a0 */
#include <stdint.h>
 
int16_t fcn_000002a0 (int16_t arg_4h) {
    while (ax != 0) {
        bx = *(0x19e);
        bx <<= 1;
        uint16_t (*bx + 0x1a6)() ();
        ax = *(0x19e);
        *(0x19e)--;
        ax |= ax;
    }
    uint16_t (*0x194)() ();
    uint16_t (*0x196)() ();
    uint16_t (*0x198)() ();
    fcn_00000121 ();
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x1a5 */
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
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x1da */
#include <stdint.h>
 
void fcn_000001da (void) {
    ah = 0x40;
    bx = 2;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x121 */
#include <stdint.h>
 
uint16_t fcn_00000121 (void) {
label_0:
    ds = *(cs:);
    fcn_000001a5 ();
    ax = uint16_t (*0x1a2)(uint16_t) (cs);
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
    ds = *(cs:);
    fcn_000001da ();
    ax = 3;
    al = fcn_00000121 ();
    goto label_0;
    *((bx + si)) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x35e */
#include <stdint.h>
 
int16_t fcn_0000035e (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
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
    __asm ("jcxz 0x385");
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
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x50f */
#include <stdint.h>
 
int16_t fcn_0000050f (int16_t arg_4h) {
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
    if (*(0x1ea) == 0) {
        fcn_000004d5 (di);
        goto label_1;
    }
    si = *(0x1e8);
    ax = *(0x1e8);
    ax |= ax;
    if (ax == 0) {
        goto label_2;
    }
    do {
        ax = *(si);
        dx = di;
        dx += 0x28;
        if (ax >= dx) {
            fcn_0000045e (si, di);
            goto label_1;
        }
        ax = *(si);
        if (ax >= di) {
            fcn_00000430 (si);
            *(si)++;
            ax = si;
            ax += 4;
            goto label_1;
        }
        si = *((si + 6));
    } while (si != *(0x1e8));
label_2:
    fcn_00000498 (di);
label_1:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x5a6 */
#include <stdint.h>
 
int16_t fcn_000005a6 (int16_t arg_4h, int16_t arg_6h) {
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
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x4d5 */
#include <stdint.h>
 
int16_t fcn_000004d5 (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_000005a6 (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        *(0x1ea) = si;
        *(0x1e6) = si;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        ax = si;
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x45e */
#include <stdint.h>
 
int16_t fcn_0000045e (int16_t arg_4h, int16_t arg_6h) {
    di = *((bp + 4));
    ax = *((bp + 6));
    *(di) -= ax;
    si = *(di);
    si += di;
    ax = *((bp + 6));
    ax++;
    *(si) = ax;
    *((si + 2)) = di;
    ax = *(0x1e6);
    if (ax == di) {
        *(0x1e6) = si;
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
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x430 */
#include <stdint.h>
 
int16_t fcn_00000430 (int16_t arg_4h) {
    di = *((bp + 4));
    ax = *((di + 6));
    *(0x1e8) = ax;
    if (ax == di) {
        *(0x1e8) = 0;
    } else {
        si = *((di + 4));
        bx = *(0x1e8);
        *((bx + 4)) = si;
        ax = *(0x1e8);
        *((si + 6)) = ax;
    }
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x498 */
#include <stdint.h>
 
int16_t fcn_00000498 (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_000005a6 (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        ax = *(0x1e6);
        *((si + 2)) = ax;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        *(0x1e6) = si;
        ax = *(0x1e6);
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/matrixmu/ia32_mz_from_dcc/subject.exe @ 0x582 */
#include <stdint.h>
 
int16_t fcn_00000582 (int16_t arg_4h) {
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
