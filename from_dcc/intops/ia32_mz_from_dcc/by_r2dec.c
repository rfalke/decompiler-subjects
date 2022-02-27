/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x0 */
#include <stdint.h>
 
void entry0 (int16_t arg1) {
    ax = arg1;
    /* [00] -rwx section size 4176 named seg_000 */
    dx = 0x105;
    *(cs:0x1f8) = dx;
    ah = 0x30;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x162 */
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x2c7 */
#include <stdint.h>
 
int16_t fcn_000002c7 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    *(cs:0x2c3) = ds;
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
        __asm ("jcxz 0x378");
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
    fcn_00000350 ();
    if (bx > 0) {
        goto label_3;
    }
    do {
        if (bx < 0) {
            goto label_4;
        }
        al = fcn_00000350 ();
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
    __asm ("jcxz 0x3a8");
    *(bp) = si;
    bp += 2;
    do {
        al = *(ss:);
        ss:++;
        al |= al;
        __asm ("loopne 0x3a0");
    } while (1);
    if (al == 0) {
        goto label_1;
    }
    ax = 0;
    *(bp) = ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x3b2 */
#include <stdint.h>
 
uint16_t fcn_000003b2 (void) {
    cx = *(0x8a);
    ax = fcn_00000501 (cx);
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
    ax = fcn_00000501 (*(0x8e));
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x292 */
#include <stdint.h>
 
int16_t fcn_00000292 (int16_t arg_4h) {
    while (ax != 0) {
        bx = *(0x20a);
        bx <<= 1;
        uint16_t (*bx + 0x42e)() ();
        ax = *(0x20a);
        *(0x20a)--;
        ax |= ax;
    }
    uint16_t (*0x200)() ();
    uint16_t (*0x202)() ();
    uint16_t (*0x204)() ();
    fcn_00000121 ();
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x1a5 */
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x1da */
#include <stdint.h>
 
void fcn_000001da (void) {
    ah = 0x40;
    bx = 2;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x8fa */
#include <stdint.h>
 
int16_t fcn_000008fa (int16_t arg_4h, int16_t arg_6h) {
    ax = 0xa30;
    ax = 0x21c;
    fcn_00000b22 (bp + 6, *((bp + 4)));
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0xb22 */
#include <stdint.h>
 
int16_t fcn_00000b22 (int16_t arg_6h, int16_t arg1) {
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
    al = fcn_00000b50 ();
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
        bl = *((bx + 0x3bf));
        ax = bx;
        if (ax > 0x17) {
            goto label_5;
        }
        bx = ax;
        bx <<= 1;
        /* switch table (24 cases) at 0xbf4 */
    }
label_5:
    si = *((bp - 0x8a));
    di = *((bp - 0x96));
    al = 0x25;
    do {
        al = fcn_00000b48 ();
        al = *(si);
        si++;
        al |= al;
    } while (al != 0);
label_4:
    if (*((bp - 0x55)) < 0x50) {
        fcn_00000b50 ();
    }
    if (*((bp - 2)) != 0) {
        ax = 0xffff;
    } else {
        ax = *((bp - 0x58));
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x121 */
#include <stdint.h>
 
uint16_t fcn_00000121 (void) {
    ds = *(cs:);
    fcn_000001a5 ();
    ax = uint16_t (*fcn.00000422)(uint16_t) (cs);
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x350 */
#include <stdint.h>
 
int16_t fcn_00000350 (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
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
    __asm ("jcxz 0x377");
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x501 */
#include <stdint.h>
 
int16_t fcn_00000501 (int16_t arg_4h) {
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
    if (*(0x472) == 0) {
        fcn_000004c7 (di);
        goto label_1;
    }
    si = *(0x470);
    ax = *(0x470);
    ax |= ax;
    if (ax == 0) {
        goto label_2;
    }
    do {
        ax = *(si);
        dx = di;
        dx += 0x28;
        if (ax >= dx) {
            fcn_00000450 (si, di);
            goto label_1;
        }
        ax = *(si);
        if (ax >= di) {
            fcn_00000422 (si);
            *(si)++;
            ax = si;
            ax += 4;
            goto label_1;
        }
        si = *((si + 6));
    } while (si != *(0x470));
label_2:
    fcn_0000048a (di);
label_1:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x598 */
#include <stdint.h>
 
int16_t fcn_00000598 (int16_t arg_4h, int16_t arg_6h) {
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x4c7 */
#include <stdint.h>
 
int16_t fcn_000004c7 (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_00000598 (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        *(0x472) = si;
        *(0x46e) = si;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        ax = si;
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x450 */
#include <stdint.h>
 
int16_t fcn_00000450 (int16_t arg_4h, int16_t arg_6h) {
    di = *((bp + 4));
    ax = *((bp + 6));
    *(di) -= ax;
    si = *(di);
    si += di;
    ax = *((bp + 6));
    ax++;
    *(si) = ax;
    *((si + 2)) = di;
    ax = *(0x46e);
    if (ax == di) {
        *(0x46e) = si;
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x422 */
#include <stdint.h>
 
int16_t fcn_00000422 (int16_t arg_4h) {
    di = *((bp + 4));
    ax = *((di + 6));
    *(0x470) = ax;
    if (ax == di) {
        *(0x470) = 0;
    } else {
        si = *((di + 4));
        bx = *(0x470);
        *((bx + 4)) = si;
        ax = *(0x470);
        *((si + 6)) = ax;
    }
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x48a */
#include <stdint.h>
 
int16_t fcn_0000048a (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_00000598 (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        ax = *(0x46e);
        *((si + 2)) = ax;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        *(0x46e) = si;
        ax = *(0x46e);
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x574 */
#include <stdint.h>
 
int16_t fcn_00000574 (int16_t arg_4h) {
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x6ff */
#include <stdint.h>
 
int16_t fcn_000006ff (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 4));
    bx <<= 1;
    if ((*((bx + 0x34c)) & 0x800) != 0) {
        ax = 2;
        ax = 0;
        ax = fcn_00000745 (*((bp + 4)), ax, ax, ax);
    }
    ah = 0x40;
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if ((*((bx + 0x34c)) & 0x800) >= 0) {
        bx = *((bp + 4));
        bx <<= 1;
        *((bx + 0x34c)) |= 0x1000;
    } else {
        fcn_00000256 (ax);
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x745 */
#include <stdint.h>
 
int32_t fcn_00000745 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x34c)) &= 0xfdff;
    ah = 0x42;
    al = *((bp + 0xa));
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (*((bx + 0x34c)) >= 0) {
    } else {
        fcn_00000256 (ax);
        edx:eax = (int64_t) eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x256 */
#include <stdint.h>
 
int32_t fcn_00000256 (int16_t arg_4h) {
    si = *((bp + 4));
    si |= si;
    if (si < 0) {
        goto label_0;
    }
    while (si > 0x23) {
        si = 0x57;
        *(0x1a4) = si;
        al = *((si + 0x1a6));
        eax = (int32_t) ax;
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        goto label_1;
label_0:
        si = -si;
    }
    *(0x1a4) = 0xffff;
label_1:
    ax = si;
    *(0x94) = ax;
    ax = 0xffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x770 */
#include <stdint.h>
 
int16_t fcn_00000770 (int16_t arg_4h, uint32_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg2) {
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
    __asm ("jcxz 0x7ba");
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
        __asm ("jcxz 0x7c1");
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
        __asm ("loop 0x7cd");
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x5ec */
#include <stdint.h>
 
int16_t fcn_000005ec (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h) {
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
    if ((*((bx + 0x34c)) & 0x8000) != 0) {
        fcn_000006ff (*((bp + 4)), *((bp + 6)), *((bp + 8)));
        goto label_0;
    }
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x34c)) &= 0xfdff;
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
            ax = fcn_000006ff (*((bp + 4)), bp - 0x82, di);
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
        ax = fcn_000006ff (*((bp + 4)), bp - 0x82, di);
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x92c */
#include <stdint.h>
 
int32_t fcn_0000092c (int16_t arg_4h, int16_t arg_6h) {
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
                ax = fcn_0000087c (si);
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
            ax = fcn_0000087c (si);
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
        ax = 0x3a6;
        al = *((si + 4));
        eax = (int32_t) ax;
        ax = fcn_000006ff (ax, ax, ax);
        if (ax != 1) {
            goto label_5;
        }
    }
label_4:
    ax = 1;
    al = *((si + 4));
    eax = (int32_t) ax;
    ax = fcn_000006ff (ax, bp + 4, ax);
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x87c */
#include <stdint.h>
 
int32_t fcn_0000087c (int16_t arg_4h) {
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
            ax = fcn_000005ec (ax, ax, di);
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0x913 */
#include <stdint.h>
 
int32_t fcn_00000913 (int16_t arg_4h, int16_t arg_6h, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 6));
    *(bx)--;
    al = *((bp + 4));
    eax = (int32_t) ax;
    fcn_0000092c (ax, *((bp + 6)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0xb50 */
#include <stdint.h>
 
uint16_t fcn_00000b50 (int16_t arg_8h, int16_t arg_ah, int16_t arg3, int16_t arg4, int16_t arg2) {
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0xa */
#include <stdint.h>
 
int32_t fcn_0000000a (int16_t arg1) {
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
    di = *(0x208);
    if (di < 0x200) {
        di = 0x200;
        *(0x208) = di;
    }
    di += 0x474;
    if (di >= 0) {
        di += *(0x206);
        if (di >= 0) {
            cl = 4;
            di >>= cl;
            di++;
            if (bp < di) {
                goto label_1;
            }
            if (*(0x208) != 0) {
                if (*(0x206) != 0) {
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
    di = 0x42e;
    cx = 0x474;
    cx -= di;
    *(es:di) = al;
    cx--;
    es:di++;
    uint16_t (*0x420)(uint16_t) (cs);
    fcn_000002c7 ();
    fcn_000003b2 ();
    ah = 0;
    eax = syscall_1ah (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x98) = dx;
    *(0x9a) = cx;
    uint16_t (*0x424)() ();
    ax = void (*0x1fa)(uint16_t*) (*(0x84));
    fcn_00000292 (ax);
label_3:
    cx = 0x1e;
    dx = 0x56;
    ds = *(cs:);
    fcn_000001da ();
    ax = 3;
    al = fcn_00000121 ();
    *((bx + si)) += al;
    do {
        *((bp - 2)) = 0xff;
    } while (cx != 0);
    si = 0x8f;
    ax = *((bp - 2));
    ax += si;
    si = ax;
    ax = *((bp - 2));
    ax -= si;
    *((bp - 2)) = ax;
    ax = *((bp - 2));
    dx:ax = ax * si;
    *((bp - 2)) = ax;
    ax = si;
    edx:eax = (int64_t) eax;
    ax = *(dx:ax) / bp - 2;
    dx = *(dx:ax) % bp - 2;
    si = ax;
    edx:eax = (int64_t) eax;
    ax = *(dx:ax) / bp - 2;
    dx = *(dx:ax) % bp - 2;
    si = dx;
    ax = *((bp - 2));
    cl = 5;
    ax <<= cl;
    *((bp - 2)) = ax;
    ax = si;
    cl = *((bp - 2));
    ax >>= cl;
    si = ax;
    ax = 0x194;
    fcn_000008fa (ax, *((bp - 2)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0xb48 */
#include <stdint.h>
 
void fcn_00000b48 (int16_t arg3, int16_t arg4, int16_t arg2) {
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
    return void (*0xb7b)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0xaf7 */
#include <stdint.h>
 
int8_t fcn_00000af7 (int16_t arg_4h) {
    dx = *((bp + 4));
    cx = 0xf04;
    bx = 0x3af;
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
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0xb3b */
#include <stdint.h>
 
int8_t fcn_00000b3b (void) {
    cx = 0xffff;
    al = 0;
    __asm ("repne scasb al, byte es:[di]");
    cx = ~cx;
    cx--;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/intops/ia32_mz_from_dcc/subject.exe @ 0xaf3 */
#include <stdint.h>
 
void fcn_00000af3 (void) {
    uint16_t (*0x426)() ();
}
