/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_dcc/testlong/ia32_mz_from_dcc/subject.exe'
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
    *L000005ac();
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

/*	Procedure: 0x000001FA - 0x00000245
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

L000001FA()
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffa;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    L00001655(0x194, & Vfffffffc);
    L00001655(0x197, & Vfffffff8);
    (save) & Vfffffffc;
    L00001655(0x19a, & Vfffffff8);
    (save)Vfffffffe;
    (save)Vfffffffc;
    return(L00000DCC(0x1a0, Vfffffff8, Vfffffffa));
}

/*	Procedure: 0x00000246 - 0x00000281
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000246()
{



    (save)bp;
    (save)si;
    si = *(sp + 4);
    if(si >= 0) {
        if(si > 0x58) {
L00000256:
            si = 0x57;
        }
        *L000001A8 = si;
        al = *(si + 0x1aa);
        asm("cbw");
        asm("xchg ax,si");
    } else {
        si = ~si;
        if(si > 0x23) {
            goto L00000256;
        }
        *L000001A8 = 65535;
    }
    *L00000094 = si;
    ax = 65535;
    (restore)si;
    (restore)bp;
    return;
}

/*	Procedure: 0x00000282 - 0x000002B6
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00000282(A4)
/* unknown */ void  A4;
{



    while(1) {
        ax = *L0000020E;
        *L0000020E = *L0000020E - 1;
        if(ax == 0) {
            break;
        }
        bx = *L0000020E << 1;
        *(bx + 0x5b8)();
    }
    *L00000204();
    *L00000206();
    *L00000208();
    return(L00000121(A4));
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 00000329 -> 0000036b */
/* DEST BLOCK NOT FOUND: 00000368 -> 000001e2 */
/*	Procedure: 0x000002B7 - 0x0000033F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000002B7()
{



    (restore) *%cs:0x2b1];
    *%cs:0x2b3] = ds;
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
        < ? L00000368 : ;
        cl = cl ^ 0x7f;
    }
    sp = sp - 2;
    ax = 1 + bx + cx & 65534;
    if(di = sp - ax) {
        goto L00000368;
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
L00000324:
    L00000340();
    if(!(bx = bx + 1)) {
        < ? L0000036b : ;
        L00000340();
        > ? L00000329 : ;
    }
    if(al != 0x20 && al != 0xd && al != 9) {
        goto L00000324;
    }
    al = 0;
    goto L00000324;
}

/* DEST BLOCK NOT FOUND: 00000368 -> 000001e2 */
/*	Procedure: 0x00000340 - 0x000003A1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000340()
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
    ds = *%cs:0x2b3];
    *L00000084 = bx;
    bx = bx + 1 + bx + 1;
    si = sp;
    if(bp = sp - bx) {
        goto L000001e2;
    }
    sp = bp;
    *L00000086 = bp;
L00000388:
    < ? L00000398 : ;
    *bp = si;
    bp = bp + 2;
    asm("%s lodsb");
    asm("loopne 0x390");
    if(al == 0) {
        goto L00000388;
    }
    *bp = 0;
    goto ( *L000002b1);
}

/* DEST BLOCK NOT FOUND: 000003d5 -> 000001e2 */
stack space not deallocated on return
/*	Procedure: 0x000003A2 - 0x00000411
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000003A2()
{



    ax = L000004F1( *L0000008A);
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
        ax = L000004F1( *L0000008E);
        bx = ax;
        (restore)es;
        *L00000088 = ax;
        if(ax != 0) {
            goto L000003d8;
        }
    }
    goto L000001e2;
L000003d8:
    ax = 0;
    cx = 65535;
L000003dd:
    *bx = di;
    bx = bx + 2;
    asm("repne scasb");
    if(*%es:di] != al) {
        goto L000003dd;
    }
    *bx = ax;
    return;
    (save)bp;
    bp = sp;
    if(*L0000020E == 0x20) {
        ax = 1;
    } else {
        ax = *(bp + 4);
        *(( *L0000020E << 1) + 0x5b8) = ax;
        *L0000020E = *L0000020E + 1;
        ax = 0;
    }
    (restore)bp;
}

/*	Procedure: 0x00000412 - 0x0000043F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000412(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = *(A4 + 6);
    *L000005FA = ax;
    if(ax == A4) {
        *L000005FA = 0;
    } else {
        si = *(A4 + 4);
        *( *L000005FA + 4) = si;
        ax = *L000005FA;
        *(si + 6) = ax;
    }
}

/*	Procedure: 0x00000440 - 0x00000479
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 8
 */

L00000440(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  si;



    *A4 = *A4 - A6;
    si = *A4 + A4;
    *si = A6 + 1;
    *(si + 2) = A4;
    if(*L000005F8 == A4) {
        *L000005F8 = si;
    } else {
        *(si + A6 + 2) = si;
    }
    ax = si + 4;
}

/*	Procedure: 0x0000047A - 0x000004B6
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L0000047A(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L00000588(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *(si + 2) = *L000005F8;
        *si = A4 + 1;
        *L000005F8 = si;
        ax = *L000005F8 + 4;
    }
}

/*	Procedure: 0x000004B7 - 0x000004F0
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L000004B7(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = L00000588(A4 & 65535, 0 & 65535);
    if(si == -1) {
        ax = 0;
    } else {
        *L000005FC = si;
        *L000005F8 = si;
        *si = A4 + 1;
        ax = si + 4;
    }
}

/*	Procedure: 0x000004F1 - 0x00000563
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L000004F1(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = A4;
    if(di == 0 || di > -12) {
        ax = 0;
    } else {
        di = di + 0xb & 65528;
        if(*L000005FC == 0) {
            ax = L000004B7(di);
        } else {
            si = *L000005FA;
            if(si != 0) {
                do {
                    ax = *si;
                    if(ax >= di + 0x28) {
                        goto L00000535;
                    }
                    if(*si >= di) {
                        goto L00000543;
                    }
                    si = *(si + 6);
                } while(si != *L000005FA);
                goto L00000559;
L00000535:
                ax = L00000440(si, di);
                goto L00000560;
L00000543:
                L00000412(si);
                *si = *si + 1;
                ax = si + 4;
            } else {
L00000559:
                ax = L0000047A(di);
            }
        }
    }
L00000560:
}

/*	Procedure: 0x00000564 - 0x00000587
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00000564(A4)
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

/*	Procedure: 0x00000588 - 0x000005DB
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000588(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = A4 + *L0000009E;
    asm("adc dx,+0x0");
    cx = ax + 0x100;
    asm("adc dx,+0x0");
    if(A6 == 0) {
        if(cx >= sp) {
            goto L000005af;
        }
        asm("xchg ax,[0x9e]");
    } else {
L000005af:
        *L00000094 = 8;
        ax = 65535;
    }
    return;
    (save)bp;
    bp = sp;
    ax = L00000564(A4);
    return;
    (save)bp;
    bp = sp;
    ax = A4;
    asm("cwd");
    ax = L00000588(ax, A6);
}

/*	Procedure: 0x000005DC - 0x00000622
 *	Argument size: 4
 *	Local size: 2
 *	Save regs size: 8
 */

L000005DC(A4)
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

/*	Procedure: 0x00000623 - 0x000006DB
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 4
 */

L00000623(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{
	/* unknown */ void  si;



    si = A4;
    if(L00000D4E(si) != 0) {
        ax = 65535;
    } else {
        if(Aa == 1 && *si > 0) {
            ax = L000005DC(si);
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
        ax = L00000BA9();
        sp = sp + 8;
        if(dx == -1) {
            if(ax != 65535) {
                goto L00000680;
            }
            ax = 65535;
        } else {
L00000680:
            ax = 0;
        }
    }
    return;
    (save)bp;
    bp = sp;
    sp = sp - 4;
    (save)si;
    si = A4;
    ax = L00000D4E(si);
    if(ax != 0) {
        dx = 65535;
        ax = 65535;
    } else {
        al = *(si + 4);
        asm("cbw");
        *(bp - 2) = dx;
        *(bp - 4) = L00001CCF(ax);
        if(*si > 0) {
            dx = *(bp - 2);
            (save)dx;
            (save) *(bp - 4);
            ax = L000005DC(si);
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

/*	Procedure: 0x000006DC - 0x00000702
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000006DC()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = 0x14;
    for(si = 0x312; 1; si = si + 0x10) {
        ax = di;
        di = di - 1;
        if(ax == 0) {
            break;
        }
        if(( *(si + 2) & 0x300) == 0x300) {
            L00000D4E(si);
        }
    }
}

/*	Procedure: 0x00000703 - 0x00000772
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000703(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    si = A4;
    if(!( *(si + 2) & 0x200)) {
        L000006DC();
    }
    (save) *(si + 6);
    ax = *(si + 8);
    *(si + 0xa) = ax;
    (save)ax;
    al = *(si + 4);
    asm("cbw");
    (save)ax;
    ax = L00000978();
    sp = sp + 6;
    *si = ax;
    if(*si > 0) {
        *(si + 2) = *(si + 2) & 65503;
        ax = 0;
        goto L0000075b;
    } else {
        if(*si == 0) {
            *(si + 2) = *(si + 2) & 65151 | 0x20;
        } else {
            *si = 0;
            *(si + 2) = *(si + 2) | 0x10;
        }
    }
    ax = 65535;
L0000075b:
    return;
    (save)bp;
    bp = sp;
    (save)si;
    si = A4;
    *si = *si + 1;
    ax = L00000773(si);
}

/* DEST BLOCK NOT FOUND: 00000870 -> 00000872 */
stack space not deallocated on return
/*	Procedure: 0x00000773 - 0x00000872
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000773()
{



    (save)bp;
    bp = sp;
    sp = sp - 2;
    (save)si;
    si = *(bp + 4);
    while(*si = *si - 1) {
        if(( *si = *si + 1) || !( *(si + 2) & 0x110)) {
            goto L0000079a;
        }
        while(1) {
            *(si + 2) = *(si + 2) | 0x80;
            if(*(si + 6) != 0) {
                break;
            }
            if(*L0000047A != 0) {
                goto L00000802;
            }
            ax = 0x312;
            if(0x312 != si) {
                goto L00000802;
            }
            al = *(si + 4);
            asm("cbw");
            if(L00000873(ax) == 0) {
                *(si + 2) = *(si + 2) & 65023;
            }
            (save)0x200;
            ax = *(si + 2) & 0x200 ? 0 : 1;
            (save)ax;
            L00000885(si, 0);
        }
        ax = L00000703(si);
        if(ax != 0) {
            goto L000007b8;
        }
    }
    *(si + 0xa) = *(si + 0xa) + 1;
    al = *( *(si + 0xa) - 1);
    ah = 0;
    goto L00000863;
L0000079a:
    *(si + 2) = *(si + 2) | 0x10;
    ax = 65535;
    goto L00000863;
L000007b8:
    ax = 65535;
    goto L00000863;
L00000802:
    do {
        if(!( *(si + 2) & 0x200)) {
            L000006DC();
        }
        (save)1;
        ax = bp - 1;
        (save)ax;
        al = *(si + 4);
        asm("cbw");
        (save)ax;
        ax = L00000A34();
        sp = sp + 6;
        if(ax != 1) {
            goto L00000824;
        }
        if(*(bp - 1) != 0xd) {
            break;
        }
    } while(*(si + 2) & 0x40);
    goto L00000857;
L00000824:
    al = *(si + 4);
    asm("cbw");
    *(si + 2) = L00000CE0(ax) != 1 ? *(si + 2) | 0x10 : *(si + 2) & 65151 | 0x20;
    ax = 65535;
    goto L00000863;
L00000857:
    *(si + 2) = *(si + 2) & 65503;
    al = *(bp - 1);
    ah = 0;
L00000863:
    (restore)si;
    sp = bp;
    (restore)bp;
    return;
    L00000773(0x312);
}

/*	Procedure: 0x00000873 - 0x00000884
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00000873(A4)
/* unknown */ void  A4;
{



    ax = 17408;
    asm("int 0x21");
    return(dx & 0x80);
}

/*	Procedure: 0x00000885 - 0x00000977
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000885()
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
        if(*L0000047C == 0) {
            if(0x322 != si) {
                goto L000008bf;
            }
            *L0000047C = 1;
        } else {
L000008bf:
            if(*L0000047A == 0 && 0x312 == si) {
                *L0000047A = 1;
            }
        }
        if(*si != 0) {
            (save)1;
            (save)0;
            L00000623(si, 0);
        }
        if(!( *(si + 2) & 4)) {
            L0000162E( *(si + 8));
        }
        *(si + 2) = *(si + 2) & 65523;
        *(si + 6) = 0;
        ax = si + 5;
        *(si + 8) = ax;
        *(si + 0xa) = *(si + 8);
        if(*(bp + 8) != 2 && di > 0) {
            *L00000204 = 0x957;
            if(*(bp + 6) == 0) {
                ax = L000004F1(di);
                *(bp + 6) = ax;
                if(*(bp + 6) != 0) {
                    *(si + 2) = *(si + 2) | 4;
                    goto L00000938;
                }
                ax = 65535;
                goto L00000953;
            }
L00000938:
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
L00000953:
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
    (save)si;
    (save)di;
    di = 4;
    si = 0x312;
    goto L00000971;
L00000961:
    if(!( *(si + 2) & 3)) {
        ax = L00000D4E(si);
    }
    di = di - 1;
    si = si + 0x10;
L00000971:
    if(di != 0) {
        goto L00000961;
    }
    (restore)di;
    (restore)si;
}

/*	Procedure: 0x00000978 - 0x00000A33
 *	Argument size: 8
 *	Local size: 4
 *	Save regs size: 8
 */

L00000978(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vffffffff;



    if(A8 + 1 < 2 || !( *((A4 << 1) + 0x452) & 0x200)) {
        ax = 0;
    } else {
        while(1) {
            (save)A8;
            Vfffffffc = L00000A34(A4, A6);
            if(Vfffffffc + 1 < 2 || !( *((A4 << 1) + 0x452) & 32768)) {
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
                goto L00000a08;
            }
            if(al == 0xd) {
                asm("loop 0x9d6");
                (save)es;
                (save)bx;
                (save)1;
                L00000A34(A4, & Vffffffff);
                (restore)bx;
                (restore)es;
                asm("cld");
                *di = Vffffffff;
                di = di + 1;
            } else {
                *di = al;
                di = di + 1;
                asm("loop 0x9d6");
            }
            if(di != bx) {
                goto L00000a28;
            }
        }
        ax = Vfffffffc;
        goto L00000a2e;
L00000a08:
        (save)bx;
        ax = 2;
        (save)2;
        cx = ~cx;
        asm("sbb ax,ax");
        (save)ax;
        L00000BA9(A4, cx);
        *((A4 << 1) + 0x452) = *((A4 << 1) + 0x452) | 0x200;
        (restore)bx;
L00000a28:
        ax = di - bx;
    }
L00000a2e:
}

/*	Procedure: 0x00000A34 - 0x00000A4F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A34(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    ah = 0x3f;
    asm("int 0x21");
    < ? L00000a48 : ;
    goto L00000a4e;
    ax = L00000246(ax);
L00000a4e:
}

/*	Procedure: 0x00000A50 - 0x00000B62
 *	Argument size: -130
 *	Local size: 138
 *	Save regs size: 8
 */

L00000A50(A4, A6, A8, Aff76, Aff78, Aff7b, Aff7c, Aff7e)
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
        if(!( *((A4 << 1) + 0x452) & 32768)) {
            (save)A8;
            ax = L00000B63(A4, A6);
        } else {
            *((A4 << 1) + 0x452) = *((A4 << 1) + 0x452) & 65023;
            Aff7c = A6;
            Aff78 = A8;
            si = & Aff7e;
            goto L00000b12;
L00000af3:
            ax = Aff76 < 0 ? 65535 : A8 - Aff78 + Aff76 - di;
            goto L00000b5d;
L00000b12:
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
                ax = L00000B63(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 != di) {
                    goto L00000af3;
                }
                si = & Aff7e;
            }
            di = si - & Aff7e;
            if(di > 0) {
                (save)di;
                ax = L00000B63(A4, & Aff7e);
                Aff76 = ax;
                if(Aff76 == di) {
                    goto L00000b58;
                }
                ax = Aff76 < 0 ? 65535 : A8 + Aff76 - di;
            } else {
L00000b58:
                ax = A8;
            }
        }
    }
L00000b5d:
}

/*	Procedure: 0x00000B63 - 0x00000BA8
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00000B63(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{



    if(!( *((A4 << 1) + 0x452) & 0x800)) {
        ax = L00000BA9(A4, 0, 0, 2);
    }
    ah = 0x40;
    bx = A4;
    asm("int 0x21");
    < ? L00000ba1 : ;
    (save)ax;
    *((A4 << 1) + 0x452) = *((A4 << 1) + 0x452) | 0x1000;
    (restore)ax;
    goto L00000ba7;
    ax = L00000246(ax);
L00000ba7:
}

/*	Procedure: 0x00000BA9 - 0x00000BD3
 *	Argument size: 10
 *	Local size: 0
 *	Save regs size: 0
 */

L00000BA9(A4, A6, A8, Aa)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{



    ah = 0x42;
    asm("int 0x21");
    if(!( *((A4 << 1) + 0x452) = *((A4 << 1) + 0x452) & 65023)) {
    } else {
        ax = L00000246(ax);
        asm("cwd");
    }
}

/* DEST BLOCK NOT FOUND: 00000cdd -> 000001e2 */
/*	Procedure: 0x00000BD4 - 0x00000CDF
 *	Argument size: -20
 *	Local size: 34
 *	Save regs size: 0
 */

L00000BD4(A4, A6, A8, Aa, Ac, Ae)
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
L00000c0f:
            asm("xchg ax,cx");
            bx = bx / bx;
            edx = bx % bx & 65535;
            asm("xchg ax,cx");
            bx = bx / bx;
            dx = bx % bx;
            *si = dl;
            if(si = si + 1) {
                goto L00000c25;
            }
            goto L00000c0f;
        }
L00000c1e:
        bx = bx / bx;
        edx = bx % bx & 65535;
        *si = dl;
        si = si + 1;
L00000c25:
        if(ax != 0) {
            goto L00000c1e;
        }
        cx = ~( & Vffffffde) + si;
        asm("cld");
        al = !(al = *(si - 1) - 0xa) ? al + 0x3a : al + A4;
        *di = al;
        di = di + 1;
        asm("loop 0xc31");
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
    ax = L00000BD4(0x61, 1, A8, A6, ax, dx);
    return;
    bp = sp;
    ax = L00000BD4(0x61 & 0xff, 0, Aa, A8, A4, A6, bp);
    return;
    (save)bp;
    bp = sp;
    (save)A6;
    (save)A4;
    (save)A8;
    (save)Aa;
    ax = Aa == 0xa ? 1 : 0;
    ax = L00000BD4(0x61, ax);
    return;
    dx = 0x47e;
    goto L00000cc7;
    dx = 0x483;
L00000cc7:
    cx = 5;
    ah = 0x40;
    bx = 2;
    asm("int 0x21");
    cx = 0x27;
    dx = 0x488;
    ah = 0x40;
    asm("int 0x21");
    goto L000001e2;
}

/*	Procedure: 0x00000CE0 - 0x00000D4D
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00000CE0(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    if(!( *((A4 << 1) + 0x452) & 0x200)) {
        ax = 1;
    } else {
        ax = 17408;
        asm("int 0x21");
        < ? L00000d44 : ;
        if(!(dl & 0x80)) {
            ax = 16897;
            cx = 0;
            dx = 0;
            asm("int 0x21");
            < ? L00000d44 : ;
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
            < ? L00000d44 : ;
            ax = 16896;
            asm("int 0x21");
            < ? L00000d44 : ;
            if(dx < Vfffffffe) {
                goto L00000d40;
            }
            > ? L00000d3b : ;
            if(ax < Vfffffffc) {
                goto L00000d40;
            }
            ax = 1;
        } else {
L00000d40:
            ax = 0;
            goto L00000d4a;
            ax = L00000246(ax);
        }
    }
L00000d4a:
}

/*	Procedure: 0x00000D4E - 0x00000DCB
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00000D4E(A4)
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
                    goto L00000d90;
                }
            }
            *A4 = 0;
            ax = *(A4 + 0xa);
            if(ax == A4 + 5) {
                *(A4 + 0xa) = *(A4 + 8);
            }
L00000d90:
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
            if(L00000A50() != di) {
                if(*(A4 + 2) & 0x200) {
                    goto L00000dc4;
                }
                *(A4 + 2) = *(A4 + 2) | 0x10;
                ax = 65535;
            } else {
L00000dc4:
                ax = 0;
            }
        }
    }
}

/*	Procedure: 0x00000DCC - 0x00000DE4
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000DCC(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    ax = L00000FF4( & A6, A4, 0x322, 0xf02);
}

/*	Procedure: 0x00000DE5 - 0x00000DFD
 *	Argument size: 6
 *	Local size: 0
 *	Save regs size: 0
 */

L00000DE5(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{



    *A6 = *A6 - 1;
    (save)A6;
    asm("cbw");
    ax = L00000DFE(ax);
}

/*	Procedure: 0x00000DFE - 0x00000EEB
 *	Argument size: 6
 *	Local size: 2
 *	Save regs size: 4
 */

L00000DFE(A4, A6)
/* unknown */ void  A4;
/* unknown */ void  A6;
{
	/* unknown */ void  Vffffffff;



    Vffffffff = A4;
    while(*A6 = *A6 + 1) {
        *A6 = *A6 - 1;
        if(*(A6 + 2) & 0x90 || !( *(A6 + 2) & 2)) {
            goto L00000e58;
        }
        *(A6 + 2) = *(A6 + 2) | 0x100;
        if(*(A6 + 6) == 0) {
            goto L00000e92;
        }
        if(*A6 == 0) {
            ax = *(A6 + 6);
            *A6 = 65535 - ax;
        } else {
            ax = L00000D4E(A6);
            if(ax != 0) {
                goto L00000e7c;
            }
        }
    }
    *(A6 + 0xa) = *(A6 + 0xa) + 1;
    *( *(A6 + 0xa) - 1) = Vffffffff;
    if(!( *(A6 + 2) & 8)) {
        if(Vffffffff != 0xa && Vffffffff != 0xd) {
            goto L00000e40;
        }
        ax = L00000D4E(A6);
        if(ax == 0) {
            goto L00000e40;
        }
        ax = 65535;
    } else {
L00000e40:
        al = Vffffffff;
        ah = 0;
        goto L00000ee7;
L00000e58:
        *(A6 + 2) = *(A6 + 2) | 0x10;
        ax = 65535;
        goto L00000ee7;
L00000e7c:
        ax = 65535;
        goto L00000ee7;
L00000e92:
        if(Vffffffff == 0xa && !( *(A6 + 2) & 0x40)) {
            (save)1;
            ax = 0x4b0;
            (save)0x4b0;
            al = *(A6 + 4);
            asm("cbw");
            (save)ax;
            ax = L00000B63();
            sp = sp + 6;
            if(ax != 1) {
                goto L00000ecf;
            }
        }
        (save)1;
        ax = & A4;
        (save)ax;
        al = *(A6 + 4);
        asm("cbw");
        (save)ax;
        ax = L00000B63();
        sp = sp + 6;
        if(ax != 1) {
L00000ecf:
            if(*(A6 + 2) & 0x200) {
                goto L00000ee0;
            }
            *(A6 + 2) = *(A6 + 2) | 0x10;
            ax = 65535;
        } else {
L00000ee0:
            al = Vffffffff;
            ah = 0;
        }
    }
L00000ee7:
}

/*	Procedure: 0x00000EEC - 0x00000F01
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00000EEC(A4)
/* unknown */ void  A4;
{
	/* unknown */ void  si;



    ax = L00000DFE(A4, 0x322);
}

/*	Procedure: 0x00000F02 - 0x00000FC4
 *	Argument size: 8
 *	Local size: 2
 *	Save regs size: 8
 */

L00000F02(A4, A6, A8)
/* unknown */ void  A4;
/* unknown */ void  A6;
/* unknown */ void  A8;
{
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    di = A6;
    Vfffffffe = di;
    if(!( *(A4 + 2) & 8)) {
        goto L00000f36;
L00000f31:
        ax = 0;
        goto L00000fbd;
L00000f36:
        do {
            ax = di;
            di = di - 1;
            if(ax == 0) {
                goto L00000f3d;
            }
            (save)A4;
            bx = A8;
            A8 = A8 + 1;
            al = *bx;
            asm("cbw");
            (save)ax;
            (restore)cx;
        } while(L00000DFE() != 65535);
        goto L00000f31;
L00000f3d:
    } else {
        if(!( *(A4 + 2) & 0x40)) {
            if(*(A4 + 6) == 0) {
                goto L00000fb1;
            }
            ax = *(A4 + 6);
            if(ax >= di) {
                goto L00000fb1;
            }
            if(*A4 != 0) {
                ax = L00000D4E(A4);
                if(ax == 0) {
                    goto L00000f66;
                }
                ax = 0;
                goto L00000fbd;
            }
L00000f66:
            (save)di;
            (save)A8;
            al = *(A4 + 4);
            asm("cbw");
            (save)ax;
            sp = sp + 6;
            if(L00000B63() < di) {
                ax = 0;
                goto L00000fbd;
            }
        } else {
            goto L00000fb1;
L00000fad:
            ax = 0;
            goto L00000fbd;
L00000fb1:
            do {
                ax = di;
                di = di - 1;
                if(ax == 0) {
                    goto L00000fb8;
                }
                if(*A4 = *A4 + 1) {
                    bx = A8;
                    A8 = A8 + 1;
                    ax = L00000DE5( *bx, A4);
                } else {
                    bx = A8;
                    A8 = A8 + 1;
                    al = *bx;
                    *(A4 + 0xa) = *(A4 + 0xa) + 1;
                    *( *(A4 + 0xa) - 1) = al;
                    ah = 0;
                }
            } while(ax != 65535);
            goto L00000fad;
        }
    }
L00000fb8:
    ax = Vfffffffe;
L00000fbd:
}

/*	Procedure: 0x00000FC5 - 0x00000FF3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000FC5()
{



    goto ( *L000005b0);
    (save)bp;
    dx = *(sp + 4);
    cx = 0xf04;
    bx = 0x4b9;
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

/* DEST BLOCK NOT FOUND: 0000100b -> 0000104e */
/*	Procedure: 0x00000FF4 - 0x00001021
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000FF4()
{



    (save)bp;
    bp = sp;
    sp = sp - 0x98;
    (save)si;
    (save)di;
    *(bp - 0x58) = 0;
    *(bp - 0x55) = 0x50;
    *(bp - 2) = 0;
    goto L0000104e;
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
    <= ? L0000104d : ;
}

stack space not deallocated on return
/*	Procedure: 0x00001022 - 0x0000162D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L00001022()
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
L0000105e:
    al = *esi;
    esi = esi + 1;
    if(al != 0) {
        if(al == 0x25) {
            goto L00001077;
        }
L00001067:
        *di = al;
        di = di + 1;
        if(*(bp - 0x55) = *(bp - 0x55) - 1) {
            goto L0000105e;
        }
        L00001022();
        goto L0000105e;
    }
    goto L000014f3;
L00001077:
    *(bp + 65398) = si;
    al = *esi;
    esi = esi + 1;
    if(al == 0x25) {
        goto L00001067;
    }
    *(bp + 65386) = di;
    cx = 0;
    *(bp + 65396) = 0;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
L000014f3:
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x0000162E - 0x00001654
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000162E()
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

/*	Procedure: 0x00001655 - 0x00001CCE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001655()
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

/*	Procedure: 0x00001CCF - 0x00001D33
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001CCF()
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
