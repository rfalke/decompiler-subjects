/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_dcc/benchmul/ia32_mz_from_dcc_short/subject.exe'
 */

/* DEST BLOCK NOT FOUND: 0000015f -> 000001e9 */
/*	Procedure: 0x00000121 - 0x00000161
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000121()
{



    ds = *%cs:0x1f8];
    L000001A5();
    (save)cs;
    *L000005ec();
    ax = 0;
    si = 0;
    cx = 0x2f;
    asm("cld");
    al = al + *si;
    asm("adc ah,0x0");
    si = si + 1;
    asm("loop 0x137");
    if(!(ax = ax - 0xd37)) {
        cx = 0x19;
        dx = 0x2f;
        ax = L000001DA();
    }
    bp = sp;
    ah = 0x4c;
    al = *(bp + 2);
    asm("int 0x21");
    cx = 0xe;
    dx = 0x48;
    goto L000001e9;
}

/*	Procedure: 0x00000162 - 0x000001A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00000162()
{
	/* unknown */ void  ds;



    ax = 13568;
    asm("int 0x21");
    *L00000074 = bx;
    *L00000076 = es;
    ax = 13572;
    asm("int 0x21");
    *L00000078 = bx;
    *L0000007A = es;
    ax = 13573;
    asm("int 0x21");
    *L0000007C = bx;
    *L0000007E = es;
    ax = 13574;
    asm("int 0x21");
    *L00000080 = bx;
    *L00000082 = es;
    ax = 0x2500;
    ds = cs;
    dx = 0x158;
    asm("int 0x21");
}

/*	Procedure: 0x000001A5 - 0x000001D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000001A5()
{



    (save)ds;
    ax = 0x2500;
    asm("lds dx,[0x74]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2504;
    asm("lds dx,[0x78]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2505;
    asm("lds dx,[0x7c]");
    asm("int 0x21");
    (restore)ds;
    (save)ds;
    ax = 0x2506;
    asm("lds dx,[0x80]");
    asm("int 0x21");
    (restore)ds;
    return;
    *L00000096 = 0;
    asm("retf");
}

/*	Procedure: 0x000001DA - 0x000001F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000001DA()
{



    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    return;
    cx = 0x1e;
    dx = 0x56;
    ds = *%cs:0x1f8];
    L000001DA();
    (save)3;
    L00000121();
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x000001FA - 0x000002A6
 *	Argument size: 0
 *	Local size: 10
 *	Save regs size: 8
 */

L000001FA()
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffff6;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffa;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    L00000E2D(0x1a8);
    L000016B6(0x1c4, & Vfffffffc);
    (save)Vfffffffe;
    L00000E2D(0x1c8, Vfffffffc);
    si = 0x14;
    Vfffffff6 = 0x14;
    Vfffffffa = 0;
    for(Vfffffff8 = 1; 1; asm("adc word [bp-0x6],+0x0");) {
        ax = Vfffffff8;
        if(Vfffffffa >= Vfffffffe) {
            > ? L00000297 : ;
            if(ax > Vfffffffc) {
                break;
            }
        }
        for(di = 1; di <= 0x28; di = di + 1) {
            ax = si;
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            asm("mul si");
            dx = 3;
            asm("mul dx");
            si = ax;
        }
        Vfffffff8 = Vfffffff8 + 1;
    }
    return(L00000E2D(0x1e2, si));
}

/*	Procedure: 0x000002A7 - 0x000002E2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000002A7()
{



    (save)bp;
    (save)si;
    si = *(sp + 4);
    if(si >= 0) {
        if(si > 0x58) {
L000002b7:
            si = 0x57;
        }
        *L000001E8 = si;
        al = *(si + 0x1ea);
        asm("cbw");
        asm("xchg ax,si");
    } else {
        si = ~si;
        if(si > 0x23) {
            goto L000002b7;
        }
        *L000001E8 = 65535;
    }
    *L00000094 = si;
    ax = 65535;
    (restore)si;
    (restore)bp;
    return;
}

/*	Procedure: 0x000002E3 - 0x00000317
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000002E3(A4)
/* unknown */ void  A4;
{



    while(1) {
        ax = *L0000024E;
        *L0000024E = *L0000024E - 1;
        if(ax == 0) {
            break;
        }
        bx = *L0000024E << 1;
        *(bx + 0x5f8)();
    }
    *L00000244();
    *L00000246();
    *L00000248();
    return(L00000121(A4));
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 0000038a -> 000003cc */
/* DEST BLOCK NOT FOUND: 000003c9 -> 000001e2 */
/*	Procedure: 0x00000318 - 0x000003A0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000318()
{



    (restore) *%cs:0x312];
    *%cs:0x314] = ds;
    asm("cld");
    es = *L00000090;
    si = 0x80;
    ah = 0;
    asm("%e lodsb");
    ax = ax + 1;
    bp = es;
    asm("xchg dx,si");
    asm("xchg ax,bx");
    si = *L0000008A + 2;
    cx = 1;
    if(*L00000092 >= 3) {
        es = *L0000008C;
        di = si;
        cl = 0x7f;
        al = 0;
        asm("repne scasb");
        < ? L000003c9 : ;
        cl = cl ^ 0x7f;
    }
    sp = sp - 2;
    ax = 1 + bx + cx & 65534;
    if(di = sp - ax) {
        goto L000003c9;
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
L00000385:
    L000003A1();
    if(!(bx = bx + 1)) {
        < ? L000003cc : ;
        L000003A1();
        > ? L0000038a : ;
    }
    if(al != 0x20 && al != 0xd && al != 9) {
        goto L00000385;
    }
    al = 0;
    goto L00000385;
}

/* DEST BLOCK NOT FOUND: 000003c9 -> 000001e2 */
/*	Procedure: 0x000003A1 - 0x00000402
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000003A1()
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
            if(al + 0x22 == 0x5c && *si == 0x22) {
                al = *esi;
                esi = esi + 1;
                cx = cx - 1;
            }
            si :: 0;
        }
    }
    return;
    goto L000001e2;
    (restore)cx;
    cx = cx + dx;
    ds = *%cs:0x314];
    *L00000084 = bx;
    bx = bx + 1 + bx + 1;
    si = sp;
    if(bp = sp - bx) {
        goto L000001e2;
    }
    sp = bp;
    *L00000086 = bp;
L000003e9:
    < ? L000003f9 : ;
    *bp = si;
    bp = bp + 2;
    asm("%s lodsb");
    asm("loopne 0x3f1");
    if(al == 0) {
        goto L000003e9;
    }
    *bp = 0;
    goto ( *L00000312);
}

/* DEST BLOCK NOT FOUND: 00000436 -> 000001e2 */
stack space not deallocated on return
/*	Procedure: 0x00000403 - 0x00000472
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000403()
{



    ax = L00000552( *L0000008A);
    di = ax;
    if(ax != 0) {
        (save)ds;
        es = ds;
        ds = *L0000008C;
        si = 0;
        asm("cld");
        asm("rep movsb");
        (restore)ds;
        di = ax;
        (save)es;
        ax = L00000552( *L0000008E);
        bx = ax;
        (restore)es;
        *L00000088 = ax;
        if(ax != 0) {
            goto L00000439;
        }
    }
    goto L000001e2;
L00000439:
    ax = 0;
    cx = 65535;
L0000043e:
    *bx = di;
    bx = bx + 2;
    asm("repne scasb");
    if(*%es:di] != al) {
        goto L0000043e;
    }
    *bx = ax;
    return;
    (save)bp;
    bp = sp;
    if(*L0000024E == 0x20) {
        ax = 1;
    } else {
        ax = *(bp + 4);
        *(( *L0000024E << 1) + 0x5f8) = ax;
        *L0000024E = *L0000024E + 1;
        ax = 0;
    }
    (restore)bp;
}

/*	Procedure: 0x00000473 - 0x000004A0
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000473(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = *(A4 + 6);
    *L0000063A = ax;
    if(ax == A4) {
        *L0000063A = 0;
    } else {
        si = *(A4 + 4);
        *( *L0000063A + 4) = si;
        ax = *L0000063A;
        *(si + 6) = ax;
    }
}

/*	Procedure: 0x000004A1 - 0x000004DA
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 8
 */

L000004A1(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  si;



    *A4 = *A4 - A6;
    si = *A4 + A4;
    *si = A6 + 1;
    *(si + 2) = A4;
    if(*L00000638 == A4) {
        *L00000638 = si;
    } else {
        *(si + A6 + 2) = si;
    }
    ax = si + 4;
}

/*	Procedure: 0x000004DB - 0x00000517
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L000004DB(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L000005E9(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *(si + 2) = *L00000638;
        *si = A4 + 1;
        *L00000638 = si;
        ax = *L00000638 + 4;
    }
}

/*	Procedure: 0x00000518 - 0x00000551
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000518(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L000005E9(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *L0000063C = si;
        *L00000638 = si;
        *si = A4 + 1;
        ax = si + 4;
    }
}

/*	Procedure: 0x00000552 - 0x000005C4
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000552(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = A4;
    if(di == 0 || di > -12) {
        ax = 0;
    } else {
        di = di + 0xb & 65528;
        if(*L0000063C == 0) {
            ax = L00000518(di);
        } else {
            si = *L0000063A;
            if(si != 0) {
                do {
                    ax = *si;
                    if(ax >= di + 0x28) {
                        goto L00000596;
                    }
                    if(*si >= di) {
                        goto L000005a4;
                    }
                    si = *(si + 6);
                } while(si != *L0000063A);
                goto L000005ba;
L00000596:
                ax = L000004A1(si, di);
                goto L000005c1;
L000005a4:
                L00000473(si);
                *si = *si + 1;
                ax = si + 4;
            } else {
L000005ba:
                ax = L000004DB(di);
            }
        }
    }
L000005c1:
}

/*	Procedure: 0x000005C5 - 0x000005E8
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000005C5(A4)
/* unknown */ void  A4;
{



    ax = A4;
    if(ax < sp - 0x100) {
        *L0000009E = ax;
        ax = 0;
    } else {
        *L00000094 = 8;
        ax = 65535;
    }
}

/*	Procedure: 0x000005E9 - 0x0000063C
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L000005E9(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = A4 + *L0000009E;
    asm("adc dx,+0x0");
    cx = ax + 0x100;
    asm("adc dx,+0x0");
    if(A6 == 0) {
        if(cx >= sp) {
            goto L00000610;
        }
        asm("xchg ax,[0x9e]");
    } else {
L00000610:
        *L00000094 = 8;
        ax = 65535;
    }
    return;
    (save)bp;
    bp = sp;
    ax = L000005C5(A4);
    return;
    (save)bp;
    bp = sp;
    ax = A4;
    asm("cwd");
    ax = L000005E9(ax, A6);
}

/*	Procedure: 0x0000063D - 0x00000683
 *	Argument size: 4
 *	Local size: 2
 *	Save regs size: 8
 */

L0000063D(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    si = *A4;
    Vfffffffe = si;
    if(!( *(A4 + 2) & 0x40)) {
        ax = si;
    } else {
        for(di = *(A4 + 0xa); 1; Vfffffffe = Vfffffffe + 1) {
            ax = si;
            si = si - 1;
            if(ax == 0) {
                break;
            }
            bx = di;
            di = di + 1;
            if(*bx != 0xa) {
                continue;
            }
        }
        ax = Vfffffffe;
    }
}

/*	Procedure: 0x00000684 - 0x0000073C
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 4
 */

L00000684(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{
	/* unknown */ void  si;



    si = A4;
    if(L00000DAF(si) != 0) {
        ax = 65535;
    } else {
        if(Aa == 1 && *si > 0) {
            ax = L0000063D(si);
            asm("cwd");
            A6 = A6 - ax;
            asm("sbb [bp+0x8],dx");
        }
        *(si + 2) = *(si + 2) & 65119;
        *si = 0;
        ax = *(si + 8);
        *(si + 0xa) = ax;
        (save)Aa;
        (save)A8;
        (save)A6;
        al = *(si + 4);
        asm("cbw");
        (save)ax;
        ax = L00000C0A();
        sp = sp + 8;
        if(dx == -1) {
            if(ax != 65535) {
                goto L000006e1;
            }
            ax = 65535;
        } else {
L000006e1:
            ax = 0;
        }
    }
    return;
    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = A4;
    ax = L00000DAF(si);
    if(ax != 0) {
        dx = 65535;
        ax = 65535;
    } else {
        al = *(si + 4);
        asm("cbw");
        *(bp - 2) = dx;
        *(bp - 4) = L00001D30(ax);
        if(*si > 0) {
            dx = *(bp - 2);
            (save)dx;
            (save) *(bp - 4);
            ax = L0000063D(si);
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
}

/*	Procedure: 0x0000073D - 0x00000763
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L0000073D()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = 0x14;
    for(si = 0x352; 1; si = si + 0x10) {
        ax = di;
        di = di - 1;
        if(ax == 0) {
            break;
        }
        if(( *(si + 2) & 0x300) == 0x300) {
            L00000DAF(si);
        }
    }
}

/*	Procedure: 0x00000764 - 0x000007D3
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000764(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = A4;
    if(!( *(si + 2) & 0x200)) {
        L0000073D();
    }
    (save) *(si + 6);
    ax = *(si + 8);
    *(si + 0xa) = ax;
    (save)ax;
    al = *(si + 4);
    asm("cbw");
    (save)ax;
    ax = L000009D9();
    sp = sp + 6;
    *si = ax;
    if(*si > 0) {
        *(si + 2) = *(si + 2) & 65503;
        ax = 0;
        goto L000007bc;
    } else {
        if(*si == 0) {
            *(si + 2) = *(si + 2) & 65151 | 0x20;
        } else {
            *si = 0;
            *(si + 2) = *(si + 2) | 0x10;
        }
    }
    ax = 65535;
L000007bc:
    return;
    (save)bp;
    bp = sp;
    (save)si;
    si = A4;
    *si = *si + 1;
    ax = L000007D4(si);
}

/* DEST BLOCK NOT FOUND: 000008d1 -> 000008d3 */
stack space not deallocated on return
/*	Procedure: 0x000007D4 - 0x000008D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000007D4()
{



    (save)bp;
    bp = sp;
    sp = sp - 2;
    (save)si;
    si = *(bp + 4);
    while(*si = *si - 1) {
        if(( *si = *si + 1) || !( *(si + 2) & 0x110)) {
            goto L000007fb;
        }
        while(1) {
            *(si + 2) = *(si + 2) | 0x80;
            if(*(si + 6) != 0) {
                break;
            }
            if(*L000004BA != 0) {
                goto L00000863;
            }
            ax = 0x352;
            if(0x352 != si) {
                goto L00000863;
            }
            al = *(si + 4);
            asm("cbw");
            if(L000008D4(ax) == 0) {
                *(si + 2) = *(si + 2) & 65023;
            }
            (save)0x200;
            ax = *(si + 2) & 0x200 ? 0 : 1;
            (save)ax;
            L000008E6(si, 0);
        }
        ax = L00000764(si);
        if(ax != 0) {
            goto L00000819;
        }
    }
    *(si + 0xa) = *(si + 0xa) + 1;
    al = *( *(si + 0xa) - 1);
    ah = 0;
    goto L000008c4;
L000007fb:
    *(si + 2) = *(si + 2) | 0x10;
    ax = 65535;
    goto L000008c4;
L00000819:
    ax = 65535;
    goto L000008c4;
L00000863:
    do {
        if(!( *(si + 2) & 0x200)) {
            L0000073D();
        }
        (save)1;
        ax = bp - 1;
        (save)ax;
        al = *(si + 4);
        asm("cbw");
        (save)ax;
        ax = L00000A95();
        sp = sp + 6;
        if(ax != 1) {
            goto L00000885;
        }
        if(*(bp - 1) != 0xd) {
            break;
        }
    } while(*(si + 2) & 0x40);
    goto L000008b8;
L00000885:
    al = *(si + 4);
    asm("cbw");
    *(si + 2) = L00000D41(ax) != 1 ? *(si + 2) | 0x10 : *(si + 2) & 65151 | 0x20;
    ax = 65535;
    goto L000008c4;
L000008b8:
    *(si + 2) = *(si + 2) & 65503;
    al = *(bp - 1);
    ah = 0;
L000008c4:
    (restore)si;
    sp = bp;
    (restore)bp;
    return;
    L000007D4(0x352);
}

/*	Procedure: 0x000008D4 - 0x000008E5
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000008D4(A4)
/* unknown */ void  A4;
{



    ax = 17408;
    asm("int 0x21");
    return(dx & 0x80);
}

/*	Procedure: 0x000008E6 - 0x000009D8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000008E6()
{



    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    di = *(bp + 0xa);
    si = *(bp + 4);
    if(*(si + 0xe) != si || *(bp + 8) > 2 || di > 32767) {
        ax = 65535;
    } else {
        if(*L000004BC == 0) {
            if(0x362 != si) {
                goto L00000920;
            }
            *L000004BC = 1;
        } else {
L00000920:
            if(*L000004BA == 0 && 0x352 == si) {
                *L000004BA = 1;
            }
        }
        if(*si != 0) {
            (save)1;
            (save)0;
            L00000684(si, 0);
        }
        if(!( *(si + 2) & 4)) {
            L0000168F( *(si + 8));
        }
        *(si + 2) = *(si + 2) & 65523;
        *(si + 6) = 0;
        ax = si + 5;
        *(si + 8) = ax;
        *(si + 0xa) = *(si + 8);
        if(*(bp + 8) != 2 && di > 0) {
            *L00000244 = 0x9b8;
            if(*(bp + 6) == 0) {
                ax = L00000552(di);
                *(bp + 6) = ax;
                if(*(bp + 6) != 0) {
                    *(si + 2) = *(si + 2) | 4;
                    goto L00000999;
                }
                ax = 65535;
                goto L000009b4;
            }
L00000999:
            ax = *(bp + 6);
            *(si + 0xa) = ax;
            *(si + 8) = *(si + 0xa);
            *(si + 6) = di;
            if(*(bp + 8) == 1) {
                *(si + 2) = *(si + 2) | 8;
            }
        }
        ax = 0;
    }
L000009b4:
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
    (save)si;
    (save)di;
    di = 4;
    si = 0x352;
    goto L000009d2;
L000009c2:
    if(!( *(si + 2) & 3)) {
        ax = L00000DAF(si);
    }
    di = di - 1;
    si = si + 0x10;
L000009d2:
    if(di != 0) {
        goto L000009c2;
    }
    (restore)di;
    (restore)si;
}

/*	Procedure: 0x000009D9 - 0x00000A94
 *	Argument size: 8
 *	Local size: 4
 *	Save regs size: 8
 */

L000009D9(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vffffffff;



    if(A8 + 1 < 2 || !( *((A4 << 1) + 0x492) & 0x200)) {
        ax = 0;
    } else {
        while(1) {
            (save)A8;
            Vfffffffc = L00000A95(A4, A6);
            if(Vfffffffc + 1 < 2 || !( *((A4 << 1) + 0x492) & 32768)) {
                break;
            }
            cx = Vfffffffc;
            es = ds;
            di = A6;
            bx = A6;
            asm("cld");
            al = *esi;
            esi = esi + 1;
            if(al == 0x1a) {
                goto L00000a69;
            }
            if(al == 0xd) {
                asm("loop 0xa37");
                (save)es;
                (save)bx;
                (save)1;
                L00000A95(A4, & Vffffffff);
                (restore)bx;
                (restore)es;
                asm("cld");
                *di = Vffffffff;
                di = di + 1;
            } else {
                *di = al;
                di = di + 1;
                asm("loop 0xa37");
            }
            if(di != bx) {
                goto L00000a89;
            }
        }
        ax = Vfffffffc;
        goto L00000a8f;
L00000a69:
        (save)bx;
        ax = 2;
        (save)2;
        cx = ~cx;
        asm("sbb ax,ax");
        (save)ax;
        L00000C0A(A4, cx);
        *((A4 << 1) + 0x492) = *((A4 << 1) + 0x492) | 0x200;
        (restore)bx;
L00000a89:
        ax = di - bx;
    }
L00000a8f:
}

/*	Procedure: 0x00000A95 - 0x00000AB0
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A95(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    ah = 0x3f;
    asm("int 0x21");
    < ? L00000aa9 : ;
    goto L00000aaf;
    ax = L000002A7(ax);
L00000aaf:
}

/*	Procedure: 0x00000AB1 - 0x00000BC3
 *	Argument size: -130
 *	Local size: 138
 *	Save regs size: 8
 */

L00000AB1(A4, A6, A8, Aff76, Aff78, Aff7b, Aff7c, Aff7e)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aff76;
/* unknown */ void  Aff78;
/* unknown */ void  Aff7b;
/* unknown */ void  Aff7c;
/* unknown */ void  Aff7e;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    if(A8 + 1 < 2) {
        ax = 0;
    } else {
        if(!( *((A4 << 1) + 0x492) & 32768)) {
            (save)A8;
            ax = L00000BC4(A4, A6);
        } else {
            *((A4 << 1) + 0x492) = *((A4 << 1) + 0x492) & 65023;
            Aff7c = A6;
            Aff78 = A8;
            si = & Aff7e;
            goto L00000b73;
L00000b54:
            ax = Aff76 < 0 ? 65535 : A8 - Aff78 + Aff76 - di;
            goto L00000bbe;
L00000b73:
            while(Aff78 != 0) {
                Aff78 = Aff78 - 1;
                bx = Aff7c;
                Aff7c = Aff7c + 1;
                al = *bx;
                Aff7b = al;
                if(Aff7b == 0xa) {
                    *si = 0xd;
                    si = si + 1;
                }
                *si = Aff7b;
                si = si + 1;
                if(si - & Aff7e < 0x80) {
                    continue;
                }
                di = si - & Aff7e;
                (save)di;
                ax = L00000BC4(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 != di) {
                    goto L00000b54;
                }
                si = & Aff7e;
            }
            di = si - & Aff7e;
            if(di > 0) {
                (save)di;
                ax = L00000BC4(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 == di) {
                    goto L00000bb9;
                }
                ax = Aff76 < 0 ? 65535 : A8 + Aff76 - di;
            } else {
L00000bb9:
                ax = A8;
            }
        }
    }
L00000bbe:
}

/*	Procedure: 0x00000BC4 - 0x00000C09
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BC4(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    if(!( *((A4 << 1) + 0x492) & 0x800)) {
        ax = L00000C0A(A4, 0, 0, 2);
    }
    ah = 0x40;
    bx = A4;
    asm("int 0x21");
    < ? L00000c02 : ;
    (save)ax;
    *((A4 << 1) + 0x492) = *((A4 << 1) + 0x492) | 0x1000;
    (restore)ax;
    goto L00000c08;
    ax = L000002A7(ax);
L00000c08:
}

/*	Procedure: 0x00000C0A - 0x00000C34
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C0A(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{



    ah = 0x42;
    asm("int 0x21");
    if(!( *((A4 << 1) + 0x492) = *((A4 << 1) + 0x492) & 65023)) {
    } else {
        ax = L000002A7(ax);
        asm("cwd");
    }
}

/* DEST BLOCK NOT FOUND: 00000d3e -> 000001e2 */
/*	Procedure: 0x00000C35 - 0x00000D40
 *	Argument size: -20
 *	Local size: 34
 *	Save regs size: 0
 */

L00000C35(A4, A6, A8, Aa, Ac, Ae)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
/* unknown */ void  Ac;
/* unknown */ void  Ae;
{
	/* unknown */ void  Vffffffde;



    (save)si;
    (save)di;
    (save)es;
    di = Aa;
    es = ds;
    bx = A8;
    if(bx <= 0x24 && bl >= 2) {
        ax = Ac;
        cx = Ae;
        if(cx < 0 && A6 != 0) {
            *di = 0x2d;
            cx = ~cx;
            ax = ~ax;
            asm("sbb cx,+0x0");
        }
        si = & Vffffffde;
        if(!(di = di + 1)) {
L00000c70:
            asm("xchg ax,cx");
            bx = bx / bx;
            edx = bx % bx & 65535;
            asm("xchg ax,cx");
            bx = bx / bx;
            dx = bx % bx;
            *si = dl;
            if(si = si + 1) {
                goto L00000c86;
            }
            goto L00000c70;
        }
L00000c7f:
        bx = bx / bx;
        edx = bx % bx & 65535;
        *si = dl;
        si = si + 1;
L00000c86:
        if(ax != 0) {
            goto L00000c7f;
        }
        cx = ~( & Vffffffde) + si;
        asm("cld");
        al = !(al = *(si - 1) - 0xa) ? al + 0x3a : al + A4;
        *di = al;
        di = di + 1;
        asm("loop 0xc92");
    }
    *di = 0;
    di = di + 1;
    (restore)es;
    eax = Aa & 65535;
    (restore)di;
    (restore)si;
    return;
    (save)bp;
    bp = sp;
    if(A8 == 0xa) {
        ax = A4;
        asm("cwd");
    } else {
        ax = A4;
        dx = 0;
    }
    al = 1;
    ax = L00000C35(0x61, 1, A8, A6, ax, dx);
    return;
    bp = sp;
    ax = L00000C35(0x61 & 0xff, 0, Aa, A8, A4, A6, bp);
    return;
    (save)bp;
    bp = sp;
    (save)A6;
    (save)A4;
    (save)A8;
    (save)Aa;
    ax = Aa == 0xa ? 1 : 0;
    ax = L00000C35(0x61, ax);
    return;
    dx = 0x4be;
    goto L00000d28;
    dx = 0x4c3;
L00000d28:
    cx = 5;
    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    cx = 0x27;
    dx = 0x4c8;
    ah = 0x40;
    asm("int 0x21");
    goto L000001e2;
}

/*	Procedure: 0x00000D41 - 0x00000DAE
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00000D41(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    if(!( *((A4 << 1) + 0x492) & 0x200)) {
        ax = 1;
    } else {
        ax = 17408;
        asm("int 0x21");
        < ? L00000da5 : ;
        if(!(dl & 0x80)) {
            ax = 16897;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            < ? L00000da5 : ;
            (save)dx;
            (save)ax;
            ax = 16898;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            Vfffffffc = ax;
            Vfffffffe = dx;
            (restore)dx;
            (restore)cx;
            < ? L00000da5 : ;
            ax = 16896;
            asm("int 0x21");
            < ? L00000da5 : ;
            if(dx < Vfffffffe) {
                goto L00000da1;
            }
            > ? L00000d9c : ;
            if(ax < Vfffffffc) {
                goto L00000da1;
            }
            ax = 1;
        } else {
L00000da1:
            ax = 0;
            goto L00000dab;
            ax = L000002A7(ax);
        }
    }
L00000dab:
}

/*	Procedure: 0x00000DAF - 0x00000E2C
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000DAF(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  di;



    if(*(A4 + 0xe) != A4) {
        ax = 65535;
    } else {
        if(*A4 >= 0) {
            if(!( *(A4 + 2) & 8)) {
                ax = *(A4 + 0xa);
                if(ax != A4 + 5) {
                    goto L00000df1;
                }
            }
            *A4 = 0;
            ax = *(A4 + 0xa);
            if(ax == A4 + 5) {
                *(A4 + 0xa) = *(A4 + 8);
            }
L00000df1:
            ax = 0;
        } else {
            di = *(A4 + 6) + *A4 + 1;
            *A4 = *A4 - di;
            (save)di;
            ax = *(A4 + 8);
            *(A4 + 0xa) = ax;
            (save)ax;
            al = *(A4 + 4);
            asm("cbw");
            (save)ax;
            if(L00000AB1() != di) {
                if(*(A4 + 2) & 0x200) {
                    goto L00000e25;
                }
                *(A4 + 2) = *(A4 + 2) | 0x10;
                ax = 65535;
            } else {
L00000e25:
                ax = 0;
            }
        }
    }
}

/*	Procedure: 0x00000E2D - 0x00000E45
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E2D(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = L00001055( & A6, A4, 0x362, 0xf63);
}

/*	Procedure: 0x00000E46 - 0x00000E5E
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E46(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    *A6 = *A6 - 1;
    (save)A6;
    asm("cbw");
    ax = L00000E5F(ax);
}

/*	Procedure: 0x00000E5F - 0x00000F4C
 *	Argument size: 6
 *	Local size: 2
 *	Save regs size: 4
 */

L00000E5F(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  Vffffffff;



    Vffffffff = A4;
    while(*A6 = *A6 + 1) {
        *A6 = *A6 - 1;
        if(*(A6 + 2) & 0x90 || !( *(A6 + 2) & 2)) {
            goto L00000eb9;
        }
        *(A6 + 2) = *(A6 + 2) | 0x100;
        if(*(A6 + 6) == 0) {
            goto L00000ef3;
        }
        if(*A6 == 0) {
            ax = *(A6 + 6);
            *A6 = 65535 - ax;
        } else {
            ax = L00000DAF(A6);
            if(ax != 0) {
                goto L00000edd;
            }
        }
    }
    *(A6 + 0xa) = *(A6 + 0xa) + 1;
    *( *(A6 + 0xa) - 1) = Vffffffff;
    if(!( *(A6 + 2) & 8)) {
        if(Vffffffff != 0xa && Vffffffff != 0xd) {
            goto L00000ea1;
        }
        ax = L00000DAF(A6);
        if(ax == 0) {
            goto L00000ea1;
        }
        ax = 65535;
    } else {
L00000ea1:
        al = Vffffffff;
        ah = 0;
        goto L00000f48;
L00000eb9:
        *(A6 + 2) = *(A6 + 2) | 0x10;
        ax = 65535;
        goto L00000f48;
L00000edd:
        ax = 65535;
        goto L00000f48;
L00000ef3:
        if(Vffffffff == 0xa && !( *(A6 + 2) & 0x40)) {
            (save)1;
            ax = 0x4f0;
            (save)0x4f0;
            al = *(A6 + 4);
            asm("cbw");
            (save)ax;
            ax = L00000BC4();
            sp = sp + 6;
            if(ax != 1) {
                goto L00000f30;
            }
        }
        (save)1;
        ax = & A4;
        (save)ax;
        al = *(A6 + 4);
        asm("cbw");
        (save)ax;
        ax = L00000BC4();
        sp = sp + 6;
        if(ax != 1) {
L00000f30:
            if(*(A6 + 2) & 0x200) {
                goto L00000f41;
            }
            *(A6 + 2) = *(A6 + 2) | 0x10;
            ax = 65535;
        } else {
L00000f41:
            al = Vffffffff;
            ah = 0;
        }
    }
L00000f48:
}

/*	Procedure: 0x00000F4D - 0x00000F62
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000F4D(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = L00000E5F(A4, 0x362);
}

/*	Procedure: 0x00000F63 - 0x00001025
 *	Argument size: 8
 *	Local size: 2
 *	Save regs size: 8
 */

L00000F63(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    di = A6;
    Vfffffffe = di;
    if(!( *(A4 + 2) & 8)) {
        goto L00000f97;
L00000f92:
        ax = 0;
        goto L0000101e;
L00000f97:
        do {
            ax = di;
            di = di - 1;
            if(ax == 0) {
                goto L00000f9e;
            }
            (save)A4;
            bx = A8;
            A8 = A8 + 1;
            al = *bx;
            asm("cbw");
            (save)ax;
            (restore)cx;
        } while(L00000E5F() != 65535);
        goto L00000f92;
L00000f9e:
    } else {
        if(!( *(A4 + 2) & 0x40)) {
            if(*(A4 + 6) == 0) {
                goto L00001012;
            }
            ax = *(A4 + 6);
            if(ax >= di) {
                goto L00001012;
            }
            if(*A4 != 0) {
                ax = L00000DAF(A4);
                if(ax == 0) {
                    goto L00000fc7;
                }
                ax = 0;
                goto L0000101e;
            }
L00000fc7:
            (save)di;
            (save)A8;
            al = *(A4 + 4);
            asm("cbw");
            (save)ax;
            sp = sp + 6;
            if(L00000BC4() < di) {
                ax = 0;
                goto L0000101e;
            }
        } else {
            goto L00001012;
L0000100e:
            ax = 0;
            goto L0000101e;
L00001012:
            do {
                ax = di;
                di = di - 1;
                if(ax == 0) {
                    goto L00001019;
                }
                if(*A4 = *A4 + 1) {
                    bx = A8;
                    A8 = A8 + 1;
                    ax = L00000E46( *bx, A4);
                } else {
                    bx = A8;
                    A8 = A8 + 1;
                    al = *bx;
                    *(A4 + 0xa) = *(A4 + 0xa) + 1;
                    *( *(A4 + 0xa) - 1) = al;
                    ah = 0;
                }
            } while(ax != 65535);
            goto L0000100e;
        }
    }
L00001019:
    ax = Vfffffffe;
L0000101e:
}

/*	Procedure: 0x00001026 - 0x00001054
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001026()
{



    goto ( *L000005f0);
    (save)bp;
    dx = *(sp + 4);
    cx = 0xf04;
    bx = 0x4f9;
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
    (restore)bp;
}

/* DEST BLOCK NOT FOUND: 0000106c -> 000010af */
/*	Procedure: 0x00001055 - 0x00001082
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001055()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x98;
    (save)si;
    (save)di;
    *(bp - 0x58) = 0;
    *(bp - 0x55) = 0x50;
    *(bp - 2) = 0;
    goto L000010af;
    (save)di;
    cx = 65535;
    al = 0;
    asm("repne scasb");
    cx = !cx - 1;
    (restore)di;
    return;
    *di = al;
    di = di + 1;
    *(bp - 0x55) = *(bp - 0x55) - 1;
    <= ? L000010ae : ;
}

stack space not deallocated on return
/*	Procedure: 0x00001083 - 0x0000168E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L00001083()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  es;



    di = di - bp - 0x54;
    ax = *(bp + 0xa)( *(bp + 8), di, bp - 0x54);
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
    si = *(bp + 6);
L000010bf:
    al = *esi;
    esi = esi + 1;
    if(al != 0) {
        if(al == 0x25) {
            goto L000010d8;
        }
L000010c8:
        *di = al;
        di = di + 1;
        if(*(bp - 0x55) = *(bp - 0x55) - 1) {
            goto L000010bf;
        }
        ax = L00001083();
        goto L000010bf;
    }
    goto L00001554;
L000010d8:
    *(bp + 65398) = si;
    al = *esi;
    esi = esi + 1;
    if(al == 0x25) {
        goto L000010c8;
    }
    *(bp + 65386) = di;
    *(bp + 65396) = 0;
    *(bp + 65384) = 0;
    *(bp + 65395) = 0;
    *(bp + 65390) = 65535;
    *(bp + 65392) = 65535;
    goto L00001102;
L00001101:
    al = *esi;
    esi = esi + 1;
L00001102:
    ah = 0;
    dx = 0;
    ebx = -32 & 0xff;
    if(bl < 0x60) {
        bl = *(bx + 0x509);
        eax = bx & 65535;
        if(ax > 0x17) {
            goto L00001542;
        }
        goto ( *((ax << 1) + 0x1127));
        < ? L0000113a : ;
        (restore)dx;
        asm("adc [bp+di+0x6611],si");
        asm("adc ax,bx");
        asm("adc dx,sp");
        asm("adc [si],sp");
        asm("adc ch,[0x3e12]");
        asm("adc bl,[bx+di+0x7311]");
        asm("adc cl,[bp+0x12]");
        (save)dx;
        asm("adc dl,[bp+0x12]");
        asm("clc");
        asm("adc ch,[bp+si+0x4b13]");
        asm("adc bp,[bp+di+0x13]");
        asm("adc ax,0x4215");
        asm("adc ax,0x1542");
        dx = dx + 1;
        asm("adc ax,0x1185");
        asm("Unknown opcode 0x8f");
        asm("adc cx,bp");
    }
L00001157:
    L0000915e();
    asm("std");
    *(bx - 8) = *(bx - 8) + dh;
    *(bp + 65384) = *(bp + 65384) | 1;
    goto L00001101;
    if(ch > 0) {
        goto L00001157;
    }
    *(bp + 65384) = *(bp + 65384) | 2;
    goto L00001101;
    if(ch > 0) {
        goto L00001157;
    }
    if(*(bp + 65395) != 0x2b) {
        *(bp + 65395) = dl;
    }
    goto L00001101;
    *(bp + 65384) = *(bp + 65384) & -33;
    ch = 5;
    goto L00001101;
    *(bp + 65384) = *(bp + 65384) | 0x20;
    ch = 5;
    goto L00001101;
    if(ch <= 0) {
        if(!( *(bp + 65384) & 2)) {
            *(bp + 65384) = *(bp + 65384) | 8;
            ch = 1;
            goto L00001101;
            ax = *( *(bp + 4));
            *(bp + 4) = *(bp + 4) + 2;
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
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L00001542:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L00001554:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x0000168F - 0x000016B5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000168F()
{



    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x000016B6 - 0x00001D2F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000016B6()
{



    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x00001D30 - 0x00001DA3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D30()
{



    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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
