/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_dcc/dhamp/ia32_mz_from_dcc/subject.exe'
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

/*	Procedure: 0x000001A7 - 0x000001C8
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
    L00000000();
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x000001C9 - 0x00000243
 *	Argument size: -2
 *	Local size: 2
 *	Save regs size: 0
 */

L000001C9()
{
	/* unknown */ void  Vfffffffe;



    ax = sp;
    if(ax == sp) {
        asm("int 0x11");
        if(!(ax = ax & 2)) {
            ax = 0;
            asm("out 0xf0,al");
            asm("fninit");
            asm("wait");
            (fsave)1;
            asm("wait");
            (fsave)0;
            asm("wait");
            asm("fdivp st1,st0");
            asm("wait");
            (fsave)st0;
            asm("wait");
            asm("fchs");
            asm("wait");
            asm("fcompp");
            asm("fstsw [bp-0x2]");
            ax = Vfffffffe;
            asm("sahf");
            != ? 0x203 : ;
            ax = 2;
            goto L00000240;
            ax = 3;
        }
    } else {
        ax = 0;
        asm("out 0xf0,al");
        asm("fninit");
        Vfffffffe = 0;
        asm("fnstcw [bp-0x2]");
        cx = 0x14;
        asm("loop 0x219");
        ax = 0;
        if((Vfffffffe & 0xf3f) == 0x33f) {
            Vfffffffe = 65535;
            asm("fnstsw [bp-0x2]");
            cx = 0x14;
            asm("loop 0x234");
            if(!(Vfffffffe & 47295)) {
                ax = 1;
            }
        }
    }
L00000240:
}

/*	Procedure: 0x00000244 - 0x00000273
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000244()
{



}

/*	Procedure: 0x00000283 - 0x00000342
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000283()
{



    (save)di;
    (save)es;
    L00000000();
    ax = 0x3534;
    cx = 0xb;
    di = 0x244;
    asm("int 0x21");
    *%cs:di] = bx;
    *%cs:di+0x2] = es;
    di = di + 4;
    ax = ax + 1;
    asm("loop 0x293");
    ax = 0x3575;
    asm("int 0x21");
    *%cs:di] = bx;
    *%cs:di+0x2] = es;
    (restore)es;
    (restore)di;
    if(*L00000081 == -1) {
        *L00000081 = L000001C9();
    }
    (save)ds;
    (save)bp;
    bp = sp;
    sp = sp - 8;
    ds = 0x5b6;
    bx = 0x5b6;
    *(bp - 4) = 0x2ea;
    *(bp - 2) = 0x334;
    *(bp - 8) = 0x36a;
    *(bp - 6) = 0x334;
    if(*L00000081 == 0) {
        *(bp - 4) = 0x20e0;
        *(bp - 2) = 0xd1;
        *(bp - 8) = 0x1db0;
        *(bp - 6) = 0xd1;
    }
    ax = 0x2534;
    cx = 0xa;
    asm("lds dx,[bp-0x4]");
    asm("int 0x21");
    ax = ax + 1;
    asm("loop 0x303");
    ax = 0x253e;
    asm("lds dx,[bp-0x8]");
    asm("int 0x21");
    ds = bx;
    if(*L00000081 != 0) {
        ax = *L0000007D;
        asm("xchg ah,al");
        if(ax >= 0x310 && ax < 0xa00) {
            ax = 0x2575;
            ds = cs;
            dx = 0x274;
            asm("int 0x21");
        }
    }
    asm("int 0x37");
    < ? L000002fd : ;
    si = si + 1;
    asm("Unknown opcode 0xfe");
    *(bp + di) = *(bp + di) ^ dl;
    asm("int 0x35");
    asm("outsb");
    *(bp + di + 0x5de5) = *(bp + di + 0x5de5) - 1;
    (restore)ds;
    asm("retf");
}

/*	Procedure: 0x00000343 - 0x00000366
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000343()
{



    L00000000();
    (save)ds;
    ax = 0x2534;
    bx = 0x244;
    cx = 0xb;
    asm("lds dx,[%cs:bx]");
    asm("int 0x21");
    bx = bx + 4;
    ax = ax + 1;
    asm("loop 0x352");
    ax = 0x2575;
    asm("lds dx,[%cs:bx]");
    asm("int 0x21");
    (restore)ds;
    asm("retf");
}

/*	Procedure: 0x00000367 - 0x00000404
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000367()
{



    ax = L00000513();
    asm("sti");
    (save)cx;
    (save)es;
    (save)bx;
    *L000001A8 = *(si + 0xa);
    *L000001AA = *(si + 0xc);
    *L000001AC = *(si + 6);
    cx = *(si + 8);
    *L000001AE = cx;
    *L000001AE = *L000001AE & 61440;
    *L000001A6 = ch & 7 | 0xd8;
    *L000001A4 = 1;
    if(( *(si + 8) & 7 & 0xc0) != 0xc0) {
        cl = cl & 0x38;
    }
    if(*L00000081 != 0) {
        if(!(al & 5)) {
            ax = L0000052D();
        } else {
            if(!(al & 2)) {
                L00000406();
                goto L000003fa;
            }
            if(!(al & 0x18)) {
                (save)ax;
                L00000555();
                (restore)ax;
            }
        }
    }
    if(!(ax = ax & 0x3d)) {
        (save)dx;
        dx = 0;
        bx = ax;
        do {
            bx = bx >> 1;
        } while(dx = dx + 1);
        *L000001A2 = dx;
        *L000001A4 = 1;
        (save)ds;
        L00000375(0x1a2);
        (restore)dx;
    }
L000003fa:
    (restore)bx;
    (restore)es;
    (restore)cx;
    (restore)si;
    (restore)ax;
    (restore)ds;
    (save)cs;
    L00000405();
}

/*	Procedure: 0x00000405 - 0x00000405
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000405()
{



    asm("iret");
}

/*	Procedure: 0x00000406 - 0x0000049E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000406()
{



    if(*L00000081 < 3) {
        L000004FC();
        al = cx & 0xf8;
        if(cx != 0x100 && cx != 0x500 && cx != 0x328 && ax != 0x1c0 && ax != 0x1e4 && ax != 0x10 && ax != 0x18 && ax != 0x410 && ax != 0x418 && ax != 0xd0 && ax != 0xd8 && ax != 0x6d9 && ax != 0x610 && ax != 0x618 && ax != 0x210 && ax != 0x218) {
            asm("les bx,[si+0xa]");
            if(ax != 0x30) {
                goto L00000480;
            }
            L00000567();
            asm("int 0x3c");
            (fsave) *bx;
            L0000049F();
            asm("int 0x3a");
            asm("stc");
            ax = L0000057C();
        }
    }
    return;
L00000480:
    if(ax == 0x430) {
        (save)L00000567();
        asm("int 0x3c");
        (fsave) *bx;
        L0000049F();
        asm("int 0x3a");
        asm("stc");
        (restore)ax;
        return(L0000057C());
    }
    L0000052D();
    return(L000004FC());
}

/*	Procedure: 0x0000049F - 0x000004E8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000049F()
{



    asm("int 0x35");
    asm("in ax,0xcd");
    *L00000196 :: di;
    asm("int 0x3d");
    ax = *L00000196 & 0x4700;
    if(!(ax & 0x4000) && !(ax & 0x100)) {
        return;
    }
    if(!(ax & 0x4500)) {
        if(!(ax & 0x4000)) {
            return;
        }
        asm("int 0x39");
        (fsave)(frestore) * st5;
        ax = ax ^ 50158;
    }
    asm("int 0x37");
    asm("%d cbw");
    *(bp + si - 0x33) = *(bp + si - 0x33) + dx;
    bp :: *L00000198;
    ax = *L000001A0;
    dx = ax & 32768;
    asm("int 0x37");
    asm("%d cbw");
    *(bp + di) = *(bp + di) + si;
}

/*	Procedure: 0x000004E9 - 0x000004FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000004E9()
{



    *L000001A0 = ax + *L000001A0 - 0x403e ^ dx;
    asm("int 0x37");
    asm("%c cbw");
    *(bp + si - 0x3d) = *(bp + si - 0x3d) + bx;
}

/*	Procedure: 0x000004FC - 0x00000512
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000004FC()
{
	/* unknown */ void  ax;
	/* unknown */ void  cx;



    cx = 8;
    ax = L0000049F();
    if(*L00000081 != 0) {
        asm("int 0x35");
        asm("mul dx");
        asm("int1");
    }
}

/*	Procedure: 0x00000513 - 0x0000052C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000513()
{



    asm("int 0x37");
    asm("loop 0x567");
    al = *si;
    *(si + 2) = ( *(si + 2) | 0x40) & al & 0x7f;
    asm("int 0x35");
    al = al & 0x58;
    asm("int 0x3d");
}

/*	Procedure: 0x0000052D - 0x00000554
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000052D()
{



    if(bl != 0xc0) {
        cl = cl | 7;
    }
    ch = ch | 0xd8;
    asm("xchg ch,cl");
    *L00000202 = cx;
    L000004FC();
    L00000567();
    (save)ds;
    asm("lds bx,[si+0xa]");
    L000005b6();
    (restore)ds;
    L0000057C();
    return(L000004FC());
}

/*	Procedure: 0x00000555 - 0x00000566
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000555()
{



    ax = cx & 65528 & 0x1d0;
    if(ax != 0x110) {
        return;
    }
    return(L0000052D());
}

/*	Procedure: 0x00000567 - 0x0000057B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000567()
{



    asm("int 0x35");
    asm("%d xchg ax,si");
    ax :: 38561;
    *(bp + cx + di + 38414) = *(bp + cx + di + 38414) + ax;
    *bx = *bx + di;
    asm("int 0x35");
    asm("%c xchg ax,si");
    bx = bx + ax;
}

/* DEST BLOCK NOT FOUND: 0000058d -> 0000eb10 */
/*	Procedure: 0x0000057C - 0x0000059E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000057C()
{



    (save)cx;
    asm("int 0x35");
    al = al ^ 0xcd;
    asm("aaa");
    asm("loop 0x50d");
    al = al + 0x8a;
    cl = cl + *%fs:bp+di+0xf6c8];
    *(bp + si) = *(bp + si) << 1;
    goto L0000eb10;
    asm("aas");
    ah = ah - ch;
    *(si + 2) = ah;
    asm("int 0x35");
    al = al & 0x8a;
    asm("lds bp,[bp+si]");
    asm("in al,0x59");
}

/*	Procedure: 0x0000059F - 0x000005B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000059F()
{



    ax = 0x3502;
    asm("int 0x21");
    *L00000186 = es;
    *L00000184 = bx;
    *L000001F2 = cs;
    dx = 0x1b0;
    ax = 0x2502;
    asm("int 0x21");
    asm("clc");
    asm("retf");
}

/*	Procedure: 0x000005BA - 0x000005C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000005BA()
{



    (save)ds;
    asm("lds dx,[0x184]");
    ax = 0x2502;
    asm("int 0x21");
    asm("clc");
    (restore)ds;
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 00000646 -> 0000068a */
/*	Procedure: 0x000005C7 - 0x0000065C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000005C7()
{



    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    (restore) *%cs:0x5c7];
    (restore) *%cs:0x5c9];
    *%cs:0x5cb] = ds;
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
        < ? L00000685 : ;
        cl = cl ^ 0x7f;
    }
    sp = sp - 2;
    ax = 1 + bx + cx & 65534;
    if(di = sp - ax) {
        goto L00000685;
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
L00000641:
    L0000065D();
    if(!(bx = bx + 1)) {
        < ? L0000068a : ;
        L0000065D();
        > ? L00000646 : ;
    }
    if(al != 0x20 && al != 0xd && al != 9) {
        goto L00000641;
    }
    al = 0;
    goto L00000641;
}

/*	Procedure: 0x0000065D - 0x00000710
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000065D()
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
    ds = *%cs:0x5cb];
    *L0000006B = bx;
    bx = bx + 1 + bx + 1 + bx + 1 + bx + 1;
    si = sp;
    if(bp = sp - bx) {
        goto L00000000;
    }
    sp = bp;
    *L0000006D = bp;
    *L0000006F = ss;
L000006ad:
    < ? L000006c0 : ;
    *bp = si;
    *(bp + 2) = ss;
    bp = bp + 4;
    asm("%s lodsb");
    asm("loopne 0x6b8");
    if(al == 0) {
        goto L000006ad;
    }
    *bp = 0;
    *(bp + 2) = 0;
    goto ( *L000005C7);
    di = 0;
    (save) *L00000077;
    ax = L000003d0( *L00000079);
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
L000006fb:
    *bx = di;
    *(bx + 2) = es;
    bx = bx + 4;
    asm("repne scasb");
    if(*%es:di] != al) {
        goto L000006fb;
    }
    *bx = ax;
    *(bx + 2) = ax;
    (restore)ds;
    asm("retf");
}

/*	Procedure: 0x00000711 - 0x0000076B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000711()
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

/* DEST BLOCK NOT FOUND: 00000788 -> 0000078c */
/*	Procedure: 0x0000076C - 0x0000078C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000076C()
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

/*	Procedure: 0x0000078D - 0x00000973
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000078D()
{



    dx = 0x552;
    goto L00000795;
    dx = 0x557;
L00000795:
    cx = 5;
    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    cx = 0x27;
    dx = 0x55c;
    ah = 0x40;
    asm("int 0x21");
    goto L00000000;
    goto ( *L00000604);
    (save)bp;
    bp = sp;
    sp = sp - 0xd4;
    (save)si;
    si = 0;
    (save)7;
    L000004fe(0x98, ds);
    goto L00000956;
L000007d2:
    ax = si;
    if(ax > 5) {
    } else {
        bx = ax << 1;
        goto ( *(bx + 0x35));
        *(bp + di) = *(bp + di) + cx + 1;
        asm("xchg ax,[bx+si]");
        (save)es;
        *(bx + si + 0x1601) = *(bx + si + 0x1601) + cx;
        (save)bp - 0x70;
        *L00000618 = L0000007b(bp + 65324, ss);
        (save) *L00000618;
        L000004fe(0xa5, ds);
        goto L00000955;
        *L0000061A = L0000007b();
        (save) *L0000061A;
        L000004fe(0xb4, ds);
        goto L00000955;
        *L0000061E = L0000007b(0x18);
        (save) *L0000061E;
        L000004fe(0xc3, ds);
        goto L00000955;
        *(bp - 0xa) = 0;
        *(bp - 0xc) = 0;
        *L00000622 = dx;
        *L00000620 = L0000007b( *(bp - 0xc), *(bp - 0xa));
        *(bp - 0xa) = dx;
        *(bp - 0xc) = L0000007b( *L00000620, *L00000622);
        (save) *L00000622;
        (save) *L00000620;
        L000004fe(0xd2, ds);
        (save) *(bp - 0xa);
        (save) *(bp - 0xc);
        L000004fe(0xe1, ds);
        goto L00000955;
        ax = *L00000620;
        (save) *L00000622;
        (save)ax;
        asm("int 0x37");
        asm("xchg ah,[0xcdff]");
        ax :: 50307;
        al = al + 0x83;
        asm("in al,dx");
        ch = ch | cl;
        *(bp + 65314) :: bx;
        asm("int 0x3d");
        L0000007b();
        sp = sp + 8;
        asm("int 0x39");
        (save)ds;
        al = al & 6;
        asm("int 0x3d");
        (save) *L0000062A;
        (save) *L00000628;
        (save) *L00000626;
        L000004fe(0xf1, ds, *L00000624);
        (save) *L0000062A;
        (save) *L00000628;
        L0000007b( *L00000624, *L00000626);
        asm("int 0x39");
        (restore)si;
        asm("clc");
        asm("int 0x3d");
        (save) *(bp - 2);
        (save) *(bp - 4);
        (save) *(bp - 6);
        L000004fe(0x100, ds, *(bp - 8));
        goto L00000955;
        *L0000061C = L0000007b();
        (save) *L0000061C;
        L000004fe(0x10e, ds);
    }
L00000955:
    si = si + 1;
L00000956:
    if(si < 6) {
        goto L000007d2;
    }
    (save)7;
    L000004fe(0x11c, ds);
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000974 - 0x000009D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000974()
{



    (save)bp;
    bp = sp;
    (save)si;
    if(!(ax = *(bp + 6) | *(bp + 8))) {
        for(si = 0; si < 0x2328; si = si + 1) {
            dx = *L00000096;
            *(bp + 6) = *(bp + 6) + *L00000094;
            asm("adc [bp+0x8],dx");
            *L00000094 = *L00000094 + 2;
            asm("adc word [0x96],+0x0");
        }
    } else {
        for(si = 0; si < 0x2328; si = si + 1) {
            *L00000094 = *L00000094 - 2;
            asm("sbb word [0x96],+0x0");
            dx = *L00000096;
            *(bp + 6) = *(bp + 6) - *L00000094;
            asm("sbb [bp+0x8],dx");
        }
    }
    dx = *(bp + 8);
    ax = *(bp + 6);
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000009D1 - 0x00000A67
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000009D1()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x10;
    asm("int 0x39");
    si = si + 1;
    (save)es;
    asm("int 0x38");
    asm("%s daa");
    bp = bp + cx;
    *(bp - 8) :: bx;
    asm("int 0x3d");
    *(bp - 0xa) = *(bp + 0xc);
    *(bp - 0xc) = *(bp + 0xa);
    *(bp - 0xe) = *(bp + 8);
    for(*(bp - 0x10) = *(bp + 6); 1; asm("int 0x3d");) {
        asm("int 0x39");
        (save)es;
        asm("das");
        bp = bp + cx;
        asm("int 0x38");
        (restore)si;
        asm("lock int 0x39");
        asm("%d sub al,0x6");
        asm("int 0x3d");
        ah = *L0000062D;
        asm("sahf");
        if(*(bp - 8) >= cl) {
            break;
        }
        do {
            asm("int 0x39");
            (save)es;
            asm("int 0x38");
        } while(si = si + 1);
        asm("int 0x38");
        asm("o32 clc");
        asm("int 0x39");
        (restore)si;
        asm("lock int 0x3d");
        (save) *(bp - 0xa);
        (save) *(bp - 0xc);
        L0000007b( *(bp - 0x10), *(bp - 0xe));
        asm("int 0x39");
        (restore)si;
        asm("lock int 0x3d");
        do {
            asm("int 0x39");
            (save)es;
            asm("int 0x38");
        } while(si = si + 1);
        asm("int 0x38");
        si = si + 1;
        asm("clc");
        asm("int 0x38");
        asm("%s daa");
        bp = bp + cx;
        *(bp - 8) :: bx;
    }
    asm("int 0x39");
    si = si + 1;
    asm("clc");
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000A68 - 0x00000A95
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A68()
{



    (save)bp;
    bp = sp;
    asm("int 0x39");
    (save)es;
    asm("%e add bp,cx");
    *(bp + 6) :: ax;
    asm("int 0x3a");
    asm("fxch st5");
    asm("int 0x3d");
    ah = *L0000062D;
    asm("sahf");
    if(*L0000062C < di) {
        asm("int 0x39");
        si = si + 1;
        (save)es;
        asm("int 0x35");
        asm("loopne 0xa78");
        al = al + 0xcd;
    }
    *(bp + 6) :: ax;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000A96 - 0x00000B3F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A96()
{



    (save)bp;
    bp = sp;
    sp = sp - 8;
    (save)si;
    for(si = 0x64; 1; asm("int 0x3d");) {
        ax = si;
        si = si - 1;
        if(ax == 0) {
            break;
        }
        asm("int 0x39");
        si = si + 1;
        (save)es;
        asm("int 0x38");
        si = si - 1;
        (save)es;
        asm("int 0x38");
        si = si - 1;
        (save)es;
        asm("int 0x38");
        si = si - 1;
        (save)es;
        asm("int 0x38");
        si = si - 1;
        (save)es;
        asm("int 0x38");
        si = si - 1;
        (save)es;
        asm("int 0x38");
        si = si - 1;
        (save)es;
        asm("int 0x39");
        (restore)si;
        asm("clc");
        asm("int 0x3d");
        asm("int 0x39");
        asm("clc");
        asm("int 0x38");
        if(!(si = si + 1)) {
            asm("int 0x38");
            <= ? L00000ad7 : ;
            asm("int 0x38");
        }
        <= ? L00000adb : ;
        asm("int 0x38");
        <= ? L00000adf : ;
        asm("int 0x38");
        <= ? L00000ae3 : ;
        asm("int 0x38");
        <= ? L00000ae7 : ;
        asm("int 0x39");
        (restore)si;
        asm("clc");
        asm("int 0x3d");
        asm("int 0x39");
        si = si + 1;
        asm("clc");
        asm("int 0x38");
        si = si + 1;
        (save)es;
        asm("int 0x38");
        si = si + 1;
        (save)es;
        asm("int 0x38");
        si = si + 1;
        (save)es;
        asm("int 0x38");
        si = si + 1;
        (save)es;
        asm("int 0x38");
        si = si + 1;
        (save)es;
        asm("int 0x38");
        si = si + 1;
        (save)es;
        asm("int 0x39");
        (restore)si;
        asm("clc");
        asm("int 0x3d");
        asm("int 0x39");
        si = si + 1;
        asm("clc");
        asm("int 0x38");
        asm("o32 push es");
        asm("int 0x38");
        asm("o32 push es");
        asm("int 0x38");
        asm("o32 push es");
        asm("int 0x38");
        asm("o32 push es");
        asm("int 0x38");
        asm("o32 push es");
        asm("int 0x38");
        asm("o32 push es");
        asm("int 0x39");
        (restore)si;
        asm("clc");
    }
    asm("int 0x39");
    si = si + 1;
    asm("clc");
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000B40 - 0x00000B71
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000B40()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    if(si <= 2) {
        ax = 1;
    } else {
        (save)si - 1;
        (save)L00000B40(cs);
        (save)si + 65534;
        dx = L00000B40(cs);
        (restore)ax;
        ax = ax + dx;
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000B72 - 0x00000BC7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000B72()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    si = 0;
    for(di = 0; si < 0x2328; si = si + 1) {
        (save)ds;
        (save)0x137;
        L0000007b( *(bp + 6), *(bp + 8));
        (save)ds;
        (save)0x148;
        L0000007b( *(bp + 0xa), *(bp + 0xc));
        (save) *(bp + 0xc);
        (save) *(bp + 0xa);
        di = di + L0000007b( *(bp + 6), *(bp + 8));
    }
    ax = di;
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000BC8 - 0x00000C05
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BC8()
{



    (save)bp;
    bp = sp;
    goto L00000be0;
L00000bd6:
    ax = 0;
    goto L00000c04;
L00000be0:
    while(1) {
        asm("les bx,[bp+0x6]");
        al = *%es:bx];
        asm("les bx,[bp+0xa]");
        if(al != *%es:bx]) {
            break;
        }
        asm("les bx,[bp+0x6]");
        if(*%es:bx] == 0) {
            goto L00000bd6;
        }
        *(bp + 6) = *(bp + 6) + 1;
        *(bp + 0xa) = *(bp + 0xa) + 1;
    }
    asm("les bx,[bp+0x6]");
    al = *%es:bx];
    asm("cbw");
    asm("les bx,[bp+0xa]");
    (save)ax;
    al = *%es:bx];
    asm("cbw");
    dx = ax;
    (restore)ax;
    ax = ax - dx;
L00000c04:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000C06 - 0x00000C22
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C06()
{



    (save)bp;
    bp = sp;
    do {
        asm("les bx,[bp+0xa]");
        *(bp + 0xa) = *(bp + 0xa) + 1;
        al = *%es:bx];
        asm("les bx,[bp+0x6]");
        *(bp + 6) = *(bp + 6) + 1;
        *%es:bx] = al;
    } while(al != 0);
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00000C23 - 0x00000D2D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C23()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x68;
    (save)si;
    (save)di;
    (save)ds;
    ax = 0x159;
    (save)0x159;
    (save)ss;
    ax = L00000C06(cs, bp - 0x64);
    (save)ds;
    ax = 0x170;
    (save)0x170;
    ax = 0x167;
    ax = L00000419(0x167, ds);
    *(bp - 0x66) = dx;
    *(bp - 0x68) = ax;
    if(!(dx = dx | ax)) {
        ax = L000004fe(0x172, ds);
        L000003ca(65535);
    }
    di = 0;
    goto L00000caf;
L00000c72:
    si = 0;
    goto L00000ca8;
L00000c76:
    asm("les bx,[bp-0x68]");
    if(!( *%es:bx] = *%es:bx] + 1)) {
        al = *%ss:bp+si-0x64];
        asm("les bx,[bp-0x68]");
        *%es:bx+0xc] = *%es:bx+0xc] + 1;
        asm("les bx,[%es:bx+0xc]");
        bx = bx - 1;
        *%es:bx] = al;
        ah = 0;
    } else {
        (save) *(bp - 0x66);
        ax = L00000500( *%ss:bp+si-0x64], *(bp - 0x68));
L00000ca2:
    }
    si = si + 1;
L00000ca8:
    if(*%ss:bp+si-0x64] != 0) {
        goto L00000c76;
    }
L00000caf:
    di = di + 1;
    if(di < 0x3e8) {
        goto L00000c72;
    }
    L00000491( *(bp - 0x68), *(bp - 0x66));
    ax = di;
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    (save)di;
    for(si = 0; si < 0x3e8; si = si + 1) {
        *(bp - 2) = 0;
        di = 0;
        for(*(bp - 4) = 1; di < 0xb3; di = di + 1) {
            *(bp - 2) = *(bp - 2) + *(bp - 4);
            *(bp - 4) = *(bp - 4) + 2;
        }
    }
    ax = *(bp - 2);
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + 0xe2) = *(bx + 0xe2) + al;
    al = (al | 0x18) & 0x30;
    (save)sp;
    asm("pusha");
    asm("insb");
    if(al >= 0x48) {
        goto L00000ca2;
    }
    asm("pushf");
    al & 0xb4;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 1) = *(bx + si + 1) + al;
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 00000d31 -> 00000d97 */
/* DEST BLOCK NOT FOUND: 00000d38 -> 00000cd4 */
/* DEST BLOCK NOT FOUND: 00000d42 -> 00000d97 */
/* DEST BLOCK NOT FOUND: 00000d53 -> 00000d97 */
/* DEST BLOCK NOT FOUND: 00000d64 -> 00000d97 */
/*	Procedure: 0x00000D2E - 0x00000D60
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000D2E()
{



    ax = 0x12;
    goto L00000d97;
    *(bp + si + 52507) = *(bp + si + 52507) - 1;
    if(bx = bx - 1) {
        goto L00000cd4;
    }
    asm("aam 0x2");
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 0x23) = *(bx + si + 0x23) + bh;
    goto L00000d97;
    bx = 0x17f0;
    (restore)sp;
    *(bp + di) = *(bp + di) - di;
    *di = al;
    di = di + 1;
    *(bx + si) = *(bx + si) + 1;
    ax = 0x34;
    goto L00000d97;
    ax = ax ^ 0x68c2;
    *(bp + si + 0xfda) = *(bp + si + 0xfda) & sp;
    sp = bp;
    (restore)bp;
    *(bx + si) = *(bx + si) + al + *(bx + si);
}

/* DEST BLOCK NOT FOUND: 00000d64 -> 00000d97 */
/* DEST BLOCK NOT FOUND: 00000d75 -> 00000d97 */
/*	Procedure: 0x00000D61 - 0x00000D71
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000D61()
{



    ax = 0x45;
    goto L00000d97;
    asm("cwd");
    asm("Unknown opcode 0xf7");
    asm("iret");
    asm("sti");
    *(bp + si + 39456) & bl;
    asm("Unknown opcode 0xff");
    *(bx + si) = *(bx + si) + 1;
    *(bx + si + 0x56) = *(bx + si + 0x56) + bh;
}

/* DEST BLOCK NOT FOUND: 00000d75 -> 00000d97 */
/* DEST BLOCK NOT FOUND: 00000d78 -> 00000d49 */
/* DEST BLOCK NOT FOUND: 00000d7d -> 00000d30 */
/* DEST BLOCK NOT FOUND: 00000d86 -> 00000d97 */
/*	Procedure: 0x00000D72 - 0x00000D82
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000D72()
{



    ax = 0x56;
    goto L00000d97;
    al = *esi;
    if(esi = esi + 1) {
        goto L00000d49;
    }
    asm("Unknown opcode 0xd1");
    *bx = !( *bx);
    < ? L00000d30 : ;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 00000d86 -> 00000d97 */
/*	Procedure: 0x00000D83 - 0x00000D93
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000D83()
{



    ax = 0x67;
    goto L00000d97;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ax + ax;
}

/*	Procedure: 0x00000D94 - 0x00000DA8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00000D94()
{
	/* unknown */ void  ds;



    ax = 0x78;
    ds = cs;
    asm("xchg ax,si");
    asm("cld");
    cx = 6;
    asm("rep movsw");
    di = di - 0xc;
    asm("xchg ax,si");
}

/*	Procedure: 0x00000DA9 - 0x00000DBA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00000DA9()
{
	/* unknown */ void  di;



    (save)ax;
    ax = 0;
    asm("cld");
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    (restore)ax;
    *di = eax;
    di = di + 4;
    al = cl;
    *di = 0;
    di = di + 4;
    return(0);
}

/*	Procedure: 0x00000DBB - 0x00000DD3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000DBB()
{



    ch = 1;
    L00002B0D();
    (save)di;
    ax = 0;
    asm("cld");
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    ah = 0xc0;
    *di = 0xc0;
    di = di + 4;
    ax = 0x4001;
    *di = 0x4001;
    di = di + 4;
    *di = 1;
    di = di + 4;
    (restore)di;
    return(1);
}

/*	Procedure: 0x00000DD4 - 0x00000DED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000DD4()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    *L000000D8 = *L000000D8 - 0xc;
    (save)es;
    es = ds;
    asm("cld");
    cx = 6;
    asm("rep movsw");
    (restore)es;
}

/*	Procedure: 0x00000DEE - 0x00000E0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000DEE()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    *L000000D8 = *L000000D8 - 0xc;
    (save)ds;
    (save)es;
    es = ds;
    ds = cs;
    asm("cld");
    cx = 6;
    asm("rep movsw");
    (restore)es;
    (restore)ds;
}

/*	Procedure: 0x00000E0C - 0x00000E1E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000E0C()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    si = *L000000D8;
    asm("cld");
    cx = 6;
    asm("rep movsw");
    *L000000D8 = si;
}

/*	Procedure: 0x00000E1F - 0x00000E38
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000E1F()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    *L000000D8 = *L000000D8 - 0xc;
    asm("cld");
    (save)es;
    es = ds;
    cx = 6;
    asm("rep movsw");
    (restore)es;
}

/*	Procedure: 0x00000E39 - 0x00000E52
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000E39()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = *L000000D8;
    asm("cld");
    (save)es;
    es = ds;
    cx = 6;
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,[di+0xc]");
    *di = eax;
    di = di + 4;
    asm("loop 0xe48");
    (restore)es;
}

/*	Procedure: 0x00000E53 - 0x00000E87
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E53()
{



    ax = *%es:si];
    cx = 0;
    dx = 0;
    if(ax >= 0) {
        > ? L00000e6a : ;
        bx = 49153;
    } else {
        ax = ~ax;
        dl = 1;
        bx = 0;
        asm("xchg ax,cx");
        while(1) {
            cx = cx >> 1;
            asm("rcr ax,1");
            if(bx = bx + 1) {
                break;
            }
        }
    }
    *(di + 0xa) = dx;
    *(di + 8) = bx;
    *(di + 6) = ax;
    *(di + 4) = cx;
    *(di + 2) = cx;
    *di = cx;
}

/*	Procedure: 0x00000E88 - 0x00000F16
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E88()
{



    cx = *(si + 8);
    if(cx <= 0x10) {
        if(cx > 49153) {
            goto L00000ea4;
        }
        ax = 0;
    } else {
L00000e9a:
        ch = 8;
        L00002B0D();
        ax = 32768;
        goto L00000f13;
L00000ea4:
        bx = *(si + 6);
        ax = 0;
        if(cx < 0) {
            bx = bx >> 1;
            asm("rcr dx,1");
        }
        dx = *(si + 4);
        if(cx > 0) {
            dx = dx << 1;
            asm("rcl bx,1");
            asm("rcl ax,1");
            asm("loop 0xeba");
        }
        bl = bl | dx | *si | *(si + 2) | dl;
        cl = 0xc & *L000000D7;
        if(cl != 0xc) {
            if(cl != 0) {
                cl = cl + *(si + 0xa);
                if(cl == 4 || cl == 9) {
                    goto L00000f08;
                }
                bx = ~bx;
L00000eea:
                asm("adc ax,0x0");
                >= ? 0xf0b : ;
                if(*(si + 0xa) != 1 || ax != 32768) {
                    goto L00000e9a;
                }
                goto L00000f0b;
            }
            bx = (bl | 1 & al) + 32767;
            goto L00000eea;
        }
L00000f08:
        asm("clc");
        goto L00000eea;
L00000f0b:
        if(*(si + 0xa) == 1) {
            ax = ~ax;
        }
    }
L00000f13:
    *%es:di] = ax;
}

/*	Procedure: 0x00000F17 - 0x00000FFC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000F17()
{



    (save)si;
    (save)di;
    asm("cld");
    cx = 6;
    asm("rep movsw");
    (restore)di;
    (restore)si;
    asm("xchg si,di");
    si = si + 8;
    if(*si > 49153) {
        if(*si >= 0x4001) {
            goto L00000f3c;
        }
        *si = *si - 1;
        ax = L00000E53();
        *si = 1;
    }
L00000f3b:
    return;
L00000f3c:
    *si = 49153;
    *(di + 8) = 0xd;
    *(di + 7) = 0x80;
    goto L00000f3b;
    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    cx = *(si + 8);
    if(cx <= 0xf) {
        if(cx > 0) {
            goto L00000f6a;
        }
        ax = 0;
    } else {
        ch = 8;
        L00002B0D();
        ax = 32767;
        goto L00000f74;
L00000f6a:
        ax = *(si + 6);
        ax = ax >> ~cl + 0x10;
L00000f74:
        if(*(si + 0xa) == 1) {
            ax = ~ax;
        }
    }
    cx = *(di + 8);
    if(cx > 49153 && cx < 0x4001) {
        ax = ax + cx;
        if(ax <= 49153) {
            goto L00000fa8;
        }
        if(ax >= 0x4001) {
            goto L00000f9e;
        }
        *(di + 8) = ax;
    }
L00000f9a:
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
L00000f9e:
    ch = 8;
    L00002B0D();
    ax = 0x4001;
    goto L00000fb0;
L00000fa8:
    ch = 0x10;
    L00002B0D();
    ax = 49153;
L00000fb0:
    ax = L00000DA9();
    goto L00000f9a;
    bx = *%es:si];
    dx = *%es:si+0x2];
    ax = 0;
    cx = 0;
    if(dx < 0) {
        dx = !dx;
        bx = ~bx;
        asm("sbb dx,-0x1");
        cl = 1;
    }
    *(di + 0xa) = cx;
    cx = 0x10;
    if(dx == 0) {
        asm("xchg bx,dx");
        cl = 0;
    }
L00000fdc:
    if(dx != 0) {
        dx = dx >> 1;
        asm("rcr bx,1");
        asm("rcr ax,1");
        goto L00000fdc;
L00000fe9:
        cx = 49153;
    }
    if(cx = cx + 1) {
        goto L00000fe9;
    }
    *(di + 8) = cx;
    *(di + 6) = bx;
    *(di + 4) = ax;
    *(di + 2) = dx;
    *di = dx;
}

/*	Procedure: 0x00000FFD - 0x000010F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000FFD()
{



    cx = *(si + 8);
    if(cx <= 0x20) {
        if(cx >= 0) {
            goto L00001045;
        }
        if(cx > 49153) {
            bl = (0xc & *L000000D7) + *(si + 0xa);
            if(bl == 5 || bl == 8) {
                goto L00001028;
            }
        }
        dx = 0;
        ax = 0;
        goto L000010f2;
L00001028:
        dx = 0;
        ax = 1;
        if(bl == 5) {
            ax = ~L00000001;
            edx = !L00000000 & 65535;
        }
    } else {
L00001038:
        ch = 8;
        L00002B0D();
        dx = 32768;
        ax = 0;
    }
    goto L000010f2;
L00001045:
    bl = *(si + 2) | *si | *(si + 1);
    ax = *(si + 4);
    dx = *(si + 6);
    if(!(cl = cl - 0x10)) {
        do {
            al = al | bl | bh;
            asm("xchg ax,bx");
            asm("xchg ax,dx");
            dx = 0;
        } while(cl = cl + 0x10);
    }
    if(!(cl = cl & 0xf)) {
        (save)si;
        si = 65535;
        asm("rol dx,cl");
        asm("rol ax,cl");
        si = si << cl;
        ax = ax ^ si & ax;
        si = si & dx;
        dx = dx ^ si;
        ax = ax | si;
        bl = bl | bh | cl;
        bh = ch;
        (restore)si;
    }
    cl = 0xc & *L000000D7;
    if(cl != 0xc) {
        if(cl != 0) {
            cl = cl + *(si + 0xa);
            if(cl == 4 || cl == 9) {
                goto L000010e2;
            }
            bx = ~bx;
            < ? L000010b4 : ;
        }
L000010b4:
        asm("adc ax,0x0");
        asm("adc dx,+0x0");
        if((bx = (bl | 1 & al) + 32767) || *(si + 0xa) == 1 && dx == 32768 && ax == 0) {
            goto L000010e5;
        }
        goto L00001038;
        cl = dh;
        asm("rol cl,1");
        if((cl ^ *(si + 0xa)) & 1) {
            goto L000010e5;
        }
        goto L00001038;
    }
L000010e2:
    asm("clc");
    goto L000010b4;
L000010e5:
    if(*(si + 0xa) == 1) {
        dx = !dx;
        ax = ~ax;
        asm("sbb dx,-0x1");
    }
L000010f2:
    *%es:di] = ax;
    *%es:di+0x2] = dx;
}

/*	Procedure: 0x000010FA - 0x0000116B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000010FA()
{
	/* unknown */ void  bp;
	/* unknown */ void  si;



    ax = *%es:si];
    bx = *%es:si+0x2];
    cx = *%es:si+0x4];
    dx = *%es:si+0x6];
    bp = 0;
    if(dx >= 0) {
        > ? L0000113a : ;
        if(cx != 0 || bx != 0 || ax != 0) {
            goto L0000113a;
        }
        si = 49153;
    } else {
        dx = !dx;
        cx = !cx;
        bx = !bx;
        ax = ~ax;
        asm("cmc");
        asm("adc bx,+0x0");
        asm("adc cx,+0x0");
        asm("adc dx,+0x0");
        bp = 1;
L0000113a:
        for(si = 0x40; dx == 0; asm("xchg ax,bx");) {
            asm("xchg dx,cx");
            asm("xchg cx,bx");
        }
        if(!(si = si - 0x10)) {
            do {
                si = si - 1;
                asm("adc bx,bx");
                asm("adc cx,cx");
                asm("adc dx,dx");
            } while(ax = ax + ax);
        }
    }
    *(di + 0xa) = bp;
    *(di + 8) = si;
    *(di + 6) = dx;
    *(di + 4) = cx;
    *(di + 2) = bx;
    *di = ax;
}

/*	Procedure: 0x0000116C - 0x0000125D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0000116C()
{
	/* unknown */ void  bp;



    (save)di;
    cx = *(si + 8);
    if(cx <= 0x3f) {
        if(cx >= 0) {
            goto L000011c0;
        }
        if(cx > 49153) {
            bl = (0xc & *L000000D7) + *(si + 0xa);
            if(bl == 5 || bl == 8) {
                goto L00001197;
            }
        }
        bp = 0;
        goto L000011b7;
L00001197:
        bp = 0;
        dx = 0;
        ax = 1;
        bx = 0;
        if(bl == 5) {
            ax = ~L00000001;
            ebx = !L00000000 & 65535;
            edx = !L00000000 & 65535;
            ebp = !L00000000 & 65535;
        }
    } else {
L000011af:
        ch = 8;
        L00002B0D();
        bp = 32768;
L000011b7:
        ax = 0;
    }
    goto L00001251;
L000011c0:
    bp = *(si + 6);
    dx = *(si + 4);
    bx = *(si + 2);
    di = *si;
    ax = 0;
    if(!(cl = cl - 0x30)) {
        do {
            al = al | ah;
            eax = di & 65535;
            di = bx;
            bx = dx;
            dx = bp;
            bp = 0;
        } while(cl = cl + 0x10);
    }
    cl = ~cl;
    if(!(cl = cl & 0xf)) {
        cl = cl + 0x10;
        al = al | ah;
        bp = bp >> 1;
        asm("rcr dx,1");
        asm("rcr bx,1");
        asm("rcr di,1");
        asm("rcr ah,1");
        asm("loop 0x11ef");
    }
    cl = 0xc & *L000000D7;
    if(cl != 0xc) {
        if(cl == 0) {
            goto L0000122b;
        }
        cl = cl + *(si + 0xa);
        if(cl != 4 && cl != 9) {
            ax = ~ax;
            < ? L0000122b : ;
            goto L00001238;
L0000122b:
            cx = 0;
            asm("adc di,cx");
            asm("adc bx,cx");
            asm("adc dx,cx");
            asm("adc bp,cx");
            if(ax = (al | 1 & di) + 32767) {
                goto L000011af;
            }
        }
    }
L00001238:
    asm("xchg ax,di");
    if(*(si + 0xa) == 1) {
        bp = !bp;
        dx = !dx;
        bx = !bx;
        ax = ~ax;
        asm("cmc");
        asm("adc bx,+0x0");
        asm("adc dx,+0x0");
        asm("adc bp,+0x0");
    }
L00001251:
    (restore)di;
    *di = eax;
    di = di + 4;
    asm("xchg ax,bx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,dx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,bp");
    *di = eax;
    di = di + 4 - 8;
}

/*	Procedure: 0x0000125E - 0x00001367
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L0000125E()
{
	/* unknown */ void  bp;
	/* unknown */ void  si;
	/* unknown */ void  di;



    asm("xchg bp,si");
    cx = *(bp + 8);
    if(cx < 0x40) {
        if(cx >= 0) {
            goto L000012b4;
        }
        if(cx > 49153) {
            cl = (0xc & *L000000D7) + *(bp + 0xa);
            if(cl == 5 || cl == 8) {
                goto L0000128f;
            }
        }
L00001288:
        bx = 0;
        si = 49153;
        goto L000012a0;
L0000128f:
        si = 1;
        bx = 32768;
    } else {
        == ? L000012b1 : ;
        ch = 0x20;
        ax = L00002B0D();
        goto L00001364;
    }
L000012a0:
    ax = 0;
    *bp = 0;
    *(bp + 2) = 0;
    *(bp + 4) = 0;
    *(bp + 6) = bx;
    *(bp + 8) = si;
    goto L00001364;
L000012b4:
    si = 0x38 & cx;
    cx = cx ^ si;
    si = ~(si >> 1 >> 1 >> 1) + 7;
    if(si == 7) {
        eax = *(bp + si) & 0xff;
    } else {
        ax = *(bp + si);
    }
    bx = 0;
    for(di = si; !(di = di - 1); *(bp + di) = bh) {
        bl = bl | *(bp + di);
    }
    dx = 0xff >> (cl & 7);
    di = dx + 1;
    if((dx = dx & ax) || bl != 0) {
        ch = 0x20;
        ax = L00002B0D() ^ dx;
        cl = 0xc & *L000000D7;
        if(cl != 0xc) {
            if(cl == 0) {
                goto L00001328;
            }
            cl = cl + *(bp + 0xa);
            if(cl == 4 || cl == 9) {
                goto L0000131d;
            }
            if(bl = bl | dl) {
                goto L0000133e;
            }
        } else {
L0000131d:
            *(bp + si) = al;
            if(*(bp + 7) == 0) {
                goto L00001288;
L00001328:
                if(bl == 0) {
                    if(di & ax) {
                        goto L00001338;
                    }
                    if(dx + dx <= di) {
                        goto L0000131d;
                    }
                } else {
L00001338:
                    if(dx + dx < di) {
                        goto L0000131d;
                    }
                }
L0000133e:
                if(!(si = si - 7)) {
                    *(bp + si + 7) = ax + di;
                    ah = ~( *(bp + si + 7));
                } else {
                    ax = ax + di;
                    *(bp + si + 7) = ax;
                    si = si + 1;
                    if(!(si = si + 1)) {
                        asm("adc byte [bp+si+0x7],0x0");
                        < ? L00001352 : ;
                    }
                }
                >= ? L00001364 : ;
                asm("stc");
                asm("rcr word [bp+0x6],1");
                *(bp + 8) = *(bp + 8) + 1;
            }
        }
    }
L00001364:
}

/*	Procedure: 0x00001368 - 0x0000159F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001368()
{



    ax = *(si + 4);
    dx = *(si + 6);
    bx = *(si + 8);
    cl = *(si + 0xa);
    if(*si != 0 || *(si + 2) != 0 || al & 0x7f || !(ah & 1)) {
        asm("adc ah,0x0");
        asm("adc dx,+0x0");
        if(!(al = al + al)) {
            asm("rcr dx,1");
            asm("rcr ax,1");
            bx = bx + 1;
        }
    }
    if(!(bx = bx + 0x7e)) {
        if(bx < 0xff) {
L000013a2:
            dx = dx << 1;
            cl = cl >> 1;
            asm("rcr bl,1");
            asm("rcr dx,1");
            al = ah;
            ah = dl;
            dl = dh;
            dh = bl;
            *di = eax;
            di = di + 4;
            asm("xchg ax,dx");
            *di = eax;
            di = di + 4 - 4;
            return;
        }
        if(*(si + 8) < 0x4001) {
            ch = 8;
            L00002B0D();
            dx = 0;
            ax = 0;
        }
        bx = 0xff;
        goto L000013a2;
    }
    if(*(si + 8) > 49153) {
        ch = 0x10;
        L00002B0D();
    }
    dx = 0;
    ax = 0;
    goto L000013a2;
    (save)si;
    (save)di;
    (save)es;
    asm("cld");
    ax = *%es:si];
    si = 0;
    dx = *%es:si+0x2] << 1;
    asm("rcl si,1");
    if(!(ebx = dh & 0xff)) {
        if(dh != 0xff) {
            bx = bx - 0x7e;
L00001401:
            asm("stc");
            asm("rcr dl,1");
L00001404:
            dh = dl;
            dl = ah;
            ch = al;
            cl = 0;
            es = ds;
            ax = 0;
            *di = 0;
            di = di + 4;
            *di = 0;
            di = di + 4;
            asm("xchg ax,cx");
            *di = eax;
            di = di + 4;
            asm("xchg ax,dx");
            *di = eax;
            di = di + 4;
            asm("xchg ax,bx");
            *di = eax;
            di = di + 4;
            asm("xchg ax,si");
            *di = eax;
            di = di + 4;
            (restore)es;
            (restore)di;
            (restore)si;
            return;
        }
        bx = ~(ax | dl);
        bx = 0x4001;
        goto L00001401;
    }
    if(!(cx = dx | ax)) {
        bx = bx - 0x7e;
        dl = dl >> 1;
L00001434:
        asm("adc dx,dx");
        if(ax = ax + ax) {
            goto L00001404;
        }
        bx = bx - 1;
        goto L00001434;
    }
    bx = 49153;
    goto L00001404;
    (save)di;
    ax = *(si + 1);
    di = *(si + 3);
    cx = *(si + 5);
    dl = *(si + 7);
    bx = *(si + 8);
    if((dh = 3 & al | *si) || !(al & 8)) {
        asm("adc di,+0x0");
        asm("adc cx,+0x0");
        asm("adc dl,0x0");
        if(!(ax = ax + 4)) {
            asm("rcr dl,1");
            bx = bx + 1;
        }
    }
    if(!(bx = bx + 0x3fe)) {
        if(bx >= 0x7ff) {
            goto L000014c5;
        }
L0000147b:
        al = al & 0xf8;
        dl = dl << 1;
        bx = bx >> 1;
        asm("rcr dl,1");
        al = al | bh;
        dh = bl;
        bx = di;
        di = di >> 1;
        asm("rcr ax,1");
        asm("rcr dx,1");
        asm("rcr cx,1");
        asm("rcr bx,1");
        di = di >> 1;
        asm("rcr ax,1");
        asm("rcr dx,1");
        asm("rcr cx,1");
        asm("rcr bx,1");
        al = al | *(si + 0xa);
        di = di >> 1;
        asm("rcr ax,1");
        asm("rcr dx,1");
        asm("rcr cx,1");
        asm("rcr bx,1");
L000014aa:
        (restore)di;
        asm("cld");
        *di = eax;
        di = di + 4;
        asm("xchg ax,bx");
        *di = eax;
        di = di + 4;
        asm("xchg ax,cx");
        *di = eax;
        di = di + 4;
        asm("xchg ax,dx");
        *di = eax;
        di = di + 4 - 8;
        return;
    }
    dx = 0;
    if(*(si + 8) > 49153) {
        ch = 0x10;
        goto L000014d1;
L000014c5:
        if(*(si + 8) >= 0x4001) {
            goto L000014e1;
        }
        dx = 65504;
        ch = 8;
L000014d1:
        L00002B0D();
    }
    dl = dl | *(si + 0xa);
    asm("ror dx,1");
    bx = 0;
    ax = 0;
    goto L000014aa;
L000014e1:
    bx = 0x7ff;
    goto L0000147b;
    (save)di;
    ax = ds;
    bx = es;
    ds = bx;
    es = ax;
    dx = *(si + 6);
    ax = 0;
    dx = dx << 1;
    asm("rcl ax,1");
    asm("std");
    di = di + 0xa;
    *di = eax;
    dx = dx >> 5;
    if(!(di = di + 4)) {
        if(dx != 0x7ff) {
            bl = 0x10;
            dx = dx - 0x3fe;
L0000150f:
            asm("xchg ax,dx");
            *di = eax;
            di = di + 4;
            dh = *(si + 5) & 0xf | bl;
            cx = *(si + 3);
            bx = *(si + 1);
            ah = *si;
            eax = 0 << 1 & 65535;
            asm("rcl bx,1");
            asm("rcl cx,1");
            asm("rcl dx,1");
            ax = ax << 1;
            asm("rcl bx,1");
            asm("rcl cx,1");
            asm("rcl dx,1");
            ax = ax << 1;
            asm("rcl bx,1");
            asm("rcl cx,1");
            asm("rcl dx,1");
L0000153b:
            asm("xchg ax,dx");
            *di = eax;
            di = di + 4;
            asm("xchg ax,cx");
            *di = eax;
            di = di + 4;
            asm("xchg ax,bx");
            *di = eax;
            di = di + 4;
            asm("xchg ax,dx");
            *di = eax;
            di = di + 4;
            ax = ds;
            bx = es;
            ds = bx;
            es = ax;
            (restore)di;
            return;
        }
        bx = *(si + 6) & 0xf | *(si + 4) | *(si + 2) | *si;
        dx = 0x4001;
        bl = bl | 0x10;
        goto L0000150f;
    }
    if(!(bx = *(si + 6) & 0xf | *(si + 4) | *(si + 2) | *si)) {
        dx = 49153;
        goto L0000150f;
    }
    cx = *(si + 3);
    bx = *(si + 1);
    ah = *si;
    al = 4;
L00001588:
    ah = al - 1 << 1;
    asm("rcl bx,1");
    asm("rcl cx,1");
    asm("adc dx,dx");
    if(dh = *(si + 5) & 0xf) {
        goto L00001588;
    }
    (save)ax;
    eax = -1022 & 65535;
    *di = eax;
    di = di + 4;
    (restore)ax;
    al = 0;
    goto L0000153b;
}

/*	Procedure: 0x000015A0 - 0x000015C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000015A0()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    asm("cld");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    eax = *esi;
    cx = *(esi + 4);
    if(ax < 0x4001) {
        if(ax = ax + 0x3ffe) {
            goto L000015c3;
        }
L000015b4:
        ax = ax << 1;
        cx = cx >> 1;
        asm("rcr ax,1");
        *di = eax;
        di = di + 4;
        return;
    }
    ax = 32767;
    goto L000015b4;
L000015c3:
    ax = 0;
    goto L000015b4;
}

/*	Procedure: 0x000015C7 - 0x00001602
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L000015C7()
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  ds;
	/* unknown */ void  es;



    ax = ds;
    bx = es;
    es = ax;
    ds = bx;
    asm("std");
    si = si + 8;
    di = di + 0xa;
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,bx");
    ax = 0;
    bx = bx << 1;
    asm("rcl ax,1");
    *di = eax;
    bx = bx >> 1;
    if(!(di = di + 4)) {
        bx = bx - 0x3ffe;
        asm("xchg ax,bx");
        *di = eax;
        di = di + 4;
        *di = *si;
        di = di + 4;
        si = si + 4;
        *di = *si;
        di = di + 4;
        si = si + 4;
        *di = *si;
        di = di + 4;
        si = si + 4;
        *di = *si;
        di = di + 4;
        si = si + 4;
L000015f1:
        asm("cld");
        return;
    }
    ax = 49153;
    *di = 49153;
    di = di + 4;
    ax = 0;
    *di = 0;
    di = di + 4;
    *di = 0;
    di = di + 4;
    *di = 0;
    di = di + 4;
    *di = 0;
    di = di + 4;
    goto L000015f1;
}

/*	Procedure: 0x00001603 - 0x00001689
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00001603()
{
	/* unknown */ void  dx;
	/* unknown */ void  si;



    if(!(dx = *(si + 6) & 32767 | *si | *(si + 2) | *(si + 4))) {
        if(bx != -1 && *(bx + 8) >= 0x4001 && (dx = *(bx + 6) & 32767 | *bx | *(bx + 2) | *(bx + 4))) {
            goto L00001678;
        }
        asm("clc");
L00001634:
        return;
    }
    if(bx != -1 && *(bx + 8) >= 0x4001 && !(dx = *(bx + 6) & 32767 | *bx | *(bx + 2) | *(bx + 4)) && *(si + 6) <= *(bx + 6)) {
        < ? L00001678 : ;
        if(*(si + 4) <= *(bx + 4)) {
            < ? L00001678 : ;
            if(*(si + 2) <= *(bx + 2)) {
                < ? L00001678 : ;
                if(*si <= *bx) {
L00001678:
                    si = bx;
                }
            }
        }
    }
    (save)di;
    ch = 1;
    ax = L00002B0D();
    cx = 6;
    asm("cld");
    asm("rep movsw");
    asm("stc");
    (restore)di;
    goto L00001634;
}

/* DEST BLOCK NOT FOUND: 0000168c -> 00001690 */
/*	Procedure: 0x0000168A - 0x0000168D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000168A()
{



    cl = 1;
    goto L00001690;
}

/*	Procedure: 0x0000168E - 0x00001852
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L0000168E(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    cl = 0;
    sp = bp - 6;
    (save)si;
    (save)di;
    si = A8;
    di = A6;
    al = cl ^ *(di + 0xa) ^ *(si + 0xa);
    *(bp - 6) = al;
    ax = *(si + 8);
    bx = *(di + 8);
    if(ax < 0x4001) {
        if(bx >= 0x4001) {
            goto L0000170a;
        }
        if(ax < bx) {
            cl = cl ^ *(di + 0xa);
            asm("xchg ax,bx");
            asm("xchg si,di");
        } else {
            cl = *(si + 0xa);
        }
        *(bp - 5) = cl;
        *(bp - 4) = *(si + 8);
        if(bx > 49153 && ax - bx <= 0x40) {
            goto L00001734;
        }
L000016df:
        ax = *si;
        bx = *(si + 2);
        cx = *(si + 4);
        dx = *(si + 6);
    } else {
        (save)bx;
        (save)di;
        bx = di;
        di = A4;
        ax = L00001603();
        (restore)di;
        (restore)bx;
        < ? L00001731 : ;
        if(bx >= 0x4001) {
            if(*(bp - 6) != 0) {
                goto L0000172b;
            }
            goto L0000171e;
L0000170a:
            bx = 65535;
            al = *(di + 0xa) ^ cl;
            si = di;
            di = A4;
            ax = L00001603();
            < ? L00001731 : ;
        } else {
L0000171e:
            al = *(si + 0xa);
        }
        *(bp - 5) = al;
        *(bp - 4) = 0x4001;
        goto L000016df;
L0000172b:
        di = A4;
        ax = L00000DBB();
        goto L0000182a;
L00001734:
        *(bp - 1) = al;
        ax = *di;
        bx = *(di + 2);
        cx = *(di + 4);
        dx = *(di + 6);
        *(bp - 2) = 0;
        if(!( *(bp - 1) = *(bp - 1) - 8)) {
            do {
                *(bp - 2) = al;
                al = ah;
                ah = bl;
                bl = bh;
                bh = cl;
                cl = ch;
                ch = dl;
                dl = dh;
                dh = 0;
            } while(*(bp - 1) = *(bp - 1) - 8);
        }
        if(!( *(bp - 1) = *(bp - 1) & 7)) {
            do {
                dx = dx >> 1;
                asm("rcr cx,1");
                asm("rcr bx,1");
                asm("rcr ax,1");
                asm("rcr byte [bp-0x2],1");
            } while(*(bp - 1) = *(bp - 1) - 1);
        }
        di = 0;
        if(*(bp - 6) == 0) {
            asm("adc bx,[si+0x2]");
            asm("adc cx,[si+0x4]");
            asm("adc dx,[si+0x6]");
            if(!(ax = ax + *si)) {
                asm("rcr dx,1");
                asm("rcr cx,1");
                asm("rcr bx,1");
                asm("rcr ax,1");
                asm("rcr byte [bp-0x2],1");
                *(bp - 4) = *(bp - 4) + 1;
            }
        } else {
            *(bp - 5) = *(bp - 5) ^ 1;
            asm("sbb bx,[si+0x2]");
            asm("sbb cx,[si+0x4]");
            asm("sbb dx,[si+0x6]");
            if(!(ax = ax - *si)) {
                *(bp - 5) = *(bp - 5) ^ 1;
                dx = !dx;
                cx = !cx;
                bx = !bx;
                ax = !ax;
                *(bp - 2) = ~( *(bp - 2));
                asm("cmc");
                asm("adc ax,di");
                asm("adc bx,di");
                asm("adc cx,di");
                asm("adc dx,di");
            }
            si = 0x40;
            if(dh < 0) {
                if(!(si = si - 1)) {
L000017d3:
                    *(bp - 2) = *(bp - 2) << 1;
                    asm("rcl ax,1");
                    asm("rcl bx,1");
                    asm("rcl cx,1");
                    asm("adc dx,dx");
                    >= ? 0x17d0 : ;
                    *(bp - 4) = *(bp - 4) + si - 0x40;
                } else {
                    if(dx != 0) {
                        goto L000017d3;
                    }
                    *(bp - 4) = 49153;
                    *(bp - 5) = 0;
                    goto L00001817;
                }
            }
        }
        *(bp - 2) = *(bp - 2) << 1;
        asm("adc ax,di");
        asm("adc bx,di");
        asm("adc cx,di");
        asm("adc dx,di");
        >= ? L00001809 : ;
        asm("rcr dx,1");
        *(bp - 4) = *(bp - 4) + 1;
        if(*(bp - 4) >= 0x4001) {
            goto L00001832;
        }
        if(*(bp - 4) <= 49153) {
            goto L0000183b;
        }
    }
L00001817:
    asm("cld");
    di = A4;
    *di = eax;
    di = di + 4;
    asm("xchg ax,bx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,cx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,dx");
    *di = eax;
    di = di + 4;
    *di = *(bp - 4);
    di = di + 4;
    *di = *(bp - 5);
    di = di + 1;
L0000182a:
    (restore)di;
    (restore)si;
    return;
L00001832:
    ch = 8;
    *(bp - 4) = 0x4001;
    goto L00001842;
L0000183b:
    ch = 0x10;
    *(bp - 4) = 49153;
L00001842:
    L00002B0D();
    *(bp - 5) = 0;
    bx = 0;
    cx = 0;
    dx = 0;
    goto L00001817;
}

/*	Procedure: 0x00001853 - 0x0000193B
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00001853(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    sp = bp - 2;
    (save)si;
    (save)di;
    asm("cld");
    si = A8;
    di = A6;
    *(bp - 2) = *(si + 0xa) ^ *(di + 0xa);
    bx = *(di + 8);
    ax = *(si + 8);
    if(ax < 0x4001) {
        if(bx >= 0x4001) {
            goto L000018b3;
        }
        if(ax >= bx) {
            asm("xchg ax,bx");
        }
        if(ax > 49153) {
            ax = ax + bx - 1;
            if(ax >= 0x4001) {
                goto L000018d1;
            }
            ax = ax + 1;
            if(ax > 49153) {
                goto L000018e4;
            }
            ch = 0x10;
            L00002B0D();
        }
        ax = 49153;
    } else {
        (save)di;
        bx = di;
        di = A4;
        ax = L00001603();
        (restore)di;
        < ? L000018e2 : ;
        if(*(di + 8) > 49153) {
            goto L000018d6;
L000018b3:
            (save)si;
            bx = 65535;
            si = di;
            di = A4;
            ax = L00001603();
            (restore)si;
            < ? L000018e2 : ;
            if(*(si + 8) > 49153) {
                goto L000018d6;
            }
        }
        di = A4;
        ax = L00000DBB();
        goto L00001934;
L000018d1:
        ch = 8;
        L00002B0D();
L000018d6:
        ax = 0x4001;
    }
    di = A4;
    cl = *(bp - 2);
    ax = L00000DA9();
    goto L00001934;
L000018e4:
    (save)ax;
    L00000DD4();
    asm("xchg si,di");
    L00000DD4();
    ax = L0000193C();
    *L000000D8 = *L000000D8 + 0x18;
    (restore)di;
    if(dx < 0) {
        si = si << 1;
        asm("rcl ax,1");
        asm("rcl bx,1");
        asm("rcl cx,1");
        asm("rcl dx,1");
    }
    si = si << 1;
    asm("adc ax,0x0");
    asm("adc bx,+0x0");
    asm("adc cx,+0x0");
    asm("adc dx,+0x0");
    if(!(di = di - 1)) {
        asm("rcr dx,1");
        di = di + 1;
    }
    if(di >= 0x4001) {
        goto L000018d1;
    }
    si = di;
    di = A4;
    *di = eax;
    di = di + 4;
    asm("xchg ax,bx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,cx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,dx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,si");
    *di = eax;
    di = di + 4;
    al = *(bp - 2);
    *di = 0;
    di = di + 4;
L00001934:
    (restore)di;
    (restore)si;
}

/*	Procedure: 0x0000193C - 0x00001A22
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L0000193C()
{
	/* unknown */ void  bp;
	/* unknown */ void  di;



    bp = *L000000D8;
    di = 0;
    cx = 0;
    si = 0;
    if(!( *(bp + 0xf) & 0x80)) {
        ecx = *bp & 65535;
        esi = *(bp + 2) & 65535;
    }
    if(!( *(bp + 3) & 0x80)) {
        cx = cx + *(bp + 0xc);
        asm("adc si,[bp+0xe]");
        asm("adc di,di");
        if(!( *(bp + 0xf) & 0x80)) {
            di = di - 1;
        }
    }
    bx = 0;
    ax = *(bp + 0xc);
    asm("mul word [bp+0x4]");
    cx = cx + ax;
    asm("adc si,dx");
    asm("adc di,+0x0");
    ax = *(bp + 0x10);
    if(ax != 0) {
        asm("mul word [bp+0x0]");
        cx = cx + ax;
        asm("adc si,dx");
        asm("adc di,+0x0");
        ax = *(bp + 0x10);
        asm("mul word [bp+0x2]");
        si = si + ax;
        asm("adc di,dx");
        asm("adc bx,+0x0");
    }
    ax = *(bp + 0xc);
    asm("mul word [bp+0x6]");
    si = si + ax;
    asm("adc di,dx");
    asm("adc bx,+0x0");
    ax = *(bp + 0xe);
    asm("mul word [bp+0x4]");
    si = si + ax;
    asm("adc di,dx");
    asm("adc bx,+0x0");
    ax = *(bp + 0x12);
    if(ax != 0) {
        asm("mul word [bp+0x0]");
        si = si + ax;
        asm("adc di,dx");
        asm("adc bx,+0x0");
    }
    cx = 0;
    (save)si;
    si = 0;
    ax = *(bp + 0xe);
    asm("mul word [bp+0x6]");
    di = di + ax;
    asm("adc bx,dx");
    asm("adc cx,+0x0");
    ax = *(bp + 0x10);
    if(ax != 0) {
        asm("mul word [bp+0x4]");
        di = di + ax;
        asm("adc bx,dx");
        asm("adc cx,+0x0");
        ax = *(bp + 0x10);
        asm("mul word [bp+0x6]");
        bx = bx + ax;
        asm("adc cx,dx");
        asm("adc si,+0x0");
    }
    ax = *(bp + 0x12);
    if(ax != 0) {
        asm("mul word [bp+0x2]");
        di = di + ax;
        asm("adc bx,dx");
        asm("adc cx,+0x0");
        asm("adc si,+0x0");
        ax = *(bp + 0x12);
        asm("mul word [bp+0x4]");
        bx = bx + ax;
        asm("adc cx,dx");
        asm("adc si,+0x0");
        ax = *(bp + 0x12);
        asm("mul word [bp+0x6]");
        cx = cx + ax;
        asm("adc si,dx");
    }
    dx = si;
    asm("xchg ax,di");
    (restore)si;
}

/*	Procedure: 0x00001A23 - 0x00001CC4
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00001A23(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    sp = bp - 8;
    bx = A8;
    (save) *(bx + 6);
    (save) *(bx + 4);
    (save) *(bx + 2);
    (save) *bx;
    (save)0;
    (save)si;
    (save)di;
    asm("cld");
    di = A6;
    *(bp - 3) = *(bx + 0xa) ^ *(di + 0xa);
    si = *(di + 8);
    ax = *(bx + 8);
    if(si < 0x4001) {
        if(ax >= 0x4001) {
            goto L00001aa9;
        }
        if(si > 49153) {
            if(ax > 49153) {
                ax = ax - si;
                if(ax >= 0x4001) {
                    goto L00001a7b;
                }
                if(ax > 49153) {
                    goto L00001ab8;
                }
                ch = 0x10;
                L00002B0D();
            }
L00001a76:
            ax = 49153;
            goto L00001a87;
L00001a7b:
            ch = 8;
        } else {
            ch = 4;
        }
        L00002B0D();
L00001a84:
        ax = 0x4001;
L00001a87:
        cl = *(bp - 3);
        di = A4;
        ax = L00000DA9();
L00001a90:
    } else {
        si = di;
        di = A4;
        ax = L00001603();
        < ? L00001a90 : ;
        if(*(bx + 8) < 0x4001) {
            goto L00001a76;
        }
        ax = L00000DBB();
        goto L00001a90;
L00001aa9:
        si = bx;
        bx = 65535;
        di = A4;
        ax = L00001603();
        < ? L00001a90 : ;
        goto L00001a84;
L00001ab8:
        *(bp - 2) = ax;
        cx = 0;
        dx = *(bp - 0xa);
        si = *(di + 6);
        if(si <= dx) {
            dx = dx - si;
        }
        ax = *(bp - 0xc);
        dx = si / si % si / si;
        asm("adc ax,0x1");
        asm("adc cl,ch");
        *(bp - 4) = cl;
        *(bp - 6) = ax;
        (save)ax;
        ax = *di;
        bx = *(di + 2);
        if(!(ecx = 1 & 65535)) {
            dx = *(di + 4);
            *(bp - 0x10) = *(bp - 0x10) - ax;
            asm("sbb [bp-0xe],bx");
            asm("sbb [bp-0xc],dx");
            asm("sbb [bp-0xa],si");
            asm("loop 0x1ae5");
        }
        (restore)si;
        asm("mul si");
        *(bp - 0x12) = ax;
        asm("xchg ax,dx");
        asm("xchg ax,bx");
        asm("mul si");
        bx = bx + ax;
        asm("adc cx,dx");
        ax = *(di + 4);
        asm("mul si");
        cx = cx + ax;
        asm("adc dx,+0x0");
        asm("xchg ax,dx");
        asm("xchg ax,si");
        asm("mul word [di+0x6]");
        ax = ax + si;
        asm("adc dx,+0x0");
        bx = bx - *(bp - 0x10);
        asm("sbb cx,[bp-0xe]");
        asm("sbb ax,[bp-0xc]");
        asm("sbb dx,[bp-0xa]");
        *(bp - 0x10) = bx;
        *(bp - 0xe) = cx;
        *(bp - 0xc) = ax;
        si = *(di + 6) / *(di + 6);
        dx = si % si;
        asm("xchg ax,cx");
        dx = si / si % si / si;
        dx = 0;
        asm("stc");
        asm("adc ax,dx");
        asm("adc cx,dx");
        asm("sbb [bp-0x6],cx");
        asm("sbb byte [bp-0x4],0x0");
        (save)ax;
        ax = *di;
        bx = *(di + 2);
        if(!( *(bp - 8) = dx - ax)) {
            dx = *(di + 4);
            *(bp - 0x12) = *(bp - 0x12) - ax;
            asm("sbb [bp-0x10],bx");
            asm("sbb [bp-0xe],dx");
            asm("sbb [bp-0xc],si");
            asm("loop 0x1b50");
        }
        (restore)si;
        asm("mul si");
        asm("xchg ax,dx");
        asm("xchg ax,bx");
        asm("mul si");
        bx = bx + ax;
        asm("adc cx,dx");
        ax = *(di + 4);
        asm("mul si");
        cx = cx + ax;
        asm("adc dx,+0x0");
        asm("xchg ax,dx");
        asm("xchg ax,si");
        asm("mul word [di+0x6]");
        ax = ax + si;
        asm("adc dx,+0x0");
        bx = bx - *(bp - 0x12);
        asm("sbb cx,[bp-0x10]");
        asm("sbb ax,[bp-0xe]");
        asm("sbb dx,[bp-0xc]");
        *(bp - 0x12) = bx;
        *(bp - 0x10) = cx;
        *(bp - 0xe) = ax;
        si = *(di + 6) / *(di + 6);
        dx = si % si;
        asm("xchg ax,cx");
        dx = si / si % si / si;
        dx = 0;
        asm("stc");
        asm("adc ax,dx");
        asm("adc cx,dx");
        *(bp - 0xa) = ax;
        asm("adc [bp-0x6],dx");
        asm("adc [bp-0x4],dl");
        asm("xchg ax,si");
        dx = *(di + 2);
        asm("xchg ax,dx");
        bx = *(di + 4);
        if(!( *(bp - 8) = *(bp - 8) + cx)) {
            *(bp - 0x12) = *(bp - 0x12) - ax;
            asm("sbb [bp-0x10],bx");
            asm("sbb [bp-0xe],dx");
            asm("loop 0x1bb7");
        }
        asm("mul si");
        asm("xchg ax,dx");
        asm("xchg ax,bx");
        asm("mul si");
        bx = bx + ax;
        asm("adc cx,dx");
        ax = *(di + 6);
        asm("mul si");
        ax = ax + cx;
        asm("adc dx,+0x0");
        bx = bx - *(bp - 0x12);
        asm("sbb ax,[bp-0x10]");
        asm("sbb dx,[bp-0xe]");
        *(bp - 0x12) = bx;
        *(bp - 0x10) = ax;
        si = *(di + 6);
        asm("adc si,+0x0");
        if(!(si = *(di + 4) + *(di + 4))) {
            asm("xchg bx,dx");
        } else {
            bx = bx << 1;
            asm("rcl ax,1");
            asm("rcl dx,1");
            dx = si % si;
            asm("xchg ax,bx");
            dx = si / si % si / si;
            bx = bx >> 1;
            asm("rcr ax,1");
            asm("rcr dh,1");
        }
        si = 65535;
        bx = !bx;
        ax = !ax;
        dh = ~L0000FFFF;
        asm("cmc");
        asm("adc ax,0x0");
        asm("adc bx,[bp-0xa]");
        asm("adc cx,[bp-0x8]");
        asm("adc si,[bp-0x6]");
        asm("adc dl,[bp-0x4]");
        dl = dl >> 1;
        if(!(si = si / si)) {
            asm("rcr si,1");
            asm("rcr cx,1");
            asm("rcr bx,1");
            asm("rcr ax,1");
            asm("rcr dh,1");
            *(bp - 2) = *(bp - 2) + 1;
        }
        di = 0;
        asm("adc ax,di");
        asm("adc bx,di");
        asm("adc cx,di");
        asm("adc si,di");
        asm("adc dl,0x0");
        dx = *(bp - 2);
        if(!(dh = dh + dh)) {
            si = 32768;
            dx = dx + 1;
        }
        if(dx >= 0x4001) {
            goto L00001a84;
        }
        di = A4;
        asm("cld");
        *di = eax;
        di = di + 4;
        asm("xchg ax,bx");
        *di = eax;
        di = di + 4;
        asm("xchg ax,cx");
        *di = eax;
        di = di + 4;
        asm("xchg ax,si");
        *di = eax;
        di = di + 4;
        asm("xchg ax,dx");
        *di = eax;
        di = di + 4;
        al = *(bp - 3);
        asm("cbw");
        *di = eax;
        di = di + 4;
    }
    (restore)di;
    (restore)si;
    return;
    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    ax = *(si + 8);
    if(ax > 49153) {
        if(ax >= 0x4001) {
            goto L00001caa;
        }
        if(*(si + 0xa) != 0) {
            goto L00001cb4;
        }
        L00000DD4();
        L00001CC5();
        di = *L000000D8;
        (save)si;
        (save)di;
        (save)si;
        L00001A23();
        (save)di;
        ax = L0000168E(si, si);
        *(si + 8) = *(si + 8) - 1;
        *L000000D8 = *L000000D8 + 0xc;
    }
L00001ca6:
    (restore)di;
    (restore)si;
    return;
L00001caa:
    bx = 65535;
    di = si;
    ax = L00001603();
    goto L00001ca6;
L00001cb4:
    ch = 1;
    L00002B0D();
    di = si;
    ax = L00000D94();
    *(di + 8) = 0x4001;
    goto L00001ca6;
}

/*	Procedure: 0x00001CC5 - 0x00001D3C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00001CC5()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = *L000000D8;
    bx = *(di + 8);
    dx = *(di + 6);
    ax = *(di + 4);
    cx = *(di + 2);
    bx = bx >> 1;
    >= ? L00001ce2 : ;
    bx = bx + 1;
    dx = dx >> 1;
    asm("rcr ax,1");
    asm("rcr cx,1");
    if(dx < -2) {
        (save)bx;
        (save)cx;
        cx = dx;
        bx = ax;
        si = dx;
        asm("stc");
        for(asm("rcr si,1");; 1; ax = bx) {
            si = si / si;
            dx = si % si;
            si = si - 1;
            if(si <= ax) {
                goto L00001d0b;
            }
            si = si + 1 + ax;
            asm("rcr si,1");
            dx = cx;
        }
    }
    asm("stc");
    asm("rcr dx,1");
    asm("rcr ax,1");
    goto L00001d22;
L00001d0b:
    si = si + 1;
    if(si < ax) {
        asm("xchg ax,si");
    }
    (restore)cx;
    (restore)bx;
    asm("xchg ax,cx");
    si = si / si;
    dx = si % si;
    dx = 0;
    si = si + cx;
    asm("rcr si,1");
    asm("rcr ax,1");
    asm("adc ax,dx");
    asm("adc dx,si");
L00001d22:
    asm("cld");
    cx = 0;
    asm("xchg ax,cx");
    *di = eax;
    di = di + 4;
    *di = eax;
    di = di + 4;
    asm("xchg ax,cx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,dx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,bx");
    *di = eax;
    di = di + 4;
    *di = 0;
    di = di + 4;
    return(0);
    *(bp + si) = *(bp + si) + al;
    ax = ax + 1;
    dx = dx + 1;
    *(bp + di) = *(bp + di) + ax;
    cx = cx + 1;
    bx = bx + 1;
}

/* DEST BLOCK NOT FOUND: 00001e2f -> 00001ec3 */
/*	Procedure: 0x00001D3D - 0x00001E44
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D3D()
{



    (save) *(di + 0xa);
    sp = bp - 6;
    (save)si;
    (save)di;
    ax = *di;
    bx = *(di + 2);
    cx = *(di + 4);
    dx = *(di + 6);
    *(bp - 4) = 0;
    if(!(di = *(di + 8) - *(si + 8))) {
        goto L00001db4;
L00001d63:
        di = di + 1;
        goto L00001da3;
L00001d66:
        if(di = di - 1) {
            goto L00001d63;
        }
        *(bp - 4) = *(bp - 4) << 1;
        ax = ax << 1;
        asm("rcl bx,1");
        asm("rcl cx,1");
        asm("adc dx,dx");
        < ? L00001d91 : ;
        >= ? 0x1d66 : ;
    }
    if(dx <= *(si + 6)) {
        < ? L00001d66 : ;
        if(cx <= *(si + 4)) {
            < ? L00001d66 : ;
            if(bx <= *(si + 2)) {
                < ? L00001d66 : ;
                if(ax < *si) {
                    goto L00001d66;
                }
            }
        }
    }
    *(bp - 4) = *(bp - 4) + 1;
    ax = ax - *si;
    asm("sbb bx,[si+0x2]");
    asm("sbb cx,[si+0x4]");
    asm("sbb dx,[si+0x6]");
    if(di > 0) {
        goto L00001d66;
    }
L00001da3:
    if(dx < 0) {
        == ? L00001ded : ;
L00001da9:
        ax = ax << 1;
        asm("rcl bx,1");
        asm("rcl cx,1");
        asm("adc dx,dx");
        if(di = di - 1) {
            goto L00001da9;
        }
    }
L00001db4:
    di = di + *(si + 8);
L00001db7:
    (save)di;
    di = *(bp - 0xa);
    *di = eax;
    di = di + 4;
    asm("xchg ax,bx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,cx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,dx");
    *di = eax;
    di = di + 4;
    (restore)ax;
    *di = eax;
    di = di + 4;
    al = *(bp - 2);
    asm("cbw");
    *di = eax;
    di = di + 4;
    *L000000D5 = *L000000D5 & 0xbc;
    di = 7;
    ax = *(bp - 4);
    if(*(bp - 2) == 1) {
        ax = ~ax;
    }
    di = di & ax;
    *L000000D5 = *L000000D5 | *%cs:di+0x1025];
    (restore)di;
    (restore)si;
    return;
    asm("xchg dx,cx");
    asm("xchg cx,bx");
    asm("xchg ax,bx");
    di = di - 0x10;
    if(dx != 0) {
        goto L00001da3;
    }
    asm("xchg dx,cx");
    asm("xchg cx,bx");
    di = di - 0x10;
    asm("xchg dx,cx");
    di = di - 0x10;
    if(dx != 0) {
        goto L00001da3;
    }
    di = 49153;
    dx = 0;
    cx = 0;
    bx = 0;
    ax = 0;
    goto L00001db7;
    if(dx = *(si + 6) & 32767 | *si | *(si + 2) | *(si + 4)) {
        goto L00001e5b;
    }
L00001e27:
    ch = 1;
    L00002B0D();
    ax = 0x4500;
    goto L00001ec3;
    if(dx = *(di + 6) & 32767 | *di | *(di + 2) | *(di + 4)) {
        goto L00001e27;
    }
    goto L00001e61;
}

/* DEST BLOCK NOT FOUND: 00001e59 -> 00001e16 */
/* DEST BLOCK NOT FOUND: 00001e5f -> 00001e32 */
/*	Procedure: 0x00001E45 - 0x00001F04
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 8
 */

L00001E45(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    bx = *(A4 + 8);
    if(*(A6 + 8) >= 0x4001) {
        goto L00001e16;
    }
    if(bx >= 0x4001) {
        goto L00001e32;
    }
    dx = ax;
    if(ax <= bx) {
        dx = bx;
    }
    if(dx > 49153) {
        cl = *(si + 0xa);
        if(cl < *(di + 0xa)) {
            goto L00001ec0;
        }
        > ? L00001eb6 : ;
        if(ax < bx) {
            goto L00001eb1;
        }
        > ? L00001ebb : ;
        if(*(si + 6) != *(di + 6)) {
            goto L00001eaf;
        }
        if(ch = 3 & *L000000D7) {
            goto L00001ecd;
        }
        if(*(si + 4) != *(di + 4) || *(si + 2) != *(di + 2)) {
            goto L00001eaf;
        }
        if(ch == 2) {
            goto L00001eef;
        }
        if(*si != *di) {
            goto L00001eaf;
        }
    }
L00001eaa:
    ax = 0x4000;
    goto L00001ec3;
L00001eaf:
    > ? L00001ebb : ;
L00001eb1:
    if(cl == 0) {
L00001eb6:
        ax = 0x100;
        goto L00001ec3;
L00001ebb:
        if(cl != 0) {
            goto L00001eb6;
        }
    }
L00001ec0:
    ax = 0;
L00001ec3:
    *L000000D5 = ah;
    return;
L00001ecd:
    bx = *(si + 2);
    asm("sbb bx,[di+0x2]");
    bx = *(si + 4);
    asm("sbb bx,[di+0x4]");
    if(!(bx = *si - *di)) {
        if(bx = ~bx & -128) {
            goto L00001eaa;
        }
        goto L00001eb1;
    }
    if(bx = bx & -128) {
        goto L00001eaa;
    }
    goto L00001ebb;
L00001eef:
    if(!(bx = *si - *di)) {
        if(bh = ~bx & 0xfc) {
            goto L00001eaa;
        }
        goto L00001eb1;
    }
    if(bh = bh & 0xfc) {
        goto L00001eaa;
    }
    goto L00001ebb;
}

/*	Procedure: 0x00001F05 - 0x00001F41
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001F05()
{



    ax = 0x4000;
    if(*(si + 8) > 49153) {
        if(*(si + 8) >= 0x4001) {
            goto L00001f27;
        }
L00001f16:
        ax = 0x100;
        if(*(si + 0xa) != 1) {
            ax = 0;
        }
    }
L00001f22:
    *L000000D5 = ah;
    return;
L00001f27:
    if(dx = *(si + 6) & 32767 | *si | *(si + 2) | *(si + 4)) {
        goto L00001f16;
    }
    ch = 1;
    L00002B0D();
    ax = 0x4500;
    goto L00001f22;
}

/*	Procedure: 0x00001F42 - 0x00001F7C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001F42()
{



    ax = 0x4000;
    if(*(si + 8) > 49153) {
        if(*(si + 8) >= 0x4001) {
            goto L00001f64;
        }
        ax = 0x400;
L00001f56:
        if(*(si + 0xa) == 1) {
            ax = ax | 0x200;
        }
    }
    *L000000D5 = ah;
    return;
L00001f64:
    ax = 0x500;
    if(dx = *(si + 6) & 32767 | *si | *(si + 2) | *(si + 4)) {
        goto L00001f56;
    }
    ax = 0x100;
    goto L00001f56;
}

/*	Procedure: 0x00001F7D - 0x00002084
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00001F7D()
{
	/* unknown */ void  bp;
	/* unknown */ void  si;
	/* unknown */ void  di;



    bp = *L000000D8;
    ax = *bp;
    bx = *(bp + 2);
    cx = *(bp + 4);
    dx = *(bp + 6);
    di = 0;
    si = *(bp + 8);
    if(si != 49153) {
        if(si <= -16) {
            edi = ax & 65535;
            ax = bx;
            bx = cx;
            cx = dx;
            dx = 0;
            si = si + 0x10;
        }
        while(!(si = si + 1)) {
            dx = dx >> 1;
            asm("rcr cx,1");
            asm("rcr bx,1");
            asm("rcr ax,1");
            asm("rcr di,1");
        }
    }
    di = di << 1;
    di = 0;
    asm("adc ax,di");
    asm("adc bx,di");
    asm("adc cx,di");
    asm("adc dx,di");
    *bp = ax;
    *(bp + 2) = bx;
    *(bp + 4) = cx;
    *(bp + 6) = dx;
    bx = di;
    cx = di;
    si = di;
    if(!( *(bp + 3) & 0x80)) {
        bx = *bp;
        cx = *(bp + 2);
        bx = bx << 1;
        asm("rcl cx,1");
    }
    ax = *bp;
    asm("mul word [bp+0x4]");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    bx = cx;
    cx = si;
    si = 0;
    ax = *(bp + 2);
    asm("mul word [bp+0x4]");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    ax = *bp;
    asm("mul word [bp+0x6]");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    bx = bx << 1;
    asm("adc cx,di");
    asm("adc si,di");
    bx = cx;
    cx = si;
    si = 0;
    ax = *(bp + 4);
    asm("mul ax");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    ax = *(bp + 6);
    asm("mul word [bp+0x2]");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    bx = bx + ax;
    asm("adc cx,dx");
    asm("adc si,di");
    ax = *(bp + 6);
    asm("mul word [bp+0x4]");
    cx = cx + ax;
    asm("adc si,dx");
    asm("adc di,di");
    cx = cx + ax;
    asm("adc si,dx");
    asm("adc di,+0x0");
    ax = *(bp + 6);
    asm("mul ax");
    si = si + ax;
    asm("adc di,dx");
    *bp = bx;
    *(bp + 2) = cx;
    *(bp + 4) = si;
    *(bp + 6) = di;
    *(bp + 0xa) = 0;
    *(bp + 8) = 0;
}

/*	Procedure: 0x00002085 - 0x00002125
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002085()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    (save)ds;
    (save)es;
    al = 0xc;
    asm("mul byte [bp+0x6]");
    ax = ax - 0xc;
    asm("xchg ax,si");
    si = si + *(bp + 4);
    L00000DEE();
    for(di = si; !( *(bp + 6) = *(bp + 6) - 1); (restore)bp) {
        (save)di;
        di = *L000000D8;
        *(di + 0xa) = *(di + 0xa) ^ *(di + 0x16);
        *di = L0000193C();
        *(di + 2) = bx;
        *(di + 4) = cx;
        *(di + 6) = dx;
        (restore)di;
        di = di - 0xc;
        (save)bp;
        bp = *L000000D8;
        bx = *%cs:di];
        cx = *%cs:di+0x2];
        dx = *%cs:di+0x4];
        si = *%cs:di+0x6];
        al = *%cs:di+0xa];
        if(al == *(bp + 0xa)) {
            *bp = *bp + bx;
            asm("adc [bp+0x2],cx");
            asm("adc [bp+0x4],dx");
            asm("adc [bp+0x6],si");
            (restore)bp;
            continue;
        }
        asm("sbb cx,[bp+0x2]");
        asm("sbb dx,[bp+0x4]");
        asm("sbb si,[bp+0x6]");
        if(!(bx = bx - *bp)) {
            si = !si;
            dx = !dx;
            cx = !cx;
            bx = ~bx;
            asm("cmc");
            asm("adc cx,+0x0");
            asm("adc dx,+0x0");
            asm("adc si,+0x0");
            al = al ^ 1;
        }
        *bp = bx;
        *(bp + 2) = cx;
        *(bp + 4) = dx;
        *(bp + 6) = si;
        *(bp + 0xa) = al;
    }
    si = *L000000D8;
    asm("cld");
    eax = *esi;
    esi = esi + 4;
}

/* DEST BLOCK NOT FOUND: 00002232 -> 00002240 */
stack space not deallocated on return
/*	Procedure: 0x00002126 - 0x0000223B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002126()
{



    asm("xchg ax,bx");
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,cx");
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,dx");
    eax = *esi;
    esi = esi + 4;
    asm("xchg ax,di");
    eax = *esi;
    esi = esi + 4;
    eax = *esi;
    esi = esi + 4;
    *L000000D8 = si;
    asm("xchg si,di");
    di = 0;
    if(al == 1) {
        si = !si;
        dx = !dx;
        cx = !cx;
        bx = ~bx;
        asm("cmc");
        asm("adc cx,di");
        asm("adc dx,di");
        asm("adc si,di");
    } else {
        asm("stc");
        asm("rcr si,1");
        asm("rcr dx,1");
        asm("rcr cx,1");
        asm("rcr bx,1");
        asm("adc bx,di");
        asm("adc cx,di");
        asm("adc dx,di");
        asm("adc si,di");
        di = di + 1;
    }
    ax = *L000000D8;
    asm("xchg ax,di");
    asm("xchg ax,bx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,cx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,dx");
    *di = eax;
    di = di + 4;
    asm("xchg ax,si");
    *di = eax;
    di = di + 4;
    asm("xchg ax,bx");
    *di = eax;
    di = di + 4;
    *di = 0;
    di = di + 4;
    (restore)es;
    (restore)ds;
    (restore)di;
    (restore)si;
    (restore)bp;
    return(0);
    *(bx + si) = *(bx + si) | al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    al = al - *(bx + si);
    *(bx + di) = *(bx + di) + al;
    *(bp + di) = *(bp + di) + al;
    *(bx + si) = *(bx + si) + al;
    *(bp + di + 0xe4) = *(bp + di + 0xe4) + 0xaa;
    ax = (al & 0x22 & *(bp + si) & *(bp + si)) + *(bx + si) | 0xd0;
    *(bx + di) = *(bx + di) + al;
    *(bp + 8) = *(bp + 8) + ch;
    bx = bx - 1;
    asm("Unknown opcode 0xc7");
    bp :: *L00000000;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 0x16) = 0x99;
    0 = *(bx + si) * ax;
    *(bx + si) = *(bx + si) + al;
    *(bx + di) = *(bx + di) + al;
    *si = *si + cl;
    bp = bp + 1;
    asm("xchg ax,dx");
    al = 0;
    0;
    0;
    0;
    ch = ch + dl;
    bp = bp + 1;
    asm("salc");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + di) = *(bx + di) + al;
    *(bx + si) = *(bx + si) + cl;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    if(!( *(bx + si + 65535) = *(bx + si + 65535) + cl)) {
    }
    *(bx + di) = *(bx + di) + al;
    *(bp + 43674) = *(bp + 43674) + ah;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    al = al | *(bx + si);
    *(bx + si) = *(bx + si) + al;
    *(bx - 0x1a) = *(bx - 0x1a) + bh;
    al = al + 0x5b;
    (restore)bx;
    *(bx + si) = *(bx + si) + 5;
    *(bx + di) = *(bx + di) + 5;
    bh = bh + ch;
    asm("%e wait");
    *(bp + si) = *(bp + si) + bx;
    al = *L00000001;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("sbb ax,0xdcce");
    asm("xchg ax,bx");
    asm("lahf");
    *(bx + si) = *(bx + si) + al;
    *(bx + di) = *(bx + di) + al;
    *bx = *bx + cl;
    cl = 0x4b;
    asm("Unknown opcode 0xf7");
    *(bx + si) = *(bx + si) | al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    bx = bx + ax;
    asm("jpo 0x2240");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ax;
}

/*	Procedure: 0x0000223C - 0x00002241
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000223C()
{



    L00000DD4();
    ax = L00001F7D();
}

stack space not deallocated on return
/*	Procedure: 0x00002242 - 0x0000225C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002242()
{



    (save) *%cs:0x1468];
    (save)0x146a;
    L00002085();
    (save) *L000000D8;
    *L000000D8 = *L000000D8 + 0xc;
    return(L00001853(si, si));
}

/*	Procedure: 0x0000225D - 0x0000225F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000225D()
{



    L00001F7D();
}

stack space not deallocated on return
/*	Procedure: 0x00002260 - 0x0000226C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002260()
{



    return(L00002085(0x14cc, *%cs:0x14ca]));
}

/*	Procedure: 0x0000226D - 0x00002362
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000226D()
{



    L00000DD4();
    L00001F7D();
    L00000E1F();
    L00002242();
    return(L00002260());
    ax = ax ^ 0x68c2;
    *(bp + si + 0xfda) = *(bp + si + 0xfda) & sp;
    sp = bp;
    (restore)bp;
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) | al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    (save)di;
    (save)bp;
    (save)bp;
    (save)bp;
    (save)bp;
    (save)bp;
    (save)bp;
    *(bx + si) = *(bx + si) + ax;
    *(bx + di) = *(bx + di) + al;
    *(bp + 0x3332) = *(bp + 0x3332) + bh;
    si = si ^ *(bp + di);
    ax = ax ^ *(bp + di);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(di + 0x1e) = *(di + 0x1e) + bh;
    cx = cx - 1;
    asm("xchg ax,dx");
    al = al & 9;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    sp = 50942;
    if(!( *(bx + si) = *(bx + si) + ax)) {
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(si - 1) = *(si - 1) + bl;
        bp = ss;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + ax;
        asm("fdivr dword [bp+di+0x13a]");
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
    }
    *(bx + si) = *(bx + si) + al;
    cl = cl | *si;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    bh = bh + ah;
    asm("std");
    *(bx + si) = *(bx + si) + 1;
    *(di + 54948) = *(di + 54948) + bh;
    asm("jpo 0x22ea");
    asm("%f pop sp");
    bl = 0xff;
    *(0xff + si) = *(0xff + si) + 1;
    asm("cld");
    if(!( *(di + 0x4785) = *(di + 0x4785) + dh)) {
        asm("adc [bx+di+0x0],sp");
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si + 1) = *(bx + si + 1) + al;
        *(bx + si) = *(bx + si) + al;
        asm("pushf");
        asm("cli");
        asm("%f mov al,0xb2");
        asm("sbb ax,0xe607");
        asm("Unknown opcode 0xfe");
        *(bx + si) = *(bx + si) + 1;
        *(si + 0x64fa) = *(si + 0x64fa) + bl;
        al = 0xb2;
        asm("sbb ax,0xe607");
        asm("Unknown opcode 0xff");
        *(bx + si) = *(bx + si) + 1;
        ch = ch + dh;
        bx = 0x44b;
        si = si + 1;
        (save)si;
    }
    *si & bp;
    *(bx + si) = *(bx + si) + al;
    asm("out 0x6e,al");
    *bx = (frestore);
    bp = 64009;
    *(bx + si) = *(bx + si) + al;
    di = bp + di + 0x35;
    bp = 33883;
    asm("Unknown opcode 0xdd");
    bh = bh / bh;
    edx = bh % bh;
    *(bx + si) = *(bx + si) + 1;
    *(bx - 0x2b) = *(bx - 0x2b) + bh;
    *(bp + di - 0x34) = *(bp + di - 0x34) ^ 0;
    *(bx + si) = *(bx + si) + (ax ^ 56066);
    *(di - 0x75) = *(di - 0x75) + dl;
}

/*	Procedure: 0x00002363 - 0x00002415
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002363()
{



    sp = bp - 2;
    (save)si;
    (save)di;
    (save)si;
    L00001A23(si, di);
    *(bp - 2) = 0;
    for(di = 0x15db; *(bp - 2) < 3; di = di + 0xc) {
        asm("xchg si,di");
        L00000DEE();
        asm("xchg di,si");
        *L000000D8 = *L000000D8 + 0xc;
        if(L00001E45( *L000000D8, si) != 0) {
            break;
        }
        *(bp - 2) = *(bp - 2) + 1;
    }
    if(*(bp - 2) == 0) {
        ax = L00002416();
    } else {
        bx = *(bp - 2) - 1;
        bl = *%cs:bx+0x2];
        *(bp - 2) = bx;
        di = *(bp - 2) + 0x162f;
        asm("xchg si,di");
        L00000DEE();
        asm("xchg di,si");
        (save)si;
        di = *L000000D8;
        (save)di;
        ax = di - 0xc;
        *L000000D8 = ax;
        (save) *L000000D8;
        L0000168A();
        (save)si;
        L00001853(si, di);
        L00000D2E();
        (save)di;
        L0000168E(si, si);
        (save) *L000000D8;
        L00001A23(si, si);
        *L000000D8 = *L000000D8 + 0x18;
        L00002416();
        di = *(bp - 2) + 0x160b;
        asm("xchg si,di");
        L00000DEE();
        asm("xchg di,si");
        (save) *L000000D8;
        ax = L0000168E(si, si);
        *L000000D8 = *L000000D8 + 0xc;
    }
    (restore)di;
    (restore)si;
}

/* DEST BLOCK NOT FOUND: 000024d4 -> 000024f5 */
/*	Procedure: 0x00002416 - 0x000024EA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00002416()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    ax = L00000DD4();
    if(*(si + 8) <= -32) {
        di = si;
        L00000E0C();
    } else {
        di = *L000000D8;
        *(di + 8) = *(di + 8) + 3;
        ax = L00001F7D();
        (save) *%cs:0x1579];
        (save)0x157b;
        ax = L00002085();
        (save)di;
        ax = L00001853(si, si);
        *L000000D8 = *L000000D8 + 0xc;
    }
    return;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bp + di) = *(bp + di) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ax = ax + 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ax & 43690;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    al = al | *(bx + si);
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 0x55) = *(bx + si + 0x55) + bh;
    (save)bp;
    (save)bp;
    (save)bp;
    (save)bp;
    (save)bp;
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + al;
    *L00002223 = *L00002223 + ah;
    ah = ah & *(bp + si) & *(bp + si);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *si = *si + bl;
    bx = bx - ax;
    asm("Unknown opcode 0x82");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ah = ax - 0x2d8 + bh;
    asm("stc");
    al = ax ^ *(bx + si + 3) ^ 0;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *si = *si + dl;
    (save)dx;
    si = si + *si;
    ax = ax + 1 + *(bx + si);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *L0000C76C = *L0000C76C + bl;
    bp :: *L00000000;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(si - 0x50) = *(si - 0x50) + cl;
    sp = bp;
    (restore)bp;
    di = di - 1;
    al = al + *(bx + si);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("xchg ax,cx");
    (save)cs;
    asm("out 0x1a,al");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    (save)cx;
    if(*(bx + si) = *(bx + si) + al) {
        goto L000024f5;
    }
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ch = ch + al;
    al = al - 0xb;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(di + 0x56) = *(di + 0x56) + dl;
}

/* DEST BLOCK NOT FOUND: 000025b5 -> 00002613 */
stack space not deallocated on return
/*	Procedure: 0x000024EB - 0x000025E2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000024EB()
{
	/* unknown */ void  bp;
	/* unknown */ void  si;
	/* unknown */ void  di;



    bp = *L000000D8;
    di = bp - 0xc;
    *L000000D8 = di;
    L00000D83();
    (save)di;
    ax = L00001853(si, si);
    *L000000D8 = bp;
    di = *(si + 8);
    if(di > -32) {
        ax = *si;
        bx = *(si + 2);
        cx = *(si + 4);
        dx = *(si + 6);
        if(!(di = di + 1)) {
L0000251c:
            dx = dx >> 1;
            asm("rcr cx,1");
            asm("rcr bx,1");
            asm("rcr ax,1");
            if(di = di + 1) {
                goto L0000251c;
            }
            asm("adc ax,0x0");
            asm("adc bx,+0x0");
            asm("adc cx,+0x0");
            asm("adc dx,+0x0");
        }
        *L000000D8 = *L000000D8 - 0xc;
        asm("cld");
        di = *L000000D8;
        *di = eax;
        di = di + 4;
        asm("xchg ax,bx");
        *di = eax;
        di = di + 4;
        asm("xchg ax,cx");
        *di = eax;
        di = di + 4;
        asm("xchg ax,dx");
        *di = eax;
        di = di + 4;
        *di = 0;
        di = di + 4;
        *di = 0;
        di = di + 4 - 0xc;
        (save) *%cs:0x173d];
        (save)0x173f & 65535;
        L00002085();
        (save) *L000000D8;
        ax = L00001853(si, si);
        *L000000D8 = *L000000D8 + 0xc;
    }
    return;
    bx = 0x17f0;
    (restore)sp;
    *(bp + di) = *(bp + di) - di;
    *di = al;
    di = di + 1;
    *(0x17f0 + si) = *(0x17f0 + si) + 1;
    *(bx + si) = *(bx + si) | 1;
    *(bx + si) = *(bx + si) + 1;
    *(bx + si) = *(bx + si) + 1;
    *(bx + si) = *(bx + si) + 1;
    *(bx + si) = *(bx + si) + 1;
    *(bx + si) = *(bx + si) + 1;
    *(bx + si) = *(bx + si) + 1;
    (save)0x5555;
    (save)bp;
    (save)bp;
    (save)bp;
    (save)bp;
    *(bx + si) = *(bx + si) + 1;
    dx = 0x3334;
    si = si ^ *(bp + di) ^ *(bp + di);
    *(bx + si) = *(bx + si) + 1;
    *(bx + si) = *(bx + si) + 1;
    *(bx + 0x48c3) = *(bx + 0x48c3) + 1;
    asm("xchg ax,dx");
    al = (al & 0x49) + *(bx + si);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    bp = bp - 1;
    (restore)bp;
    if(!(al = al & bh)) {
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        goto L00002613;
        if(!(al = al & 0x56)) {
            *(bx + si) = *(bx + si) + al;
        }
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(di + 45548) :: bp;
        asm("adc ax,[bx+si]");
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
    }
    *(bx + si) = *(bx + si) + al;
    asm("std");
    asm("salc");
    *bx = *bx | 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(di + 58490) = *(di + 58490) + dh;
    asm("adc [bx+si],al");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(di - 0x75) = *(di - 0x75) + dl;
}

/*	Procedure: 0x000025E3 - 0x000026D2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000025E3()
{



    (save) *(di + 8);
    (save)si;
    (save)di;
    ax = *di;
    bx = *(di + 2);
    cx = *(di + 4);
    dx = *(di + 6);
    if(dx <= 46341) {
        ax = ax << 1;
        asm("rcl bx,1");
        asm("rcl cx,1");
        asm("rcl dx,1");
        si = 0;
        *(bp - 2) = *(bp - 2) - 1;
    } else {
        dx = !dx;
        cx = !cx;
        bx = !bx;
        ax = ~ax;
        asm("cmc");
        asm("adc bx,+0x0");
        asm("adc cx,+0x0");
        asm("adc dx,+0x0");
        si = 1;
    }
    di = 0;
    do {
        if(dx != 0) {
            goto L00002640;
        }
        asm("xchg ax,bx");
        asm("xchg ax,cx");
        asm("xchg ax,dx");
        di = di - 0x10;
    } while(di > -64);
    di = *L000000D8;
    L00000D94();
    goto L0000266d;
L00002640:
    if(!( *L000000D8 = *L000000D8 - 0xc)) {
        do {
            ax = ax << 1;
            asm("rcl bx,1");
            asm("rcl cx,1");
            asm("adc dx,dx");
        } while(di = di - 1);
    }
    (save)si;
    (save)di;
    (save)dx;
    (save)cx;
    (save)bx;
    (save)ax;
    si = sp;
    L000026D3();
    si = 0x1859;
    L00000DEE();
    si = *L000000D8;
    (save)si;
    L00001853(si, sp);
L0000266d:
    si = bp - 2;
    *L000000D8 = *L000000D8 - 0xc;
    di = *L000000D8;
    L00000E53();
    (save)di + 0xc;
    L0000168E(di, di);
    (save)di;
    ax = L00001853( *(bp - 4), *(bp - 4));
    *L000000D8 = *L000000D8 + 0x18;
    (restore)di;
    (restore)si;
    return;
    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    si = di;
    L00000DD4();
    si = *L000000D8;
    L000026D3();
    si = 0x1859;
    L00000DEE();
    si = *L000000D8;
    (save)si;
    si = si + 0xc;
    L00001853(si, si);
    (save)si;
    ax = L00001853( *(bp - 2), *(bp - 2));
    *L000000D8 = *L000000D8 + 0x18;
    (restore)di;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x000026D3 - 0x00002B0C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000026D3()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    if(*(si + 8) > -64) {
        *L000000D8 = *L000000D8 - 0xc;
        di = *L000000D8;
        L00000D2E();
        *(di + 8) = *(di + 8) + 1;
        (save)si;
        L0000168E(di, di);
        (save)si;
        L00001A23(di, di);
        L00000E1F();
        bx = *L000000D8;
        *(bx + 8) = *(bx + 8) + 2;
        L00001F7D();
        (save) *%cs:0x1865];
        (save)0x1867;
        L00002085();
        (save) *L000000D8;
        ax = L00001853(si, di);
        *(si + 8) = *(si + 8) + 1;
        *L000000D8 = *L000000D8 + 0x18;
    }
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
    cl = 0;
    goto L00002734;
    cl = 2;
    goto L00002734;
    cl = 4;
L00002734:
    es = di;
    bp = sp;
    di = *L000000D8;
    (save) *(di + 0xa);
    (save)ax;
    if(*(di + 8) <= -32) {
        if(cl == 2) {
            ax = L00000D2E();
        }
    } else {
        if(*(di + 8) > 0x40) {
            ax = L00000DBB();
            *(di + 6) = 0x21;
        } else {
            *(di + 0xa) = 0;
            si = di - 0xc;
            *L000000D8 = si;
            asm("xchg di,si");
            L00000D61();
            asm("xchg di,si");
            *(si + 8) = *(si + 8) - 2;
            L00001D3D();
            *(bp - 4) = al & 7;
            bl = *(bp - 2);
            if(bl != 4) {
                bx = *(bp - 4) >> 1;
                if(!( *(bp - 4) = bl + *(bp - 4) & 7)) {
                    asm("xchg di,si");
                    L00000D61();
                    asm("xchg di,si");
                    *(si + 8) = *(si + 8) - 2;
                    (save)si;
                    (save)di;
                    (save)di;
                    L0000168A();
                }
                *L000000D8 = di;
                si = di;
                *(bp - 4) & 3;
                asm("jpe 0x27b8");
                ax = L0000225D();
                goto L000027bb;
                ax = L0000223C();
L000027bb:
                bl = *(bp - 4) >> 1 >> 1;
            } else {
                if(!( *(bp - 4) & 1)) {
                    asm("xchg si,di");
                    L00000D61();
                    asm("xchg si,di");
                    *(si + 8) = *(si + 8) - 2;
                    (save)si;
                    (save)di;
                    (save)di;
                    L0000168A();
                }
                *L000000D8 = di;
                si = di;
                L0000226D();
                di = si - 0xc;
                ax = si;
                *(bp - 4) & 3;
                asm("jpe 0x27f1");
                asm("xchg si,di");
                asm("xchg ax,di");
                (save)si;
                ax = L00001A23(di, ax);
                bl = *(bp - 4) >> 1 & 1;
            }
            if(*(bp - 2) != 2) {
                bl = bl ^ *(bp - 1);
            }
            *(di + 0xa) = bl;
        }
    }
    *L000000D8 = di;
    return;
    es = di;
    si = *L000000D8;
    di = si - 0xc;
    *L000000D8 = di;
    L00000D2E();
    ax = *(si + 8);
    if(ax < 0x4001) {
        if(ax > 49153) {
            cl = 0;
            bx = si;
            if(!(ax = ax - 1)) {
                L00000E39();
                bx = di;
                cl = 1;
            }
            ch = 0;
            asm("xchg ch,[bx+0xa]");
            ax = L00002363(cx);
            if(cl == 1) {
                (save)cx;
                L00000D61();
                *(di + 8) = *(di + 8) - 1;
                (save)di;
                (save)si;
                ax = L0000168A(si);
            }
            *(si + 0xa) = ch;
        }
L0000285e:
        *L000000D8 = si;
        return;
    }
    di = si;
    (save) *(si + 0xa);
    ax = L00000D61();
    (restore) *(si + 0xa);
    *(si + 8) = *(si + 8) - 1;
    goto L0000285e;
    es = di;
    si = *L000000D8;
    di = si - 0xc;
    *L000000D8 = di;
    L00000D83();
    goto L000028a7;
    es = di;
    si = *L000000D8;
    di = si - 0xc;
    *L000000D8 = di;
    L00000D2E();
    goto L000028a7;
    es = di;
    si = *L000000D8;
    di = si - 0xc;
    *L000000D8 = di;
    L00000D72();
L000028a7:
    L00000E39();
    if(*(di + 0xa) == 0) {
        ax = *(di + 8);
        if(ax > 49153) {
            if(ax >= 0x4001) {
                goto L000028c9;
            }
            ax = L000025E3();
L000028c0:
            *L000000D8 = si;
            return;
        }
        ch = 4;
    } else {
L000028c9:
        ch = 1;
    }
    L00002B0D();
    ax = 0x4001;
    di = si;
    cl = 0;
    ax = L00000DA9();
    goto L000028c0;
    ax = 0x40;
    goto L000028ed;
    es = di;
    si = *L000000D8;
    di = si - 0xc;
    goto L00002906;
    ax = 0x2f;
L000028ed:
    es = di;
    si = *L000000D8;
    di = si - 0xc;
    *L000000D8 = di;
    *ax();
    (save)si;
    L00001853(si, di);
    *L000000D8 = si;
L00002906:
    bp = sp;
    (save)0;
    eax = *(si + 8) & 65535;
    if(ax <= 0xc) {
        if(ax <= 65472) {
            goto L00002973;
        }
        L00000E1F();
        *(di + 8) = *(di + 8) + 1;
        (save) *L000000D6;
        *L000000D7 = *L000000D7 & 0xf3;
        *L000000D7 = *L000000D7 | 4;
        si = di;
        (restore) *L000000D6;
        (save)L0000125E();
        di = sp;
        L00000E88();
        *(si + 8) = *(si + 8) - 1;
        (save)di;
        (save)si;
        (save)di;
        L0000168A();
        (restore)ax;
        ax = ax >> 1;
        if(di = si + 0xc) {
            goto L0000297a;
        }
        *si = 0x6485;
        *(si + 2) = 63966;
        *(si + 4) = 62259;
        *(si + 6) = 46340;
    } else {
        di = si;
        ch = 8;
        L00002B0D();
        ax = 0x4001;
        cl = 0;
        ax = L00000DA9();
        goto L000029b3;
L00002973:
        di = si;
        ax = L00000D2E();
        goto L000029b3;
L0000297a:
        *si = 0;
        *(si + 2) = 0;
        *(si + 4) = 0;
        *(si + 6) = 32768;
    }
    *(si + 8) = ax + 1;
    *(si + 0xa) = 0;
    di = si;
    si = di + 0xc;
    L000024EB();
    (save)si;
    L00001853(si, di);
    (save)si;
    ax = L0000168E(si, di);
    if(*(bp - 2) == 1) {
        *(si + 0xa) = *(si + 0xa) ^ 1;
    }
L000029b3:
    *L000000D8 = si;
    return;
    es = di;
    di = bp + 0x18;
    bp = 0;
    al = 0xa;
    asm("mul cl");
    di = di + ax;
    si = 0xc0;
L000029cc:
    si = si - 0xc;
    di = di - 0xa;
    ax = L000015A0();
    if(bp = bp - 1) {
        goto L000029cc;
    }
    cx = si - *L000000D8;
    di = 0xbe;
    asm("std");
    cx = cx >> 1;
    if(!(si = si - 2)) {
        asm("rep movsw");
    }
    di = di + 1 + 1;
    *L000000D8 = di;
    return;
    es = di;
    bp = 0;
    ebx = 0 & 0xff;
    si = *L000000D8;
    di = si - *%cs:bx+0x2];
    *L000000D8 = di;
    if(!(cx = 0xc0 - si)) {
        asm("cld");
        cx = cx >> 1;
        asm("rep movsw");
    }
    si = bp + 0x18;
L00002a1c:
    ax = L000015C7();
    di = di + 0xc;
    si = si + 0xa;
    if(bp = bp - 1) {
        goto L00002a1c;
    }
    return;
    bx = *L000000D8;
    (save)bx;
    si = bx + 0xc;
    (save)si;
    si = si + 0xc;
    goto L00002a4b;
    bx = *L000000D8;
    (save)bx;
    si = bx + 0xc;
    (save)si;
    goto L00002a4b;
    si = *L000000D8;
    (save)si;
    (save)si + 0xc;
L00002a4b:
    es = di;
    *L000000D8 = si;
    *(bp + 0x16) = L00001E45();
    return(*(bp + 0x16));
    *L000000D7 = *L000000D7 & 0xfc;
    goto L00002a64;
    *L000000D7 = *L000000D7 & 0xfe;
L00002a64:
    es = di;
    bx = *L000000D8;
    si = bx + 0xc;
    ax = L00001E45(si, bx);
    *L000000D7 = *L000000D7 | 3;
    *L000000D8 = si + 0xc;
    *(bp + 0x16) = ah;
    return;
    es = di;
    si = *L000000D8;
    *(bp + 0x16) = L00001F05();
    return(*(bp + 0x16));
    es = di;
    si = *L000000D8;
    ax = L00001F42();
    *(bp + 0xe) = ax;
    return(*(bp + 0xe));
    *di = al;
    asm("sbb al,0xe2");
    asm("sbb al,0x48");
    asm("sbb ax,0x1d4f");
    asm("sbb [di],bx");
    asm("daa");
    asm("sbb ax,0x1d72");
    if(!(di = di + 1)) {
        asm("sbb bl,[bp+si]");
        (save)ds;
        asm("sbb ah,[bp+si]");
        asm("sbb al,[bp+di]");
        asm("sbb sp,[bp+di+0x1b]");
        != ? 0x2ad3 : ;
        asm("xchg bx,[bp+di]");
        asm("retf 0xcf1b");
        asm("sbb bx,dx");
        asm("sbb di,bx");
        asm("cld");
        (save)dx;
        (save)ax;
        (save)bx;
        (save)bp;
        (save)si;
        (save)di;
        (save)es;
    }
    (save)cx;
    (save)ds;
    *%ss:0xde] = sp;
    asm("lds si,[bp+0x12]");
    eax = *esi;
    *(bp + 0x12) = esi + 4;
    ds = ss;
    cl = ah;
    asm("cbw");
    asm("xchg ax,bx");
    if(bl >= 0xdc) {
        *(bx + 0x1db0)();
        if(*%ss:0xd8] > 0xc0) {
            goto L00002b0a;
        }
L00002af4:
        sp = *%ss:0xde];
        (restore)ds;
        (restore)cx;
        (restore)es;
        (restore)di;
        (restore)si;
        (restore)bp;
        (restore)bx;
        (restore)ax;
        (restore)dx;
        asm("iret");
    }
    ch = 1;
    L00002B0D();
    goto L00002af4;
L00002b0a:
    asm("int3");
    goto L00002af4;
}

/*	Procedure: 0x00002B0D - 0x00002B6B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00002B0D()
{
	/* unknown */ void  ax;
	/* unknown */ void  cx;
	/* unknown */ void  ds;



    ds = ss;
    al = *L000000D4 | *L000000D6 & 0x3f ^ 0x3f;
    if(!((al & cl ^ al) & 8)) {
        al = al | 0x20;
    }
    if(!(cl & al)) {
        al = al | 0x80;
        *L000000D4 = al;
        al = *L000000D4 & cl;
        if(al != 0x20) {
            goto L00002b4a;
        }
        return;
    }
    *L000000D4 = al & 0x7f;
    return(*L000000D4);
L00002b4a:
    ax = 0x3502;
    asm("int 0x21");
    *%ss:0xd0] = bx;
    *%ss:0xd2] = es;
    sp = *%ss:0xde];
    (restore)ds;
    (restore)cx;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)bp;
    (restore)bx;
    (restore)ax;
    (restore)dx;
    goto ( *ss);
}

/*	Procedure: 0x00002B6C - 0x00002B9A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00002B6C()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    cl = 4;
    ch = 0xa;
    bx = *%es:si];
    al = bh >> 0xa;
    asm("mul ch");
    dl = 0xf & bh;
    al = al + dl;
    asm("mul ch");
    ax = ax + ((0xf0 & bl) >> cl);
    cx = 0xa;
    asm("mul cx");
    return(ax + (bx & 0xf));
}

/*	Procedure: 0x00002B9B - 0x00002C65
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00002B9B()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    ax = *%es:si+0x9] & 0x80;
    asm("rol al,1");
    *(di + 0xa) = ax;
    al = *%es:si+0x8] << 4 >> 4;
    asm("aad");
    di = 0x2710;
    asm("mul di");
    asm("xchg ax,bx");
    si = si + 6;
    ax = L00002B6C() + bx;
    asm("adc dl,dh");
    bx = dx;
    asm("mul di");
    asm("xchg ax,bx");
    cx = dx;
    asm("mul di");
    cx = cx + ax;
    asm("adc dl,dh");
    si = si - 2;
    ax = L00002B6C() + bx;
    asm("adc cx,+0x0");
    asm("adc dl,dh");
    (save)si;
    bx = dx;
    asm("mul di");
    asm("xchg ax,cx");
    si = dx;
    asm("mul di");
    asm("xchg ax,bx");
    asm("xchg di,dx");
    asm("mul dx");
    bx = bx + si;
    asm("adc di,ax");
    (restore)si;
    si = si - 2;
    ax = L00002B6C() + cx;
    asm("adc bx,dx");
    asm("adc di,dx");
    si = 0x2710;
    asm("mul si");
    asm("xchg ax,bx");
    cx = dx;
    asm("mul si");
    asm("xchg ax,si");
    asm("xchg di,dx");
    asm("mul dx");
    cx = cx + si;
    asm("adc di,ax");
    asm("adc dx,+0x0");
    si = *(bp - 2);
    bx = bx + L00002B6C();
    asm("adc cx,+0x0");
    asm("adc di,+0x0");
    asm("adc dx,+0x0");
    for(ax = 0x40; dx == 0; asm("xchg cx,bx");) {
        if(ax = ax - 0x10) {
            goto L00002c61;
        }
        asm("xchg dx,di");
        asm("xchg di,cx");
    }
    >= ? 0x2c4a : ;
    do {
        bx = bx << 1;
        asm("rcl cx,1");
        asm("rcl di,1");
        asm("adc dx,dx");
    } while(ax = ax - 1);
L00002c4a:
    si = *(bp - 4);
    *si = bx;
    *(si + 2) = cx;
    *(si + 4) = di;
    *(si + 6) = dx;
    *(si + 8) = ax;
    return;
L00002c61:
    ax = 49153;
    goto L00002c4a;
}

/*	Procedure: 0x00002C66 - 0x00002C83
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00002C66()
{
	/* unknown */ void  ax;
	/* unknown */ void  cx;



    al = 0x64;
    cl = 4;
    asm("xchg ax,dx");
    edx = dl / dl % dl / dl;
    dl = ah;
    asm("aam");
    ah = ah << cl | al;
    asm("xchg ax,dx");
    asm("aam");
    al = ah << cl | ah << cl;
    *di = dh;
    di = di + 4;
}

/* DEST BLOCK NOT FOUND: 00002db5 -> 00003325 */
/* DEST BLOCK NOT FOUND: 00002de8 -> 00003325 */
/* DEST BLOCK NOT FOUND: 00002deb -> 00002b4a */
/* DEST BLOCK NOT FOUND: 00002f29 -> 0000168e */
/* DEST BLOCK NOT FOUND: 00002f30 -> 00001853 */
/* DEST BLOCK NOT FOUND: 00002f39 -> 00001e45 */
/* DEST BLOCK NOT FOUND: 00002f41 -> 0000168a */
/* DEST BLOCK NOT FOUND: 00002f49 -> 00001a23 */
/* DEST BLOCK NOT FOUND: 00002fb4 -> 00003325 */
/* DEST BLOCK NOT FOUND: 00002fce -> 00002b0d */
/* DEST BLOCK NOT FOUND: 0000311c -> 00003325 */
/*	Procedure: 0x00002C84 - 0x00003000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002C84()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    asm("cld");
    ax = *(si + 8);
    bx = *si;
    cx = *(si + 2);
    dx = *(si + 6);
    si = *(si + 4);
    if(ax >= 0) {
        if(!(ax = ax - 0x3c)) {
            > ? L00002cd7 : ;
            if(dx >= 56843) {
                > ? L00002cd7 : ;
                if(si >= 0x6b3a) {
                    > ? L00002cd7 : ;
                    if(cx >= 0x763f) {
                        > ? L00002cd7 : ;
                        if(bx > -16) {
                            goto L00002d47;
                        }
                    }
                }
            }
        }
        eax = -4 & 0xff;
L00002cc5:
        if(al = al + 0x10) {
            goto L00002cd9;
        }
        ah = bh;
        bx = cx;
        cx = si;
        si = dx;
        dx = 0;
        goto L00002cc5;
    }
    goto L00002d3e;
L00002cd9:
    if(!(al = al - 0x10)) {
L00002cdd:
        dx = dx >> 1;
        asm("rcr si,1");
        asm("rcr cx,1");
        asm("rcr bx,1");
        asm("rcr ah,1");
        if(al = al + 1) {
            goto L00002cdd;
        }
    }
    ah = ah + ah;
    asm("adc bx,+0x0");
    asm("adc cx,+0x0");
    asm("adc si,+0x0");
    asm("adc dx,+0x0");
    asm("xchg ax,si");
    si = 0x2710 / 0x2710;
    dx = si % si;
    asm("xchg ax,cx");
    si = si / si;
    dx = si % si;
    asm("xchg ax,bx");
    si = si / si;
    dx = si % si;
    L00002C66();
    dx = 0;
    asm("xchg ax,cx");
    si = si / si;
    dx = si % si;
    asm("xchg ax,bx");
    si = si / si;
    dx = si % si;
    asm("xchg ax,cx");
    si = si / si;
    dx = si % si;
    L00002C66();
    dx = bx;
    asm("xchg ax,cx");
    si = si / si;
    dx = si % si;
    asm("xchg ax,cx");
    si = si / si;
    dx = si % si;
    L00002C66();
    dx = cx;
    dx = si / si % si / si;
    ax = L00002C66();
    asm("aam");
    *di :: (ah << 4 | ah << 4);
    di = di + 1;
L00002d31:
    al = *( *(bp - 2) + 0xa);
    asm("ror al,1");
    *di = al;
    di = di + 1;
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
L00002d3e:
    al = 0;
L00002d40:
    cx = 9;
    asm("rep stosb");
    goto L00002d31;
L00002d47:
    ch = 8;
    ax = L00002B0D();
    al = 0x99;
    goto L00002d40;
    asm("aaa");
    *(bx + di + 0x21) = *(bx + di + 0x21) & ax;
    bx = bx - 1;
    *(di + 0x21) = *(di + 0x21) & dx;
    (restore)di;
    *(bp + 0x21) = *(bp + 0x21) & sp;
    *(bx + di) & ah;
    asm("insw");
    *(bp + si) = *(bp + si) & cx;
    ax = ax & 0x257f;
    asm("in ax,0x25");
    asm("out 0x25,ax");
    asm("rol byte [0x2a5],cl");
    asm("salc");
    (restore)es;
    *di = *di + dx;
    bl = bx + 1 & *si;
    ah = ah & *L00002322;
    ch = ch & *di & *si;
    dh = dh & *di & *si;
    dl :: 0;
    (save)es;
    *di = *si;
    di = di + 4;
    si = si + 4;
    dl = dl + dh;
    (restore)es;
    bx = bx + 1;
    *(bx + si + 6) = *(bx + si + 6) + bx;
    asm("in ax,dx");
    (restore)es;
    if(!(dh = dh + *(bp + si))) {
        eax = *esi;
        esi = esi + 4;
    }
    ah = ah & *(bx + 0x4422);
    dh = dx & cx & *(bp + 57634);
    ah = ah & *(bx + 49442);
    dh = dh & cl;
    ah = ah & *(bx + 0x1222);
    bp = bp & *(bx + si + 31267);
    si = si & *(di + 32547);
    bx = bx & *(bp + di + 46371);
L00002db0:
    (restore)ax;
    asm("std");
    goto L00003325;
L00002db8:
    if(!(ax = ax + bp)) {
        if(ah & 0x20) {
            goto L00002db0;
        }
        dx = dx + 1;
        al = ah;
        di = ds;
        if(!(al = al & 0xc0)) {
            di = ss;
            if(al >= 0x80) {
                di = *(bp + 4);
                > ? L00002dd6 : ;
                di = *(bp + 0x14);
            }
        }
        asm("%e lodsb");
        asm("xchg ah,al");
        al = al & 7;
    } else {
        if(al == 9) {
            *%es:si-0x3] = 58505;
            goto L00003325;
        }
        goto L00002b4a;
        asm("loopne 0x2df0");
        asm("sti");
        asm("cld");
        (save)dx;
        (save)ax;
        (save)bx;
        (save)bp;
        (save)si;
        (save)di;
        (save)es;
        (save)cx;
        (save)ds;
        bp = sp;
        *%ss:0xde] = bp;
        asm("les si,[bp+0x12]");
        si = si - 1;
        dl = 0;
        asm("%e lodsw");
        al = al - 0x34;
        if(al >= 8) {
            goto L00002db8;
        }
    }
    bh = 49159 & ah & ah;
    asm("xchg ax,cx");
    if(bh < 0xc0) {
        if(bh <= 0x40) {
            == ? L00002e38 : ;
            ax = 0;
            if(bl != 6) {
                goto L00002e3b;
            }
            asm("%e lodsw");
            *(bp + 0x12) = si;
            si = ds;
        } else {
            asm("%e lodsw");
            goto L00002e3b;
            asm("%e lodsb");
            asm("cbw");
L00002e3b:
            *(bp + 0x12) = si;
            ebx = 0 << 1 & 65535;
            goto ( *(bx + 0x2040));
            ax = ax + *(bp + 0xc) + *(bp + 8);
            si = ds;
            goto L00002e99;
            ax = ax + *(bp + 0xc) + *(bp + 6);
            si = ds;
            goto L00002e99;
            ax = ax + *(bp + 0xa) + *(bp + 8);
            si = ss;
            goto L00002e99;
            ax = ax + *(bp + 0xa) + *(bp + 6);
            si = ss;
            goto L00002e99;
            ax = ax + *(bp + 8);
            si = ds;
            goto L00002e99;
            ax = ax + *(bp + 6);
            si = ds;
            goto L00002e99;
            ax = ax + *(bp + 0xc);
            si = ds;
        }
    } else {
        *(bp + 0x12) = si;
        ax = ss;
        ds = ax;
        es = ax;
        if(cl & 1) {
            goto L00002ec5;
        }
        goto L00002eab;
        ax = ax + *(bp + 0xa);
        si = ss;
    }
L00002e99:
    asm("xchg ax,si");
    if(dl == 1) {
        asm("xchg ax,di");
    }
    es = ax;
    ax = ss;
    ds = ax;
    if(!(cl & 1)) {
L00002eab:
        if(ch < 0xc0) {
            goto L00002f4c;
        }
        if(!(ch & 0x20)) {
            goto L000030f2;
        }
        bl = 6 & cl;
        goto ( *(bx + 0x2050));
    }
L00002ec5:
    ax = (0x38 & ch) >> 1 >> 1;
    asm("xchg ax,bp");
    if(ch < 0xc0) {
        di = *L000000D8 - 0xc;
        *L000000D8 = di;
        *((6 & cl) + 0x2058)();
        es = ss;
        bx = di;
        dx = bx + 0xc;
        cx = 0x2610;
        goto ( *(bp + 0x2060));
    }
    ax = *L000000D8;
    bx = ( *%cs:bx+0x2] & 0xff) + ax;
    dx = ax;
    if(!(cl & 4)) {
        dx = bx;
    }
    si = 0;
    if(!(cl & 2)) {
        esi = 0xc & 65535;
    }
    goto ( *(bp + 0x2060));
    (save)ax;
    (save)bx;
    (save)dx;
    (save)0x2610;
    goto L0000168E;
    (save)ax;
    (save)bx;
    (save)dx;
    (save)cx;
    goto L00001853;
    si = si + 0xc;
    (save)ax;
    (save)bx;
    (save)cx;
    goto L00001E45;
    asm("xchg ax,bx");
    (save)ax;
    (save)bx;
    (save)dx;
    (save)cx;
    goto L0000168A;
    asm("xchg ax,bx");
    (save)ax;
    (save)bx;
    (save)dx;
    (save)cx;
    goto L00001A23;
L00002f4c:
    bp = 6 & cx;
    if(!(ch & 0x20)) {
        if(!(ch & 0x10)) {
            if(ch & 8) {
                goto L00003325;
            }
            di = *L000000D8 + 65524;
            *L000000DA = 65524;
            (save)0x260b;
            goto ( *(bp + 0x2070));
        }
        di = *L000000D8;
        asm("xchg si,di");
        if(!(ch & 8)) {
            (save)0x2615;
            goto ( *(bp + 0x2078));
        }
        *L000000DA = 0xc;
        (save)0x260b;
        goto ( *(bp + 0x2078));
    }
    bp = bp | 8 & ch;
    (save)0x2615;
    if(!(ch & 0x10)) {
        goto ( *(bp + 0x2080));
    }
    asm("xchg si,di");
    goto ( *(bp + 0x2090));
    goto L00003325;
    ch = 1;
    return(L00002B0D());
    cl = 4;
    *L000000D4 = *%es:si+0x2];
    *L000000D6 = *%es:si];
    ch = 0;
    goto L00002B0D;
    di = *L000000D8 - 0xc;
    *L000000D8 = *L000000D8 - 0xc;
    return(L000010FA());
    di = *L000000D8 - 0xc;
    *L000000D8 = *L000000D8 - 0xc;
    return(L00002B9B());
    di = *L000000D8 - 0xc;
    *L000000D8 = *L000000D8 - 0xc;
    return(L000015C7());
}

/* DEST BLOCK NOT FOUND: 00003087 -> 00002fbd */
/*	Procedure: 0x00003001 - 0x00003089
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003001()
{



    L0000308A();
    L0000308F();
    ax = 0xc0 - *L000000D8;
    edx = 0xc / 0xc % 0xc / 0xc;
    cx = 65535;
    asm("xchg ax,cx");
    ax = ax >> cx + cx;
    *di = eax;
    di = di + 4;
    *di = 0;
    di = di + 4;
    *di = 0;
    di = di + 4;
    *di = 0;
    di = di + 4;
    *di = 0;
    di = di + 4;
    return(0);
    ax = L00003001();
    si = *L000000D8;
    bp = *%es:di-0xa] | 0x5555;
    goto L00003042;
    ax = L000015A0();
    si = si + 0xc;
    bp = bp << 1 << 1;
    if(!(di = di + 0xa)) {
L00003042:
        >= ? 0x3033 : ;
        goto L00003051;
        ax = 0;
        cx = 5;
        asm("rep stosw");
        bp = bp << 1 << 1;
L00003051:
        != ? 0x3046 : ;
    }
    return;
    di = 0xc0;
    si = si + 0x54;
L00003062:
    bp = bp >> 1 >> 1;
    if(!(bp = *%es:si+0x4] | 0x5555)) {
        si = si - 0xa;
        if(bp != 0) {
            goto L00003062;
        }
        goto L00003080;
L00003071:
        bp = bp >> 1;
    }
    di = di - 0xc;
    ax = L000015C7();
    bp = bp >> 1;
    if(si = si - 0xa) {
        goto L00003071;
    }
L00003080:
    *L000000D8 = di;
    si = si + -4;
    goto L00002fbd;
}

/*	Procedure: 0x0000308A - 0x0000308E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000308A()
{



    *di = *L000000D6;
    di = di + 4;
}

/* DEST BLOCK NOT FOUND: 0000320a -> 00002b0d */
/*	Procedure: 0x0000308F - 0x0000346A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000308F()
{



    edx = 0xc / 0xc % 0xc / 0xc;
    al = ( *L000000D8 - 0xc0 & 7) << 3;
    ch = *L000000D4 & 0xc7 | al;
    asm("xchg ax,cx");
    *di = eax;
    di = di + 4;
    return;
    si = *L000000D8;
    *L000000D8 = *L000000D8 + 0xc;
    return(L0000116C());
    si = *L000000D8;
    *L000000D8 = *L000000D8 + 0xc;
    return(L00002C84());
    si = *L000000D8;
    L000015A0();
    *L000000D8 = *L000000D8 + 0xc;
    return;
    *si = *si + sp;
    (save)sp;
    al = al & 0x15 & 0xf & 0x5b & 0x54 & 0x5b & 0x5b & 0x4f & 0x54 & 0x6c & 0x77 & 0x77 & 0x54 & 0x77 & 0x77 & 0xb7;
    *L00009F8A = *L00009F8A + ch;
    al = al + *(bx + si);
    si = *L000000D8 + bx;
    bl = 0x18 & ch;
    bl = bl | cl & 6;
    asm("cld");
    cx = 6;
    goto ( *(bx + 0x23c2));
    *L000000D8 = *L000000D8 - 0xc;
    di = *L000000D8;
    asm("rep movsw");
    goto L00003325;
    di = 0xc;
    goto L00003128;
    di = 0;
L00003128:
    if(si != 0xb4) {
        asm("xchg di,si");
        ax = 0x4001;
        cl = 0;
        L00000DA9();
        *L000000D8 = *L000000D8 + si;
    } else {
        di = di + 0xc;
        dx = di;
        if(!(cx = si - *L000000D8)) {
            es = ss;
            si = si - 2;
            di = 0xbe;
            asm("std");
            cx = cx >> 1;
            asm("rep movsw");
            asm("cld");
        }
        *L000000D8 = *L000000D8 + dx;
        goto L00003325;
        if(!(ch & 7)) {
            ch = 1;
            ax = L00002B0D();
            goto L00003325;
            di = *L000000D8;
            ax = *di;
            asm("xchg ax,[si]");
            *di = eax;
            di = di + 4;
            si = si + 2;
            asm("loop 0x316f");
            goto L00003325;
            di = si;
            si = *L000000D8;
            asm("rep movsw");
            goto L00003325;
            di = si;
            si = *L000000D8;
            asm("rep movsw");
            *L000000D8 = si;
        }
    }
    goto L00003325;
    al = al + 4 + 4 + 4 + 4;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *si = *si + al;
    al = al + 8;
    (save)es;
    *L00000204 = *L00000204 | al;
    *(bp + si) = *(bp + si) + cl;
    *si = *si | al;
    al = (al + 4 | *si) + 0xe6 & 0xeb & 0xf8 & 0xf8 & 0xf5;
    asm("adc [bp+si],si");
    asm("adc bh,al");
    al = al & 0xf8 & 0x1e;
    *bx = *bx + ch;
    *(bx + si) = *(bx + si) + al;
    (save)cx;
    if(!( *(bp + si) = *(bp + si) + ah)) {
    }
    *(bx + si) & al;
    asm("clc");
    al = al & 0xdb;
    (restore)ss;
    asm("rcr word [bx+si],cl");
    (restore)bp;
    asm("adc ax,0x1653");
    asm("lock and al,0xf8");
    al = al & 0xf8 & 0xf8 & 0x2d;
    asm("adc [bp+si+0x6019],cl");
    asm("psubb mm4,[si]");
    si = si - 1;
    ax = ax + 0x23b;
    asm("clc");
    if(!(al = al & 0xf8 & 0x80)) {
        bx = bx + ax;
        *(si + 0xa) = 0;
        return;
        ax = L00000F17(di, si);
    }
    (restore)di;
    (restore)si;
    return;
    ch = 1;
    goto L00002B0D;
    return;
    asm("sbb ax,0x5425");
    ax = ax & 0x2530;
    asm("aas");
    ax = ax & 0x255c;
    asm("outsw");
    *(bp + si) = *(bp + si) + (ax & 0x1fbb);
    asm("Unknown opcode 0xdd");
    al = *%cs:bx+0x2486];
    asm("cbw");
    asm("xchg ax,di");
    bx = bx << 1;
    goto ( *(di + 0x24fe));
    di = *L000000D8 - 0xc;
    ax = *(bx + 0x24a6)();
    *L000000D8 = di;
    goto L00003325;
    si = *L000000D8;
    di = si;
    (save)0x2615;
    goto ( *(bx + 0x24a6));
    si = *L000000D8;
    di = si - 0xc;
    ax = *(bx + 0x24a6)();
    *L000000D8 = di;
    goto L00003325;
    *L000000D8 = *L000000D8 + 0xc;
    goto L00003325;
    di = *L000000D8;
    si = di + 0xc;
    ax = *(bx + 0x24a6)();
    *L000000D8 = si;
    goto L00003325;
    di = *L000000D8;
    si = di + 0xc;
    (save)0x2615;
    goto ( *(bx + 0x24a6));
    if((ch & 0x1f) == 3) {
        di = 0xc0;
        *L000000D8 = 0xc0;
        ax = 0x4001;
        cl = 0;
        L00000DA9();
        si = di + 0xa;
        di = di - 2;
        asm("std");
        sp = sp - 0x60;
        cx = 0x30;
        asm("rep movsw");
        *L000000D4 = 0x4100;
        *L000000D6 = 0x33f;
        *L000000DA = 0;
        *L000000D8 = 0xc0;
        *L000000E0 = 0x6d65;
        *L000000E2 = 34677;
        *L000000E4 = 1;
    } else {
        if(ch == 2) {
            *L000000D4 = 0;
        } else {
L000032ed:
            ch = 1;
            ax = L00002B0D();
        }
    }
    goto L00003325;
    if(ch & 0x1f) {
        goto L000032ed;
    }
    cl = 0xc / 0xc;
    edx = cl % cl;
    *(bp + 0xe) = *L000000D4 & 0xc7 | ( *L000000D8 - 0xc0 & 7) << 3;
    goto L00003325;
    *%ss:0xd8] = *%ss:0xd8] + *%ss:0xda];
L00003325:
    if(*%ss:0xd8] <= 0xc0) {
L0000332e:
        sp = *%ss:0xde];
        (restore)ds;
        (restore)cx;
        (restore)es;
        (restore)di;
        (restore)si;
        (restore)bp;
        (restore)bx;
        (restore)ax;
        (restore)dx;
        asm("iret");
    }
    asm("int3");
    goto L0000332e;
    ax = ax ^ 0x68c2;
    *(bp + si + 0xfda) = *(bp + si + 0xfda) & sp;
    sp = bp;
    (restore)bp;
    asm("Unknown opcode 0xfe");
    asm("aas");
    ax = ax ^ 0x68c2;
    *(bp + si + 0xfda) = *(bp + si + 0xfda) & sp;
    sp = bp;
    (restore)bp;
    asm("Unknown opcode 0xff");
    asm("aas");
    *(bp + si - 0x40) = *(bp + si - 0x40) + al;
    *(bx + si) = *(bx + si) + 1;
    ax = ax - 1;
    bh = bh >> 0;
    dx = dx - 1;
    bh = bh >> 0;
    *(bx + si) = *(bx + si) + al;
    asm("aas");
    *(si - 0x22) & sp;
    asm("stc");
    si = si ^ bx;
    al = al + 0xb5;
    asm("Unknown opcode 0xff");
    asm("aas");
    *(bx + si) = *(bx + si) + al;
    *(bx - 0x4f) :: 0;
    goto L0000337c;
    cl = 2;
    goto L0000337c;
    cl = 4;
L0000337c:
    asm("wait");
    asm("fxam");
    (save)bp;
    bp = sp;
    asm("fstsw [bp-0x2]");
    asm("wait");
    ah = *(bp - 1);
    asm("sahf");
    if(!(sp = bp - 2)) {
        != ? 0x33c0 : ;
        if(cl == 2) {
            asm("wait");
            st0 = (frestore);
            asm("wait");
            (fsave)1;
        }
    } else {
        == ? L000033af : ;
        asm("jpo 0x33af");
        asm("wait");
        st0 = (frestore);
        asm("wait");
        (fsave) *%cs:0x14];
        asm("wait");
        asm("ftst");
        goto L00003467;
        asm("wait");
        asm("fcompp");
        asm("wait");
        (fsave) *%cs:0x14];
        asm("wait");
        asm("ftst");
    }
    goto L00003467;
    asm("wait");
    asm("fabs");
    asm("wait");
    (fsave)tword [%cs:0x0];
    asm("wait");
    asm("fxch");
    asm("wait");
    asm("fprem");
    ch = (2 & ah) >> 1;
    asm("fstsw [bp-0x2]");
    asm("wait");
    ah = *(bp - 1);
    asm("sahf");
    asm("jpe 0x33b1");
    ah = 3 << 1 << 1;
    asm("rcl al,1");
    al = al + 0xfc;
    asm("rcl al,1");
    if(cl == 2) {
        al = al + cl;
        ch = 0;
    }
    al = al & 7;
    if(!(al & 1)) {
        asm("wait");
        asm("fsubp st1");
    } else {
        asm("wait");
        st1 = (frestore);
    }
    asm("wait");
    asm("fptan");
    if(cl != 4) {
        asm("jpe 0x3414");
        asm("wait");
        asm("fxch");
        asm("wait");
        asm("wait");
        asm("wait");
        asm("fxch");
        asm("wait");
        (fsave)st1 * st0 * st0;
        asm("wait");
        asm("faddp st1");
        asm("wait");
        asm("fsqrt");
        al = al >> 1 >> 1 ^ ch;
        if(!(al & 3)) {
            asm("wait");
            asm("fchs");
        }
        asm("wait");
        asm("fdivp st1,st0");
    } else {
        ah = al >> 1 & 1 ^ ch;
        == ? L00003444 : ;
        asm("wait");
        asm("fchs");
        al & 3;
        asm("jpe 0x3464");
        asm("wait");
        asm("fxch");
        asm("wait");
        asm("ftst");
        asm("fstsw [bp-0x2]");
        asm("wait");
        if(!( *(bp - 1) & 0x40)) {
            asm("wait");
            asm("fcompp");
            asm("wait");
            (fsave) *%cs:0x2e];
        } else {
            asm("wait");
            asm("fdivp st1,st0");
        }
    }
L00003467:
    sp = bp;
    (restore)bp;
}

/*	Procedure: 0x0000346B - 0x000034D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000346B()
{



    asm("wait");
    asm("fxam");
    (save)bp;
    bp = sp;
    asm("fstsw [bp-0x2]");
    asm("wait");
    ah = *(bp - 1);
    asm("sahf");
    asm("xchg ax,cx");
    if(!(sp = bp - 2)) {
        != ? 0x349e : ;
    } else {
        == ? L000034d0 : ;
        asm("jpo 0x34d0");
        asm("wait");
        st0 = (frestore);
        asm("wait");
        (fsave)tword [%cs:0xa];
        goto L000034c8;
        asm("wait");
        asm("fcompp");
        asm("wait");
        (fsave)tword [%cs:0x0];
        goto L000034c8;
        asm("wait");
        asm("fabs");
        asm("wait");
        (fsave)1;
        asm("wait");
        asm("fcom st1");
        asm("fstsw [bp-0x2]");
        asm("wait");
        ah = *(bp - 1);
        asm("sahf");
        == ? L00003493 : ;
        >= ? L000034b7 : ;
        asm("wait");
        asm("fxch");
        asm("wait");
        asm("fpatan");
        >= ? L000034c8 : ;
        asm("wait");
        (fsave)tword [%cs:0xa];
        asm("wait");
        asm("fsubp st1");
        ch = ch ^ 2;
L000034c8:
        if(!(ch & 2)) {
            asm("wait");
            asm("fchs");
        }
    }
    sp = bp;
    (restore)bp;
}

/*	Procedure: 0x000034D4 - 0x0000353D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000034D4()
{



    asm("wait");
    (fsave)1;
    goto L000034e1;
    asm("wait");
    asm("fldlg2");
    goto L000034e1;
    asm("wait");
    asm("fldln2");
L000034e1:
    asm("wait");
    asm("fxch");
    (save)bp;
    bp = sp;
    asm("wait");
    asm("fxam");
    asm("fstsw [bp-0xa]");
    asm("wait");
    ah = *(bp - 9);
    asm("sahf");
    if(!(sp = bp - 0xa)) {
        == ? L000034ff : ;
        if(ah & 2) {
            goto L00003516;
        }
        asm("wait");
        st0 = (frestore);
    } else {
        == ? L00003511 : ;
        asm("jpo 0x3511");
    }
    asm("wait");
    st0 = (frestore);
    asm("wait");
    (fsave) *%cs:0x18];
    asm("wait");
    asm("ftst");
    goto L0000353a;
L00003516:
    asm("wait");
    asm("wait");
    tword [bp-0xa] = st0;
    asm("wait");
    if(*(bp - 2) == 0x3fff) {
        if(*(bp - 4) != 32768) {
            goto L00003537;
        }
        asm("wait");
        (fsave)1;
        asm("wait");
        asm("fsubp st1");
        asm("wait");
        asm("fyl2xp1");
    } else {
L00003537:
        asm("wait");
        asm("fyl2x");
    }
L0000353a:
    sp = bp;
    (restore)bp;
}

/*	Procedure: 0x0000353E - 0x00003629
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000353E()
{



    asm("wait");
    asm("fldl2e");
    cl = 1;
    goto L00003550;
    cx = 0;
    goto L00003550;
    asm("wait");
    asm("fldl2t");
    cl = 1;
L00003550:
    < ? L00003555 : ;
    asm("wait");
    asm("fxch");
    asm("wait");
    asm("fxam");
    (save)bp;
    bp = sp;
    asm("fstsw [bp-0x6]");
    if(!(sp = bp - 6)) {
        asm("wait");
        asm("fxch");
    }
    asm("wait");
    ah = *(bp - 5);
    asm("sahf");
    asm("xchg ax,bx");
    < ? L0000357f : ;
    != ? 0x3597 : ;
    asm("wait");
    st0 = (frestore);
    < ? L00003579 : ;
    asm("wait");
    st0 = (frestore);
    asm("wait");
    (fsave)1;
    goto L00003626;
    < ? L00003584 : ;
    asm("wait");
    st0 = (frestore);
    == ? L00003591 : ;
    asm("jpo 0x3591");
L00003588:
    asm("wait");
    st0 = (frestore);
    asm("wait");
    (fsave) *%cs:0x1c];
    asm("wait");
    asm("ftst");
    goto L00003626;
    < ? L0000359c : ;
    asm("wait");
    asm("fmulp st1");
    asm("wait");
    asm("fabs");
    asm("wait");
    asm("fcom dword [%cs:0x20]");
    asm("fstsw [bp-0x6]");
    asm("wait");
    if(!( *(bp - 5) & 0x41)) {
        asm("wait");
        asm("f2xm1");
        asm("wait");
        (fsave)1;
        asm("wait");
        asm("faddp st1");
    } else {
        asm("wait");
        (fsave)1;
        asm("wait");
        asm("fstcw [bp-0x6]");
        asm("wait");
        asm("fscale");
        *(bp - 5) = *(bp - 5) | 0xf;
        asm("wait");
        asm("fldcw [bp-0x6]");
        asm("wait");
        asm("frndint");
        *(bp - 5) = *(bp - 5) & 0xf3;
        asm("wait");
        asm("fldcw [bp-0x6]");
        asm("wait");
        asm("fist dword [bp-0x4]");
        asm("wait");
        asm("fxch");
        asm("wait");
        asm("fchs");
        asm("wait");
        asm("fxch");
        asm("wait");
        asm("fscale");
        asm("wait");
        st1 = st1;
        asm("wait");
        asm("fsubp st1");
        if(*(bp - 2) > 0) {
            goto L00003588;
        }
        asm("wait");
        asm("f2xm1");
        asm("wait");
        (fsave)1;
        asm("wait");
        asm("faddp st1");
        *(bp - 4) = *(bp - 4) >> 1;
        >= ? L0000360e : ;
        asm("wait");
        (fsave)tword [%cs:0x24];
        asm("wait");
        asm("fmulp st1");
        asm("wait");
        asm("wait");
        asm("fxch");
        asm("wait");
        asm("fscale");
        asm("wait");
        st1 = *(bp - 4);
    }
    if(!(bh & 2)) {
        asm("wait");
        (fsave)1;
        asm("wait");
        asm("fdivrp st1");
    }
L00003626:
    sp = bp;
    (restore)bp;
}

/*	Procedure: 0x0000362A - 0x000036CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000362A()
{



    (save)bp;
    bp = sp;
    (save)ax;
    (save)si;
    (save)ds;
    if(!( *(bp + 7) & 2)) {
        asm("sti");
    }
    asm("lds si,[bp+0x2]");
    al = *(si - 1) - 0x34;
    if(al < 8) {
        si = si - 2;
L0000364a:
        *(bp + 2) = si;
    } else {
        if(*si = *si + 41934) {
            goto L00003677;
        }
        if(!(ah & 0x20)) {
            si = si - 2;
            *(bp + 2) = si;
            *si = 0x9b;
            si = si + 1;
            *si = ((ah & 0x7c0) >> 1 >> 1 >> 1 ^ 0x18) + 55334;
        }
    }
L00003672:
    (restore)ds;
    (restore)si;
    (restore)ax;
    (restore)bp;
    asm("iret");
L00003677:
    if(al <= 9) {
        si = si - 2;
        *si = 39824;
        goto L0000364a;
    }
    goto L00003672;
    *(bp + di) = es;
    si = si + *(bp + 60675);
    di = di + di;
    cx = cx + *(bx + di);
    al = *L0000B103 + 0xe + 0x32;
    *L00003A00 = *L00003A00 + dh;
    *(bp + di) = *(bp + di) + ch;
    *(bp + 37889) = *(bp + 37889) + bx;
    *(bx + di + 65025) = *(bx + di + 65025) + bx;
    *di = *di + ax;
    cl = cl + *(bx + di);
    bh = bh + bl;
    asm("cld");
    (save)ax;
    (save)si;
    (save)es;
    (save)bp;
    bp = sp;
    asm("les si,[bp+0x8]");
    asm("%e lodsw");
    *(bp + 8) = si;
    if(al >= 0xdc) {
        si = ax;
        asm("cbw");
        asm("xchg ax,si");
        *(si + 0x36a)();
    }
    (restore)bp;
    (restore)es;
    (restore)si;
    (restore)ax;
    asm("iret");
}

/*	Procedure: 0x000036CC - 0x000036DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000036CC()
{



    if(!(ah = ah - 1)) {
        al = 0xa;
        asm("mul ah");
        asm("xchg ax,si");
        do {
            asm("wait");
            tword [bp+si+0xe] = (frestore);
        } while(si = si - 0xa);
    }
    asm("wait");
}

/*	Procedure: 0x000036E0 - 0x000036F0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000036E0()
{



    for(si = 0; !(ah = ah - 1); si = si + 0xa) {
        asm("wait");
        (fsave)tword [bp+si+0xe];
    }
    asm("wait");
}

/*	Procedure: 0x000036F1 - 0x0000372C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000036F1()
{



    al = 0;
    goto L000036f8;
    al = 1;
L000036f8:
    (save)bp;
    (save)ax;
    bp = sp;
    asm("fstcw [bp+0x0]");
    asm("wait");
    si = *bp;
    *(bp + 1) = *(bp + 1) & 0xfc;
    *(bp + 1) = *(bp + 1) | al;
    asm("wait");
    asm("fldcw [bp+0x0]");
    asm("wait");
    asm("wait");
    (fsave)0 - st2;
    asm("wait");
    asm("faddp st1");
    *bp = si;
    asm("wait");
    asm("fldcw [bp+0x0]");
    asm("wait");
    asm("fcompp");
    asm("fstsw [bp+0x0]");
    asm("wait");
    (restore)ax;
    (restore)bp;
    *(bp + 0xc) = ah;
}

/*	Procedure: 0x0000372D - 0x00003756
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000372D()
{



    asm("wait");
    asm("fcompp");
L00003730:
    ah = *(bp + 0xd);
    asm("fstsw [bp+0xc]");
    asm("wait");
    al = *(bp + 0xd);
    *(bp + 0xc) = ax;
    return(*(bp + 0xc));
    asm("wait");
    asm("fcomp st1");
    goto L00003730;
    asm("wait");
    asm("fcom st1");
    goto L00003730;
    asm("wait");
    asm("ftst");
    goto L00003730;
    asm("wait");
    asm("fxam");
    asm("fstsw [bp+0x6]");
    asm("wait");
}

/*	Procedure: 0x00003757 - 0x0000380D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003757()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    if(!(ax = *L000006BE | *L000006C0)) {
        (save)0;
        ax = *L000006be(8 & 65535, 0);
        *(bp - 2) = dx;
        *(bp - 4) = ax;
        (save)dx;
        *L000006be(8, *(bp - 4));
        if(*(bp - 2) != 0) {
            goto L00003794;
        }
        if(*(bp - 4) != 1) {
L00003794:
            if(ax = *(bp - 4) | *(bp - 2)) {
                goto L000037cd;
            }
            (save)0;
            *L000006be(8 & 65535, 0);
            asm("les bx,[bp+0x6]");
            ax = *%es:bx] - 1;
            dx = 6;
            asm("mul dx");
            bx = ax + 0x206;
            es = ds;
            *(bp - 4)(8, *%es:bx]);
        }
    } else {
L000037cd:
        asm("les bx,[bp+0x6]");
        ax = *%es:bx] - 1;
        dx = 6;
        asm("mul dx");
        bx = ax + 0x206;
        es = ds;
        (save) *%es:bx+0x4];
        (save) *%es:bx+0x2];
        (save)ds;
        L000005b1(0x3b0, ds, 0x273);
        L00000380();
        L00000000(1);
    }
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000380E - 0x00003813
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000380E()
{



    L00000000();
    asm("retf");
}

/*	Procedure: 0x00003814 - 0x000038DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003814()
{



    (save)bp;
    bp = sp;
    (save)si;
    ax = *(bp + 6);
    if(ax < 60604) {
        asm("int 0x35");
        asm("out dx,al");
    } else {
        if(ax > 0x1344) {
            asm("int 0x35");
            (save)es;
            al = al | *(bp + di);
        } else {
            if(ax == 0) {
                asm("int 0x35");
                ax = L0000d525();
                *(bp + di) = *(bp + di) + cl;
            }
            *(di + 2) = *(di + 2) >> 0xf7;
            asm("fdivr dword [bp+0x7]");
            si = (si & ax) << 1 << 1;
            asm("int 0x35");
            ax = L00002126() >> 1 >> 1;
            if(!( *(bp + 53506) & cl)) {
                asm("int 0x34");
                (save)cs;
                asm("scasb");
            }
            goto L000038ce;
            ax = ax >> 1;
            if(!(dh = dh + *(di + 3))) {
                asm("int 0x38");
                (save)cs;
                dl = 2;
            }
            ax = ax >> 1;
            >= ? L0000387a : ;
            asm("int 0x37");
            asm("%c mov dx,0xcd02");
            ax = ax >> 1;
            if(cl < cl) {
                asm("int 0x37");
                asm("les ax,[%cs:bp+si]");
                asm("int 0x3a");
                (restore)bp;
            }
            ax = ax >> 1;
            >= ? L00003892 : ;
            asm("int 0x37");
            asm("%c into");
            cl = cl + ch;
            ax = ax >> 1;
            if(cl < cl) {
                asm("int 0x37");
                (fsave)(frestore) + *%cs:bp+si];
                asm("int 0x3a");
                sp = bp;
                (restore)bp;
            }
            ax = ax >> 1;
            >= ? L000038aa : ;
            asm("int 0x37");
            asm("%c loop 0x38a9");
            asm("int 0x3a");
            sp = bp;
            (restore)bp;
            ax = ax >> 1;
            >= ? L000038b6 : ;
            asm("int 0x37");
            asm("%c in al,dx");
            cl = cl + ch;
            ax = ax >> 1;
            if(cl < cl) {
                asm("int 0x37");
                *%cs:bp+si] & 0xcd;
            }
            ax = ax >> 1;
            if(cl < cl) {
                asm("int 0x37");
                *%cs:bp+di] = *%cs:bp+di] + al;
                asm("int 0x3a");
                sp = bp;
                (restore)bp;
            }
L000038ce:
            if(!( *(bp + 7) & 0x80)) {
                asm("int 0x34");
                es = *%ds:bp+si];
            }
        }
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/* DEST BLOCK NOT FOUND: 000038f0 -> 000038fa */
/* DEST BLOCK NOT FOUND: 000038f7 -> 000038fa */
/*	Procedure: 0x000038DC - 0x000038FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000038DC()
{



    if((0x5f & dl) == 0x47) {
        do {
            if(*%es:bx-0x1] != 0x30) {
                goto L000038f2;
            }
            bx = bx - 1;
        } while(bx > cx);
    } else {
L000038f2:
        if(*%es:bx-0x1] == 0x2e) {
            bx = bx - 1;
        }
    }
}

/*	Procedure: 0x000038FB - 0x00003A8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000038FB()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x30;
    (save)si;
    (save)di;
    (save)es;
    ax = *(bp + 0x10);
    if(ax > 0x28) {
        ax = 0x28;
        *(bp + 0x10) = 0x28;
    }
    *(bp - 2) = ax;
    dl = *(bp + 0xa) & 0xdf;
    if(dl == 0x46) {
        ax = ~ax;
        <= ? L00003934 : ;
        ax = 0;
        *(bp + 0x10) = 0;
    } else {
        if(ax <= 0) {
            ax = 1;
            goto L0000393d;
        }
    }
    if(dl != 0x46) {
        ax = ax + 1;
        *(bp + 0x10) = *(bp + 0x10) + 1;
    }
L0000393d:
    (save) *(bp + 0x14);
    (save) *(bp + 0x12);
    if(ax > 0) {
        ax = *(bp - 2);
    }
    (save)ax;
    (save)ss;
    bx = bp - 4;
    (save)bx;
    (save)ss;
    (save)bp - 0x30;
    (save) *(bp + 6);
    L000003a8();
    asm("xchg ax,bx");
    asm("les di,[bp+0xc]");
    asm("cld");
    if(bx != 32767) {
        if(bx == 32766) {
            goto L00003985;
        }
    } else {
        ax = 0x492b;
        if(*(bp - 4) != 0) {
            ax = 0x492d;
        }
        *di = eax;
        di = di + 4;
        *di = 0x464e;
        di = di + 4;
        goto L00003a7f;
L00003985:
        ax = 0x4e2b;
        if(*(bp - 4) != 0) {
            ax = 0x4e2d;
        }
        *di = eax;
        di = di + 4;
        *di = 0x41;
        di = di + 4;
        goto L00003a7f;
    }
    if(*(bp - 4) != 0) {
        al = 0x2d;
        *di = 0x2d;
        di = di + 1;
    }
    dl = *(bp + 0xa) & 0x5f;
    if((dl == 0x46 || dl != 0x45 && bx >= -3 && bx <= *(bp + 0x10)) && bx <= 0x28) {
        if(bx <= 0) {
            *di = 0x2e30;
            cx = 1;
            if(di = di + 4) {
                goto L000039d5;
            }
            al = 0x30;
            do {
                *di = al;
                di = di + 1;
            } while(bx = bx + 1);
        }
        cx = 0;
L000039d5:
        while(1) {
            asm("%s lodsb");
            if(al == 0) {
                break;
            }
            *di = al;
            di = di + 1;
            if(bx = bx - 1) {
                continue;
            }
            al = 0x2e;
            *di = 0x2e;
            di = di + 1;
            cx = cx + 1;
        }
        ax = *(bp + 0x10);
        cx = cx + *(bp - 2);
        if(ax > cx) {
            ax = ax - cx;
            cx = ax;
            bx = bx + ax;
            al = 0x30;
            asm("rep stosb");
            if(bx = bx - 1) {
                goto L00003a12;
            }
        }
        if(!(bx = bx - 1) && *(bp + 8) == 0) {
            dl = *(bp + 0xa);
            cx = *(bp + 0xc);
            asm("xchg bx,di");
            L000038DC();
            asm("xchg di,bx");
        }
L00003a12:
        if(di == *(bp + 0xc)) {
            *di = 0x30;
            di = di + 1;
        }
    } else {
        asm("%s lodsw");
        *di = al;
        di = di + 1;
        al = 0x2e;
        if(0x2e != 0) {
            *di = 0x2e;
            di = di + 1;
            al = 0x2e;
            do {
                *di = al;
                di = di + 1;
                asm("%s lodsb");
            } while(al != 0);
            if(*(bp + 8) == 0) {
                dl = *(bp + 0xa);
                cx = *(bp + 0xc);
                asm("xchg bx,di");
                L000038DC();
                asm("xchg di,bx");
            }
        }
        al = 0x20 & *(bp + 0xa) | 0x45;
        *di = al;
        di = di + 1;
        ax = 0x2d2b;
        if(!(bx = bx - 1)) {
            asm("xchg al,ah");
            bx = ~bx;
        }
        *di = al;
        di = di + 1;
        asm("xchg ax,bx");
        cx = 0x3030;
        if(ax > 0x63) {
            if(ax > 0x3e7) {
                asm("cwd");
                dx = 0x3e8 / 0x3e8 % 0x3e8 / 0x3e8;
                al = al + cl;
                *di = al;
                di = di + 1;
                asm("xchg ax,dx");
            }
            edx = 0x64 / 0x64 % 0x64 / 0x64;
            *di = al + cl;
            di = di + 1;
            asm("xchg al,ah");
            asm("cbw");
        }
        edx = 0xa / 0xa % 0xa / 0xa;
        *di = ax + cx;
        di = di + 4;
    }
L00003a7f:
    *di = 0;
    di = di + 1;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf 0x10");
}

/*	Procedure: 0x00003A8B - 0x00003A8B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003A8B()
{



    asm("retf");
}

/*	Procedure: 0x00003A8C - 0x00003C65
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003A8C()
{



    (save)bp;
    bp = sp;
    sp = sp - 0xe;
    (save)si;
    (save)di;
    *(bp - 0xe) = 0xa;
    (save)es;
    asm("les di,[bp+0x12]");
    bx = *(bp + 6);
    cx = *%es:bx+di];
    *%es:bx+di] = *%es:bx+di] & 32767;
    bx = bx >> 1 >> 1 << 1;
    goto ( *(bx + 0x34));
    32767 :: *(bx + si);
    *bp = *bp + 32768;
    asm("int 0x3c");
    (fsave) *di;
    goto L00003ace;
    asm("int 0x3c");
    (fsave) *di;
    goto L00003ace;
    *%es:di] = *%es:di] & 0xf0;
    asm("int 0x3c");
    (fsave)tword [di];
L00003ace:
    bx = 0;
    cx = cx << 1;
    asm("rcl bx,1");
    asm("les di,[bp+0xc]");
    *%es:di] = bx;
    asm("int 0x35");
    asm("in ax,0xcd");
    *(bp - 0xc) :: di;
    asm("int 0x3d");
    ah = *(bp - 0xc) & 0x47;
    if(ah != 0x40) {
        if(ah != 5) {
            if(ah != 1) {
                goto L00003b2a;
            }
            dx = 32766;
        } else {
            dx = 32767;
        }
    } else {
L00003b04:
        dx = 1;
        al = 0x30;
        cx = *(bp + 0x10);
        if(cx <= 0) {
            cx = ~cx + 1;
        }
        if(cx > 0x28) {
            cx = 0x28;
        }
        asm("cld");
        asm("les di,[bp+0x8]");
        asm("rep stosb");
        *di = 0;
    }
    asm("int 0x39");
    asm("fsubr st1");
L00003b27:
    *(bx + di) = *(bx + di) ^ al;
L00003b2a:
    asm("int 0x35");
    asm("ror ch,0x37");
    if(di = di + 1) {
        goto L00003b27;
    }
    asm("int 0x3d");
    ax = *(bp - 2) - 0x3fff;
    dx = 0x4d10;
    asm("imul dx");
    asm("xchg ax,bx");
    ah = 0x4d;
    al = *(bp - 3) << 1;
    asm("mul ah");
    ax = ax + bx;
    asm("adc dx,+0x0");
    ax = ~ax;
    asm("adc dx,+0x0");
    ax = *(bp + 0x10);
    if(ax <= 0 && (ax = ~ax + dx)) {
        goto L00003b04;
    }
    if(ax > 0x12) {
        ax = 0x12;
    }
    bx = ax;
    si = ax;
    if(!(ax = ax - dx)) {
        >= ? L00003b73 : ;
        ax = ~ax;
        L00000381(ax);
        (restore)ax;
        if(ax > 0x1344) {
            asm("int 0x39");
            (fsave)(frestore) * st5;
            ax = ax ^ 0xbee;
        }
        *(bx + 5) = *(bx + 5) / *(bx + 5);
        edx = *(bx + 5) % *(bx + 5);
        asm("int 0x3a");
        asm("stc");
        goto L00003b91;
        asm("int 0x3a");
        (restore)bp;
    }
L00003b91:
    (save)bx;
    L00000381();
    (restore)ax;
    asm("int 0x34");
    asm("fxch st5");
    *(bp - 0xc) :: di;
    asm("int 0x3d");
    if(!( *(bp - 0xb) & 0x45)) {
        dx = dx + 1;
        bx = bx + 1;
        if(bx > 0x12) {
            goto L00003bb4;
        }
        if(*(bp + 0x10) > 0) {
L00003bb4:
            asm("int 0x3a");
            <= ? L00003baa : ;
            bx = bx - 1;
        }
    } else {
        L00000381(bx - 1);
        (restore)ax;
        asm("int 0x34");
        asm("fxch st5");
        *(bp - 0xc) :: di;
        asm("int 0x3d");
        if(!( *(bp - 0xb) & 0x41)) {
            dx = dx - 1;
            bx = bx - 1;
            if(*(bp + 0x10) > 0) {
                asm("int 0x3a");
L00003bde:
                asm("repne inc bx");
            }
        }
    }
    asm("int 0x35");
    asm("cld");
    asm("int 0x3b");
    if(si = si - 1) {
        goto L00003bde;
    }
    asm("les di,[bp+0x8]");
    di = di + bx;
    (save)di;
    al = 0;
    asm("std");
    *di = al;
    di = di + 1;
    si = bp - 0xa;
    cx = 4;
    asm("int 0x3d");
    if(bx == 0) {
        ch = *%ss:si] ^ 1;
    } else {
        do {
            al = *%ss:si];
            si = si + 1;
            ax = (al >> cl & 0xf) + 0x3030;
            *di = al;
            di = di + 1;
            ch = ch | al;
            if(bx = bx - 1) {
                break;
            }
            al = ah;
            *di = al;
            di = di + 1;
            ch = ch | al;
        } while(bx = bx - 1);
    }
    (restore)bx;
    if(!(ch = ch & 0xf)) {
        dx = dx + 1;
        *%es:bx] = 0x30;
        bx = bx + 1;
        *%es:di+0x1] = 0x31;
    }
    cx = *(bp + 0x10);
    if(cx <= 0) {
        cx = ~cx + dx;
    }
    if(cx > 0x28) {
        cx = 0x28;
    }
    *%es:bx] = 0;
    if(!(cx = cx - bx - *(bp + 8))) {
        *%es:bx] = 0x30;
        bx = bx + 1;
        asm("loop 0x3c52");
    }
    asm("cld");
    (restore)es;
    ax = dx;
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf 0x10");
}

/*	Procedure: 0x00003C66 - 0x00003CA0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003C66()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    if(si >= 0) {
        if(si > 0x58) {
L00003c76:
            si = 0x57;
        }
        *L0000030E = si;
        al = *(si + 0x310);
        asm("cbw");
        asm("xchg ax,si");
    } else {
        si = ~si;
        if(si > 0x23) {
            goto L00003c76;
        }
        *L0000030E = 65535;
    }
    *L0000007F = si;
    ax = 65535;
    (restore)si;
    (restore)bp;
    asm("retf 0x2");
}

/*	Procedure: 0x00003CA1 - 0x00003CA1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003CA1()
{



    asm("retf");
}

/*	Procedure: 0x00003CA2 - 0x00003CD4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003CA2()
{



    (save)bp;
    for(bp = sp; 1; *(( *L00000378 << 1 << 1) + 0x62e)()) {
        ax = *L00000378;
        *L00000378 = *L00000378 - 1;
        if(ax == 0) {
            break;
        }
    }
    *L0000036a();
    *L0000036e();
    *L00000372();
    L00000000( *(bp + 6));
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00003CD5 - 0x00003D03
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003CD5()
{



    (save)bp;
    bp = sp;
    if(*L00000378 == 0x20) {
        ax = 1;
    } else {
        dx = *(bp + 8);
        ax = *(bp + 6);
        bx = *L00000378 << 1 << 1;
        *(bx + 0x630) = dx;
        *(bx + 0x62e) = ax;
        *L00000378 = *L00000378 + 1;
        ax = 0;
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00003D04 - 0x00003D18
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003D04()
{



    bp = sp;
    ax = *(bp + 6);
    L000003d0(ax, 0, bp);
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00003D19 - 0x00003D80
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003D19()
{



    (save)bp;
    bp = sp;
    asm("les bx,[bp+0x6]");
    *L00000384 = *%es:bx+0xe];
    *L00000382 = *%es:bx+0xc];
    cx = *(bp + 8);
    bx = *(bp + 6);
    L00000000();
    if(!(sp = sp - 4)) {
        *L00000384 = 0;
        *L00000382 = 0;
    } else {
        asm("les bx,[bp+0x6]");
        asm("les bx,[%es:bx+0x8]");
        *(bp - 2) = es;
        *(bp - 4) = bx;
        dx = *(bp - 2);
        ax = *(bp - 4);
        asm("les bx,[0x382]");
        *%es:bx+0xa] = dx;
        *%es:bx+0x8] = ax;
        dx = *L00000384;
        ax = *L00000382;
        asm("les bx,[bp-0x4]");
        *%es:bx+0xe] = dx;
        *%es:bx+0xc] = ax;
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00003D81 - 0x00003E30
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003D81()
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
    dx = *L00000380;
    ax = *L0000037E;
    L00000000();
    if(!(ax = *(bp + 0xa) + 1)) {
        asm("les bx,[bp-0x4]");
        *L00000380 = es;
        *L0000037E = bx;
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

/*	Procedure: 0x00003E31 - 0x00003E9E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003E31()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    *(bp - 2) = dx;
    *(bp - 4) = L00000401( *(bp + 6), *(bp + 8));
    if(*(bp - 2) == -1) {
        if(*(bp - 4) != -1) {
            goto L00003e5c;
        }
        dx = 0;
        ax = 0;
    } else {
L00003e5c:
        dx = *L00000380;
        ax = *L0000037E;
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
        *L00000380 = es;
        *L0000037E = bx;
        dx = *L00000380;
        ax = *L0000037E + 8;
    }
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00003E9F - 0x00003F04
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003E9F()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    *(bp - 2) = dx;
    *(bp - 4) = L00000401( *(bp + 6), *(bp + 8));
    if(*(bp - 2) == -1) {
        if(*(bp - 4) != -1) {
            goto L00003eca;
        }
        dx = 0;
        ax = 0;
    } else {
L00003eca:
        asm("les bx,[bp-0x4]");
        *L0000037C = es;
        *L0000037A = bx;
        asm("les bx,[bp-0x4]");
        *L00000380 = es;
        *L0000037E = bx;
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

/*	Procedure: 0x00003F05 - 0x00004013
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003F05()
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
        dx = *L0000037C;
        ax = *L0000037A;
        L00000000();
        if(!( *(bp + 8) = dx & 65535)) {
            (save) *(bp + 8);
            L00003E9F(cs, *(bp + 6));
        } else {
            *(bp - 2) = *L00000384;
            *(bp - 4) = *L00000382;
            cx = 0;
            bx = 0;
            L00000000();
            != ? 0x3f6f : ;
            goto L00004002;
L00003f6f:
            asm("les bx,[bp-0x4]");
            dx = *%es:bx+0x2];
            ax = *%es:bx];
            cx = *(bp + 8);
            bx = *(bp + 6) + 0x30;
            asm("adc cx,+0x0");
            if(dx >= cx) {
                != ? 0x3f8f : ;
                if(ax < bx) {
                    goto L00003fa4;
                }
                (save) *(bp + 8);
                (save) *(bp + 6);
                (save) *(bp - 2);
                L00003D81(cs, *(bp - 4));
            } else {
L00003fa4:
                asm("les bx,[bp-0x4]");
                ax = *%es:bx];
                if(*%es:bx+0x2] >= *(bp + 8)) {
                    != ? 0x3fba : ;
                    if(ax < *(bp + 6)) {
                        goto L00003fdd;
                    }
                    (save) *(bp - 2);
                    L00003D19(cs, *(bp - 4));
                    asm("les bx,[bp-0x4]");
                    *%es:bx] = *%es:bx] + 1;
                    asm("adc word [%es:bx+0x2],+0x0");
                    dx = *(bp - 2);
                } else {
L00003fdd:
                    asm("les bx,[bp-0x4]");
                    asm("les bx,[%es:bx+0xc]");
                    *(bp - 2) = es;
                    *(bp - 4) = bx;
                    cx = *L00000384;
                    bx = *L00000382;
                    dx = *(bp - 2);
                    ax = *(bp - 4);
                    L00000000();
                    if(!(ax = *(bp - 4) + 8)) {
                        goto L00003f6f;
                    }
L00004002:
                    (save) *(bp + 8);
                    L00003E31(cs, *(bp + 6));
                }
            }
        }
    }
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004014 - 0x000040A3
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00004014(A6)
/* unknown */ void  A6;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    si = A6 + 1 - *L0000007B + 0x3f >> 6;
    if(si == *L00000386) {
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
        di = L00000417( *L0000007B, si);
        if(di == -1) {
            ax = si;
            *L00000386 = ax >> 6;
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

/*	Procedure: 0x000040A4 - 0x000040EA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000040A4()
{



    (save)bp;
    bp = sp;
    cx = *L00000089;
    bx = *L00000087;
    dx = *(bp + 8);
    ax = *(bp + 6);
    L00000000();
    < ? L000040de : ;
    cx = *L00000091;
    bx = *L0000008F;
    dx = *(bp + 8);
    ax = *(bp + 6);
    L00000000();
    > ? L000040de : ;
    (save) *(bp + 8);
    ax = L00004014( *(bp + 6)) != 0 ? 0 : 65535;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000040EB - 0x0000417B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000040EB()
{



    (save)bp;
    bp = sp;
    sp = sp - 8;
    if(*(bp + 8) >= 0x10) {
        > ? L000040ff : ;
        if(*(bp + 6) <= 0) {
            goto L00004107;
        }
        dx = 65535;
        ax = 65535;
    } else {
L00004107:
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
        < ? L00004149 : ;
        cx = *L00000091;
        bx = *L0000008F;
        dx = *(bp - 6);
        ax = *(bp - 8);
        L00000000();
        <= ? L00004151 : ;
        dx = 65535;
        ax = 65535;
        goto L00004178;
        asm("les bx,[0x8b]");
        *(bp - 2) = es;
        *(bp - 4) = bx;
        (save) *(bp - 6);
        if(L00004014( *(bp - 8)) == 0) {
            dx = 65535;
            ax = 65535;
        } else {
            dx = *(bp - 2);
            ax = *(bp - 4);
        }
    }
L00004178:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000417C - 0x0000419B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000417C()
{



    (save)bp;
    bp = sp;
    ah = 0x4a;
    bx = *(bp + 8);
    es = *(bp + 6);
    asm("int 0x21");
    < ? L00004190 : ;
    ax = 65535;
    goto L0000419a;
    (save)bx;
    (save)ax;
    L000003c6();
    (restore)ax;
L0000419a:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000419C - 0x0000428D
 *	Argument size: 4
 *	Local size: 4
 *	Save regs size: 8
 */

L0000419C(Ac)
/* unknown */ void  Ac;
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vffffffff;



    si = 0;
    Vfffffffc = 0;
    di = 0;
    asm("les bx,[bp+0xc]");
    Ac = Ac + 1;
    al = *%es:bx];
    Vffffffff = al;
    if(Vffffffff == 0x72) {
        si = 1;
        di = 1;
    } else {
        if(Vffffffff == 0x77) {
            si = 0x302;
            Vfffffffc = 0x80;
            di = 2;
        } else {
            if(Vffffffff == 0x61) {
                si = 0x902;
                Vfffffffc = 0x80;
                di = 2;
            } else {
                ax = 0;
                goto L00004286;
            }
        }
    }
    asm("les bx,[bp+0xc]");
    Vffffffff = *%es:bx];
    Ac = Ac + 1;
    if(Vffffffff != 0x2b) {
        asm("les bx,[bp+0xc]");
        if(*%es:bx] != 0x2b || Vffffffff != 0x74 && Vffffffff != 0x62) {
            goto L00004238;
        }
    }
    if(Vffffffff == 0x2b) {
        asm("les bx,[bp+0xc]");
        Vffffffff = *%es:bx];
    }
    si = si & 65532 | 4;
    Vfffffffc = 0x180;
    di = 3;
L00004238:
    if(Vffffffff == 0x74) {
        si = si | 0x4000;
    } else {
        if(Vffffffff == 0x62) {
            si = si | 32768;
            di = di | 0x40;
        } else {
            si = si | *L00000540 & 49152;
            if(!(si & 32768)) {
                di = di | 0x40;
            }
        }
    }
    *L00000370 = 0x4a3;
    *L0000036E = 0xf;
    asm("les bx,[bp+0x8]");
    *%es:bx] = si;
    ax = Vfffffffc;
    asm("les bx,[bp+0x4]");
    *%es:bx] = ax;
    ax = di;
L00004286:
}

/*	Procedure: 0x0000428E - 0x00004366
 *	Argument size: 10
 *	Local size: 4
 *	Save regs size: 0
 */

L0000428E(A4, A6, A8, Aa, Ac, Ae)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
/* unknown */ void  Ac;
/* unknown */ void  Ae;
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    (save)A6;
    (save)A4;
    (save)ss;
    (save) & Vfffffffc;
    (save)ss;
    Ac = L0000419C( & Vfffffffe);
    asm("les bx,[bp+0xc]");
    *%es:bx+0x2] = Ac;
    if(Ac != 0) {
        asm("les bx,[bp+0xc]");
        if(*%es:bx+0x4] >= 0) {
            goto L000042f2;
        }
        (save)Vfffffffe;
        (save)Vfffffffc;
        Ac = L00000446(A8, Aa);
        asm("les bx,[bp+0xc]");
        *%es:bx+0x4] = al;
        if(al >= 0) {
            goto L000042f2;
        }
    }
    asm("les bx,[bp+0xc]");
    *%es:bx+0x4] = 0xff;
    asm("les bx,[bp+0xc]");
    *%es:bx+0x2] = 0;
    Ae = 0;
    Ac = 0;
    goto L00004361;
L000042f2:
    asm("les bx,[bp+0xc]");
    al = *%es:bx+0x4];
    asm("cbw");
    if(L0000047c(Ac) != 0) {
        asm("les bx,[bp+0xc]");
        *%es:bx+0x2] = *%es:bx+0x2] | 0x200;
    }
    (save)0x200;
    asm("les bx,[bp+0xc]");
    Ac = !( *%es:bx+0x2] & 0x200) ? 1 : 0;
    (save)Ac;
    (save)0;
    if(L0000047d(Ac, Ae, 0) == 0) {
        asm("les bx,[bp+0xc]");
        *%es:bx+0x10] = 0;
    } else {
        L00000491(Ac, Ae);
        Ae = 0;
        Ac = 0;
    }
L00004361:
}

/*	Procedure: 0x00004367 - 0x000043B3
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 0
 */

L00004367()
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    Vfffffffe = ds;
    Vfffffffc = 0x388;
    while(1) {
        asm("les bx,[bp-0x4]");
        if(*%es:bx+0x4] < 0) {
            break;
        }
        dx = Vfffffffe;
        ax = Vfffffffc;
        Vfffffffc = Vfffffffc + 0x14;
        cx = ds;
        if(ax >= 0x518) {
            break;
        }
    }
    asm("les bx,[bp-0x4]");
    if(*%es:bx+0x4] < 0) {
        dx = Vfffffffe;
        ax = Vfffffffc;
    } else {
        dx = 0;
        ax = 0;
    }
}

/*	Procedure: 0x000043B4 - 0x000043E9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000043B4()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    ax = L00004367();
    *(bp - 2) = dx;
    *(bp - 4) = ax;
    if(dx = dx | *(bp - 4)) {
        (save) *(bp - 2);
        (save) *(bp - 4);
        (save) *(bp + 8);
        L0000428E( *(bp + 0xa), *(bp + 0xc), *(bp + 6));
    } else {
        dx = 0;
        ax = 0;
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000043EA - 0x00004424
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000043EA()
{



    (save)bp;
    bp = sp;
    asm("les bx,[bp+0xe]");
    if(*%es:bx+0x12] != *(bp + 0xe)) {
        dx = 0;
        ax = 0;
    } else {
        L00000491( *(bp + 0xe), *(bp + 0x10));
        (save) *(bp + 0x10);
        (save) *(bp + 0xe);
        (save) *(bp + 8);
        L0000428E( *(bp + 0xa), *(bp + 0xc), *(bp + 6));
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004425 - 0x00004466
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004425()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    if(*(bp + 6) >= 0) {
        ax = L00004367();
        *(bp - 2) = dx;
        *(bp - 4) = ax;
        if(dx = dx | *(bp - 4)) {
            goto L00004444;
        }
    }
    dx = 0;
    ax = 0;
    goto L00004463;
L00004444:
    al = *(bp + 6);
    asm("les bx,[bp-0x4]");
    *%es:bx+0x4] = al;
    (save) *(bp - 2);
    (save) *(bp - 4);
    (save)0;
    L0000428E( *(bp + 8), *(bp + 0xa), 0);
L00004463:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004467 - 0x00004485
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00004467(A4)
/* unknown */ void  A4;
{



    (save)ds;
    ah = 0x3c;
    asm("lds dx,[bp+0x6]");
    asm("int 0x21");
    (restore)ds;
    < ? L0000447a : ;
    goto L00004482;
    ax = L000003c6(ax);
L00004482:
}

/*	Procedure: 0x00004486 - 0x00004499
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00004486(A4)
/* unknown */ void  A4;
{



    cx = 0;
    dx = 0;
    ah = 0x40;
    asm("int 0x21");
}

/*	Procedure: 0x0000449A - 0x00004606
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000449A()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    (save)di;
    di = *(bp + 0xa);
    if(!(di & 49152)) {
        di = di | *L00000540 & 49152;
    }
    if(!(di & 0x100)) {
    } else {
        *(bp + 0xc) = *(bp + 0xc) & *L00000542;
        if(!( *(bp + 0xc) & 0x180)) {
            (save)1;
            L000003c6();
        }
        (save)0;
        ax = L000004ed( *(bp + 6), *(bp + 8));
        *(bp - 4) = ax;
        if(*(bp - 4) == 65535) {
            ax = !( *(bp + 0xc) & 0x80) ? 0 : 1;
            *(bp - 4) = ax;
        } else {
            if(!(di & 0x400)) {
                (save)0x50;
                L000003c6();
                goto L00004601;
            } else {
                goto L0000455b;
            }
        }
        if(!(di & 0xf0)) {
            (save) *(bp + 8);
            (save) *(bp + 6);
            si = L00004467(0);
            if(si < 0) {
                ax = si;
                goto L00004601;
            }
            L000004a1(si);
            goto L00004560;
        } else {
            (save) *(bp + 8);
            (save) *(bp + 6);
            si = L00004467( *(bp - 4));
            if(si < 0) {
                ax = si;
                goto L00004601;
            }
        }
        goto L000045dc;
    }
L0000455b:
    *(bp - 4) = 0;
L00004560:
    (save)di;
    si = L00000460( *(bp + 6), *(bp + 8));
    if(si >= 0) {
        ax = L00000479(si, 0);
        *(bp - 2) = ax;
        if(!( *(bp - 2) & 0x80)) {
            di = di | 0x2000;
            if(!(di & 32768)) {
                ax = *(bp - 2) & 0xff | 0x20;
                (save)0;
                (save)ax;
                L00000479(si, 1);
            }
        } else {
            if(!(di & 0x200)) {
                L00004486(si);
            }
        }
        if(*(bp - 4) != 0 && !(di & 0xf0)) {
            (save)1;
            (save)1;
            L000004ed( *(bp + 6), *(bp + 8));
        }
    }
L000045dc:
    if(si >= 0) {
        ax = !(di & 0x300) ? 0x1000 : 0;
        ax = ax | di & 63743;
        *((si << 1) + 0x518) = ax;
    }
    ax = si;
L00004601:
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004607 - 0x00004653
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004607()
{



    (save)bp;
    bp = sp;
    (save)si;
    al = 1;
    cx = *(bp + 0xa);
    if(!(cx & 2)) {
        al = 2;
        if(!(cx & 4)) {
            al = 0;
        }
    }
    (save)ds;
    asm("lds dx,[bp+0x6]");
    ah = 0x3d;
    asm("int 0x21");
    (restore)ds;
    if(!(al = al | 0xf0 & *(bp + 0xa))) {
        si = ax;
        ax = *(bp + 0xa) & 63743 | 32768;
        *((si << 1) + 0x518) = ax;
        ax = si;
    } else {
        (save)ax;
        L000003c6();
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004654 - 0x000046A1
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 8
 */

L00004654()
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

/*	Procedure: 0x000046A2 - 0x0000472F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000046A2()
{



    bp = sp;
    if(L000004ef( *(bp + 6), *(bp + 8), bp) != 0) {
        ax = 65535;
    } else {
        if(*(bp + 0xe) == 1) {
            asm("les bx,[bp+0x6]");
            if(*%es:bx] > 0) {
                (save) *(bp + 8);
                (save) *(bp + 6);
                ax = L00004654();
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
        ax = L000004ca(ax);
        if(dx == -1) {
            if(ax != 65535) {
                goto L0000472a;
            }
            ax = 65535;
        } else {
L0000472a:
            ax = 0;
        }
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004730 - 0x00004796
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004730()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    ax = L000004ef( *(bp + 6), *(bp + 8));
    if(ax != 0) {
        dx = 65535;
        ax = 65535;
    } else {
        asm("les bx,[bp+0x6]");
        al = *%es:bx+0x4];
        asm("cbw");
        *(bp - 2) = dx;
        *(bp - 4) = L000005b4(ax);
        asm("les bx,[bp+0x6]");
        if(*%es:bx] > 0) {
            dx = *(bp - 2);
            ax = L00004654( *(bp + 6), *(bp + 8), *(bp - 4), dx);
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

/*	Procedure: 0x00004797 - 0x000047C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004797()
{



    (save)bp;
    bp = sp;
    (save)ds;
    ah = 0x44;
    al = *(bp + 8);
    bx = *(bp + 6);
    cx = *(bp + 0xe);
    asm("lds dx,[bp+0xa]");
    asm("int 0x21");
    (restore)ds;
    < ? L000047ba : ;
    if(*(bp + 8) == 0) {
        ax = dx;
    } else {
        goto L000047c2;
        (save)ax;
        L000003c6();
    }
L000047c2:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000047C4 - 0x000047D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000047C4()
{



    (save)bp;
    bp = sp;
    ax = 0x4400;
    bx = *(bp + 6);
    asm("int 0x21");
    ax = dx & 0x80;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000047D6 - 0x00004917
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000047D6()
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
        if(*L00000546 == 0) {
            ax = *(bp + 6);
            cx = ds;
            if(ax != 0x39c) {
                goto L0000481b;
            }
            *L00000546 = 1;
        } else {
L0000481b:
            if(*L00000544 == 0) {
                ax = *(bp + 6);
                cx = ds;
                if(ax == 0x388) {
                    *L00000544 = 1;
                }
            }
        }
        asm("les bx,[bp+0x6]");
        if(*%es:bx] != 0) {
            (save)1;
            (save)0;
            L00000465( *(bp + 6), *(bp + 8), 0);
        }
        asm("les bx,[bp+0x6]");
        if(!( *%es:bx+0x2] & 4)) {
            asm("les bx,[bp+0x6]");
            L0000057f( *%es:bx+0x8], *%es:bx+0xa]);
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
            *L0000036C = 0x4a7;
            *L0000036A = 7;
            if(!(ax = *(bp + 0xa) | *(bp + 0xc))) {
                ax = L000003d0(si);
                *(bp + 0xc) = dx;
                *(bp + 0xa) = ax;
                if(!(dx = dx | *(bp + 0xa))) {
                    asm("les bx,[bp+0x6]");
                    *%es:bx+0x2] = *%es:bx+0x2] | 4;
                    goto L000048df;
                }
                ax = 65535;
                goto L00004914;
            }
L000048df:
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
L00004914:
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004918 - 0x000049E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004918()
{



    (save)bp;
    bp = sp;
    (save)si;
    si = 65535;
    asm("les bx,[bp+0x6]");
    ax = *%es:bx+0x12];
    if(ax != *(bp + 6)) {
        ax = si;
    } else {
        asm("les bx,[bp+0x6]");
        if(*%es:bx+0x6] != 0) {
            asm("les bx,[bp+0x6]");
            if(*%es:bx] < 0) {
                ax = L000004ef( *(bp + 6), *(bp + 8));
                if(ax == 0) {
                    goto L0000495b;
                }
                ax = si;
                goto L000049e5;
            }
L0000495b:
            asm("les bx,[bp+0x6]");
            if(!( *%es:bx+0x2] & 4)) {
                asm("les bx,[bp+0x6]");
                ax = L0000057f( *%es:bx+0x8], *%es:bx+0xa]);
            }
        }
        asm("les bx,[bp+0x6]");
        if(*%es:bx+0x4] >= 0) {
            asm("les bx,[bp+0x6]");
            al = *%es:bx+0x4];
            asm("cbw");
            si = L0000049e(ax);
        }
        asm("les bx,[bp+0x6]");
        *%es:bx+0x2] = 0;
        asm("les bx,[bp+0x6]");
        *%es:bx+0x6] = 0;
        asm("les bx,[bp+0x6]");
        *%es:bx] = 0;
        asm("les bx,[bp+0x6]");
        *%es:bx+0x4] = 0xff;
        asm("les bx,[bp+0x6]");
        if(*%es:bx+0x10] != 0) {
            (save)0;
            (save)0;
            asm("les bx,[bp+0x6]");
            (save) *%es:bx+0x10];
            L000004e7(L000004dc(), dx);
            asm("les bx,[bp+0x6]");
            *%es:bx+0x10] = 0;
        }
        ax = si;
    }
L000049e5:
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000049E8 - 0x00004A18
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000049E8()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    if(si < 0 || si >= 0x14) {
        (save)6;
        L000003c6();
    } else {
        *((si << 1) + 0x518) = 65535;
        L000004a1(si);
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004A19 - 0x00004A3E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004A19()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    ah = 0x3e;
    bx = si;
    asm("int 0x21");
    < ? L00004a34 : ;
    *((bx << 1) + 0x518) = 65535;
    ax = 0;
    goto L00004a3c;
    (save)ax;
    L000003c6();
L00004a3c:
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004A3F - 0x00004A76
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004A3F()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = 0xf;
    *(bp - 2) = ds;
    for(*(bp - 4) = 0x3ec; si = si - 1; *(bp - 4) = *(bp - 4) + 0x14) {
        asm("les bx,[bp-0x4]");
        if(!( *%es:bx+0x2] & 3)) {
            L00000491( *(bp - 4), *(bp - 2));
        }
    }
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004A77 - 0x00004AB0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004A77()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = 4;
    *(bp - 2) = ds;
    for(*(bp - 4) = 0x388; si != 0; *(bp - 4) = *(bp - 4) + 0x14) {
        asm("les bx,[bp-0x4]");
        if(!( *%es:bx+0x2] & 3)) {
            L000004ef( *(bp - 4), *(bp - 2));
        }
        si = si - 1;
    }
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004AB1 - 0x00004C16
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004AB1()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x8e;
    (save)si;
    (save)di;
    if(*(bp + 0xc) + 1 < 2) {
        ax = 0;
    } else {
        if(!( *(( *(bp + 6) << 1) + 0x518) & 32768)) {
            (save) *(bp + 0xc);
            (save) *(bp + 0xa);
            L000004c1( *(bp + 6), *(bp + 8));
        } else {
            bx = *(bp + 6) << 1;
            *(bx + 0x518) = *(bx + 0x518) & 65023;
            asm("les bx,[bp+0x8]");
            *(bp + 65404) = es;
            *(bp + 65402) = bx;
            *(bp + 65398) = *(bp + 0xc);
            es = ss;
            *(bp + 65396) = es;
            *(bp + 65394) = bp + 65406;
            goto L00004bbd;
L00004b97:
            ax = di < 0 ? 65535 : *(bp + 0xc) - *(bp + 65398) + di - si;
            goto L00004c11;
L00004bbd:
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
                != ? 0x4b6a : ;
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
                di = L000004c1( *(bp + 6), bp + 65406);
                if(di != si) {
                    goto L00004b97;
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
                di = L000004c1( *(bp + 6), bp + 65406);
                if(di == si) {
                    goto L00004c0c;
                }
                ax = di < 0 ? 65535 : *(bp + 0xc) + di - si;
            } else {
L00004c0c:
                ax = *(bp + 0xc);
            }
        }
    }
L00004c11:
    (restore)di;
    (restore)si;
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004C17 - 0x00004C62
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004C17()
{



    (save)bp;
    bp = sp;
    if(!( *(( *(bp + 6) << 1) + 0x518) & 0x800)) {
        ax = L000004ca( *(bp + 6), 0, 0, 2);
    }
    (save)ds;
    ah = 0x40;
    bx = *(bp + 6);
    cx = *(bp + 0xc);
    asm("lds dx,[bp+0x8]");
    asm("int 0x21");
    (restore)ds;
    < ? L00004c59 : ;
    (save)ax;
    *(( *(bp + 6) << 1) + 0x518) = *(( *(bp + 6) << 1) + 0x518) | 0x1000;
    (restore)ax;
    goto L00004c61;
    (save)ax;
    L000003c6();
L00004c61:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004C63 - 0x00004CA1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004C63()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)0;
    si = L000004ed( *(bp + 6), *(bp + 8));
    if(si == -1) {
        ax = si;
    } else {
        if(*(bp + 0xa) & 2 || !(si & 1)) {
            ax = 0;
        } else {
            *L0000007F = 5;
            ax = 65535;
        }
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004CA2 - 0x00004CCE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004CA2()
{



    (save)bp;
    bp = sp;
    ah = 0x42;
    al = *(bp + 0xc);
    bx = *(bp + 6);
    cx = *(bp + 0xa);
    dx = *(bp + 8);
    asm("int 0x21");
    if(!( *(( *(bp + 6) << 1) + 0x518) = *(( *(bp + 6) << 1) + 0x518) & 65023)) {
    } else {
        (save)ax;
        L000003c6();
        asm("cwd");
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004CCF - 0x00004D52
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004CCF()
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
                    goto L00004d21;
                }
            }
        }
L00004d19:
        bx = bx / bx;
        edx = bx % bx & 65535;
        *%ss:si] = dl;
        si = si + 1;
L00004d21:
        if(ax != 0) {
            goto L00004d19;
        }
        cx = ~(bp - 0x22) + si;
        asm("cld");
        si = si - 1;
        al = !(al = *%ss:si] - 0xa) ? al + 0x3a : al + *(bp + 6);
        *di = al;
        di = di + 1;
        asm("loop 0x4d2d");
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

/*	Procedure: 0x00004D53 - 0x00004D7F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004D53()
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
    L00004CCF();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004D80 - 0x00004D9F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004D80()
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
    L00004CCF();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004DA0 - 0x00004DCA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004DA0()
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
    L00004CCF();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004DCB - 0x00004E31
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004DCB()
{



    (save)bp;
    bp = sp;
    if(!(ax = *(bp + 8) | *(bp + 0xa))) {
        *(bp + 0xa) = ds;
        *(bp + 8) = 0x6b0;
    }
    asm("les bx,[bp+0x8]");
    *%es:bx] = 0;
    L000004E9( *(bp + 8), *(bp + 0xa), 0x548, ds);
    dx = *(bp + 0xa);
    ax = *(bp + 6);
    L000004cc(ax, 0, *(bp + 8) + 3, dx, 0xa);
    L000004E9( *(bp + 8), *(bp + 0xa), 0x54c, ds);
    dx = *(bp + 0xa);
    ax = *(bp + 8);
    (restore)bp;
    asm("retf 0x6");
}

/*	Procedure: 0x00004E32 - 0x00004E7A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004E32()
{



    (save)bp;
    bp = sp;
    do {
        (save) *(bp + 8);
        (save) *(bp + 6);
        ax = *L000006AE != -1 ? 1 : 2;
        *L000006AE = *L000006AE + ax;
        (save) *L000006AE;
        (save)cs;
        *(bp + 8) = dx;
        *(bp + 6) = L00004DCB();
    } while(L000004c6( *(bp + 6), *(bp + 8), 0) != 65535);
    dx = *(bp + 8);
    ax = *(bp + 6);
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004E7B - 0x00004E96
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004E7B()
{



    (save)bp;
    bp = sp;
    (save)ds;
    ah = 0x41;
    asm("lds dx,[bp+0x6]");
    asm("int 0x21");
    (restore)ds;
    < ? L00004e8d : ;
    ax = 0;
    goto L00004e95;
    (save)ax;
    L000003c6();
L00004e95:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004E97 - 0x00004ED8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004E97()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    asm("cld");
    (save)ds;
    asm("les di,[bp+0x6]");
    dx = di;
    al = 0;
    cx = 65535;
    asm("repne scasb");
    (save)es;
    si = di - 1;
    asm("les di,[bp+0xa]");
    cx = 65535;
    asm("repne scasb");
    cx = !cx;
    di = di - cx;
    ds = es;
    (restore)es;
    asm("xchg si,di");
    if(!(si & 1)) {
        *di = *si;
        di = di + 1;
        si = si + 1;
    }
    cx = cx >> 1;
    asm("rep movsw");
    if(!(cx = cx - 1)) {
        *di = *si;
        di = di + 1;
        si = si + 1;
    }
    ax = dx;
    dx = es;
    (restore)ds;
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004ED9 - 0x00004EF9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004ED9()
{



    (save)bp;
    bp = sp;
    (save)ds;
    ah = 0x43;
    al = *(bp + 0xa);
    cx = *(bp + 0xc);
    asm("lds dx,[bp+0x6]");
    asm("int 0x21");
    (restore)ds;
    < ? L00004ef0 : ;
    asm("xchg ax,cx");
    goto L00004ef8;
    (save)ax;
    L000003c6();
L00004ef8:
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004EFA - 0x00004FE1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004EFA()
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
                    goto L00004f7c;
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
L00004f7c:
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
            if(L000004ab() != si) {
                asm("les bx,[bp+0x6]");
                if(*%es:bx+0x2] & 0x200) {
                    goto L00004fdb;
                }
                asm("les bx,[bp+0x6]");
                *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
                ax = 65535;
            } else {
L00004fdb:
                ax = 0;
            }
        }
    }
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00004FE2 - 0x00005005
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004FE2()
{



    (save)bp;
    bp = sp;
    (save)0x500;
    (save)0x185;
    (save)ds;
    (save)0x39c;
    (save) *(bp + 8);
    (save) *(bp + 6);
    (save)ss;
    (save)bp + 0xa;
    L00000528();
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00005006 - 0x00005024
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005006()
{



    (save)bp;
    bp = sp;
    asm("les bx,[bp+0x8]");
    *%es:bx] = *%es:bx] - 1;
    (save) *(bp + 0xa);
    (save) *(bp + 8);
    al = *(bp + 6);
    asm("cbw");
    L00000500(ax);
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00005025 - 0x0000516B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005025()
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
            goto L0000509d;
        }
        asm("les bx,[bp+0x8]");
        if(!( *%es:bx+0x2] & 2)) {
            goto L0000509d;
        }
        asm("les bx,[bp+0x8]");
        *%es:bx+0x2] = *%es:bx+0x2] | 0x100;
        asm("les bx,[bp+0x8]");
        if(*%es:bx+0x6] == 0) {
            goto L000050f9;
        }
        asm("les bx,[bp+0x8]");
        if(*%es:bx] == 0) {
            asm("les bx,[bp+0x8]");
            dx = 65535 - *%es:bx+0x6];
            asm("les bx,[bp+0x8]");
            *%es:bx] = dx;
        } else {
            if(L000004ef( *(bp + 8), *(bp + 0xa)) != 0) {
                goto L000050d9;
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
        if(*(bp - 1) != 0xa && *(bp - 1) != 0xd || L000004ef( *(bp + 8), *(bp + 0xa)) == 0) {
            goto L00005079;
        }
        ax = 65535;
    } else {
L00005079:
        al = *(bp - 1);
        ah = 0;
        goto L00005168;
L0000509d:
        asm("les bx,[bp+0x8]");
        *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
        ax = 65535;
        goto L00005168;
L000050d9:
        ax = 65535;
        goto L00005168;
L000050f9:
        if(*(bp - 1) == 0xa) {
            asm("les bx,[bp+0x8]");
            if(!( *%es:bx+0x2] & 0x40)) {
                (save)1;
                (save)ds;
                ax = 0x584;
                (save)0x584;
                asm("les bx,[bp+0x8]");
                al = *%es:bx+0x4];
                asm("cbw");
                (save)ax;
                sp = sp + 8;
                if(L000004c1() != 1) {
                    goto L00005148;
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
        if(L000004c1() != 1) {
L00005148:
            asm("les bx,[bp+0x8]");
            if(*%es:bx+0x2] & 0x200) {
                goto L00005161;
            }
            asm("les bx,[bp+0x8]");
            *%es:bx+0x2] = *%es:bx+0x2] | 0x10;
            ax = 65535;
        } else {
L00005161:
            al = *(bp - 1);
            ah = 0;
        }
    }
L00005168:
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000516C - 0x00005184
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000516C()
{



    (save)bp;
    (save)si;
    si = *(sp + 6);
    (save)ds;
    (save)0x39c;
    L00005025(cs, si);
    (restore)si;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00005185 - 0x0000527F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005185()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    si = *(bp + 0xa);
    di = si;
    asm("les bx,[bp+0x6]");
    if(!( *%es:bx+0x2] & 8)) {
        goto L000051be;
L000051b9:
        ax = 0;
        goto L0000527a;
L000051be:
        do {
            ax = si;
            si = si - 1;
            if(ax == 0) {
                goto L000051c5;
            }
            (save) *(bp + 8);
            (save) *(bp + 6);
            asm("les bx,[bp+0xc]");
            *(bp + 0xc) = *(bp + 0xc) + 1;
            al = *%es:bx];
            asm("cbw");
        } while(L00005025(cs, ax) != 65535);
        goto L000051b9;
L000051c5:
    } else {
        asm("les bx,[bp+0x6]");
        if(!( *%es:bx+0x2] & 0x40)) {
            asm("les bx,[bp+0x6]");
            if(*%es:bx+0x6] == 0) {
                goto L0000526f;
            }
            asm("les bx,[bp+0x6]");
            ax = *%es:bx+0x6];
            if(ax >= si) {
                goto L0000526f;
            }
            asm("les bx,[bp+0x6]");
            if(*%es:bx] != 0) {
                ax = L000004ef( *(bp + 6), *(bp + 8));
                if(ax == 0) {
                    goto L00005207;
                }
                ax = 0;
                goto L0000527a;
            }
L00005207:
            (save)si;
            (save) *(bp + 0xe);
            (save) *(bp + 0xc);
            asm("les bx,[bp+0x6]");
            al = *%es:bx+0x4];
            asm("cbw");
            (save)ax;
            sp = sp + 8;
            if(L000004c1() < si) {
                ax = 0;
                goto L0000527a;
            }
        } else {
            goto L0000526f;
L0000526b:
            ax = 0;
            goto L0000527a;
L0000526f:
            do {
                ax = si;
                si = si - 1;
                if(ax == 0) {
                    goto L00005276;
                }
                asm("les bx,[bp+0x6]");
                if(*%es:bx] = *%es:bx] + 1) {
                    (save) *(bp + 8);
                    (save) *(bp + 6);
                    asm("les bx,[bp+0xc]");
                    *(bp + 0xc) = *(bp + 0xc) + 1;
                    ax = L00005006(cs, *%es:bx]);
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
            goto L0000526b;
        }
    }
L00005276:
    ax = di;
L0000527a:
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf 0xa");
}

/*	Procedure: 0x00005280 - 0x000052AA
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00005280(A4)
/* unknown */ void  A4;
{



    cx = 0xf04;
    bx = 0x58d;
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

/* DEST BLOCK NOT FOUND: 000052c2 -> 0000530a */
/*	Procedure: 0x000052AB - 0x000052C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000052AB()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x98;
    (save)si;
    (save)di;
    *(bp - 0x58) = 0;
    *(bp - 0x55) = 0x50;
    *(bp - 2) = 0;
    goto L0000530a;
}

/*	Procedure: 0x000052C4 - 0x000052D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L000052C4()
{
	/* unknown */ void  di;



    cx = 65535;
    al = 0;
    asm("repne scasb");
    cx = !cx - 1;
}

/* DEST BLOCK NOT FOUND: 000052d8 -> 00005309 */
/*	Procedure: 0x000052D1 - 0x000052D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000052D1()
{



    *%ss:di] = al;
    di = di + 1;
    *(bp - 0x55) = *(bp - 0x55) - 1;
    <= ? L00005309 : ;
}

stack space not deallocated on return
/*	Procedure: 0x000052DA - 0x000057F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L000052DA()
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
L00005313:
    di = *(bp + 65386);
L00005317:
    asm("les si,[bp+0xa]");
L0000531a:
    asm("%e lodsb");
    if(al != 0) {
        if(al == 0x25) {
            goto L00005335;
        }
L00005324:
        *%ss:di] = al;
        di = di + 1;
        if(*(bp - 0x55) = *(bp - 0x55) - 1) {
            goto L0000531a;
        }
        ax = L000052DA();
        goto L0000531a;
    }
    goto L000057d0;
L00005335:
    *(bp + 65398) = si;
    asm("%e lodsb");
    if(al == 0x25) {
        goto L00005324;
    }
    *(bp + 65386) = di;
    *(bp + 65396) = 0;
    *(bp + 65384) = 0x20;
    *(bp + 65395) = 0;
    *(bp + 65390) = 65535;
    *(bp + 65392) = 65535;
    goto L00005363;
L00005361:
    asm("%e lodsb");
L00005363:
    dx = 0;
    if(0xe0 < 0x60) {
        eax = *(bx + 0x59d) & 65535;
        if(ax > 0x17) {
            goto L000057ba;
        }
        bx = ax << 1;
        goto ( *(bx + 0x108));
        (save)bx;
        *(bp + di) = *(bp + di) + di;
        *(si + 0x4701) = *(si + 0x4701) + dx;
        *(si + 50689) = *(si + 50689) + di;
        *(bx + si) = *(bx + si) + cx;
        dl = dl + *(bp + si);
        ah = ah + *(bp + si);
        bh = bh + *(bp + si + 1);
        (restore)ax;
        ah = ah + dh + *(bp + si) + *L00003A02;
        bx = bl + *(bp + di + 0x3803) + *(bp + si + 3);
        ax = ax | *di;
        al :: *di;
        al :: *di;
        al :: *di;
        *(bx + si + 1) = *(bx + si + 1) + esi;
    }
    goto L000057ba;
    if(ch <= 0) {
        *(bp + 65384) = *(bp + 65384) | 1;
        goto L00005361;
        if(ch > 0) {
            goto L000057ba;
        }
        *(bp + 65384) = *(bp + 65384) | 2;
        goto L00005361;
        if(ch > 0) {
            goto L000057ba;
        }
        if(*(bp + 65395) != 0x2b) {
            *(bp + 65395) = dl;
        }
        goto L00005361;
        *(bp + 65384) = *(bp + 65384) & -33;
        ch = 5;
        goto L00005361;
        *(bp + 65384) = *(bp + 65384) | 0x20;
        ch = 5;
        goto L00005361;
        if(ch <= 0) {
            if(!( *(bp + 65384) & 2)) {
                *(bp + 65384) = *(bp + 65384) | 8;
                ch = 1;
                goto L00005361;
                (save)es;
                asm("les di,[bp+0x6]");
                ax = *%es:di];
                *(bp + 6) = *(bp + 6) + 2;
                (restore)es;
                if(ch >= 2) {
                    goto L0000542e;
                }
                *(bp + 65390) = ax;
                ch = 3;
            }
            goto L00005361;
L0000542e:
            if(ch != 4) {
                goto L000057ba;
            }
            *(bp + 65392) = ax;
            ch = ch + 1;
            goto L00005361;
            if(ch >= 4) {
                goto L000057ba;
            }
            ch = 4;
            goto L00005361;
        }
        asm("xchg ax,dx");
        al = al - 0x30;
        asm("cbw");
        if(ch <= 2) {
            ch = 2;
            asm("xchg ax,[bp+0xff6e]");
            if(ax < 0) {
                goto L00005361;
            }
            ax = ax << 1;
            dx = ax;
            ax = (ax << 1 << 1) + dx;
            *(bp + 65390) = *(bp + 65390) + ax;
            goto L00005361;
        }
        if(ch != 4) {
            goto L000057ba;
        }
        asm("xchg ax,[bp+0xff70]");
        if(ax < 0) {
            goto L00005361;
        }
        ax = ax << 1;
        dx = ax;
        ax = (ax << 1 << 1) + dx;
        *(bp + 65392) = *(bp + 65392) + ax;
        goto L00005361;
        *(bp + 65384) = *(bp + 65384) | 0x10;
        ch = 5;
        goto L00005361;
        *(bp + 65384) = *(bp + 65384) | 0x100;
        *(bp + 65384) = *(bp + 65384) & -17;
        ch = 5;
        goto L00005361;
        *(bp + 65384) = *(bp + 65384) & -17;
        *(bp + 65384) = *(bp + 65384) | 0x80;
        ch = 5;
        goto L00005361;
        bh = 8;
        goto L000054c0;
        bh = 0xa;
        goto L000054c5;
        bh = 0x10;
        bl = 0xe9 + dl;
L000054c0:
        *(bp + 65395) = 0;
L000054c5:
        *(bp + 65389) = 0;
        *(bp + 65388) = dl;
        asm("les di,[bp+0x6]");
        ax = *%es:di];
        dx = 0;
        goto L000054ea;
        bh = 0xa;
        *(bp + 65389) = 1;
        *(bp + 65388) = dl;
        asm("les di,[bp+0x6]");
        ax = *%es:di];
        asm("cwd");
L000054ea:
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
                goto L0000553f;
            }
            di = *(bp + 65386);
            cx = *(bp + 65390);
            < ? L00005537 : ;
            if(cx != -1) {
                dl = !(ax = *(bp + 65384) & 8) ? 0x30 : 0x20;
                al = dl;
                ax = L000052D1();
                asm("loop 0x5530");
            }
            goto L00005317;
        }
        *(bp + 65384) = *(bp + 65384) | 4;
L0000553f:
        (save)dx;
        (save)ax;
        (save)ss;
        (save)di;
        al = bh;
        asm("cbw");
        (save)ax;
        (save) *(bp + 65389);
        (save)bx;
        L000004cc();
        es = ss;
        if(*(bp + 65392) <= 0) {
        } else {
            goto L0000568e;
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
                L00005280( *%es:bx]);
                *di = 0x3a;
                di = di + 1;
            }
            es = ss;
            L00005280();
            *%ss:di] = 0;
            *(bp + 65389) = 0;
            *(bp + 65384) = *(bp + 65384) & -5;
            cx = bp + 65400;
            di = di - cx;
            asm("xchg cx,di");
            if(*(bp + 65392) <= cx) {
                dx = cx;
            }
            goto L0000567e;
            *(bp + 0xa) = si;
            *(bp + 65388) = dl;
            asm("les di,[bp+0x6]");
            ax = *%es:di];
            *(bp + 6) = *(bp + 6) + 2;
            es = ss;
            di = bp + 65401;
            *%es:di] = 0;
            cx = 1;
            goto L000056bf;
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
                di = 0x586;
            }
            L000052C4();
            if(cx > *(bp + 65392)) {
                cx = *(bp + 65392);
            }
            goto L000056bf;
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
L0000567e:
        if(!( *(bp + 65384) & 8) && *(bp + 65390) > 0) {
L0000568e:
            L000052C4();
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
        L000052C4();
L000056bf:
        si = di;
        di = *(bp + 65386);
        bx = *(bp + 65390);
        ax = 5 & *(bp + 65384);
        if(ax == 5) {
            ah = *(bp + 65388);
            if(ah != 0x6f) {
                goto L000056ee;
            }
            if(*(bp + 65396) <= 0) {
                *(bp + 65396) = 1;
            }
        }
        goto L0000570c;
L000056ee:
        if(ah == 0x78 || ah == 0x58) {
            *(bp + 65384) = *(bp + 65384) | 0x40;
            bx = bx - 1 - 1;
            if(!( *(bp + 65396) = *(bp + 65396) - 2)) {
                *(bp + 65396) = 0;
            }
        }
L0000570c:
        cx = cx + *(bp + 65396);
        if(!( *(bp + 65384) & 2)) {
            goto L00005720;
L0000571a:
            al = 0x20;
            ax = L000052D1();
            bx = bx - 1;
L00005720:
            if(bx > cx) {
                goto L0000571a;
            }
        }
        if(!( *(bp + 65384) & 0x40)) {
            al = 0x30;
            L000052D1();
            al = *(bp + 65388);
            ax = L000052D1();
        }
        dx = *(bp + 65396);
        if(dx > 0) {
            cx = cx - dx;
            bx = bx - dx;
            al = *%es:si];
            if(al == 0x2d || al == 0x20 || al == 0x2b) {
                asm("%e lodsb");
                ax = L000052D1();
                cx = cx - 1;
            }
            asm("xchg cx,dx");
            if(!(bx = bx - 1)) {
                al = 0x30;
                ax = L000052D1();
                asm("loop 0x575e");
            }
            asm("xchg cx,dx");
        }
        < ? L0000577b : ;
        bx = bx - cx;
        asm("%e lodsb");
        *%ss:di] = al;
        di = di + 1;
        if(!( *(bp - 0x55) = *(bp - 0x55) - 1)) {
            ax = L000052DA();
        }
        asm("loop 0x576b");
        if(bx > 0) {
            cx = bx;
            al = 0x20;
            ax = L000052D1();
            asm("loop 0x5781");
        }
        goto L00005317;
        *(bp + 0xa) = si;
        asm("les di,[bp+0x6]");
        if(!( *(bp + 65384) & 0x20)) {
            di = *%es:di];
            *(bp + 6) = *(bp + 6) + 2;
            es = ds;
        } else {
            asm("les di,[%es:di]");
            *(bp + 6) = *(bp + 6) + 4;
        }
        ax = 0x50 - *(bp - 0x55) + *(bp - 0x58);
        *%es:di] = ax;
        goto L00005313;
    }
L000057ba:
    si = *(bp + 65398);
    es = *(bp + 0xc);
    di = *(bp + 65386);
    al = 0x25;
L000057c7:
    L000052D1();
    asm("%e lodsb");
    if(al != 0) {
        goto L000057c7;
    }
L000057d0:
    if(*(bp - 0x55) < 0x50) {
        L000052DA();
    }
    (restore)es;
    ax = *(bp - 2) == 0 ? *(bp - 0x58) : 65535;
    (restore)di;
    (restore)si;
    (restore)bp;
    asm("retf 0x10");
}

/*	Procedure: 0x000057F4 - 0x00005805
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000057F4()
{



    bp = sp;
    L0000057f( *(bp + 6), *(bp + 8), bp);
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x00005806 - 0x000058A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005806()
{



    bp = sp;
    cx = 0;
    bx = 0;
    dx = *L00000384;
    ax = *L00000382;
    L00000000(bp);
    if(!(sp = sp - 4)) {
        asm("les bx,[0x382]");
        asm("les bx,[%es:bx+0xc]");
        *(bp - 2) = es;
        *(bp - 4) = bx;
        dx = *(bp + 8);
        ax = *(bp + 6);
        asm("les bx,[0x382]");
        *%es:bx+0xe] = dx;
        *%es:bx+0xc] = ax;
        dx = *(bp + 8);
        ax = *(bp + 6);
        asm("les bx,[bp-0x4]");
        *%es:bx+0xa] = dx;
        *%es:bx+0x8] = ax;
        dx = *(bp - 2);
        ax = *(bp - 4);
        asm("les bx,[bp+0x6]");
        *%es:bx+0xe] = dx;
        *%es:bx+0xc] = ax;
        dx = *L00000384;
        ax = *L00000382;
        asm("les bx,[bp+0x6]");
        *%es:bx+0xa] = dx;
        *%es:bx+0x8] = ax;
    } else {
        asm("les bx,[bp+0x6]");
        *L00000384 = es;
        *L00000382 = bx;
        dx = *(bp + 8);
        ax = *(bp + 6);
        asm("les bx,[bp+0x6]");
        *%es:bx+0xa] = dx;
        *%es:bx+0x8] = ax;
        dx = *(bp + 8);
        ax = *(bp + 6);
        asm("les bx,[bp+0x6]");
        *%es:bx+0xe] = dx;
        *%es:bx+0xc] = ax;
    }
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x000058A5 - 0x0000591C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000058A5()
{



    (save)bp;
    bp = sp;
    sp = sp - 4;
    asm("les bx,[bp+0xa]");
    dx = *%es:bx+0x2];
    ax = *%es:bx];
    asm("les bx,[bp+0x6]");
    asm("adc [%es:bx+0x2],dx");
    cx = *(bp + 0xc);
    bx = *(bp + 0xa);
    dx = *L00000380;
    ax = *L0000037E;
    L00000000();
    if(!( *%es:bx] = *%es:bx] + ax)) {
        asm("les bx,[bp+0x6]");
        *L00000380 = es;
        *L0000037E = bx;
    } else {
        asm("les bx,[bp+0xa]");
        cx = *%es:bx+0x2];
        bx = *%es:bx];
        dx = *(bp + 0xc);
        ax = *(bp + 0xa);
        *(bp - 2) = dx;
        *(bp - 4) = L00000000();
        dx = *(bp + 8);
        ax = *(bp + 6);
        asm("les bx,[bp-0x4]");
        *%es:bx+0x6] = dx;
        *%es:bx+0x4] = ax;
    }
    L000003d0( *(bp + 0xa), *(bp + 0xc));
    sp = bp;
    (restore)bp;
    asm("retf");
}

/*	Procedure: 0x0000591D - 0x00005B63
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000591D()
{



    (save)bp;
    bp = sp;
    cx = *L00000380;
    bx = *L0000037E;
    dx = *L0000037C;
    ax = *L0000037A;
    L00000000();
    if(!(sp = sp - 4)) {
        L00000401( *L0000037A, *L0000037C);
        *L00000380 = 0;
        *L0000037E = 0;
        ebx = 0 & 65535;
        *L0000037C = 0;
        *L0000037A = bx;
    } else {
        asm("les bx,[0x37e]");
        asm("les bx,[%es:bx+0x4]");
        *(bp - 2) = es;
        *(bp - 4) = bx;
        asm("les bx,[bp-0x4]");
        dx = *%es:bx+0x2];
        if(!(edx = *%es:bx] & 1 & 65535)) {
            L000003d0( *(bp - 4), *(bp - 2));
            cx = *L0000037C;
            bx = *L0000037A;
            dx = *(bp - 2);
            ax = *(bp - 4);
            L00000000();
            != ? 0x59c6 : ;
            *L00000380 = 0;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
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
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
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
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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
