/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x0 */
#include <stdint.h>
 
void entry0 (int16_t arg1) {
    ax = arg1;
    /* [00] -rwx section size 7920 named seg_000 */
    dx = 0x1ef;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x3 */
#include <stdint.h>
 
void fcn_00000003 (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    *(cs:0x1f8) = dx;
    ah = 0x30;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x162 */
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x3ca */
#include <stdint.h>
 
int16_t fcn_000003ca (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    *(cs:0x3c6) = ds;
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
        __asm ("jcxz 0x47b");
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
    fcn_00000453 ();
    if (bx > 0) {
        goto label_3;
    }
    if (bx < 0) {
        do {
            goto label_4;
        }
        al = fcn_00000453 ();
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
    __asm ("jcxz 0x4ab");
    *(bp) = si;
    bp += 2;
    do {
        al = *(ss:);
        ss:++;
        al |= al;
        __asm ("loopne 0x4a3");
    } while (1);
    if (al == 0) {
        goto label_1;
    }
    ax = 0;
    *(bp) = ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x4b5 */
#include <stdint.h>
 
uint16_t fcn_000004b5 (void) {
    cx = *(0x8a);
    ax = fcn_00000604 (cx);
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
    ax = fcn_00000604 (*(0x8e));
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x395 */
#include <stdint.h>
 
int16_t fcn_00000395 (int16_t arg_4h) {
    while (ax != 0) {
        bx = *(0x226);
        bx <<= 1;
        uint16_t (*bx + 0x5d0)() ();
        ax = *(0x226);
        *(0x226)--;
        ax |= ax;
    }
    uint16_t (*0x21c)() ();
    uint16_t (*0x21e)() ();
    uint16_t (*0x220)() ();
    fcn_00000121 ();
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1a5 */
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1da */
#include <stdint.h>
 
void fcn_000001da (void) {
    ah = 0x40;
    bx = 2;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1768 */
#include <stdint.h>
 
uint16_t fcn_00001768 (int16_t arg_4h, int16_t arg_6h) {
    ax = 0x32a;
    ax = 0x1e9c;
    ax = fcn.00000886;
    fcn_00001787 (ax, ax, ax, *((bp + 4)), bp + 6);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1787 */
#include <stdint.h>
 
int32_t fcn_00001787 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, uint32_t arg3) {
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
    if (*((di + 0x542)) != 1) {
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
        if (*((bx + 0x542)) != 1) {
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
        bl = *((di + 0x542));
        bh = 0;
        ax = bx;
        if (ax > 0x15) {
            goto label_6;
        }
        bx = ax;
        bx <<= 1;
        /* switch table (22 cases) at 0x184b */
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xedf */
#include <stdint.h>
 
int16_t fcn_00000edf (int16_t arg_4h, int16_t arg_6h) {
    ax = 0x1015;
    ax = 0x33a;
    fcn_00001107 (bp + 6, *((bp + 4)));
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1107 */
#include <stdint.h>
 
int16_t fcn_00001107 (int16_t arg_6h, int16_t arg1) {
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
    al = fcn_00001135 ();
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
        bl = *((bx + 0x4e1));
        ax = bx;
        if (ax > 0x17) {
            goto label_5;
        }
        bx = ax;
        bx <<= 1;
        /* switch table (24 cases) at 0x11d9 */
    }
label_5:
    si = *((bp - 0x8a));
    di = *((bp - 0x96));
    al = 0x25;
    do {
        al = fcn_0000112d ();
        al = *(si);
        si++;
        al |= al;
    } while (al != 0);
label_4:
    if (*((bp - 0x55)) < 0x50) {
        fcn_00001135 ();
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
    dx += dx;
    ax |= 0xdd7;
    __asm ("xlatb");
    ax |= 0xdd7;
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1deb */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_00001deb (void) {
    cx = 2;
    di = cx;
    ax = *((bp + 0xa));
    dx = *((bp + 0xc));
    bx = *((bp + 0xe));
    cx = *((bp + 0x10));
    cx |= cx;
    if (cx == 0) {
        dx |= dx;
        if (dx == 0) {
            goto label_0;
        }
        bx |= bx;
        if (bx == 0) {
            goto label_0;
        }
    }
    if ((di & 1) == 0) {
        dx |= dx;
        if (dx < 0) {
            dx = -dx;
            ax = -ax;
            di |= 0xc;
        }
        cx |= cx;
        if (cx >= 0) {
            goto label_1;
        }
        cx = -cx;
        bx = -bx;
        di ^= 4;
    }
label_1:
    cx = 0x20;
    di = 0;
    si = 0;
    do {
        ax <<= 1;
        dx = rotate_left16 (dx, 1);
        si = rotate_left16 (si, 1);
        di = rotate_left16 (di, 1);
        if (di >= bp) {
            if (di <= bp) {
                if (si < bx) {
                    goto label_2;
                }
            }
            si -= bx;
            di -= bp;
            ax++;
        }
label_2:
        __asm ("loop 0x1e3e");
    } while (1);
    bx = di;
    if ((bx & 2) != 0) {
        ax = si;
        dx = di;
        bx >>= 1;
    }
    if ((bx & 4) == 0) {
        goto label_3;
    }
    dx = -dx;
    ax = -ax;
    do {
label_3:
        si = di;
        __asm ("retf 8");
label_0:
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        if ((di & 2) != 0) {
            ax = dx;
        }
        dx = 0;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x121 */
#include <stdint.h>
 
uint16_t fcn_00000121 (void) {
    ds = *(cs:);
    fcn_000001a5 ();
    ax = uint16_t (*0x5c4)(uint16_t) (cs);
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x453 */
#include <stdint.h>
 
int16_t fcn_00000453 (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
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
    __asm ("jcxz 0x47a");
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x604 */
#include <stdint.h>
 
int16_t fcn_00000604 (int16_t arg_4h) {
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
    if (*(0x614) == 0) {
        fcn_000005ca (di);
        goto label_1;
    }
    si = *(0x612);
    ax = *(0x612);
    ax |= ax;
    if (ax == 0) {
        goto label_2;
    }
    do {
        ax = *(si);
        dx = di;
        dx += 0x28;
        if (ax >= dx) {
            fcn_00000553 (si, di);
            goto label_1;
        }
        ax = *(si);
        if (ax >= di) {
            fcn_00000525 (si);
            *(si)++;
            ax = si;
            ax += 4;
            goto label_1;
        }
        si = *((si + 6));
    } while (si != *(0x612));
label_2:
    fcn_0000058d (di);
label_1:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x69b */
#include <stdint.h>
 
int16_t fcn_0000069b (int16_t arg_4h, int16_t arg_6h) {
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x5ca */
#include <stdint.h>
 
int16_t fcn_000005ca (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_0000069b (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        *(0x614) = si;
        *(0x610) = si;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        ax = si;
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x553 */
#include <stdint.h>
 
int16_t fcn_00000553 (int16_t arg_4h, int16_t arg_6h) {
    di = *((bp + 4));
    ax = *((bp + 6));
    *(di) -= ax;
    si = *(di);
    si += di;
    ax = *((bp + 6));
    ax++;
    *(si) = ax;
    *((si + 2)) = di;
    ax = *(0x610);
    if (ax == di) {
        *(0x610) = si;
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x525 */
#include <stdint.h>
 
int16_t fcn_00000525 (int16_t arg_4h) {
    di = *((bp + 4));
    ax = *((di + 6));
    *(0x612) = ax;
    if (ax == di) {
        *(0x612) = 0;
    } else {
        si = *((di + 4));
        bx = *(0x612);
        *((bx + 4)) = si;
        ax = *(0x612);
        *((si + 6)) = ax;
    }
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x58d */
#include <stdint.h>
 
int16_t fcn_0000058d (int16_t arg_4h) {
    ax = *((bp + 4));
    dx = 0;
    ax &= 0xffff;
    dx = 0;
    ax = fcn_0000069b (ax, dx);
    si = ax;
    if (si == -1) {
        ax = 0;
    } else {
        ax = *(0x610);
        *((si + 2)) = ax;
        ax = *((bp + 4));
        ax++;
        *(si) = ax;
        *(0x610) = si;
        ax = *(0x610);
        ax += 4;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x677 */
#include <stdint.h>
 
int16_t fcn_00000677 (int16_t arg_4h) {
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xe61 */
#include <stdint.h>
 
int32_t fcn_00000e61 (int16_t arg_4h) {
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
            ax = fcn_00000b63 (ax, ax, di);
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x6ef */
#include <stdint.h>
 
int16_t fcn_000006ef (int16_t arg_4h) {
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xcbc */
#include <stdint.h>
 
int32_t fcn_00000cbc (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x46a)) &= 0xfdff;
    ah = 0x42;
    al = *((bp + 0xa));
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (*((bx + 0x46a)) >= 0) {
    } else {
        fcn_00000359 (ax);
        edx:eax = (int64_t) eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1e85 */
#include <stdint.h>
 
int16_t fcn_00001e85 (int16_t arg_4h) {
    ax = 1;
    ax = 0;
    fcn_00000cbc (*((bp + 4)), ax, ax, ax, bp);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x7ef */
#include <stdint.h>
 
int16_t fcn_000007ef (void) {
    di = 0x14;
    si = 0x32a;
    while (ax != 0) {
        ax = *((si + 2));
        ax &= 0x300;
        if (ax == 0x300) {
            fcn_00000e61 (si);
        }
        si += 0x10;
        ax = di;
        di--;
        ax |= ax;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xa8b */
#include <stdint.h>
 
int16_t fcn_00000a8b (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h) {
    int16_t var_4h;
    int16_t var_1h;
    ax = *((bp + 8));
    ax++;
    if (ax >= 2) {
        bx = *((bp + 4));
        bx <<= 1;
        if ((*((bx + 0x46a)) & 0x200) == 0) {
            goto label_1;
        }
    }
    ax = 0;
    goto label_2;
label_1:
    ax = fcn_00000b47 (*((bp + 4)), *((bp + 6)), *((bp + 8)));
    *((bp - 4)) = ax;
    ax = *((bp - 4));
    ax++;
    if (ax >= 2) {
        bx = *((bp + 4));
        bx <<= 1;
        if ((*((bx + 0x46a)) & 0x8000) == 0) {
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
        __asm ("loop 0xae9");
    } while (1);
    goto label_6;
label_5:
    __asm ("loop 0xae9");
    goto label_0;
    ax = 1;
    fcn_00000b47 (*((bp + 4)), bp - 1, ax, bx);
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
    fcn_00000cbc (*((bp + 4)), cx, ax, ax, bx);
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x46a)) |= 0x200;
label_7:
    ax = di;
    ax -= bx;
label_2:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x886 */
#include <stdint.h>
 
int32_t fcn_00000886 (int16_t arg_4h) {
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
        ax = fcn_00000816 (si);
        ax |= ax;
        if (ax != 0) {
            ax = 0xffff;
            goto label_1;
        }
    } while (1);
label_2:
    if (*(0x492) != 0) {
        goto label_3;
    }
    ax = 0x32a;
    if (ax != si) {
        goto label_3;
    }
    al = *((si + 4));
    eax = (int32_t) ax;
    ax = fcn_00000986 (ax);
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
    fcn_00000998 (si, ax, ax);
    goto label_0;
    do {
label_3:
        if ((*((si + 2)) & 0x200) != 0) {
            fcn_000007ef ();
        }
        ax = 1;
        al = *((si + 4));
        eax = (int32_t) ax;
        ax = fcn_00000b47 (ax, bp - 1, ax);
        if (ax != 1) {
            al = *((si + 4));
            eax = (int32_t) ax;
            ax = fcn_00000df3 (ax);
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x816 */
#include <stdint.h>
 
int32_t fcn_00000816 (int16_t arg_4h) {
    si = *((bp + 4));
    if ((*((si + 2)) & 0x200) != 0) {
        fcn_000007ef ();
    }
    ax = *((si + 8));
    *((si + 0xa)) = ax;
    al = *((si + 4));
    eax = (int32_t) ax;
    ax = fcn_00000a8b (ax, ax, *((si + 6)));
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x986 */
#include <stdint.h>
 
int16_t fcn_00000986 (int16_t arg_4h, int16_t arg2) {
    dx = arg2;
    ax = 0x4400;
    bx = *((bp + 4));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = dx;
    ax &= 0x80;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x998 */
#include <stdint.h>
 
int16_t fcn_00000998 (int16_t arg_4h, uint32_t arg_6h, signed int16_t arg_8h, int16_t arg_ah) {
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
    if (*(0x494) == 0) {
        ax = 0x33a;
        if (ax == si) {
            *(0x494) = 1;
        }
    } else {
        if (*(0x492) != 0) {
            goto label_3;
        }
        ax = 0x32a;
        if (ax != si) {
            goto label_3;
        }
        *(0x492) = 1;
    }
label_3:
    if (*(si) != 0) {
        ax = 1;
        ax = 0;
        fcn_00000736 (si, ax, ax, ax);
    }
    if ((*((si + 2)) & 4) != 0) {
        fcn_00001741 (*((si + 8)));
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
        *(0x21c) = 0xa6a;
        if (*((bp + 6)) == 0) {
            ax = fcn_00000604 (di);
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xb47 */
#include <stdint.h>
 
void fcn_00000b47 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg1) {
    ax = arg1;
    ah = 0x3f;
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
    } else {
        fcn_00000359 (ax);
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xdf3 */
#include <stdint.h>
 
int16_t fcn_00000df3 (int16_t arg_4h) {
    uint32_t var_4h;
    uint32_t var_2h;
    bx = *((bp + 4));
    bx <<= 1;
    if ((*((bx + 0x46a)) & 0x200) != 0) {
        ax = 1;
    } else {
        ax = 0x4400;
        bx = *((bp + 4));
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        if ((*((bx + 0x46a)) & 0x200) >= 0) {
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
            fcn_00000359 (ax);
        }
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x736 */
#include <stdint.h>
 
int32_t fcn_00000736 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, uint32_t arg_ah) {
    si = *((bp + 4));
    ax = fcn_00000e61 (si);
    ax |= ax;
    if (ax != 0) {
        ax = 0xffff;
    } else {
        if (*((bp + 0xa)) == 1) {
            if (*(si) <= 0) {
                goto label_0;
            }
            ax = fcn_000006ef (si);
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
        ax = fcn_00000cbc (ax, *((bp + 6)), *((bp + 8)), *((bp + 0xa)));
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1741 */
#include <stdint.h>
 
int16_t fcn_00001741 (int16_t arg_4h) {
    si = *((bp + 4));
    si |= si;
    if (si == 0) {
    } else {
        ax = si;
        ax += 0xfffc;
        si = ax;
        if (si == *(0x610)) {
            fcn_0000169a ();
        } else {
            fcn_000016f3 (si);
        }
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x359 */
#include <stdint.h>
 
int32_t fcn_00000359 (int16_t arg_4h) {
    si = *((bp + 4));
    si |= si;
    if (si < 0) {
        goto label_0;
    }
    while (si > 0x23) {
        si = 0x57;
        *(0x1c0) = si;
        al = *((si + 0x1c2));
        eax = (int32_t) ax;
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        goto label_1;
label_0:
        si = -si;
    }
    *(0x1c0) = 0xffff;
label_1:
    ax = si;
    *(0x94) = ax;
    ax = 0xffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xc76 */
#include <stdint.h>
 
int16_t fcn_00000c76 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 4));
    bx <<= 1;
    if ((*((bx + 0x46a)) & 0x800) != 0) {
        ax = 2;
        ax = 0;
        ax = fcn_00000cbc (*((bp + 4)), ax, ax, ax);
    }
    ah = 0x40;
    bx = *((bp + 4));
    cx = *((bp + 8));
    dx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if ((*((bx + 0x46a)) & 0x800) >= 0) {
        bx = *((bp + 4));
        bx <<= 1;
        *((bx + 0x46a)) |= 0x1000;
    } else {
        fcn_00000359 (ax);
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xce7 */
#include <stdint.h>
 
int16_t fcn_00000ce7 (int16_t arg_4h, uint32_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg2) {
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
    __asm ("jcxz 0xd31");
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
        __asm ("jcxz 0xd38");
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
        __asm ("loop 0xd44");
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xb63 */
#include <stdint.h>
 
int16_t fcn_00000b63 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h) {
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
    if ((*((bx + 0x46a)) & 0x8000) != 0) {
        fcn_00000c76 (*((bp + 4)), *((bp + 6)), *((bp + 8)));
        goto label_0;
    }
    bx = *((bp + 4));
    bx <<= 1;
    *((bx + 0x46a)) &= 0xfdff;
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
            ax = fcn_00000c76 (*((bp + 4)), bp - 0x82, di);
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
        ax = fcn_00000c76 (*((bp + 4)), bp - 0x82, di);
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xf11 */
#include <stdint.h>
 
int32_t fcn_00000f11 (int16_t arg_4h, int16_t arg_6h) {
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
                ax = fcn_00000e61 (si);
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
            ax = fcn_00000e61 (si);
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
        ax = 0x4c8;
        al = *((si + 4));
        eax = (int32_t) ax;
        ax = fcn_00000c76 (ax, ax, ax);
        if (ax != 1) {
            goto label_5;
        }
    }
label_4:
    ax = 1;
    al = *((si + 4));
    eax = (int32_t) ax;
    ax = fcn_00000c76 (ax, bp + 4, ax);
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xef8 */
#include <stdint.h>
 
int32_t fcn_00000ef8 (int16_t arg_4h, int16_t arg_6h, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 6));
    *(bx)--;
    al = *((bp + 4));
    eax = (int32_t) ax;
    fcn_00000f11 (ax, *((bp + 6)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1135 */
#include <stdint.h>
 
uint16_t fcn_00001135 (int16_t arg_8h, int16_t arg_ah, int16_t arg3, int16_t arg4, int16_t arg2) {
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0xa */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
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
                goto label_2;
            }
            dh &= 0xdf;
            *(0x96)++;
            if (dh != 0x59) {
                goto label_2;
            }
            *(0x96)++;
        }
label_2:
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
    di = *(0x224);
    if (di < 0x200) {
        di = 0x200;
        *(0x224) = di;
    }
    di += 0x616;
    if (di >= 0) {
        di += *(0x222);
        if (di >= 0) {
            cl = 4;
            di >>= cl;
            di++;
            if (bp < di) {
                goto label_3;
            }
            if (*(0x224) != 0) {
                if (*(0x222) != 0) {
                    goto label_4;
                }
            }
            di = 0x1000;
            if (bp > di) {
                goto label_4;
            }
            di = bp;
        }
    } else {
label_3:
        goto label_5;
    }
label_4:
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
    di = 0x5d0;
    cx = 0x616;
    cx -= di;
    *(es:di) = al;
    cx--;
    es:di++;
    uint16_t (*0x5c2)(uint16_t) (cs);
    fcn_000003ca ();
    fcn_000004b5 ();
    ah = 0;
    eax = syscall_1ah (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x98) = dx;
    *(0x9a) = cx;
    uint16_t (*0x5c6)() ();
    ax = void (*0x1fa)(uint16_t*) (*(0x84));
    fcn_00000395 (ax);
label_5:
    cx = 0x1e;
    dx = 0x56;
    ds = *(cs:);
    fcn_000001da ();
    ax = 3;
    al = fcn_00000121 ();
    *((bx + si)) += al;
    do {
    } while (cx != 0);
    ax = 0x194;
    fcn_00001768 (ax, bp - 4);
    ax = 0x198;
    fcn_00000edf (ax, *((bp - 4)));
    ax = 0x1b2;
    fcn_00001768 (ax, bp - 0x14);
    ax = 0x1b6;
    fcn_00001768 (ax, bp - 0x10);
    *((bp - 6)) = 0;
    *((bp - 8)) = 1;
    goto label_6;
label_1:
    *((bp - 0xa)) = 0;
    *((bp - 0xc)) = 1;
    while (1) {
label_0:
        dx = *((bp - 0x12));
        ax = *((bp - 0x14));
        ax += *((bp - 0x10));
        dx += *((bp - 0xe));
        ax += *((bp - 0xc));
        dx += *((bp - 0xa));
        *((bp - 0x12)) = dx;
        *((bp - 0x14)) = ax;
        dx = *((bp - 0x12));
        ax = *((bp - 0x14));
        dx >>= 1;
        ax = rotate_right16 (ax, 1);
        *((bp - 0xe)) = dx;
        *((bp - 0x10)) = ax;
        dx = 0;
        ax = 0xa;
        __asm ("lcall fcn.00001deb");
        *((bp - 0x12)) = dx;
        *((bp - 0x14)) = ax;
        dx = *((bp - 0xe));
        ax = *((bp - 0x10));
        if (dx == *((bp - 0xa))) {
            if (ax == *((bp - 0xc))) {
                ax = 1;
            }
        } else {
            ax = 0;
        }
        edx:eax = (int64_t) eax;
        *((bp - 0x12)) = dx;
        *((bp - 0x14)) = ax;
        dx = *((bp - 0x12));
        ax = *((bp - 0x14));
        ax |= *((bp - 0xc));
        dx |= *((bp - 0xa));
        *((bp - 0xe)) = dx;
        *((bp - 0x10)) = ax;
        ax = *((bp - 0x10));
        ax |= *((bp - 0xe));
        if (ax == 0) {
            ax = 1;
        } else {
            ax = 0;
        }
        edx:eax = (int64_t) eax;
        *((bp - 0x12)) = dx;
        *((bp - 0x14)) = ax;
        dx = *((bp - 0x12));
        ax = *((bp - 0x14));
        ax += *((bp - 0xc));
        dx += *((bp - 0xa));
        *((bp - 0xe)) = dx;
        *((bp - 0x10)) = ax;
        dx = *((bp - 0xe));
        ax = *((bp - 0x10));
        if (dx >= *((bp - 0xa))) {
            if (dx <= *((bp - 0xa))) {
                if (ax <= *((bp - 0xc))) {
                    goto label_7;
                }
            }
            ax = 1;
        } else {
label_7:
            ax = 0;
        }
        edx:eax = (int64_t) eax;
        *((bp - 0x12)) = dx;
        *((bp - 0x14)) = ax;
        *((bp - 0xc))++;
        *((bp - 0xa)) += 0;
        if (*((bp - 0xa)) >= 0) {
            goto label_8;
        }
    }
    if (*((bp - 0xa)) <= 0) {
label_8:
        if (*((bp - 0xc)) > 0x28) {
            goto label_9;
        }
        goto label_0;
    }
label_9:
    *((bp - 8))++;
    *((bp - 6)) += 0;
label_6:
    dx = *((bp - 6));
    ax = *((bp - 8));
    if (dx < *((bp - 2))) {
        goto label_1;
    }
    if (dx <= *((bp - 2))) {
        if (ax > *((bp - 4))) {
            goto label_10;
        }
        goto label_1;
    }
label_10:
    ax = 0x1ba;
    fcn_00000edf (ax, *((bp - 0x14)));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x112d */
#include <stdint.h>
 
void fcn_0000112d (int16_t arg3, int16_t arg4, int16_t arg2) {
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
    return void (*0x1160)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x10dc */
#include <stdint.h>
 
int8_t fcn_000010dc (int16_t arg_4h) {
    dx = *((bp + 4));
    cx = 0xf04;
    bx = 0x4d1;
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1120 */
#include <stdint.h>
 
int8_t fcn_00001120 (void) {
    cx = 0xffff;
    al = 0;
    __asm ("repne scasb al, byte es:[di]");
    cx = ~cx;
    cx--;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x10d8 */
#include <stdint.h>
 
void fcn_000010d8 (void) {
    uint16_t (*0x5c8)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x6cf */
#include <stdint.h>
 
void fcn_000006cf (int16_t arg_4h) {
    fcn_00000677 (*((bp + 4)));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x162a */
#include <stdint.h>
 
int16_t fcn_0000162a (int16_t arg_4h) {
    si = *((bp + 4));
    if (*(0x612) != 0) {
        bx = *(0x612);
        di = *((bx + 6));
        bx = *(0x612);
        *((bx + 6)) = si;
        *((di + 4)) = si;
        *((si + 6)) = di;
        ax = *(0x612);
        *((si + 4)) = ax;
    } else {
        *(0x612) = si;
        *((si + 4)) = si;
        *((si + 6)) = si;
    }
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1663 */
#include <stdint.h>
 
int16_t fcn_00001663 (int16_t arg_4h, int16_t arg_6h) {
    int16_t var_2h;
    si = *((bp + 6));
    di = *((bp + 4));
    ax = *(si);
    *(di) += ax;
    ax = *(0x610);
    if (ax == si) {
        *(0x610) = di;
    } else {
        ax = *(si);
        ax += si;
        *((bp - 2)) = ax;
        bx = *((bp - 2));
        *((bx + 2)) = di;
    }
    fcn_00000525 (si);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x169a */
#include <stdint.h>
 
int16_t fcn_0000169a (void) {
    ax = *(0x614);
    if (ax == *(0x610)) {
        ax = fcn_000006cf (*(0x614));
        ax = 0;
        *(0x610) = ax;
        *(0x614) = ax;
    } else {
        bx = *(0x610);
        si = *((bx + 2));
        if ((*(si) & 1) == 0) {
            ax = fcn_00000525 (si);
            if (si == *(0x614)) {
                ax = 0;
                *(0x610) = ax;
                *(0x614) = ax;
            } else {
                ax = *((si + 2));
                *(0x610) = ax;
            }
            fcn_000006cf (si);
        } else {
            fcn_000006cf (*(0x610));
            *(0x610) = si;
        }
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x16f3 */
#include <stdint.h>
 
int16_t fcn_000016f3 (int16_t arg_4h) {
    int16_t var_2h;
    si = *((bp + 4));
    *(si)--;
    ax = *(si);
    ax += si;
    *((bp - 2)) = ax;
    di = *((si + 2));
    if ((*(di) & 1) == 0) {
        if (si != *(0x614)) {
            ax = *(si);
            *(di) += ax;
            bx = *((bp - 2));
            *((bx + 2)) = di;
            si = di;
        }
    } else {
        fcn_0000162a (si);
    }
    bx = *((bp - 2));
    if ((*(bx) & 1) == 0) {
        fcn_00001663 (si, *((bp - 2)));
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1c60 */
#include <stdint.h>
 
int32_t fcn_00001c60 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg_10h, int16_t arg3, int16_t arg1) {
    uint32_t var_5h;
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    ax = arg1;
    *((bp - 5)) = 0;
    *((bp - 4)) = 0;
    *((bp - 2)) = 1;
    di = 0x229;
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
                __asm ("jcxz 0x1d0f");
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
    ax = fcn_00001c32 ();
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
        ax = fcn_00001c32 ();
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
        ax = fcn_00001c32 ();
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x179c */
#include <stdint.h>
 
void fcn_0000179c (int16_t arg_ch) {
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
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x192c */
#include <stdint.h>
 
uint16_t fcn_0000192c (int16_t arg_4h, int16_t arg_8h, uint32_t arg3, int16_t arg1) {
    int16_t var_26h;
    bx = arg3;
    ax = arg1;
    while (*((bx + 0x542)) == 1) {
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
    return void (*0x1b7f)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1943 */
#include <stdint.h>
 
uint16_t fcn_00001943 (int16_t arg_4h, int16_t arg_8h, int16_t arg2, int16_t arg1) {
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
    return void (*0x1b7f)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1963 */
#include <stdint.h>
 
void fcn_00001963 (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    return void (*0x1bc0)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1c26 */
#include <stdint.h>
 
void fcn_00001c26 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1c2a */
#include <stdint.h>
 
void fcn_00001c2a (void) {
    uint16_t (*0x5cc)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1c2e */
#include <stdint.h>
 
void fcn_00001c2e (void) {
    uint16_t (*0x5ce)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1a03 */
#include <stdint.h>
 
void fcn_00001a03 (int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    return void (*0x1b9a)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/benchlng/ia32_mz_from_dcc/subject.exe @ 0x1c32 */
#include <stdint.h>
 
void fcn_00001c32 (int16_t arg3) {
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
