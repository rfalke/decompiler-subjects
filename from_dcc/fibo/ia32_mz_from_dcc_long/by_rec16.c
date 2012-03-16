/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe'
 */

/*	Procedure: 0x0000012F - 0x000001A6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0000012F()
{
	/* unknown */ void  ds;



    ax = 0x3500;
    asm("int 0x21");
    *L0000005B = bx;
    *L0000005D = es;
    ax = 0x3504;
    asm("int 0x21");
    *L0000005F = bx;
    *L00000061 = es;
    ax = 0x3505;
    asm("int 0x21");
    *L00000063 = bx;
    *L00000065 = es;
    ax = 0x3506;
    asm("int 0x21");
    *L00000067 = bx;
    *L00000069 = es;
    ax = 0x2500;
    ds = cs;
    dx = 0x125;
    asm("int 0x21");
    return;
    (save)ds;
    ax = 0x2500;
    asm("lds dx,[0x5b]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2504;
    asm("lds dx,[0x5f]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2505;
    asm("lds dx,[0x63]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2506;
    asm("lds dx,[0x67]");
    asm("int 0x21");
    (restore)ds;
    asm("retf");
    *L00000081 = 0;
    asm("retf");
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00000248 -> 0000028c */
/*	Procedure: 0x000001A7 - 0x0000025E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000001A7()
{



    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    return;
    cx = 0x1e;
    dx = 0x3d;
    ds = *%cs:0x1c7];
    L000001A7();
    (save)3;
    ax = L00000000();
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    (restore) *%cs:0x1c9];
    (restore) *%cs:0x1cb];
    *%cs:0x1cd] = ds;
    asm("cld");
    es = *L0000007B;
    si = 0x80;
    ah = 0;
    asm("%e lodsb");
    ax = ax + 1;
    bp = es;
    asm("xchg dx,si");
    asm("xchg ax,bx");
    si = *L00000075 + 2;
    cx = 1;
    if(*L0000007D >= 3) {
        es = *L00000077;
        di = si;
        cl = 0x7f;
        al = 0;
        asm("repne scasb");
        < ? L00000287 : ;
        cl = cl ^ 0x7f;
    }
    sp = sp - 2;
    ax = 1 + bx + cx & 65534;
    if(di = sp - ax) {
        goto L00000287;
    }
    sp = di;
    ds = es;
    es = ss;
    (save)cx;
    cx = cx - 1;
    asm("rep movsb");
    *di = 0;
    di = di + 1;
    ds = bp;
    asm("xchg si,dx");
    asm("xchg bx,cx");
    dx = bx;
L00000243:
    L0000025F();
    if(!(bx = bx + 1)) {
        < ? L0000028c : ;
        L0000025F();
        > ? L00000248 : ;
    }
    if(al != 0x20 && al != 0xd && al != 9) {
        goto L00000243;
    }
    al = 0;
    goto L00000243;
}

/*	Procedure: 0x0000025F - 0x00000312
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000025F()
{



    if(ax != 0) {
        dx = dx + 1;
        *di = al;
        di = di + 1;
        if(al == 0) {
        }
    }
    asm("xchg ah,al");
    al = 0;
    asm("stc");
    if(!(bx = bx + 1)) {
        al = *esi;
        esi = esi + 1;
        cx = cx - 1;
        if(!(al = al - 0x22)) {
            al = al + 0x22;
            if(al == 0x5c && *si == 0x22) {
                al = *esi;
                esi = esi + 1;
                cx = cx - 1;
            }
            si :: 0;
        }
    }
    return;
    goto L00000000;
    (restore)cx;
    cx = cx + dx;
    ds = *%cs:0x1cd];
    *L0000006B = bx;
    bx = bx + 1 + bx + 1 + bx + 1 + bx + 1;
    si = sp;
    if(bp = sp - bx) {
        goto L00000000;
    }
    sp = bp;
    *L0000006D = bp;
    *L0000006F = ss;
L000002af:
    < ? L000002c2 : ;
    *bp = si;
    *(bp + 2) = ss;
    bp = bp + 4;
    asm("%s lodsb");
    asm("loopne 0x2ba");
    if(al == 0) {
        goto L000002af;
    }
    *bp = 0;
    *(bp + 2) = 0;
    goto ( *L000001c9);
    di = 0;
    (save) *L00000077;
    ax = L00000050( *L00000079);
    bx = ax;
    (restore)es;
    *L00000071 = ax;
    *L00000073 = dx;
    (save)ds;
    ds = dx;
    if(!(ax = ax | dx)) {
        goto L00000000;
    }
    ax = 0;
    cx = 65535;
L000002fd:
    *bx = di;
    *(bx + 2) = es;
    bx = bx + 4;
    asm("repne scasb");
    if(*%es:di] != al) {
        goto L000002fd;
    }
    *bx = ax;
    *(bx + 2) = ax;
    (restore)ds;
    asm("retf");
}

/*	Procedure: 0x00000313 - 0x0000036D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000313()
{



    if(cx < 0) {
        bx = !bx;
        cx = !cx;
        bx = bx + 1;
        asm("adc cx,+0x0");
    } else {
        while(1) {
            if(!(ax = ax + bx)) {
                dx = dx + 0x1000;
            }
            ch = cl;
            dh = dh + (4 << 4);
            ch = al;
            ax = ax >> cl;
            dx = dx + ax;
            ax = ch & 0xf;
            asm("retf");
            if(cx >= 0) {
                break;
            }
            bx = !bx;
            cx = !cx;
            bx = bx + 1;
            asm("adc cx,+0x0");
        }
    }
    if(!(ax = ax - bx)) {
        dx = dx - 0x1000;
    }
    bh = cl;
    cl = 4;
    bh = bh << 4;
    dx = dx;
    ax = ax >> al;
    dx = dx + ax;
    ax = ch & 0xf;
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 0000038a -> 0000038e */
/*	Procedure: 0x0000036E - 0x0000038E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000036E()
{



    (save)cx;
    ch = al;
    ax = ax >> 4;
    dx = dx + ax;
    al = 4;
    ah = bl;
    bx = bx >> 4;
    (restore)cx;
    cx = cx + bx;
    bl = ah;
    ax = ax & 0xf;
    bx = bx & 0xf;
    if(dx == cx) {
        ax :: bx;
    }
    asm("retf");
}

/*	Procedure: 0x0000038F - 0x0000043B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000038F()
{



    dx = 0x412;
    goto L00000397;
    dx = 0x417;
L00000397:
    cx = 5;
    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    cx = 0x27;
    dx = 0x41c;
    ah = 0x40;
    asm("int 0x21");
    goto L00000000;
    goto ( *L00000544);
    goto ( *L00000548);
    goto ( *L0000054c);
    goto ( *L00000550);
    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    (save)di;
    L0000013d(0x94, ds);
    (save)ss;
    (save)bp - 4;
    L000001f1(0xb1, ds);
    si = 1;
    goto L00000428;
L000003ed:
    L0000013d(0xb4, ds);
    (save)ss;
    (save)bp - 2;
    L000001f1(0xc3, ds);
    (save)L0000003c( *(bp - 2));
    (save) *(bp - 2);
    L0000013d(0xc6, ds);
    si = si + 1;
L00000428:
    if(si <= *(bp - 4)) {
        goto L000003ed;
    }
    L0000004a(0);
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000043C - 0x0000046D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000043C()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    if(si <= 2) {
        ax = 1;
    } else {
        (save)si - 1;
        (save)L0000043C(cs);
        (save)si + 65534;
        dx = L0000043C(cs);
        (restore)ax;
        ax = ax + dx;
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000046E - 0x000004A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000046E()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    if(si >= 0) {
        if(si > 0x58) {
L0000047e:
            si = 0x57;
        }
        *L000000DA = si;
        al = *(si + 0xdc);
        asm("cbw");
        asm("xchg ax,si");
    } else {
        si = ~si;
        if(si > 0x23) {
            goto L0000047e;
        }
        *L000000DA = 65535;
    }
    *L0000007F = si;
    ax = 65535;
    (restore)si;
    (restore)bp;
    asm("retf 0x2");
}

/*	Procedure: 0x000004A9 - 0x000004A9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000004A9()
{



    asm("retf");
}

/*	Procedure: 0x000004AA - 0x000004DC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000004AA()
{



    (save)bp;
    for(bp = sp; 1; *(( *L00000144 << 1 << 1) + 0x554)()) {
        ax = *L00000144;
        *L00000144 = *L00000144 - 1;
        if(ax == 0) {
            break;
        }
    }
    *L00000136();
    *L0000013a();
    *L0000013e();
    L00000000( *(bp + 6));
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000004DD - 0x0000050B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000004DD()
{



    (save)bp;
    bp = sp;
    if(*L00000144 == 0x20) {
        ax = 1;
    } else {
        dx = *(bp + 8);
        ax = *(bp + 6);
        bx = *L00000144 << 1 << 1;
        *(bx + 0x556) = dx;
        *(bx + 0x554) = ax;
        *L00000144 = *L00000144 + 1;
        ax = 0;
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000050C - 0x00000520
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000050C()
{



    bp = sp;
    ax = *(bp + 6);
    L00000050(ax, 0, bp);
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000521 - 0x00000588
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000521()
{



    (save)bp;
    bp = sp;
    asm("les bx,[bp+0x6]");
    *L00000150 = *%es:bx+0xe];
    *L0000014E = *%es:bx+0xc];
    cx = *(bp + 8);
    bx = *(bp + 6);
    L00000000();
    if(!(sp = sp - 4)) {
        *L00000150 = 0;
        *L0000014E = 0;
    } else {
        asm("les bx,[bp+0x6]");
        asm("les bx,[%es:bx+0x8]");
        *(bp - 2) = es;
        *(bp - 4) = bx;
        dx = *(bp - 2);
        ax = *(bp - 4);
        asm("les bx,[0x14e]");
        *%es:bx+0xa] = dx;
        *%es:bx+0x8] = ax;
        dx = *L00000150;
        ax = *L0000014E;
        asm("les bx,[bp-0x4]");
        *%es:bx+0xe] = dx;
        *%es:bx+0xc] = ax;
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000589 - 0x00000638
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000589()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    dx = *(bp + 0xc);
    ax = *(bp + 0xa);
    asm("les bx,[bp+0x6]");
    *%es:bx] = *%es:bx] - ax;
    asm("sbb [%es:bx+0x2],dx");
    asm("les bx,[bp+0x6]");
    cx = *%es:bx+0x2];
    bx = *%es:bx];
    dx = *(bp + 8);
    ax = *(bp + 6);
    *(bp - 2) = dx;
    *(bp - 4) = L00000000();
    dx = *(bp + 0xc);
    asm("adc dx,+0x0");
    asm("les bx,[bp-0x4]");
    *%es:bx+0x2] = dx;
    *%es:bx] = ax;
    dx = *(bp + 8);
    ax = *(bp + 6);
    asm("les bx,[bp-0x4]");
    *%es:bx+0x6] = dx;
    *%es:bx+0x4] = ax;
    cx = *(bp + 8);
    bx = *(bp + 6);
    dx = *L0000014C;
    ax = *L0000014A;
    L00000000();
    if(!(ax = *(bp + 0xa) + 1)) {
        asm("les bx,[bp-0x4]");
        *L0000014C = es;
        *L0000014A = bx;
    } else {
        dx = *(bp - 2);
        ax = *(bp - 4);
        cx = *(bp + 0xc);
        bx = *(bp + 0xa);
        *(bp + 8) = dx;
        *(bp + 6) = L00000000();
        dx = *(bp - 2);
        ax = *(bp - 4);
        asm("les bx,[bp+0x6]");
        *%es:bx+0x6] = dx;
        *%es:bx+0x4] = ax;
    }
    dx = *(bp - 2);
    ax = *(bp - 4) + 8;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000639 - 0x000006A6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000639()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    *(bp - 2) = dx;
    *(bp - 4) = L00000081( *(bp + 6), *(bp + 8));
    if(*(bp - 2) == -1) {
        if(*(bp - 4) != -1) {
            goto L00000664;
        }
        dx = 0;
        ax = 0;
    } else {
L00000664:
        dx = *L0000014C;
        ax = *L0000014A;
        asm("les bx,[bp-0x4]");
        *%es:bx+0x6] = dx;
        *%es:bx+0x4] = ax;
        dx = *(bp + 8);
        ax = *(bp + 6) + 1;
        asm("adc dx,+0x0");
        asm("les bx,[bp-0x4]");
        *%es:bx+0x2] = dx;
        *%es:bx] = ax;
        asm("les bx,[bp-0x4]");
        *L0000014C = es;
        *L0000014A = bx;
        dx = *L0000014C;
        ax = *L0000014A + 8;
    }
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000006A7 - 0x0000070C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000006A7()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    *(bp - 2) = dx;
    *(bp - 4) = L00000081( *(bp + 6), *(bp + 8));
    if(*(bp - 2) == -1) {
        if(*(bp - 4) != -1) {
            goto L000006d2;
        }
        dx = 0;
        ax = 0;
    } else {
L000006d2:
        asm("les bx,[bp-0x4]");
        *L00000148 = es;
        *L00000146 = bx;
        asm("les bx,[bp-0x4]");
        *L0000014C = es;
        *L0000014A = bx;
        dx = *(bp + 8);
        ax = *(bp + 6) + 1;
        asm("adc dx,+0x0");
        asm("les bx,[bp-0x4]");
        *%es:bx+0x2] = dx;
        *%es:bx] = ax;
        dx = *(bp - 2);
        ax = *(bp - 4) + 8;
    }
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000070D - 0x0000081B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000070D()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    if(!(ax = *(bp + 6) | *(bp + 8))) {
        dx = 0;
        ax = 0;
    } else {
        dx = *(bp + 8);
        ax = *(bp + 6) + 0x17;
        asm("adc dx,+0x0");
        ax = ax & 65520;
        *(bp + 6) = ax;
        cx = 0;
        bx = 0;
        dx = *L00000148;
        ax = *L00000146;
        L00000000();
        if(!( *(bp + 8) = dx & 65535)) {
            (save) *(bp + 8);
            L000006A7(cs, *(bp + 6));
        } else {
            *(bp - 2) = *L00000150;
            *(bp - 4) = *L0000014E;
            cx = 0;
            bx = 0;
            L00000000();
            != ? 0x777 : ;
            goto L0000080a;
L00000777:
            asm("les bx,[bp-0x4]");
            dx = *%es:bx+0x2];
            ax = *%es:bx];
            cx = *(bp + 8);
            bx = *(bp + 6) + 0x30;
            asm("adc cx,+0x0");
            if(dx >= cx) {
                != ? 0x797 : ;
                if(ax < bx) {
                    goto L000007ac;
                }
                (save) *(bp + 8);
                (save) *(bp + 6);
                (save) *(bp - 2);
                L00000589(cs, *(bp - 4));
            } else {
L000007ac:
                asm("les bx,[bp-0x4]");
                ax = *%es:bx];
                if(*%es:bx+0x2] >= *(bp + 8)) {
                    != ? 0x7c2 : ;
                    if(ax < *(bp + 6)) {
                        goto L000007e5;
                    }
                    (save) *(bp - 2);
                    L00000521(cs, *(bp - 4));
                    asm("les bx,[bp-0x4]");
                    *%es:bx] = *%es:bx] + 1;
                    asm("adc word [%es:bx+0x2],+0x0");
                    dx = *(bp - 2);
                } else {
L000007e5:
                    asm("les bx,[bp-0x4]");
                    asm("les bx,[%es:bx+0xc]");
                    *(bp - 2) = es;
                    *(bp - 4) = bx;
                    cx = *L00000150;
                    bx = *L0000014E;
                    dx = *(bp - 2);
                    ax = *(bp - 4);
                    L00000000();
                    if(!(ax = *(bp - 4) + 8)) {
                        goto L00000777;
                    }
L0000080a:
                    (save) *(bp + 8);
                    L00000639(cs, *(bp + 6));
                }
            }
        }
    }
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000081C - 0x000008AB
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L0000081C(A6)
/* unknown */ void  A6;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    si = A6 + 1 - *L0000007B + 0x3f >> 6;
    if(si == *L00000152) {
        asm("les bx,[bp+0x4]");
        *L0000008D = es;
        *L0000008B = bx;
        ax = 1;
    } else {
        si = si << 6;
        di = *L00000091;
        if(si + *L0000007B > di) {
            si = di - *L0000007B;
        }
        di = L00000098( *L0000007B, si);
        if(di == -1) {
            ax = si;
            *L00000152 = ax >> 6;
            asm("les bx,[bp+0x4]");
            *L0000008D = es;
            *L0000008B = bx;
            ax = 1;
        } else {
            ax = *L0000007B + di;
            edx = ax & 65535;
            *L00000091 = dx;
            *L0000008F = 0;
            eax = 0 & 65535;
        }
    }
}

/*	Procedure: 0x000008AC - 0x000008F2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000008AC()
{



    (save)bp;
    bp = sp;
    cx = *L00000089;
    bx = *L00000087;
    dx = *(bp + 8);
    ax = *(bp + 6);
    L00000000();
    < ? L000008e6 : ;
    cx = *L00000091;
    bx = *L0000008F;
    dx = *(bp + 8);
    ax = *(bp + 6);
    L00000000();
    > ? L000008e6 : ;
    (save) *(bp + 8);
    ax = L0000081C( *(bp + 6)) != 0 ? 0 : 65535;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000008F3 - 0x00000983
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000008F3()
{



    (save)bp;
    bp = sp;
    sp = sp - 8;
    if(*(bp + 8) >= 0x10) {
        > ? L00000907 : ;
        if(*(bp + 6) <= 0) {
            goto L0000090f;
        }
        dx = 65535;
        ax = 65535;
    } else {
L0000090f:
        dx = *L0000008D;
        ax = *L0000008B;
        cx = *(bp + 8);
        bx = *(bp + 6);
        *(bp - 6) = dx;
        *(bp - 8) = L00000000();
        cx = *L00000089;
        bx = *L00000087;
        dx = *(bp - 6);
        ax = *(bp - 8);
        L00000000();
        < ? L00000951 : ;
        cx = *L00000091;
        bx = *L0000008F;
        dx = *(bp - 6);
        ax = *(bp - 8);
        L00000000();
        <= ? L00000959 : ;
        dx = 65535;
        ax = 65535;
        goto L00000980;
        asm("les bx,[0x8b]");
        *(bp - 2) = es;
        *(bp - 4) = bx;
        (save) *(bp - 6);
        if(L0000081C( *(bp - 8)) == 0) {
            dx = 65535;
            ax = 65535;
        } else {
            dx = *(bp - 2);
            ax = *(bp - 4);
        }
    }
L00000980:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000984 - 0x000009A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000984()
{



    (save)bp;
    bp = sp;
    ah = 0x4a;
    bx = *(bp + 8);
    es = *(bp + 6);
    asm("int 0x21");
    < ? L00000998 : ;
    ax = 65535;
    goto L000009a2;
    (save)bx;
    (save)ax;
    L00000046();
    (restore)ax;
L000009a2:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000009A4 - 0x000009F1
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 8
 */

L000009A4()
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    asm("les bx,[bp+0x4]");
    si = *%es:bx];
    di = si;
    asm("les bx,[bp+0x4]");
    if(!( *%es:bx+0x2] & 0x40)) {
        ax = si;
    } else {
        asm("les bx,[bp+0x4]");
        asm("les bx,[%es:bx+0xc]");
        Vfffffffe = es;
        for(Vfffffffc = bx; 1; di = di + 1) {
            ax = si;
            si = si - 1;
            if(ax == 0) {
                break;
            }
            asm("les bx,[bp-0x4]");
            Vfffffffc = Vfffffffc + 1;
            if(*%es:bx] != 0xa) {
                continue;
            }
        }
        ax = di;
    }
}

/*	Procedure: 0x000009F2 - 0x00000A7F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000009F2()
{



    bp = sp;
    if(L0000012F( *(bp + 6), *(bp + 8), bp) != 0) {
        ax = 65535;
    } else {
        if(*(bp + 0xe) == 1) {
            asm("les bx,[bp+0x6]");
            if(*%es:bx] > 0) {
                (save) *(bp + 8);
                (save) *(bp + 6);
                ax = L000009A4();
                asm("cwd");
                *(bp + 0xa) = *(bp + 0xa) - ax;
                asm("sbb [bp+0xc],dx");
            }
        }
        asm("les bx,[bp+0x6]");
        *%es:bx+0x2] = *%es:bx+0x2] & 65119;
        asm("les bx,[bp+0x6]");
        *%es:bx] = 0;
        asm("les bx,[bp+0x6]");
        dx = *%es:bx+0xa];
        ax = *%es:bx+0x8];
        asm("les bx,[bp+0x6]");
        *%es:bx+0xe] = dx;
        *%es:bx+0xc] = ax;
        (save) *(bp + 0xe);
        (save) *(bp + 0xc);
        (save) *(bp + 0xa);
        asm("les bx,[bp+0x6]");
        al = *%es:bx+0x4];
        asm("cbw");
        ax = L00000115(ax);
        if(dx == -1) {
            if(ax != 65535) {
                goto L00000a7a;
            }
            ax = 65535;
        } else {
L00000a7a:
            ax = 0;
        }
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000A80 - 0x00000AE6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A80()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    ax = L0000012F( *(bp + 6), *(bp + 8));
    if(ax != 0) {
        dx = 65535;
        ax = 65535;
    } else {
        asm("les bx,[bp+0x6]");
        al = *%es:bx+0x4];
        asm("cbw");
        *(bp - 2) = dx;
        *(bp - 4) = L00000262(ax);
        asm("les bx,[bp+0x6]");
        if(*%es:bx] > 0) {
            dx = *(bp - 2);
            ax = L000009A4( *(bp + 6), *(bp + 8), *(bp - 4), dx);
            asm("cwd");
            bx = ax;
            cx = dx;
            (restore)ax;
            (restore)dx;
            ax = ax - bx;
            asm("sbb dx,cx");
        } else {
            dx = *(bp - 2);
            ax = *(bp - 4);
        }
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000AE7 - 0x00000B26
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 4
 */

L00000AE7()
{
	/* unknown */ void  si;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    si = 0x14;
    Vfffffffe = ds;
    for(Vfffffffc = 0x256; 1; Vfffffffc = Vfffffffc + 0x14) {
        ax = si;
        si = si - 1;
        if(ax == 0) {
            break;
        }
        asm("les bx,[bp-0x4]");
        if(( *%es:bx+0x2] & 0x300) == 0x300) {
            L0000012F(Vfffffffc, Vfffffffe);
        }
    }
}

/*	Procedure: 0x00000B27 - 0x00000BB8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000B27()
{



    asm("les bx,[bp+0x4]");
    if(!( *%es:bx+0x2] & 0x200)) {
        L00000AE7();
    }
    asm("les bx,[bp+0x4]");
    (save) *%es:bx+0x6];
    asm("les bx,[bp+0x4]");
    dx = *%es:bx+0xa];
    ax = *%es:bx+0x8];
    asm("les bx,[bp+0x4]");
    *%es:bx+0xe] = dx;
    *%es:bx+0xc] = ax;
    (save)dx;
    (save)ax;
    asm("les bx,[bp+0x4]");
    al = *%es:bx+0x4];
    asm("cbw");
    ax = L000000ec(ax);
    asm("les bx,[bp+0x4]");
    *%es:bx] = ax;
    if(ax > 0) {
        asm("les bx,[bp+0x4]");
        *%es:bx+0x2] = *%es:bx+0x2] & 65503;
        ax = 0;
        goto L00000bb5;
    } else {
        asm("les bx,[bp+0x4]");
        if(*%es:bx] == 0) {
            asm("les bx,[bp+0x4]");
            ax = *%es:bx+0x2] & 65151 | 0x20;
            asm("les bx,[bp+0x4]");
            *%es:bx+0x2] = ax;
        } else {
            asm("les bx,[bp+0x4]");
            *%es:bx] = 0;
            asm("les bx,[bp+0x4]");
            *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
        }
    }
    ax = 65535;
L00000bb5:
}

/*	Procedure: 0x00000BB9 - 0x00000BD2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BB9()
{



    (save)bp;
    bp = sp;
    asm("les bx,[bp+0x6]");
    *%es:bx] = *%es:bx] + 1;
    L000000ae( *(bp + 6), *(bp + 8));
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000BD3 - 0x00000D29
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BD3()
{



    (save)bp;
    bp = sp;
    sp = sp - 2;
    while(1) {
        asm("les bx,[bp+0x6]");
        if(!( *%es:bx] = *%es:bx] - 1)) {
            break;
        }
        asm("les bx,[bp+0x6]");
        if(*%es:bx] = *%es:bx] + 1) {
            goto L00000c08;
        }
        asm("les bx,[bp+0x6]");
        if(!( *%es:bx+0x2] & 0x110)) {
            goto L00000c08;
        }
        while(1) {
            asm("les bx,[bp+0x6]");
            *%es:bx+0x2] = *%es:bx+0x2] | 0x80;
            asm("les bx,[bp+0x6]");
            if(*%es:bx+0x6] != 0) {
                break;
            }
            if(*L0000040E != 0) {
                goto L00000c9d;
            }
            ax = *(bp + 6);
            bx = 0x256;
            cx = ds;
            if(ax != 0x256) {
                goto L00000c9d;
            }
            asm("les bx,[bp+0x6]");
            al = *%es:bx+0x4];
            asm("cbw");
            if(L000000d3(ax) == 0) {
                asm("les bx,[bp+0x6]");
                *%es:bx+0x2] = *%es:bx+0x2] & 65023;
            }
            (save)0x200;
            asm("les bx,[bp+0x6]");
            ax = *%es:bx+0x2] & 0x200 ? 0 : 1;
            (save)ax;
            (save)0;
            L000000d4( *(bp + 6), *(bp + 8), 0);
        }
        (save) *(bp + 8);
        (save) *(bp + 6);
        if(L00000B27() != 0) {
            goto L00000c37;
        }
    }
    asm("les bx,[bp+0x6]");
    *%es:bx+0xc] = *%es:bx+0xc] + 1;
    asm("les bx,[%es:bx+0xc]");
    bx = bx - 1;
    al = *%es:bx];
    ah = 0;
    goto L00000d26;
L00000c08:
    asm("les bx,[bp+0x6]");
    *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
    ax = 65535;
    goto L00000d26;
L00000c37:
    ax = 65535;
    goto L00000d26;
L00000c9d:
    while(1) {
        asm("les bx,[bp+0x6]");
        if(!( *%es:bx+0x2] & 0x200)) {
            L00000AE7();
        }
        (save)1;
        (save)ss;
        ax = bp - 1;
        (save)ax;
        asm("les bx,[bp+0x6]");
        al = *%es:bx+0x4];
        asm("cbw");
        (save)ax;
        ax = L000000f8();
        sp = sp + 8;
        if(ax != 1) {
            break;
        }
        if(*(bp - 1) != 0xd) {
            goto L00000d16;
        }
        asm("les bx,[bp+0x6]");
        if(*%es:bx+0x2] & 0x40) {
            goto L00000d16;
        }
    }
    asm("les bx,[bp+0x6]");
    al = *%es:bx+0x4];
    asm("cbw");
    if(L00000128(ax) != 1) {
        asm("les bx,[bp+0x6]");
        *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
    } else {
        asm("les bx,[bp+0x6]");
        ax = *%es:bx+0x2] & 65151 | 0x20;
        asm("les bx,[bp+0x6]");
        *%es:bx+0x2] = ax;
    }
    ax = 65535;
    goto L00000d26;
L00000d16:
    asm("les bx,[bp+0x6]");
    *%es:bx+0x2] = *%es:bx+0x2] & 65503;
    al = *(bp - 1);
    ah = 0;
L00000d26:
    sp = bp;
    (restore)bp;
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00000d35 -> 00000d37 */
/*	Procedure: 0x00000D2A - 0x00000D37
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000D2A()
{



    (save)ds;
    L00000BD3(cs, 0x256);
    asm("retf");
}

/*	Procedure: 0x00000D38 - 0x00000D49
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000D38()
{



    (save)bp;
    bp = sp;
    ax = 17408;
    bx = *(bp + 6);
    asm("int 0x21");
    ax = dx & 0x80;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000D4A - 0x00000E8B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000D4A()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    si = *(bp + 0x10);
    di = *(bp + 0xe);
    asm("les bx,[bp+0x6]");
    if(*%es:bx+0x12] != *(bp + 6) || di > 2 || si > 32767) {
        ax = 65535;
    } else {
        if(*L00000410 == 0) {
            ax = *(bp + 6);
            cx = ds;
            if(ax != 0x26a) {
                goto L00000d8f;
            }
            *L00000410 = 1;
        } else {
L00000d8f:
            if(*L0000040E == 0) {
                ax = *(bp + 6);
                cx = ds;
                if(ax == 0x256) {
                    *L0000040E = 1;
                }
            }
        }
        asm("les bx,[bp+0x6]");
        if(*%es:bx] != 0) {
            (save)1;
            (save)0;
            L0000009a( *(bp + 6), *(bp + 8), 0);
        }
        asm("les bx,[bp+0x6]");
        if(!( *%es:bx+0x2] & 4)) {
            asm("les bx,[bp+0x6]");
            L000001bf( *%es:bx+0x8], *%es:bx+0xa]);
        }
        asm("les bx,[bp+0x6]");
        *%es:bx+0x2] = *%es:bx+0x2] & 65523;
        asm("les bx,[bp+0x6]");
        *%es:bx+0x6] = 0;
        dx = *(bp + 8);
        ax = *(bp + 6) + 5;
        asm("les bx,[bp+0x6]");
        *%es:bx+0xa] = dx;
        *%es:bx+0x8] = ax;
        asm("les bx,[bp+0x6]");
        *%es:bx+0xe] = dx;
        *%es:bx+0xc] = ax;
        if(di != 2 && si > 0) {
            *L00000138 = 0xe8;
            *L00000136 = 0xc;
            if(!(ax = *(bp + 0xa) | *(bp + 0xc))) {
                ax = L00000050(si);
                *(bp + 0xc) = dx;
                *(bp + 0xa) = ax;
                if(!(dx = dx | *(bp + 0xa))) {
                    asm("les bx,[bp+0x6]");
                    *%es:bx+0x2] = *%es:bx+0x2] | 4;
                    goto L00000e53;
                }
                ax = 65535;
                goto L00000e88;
            }
L00000e53:
            dx = *(bp + 0xc);
            ax = *(bp + 0xa);
            asm("les bx,[bp+0x6]");
            *%es:bx+0xe] = dx;
            *%es:bx+0xc] = ax;
            asm("les bx,[bp+0x6]");
            *%es:bx+0xa] = dx;
            *%es:bx+0x8] = ax;
            asm("les bx,[bp+0x6]");
            *%es:bx+0x6] = si;
            if(di == 1) {
                asm("les bx,[bp+0x6]");
                *%es:bx+0x2] = *%es:bx+0x2] | 8;
            }
        }
        ax = 0;
    }
L00000e88:
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000E8C - 0x00000EC5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E8C()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = 4;
    *(bp - 2) = ds;
    for(*(bp - 4) = 0x256; si != 0; *(bp - 4) = *(bp - 4) + 0x14) {
        asm("les bx,[bp-0x4]");
        if(!( *%es:bx+0x2] & 3)) {
            L0000012F( *(bp - 4), *(bp - 2));
        }
        si = si - 1;
    }
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000EC6 - 0x00000F8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000EC6()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    (save)di;
    if(*(bp + 0xc) + 1 < 2 || !( *(( *(bp + 6) << 1) + 0x3e6) & 0x200)) {
        ax = 0;
    } else {
        while(1) {
            (save) *(bp + 0xc);
            (save) *(bp + 0xa);
            *(bp - 4) = L000000f8( *(bp + 6), *(bp + 8));
            if(*(bp - 4) + 1 < 2 || !( *(( *(bp + 6) << 1) + 0x3e6) & 32768)) {
                break;
            }
            cx = *(bp - 4);
            asm("les si,[bp+0x8]");
            di = si;
            bx = si;
            asm("cld");
            asm("%e lodsb");
            if(al == 0x1a) {
                goto L00000f5d;
            }
            if(al == 0xd) {
                asm("loop 0xf27");
                (save)es;
                (save)bx;
                (save)1;
                (save)ss;
                L000000f8( *(bp + 6), bp - 1);
                (restore)bx;
                (restore)es;
                asm("cld");
                *di = *(bp - 1);
                di = di + 1;
            } else {
                *di = al;
                di = di + 1;
                asm("loop 0xf27");
            }
            if(di != bx) {
                goto L00000f7f;
            }
        }
        ax = *(bp - 4);
        goto L00000f85;
L00000f5d:
        (save)bx;
        ax = 2;
        (save)2;
        cx = ~cx;
        asm("sbb ax,ax");
        (save)ax;
        L00000115( *(bp + 6), cx);
        *(( *(bp + 6) << 1) + 0x3e6) = *(( *(bp + 6) << 1) + 0x3e6) | 0x200;
        (restore)bx;
L00000f7f:
        ax = di - bx;
    }
L00000f85:
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000F8B - 0x00000FAA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000F8B()
{



    (save)bp;
    bp = sp;
    (save)ds;
    ah = 0x3f;
    bx = *(bp + 6);
    cx = *(bp + 0xc);
    asm("lds dx,[bp+0x8]");
    asm("int 0x21");
    (restore)ds;
    < ? L00000fa1 : ;
    goto L00000fa9;
    (save)ax;
    L00000046();
L00000fa9:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000FAB - 0x00001110
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000FAB()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x8e;
    (save)si;
    (save)di;
    if(*(bp + 0xc) + 1 < 2) {
        ax = 0;
    } else {
        if(!( *(( *(bp + 6) << 1) + 0x3e6) & 32768)) {
            (save) *(bp + 0xc);
            (save) *(bp + 0xa);
            L00000111( *(bp + 6), *(bp + 8));
        } else {
            bx = *(bp + 6) << 1;
            *(bx + 0x3e6) = *(bx + 0x3e6) & 65023;
            asm("les bx,[bp+0x8]");
            *(bp + 65404) = es;
            *(bp + 65402) = bx;
            *(bp + 65398) = *(bp + 0xc);
            es = ss;
            *(bp + 65396) = es;
            *(bp + 65394) = bp + 65406;
            goto L000010b7;
L00001091:
            ax = di < 0 ? 65535 : *(bp + 0xc) - *(bp + 65398) + di - si;
            goto L0000110b;
L000010b7:
            while(*(bp + 65398) != 0) {
                *(bp + 65398) = *(bp + 65398) - 1;
                asm("les bx,[bp+0xff7a]");
                *(bp + 65402) = *(bp + 65402) + 1;
                al = *%es:bx];
                *(bp + 65401) = al;
                if(*(bp + 65401) == 0xa) {
                    asm("les bx,[bp+0xff72]");
                    *%es:bx] = 0xd;
                    *(bp + 65394) = *(bp + 65394) + 1;
                }
                al = *(bp + 65401);
                asm("les bx,[bp+0xff72]");
                *%es:bx] = al;
                *(bp + 65394) = *(bp + 65394) + 1;
                ax = *(bp + 65394);
                cx = ss;
                bx = bp + 65406;
                dx = 0;
                ax = ax - bx;
                asm("sbb dx,+0x0");
                if(dx < 0) {
                    continue;
                }
                != ? 0x1064 : ;
                if(ax < 0x80) {
                    continue;
                }
                ax = *(bp + 65394);
                cx = ss;
                bx = bp + 65406;
                dx = 0;
                ax = ax - bx;
                asm("sbb dx,+0x0");
                si = ax;
                (save)si;
                (save)ss;
                di = L00000111( *(bp + 6), bp + 65406);
                if(di != si) {
                    goto L00001091;
                }
                es = ss;
                *(bp + 65396) = es;
                *(bp + 65394) = bp + 65406;
            }
            ax = *(bp + 65394);
            cx = ss;
            bx = bp + 65406;
            dx = 0;
            ax = ax - bx;
            asm("sbb dx,+0x0");
            si = ax;
            if(si > 0) {
                (save)si;
                (save)ss;
                di = L00000111( *(bp + 6), bp + 65406);
                if(di == si) {
                    goto L00001106;
                }
                ax = di < 0 ? 65535 : *(bp + 0xc) + di - si;
            } else {
L00001106:
                ax = *(bp + 0xc);
            }
        }
    }
L0000110b:
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00001111 - 0x0000115C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001111()
{



    (save)bp;
    bp = sp;
    if(!( *(( *(bp + 6) << 1) + 0x3e6) & 0x800)) {
        ax = L00000115( *(bp + 6), 0, 0, 2);
    }
    (save)ds;
    ah = 0x40;
    bx = *(bp + 6);
    cx = *(bp + 0xc);
    asm("lds dx,[bp+0x8]");
    asm("int 0x21");
    (restore)ds;
    < ? L00001153 : ;
    (save)ax;
    *(( *(bp + 6) << 1) + 0x3e6) = *(( *(bp + 6) << 1) + 0x3e6) | 0x1000;
    (restore)ax;
    goto L0000115b;
    (save)ax;
    L00000046();
L0000115b:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000115D - 0x00001189
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000115D()
{



    (save)bp;
    bp = sp;
    ah = 0x42;
    al = *(bp + 0xc);
    bx = *(bp + 6);
    cx = *(bp + 0xa);
    dx = *(bp + 8);
    asm("int 0x21");
    if(!( *(( *(bp + 6) << 1) + 0x3e6) = *(( *(bp + 6) << 1) + 0x3e6) & 65023)) {
    } else {
        (save)ax;
        L00000046();
        asm("cwd");
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000118A - 0x0000120D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000118A()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x22;
    (save)si;
    (save)di;
    (save)es;
    asm("les di,[bp+0xc]");
    bx = *(bp + 0xa);
    if(bx <= 0x24 && bl >= 2) {
        ax = *(bp + 0x10);
        cx = *(bp + 0x12);
        if(cx < 0 && *(bp + 8) != 0) {
            *%es:di] = 0x2d;
            di = di + 1;
            cx = ~cx;
            ax = ~ax;
            asm("sbb cx,+0x0");
        }
        if(!(si = bp - 0x22)) {
            while(1) {
                asm("xchg ax,cx");
                bx = bx / bx;
                edx = bx % bx & 65535;
                asm("xchg ax,cx");
                bx = bx / bx;
                dx = bx % bx;
                *%ss:si] = dl;
                if(si = si + 1) {
                    goto L000011dc;
                }
            }
        }
L000011d4:
        bx = bx / bx;
        edx = bx % bx & 65535;
        *%ss:si] = dl;
        si = si + 1;
L000011dc:
        if(ax != 0) {
            goto L000011d4;
        }
        cx = ~(bp - 0x22) + si;
        asm("cld");
        si = si - 1;
        al = !(al = *%ss:si] - 0xa) ? al + 0x3a : al + *(bp + 6);
        *di = al;
        di = di + 1;
        asm("loop 0x11e8");
    }
    *di = 0;
    di = di + 1;
    (restore)es;
    dx = *(bp + 0xe);
    eax = *(bp + 0xc) & 65535;
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf 0xe");
}

/*	Procedure: 0x0000120E - 0x0000123A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000120E()
{



    (save)bp;
    bp = sp;
    if(*(bp + 0xc) == 0xa) {
        ax = *(bp + 6);
        asm("cwd");
    } else {
        ax = *(bp + 6);
        dx = 0;
    }
    (save)dx;
    (save)ax;
    (save) *(bp + 0xa);
    (save) *(bp + 8);
    (save) *(bp + 0xc);
    al = 1;
    (save)1;
    (save)0x61;
    (save)cs;
    L0000118A();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000123B - 0x0000125A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000123B()
{



    (save)bp;
    bp = sp;
    (save) *(bp + 8);
    (save) *(bp + 6);
    (save) *(bp + 0xc);
    (save) *(bp + 0xa);
    (save) *(bp + 0xe);
    (save)0;
    (save)0x61 & 0xff;
    (save)cs;
    L0000118A();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000125B - 0x00001285
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000125B()
{



    (save)bp;
    bp = sp;
    (save) *(bp + 8);
    (save) *(bp + 6);
    (save) *(bp + 0xc);
    (save) *(bp + 0xa);
    (save) *(bp + 0xe);
    ax = *(bp + 0xe) == 0xa ? 1 : 0;
    (save)ax;
    (save)0x61;
    (save)cs;
    L0000118A();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00001286 - 0x000012F5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001286()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    if(!( *(( *(bp + 6) << 1) + 0x3e6) & 0x200)) {
        ax = 1;
    } else {
        ax = 17408;
        bx = *(bp + 6);
        asm("int 0x21");
        < ? L000012ea : ;
        if(!(dl & 0x80)) {
            ax = 16897;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            < ? L000012ea : ;
            (save)dx;
            (save)ax;
            ax = 16898;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            *(bp - 4) = ax;
            *(bp - 2) = dx;
            (restore)dx;
            (restore)cx;
            < ? L000012ea : ;
            ax = 16896;
            asm("int 0x21");
            < ? L000012ea : ;
            if(dx < *(bp - 2)) {
                goto L000012e6;
            }
            > ? L000012e1 : ;
            if(ax < *(bp - 4)) {
                goto L000012e6;
            }
            ax = 1;
        } else {
L000012e6:
            ax = 0;
            goto L000012f2;
            L00000046(ax);
        }
    }
L000012f2:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000012F6 - 0x000013DD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000012F6()
{



    (save)bp;
    bp = sp;
    (save)si;
    asm("les bx,[bp+0x6]");
    if(*%es:bx+0x12] != *(bp + 6)) {
        ax = 65535;
    } else {
        asm("les bx,[bp+0x6]");
        if(*%es:bx] >= 0) {
            asm("les bx,[bp+0x6]");
            if(!( *%es:bx+0x2] & 8)) {
                asm("les bx,[bp+0x6]");
                ax = *%es:bx+0xc];
                cx = *(bp + 8);
                bx = *(bp + 6) + 5;
                if(*%es:bx+0xe] != cx || ax != bx) {
                    goto L00001378;
                }
            }
            asm("les bx,[bp+0x6]");
            *%es:bx] = 0;
            asm("les bx,[bp+0x6]");
            ax = *%es:bx+0xc];
            cx = *(bp + 8);
            bx = *(bp + 6) + 5;
            if(*%es:bx+0xe] == cx && ax == bx) {
                asm("les bx,[bp+0x6]");
                dx = *%es:bx+0xa];
                ax = *%es:bx+0x8];
                asm("les bx,[bp+0x6]");
                *%es:bx+0xe] = dx;
                *%es:bx+0xc] = ax;
            }
L00001378:
            ax = 0;
        } else {
            asm("les bx,[bp+0x6]");
            si = *%es:bx+0x6];
            asm("les bx,[bp+0x6]");
            si = si + *%es:bx] + 1;
            asm("les bx,[bp+0x6]");
            *%es:bx] = *%es:bx] - si;
            (save)si;
            asm("les bx,[bp+0x6]");
            dx = *%es:bx+0xa];
            ax = *%es:bx+0x8];
            asm("les bx,[bp+0x6]");
            *%es:bx+0xe] = dx;
            *%es:bx+0xc] = ax;
            (save)dx;
            (save)ax;
            asm("les bx,[bp+0x6]");
            al = *%es:bx+0x4];
            asm("cbw");
            (save)ax;
            sp = sp + 8;
            if(L000000fa() != si) {
                asm("les bx,[bp+0x6]");
                if(*%es:bx+0x2] & 0x200) {
                    goto L000013d7;
                }
                asm("les bx,[bp+0x6]");
                *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
                ax = 65535;
            } else {
L000013d7:
                ax = 0;
            }
        }
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000013DE - 0x00001401
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000013DE()
{



    (save)bp;
    bp = sp;
    (save)0x140;
    (save)0x181;
    (save)ds;
    (save)0x26a;
    (save) *(bp + 8);
    (save) *(bp + 6);
    (save)ss;
    (save)bp + 0xa;
    L00000167();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00001402 - 0x00001420
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001402()
{



    (save)bp;
    bp = sp;
    asm("les bx,[bp+0x8]");
    *%es:bx] = *%es:bx] - 1;
    (save) *(bp + 0xa);
    (save) *(bp + 8);
    al = *(bp + 6);
    asm("cbw");
    L00000140(ax);
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00001421 - 0x00001567
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001421()
{



    (save)bp;
    bp = sp;
    sp = sp - 2;
    *(bp - 1) = *(bp + 6);
    while(1) {
        asm("les bx,[bp+0x8]");
        if(!( *%es:bx] = *%es:bx] + 1)) {
            break;
        }
        asm("les bx,[bp+0x8]");
        *%es:bx] = *%es:bx] - 1;
        asm("les bx,[bp+0x8]");
        if(*%es:bx+0x2] & 0x90) {
            goto L00001499;
        }
        asm("les bx,[bp+0x8]");
        if(!( *%es:bx+0x2] & 2)) {
            goto L00001499;
        }
        asm("les bx,[bp+0x8]");
        *%es:bx+0x2] = *%es:bx+0x2] | 0x100;
        asm("les bx,[bp+0x8]");
        if(*%es:bx+0x6] == 0) {
            goto L000014f5;
        }
        asm("les bx,[bp+0x8]");
        if(*%es:bx] == 0) {
            asm("les bx,[bp+0x8]");
            dx = 65535 - *%es:bx+0x6];
            asm("les bx,[bp+0x8]");
            *%es:bx] = dx;
        } else {
            if(L0000012F( *(bp + 8), *(bp + 0xa)) != 0) {
                goto L000014d5;
            }
        }
    }
    al = *(bp - 1);
    asm("les bx,[bp+0x8]");
    *%es:bx+0xc] = *%es:bx+0xc] + 1;
    asm("les bx,[%es:bx+0xc]");
    bx = bx - 1;
    *%es:bx] = al;
    asm("les bx,[bp+0x8]");
    if(!( *%es:bx+0x2] & 8)) {
        if(*(bp - 1) != 0xa && *(bp - 1) != 0xd || L0000012F( *(bp + 8), *(bp + 0xa)) == 0) {
            goto L00001475;
        }
        ax = 65535;
    } else {
L00001475:
        al = *(bp - 1);
        ah = 0;
        goto L00001564;
L00001499:
        asm("les bx,[bp+0x8]");
        *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
        ax = 65535;
        goto L00001564;
L000014d5:
        ax = 65535;
        goto L00001564;
L000014f5:
        if(*(bp - 1) == 0xa) {
            asm("les bx,[bp+0x8]");
            if(!( *%es:bx+0x2] & 0x40)) {
                (save)1;
                (save)ds;
                ax = 0x444;
                (save)0x444;
                asm("les bx,[bp+0x8]");
                al = *%es:bx+0x4];
                asm("cbw");
                (save)ax;
                sp = sp + 8;
                if(L00000111() != 1) {
                    goto L00001544;
                }
            }
        }
        (save)1;
        (save)ss;
        ax = bp + 6;
        (save)ax;
        asm("les bx,[bp+0x8]");
        al = *%es:bx+0x4];
        asm("cbw");
        (save)ax;
        sp = sp + 8;
        if(L00000111() != 1) {
L00001544:
            asm("les bx,[bp+0x8]");
            if(*%es:bx+0x2] & 0x200) {
                goto L0000155d;
            }
            asm("les bx,[bp+0x8]");
            *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
            ax = 65535;
        } else {
L0000155d:
            al = *(bp - 1);
            ah = 0;
        }
    }
L00001564:
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00001568 - 0x00001580
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001568()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    (save)ds;
    (save)0x26a;
    L00001421(cs, si);
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00001581 - 0x0000167B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001581()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    si = *(bp + 0xa);
    di = si;
    asm("les bx,[bp+0x6]");
    if(!( *%es:bx+0x2] & 8)) {
        goto L000015ba;
L000015b5:
        ax = 0;
        goto L00001676;
L000015ba:
        do {
            ax = si;
            si = si - 1;
            if(ax == 0) {
                goto L000015c1;
            }
            (save) *(bp + 8);
            (save) *(bp + 6);
            asm("les bx,[bp+0xc]");
            *(bp + 0xc) = *(bp + 0xc) + 1;
            al = *%es:bx];
            asm("cbw");
        } while(L00001421(cs, ax) != 65535);
        goto L000015b5;
L000015c1:
    } else {
        asm("les bx,[bp+0x6]");
        if(!( *%es:bx+0x2] & 0x40)) {
            asm("les bx,[bp+0x6]");
            if(*%es:bx+0x6] == 0) {
                goto L0000166b;
            }
            asm("les bx,[bp+0x6]");
            ax = *%es:bx+0x6];
            if(ax >= si) {
                goto L0000166b;
            }
            asm("les bx,[bp+0x6]");
            if(*%es:bx] != 0) {
                ax = L0000012F( *(bp + 6), *(bp + 8));
                if(ax == 0) {
                    goto L00001603;
                }
                ax = 0;
                goto L00001676;
            }
L00001603:
            (save)si;
            (save) *(bp + 0xe);
            (save) *(bp + 0xc);
            asm("les bx,[bp+0x6]");
            al = *%es:bx+0x4];
            asm("cbw");
            (save)ax;
            sp = sp + 8;
            if(L00000111() < si) {
                ax = 0;
                goto L00001676;
            }
        } else {
            goto L0000166b;
L00001667:
            ax = 0;
            goto L00001676;
L0000166b:
            do {
                ax = si;
                si = si - 1;
                if(ax == 0) {
                    goto L00001672;
                }
                asm("les bx,[bp+0x6]");
                if(*%es:bx] = *%es:bx] + 1) {
                    (save) *(bp + 8);
                    (save) *(bp + 6);
                    asm("les bx,[bp+0xc]");
                    *(bp + 0xc) = *(bp + 0xc) + 1;
                    ax = L00001402(cs, *%es:bx]);
                } else {
                    asm("les bx,[bp+0xc]");
                    *(bp + 0xc) = *(bp + 0xc) + 1;
                    al = *%es:bx];
                    asm("les bx,[bp+0x6]");
                    *%es:bx+0xc] = *%es:bx+0xc] + 1;
                    asm("les bx,[%es:bx+0xc]");
                    bx = bx - 1;
                    *%es:bx] = al;
                    ah = 0;
                }
            } while(ax != 65535);
            goto L00001667;
        }
    }
L00001672:
    ax = di;
L00001676:
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf 0xa");
}

/*	Procedure: 0x0000167C - 0x000016A6
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L0000167C(A4)
/* unknown */ void  A4;
{



    cx = 0xf04;
    bx = 0x44d;
    asm("cld");
    al = dh >> cl;
    asm("xlatb");
    *di = al;
    di = di + 1;
    al = dh & ch;
    asm("xlatb");
    *di = al;
    di = di + 1;
    al = dl >> cl;
    asm("xlatb");
    *di = al;
    di = di + 1;
    al = dl & ch;
    asm("xlatb");
    *di = al;
    di = di + 1;
}

/* DEST BLOCK NOT FOUND: 000016be -> 00001706 */
/*	Procedure: 0x000016A7 - 0x000016BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000016A7()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x98;
    (save)si;
    (save)di;
    *(bp - 0x58) = 0;
    *(bp - 0x55) = 0x50;
    *(bp - 2) = 0;
    goto L00001706;
}

/*	Procedure: 0x000016C0 - 0x000016CC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L000016C0()
{
	/* unknown */ void  di;



    cx = 65535;
    al = 0;
    asm("repne scasb");
    cx = !cx - 1;
}

/* DEST BLOCK NOT FOUND: 000016d4 -> 00001705 */
/*	Procedure: 0x000016CD - 0x000016D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000016CD()
{



    *%ss:di] = al;
    di = di + 1;
    *(bp - 0x55) = *(bp - 0x55) - 1;
    <= ? L00001705 : ;
}

stack space not deallocated on return
/*	Procedure: 0x000016D6 - 0x00001FFE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L000016D6()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  es;



    di = di - bp - 0x54;
    ax = *(bp + 0x12)( *(bp + 0xe), *(bp + 0x10), di, bp - 0x54, ss);
    if(ax == 0) {
        *(bp - 2) = 1;
    }
    *(bp - 0x55) = 0x50;
    *(bp - 0x58) = *(bp - 0x58) + di;
    di = bp - 0x54;
    return;
    (save)es;
    asm("cld");
    *(bp + 65386) = bp - 0x54;
    di = *(bp + 65386);
L00001713:
    asm("les si,[bp+0xa]");
L00001716:
    asm("%e lodsb");
    if(al != 0) {
        if(al == 0x25) {
            goto L00001731;
        }
L00001720:
        *%ss:di] = al;
        di = di + 1;
        if(*(bp - 0x55) = *(bp - 0x55) - 1) {
            goto L00001716;
        }
        ax = L000016D6();
        goto L00001716;
    }
    goto L00001bcc;
L00001731:
    *(bp + 65398) = si;
    asm("%e lodsb");
    if(al == 0x25) {
        goto L00001720;
    }
    *(bp + 65386) = di;
    *(bp + 65396) = 0;
    *(bp + 65384) = 0x20;
    *(bp + 65395) = 0;
    *(bp + 65390) = 65535;
    *(bp + 65392) = 65535;
    goto L0000175f;
L0000175d:
    asm("%e lodsb");
L0000175f:
    dx = 0;
    if(0xe0 < 0x60) {
        bl = *(bx + 0x45d);
        eax = bx & 65535;
        if(ax > 0x17) {
            goto L00001bb6;
        }
        bx = ax << 1;
        goto ( *(bx + 0x114));
        (restore)di;
        *(bx + 1) = *(bx + 1) + ax;
        ax = *L00005301 + cx;
        *si = *si + dx + dx;
        bl = bl + *L00002E02;
        al = al + *(bp + 25601);
        bh = bh + *L00004202;
        al = al + *(bp + 2);
        asm("out dx,al");
        ah = ah + *(bx + 17411);
        sp = sp + *(bp + 3);
        (restore)ss;
        ax = ax + 0x546;
        si = si + 1;
        if(!(ax = ax + 0x546)) {
            < ? L000017b5 : ;
        }
    }
    goto L00001bb6;
    if(ch <= 0) {
        *(bp + 65384) = *(bp + 65384) | 1;
        goto L0000175d;
        if(ch <= 0) {
            *(bp + 65384) = *(bp + 65384) | 2;
            goto L0000175d;
            if(ch <= 0) {
                if(*(bp + 65395) != 0x2b) {
                    *(bp + 65395) = dl;
                }
                goto L0000175d;
                *(bp + 65384) = *(bp + 65384) & -33;
                ch = 5;
                goto L0000175d;
                *(bp + 65384) = *(bp + 65384) | 0x20;
                ch = 5;
                goto L0000175d;
                if(ch <= 0) {
                    if(!( *(bp + 65384) & 2)) {
                        *(bp + 65384) = *(bp + 65384) | 8;
                        ch = 1;
                        goto L0000175d;
                        (save)es;
                        asm("les di,[bp+0x6]");
                        ax = *%es:di];
                        *(bp + 6) = *(bp + 6) + 2;
                        (restore)es;
                        if(ch >= 2) {
                            goto L0000182a;
                        }
                        *(bp + 65390) = ax;
                        ch = 3;
                    }
                    goto L0000175d;
L0000182a:
                    if(ch != 4) {
                        goto L00001bb6;
                    }
                    *(bp + 65392) = ax;
                    ch = ch + 1;
                    goto L0000175d;
                    if(ch >= 4) {
                        goto L00001bb6;
                    }
                    ch = 4;
                    goto L0000175d;
                }
                asm("xchg ax,dx");
                al = al - 0x30;
                asm("cbw");
                if(ch <= 2) {
                    ch = 2;
                    asm("xchg ax,[bp+0xff6e]");
                    if(ax < 0) {
                        goto L0000175d;
                    }
                    ax = ax << 1;
                    dx = ax;
                    ax = (ax << 1 << 1) + dx;
                    *(bp + 65390) = *(bp + 65390) + ax;
                    goto L0000175d;
                }
                if(ch == 4) {
                    asm("xchg ax,[bp+0xff70]");
                    if(ax < 0) {
                        goto L0000175d;
                    }
                    ax = ax << 1;
                    dx = ax;
                    ax = (ax << 1 << 1) + dx;
                    *(bp + 65392) = *(bp + 65392) + ax;
                    goto L0000175d;
                    *(bp + 65384) = *(bp + 65384) | 0x10;
                    ch = 5;
                    goto L0000175d;
                    *(bp + 65384) = *(bp + 65384) | 0x100;
                    *(bp + 65384) = *(bp + 65384) & -17;
                    ch = 5;
                    goto L0000175d;
                    *(bp + 65384) = *(bp + 65384) & -17;
                    *(bp + 65384) = *(bp + 65384) | 0x80;
                    ch = 5;
                    goto L0000175d;
                    bh = 8;
                    goto L000018bc;
                    bh = 0xa;
                    goto L000018c1;
                    bh = 0x10;
                    bl = 0xe9 + dl;
L000018bc:
                    *(bp + 65395) = 0;
L000018c1:
                    *(bp + 65389) = 0;
                    *(bp + 65388) = dl;
                    asm("les di,[bp+0x6]");
                    ax = *%es:di];
                    dx = 0;
                    goto L000018e6;
                    bh = 0xa;
                    *(bp + 65389) = 1;
                    *(bp + 65388) = dl;
                    asm("les di,[bp+0x6]");
                    ax = *%es:di];
                    asm("cwd");
L000018e6:
                    di = di + 1 + 1;
                    *(bp + 0xa) = si;
                    if(!( *(bp + 65384) & 0x10)) {
                        dx = *%es:di];
                        di = di + 1 + 1;
                    }
                    *(bp + 6) = di;
                    di = bp + 65401;
                    if(ax == 0 && dx == 0) {
                        if(*(bp + 65392) != 0) {
                            goto L0000193b;
                        }
                        di = *(bp + 65386);
                        cx = *(bp + 65390);
                        < ? L00001933 : ;
                        if(cx != -1) {
                            dl = !(ax = *(bp + 65384) & 8) ? 0x30 : 0x20;
                            al = dl;
                            ax = L000016CD();
                            asm("loop 0x192c");
                        }
                        goto L00001713;
                    }
                    *(bp + 65384) = *(bp + 65384) | 4;
L0000193b:
                    (save)dx;
                    (save)ax;
                    (save)ss;
                    (save)di;
                    al = bh;
                    asm("cbw");
                    (save)ax;
                    (save) *(bp + 65389);
                    (save)bx;
                    L00000118();
                    es = ss;
                    if(*(bp + 65392) <= 0) {
                    } else {
                        goto L00001a8a;
                        *(bp + 65388) = dl;
                        *(bp + 0xa) = si;
                        di = bp + 65400;
                        asm("les bx,[bp+0x6]");
                        (save) *%es:bx];
                        bx = bx + 1 + 1;
                        *(bp + 6) = bx;
                        if(!( *(bp + 65384) & 0x20)) {
                            *(bp + 6) = bx + 1 + 1;
                            es = ss;
                            L0000167C( *%es:bx]);
                            *di = 0x3a;
                            di = di + 1;
                        }
                        es = ss;
                        L0000167C();
                        *%ss:di] = 0;
                        *(bp + 65389) = 0;
                        *(bp + 65384) = *(bp + 65384) & -5;
                        cx = bp + 65400;
                        di = di - cx;
                        asm("xchg cx,di");
                        if(*(bp + 65392) <= cx) {
                            dx = cx;
                        }
                        goto L00001a7a;
                        *(bp + 0xa) = si;
                        *(bp + 65388) = dl;
                        asm("les di,[bp+0x6]");
                        ax = *%es:di];
                        *(bp + 6) = *(bp + 6) + 2;
                        es = ss;
                        di = bp + 65401;
                        *%es:di] = 0;
                        cx = 1;
                        goto L00001abb;
                        *(bp + 0xa) = si;
                        *(bp + 65388) = dl;
                        asm("les di,[bp+0x6]");
                        if(!( *(bp + 65384) & 0x20)) {
                            di = *%es:di];
                            *(bp + 6) = *(bp + 6) + 2;
                            es = ds;
                            di :: 0;
                        } else {
                            asm("les di,[%es:di]");
                            *(bp + 6) = *(bp + 6) + 4;
                        }
                        if(!(ax = es | di)) {
                            es = ds;
                            di = 0x446;
                        }
                        L000016C0();
                        if(cx > *(bp + 65392)) {
                            cx = *(bp + 65392);
                        }
                        goto L00001abb;
                        *(bp + 0xa) = si;
                        *(bp + 65388) = dl;
                        asm("les di,[bp+0x6]");
                        cx = *(bp + 65392);
                        if(cx < 0) {
                            cx = 6;
                        }
                        (save)es;
                        (save)di;
                        (save)cx;
                        (save)ss;
                        (save)bp + 65401;
                        (save)dx;
                        (save)1 & *(bp + 65384);
                        ax = *(bp + 65384);
                        if(!(ax & 0x80)) {
                            ax = 2;
                            *(bp - 4) = 4;
                        } else {
                            if(!(ax & 0x100)) {
                                ax = 8;
                                *(bp - 4) = 0xa;
                            } else {
                                *(bp - 4) = 8;
                                ax = 6;
                            }
                        }
                        (save)ax;
                        L00000000();
                        *(bp + 6) = *(bp + 6) + *(bp - 4);
                        es = ss;
                        di = bp + 65401;
                    }
L00001a7a:
                    if(!( *(bp + 65384) & 8) && *(bp + 65390) > 0) {
L00001a8a:
                        L000016C0();
                        if(*%es:di] == 0x2d) {
                            cx = cx - 1;
                        }
                        if(!(dx = dx - cx)) {
                            *(bp + 65396) = dx;
                        }
                    }
                    al = *(bp + 65395);
                    if(al != 0 && *%es:di] != 0x2d) {
                        *(bp + 65396) = *(bp + 65396) - 1;
                        asm("adc word [bp+0xff74],+0x0");
                        di = di - 1;
                        *%es:di] = al;
                    }
                    L000016C0();
L00001abb:
                    si = di;
                    di = *(bp + 65386);
                    bx = *(bp + 65390);
                    if((5 & *(bp + 65384)) == 5) {
                        ah = *(bp + 65388);
                        if(ah != 0x6f) {
                            goto L00001aea;
                        }
                        if(*(bp + 65396) <= 0) {
                            *(bp + 65396) = 1;
                        }
                    }
                    goto L00001b08;
L00001aea:
                    if(ah == 0x78 || ah == 0x58) {
                        *(bp + 65384) = *(bp + 65384) | 0x40;
                        bx = bx - 1 - 1;
                        if(!( *(bp + 65396) = *(bp + 65396) - 2)) {
                            *(bx + si) = *(bx + si) + al;
                            *(bx + si) = *(bx + si) + al;
                            *(bx + si) = *(bx + si) + al;
                        }
                    }
L00001b08:
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                }
            }
        }
    }
L00001bb6:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L00001bcc:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

#if 0 /* auxiliary information */
# Current option values:
option: +asmflush
option: -compactcalls
option: +compactexprs
option: +compactifs
option: +compset
option: -dfoproc
option: -disasmonly
option: -displaylabels
option: +doblocks
option: +docase
option: +dofor
option: +doifs
option: +dointrinsics
option: +doloops
option: +donullgotos
option: +dopackloops
option: +dopackstmt
option: +doremlabs
option: +dosimplify
option: -dosort
option: +dostmts
option: +doswitch
option: +dowhile
option: -dumpaddrs
option: -dumpcall
option: -dumpcomments
option: -dumpdfo
option: +dumpdoms
option: -dumpsblocks
option: -dumpsets
option: -dumpsizes
option: -dumpstmtid
option: +fatcase
option: +flag16
option: +fullscreen
option: -genpattern
option: -help
option: -hexconst
option: -html
option: +insertlabels
option: -int16
option: +int32
option: -interactive
option: -isvb5
option: +locals
option: -nohtmltabs
option: -nostackoffs
option: -objdump
option: -okclone
option: -outprocs
option: -outrefs
option: -overrule
option: +rdonly
option: -showblocks
option: -showjump
option: -showlabel
option: -showprotosym
option: -showreg
option: -showstring
option: -silent
option: +simplifyexprs
option: -stackalign16
option: -stackalign4
option: -stackalign8
option: -strallregions
option: -traceall
option: -tracesets
option: +types
option: -usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
