/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_dcc/benchfn/ia32_mz_from_dcc/subject.exe'
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
    *L000005dc();
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

/*	Procedure: 0x000001FA - 0x000001FE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000001FA()
{



}

/*	Procedure: 0x000001FF - 0x00000221
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000001FF()
{



    L000001FA();
    L000001FA();
    L000001FA();
    L000001FA();
    L000001FA();
    L000001FA();
    L000001FA();
    L000001FA();
    L000001FA();
    return(L000001FA());
}

/*	Procedure: 0x00000222 - 0x00000244
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000222()
{



    L000001FF();
    L000001FF();
    L000001FF();
    L000001FF();
    L000001FF();
    L000001FF();
    L000001FF();
    L000001FF();
    L000001FF();
    return(L000001FF());
}

/*	Procedure: 0x00000245 - 0x00000264
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000245()
{



    L00000222();
    L00000222();
    L00000222();
    L00000222();
    L00000222();
    L00000222();
    L00000222();
    L00000222();
    return(L00000222());
}

/*	Procedure: 0x00000265 - 0x000002C4
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00000265()
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    ax = 0x194;
    L00000E4B();
    (restore)cx;
    L000016D4(0x1b0, & Vfffffffc);
    (save)Vfffffffe;
    L00000E4B(0x1b4, Vfffffffc);
    *(bp - 6) = 0;
    for(*(bp - 8) = 1; 1; asm("adc word [bp-0x6],+0x0");) {
        dx = *(bp - 6);
        ax = *(bp - 8);
        if(dx >= Vfffffffe) {
            > ? L000002b9 : ;
            if(ax > Vfffffffc) {
                break;
            }
        }
        L00000245();
        *(bp - 8) = *(bp - 8) + 1;
    }
    return(L00000E4B(0x1ce));
}

/*	Procedure: 0x000002C5 - 0x00000300
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000002C5()
{



    (save)bp;
    (save)si;
    si = *(sp + 4);
    if(si >= 0) {
        if(si > 0x58) {
L000002d5:
            si = 0x57;
        }
        *L000001D8 = si;
        al = *(si + 0x1da);
        asm("cbw");
        asm("xchg ax,si");
    } else {
        si = ~si;
        if(si > 0x23) {
            goto L000002d5;
        }
        *L000001D8 = 65535;
    }
    *L00000094 = si;
    ax = 65535;
    (restore)si;
    (restore)bp;
    return;
}

/*	Procedure: 0x00000301 - 0x00000335
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00000301(A4)
/* unknown */ void  A4;
{



    while(1) {
        ax = *L0000023E;
        *L0000023E = *L0000023E - 1;
        if(ax == 0) {
            break;
        }
        bx = *L0000023E << 1;
        *(bx + 0x5e8)();
    }
    *L00000234();
    *L00000236();
    *L00000238();
    return(L00000121(A4));
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 000003a8 -> 000003ea */
/* DEST BLOCK NOT FOUND: 000003e7 -> 000001e2 */
/*	Procedure: 0x00000336 - 0x000003BE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000336()
{



    (restore) *%cs:0x330];
    *%cs:0x332] = ds;
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
        < ? L000003e7 : ;
        cl = cl ^ 0x7f;
    }
    sp = sp - 2;
    ax = 1 + bx + cx & 65534;
    if(di = sp - ax) {
        goto L000003e7;
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
L000003a3:
    L000003BF();
    if(!(bx = bx + 1)) {
        < ? L000003ea : ;
        L000003BF();
        > ? L000003a8 : ;
    }
    if(al != 0x20 && al != 0xd && al != 9) {
        goto L000003a3;
    }
    al = 0;
    goto L000003a3;
}

/* DEST BLOCK NOT FOUND: 000003e7 -> 000001e2 */
/*	Procedure: 0x000003BF - 0x00000420
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000003BF()
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
    ds = *%cs:0x332];
    *L00000084 = bx;
    bx = bx + 1 + bx + 1;
    si = sp;
    if(bp = sp - bx) {
        goto L000001e2;
    }
    sp = bp;
    *L00000086 = bp;
L00000407:
    < ? L00000417 : ;
    *bp = si;
    bp = bp + 2;
    asm("%s lodsb");
    asm("loopne 0x40f");
    if(al == 0) {
        goto L00000407;
    }
    *bp = 0;
    goto ( *L00000330);
}

/* DEST BLOCK NOT FOUND: 00000454 -> 000001e2 */
stack space not deallocated on return
/*	Procedure: 0x00000421 - 0x00000490
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000421()
{



    ax = L00000570( *L0000008A);
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
        ax = L00000570( *L0000008E);
        bx = ax;
        (restore)es;
        *L00000088 = ax;
        if(ax != 0) {
            goto L00000457;
        }
    }
    goto L000001e2;
L00000457:
    ax = 0;
    cx = 65535;
L0000045c:
    *bx = di;
    bx = bx + 2;
    asm("repne scasb");
    if(*%es:di] != al) {
        goto L0000045c;
    }
    *bx = ax;
    return;
    (save)bp;
    bp = sp;
    if(*L0000023E == 0x20) {
        ax = 1;
    } else {
        ax = *(bp + 4);
        *(( *L0000023E << 1) + 0x5e8) = ax;
        *L0000023E = *L0000023E + 1;
        ax = 0;
    }
    (restore)bp;
}

/*	Procedure: 0x00000491 - 0x000004BE
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000491(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = *(A4 + 6);
    *L0000062A = ax;
    if(ax == A4) {
        *L0000062A = 0;
    } else {
        si = *(A4 + 4);
        *( *L0000062A + 4) = si;
        ax = *L0000062A;
        *(si + 6) = ax;
    }
}

/*	Procedure: 0x000004BF - 0x000004F8
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 8
 */

L000004BF(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  si;



    *A4 = *A4 - A6;
    si = *A4 + A4;
    *si = A6 + 1;
    *(si + 2) = A4;
    if(*L00000628 == A4) {
        *L00000628 = si;
    } else {
        *(si + A6 + 2) = si;
    }
    ax = si + 4;
}

/*	Procedure: 0x000004F9 - 0x00000535
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L000004F9(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L00000607(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *(si + 2) = *L00000628;
        *si = A4 + 1;
        *L00000628 = si;
        ax = *L00000628 + 4;
    }
}

/*	Procedure: 0x00000536 - 0x0000056F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000536(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L00000607(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *L0000062C = si;
        *L00000628 = si;
        *si = A4 + 1;
        ax = si + 4;
    }
}

/*	Procedure: 0x00000570 - 0x000005E2
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000570(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = A4;
    if(di == 0 || di > -12) {
        ax = 0;
    } else {
        di = di + 0xb & 65528;
        if(*L0000062C == 0) {
            ax = L00000536(di);
        } else {
            si = *L0000062A;
            if(si != 0) {
                do {
                    ax = *si;
                    if(ax >= di + 0x28) {
                        goto L000005b4;
                    }
                    if(*si >= di) {
                        goto L000005c2;
                    }
                    si = *(si + 6);
                } while(si != *L0000062A);
                goto L000005d8;
L000005b4:
                ax = L000004BF(si, di);
                goto L000005df;
L000005c2:
                L00000491(si);
                *si = *si + 1;
                ax = si + 4;
            } else {
L000005d8:
                ax = L000004F9(di);
            }
        }
    }
L000005df:
}

/*	Procedure: 0x000005E3 - 0x00000606
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000005E3(A4)
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

/*	Procedure: 0x00000607 - 0x0000065A
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000607(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = A4 + *L0000009E;
    asm("adc dx,+0x0");
    cx = ax + 0x100;
    asm("adc dx,+0x0");
    if(A6 == 0) {
        if(cx >= sp) {
            goto L0000062e;
        }
        asm("xchg ax,[0x9e]");
    } else {
L0000062e:
        *L00000094 = 8;
        ax = 65535;
    }
    return;
    (save)bp;
    bp = sp;
    ax = L000005E3(A4);
    return;
    (save)bp;
    bp = sp;
    ax = A4;
    asm("cwd");
    ax = L00000607(ax, A6);
}

/*	Procedure: 0x0000065B - 0x000006A1
 *	Argument size: 4
 *	Local size: 2
 *	Save regs size: 8
 */

L0000065B(A4)
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

/*	Procedure: 0x000006A2 - 0x0000075A
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 4
 */

L000006A2(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{
	/* unknown */ void  si;



    si = A4;
    if(L00000DCD(si) != 0) {
        ax = 65535;
    } else {
        if(Aa == 1 && *si > 0) {
            ax = L0000065B(si);
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
        ax = L00000C28();
        sp = sp + 8;
        if(dx == -1) {
            if(ax != 65535) {
                goto L000006ff;
            }
            ax = 65535;
        } else {
L000006ff:
            ax = 0;
        }
    }
    return;
    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = A4;
    ax = L00000DCD(si);
    if(ax != 0) {
        dx = 65535;
        ax = 65535;
    } else {
        al = *(si + 4);
        asm("cbw");
        *(bp - 2) = dx;
        *(bp - 4) = L00001D4E(ax);
        if(*si > 0) {
            dx = *(bp - 2);
            (save)dx;
            (save) *(bp - 4);
            ax = L0000065B(si);
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

/*	Procedure: 0x0000075B - 0x00000781
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L0000075B()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = 0x14;
    for(si = 0x342; 1; si = si + 0x10) {
        ax = di;
        di = di - 1;
        if(ax == 0) {
            break;
        }
        if(( *(si + 2) & 0x300) == 0x300) {
            L00000DCD(si);
        }
    }
}

/*	Procedure: 0x00000782 - 0x000007F1
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000782(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = A4;
    if(!( *(si + 2) & 0x200)) {
        L0000075B();
    }
    (save) *(si + 6);
    ax = *(si + 8);
    *(si + 0xa) = ax;
    (save)ax;
    al = *(si + 4);
    asm("cbw");
    (save)ax;
    ax = L000009F7();
    sp = sp + 6;
    *si = ax;
    if(*si > 0) {
        *(si + 2) = *(si + 2) & 65503;
        ax = 0;
        goto L000007da;
    } else {
        if(*si == 0) {
            *(si + 2) = *(si + 2) & 65151 | 0x20;
        } else {
            *si = 0;
            *(si + 2) = *(si + 2) | 0x10;
        }
    }
    ax = 65535;
L000007da:
    return;
    (save)bp;
    bp = sp;
    (save)si;
    si = A4;
    *si = *si + 1;
    ax = L000007F2(si);
}

/* DEST BLOCK NOT FOUND: 000008ef -> 000008f1 */
stack space not deallocated on return
/*	Procedure: 0x000007F2 - 0x000008F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000007F2()
{



    (save)bp;
    bp = sp;
    sp = sp - 2;
    (save)si;
    si = *(bp + 4);
    while(*si = *si - 1) {
        if(( *si = *si + 1) || !( *(si + 2) & 0x110)) {
            goto L00000819;
        }
        while(1) {
            *(si + 2) = *(si + 2) | 0x80;
            if(*(si + 6) != 0) {
                break;
            }
            if(*L000004AA != 0) {
                goto L00000881;
            }
            ax = 0x342;
            if(0x342 != si) {
                goto L00000881;
            }
            al = *(si + 4);
            asm("cbw");
            if(L000008F2(ax) == 0) {
                *(si + 2) = *(si + 2) & 65023;
            }
            (save)0x200;
            ax = *(si + 2) & 0x200 ? 0 : 1;
            (save)ax;
            L00000904(si, 0);
        }
        ax = L00000782(si);
        if(ax != 0) {
            goto L00000837;
        }
    }
    *(si + 0xa) = *(si + 0xa) + 1;
    al = *( *(si + 0xa) - 1);
    ah = 0;
    goto L000008e2;
L00000819:
    *(si + 2) = *(si + 2) | 0x10;
    ax = 65535;
    goto L000008e2;
L00000837:
    ax = 65535;
    goto L000008e2;
L00000881:
    do {
        if(!( *(si + 2) & 0x200)) {
            L0000075B();
        }
        (save)1;
        ax = bp - 1;
        (save)ax;
        al = *(si + 4);
        asm("cbw");
        (save)ax;
        ax = L00000AB3();
        sp = sp + 6;
        if(ax != 1) {
            goto L000008a3;
        }
        if(*(bp - 1) != 0xd) {
            break;
        }
    } while(*(si + 2) & 0x40);
    goto L000008d6;
L000008a3:
    al = *(si + 4);
    asm("cbw");
    *(si + 2) = L00000D5F(ax) != 1 ? *(si + 2) | 0x10 : *(si + 2) & 65151 | 0x20;
    ax = 65535;
    goto L000008e2;
L000008d6:
    *(si + 2) = *(si + 2) & 65503;
    al = *(bp - 1);
    ah = 0;
L000008e2:
    (restore)si;
    sp = bp;
    (restore)bp;
    return;
    L000007F2(0x342);
}

/*	Procedure: 0x000008F2 - 0x00000903
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L000008F2(A4)
/* unknown */ void  A4;
{



    ax = 17408;
    asm("int 0x21");
    return(dx & 0x80);
}

/*	Procedure: 0x00000904 - 0x000009F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000904()
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
        if(*L000004AC == 0) {
            if(0x352 != si) {
                goto L0000093e;
            }
            *L000004AC = 1;
        } else {
L0000093e:
            if(*L000004AA == 0 && 0x342 == si) {
                *L000004AA = 1;
            }
        }
        if(*si != 0) {
            (save)1;
            (save)0;
            L000006A2(si, 0);
        }
        if(!( *(si + 2) & 4)) {
            L000016AD( *(si + 8));
        }
        *(si + 2) = *(si + 2) & 65523;
        *(si + 6) = 0;
        ax = si + 5;
        *(si + 8) = ax;
        *(si + 0xa) = *(si + 8);
        if(*(bp + 8) != 2 && di > 0) {
            *L00000234 = 0x9d6;
            if(*(bp + 6) == 0) {
                ax = L00000570(di);
                *(bp + 6) = ax;
                if(*(bp + 6) != 0) {
                    *(si + 2) = *(si + 2) | 4;
                    goto L000009b7;
                }
                ax = 65535;
                goto L000009d2;
            }
L000009b7:
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
L000009d2:
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
    (save)si;
    (save)di;
    di = 4;
    si = 0x342;
    goto L000009f0;
L000009e0:
    if(!( *(si + 2) & 3)) {
        ax = L00000DCD(si);
    }
    di = di - 1;
    si = si + 0x10;
L000009f0:
    if(di != 0) {
        goto L000009e0;
    }
    (restore)di;
    (restore)si;
}

/*	Procedure: 0x000009F7 - 0x00000AB2
 *	Argument size: 8
 *	Local size: 4
 *	Save regs size: 8
 */

L000009F7(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vffffffff;



    if(A8 + 1 < 2 || !( *((A4 << 1) + 0x482) & 0x200)) {
        ax = 0;
    } else {
        while(1) {
            (save)A8;
            Vfffffffc = L00000AB3(A4, A6);
            if(Vfffffffc + 1 < 2 || !( *((A4 << 1) + 0x482) & 32768)) {
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
                goto L00000a87;
            }
            if(al == 0xd) {
                asm("loop 0xa55");
                (save)es;
                (save)bx;
                (save)1;
                L00000AB3(A4, & Vffffffff);
                (restore)bx;
                (restore)es;
                asm("cld");
                *di = Vffffffff;
                di = di + 1;
            } else {
                *di = al;
                di = di + 1;
                asm("loop 0xa55");
            }
            if(di != bx) {
                goto L00000aa7;
            }
        }
        ax = Vfffffffc;
        goto L00000aad;
L00000a87:
        (save)bx;
        ax = 2;
        (save)2;
        cx = ~cx;
        asm("sbb ax,ax");
        (save)ax;
        L00000C28(A4, cx);
        *((A4 << 1) + 0x482) = *((A4 << 1) + 0x482) | 0x200;
        (restore)bx;
L00000aa7:
        ax = di - bx;
    }
L00000aad:
}

/*	Procedure: 0x00000AB3 - 0x00000ACE
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000AB3(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    ah = 0x3f;
    asm("int 0x21");
    < ? L00000ac7 : ;
    goto L00000acd;
    ax = L000002C5(ax);
L00000acd:
}

/*	Procedure: 0x00000ACF - 0x00000BE1
 *	Argument size: -130
 *	Local size: 138
 *	Save regs size: 8
 */

L00000ACF(A4, A6, A8, Aff76, Aff78, Aff7b, Aff7c, Aff7e)
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
        if(!( *((A4 << 1) + 0x482) & 32768)) {
            (save)A8;
            ax = L00000BE2(A4, A6);
        } else {
            *((A4 << 1) + 0x482) = *((A4 << 1) + 0x482) & 65023;
            Aff7c = A6;
            Aff78 = A8;
            si = & Aff7e;
            goto L00000b91;
L00000b72:
            ax = Aff76 < 0 ? 65535 : A8 - Aff78 + Aff76 - di;
            goto L00000bdc;
L00000b91:
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
                ax = L00000BE2(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 != di) {
                    goto L00000b72;
                }
                si = & Aff7e;
            }
            di = si - & Aff7e;
            if(di > 0) {
                (save)di;
                ax = L00000BE2(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 == di) {
                    goto L00000bd7;
                }
                ax = Aff76 < 0 ? 65535 : A8 + Aff76 - di;
            } else {
L00000bd7:
                ax = A8;
            }
        }
    }
L00000bdc:
}

/*	Procedure: 0x00000BE2 - 0x00000C27
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BE2(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    if(!( *((A4 << 1) + 0x482) & 0x800)) {
        ax = L00000C28(A4, 0, 0, 2);
    }
    ah = 0x40;
    bx = A4;
    asm("int 0x21");
    < ? L00000c20 : ;
    (save)ax;
    *((A4 << 1) + 0x482) = *((A4 << 1) + 0x482) | 0x1000;
    (restore)ax;
    goto L00000c26;
    ax = L000002C5(ax);
L00000c26:
}

/*	Procedure: 0x00000C28 - 0x00000C52
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 0
 */

L00000C28(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{



    ah = 0x42;
    asm("int 0x21");
    if(!( *((A4 << 1) + 0x482) = *((A4 << 1) + 0x482) & 65023)) {
    } else {
        ax = L000002C5(ax);
        asm("cwd");
    }
}

/* DEST BLOCK NOT FOUND: 00000d5c -> 000001e2 */
/*	Procedure: 0x00000C53 - 0x00000D5E
 *	Argument size: -20
 *	Local size: 34
 *	Save regs size: 0
 */

L00000C53(A4, A6, A8, Aa, Ac, Ae)
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
L00000c8e:
            asm("xchg ax,cx");
            bx = bx / bx;
            edx = bx % bx & 65535;
            asm("xchg ax,cx");
            bx = bx / bx;
            dx = bx % bx;
            *si = dl;
            if(si = si + 1) {
                goto L00000ca4;
            }
            goto L00000c8e;
        }
L00000c9d:
        bx = bx / bx;
        edx = bx % bx & 65535;
        *si = dl;
        si = si + 1;
L00000ca4:
        if(ax != 0) {
            goto L00000c9d;
        }
        cx = ~( & Vffffffde) + si;
        asm("cld");
        al = !(al = *(si - 1) - 0xa) ? al + 0x3a : al + A4;
        *di = al;
        di = di + 1;
        asm("loop 0xcb0");
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
    ax = L00000C53(0x61, 1, A8, A6, ax, dx);
    return;
    bp = sp;
    ax = L00000C53(0x61 & 0xff, 0, Aa, A8, A4, A6, bp);
    return;
    (save)bp;
    bp = sp;
    (save)A6;
    (save)A4;
    (save)A8;
    (save)Aa;
    ax = Aa == 0xa ? 1 : 0;
    ax = L00000C53(0x61, ax);
    return;
    dx = 0x4ae;
    goto L00000d46;
    dx = 0x4b3;
L00000d46:
    cx = 5;
    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    cx = 0x27;
    dx = 0x4b8;
    ah = 0x40;
    asm("int 0x21");
    goto L000001e2;
}

/*	Procedure: 0x00000D5F - 0x00000DCC
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00000D5F(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    if(!( *((A4 << 1) + 0x482) & 0x200)) {
        ax = 1;
    } else {
        ax = 17408;
        asm("int 0x21");
        < ? L00000dc3 : ;
        if(!(dl & 0x80)) {
            ax = 16897;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            < ? L00000dc3 : ;
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
            < ? L00000dc3 : ;
            ax = 16896;
            asm("int 0x21");
            < ? L00000dc3 : ;
            if(dx < Vfffffffe) {
                goto L00000dbf;
            }
            > ? L00000dba : ;
            if(ax < Vfffffffc) {
                goto L00000dbf;
            }
            ax = 1;
        } else {
L00000dbf:
            ax = 0;
            goto L00000dc9;
            ax = L000002C5(ax);
        }
    }
L00000dc9:
}

/*	Procedure: 0x00000DCD - 0x00000E4A
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000DCD(A4)
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
                    goto L00000e0f;
                }
            }
            *A4 = 0;
            ax = *(A4 + 0xa);
            if(ax == A4 + 5) {
                *(A4 + 0xa) = *(A4 + 8);
            }
L00000e0f:
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
            if(L00000ACF() != di) {
                if(*(A4 + 2) & 0x200) {
                    goto L00000e43;
                }
                *(A4 + 2) = *(A4 + 2) | 0x10;
                ax = 65535;
            } else {
L00000e43:
                ax = 0;
            }
        }
    }
}

/*	Procedure: 0x00000E4B - 0x00000E63
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E4B(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = L00001073( & A6, A4, 0x352, 0xf81);
}

/*	Procedure: 0x00000E64 - 0x00000E7C
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000E64(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    *A6 = *A6 - 1;
    (save)A6;
    asm("cbw");
    ax = L00000E7D(ax);
}

/*	Procedure: 0x00000E7D - 0x00000F6A
 *	Argument size: 6
 *	Local size: 2
 *	Save regs size: 4
 */

L00000E7D(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  Vffffffff;



    Vffffffff = A4;
    while(*A6 = *A6 + 1) {
        *A6 = *A6 - 1;
        if(*(A6 + 2) & 0x90 || !( *(A6 + 2) & 2)) {
            goto L00000ed7;
        }
        *(A6 + 2) = *(A6 + 2) | 0x100;
        if(*(A6 + 6) == 0) {
            goto L00000f11;
        }
        if(*A6 == 0) {
            ax = *(A6 + 6);
            *A6 = 65535 - ax;
        } else {
            ax = L00000DCD(A6);
            if(ax != 0) {
                goto L00000efb;
            }
        }
    }
    *(A6 + 0xa) = *(A6 + 0xa) + 1;
    *( *(A6 + 0xa) - 1) = Vffffffff;
    if(!( *(A6 + 2) & 8)) {
        if(Vffffffff != 0xa && Vffffffff != 0xd) {
            goto L00000ebf;
        }
        ax = L00000DCD(A6);
        if(ax == 0) {
            goto L00000ebf;
        }
        ax = 65535;
    } else {
L00000ebf:
        al = Vffffffff;
        ah = 0;
        goto L00000f66;
L00000ed7:
        *(A6 + 2) = *(A6 + 2) | 0x10;
        ax = 65535;
        goto L00000f66;
L00000efb:
        ax = 65535;
        goto L00000f66;
L00000f11:
        if(Vffffffff == 0xa && !( *(A6 + 2) & 0x40)) {
            (save)1;
            ax = 0x4e0;
            (save)0x4e0;
            al = *(A6 + 4);
            asm("cbw");
            (save)ax;
            ax = L00000BE2();
            sp = sp + 6;
            if(ax != 1) {
                goto L00000f4e;
            }
        }
        (save)1;
        ax = & A4;
        (save)ax;
        al = *(A6 + 4);
        asm("cbw");
        (save)ax;
        ax = L00000BE2();
        sp = sp + 6;
        if(ax != 1) {
L00000f4e:
            if(*(A6 + 2) & 0x200) {
                goto L00000f5f;
            }
            *(A6 + 2) = *(A6 + 2) | 0x10;
            ax = 65535;
        } else {
L00000f5f:
            al = Vffffffff;
            ah = 0;
        }
    }
L00000f66:
}

/*	Procedure: 0x00000F6B - 0x00000F80
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000F6B(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = L00000E7D(A4, 0x352);
}

/*	Procedure: 0x00000F81 - 0x00001043
 *	Argument size: 8
 *	Local size: 2
 *	Save regs size: 8
 */

L00000F81(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    di = A6;
    Vfffffffe = di;
    if(!( *(A4 + 2) & 8)) {
        goto L00000fb5;
L00000fb0:
        ax = 0;
        goto L0000103c;
L00000fb5:
        do {
            ax = di;
            di = di - 1;
            if(ax == 0) {
                goto L00000fbc;
            }
            (save)A4;
            bx = A8;
            A8 = A8 + 1;
            al = *bx;
            asm("cbw");
            (save)ax;
            (restore)cx;
        } while(L00000E7D() != 65535);
        goto L00000fb0;
L00000fbc:
    } else {
        if(!( *(A4 + 2) & 0x40)) {
            if(*(A4 + 6) == 0) {
                goto L00001030;
            }
            ax = *(A4 + 6);
            if(ax >= di) {
                goto L00001030;
            }
            if(*A4 != 0) {
                ax = L00000DCD(A4);
                if(ax == 0) {
                    goto L00000fe5;
                }
                ax = 0;
                goto L0000103c;
            }
L00000fe5:
            (save)di;
            (save)A8;
            al = *(A4 + 4);
            asm("cbw");
            (save)ax;
            sp = sp + 6;
            if(L00000BE2() < di) {
                ax = 0;
                goto L0000103c;
            }
        } else {
            goto L00001030;
L0000102c:
            ax = 0;
            goto L0000103c;
L00001030:
            do {
                ax = di;
                di = di - 1;
                if(ax == 0) {
                    goto L00001037;
                }
                if(*A4 = *A4 + 1) {
                    bx = A8;
                    A8 = A8 + 1;
                    ax = L00000E64( *bx, A4);
                } else {
                    bx = A8;
                    A8 = A8 + 1;
                    al = *bx;
                    *(A4 + 0xa) = *(A4 + 0xa) + 1;
                    *( *(A4 + 0xa) - 1) = al;
                    ah = 0;
                }
            } while(ax != 65535);
            goto L0000102c;
        }
    }
L00001037:
    ax = Vfffffffe;
L0000103c:
}

/*	Procedure: 0x00001044 - 0x00001072
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001044()
{



    goto ( *L000005e0);
    (save)bp;
    dx = *(sp + 4);
    cx = 0xf04;
    bx = 0x4e9;
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

/* DEST BLOCK NOT FOUND: 0000108a -> 000010cd */
/*	Procedure: 0x00001073 - 0x000010A0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001073()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x98;
    (save)si;
    (save)di;
    *(bp - 0x58) = 0;
    *(bp - 0x55) = 0x50;
    *(bp - 2) = 0;
    goto L000010cd;
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
    <= ? L000010cc : ;
}

stack space not deallocated on return
/*	Procedure: 0x000010A1 - 0x000016AC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L000010A1()
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
L000010dd:
    al = *esi;
    esi = esi + 1;
    if(al != 0) {
        if(al == 0x25) {
            goto L000010f6;
        }
L000010e6:
        *di = al;
        di = di + 1;
        if(*(bp - 0x55) = *(bp - 0x55) - 1) {
            goto L000010dd;
        }
        ax = L000010A1();
        goto L000010dd;
    }
    goto L00001572;
L000010f6:
    *(bp + 65398) = si;
    al = *esi;
    esi = esi + 1;
    if(al == 0x25) {
        goto L000010e6;
    }
    *(bp + 65386) = di;
    *(bp + 65396) = 0;
    *(bp + 65384) = 0;
    *(bp + 65395) = 0;
    *(bp + 65390) = 65535;
    *(bp + 65392) = 65535;
    goto L00001120;
L0000111f:
    al = *esi;
    esi = esi + 1;
L00001120:
    ah = 0;
    dx = 0;
    ebx = -32 & 0xff;
    if(bl < 0x60) {
        eax = *(bx + 0x4f9) & 65535;
        if(ax > 0x17) {
            goto L00001560;
        }
        bx = ax << 1;
        goto ( *(bx + 0x1145));
        asm("adc [bx+si+0x11],di");
        asm("rcl word [bx+di],1");
        *(bx + di) & dl;
        *(bx + di) = !( *(bx + di));
        *(bp + si) = *(bp + si) + dl;
        asm("adc cl,[si+0x12]");
        (restore)sp;
        asm("adc dh,[bx+0x9111]");
        asm("adc ch,[si+0x12]");
        if(!(dx = dx + 1)) {
            == ? L00001173 : ;
            (save)ss;
            asm("adc cx,ax");
            asm("adc bp,[bx+di+0x13]");
            *(bp + di) = dx;
            dx = dx ^ *di;
            asm("pusha");
            asm("adc ax,0x1560");
            asm("pusha");
            asm("adc ax,0x11a3");
        }
        eax = *esi;
        esi = esi + 4;
        asm("adc cx,bp");
    }
L00001175:
    L0000917c();
    asm("std");
    *(bx - 8) = *(bx - 8) + dh;
    *(bp + 65384) = *(bp + 65384) | 1;
    goto L0000111f;
    if(ch > 0) {
        goto L00001175;
    }
    *(bp + 65384) = *(bp + 65384) | 2;
    goto L0000111f;
    if(ch > 0) {
        goto L00001175;
    }
    if(*(bp + 65395) != 0x2b) {
        *(bp + 65395) = dl;
    }
    goto L0000111f;
    *(bp + 65384) = *(bp + 65384) & -33;
    ch = 5;
    goto L0000111f;
    *(bp + 65384) = *(bp + 65384) | 0x20;
    ch = 5;
    goto L0000111f;
    if(ch <= 0) {
        if(!( *(bp + 65384) & 2)) {
            *(bp + 65384) = *(bp + 65384) | 8;
            ch = 1;
            goto L0000111f;
            di = *(bp + 4);
            ax = *di;
            *(bp + 4) = *(bp + 4) + 2;
            if(ch >= 2) {
                goto L000011e8;
            }
            *(bp + 65390) = ax;
            ch = 3;
        }
        goto L0000111f;
L000011e8:
        if(ch != 4) {
            goto L00001560;
        }
        *(bp + 65392) = ax;
        ch = ch + 1;
        goto L0000111f;
        if(ch >= 4) {
            goto L00001560;
        }
        ch = 4;
        goto L0000111f;
    }
    asm("xchg ax,dx");
    al = al - 0x30;
    asm("cbw");
    if(ch <= 2) {
        ch = 2;
        asm("xchg ax,[bp+0xff6e]");
        if(ax < 0) {
            goto L0000111f;
        }
        ax = ax << 1;
        dx = ax;
        ax = (ax << 1 << 1) + dx;
        *(bp + 65390) = *(bp + 65390) + ax;
        goto L0000111f;
    }
    ch :: 4;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L00001560:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L00001572:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x000016AD - 0x000016D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000016AD()
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

/*	Procedure: 0x000016D4 - 0x00001D4D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000016D4()
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

/*	Procedure: 0x00001D4E - 0x00001DB3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001D4E()
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
