/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_dcc/benchlng/ia32_mz_from_dcc/subject.exe'
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
    *L000005c4();
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

/*	Procedure: 0x000001FA - 0x00000358
 *	Argument size: -20
 *	Local size: 20
 *	Save regs size: 0
 */

L000001FA()
{
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vffffffee;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff2;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff6;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffa;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    L00001768(0x194, & Vfffffffc);
    (save)Vfffffffe;
    L00000EDF(0x198, Vfffffffc);
    L00001768(0x1b2, & Vffffffec);
    L00001768(0x1b6, & Vfffffff0);
    Vfffffffa = 0;
    for(Vfffffff8 = 1; 1; asm("adc word [bp-0x6],+0x0");) {
        ax = Vfffffff8;
        if(Vfffffffa >= Vfffffffe) {
            > ? L00000345 : ;
            if(ax > Vfffffffc) {
                break;
            }
        }
        Vfffffff6 = 0;
        for(Vfffffff4 = 1; 1; asm("adc word [bp-0xa],+0x0");) {
            if(Vfffffff6 >= 0) {
                > ? L00000325 : ;
                if(Vfffffff4 > 0x28) {
                    break;
                }
            }
            dx = Vffffffee;
            ax = Vffffffec + Vfffffff0;
            asm("adc dx,[bp-0xe]");
            ax = ax + Vfffffff4;
            asm("adc dx,[bp-0xa]");
            Vffffffee = dx;
            Vffffffec = ax;
            ax = Vffffffec;
            dx = Vffffffee >> 1;
            asm("rcr ax,1");
            Vfffffff2 = dx;
            Vfffffff0 = ax;
            (save)0;
            (save)0xa;
            (save)Vfffffff2;
            (save)Vfffffff0;
            Vffffffee = dx;
            Vffffffec = L00000000();
            dx = Vfffffff2;
            ax = Vfffffff0;
            ax = dx != Vfffffff6 || ax != Vfffffff4 ? 0 : 1;
            asm("cwd");
            Vffffffee = dx;
            Vffffffec = ax;
            dx = Vffffffee | Vfffffff6;
            Vfffffff2 = dx;
            Vfffffff0 = Vffffffec | Vfffffff4;
            ax = ax = Vfffffff0 | Vfffffff2 ? 0 : 1;
            asm("cwd");
            Vffffffee = dx;
            Vffffffec = ax;
            dx = Vffffffee;
            ax = Vffffffec + Vfffffff4;
            asm("adc dx,[bp-0xa]");
            Vfffffff2 = dx;
            Vfffffff0 = ax;
            dx = Vfffffff2;
            ax = Vfffffff0;
            if(dx >= Vfffffff6) {
                > ? L000002fb : ;
                if(ax > Vfffffff4) {
                    goto L000002fb;
                }
            }
            ax = 0;
            goto L00000302;
L000002fb:
            ax = 1;
L00000302:
            asm("cwd");
            Vffffffee = dx;
            Vffffffec = ax;
            Vfffffff4 = Vfffffff4 + 1;
        }
        Vfffffff8 = Vfffffff8 + 1;
    }
    (save)Vffffffee;
    return(L00000EDF(0x1ba, Vffffffec));
}

/*	Procedure: 0x00000359 - 0x00000394
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000359()
{



    (save)bp;
    (save)si;
    si = *(sp + 4);
    if(si >= 0) {
        if(si > 0x58) {
L00000369:
            si = 0x57;
        }
        *L000001C0 = si;
        al = *(si + 0x1c2);
        asm("cbw");
        asm("xchg ax,si");
    } else {
        si = ~si;
        if(si > 0x23) {
            goto L00000369;
        }
        *L000001C0 = 65535;
    }
    *L00000094 = si;
    ax = 65535;
    (restore)si;
    (restore)bp;
    return;
}

/*	Procedure: 0x00000395 - 0x000003C9
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00000395(A4)
/* unknown */ void  A4;
{



    while(1) {
        ax = *L00000226;
        *L00000226 = *L00000226 - 1;
        if(ax == 0) {
            break;
        }
        bx = *L00000226 << 1;
        *(bx + 0x5d0)();
    }
    *L0000021c();
    *L0000021e();
    *L00000220();
    return(L00000121(A4));
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 0000043c -> 0000047e */
/* DEST BLOCK NOT FOUND: 0000047b -> 000001e2 */
/*	Procedure: 0x000003CA - 0x00000452
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000003CA()
{



    (restore) *%cs:0x3c4];
    *%cs:0x3c6] = ds;
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
        < ? L0000047b : ;
        cl = cl ^ 0x7f;
    }
    sp = sp - 2;
    ax = 1 + bx + cx & 65534;
    if(di = sp - ax) {
        goto L0000047b;
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
L00000437:
    L00000453();
    if(!(bx = bx + 1)) {
        < ? L0000047e : ;
        L00000453();
        > ? L0000043c : ;
    }
    if(al != 0x20 && al != 0xd && al != 9) {
        goto L00000437;
    }
    al = 0;
    goto L00000437;
}

/* DEST BLOCK NOT FOUND: 0000047b -> 000001e2 */
/*	Procedure: 0x00000453 - 0x000004B4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000453()
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
    ds = *%cs:0x3c6];
    *L00000084 = bx;
    bx = bx + 1 + bx + 1;
    si = sp;
    if(bp = sp - bx) {
        goto L000001e2;
    }
    sp = bp;
    *L00000086 = bp;
L0000049b:
    < ? L000004ab : ;
    *bp = si;
    bp = bp + 2;
    asm("%s lodsb");
    asm("loopne 0x4a3");
    if(al == 0) {
        goto L0000049b;
    }
    *bp = 0;
    goto ( *L000003c4);
}

/* DEST BLOCK NOT FOUND: 000004e8 -> 000001e2 */
stack space not deallocated on return
/*	Procedure: 0x000004B5 - 0x00000524
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000004B5()
{



    ax = L00000604( *L0000008A);
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
        ax = L00000604( *L0000008E);
        bx = ax;
        (restore)es;
        *L00000088 = ax;
        if(ax != 0) {
            goto L000004eb;
        }
    }
    goto L000001e2;
L000004eb:
    ax = 0;
    cx = 65535;
L000004f0:
    *bx = di;
    bx = bx + 2;
    asm("repne scasb");
    if(*%es:di] != al) {
        goto L000004f0;
    }
    *bx = ax;
    return;
    (save)bp;
    bp = sp;
    if(*L00000226 == 0x20) {
        ax = 1;
    } else {
        ax = *(bp + 4);
        *(( *L00000226 << 1) + 0x5d0) = ax;
        *L00000226 = *L00000226 + 1;
        ax = 0;
    }
    (restore)bp;
}

/*	Procedure: 0x00000525 - 0x00000552
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000525(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = *(A4 + 6);
    *L00000612 = ax;
    if(ax == A4) {
        *L00000612 = 0;
    } else {
        si = *(A4 + 4);
        *( *L00000612 + 4) = si;
        ax = *L00000612;
        *(si + 6) = ax;
    }
}

/*	Procedure: 0x00000553 - 0x0000058C
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 8
 */

L00000553(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  si;



    *A4 = *A4 - A6;
    si = *A4 + A4;
    *si = A6 + 1;
    *(si + 2) = A4;
    if(*L00000610 == A4) {
        *L00000610 = si;
    } else {
        *(si + A6 + 2) = si;
    }
    ax = si + 4;
}

/*	Procedure: 0x0000058D - 0x000005C9
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L0000058D(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L0000069B(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *(si + 2) = *L00000610;
        *si = A4 + 1;
        *L00000610 = si;
        ax = *L00000610 + 4;
    }
}

/*	Procedure: 0x000005CA - 0x00000603
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L000005CA(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L0000069B(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *L00000614 = si;
        *L00000610 = si;
        *si = A4 + 1;
        ax = si + 4;
    }
}

/*	Procedure: 0x00000604 - 0x00000676
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000604(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = A4;
    if(di == 0 || di > -12) {
        ax = 0;
    } else {
        di = di + 0xb & 65528;
        if(*L00000614 == 0) {
            ax = L000005CA(di);
        } else {
            si = *L00000612;
            if(si != 0) {
                do {
                    ax = *si;
                    if(ax >= di + 0x28) {
                        goto L00000648;
                    }
                    if(*si >= di) {
                        goto L00000656;
                    }
                    si = *(si + 6);
                } while(si != *L00000612);
                goto L0000066c;
L00000648:
                ax = L00000553(si, di);
                goto L00000673;
L00000656:
                L00000525(si);
                *si = *si + 1;
                ax = si + 4;
            } else {
L0000066c:
                ax = L0000058D(di);
            }
        }
    }
L00000673:
}

/*	Procedure: 0x00000677 - 0x0000069A
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00000677(A4)
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

/*	Procedure: 0x0000069B - 0x000006EE
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L0000069B(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = A4 + *L0000009E;
    asm("adc dx,+0x0");
    cx = ax + 0x100;
    asm("adc dx,+0x0");
    if(A6 == 0) {
        if(cx >= sp) {
            goto L000006c2;
        }
        asm("xchg ax,[0x9e]");
    } else {
L000006c2:
        *L00000094 = 8;
        ax = 65535;
    }
    return;
    (save)bp;
    bp = sp;
    ax = L00000677(A4);
    return;
    (save)bp;
    bp = sp;
    ax = A4;
    asm("cwd");
    ax = L0000069B(ax, A6);
}

/*	Procedure: 0x000006EF - 0x00000735
 *	Argument size: 4
 *	Local size: 2
 *	Save regs size: 8
 */

L000006EF(A4)
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

/*	Procedure: 0x00000736 - 0x000007EE
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 4
 */

L00000736(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{
	/* unknown */ void  si;



    si = A4;
    if(L00000E61(si) != 0) {
        ax = 65535;
    } else {
        if(Aa == 1 && *si > 0) {
            ax = L000006EF(si);
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
        ax = L00000CBC();
        sp = sp + 8;
        if(dx == -1) {
            if(ax != 65535) {
                goto L00000793;
            }
            ax = 65535;
        } else {
L00000793:
            ax = 0;
        }
    }
    return;
    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = A4;
    ax = L00000E61(si);
    if(ax != 0) {
        dx = 65535;
        ax = 65535;
    } else {
        al = *(si + 4);
        asm("cbw");
        *(bp - 2) = dx;
        *(bp - 4) = L00001E85(ax);
        if(*si > 0) {
            dx = *(bp - 2);
            (save)dx;
            (save) *(bp - 4);
            ax = L000006EF(si);
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

/*	Procedure: 0x000007EF - 0x00000815
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000007EF()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = 0x14;
    for(si = 0x32a; 1; si = si + 0x10) {
        ax = di;
        di = di - 1;
        if(ax == 0) {
            break;
        }
        if(( *(si + 2) & 0x300) == 0x300) {
            L00000E61(si);
        }
    }
}

/*	Procedure: 0x00000816 - 0x00000885
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000816(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = A4;
    if(!( *(si + 2) & 0x200)) {
        L000007EF();
    }
    (save) *(si + 6);
    ax = *(si + 8);
    *(si + 0xa) = ax;
    (save)ax;
    al = *(si + 4);
    asm("cbw");
    (save)ax;
    ax = L00000A8B();
    sp = sp + 6;
    *si = ax;
    if(*si > 0) {
        *(si + 2) = *(si + 2) & 65503;
        ax = 0;
        goto L0000086e;
    } else {
        if(*si == 0) {
            *(si + 2) = *(si + 2) & 65151 | 0x20;
        } else {
            *si = 0;
            *(si + 2) = *(si + 2) | 0x10;
        }
    }
    ax = 65535;
L0000086e:
    return;
    (save)bp;
    bp = sp;
    (save)si;
    si = A4;
    *si = *si + 1;
    ax = L00000886(si);
}

/* DEST BLOCK NOT FOUND: 00000983 -> 00000985 */
stack space not deallocated on return
/*	Procedure: 0x00000886 - 0x00000985
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000886()
{



    (save)bp;
    bp = sp;
    sp = sp - 2;
    (save)si;
    si = *(bp + 4);
    while(*si = *si - 1) {
        if(( *si = *si + 1) || !( *(si + 2) & 0x110)) {
            goto L000008ad;
        }
        while(1) {
            *(si + 2) = *(si + 2) | 0x80;
            if(*(si + 6) != 0) {
                break;
            }
            if(*L00000492 != 0) {
                goto L00000915;
            }
            ax = 0x32a;
            if(0x32a != si) {
                goto L00000915;
            }
            al = *(si + 4);
            asm("cbw");
            if(L00000986(ax) == 0) {
                *(si + 2) = *(si + 2) & 65023;
            }
            (save)0x200;
            ax = *(si + 2) & 0x200 ? 0 : 1;
            (save)ax;
            L00000998(si, 0);
        }
        ax = L00000816(si);
        if(ax != 0) {
            goto L000008cb;
        }
    }
    *(si + 0xa) = *(si + 0xa) + 1;
    al = *( *(si + 0xa) - 1);
    ah = 0;
    goto L00000976;
L000008ad:
    *(si + 2) = *(si + 2) | 0x10;
    ax = 65535;
    goto L00000976;
L000008cb:
    ax = 65535;
    goto L00000976;
L00000915:
    do {
        if(!( *(si + 2) & 0x200)) {
            L000007EF();
        }
        (save)1;
        ax = bp - 1;
        (save)ax;
        al = *(si + 4);
        asm("cbw");
        (save)ax;
        ax = L00000B47();
        sp = sp + 6;
        if(ax != 1) {
            goto L00000937;
        }
        if(*(bp - 1) != 0xd) {
            break;
        }
    } while(*(si + 2) & 0x40);
    goto L0000096a;
L00000937:
    al = *(si + 4);
    asm("cbw");
    *(si + 2) = L00000DF3(ax) != 1 ? *(si + 2) | 0x10 : *(si + 2) & 65151 | 0x20;
    ax = 65535;
    goto L00000976;
L0000096a:
    *(si + 2) = *(si + 2) & 65503;
    al = *(bp - 1);
    ah = 0;
L00000976:
    (restore)si;
    sp = bp;
    (restore)bp;
    return;
    L00000886(0x32a);
}

/*	Procedure: 0x00000986 - 0x00000997
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00000986(A4)
/* unknown */ void  A4;
{



    ax = 17408;
    asm("int 0x21");
    return(dx & 0x80);
}

/*	Procedure: 0x00000998 - 0x00000A8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000998()
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
        if(*L00000494 == 0) {
            if(0x33a != si) {
                goto L000009d2;
            }
            *L00000494 = 1;
        } else {
L000009d2:
            if(*L00000492 == 0 && 0x32a == si) {
                *L00000492 = 1;
            }
        }
        if(*si != 0) {
            (save)1;
            (save)0;
            L00000736(si, 0);
        }
        if(!( *(si + 2) & 4)) {
            L00001741( *(si + 8));
        }
        *(si + 2) = *(si + 2) & 65523;
        *(si + 6) = 0;
        ax = si + 5;
        *(si + 8) = ax;
        *(si + 0xa) = *(si + 8);
        if(*(bp + 8) != 2 && di > 0) {
            *L0000021C = 0xa6a;
            if(*(bp + 6) == 0) {
                ax = L00000604(di);
                *(bp + 6) = ax;
                if(*(bp + 6) != 0) {
                    *(si + 2) = *(si + 2) | 4;
                    goto L00000a4b;
                }
                ax = 65535;
                goto L00000a66;
            }
L00000a4b:
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
L00000a66:
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
    (save)si;
    (save)di;
    di = 4;
    si = 0x32a;
    goto L00000a84;
L00000a74:
    if(!( *(si + 2) & 3)) {
        ax = L00000E61(si);
    }
    di = di - 1;
    si = si + 0x10;
L00000a84:
    if(di != 0) {
        goto L00000a74;
    }
    (restore)di;
    (restore)si;
}

/*	Procedure: 0x00000A8B - 0x00000B46
 *	Argument size: 8
 *	Local size: 4
 *	Save regs size: 8
 */

L00000A8B(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vffffffff;



    if(A8 + 1 < 2 || !( *((A4 << 1) + 0x46a) & 0x200)) {
        ax = 0;
    } else {
        while(1) {
            (save)A8;
            Vfffffffc = L00000B47(A4, A6);
            if(Vfffffffc + 1 < 2 || !( *((A4 << 1) + 0x46a) & 32768)) {
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
                goto L00000b1b;
            }
            if(al == 0xd) {
                asm("loop 0xae9");
                (save)es;
                (save)bx;
                (save)1;
                L00000B47(A4, & Vffffffff);
                (restore)bx;
                (restore)es;
                asm("cld");
                *di = Vffffffff;
                di = di + 1;
            } else {
                *di = al;
                di = di + 1;
                asm("loop 0xae9");
            }
            if(di != bx) {
                goto L00000b3b;
            }
        }
        ax = Vfffffffc;
        goto L00000b41;
L00000b1b:
        (save)bx;
        ax = 2;
        (save)2;
        cx = ~cx;
        asm("sbb ax,ax");
        (save)ax;
        L00000CBC(A4, cx);
        *((A4 << 1) + 0x46a) = *((A4 << 1) + 0x46a) | 0x200;
        (restore)bx;
L00000b3b:
        ax = di - bx;
    }
L00000b41:
}

/*	Procedure: 0x00000B47 - 0x00000B62
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000B47(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    ah = 0x3f;
    asm("int 0x21");
    < ? L00000b5b : ;
    goto L00000b61;
    ax = L00000359(ax);
L00000b61:
}

/*	Procedure: 0x00000B63 - 0x00000C75
 *	Argument size: -130
 *	Local size: 138
 *	Save regs size: 8
 */

L00000B63(A4, A6, A8, Aff76, Aff78, Aff7b, Aff7c, Aff7e)
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
        if(!( *((A4 << 1) + 0x46a) & 32768)) {
            (save)A8;
            ax = L00000C76(A4, A6);
        } else {
            *((A4 << 1) + 0x46a) = *((A4 << 1) + 0x46a) & 65023;
            Aff7c = A6;
            Aff78 = A8;
            si = & Aff7e;
            goto L00000c25;
L00000c06:
            ax = Aff76 < 0 ? 65535 : A8 - Aff78 + Aff76 - di;
            goto L00000c70;
L00000c25:
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
                ax = L00000C76(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 != di) {
                    goto L00000c06;
                }
                si = & Aff7e;
            }
            di = si - & Aff7e;
            if(di > 0) {
                (save)di;
                ax = L00000C76(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 == di) {
                    goto L00000c6b;
                }
                ax = Aff76 < 0 ? 65535 : A8 + Aff76 - di;
            } else {
L00000c6b:
                ax = A8;
            }
        }
    }
L00000c70:
}

/*	Procedure: 0x00000C76 - 0x00000CBB
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C76(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    if(!( *((A4 << 1) + 0x46a) & 0x800)) {
        ax = L00000CBC(A4, 0, 0, 2);
    }
    ah = 0x40;
    bx = A4;
    asm("int 0x21");
    < ? L00000cb4 : ;
    (save)ax;
    *((A4 << 1) + 0x46a) = *((A4 << 1) + 0x46a) | 0x1000;
    (restore)ax;
    goto L00000cba;
    ax = L00000359(ax);
L00000cba:
}

/*	Procedure: 0x00000CBC - 0x00000CE6
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 0
 */

L00000CBC(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{



    ah = 0x42;
    asm("int 0x21");
    if(!( *((A4 << 1) + 0x46a) = *((A4 << 1) + 0x46a) & 65023)) {
    } else {
        ax = L00000359(ax);
        asm("cwd");
    }
}

/* DEST BLOCK NOT FOUND: 00000df0 -> 000001e2 */
/*	Procedure: 0x00000CE7 - 0x00000DF2
 *	Argument size: -20
 *	Local size: 34
 *	Save regs size: 0
 */

L00000CE7(A4, A6, A8, Aa, Ac, Ae)
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
L00000d22:
            asm("xchg ax,cx");
            bx = bx / bx;
            edx = bx % bx & 65535;
            asm("xchg ax,cx");
            bx = bx / bx;
            dx = bx % bx;
            *si = dl;
            if(si = si + 1) {
                goto L00000d38;
            }
            goto L00000d22;
        }
L00000d31:
        bx = bx / bx;
        edx = bx % bx & 65535;
        *si = dl;
        si = si + 1;
L00000d38:
        if(ax != 0) {
            goto L00000d31;
        }
        cx = ~( & Vffffffde) + si;
        asm("cld");
        al = !(al = *(si - 1) - 0xa) ? al + 0x3a : al + A4;
        *di = al;
        di = di + 1;
        asm("loop 0xd44");
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
    ax = L00000CE7(0x61, 1, A8, A6, ax, dx);
    return;
    bp = sp;
    ax = L00000CE7(0x61 & 0xff, 0, Aa, A8, A4, A6, bp);
    return;
    (save)bp;
    bp = sp;
    (save)A6;
    (save)A4;
    (save)A8;
    (save)Aa;
    ax = Aa == 0xa ? 1 : 0;
    ax = L00000CE7(0x61, ax);
    return;
    dx = 0x496;
    goto L00000dda;
    dx = 0x49b;
L00000dda:
    cx = 5;
    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    cx = 0x27;
    dx = 0x4a0;
    ah = 0x40;
    asm("int 0x21");
    goto L000001e2;
}

/*	Procedure: 0x00000DF3 - 0x00000E60
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00000DF3(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    if(!( *((A4 << 1) + 0x46a) & 0x200)) {
        ax = 1;
    } else {
        ax = 17408;
        asm("int 0x21");
        < ? L00000e57 : ;
        if(!(dl & 0x80)) {
            ax = 16897;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            < ? L00000e57 : ;
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
            < ? L00000e57 : ;
            ax = 16896;
            asm("int 0x21");
            < ? L00000e57 : ;
            if(dx < Vfffffffe) {
                goto L00000e53;
            }
            > ? L00000e4e : ;
            if(ax < Vfffffffc) {
                goto L00000e53;
            }
            ax = 1;
        } else {
L00000e53:
            ax = 0;
            goto L00000e5d;
            ax = L00000359(ax);
        }
    }
L00000e5d:
}

/*	Procedure: 0x00000E61 - 0x00000EDE
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000E61(A4)
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
                    goto L00000ea3;
                }
            }
            *A4 = 0;
            ax = *(A4 + 0xa);
            if(ax == A4 + 5) {
                *(A4 + 0xa) = *(A4 + 8);
            }
L00000ea3:
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
            if(L00000B63() != di) {
                if(*(A4 + 2) & 0x200) {
                    goto L00000ed7;
                }
                *(A4 + 2) = *(A4 + 2) | 0x10;
                ax = 65535;
            } else {
L00000ed7:
                ax = 0;
            }
        }
    }
}

/*	Procedure: 0x00000EDF - 0x00000EF7
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000EDF(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = L00001107( & A6, A4, 0x33a, 0x1015);
}

/*	Procedure: 0x00000EF8 - 0x00000F10
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000EF8(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    *A6 = *A6 - 1;
    (save)A6;
    asm("cbw");
    ax = L00000F11(ax);
}

/*	Procedure: 0x00000F11 - 0x00000FFE
 *	Argument size: 6
 *	Local size: 2
 *	Save regs size: 4
 */

L00000F11(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  Vffffffff;



    Vffffffff = A4;
    while(*A6 = *A6 + 1) {
        *A6 = *A6 - 1;
        if(*(A6 + 2) & 0x90 || !( *(A6 + 2) & 2)) {
            goto L00000f6b;
        }
        *(A6 + 2) = *(A6 + 2) | 0x100;
        if(*(A6 + 6) == 0) {
            goto L00000fa5;
        }
        if(*A6 == 0) {
            ax = *(A6 + 6);
            *A6 = 65535 - ax;
        } else {
            ax = L00000E61(A6);
            if(ax != 0) {
                goto L00000f8f;
            }
        }
    }
    *(A6 + 0xa) = *(A6 + 0xa) + 1;
    *( *(A6 + 0xa) - 1) = Vffffffff;
    if(!( *(A6 + 2) & 8)) {
        if(Vffffffff != 0xa && Vffffffff != 0xd) {
            goto L00000f53;
        }
        ax = L00000E61(A6);
        if(ax == 0) {
            goto L00000f53;
        }
        ax = 65535;
    } else {
L00000f53:
        al = Vffffffff;
        ah = 0;
        goto L00000ffa;
L00000f6b:
        *(A6 + 2) = *(A6 + 2) | 0x10;
        ax = 65535;
        goto L00000ffa;
L00000f8f:
        ax = 65535;
        goto L00000ffa;
L00000fa5:
        if(Vffffffff == 0xa && !( *(A6 + 2) & 0x40)) {
            (save)1;
            ax = 0x4c8;
            (save)0x4c8;
            al = *(A6 + 4);
            asm("cbw");
            (save)ax;
            ax = L00000C76();
            sp = sp + 6;
            if(ax != 1) {
                goto L00000fe2;
            }
        }
        (save)1;
        ax = & A4;
        (save)ax;
        al = *(A6 + 4);
        asm("cbw");
        (save)ax;
        ax = L00000C76();
        sp = sp + 6;
        if(ax != 1) {
L00000fe2:
            if(*(A6 + 2) & 0x200) {
                goto L00000ff3;
            }
            *(A6 + 2) = *(A6 + 2) | 0x10;
            ax = 65535;
        } else {
L00000ff3:
            al = Vffffffff;
            ah = 0;
        }
    }
L00000ffa:
}

/*	Procedure: 0x00000FFF - 0x00001014
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000FFF(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = L00000F11(A4, 0x33a);
}

/*	Procedure: 0x00001015 - 0x000010D7
 *	Argument size: 8
 *	Local size: 2
 *	Save regs size: 8
 */

L00001015(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    di = A6;
    Vfffffffe = di;
    if(!( *(A4 + 2) & 8)) {
        goto L00001049;
L00001044:
        ax = 0;
        goto L000010d0;
L00001049:
        do {
            ax = di;
            di = di - 1;
            if(ax == 0) {
                goto L00001050;
            }
            (save)A4;
            bx = A8;
            A8 = A8 + 1;
            al = *bx;
            asm("cbw");
            (save)ax;
            (restore)cx;
        } while(L00000F11() != 65535);
        goto L00001044;
L00001050:
    } else {
        if(!( *(A4 + 2) & 0x40)) {
            if(*(A4 + 6) == 0) {
                goto L000010c4;
            }
            ax = *(A4 + 6);
            if(ax >= di) {
                goto L000010c4;
            }
            if(*A4 != 0) {
                ax = L00000E61(A4);
                if(ax == 0) {
                    goto L00001079;
                }
                ax = 0;
                goto L000010d0;
            }
L00001079:
            (save)di;
            (save)A8;
            al = *(A4 + 4);
            asm("cbw");
            (save)ax;
            sp = sp + 6;
            if(L00000C76() < di) {
                ax = 0;
                goto L000010d0;
            }
        } else {
            goto L000010c4;
L000010c0:
            ax = 0;
            goto L000010d0;
L000010c4:
            do {
                ax = di;
                di = di - 1;
                if(ax == 0) {
                    goto L000010cb;
                }
                if(*A4 = *A4 + 1) {
                    bx = A8;
                    A8 = A8 + 1;
                    ax = L00000EF8( *bx, A4);
                } else {
                    bx = A8;
                    A8 = A8 + 1;
                    al = *bx;
                    *(A4 + 0xa) = *(A4 + 0xa) + 1;
                    *( *(A4 + 0xa) - 1) = al;
                    ah = 0;
                }
            } while(ax != 65535);
            goto L000010c0;
        }
    }
L000010cb:
    ax = Vfffffffe;
L000010d0:
}

/*	Procedure: 0x000010D8 - 0x00001106
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000010D8()
{



    goto ( *L000005c8);
    (save)bp;
    dx = *(sp + 4);
    cx = 0xf04;
    bx = 0x4d1;
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

/* DEST BLOCK NOT FOUND: 0000111e -> 00001161 */
/*	Procedure: 0x00001107 - 0x00001134
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001107()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x98;
    (save)si;
    (save)di;
    *(bp - 0x58) = 0;
    *(bp - 0x55) = 0x50;
    *(bp - 2) = 0;
    goto L00001161;
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
    <= ? L00001160 : ;
}

stack space not deallocated on return
/*	Procedure: 0x00001135 - 0x00001740
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L00001135()
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
L00001171:
    al = *esi;
    esi = esi + 1;
    if(al != 0) {
        if(al == 0x25) {
            goto L0000118a;
        }
L0000117a:
        *di = al;
        di = di + 1;
        if(*(bp - 0x55) = *(bp - 0x55) - 1) {
            goto L00001171;
        }
        ax = L00001135();
        goto L00001171;
    }
    goto L00001606;
L0000118a:
    *(bp + 65398) = si;
    al = *esi;
    esi = esi + 1;
    if(al == 0x25) {
        goto L0000117a;
    }
    *(bp + 65386) = di;
    *(bp + 65396) = 0;
    *(bp + 65384) = 0;
    *(bp + 65395) = 0;
    *(bp + 65390) = 65535;
    *(bp + 65392) = 65535;
    goto L000011b4;
L000011b3:
    al = *esi;
    esi = esi + 1;
L000011b4:
    dx = 0;
    if(0xe0 < 0x60) {
        bl = *(bx + 0x4e1);
        eax = bx & 65535;
        if(ax > 0x17) {
            goto L000015f4;
        }
        bx = ax << 1;
        goto ( *(bx + 0x11d9));
        al = al & 0x12 | 0x12;
        asm("adc bl,[%gs:bx+si]");
        asm("adc cl,[bp+si+0x9412]");
        asm("adc dl,dh");
        asm("adc ah,al");
        asm("adc dh,al");
        asm("adc cl,[bp+di+0x12]");
        ax = ax & 0x13;
        asm("adc ax,[si]");
        asm("adc cx,[bx+si]");
        asm("adc bp,[bp+si+0x5c13]");
        asm("adc al,0xfd");
        asm("adc bx,[di]");
        asm("adc al,0xc7");
        asm("adc ax,0x15f4");
        asm("hlt");
        asm("adc ax,0x15f4");
        asm("aaa");
        asm("adc al,[bx+di+0x12]");
    }
    goto L000015f4;
    if(ch <= 0) {
        *(bp + 65384) = *(bp + 65384) | 1;
        goto L000011b3;
        if(ch <= 0) {
            *(bp + 65384) = *(bp + 65384) | 2;
            goto L000011b3;
            if(ch <= 0) {
                if(*(bp + 65395) != 0x2b) {
                    *(bp + 65395) = dl;
                }
                goto L000011b3;
                *(bp + 65384) = *(bp + 65384) & -33;
                ch = 5;
                goto L000011b3;
                *(bp + 65384) = *(bp + 65384) | 0x20;
                ch = 5;
                goto L000011b3;
                if(ch <= 0) {
                    if(!( *(bp + 65384) & 2)) {
                        *(bp + 65384) = *(bp + 65384) | 8;
                        ch = 1;
                        goto L000011b3;
                        ax = *( *(bp + 4));
                        *(bp + 4) = *(bp + 4) + 2;
                        if(ch >= 2) {
                            goto L0000127c;
                        }
                        *(bp + 65390) = ax;
                        ch = 3;
                    }
                    goto L000011b3;
L0000127c:
                    if(ch != 4) {
                        goto L000015f4;
                    }
                    *(bp + 65392) = ax;
                    ch = ch + 1;
                    goto L000011b3;
                    if(ch >= 4) {
                        goto L000015f4;
                    }
                    ch = 4;
                    goto L000011b3;
                }
                asm("xchg ax,dx");
                al = al - 0x30;
                asm("cbw");
                if(ch <= 2) {
                    ch = 2;
                    asm("xchg ax,[bp+0xff6e]");
                    if(ax < 0) {
                        goto L000011b3;
                    }
                    ax = ax << 1;
                    dx = ax;
                    ax = (ax << 1 << 1) + dx;
                    *(bp + 65390) = *(bp + 65390) + ax;
                    goto L000011b3;
                }
                if(ch == 4) {
                    asm("xchg ax,[bp+0xff70]");
                    if(ax < 0) {
                        goto L000011b3;
                    }
                    ax = ax << 1;
                    dx = ax;
                    ax = (ax << 1 << 1) + dx;
                    *(bp + 65392) = *(bp + 65392) + ax;
                    goto L000011b3;
                    *(bp + 65384) = *(bp + 65384) | 0x10;
                    ch = 5;
                    goto L000011b3;
                    *(bp + 65384) = *(bp + 65384) | 0x100;
                    *(bp + 65384) = *(bp + 65384) & -17;
                    ch = 5;
                    goto L000011b3;
                    *(bp + 65384) = *(bp + 65384) & -17;
                    *(bp + 65384) = *(bp + 65384) | 0x80;
                    ch = 5;
                    goto L000011b3;
                    bh = 8;
                    goto L0000130e;
                    bh = 0xa;
                    goto L00001313;
                    bh = 0x10;
                    bl = 0xe9 + dl;
L0000130e:
                    *(bp + 65395) = 0;
L00001313:
                    *(bp + 65389) = 0;
                    *(bp + 65388) = dl;
                    di = *(bp + 4);
                    ax = *di;
                    dx = 0;
                    goto L00001336;
                    bh = 0xa;
                    *(bp + 65389) = 1;
                    *(bp + 65388) = dl;
                    di = *(bp + 4);
                    ax = *di;
                    asm("cwd");
L00001336:
                    di = di + 1 + 1;
                    *(bp + 6) = si;
                    if(!( *(bp + 65384) & 0x10)) {
                        dx = *di;
                        di = di + 1 + 1;
                    }
                    *(bp + 4) = di;
                    di = bp + 65401;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
                    *(bx + si) = *(bx + si) + al;
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
L000015f4:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L00001606:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x00001741 - 0x00001767
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001741()
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

/*	Procedure: 0x00001768 - 0x00001E84
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001768()
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
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x00001E85 - 0x00001EF3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001E85()
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
