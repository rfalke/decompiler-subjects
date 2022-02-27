/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x0 */
#include <stdint.h>
 
int16_t entry0 (int16_t arg1) {
    ax = arg1;
    /* [00] -rwx section size 1968 named seg_000 */
    dx = 0x5b6;
    *(cs:0x1c7) = dx;
    ah = 0x30;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    bp = *(2);
    bx = *(0x2c);
    ds = dx;
    *(0x7d) = ax;
    *(0x7b) = es;
    *(0x77) = bx;
    *(0x91) = bp;
    *(0x81) = 0xffff;
    fcn_0000012f ();
    __asm ("les di, [0x75]");
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
            *(0x81)++;
            if (dh != 0x59) {
                goto label_0;
            }
            *(0x81)++;
        }
label_0:
        __asm ("repne scasb al, byte es:[di]");
        __asm ("jcxz 0x99");
        bx++;
    } while (*(es:di) != al);
    ch |= 0x80;
    cx = -cx;
    *(0x75) = cx;
    cx = 2;
    bx <<= cl;
    bx += 0x10;
    bx &= 0xfff0;
    *(0x79) = bx;
    dx = ss;
    bp -= dx;
    di = *(0x376);
    if (di < 0x200) {
        di = 0x200;
        *(0x376) = di;
    }
    cl = 4;
    di >>= cl;
    di++;
    if (bp < di) {
    } else {
        bx = di;
        bx += dx;
        *(0x89) = bx;
        *(0x8d) = bx;
        ax = *(0x7b);
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
        di = 0x618;
        cx = 0x6c2;
        cx -= di;
        *(es:di) = al;
        cx--;
        es:di++;
        uint16_t (*0x5fe)(uint16_t) (cs);
        __asm ("lcall fcn.000005cf");
        __asm ("lcall fcn.000006cd");
        ah = 0;
        eax = syscall_1ah (eax, ebx, ecx, edx, esi, edi, edp);
        *(0x83) = dx;
        *(0x85) = cx;
        ax = uint16_t (*0x602)(uint16_t) (cs);
        __asm ("lcall fcn.000007b4");
        __asm ("lcall fcn.00003ca2");
    }
    cx = 0x1e;
    dx = 0x3d;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4ca2 */
#include <stdint.h>
 
int32_t fcn_00004ca2 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 6));
    bx <<= 1;
    *((bx + 0x518)) &= 0xfdff;
    ah = 0x42;
    al = *((bp + 0xc));
    bx = *((bp + 6));
    cx = *((bp + 0xa));
    dx = *((bp + 8));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (*((bx + 0x518)) >= 0) {
        /* [30] -rwx section size 256 named seg_030 */
    } else {
        __asm ("lcall fcn.00003c66");
        edx:eax = (int64_t) eax;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5a02 */
#include <stdint.h>
 
int16_t fcn_00005a02 (int16_t arg_6h, int16_t arg_8h, int16_t arg3) {
    int16_t var_8h;
    int16_t var_6h;
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 6]");
    *(es:bx)--;
    __asm ("les bx, [bp + 6]");
    cx = *((es:bx + 2));
    bx = *(es:bx);
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("lcall fcn.00000711");
    *((bp - 6)) = dx;
    *((bp - 8)) = ax;
    __asm ("les bx, [bp + 6]");
    __asm ("les bx, es:[bx + 4]");
    *((bp - 2)) = es;
    *((bp - 4)) = bx;
    __asm ("les bx, [bp - 4]");
    dx = *((es:bx + 2));
    ax = *(es:bx);
    ax &= 1;
    dx = 0;
    dx |= ax;
    if (dx == 0) {
        cx = *(0x37c);
        bx = *(0x37a);
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("lcall fcn.0000076c");
        if (dx != 0) {
            __asm ("les bx, [bp + 6]");
            dx = *((es:bx + 2));
            ax = *(es:bx);
            __asm ("les bx, [bp - 4]");
            *(es:bx) += ax;
            *((es:bx + 2)) += dx;
            dx = *((bp - 2));
            ax = *((bp - 4));
            __asm ("les bx, [bp - 8]");
            *((es:bx + 6)) = dx;
            *((es:bx + 4)) = ax;
            __asm ("les bx, [bp - 4]");
            *((bp + 8)) = es;
            *((bp + 6)) = bx;
        }
    } else {
        fcn_00005806 (cs, *((bp + 6)));
    }
    __asm ("les bx, [bp - 8]");
    dx = *((es:bx + 2));
    ax = *(es:bx);
    ax &= 1;
    dx = 0;
    dx |= ax;
    if (dx == 0) {
        fcn_000058a5 (cs, *((bp + 6)), *((bp + 8)), *((bp - 8)), *((bp - 6)));
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5ace */
#include <stdint.h>
 
int16_t fcn_00005ace (int16_t arg_6h, int16_t arg_8h) {
    ax = *((bp + 6));
    ax |= *((bp + 8));
    if (ax == 0) {
    } else {
        dx = *((bp + 8));
        ax = *((bp + 6));
        cx = 0xffff;
        bx = 0xfff8;
        __asm ("lcall fcn.00000711");
        *((bp + 8)) = dx;
        *((bp + 6)) = ax;
        cx = *(0x380);
        bx = *(0x37e);
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("lcall fcn.0000076c");
        if (ax == 0) {
            fcn_0000591d ();
        } else {
            /* [40] -rwx section size 48 named seg_040 */
            fcn_00005a02 (cs, *((bp + 6)), *((bp + 8)));
        }
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x711 */
#include <stdint.h>
 
int16_t fcn_00000711 (signed int16_t arg3, signed int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    cx |= cx;
    if (cx < 0) {
        bx = ~bx;
        cx = ~cx;
        bx++;
        cx += 0;
        void (*0x74e)() ();
    }
    ax += bx;
    if (ax < 0) {
        dx += 0x1000;
    }
    ch = cl;
    cl = 4;
    ch <<= cl;
    dh += ch;
    ch = al;
    ax >>= cl;
    dx += ax;
    al = ch;
    ax &= 0xf;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x74e */
#include <stdint.h>
 
int16_t loc_0000074e (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    ax -= bx;
    if (ax < 0) {
        dx -= 0x1000;
    }
    bh = cl;
    cl = 4;
    bh <<= cl;
    bl = 0;
    dx -= bx;
    ch = al;
    ax >>= cl;
    dx += ax;
    al = ch;
    ax &= 0xf;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x76c */
#include <stdint.h>
 
int16_t fcn_0000076c (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    ch = al;
    cl = 4;
    ax >>= cl;
    dx += ax;
    al = ch;
    ah = bl;
    bx >>= cl;
    cx += bx;
    bl = ah;
    ax &= 0xf;
    bx &= 0xf;
    if (dx == cx) {
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x591d */
#include <stdint.h>
 
int16_t fcn_0000591d (void) {
    int16_t var_4h;
    int16_t var_2h;
    cx = *(0x380);
    bx = *(0x37e);
    dx = *(0x37c);
    ax = *(0x37a);
    __asm ("lcall fcn.0000076c");
    if (? == ?) {
        __asm ("lcall fcn.000040a4");
        cx = 0x37a;
        cx = 0x37a;
        *(0x380) = 0;
        *(0x37e) = 0;
        bx = 0;
        es = bx;
        bx = 0;
        *(0x37c) = es;
        *(0x37a) = bx;
    } else {
        __asm ("les bx, [0x37e]");
        __asm ("les bx, es:[bx + 4]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        __asm ("les bx, [bp - 4]");
        dx = *((es:bx + 2));
        ax = *(es:bx);
        ax &= 1;
        dx = 0;
        dx |= ax;
        if (dx == 0) {
            __asm ("lcall fcn.00003d19");
            cx = bp - 4;
            cx = bp - 4;
            cx = *(0x37c);
            bx = *(0x37a);
            dx = *((bp - 2));
            ax = *((bp - 4));
            __asm ("lcall fcn.0000076c");
            if (dx == 0) {
                *(0x380) = 0;
                *(0x37e) = 0;
                bx = 0;
                es = bx;
                bx = 0;
                *(0x37c) = es;
                *(0x37a) = bx;
            } else {
                __asm ("les bx, [bp - 4]");
                __asm ("les bx, es:[bx + 4]");
                *(0x380) = es;
                *(0x37e) = bx;
            }
            __asm ("lcall fcn.000040a4");
            cx = bp - 4;
            cx = bp - 4;
        } else {
            __asm ("lcall fcn.000040a4");
            cx = 0x37e;
            cx = 0x37e;
            __asm ("les bx, [bp - 4]");
            *(0x380) = es;
            *(0x37e) = bx;
        }
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3d19 */
#include <stdint.h>
 
int16_t fcn_00003d19 (int16_t arg_6h, int16_t arg_8h, int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 6]");
    dx = *((es:bx + 0xe));
    ax = *((es:bx + 0xc));
    *(0x384) = dx;
    *(0x382) = ax;
    cx = *((bp + 8));
    bx = *((bp + 6));
    __asm ("lcall fcn.0000076c");
    if (? == ?) {
        *(0x384) = 0;
        *(0x382) = 0;
    } else {
        __asm ("les bx, [bp + 6]");
        __asm ("les bx, es:[bx + 8]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("les bx, [0x382]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        dx = *(0x384);
        ax = *(0x382);
        __asm ("les bx, [bp - 4]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x40a4 */
#include <stdint.h>
 
int16_t fcn_000040a4 (int16_t arg_6h, int16_t arg_8h) {
    cx = *(0x89);
    bx = *(0x87);
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("lcall fcn.0000076c");
    if (? >= ?) {
        cx = *(0x91);
        bx = *(0x8f);
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("lcall fcn.0000076c");
        if (? > ?) {
            goto label_0;
        }
        ax = fcn_00004014 (*((bp + 6)), *((bp + 8)));
        ax |= ax;
        if (ax != 0) {
            goto label_1;
        }
    }
label_0:
    ax = 0xffff;
    goto label_2;
label_1:
    ax = 0;
label_2:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5806 */
#include <stdint.h>
 
int16_t fcn_00005806 (int16_t arg_6h, int16_t arg_8h) {
    int16_t var_4h;
    int16_t var_2h;
    cx = 0;
    bx = 0;
    dx = *(0x384);
    ax = *(0x382);
    __asm ("lcall fcn.0000076c");
    if (? != ?) {
        __asm ("les bx, [0x382]");
        __asm ("les bx, es:[bx + 0xc]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [0x382]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp - 4]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        dx = *(0x384);
        ax = *(0x382);
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
    } else {
        __asm ("les bx, [bp + 6]");
        *(0x384) = es;
        *(0x382) = bx;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x58a5 */
#include <stdint.h>
 
int16_t fcn_000058a5 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 0xa]");
    dx = *((es:bx + 2));
    ax = *(es:bx);
    __asm ("les bx, [bp + 6]");
    *(es:bx) += ax;
    *((es:bx + 2)) += dx;
    cx = *((bp + 0xc));
    bx = *((bp + 0xa));
    dx = *(0x380);
    ax = *(0x37e);
    __asm ("lcall fcn.0000076c");
    if (*((es:bx + 2)) == 0) {
        __asm ("les bx, [bp + 6]");
        *(0x380) = es;
        *(0x37e) = bx;
    } else {
        __asm ("les bx, [bp + 0xa]");
        cx = *((es:bx + 2));
        bx = *(es:bx);
        dx = *((bp + 0xc));
        ax = *((bp + 0xa));
        __asm ("lcall fcn.00000711");
        *((bp - 2)) = dx;
        *((bp - 4)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        __asm ("les bx, [bp - 4]");
        *((es:bx + 6)) = dx;
        *((es:bx + 4)) = ax;
    }
    __asm ("lcall fcn.00003d19");
    cx = bp + 0xa;
    cx = bp + 0xa;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x52da */
#include <stdint.h>
 
uint16_t fcn_000052da (int16_t arg_eh, int16_t arg_10h, int16_t arg_12h, int16_t arg3, int16_t arg4, int16_t arg2) {
    int16_t var_58h;
    int16_t var_55h;
    int16_t var_54h;
    int16_t var_2h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = bp - 0x54;
    di -= ax;
    ax = bp - 0x54;
    __asm ("lcall [bp + 0x12]");
    ax |= ax;
    if (ax == 0) {
        *((bp - 2)) = 1;
    }
    *((bp - 0x55)) = 0x50;
    *((bp - 0x58)) += di;
    di = bp - 0x54;
    es = bp + 0xe;
    dx = bp + 0xe;
    cx = bp + 0xe;
    bx = bp + 0xe;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x12 */
#include <stdint.h>
 
int8_t fcn_00000012 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x52d1 */
#include <stdint.h>
 
void fcn_000052d1 (int16_t arg3, int16_t arg4, int16_t arg2) {
    int16_t var_55h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    *(ss:di) = al;
    di++;
    *((bp - 0x55))--;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return void (*0x5309)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4ccf */
#include <stdint.h>
 
int16_t fcn_00004ccf (int16_t arg_6h, uint32_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg_10h, int16_t arg_12h, int16_t arg2) {
    int16_t var_22h;
    dx = arg2;
    __asm ("les di, [bp + 0xc]");
    bx = *((bp + 0xa));
    if (bx > 0x24) {
        goto label_0;
    }
    if (bl < 2) {
        goto label_0;
    }
    ax = *((bp + 0x10));
    cx = *((bp + 0x12));
    cx |= cx;
    if (cx < 0) {
        if (*((bp + 8)) == 0) {
            goto label_1;
        }
        *(es:di) = 0x2d;
        di++;
        cx = -cx;
        ax = -ax;
    }
label_1:
    si = bp - 0x22;
    __asm ("jcxz 0x4d19");
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
        *(ss:si) = dl;
        si++;
        __asm ("jcxz 0x4d21");
    } while (1);
    do {
        dx -= dx;
        ax = dx:ax / bx;
        dx = dx:ax % bx;
        *(ss:si) = dl;
        si++;
        ax |= ax;
    } while (ax != 0);
    cx = bp - 0x22;
    cx = -cx;
    cx += si;
    do {
        si--;
        al = *(ss:);
        al -= 0xa;
        if (al < 0) {
            al += 0x3a;
        } else {
            al += *((bp + 6));
        }
        *(es:di) = al;
        es:di++;
        __asm ("loop 0x4d2d");
    } while (1);
label_0:
    al = 0;
    *(es:di) = al;
    es:di++;
    dx = *((bp + 0xe));
    ax = *((bp + 0xc));
    di = es;
    si = es;
    __asm ("retf 0xe");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5280 */
#include <stdint.h>
 
int8_t fcn_00005280 (int16_t arg_4h) {
    /* [38] -rwx section size 1392 named seg_038 */
    dx = *((bp + 4));
    cx = 0xf04;
    bx = 0x58d;
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
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x52c4 */
#include <stdint.h>
 
int8_t fcn_000052c4 (void) {
    cx = 0xffff;
    al = 0;
    __asm ("repne scasb al, byte es:[di]");
    cx = ~cx;
    cx--;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x7b0 */
#include <stdint.h>
 
void fcn_000007b0 (void) {
    /* [01] -rwx section size 1376 named seg_001 */
    __asm ("ljmp [0x604]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5025 */
#include <stdint.h>
 
int32_t fcn_00005025 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, uint32_t arg3) {
    uint32_t var_1h;
    bx = arg3;
    al = *((bp + 6));
    *((bp - 1)) = al;
    do {
        __asm ("les bx, [bp + 8]");
        *(es:bx)++;
        if (*(es:bx) < 0) {
            al = *((bp - 1));
            __asm ("les bx, [bp + 8]");
            *((es:bx + 0xc))++;
            __asm ("les bx, es:[bx + 0xc]");
            bx--;
            *(es:bx) = al;
            __asm ("les bx, [bp + 8]");
            if ((*((es:bx + 2)) & 8) != 0) {
                if (*((bp - 1)) != 0xa) {
                    if (*((bp - 1)) != 0xd) {
                        goto label_0;
                    }
                }
                __asm ("lcall fcn.00004efa");
                cx = bp + 8;
                cx = bp + 8;
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
        __asm ("les bx, [bp + 8]");
        *(es:bx)--;
        __asm ("les bx, [bp + 8]");
        if ((*((es:bx + 2)) & 0x90) == 0) {
            __asm ("les bx, [bp + 8]");
            if ((*((es:bx + 2)) & 2) != 0) {
                goto label_2;
            }
        }
        __asm ("les bx, [bp + 8]");
        *((es:bx + 2)) |= 0x10;
        ax = 0xffff;
        goto label_1;
label_2:
        __asm ("les bx, [bp + 8]");
        *((es:bx + 2)) |= 0x100;
        __asm ("les bx, [bp + 8]");
        if (*((es:bx + 6)) == 0) {
            goto label_3;
        }
        __asm ("les bx, [bp + 8]");
        if (*(es:bx) != 0) {
            __asm ("lcall fcn.00004efa");
            cx = bp + 8;
            cx = bp + 8;
            ax |= ax;
            if (ax != 0) {
                ax = 0xffff;
                goto label_1;
            }
        } else {
            __asm ("les bx, [bp + 8]");
            ax = *((es:bx + 6));
            dx = 0xffff;
            dx -= ax;
            __asm ("les bx, [bp + 8]");
            *(es:bx) = dx;
        }
    } while (1);
label_3:
    if (*((bp - 1)) == 0xa) {
        __asm ("les bx, [bp + 8]");
        if ((*((es:bx + 2)) & 0x40) != 0) {
            goto label_4;
        }
        ax = 1;
        ax = 0x584;
        __asm ("les bx, [bp + 8]");
        al = *((es:bx + 4));
        eax = (int32_t) ax;
        __asm ("lcall fcn.00004c17");
        if (ax != 1) {
            goto label_5;
        }
    }
label_4:
    ax = 1;
    ax = bp + 6;
    __asm ("les bx, [bp + 8]");
    al = *((es:bx + 4));
    eax = (int32_t) ax;
    __asm ("lcall fcn.00004c17");
    if (ax != 1) {
label_5:
        __asm ("les bx, [bp + 8]");
        if ((*((es:bx + 2)) & 0x200) == 0) {
            __asm ("les bx, [bp + 8]");
            *((es:bx + 2)) |= 0x10;
            ax = 0xffff;
        }
    } else {
        al = *((bp - 1));
        ah = 0;
    }
label_1:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4efa */
#include <stdint.h>
 
int32_t fcn_00004efa (signed int16_t arg_6h, signed int16_t arg_8h, signed int16_t arg3) {
    bx = arg3;
    __asm ("les bx, [bp + 6]");
    ax = *((es:bx + 0x12));
    dx = *((bp + 6));
    if (ax != dx) {
        ax = 0xffff;
    } else {
        __asm ("les bx, [bp + 6]");
        if (*(es:bx) >= 0) {
            __asm ("les bx, [bp + 6]");
            if ((*((es:bx + 2)) & 8) == 0) {
                __asm ("les bx, [bp + 6]");
                dx = *((es:bx + 0xe));
                ax = *((es:bx + 0xc));
                cx = *((bp + 8));
                bx = *((bp + 6));
                bx += 5;
                if (dx != cx) {
                    goto label_0;
                }
                if (ax != bx) {
                    goto label_0;
                }
            }
            __asm ("les bx, [bp + 6]");
            *(es:bx) = 0;
            __asm ("les bx, [bp + 6]");
            dx = *((es:bx + 0xe));
            ax = *((es:bx + 0xc));
            cx = *((bp + 8));
            bx = *((bp + 6));
            bx += 5;
            if (dx == cx) {
                if (ax != bx) {
                    goto label_0;
                }
                __asm ("les bx, [bp + 6]");
                dx = *((es:bx + 0xa));
                ax = *((es:bx + 8));
                __asm ("les bx, [bp + 6]");
                *((es:bx + 0xe)) = dx;
                *((es:bx + 0xc)) = ax;
            }
label_0:
            ax = 0;
        } else {
            __asm ("les bx, [bp + 6]");
            si = *((es:bx + 6));
            __asm ("les bx, [bp + 6]");
            si += *(es:bx);
            si++;
            __asm ("les bx, [bp + 6]");
            *(es:bx) -= si;
            __asm ("les bx, [bp + 6]");
            dx = *((es:bx + 0xa));
            ax = *((es:bx + 8));
            __asm ("les bx, [bp + 6]");
            *((es:bx + 0xe)) = dx;
            *((es:bx + 0xc)) = ax;
            __asm ("les bx, [bp + 6]");
            al = *((es:bx + 4));
            eax = (int32_t) ax;
            __asm ("lcall fcn.00004ab1");
            if (ax != si) {
                __asm ("les bx, [bp + 6]");
                if ((*((es:bx + 2)) & 0x200) == 0) {
                    __asm ("les bx, [bp + 6]");
                    *((es:bx + 2)) |= 0x10;
                    ax = 0xffff;
                }
            } else {
                ax = 0;
            }
        }
    }
    /* [36] -rwx section size 32 named seg_036 */
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4c17 */
#include <stdint.h>
 
int16_t fcn_00004c17 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ch, int16_t arg1) {
    ax = arg1;
    bx = *((bp + 6));
    bx <<= 1;
    if ((*((bx + 0x518)) & 0x800) != 0) {
        ax = 2;
        ax = 0;
        __asm ("lcall fcn.00004ca2");
    }
    ah = 0x40;
    bx = *((bp + 6));
    cx = *((bp + 0xc));
    __asm ("lds dx, [bp + 8]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if ((*((bx + 0x518)) & 0x800) >= 0) {
        bx = *((bp + 6));
        bx <<= 1;
        *((bx + 0x518)) |= 0x1000;
        void (*0x4c61)() ();
    }
    __asm ("lcall fcn.00003c66");
    return void (*0x4c61)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5006 */
#include <stdint.h>
 
int32_t fcn_00005006 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    __asm ("les bx, [bp + 8]");
    *(es:bx)--;
    al = *((bp + 6));
    eax = (int32_t) ax;
    __asm ("lcall fcn.00005025");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3c66 */
#include <stdint.h>
 
int32_t fcn_00003c66 (int16_t arg_6h) {
    si = *((bp + 6));
    si |= si;
    if (si < 0) {
        goto label_0;
    }
    while (si > 0x23) {
        si = 0x57;
        *(0x30e) = si;
        al = *((si + 0x310));
        eax = (int32_t) ax;
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
        goto label_1;
label_0:
        si = -si;
    }
    *(0x30e) = 0xffff;
label_1:
    ax = si;
    *(0x7f) = ax;
    ax = 0xffff;
    __asm ("retf 2");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4ab1 */
#include <stdint.h>
 
int16_t fcn_00004ab1 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch) {
    int16_t var_8eh;
    int16_t var_8ch;
    uint32_t var_8ah;
    int16_t var_87h;
    int16_t var_86h;
    int16_t var_84h;
    int16_t var_82h;
    ax = *((bp + 0xc));
    ax++;
    if (ax < 2) {
        ax = 0;
        void (*0x4c11)() ();
    }
    bx = *((bp + 6));
    bx <<= 1;
    if ((*((bx + 0x518)) & 0x8000) != 0) {
        __asm ("lcall fcn.00004c17");
        void (*0x4c11)() ();
    }
    bx = *((bp + 6));
    bx <<= 1;
    *((bx + 0x518)) &= 0xfdff;
    __asm ("les bx, [bp + 8]");
    *((bp - 0x84)) = es;
    *((bp - 0x86)) = bx;
    ax = *((bp + 0xc));
    *((bp - 0x8a)) = ax;
    bx = ss;
    es = ss;
    bx = bp - 0x82;
    *((bp - 0x8c)) = es;
    *((bp - 0x8e)) = bx;
    while (1) {
        *((bp - 0x8a))--;
        __asm ("les bx, [bp - 0x86]");
        *((bp - 0x86))++;
        al = *(es:bx);
        *((bp - 0x87)) = al;
        if (al == 0xa) {
            __asm ("les bx, [bp - 0x8e]");
            *(es:bx) = 0xd;
            *((bp - 0x8e))++;
        }
        al = *((bp - 0x87));
        __asm ("les bx, [bp - 0x8e]");
        *(es:bx) = al;
        *((bp - 0x8e))++;
        ax = *((bp - 0x8e));
        cx = ss;
        bx = bp - 0x82;
        dx = 0;
        ax -= bx;
        dx |= dx;
        if (dx >= 0) {
            if (dx == 0) {
                if (ax < 0x80) {
                    goto label_0;
                }
            }
            ax = *((bp - 0x8e));
            cx = ss;
            bx = bp - 0x82;
            dx = 0;
            ax -= bx;
            si = ax;
            ax = bp - 0x82;
            __asm ("lcall fcn.00004c17");
            di = ax;
            if (ax != si) {
                di |= di;
                if (di < 0) {
                    ax = 0xffff;
                } else {
                    ax = *((bp + 0xc));
                    ax -= *((bp - 0x8a));
                    ax += di;
                    ax -= si;
                }
                void (*0x4c11)() ();
            }
            bx = ss;
            es = ss;
            bx = bp - 0x82;
            *((bp - 0x8c)) = es;
            *((bp - 0x8e)) = bx;
        }
label_0:
        if (*((bp - 0x8a)) == 0) {
            goto label_1;
        }
    }
label_1:
    ax = *((bp - 0x8e));
    cx = ss;
    bx = bp - 0x82;
    dx = 0;
    ax -= bx;
    si = ax;
    ax |= ax;
    if (ax > 0) {
        ax = bp - 0x82;
        __asm ("lcall fcn.00004c17");
        di = ax;
        if (ax == si) {
            goto label_2;
        }
        di |= di;
        if (di < 0) {
            ax = 0xffff;
        } else {
            ax = *((bp + 0xc));
            ax += di;
            ax -= si;
        }
        void (*0x4c11)() ();
    }
label_2:
    ax = *((bp + 0xc));
    return void (*0x4c11)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4c11 */
#include <stdint.h>
 
void loc_00004c11 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4e97 */
#include <stdint.h>
 
int16_t fcn_00004e97 (int16_t arg_6h, int16_t arg_ah) {
    __asm ("les di, [bp + 6]");
    dx = di;
    al = 0;
    cx = 0xffff;
    __asm ("repne scasb al, byte es:[di]");
    si = di - 1;
    __asm ("les di, [bp + 0xa]");
    cx = 0xffff;
    __asm ("repne scasb al, byte es:[di]");
    cx = ~cx;
    di -= cx;
    ds = es;
    tmp_0 = di;
    di = si;
    si = tmp_0;
    if ((si & 1) != 0) {
        *(es:di) = *(si);
        si++;
        es:di++;
        cx--;
    }
    cx >>= 1;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    if (cx < 0) {
        *(es:di) = *(si);
        si++;
        es:di++;
    }
    ax = dx;
    /* [34] -rwx section size 32 named seg_034 */
    dx = es;
    ds = es;
    return void (*0x4ed5)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4d80 */
#include <stdint.h>
 
int8_t fcn_00004d80 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg1) {
    ax = arg1;
    al = 0;
    al = 0x61;
    fcn_00004ccf (cs, ax, ax, *((bp + 0xe)), *((bp + 0xa)), *((bp + 0xc)), *((bp + 6)), *((bp + 8)));
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4dcb */
#include <stdint.h>
 
int16_t fcn_00004dcb (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg3) {
    bx = arg3;
    ax = *((bp + 8));
    ax |= *((bp + 0xa));
    if (ax == 0) {
        *((bp + 0xa)) = ds;
        *((bp + 8)) = 0x6b0;
    }
    __asm ("les bx, [bp + 8]");
    *(es:bx) = 0;
    ax = 0x548;
    __asm ("lcall fcn.00004e97");
    ax = 0xa;
    dx = *((bp + 0xa));
    ax = *((bp + 8));
    ax += 3;
    ax = *((bp + 6));
    dx = 0;
    __asm ("lcall fcn.00004d80");
    ax = 0x54c;
    __asm ("lcall fcn.00004e97");
    dx = *((bp + 0xa));
    ax = *((bp + 8));
    __asm ("retf 6");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4c63 */
#include <stdint.h>
 
int16_t fcn_00004c63 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah) {
    ax = 0;
    __asm ("lcall fcn.00004ed9");
    si = ax;
    if (si == -1) {
        ax = si;
    } else {
        if ((*((bp + 0xa)) & 2) != 0) {
            if ((si & 1) != 0) {
                goto label_0;
            }
        }
        ax = 0;
        goto label_1;
label_0:
        *(0x7f) = 5;
        ax = 0xffff;
    }
label_1:
    /* [29] -rwx section size 32 named seg_029 */
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4ed9 */
#include <stdint.h>
 
int8_t fcn_00004ed9 (int16_t arg_6h, int16_t arg_ah, int16_t arg_ch, int16_t arg1) {
    ax = arg1;
    ah = 0x43;
    al = *((bp + 0xa));
    cx = *((bp + 0xc));
    __asm ("lds dx, [bp + 6]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
        tmp_0 = ax;
        ax = cx;
        cx = tmp_0;
    } else {
        /* [35] -rwx section size 240 named seg_035 */
        __asm ("lcall fcn.00003c66");
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4918 */
#include <stdint.h>
 
int32_t fcn_00004918 (int16_t arg_6h, int16_t arg_8h, int16_t arg3) {
    bx = arg3;
    si = 0xffff;
    __asm ("les bx, [bp + 6]");
    ax = *((es:bx + 0x12));
    dx = *((bp + 6));
    if (ax != dx) {
        ax = si;
    } else {
        __asm ("les bx, [bp + 6]");
        if (*((es:bx + 6)) != 0) {
            __asm ("les bx, [bp + 6]");
            if (*(es:bx) < 0) {
                __asm ("lcall fcn.00004efa");
                cx = bp + 6;
                cx = bp + 6;
                ax |= ax;
                if (ax == 0) {
                    goto label_0;
                }
                ax = si;
                goto label_1;
            }
label_0:
            __asm ("les bx, [bp + 6]");
            if ((*((es:bx + 2)) & 4) == 0) {
                goto label_2;
            }
            __asm ("les bx, [bp + 6]");
            __asm ("lcall fcn.000057f4");
            cx = es:bx + 8;
            cx = es:bx + 8;
        }
label_2:
        __asm ("les bx, [bp + 6]");
        if (*((es:bx + 4)) >= 0) {
            __asm ("les bx, [bp + 6]");
            al = *((es:bx + 4));
            eax = (int32_t) ax;
            __asm ("lcall fcn.000049e8");
            cx = ax;
            si = ax;
        }
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) = 0;
        __asm ("les bx, [bp + 6]");
        *((es:bx + 6)) = 0;
        __asm ("les bx, [bp + 6]");
        *(es:bx) = 0;
        __asm ("les bx, [bp + 6]");
        *((es:bx + 4)) = 0xff;
        __asm ("les bx, [bp + 6]");
        if (*((es:bx + 0x10)) != 0) {
            ax = 0;
            __asm ("les bx, [bp + 6]");
            __asm ("lcall fcn.00004dcb");
            __asm ("lcall fcn.00004e7b");
            cx = ax;
            cx = ax;
            __asm ("les bx, [bp + 6]");
            *((es:bx + 0x10)) = 0;
        }
        ax = si;
    }
label_1:
    si = ax;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x57f4 */
#include <stdint.h>
 
void fcn_000057f4 (int16_t arg_6h, int16_t arg_8h) {
    __asm ("lcall fcn.00005ace");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x49e8 */
#include <stdint.h>
 
int16_t fcn_000049e8 (int16_t arg_6h) {
    si = *((bp + 6));
    si |= si;
    if (si >= 0) {
        if (si < 0x14) {
            goto label_0;
        }
    }
    ax = 6;
    __asm ("lcall fcn.00003c66");
    void (*0x4a16)() ();
label_0:
    bx = si;
    bx <<= 1;
    *((bx + 0x518)) = 0xffff;
    __asm ("lcall fcn.00004a19");
    /* [23] -rwx section size 32 named seg_023 */
    *((bx + di + 0x5904)) += ah;
    return void (*0x4a16)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4e7b */
#include <stdint.h>
 
int16_t fcn_00004e7b (int16_t arg_6h, int16_t arg1) {
    ax = arg1;
    ah = 0x41;
    __asm ("lds dx, [bp + 6]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
        ax = 0;
        void (*0x4e95)() ();
    }
    __asm ("lcall fcn.00003c66");
    /* [33] -rwx section size 64 named seg_033 */
    dh += al;
    bp += bx;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4e95 */
#include <stdint.h>
 
void loc_00004e95 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4a19 */
#include <stdint.h>
 
int16_t fcn_00004a19 (int16_t arg_6h, int16_t arg1) {
    ax = arg1;
    si = *((bp + 6));
    ah = 0x3e;
    bx = si;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
        bx <<= 1;
        *((bx + 0x518)) = 0xffff;
        /* [24] -rwx section size 64 named seg_024 */
        ax = 0;
    } else {
        __asm ("lcall fcn.00003c66");
    }
    si = ax;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x46a2 */
#include <stdint.h>
 
int32_t fcn_000046a2 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, uint32_t arg_eh, int16_t arg1) {
    ax = arg1;
    __asm ("lcall fcn.00004efa");
    ax |= ax;
    if (ax != 0) {
        ax = 0xffff;
    } else {
        if (*((bp + 0xe)) == 1) {
            __asm ("les bx, [bp + 6]");
            if (*(es:bx) <= 0) {
                goto label_0;
            }
            ax = fcn_00004654 (*((bp + 6)), *((bp + 8)));
            edx:eax = (int64_t) eax;
            *((bp + 0xa)) -= ax;
            *((bp + 0xc)) -= dx;
        }
label_0:
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) &= 0xfe5f;
        __asm ("les bx, [bp + 6]");
        *(es:bx) = 0;
        __asm ("les bx, [bp + 6]");
        dx = *((es:bx + 0xa));
        ax = *((es:bx + 8));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        __asm ("les bx, [bp + 6]");
        al = *((es:bx + 4));
        eax = (int32_t) ax;
        __asm ("lcall fcn.00004ca2");
        if (dx == -1) {
            if (ax == -1) {
                ax = 0xffff;
            }
        } else {
            ax = 0;
        }
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3d04 */
#include <stdint.h>
 
int16_t fcn_00003d04 (int16_t arg_6h) {
    ax = *((bp + 6));
    dx = 0;
    __asm ("lcall fcn.00003f05");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3f05 */
#include <stdint.h>
 
int16_t fcn_00003f05 (uint32_t arg_6h, uint32_t arg_8h) {
    int16_t var_4h;
    int16_t var_2h;
    ax = *((bp + 6));
    ax |= *((bp + 8));
    if (ax == 0) {
        dx = 0;
        ax = 0;
        void (*0x4010)() ();
    }
    dx = *((bp + 8));
    ax = *((bp + 6));
    ax += 0x17;
    dx += 0;
    ax &= 0xfff0;
    dx &= 0xffff;
    *((bp + 8)) = dx;
    *((bp + 6)) = ax;
    cx = 0;
    bx = 0;
    dx = *(0x37c);
    ax = *(0x37a);
    __asm ("lcall fcn.0000076c");
    if (dx == 0) {
        fcn_00003e9f (cs, *((bp + 6)));
        void (*0x4010)() ();
    }
    dx = *(0x384);
    ax = *(0x382);
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    cx = 0;
    bx = 0;
    __asm ("lcall fcn.0000076c");
    if (dx != 0) {
        goto label_0;
    }
    goto label_1;
    do {
label_0:
        __asm ("les bx, [bp - 4]");
        dx = *((es:bx + 2));
        ax = *(es:bx);
        cx = *((bp + 8));
        bx = *((bp + 6));
        bx += 0x30;
        cx += 0;
        if (dx >= cx) {
            if (dx == cx) {
                if (ax < bx) {
                    goto label_2;
                }
            }
            fcn_00003d81 (cs, *((bp - 4)), *((bp - 2)), *((bp + 6)), *((bp + 8)));
            void (*0x4010)() ();
        }
label_2:
        __asm ("les bx, [bp - 4]");
        dx = *((es:bx + 2));
        ax = *(es:bx);
        if (dx >= *((bp + 8))) {
            if (dx == *((bp + 8))) {
                if (ax < *((bp + 6))) {
                    goto label_3;
                }
            }
            fcn_00003d19 (cs, *((bp - 4)), *((bp - 2)));
            __asm ("les bx, [bp - 4]");
            *(es:bx)++;
            *((es:bx + 2)) += 0;
            dx = *((bp - 2));
            ax = *((bp - 4));
            ax += 8;
            void (*0x4010)() ();
        }
label_3:
        __asm ("les bx, [bp - 4]");
        __asm ("les bx, es:[bx + 0xc]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        cx = *(0x384);
        bx = *(0x382);
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("lcall fcn.0000076c");
        if (ax == 0) {
            goto label_1;
        }
    } while (1);
label_1:
    fcn_00003e31 (cs, *((bp + 6)));
    return void (*0x4010)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4010 */
#include <stdint.h>
 
void loc_00004010 (void) {
    /* [12] -rwx section size 352 named seg_012 */
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3e9f */
#include <stdint.h>
 
int16_t fcn_00003e9f (int16_t arg_6h, int16_t arg_8h) {
    uint32_t var_4h;
    uint32_t var_2h;
    __asm ("lcall fcn.000040eb");
    cx = bp + 6;
    cx = bp + 6;
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    if (*((bp - 2)) == -1) {
        if (*((bp - 4)) == -1) {
            dx = 0;
            ax = 0;
        }
    } else {
        __asm ("les bx, [bp - 4]");
        *(0x37c) = es;
        *(0x37a) = bx;
        __asm ("les bx, [bp - 4]");
        *(0x380) = es;
        *(0x37e) = bx;
        dx = *((bp + 8));
        ax = *((bp + 6));
        ax++;
        dx += 0;
        __asm ("les bx, [bp - 4]");
        *((es:bx + 2)) = dx;
        *(es:bx) = ax;
        dx = *((bp - 2));
        ax = *((bp - 4));
        ax += 8;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3d81 */
#include <stdint.h>
 
int16_t fcn_00003d81 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    dx = *((bp + 0xc));
    ax = *((bp + 0xa));
    __asm ("les bx, [bp + 6]");
    *(es:bx) -= ax;
    *((es:bx + 2)) -= dx;
    __asm ("les bx, [bp + 6]");
    cx = *((es:bx + 2));
    bx = *(es:bx);
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("lcall fcn.00000711");
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    dx = *((bp + 0xc));
    ax = *((bp + 0xa));
    ax++;
    dx += 0;
    __asm ("les bx, [bp - 4]");
    *((es:bx + 2)) = dx;
    *(es:bx) = ax;
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("les bx, [bp - 4]");
    *((es:bx + 6)) = dx;
    *((es:bx + 4)) = ax;
    cx = *((bp + 8));
    bx = *((bp + 6));
    dx = *(0x380);
    ax = *(0x37e);
    __asm ("lcall fcn.0000076c");
    if (dx == 0) {
        __asm ("les bx, [bp - 4]");
        *(0x380) = es;
        *(0x37e) = bx;
    } else {
        dx = *((bp - 2));
        ax = *((bp - 4));
        cx = *((bp + 0xc));
        bx = *((bp + 0xa));
        __asm ("lcall fcn.00000711");
        *((bp + 8)) = dx;
        *((bp + 6)) = ax;
        dx = *((bp - 2));
        ax = *((bp - 4));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 6)) = dx;
        *((es:bx + 4)) = ax;
    }
    dx = *((bp - 2));
    ax = *((bp - 4));
    ax += 8;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3e31 */
#include <stdint.h>
 
int16_t fcn_00003e31 (int16_t arg_6h, int16_t arg_8h) {
    uint32_t var_4h;
    uint32_t var_2h;
    __asm ("lcall fcn.000040eb");
    cx = bp + 6;
    cx = bp + 6;
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    if (*((bp - 2)) == -1) {
        if (*((bp - 4)) == -1) {
            dx = 0;
            ax = 0;
        }
    } else {
        dx = *(0x380);
        ax = *(0x37e);
        __asm ("les bx, [bp - 4]");
        *((es:bx + 6)) = dx;
        *((es:bx + 4)) = ax;
        dx = *((bp + 8));
        ax = *((bp + 6));
        ax++;
        dx += 0;
        __asm ("les bx, [bp - 4]");
        *((es:bx + 2)) = dx;
        *(es:bx) = ax;
        __asm ("les bx, [bp - 4]");
        *(0x380) = es;
        *(0x37e) = bx;
        dx = *(0x380);
        ax = *(0x37e);
        ax += 8;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4654 */
#include <stdint.h>
 
int16_t fcn_00004654 (int16_t arg_4h, uint32_t arg3) {
    uint32_t var_4h;
    int16_t var_2h;
    bx = arg3;
    __asm ("les bx, [bp + 4]");
    si = *(es:bx);
    di = *(es:bx);
    __asm ("les bx, [bp + 4]");
    if ((*((es:bx + 2)) & 0x40) != 0) {
        ax = si;
        goto label_0;
    }
    __asm ("les bx, [bp + 4]");
    __asm ("les bx, es:[bx + 0xc]");
    *((bp - 2)) = es;
    *((bp - 4)) = bx;
    while (ax != 0) {
        __asm ("les bx, [bp - 4]");
        *((bp - 4))++;
        if (*(es:bx) == 0xa) {
            di++;
        }
        ax = si;
        si--;
        ax |= ax;
    }
    ax = di;
label_0:
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5b40 */
#include <stdint.h>
 
int16_t fcn_00005b40 (int16_t arg_6h) {
    /* [41] -rwx section size 32 named seg_041 */
    ax = 1;
    ax = 0;
    __asm ("lcall fcn.00004ca2");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4467 */
#include <stdint.h>
 
void fcn_00004467 (int16_t arg_4h, int16_t arg_6h, int16_t arg1) {
    ax = arg1;
    cx = *((bp + 4));
    ah = 0x3c;
    __asm ("lds dx, [bp + 6]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
    } else {
        __asm ("lcall fcn.00003c66");
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4607 */
#include <stdint.h>
 
int16_t fcn_00004607 (int16_t arg_6h, int16_t arg_ah, int16_t arg1) {
    ax = arg1;
    al = 1;
    cx = *((bp + 0xa));
    if ((cx & 2) == 0) {
        al = 2;
        if ((cx & 4) != 0) {
            goto label_0;
        }
        al = 0;
    }
label_0:
    __asm ("lds dx, [bp + 6]");
    cl = 0xf0;
    cl &= *((bp + 0xa));
    al |= cl;
    ah = 0x3d;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (al >= 0) {
        si = ax;
        ax = *((bp + 0xa));
        ax &= 0xf8ff;
        ax |= 0x8000;
        bx = si;
        bx <<= 1;
        *((bx + 0x518)) = ax;
        ax = si;
        void (*0x4651)() ();
    }
    __asm ("lcall fcn.00003c66");
    return void (*0x4651)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4797 */
#include <stdint.h>
 
int16_t fcn_00004797 (int16_t arg_6h, uint32_t arg_8h, int16_t arg_ah, int16_t arg_eh, int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    ah = 0x44;
    al = *((bp + 8));
    bx = *((bp + 6));
    cx = *((bp + 0xe));
    __asm ("lds dx, [bp + 0xa]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
        if (*((bp + 8)) == 0) {
            ax = dx;
            void (*0x47c2)() ();
        }
        void (*0x47c2)() ();
    }
    __asm ("lcall fcn.00003c66");
    /* [19] -rwx section size 16 named seg_019 */
    return void (*0x47c2)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x47c2 */
#include <stdint.h>
 
void loc_000047c2 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4486 */
#include <stdint.h>
 
void fcn_00004486 (int16_t arg_4h, int16_t arg4, int16_t arg2) {
    cx = arg4;
    dx = arg2;
    bx = *((bp + 4));
    cx -= cx;
    dx -= dx;
    ah = 0x40;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x419c */
#include <stdint.h>
 
int16_t fcn_0000419c (int16_t arg_4h, int16_t arg_8h, int16_t arg_ch, uint32_t arg3) {
    int16_t var_4h;
    uint32_t var_1h;
    bx = arg3;
    si = 0;
    *((bp - 4)) = 0;
    di = 0;
    __asm ("les bx, [bp + 0xc]");
    *((bp + 0xc))++;
    al = *(es:bx);
    *((bp - 1)) = al;
    if (al == 0x72) {
        si = 1;
        di = 1;
    } else {
        if (*((bp - 1)) == 0x77) {
            si = 0x302;
            *((bp - 4)) = 0x80;
            di = 2;
        } else {
            if (*((bp - 1)) == 0x61) {
                si = 0x902;
                *((bp - 4)) = 0x80;
                di = 2;
            } else {
                ax = 0;
                goto label_0;
            }
        }
    }
    __asm ("les bx, [bp + 0xc]");
    al = *(es:bx);
    *((bp - 1)) = al;
    *((bp + 0xc))++;
    if (*((bp - 1)) != 0x2b) {
        __asm ("les bx, [bp + 0xc]");
        if (*(es:bx) != 0x2b) {
            goto label_1;
        }
        if (*((bp - 1)) == 0x74) {
            goto label_2;
        }
        if (*((bp - 1)) != 0x62) {
            goto label_1;
        }
    }
label_2:
    if (*((bp - 1)) == 0x2b) {
        __asm ("les bx, [bp + 0xc]");
        al = *(es:bx);
        *((bp - 1)) = al;
    }
    ax = si;
    ax &= 0xfffc;
    ax |= 4;
    si = ax;
    *((bp - 4)) = 0x180;
    di = 3;
label_1:
    if (*((bp - 1)) == 0x74) {
        si |= 0x4000;
    } else {
        if (*((bp - 1)) == 0x62) {
            si |= 0x8000;
            di |= 0x40;
        } else {
            ax = *(0x540);
            ax &= 0xc000;
            si |= ax;
            ax = si;
            if ((ax & 0x8000) == 0) {
                goto label_3;
            }
            di |= 0x40;
        }
    }
label_3:
    *(0x370) = 0x4a3;
    *(0x36e) = 0xf;
    __asm ("les bx, [bp + 8]");
    *(es:bx) = si;
    ax = *((bp - 4));
    __asm ("les bx, [bp + 4]");
    *(es:bx) = ax;
    ax = di;
label_0:
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x449a */
#include <stdint.h>
 
int16_t fcn_0000449a (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch) {
    uint32_t var_4h;
    int16_t var_2h;
    di = *((bp + 0xa));
    if ((di & 0xc000) == 0) {
        ax = *(0x540);
        ax &= 0xc000;
        di |= ax;
    }
    if ((di & 0x100) == 0) {
    } else {
        ax = *(0x542);
        *((bp + 0xc)) &= ax;
        ax = *((bp + 0xc));
        if ((ax & 0x180) == 0) {
            ax = 1;
            __asm ("lcall fcn.00003c66");
        }
        ax = 0;
        __asm ("lcall fcn.00004ed9");
        *((bp - 4)) = ax;
        if (ax == -1) {
            if ((*((bp + 0xc)) & 0x80) != 0) {
                ax = 0;
            } else {
                ax = 1;
            }
            *((bp - 4)) = ax;
        } else {
            if ((di & 0x400) != 0) {
                ax = 0x50;
                __asm ("lcall fcn.00003c66");
                void (*0x4601)() ();
            }
            goto label_0;
        }
        if ((di & 0xf0) != 0) {
            ax = 0;
            ax = fcn_00004467 (ax, *((bp + 6)), *((bp + 8)));
            si = ax;
            ax |= ax;
            if (ax < 0) {
                ax = si;
                void (*0x4601)() ();
            }
            __asm ("lcall fcn.00004a19");
            cx = si;
            goto label_1;
        }
        ax = fcn_00004467 (*((bp - 4)), *((bp + 6)), *((bp + 8)));
        si = ax;
        ax |= ax;
        if (ax < 0) {
            ax = si;
            void (*0x4601)() ();
        }
        goto label_2;
    }
label_0:
    *((bp - 4)) = 0;
label_1:
    __asm ("lcall fcn.00004607");
    si = ax;
    ax |= ax;
    if (ax >= 0) {
        ax = 0;
        __asm ("lcall fcn.00004797");
        cx = si;
        cx = si;
        *((bp - 2)) = ax;
        if ((ax & 0x80) != 0) {
            di |= 0x2000;
            if ((di & 0x8000) != 0) {
                ax = *((bp - 2));
                ax &= 0xff;
                ax |= 0x20;
                dx = 0;
                ax = 1;
                __asm ("lcall fcn.00004797");
            }
        } else {
            if ((di & 0x200) == 0) {
                goto label_3;
            }
            fcn_00004486 (si);
        }
label_3:
        if (*((bp - 4)) == 0) {
            goto label_2;
        }
        if ((di & 0xf0) == 0) {
            goto label_2;
        }
        ax = 1;
        ax = 1;
        __asm ("lcall fcn.00004ed9");
    }
label_2:
    si |= si;
    if (si >= 0) {
        if ((di & 0x300) != 0) {
            ax = 0x1000;
        } else {
            ax = 0;
        }
        dx = di;
        dx &= 0xf8ff;
        ax |= dx;
        bx = si;
        bx <<= 1;
        *((bx + 0x518)) = ax;
    }
    ax = si;
    return void (*0x4601)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x47c4 */
#include <stdint.h>
 
int16_t fcn_000047c4 (int16_t arg_6h, int16_t arg2) {
    dx = arg2;
    ax = 0x4400;
    bx = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = dx;
    /* [20] -rwx section size 320 named seg_020 */
    return ax;
    *((di - 0x35)) += bl;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x47d6 */
#include <stdint.h>
 
int16_t fcn_000047d6 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh, int16_t arg_10h, uint32_t arg3) {
    bx = arg3;
    si = *((bp + 0x10));
    di = *((bp + 0xe));
    __asm ("les bx, [bp + 6]");
    ax = *((es:bx + 0x12));
    dx = *((bp + 6));
    if (ax == dx) {
        if (di > 2) {
            goto label_0;
        }
        if (si <= 0x7fff) {
            goto label_1;
        }
    }
label_0:
    ax = 0xffff;
    goto label_2;
label_1:
    if (*(0x546) == 0) {
        ax = *((bp + 6));
        bx = 0x39c;
        cx = ds;
        if (ax == bx) {
            *(0x546) = 1;
        }
    } else {
        if (*(0x544) != 0) {
            goto label_3;
        }
        ax = *((bp + 6));
        bx = 0x388;
        cx = ds;
        if (ax != bx) {
            goto label_3;
        }
        *(0x544) = 1;
    }
label_3:
    __asm ("les bx, [bp + 6]");
    if (*(es:bx) != 0) {
        ax = 1;
        ax = 0;
        __asm ("lcall fcn.000046a2");
    }
    __asm ("les bx, [bp + 6]");
    if ((*((es:bx + 2)) & 4) != 0) {
        __asm ("les bx, [bp + 6]");
        __asm ("lcall fcn.000057f4");
        cx = es:bx + 8;
        cx = es:bx + 8;
    }
    __asm ("les bx, [bp + 6]");
    *((es:bx + 2)) &= 0xfff3;
    __asm ("les bx, [bp + 6]");
    *((es:bx + 6)) = 0;
    dx = *((bp + 8));
    ax = *((bp + 6));
    ax += 5;
    __asm ("les bx, [bp + 6]");
    *((es:bx + 0xa)) = dx;
    *((es:bx + 8)) = ax;
    __asm ("les bx, [bp + 6]");
    *((es:bx + 0xe)) = dx;
    *((es:bx + 0xc)) = ax;
    if (di != 2) {
        si |= si;
        if (si <= 0) {
            goto label_4;
        }
        *(0x36c) = 0x4a7;
        *(0x36a) = 7;
        ax = *((bp + 0xa));
        ax |= *((bp + 0xc));
        if (ax == 0) {
            __asm ("lcall fcn.00003d04");
            cx = si;
            *((bp + 0xc)) = dx;
            *((bp + 0xa)) = ax;
            dx |= ax;
            if (dx != 0) {
                __asm ("les bx, [bp + 6]");
                *((es:bx + 2)) |= 4;
            } else {
                ax = 0xffff;
                goto label_2;
            }
        }
        dx = *((bp + 0xc));
        ax = *((bp + 0xa));
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xe)) = dx;
        *((es:bx + 0xc)) = ax;
        __asm ("les bx, [bp + 6]");
        *((es:bx + 0xa)) = dx;
        *((es:bx + 8)) = ax;
        __asm ("les bx, [bp + 6]");
        *((es:bx + 6)) = si;
        if (di != 1) {
            goto label_4;
        }
        __asm ("les bx, [bp + 6]");
        *((es:bx + 2)) |= 8;
    }
    /* [21] -rwx section size 208 named seg_021 */
label_4:
    ax = 0;
label_2:
    di = si;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4367 */
#include <stdint.h>
 
int16_t fcn_00004367 (signed int16_t arg3) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    *((bp - 2)) = ds;
    *((bp - 4)) = 0x388;
    while (ax < bx) {
        __asm ("les bx, [bp - 4]");
        if (*((es:bx + 4)) < 0) {
            goto label_0;
        }
        dx = *((bp - 2));
        ax = *((bp - 4));
        *((bp - 4)) += 0x14;
        bx = 0x518;
        cx = ds;
    }
label_0:
    __asm ("les bx, [bp - 4]");
    if (*((es:bx + 4)) >= 0) {
        dx = 0;
        ax = 0;
    } else {
        dx = *((bp - 2));
        ax = *((bp - 4));
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x428e */
#include <stdint.h>
 
int32_t fcn_0000428e (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh) {
    int16_t var_4h;
    int16_t var_2h;
    ax = fcn_0000419c (bp - 2, ss, bp - 4, ss);
    __asm ("les bx, [bp + 0xc]");
    *((es:bx + 2)) = ax;
    ax |= ax;
    if (ax != 0) {
        __asm ("les bx, [bp + 0xc]");
        if (*((es:bx + 4)) >= 0) {
            goto label_0;
        }
        __asm ("lcall fcn.0000449a");
        __asm ("les bx, [bp + 0xc]");
        *((es:bx + 4)) = al;
        al |= al;
        if (al >= 0) {
            goto label_0;
        }
    }
    __asm ("les bx, [bp + 0xc]");
    *((es:bx + 4)) = 0xff;
    __asm ("les bx, [bp + 0xc]");
    *((es:bx + 2)) = 0;
    dx = 0;
    ax = 0;
    goto label_1;
label_0:
    __asm ("les bx, [bp + 0xc]");
    al = *((es:bx + 4));
    eax = (int32_t) ax;
    __asm ("lcall fcn.000047c4");
    cx = ax;
    ax |= ax;
    if (ax != 0) {
        __asm ("les bx, [bp + 0xc]");
        *((es:bx + 2)) |= 0x200;
    }
    ax = 0x200;
    __asm ("les bx, [bp + 0xc]");
    if ((*((es:bx + 2)) & 0x200) != 0) {
        ax = 1;
    } else {
        ax = 0;
    }
    ax = 0;
    __asm ("lcall fcn.000047d6");
    ax |= ax;
    if (ax != 0) {
        __asm ("lcall fcn.00004918");
        cx = bp + 0xc;
        cx = bp + 0xc;
        dx = 0;
        ax = 0;
    } else {
        __asm ("les bx, [bp + 0xc]");
        *((es:bx + 0x10)) = 0;
        dx = *((bp + 0xe));
        ax = *((bp + 0xc));
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x417c */
#include <stdint.h>
 
int16_t fcn_0000417c (int16_t arg_6h, int16_t arg_8h, int16_t arg1) {
    ax = arg1;
    ah = 0x4a;
    bx = *((bp + 8));
    es = *((bp + 6));
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    if (? >= ?) {
        ax = 0xffff;
    } else {
        /* [14] -rwx section size 720 named seg_014 */
        __asm ("lcall fcn.00003c66");
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4014 */
#include <stdint.h>
 
int16_t fcn_00004014 (int16_t arg_4h, int16_t arg_6h, int16_t arg3) {
    bx = arg3;
    si = *((bp + 6));
    si++;
    si -= *(0x7b);
    ax = si;
    ax += 0x3f;
    cl = 6;
    ax >>= cl;
    si = ax;
    if (si == *(0x386)) {
        __asm ("les bx, [bp + 4]");
        *(0x8d) = es;
        *(0x8b) = bx;
        ax = 1;
    } else {
        cl = 6;
        si <<= cl;
        di = *(0x91);
        ax = si;
        ax += *(0x7b);
        if (ax > di) {
            si = di;
            si -= *(0x7b);
        }
        __asm ("lcall fcn.0000417c");
        cx = 0x7b;
        cx = 0x7b;
        di = ax;
        if (di == -1) {
            ax = si;
            cl = 6;
            ax >>= cl;
            *(0x386) = ax;
            __asm ("les bx, [bp + 4]");
            *(0x8d) = es;
            *(0x8b) = bx;
            ax = 1;
        } else {
            ax = *(0x7b);
            ax += di;
            dx = 0;
            dx = ax;
            ax = 0;
            *(0x91) = dx;
            *(0x8f) = ax;
            ax = 0;
        }
    }
    di = 0x7b;
    si = 0x7b;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x40eb */
#include <stdint.h>
 
int16_t fcn_000040eb (signed int16_t arg_6h, signed int16_t arg_8h) {
    int16_t var_8h;
    int16_t var_6h;
    int16_t var_4h;
    int16_t var_2h;
    if (*((bp + 8)) >= 0x10) {
        if (*((bp + 8)) <= 0x10) {
            if (*((bp + 6)) <= 0) {
                goto label_0;
            }
        }
        dx = 0xffff;
        ax = 0xffff;
    } else {
label_0:
        dx = *(0x8d);
        ax = *(0x8b);
        cx = *((bp + 8));
        bx = *((bp + 6));
        __asm ("lcall fcn.00000711");
        *((bp - 6)) = dx;
        *((bp - 8)) = ax;
        cx = *(0x89);
        bx = *(0x87);
        dx = *((bp - 6));
        ax = *((bp - 8));
        __asm ("lcall fcn.0000076c");
        if (*((bp + 6)) >= 0) {
            cx = *(0x91);
            bx = *(0x8f);
            dx = *((bp - 6));
            ax = *((bp - 8));
            __asm ("lcall fcn.0000076c");
            if (*((bp + 6)) <= 0) {
                goto label_1;
            }
        }
        dx = 0xffff;
        ax = 0xffff;
        goto label_2;
label_1:
        __asm ("les bx, [0x8b]");
        *((bp - 2)) = es;
        *((bp - 4)) = bx;
        ax = fcn_00004014 (*((bp - 8)), *((bp - 6)));
        ax |= ax;
        if (ax == 0) {
            dx = 0xffff;
            ax = 0xffff;
        } else {
            /* [13] -rwx section size 32 named seg_013 */
            dx = *((bp - 2));
            ax = *((bp - 4));
        }
    }
label_2:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x10d */
#include <stdint.h>
 
int16_t fcn_0000010d (void) {
    do {
        ds = *(cs:);
        __asm ("lcall fcn.00000172");
        uint16_t (*0x600)(uint16_t) (cs);
        ah = 0x4c;
        al = *((bp + 4));
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        cx = 0xe;
        dx = 0x2f;
        ds = *(cs:);
        fcn_000001a7 ();
        ax = 3;
        __asm ("lcall fcn.0000010d");
    } while (1);
    *((bx + si)) += al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3814 */
#include <stdint.h>
 
int16_t fcn_00003814 (int16_t arg_6h, int16_t arg_7h) {
    int16_t var_2efeh;
    ax = *((bp + 6));
    if (ax < 0xecbc) {
        eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
        __asm ("out dx, al");
        void (*0x38d9)() ();
    }
    if (ax > 0x1344) {
        eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
        al |= *((bp + di));
        void (*0x38d9)() ();
    }
    ax |= ax;
    if (ax == 0) {
        eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
        ax = void (*0xd525)() ();
        *((bp + di)) += cl;
    }
    ax |= ax;
    if (ax < 0) {
        ax = -ax;
    }
    si = 7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x38d9 */
#include <stdint.h>
 
void loc_000038d9 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3a8c */
#include <stdint.h>
 
int16_t fcn_00003a8c (int16_t arg_6h, int16_t arg_12h) {
    int16_t var_eh;
    *((bp - 0xe)) = 0xa;
    __asm ("les di, [bp + 0x12]");
    ax = 0x7fff;
    bx = *((bp + 6));
    cx = *((es:bx + di));
    *((es:bx + di)) &= ax;
    bx >>= 1;
    bx >>= 1;
    bx <<= 1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x38dc */
#include <stdint.h>
 
int8_t fcn_000038dc (uint32_t arg3, int16_t arg4) {
    bx = arg3;
    cx = arg4;
    al = 0x5f;
    al &= dl;
    if (al != 0x47) {
        goto label_0;
    }
    do {
        if (*((es:bx - 1)) != 0x30) {
            goto label_0;
        }
        bx--;
    } while (bx > cx);
    goto label_1;
label_0:
    if (*((es:bx - 1)) == 0x2e) {
        bx--;
    }
label_1:
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2126 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00002126 (int16_t arg3, int16_t arg4, int16_t arg2) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    tmp_0 = ax;
    ax = bx;
    bx = tmp_0;
    ax = *(si);
    si += 2;
    tmp_1 = ax;
    ax = cx;
    cx = tmp_1;
    ax = *(si);
    si += 2;
    tmp_2 = ax;
    ax = dx;
    dx = tmp_2;
    ax = *(si);
    si += 2;
    tmp_3 = ax;
    ax = di;
    di = tmp_3;
    ax = *(si);
    si += 2;
    ax = *(si);
    si += 2;
    *(0xd8) = si;
    tmp_4 = di;
    di = si;
    si = tmp_4;
    di -= di;
    if (al == 1) {
        si = ~si;
        dx = ~dx;
        cx = ~cx;
        bx = -bx;
        __asm ("cmc");
        cx += di;
        dx += di;
        si += di;
    } else {
        __asm ("stc");
        si = rotate_right16 (si, 1);
        dx = rotate_right16 (dx, 1);
        cx = rotate_right16 (cx, 1);
        bx = rotate_right16 (bx, 1);
        bx += di;
        cx += di;
        dx += di;
        si += di;
        di++;
    }
    ax = *(0xd8);
    tmp_5 = ax;
    ax = di;
    di = tmp_5;
    tmp_6 = ax;
    ax = bx;
    bx = tmp_6;
    *(es:di) = ax;
    es:di += 2;
    tmp_7 = ax;
    ax = cx;
    cx = tmp_7;
    *(es:di) = ax;
    es:di += 2;
    tmp_8 = ax;
    ax = dx;
    dx = tmp_8;
    *(es:di) = ax;
    es:di += 2;
    tmp_9 = ax;
    ax = si;
    si = tmp_9;
    *(es:di) = ax;
    es:di += 2;
    tmp_10 = ax;
    ax = bx;
    bx = tmp_10;
    *(es:di) = ax;
    es:di += 2;
    ax = 0;
    *(es:di) = ax;
    es:di += 2;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2bd */
#include <stdint.h>
 
int16_t fcn_000002bd (void) {
    int16_t var_8h;
    int16_t var_6h;
    int16_t var_4h;
    int16_t var_2h;
    ax = 0x5b6;
    ds = 0x5b6;
    bx = ax;
    *((bp - 4)) = 0x2ea;
    *((bp - 2)) = 0x334;
    *((bp - 8)) = 0x36a;
    *((bp - 6)) = 0x334;
    if (*(0x81) == 0) {
        *((bp - 4)) = 0x20e0;
        *((bp - 2)) = 0xd1;
        *((bp - 8)) = 0x1db0;
        *((bp - 6)) = 0xd1;
    }
    ax = 0x2534;
label_0:
    cx = 0xa;
    __asm ("lds dx, [bp - 4]");
    do {
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
        ax++;
        __asm ("loop 0x303");
    } while (1);
    ax = 0x253e;
    __asm ("lds dx, [bp - 8]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ds = bx;
    if (*(0x81) != 0) {
        ax = *(0x7d);
        tmp_0 = al;
        al = ah;
        ah = tmp_0;
        if (ax < 0x310) {
            goto label_1;
        }
        if (ax >= 0xa00) {
            goto label_1;
        }
        ax = 0x2575;
        ds = cs;
        dx = 0x274;
        eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    }
label_1:
    eax = syscall_37h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("jcxz 0x2fd");
    goto label_0;
    si++;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5b1b */
#include <stdint.h>
 
int16_t fcn_00005b1b (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg_eh) {
    ax = 0x500;
    ax = 0x185;
    ax = bp + 0xe;
    __asm ("lcall fcn.000052ab");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x380e */
#include <stdint.h>
 
void fcn_0000380e (void) {
    __asm ("lcall fcn.000002bd");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2b0d */
#include <stdint.h>
 
void fcn_00002b0d (int16_t arg3, int16_t arg4, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    ax = arg1;
    ds = ss;
    al = *(0xd4);
    cl = *(0xd6);
    cl &= 0x3f;
    cl ^= 0x3f;
    al |= ch;
    ah = al;
    ah &= cl;
    ah ^= al;
    if ((ah & 8) != 0) {
        al |= 0x20;
    }
    if ((cl & al) != 0) {
        al |= 0x80;
        *(0xd4) = al;
        al &= cl;
        if (al != 0x20) {
            goto label_0;
        }
        ds = ss;
        cx = ss;
        ax = ss;
        return al;
    }
    al &= 0x7f;
    *(0xd4) = al;
    ds = ss;
    cx = ss;
    ax = ss;
    return al;
label_0:
    ax = 0x3502;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(ss:0xd0) = bx;
    *(ss:0xd2) = es;
    sp = *(ss:);
    __asm ("ljmp ss:[0xd0]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xe53 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00000e53 (int16_t arg3, int16_t arg4) {
    bx = arg3;
    cx = arg4;
    ax = *(es:si);
    cx -= cx;
    dx = 0;
    ax |= ax;
    if (ax >= 0) {
        if (ax > 0) {
            goto label_0;
        }
        bx = 0xc001;
        goto label_1;
    }
    ax = -ax;
    dl = 1;
label_0:
    bx -= bx;
    tmp_0 = ax;
    ax = cx;
    cx = tmp_0;
    do {
        bx++;
        cx >>= 1;
        ax = rotate_right16 (ax, 1);
        __asm ("jcxz 0xe76");
    } while (1);
label_1:
    *((di + 0xa)) = dx;
    *((di + 8)) = bx;
    *((di + 6)) = ax;
    *((di + 4)) = cx;
    *((di + 2)) = cx;
    *(di) = cx;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xda9 */
#include <stdint.h>
 
int16_t fcn_00000da9 (int16_t arg1) {
    ax = arg1;
    ax -= ax;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    al = cl;
    ah = 0;
    *(es:di) = ax;
    es:di += 2;
    di = ax;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1603 */
#include <stdint.h>
 
void fcn_00001603 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    dx = *((si + 6));
    dx &= 0x7fff;
    dx |= *(si);
    dx |= *((si + 2));
    dx |= *((si + 4));
    if (dx == 0) {
        if (bx != -1) {
            if (*((bx + 8)) < 0x4001) {
                goto label_1;
            }
            dx = *((bx + 6));
            dx &= 0x7fff;
            dx |= *(bx);
            dx |= *((bx + 2));
            dx |= *((bx + 4));
            if (dx != 0) {
                goto label_2;
            }
        }
label_1:
        __asm ("clc");
label_0:
        dx = si;
        return;
    }
    if (bx != -1) {
        if (*((bx + 8)) < 0x4001) {
            goto label_3;
        }
        dx = *((bx + 6));
        dx &= 0x7fff;
        dx |= *(bx);
        dx |= *((bx + 2));
        dx |= *((bx + 4));
        if (dx == 0) {
            goto label_3;
        }
        dx = *((si + 6));
        if (dx > *((bx + 6))) {
            goto label_3;
        }
        if (dx >= *((bx + 6))) {
            dx = *((si + 4));
            if (dx > *((bx + 4))) {
                goto label_3;
            }
            if (dx < *((bx + 4))) {
                goto label_2;
            }
            dx = *((si + 2));
            if (dx > *((bx + 2))) {
                goto label_3;
            }
            if (dx < *((bx + 2))) {
                goto label_2;
            }
            dx = *(si);
            if (dx > *(bx)) {
                goto label_3;
            }
        }
label_2:
        si = bx;
    }
label_3:
    ch = 1;
    fcn_00002b0d (di);
    cx = 6;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    __asm ("stc");
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xdbb */
#include <stdint.h>
 
uint16_t fcn_00000dbb (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    ch = 1;
    ax = fcn_00002b0d ();
    ax -= ax;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    ah = 0xc0;
    *(es:di) = ax;
    es:di += 2;
    ax = 0x4001;
    *(es:di) = ax;
    es:di += 2;
    ax = 1;
    *(es:di) = ax;
    es:di += 2;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xdd4 */
#include <stdint.h>
 
void fcn_00000dd4 (void) {
    di = *(0xd8);
    di -= 0xc;
    *(0xd8) = di;
    es = ds;
    cx = 6;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    es = ds;
    di = ds;
    si = ds;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x193c */
#include <stdint.h>
 
int16_t fcn_0000193c (int16_t arg_2h, int16_t arg_3h, int16_t arg_4h, int16_t arg_6h, int16_t arg_ch, int16_t arg_eh, int16_t arg_fh, int16_t arg_10h, int16_t arg_12h, int16_t arg3, int16_t arg2) {
    bx = arg3;
    dx = arg2;
    bp = *(0xd8);
    di -= di;
    cx = di;
    si = di;
    if ((*((bp + 0xf)) & 0x80) != 0) {
        cx = *(bp);
        si = *((bp + 2));
    }
    if ((*((bp + 3)) & 0x80) != 0) {
        cx += *((bp + 0xc));
        si += *((bp + 0xe));
        di += di;
        if ((*((bp + 0xf)) & 0x80) == 0) {
            goto label_0;
        }
        di--;
    }
label_0:
    bx -= bx;
    ax = *((bp + 0xc));
    dx:ax = ax * *((bp + 4));
    cx += ax;
    si += dx;
    di += 0;
    ax = *((bp + 0x10));
    ax |= ax;
    if (ax != 0) {
        dx:ax = ax * *(bp);
        cx += ax;
        si += dx;
        di += 0;
        ax = *((bp + 0x10));
        dx:ax = ax * *((bp + 2));
        si += ax;
        di += dx;
        bx += 0;
    }
    ax = *((bp + 0xc));
    dx:ax = ax * *((bp + 6));
    si += ax;
    di += dx;
    bx += 0;
    ax = *((bp + 0xe));
    dx:ax = ax * *((bp + 4));
    si += ax;
    di += dx;
    bx += 0;
    ax = *((bp + 0x12));
    ax |= ax;
    if (ax != 0) {
        dx:ax = ax * *(bp);
        si += ax;
        di += dx;
        bx += 0;
    }
    cx -= cx;
    si = cx;
    ax = *((bp + 0xe));
    dx:ax = ax * *((bp + 6));
    di += ax;
    bx += dx;
    cx += 0;
    ax = *((bp + 0x10));
    ax |= ax;
    if (ax != 0) {
        dx:ax = ax * *((bp + 4));
        di += ax;
        bx += dx;
        cx += 0;
        ax = *((bp + 0x10));
        dx:ax = ax * *((bp + 6));
        bx += ax;
        cx += dx;
        si += 0;
    }
    ax = *((bp + 0x12));
    ax |= ax;
    if (ax != 0) {
        dx:ax = ax * *((bp + 2));
        di += ax;
        bx += dx;
        cx += 0;
        si += 0;
        ax = *((bp + 0x12));
        dx:ax = ax * *((bp + 4));
        bx += ax;
        cx += dx;
        si += 0;
        ax = *((bp + 0x12));
        dx:ax = ax * *((bp + 6));
        cx += ax;
        si += dx;
    }
    dx = si;
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    di = si;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1cc5 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00001cc5 (void) {
    di = *(0xd8);
    bx = *((di + 8));
    dx = *((di + 6));
    ax = *((di + 4));
    cx = *((di + 2));
    bx >>= 1;
    if (bx < 0) {
        bx++;
        dx >>= 1;
        ax = rotate_right16 (ax, 1);
        cx = rotate_right16 (cx, 1);
    }
    if (dx >= 0xfffe) {
        goto label_0;
    }
    cx = dx;
    bx = ax;
    si = dx;
    __asm ("stc");
    si = rotate_right16 (si, 1);
    do {
        ax = dx:ax / si;
        dx = dx:ax % si;
        si--;
        if (si <= ax) {
            goto label_1;
        }
        si++;
        si += ax;
        si = rotate_right16 (si, 1);
        dx = cx;
        ax = bx;
    } while (1);
label_0:
    __asm ("stc");
    dx = rotate_right16 (dx, 1);
    ax = rotate_right16 (ax, 1);
    goto label_2;
label_1:
    si++;
    if (si < ax) {
        tmp_0 = ax;
        ax = si;
        si = tmp_0;
    }
    bx = cx;
    tmp_1 = ax;
    ax = cx;
    cx = tmp_1;
    ax = dx:ax / si;
    dx = dx:ax % si;
    dx -= dx;
    si += cx;
    si = rotate_right16 (si, 1);
    ax = rotate_right16 (ax, 1);
    ax += dx;
    dx += si;
label_2:
    cx -= cx;
    tmp_2 = ax;
    ax = cx;
    cx = tmp_2;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    tmp_3 = ax;
    ax = cx;
    cx = tmp_3;
    *(es:di) = ax;
    es:di += 2;
    tmp_4 = ax;
    ax = dx;
    dx = tmp_4;
    *(es:di) = ax;
    es:di += 2;
    tmp_5 = ax;
    ax = bx;
    bx = tmp_5;
    *(es:di) = ax;
    es:di += 2;
    ax = 0;
    *(es:di) = ax;
    es:di += 2;
    di = cx;
    si = cx;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1a23 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int32_t fcn_00001a23 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg2, int16_t arg1) {
    int16_t var_12h;
    int16_t var_10h;
    int16_t var_eh;
    int16_t var_ch;
    int16_t var_ah;
    int16_t var_8h;
    int16_t var_6h;
    int16_t var_4h;
    int16_t var_3h;
    int16_t var_2h;
    dx = arg2;
    ax = arg1;
    sp = bp - 8;
    bx = *((bp + 8));
    ax -= ax;
    di = *((bp + 6));
    al = *((bx + 0xa));
    al ^= *((di + 0xa));
    *((bp - 3)) = al;
    si = *((di + 8));
    ax = *((bx + 8));
    if (si >= 0x4001) {
        goto label_3;
    }
    if (ax >= 0x4001) {
        goto label_4;
    }
    if (si > 0xc001) {
        if (ax > 0xc001) {
            ax -= si;
            if (ax >= 0x4001) {
                goto label_5;
            }
            if (ax > 0xc001) {
                goto label_6;
            }
            ch = 0x10;
            fcn_00002b0d ();
        }
label_0:
        ax = 0xc001;
        goto label_7;
label_5:
        ch = 8;
    } else {
        ch = 4;
    }
    fcn_00002b0d ();
label_2:
    ax = 0x4001;
label_7:
    cl = *((bp - 3));
    di = *((bp + 4));
    fcn_00000da9 ();
    do {
label_1:
        goto label_8;
label_3:
        si = di;
        di = *((bp + 4));
        fcn_00001603 ();
    } while (ax < 0xc001);
    if (*((bx + 8)) < 0x4001) {
        goto label_0;
    }
    fcn_00000dbb ();
    goto label_1;
label_4:
    si = bx;
    bx = 0xffff;
    di = *((bp + 4));
    ax = fcn_00001603 ();
    if (*((bx + 8)) < 0x4001) {
        goto label_1;
    }
    goto label_2;
label_6:
    *((bp - 2)) = ax;
    cx -= cx;
    dx = *((bp - 0xa));
    si = *((di + 6));
    if (si <= dx) {
        dx -= si;
        cx++;
    }
    ax = *((bp - 0xc));
    ax = dx:ax / si;
    dx = dx:ax % si;
    ax++;
    cl += ch;
    *((bp - 4)) = cl;
    *((bp - 6)) = ax;
    ax = *(di);
    bx = *((di + 2));
    __asm ("jcxz 0x1af3");
    dx = *((di + 4));
    do {
        *((bp - 0x10)) -= ax;
        *((bp - 0xe)) -= bx;
        *((bp - 0xc)) -= dx;
        *((bp - 0xa)) -= si;
        __asm ("loop 0x1ae5");
    } while (1);
    si = ax;
    dx:ax = ax * si;
    *((bp - 0x12)) = ax;
    tmp_0 = ax;
    ax = dx;
    dx = tmp_0;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    dx:ax = ax * si;
    bx += ax;
    cx += dx;
    ax = *((di + 4));
    dx:ax = ax * si;
    cx += ax;
    dx += 0;
    tmp_2 = ax;
    ax = dx;
    dx = tmp_2;
    tmp_3 = ax;
    ax = si;
    si = tmp_3;
    dx:ax = ax * *((di + 6));
    ax += si;
    dx += 0;
    bx -= *((bp - 0x10));
    cx -= *((bp - 0xe));
    ax -= *((bp - 0xc));
    dx -= *((bp - 0xa));
    *((bp - 0x10)) = bx;
    *((bp - 0xe)) = cx;
    *((bp - 0xc)) = ax;
    si = *((di + 6));
    ax = dx:ax / si;
    dx = dx:ax % si;
    tmp_4 = ax;
    ax = cx;
    cx = tmp_4;
    ax = dx:ax / si;
    dx = dx:ax % si;
    dx -= dx;
    __asm ("stc");
    ax += dx;
    cx += dx;
    dx -= ax;
    *((bp - 8)) = dx;
    *((bp - 6)) -= cx;
    ax = *(di);
    bx = *((di + 2));
    __asm ("jcxz 0x1b5e");
    dx = *((di + 4));
    do {
        *((bp - 0x12)) -= ax;
        *((bp - 0x10)) -= bx;
        *((bp - 0xe)) -= dx;
        *((bp - 0xc)) -= si;
        __asm ("loop 0x1b50");
    } while (1);
    si = ax;
    dx:ax = ax * si;
    tmp_5 = ax;
    ax = dx;
    dx = tmp_5;
    tmp_6 = ax;
    ax = bx;
    bx = tmp_6;
    dx:ax = ax * si;
    bx += ax;
    cx += dx;
    ax = *((di + 4));
    dx:ax = ax * si;
    cx += ax;
    dx += 0;
    tmp_7 = ax;
    ax = dx;
    dx = tmp_7;
    tmp_8 = ax;
    ax = si;
    si = tmp_8;
    dx:ax = ax * *((di + 6));
    ax += si;
    dx += 0;
    bx -= *((bp - 0x12));
    cx -= *((bp - 0x10));
    ax -= *((bp - 0xe));
    dx -= *((bp - 0xc));
    *((bp - 0x12)) = bx;
    *((bp - 0x10)) = cx;
    *((bp - 0xe)) = ax;
    si = *((di + 6));
    ax = dx:ax / si;
    dx = dx:ax % si;
    tmp_9 = ax;
    ax = cx;
    cx = tmp_9;
    ax = dx:ax / si;
    dx = dx:ax % si;
    dx -= dx;
    __asm ("stc");
    ax += dx;
    cx += dx;
    *((bp - 0xa)) = ax;
    *((bp - 8)) += cx;
    *((bp - 6)) += dx;
    *((bp - 4)) += dl;
    tmp_10 = ax;
    ax = si;
    si = tmp_10;
    dx = *((di + 2));
    tmp_11 = ax;
    ax = dx;
    dx = tmp_11;
    bx = *((di + 4));
    __asm ("jcxz 0x1bc2");
    do {
        *((bp - 0x12)) -= ax;
        *((bp - 0x10)) -= bx;
        *((bp - 0xe)) -= dx;
        __asm ("loop 0x1bb7");
    } while (1);
    dx:ax = ax * si;
    tmp_12 = ax;
    ax = dx;
    dx = tmp_12;
    tmp_13 = ax;
    ax = bx;
    bx = tmp_13;
    dx:ax = ax * si;
    bx += ax;
    cx += dx;
    ax = *((di + 6));
    dx:ax = ax * si;
    ax += cx;
    dx += 0;
    bx -= *((bp - 0x12));
    ax -= *((bp - 0x10));
    dx -= *((bp - 0xe));
    *((bp - 0x12)) = bx;
    *((bp - 0x10)) = ax;
    si = *((di + 4));
    si += si;
    si = *((di + 6));
    si += 0;
    if (si < 0) {
        tmp_14 = dx;
        dx = bx;
        bx = tmp_14;
    } else {
        bx <<= 1;
        ax = rotate_left16 (ax, 1);
        dx = rotate_left16 (dx, 1);
        ax = dx:ax / si;
        dx = dx:ax % si;
        tmp_15 = ax;
        ax = bx;
        bx = tmp_15;
        ax = dx:ax / si;
        dx = dx:ax % si;
        bx >>= 1;
        ax = rotate_right16 (ax, 1);
        dh = rotate_right8 (dh, 1);
    }
    cx = 0xffff;
    si = 0xffff;
    dl = cl;
    bx = ~bx;
    ax = ~ax;
    dh = -dh;
    __asm ("cmc");
    ax += 0;
    bx += *((bp - 0xa));
    cx += *((bp - 8));
    si += *((bp - 6));
    dl += *((bp - 4));
    dl >>= 1;
    if (dl < 0) {
        si = rotate_right16 (si, 1);
        cx = rotate_right16 (cx, 1);
        bx = rotate_right16 (bx, 1);
        ax = rotate_right16 (ax, 1);
        dh = rotate_right8 (dh, 1);
        *((bp - 2))++;
    }
    di -= di;
    dh += dh;
    ax += di;
    bx += di;
    cx += di;
    si += di;
    dl += 0;
    dx = *((bp - 2));
    if (dl != 0) {
        si = 0x8000;
        dx++;
    }
    if (dx >= 0x4001) {
        goto label_2;
    }
    di = *((bp + 4));
    *(es:di) = ax;
    es:di += 2;
    tmp_16 = ax;
    ax = bx;
    bx = tmp_16;
    *(es:di) = ax;
    es:di += 2;
    tmp_17 = ax;
    ax = cx;
    cx = tmp_17;
    *(es:di) = ax;
    es:di += 2;
    tmp_18 = ax;
    ax = si;
    si = tmp_18;
    *(es:di) = ax;
    es:di += 2;
    tmp_19 = ax;
    ax = dx;
    dx = tmp_19;
    *(es:di) = ax;
    es:di += 2;
    al = *((bp - 3));
    eax = (int32_t) ax;
    *(es:di) = ax;
    es:di += 2;
label_8:
    di = ax;
    si = ax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x168e */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_0000168e (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg2) {
    uint32_t var_6h;
    int16_t var_5h;
    signed int16_t var_4h;
    int16_t var_2h;
    int16_t var_1h;
    dx = arg2;
    cl = 0;
    sp = bp - 6;
    si = *((bp + 8));
    di = *((bp + 6));
    al = cl;
    al ^= *((di + 0xa));
    al ^= *((si + 0xa));
    *((bp - 6)) = al;
    ax = *((si + 8));
    bx = *((di + 8));
    if (ax >= 0x4001) {
        goto label_1;
    }
    if (bx >= 0x4001) {
        goto label_2;
    }
    if (ax < bx) {
        cl ^= *((di + 0xa));
        tmp_0 = ax;
        ax = bx;
        bx = tmp_0;
        tmp_1 = di;
        di = si;
        si = tmp_1;
    } else {
        cl = *((si + 0xa));
    }
    *((bp - 5)) = cl;
    cx = *((si + 8));
    *((bp - 4)) = cx;
    if (bx <= 0xc001) {
        goto label_3;
    }
    ax -= bx;
    if (ax <= 0x40) {
        goto label_4;
    }
    do {
label_3:
        ax = *(si);
        bx = *((si + 2));
        cx = *((si + 4));
        dx = *((si + 6));
        goto label_5;
label_1:
        bx = di;
        di = *((bp + 4));
        fcn_00001603 (di, bx);
        if (ax < 0x40) {
            goto label_6;
        }
        if (bx >= 0x4001) {
            al = *((bp - 6));
            al |= al;
            if (al != 0) {
                goto label_7;
            }
            goto label_8;
label_2:
            bx = 0xffff;
            al = *((di + 0xa));
            al ^= cl;
            si = di;
            di = *((bp + 4));
            fcn_00001603 ();
            if (al < 0) {
                goto label_6;
            }
        } else {
label_8:
            al = *((si + 0xa));
        }
        *((bp - 5)) = al;
        *((bp - 4)) = 0x4001;
    } while (1);
label_7:
    di = *((bp + 4));
    al = fcn_00000dbb ();
label_6:
    goto label_9;
label_4:
    *((bp - 1)) = al;
    ax = *(di);
    bx = *((di + 2));
    cx = *((di + 4));
    dx = *((di + 6));
    *((bp - 2)) = 0;
    *((bp - 1)) -= 8;
    if (*((bp - 1)) < 0) {
        goto label_10;
    }
    do {
        *((bp - 2)) = al;
        al = ah;
        ah = bl;
        bl = bh;
        bh = cl;
        cl = ch;
        ch = dl;
        dl = dh;
        dh = 0;
        *((bp - 1)) -= 8;
    } while (*((bp - 1)) >= 0);
label_10:
    *((bp - 1)) &= 7;
    if (*((bp - 1)) == 0) {
        goto label_11;
    }
    do {
        dx >>= 1;
        cx = rotate_right16 (cx, 1);
        bx = rotate_right16 (bx, 1);
        ax = rotate_right16 (ax, 1);
        *((bp - 2)) = rotate_right8 (*((bp - 2)), 1);
        *((bp - 1))--;
    } while (*((bp - 1)) != 0);
label_11:
    di -= di;
    if (*((bp - 6)) == 0) {
        ax += *(si);
        bx += *((si + 2));
        cx += *((si + 4));
        dx += *((si + 6));
        if (dx >= 0) {
            goto label_12;
        }
        dx = rotate_right16 (dx, 1);
        cx = rotate_right16 (cx, 1);
        bx = rotate_right16 (bx, 1);
        ax = rotate_right16 (ax, 1);
        *((bp - 2)) = rotate_right8 (*((bp - 2)), 1);
        *((bp - 4))++;
        goto label_12;
    }
    *((bp - 5)) ^= 1;
    ax -= *(si);
    bx -= *((si + 2));
    cx -= *((si + 4));
    dx -= *((si + 6));
    if (dx < 0) {
        *((bp - 5)) ^= 1;
        dx = ~dx;
        cx = ~cx;
        bx = ~bx;
        ax = ~ax;
        bp - 2 = -bp - 2;
        __asm ("cmc");
        ax += di;
        bx += di;
        cx += di;
        dx += di;
    }
    si = 0x40;
    dh |= dh;
    if (dh < 0) {
        goto label_12;
    }
    do {
        si--;
        if (si == 0) {
            goto label_13;
        }
label_0:
        *((bp - 2)) <<= 1;
        ax = rotate_left16 (ax, 1);
        bx = rotate_left16 (bx, 1);
        cx = rotate_left16 (cx, 1);
        dx += dx;
    } while (dx >= 0);
    si -= 0x40;
    *((bp - 4)) += si;
    goto label_12;
label_13:
    dx |= dx;
    if (dx != 0) {
        goto label_0;
    }
    *((bp - 4)) = 0xc001;
    *((bp - 5)) = 0;
    goto label_5;
label_12:
    *((bp - 2)) <<= 1;
    ax += di;
    bx += di;
    cx += di;
    dx += di;
    if (dx < 0) {
        dx = rotate_right16 (dx, 1);
        *((bp - 4))++;
    }
    if (*((bp - 4)) >= 0x4001) {
        goto label_14;
    }
    while (1) {
label_5:
        di = *((bp + 4));
        *(es:di) = ax;
        es:di += 2;
        tmp_2 = ax;
        ax = bx;
        bx = tmp_2;
        *(es:di) = ax;
        es:di += 2;
        tmp_3 = ax;
        ax = cx;
        cx = tmp_3;
        *(es:di) = ax;
        es:di += 2;
        tmp_4 = ax;
        ax = dx;
        dx = tmp_4;
        *(es:di) = ax;
        es:di += 2;
        ax = *((bp - 4));
        *(es:di) = ax;
        es:di += 2;
        al = *((bp - 5));
        *(es:di) = al;
        es:di++;
label_9:
        return ax;
label_14:
        ch = 8;
        *((bp - 4)) = 0x4001;
        goto label_15;
        ch = 0x10;
        *((bp - 4)) = 0xc001;
label_15:
        ax = fcn_00002b0d ();
        *((bp - 5)) = 0;
        ax -= ax;
        bx = ax;
        cx = ax;
        dx = ax;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xd94 */
#include <stdint.h>
 
int16_t fcn_00000d94 (void) {
    ax = 0x78;
    cx = cs;
    ds = cs;
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    cx = 6;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    di -= 0xc;
    tmp_1 = ax;
    ax = si;
    si = tmp_1;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xdee */
#include <stdint.h>
 
void fcn_00000dee (void) {
    di = *(0xd8);
    di -= 0xc;
    *(0xd8) = di;
    es = ds;
    ds = cs;
    cx = 6;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    es = cs;
    ds = cs;
    di = cs;
    si = cs;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1f7d */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_00001f7d (int16_t arg_2h, int16_t arg_3h, int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg_ah) {
    bp = *(0xd8);
    ax = *(bp);
    bx = *((bp + 2));
    cx = *((bp + 4));
    dx = *((bp + 6));
    di -= di;
    si = *((bp + 8));
    if (si == 0xc001) {
        goto label_0;
    }
    if (si > 0xfff0) {
        goto label_1;
    }
    di = ax;
    ax = bx;
    bx = cx;
    cx = dx;
    dx -= dx;
    si += 0x10;
    do {
label_1:
        si++;
        if (si > 0) {
            goto label_0;
        }
        dx >>= 1;
        cx = rotate_right16 (cx, 1);
        bx = rotate_right16 (bx, 1);
        ax = rotate_right16 (ax, 1);
        di = rotate_right16 (di, 1);
    } while (1);
label_0:
    di <<= 1;
    di = 0;
    ax += di;
    bx += di;
    cx += di;
    dx += di;
    *(bp) = ax;
    *((bp + 2)) = bx;
    *((bp + 4)) = cx;
    *((bp + 6)) = dx;
    bx = di;
    cx = di;
    si = di;
    if ((*((bp + 3)) & 0x80) != 0) {
        bx = *(bp);
        cx = *((bp + 2));
        bx <<= 1;
        cx = rotate_left16 (cx, 1);
    }
    ax = *(bp);
    dx:ax = ax * *((bp + 4));
    bx += ax;
    cx += dx;
    si += di;
    bx += ax;
    cx += dx;
    si += di;
    bx = cx;
    cx = si;
    si -= si;
    ax = *((bp + 2));
    dx:ax = ax * *((bp + 4));
    bx += ax;
    cx += dx;
    si += di;
    bx += ax;
    cx += dx;
    si += di;
    ax = *(bp);
    dx:ax = ax * *((bp + 6));
    bx += ax;
    cx += dx;
    si += di;
    bx += ax;
    cx += dx;
    si += di;
    bx <<= 1;
    cx += di;
    si += di;
    bx = cx;
    cx = si;
    si -= si;
    ax = *((bp + 4));
    dx:ax = ax * ax;
    bx += ax;
    cx += dx;
    si += di;
    ax = *((bp + 6));
    dx:ax = ax * *((bp + 2));
    bx += ax;
    cx += dx;
    si += di;
    bx += ax;
    cx += dx;
    si += di;
    ax = *((bp + 6));
    dx:ax = ax * *((bp + 4));
    cx += ax;
    si += dx;
    di += di;
    cx += ax;
    si += dx;
    di += 0;
    ax = *((bp + 6));
    dx:ax = ax * ax;
    si += ax;
    di += dx;
    *(bp) = bx;
    *((bp + 2)) = cx;
    *((bp + 4)) = si;
    *((bp + 6)) = di;
    *((bp + 0xa)) = 0;
    *((bp + 8)) = 0;
    si = di;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2085 */
#include <stdint.h>
 
uint16_t fcn_00002085 (int16_t arg_2h, int16_t arg_4h, int16_t arg_6h, uint32_t arg_ah, int16_t arg1) {
    ax = arg1;
    al = 0xc;
    ax = al * *((bp + 6));
    ax -= 0xc;
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    si += *((bp + 4));
    fcn_00000dee ();
    di = si;
    do {
label_0:
        *((bp + 6))--;
        if (*((bp + 6)) <= 0) {
            goto label_1;
        }
        di = *(0xd8);
        al = *((di + 0x16));
        *((di + 0xa)) ^= al;
        ax = fcn_0000193c (di);
        *(di) = ax;
        *((di + 2)) = bx;
        *((di + 4)) = cx;
        *((di + 6)) = dx;
        di -= 0xc;
        bp = *(0xd8);
        bx = *(cs:);
        cx = *(cs:);
        dx = *(cs:);
        si = *(cs:);
        al = *(cs:);
        if (al == *((bp + 0xa))) {
            goto label_2;
        }
        bx -= *(bp);
        cx -= *((bp + 2));
        dx -= *((bp + 4));
        si -= *((bp + 6));
        if (si < 0) {
            si = ~si;
            dx = ~dx;
            cx = ~cx;
            bx = -bx;
            __asm ("cmc");
            cx += 0;
            dx += 0;
            si += 0;
            al ^= 1;
        }
        *(bp) = bx;
        *((bp + 2)) = cx;
        *((bp + 4)) = dx;
        *((bp + 6)) = si;
        *((bp + 0xa)) = al;
    } while (1);
label_2:
    *(bp) += bx;
    *((bp + 2)) += cx;
    *((bp + 4)) += dx;
    *((bp + 6)) += si;
    goto label_0;
label_1:
    si = *(0xd8);
    ax = *(si);
    si += 2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1853 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00001853 (int16_t arg_4h, int16_t arg_6h, int16_t arg_8h, int16_t arg2) {
    int16_t var_2h;
    dx = arg2;
    sp = bp - 2;
    si = *((bp + 8));
    di = *((bp + 6));
    cl = *((si + 0xa));
    cl ^= *((di + 0xa));
    *((bp - 2)) = cl;
    bx = *((di + 8));
    ax = *((si + 8));
    if (ax < 0x4001) {
        if (bx >= 0x4001) {
            goto label_0;
        }
        if (ax >= bx) {
            tmp_0 = ax;
            ax = bx;
            bx = tmp_0;
        }
        if (ax > 0xc001) {
            ax += bx;
            ax--;
            if (ax >= 0x4001) {
                goto label_1;
            }
            ax++;
            if (ax > 0xc001) {
                goto label_2;
            }
            ch = 0x10;
            fcn_00002b0d ();
        }
        ax = 0xc001;
        goto label_3;
    }
    bx = di;
    di = *((bp + 4));
    fcn_00001603 (di);
    if (ax < 0xc001) {
        goto label_4;
    }
    if (*((di + 8)) > 0xc001) {
        goto label_5;
label_0:
        bx = 0xffff;
        si = di;
        di = *((bp + 4));
        fcn_00001603 (si);
        if (*((di + 8)) < 0xc001) {
            goto label_4;
        }
        if (*((si + 8)) > 0xc001) {
            goto label_5;
        }
    }
    di = *((bp + 4));
    fcn_00000dbb ();
    goto label_6;
    do {
label_1:
        ch = 8;
        fcn_00002b0d ();
label_5:
        ax = 0x4001;
label_3:
        di = *((bp + 4));
        cl = *((bp - 2));
        ax = fcn_00000da9 ();
label_4:
        goto label_6;
label_2:
        fcn_00000dd4 ();
        tmp_1 = di;
        di = si;
        si = tmp_1;
        fcn_00000dd4 ();
        ax = fcn_0000193c ();
        *(0xd8) += 0x18;
        dx |= dx;
        if (dx >= 0) {
            di--;
            si <<= 1;
            ax = rotate_left16 (ax, 1);
            bx = rotate_left16 (bx, 1);
            cx = rotate_left16 (cx, 1);
            dx = rotate_left16 (dx, 1);
        }
        si <<= 1;
        ax += 0;
        bx += 0;
        cx += 0;
        dx += 0;
        if (dx < 0) {
            dx = rotate_right16 (dx, 1);
            di++;
        }
        if (di < 0x4001) {
            goto label_7;
        }
    } while (1);
label_7:
    si = di;
    di = *((bp + 4));
    *(es:di) = ax;
    es:di += 2;
    tmp_2 = ax;
    ax = bx;
    bx = tmp_2;
    *(es:di) = ax;
    es:di += 2;
    tmp_3 = ax;
    ax = cx;
    cx = tmp_3;
    *(es:di) = ax;
    es:di += 2;
    tmp_4 = ax;
    ax = dx;
    dx = tmp_4;
    *(es:di) = ax;
    es:di += 2;
    tmp_5 = ax;
    ax = si;
    si = tmp_5;
    *(es:di) = ax;
    es:di += 2;
    al = *((bp - 2));
    ah = 0;
    *(es:di) = ax;
    es:di += 2;
label_6:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xe1f */
#include <stdint.h>
 
void fcn_00000e1f (void) {
    si = *(0xd8);
    di = si - 0xc;
    *(0xd8) = di;
    es = ds;
    cx = 6;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    es = ds;
    di = ds;
    si = ds;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2242 */
#include <stdint.h>
 
int16_t fcn_00002242 (void) {
    ax = 0x146a;
    fcn_00002085 (ax, *(cs:0x1468));
    fcn_00001853 (si, si, *(0xd8));
    *(0xd8) += 0xc;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2260 */
#include <stdint.h>
 
int16_t fcn_00002260 (void) {
    ax = 0x14cc;
    fcn_00002085 (ax, *(cs:0x14ca));
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1e45 */
#include <stdint.h>
 
int16_t fcn_00001e45 (int16_t arg_4h, int16_t arg_6h) {
label_0:
    dx = *((si + 6));
    dx &= 0x7fff;
    dx |= *(si);
    dx |= *((si + 2));
    dx |= *((si + 4));
    if (dx == 0) {
        goto label_5;
    }
    do {
        ch = 1;
        fcn_00002b0d ();
        ax = 0x4500;
        goto label_6;
label_1:
        dx = *((di + 6));
        dx &= 0x7fff;
        dx |= *(di);
        dx |= *((di + 2));
        dx |= *((di + 4));
    } while (dx != 0);
    goto label_7;
    si = *((bp + 6));
    di = *((bp + 4));
    ax = *((si + 8));
    bx = *((di + 8));
    if (ax >= 0x4001) {
        goto label_0;
    }
label_5:
    if (bx >= 0x4001) {
        goto label_1;
    }
label_7:
    dx = ax;
    if (ax <= bx) {
        dx = bx;
    }
    if (dx > 0xc001) {
        cl = *((si + 0xa));
        if (cl < *((di + 0xa))) {
            goto label_8;
        }
        if (cl > *((di + 0xa))) {
            goto label_9;
        }
        if (ax < bx) {
            goto label_3;
        }
        if (ax > bx) {
            goto label_4;
        }
        ax = *((si + 6));
        if (ax != *((di + 6))) {
            goto label_10;
        }
        ch = 3;
        ch &= *(0xd7);
        if (ch == 0) {
            goto label_11;
        }
        ax = *((si + 4));
        if (ax != *((di + 4))) {
            goto label_10;
        }
        ax = *((si + 2));
        if (ax != *((di + 2))) {
            goto label_10;
        }
        if (ch == 2) {
            goto label_12;
        }
        ax = *(si);
        if (ax != *(di)) {
            goto label_10;
        }
    }
label_2:
    ax = 0x4000;
    goto label_6;
    if (ax > *(di)) {
label_10:
        goto label_4;
    }
label_3:
    if (cl != 0) {
        goto label_8;
    }
    do {
label_9:
        ax = 0x100;
        goto label_6;
label_4:
    } while (cl != 0);
label_8:
    ax = 0;
label_6:
    *(0xd5) = ah;
    si = di;
    return ax;
label_11:
    bx = *(si);
    bx -= *(di);
    bx = *((si + 2));
    bx -= *((di + 2));
    bx = *((si + 4));
    bx -= *((di + 4));
    if (bx > 0) {
        goto label_13;
    }
    bx = -bx;
    bx &= 0xff80;
    if (bx == 0) {
        goto label_2;
    }
    goto label_3;
label_13:
    bx &= 0xff80;
    if (bx == 0) {
        goto label_2;
    }
    goto label_4;
label_12:
    bx = *(si);
    bx -= *(di);
    if (bx > 0) {
        goto label_14;
    }
    bx = -bx;
    bh &= 0xfc;
    if (bh == 0) {
        goto label_2;
    }
    goto label_3;
label_14:
    bh &= 0xfc;
    if (bh == 0) {
        goto label_2;
    }
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2416 */
#include <stdint.h>
 
int16_t fcn_00002416 (void) {
    fcn_00000dd4 ();
    if (*((si + 8)) <= 0xffe0) {
        di = si;
        fcn_00000e0c ();
    } else {
        di = *(0xd8);
        *((di + 8)) += 3;
        fcn_00001f7d ();
        ax = 0x157b;
        fcn_00002085 (ax, *(cs:0x1579));
        fcn_00001853 (si, si, di);
        *(0xd8) += 0xc;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x168a */
#include <stdint.h>
 
void fcn_0000168a (int16_t arg2) {
    dx = arg2;
    cl = 1;
    return void (*0x1690)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xd2e */
#include <stdint.h>
 
int16_t fcn_00000d2e (void) {
    ax = 0x12;
    return void (*0xd97)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xe0c */
#include <stdint.h>
 
void fcn_00000e0c (void) {
    si = *(0xd8);
    cx = 6;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    *(0xd8) = si;
    si = di;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xd83 */
#include <stdint.h>
 
int16_t fcn_00000d83 (void) {
    ax = 0x67;
    return void (*0xd97)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x26d3 */
#include <stdint.h>
 
int16_t fcn_000026d3 (void) {
    if (*((si + 8)) > 0xffc0) {
        *(0xd8) -= 0xc;
        di = *(0xd8);
        fcn_00000d2e ();
        *((di + 8))++;
        fcn_0000168e (di, di, si);
        fcn_00001a23 (di, di, si);
        fcn_00000e1f ();
        bx = *(0xd8);
        *((bx + 8)) += 2;
        fcn_00001f7d ();
        ax = 0x1867;
        fcn_00002085 (ax, *(cs:0x1865));
        fcn_00001853 (si, di, *(0xd8));
        *((si + 8))++;
        *(0xd8) += 0x18;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xd61 */
#include <stdint.h>
 
int16_t fcn_00000d61 (void) {
    ax = 0x45;
    return void (*0xd97)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1d3d */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_00001d3d (void) {
    int16_t var_ah;
    int16_t var_6h;
    int16_t var_4h;
    uint32_t var_2h;
    sp = bp - 6;
    ax = *(di);
    bx = *((di + 2));
    cx = *((di + 4));
    dx = *((di + 6));
    *((bp - 4)) = 0;
    di = *((di + 8));
    di -= *((si + 8));
    if (di >= 0) {
        goto label_3;
    }
    goto label_4;
    do {
        di++;
        goto label_1;
label_0:
        di--;
    } while (di < 0);
    *((bp - 4)) <<= 1;
    ax <<= 1;
    bx = rotate_left16 (bx, 1);
    cx = rotate_left16 (cx, 1);
    dx += dx;
    if (dx < 0) {
        goto label_5;
    }
    if (dx >= 0) {
        goto label_0;
    }
label_3:
    if (dx > *((si + 6))) {
        goto label_5;
    }
    if (dx < *((si + 6))) {
        goto label_0;
    }
    if (cx > *((si + 4))) {
        goto label_5;
    }
    if (cx < *((si + 4))) {
        goto label_0;
    }
    if (bx > *((si + 2))) {
        goto label_5;
    }
    if (bx < *((si + 2))) {
        goto label_0;
    }
    if (ax < *(si)) {
        goto label_0;
    }
label_5:
    *((bp - 4))++;
    ax -= *(si);
    bx -= *((si + 2));
    cx -= *((si + 4));
    dx -= *((si + 6));
    di |= di;
    if (di > 0) {
        goto label_0;
    }
label_1:
    dx |= dx;
    if (dx < 0) {
        goto label_4;
    }
    if (dx == 0) {
        goto label_6;
    }
    do {
        di--;
        ax <<= 1;
        bx = rotate_left16 (bx, 1);
        cx = rotate_left16 (cx, 1);
        dx += dx;
    } while (dx >= 0);
label_4:
    di += *((si + 8));
label_2:
    di = *((bp - 0xa));
    *(es:di) = ax;
    es:di += 2;
    tmp_0 = ax;
    ax = bx;
    bx = tmp_0;
    *(es:di) = ax;
    es:di += 2;
    tmp_1 = ax;
    ax = cx;
    cx = tmp_1;
    *(es:di) = ax;
    es:di += 2;
    tmp_2 = ax;
    ax = dx;
    dx = tmp_2;
    *(es:di) = ax;
    es:di += 2;
    ax = di;
    *(es:di) = ax;
    es:di += 2;
    al = *((bp - 2));
    eax = (int32_t) ax;
    *(es:di) = ax;
    es:di += 2;
    *(0xd5) &= 0xbc;
    di = 7;
    ax = *((bp - 4));
    if (*((bp - 2)) == 1) {
        ax = -ax;
    }
    di &= ax;
    dl = *(cs:);
    *(0xd5) |= dl;
    si = di;
    return eax;
label_6:
    tmp_3 = cx;
    cx = dx;
    dx = tmp_3;
    tmp_4 = bx;
    bx = cx;
    cx = tmp_4;
    tmp_5 = ax;
    ax = bx;
    bx = tmp_5;
    di -= 0x10;
    dx |= dx;
    if (dx != 0) {
        goto label_1;
    }
    tmp_6 = cx;
    cx = dx;
    dx = tmp_6;
    tmp_7 = bx;
    bx = cx;
    cx = tmp_7;
    di -= 0x10;
    tmp_8 = cx;
    cx = dx;
    dx = tmp_8;
    di -= 0x10;
    dx |= dx;
    if (dx != 0) {
        goto label_1;
    }
    di = 0xc001;
    dx -= dx;
    cx -= cx;
    bx -= bx;
    ax -= ax;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x225d */
#include <stdint.h>
 
void fcn_0000225d (void) {
    return fcn_00001f7d ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x223c */
#include <stdint.h>
 
void fcn_0000223c (void) {
    fcn_00000dd4 ();
    return fcn_00001f7d ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x226d */
#include <stdint.h>
 
void fcn_0000226d (void) {
    fcn_00000dd4 ();
    fcn_00001f7d ();
    fcn_00000e1f ();
    fcn_00002242 ();
    fcn_00002260 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xe39 */
#include <stdint.h>
 
void fcn_00000e39 (int16_t arg1) {
    ax = arg1;
    si = *(0xd8);
    di = *(0xd8);
    es = ds;
    cx = 6;
    do {
        ax = *(si);
        si += 2;
        tmp_0 = di + 0xc;
        di + 0xc = ax;
        ax = tmp_0;
        *(es:di) = ax;
        es:di += 2;
        __asm ("loop 0xe48");
    } while (1);
    es = ds;
    di = ds;
    si = ds;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2363 */
#include <stdint.h>
 
uint16_t fcn_00002363 (int16_t arg2, int16_t arg1) {
    uint32_t var_2h;
    dx = arg2;
    ax = arg1;
    sp = bp - 2;
    fcn_00001a23 (si, di, si, di, si);
    *((bp - 2)) = 0;
    di = 0x15db;
    do {
        if (*((bp - 2)) >= 3) {
            goto label_0;
        }
        tmp_0 = di;
        di = si;
        si = tmp_0;
        fcn_00000dee ();
        tmp_1 = si;
        si = di;
        di = tmp_1;
        ax = fcn_00001e45 (*(0xd8), si);
        *(0xd8) += 0xc;
        if (ax != 0) {
            goto label_0;
        }
        *((bp - 2))++;
        di += 0xc;
    } while (1);
label_0:
    if (*((bp - 2)) == 0) {
        fcn_00002416 ();
    } else {
        bx = *((bp - 2));
        bx--;
        bl = *(cs:);
        *((bp - 2)) = bx;
        bx += 0x162f;
        di = bx;
        tmp_2 = di;
        di = si;
        si = tmp_2;
        fcn_00000dee ();
        tmp_3 = si;
        si = di;
        di = tmp_3;
        di = *(0xd8);
        ax = di - 0xc;
        *(0xd8) = ax;
        fcn_0000168a (ax);
        fcn_00001853 (si, di, si);
        fcn_00000d2e ();
        fcn_0000168e (si, si, di);
        fcn_00001a23 (si, si, *(0xd8));
        *(0xd8) += 0x18;
        fcn_00002416 ();
        di = *((bp - 2));
        di += 0x160b;
        tmp_4 = di;
        di = si;
        si = tmp_4;
        fcn_00000dee ();
        tmp_5 = si;
        si = di;
        di = tmp_5;
        fcn_0000168e (si, si, *(0xd8));
        *(0xd8) += 0xc;
    }
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xd72 */
#include <stdint.h>
 
int16_t fcn_00000d72 (void) {
    ax = 0x56;
    return void (*0xd97)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x25e3 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_000025e3 (void) {
    int16_t var_4h;
    int16_t var_2h;
    ax = *(di);
    bx = *((di + 2));
    cx = *((di + 4));
    dx = *((di + 6));
    if (dx <= 0xb505) {
        ax <<= 1;
        bx = rotate_left16 (bx, 1);
        cx = rotate_left16 (cx, 1);
        dx = rotate_left16 (dx, 1);
        si = 0;
        *((bp - 2))--;
    } else {
        dx = ~dx;
        cx = ~cx;
        bx = ~bx;
        ax = -ax;
        __asm ("cmc");
        bx += 0;
        cx += 0;
        dx += 0;
        si = 1;
    }
    di -= di;
    do {
        dx |= dx;
        if (dx != 0) {
            goto label_0;
        }
        tmp_0 = ax;
        ax = bx;
        bx = tmp_0;
        tmp_1 = ax;
        ax = cx;
        cx = tmp_1;
        tmp_2 = ax;
        ax = dx;
        dx = tmp_2;
        di -= 0x10;
    } while (di > 0xffc0);
    *(0xd8) -= 0xc;
    di = *(0xd8);
    ax = fcn_00000d94 ();
    goto label_1;
    if (*(0xd8) < 0) {
label_0:
        goto label_2;
    }
    do {
        di--;
        ax <<= 1;
        bx = rotate_left16 (bx, 1);
        cx = rotate_left16 (cx, 1);
        dx += dx;
    } while (dx >= 0);
label_2:
    si = sp;
    fcn_000026d3 ();
    si = 0x1859;
    fcn_00000dee ();
    si = *(0xd8);
    ax = sp;
    fcn_00001853 (si, ax, si);
label_1:
    si = bp - 2;
    *(0xd8) -= 0xc;
    di = *(0xd8);
    fcn_00000e53 ();
    fcn_0000168e (di, di, di + 0xc);
    fcn_00001853 (*((bp - 4)), *((bp - 4)), di);
    *(0xd8) += 0x18;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x125e */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
uint16_t fcn_0000125e (int16_t arg_2h, int16_t arg_4h, int16_t arg_6h, uint32_t arg_7h, int16_t arg_8h, int16_t arg_ah, int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    tmp_0 = si;
    si = bp;
    bp = tmp_0;
    cx = *((bp + 8));
    if (cx < 0x40) {
        cx |= cx;
        if (cx >= 0) {
            goto label_2;
        }
        if (cx > 0xc001) {
            cl = 0xc;
            cl &= *(0xd7);
            cl += *((bp + 0xa));
            if (cl == 5) {
                goto label_3;
            }
            if (cl == 8) {
                goto label_3;
            }
        }
label_0:
        bx -= bx;
        si = 0xc001;
        goto label_4;
label_3:
        si = 1;
        bx = 0x8000;
    } else {
        if (bx == 0) {
            goto label_5;
        }
        ch = 0x20;
        ax = fcn_00002b0d ();
        goto label_5;
    }
label_4:
    ax -= ax;
    *(bp) = ax;
    *((bp + 2)) = ax;
    *((bp + 4)) = ax;
    *((bp + 6)) = bx;
    *((bp + 8)) = si;
label_5:
    goto label_6;
label_2:
    si = 0x38;
    si &= cx;
    cx ^= si;
    si >>= 1;
    si >>= 1;
    si >>= 1;
    si = -si;
    si += 7;
    if (si == 7) {
        ah = 0;
        al = *((bp + si));
    } else {
        ax = *((bp + si));
    }
    bx -= bx;
    di = si;
    do {
        di--;
        if (di < 0) {
            goto label_7;
        }
        bl |= *((bp + di));
        *((bp + di)) = bh;
    } while (1);
label_7:
    dx = 0xff;
    cl &= 7;
    dx >>= cl;
    di = dx;
    di++;
    dx &= ax;
    if (dx == 0) {
        bl |= bl;
        if (bl == 0) {
            goto label_6;
        }
    }
    ch = 0x20;
    ax = fcn_00002b0d ();
    ax ^= dx;
    cl = 0xc;
    cl &= *(0xd7);
    if (cl == 0xc) {
        goto label_1;
    }
    if (cl == 0) {
        goto label_8;
    }
    cl += *((bp + 0xa));
    if (cl == 4) {
        goto label_1;
    }
    if (cl == 9) {
        goto label_1;
    }
    bl |= dl;
    if (bl != 0) {
        goto label_9;
    }
    goto label_6;
    do {
label_1:
        *((bp + si)) = al;
        if (*((bp + 7)) != 0) {
            goto label_6;
        }
        goto label_0;
label_8:
        bl |= bl;
        if (bl != 0) {
            goto label_10;
        }
        if ((di & ax) != 0) {
            goto label_10;
        }
        dx += dx;
    } while (dx <= di);
    goto label_9;
label_10:
    dx += dx;
    if (dx < di) {
        goto label_1;
    }
label_9:
    si -= 7;
    if (si >= 0) {
        ax += di;
        *((bp + si + 7)) = al;
        ah = -ah;
        goto label_11;
    }
    ax += di;
    *((bp + si + 7)) = ax;
    si++;
    do {
        si++;
        if (si > 0) {
            goto label_11;
        }
        *((bp + si + 7)) += 0;
    } while (*((bp + si + 7)) < 0);
    if (*((bp + si + 7)) < 0) {
label_11:
        __asm ("stc");
        *((bp + 6)) = rotate_right16 (*((bp + 6)), 1);
        *((bp + 8))++;
    }
label_6:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xe88 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_00000e88 (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    cx = *((si + 8));
    if (cx <= 0x10) {
        if (cx > 0xc001) {
            goto label_2;
        }
        ax -= ax;
        goto label_3;
    }
label_0:
    ch = 8;
    fcn_00002b0d ();
    ax = 0x8000;
    goto label_3;
label_2:
    bx = *((si + 6));
    ax -= ax;
    if (cx < 0) {
        bx >>= 1;
        dx = rotate_right16 (dx, 1);
    }
    dx = *((si + 4));
    if (cx <= 0) {
        goto label_4;
    }
    do {
        dx <<= 1;
        bx = rotate_left16 (bx, 1);
        ax = rotate_left16 (ax, 1);
        __asm ("loop 0xeba");
    } while (1);
label_4:
    dx |= *(si);
    dx |= *((si + 2));
    bl |= dh;
    bl |= dl;
    cl = 0xc;
    cl &= *(0xd7);
    if (cl == 0xc) {
        goto label_5;
    }
    if (cl == 0) {
        goto label_6;
    }
    cl += *((si + 0xa));
    if (cl == 4) {
        goto label_5;
    }
    if (cl == 9) {
        goto label_5;
    }
    bx = -bx;
label_1:
    ax += 0;
    if (ax >= 0) {
        goto label_7;
    }
    if (*((si + 0xa)) != 1) {
        goto label_0;
    }
    if (ax != 0x8000) {
        goto label_0;
    }
    goto label_7;
label_6:
    dl = 1;
    dl &= al;
    bl |= dl;
    bx += 0x7fff;
    goto label_1;
label_5:
    __asm ("clc");
    goto label_1;
label_7:
    if (*((si + 0xa)) == 1) {
        ax = -ax;
    }
label_3:
    *(es:di) = ax;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x24eb */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_000024eb (void) {
    int16_t var_ch;
    bp = *(0xd8);
    di = bp - 0xc;
    *(0xd8) = di;
    fcn_00000d83 ();
    fcn_00001853 (si, si, di);
    *(0xd8) = bp;
    di = *((si + 8));
    if (di <= 0xffe0) {
        goto label_0;
    }
    ax = *(si);
    bx = *((si + 2));
    cx = *((si + 4));
    dx = *((si + 6));
    di++;
    if (di >= 0) {
        goto label_1;
    }
    do {
        dx >>= 1;
        cx = rotate_right16 (cx, 1);
        bx = rotate_right16 (bx, 1);
        ax = rotate_right16 (ax, 1);
        di++;
    } while (di < 0);
    ax += 0;
    bx += 0;
    cx += 0;
    dx += 0;
label_1:
    *(0xd8) -= 0xc;
    di = *(0xd8);
    *(es:di) = ax;
    es:di += 2;
    tmp_0 = ax;
    ax = bx;
    bx = tmp_0;
    *(es:di) = ax;
    es:di += 2;
    tmp_1 = ax;
    ax = cx;
    cx = tmp_1;
    *(es:di) = ax;
    es:di += 2;
    tmp_2 = ax;
    ax = dx;
    dx = tmp_2;
    *(es:di) = ax;
    es:di += 2;
    ax -= ax;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    di -= 0xc;
    ax = 0x173f;
    fcn_00002085 (ax, *(cs:0x173d));
    ax = *(0xd8);
    fcn_00001853 (si, si, ax);
    *(0xd8) += 0xc;
label_0:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x15a0 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_000015a0 (signed int16_t arg1) {
    ax = arg1;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    ax = *(si);
    si += 2;
    cx = *(si);
    if (ax >= 0x4001) {
        goto label_1;
    }
    ax += 0x3ffe;
    if (ax < 0) {
        goto label_2;
    }
    do {
label_0:
        ax <<= 1;
        cx >>= 1;
        ax = rotate_right16 (ax, 1);
        *(es:di) = ax;
        es:di += 2;
        si = di;
        return ax;
label_1:
        ax = 0x7fff;
    } while (1);
label_2:
    ax -= ax;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x15c7 */
#include <stdint.h>
 
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_000015c7 (void) {
    ax = ds;
    bx = es;
    es = ax;
    ds = bx;
    __asm ("std");
    si = si + 8;
    di = di + 0xa;
    ax = *(si);
    si += 2;
    tmp_0 = ax;
    ax = bx;
    bx = tmp_0;
    ax -= ax;
    bx <<= 1;
    ax = rotate_left16 (ax, 1);
    *(es:di) = ax;
    es:di += 2;
    bx >>= 1;
    if (bx == 0) {
        goto label_0;
    }
    bx -= 0x3ffe;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    *(es:di) = *(si);
    si += 2;
    es:di += 2;
    do {
        ds = es;
        di = es;
        si = es;
        return ax;
label_0:
        ax = 0xc001;
        *(es:di) = ax;
        es:di += 2;
        ax -= ax;
        *(es:di) = ax;
        es:di += 2;
        *(es:di) = ax;
        es:di += 2;
        *(es:di) = ax;
        es:di += 2;
        *(es:di) = ax;
        es:di += 2;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1f05 */
#include <stdint.h>
 
int16_t fcn_00001f05 (int16_t arg3) {
    bx = arg3;
    ax = 0x4000;
    if (*((si + 8)) <= 0xc001) {
        goto label_0;
    }
    while (dx == 0) {
        ax = 0x100;
        if (*((si + 0xa)) != 1) {
            ax = 0;
        }
label_0:
        *(0xd5) = ah;
        return ax;
        dx = *((si + 6));
        dx &= 0x7fff;
        dx |= *(si);
        dx |= *((si + 2));
        dx |= *((si + 4));
    }
    ch = 1;
    fcn_00002b0d ();
    ax = 0x4500;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1f42 */
#include <stdint.h>
 
int16_t fcn_00001f42 (void) {
    ax = 0x4000;
    if (*((si + 8)) <= 0xc001) {
        goto label_1;
    }
    if (*((si + 8)) >= 0x4001) {
        goto label_2;
    }
    ax = 0x400;
    do {
label_0:
        if (*((si + 0xa)) == 1) {
            ax |= 0x200;
        }
label_1:
        *(0xd5) = ah;
        return ax;
label_2:
        ax = 0x500;
        dx = *((si + 6));
        dx &= 0x7fff;
        dx |= *(si);
        dx |= *((si + 2));
        dx |= *((si + 4));
    } while (dx == 0);
    ax = 0x100;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2b6c */
#include <stdint.h>
 
uint16_t fcn_00002b6c (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    cl = 4;
    ch = 0xa;
    bx = *(es:si);
    al = bh;
    al >>= cl;
    ax = al * ch;
    dl = 0xf;
    dl &= bh;
    al += dl;
    ax = al * ch;
    dx = 0xf0;
    dl &= bl;
    dx >>= cl;
    ax += dx;
    cx = 0xa;
    dx:ax = ax * cx;
    bx &= 0xf;
    ax += bx;
    cx = dx;
    bx = dx;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2c66 */
#include <stdint.h>
 
int8_t fcn_00002c66 (int16_t arg4, int16_t arg2, int16_t arg1) {
    cx = arg4;
    dx = arg2;
    ax = arg1;
    al = 0x64;
    cl = 4;
    tmp_0 = ax;
    ax = dx;
    dx = tmp_0;
    al = ax / dl;
    ah = ax % dl;
    dl = ah;
    __asm ("aam");
    ah <<= cl;
    ah |= al;
    tmp_1 = ax;
    ax = dx;
    dx = tmp_1;
    __asm ("aam");
    ah <<= cl;
    al |= ah;
    ah = dh;
    *(es:di) = ax;
    es:di += 2;
    ax = cx;
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x10fa */
#include <stdint.h>
 
int16_t fcn_000010fa (void) {
    ax = *(es:si);
    bx = *((es:si + 2));
    cx = *((es:si + 4));
    dx = *((es:si + 6));
    dx |= dx;
    if (dx >= 0) {
        if (dx > 0) {
            goto label_0;
        }
        cx |= cx;
        if (cx != 0) {
            goto label_0;
        }
        bx |= bx;
        if (bx != 0) {
            goto label_0;
        }
        ax |= ax;
        if (ax != 0) {
            goto label_0;
        }
        si = 0xc001;
        goto label_1;
    }
    dx = ~dx;
    cx = ~cx;
    bx = ~bx;
    ax = -ax;
    __asm ("cmc");
    bx += 0;
    cx += 0;
    dx += 0;
label_0:
    si = 0x40;
    do {
        dx |= dx;
        if (dx != 0) {
            goto label_2;
        }
        tmp_0 = cx;
        cx = dx;
        dx = tmp_0;
        tmp_1 = bx;
        bx = cx;
        cx = tmp_1;
        tmp_2 = ax;
        ax = bx;
        bx = tmp_2;
        si -= 0x10;
    } while (1);
    if (si < 0) {
label_2:
        goto label_1;
    }
    do {
        si--;
        ax += ax;
        bx += bx;
        cx += cx;
        dx += dx;
    } while (dx >= 0);
label_1:
    *((di + 0xa)) = bp;
    *((di + 8)) = si;
    *((di + 6)) = dx;
    *((di + 4)) = cx;
    *((di + 2)) = bx;
    *(di) = ax;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2b9b */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
uint16_t rotate_left16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int16_t fcn_00002b9b (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
    int16_t var_4h;
    int16_t var_2h;
    bx = arg3;
    cx = arg4;
    dx = arg2;
    ax = arg1;
    al = *((es:si + 9));
    ax &= 0x80;
    al = rotate_left8 (al, 1);
    *((di + 0xa)) = ax;
    cl = 4;
    al = *((es:si + 8));
    ax <<= cl;
    al >>= cl;
    __asm ("aad");
    di = 0x2710;
    dx:ax = ax * di;
    tmp_0 = ax;
    ax = bx;
    bx = tmp_0;
    si = si + 6;
    ax = fcn_00002b6c (di, si, bp);
    ax += bx;
    dl += dh;
    bx = dx;
    dx:ax = ax * di;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    cx = dx;
    dx:ax = ax * di;
    cx += ax;
    dl += dh;
    si -= 2;
    ax = fcn_00002b6c ();
    ax += bx;
    cx += 0;
    dl += dh;
    bx = dx;
    dx:ax = ax * di;
    tmp_2 = ax;
    ax = cx;
    cx = tmp_2;
    si = dx;
    dx:ax = ax * di;
    tmp_3 = ax;
    ax = bx;
    bx = tmp_3;
    tmp_4 = dx;
    dx = di;
    di = tmp_4;
    dx:ax = ax * dx;
    bx += si;
    di += ax;
    si -= 2;
    ax = fcn_00002b6c (si);
    ax += cx;
    bx += dx;
    di += dx;
    si = 0x2710;
    dx:ax = ax * si;
    tmp_5 = ax;
    ax = bx;
    bx = tmp_5;
    cx = dx;
    dx:ax = ax * si;
    tmp_6 = ax;
    ax = si;
    si = tmp_6;
    tmp_7 = dx;
    dx = di;
    di = tmp_7;
    dx:ax = ax * dx;
    cx += si;
    di += ax;
    dx += 0;
    si = *((bp - 2));
    ax = fcn_00002b6c ();
    bx += ax;
    cx += 0;
    di += 0;
    dx += 0;
    ax = 0x40;
    do {
        dx |= dx;
        if (dx != 0) {
            goto label_0;
        }
        ax -= 0x10;
        if (ax == 0) {
            goto label_1;
        }
        tmp_8 = di;
        di = dx;
        dx = tmp_8;
        tmp_9 = cx;
        cx = di;
        di = tmp_9;
        tmp_10 = bx;
        bx = cx;
        cx = tmp_10;
    } while (1);
    if (ax < 0) {
label_0:
        goto label_2;
    }
    do {
        ax--;
        bx <<= 1;
        cx = rotate_left16 (cx, 1);
        di = rotate_left16 (di, 1);
        dx += dx;
    } while (dx >= 0);
    do {
label_2:
        si = *((bp - 4));
        *(si) = bx;
        *((si + 2)) = cx;
        *((si + 4)) = di;
        *((si + 6)) = dx;
        *((si + 8)) = ax;
        return ax;
label_1:
        ax = 0xc001;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x308a */
#include <stdint.h>
 
int16_t fcn_0000308a (void) {
    ax = *(0xd6);
    *(es:di) = ax;
    es:di += 2;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x308f */
#include <stdint.h>
 
int16_t fcn_0000308f (void) {
    ax = *(0xd8);
    ax -= 0xc0;
    cl = 0xc;
    al = ax / cl;
    ah = ax % cl;
    al &= 7;
    cl = 3;
    al <<= cl;
    cx = *(0xd4);
    ch &= 0xc7;
    ch |= al;
    tmp_0 = ax;
    ax = cx;
    cx = tmp_0;
    *(es:di) = ax;
    es:di += 2;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3001 */
#include <stdint.h>
 
int16_t fcn_00003001 (void) {
    fcn_0000308a ();
    fcn_0000308f ();
    ax = 0xc0;
    ax -= *(0xd8);
    dl = 0xc;
    al = ax / dl;
    ah = ax % dl;
    cx = 0xffff;
    tmp_0 = ax;
    ax = cx;
    cx = tmp_0;
    cx += cx;
    ax >>= cl;
    *(es:di) = ax;
    es:di += 2;
    ax -= ax;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    *(es:di) = ax;
    es:di += 2;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x116c */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_0000116c (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    cx = *((si + 8));
    if (cx <= 0x3f) {
        cx |= cx;
        if (cx >= 0) {
            goto label_1;
        }
        if (cx > 0xc001) {
            bl = 0xc;
            bl &= *(0xd7);
            bl += *((si + 0xa));
            if (bl == 5) {
                goto label_2;
            }
            if (bl == 8) {
                goto label_2;
            }
        }
        bp -= bp;
        goto label_3;
label_2:
        bp -= bp;
        dx = bp;
        ax = 1;
        bx = bp;
        if (bl != 5) {
            goto label_4;
        }
        ax = -ax;
        bx = ~bx;
        dx = ~dx;
        bp = ~bp;
    } else {
label_0:
        ch = 8;
        fcn_00002b0d ();
label_3:
        dx -= dx;
        bx = dx;
        ax = dx;
    }
label_4:
    goto label_5;
label_1:
    bp = *((si + 6));
    dx = *((si + 4));
    bx = *((si + 2));
    di = *(si);
    ax -= ax;
    cl -= 0x30;
    if (cl > 0) {
        goto label_6;
    }
    do {
        al |= ah;
        ah = 0;
        ax |= di;
        di = bx;
        bx = dx;
        dx = bp;
        bp -= bp;
        cl += 0x10;
    } while (cl <= 0);
    cl &= 0xf;
label_6:
    cl = -cl;
    if (cl == 0) {
        goto label_7;
    }
    cl += 0x10;
    do {
        al |= ah;
        bp >>= 1;
        dx = rotate_right16 (dx, 1);
        bx = rotate_right16 (bx, 1);
        di = rotate_right16 (di, 1);
        ah = rotate_right8 (ah, 1);
        __asm ("loop 0x11ef");
    } while (1);
label_7:
    cl = 0xc;
    cl &= *(0xd7);
    if (cl == 0xc) {
        goto label_8;
    }
    if (cl == 0) {
        goto label_9;
    }
    cl += *((si + 0xa));
    if (cl == 4) {
        goto label_8;
    }
    if (cl == 9) {
        goto label_8;
    }
    ax = -ax;
    if (cl < 9) {
        goto label_10;
    }
    goto label_8;
    do {
        goto label_0;
label_9:
        cl = 1;
        cx &= di;
        al |= cl;
        ax += 0x7fff;
label_10:
        cx = 0;
        di += cx;
        bx += cx;
        dx += cx;
        bp += cx;
    } while (bp < 0);
label_8:
    tmp_0 = ax;
    ax = di;
    di = tmp_0;
    if (*((si + 0xa)) == 1) {
        bp = ~bp;
        dx = ~dx;
        bx = ~bx;
        ax = -ax;
        __asm ("cmc");
        bx += 0;
        dx += 0;
        bp += 0;
    }
label_5:
    *(es:di) = ax;
    es:di += 2;
    tmp_1 = ax;
    ax = bx;
    bx = tmp_1;
    *(es:di) = ax;
    es:di += 2;
    tmp_2 = ax;
    ax = dx;
    dx = tmp_2;
    *(es:di) = ax;
    es:di += 2;
    tmp_3 = ax;
    ax = bp;
    bp = tmp_3;
    *(es:di) = ax;
    es:di += 2;
    di -= 8;
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x2c84 */
#include <stdint.h>
 
uint16_t rotate_right16 (uint16_t value, uint32_t count) {
    const uint16_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
uint8_t rotate_right8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value >> count) | (value << (-count & mask));
}
 
int16_t fcn_00002c84 (void) {
    int16_t var_2h;
    ax = *((si + 8));
    bx = *(si);
    cx = *((si + 2));
    dx = *((si + 6));
    si = *((si + 4));
    if (ax < 0) {
        goto label_1;
    }
    ax -= 0x3c;
    if (ax >= 0) {
        if (ax > 0) {
            goto label_2;
        }
        if (dx < 0xde0b) {
            goto label_3;
        }
        if (dx > 0xde0b) {
            goto label_2;
        }
        if (si < 0x6b3a) {
            goto label_3;
        }
        if (si > 0x6b3a) {
            goto label_2;
        }
        if (cx < 0x763f) {
            goto label_3;
        }
        if (cx > 0x763f) {
            goto label_2;
        }
        if (bx > 0xfff0) {
            goto label_2;
        }
    }
label_3:
    ah = 0;
    al -= 4;
    do {
        al += 0x10;
        if (al > 0) {
            goto label_4;
        }
        ah = bh;
        bx = cx;
        cx = si;
        si = dx;
        dx -= dx;
    } while (1);
label_1:
    goto label_5;
label_2:
    goto label_6;
label_4:
    al -= 0x10;
    if (al >= 0) {
        goto label_7;
    }
    do {
        dx >>= 1;
        si = rotate_right16 (si, 1);
        cx = rotate_right16 (cx, 1);
        bx = rotate_right16 (bx, 1);
        ah = rotate_right8 (ah, 1);
        al++;
    } while (al < 0);
label_7:
    ah += ah;
    bx += 0;
    cx += 0;
    si += 0;
    dx += 0;
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    si = 0x2710;
    ax = dx:ax / si;
    dx = dx:ax % si;
    tmp_1 = ax;
    ax = cx;
    cx = tmp_1;
    ax = dx:ax / si;
    dx = dx:ax % si;
    tmp_2 = ax;
    ax = bx;
    bx = tmp_2;
    ax = dx:ax / si;
    dx = dx:ax % si;
    ax = fcn_00002c66 ();
    dx -= dx;
    tmp_3 = ax;
    ax = cx;
    cx = tmp_3;
    ax = dx:ax / si;
    dx = dx:ax % si;
    tmp_4 = ax;
    ax = bx;
    bx = tmp_4;
    ax = dx:ax / si;
    dx = dx:ax % si;
    tmp_5 = ax;
    ax = cx;
    cx = tmp_5;
    ax = dx:ax / si;
    dx = dx:ax % si;
    ax = fcn_00002c66 ();
    dx = bx;
    tmp_6 = ax;
    ax = cx;
    cx = tmp_6;
    ax = dx:ax / si;
    dx = dx:ax % si;
    tmp_7 = ax;
    ax = cx;
    cx = tmp_7;
    ax = dx:ax / si;
    dx = dx:ax % si;
    fcn_00002c66 ();
    dx = cx;
    ax = dx:ax / si;
    dx = dx:ax % si;
    al = fcn_00002c66 ();
    __asm ("aam");
    cl = 4;
    ah <<= cl;
    al |= ah;
    *(es:di) = al;
    es:di++;
    do {
        si = *((bp - 2));
        al = *((si + 0xa));
        al = rotate_right8 (al, 1);
        *(es:di) = al;
        es:di++;
        return ax;
label_5:
        al = 0;
label_0:
        cx = 9;
        *(es:di) = al;
        cx--;
        es:di++;
    } while (1);
label_6:
    ch = 8;
    fcn_00002b0d ();
    al = 0x99;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xf17 */
#include <stdint.h>
 
void fcn_00000f17 (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    cx = 6;
    do {
        *(es:di) = *(si);
        cx--;
        si += 2;
        es:di += 2;
    } while (cx != 0);
    si = di;
    tmp_0 = di;
    di = si;
    si = tmp_0;
    si = si + 8;
    if (*(si) <= 0xc001) {
        goto label_0;
    }
    if (*(si) >= 0x4001) {
        goto label_1;
    }
    *(si)--;
    fcn_00000e53 ();
    *(si) = 1;
    do {
label_0:
        return;
label_1:
        *(si) = 0xc001;
        *((di + 8)) = 0xd;
        *((di + 7)) = 0x80;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4fe2 */
#include <stdint.h>
 
int16_t fcn_00004fe2 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah) {
    ax = 0x500;
    ax = 0x185;
    ax = 0x39c;
    ax = bp + 0xa;
    __asm ("lcall fcn.000052ab");
    /* [37] -rwx section size 640 named seg_037 */
    *(di) -= al;
    return void (*0x5004)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5004 */
#include <stdint.h>
 
void loc_00005004 (void) {
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xb72 */
#include <stdint.h>
 
int16_t fcn_00000b72 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch) {
    si = 0;
    di = 0;
    while (si < 0x2328) {
        ax = 0x137;
        __asm ("lcall fcn.00000c06");
        ax = 0x148;
        __asm ("lcall fcn.00000c06");
        __asm ("lcall fcn.00000bc8");
        di += ax;
        si++;
    }
    ax = di;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xcce */
#include <stdint.h>
 
int16_t fcn_00000cce (void) {
    int16_t var_4h;
    int16_t var_2h;
    si = 0;
    goto label_1;
label_0:
    *((bp - 2)) = 0;
    di = 0;
    *((bp - 4)) = 1;
    while (di < 0xb3) {
        ax = *((bp - 4));
        *((bp - 2)) += ax;
        *((bp - 4)) += 2;
        di++;
    }
    si++;
label_1:
    if (si < 0x3e8) {
        goto label_0;
    }
    ax = *((bp - 2));
    si = di;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xb40 */
#include <stdint.h>
 
void fcn_00000b40 (int16_t arg_6h) {
    do {
label_0:
        si = *((bp + 6));
        if (si <= 2) {
            goto label_1;
        }
        ax = si;
        ax--;
        ax = fcn_00000b40 (cs);
    } while (1);
    ax = si;
    ax += 0xfffe;
    ax = fcn_00000b40 (cs);
    goto label_0;
    dx = ax;
    ax += dx;
    goto label_2;
label_1:
    ax = 1;
label_2:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x974 */
#include <stdint.h>
 
int16_t fcn_00000974 (int16_t arg_6h, int16_t arg_8h) {
    ax = *((bp + 6));
    ax |= *((bp + 8));
    if (ax != 0) {
        goto label_0;
    }
    si = 0;
    while (si < 0x2328) {
        dx = *(0x96);
        ax = *(0x94);
        *((bp + 6)) += ax;
        *((bp + 8)) += dx;
        *(0x94) += 2;
        *(0x96) += 0;
        si++;
    }
    goto label_1;
label_0:
    si = 0;
    while (si < 0x2328) {
        *(0x94) -= 2;
        dx = *(0x96);
        ax = *(0x94);
        *((bp + 6)) -= ax;
        *((bp + 8)) -= dx;
        si++;
    }
label_1:
    dx = *((bp + 8));
    ax = *((bp + 6));
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x9d1 */
#include <stdint.h>
 
int16_t fcn_000009d1 (uint32_t arg3, int16_t arg4) {
    bx = arg3;
    cx = arg4;
    eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
    si++;
    eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("daa");
    bp += cx;
    eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
    ax = *((bp + 0xc));
    *((bp - 0xa)) = ax;
    ax = *((bp + 0xa));
    *((bp - 0xc)) = ax;
    ax = *((bp + 8));
    *((bp - 0xe)) = ax;
    ax = *((bp + 6));
    *((bp - 0x10)) = ax;
    return void (*0xa43)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xa43 */
#include <stdint.h>
 
void loc_00000a43 (int16_t arg4) {
    cx = arg4;
    eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("das");
    bp += cx;
    eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
    si = es;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xa96 */
#include <stdint.h>
 
int16_t fcn_00000a96 (void) {
    si = 0x64;
    while (1) {
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si--;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si--;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si--;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si--;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si--;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si--;
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si = es;
        __asm ("clc");
        eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        __asm ("clc");
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        if (si > 0) {
            eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
            if (si <= 0) {
                goto label_0;
            }
            eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        }
        if (si > 0) {
            eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
            if (si <= 0) {
label_0:
                goto label_1;
            }
            eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        }
        if (si > 0) {
            eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
            if (si <= 0) {
label_1:
                goto label_2;
            }
            eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        }
        si = es;
        __asm ("clc");
        eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
label_2:
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        __asm ("clc");
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si = es;
        __asm ("clc");
        eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        __asm ("clc");
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_38h (eax, ebx, ecx, edx, esi, edi, edp);
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si = es;
        __asm ("clc");
        eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
        ax = si;
        si--;
        ax |= ax;
        if (ax == 0) {
            goto label_3;
        }
    }
label_3:
    eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
    si++;
    __asm ("clc");
    si = es;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xc23 */
#include <stdint.h>
 
int16_t fcn_00000c23 (void) {
    int16_t var_68h;
    int16_t var_66h;
    int16_t var_64h;
    ax = 0x159;
    fcn_00000c06 (cs, bp - 0x64, ss);
    ax = 0x170;
    ax = 0x167;
    __asm ("lcall fcn.000043b4");
    *((bp - 0x66)) = dx;
    *((bp - 0x68)) = ax;
    dx |= ax;
    if (dx == 0) {
        ax = fcn.00000172;
        __asm ("lcall fcn.00004fe2");
        cx = ax;
        cx = ax;
        ax = 0xffff;
        __asm ("lcall fcn.00003ca2");
        cx = ax;
    }
    di = 0;
    goto label_1;
label_0:
    si = 0;
    while (*((ss:bp + si - 0x64)) != 0) {
        __asm ("les bx, [bp - 0x68]");
        *(es:bx)++;
        if (*(es:bx) < 0) {
            al = *(ss:);
            __asm ("les bx, [bp - 0x68]");
            *((es:bx + 0xc))++;
            __asm ("les bx, es:[bx + 0xc]");
            bx--;
            *(es:bx) = al;
            ah = 0;
        } else {
            __asm ("lcall fcn.00005006");
        }
        si++;
    }
label_1:
    di++;
    ax = di;
    if (ax < 0x3e8) {
        goto label_0;
    }
    __asm ("lcall fcn.00004918");
    cx = bp - 0x68;
    cx = bp - 0x68;
    ax = di;
    di = bp - 0x68;
    si = bp - 0x68;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xa68 */
#include <stdint.h>
 
int8_t fcn_00000a68 (int16_t arg4, uint32_t arg1) {
    cx = arg4;
    ax = arg1;
    eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
    bp += cx;
    eax = syscall_3ah (eax, ebx, ecx, edx, esi, edi, edp);
    fp_tmp_0 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    do {
        eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
        ah = *(0x62d);
        __asm ("sahf");
        if (*(0x62c) >= di) {
            goto label_0;
        }
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        si++;
        eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
        __asm ("loopne 0xa78");
    } while (1);
    al += 0xcd;
label_0:
    eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
    si++;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xc06 */
#include <stdint.h>
 
int8_t fcn_00000c06 (int16_t arg_6h, int16_t arg_ah, int16_t arg3) {
    bx = arg3;
    while (al != 0) {
        __asm ("les bx, [bp + 0xa]");
        *((bp + 0xa))++;
        al = *(es:bx);
        __asm ("les bx, [bp + 6]");
        *((bp + 6))++;
        *(es:bx) = al;
        al |= al;
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0xbc8 */
#include <stdint.h>
 
int32_t fcn_00000bc8 (int16_t arg_6h, int16_t arg_ah, uint32_t arg3, int16_t arg1) {
    bx = arg3;
    ax = arg1;
    while (al == *(es:bx)) {
        __asm ("les bx, [bp + 6]");
        if (*(es:bx) == 0) {
            ax = 0;
            goto label_0;
        }
        *((bp + 6))++;
        *((bp + 0xa))++;
        __asm ("les bx, [bp + 6]");
        al = *(es:bx);
        __asm ("les bx, [bp + 0xa]");
    }
    __asm ("les bx, [bp + 6]");
    al = *(es:bx);
    eax = (int32_t) ax;
    __asm ("les bx, [bp + 0xa]");
    al = *(es:bx);
    eax = (int32_t) ax;
    dx = ax;
    ax -= dx;
label_0:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x43b4 */
#include <stdint.h>
 
uint16_t fcn_000043b4 (int16_t arg_6h, int16_t arg_8h, int16_t arg_ah, int16_t arg_ch, int16_t arg1) {
    int16_t var_4h;
    int16_t var_2h;
    ax = arg1;
    ax = fcn_00004367 (bp);
    *((bp - 2)) = dx;
    *((bp - 4)) = ax;
    dx |= ax;
    if (dx == 0) {
        dx = 0;
        ax = 0;
    } else {
        fcn_0000428e (*((bp + 0xa)), *((bp + 0xc)), *((bp + 6)), *((bp + 8)), *((bp - 4)), *((bp - 2)));
    }
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3ca2 */
#include <stdint.h>
 
int16_t fcn_00003ca2 (int16_t arg_6h) {
    while (ax != 0) {
        bx = *(0x378);
        bx <<= 1;
        bx <<= 1;
        __asm ("lcall [bx + 0x62e]");
        ax = *(0x378);
        *(0x378)--;
        ax |= ax;
    }
    __asm ("lcall [0x36a]");
    __asm ("lcall [0x36e]");
    __asm ("lcall [0x372]");
    __asm ("lcall fcn.0000010d");
    cx = bp + 6;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x12f */
#include <stdint.h>
 
int16_t fcn_0000012f (int16_t arg3) {
    bx = arg3;
    ax = 0x3500;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x5b) = bx;
    *(0x5d) = es;
    ax = 0x3504;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x5f) = bx;
    *(0x61) = es;
    ax = 0x3505;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x63) = bx;
    *(0x65) = es;
    ax = 0x3506;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x67) = bx;
    *(0x69) = es;
    ax = 0x2500;
    dx = cs;
    ds = cs;
    dx = 0x125;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5cf */
#include <stdint.h>
 
int16_t fcn_000005cf (int16_t arg3, int16_t arg2, int16_t arg1) {
    bx = arg3;
    dx = arg2;
    ax = arg1;
    *(cs:0x5cb) = ds;
    es = *(0x7b);
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
    si = *(0x75);
    si += 2;
    cx = 1;
    if (*(0x7d) >= 3) {
        es = *(0x77);
        di = si;
        cl = 0x7f;
        al = 0;
        __asm ("repne scasb al, byte es:[di]");
        __asm ("jcxz 0x685");
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
    fcn_0000065d ();
    if (bx > 0) {
        goto label_3;
    }
    do {
        if (bx < 0) {
            goto label_4;
        }
        al = fcn_0000065d ();
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
        __asm ("ljmp 0:0x1af");
label_4:
        cx += dx;
        ds = *(cs:);
        *(0x6b) = bx;
        bx++;
        bx += bx;
        bx += bx;
        si = sp;
        bp -= bx;
    } while (bp < 0);
    *(0x6d) = bp;
    *(0x6f) = ss;
label_1:
    __asm ("jcxz 0x6c0");
    *(bp) = si;
    *((bp + 2)) = ss;
    bp += 4;
    do {
        al = *(ss:);
        ss:++;
        al |= al;
        __asm ("loopne 0x6b8");
    } while (1);
    if (al == 0) {
        goto label_1;
    }
    ax = 0;
    *(bp) = ax;
    *((bp + 2)) = ax;
    __asm ("ljmp cs:[0x5c7]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x6cd */
#include <stdint.h>
 
int16_t fcn_000006cd (void) {
    es = *(0x77);
    di = 0;
    __asm ("lcall fcn.00003d04");
    bx = ax;
    *(0x71) = ax;
    *(0x73) = dx;
    ds = dx;
    ax |= dx;
    if (ax == 0) {
        __asm ("ljmp 0:0x1af");
    }
    ax = 0;
    cx = 0xffff;
    do {
        *(bx) = di;
        *((bx + 2)) = es;
        bx += 4;
        __asm ("repne scasb al, byte es:[di]");
    } while (*(es:di) != al);
    *(bx) = ax;
    *((bx + 2)) = ax;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x7b4 */
#include <stdint.h>
 
int16_t fcn_000007b4 (void) {
    si = 0;
    ax = 7;
    ax = 0x98;
    __asm ("lcall fcn.00004fe2");
    while (1) {
        ax = si;
        if (ax > 5) {
        } else {
            bx = ax;
            bx <<= 1;
        }
        si++;
        if (si >= 6) {
            goto label_0;
        }
    }
label_0:
    ax = 7;
    ax = 0x11c;
    __asm ("lcall fcn.00004fe2");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x172 */
#include <stdint.h>
 
int16_t fcn_00000172 (void) {
    ax = 0x2500;
    __asm ("lds dx, [0x5b]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2504;
    __asm ("lds dx, [0x5f]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2505;
    __asm ("lds dx, [0x63]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    ax = 0x2506;
    __asm ("lds dx, [0x67]");
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1a7 */
#include <stdint.h>
 
void fcn_000001a7 (void) {
    ah = 0x40;
    bx = 2;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x59f */
#include <stdint.h>
 
int16_t fcn_0000059f (int16_t arg3) {
    bx = arg3;
    ax = 0x3502;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    *(0x186) = es;
    *(0x184) = bx;
    *(0x1f2) = cs;
    dx = 0x1b0;
    ax = 0x2502;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("clc");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x1c9 */
#include <stdint.h>
 
int16_t fcn_000001c9 (void) {
    ax = sp;
    if (ax == sp) {
        /* BIOS: returns equipment list */
        eax = syscall_11h (eax, ebx, ecx, edx, esi, edi, edp);
        ax &= 2;
        if (ax == 0) {
            goto label_0;
        }
        ax = 0;
        __asm ("out 0xf0, al");
        __asm ("fninit");
        __asm ("wait");
        *(fp_stack--) = 1.0;
        __asm ("wait");
        *(fp_stack--) = 0.0;
        __asm ("wait");
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        __asm ("wait");
        *(fp_stack--) = fp_stack[0];
        __asm ("wait");
        fp_stack[0] = -fp_stack[0];
        __asm ("wait");
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        __asm ("wait");
        bp - 2 = fp_status;
        ax = *((bp - 2));
        __asm ("sahf");
        if (ax == 0) {
            ax = 2;
            goto label_0;
        }
        ax = 3;
        goto label_0;
    }
    ax = 0;
    __asm ("out 0xf0, al");
    __asm ("fninit");
    *((bp - 2)) = 0;
    cx = 0x14;
    do {
        __asm ("loop 0x219");
    } while (1);
    ax = *((bp - 2));
    ax &= 0xf3f;
    ax = 0;
    if (ax == 0x33f) {
        *((bp - 2)) = 0xffff;
        bp - 2 = fp_status;
        cx = 0x14;
        __asm ("loop 0x234");
        if ((*((bp - 2)) & 0xb8bf) != 0) {
            goto label_0;
        }
        ax = 1;
    }
label_0:
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5ba */
#include <stdint.h>
 
int16_t fcn_000005ba (void) {
    __asm ("lds dx, [0x184]");
    ax = 0x2502;
    eax = syscall_21h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("clc");
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x513 */
#include <stdint.h>
 
int8_t fcn_00000513 (int16_t arg3, int16_t arg4) {
    bx = arg3;
    cx = arg4;
    eax = syscall_37h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("loop fcn.00000567");
    al = *(si);
    ah = *((si + 2));
    al |= 0x40;
    ah &= al;
    ah &= 0x7f;
    *((si + 2)) = ah;
    eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
    al &= 0x58;
    eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
    return al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x52d */
#include <stdint.h>
 
void fcn_0000052d (int16_t arg4) {
    cx = arg4;
    if (bl != 0xc0) {
        cl |= 7;
    }
    ch |= 0xd8;
    tmp_0 = cl;
    cl = ch;
    ch = tmp_0;
    *(0x202) = cx;
    fcn_000004fc ();
    fcn_00000567 ();
    __asm ("lds bx, [si + 0xa]");
    __asm ("lcall fcn.00005d61");
    fcn_0000057c ();
    fcn_000004fc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x4fc */
#include <stdint.h>
 
void fcn_000004fc (int16_t arg4, int16_t arg1) {
    cx = arg4;
    ax = arg1;
    cx = 8;
    fcn_0000049f (ax);
    if (*(0x81) == 0) {
        void (*0x510)() ();
    }
    eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x49f */
#include <stdint.h>
 
int32_t fcn_0000049f (int16_t arg2) {
    dx = arg2;
    eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
    __asm ("in ax, 0xcd");
    eax = syscall_3dh (eax, ebx, ecx, edx, esi, edi, edp);
    ax = *(0x196);
    ax &= 0x4700;
    if ((ax & 0x4000) != 0) {
        if ((ax & 0x100) == 0) {
            goto label_0;
        }
        return ax;
    }
label_0:
    if ((ax & 0x4500) != 0) {
        if ((ax & 0x4000) == 0) {
            return ax;
        }
        eax = syscall_39h (eax, ebx, ecx, edx, esi, edi, edp);
        fp_stack[0] *= fp_stack[5];
        ax ^= 0xc3ee;
    }
    eax = syscall_37h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = (int32_t) ax;
    *((bp + si - 0x33)) += dx;
    ax = *(0x1a0);
    dx = *(0x1a0);
    dx &= 0x8000;
    eax = syscall_37h (eax, ebx, ecx, edx, esi, edi, edp);
    eax = (int32_t) ax;
    *((bp + di)) += si;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x567 */
#include <stdint.h>
 
void fcn_00000567 (int16_t arg3, int16_t arg4) {
    bx = arg3;
    cx = arg4;
    eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
    tmp_0 = ax;
    ax = si;
    si = tmp_0;
    bp += cx;
    *((bp + di - 0x69f2)) += ax;
    *(bx) += di;
    eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
    tmp_1 = ax;
    ax = si;
    si = tmp_1;
    bx += ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x5d61 */
#include <stdint.h>
 
void fcn_00005d61 (int16_t arg3) {
    bx = arg3;
    __asm ("wait");
    *((bx + si)) += al;
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x57c */
#include <stdint.h>
 
void fcn_0000057c (int16_t arg4) {
    cx = arg4;
    do {
        dx:ax = ax * dx;
        __asm ("int1");
        return;
        eax = syscall_35h (eax, ebx, ecx, edx, esi, edi, edp);
        al ^= 0xcd;
        __asm ("aaa");
        __asm ("loop 0x50d");
    } while (1);
    al += 0x8a;
    cl += *((fs:bp + di - 0x938));
    *((bp + si)) <<= 1;
    return void (*0xeb10)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x406 */
#include <stdint.h>
 
void fcn_00000406 (int16_t arg2, int16_t arg1) {
    dx = arg2;
    ax = arg1;
    if (*(0x81) < 3) {
        fcn_000004fc ();
        ax = cx;
        al &= 0xf8;
        if (cx == 0x100) {
            goto label_0;
        }
        if (cx == 0x500) {
            goto label_0;
        }
        if (cx == 0x328) {
            goto label_0;
        }
        if (ax == 0x1c0) {
            goto label_0;
        }
        if (ax == 0x1e4) {
            goto label_0;
        }
        if (ax == 0x10) {
            goto label_0;
        }
        if (ax == 0x18) {
            goto label_0;
        }
        if (ax == 0x410) {
            goto label_0;
        }
        if (ax == 0x418) {
            goto label_0;
        }
        if (ax == 0xd0) {
            goto label_0;
        }
        if (ax == 0xd8) {
            goto label_0;
        }
        if (ax == 0x6d9) {
            goto label_0;
        }
        if (ax == 0x610) {
            goto label_0;
        }
        if (ax == 0x618) {
            goto label_0;
        }
        if (ax == 0x210) {
            goto label_0;
        }
        if (ax == 0x218) {
            goto label_0;
        }
        __asm ("les bx, [si + 0xa]");
        if (ax != 0x30) {
            goto label_1;
        }
        fcn_00000567 ();
        eax = syscall_3ch (eax, ebx, ecx, edx, esi, edi, edp);
        *(fp_stack--) = *(bx);
        fcn_0000049f ();
        eax = syscall_3ah (eax, ebx, ecx, edx, esi, edi, edp);
        __asm ("stc");
        ax = fcn_0000057c ();
    }
label_0:
    return ax;
label_1:
    if (ax == 0x430) {
        ax = fcn_00000567 ();
        eax = syscall_3ch (eax, ebx, ecx, edx, esi, edi, edp);
        *(fp_stack--) = *(bx);
        fcn_0000049f (ax);
        eax = syscall_3ah (eax, ebx, ecx, edx, esi, edi, edp);
        __asm ("stc");
        fcn_0000057c ();
        return;
    }
    fcn_0000052d ();
    fcn_000004fc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x555 */
#include <stdint.h>
 
int16_t fcn_00000555 (int16_t arg4) {
    cx = arg4;
    ax = cx;
    ax &= 0xfff8;
    ax &= 0x1d0;
    if (ax != 0x110) {
        return ax;
    }
    fcn_0000052d ();
    return ax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x3757 */
#include <stdint.h>
 
int16_t fcn_00003757 (int16_t arg_6h, int16_t arg3, uint32_t arg2) {
    uint32_t var_4h;
    uint32_t var_2h;
    bx = arg3;
    dx = arg2;
    ax = *(0x6be);
    ax |= *(0x6c0);
    if (ax != 0) {
        ax = 0;
        ax = 8;
        __asm ("lcall [0x6be]");
        *((bp - 2)) = dx;
        *((bp - 4)) = ax;
        ax = 8;
        __asm ("lcall [0x6be]");
        if (*((bp - 2)) == 0) {
            if (*((bp - 4)) == 1) {
                goto label_0;
            }
        }
        ax = *((bp - 4));
        ax |= *((bp - 2));
        if (ax != 0) {
            ax = 0;
            ax = 8;
            __asm ("lcall [0x6be]");
            __asm ("les bx, [bp + 6]");
            ax = *(es:bx);
            ax--;
            dx = 6;
            dx:ax = ax * dx;
            bx = ax;
            bx += 0x206;
            es = ds;
            ax = 8;
            __asm ("lcall [bp - 4]");
            cx = ax;
            cx = ax;
        }
    } else {
        __asm ("les bx, [bp + 6]");
        ax = *(es:bx);
        ax--;
        dx = 6;
        dx:ax = ax * dx;
        bx = ax;
        bx += 0x206;
        es = ds;
        ax = 0x273;
        ax = 0x3b0;
        __asm ("lcall fcn.00005b1b");
        __asm ("lcall fcn.0000380e");
        /* [05] -rwx section size 16 named seg_005 */
        ax = 1;
        __asm ("lcall fcn.0000010d");
        cx = ax;
    }
label_0:
    __asm ("retf");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_dcc/dhamp/ia32_mz_from_dcc/subject.exe @ 0x65d */
#include <stdint.h>
 
int16_t fcn_0000065d (int16_t arg3, int16_t arg4, int16_t arg2, int16_t arg1) {
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
    __asm ("jcxz 0x684");
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
