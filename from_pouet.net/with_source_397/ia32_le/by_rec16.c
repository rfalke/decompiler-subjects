/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_397/ia32_le/subject.exe'
 */

/*	Procedure: 0x00000008 - 0x00000063
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L00000008()
{
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;



    ax = 0x22;
    ax = L000000BA();
    if(ax != 0) {
        di = " 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
        si = ax;
        (save)di;
        do {
            al = *esi;
            esi = esi + 1;
            *di = al;
            di = di + 1;
        } while(al != 0);
        (restore)di;
        ax = di;
        dx = 0x31;
        L0000011B();
        ax = di;
        if(L00000140() == 0) {
            goto L0000003a;
        }
        ax = di;
    } else {
L0000003a:
        si = 0;
        do {
            bx = " 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
            ax = 0x36;
            dx = *(si + 0x1ee);
            L000001EC();
            if(*" 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n" != 0) {
                goto L00000050;
            }
            si = si + 1 + 1;
        } while(si < 4);
        goto L0000005c;
L00000050:
        ax = " 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
        goto L0000005f;
L0000005c:
        ax = 0x36;
    }
L0000005f:
}

stack space not deallocated on return
/*	Procedure: 0x00000064 - 0x000000B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00000064()
{
	/* unknown */ void  bx;



    (save)bp;
    bp = sp;
    sp = sp - 0x88;
    bp = bp - 0x80;
    bx = dx;
    *(bp + 0x78) = L00000008();
    *(bp + 0x7a) = *bx;
    ax = bp - 8;
    dx = bp + 0x78;
    *(bp + 0x7c) = L0000031E();
    ax = *(bp + 0x78);
    *(bp + 0x7e) = 0;
    L0000032D();
    ax = 0x41;
    L00000337();
    ax = *(bp + 0x78);
    L00000337();
    ax = *(L0000035A());
    L00000362();
    L00000337();
    ax = 1;
    sp = bp + 0x80;
    (restore)bp;
    return(L0000037C());
}

/*	Procedure: 0x000000BA - 0x0000011A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 24
 */

L000000BA()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    (save)ax;
    si = *L00000220;
    if(si != 0 && ax != 0) {
        di = ax;
        es = ds;
        cx = 65535;
        ax = 0;
        asm("repne scasb");
        di = !cx - 1;
        goto L00000109;
L00000102:
        ax = (di + 1 & 65535) + cx;
        goto L00000111;
L00000109:
        while(1) {
            cx = *si;
            if(cx == 0) {
                break;
            }
            dx = *(bp - 2);
            bx = di;
            ax = cx;
            ax = L000005FE();
            if(ax == 0) {
                al = *(cx + di);
                if(0 == 0x3d) {
                    goto L00000102;
                }
            }
            si = si + 2;
        }
    }
    ax = 0;
L00000111:
}

/*	Procedure: 0x0000011B - 0x0000013F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L0000011B()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    cx = ax;
    for(bx = ax; 1; bx = bx + 1) {
        al = *bx;
        if(al == 0) {
            break;
        }
        al = al - 0x41;
        dl = al;
        dh = 0;
        if(0 <= 0x19) {
            *bx = al + 0x61;
        }
    }
    return(cx);
}

/*	Procedure: 0x00000140 - 0x000001EB
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 20
 */

L00000140()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    si = ax;
    bx = dx;
    if(*bx != 0) {
        if(*(bx + 1) != 0) {
            goto L00000178;
        }
        dl = *bx;
        do {
            al = *si;
            if(al == dl) {
                goto L00000174;
            }
            if(al == 0) {
                break;
            }
            si = si + 1;
            al = *si;
            if(al == dl) {
                goto L00000174;
            }
            si = si + 1;
        } while(al != 0);
        si = 0;
L00000174:
        ax = si;
    }
    goto L000001e3;
L00000178:
    cx = 65535;
    di = si;
    al = 0;
    < ? L0000018b : ;
    dx = ds;
    es = dx;
    asm("repne scasb");
    != ? 0x18b : ;
    di = di - 1;
    ax & 0xcf89;
    Vfffffffc = di;
    di = bx;
    es = ds;
    cx = 65535;
    ax = 0;
    asm("repne scasb");
    for(Vfffffffe = !cx - 1; 1; si = dx + 1) {
        if(Vfffffffc - si < Vfffffffe) {
            goto L000001e1;
        }
        di = si;
        al = *bx;
        < ? L000001bd : ;
        dx = ds;
        es = dx;
        asm("repne scasb");
        != ? 0x1bd : ;
        di = di - 1;
        ax & 0xcf89;
        dx = di;
        if(di == 0) {
            goto L000001e1;
        }
        cx = Vfffffffe;
        si = ds;
        di = bx;
        es = si;
        si = dx;
        asm("repe cmpsb");
        asm("lahf");
        if(!(ah & 0x40)) {
            break;
        }
    }
    ax = dx;
    goto L000001e3;
L000001e1:
    ax = 0;
L000001e3:
}

/*	Procedure: 0x000001EC - 0x000002CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000001EC()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;



    (save)ax;
    di = ax;
    si = dx;
    *(bp - 2) = bx;
    dx = 0;
    ax = di;
    cx = *(L0000035A());
    ax = L00000651();
    if(ax == 0) {
        al = *di;
        ah = 0;
        bx = *(bp - 2);
        if(0 != 0x5c && 0 != 0x2e && 0 != 0x2f) {
            if(0 == 0) {
                goto L0000022e;
            }
            if(( *(di + 1) & 0xff) != 0x3a) {
L0000022e:
                dx = 0x90;
                ax = *(bp - 2);
                L00000674();
                ax = *(bp - 2);
                bx = *(bp - 2);
                ax = L000006F2();
                bx = bx + ax;
                al = *(bx - 1);
                if(0 != 0x5c) {
                    *bx = 0x5c;
                    bx = bx + 1;
                }
            }
        }
        dx = di;
        ax = bx;
        ax = L0000070B();
    } else {
        ax = si;
        ax = L000000BA();
        si = ax;
        if(ax != 0) {
            while(1) {
                if(*si == 0) {
                    goto L000002c3;
                }
                for(bx = *(bp - 2); *si != 0; bx = bx + 1) {
                    al = *si;
                    ah = 0;
                    if(0 == 0x3b) {
                        break;
                    }
                    si = si + 1;
                    *bx = 0;
                }
                if(bx != *(bp - 2)) {
                    al = *(bx - 1);
                    ah = 0;
                    if(0 != 0x5c && 0 != 0x2f && 0 != 0x3a) {
                        *bx = 0x5c;
                        bx = bx + 1;
                    }
                    dx = di;
                    ax = bx;
                    *bx = 0;
                    L0000074A();
                    ax = *(bp - 2);
                    dx = 0;
                    ax = L00000651();
                    if(ax == 0) {
                        break;
                    }
                }
                if(*si == 0) {
                    goto L000002c3;
                }
                si = si + 1;
            }
            ax = cx;
            ax = L00000780();
        } else {
L000002c3:
            *( *(bp - 2)) = 0;
        }
    }
}

/*	Procedure: 0x000002D0 - 0x0000031D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 20
 */

L000002D0()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    di = ax;
    cx = dx;
    bx = 0x80;
    es = *L00000226;
    dl = *%es:bx];
    dh = 0;
    si = 0x81;
    ax = 0;
    if(di != 0) {
        if(cx < 2) {
            eax = 0 & 0xff;
            *di = 0;
        } else {
            bx = di;
            if(dx >= cx) {
                ax = cx - 1;
            }
            while(1) {
                ax = ax - 1;
                if(ax == 65535) {
                    break;
                }
                si = si + 1;
                *bx = *%es:si];
                bx = bx + 1;
            }
            ax = bx;
            *bx = 0;
            ax = ax - di;
        }
    }
}

/*	Procedure: 0x0000031E - 0x0000032C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L0000031E()
{
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    bx = ax;
    dx = 0x7fff;
    L000002D0();
    return(bx);
}

/*	Procedure: 0x0000032D - 0x00000336
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0000032D()
{
	/* unknown */ void  bx;



    bx = *L00000220;
    return(L000007A6());
}

/*	Procedure: 0x00000337 - 0x00000359
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000337()
{
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    dx = 0x25c;
    ax = L000008B4();
    bx = ax;
    if(ax != 65535) {
        dx = 0x25c;
        ax = 0xa;
        ax = L00000924();
        if(ax == 0xa) {
            ax = bx + 1;
        }
    }
}

/*	Procedure: 0x0000035A - 0x0000035D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000035A()
{



    return("ry\r\n");
}

/*	Procedure: 0x0000035E - 0x00000361
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000035E()
{



    return("\r\n");
}

/*	Procedure: 0x00000362 - 0x0000037A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00000362()
{
	/* unknown */ void  bx;



    if(ax < 0 || ax > 0xf) {
        return(0x183);
    }
    return(*((ax << 1) + 0x1f4));
}

/*	Procedure: 0x0000037B - 0x0000037B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000037B()
{



}

/*	Procedure: 0x0000037C - 0x0000038D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0000037C()
{
	/* unknown */ void  dx;



    dx = ax;
    *L00000214();
    *L00000216();
    ax = dx;
    return(L0000038E());
}

/* DEST BLOCK NOT FOUND: 0000039b -> 0000059c */
/*	Procedure: 0x0000038E - 0x000003A0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000038E()
{



    (save)dx;
    dx = ax;
    *L00000216();
    *L00000218();
    ax = dx;
    goto L0000059c;
}

/*	Procedure: 0x000005BB - 0x000005F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000005BB()
{



    asm("%d mov sp,0x4ce");
    (save)bx;
    (save)ax;
    (save)dx;
    ds = 0;
    edx = "con" & 65535;
    ax = 0x3d01;
    asm("int 0x21");
    bx = ax;
    (restore)ds;
    (restore)dx;
    si = dx;
    asm("cld");
    do {
        al = *esi;
        esi = esi + 1;
    } while(al != 0);
    cx = si - dx - 1;
    ah = 0x40;
    asm("int 0x21");
    (restore)ax;
    (save)ax;
    ax = 0;
    dx = 0xff;
    L00000A36();
    (restore)ax;
    ah = 0x4c;
    asm("int 0x21");
}

/*	Procedure: 0x000005F4 - 0x000005FD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L000005F4()
{
	/* unknown */ void  ax;



    ds = 0x291;
    return(0x291);
    asm("retf");
    asm("retf");
}

/*	Procedure: 0x000005FE - 0x00000650
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000005FE()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = ax;
    for(si = dx; bx != 0; bx = bx - 1) {
        al = *di;
        ah = *si;
        dl = al;
        dh = 0;
        if(0 >= 0x41 && 0 <= 0x5a) {
            al = al + 0x20;
        }
        dl = ah;
        dh = 0;
        if(0 >= 0x41 && 0 <= 0x5a) {
            ah = ah + 0x20;
        }
        if(al != ah) {
            goto L00000636;
        }
        if(ah == 0) {
            goto L0000064e;
        }
        di = di + 1;
        si = si + 1;
    }
    return(0);
L00000636:
    dl = al;
    al = ah;
    edx = 0 & 65535;
    return(dx & 65535);
L0000064e:
}

/*	Procedure: 0x00000651 - 0x00000673
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000651()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;



    bx = dx;
    dx = ax;
    ax = 0x4300;
    asm("int 0x21");
    < ? L0000066c : ;
    if(!(bl & 2) && !(cl & 1)) {
        ax = 0x600;
        asm("stc");
    }
    asm("sbb dx,dx");
    return(L00000CD5());
}

stack space not deallocated on return
/*	Procedure: 0x00000674 - 0x000006F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 20
 */

L00000674()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    (save)bp;
    bp = sp;
    sp = sp - 0x90;
    (save)ax;
    bp = bp - 0x10c;
    bx = dx;
    si = bp + 0x7f;
    dl = 0;
    ah = 0x47;
    asm("int 0x21");
    asm("sbb dx,dx");
    if(dx < 0) {
        ax = 1;
L00000699:
        L00000780();
        ax = 0;
    } else {
        ah = 0x19;
        asm("int 0x21");
        *(bp + 0x7d) = 0x3a;
        *(bp + 0x7e) = 0x5c;
        al = al + 0x41;
        di = bp + 0x7c;
        *(bp + 0x7c) = al;
        es = ds;
        cx = 65535;
        ax = 0;
        asm("repne scasb");
        dx = !cx - 1 + 1;
        if(*(bp + 0x7a) == 0) {
            ax = dx;
            ax = L00000D39();
            *(bp + 0x7a) = ax;
            if(*(bp + 0x7a) == 0) {
                ax = 5;
                goto L00000699;
            }
            bx = dx;
        }
        dx = bp + 0x7c;
        ax = *(bp + 0x7a);
        ax = L00000DE6();
    }
    sp = bp + 0x10c;
    (restore)bp;
}

/*	Procedure: 0x000006F2 - 0x0000070A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000006F2()
{
	/* unknown */ void  cx;
	/* unknown */ void  di;
	/* unknown */ void  es;



    di = ax;
    es = ds;
    cx = 65535;
    ax = 0;
    asm("repne scasb");
    return(!cx - 1);
}

/*	Procedure: 0x0000070B - 0x00000749
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L0000070B()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    di = ax;
    si = dx;
    (save)di;
    if(!(si & 1)) {
        al = *esi;
        esi = esi + 1;
        *di = al;
        di = di + 1;
        if(al == 0) {
            goto L00000746;
        }
    }
    do {
        ax = *si;
        if(al == 0) {
            goto L00000744;
        }
        *di = ax;
        di = di + 2;
        if(ah == 0) {
            goto L00000746;
        }
        ax = *(si + 2);
        if(al == 0) {
            goto L00000744;
        }
        *di = ax;
        si = si + 4;
        di = di + 2;
    } while(ah != 0);
    == ? L00000746 : ;
L00000744:
    *di = al;
L00000746:
    (restore)ax;
}

/*	Procedure: 0x0000074A - 0x0000077F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L0000074A()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    si = dx;
    di = ax;
    es = ds;
    (save)di;
    cx = 65535;
    al = 0;
    asm("repne scasb");
    di = di - 1;
    do {
        al = *si;
        *di = al;
        if(*di == 0) {
            break;
        }
        al = *(si + 1);
        si = si + 2;
        *(di + 1) = al;
        di = di + 2;
    } while(al != 0);
    (restore)di;
    return(di);
    ax = 0xd;
}

/*	Procedure: 0x00000780 - 0x0000079C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000780()
{



L00000780:
    dx = ax;
    ax = L0000035A(dx, bx);
    *ax = dx;
    (restore)dx;
    (restore)bx;
    return;
    ax = 0xe;
    goto L00000780;
    ax = 9;
    L00000780();
    return(65535);
}

/* DEST BLOCK NOT FOUND: 000007a4 -> 00000787 */
/*	Procedure: 0x0000079D - 0x000007A5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000079D()
{



    (save)bx;
    (save)dx;
    dx = ax;
    L0000035E();
    goto L00000787;
}

stack space not deallocated on return
/*	Procedure: 0x000007A6 - 0x000008B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000007A6()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;



    (save)bp;
    bp = sp;
    sp = sp - 0x9a;
    bp = bp - 0x80;
    si = ax;
    *(bp + 0x7a) = dx;
    cx = bx;
    ax = L00000E0F();
    dx = ax;
    if(ax != 65535) {
L000007c5:
    } else {
        ax = L0000035A();
        if(*ax != 1) {
            ax = L0000035A();
            if(*ax != 9) {
                goto L000007c5;
            }
        }
        al = *si;
        ah = 0;
        if(0 == 0x5c || 0 == 0 || ( *(si + 1) & 0xff) == 0x3a) {
            goto L000007c5;
        }
        ax = 0x192;
        ax = L000000BA();
        di = ax;
        if(ax == 0) {
            goto L000007c5;
        }
        ax = si;
        *(bp + 0x7c) = L000006F2() + 1;
        for(*(bp + 0x78) = 0x90 - *(bp + 0x7c); 1; di = di + 1) {
            if(*di == 0) {
                goto L000007c5;
            }
            dx = 0x3b;
            ax = di;
            ax = L00001285();
            *(bp + 0x7e) = ax;
            if(*(bp + 0x7e) == 0) {
                ax = di;
                bx = di;
                *(bp + 0x7e) = bx + L000006F2();
            }
            bx = *(bp + 0x7e) - di;
            *(bp + 0x76) = bx;
            if(*(bp + 0x76) > *(bp + 0x78)) {
                break;
            }
            dx = di;
            di = bp - 0x1a;
            ax = bp - 0x1a;
            di = di + *(bp + 0x76);
            ax = L0000129E();
            al = *(di - 1);
            if(0 != 0x5c) {
                *di = 0x5c;
                di = di + 1;
            }
            bx = *(bp + 0x7c);
            dx = si;
            ax = di;
            L0000129E();
            dx = *(bp + 0x7a);
            ax = bp - 0x1a;
            bx = cx;
            ax = L00000E0F();
            dx = ax;
            if(ax != 65535) {
                goto L000008a9;
            }
            ax = L0000035A();
            if(*ax != 1) {
                ax = L0000035A();
                if(*ax != 9) {
                    goto L000008a9;
                }
            }
            di = *(bp + 0x7e);
            al = *di;
            if(0 != 0x3b) {
                goto L000008a9;
            }
        }
        ax = 2;
        L00000780();
        ax = 0xa;
        L0000079D();
        ax = 65535;
        goto L000008ab;
    }
L000008a9:
    ax = dx;
L000008ab:
    sp = bp + 0x80;
    (restore)bp;
}

/*	Procedure: 0x000008B4 - 0x00000923
 *	Argument size: -2
 *	Local size: 2
 *	Save regs size: 16
 */

L000008B4()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    si = ax;
    bx = dx;
    if(*(bx + 4) == 0) {
        ax = dx;
        ax = L000012BE();
    }
    di = 0;
    if(!( *(bx + 7) & 4)) {
        *(bx + 7) = *(bx + 7) & 0xf9;
        edi = 1 & 65535;
        *(bx + 7) = *(bx + 7) | 2;
    }
    Vfffffffe = si;
    cx = 0;
    do {
        al = *si;
        if(0 == 0) {
            goto L000008fa;
        }
        dx = bx;
        si = si + 1;
        ax = L00000924();
    } while(ax != 65535);
    cx = ax;
L000008fa:
    if(di != 0) {
        *(bx + 7) = *(bx + 7) & 0xf9;
        *(bx + 7) = *(bx + 7) | 4;
        if(cx == 0) {
            ax = bx;
            cx = L0000131B();
        }
    }
    if(cx == 0) {
        cx = si - Vfffffffe;
    }
    return(cx);
}

/*	Procedure: 0x00000924 - 0x000009AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00000924()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;



    cx = ax;
    bx = dx;
    if(!( *(bx + 6) & 2)) {
        ax = 4;
        L00000780();
        ax = 65535;
        *(bx + 6) = *(bx + 6) | 0x20;
    } else {
        if(*(bx + 4) == 0) {
            ax = dx;
            L000012BE();
        }
        dx = "ts reserved.\r\n*** NULL assignment detected\r\n";
        if(cx == 0xa) {
            dx = 0x600;
            if(*(bx + 6) & 0x40) {
                goto L00000981;
            }
            *(bx + 7) = *(bx + 7) | 0x10;
            *( *bx) = 0xd;
            *bx = *bx + 1;
            *(bx + 2) = *(bx + 2) + 1;
            if(*(bx + 2) != *(bx + 0xa)) {
                goto L00000981;
            }
            ax = bx;
            if(L0000131B() == 0) {
                goto L00000981;
            }
L0000097c:
            ax = 65535;
        } else {
L00000981:
            *(bx + 7) = *(bx + 7) | 0x10;
            *( *bx) = cl;
            *bx = *bx + 1;
            *(bx + 2) = *(bx + 2) + 1;
            if(!( *(bx + 6) & dx)) {
                ax = *(bx + 2);
                if(ax != *(bx + 0xa)) {
                    goto L000009a4;
                }
            }
            ax = bx;
            ax = L0000131B();
            if(ax != 0) {
                goto L0000097c;
            }
L000009a4:
            al = cl;
            ah = 0;
        }
    }
}

/*	Procedure: 0x000009AC - 0x000009C1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L000009AC()
{
	/* unknown */ void  dx;



    dx = *L00000446;
    ax = *"";
    *L00000386 = 0x2000;
    L00000064();
    return(L0000037C());
}

/*	Procedure: 0x000009C2 - 0x00000A17
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000009C2()
{



    (save)ds;
    (save)bx;
    for(ax = L000005F4(); 1; *bx = 2) {
        bx = di;
        (save)si;
        for(al = dl; si < di; si = si + 6) {
            if(*si != 2) {
                ah = *(si + 1);
                ax = *cx();
                > ? L000009e0 : ;
                bx = si;
                al = ah;
            }
        }
        (restore)si;
        if(bx == di) {
            break;
        }
        ah = dh;
        ax = *cx();
        > ? L00000a0d : ;
        ax = *(bx + 2);
        (save)dx;
        (save)ds;
        if(*bx != 1) {
            if(ax != 0) {
                ax = *(bx + 2)();
            }
        } else {
            if(!(ax = ax | *(bx + 4))) {
                ax = *(bx + 2)();
            }
        }
        (restore)ds;
        (restore)dx;
    }
    (restore)bx;
    (restore)ds;
    return;
    ah :: al;
}

/*	Procedure: 0x00000A18 - 0x00000A35
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A18()
{



    (save)di;
    (save)si;
    (save)dx;
    (save)cx;
    asm("%d mov si,0x3c8");
    asm("%d mov di,0x3e6");
    cx = 0xa15;
    edx = al & 0xff;
    (restore)cx;
    (restore)dx;
    (restore)si;
    (restore)di;
    return(L000009C2());
    al :: ah;
}

/* DEST BLOCK NOT FOUND: 00000a57 -> 000005bb */
/*	Procedure: 0x00000A36 - 0x00000A59
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00000A36()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;



    asm("%d mov si,0x3e6");
    asm("%d mov di,0x3ec");
    cx = 0xa33;
    dh = dl;
    dl = al;
    return(L000009C2());
    L00000A18();
    asm("retf");
    ax = L00000A36();
    asm("retf");
    goto L000005BB;
}

/*	Procedure: 0x00000A5A - 0x00000A70
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000A5A()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;



    cx = ax;
    si = dx;
    ax = L000013DB();
    if(ax == 0) {
        ax = cx;
        dx = si;
        ax = L000005BB();
    }
}

stack space not deallocated on return
/*	Procedure: 0x00000A71 - 0x00000B04
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000A71()
{



    bl = bl + al;
    (save)bp;
    bp = sp;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)es;
    sp = sp - 8;
    bx = bp - 0x14;
    ax = *L00000246;
    dx = 0;
    ax = L00000B05() + 1;
    *(bp - 0x10) = ax;
    cx = *(bp - 0x14) - *L00000246;
    ax = ax << 1;
    cx = cx + 1;
    *(bp - 0x12) = ax;
    ax = ax + 2 + cx;
    ax = L00000D39();
    *(bp - 0xe) = ax;
    if(ax != 0) {
        di = *(bp - 0xe);
        ax = ax + cx;
        si = *L00000246;
        *L0000021C = ax;
        (save)di;
        es = ds;
        cx = cx >> 1;
        asm("rep movsw");
        asm("adc cx,cx");
        asm("rep movsb");
        (restore)di;
        bx = *L0000021C;
        dx = bx + 2;
        *bx = *L0000024A;
        bx = bp - 0x14;
        ax = di;
        L00000B05();
        bx = *L0000021C + *(bp - 0x12);
        ax = *(bp - 0x10);
        *bx = 0;
    } else {
        *L0000021C = ax;
    }
    *L0000021A = ax;
    *"" = *(bp - 0x10);
    ax = *L0000021C;
    *L00000446 = ax;
    sp = bp - 0xc;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    (restore)bp;
    return(*L00000446);
}

/*	Procedure: 0x00000B05 - 0x00000C14
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 12
 */

L00000B05()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffa;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    cx = *L00000448;
    si = ax;
    Vfffffffe = dx;
    Vfffffff8 = bx;
    Vfffffffc = 0;
    for(ah = 1; 1; si = si + 1) {
        dl = *si;
        dh = 0;
        if(0 != 0x20 && 0 != 9) {
            if(dl == 0) {
                break;
            }
            al = 0;
            if(dx == 0x22) {
                eax = 0 & 0xff;
                si = si + 1;
            }
            Vfffffffa = si;
            bx = si;
            while(1) {
                dl = *si;
                dh = 0;
                if(0 == 0x22) {
                    if(cx == 0) {
                        goto L00000b52;
                    }
                    if(al == 1) {
                        goto L00000bd0;
                    }
                }
                dl = *si;
                dh = 0;
                if((0 == 0x20 || 0 == 9) && al == 0 || *si == 0) {
                    goto L00000bd0;
                }
                dl = *si;
                dh = 0;
                if(0 == 0x5c) {
                    if(cx == 0) {
                        goto L00000b8c;
                    }
                    if(al != 1) {
                        dl = *(si + 1);
                        if(dx != 0x22) {
                            goto L00000bbd;
                        } else {
                            goto L00000bbc;
                        }
                    }
                    dl = *(si + 1);
                    if(dx == 0x22) {
                        goto L00000bbc;
                    }
                    if(dx == 0x5c) {
L00000bbc:
                        si = si + 1;
                        goto L00000bbd;
L00000b8c:
                        edx = *(si + 1) & 0xff;
                        if(dx == 0x22) {
                            dl = *(si - 1);
                            si = si + 1;
                            if(dx == 0x5c) {
                                continue;
                            }
                        }
                    }
                }
L00000bbd:
                if(Vfffffffe == 0) {
                    si = si + 1;
                    continue;
                }
                dl = *si;
                si = si + 1;
                *bx = dl;
                bx = bx + 1;
                continue;
L00000b52:
                si = si + 1;
                if(al != 0) {
                    == ? L00000b68 : ;
                    al = 0;
                    continue;
                }
                al = 2;
            }
            break;
L00000bd0:
            if(Vfffffffe == 0) {
                Vfffffffc = Vfffffffc + 1;
                if(*si == 0) {
                    break;
                }
            } else {
                dx = Vfffffffa;
                *((Vfffffffc << 1) + Vfffffffe) = dx;
                Vfffffffc = Vfffffffc + 1;
                if(*si == 0) {
                    goto L00000beb;
                }
                si = si + 1;
                *bx = 0;
                continue;
            }
        }
    }
    goto L00000c02;
L00000beb:
    *bx = 0;
L00000c02:
    *Vfffffff8 = si;
    *L00000448 = cx;
    return(Vfffffffc);
}

/*	Procedure: 0x00000C15 - 0x00000CD4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 24
 */

L00000C15()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    if(*L00000220 == 0) {
        bx = 0x2c;
        es = *L00000226;
        cx = 0;
        dx = 0;
        ax = *%es:bx];
        di = 0;
        si = ax;
        es = ax;
        for(al = 0; 1; di = bx) {
            if(al == *%es:di]) {
                goto L00000c51;
            }
            while(1) {
                bx = di + 1;
                if(al == *%es:di]) {
                    break;
                }
                di = bx;
            }
            dx = dx + 1;
        }
    }
    goto L00000cce;
L00000c51:
    if(!(ax = di - cx)) {
        ax = 1;
    }
    ax = L00000D39();
    bx = ax;
    di = ax;
    if(ax != 0) {
        ax = (dx << 1) + 2 + dx;
        ax = L00000D39();
        if(ax != 0) {
            *L00000220 = ax;
            bx = cx;
            dx = 0;
            es = si;
            cx = 0;
            for(ah = 0; ah != *%es:bx]; dx = dx + 1) {
                *( *L00000220 + cx) = di;
                do {
                    al = *%es:bx];
                    bx = bx + 1;
                    *di = al;
                    di = di + 1;
                } while(al != 0);
                cx = cx + 2;
            }
            ax = *L00000220;
            bx = ax + cx;
            ax = ax + cx + 2;
            *bx = 0;
            *L00000222 = ax;
            di = ax;
            cx = dx;
            (save)di;
            es = ds;
            eax = 0 & 0xff;
            cx = cx >> 1;
            asm("rep stosw");
            asm("adc cx,cx");
            asm("rep stosb");
            (restore)di;
        } else {
            ax = bx;
            ax = L000013F7();
        }
    }
L00000cce:
}

/*	Procedure: 0x00000CD5 - 0x00000CDF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000CD5()
{



    if(dx == 0) {
        ax = 0;
        return;
    }
    dx :: 0;
    == ? L00000cdb : ;
}

/*	Procedure: 0x00000CE0 - 0x00000D38
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00000CE0()
{
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    bx = ax;
    dl = al;
    ah = 0;
    ax = L0000079D();
    if(bx < 0x100) {
        al = *L00000228;
        ah = 0;
        if(0 >= 3) {
            bh = 0;
            if(0 == 0x50) {
                dl = 0xe;
            } else {
                if(bx >= 0x22) {
                    dl = 0x13;
                } else {
                    if(bx >= 0x20) {
                        dl = 5;
                    }
                }
            }
        }
        al = dl;
        if(0 > 0x13) {
            dl = 0x13;
        }
        bl = dl;
        al = *L0000036C;
        asm("cbw");
    } else {
        al = bh;
        ah = 0;
    }
    L00000780();
    return(65535);
}

/*	Procedure: 0x00000D39 - 0x00000DE5
 *	Argument size: -2
 *	Local size: 2
 *	Save regs size: 24
 */

L00000D39()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;
	/* unknown */ void  Vfffffffe;



    cx = ax;
    if(ax == 0 || ax > 65514) {
        ax = 0;
    } else {
        Vfffffffe = 0;
        di = ax + 1;
        dx = 0;
        for(di = di & -2; 1; Vfffffffe = 0) {
            ax = di;
            if(di < 6) {
                ax = 6;
            }
            if(ax <= *L00000384) {
                *L00000384 = 0;
            } else {
                si = *L00000382;
                if(si != 0) {
                    goto L00000dad;
                }
                *L00000384 = si;
            }
            si = *L00000380;
L00000dad:
            while(si != 0) {
                dx = ds;
                bx = si;
                ax = cx;
                *L00000382 = si;
                ax = L0000144E();
                dx = ax;
                if(ax != 0) {
                    goto L00000dd5;
                }
                ax = *(si + 0xa);
                if(ax > *L00000384) {
                    *L00000384 = ax;
                }
                si = *(si + 4);
            }
            if(Vfffffffe == 0) {
                ax = cx;
                if(L00001689() != 0) {
                    Vfffffffe = 1;
                    continue;
                }
            }
            ax = cx;
            if(L0000179B() == 0) {
                break;
            }
        }
L00000dd5:
        *L0000044C = 0;
        ax = dx;
    }
}

/*	Procedure: 0x00000DE6 - 0x00000E0E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L00000DE6()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    si = dx;
    if(bx != 0) {
        dx = ds;
        cx = bx;
        di = ax;
        es = dx;
        (save)di;
        al = *esi;
        esi = esi + 1;
        *di = al;
        di = di + 1;
        al :: 0;
        asm("loopne 0xdf9");
        ax = 0;
        cx = cx >> 1;
        asm("rep stosw");
        asm("adc cx,cx");
        asm("rep stosb");
        (restore)ax;
    }
}

stack space not deallocated on return
/*	Procedure: 0x00000E0F - 0x00000FC0
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00000E0F()
{



    ax = 0x116;
    L000017A3();
    (restore)ax;
    (save)cx;
    (save)si;
    (save)di;
    (save)es;
    (save)bp;
    bp = sp;
    sp = sp - 0xf6;
    (save)ax;
    (save)dx;
    (save)bx;
    bp = bp - 0x80;
    bx = 0x4b;
    dx = ax;
    ax = bp + 0xa;
    L00000DE6();
    dx = 0x5c;
    ax = bp + 0xa;
    dx = 0x2e;
    if(L000017D7() == 0) {
        ax = bp + 0xa;
    }
    if(L00001285() != 0) {
        (save)0;
        (save)0x200 & 65535;
        (save)bp + 0xa;
    } else {
        dx = 0x198;
        ax = bp + 0xa;
        L0000074A();
        (save)0;
        ax = L000017FB(bp + 0xa, 0x200 & 65535);
        si = ax;
        if(ax != 65535) {
            goto L00000eaf;
        }
        dx = 0x2e;
        ax = bp + 0xa;
        di = L000017D7();
        (save)0;
        es = ds;
        (save)0x200 & 65535;
        ax = bp + 0xa;
        (save)ax;
        *di = *L0000019D;
        di = di + 4;
        *di = *L000001A1;
        di = di + 4;
        *di = *L000001A5;
        di = di + 1;
        si = 0x1a6;
    }
    ax = L000017FB();
    di = ax;
    sp = sp + 6;
    si = ax;
    ax = 1;
    L00000780();
    if(di != -1) {
L00000eaf:
        bx = 0x1c;
        dx = bp + 0x5a;
        ax = si;
        if(L000019D8() != 65535) {
            goto L00000ed3;
        }
        ax = si;
        L00001AA6();
        ax = 3;
        L00000780();
        ax = 0xb;
        L0000079D();
    }
    goto L00000fb4;
L00000ed3:
    ax = *(bp + 0x5a) == 0x5a4d || *(bp + 0x5a) == 0x4d5a ? 1 : 0;
    *(bp + 0x7e) = ax;
    if(ax != 0) {
        di = *(bp + 0x5c);
        dx = *(bp + 0x5e);
        di = di + 0xf;
        dx = dx << 5;
        dx = dx - 0x20;
        di = (di >> 4) + dx + *(bp + 0x64) - *(bp + 0x62);
    } else {
        dx = 2;
        ax = si;
        bx = 0;
        cx = 0;
        bx = 0x10;
        ax = L00001ABD() + 0x8f;
        asm("adc dx,+0x0");
        cx = 0;
        di = L00001AFA();
    }
    ax = si;
    bx = *(bp - 0x7a);
    L00001AA6();
    *bx = bp + 0xa;
    cx = bp + 0x78;
    (save)1;
    ax = bp + 0x7a;
    dx = *(bp - 0x7c);
    (save)ax;
    ax = bp + 0x76;
    bx = bp + 0x7c;
    (save)ax;
    ax = *(bp - 0x7a);
    ax = L00001BEC();
    si = ax;
    if(ax != 65535) {
        ax = *(bp - 0x78);
        cl = 4;
        ax = L000006F2() + 0xf >> cl;
        bx = bp - 0x76;
        ax = ax + *L0000038E + 0x10;
        cx = 0;
        dx = *(bp - 0x7a);
        di = di + ax;
        ax = bp + 0xa;
        L00001D16();
        dx = *(bp + 0x76);
        bx = si;
        ax = di;
        if(L00001087() != 0) {
            L000011F1();
        }
        (save) *(bp + 0x6e);
        (save) *(bp + 0x70);
        (save) *(bp + 0x6a);
        (save) *(bp + 0x68);
        L00001E9E(cs, bp + 0xa, bp - 0x76, *(bp + 0x7e));
        ax = *(bp + 0x7c);
        L000013F7();
    }
L00000fb4:
    ax = 65535;
    sp = bp + 0x80;
    (restore)bp;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00000FC1 - 0x00000FFF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00000FC1()
{



    ax = 0x22;
    L000017A3();
    bp = sp;
    sp = sp - 0x16;
    cx = bp - 8;
    bx = bp - 0x16;
    dx = bp - 0x16;
    ax = 0x21;
    *(bp - 0x15) = 0x52;
    L00001FA2(bp, es, dx, cx, bx);
    bx = *(bp - 0x14);
    bx = bx - 1 - 1;
    ax = *(bp - 8);
    bx = bx;
    asm("adc ax,dx");
    es = ax;
    ax = *%es:bx] + 1;
    (restore)bp;
    (restore)es;
    (restore)dx;
    (restore)cx;
    (restore)bx;
}

/*	Procedure: 0x00001000 - 0x00001021
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00001000()
{



    ax = 8;
    L000017A3();
    (restore)ax;
    (save)bx;
    (save)dx;
    (save)es;
    dx = ax;
    es = ax;
    ebx = -1 & 65535;
    ah = 0x4a;
    asm("int 0x21");
    es = dx;
    ah = 0x4a;
    asm("int 0x21");
    asm("sbb bx,bx");
    (restore)es;
    (restore)dx;
    (restore)bx;
}

/*	Procedure: 0x00001022 - 0x00001045
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00001022()
{



    ax = 6;
    L000017A3();
    (restore)ax;
    (save)bx;
    (save)dx;
    bx = ax;
    ah = 0x48;
    asm("int 0x21");
    asm("sbb bx,bx");
    dx = ax;
    if(bx < 0) {
        dx = dx ^ ax;
    } else {
        L00001000();
    }
    ax = dx;
    (restore)dx;
    (restore)bx;
}

/*	Procedure: 0x00001046 - 0x0000107B
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 0
 */

L00001046()
{



    ax = 8;
    L000017A3();
    (restore)ax;
    (save)bx;
    (save)cx;
    (save)es;
    cx = ax - 1;
    es = cx;
    cx = *%es:bx+0x3];
    bx = (dx & 65535) + 1;
    if(cx < bx) {
        ax = 0;
    } else {
        es = ax;
        bx = cx - bx;
        ah = 0x4a;
        asm("int 0x21");
        asm("sbb bx,bx");
        ax = dx;
        ax = L00001022();
    }
    (restore)es;
    (restore)cx;
    (restore)bx;
}

/*	Procedure: 0x0000107C - 0x00001086
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000107C()
{



    ax = 2;
    L000017A3();
    return(*L00000216());
}

/* DEST BLOCK NOT FOUND: 000011ee -> 00000fbb */
/*	Procedure: 0x00001087 - 0x000011F0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001087()
{



    (save)ax;
    ax = 0x14;
    L000017A3();
    (restore)ax;
    (save)cx;
    (save)si;
    (save)di;
    (save)es;
    (save)bp;
    bp = sp;
    (save)ax;
    (save)dx;
    (save)bx;
    si = 0;
    di = 0;
    cx = 0;
    goto L000010aa;
L000010a1:
    es = ax;
    bx = 0;
    *%es:bx] = cx;
    cx = ax;
L000010aa:
    ax = 1;
    ax = L00001022();
    if(ax != 0) {
        goto L000010a1;
    }
    al = *L00000228;
    if(0 == 2) {
        if(cx == 0) {
            goto L000011bd;
        }
        dx = 0x281;
        eax = cx & 65535;
        ax = L00001046();
        di = ax;
        if(ax == 0) {
            goto L000011bd;
        }
    }
    bx = cx;
    goto L000010e9;
L000010d4:
    dx = *(bp - 6);
    ax = bx;
    ax = L00001046();
    si = ax;
    if(ax == 0) {
        es = bx;
        bx = ax;
        bx = *%es:bx];
L000010e9:
        if(bx != 0) {
            goto L000010d4;
        }
    }
    if(si != 0) {
        ax = *L00000226;
        goto L00001111;
L000010f6:
        ax = ax + *%es:bx+0x3];
        bl = *%es:bx];
        if(0 == 0x4d) {
            goto L00001110;
        }
        if(ax - dx < *(bp - 2)) {
            goto L000011bd;
        }
    } else {
        goto L000011bd;
L00001110:
        ax = ax + 1;
L00001111:
        if(ax < si) {
            dx = ax - 1;
            bx = 0;
            es = dx;
            dx = *%es:bx+0x1];
            if(dx == *L00000226) {
                goto L000010f6;
            }
        }
    }
    ax = *(bp - 6);
    es = *L00000226;
    dx = 0;
    *%es:bx+0x2c] = si;
    (save)ax << 4;
    ebx = si & 65535;
    cx = 0;
    ax = *(bp - 4);
    L00002045();
    L0000107C();
L00001147:
    ax = L00000FC1();
L0000114a:
    cx = ax - 1;
    bx = 0;
    es = cx;
    dx = *%es:bx+0x1];
    if(dx == *L00000226 && ax != dx && ax != si) {
        goto L000011b3;
    }
    dx = ax - 1;
    bx = 0;
    es = dx;
    cl = *%es:bx];
    if(0 != 0x4d) {
        ax = *L00000226;
        L00001000();
        ax = *L00000226;
        dx = ax - 1;
        es = dx;
        si = 0;
        es = ax;
        *%es:si+0x2] = *%es:bx+0x3] + ax;
        es = dx;
        if(*%es:bx+0x3] < *(bp - 2)) {
            ax = 0x1a2;
            L00000337();
            al = 0xff;
            ah = 0x4c;
            asm("int 0x21");
        }
        ax = 1;
    } else {
        ax = ax + *%es:bx+0x3] + 1;
        goto L0000114a;
L000011b3:
        es = ax;
        ah = 0x49;
        asm("int 0x21");
        asm("sbb dx,dx");
        goto L00001147;
L000011bd:
        if(di != 0) {
            es = di;
            ah = 0x49;
            asm("int 0x21");
            asm("sbb dx,dx");
        }
        if(si != 0) {
            es = si;
            ah = 0x49;
            asm("int 0x21");
            asm("sbb dx,dx");
            goto L000011e6;
L000011d7:
            es = cx;
            ebx = *%es:bx] & 65535;
            ah = 0x49;
            asm("int 0x21");
            asm("sbb dx,dx");
            cx = bx;
        }
L000011e6:
        if(cx != 0) {
            goto L000011d7;
        }
        ax = 0;
    }
    goto L00000fbb;
}

/* DEST BLOCK NOT FOUND: 00001275 -> 00000ffc */
/*	Procedure: 0x000011F1 - 0x00001284
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000011F1()
{



    ax = 0x12;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)es;
    (save)bp;
    bp = sp;
    (save)L000017A3();
    dx = *L00000226;
    bx = 0;
    es = dx;
    cx = *%es:bx+0x36];
    ax = *%es:bx+0x34];
    if(cx != dx || ax != 0x18) {
        si = ax;
        *(bp - 2) = cx;
L0000121f:
        es = *(bp - 2);
        bx = bx + 1;
        es = *L00000226;
        si = si + 1;
        *%es:bx+0x17] = *%es:si];
        if(bx < 0x14) {
            goto L0000121f;
        }
        dx = 0x14;
        si = ax + 0x14;
        goto L00001252;
L0000123f:
        es = cx;
        al = *%es:si];
        if(0 != 0xff) {
            eax = dx & 65535;
            L00001AA6();
        }
        si = si + 1;
        dx = dx + 1;
L00001252:
        ax = *L00000226;
        bx = 0;
        es = ax;
        if(dx < *%es:bx+0x32]) {
            goto L0000123f;
        }
        *%es:bx+0x32] = 0x14;
        *%es:bx+0x34] = 0x18;
        *%es:bx+0x36] = ax;
    }
    (restore)bp;
    (restore)es;
    (restore)di;
    (restore)si;
    goto L00000ffc;
    ax = 2;
    *L00000396 = 0xe0f;
    return(L000017A3());
}

/*	Procedure: 0x00001285 - 0x0000129D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00001285()
{
	/* unknown */ void  bx;
	/* unknown */ void  si;



    bx = ax;
    al = dl;
    do {
        if(al == *bx) {
            goto L00001299;
        }
        si = bx;
        bx = bx + 1;
    } while(*si != 0);
    bx = 0;
L00001299:
    return(bx);
}

/*	Procedure: 0x0000129E - 0x000012BC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L0000129E()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    cx = bx;
    si = dx;
    (save)ax;
    es = ds;
    cx = cx >> 1;
    asm("rep movsw");
    asm("adc cx,cx");
    asm("rep movsb");
    (restore)di;
    return(di);
}

/*	Procedure: 0x000012BD - 0x000012BD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000012BD()
{



    *(bp + di - 0x77) = *(bp + di - 0x77) + dl;
}

/*	Procedure: 0x000012BE - 0x000012C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000012BE()
{



    (save)bx;
    bx = ax;
}

stack space not deallocated on return
/*	Procedure: 0x000012C1 - 0x0000131A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000012C1()
{



    L0000211E();
    if(*(bx + 0xa) == 0) {
        *(bx + 0xa) = !( *(bx + 7) & 2) ? 0x86 : !( *(bx + 7) & 4) ? 1 : 0x200;
    }
    ax = *(bx + 0xa);
    ax = L00000D39();
    *(bx + 4) = ax;
    if(*(bx + 4) == 0) {
        *(bx + 0xa) = 1;
        *(bx + 7) = *(bx + 7) & 0xf8;
        *(bx + 4) = bx + 0xc;
        *(bx + 7) = *(bx + 7) | 4;
    } else {
        *(bx + 6) = *(bx + 6) | 8;
    }
    ax = *(bx + 4);
    *(bx + 2) = 0;
    *bx = ax;
    (restore)bx;
}

/*	Procedure: 0x0000131B - 0x000013DA
 *	Argument size: -2
 *	Local size: 2
 *	Save regs size: 20
 */

L0000131B()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    si = ax;
    Vfffffffe = 0;
    if(!( *(si + 7) & 0x10)) {
        *(si + 7) = *(si + 7) & 0xef;
        if(!( *(si + 6) & 2) && *(si + 4) != 0) {
            di = *(si + 4);
            for(cx = *(si + 2); cx != 0 && Vfffffffe == 0; cx = cx - dx) {
                bx = cx;
                dx = di;
                ax = *(si + 8);
                ax = L00002141();
                dx = ax;
                if(ax != 65535) {
                    if(ax != 0) {
                        goto L0000137c;
                    }
                    ax = 0xc;
                    Vfffffffe = 65535;
                    L00000780();
                } else {
                    Vfffffffe = ax;
                }
                *(si + 6) = *(si + 6) | 0x20;
L0000137c:
                di = di + dx;
            }
        }
    } else {
        if(*(si + 4) != 0) {
            *(si + 6) = *(si + 6) & 0xef;
            if(!( *(si + 7) & 0x20)) {
                ax = *(si + 2);
                asm("cwd");
                if(!(bx = dx | ax)) {
                    cx = dx;
                    bx = ax;
                    dx = 1;
                    cx = ~cx;
                    ax = *(si + 8);
                    bx = ~bx;
                    asm("sbb cx,+0x0");
                    ax = L00001ABD();
                }
                if(dx == -1 && ax == 65535) {
                    Vfffffffe = 65535;
                    *(si + 6) = *(si + 6) | 0x20;
                }
            }
        }
    }
    *(si + 2) = 0;
    *si = *(si + 4);
    return(Vfffffffe);
}

stack space not deallocated on return
/*	Procedure: 0x000013DB - 0x000013F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000013DB()
{



    if(*L00000388 != 0) {
        (save)dx;
        (save)ax;
        asm("int3");
        goto L000013ed;
        (save)di;
        (save)si;
        cx = cx - 1;
        sp = sp + 1;
        bp = bp + 1;
        di = di - 1;
L000013ed:
        sp = sp + 4;
        return(1);
    }
    return(0);
}

/*	Procedure: 0x000013F7 - 0x0000144D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000013F7()
{
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;



    if(ax != 0) {
        si = *L0000044A;
        if(si == 0 || si > ax || ax >= *(si + 4)) {
            for(si = *L00000380; *(si + 4) != 0; si = *(si + 4)) {
                if(si <= ax && ax < *(si + 4)) {
                    break;
                }
            }
        }
        dx = ds;
        bx = si;
        ax = L000014F2();
        *L0000044A = si;
        if(si < *L00000382) {
            ax = *(si + 0xa);
            if(ax > *L00000384) {
                *L00000384 = ax;
            }
        }
        *L0000044C = 0;
    }
    return;
    *(bp + 0x57) = *(bp + 0x57) + dl;
}

/* DEST BLOCK NOT FOUND: 000014ef -> 000015f6 */
/*	Procedure: 0x0000144E - 0x000014F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L0000144E()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  ds;



    ds = dx;
    if(ax != 0 && !(ax = ax + 3)) {
        al = al & 0xfe;
        dx = 6;
        ax = ax - 6;
        asm("cmc");
        asm("sbb cx,cx");
        ax = (ax & cx) + dx;
        if(ax <= *(bx + 0xa)) {
            si = *(bx + 6);
            di = *(bx + 8);
            if(ax <= di) {
                si = *(bx + 0x14);
                di = 0;
            }
L0000147f:
            dx = *si;
            if(ax <= dx) {
                goto L0000149f;
            }
            di = di - dx;
            asm("cmc");
            asm("sbb cx,cx");
            di = (di & cx) + dx;
            dx = bx + 0x10;
            si = *(si + 4);
            if(si != dx) {
                goto L0000147f;
            }
            *(bx + 0xa) = di;
        }
    }
    ax = 0;
    goto L000014ea;
L0000149f:
    dx = dx - ax;
    *(bx + 8) = di;
    *(bx + 0xc) = *(bx + 0xc) + 1;
    cx = *(si + 4);
    if(dx >= 6) {
        di = si + ax;
        *(bx + 6) = di;
        *di = dx;
        *si = ax;
        bx = *(si + 2);
        *(di + 2) = bx;
        *(di + 4) = cx;
        *( *(di + 2) + 4) = di;
        *(cx + 2) = di;
    } else {
        *(bx + 0xe) = *(bx + 0xe) - 1;
        ax = si;
        di = cx;
        si = *(si + 2);
        *(si + 4) = di;
        *(di + 2) = si;
        *(bx + 6) = si;
        si = ax;
    }
    *si = *si | 1;
    ax = si + 2;
L000014ea:
    return;
    goto L000015f6;
}

/* DEST BLOCK NOT FOUND: 000014fa -> 000014ef */
/* DEST BLOCK NOT FOUND: 00001505 -> 000014ef */
stack space not deallocated on return
/*	Procedure: 0x000014F2 - 0x000015FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L000014F2()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  ds;



    ds = dx;
    if(ax == 0 || *(ax - 2) & 1) {
        goto L000014ef;
    }
    al = al & 0xfe;
    di = si + ax;
    if(!( *di & 1)) {
        if(di == *(bx + 6)) {
            *(bx + 6) = si;
        }
        *si = ax + *di;
        (save)bx;
        bx = *(di + 2);
        di = *(di + 4);
        *(bx + 4) = di;
        *(di + 2) = bx;
        (restore)bx;
        *(bx + 0xe) = *(bx + 0xe) - 1;
    } else {
        *si = ax;
        di = *(bx + 6);
        if(si >= di) {
            goto L00001549;
        }
        if(si <= *(di + 2)) {
            di = *(bx + 0x14);
            if(si >= di) {
                goto L00001558;
L00001549:
                di = *(di + 4);
                if(si >= di) {
                    di = bx + 0x10;
                    if(si <= *(bx + 0x12)) {
L00001558:
                        ax = *(bx + 0xc);
                        cx = ( *(bx + 0xe) + 1) / ( *(bx + 0xe) + 1);
                        edx = cx % cx & 65535;
                        cx = cx - 1;
                        if(ax >= cx) {
                            goto L0000158d;
                        }
                        dx = *(bx + 0xc) - cx;
                        ax = ax + ax;
                        if(dx <= cx) {
                            ax = 0;
                        }
                        di = si + *si;
L00001579:
                        dx = *di;
                        if(!(dl & 1)) {
                            if(dx != -1) {
                                di = di + (dl & 0xfe);
                                if(ax = ax - 1) {
                                    goto L00001579;
                                }
                            }
L0000158d:
                            di = *(bx + 6);
                            if(si < di) {
                                di = *(bx + 0x14);
                            }
L00001597:
                            if(si >= di) {
                                di = *(di + 4);
                                if(si >= di) {
                                    di = *(di + 4);
                                    if(si >= di) {
                                        di = *(di + 4);
                                        goto L00001597;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    dx = *(di + 2);
    cx = *si;
    asm("xchg di,dx");
    ax = di + *di;
    if(ax == si) {
        cx = cx + *di;
        *di = cx;
        if(si == *(bx + 6)) {
            *(bx + 6) = di;
        }
        si = di;
    } else {
        *(bx + 0xe) = *(bx + 0xe) + 1;
        *(si + 4) = dx;
        *(si + 2) = di;
        *(di + 4) = si;
        *(dx + 2) = si;
    }
    *(bx + 0xc) = *(bx + 0xc) - 1;
    if(si < *(bx + 6) && cx > *(bx + 8)) {
        *(bx + 8) = cx;
    }
    if(cx > *(bx + 0xa)) {
        *(bx + 0xa) = cx;
    }
}

stack space not deallocated on return
/*	Procedure: 0x000015FB - 0x00001664
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000015FB()
{
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;



    si = ax;
    bx = *L00000380;
    for(di = 0; bx != 0 && si >= bx; bx = *(bx + 4)) {
        di = bx;
    }
    *(si + 2) = di;
    *(si + 4) = bx;
    if(di != 0) {
        *(di + 4) = si;
    } else {
        *L00000380 = si;
    }
    if(bx != 0) {
        *(bx + 2) = si;
    }
    di = si + 0x10;
    bx = *si;
    si = si + 0x16;
    *(si - 6) = 0;
    *(si - 0xe) = 0;
    *(si - 0xa) = 0;
    *(si - 8) = 0;
    *(si - 4) = di;
    *(si - 2) = di;
    bx = bx - 0x16;
    *(si - 0x10) = di;
    *si = bx;
    bx = *si + si;
    ax = si;
    *bx = 65535;
}

/*	Procedure: 0x00001665 - 0x00001688
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00001665()
{
	/* unknown */ void  bx;



    if(*L00000380 != 0) {
        bx = *( *L00000380 + 0x12);
        if(*bx + bx + 2 == *L00000224) {
            return(*bx);
        }
    }
    return(0);
}

/* DEST BLOCK NOT FOUND: 0000175c -> 00001661 */
/*	Procedure: 0x00001689 - 0x0000175E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001689()
{



    (save)bx;
    (save)si;
    (save)di;
    (save)bp;
    bp = sp;
    (save)ax;
    if(*L00000398 == 0) {
L00001697:
        ax = 0;
    } else {
        if(*L00000224 == -2) {
            goto L00001697;
        }
        ax = bp - 2;
        ax = L0000175F();
        if(ax != 0) {
            bx = *(bp - 2) + *L00000224;
            if(bx < *L00000224) {
                bx = 65534;
            }
            ax = bx;
            ax = L000021A7();
            if(ax == 65535) {
                goto L00001697;
            }
            si = ax;
            if(ax > 65528 || bx <= ax) {
                goto L00001697;
            }
            bx = bx - ax;
            *(bp - 2) = bx;
            ax = bx - 2;
            if(ax > bx) {
                goto L00001697;
            }
            bx = *L00000380;
            *(bp - 2) = ax;
        } else {
            goto L00001759;
L000016ea:
            if(*(bx + 4) == 0 || bx <= si && si < *(bx + 4)) {
                goto L00001700;
            }
            bx = *(bx + 4);
        }
        if(bx != 0) {
            goto L000016ea;
        }
L00001700:
        if(bx != 0) {
            ax = *bx;
            di = si - 2;
            ax = ax + bx;
            if(di != ax) {
                goto L00001723;
            }
            *(bp - 2) = *(bp - 2) + 2;
            si = ax;
            *bx = *bx + *(bp - 2);
            *(di + *(bp - 2)) = 65535;
        } else {
L00001723:
            if(*(bp - 2) < 0x1c) {
                goto L00001697;
            }
            *si = *(bp - 2);
            ax = si;
            bx = si;
            ax = L000015FB();
            di = ax;
            si = ax;
            *(bp - 2) = *di;
        }
        *si = *(bp - 2) | 1;
        *(bx + 0xa) = 65535;
        ax = si + 2;
        *(bx + 0xc) = *(bx + 0xc) + 1;
        L000013F7();
        ax = 1;
    }
L00001759:
    (restore)bp;
    goto L00001661;
}

/*	Procedure: 0x0000175F - 0x0000179A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L0000175F()
{
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    bx = ax;
    if(( *bx + 3 & 0xfe) != 0) {
        dx = dx - L00001665();
        *bx = dx;
        dx = *bx + 0x1e;
        if(dx >= *bx) {
            if(dx < *L00000386) {
                dl = *L00000386 & 0xfe;
            }
            *bx = dx;
            if(dx != 0) {
                return(1);
            }
        }
    }
    return(0);
}

/*	Procedure: 0x0000179B - 0x000017A2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000179B()
{



    return(0);
    *L0000038A = ss;
}

/*	Procedure: 0x000017A3 - 0x000017C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000017A3()
{



    if(ax < sp) {
        ax = ~(ax - sp);
        if(ax > *L0000022C) {
            goto L000017b9;
        }
        ax = ss;
        if(ax != *L0000038A) {
L000017b9:
            return;
        }
    }
    dx = cs;
    ax = "Stack Overflow!\r\n";
    bx = 1;
    L00000A5A();
}

/*	Procedure: 0x000017D7 - 0x000017FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000017D7()
{
	/* unknown */ void  cx;
	/* unknown */ void  di;
	/* unknown */ void  es;



    di = ax;
    es = ds;
    cx = 65535;
    al = 0;
    asm("repne scasb");
    cx = !cx;
    al = dl;
    asm("std");
    asm("repne scasb");
    asm("cld");
    if(!(di = di - 1)) {
        cx = di + 1;
    }
    return(cx);
}

/*	Procedure: 0x000017FB - 0x00001819
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 4
 */

L000017FB(A6, A8, Aa)
/* unknown */ void  A6;
/* unknown */ void  A8;
/* unknown */ void  Aa;
{
	/* unknown */ void  bx;



    bx = & Aa;
    (save) *bx;
    (save)0;
    bx = bx + 2;
    return(L0000181A(A6, A8));
}

/*	Procedure: 0x0000181A - 0x000019D7
 *	Argument size: 6
 *	Local size: 4
 *	Save regs size: 20
 */

L0000181A(Ae, A10, A11, A12, A14)
/* unknown */ void  Ae;
/* unknown */ void  A10;
/* unknown */ void  A11;
/* unknown */ void  A12;
/* unknown */ void  A14;
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    for(si = Ae; 1; si = si + 1) {
        al = *si;
        ah = 0;
        if(0 != 0x20) {
            break;
        }
    }
    ax = A10;
    eax = 0 & 0xff;
    Vfffffffc = ax;
    dx = si;
    al = Vfffffffc | A12;
    di = 65535;
    ah = 0x3d;
    asm("int 0x21");
    asm("sbb dx,dx");
    cx = dx;
    dx = ax;
    if(cx <= 0) {
        != ? 0x185b : ;
    }
    di = ax;
    if(!(A10 & 3)) {
        if(di == -1) {
            goto L000018bc;
        }
        ax = di;
        ax = L000021FD();
        if(ax != 0) {
            goto L000018bc;
        }
        if(!(A11 & 4)) {
            if(A10 & 0x20) {
                goto L0000188f;
            }
            bx = di;
            ah = 0x3e;
            asm("int 0x21");
            asm("sbb dx,dx");
            ax = 7;
            L00000780();
            ax = 65535;
        } else {
L0000188f:
            if(A10 & 0x40) {
                goto L000018bc;
            }
            dx = & Vfffffffe;
            bx = di;
            cx = 0;
            ah = 0x40;
            asm("int 0x21");
            asm("sbb dx,dx");
            cx = ax;
            ax = dx;
            dx = cx;
            if(ax >= 0) {
                goto L000018bc;
            }
            bx = di;
            ah = 0x3e;
            asm("int 0x21");
            asm("sbb dx,dx");
            ax = cx;
L000018b6:
            L00000CE0();
        }
    } else {
L000018bc:
        if(di == -1) {
            if(!(A10 & 0x20) && dx == 2) {
                goto L000018d2;
            }
            ax = dx;
            goto L000018b6;
        }
        goto L00001928;
L000018d2:
        ax = *( & A14 + dx - 2);
        if(ax == 0) {
            ax = 0x180;
        }
        ax = ax & !( *L0000039A);
        cx = 0;
        if(!(al & 0x80)) {
            ecx = 1 & 65535;
        }
        dx = si;
        ch = 0;
        ah = 0x3c;
        asm("int 0x21");
        asm("sbb dx,dx");
        if(dx < 0) {
            goto L000018b6;
        }
        di = ax;
        if(A12 != 0) {
            bx = ax;
            ah = 0x3e;
            asm("int 0x21");
            asm("sbb dx,dx");
            if(dx < 0) {
                goto L000018b6;
            }
            dx = si;
            al = Vfffffffc | A12;
            ah = 0x3d;
            asm("int 0x21");
            asm("sbb dx,dx");
            if(dx < 0) {
                goto L000018b6;
            }
            di = ax;
        }
L00001928:
        ax = di;
        dx = L00002219() & 0x3c;
        ax = di;
        if(L000021FD() != 0) {
            dh = dh | 0x20;
        }
        Vfffffffc = Vfffffffc & 0x7f;
        if(Vfffffffc == 2) {
            dl = dl | 3;
        }
        if(Vfffffffc == 0) {
            dl = dl | 1;
        }
        if(Vfffffffc == 1) {
            dl = dl | 2;
        }
        if(!(A10 & 0x10)) {
            dl = dl | 0x80;
        }
        al = dx | 0x40;
        if(!(A11 & 3)) {
            if(A11 & 2) {
                goto L00001981;
            }
        } else {
            if(*L00000367 != 0x200) {
                goto L00001981;
            }
        }
        dx = ax;
L00001981:
        ax = di;
        L00002260();
        ax = di;
    }
L0000198c:
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    si = ax;
    al = L00002219() | 0x40;
    bx = ax;
    dx = ax;
    ax = si;
    L00002260();
    if(!(bh & 0x20)) {
        bx = si;
        ax = 0x4400;
        asm("int 0x21");
        asm("sbb cx,cx");
        ax = dx;
        bx = dx;
        if(cx < 0) {
L000019bb:
            ax = L00000CE0();
            goto L0000198c;
        }
        dl = dl | 0x20;
        bx = si;
        dh = 0;
        ax = 0x4401;
        asm("int 0x21");
        asm("sbb cx,cx");
        ax = dx;
        if(cx < 0) {
            goto L000019bb;
        }
    }
    ax = 0;
    goto L0000198c;
}

/*	Procedure: 0x000019D8 - 0x00001AA5
 *	Argument size: -10
 *	Local size: 10
 *	Save regs size: 12
 */

L000019D8()
{
	/* unknown */ void  cx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffff6;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffa;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffd;
	/* unknown */ void  Vfffffffe;



    (save)ax;
    (save)dx;
    ax = L00002219();
    Vfffffffc = ax;
    if(ax == 0) {
        ax = 4;
L000019f0:
        L00000780();
        ax = 65535;
    } else {
        if(!(al & 1)) {
            ax = 6;
            goto L000019f0;
        }
        if(!(al & 0x40)) {
            cx = bx;
            bx = *(bp - 0xc);
            ah = 0x3f;
            asm("int 0x21");
            asm("sbb dx,dx");
            di = ax;
            if(dx >= 0) {
                goto L00001a9d;
            }
L00001a17:
            ax = L00000CE0();
        } else {
            Vfffffffe = bx;
            di = 0;
            do {
                cx = Vfffffffe;
                dx = *(bp - 0xe);
                bx = *(bp - 0xc);
                ah = 0x3f;
                asm("int 0x21");
                asm("sbb dx,dx");
                Vfffffffa = ax;
                if(dx < 0) {
                    goto L00001a17;
                }
                if(ax == 0) {
                    break;
                }
                bx = *(bp - 0xe);
                si = bx;
                cx = 0;
                si = si + ax;
                dx = 0;
                for(Vfffffff8 = si; bx < Vfffffff8; cx = cx + 1) {
                    al = *bx;
                    ah = 0;
                    if(0 == 0x1a) {
                        goto L00001a55;
                    }
                    if(ax != 0xd) {
                        si = *(bp - 0xe);
                        Vfffffff6 = dx;
                        di = di + 1;
                        si = si + Vfffffff6;
                        dx = dx + 1;
                        *si = al;
                    }
                    bx = bx + 1;
                }
                *(bp - 0xe) = *(bp - 0xe) + dx;
                Vfffffffe = Vfffffffe - dx;
                if(Vfffffffd & 0x20) {
                    break;
                }
            } while(Vfffffffe != 0);
            goto L00001a9d;
L00001a55:
            bx = cx;
            eax = 0 & 0xff;
            cx = 0;
            bx = bx - Vfffffffa;
            asm("sbb cx,ax");
            ax = *(bp - 0xc);
            bx = bx + 1;
            asm("adc cx,dx");
            dx = 1;
            L00001ABD();
L00001a9d:
            ax = di;
        }
    }
}

/* DEST BLOCK NOT FOUND: 00001aba -> 00002270 */
/*	Procedure: 0x00001AA6 - 0x00001ABC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AA6()
{



    if(ax >= 0 && ax <= *L0000039C) {
        goto L00002270;
    }
    ax = 4;
    L00000780();
    return(65535);
    goto L00002270;
}

/*	Procedure: 0x00001ABD - 0x00001AF9
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 8
 */

L00001ABD()
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    si = ax;
    di = & Vfffffffc;
    al = dl;
    dx = bx;
    bx = si;
    ah = 0x42;
    asm("int 0x21");
    *%ss:di] = ax;
    *%ss:di+0x2] = dx;
    asm("rcl dx,1");
    asm("ror dx,1");
    if(dx < 0) {
        L00000CE0();
        ax = 65535;
        dx = 65535;
    } else {
        ax = Vfffffffc;
        dx = Vfffffffe;
    }
    return;
    *(bx + di) = *(bx + di) + cl;
}

/*	Procedure: 0x00001AFA - 0x00001B46
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001AFA()
{



    if(dx < 0) {
        if(cx < 0) {
            return(L00001B47());
        }
        cx = ~cx;
        bx = ~bx;
        asm("sbb cx,+0x0");
        dx = ~dx;
        ax = ~(L00001B47());
        asm("sbb dx,+0x0");
        return;
    }
    dx = ~dx;
    ax = ~ax;
    asm("sbb dx,+0x0");
    if(cx < 0) {
        cx = ~cx;
        bx = ~bx;
        asm("sbb cx,+0x0");
        ax = L00001B47();
        cx = ~cx;
        bx = ~bx;
        asm("sbb cx,+0x0");
        return;
    }
    ax = L00001B47();
    cx = ~cx;
    bx = ~bx;
    asm("sbb cx,+0x0");
    dx = ~dx;
    ax = ~ax;
    asm("sbb dx,+0x0");
}

/*	Procedure: 0x00001B47 - 0x00001BD4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001B47()
{



    if(cx == 0) {
        if(!(bx = bx - 1)) {
            if(bx = bx + 1) {
                goto L00001b81;
            }
            if(bx <= dx) {
                cx = ax;
                ax = dx;
                bx = bx / bx;
                edx = bx % bx & 65535;
                asm("xchg ax,cx");
            }
            bx = bx / bx % bx / bx;
            dx = cx;
            cx = 0;
        }
        return;
    }
    if(cx >= dx) {
        != ? 0x1b7d : ;
        if(bx <= ax) {
            bx = ax - bx;
            cx = 0;
            dx = 0;
            return(1);
        }
        cx = 0;
        bx = 0;
L00001b81:
        asm("xchg ax,bx");
        asm("xchg cx,dx");
        return;
    }
    (save)bp;
    (save)si;
    (save)di;
    si = 0;
    di = 0;
    bp = 0;
L00001b8e:
    do {
        asm("adc cx,cx");
        if(bx = bx + bx) {
            goto L00001ba7;
        }
        bp = bp + 1;
        if(cx < dx) {
            goto L00001b8e;
        }
        > ? L00001b9f : ;
    } while(bx <= ax);
    asm("clc");
L00001ba0:
    asm("adc si,si");
    asm("adc di,di");
    if(!(bp = bp - 1)) {
L00001ba7:
        asm("rcr cx,1");
        asm("rcr bx,1");
        asm("sbb dx,cx");
        asm("cmc");
        if(ax = ax - bx) {
            goto L00001ba0;
        }
        do {
            si = si + si;
            asm("adc di,di");
            if(bp = bp - 1) {
                goto L00001bc5;
            }
            cx = cx >> 1;
            asm("rcr bx,1");
            asm("adc dx,cx");
        } while(ax = ax + bx);
        goto L00001ba0;
L00001bc5:
        ax = ax + bx;
        asm("adc dx,cx");
    }
    bx = ax;
    cx = dx;
    ax = si;
    dx = di;
    (restore)di;
    (restore)si;
    (restore)bp;
}

/*	Procedure: 0x00001BD5 - 0x00001BEB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00001BD5()
{
	/* unknown */ void  bx;
	/* unknown */ void  si;



    bx = ax;
    for(si = dx; 1; si = si + 1) {
        al = *si;
        *bx = al;
        if(*bx == 0) {
            break;
        }
        bx = bx + 1;
    }
    return(bx);
}

/*	Procedure: 0x00001BEC - 0x00001D15
 *	Argument size: 0
 *	Local size: 8
 *	Save regs size: 8
 */

L00001BEC(A8, Aa, Ac)
/* unknown */ void  A8;
/* unknown */ void  Aa;
/* unknown */ void  Ac;
{
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffa;
	/* unknown */ void  Vfffffffc;
	/* unknown */ void  Vfffffffe;



    si = ax;
    Vfffffffc = bx;
    Vfffffff8 = cx;
    if(dx == 0) {
        dx = *L00000220;
    }
    Vfffffffe = 0;
    if(dx != 0) {
        for(bx = dx; *bx != 0; Vfffffffe = Vfffffffe + L000006F2() + 1) {
            ax = *bx;
            bx = bx + 1 + 1;
        }
    }
    Vfffffffe = Vfffffffe + 1;
    if(Ac != 0) {
        ax = *si;
        Vfffffffe = Vfffffffe + L000006F2() + 3;
    }
    Vfffffffe = Vfffffffe + 0xf;
    Vfffffffa = *L00000386;
    ax = Vfffffffe;
    *L00000386 = 0x10;
    ax = L00000D39();
    if(ax == 0) {
        ax = Vfffffffe;
        ax = L00000D39();
        bx = ax;
        if(ax != 0) {
            goto L00001c75;
        }
        ax = 5;
        L00000780();
        ax = 8;
        L0000079D();
        *L00000386 = Vfffffffa;
L00001c6d:
        ax = 65535;
    } else {
        bx = ax;
L00001c75:
        *L00000386 = Vfffffffa;
        *Vfffffffc = bx;
        bl = bx + 0xf & 0xf0;
        di = bx >> 4;
        ax = ds;
        cx = di;
        *A8 = cx + ax;
        *Vfffffff8 = bx;
        if(dx != 0) {
            for(di = dx; *di != 0; bx = L00001BD5() + 1) {
                ax = bx;
                dx = *di;
                di = di + 1 + 1;
            }
        }
        *bx = 0;
        bx = bx + 1;
        if(Ac != 0) {
            ax = bx + 2;
            dx = *si;
            L0000070B();
        }
        dx = 0;
        if(*si != 0) {
            for(si = si + 1 + 1; *si != 0; dx = dx + L000006F2()) {
                if(dx != 0) {
                    dx = dx + 1;
                }
                si = si + 1 + 1;
            }
        }
        if(dx > 0x7e) {
            ax = 2;
            L00000780();
            ax = 0xa;
            bx = Vfffffffc;
            L0000079D();
            ax = *bx;
            L000013F7();
            goto L00001c6d;
        }
        *Aa = 0x90;
        ax = Vfffffffe >> 4;
    }
}

/* DEST BLOCK NOT FOUND: 00001e69 -> 00001ee4 */
/*	Procedure: 0x00001D16 - 0x00001E9D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L00001D16()
{
	/* unknown */ void  si;
	/* unknown */ void  di;



    (save)ax;
    si = dx;
    *(bp - 2) = bx;
    if(cx == 0) {
        bx = bx + 1;
    }
    if(*si != 0) {
        si = si + 1 + 1;
        if(*si == 0) {
            goto L00001d4c;
        }
L00001d32:
        ax = bx;
        dx = *si;
        ax = L00001BD5();
        di = ax;
        si = si + 1 + 1;
        bx = ax;
        if(*si == 0) {
            goto L00001d4c;
        }
        bx = di + 1;
        *di = 0x20;
        goto L00001d32;
    }
L00001d4c:
    if(cx != 0) {
        *bx = 0;
    } else {
        *bx = 0xd;
        dl = bl - *(bp - 2);
        bx = *(bp - 2);
    }
    return;
    ds = cs;
    asm("int 0x21");
    if(!( *bx = dl - 1)) {
        dx = al == 1 ? 0x2e : al == 0xb ? 0x2e : al == 0xa ? 0x43 : 0x5d;
        ah = 9;
        asm("int 0x21");
        al = 0xff;
        ah = 0x4c;
        asm("int 0x21");
        dx = dx + 1;
        asm("popa");
        if(*%fs:bp+0x6f] = *%fs:bp+0x6f] & ah) {
            goto L00001e0d;
        }
        asm("popa");
        == ? L00001dc3 : ;
        asm("outsw");
        asm("outsb");
        *(di + 0x78) = *(di + 0x78) & ah;
        asm("arpl [%gs:di],cx");
        ah = ah | *si;
        dx = dx + 1;
        asm("popa");
        if(*%fs:di+0x6e] = *%fs:di+0x6e] & ah) {
            goto L00001e1e;
        }
        < ? L00001e26 : ;
        asm("outsb");
        asm("insw");
        asm("%g outsb");
        == ? L00001ddd : ;
        asm("outsw");
        asm("outsb");
        *(di + 0x78) = *(di + 0x78) & ah;
        asm("arpl [%gs:di],cx");
        ah = ah | *si;
        asm("outsw");
        if(si = si - 1) {
            goto L00001deb;
        }
        asm("%g outsb");
        asm("outsw");
        != ? 0x1e37 : ;
        (save)0x6d20;
        asm("%g insw");
        asm("outsw");
        < ? L00001e51 : ;
        *(bx + 0x6e) = *(bx + 0x6e) & ch;
        *(di + 0x78) = *(di + 0x78) & ah;
        asm("arpl [%gs:di],cx");
        ah = ah | *si;
    }
    eax = *L0000008B;
    dx = ax;
    eax = *L0000008F;
    esi = 0x93;
    ss = dx;
L00001deb:
    sp = ax;
    eax = *esi;
    (save)ax;
    eax = *(esi + 4);
    esi = esi + 4;
    (save)ax;
    ds = es;
    asm("retf");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    ds = cs;
    asm("int 0x21");
    if(!( *(bx + si) = *(bx + si) + al)) {
        if(al == 1) {
            dx = 0x2e;
        } else {
L00001e0d:
            if(al == 0xb) {
                dx = 0x2e;
            } else {
                if(al == 0xa) {
                    dx = 0x43;
                } else {
L00001e1e:
                    dx = 0x5d;
                }
            }
        }
        ah = 9;
        asm("int 0x21");
        al = 0xff;
        ah = 0x4c;
        asm("int 0x21");
        dx = dx + 1;
        asm("popa");
        if(*%fs:bp+0x6f] = *%fs:bp+0x6f] & ah) {
            goto L00001ea0;
        }
        asm("popa");
        == ? L00001e56 : ;
        asm("outsw");
        asm("outsb");
        *(di + 0x78) = *(di + 0x78) & ah;
        asm("arpl [%gs:di],cx");
        ah = ah | *si;
        dx = dx + 1;
        asm("popa");
        if(*%fs:di+0x6e] = *%fs:di+0x6e] & ah) {
            goto L00001eb1;
        }
        < ? L00001eb9 : ;
        asm("outsb");
        asm("insw");
        asm("%g outsb");
        == ? L00001e70 : ;
        asm("outsw");
        asm("outsb");
        *(di + 0x78) = *(di + 0x78) & ah;
        asm("arpl [%gs:di],cx");
        ah = ah | *si;
        asm("outsw");
        if(si = si - 1) {
            goto L00001e7e;
        }
        asm("%g outsb");
        asm("outsw");
        != ? 0x1eca : ;
        (save)0x6d20;
        asm("%g insw");
        asm("outsw");
        < ? L00001ee4 : ;
        *(bx + 0x6e) = *(bx + 0x6e) & ch;
        *(di + 0x78) = *(di + 0x78) & ah;
        asm("arpl [%gs:di],cx");
        ah = ah | *si;
    }
    bx = cs;
    ax = es;
    bx = bx - ax;
L00001e7e:
    if(bx > 0x1000) {
        bx = 0x1000;
    }
    *%es:bx] = 0;
    ss = ax;
    sp = (bx << 4) - 1 - 1;
    (save)es;
    (save)0x100;
    ds = es;
    ax = bp;
    asm("retf");
}

/*	Procedure: 0x00001E9E - 0x00001FA1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001E9E()
{



    bp = sp;
    ds = ss;
    es = *L00000226;
    al = 0;
    di = 0x5c;
    cx = 0x24;
    asm("rep stosb");
    cx = *( *(bp + 6)) + 1;
    if(cx + 1 > 0x80) {
        cx = 0x80;
    }
    asm("rep movsb");
    (save)ds;
    ds = es;
    dx = 0x80;
    ah = 0x1a;
    asm("int 0x21");
    di = 0x5c;
    si = 0x81;
    al = 1;
    ah = 0x29;
    asm("int 0x21");
    if(al != 0xff) {
        al = 0;
    }
    bl = al;
    di = 0x6c;
    al = 1;
    ah = 0x29;
    asm("int 0x21");
    if(al != 0xff) {
        al = 0;
    }
    bh = al;
    (restore)ds;
    es = ds;
    di = *(bp + 4);
    ecx = !L00000000 & 65535;
    al = 0;
    asm("repne scasb");
    cx = !cx;
    *L00000394 = cx;
    es = *L00000226;
    ax = *%es:0x2] - ( *L00000394 + 0xf >> 4) - 0x13;
    es = ax;
    *L00000392 = ax;
    di = 0;
    if(*(bp + 8) != 0) {
        si = 0x1d6a;
        cx = 0x93;
    } else {
        si = 0x1dfd;
        cx = 0xa1;
    }
    (save)ds;
    ds = cs;
    asm("rep movsb");
    (restore)ds;
    di = 0x130;
    si = *(bp + 4);
    cx = *L00000394;
    asm("rep movsb");
    cx = *L00000226 + 0x10;
    if(*(bp + 8) != 0) {
        *%es:0x8b] = *(bp + 0xa) + cx;
        *%es:0x8d] = *(bp + 0xc);
        *%es:0x8f] = *(bp + 0xe) + cx;
        *%es:0x91] = *(bp + 0x10);
    }
    *L0000023e();
    bp = bx;
    ax = es;
    ss = ax;
    sp = 0x130;
    es = *L00000226;
    bx = 0x100;
    *%es:bx] = cx;
    *%es:bx+0x2] = cx;
    ax = 0x4b03;
    goto ( *L00000390);
}

stack space not deallocated on return
/*	Procedure: 0x00001FA2 - 0x00002044
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00001FA2()
{



    bp = sp;
    sp = sp - 0x14;
    si = dx;
    di = cx;
    *(bp - 0x14) = *si;
    *(bp - 0x12) = *(si + 2);
    *(bp - 0x10) = *(si + 4);
    *(bp - 0xe) = *(si + 6);
    *(bp - 0xa) = *(si + 8);
    *(bp - 8) = *(si + 0xa);
    *(bp - 6) = *(di + 6);
    ax = *di;
    dx = bp - 0x14;
    *(bp - 4) = ax;
    ax = *(bp - 0x16);
    L0000229B(ax, bp, di, si);
    *bx = *(bp - 0x14);
    *(bx + 2) = *(bp - 0x12);
    *(bx + 4) = *(bp - 0x10);
    *(bx + 6) = *(bp - 0xe);
    *(bx + 8) = *(bp - 0xa);
    *(bx + 0xa) = *(bp - 8);
    ax = *(bp - 2);
    *(bx + 0xc) = 0 & 0xff;
    *(di + 6) = *(bp - 6);
    *di = *(bp - 4);
    ax = *(bp - 0x14);
    (restore)bp;
    (restore)di;
    (restore)si;
    return;
    (save)cx;
    (save)si;
    (save)bp;
    bp = sp;
    sp = sp - 8;
    si = ax;
    ax = bp - 8;
    cx = bp - 8;
    L000022AF();
    ax = si;
    (restore)bp;
    (restore)si;
    (restore)cx;
    return(L00001FA2());
}

/* DEST BLOCK NOT FOUND: 000020c6 -> 00002384 */
/*	Procedure: 0x00002045 - 0x000020CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002045()
{



    (save)si;
    (save)di;
    (save)es;
    (save)bp;
    bp = sp;
    di = cx;
    cx = *(bp + 0xa);
    es = bx;
    si = dx;
    (save)ds;
    ds = ax;
    cx = cx >> 1;
    asm("repne movsw");
    asm("adc cx,cx");
    asm("repne movsb");
    (restore)ds;
    (restore)bp;
    (restore)es;
    (restore)di;
    (restore)si;
    return;
    return(*L00000396);
    (save)bx;
    (save)dx;
    (save)si;
    (save)di;
    *L00000271 = *L00000271 & 0xf8;
    di = 0x24e;
    *L00000271 = *L00000271 | 4;
    goto L000020b0;
L0000207e:
    ax = 4;
    ax = L00000D39();
    si = ax;
    if(ax == 0) {
        ax = 4;
        ax = L00000D39();
        si = ax;
        if(ax == 0) {
            bx = 1;
            ax = 0x1be;
            dx = ds;
            L00000A5A();
        }
    }
    ax = *"on";
    *(si + 2) = di;
    di = di + 0xe;
    *si = ax;
    *"on" = si;
L000020b0:
    if(*(di + 6) != 0) {
        goto L0000207e;
    }
    *"" = 0;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)bx;
    return;
    ax = 0;
    L000020CC();
    goto L00002384;
    ax = 5;
}

/*	Procedure: 0x000020CC - 0x0000211D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 20
 */

L000020CC()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;



    bx = ax;
    dx = ax << 3;
    dx = dx - ax;
    bx = *"on";
    dx = dx << 1;
    cx = 0;
    for(di = 0x24e + dx; bx != 0; bx = si) {
        si = *bx;
        bx = *(bx + 2);
        dx = 1;
        if(!( *(bx + 7) & 0x40) && !( *(bx + 7) & 8)) {
            if(bx < di) {
                goto L00002110;
            }
            if(bx < 0x294) {
                dx = 0;
            }
        }
        ax = bx;
        L000023C8();
        cx = cx + 1;
L00002110:
    }
    return(cx);
}

/*	Procedure: 0x0000211E - 0x00002140
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0000211E()
{
	/* unknown */ void  bx;



    bx = ax;
    if(!( *(bx + 7) & 0x20)) {
        ax = *(bx + 8);
        ax = L000021FD();
        if(ax != 0) {
            *(bx + 7) = *(bx + 7) | 0x20;
            if(!( *(bx + 7) & 7)) {
                *(bx + 7) = *(bx + 7) | 2;
            }
        }
    }
}

stack space not deallocated on return
/*	Procedure: 0x00002141 - 0x000021A6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002141()
{



    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    bp = sp;
    sp = sp - 2;
    si = ax;
    *(bp - 2) = dx;
    di = bx;
    if(!(L00002219() & 0x80)) {
        al = 2;
        bx = si;
        dx = 0;
        cx = 0;
        ah = 0x42;
        asm("int 0x21");
        asm("rcl dx,1");
        asm("ror dx,1");
        if(dx >= 0) {
            goto L00002171;
        }
L0000216c:
        ax = L00000CE0();
    } else {
L00002171:
        dx = *(bp - 2);
        cx = di;
        bx = si;
        ah = 0x40;
        asm("int 0x21");
        asm("sbb dx,dx");
        si = ax;
        if(dx < 0) {
            goto L0000216c;
        }
        if(ax != di) {
            ax = 0xc;
            L00000780();
        }
        ax = si;
    }
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)cx;
    return;
    (save)dx;
    dx = ax;
    ax = *L00000398;
    *L00000398 = dx;
    (restore)dx;
    return;
    ax = ax + *L00000224;
}

/*	Procedure: 0x000021A7 - 0x000021FC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L000021A7()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  es;



    dx = ax;
    if(ax < *L0000022E) {
L000021b3:
        ax = 65535;
        *(L0000035A()) = 5;
    } else {
        bx = ax;
        bx = bx + 0xf >> 4;
        if(bx == 0) {
            bx = 0x1000;
        }
        ax = ds;
        if(*L0000022A == 0) {
            bx = bx + ss - *L00000226;
            ax = *L00000226;
        }
        es = ax;
        ah = 0x4a;
        asm("int 0x21");
        asm("sbb ax,ax");
        if(ax != 0) {
            goto L000021b3;
        }
        ax = *L00000224;
        *L00000224 = dx;
    }
}

/*	Procedure: 0x000021FD - 0x00002218
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L000021FD()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    bx = ax;
    ax = 0x4400;
    asm("int 0x21");
    asm("sbb cx,cx");
    ax = !(dl & 0x80) ? 1 : 0;
}

/*	Procedure: 0x00002219 - 0x0000225F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00002219()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    dx = ax;
    if(ax >= *L0000039C) {
        ax = 0;
    } else {
        if(ax <= 5) {
            cx = ax;
            bx = *"opyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n" + (cx << 1);
            if(!( *(bx + 1) & 0x40)) {
                *(bx + 1) = *(bx + 1) | 0x40;
                if(L000021FD() != 0) {
                    *( *"opyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n" + cx + 1) = *( *"opyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n" + cx + 1) | 0x20;
                }
            }
        }
        ax = *( *"opyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n" + (dx << 1));
    }
}

/*	Procedure: 0x00002260 - 0x0000226F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00002260()
{
	/* unknown */ void  bx;



    ax = ax << 1;
    bx = *"opyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n" + ax;
    *bx = dh | 0x40;
}

/*	Procedure: 0x00002270 - 0x0000229A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00002270()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;



    cx = ax;
    bx = ax;
    ah = 0x3e;
    asm("int 0x21");
    asm("sbb dx,dx");
    if(dx <= 0) {
        != ? 0x228e : ;
    }
    ax = cx;
    dx = 0;
    L00002260();
    ax = 0;
    goto L00002297;
    ax = 4;
    L00000780();
    ax = 65535;
L00002297:
}

/*	Procedure: 0x0000229B - 0x000022AE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 20
 */

L0000229B()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  es;



    bx = ax;
    ax = dx;
    dx = ds;
    return(L000024D4());
}

/*	Procedure: 0x000022AF - 0x00002356
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L000022AF()
{
	/* unknown */ void  bx;



    bx = ax;
    *(bx + 2) = cs;
    *(bx + 6) = ds;
    *bx = es;
    ax = ss;
    *(bx + 4) = ax;
    return(*(bx + 4));
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)es;
    si = *"";
    if(si != 0) {
        *"" = *si;
        bx = *(si + 2);
        dl = *(bx + 6) & 0x4003 | 3;
    } else {
        bx = 0x24e;
        goto L00002308;
L000022ee:
        if(!( *(bx + 6) & 3)) {
            ax = 4;
            ax = L00000D39();
            si = ax;
            if(ax == 0) {
                goto L00002348;
            }
            dx = 3;
        } else {
            bx = bx + 0xe;
L00002308:
            if(bx < 0x366) {
                goto L000022ee;
            }
            ax = 0x12;
            dx = 0x4003;
            ax = L00000D39();
            si = ax;
            if(ax == 0) {
                goto L00002348;
            }
            bx = si + 4;
        }
    }
    di = bx;
    (save)di;
    es = ds;
    eax = 0 & 0xff;
    cx = 0xe >> 1;
    asm("rep stosw");
    asm("adc cx,cx");
    asm("rep stosb");
    (restore)di;
    *(bx + 6) = dx;
    *(si + 2) = bx;
    *si = *"on";
    *"on" = si;
    ax = bx;
    goto L00002350;
L00002348:
    ax = 5;
    L00000780();
    ax = 0;
L00002350:
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 000023a4 -> 00002353 */
/*	Procedure: 0x00002357 - 0x000023C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00002357()
{
	/* unknown */ void  bx;



    (save)si;
    (save)di;
    di = ax;
    si = "on";
L0000235f:
    bx = *si;
    if(bx != 0) {
        if(di != *(bx + 2)) {
            si = bx;
            goto L0000235f;
        }
        *(di + 6) = *(di + 6) | 3;
        *si = *bx;
        *bx = *"";
        *"" = bx;
    }
    (restore)di;
    (restore)si;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    for(cx = *""; cx != 0; cx = dx) {
        bx = cx;
        ax = cx;
        *"" = cx;
        dx = *bx;
        ax = L000013F7();
    }
    *"" = cx;
    goto L00002353;
    (save)bx;
    (save)dx;
    bx = *"on";
L000023ac:
    if(bx == 0) {
        (restore)dx;
        return(65535);
    }
    if(ax != *(bx + 2)) {
        bx = *bx;
        goto L000023ac;
    }
    dx = 1;
    (restore)dx;
    return(L000023C8());
}

/*	Procedure: 0x000023C8 - 0x000023D8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L000023C8()
{
	/* unknown */ void  bx;



    bx = ax;
    dx = L00002451();
    ax = bx;
    L00002357();
    return(dx);
}

/* DEST BLOCK NOT FOUND: 000023df -> 000023e4 */
/*	Procedure: 0x000023D9 - 0x000023E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000023D9()
{



    if(ax + 0x30 > 0x39) {
        ax = ax + 0x27;
    }
}

/*	Procedure: 0x000023E5 - 0x00002450
 *	Argument size: -2
 *	Local size: 2
 *	Save regs size: 16
 */

L000023E5()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;
	/* unknown */ void  di;
	/* unknown */ void  Vfffffffe;



    si = ax;
    Vfffffffe = dx;
    cl = 4;
    dx = L0000284D();
    bx = si + 4;
    *si = 0x74;
    di = si;
    do {
        al = (dx ^ dh) & 0xf;
        L000023D9();
        *bx = al;
        bx = bx - 1;
        dx = dx >> cl;
    } while(bx != di);
    ax = Vfffffffe >> cl;
    eax = 0 & 0xff;
    *(si + 5) = 0x5f;
    L000023D9();
    *(si + 6) = al;
    ax = Vfffffffe;
    eax = 0 & 0xff;
    *(si + 8) = 0x2e;
    *(si + 9) = 0x74;
    *(si + 0xa) = 0x6d;
    *(si + 0xb) = 0x70;
    *(si + 0xc) = 0;
    *(si + 7) = L000023D9();
}

/* DEST BLOCK NOT FOUND: 00002469 -> 00002449 */
/* DEST BLOCK NOT FOUND: 000024d1 -> 00002449 */
/*	Procedure: 0x00002451 - 0x000024D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002451()
{



    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    bp = sp;
    sp = sp - 0x12;
    si = ax;
    *(bp - 2) = dx;
    if(*(si + 6) == 0) {
        ax = 65535;
        goto L00002449;
    }
    di = 0;
    if(!( *(si + 7) & 0x10)) {
        di = L0000131B();
    }
    ax = si;
    ax = L00002851();
    cx = dx;
    if(dx != -1 || ax != 65535) {
        *(bp - 4) = *(si + 8);
        bx = ax;
        ax = *(bp - 4);
        dx = 0;
        L00001ABD();
    }
    if(*(bp - 2) != 0) {
        ax = *(si + 8);
        di = di | L00002270();
    }
    if(!( *(si + 6) & 8)) {
        ax = *(si + 4);
        L000013F7();
        *(si + 4) = 0;
    }
    if(!( *(si + 7) & 8)) {
        dl = *(si + 0xd);
        ax = bp - 0x12;
        dh = 0;
        L000023E5();
        ax = bp - 0x12;
        L000028A8();
    }
    ax = di;
    goto L00002449;
}

/*	Procedure: 0x000024D4 - 0x00002516
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000024D4()
{
	/* unknown */ void  bp;
	/* unknown */ void  ds;



    (save)dx;
    bx = (0 << 1 & 65535) + 0x2539;
    es = cs & 65535;
    ax = L00002517(ax);
    (save)bx;
    (save)ds;
    (save)bp;
    bp = sp;
    asm("lds bx,[bp+0x6]");
    asm("pushf");
    (restore) *(bx + 0x12);
    *bx = ax;
    *(bx + 4) = cx;
    *(bx + 6) = dx;
    *(bx + 0xa) = si;
    *(bx + 0xc) = di;
    (restore) *(bx + 8);
    (restore) *(bx + 0xe);
    (restore) *(bx + 2);
    *(bx + 0x10) = es;
}

stack space not deallocated on return
/*	Procedure: 0x00002517 - 0x0000284C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00002517()
{



    (save)es;
    (save)bx;
    ds = dx;
    bx = ax;
    (save) *(bx + 0xe);
    ax = *bx;
    cx = *(bx + 4);
    dx = *(bx + 6);
    si = *(bx + 0xa);
    di = *(bx + 0xc);
    bp = *(bx + 8);
    es = *(bx + 0x10);
    bx = *(bx + 2);
    (restore)ds;
    asm("retf");
    asm("int 0x0");
    return;
    asm("int 0x1");
    return;
    asm("int 0x2");
    return;
    asm("int3");
    return;
    asm("int 0x4");
    return;
    asm("int 0x5");
    return;
    asm("int 0x6");
    return;
    asm("int 0x7");
    return;
    asm("int 0x8");
    return;
    asm("int 0x9");
    return;
    asm("int 0xa");
    return;
    asm("int 0xb");
    return;
    asm("int 0xc");
    return;
    asm("int 0xd");
    return;
    asm("int 0xe");
    return;
    asm("int 0xf");
    return;
    asm("int 0x10");
    return;
    asm("int 0x11");
    return;
    asm("int 0x12");
    return;
    asm("int 0x13");
    return;
    asm("int 0x14");
    return;
    asm("int 0x15");
    return;
    asm("int 0x16");
    return;
    asm("int 0x17");
    return;
    asm("int 0x18");
    return;
    asm("int 0x19");
    return;
    asm("int 0x1a");
    return;
    asm("int 0x1b");
    return;
    asm("int 0x1c");
    return;
    asm("int 0x1d");
    return;
    asm("int 0x1e");
    return;
    asm("int 0x1f");
    return;
    asm("int 0x20");
    return;
    asm("int 0x21");
    return;
    asm("int 0x22");
    return;
    asm("int 0x23");
    return;
    asm("int 0x24");
    return;
    goto L00002839;
    asm("int 0x27");
    return;
    asm("int 0x28");
    return;
    asm("int 0x29");
    return;
    asm("int 0x2a");
    return;
    asm("int 0x2b");
    return;
    asm("int 0x2c");
    return;
    asm("int 0x2d");
    return;
    asm("int 0x2e");
    return;
    asm("int 0x2f");
    return;
    asm("int 0x30");
    return;
    asm("int 0x31");
    return;
    asm("int 0x32");
    return;
    asm("int 0x33");
    return;
    asm("int 0x34");
    return;
    asm("int 0x35");
    return;
    asm("int 0x36");
    return;
    asm("int 0x37");
    return;
    asm("int 0x38");
    return;
    asm("int 0x39");
    return;
    asm("int 0x3a");
    return;
    asm("int 0x3b");
    return;
    asm("int 0x3c");
    return;
    asm("int 0x3d");
    return;
    asm("int 0x3e");
    return;
    asm("int 0x3f");
    return;
    asm("int 0x40");
    return;
    asm("int 0x41");
    return;
    asm("int 0x42");
    return;
    asm("int 0x43");
    return;
    asm("int 0x44");
    return;
    asm("int 0x45");
    return;
    asm("int 0x46");
    return;
    asm("int 0x47");
    return;
    asm("int 0x48");
    return;
    asm("int 0x49");
    return;
    asm("int 0x4a");
    return;
    asm("int 0x4b");
    return;
    asm("int 0x4c");
    return;
    asm("int 0x4d");
    return;
    asm("int 0x4e");
    return;
    asm("int 0x4f");
    return;
    asm("int 0x50");
    return;
    asm("int 0x51");
    return;
    asm("int 0x52");
    return;
    asm("int 0x53");
    return;
    asm("int 0x54");
    return;
    asm("int 0x55");
    return;
    asm("int 0x56");
    return;
    asm("int 0x57");
    return;
    asm("int 0x58");
    return;
    asm("int 0x59");
    return;
    asm("int 0x5a");
    return;
    asm("int 0x5b");
    return;
    asm("int 0x5c");
    return;
    asm("int 0x5d");
    return;
    asm("int 0x5e");
    return;
    asm("int 0x5f");
    return;
    asm("int 0x60");
    return;
    asm("int 0x61");
    return;
    asm("int 0x62");
    return;
    asm("int 0x63");
    return;
    asm("int 0x64");
    return;
    asm("int 0x65");
    return;
    asm("int 0x66");
    return;
    asm("int 0x67");
    return;
    asm("int 0x68");
    return;
    asm("int 0x69");
    return;
    asm("int 0x6a");
    return;
    asm("int 0x6b");
    return;
    asm("int 0x6c");
    return;
    asm("int 0x6d");
    return;
    asm("int 0x6e");
    return;
    asm("int 0x6f");
    return;
    asm("int 0x70");
    return;
    asm("int 0x71");
    return;
    asm("int 0x72");
    return;
    asm("int 0x73");
    return;
    asm("int 0x74");
    return;
    asm("int 0x75");
    return;
    asm("int 0x76");
    return;
    asm("int 0x77");
    return;
    asm("int 0x78");
    return;
    asm("int 0x79");
    return;
    asm("int 0x7a");
    return;
    asm("int 0x7b");
    return;
    asm("int 0x7c");
    return;
    asm("int 0x7d");
    return;
    asm("int 0x7e");
    return;
    asm("int 0x7f");
    return;
    asm("int 0x80");
    return;
    asm("int 0x81");
    return;
    asm("int 0x82");
    return;
    asm("int 0x83");
    return;
    asm("int 0x84");
    return;
    asm("int 0x85");
    return;
    asm("int 0x86");
    return;
    asm("int 0x87");
    return;
    asm("int 0x88");
    return;
    asm("int 0x89");
    return;
    asm("int 0x8a");
    return;
    asm("int 0x8b");
    return;
    asm("int 0x8c");
    return;
    asm("int 0x8d");
    return;
    asm("int 0x8e");
    return;
    asm("int 0x8f");
    return;
    asm("int 0x90");
    return;
    asm("int 0x91");
    return;
    asm("int 0x92");
    return;
    asm("int 0x93");
    return;
    asm("int 0x94");
    return;
    asm("int 0x95");
    return;
    asm("int 0x96");
    return;
    asm("int 0x97");
    return;
    asm("int 0x98");
    return;
    asm("int 0x99");
    return;
    asm("int 0x9a");
    return;
    asm("int 0x9b");
    return;
    asm("int 0x9c");
    return;
    asm("int 0x9d");
    return;
    asm("int 0x9e");
    return;
    asm("int 0x9f");
    return;
    asm("int 0xa0");
    return;
    asm("int 0xa1");
    return;
    asm("int 0xa2");
    return;
    asm("int 0xa3");
    return;
    asm("int 0xa4");
    return;
    asm("int 0xa5");
    return;
    asm("int 0xa6");
    return;
    asm("int 0xa7");
    return;
    asm("int 0xa8");
    return;
    asm("int 0xa9");
    return;
    asm("int 0xaa");
    return;
    asm("int 0xab");
    return;
    asm("int 0xac");
    return;
    asm("int 0xad");
    return;
    asm("int 0xae");
    return;
    asm("int 0xaf");
    return;
    asm("int 0xb0");
    return;
    asm("int 0xb1");
    return;
    asm("int 0xb2");
    return;
    asm("int 0xb3");
    return;
    asm("int 0xb4");
    return;
    asm("int 0xb5");
    return;
    asm("int 0xb6");
    return;
    asm("int 0xb7");
    return;
    asm("int 0xb8");
    return;
    asm("int 0xb9");
    return;
    asm("int 0xba");
    return;
    asm("int 0xbb");
    return;
    asm("int 0xbc");
    return;
    asm("int 0xbd");
    return;
    asm("int 0xbe");
    return;
    asm("int 0xbf");
    return;
    asm("int 0xc0");
    return;
    asm("int 0xc1");
    return;
    asm("int 0xc2");
    return;
    asm("int 0xc3");
    return;
    asm("int 0xc4");
    return;
    asm("int 0xc5");
    return;
    asm("int 0xc6");
    return;
    asm("int 0xc7");
    return;
    asm("int 0xc8");
    return;
    asm("int 0xc9");
    return;
    asm("int 0xca");
    return;
    asm("int 0xcb");
    return;
    asm("int 0xcc");
    return;
    asm("int 0xcd");
    return;
    asm("int 0xce");
    return;
    asm("int 0xcf");
    return;
    asm("int 0xd0");
    return;
    asm("int 0xd1");
    return;
    asm("int 0xd2");
    return;
    asm("int 0xd3");
    return;
    asm("int 0xd4");
    return;
    asm("int 0xd5");
    return;
    asm("int 0xd6");
    return;
    asm("int 0xd7");
    return;
    asm("int 0xd8");
    return;
    asm("int 0xd9");
    return;
    asm("int 0xda");
    return;
    asm("int 0xdb");
    return;
    asm("int 0xdc");
    return;
    asm("int 0xdd");
    return;
    asm("int 0xde");
    return;
    asm("int 0xdf");
    return;
    asm("int 0xe0");
    return;
    asm("int 0xe1");
    return;
    asm("int 0xe2");
    return;
    asm("int 0xe3");
    return;
    asm("int 0xe4");
    return;
    asm("int 0xe5");
    return;
    asm("int 0xe6");
    return;
    asm("int 0xe7");
    return;
    asm("int 0xe8");
    return;
    asm("int 0xe9");
    return;
    asm("int 0xea");
    return;
    asm("int 0xeb");
    return;
    asm("int 0xec");
    return;
    asm("int 0xed");
    return;
    asm("int 0xee");
    return;
    asm("int 0xef");
    return;
    asm("int 0xf0");
    return;
    asm("int 0xf1");
    return;
    asm("int 0xf2");
    return;
    asm("int 0xf3");
    return;
    asm("int 0xf4");
    return;
    asm("int 0xf5");
    return;
    asm("int 0xf6");
    return;
    asm("int 0xf7");
    return;
    asm("int 0xf8");
    return;
    asm("int 0xf9");
    return;
    asm("int 0xfa");
    return;
    asm("int 0xfb");
    return;
    asm("int 0xfc");
    return;
    asm("int 0xfd");
    return;
    asm("int 0xfe");
    return;
    asm("int 0xff");
    return;
L00002839:
    asm("int 0x25");
    >= ? L00002840 : ;
    asm("popf");
    asm("stc");
    return;
    asm("popf");
    asm("clc");
    return;
    asm("int 0x26");
    >= ? L0000284a : ;
    asm("popf");
    asm("stc");
    return;
    asm("popf");
    asm("clc");
}

/*	Procedure: 0x0000284D - 0x00002850
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000284D()
{



    return(*L00000226);
}

/*	Procedure: 0x00002851 - 0x000028A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 12
 */

L00002851()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;
	/* unknown */ void  si;



    bx = ax;
    ax = *(bx + 8);
    ax = L000028AB();
    cx = ax;
    si = dx;
    if(dx == -1) {
        if(ax != 65535) {
            goto L00002871;
        }
        cx = 65535;
        si = 65535;
    } else {
L00002871:
        if(!( *(bx + 6) & 0x80) && !( *(bx + 7) & 0x10)) {
            ax = bx;
            L000028BA();
        }
        if(*(bx + 2) != 0) {
            if(!( *(bx + 7) & 0x10)) {
                ax = *(bx + 2);
                asm("cwd");
                cx = cx + ax;
                asm("adc si,dx");
            } else {
                ax = *(bx + 2);
                asm("cwd");
                cx = cx - ax;
                asm("sbb si,dx");
            }
        }
    }
    ax = cx;
    dx = si;
}

/* DEST BLOCK NOT FOUND: 000028a8 -> 000028c7 */
/*	Procedure: 0x000028A8 - 0x000028AA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000028A8()
{



    goto L000028c7;
}

/*	Procedure: 0x000028AB - 0x000028B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L000028AB()
{
	/* unknown */ void  cx;
	/* unknown */ void  bx;



    dx = 1;
    bx = 0;
    cx = 0;
    return(L00001ABD());
}

/* DEST BLOCK NOT FOUND: 000028c4 -> 0000131b */
/*	Procedure: 0x000028BA - 0x000028DC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000028BA()
{



    if(ax == 0) {
        L000028DD();
        return(0);
    }
    goto L0000131B;
    (save)dx;
    dx = ax;
    ah = 0x41;
    asm("int 0x21");
    asm("sbb dx,dx");
    if(dx < 0) {
        (restore)dx;
        return(L00000CE0());
    }
    (restore)dx;
    return(0);
}

/*	Procedure: 0x000028DD - 0x0000290E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 16
 */

L000028DD()
{
	/* unknown */ void  cx;
	/* unknown */ void  dx;
	/* unknown */ void  bx;
	/* unknown */ void  si;



    cx = 65535;
    si = *"on";
    for(dx = 0; si != 0; si = *si) {
        bx = *(si + 2);
        if(!( *(bx + 6) & cx)) {
            dx = dx + 1;
            if(!( *(bx + 7) & 0x10)) {
                ax = bx;
                L0000131B();
            }
        }
    }
    return(dx);
}

/*	Procedure: 0x0000290F - 0x00002931
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000290F()
{



    *(bx + di) = *(bx + di) + al;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + di) = *(bx + di) + ax;
    *(bx + si) = *(bx + si) + ax;
    *(si + 0x4f) = *(si + 0x4f) + al;
}

/*	Procedure: 0x00003770 - 0x00003AEF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003770()
{



    cx = 0x201;
    asm("les ax,[bx+di]");
    (restore)es;
    *(bx + 0x201) = *(bx + 0x201) + bh;
    asm("les ax,[bx+di]");
    (restore)es;
    *(di + 2) = *(di + 2) + al;
    dh = dh + *(bx + si + 0xd);
    (restore)es;
    *(bp + di) = *(bp + di) + ch;
    ax = ax + *(bp + si);
    *di = *si;
    di = di + 1;
    si = si + 1;
    es = es;
    *di = *di + dl;
    *(bp + si) = *(bp + si) | al;
    ah = 1;
    (restore)es;
    *L00000208 = *L00000208 + 1;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *si = *si + ch;
    *(bp + si) = *(bp + si) | al;
    al & 7;
    (restore)es;
    *(di + 8) = *(di + 8) + al;
    *(bp + di + 0x10) = *(bp + di + 0x10) + bp;
    (restore)es;
    *(bp + si + 8) = *(bp + si + 8) + cl;
    *(bx + si + 0x10) = *(bx + si + 0x10) + sp;
    (restore)es;
    *(bx + si + 8) = *(bx + si + 8) + dl;
    *(bx + si + 0x10) = *(bx + si + 0x10) + sp;
    (restore)es;
    *(si + 8) = *(si + 8) + bh;
    es = es;
    *(bp + 0x208) = *(bp + 0x208) + bl;
    (restore)es;
    *(si + 0x208) = *(si + 0x208) + ah;
    *L00000007 = *L00000007 | al + *si + 6;
    asm("retf");
    *(bp + si) = *(bp + si) | ax;
    asm("aam 0x0");
    (restore)es;
    if(!( *(bp + 0x20b) = *(bp + 0x20b) + ah)) {
        (restore)es;
    }
    if(!( *(bp + si + 0x20b) = *(bp + si + 0x20b) + dh)) {
        (restore)es;
    }
    if(!( *(bp + si + 0x20b) = *(bp + si + 0x20b) + bh)) {
        (restore)es;
    }
    *(bp + 0xc) = *(bp + 0xc) + cl;
    ah = ah + *(si + 0x706);
    *(bx + si + 0x10d) = *(bx + si + 0x10d) + bl;
    asm("xchg ax,sp");
    bx = bx + 1;
    (restore)es;
    *(si + 0x10d) = *(si + 0x10d) + bl;
    bx = bx + 1;
    (restore)es;
    *(si + 0x10d) = *(si + 0x10d) + (L0000a000() | 0xa001);
    asm("cmpsb");
    bx = bx + 1;
    (restore)es;
    *(bx + si + 0x10d) = *(bx + si + 0x10d) + ch;
    (save)si;
    sp = sp + 1;
    (restore)es;
    *(si + 0x10d) = *(si + 0x10d) + ch;
    ah = 0x43;
    (restore)es;
    *(bx + si + 0x10d) = *(bx + si + 0x10d) + dh;
    dx = 0x743;
    *(si + 0x10d) = *(si + 0x10d) + 0x743;
    asm("rol byte [bp+di+0x7],0x0");
    ax = 0x10d;
    *(bp + di + 7) = 0;
    sp = 0x10d;
    asm("into");
    bx = bx + 1;
    (restore)es;
    ax = al + al | 0xd601;
    bx = bx + 1;
    (restore)es;
    ax = ah + al | 0xde01;
    bx = bx + 1;
    (restore)es;
    ax = al + cl | 0x5601;
    sp = sp + 1;
    (restore)es;
    ax = ah + cl | 0xf001;
    bx = bx + 1;
    (restore)es;
    ax = al + dl | 64001;
    bx = bx + 1;
    (restore)es;
    ax = ah + dl | 0x201;
    sp = sp + 1;
    (restore)es;
    ax = al + bl | 0xa01;
    sp = sp + 1;
    (restore)es;
    ax = ah + bl | 0x1301;
    sp = sp + 1;
    (restore)es;
    ax = al + ah | 0x1c01;
    sp = sp + 1;
    (restore)es;
    ax = ah + ah | 0x2501;
    sp = sp + 1;
    (restore)es;
    ax = al + ch | 0x5601;
    sp = sp + 1;
    (restore)es;
    ax = ah + ch | 0x3901;
    sp = sp + 1;
    (restore)es;
    ax = al + dh | 0x4401;
    sp = sp + 1;
    (restore)es;
    ax = ah + dh | 0x4d01;
    sp = sp + 1;
    (restore)es;
    ax = al + bh | 0x9401;
    bx = bx + 1;
    (restore)es;
    ax = ah + bh | 0x9a01;
    bx = bx + 1;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    (save)cs;
    *(bx + si + 0x743) = *(bx + si + 0x743) + sp;
    *si = *si + al;
    (save)cs;
    *(bp + 0x743) = *(bp + 0x743) + sp;
    *(bx + si) = *(bx + si) + cl;
    (save)cs;
    *(si + 0x743) = *(si + 0x743) + bp;
    *si = *si + cl;
    (save)cs;
    *(si + 0x743) = *(si + 0x743) + si;
    *(bx + si) = *(bx + si) + dl;
    (save)cs;
    *(bp + si + 0x743) = *(bp + si + 0x743) + di;
    *si = *si + dl;
    (save)cs;
    ax = ax + ax;
    bx = bx + 1;
    (restore)es;
    *(bx + si) = *(bx + si) + bl;
    (save)cs;
    si = si + ax;
    bx = bx + 1;
    (restore)es;
    *si = *si + bl;
    (save)cs;
    si = si + cx;
    bx = bx + 1;
    (restore)es;
    *(bx + si) = *(bx + si) + ah;
    (save)cs;
    si = si + dx;
    bx = bx + 1;
    (restore)es;
    *si = *si + ah;
    (save)cs;
    si = si + bx;
    bx = bx + 1;
    (restore)es;
    *(bx + si) = *(bx + si) + ch;
    (save)cs;
    si = si + sp;
    bx = bx + 1;
    (restore)es;
    *si = *si + ch;
    (save)cs;
    ax = ax + si;
    bx = bx + 1;
    (restore)es;
    *(bx + si) = *(bx + si) + dh;
    (save)cs;
    dx = dx + di;
    bx = bx + 1;
    (restore)es;
    *si = *si + dh;
    (save)cs;
    *(bp + si) = *(bp + si) + ax;
    sp = sp + 1;
    (restore)es;
    *(bx + si) = *(bx + si) + bh;
    (save)cs;
    *(bp + si) = *(bp + si) + cx;
    sp = sp + 1;
    (restore)es;
    *si = *si + bh;
    (save)cs;
    *(bp + di) = *(bp + di) + dx;
    sp = sp + 1;
    (restore)es;
    *(bx + si + 0xe) = *(bx + si + 0xe) + al;
    *si = *si + bx;
    sp = sp + 1;
    (restore)es;
    dl = dl + dl;
    ax = ax | 0xd601;
    bp = bp - 1;
    (restore)es;
    dh = dh + dl;
    ax = ax | 0xf601;
    bp = bp - 1;
    (restore)es;
    dl = dl + bl;
    ax = ax | 0x301;
    si = si - 1;
    (restore)es;
    dh = dh + bl;
    ax = ax | 0x8601;
    sp = sp - 1;
    (restore)es;
    dl = dl + ah;
    ax = ax | 0x8601;
    sp = sp - 1;
    (restore)es;
    dh = dh + ah;
    ax = ax | 0x1001;
    si = si - 1;
    (restore)es;
    dl = dl + ch;
    ax = ax | 0x4101;
    si = si - 1;
    (restore)es;
    dh = dh + ch;
    ax = ax | 0x8601;
    sp = sp - 1;
    (restore)es;
    dl = dl + dh;
    ax = ax | 0x8601;
    sp = sp - 1;
    (restore)es;
    *(bp + si) = *(bp + si) + dl;
    (save)cs;
    ax = ax + sp;
    al :: 7;
    *si = *si + bl;
    (save)cs;
    sp = sp + sp;
    al :: 7;
    *bx = *bx + ah;
    (save)cs;
    ax = ax + bp;
    al :: 7;
    *(bp + di + 0xe) = *(bp + di + 0xe) + dl;
    *(bx + 0x4e) = *(bx + 0x4e) + dx;
    (restore)es;
    *(bx + 0xe) = *(bx + 0xe) + dl;
    *(bx + 0x4e) = *(bx + 0x4e) + si;
    (restore)es;
    *(bp + di + 0xe) = *(bp + di + 0xe) + bl;
    *(bp + 0x74e) = *(bp + 0x74e) + di;
    *(bx + 0xe) = *(bx + 0xe) + bl;
    *bx = *bx + ax;
    di = di - 1;
    (restore)es;
    *(bp + di + 0xe) = *(bp + di + 0xe) + ah;
    *(bx + si + 0x4f) = *(bx + si + 0x4f) + dx;
    (restore)es;
    *(bx + 0xe) = *(bx + 0xe) + ah;
    *(bx + di + 0x74f) = *(bx + di + 0x74f) + bx;
    *(bp + di + 0xe) = *(bp + di + 0xe) + ch;
    dx = dx + sp;
    di = di - 1;
    (restore)es;
    *(bx + 0xe) = *(bx + 0xe) + ch;
    *(bp + di) = *(bp + di) + bp;
    es = ax;
    *(bp + di + 0xe) = *(bp + di + 0xe) + dh;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bp + di + 0xe) = *(bp + di + 0xe) + bh;
    sp = sp + bp;
    al :: 7;
    *(bp + di + 0x10e) = *(bp + di + 0x10e) + al;
    asm("out dx,al");
    al :: 7;
    *(bp + di + 0x10e) = *(bp + di + 0x10e) + bl;
    bh :: *di;
    (restore)es;
    dl = dl + al;
    (save)cs;
    sp = sp + bp;
    al :: 7;
    dl = dl + cl;
    (save)cs;
    si = si + bp;
    al :: 7;
    dl = dl + ah;
    (save)cs;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    cx = cx | *bx;
    sp = sp + bp;
    al :: 7;
    *(bp + di) = *(bp + di) + dl;
    asm("Unknown opcode 0x0f");
    si = si + bp;
    al :: 7;
    *(bp + di) = *(bp + di) + ch;
    asm("invlpg [bp+si]");
    ax :: 7;
    (save)sp;
    asm("Unknown opcode 0x0f");
    sp = sp + bp;
    al :: 7;
    *(si + 0xf) = *(si + 0xf) + bl;
    si = si + bp;
    al :: 7;
    *(si + 0xf) = *(si + 0xf) + dh;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    asm("popf");
    asm("Unknown opcode 0x0f");
    sp = sp + bp;
    al :: 7;
    *(di + 0x10f) = *(di + 0x10f) + ah;
    asm("out dx,al");
    al :: 7;
    *(di + 0x10f) = *(di + 0x10f) + bh;
    bh :: *di;
    (restore)es;
    dh = dh + ah;
    asm("Unknown opcode 0x0f");
    sp = sp + bp;
    al :: 7;
    dh = dh + ch;
    asm("Unknown opcode 0x0f");
    si = si + bp;
    al :: 7;
    *(bx + si) = *(bx + si) + al;
    *(bx + di) = *(bx + di) + al;
    asm("xchg ax,si");
    es = dx;
    *si = *si + al;
    *(bx + di) = *(bx + di) + al;
    asm("xchg cl,[si+0x7]");
    *(bx + si) = *(bx + si) + cl;
    *(bx + di) = *(bx + di) + al;
    asm("rcl byte [bp+di+0x7],0x0");
    *(si + 0x54) = *(si + 0x54) + bx;
    (restore)es;
    *(bx + si) = *(bx + si) + dl;
    *(bx + di) = *(bx + di) + al;
    asm("adc al,0x56");
    (restore)es;
    *si = *si + dl;
    *(bx + di) = *(bx + di) + al;
    asm("xchg cl,[si+0x7]");
    *(bx + si) = *(bx + si) + bl;
    *(bx + di) = *(bx + di) + al;
    *(di + 7) = *(di + 7) ^ cl;
    *si = *si + bl;
    *(bx + di) = *(bx + di) + al;
    asm("xchg dl,[bx+si+0x7]");
    *(bx + si) = *(bx + si) + ah;
    *(bx + di) = *(bx + di) + al;
    asm("xchg cl,[si+0x7]");
    *si = *si + ah;
    *(bx + di) = *(bx + di) + al;
    asm("xchg cl,[si+0x7]");
    *(bx + si) = *(bx + si) + ch;
    *(bx + di) = *(bx + di) + al;
    asm("aad 0x53");
    (restore)es;
    *si = *si + ch;
    *(bx + di) = *(bx + di) + al;
    asm("xchg cl,[si+0x7]");
    *(bx + si) = *(bx + si) + dh;
    *(bx + di) = *(bx + di) + al;
    asm("arpl [bp+0x7],dx");
    *si = *si + dh;
    *(bx + di) = *(bx + di) + al;
    asm("xchg cl,[si+0x7]");
    *(bx + si) = *(bx + si) + bh;
    *(bx + di) = *(bx + di) + al;
    bp = bp + 1 - 1;
    (restore)es;
    *si = *si + bh;
    *(bx + di) = *(bx + di) + al;
    al = *L00000751;
    *(bx + si) = *(bx + si) + al;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *si = *si + al;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + si) = *(bx + si) + cl;
    es = bx;
    *si = *si + cl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + si) = *(bx + si) + dl;
    *(bp + si + 0x756) = *(bp + si + 0x756) + si;
    *si = *si + dl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + si) = *(bx + si) + bl;
    *bx = *bx + cx;
    (restore)es;
    *si = *si + bl;
    *bx = *bx + cx;
    dx = dx + bp + 1 + 1;
    (restore)es;
    *(bp + si + 0x101) = *(bp + si + 0x101) + al;
    asm("cbw");
    ax :: 7;
    asm("pushf");
    *(bp + si) = *(bp + si) + ax;
    asm("adc al,0x6");
    (restore)es;
    *(bx + si + 0x101) = *(bx + si + 0x101) + ch;
    (restore)ax;
    asm("%d pop es");
    *(bx + di) = *(bx + di) + bl;
    al = al + *(bp + si);
    asm("adc al,0x6");
    (restore)es;
    *(bx + di) = *(bx + di) + dh;
    al = al + *(bx + di);
    asm("lock cmp al,0x7");
    *(bp + di + 2) = *(bp + di + 2) + al;
}

/*	Procedure: 0x00003AF0 - 0x00003F3A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003AF0()
{



    bx = bx + 1;
    al = al + *(bx + di);
    (restore)ax;
    asm("aas");
    (restore)es;
    al = ah + al + *(bx + di);
    bh = *di;
    (restore)es;
    cl = cl + dl;
    al = al + *(bx + di);
    bh :: *di;
    (restore)es;
    dh = dh + bl;
    al = al + *(bx + di);
    dx = dx + 1;
    ax :: 7;
    goto L00003b10;
    dx = dx + bp;
L00003b10:
    al :: 7;
    bl = bl + dh;
    al = al + *(bx + di);
    asm("out dx,al");
    al :: 7;
    *(bp + si) = *(bp + si) + bl;
    ax = ax + *(bx + di);
    (restore)es;
    *(bx + 3) = *(bx + 3) + ch;
    bl = *di + ch;
    *bx = *bx + ax;
    *(di + 4) = *(di + 4) + ch;
    ax = ax + di;
    ax :: 7;
    *di = ax;
    sp = sp + bp;
    al :: 7;
    *(bx + di + 0x105) = *(bx + di + 0x105) + dl;
    asm("out dx,al");
    al :: 7;
    *(bx + di + 0x105) = *(bx + di + 0x105) + ch;
    bh :: *di;
    (restore)es;
    *(bx + si) = *(bx + si) + bl;
    (save)es;
    *si = *si + si;
    cx = cx + 1;
    (restore)es;
    *(bp + si) = *(bp + si) + ch;
    (save)es;
    *(si + 0x742) = *(si + 0x742) + ax;
    *L00000106 = *L00000106 + dh;
    ax = ax - 1;
    dx = dx + 1;
    (restore)es;
    *(bp + di + 7) = *(bp + di + 7) + bl;
    sp = sp + bp;
    al :: 7;
    *(bp + di + 7) = *(bp + di + 7) + ah;
    si = si + bp;
    al :: 7;
    *(bp + di + 7) = *(bp + di + 7) + bh;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    cx = cx | *(bx + di);
    sp = sp + bp;
    al :: 7;
    *(bp + di) = *(bp + di) + dl;
    *(bx + di) = *(bx + di) | ax;
    asm("out dx,al");
    al :: 7;
    *(bp + di) = *(bp + di) + ch;
    *(bx + di) = *(bx + di) | ax;
    bh :: *di;
    (restore)es;
    *(bp + 9) = *(bp + 9) + dl;
    sp = sp + bp;
    al :: 7;
    *(bp + 9) = *(bp + 9) + bl;
    si = si + bp;
    al :: 7;
    *(bp + 9) = *(bp + 9) + dh;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    asm("sbb cl,[bp+si]");
    al :: 7;
    *(di + 0xa) = *(di + 0xa) + al;
    dx = dx + bp + bp;
    al :: 7;
    *(bp + 0xb) = *(bp + 0xb) + ah;
    sp = sp + bp;
    al :: 7;
    *(bp + 0xb) = *(bp + 0xb) + ch;
    si = si + bp;
    al :: 7;
    *(bp + 0x10b) = *(bp + 0x10b) + al;
    bh :: *di;
    (restore)es;
    *(bp + di) = *(bp + di) + ah;
    al = al | 1;
    asm("in al,dx");
    al :: 7;
    *(bp + di) = *(bp + di) + ch;
    al = al | 1;
    asm("out dx,al");
    al :: 7;
    *(bp + di + 0xc) = *(bp + di + 0xc) + al;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    asm("Unknown opcode 0x8f");
    al = al | 1;
    asm("xchg ax,bx");
    sp = sp - 1;
    (restore)es;
    *(bp + di + 0x10c) = *(bp + di + 0x10c) + dl;
    bl = 0x4c;
    (restore)es;
    *L00000158 = *L00000158 + dl;
    asm("xchg cl,[si+0x7]");
    *(bp + di + 0x10c) = *(bp + di + 0x10c) + bl;
    asm("xchg cl,[si+0x7]");
    *(bx + 0x10c) = *(bx + 0x10c) + bl;
    asm("xchg cl,[si+0x7]");
    *(bp + di + 0x10c) = *(bp + di + 0x10c) + ah;
    asm("xchg cl,[si+0x7]");
    *(bx + 0x10c) = *(bx + 0x10c) + ah;
    asm("xchg cl,[si+0x7]");
    *(bp + di + 0x10c) = *(bp + di + 0x10c) + ch;
    asm("xchg cl,[si+0x7]");
    *(bx + 0x10c) = *(bx + 0x10c) + ch;
    asm("xchg cl,[si+0x7]");
    *(bp + 0xd) = *(bp + 0xd) + bl;
    sp = sp + bp;
    al :: 7;
    *(bp + 0xd) = *(bp + 0xd) + ah;
    si = si + bp;
    al :: 7;
    *(bp + 0xd) = *(bp + 0xd) + bh;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    *si = *si + 1;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    ax = ax | *di;
    *(bp + si + 0x3d) = *(bp + si + 0x3d) + ax;
    (restore)es;
    *(bx + si) = *(bx + si) + bl;
    al :: 7;
    *(bx + si) = *(bx + si) + ah;
    al :: 7;
    *si = *si + bh;
    ax = ax + 0xea01 + 0xee01 + 0x4001;
    es = bp;
    *(bx + si + 5) = *(bx + si + 5) + al;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(si + 5) = *(si + 5) + al;
    *(bx + si + 0x55) = *(bx + si + 0x55) + sp;
    (restore)es;
    *(bx + si + 5) = *(bx + si + 5) + cl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(si + 5) = *(si + 5) + cl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + si + 5) = *(bx + si + 5) + dl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(si + 5) = *(si + 5) + dl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + si + 5) = *(bx + si + 5) + bl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(si + 5) = *(si + 5) + bl;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bp + 5) = *(bp + 5) + bh;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    ax = *di;
    *(bp + si + 0x3d) = *(bp + si + 0x3d) + ax;
    (restore)es;
    *(bx + si + 0x105) = *(bx + si + 0x105) + bl;
    goto L0000a000;
    ax = ax + 0xee01;
    al :: 7;
    dl = dl + bl;
    ax = ax + 0x3a01;
    ax :: 7;
    asm("out 0x5,ax");
    *(bp + si + 0x3d) = *(bp + si + 0x3d) + ax;
    (restore)es;
    al :: 7;
    ax = ah + dh + 0xea01 + bh + 0xee01;
    al :: 7;
    *(bx + di) = *(bx + di) + ch;
    (save)es;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    asm("%s push es");
    *(bp + si + 0x3d) = *(bp + si + 0x3d) + ax;
    (restore)es;
    *(bp + di + 6) = *(bp + di + 6) + al;
    dx = dx + bp;
    al :: 7;
    *(bp + di + 6) = *(bp + di + 6) + cl;
    si = si + bp;
    al :: 7;
    *(bx + si + 6) = *(bx + si + 6) + bh;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    *L00004201 & ax;
    ax :: 7;
    asm("xchg ax,dx");
    (save)es;
    dx = dx + bp;
    al :: 7;
    *(bp + si + 0x106) = *(bp + si + 0x106) + bl;
    asm("out dx,al");
    al :: 7;
    bh = bh + al;
    (save)es;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    asm("aam 0x6");
    *(bp + si + 0x3d) = *(bp + si + 0x3d) + ax;
    (restore)es;
    cl = cl + ah;
    (save)es;
    dx = dx + bp;
    al :: 7;
    cl = cl + ch;
    (save)es;
    si = si + bp;
    al :: 7;
    *di = *di + al;
    (restore)es;
    *(bx + di) = *(bx + di) + cx;
    es = di;
    *(bx + di) = *(bx + di) + cl;
    (restore)es;
    *(bp + si + 0x758) = *(bp + si + 0x758) + bx;
    *di = *di + cl;
    (restore)es;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + di) = *(bx + di) + dl;
    (restore)es;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *di = *di + dl;
    (restore)es;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + di) = *(bx + di) + bl;
    (restore)es;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *di = *di + bl;
    (restore)es;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + di) = *(bx + di) + ah;
    (restore)es;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *di = *di + ah;
    (restore)es;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + di) = *(bx + di) + dh;
    (restore)es;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    asm("%d pop es");
    *(bp + si + 0x3d) = *(bp + si + 0x3d) + ax;
    (restore)es;
    *(bp + di + 7) = *(bp + di + 7) + cl;
    dx = dx + bp;
    al :: 7;
    *(bp + di + 7) = *(bp + di + 7) + dl;
    si = si + bp;
    al :: 7;
    *(bp + 7) = *(bp + 7) + bh;
    sp = sp + bp;
    al :: 7;
    *(bp + 0x107) = *(bp + 0x107) + al;
    asm("out dx,al");
    al :: 7;
    *(bp + 0x107) = *(bp + 0x107) + bl;
    bh :: *di;
    (restore)es;
    bh = bh + ah;
    (restore)es;
    dx = dx + bp;
    al :: 7;
    *si = *si + al;
    *(bx + di) = *(bx + di) | al;
    asm("Unknown opcode 0x8e");
    ax :: 7;
    asm("das");
    *(bx + di) = *(bx + di) | al;
    goto L00000600;
    *(bx + di) = *(bx + di) + al;
    bh :: *di;
    (restore)es;
    *bx = *bx + ch;
    *(bx + di) = *(bx + di) + al;
    asm("in al,dx");
    al :: 7;
    *bx = *bx + dh;
    *(bx + di) = *(bx + di) + al;
    asm("out dx,al");
    al :: 7;
    *bx = *bx + cl;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    1 = *(bx + si) * ax;
    bh :: *di;
    (restore)es;
    *(bx + si) = *(bx + si) + bh;
    *si = *si + di;
    ax :: 7;
    al = *(bx + si);
    *(bp + 0x750) = *(bp + 0x750) + cx;
    *(bp + 0x100) = *(bp + 0x100) + cl;
    asm("scasb");
    es = ax;
    *(bp + si + 0x100) = *(bp + si + 0x100) + dl;
    bx = 0x750;
    *(bp + 0x100) = *(bp + 0x100) + dl;
    (save)es;
    es = cx;
    *(bp + si + 0x100) = *(bp + si + 0x100) + 0x750;
    *L00000757 = *L00000757 - dx;
    if(!( *(bp + 0x100) = *(bp + 0x100) + 0x750)) {
        (restore)es;
        *(bp + si + 0x100) = *(bp + si + 0x100) + ah;
        asm("fist word [bx+0x7]");
        *(bp + 0x100) = *(bp + 0x100) + ah;
        (save)si;
        es = cx;
        *(bp + si + 0x100) = *(bp + si + 0x100) + ch;
        asm("jpo 0x3e48");
        (restore)es;
        bl = bl + al;
        *(bx + di) = *(bx + di) + al;
        bh :: *di;
        (restore)es;
        al = al + dl;
        *(bx + di) = *(bx + di) + al;
        ax :: 7;
        (fsave) *(bx + si);
        dx = dx + 1 + bp;
        al :: 7;
        ch = ch + ah;
        *(bx + di) = *(bx + di) + al;
        asm("out dx,al");
        al :: 7;
        *(bp + di) = *(bp + di) + dl;
        *(bx + di) = *(bx + di) + ax;
        asm("in al,dx");
        al :: 7;
        *(bp + di) = *(bp + di) + bl;
        *(bx + di) = *(bx + di) + ax;
        asm("out dx,al");
        al :: 7;
        *(bp + di) = *(bp + di) + dh;
        *(bx + di) = *(bx + di) + ax;
        bh :: *di;
        (restore)es;
        *(bp + si + 1) = *(bp + si + 1) + bl;
        sp = sp + bp;
        al :: 7;
        *(bp + si + 1) = *(bp + si + 1) + ah;
        si = si + bp;
        al :: 7;
        *(bx + 1) = *(bx + 1) + bh;
    }
    dx = dx + bp;
    al :: 7;
    *(bx + 0x101) = *(bx + 0x101) + al;
    asm("out dx,al");
    al :: 7;
    *(si + 0x101) = *(si + 0x101) + ah;
    al & 0x51;
    (restore)es;
    *(bx + si + 0x101) = *(bx + si + 0x101) + ch;
    asm("fist word [bx+0x7]");
    *(si + 0x101) = *(si + 0x101) + ch;
    asm("enter 0x751,0x0");
    al = 1;
    *(bp + di) = *(bp + di) + dx;
    es = dx;
    *(si + 0x101) = *(si + 0x101) + dh;
    *(bp + si + 7) = *(bp + si + 7) & dl;
    *(bx + si + 0x101) = *(bx + si + 0x101) + bh;
    asm("adc [bx+si+0x7],bx");
    *(si + 0x101) = *(si + 0x101) + bh;
    *(bx + si + 7) = *(bx + si + 7) - bx;
    if(!( *(bx + di) = *(bx + di) + al + al)) {
        (restore)es;
        *(bx + di) = *(bx + di) + ax;
        *(bp + si + 7) = dx;
        al = ah + al + dl;
        *(bx + di) = *(bx + di) + ax;
        bh :: *di;
        (restore)es;
        ch = ch + bl;
        *(bx + di) = *(bx + di) + ax;
        dx = dx + 1;
        ax :: 7;
        goto L00003cea;
        (restore)es;
        dl = dl + dh;
        *(bx + di) = *(bx + di) + ax;
        asm("out dx,al");
        al :: 7;
        *(bx + di) = *(bx + di) + bh;
        al = al + *(bx + di);
        asm("in al,dx");
        al :: 7;
        *(bx + di + 2) = *(bx + di + 2) + al;
        si = si + bp;
        al :: 7;
        *(bx + di + 2) = *(bx + di + 2) + bl;
        *(bp + si) = *(bp + si) + di;
        ax :: 7;
        ax = L0000529e();
        (restore)es;
        *(bp + 0x102) = *(bp + 0x102) + bl;
        asm("xchg cl,[si+0x7]");
        *(bp + si + 0x102) = *(bp + si + 0x102) + ah;
        si = 0x752;
        *(bp + 0x102) = *(bp + 0x102) + ah;
    }
    asm("xchg cl,[si+0x7]");
    *(bp + si + 0x102) = *(bp + si + 0x102) + ch;
    asm("xchg cl,[si+0x7]");
    *(bp + 0x102) = *(bp + 0x102) + ch;
    asm("xchg cl,[si+0x7]");
    *(bp + si + 0x102) = *(bp + si + 0x102) + dh;
    asm("xchg cl,[si+0x7]");
    *(bp + 0x102) = *(bp + 0x102) + dh;
    asm("xchg cl,[si+0x7]");
    *(bp + si + 0x102) = *(bp + si + 0x102) + bh;
    asm("xchg cl,[si+0x7]");
    al = ah + bl + *(bx + di);
    bh :: *di;
    (restore)es;
    cl = cl + ch;
    al = al + *(bx + di);
    dx = dx + 1;
    ax :: 7;
    *(bp + si) & 1;
    goto L0000fe00;
    al = al + *(bx + di);
    asm("out dx,al");
    al :: 7;
    *bx = *bx + ah;
    ax = ax + *(bx + di);
    dx = dx - *(bp + di + 7);
    *(bp + di) = *(bp + di) + ch;
    ax = ax + *(bx + di);
    asm("xchg cl,[si+0x7]");
    *bx = *bx + ch;
    ax = ax + *(bx + di);
    asm("xchg cl,[si+0x7]");
    *(bp + di) = *(bp + di) + dh;
    ax = ax + *(bx + di);
    bx = bx - 1;
    es = bx;
    *bx = *bx + dh;
    (save)di;
    es = bx;
    *(bp + di) = *(bp + di) + bh;
    ax = ax + *(bx + di) + *(bx + di);
    asm("xchg cl,[si+0x7]");
    *bx = *bx + bh;
}

stack space not deallocated on return
/*	Procedure: 0x00003F3B - 0x00004004
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00003F3B()
{



    asm("aas");
    ax = ax + *(bx + di);
    asm("xchg cl,[si+0x7]");
    *(bp + di + 3) = *(bp + di + 3) + al;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bx + 3) = *(bx + 3) + al;
    *(bp + 0x74c) = *(bp + 0x74c) + ax;
    *(bp + 3) = *(bp + 3) + ch;
    *si = *si + si;
    cx = cx + 1;
    (restore)es;
    *(bp + di) = *(bp + di) + al;
    bh :: *di;
    (restore)es;
    *(bx + si) = *(bx + si) + dl;
    al = al + 1 + 1;
    dx = dx + 1;
    ax :: 7;
    al :: 4;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    *si = es;
    *(bp + si) = *(bp + si) + di;
    ax :: 7;
    asm("scasw");
    al = al + 1;
    bh :: *di;
    (restore)es;
    *(si + 0x104) = *(si + 0x104) + bh;
    dx = dx + 1;
    ax :: 7;
    sp = bp;
    (restore)bp;
    al = al + 1;
    goto L0000d100;
    al = al + 1;
    asm("out dx,al");
    al :: 7;
    dh = dh + dh;
    ax = ax + *(bx + di);
    *(bp + di + 7) = *(bp + di + 7) ^ sp;
    *(si + 4) = *(si + 4) + dl;
    *(bx + di) = *(bx + di) + si;
    asm("arpl [bx],ax");
    dh = dh + bh;
    (save)es;
    sp = sp + sp;
    asm("%f pop es");
    *(bx + si + 8) = *(bx + si + 8) + al;
    *(bp + si + 0x3d) = *(bp + si + 0x3d) + ax;
    (restore)es;
    *(di + 8) = *(di + 8) + bh;
    *si = *si + di;
    ax :: 7;
    asm("xchg ax,sp");
    *(bx + di) = *(bx + di) | al;
    ax = ax + 1;
    ax :: 7;
    si = 0x108;
    ax :: 7;
    (save)di;
    al = ax + 1 | *(bx + di);
    asm("Unknown opcode 0xfe");
    (save)7;
    asm("outsb");
    al = al | *(bx + di);
    asm("loopne 0x4034");
    (restore)es;
    *(si + 7) = *(si + 7) | ch;
    *(bp + di) = *(bp + di) + bh;
    ax = ah + bh | 1 | 0xae01;
    0 = *bx * ax;
    asm("insw");
    ax = ax | 0x5401;
    0 = *bx * ax;
    asm("aad 0xf");
    *L0000076E = *L0000076E + si;
    *(bx + di + 0x20f) = *(bx + di + 0x20f) + dl;
    (restore)es;
    *(bx + 0x20f) = *(bx + 0x20f) + 7;
    dl = 7;
    (restore)es;
    *(bx + 0x10f) = *(bx + 0x10f) + bl;
    asm("int 0x7a");
    (restore)es;
    *(si + 0x20f) = *(si + 0x20f) + dh;
}

stack space not deallocated on return
/*	Procedure: 0x00004005 - 0x00004601
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004005()
{



    *(si + 0x20f) = *(si + 0x20f) + bh;
    si = 0x707;
    ah = ah + bl;
    asm("sgdt [di+0x7b]");
    (restore)es;
    cl = cl + ah;
    asm("Unknown opcode 0x0f");
    bp = bp + cx;
    asm("jpe 0x4021");
    bh = bh + ah;
    asm("Unknown opcode 0x0f");
    bp = bp + cx;
    asm("jpe 0x4028");
    ch = ch + ch;
    al = (ax | *(bp + si)) + 6;
    (restore)es;
    bl = bl + dh;
    ax = ax | *(bx + di);
    *(di + 7) = *(di + 7) >> 0;
    asm("sti");
    al = (ax | *(bp + si)) + 6;
    (restore)es;
    bh = bh + bh;
    ax = ax | *(bx + di);
    asm("lds di,[di+0x7]");
    *bx = *bx + al;
    *(bp + di + 7) = *(bp + di + 7) >> 1;
    *bx = *bx + cl;
    (restore)es;
    *(bp + di) = *(bp + di) + dl;
    if(!(al = (al | 1 | 2) + 6 | 1)) {
        (restore)es;
        *(bx + di) = *(bx + di) + bl;
        al = al | 2;
        asm("rol byte [bx+di],cl");
        (restore)es;
        *si = *si + ch;
        al = al | 2;
        (restore)es;
        *(bx + di) = *(bx + di) + dh;
        al = 7;
        al = *esi;
        esi = esi + 1;
        (restore)es;
        (restore)es;
        *(bx + si + 0xc) = *(bx + si + 0xc) + cl;
        *(di + 0xc) = *(di + 0xc) + cl;
        bh = bh + *(si + 0x707) + *(bx + si + 0x707);
        *(bp + 0xc) = *(bp + 0xc) + ch;
        dh = dh + *(bx + si + 0x707);
        *(si + 0xc) = *(si + 0xc) + dh;
        ch = ch + *(si + 0x707);
        *(bp + di + 0x20c) = *(bp + di + 0x20c) + al;
        sp = 0x707;
    }
    *(bx + di + 0x20c) = *(bx + di + 0x20c) + cl;
    ax = 0x707;
    *(di + 0x20c) = *(di + 0x20c) + bl;
    (restore)es;
    *(bp + di + 0x20c) = *(bp + di + 0x20c) + 7;
    al = *esi;
    esi = esi + 1;
    (restore)es;
    (restore)es;
    *(bp + di + 0x20c) = *(bp + di + 0x20c) + dh;
    al = 7;
    (restore)es;
    *(bx + di + 0x20c) = *(bx + di + 0x20c) + bh;
    al = *esi;
    esi = esi + 1;
    (restore)es;
    (restore)es;
    bl = bl + cl;
    al = al | 2;
    (restore)es;
    dl = 0xe;
    al = al | 2;
    dh = 7;
    (restore)es;
    ch = ch + ah;
    al = (al | 2) + 6;
    (restore)es;
    bl = bl + ch;
    al = al | 1;
    *(di + 7) = *(di + 7) >> 0;
    asm("rep or al,0x2");
    al = al + 6;
    (restore)es;
    bh = bh + dh;
    al = al | 1;
    *(bp + di + 7) = *(bp + di + 7) >> 1;
    bh = bh + bh;
    al = al | 1;
    asm("lds di,[di+0x7]");
    *bx = *bx + al;
    es = es;
    *(bp + di) = *(bp + di) + cl;
    *bx :: (ax | 0x402 | 0x7501);
    *(bx + di) = *(bx + di) + dl;
    *bx = *bx + (ax | 0x402 | 0x7501 | 0xd202);
    *di = *di + (ax | 0x402 | 0x7501 | 0xd202);
    (restore)es;
    (restore)es;
    *(bp + si) = *(bp + si) + ch;
    (restore)es;
    (restore)es;
    *(bp + si + 0xd) = *(bp + si + 0xd) + (ax | 0x402 | 0x7501 | 0xd202 | 0xb602 | 0xb202);
    (restore)es;
    (restore)es;
    *(bx + 0xd) = *(bx + 0xd) + (ax | 0x402 | 0x7501 | 0xd202 | 0xb602 | 0xb202) + dl;
    *(bh + *(bp + 0x707) + di + 0xd) = *(bh + *(bp + 0x707) + di + 0xd) + ch;
    *(bx + 0xd) = *(bx + 0xd) + ch;
    *(bx + 0xd) = *(bx + 0xd) + bh;
    (restore)es;
    (restore)es;
    *(di + 0x20d) = *(di + 0x20d) + al + dh + *(bp + 0x707) + *(bp + si + 0x707);
    *(bx + 0x20d) = *(bx + 0x20d) + dl;
    dh = 7;
    (restore)es;
    *(di + 0x20d) = *(di + 0x20d) + bl;
    dl = 7;
    (restore)es;
    *(bp + di + 0x20d) = *(bp + di + 0x20d) + ch;
    (restore)es;
    *(bp + di + 0x20d) = *(bp + di + 0x20d) + 7;
    (restore)es;
    bh = bh + cl;
    *bx = *bx | ax | 2;
    ch = ch + ch;
    ax = ax | 0xac02;
    (restore)es;
    (restore)es;
    bh = bh + 7;
    (restore)es;
    (restore)es;
    *(bx + 0x707) = *(bx + 0x707) + (ax | 0xb002);
    (save)cs;
    *bx = *bx + ax;
    *(bx + di) = *(bx + di) + ah;
    (save)cs;
    dh = 0xe + *(bx + si + 0x707);
    *bx = *bx + ah;
    (save)cs;
    *L0000010E = *L0000010E + ch + *(si + 0x707);
    *(bp + si + 7) :: bh;
    *(bp + si + 0xe) = *(bp + si + 0xe) + al;
    *(bp + si + 0xe) = *(bp + si + 0xe) + cl;
    bh = bh + *(si + 0x707) + *(bh + *(si + 0x707) + si + 0x707);
    *(bp + si + 0xe) = *(bp + si + 0xe) + ch;
    bp = bp + cx;
    asm("jpe 0x4194");
    *(bx + 0xe) = *(bx + 0xe) + ch;
    *(bx + si) = *(bx + si) + di;
    asm("jpe 0x419b");
    *(di + 0xe) = *(di + 0xe) + dh;
    *(bx + si) = *(bx + si) + di;
    asm("jpe 0x41a2");
    *(bx + di + 0x20e) = *(bx + di + 0x20e) + ah;
    al = 7;
    (restore)es;
    *(bx + 0x20e) = *(bx + 0x20e) + ah;
    al = *esi;
    esi = esi + 1;
    (restore)es;
    (restore)es;
    *(bp + 0x20e) = *(bp + 0x20e) + dh;
    sp = 0x707;
    *(si + 0x20e) = *(si + 0x20e) + bh;
    ax = 0x707;
    cl = cl + 0x707;
    (save)cs;
    *(bx + si) = *(bx + si) + di;
    asm("jpe 0x41c5");
    ch = ch + dl;
    (save)cs;
    *(bx + si) = *(bx + si) + di;
    asm("jpe 0x41cc");
    (save)cs;
    ch = cl + ah + *(si + 0x707);
    ch = ch + ch;
    (save)cs;
    dh = dh + *(bx + si + 0x707);
    (save)cs;
    al = al + bh + *si;
    es = es;
    dh = dh + bh;
    (save)cs;
    *(di + 0x38) = *(di + 0x38) + si;
    (restore)es;
    *L0000020F = *L0000020F + al;
    al = al + 6;
    (restore)es;
    *(bp + si) = *(bp + si) + cl;
    asm("Unknown opcode 0x0f");
    ax = ax + dx;
    asm("jpo 0x41f6");
    *di = *di + dl;
    asm("Unknown opcode 0x0f");
    if(!(bp = bp + ax)) {
        *(bx + di) = *(bx + di) + ah;
        asm("lar ax,[si]");
        es = es;
    }
    *di = *di + ah;
    asm("Unknown opcode 0x0f");
    if(!(ax = ax + ax)) {
        *(bx + si) = *(bx + si) + bh;
        asm("lar ax,[bx+si]");
        *bx = *bx | al;
    }
    *(bx + di + 0xf) = *(bx + di + 0xf) + dl;
    *(bx + si + 0xf) = *(bx + si + 0xf) + bl;
    *(bx + 0xf) = *(bx + 0xf) + ch;
    dl = dh + *(bp + si + 0x707) + *(bp + 0x707) + dh + *(bp + si + 0x707) + *(bp + 0x707);
    *bx = *bx + ax;
    ah = ah + bh;
    *(bp + si) = *(bp + si) + ax;
    asm("xchg ax,bp");
    es = es;
    *(bx + di) = *(bx + di) + cl;
    al = al + *(bp + si);
    asm("in al,dx");
    *(bx + si) = *(bx + si) + dh;
    al = (al | 7) + *(bp + si);
    asm("clc");
    *bx = *bx + al;
    *bx = *bx + bh;
    al = al + *(bx + di);
    asm("adc [bx+di+0x7],al");
    *(bp + si + 2) = *(bp + si + 2) + dh;
    dl = dl + *(si + 0x706);
    *(bx + di + 0x202) = *(bx + di + 0x202) + cl;
    asm("xchg ax,bp");
    es = es;
    *(bp + di + 0x202) = *(bp + di + 0x202) + dh;
    asm("xchg ax,sp");
    es = es;
    *(bx + di) = *(bx + di) + cl;
    ax = ax + *(bp + si);
    asm("clc");
    (save)ss;
    ax = ax + 7 + *(bp + si);
    asm("clc");
    ax = ax + 7;
    asm("sbb al,0x3");
    bh = bh + ah;
    ax = ax + 7;
    *(bp + di) = *(bp + di) - ax;
    bh = bh + ah;
    ax = ax + 7 ^ *(bp + di);
    bh = bh + al;
    ax = ax + 7;
    ax :: *(bp + di);
    bh = bh + ah;
    ax = ax + 7;
    cx = cx + 1;
    ax = ax + *(bp + si);
    *L00000007 = *L00000007 + al;
    di = di + 1;
    ax = ax + *(bp + si);
    al & 0xc;
    (restore)es;
    *(bx + di + 3) = *(bx + di + 3) + dl;
    ch = ch + *(bx + si + 0x70c);
    *(di + 3) = *(di + 3) + dh;
    bh = bh + al;
    ax = ax + 7;
    (fsave)(frestore) + *(bp + di);
    bh = bh + al;
    ax = ax + 7;
    *si = 2;
    asm("clc");
    ax = ax + 7;
    asm("in al,dx");
    al = al + 2;
    asm("clc");
    ax = ax + 7;
    *di :: ax;
    bh = bh + al;
    ax = ax + 7;
    bp = bp - 1;
    ax = ax + 0xd202;
    *bx = *bx + ax;
    *(di + 5) = *(di + 5) + bl;
    dl = dl + ah;
    *bx = *bx + ax;
    *(bp + 5) = *(bp + 5) + ch;
    *(si + 5) = *(si + 5) + dh;
    ah = ah + *(si + 0x701) + *(si + 0x701);
    bl = bl + dl;
    ax = ax + 0x8e02;
    asm("adc [bx],ax");
    ch = ch + bl;
    ax = ax + 0x8c02;
    asm("adc [bx],ax");
    ax = al + dh + 0x8c02;
    asm("adc [bx],ax");
    *(di + 6) = *(di + 6) + bl;
    cl = cl + al;
    (restore)es;
    (restore)es;
    *(bp + si + 6) = *(bp + si + 6) + ch;
    ah = ah + *(si + 0x701);
    *(bp + 6) = *(bp + 6) + bh;
    *bx = *bx + ax;
    *(bp + si) = *(bp + si) + cl;
    (restore)es;
    dl = dl + dl + dl + dl;
    *bx = *bx + ax;
    *(bp + di) = *(bp + di) + dl;
    (restore)es;
    *bx = *bx + ax;
    *si = *si + bl;
    (restore)es;
    dl = dl + bl + dl + bl;
    *bx = *bx + ax;
    *(bp + si) = *(bp + si) + dh;
    (restore)es;
    cl = cl + al;
    (restore)es;
    (restore)es;
    *(bp + si + 7) = *(bp + si + 7) + al;
    ah = ah + *(si + 0x701);
    *(bp + si + 7) = *(bp + si + 7) + bl;
    *bx = *bx + ax;
    *(bp + si + 7) = *(bp + si + 7) + ch;
    dl = dl + dl + ah;
    *bx = *bx + ax;
    *(bp + di + 7) = *(bp + di + 7) + bh;
    ah = ah + *(si + 0x701);
    *(si + 0x207) = *(si + 0x207) + al;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *bx = *bx + ax;
    *(bx + si + 0x207) = *(bx + si + 0x207) + bh;
    asm("clc");
    ax = ax + 7;
    *%gs:bp+si] = *%gs:bp+si] | al;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(bp + 8) = *(bp + 8) + ch;
    *bx = *bx + ax;
    *(bx + 8) = *(bx + 8) + dh;
    *bx = *bx + ax;
    *(di + 0x208) = *(di + 0x208) + dl;
    al & 7;
    (restore)es;
    *(bx + si + 0xa) = *(bx + si + 0xa) + cl;
    (restore)es;
    *(bp + 0xa) = *(bp + 0xa) + bl;
    dh = dl + bl + dl + bl + *(si + 0x11) + *(si + 0x701);
    *(si + 0xa) = *(si + 0xa) + ah;
    cl = cl + ah;
    *bx = *bx + ax;
    *(bp + di + 0xa) = *(bp + di + 0xa) + ch;
    bh = bh + *(bx + si + 0xd);
    (restore)es;
    *(bp + di + 0xa) = *(bp + di + 0xa) + dh;
    dh = dh + *(si + 0x701);
    *(si + 0xa) = *(si + 0xa) + bh;
    al = al + *si;
    es = es;
    if(!( *(bx + di + 0x10a) = *(bx + di + 0x10a) + al)) {
        (restore)es;
        *(bx + si + 0x10a) = *(bx + si + 0x10a) + cl;
        asm("lds di,[di+0x7]");
        *(bx + 0x20a) = *(bx + 0x20a) + bl;
        (restore)es;
        *(si + 0x20a) = *(si + 0x20a) + 7;
        al = *esi;
        esi = esi + 1;
        (restore)es;
        (restore)es;
        cl = cl + al;
        al = al | *(bp + si);
        (restore)es;
        ch = ch + bl;
        al = 1 | *(bp + si);
        (save)0x71d;
        bl = bl + dh;
        al = al | *(bp + si);
        (restore)es;
        cl = cl + bh;
        al = 1 | *(bp + si);
        asm("int3");
        *bx = *bx + ax;
        *(bx + si) = *(bx + si) + al;
        if(ax = ax | *(bp + si)) {
            goto L000043d0;
        }
    }
    (restore)es;
    *(bx + si) = *(bx + si) + cl;
    ax = ax | *(bp + si);
    (restore)es;
    *(bx + di) = *(bx + di) + dl;
    al = (1 | *(bp + si)) + 6;
L000043d0:
    (restore)es;
    if(!( *L0000010B = *L0000010B + dl)) {
        (restore)es;
        *di = *di + bl;
        *(bp + di + 7) = *(bp + di + 7) >> 1;
        *bx = *bx + dh;
        ax = ax | *(bx + di) | *(bp + si);
        dh = 7;
        (restore)es;
        *si = *si + bh;
        ax = ax | *(bp + si);
        (restore)es;
        *(bp + 0xb) = *(bp + 0xb) + cl;
        al = al + ah;
        (restore)es;
        (restore)es;
        *(bx + 0xb) = *(bx + 0xb) + 7;
        dl = 0xe;
        *bx = *bx + ax;
        *(bx + 0x20b) = *(bx + 0x20b) + ch;
        asm("les ax,[bx]");
        (restore)es;
        *(bp + di + 0x20b) = *(bp + di + 0x20b) + bh;
        asm("les ax,[bx]");
        (restore)es;
        ax = ah + al | *(bp + si);
        asm("les ax,[bx]");
    }
    (restore)es;
    dh = dh + dl;
    ax = ax | *(bp + si);
    al = *esi;
    esi = esi + 1;
    (restore)es;
    (restore)es;
    ax = al + ah | *(bp + si);
    al = 7;
    (restore)es;
    *(di + 8) = *(di + 8) + dh;
    dl = dl + *(bx + si + 0x711);
    *(bp + si + 0x208) = *(bp + si + 0x208) + 7;
    asm("xchg ax,bp");
    asm("adc [bx],ax");
    ch = ch + al;
    *(bp + si) = *(bp + si) | al;
    (restore)es;
    al = al + 8 + dl;
    *(bp + si) = *(bp + si) | al;
    *(bx + di) = *(bx + di) | al;
    (restore)es;
    al = al + ch;
    *(bp + si) = *(bp + si) | al;
    asm("pushf");
    *bx = *bx + ax;
    *(bx + di) = *(bx + di) + dh;
    *(bp + si) = *(bp + si) | ax;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(bp + si) = *(bp + si) + bh;
    *(bp + si) = *(bp + si) | ax;
    asm("aam 0x1");
    (restore)es;
    *(bp + di + 9) = *(bp + di + 9) + al;
    dl = dl + *(bp + 0x701);
    *(bx + di + 9) = *(bx + di + 9) + cl;
    bl = bl + *(bx + si + 0x712);
    *(bp + di + 9) = *(bp + di + 9) + dl;
    *bx = *bx + ax;
    *(bp + di + 9) = *(bp + di + 9) + ah;
    *bx = *bx + ax;
    *(di + 9) = *(di + 9) + bh;
    dl = dl + dl + dl + dl + bl;
    *bx = *bx + ax;
    *(di + 0x209) = *(di + 0x209) + al;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(bx + si + 0x209) = *(bx + si + 0x209) + bl;
    asm("rol word [bx+di],cl");
    (restore)es;
    cl = cl + al;
    *(bp + si) = *(bp + si) | ax;
    *(bx + di) = *(bx + di) & al;
    (restore)es;
    dl = dl + dl;
    *(bp + si) = *(bp + si) | ax;
    asm("cbw");
    asm("adc al,[bx]");
    dh = dh + dh;
    *(bp + si) = *(bp + si) | ax;
    si = si + 1;
    *bx = *bx + ax;
    *(bx + si) = *(bx + si) + cl;
    al = al | *(bp + si);
    asm("cbw");
    asm("adc al,[bx]");
    *(bp + di) = *(bp + di) + dl;
    al = al | *(bp + si);
    asm("rol byte [bx+di],cl");
    (restore)es;
    *L0000020A = *L0000020A + bl;
    asm("rol word [bx+di],cl");
    (restore)es;
    *bx = *bx + ah;
    al = al | *(bp + si);
    asm("cbw");
    asm("adc al,[bx]");
    *(bx + di + 0xa) = *(bx + di + 0xa) + bl;
    *(bp + si + 0xa) = *(bp + si + 0xa) + ch;
    dl = dl + *(si + 0x711) + *(bx + si + 0x711);
    *(bx + si + 0xa) = *(bx + si + 0xa) + dh;
    cl = cl + *(bx + si);
    *bx = *bx | al;
    *(si + 0x20a) = *(si + 0x20a) + al;
    asm("xchg ax,sp");
    asm("adc [bx],ax");
    *(bx + di + 0x20a) = *(bx + di + 0x20a) + bl;
    asm("xchg ax,sp");
    asm("adc [bx],ax");
    *(bp + 0x20a) = *(bp + 0x20a) + ch;
    asm("xchg ax,sp");
    asm("adc [bx],ax");
    bh = bh + al;
    al = al | *(bp + si);
    asm("adc [bx],ax");
    ch = ch + cl;
    *(bx + si) = *(bx + si) | cl;
    (restore)es;
    *si = *si + al;
    ax = al | *(bp + si) | *(bp + si);
    asm("xchg ax,sp");
    asm("adc [bx],ax");
    *(bp + di) = *(bp + di) + dl;
    ax = ax | *(bp + si);
    asm("adc [bx],ax");
    *(bp + si) = *(bp + si) + ah;
    ax = ax | *(bp + si);
    asm("adc [bx],ax");
    *(bx + 0xb) = *(bx + 0xb) + al;
    dl = dl + *(si + 0x711);
    *(bp + si + 0xb) = *(bp + si + 0xb) + ch;
    cl = cl + *(bx + si);
    *bx = *bx | al;
    *(bp + di + 0x20b) = *(bp + di + 0x20b) + al;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *si = *si + dl;
    al = al | 2;
    asm("cbw");
    asm("adc al,[bx]");
    *si = *si + bl;
    al = al | 2;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(bx + si + 0xc) = *(bx + si + 0xc) + ch;
    bl = bl + *(bx + si + 0x712);
    *(di + 0x20c) = *(di + 0x20c) + ch;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(si + 0xd) = *(si + 0xd) + dl;
    dl = dl + dl;
    *bx = *bx + ax;
    *(bx + 0x20d) = *(bx + 0x20d) + bh;
    asm("cbw");
    asm("adc al,[bx]");
    ax = ah + ah | 0x9002;
    asm("adc [bx],ax");
    cl = cl + dh;
    ax = ax | 0x9502;
    asm("adc [bx],ax");
    *di = *di + bh;
    (save)cs;
    cl = cl + *(bx + si);
    *bx = *bx | al;
    *(bx + di + 0xe) = *(bx + di + 0xe) + cl;
    *(bx + si + 0xe) = *(bx + si + 0xe) + bl;
    *(bx + si + 0xe) = *(bx + si + 0xe) + dh;
    *(bx + 0xe) = *(bx + 0xe) + bh;
    dl = dl + *(bx + si + 0x711) + *(di + 0x711) + *(bx + si + 0x711) + *(di + 0x711) + dl + *(bx + si + 0x711) + *(di + 0x711) + *(bx + si + 0x711) + *(di + 0x711);
    (save)cs;
    cl = cl + *(bx + si);
    es = es;
    dh = dh + dl;
    (save)cs;
    bx = bx + cx;
    (restore) *bx;
    (save)cs;
    dl = dh + bl + dh + bl;
    *bx = *bx + ax;
    bh = bh + dh;
    (save)cs;
    *(di - 0x6f) = *(di - 0x6f) + cx;
    (restore)es;
    ah = ah + bh;
    (save)cs;
    *di = *di + di;
    (restore)es;
    *(bp + si) = *(bp + si) + al;
    asm("invlpg [di]");
    (restore)es;
    *(bp + si) = *(bp + si) + ah;
    asm("sgdt [di-0x7b]");
    (restore)es;
    *bx = *bx + ah;
    asm("Unknown opcode 0x0f");
    bx = bx + cx;
    (restore) *bx;
    *di = *di + ch;
    asm("lar bx,bp");
    *bx = *bx + ax;
    *(bx + si) = *(bx + si) + bh;
    asm("lar cx,[bx+si]");
    es = es;
    *(bx + di + 0xf) = *(bx + di + 0xf) + dh;
    cl = cl + *si;
    *bx = *bx | al;
    *(bp + si + 0xf) = *(bp + si + 0xf) + bh;
    bl = bl + *(si + 0x701);
    *(si + 0x20f) = *(si + 0x20f) + cl;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(si + 0x20f) = *(si + 0x20f) + bl;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(si + 0x20f) = *(si + 0x20f) + ch;
    asm("rol byte [bx+di],cl");
    (restore)es;
    dh = dh + cl;
    asm("lar cx,[si]");
    *bx = *bx | al;
    bh = bh + ch;
    asm("lar dx,dx");
    *bx = *bx + ax;
    bh = bh + bh;
    asm("lar dx,dx");
    *bx = *bx + ax;
    *di = *di + dl;
    *(bp + si) = *(bp + si) + al;
    dh = 7;
    (restore)es;
    *(bp + di) = *(bp + di) + bl;
    *(bp + si) = *(bp + si) + al;
    dl = 7;
    (restore)es;
    *(bp + di) = *(bp + di) + ch;
    *(bp + si) = *(bp + si) + al;
}

/* DEST BLOCK NOT FOUND: 00004ad3 -> 00004ae0 */
/*	Procedure: 0x00004602 - 0x00004ADE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004602()
{



    *(bx + di) = *(bx + di) + dh;
    *(bp + si) = *(bp + si) + al;
    si = 0x707;
    *L00000100 = *L00000100 + dh;
    asm("int 0x7a");
    (restore)es;
    *(bx + si) = *(bx + si) + cl;
    bp = bp + cx;
    asm("jpe 0x461e");
    *si = *si + dl;
    dh = dh + *(bp + si + 0x707);
    *bp = *bp + bl;
    dh = dh + *(bp + 0x707);
    *(bx + di) = *(bx + di) + ch;
    es = es;
    *bx = *bx + ch;
    *(di + 0x38) = *(di + 0x38) + si;
    (restore)es;
    *bx = *bx + dh;
    al = al + *si + *si;
    es = es;
    *(bp + di) = *(bp + di) + bh;
    if(!(bp = bp + ax)) {
        *(bp + 0x100) = *(bp + 0x100) + al;
        *(bp + di + 7) = *(bp + di + 7) >> 1;
    }
    *(bp + si + 0x200) = *(bp + si + 0x200) + dl;
    al = al + 6;
    (restore)es;
    *(bp + 0x100) = *(bp + 0x100) + dl;
    *(di + 7) = *(di + 7) >> 0;
    sp = sp + 1;
    if(!( *(bp + si) = *(bp + si) + ax)) {
        (restore)es;
        bl = bl + dl;
        *(bp + si) = *(bp + si) + ax;
        asm("rol byte [bx+di],cl");
        (restore)es;
        ch = ch + bh;
        *(bp + si) = *(bp + si) + ax;
        asm("enter 0x707,0x0");
        ax = ax + *(bp + si);
    }
    cl = cl + al;
    (restore)es;
    (restore)es;
    *(bp + si) = *(bp + si) + dl;
    al = al + *(bp + si);
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(bp + di) = *(bp + di) + bl;
    al = al + *(bp + si);
    asm("rol word [bx+di],cl");
    (restore)es;
    *si = *si + ah;
    al = al + *(bp + si);
    asm("rol byte [bx+di],cl");
    (restore)es;
    *si = *si + bh;
    al = al + *(bp + si);
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(bp + di + 0x202) = *(bp + di + 0x202) + dh;
    *di = *si;
    di = di + 1;
    *bx = *bx + ax;
    *(bx + si + 1 + 0x202) = *(bx + si + 1 + 0x202) + bh;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *bx = *bx + ax;
    bl = bl + dl;
    al = al + *(bp + si);
    bl = bl + bl;
    al = 0x701 + *(bp + si);
    asm("rol byte [bx+di],cl");
    (restore)es;
    *(di + 3) = *(di + 3) + bl;
    *bx = *bx + ax;
    *(bx + si + 3) = *(bx + si + 3) + ch;
    dl = dl + dl + bl;
    *bx = *bx + ax;
    *(bp + si + 3) = *(bp + si + 3) + bh;
    *(bx + si + 0x203) = *(bx + si + 0x203) + ah + *(si + 0x701);
    *di = *si;
    di = di + 1;
    si = si + 1;
    *bx = *bx + ax;
    if(!( *(di + 0x203) = *(di + 0x203) + bl)) {
        (restore)es;
        *(bp + si + 0x203) = *(bp + si + 0x203) + ch;
        (fsave) *(bx + di);
        (restore)es;
        *(bp + 0x203) = *(bp + 0x203) + dh;
        asm("aad 0x1");
    }
    (restore)es;
    *si = *si + al;
    if(!(al = al + 2)) {
        (restore)es;
        *(bp + si) = *(bp + si) + bl;
        if(al = al + 2) {
            goto L000046f5;
        }
        (restore)es;
        *si = *si + dh;
        if(al = al + 2) {
            goto L000046fc;
        }
    }
    (restore)es;
    *(bx + si + 4) = *(bx + si + 4) + cl;
    ch = ch + *(si + 0xd);
L000046f5:
    (restore)es;
    *(bp + 4) = *(bp + 4) + dh;
    dl = dl + *(bx + si + 0x711);
L000046fc:
    *(bp + di + 0x204) = *(bp + di + 0x204) + al;
    asm("xchg ax,bp");
    asm("adc [bx],ax");
    ch = ch + bh;
    al = al + 2;
    asm("adc [bx],ax");
    *(bp + si) = *(bp + si) + cl;
    ax = ax + 0x9502;
    asm("adc [bx],ax");
    *(bp + 5) = *(bp + 5) + cl;
    (restore)es;
    (restore)es;
    *(bp + di + 5) = *(bp + di + 5) + ah;
    dl = dl + ah + ah;
    (restore)es;
    (restore)es;
    *(bx + si + 0x205) = *(bx + si + 0x205) + ah;
    (restore)es;
    *(si + 0x105) = *(si + 0x105) + al + 8;
    al + 8 :: *(di + 7);
    asm("sbb [0xcc02],al");
    (restore)es;
    (restore)es;
    *bx = *bx + bl;
    (save)es;
    (restore)es;
    (restore)es;
    *bx = *bx + ah;
    (save)es;
    *(di + 0x786) = *(di + 0x786) + dx;
    *(bp + di) = *(bp + di) + cl + ah;
    (save)es;
    *(bx - 0x7a) = *(bx - 0x7a) + di;
    (restore)es;
    *bx = *bx + cl + ah;
    (save)es;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *(bp + di) = *(bp + di) + dh;
    (save)es;
    *(bx + 0x786) = *(bx + 0x786) + bx;
    *bx = *bx + dh;
    (save)es;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *(bp + di) = *(bp + di) + bh;
    (save)es;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *bx = *bx + bh;
    (save)es;
    sp = sp + ax;
    asm("xchg al,[bx]");
    *(bp + di + 6) = *(bp + di + 6) + al;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *(bx + 6) = *(bx + 6) + al;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *(bp + di + 6) = *(bp + di + 6) + cl;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *(bx + 6) = *(bx + 6) + cl;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *(bp + di + 6) = *(bp + di + 6) + dl;
    sp = sp + sp;
    asm("xchg al,[bx]");
    *(bp + si + 6) = *(bp + si + 6) + ch;
    cl = cl + ah;
    (restore)es;
    (restore)es;
    *(bp + di + 6) = *(bp + di + 6) + bh;
    *bx = *bx + sp;
    asm("xchg al,[bx]");
    *(bx + di + 0x206) = *(bx + di + 0x206) + dh;
    asm("int3");
    (restore)es;
    (restore)es;
    (save)es;
    (restore)es;
    (restore)es;
    (save)es;
    (restore)es;
    (restore)es;
    *(bp + si) = *(bp + si) + ch + dl + ah + bh + ah;
    (restore)es;
    *(bp + 7) = *(bp + 7) + dh;
    *bx = *bx | al + *(bl + *(bx + si + 0x712) + si);
    *(bx + 7) = *(bx + 7) + bh;
    dl = dl + dl;
    *bx = *bx + ax;
    *(di + 0x207) = *(di + 0x207) + ch;
    asm("xchg ax,bp");
    asm("adc [bx],ax");
    (restore)es;
    al = al + dl + *(bl + al + si + 0x711);
    (restore)es;
    (restore)es;
    dl = dl + *(bl + dl + *(di + 0x711) + si + 0x711);
    *(bp + di) = *(bp + di) + al;
    *(bp + si) = *(bp + si) | al;
    asm("xchg ax,bp");
    asm("adc [bx],ax");
    *(bx + si) = *(bx + si) + bh;
    *(bp + si) = *(bp + si) | ax;
    *(bx + si) = *(bx + si) | cl;
    (restore)es;
    *(bp + di + 9) = *(bp + di + 9) + dl;
    al = al | *(bh + *di);
    bh = bh + bh;
    *(bp + si) = *(bp + si) + 1;
    asm("rol byte [bx+di],cl");
    (restore)es;
    *bx = *bx + cl;
    *(bp + si) = *(bp + si) + al;
    asm("rol byte [bx+di],cl");
    (restore)es;
    dl = dl + ch;
    *(bp + si) = *(bp + si) + al;
    (restore)es;
    cl = cl + dh;
    *(bp + si) = *(bp + si) + 1;
    *(bp + si) = *(bp + si) + (1 | *%cs:bx]);
    *(bp + si) = *(bp + si) ^ cl;
    (restore)es;
    bh = bh + dh + bh + dh;
    *(bp + si) = *(bp + si) + (1 | *%cs:bx]);
    *di = *di + (1 | *%cs:bx] | *%cs:bx]);
    *(bp + si) = *(bp + si) + (1 | *%cs:bx] | *%cs:bx]);
    *%cs:bx] = *%cs:bx] | 1 | *%cs:bx] | *%cs:bx];
    *(bp + si) = *(bp + si) + cl;
    *(bp + si) = *(bp + si) + (1 | *%cs:bx] | *%cs:bx]);
    (restore)es;
    *(bp + di) = *(bp + di) + dl;
    *(bp + si) = *(bp + si) + 1;
    (fsave) *(bx + di);
    (restore)es;
    *(bp + si) = *(bp + si) + bl;
    *(bp + si) = *(bp + si) + 1;
    *(bx + si) = *(bx + si) + (1 | *%cs:bx]);
    *(bp + si) = *(bp + si) + (1 | *%cs:bx]);
    *(bp + si) = *(bp + si) ^ cl;
    (restore)es;
    *L00000201 = *L00000201 + (1 | *%cs:bx]);
    (restore)es;
    *di = *di + ch;
    *(bp + si) = *(bp + si) + 1;
    *(bp + di) = *(bp + di) + bl;
    al = (1 | *%cs:bx]) + *(bp + si);
    asm("sbb [bx+si],cl");
    (restore)es;
    *(bp + di) = *(bp + di) + bh;
    al = al + *(bp + si);
    (restore)es;
    *(bp + di + 2) = *(bp + di + 2) + al;
    ch = (cl & *(bx + si)) + *(bp + si);
    *bx = *bx | al;
    al = ah + al + *(bx + di);
    asm("%f xchg ax,bx");
    (restore)es;
    *(bp + di) = *(bp + di) + bh;
    ax = ax + *(bx + di);
    asm("%f xchg ax,bx");
    (restore)es;
    *(bx + di + 0x206) = *(bx + di + 0x206) + bl;
    *di = *si;
    di = di + 1;
    si = si + 1;
    es = es;
    *(bp + di + 0x206) = *(bp + di + 0x206) + ch;
    asm("aaa");
    *(si + 0x106) = *(si + 0x106) + dh;
    (al | *bx) :: 0x790;
    *(si + 0x106) = *(si + 0x106) + bh;
    (restore)es;
    (save)es;
    *bx = *bx + ax;
    cl = cl + dx - 1 + al + dx - 1 + al;
    (save)es;
    dh = dh + *di;
    *(bx + si) = *(bx + si) + (al | *bx);
    (restore)es;
    *bx = *bx + al;
    (restore)es;
    cl = cl + *L00000708 + *si;
    *bx = *bx | al;
    *(bp + di) = *(bp + di) + dl;
    (restore)es;
    *bx = *bx | al;
    *(bx + di) = *(bx + di) + bl;
    (restore)es;
    *bx = *bx + ax;
    *(bp + 7) = *(bp + 7) + dl + *(bp + si) + dl + *(bp + si);
    dh = dl + *(bp + si) + dl + *(bp + si) + *di;
    al = al | *bx;
    *(bx + 7) = *(bx + 7) + bh;
    dl = dl + *(bp + si);
    *bx = *bx | al;
    *(di + 0x207) = *(di + 0x207) + al;
    (save)cs;
    *bx = *bx | al;
    *(si + 0x207) = *(si + 0x207) + cl;
    (restore)es;
    *(si + 0x207) = *(si + 0x207) + bl;
    (restore)es;
    *(si + 0x207) = *(si + 0x207) + ((al | 8) ^ 0xa);
    (save)cs;
    *bx = *bx | (al | 8) ^ 0xa;
    *(bp + di + 0x207) = *(bp + di + 0x207) + ch;
    (restore)es;
    *(bp + si + 0x207) = *(bp + si + 0x207) + dh;
    al = ((al | 8) ^ 0xa | 8) ^ 0xa;
    (restore)es;
    *(di + 0x107) = *(di + 0x107) + bh;
    dx = dx - 1;
    (restore)es;
    cl = cl + cl;
    (restore)es;
    dh = dh + *si;
    al = al | *bx;
    bh = bh + cl;
    (restore)es;
    cl = cl + *L00000708;
    dh = dh + dl;
    (restore)es;
    cl = cl + *si;
    *bx = *bx | al;
    (restore)es;
    dl = dl + ah + *L0000070A + ch;
    (restore)es;
    (restore)es;
    cl = cl + *L00000708 + dh + *si;
    *bx = *bx | al;
    al = al + bh;
    (restore)es;
    (restore)es;
    dh = dh + *L0000070A + bh + *bx;
    *bx = *bx + (al | *bx);
    *(bx + di) = *(bx + di) | al | *bx;
    (al | *bx) :: 0x790;
    *bx = *bx + cl;
    *(bx + di) = *(bx + di) | al | *bx;
    dx = dx - 1;
    (restore)es;
    *(bx + si) = *(bx + si) + ah;
    *(bp + si) = *(bp + si) | al;
    *L00000208 = *L00000208 + (al | *%ss:bx]);
    (save)cs;
    *bx = *bx | al | *%ss:bx];
    *di = *di + ch;
    *(bp + si) = *(bp + si) | al | *%ss:bx];
    (restore)es;
    *si = *si + bh;
    *(bp + si) = *(bp + si) | al | *%ss:bx] | 8;
    (restore)es;
    *(si + 8) = *(si + 8) + ((al | *%ss:bx] | 8) ^ 0xa);
    *(bp + di + 8) = *(bp + di + 8) + cl + *L00000708;
    cl = cl + *L00000708 + *si;
    *bx = *bx | al;
    *(di + 8) = *(di + 8) + dl;
    dh = dh + *si;
    *(bp + di + 8) = *(bp + di + 8) + (al | *bx);
    *bx = *bx | al;
    *(si + 8) = *(si + 8) + ch;
    dh = dl + *(bp + si) + *bx;
    *(di + 8) = *(di + 8) + dh;
    *di = *di + di;
    (restore)es;
    *(di + 8) = *(di + 8) + bh;
    *(bp + si - 0x70) = *(bp + si - 0x70) + cx;
    (restore)es;
    *(bx + 0x208) = *(bx + 0x208) + (al | *bx);
    al = (al | *bx) ^ 0xa;
    (restore)es;
    *(bp + si + 0x208) = *(bp + si + 0x208) + dl;
    asm("adc [bx],ax");
    *(bp + 0x208) = *(bp + 0x208) + ah;
    asm("xchg ax,bp");
    asm("adc [bx],ax");
    *(bp + si) = *(bp + si) | al;
    *(bl + dl + si) = *(bl + dl + si) + cl;
    (restore)es;
    dl = dl + ah;
    *(bp + si) = *(bp + si) | al;
    (restore)es;
    bh = bh + (al ^ 0xa);
    *(bp + si) = *(bp + si) | al;
    al = al | *%ss:bx];
    *(bp + si) = *(bp + si) | al;
    *(bp + si) :: ch + ch;
    (restore)es;
    bh = bh + dh;
    *(bp + si) = *(bp + si) | al;
    ax = ax ^ 0x70a;
    ch = ch + bh;
    *(bp + si) = *(bp + si) | al;
    asm("aaa");
    *di = *di + cl;
    *(bp + si) = *(bp + si) | al | *bx;
    (restore)es;
    *(bp + di) = *(bp + di) + dl;
    *(bp + si) = *(bp + si) | (al | *bx) ^ 0xa;
    *(bx + di) = *(bx + di) + bl;
    *(bp + si) = *(bp + si) | (al | *bx) ^ 0xa ^ 0x70a;
    *bx = *bx + bl;
    *(bp + si) = *(bp + si) | (al | *bx) ^ 0xa ^ 0x70a | *%ss:bx];
    asm("aaa");
    *di = *di + (al | *bx);
    *(bp + si) = *(bp + si) | al | *bx;
    *(bp + si) :: cl;
    (restore)es;
    *bx = *bx + ch;
    *(bp + si) = *(bp + si) | al | *bx;
    asm("adc [bx],ax");
    *(bx + si + 0xb) = *(bx + si + 0xb) + al;
    *(bp + 0x704) = *(bp + 0x704) + bp;
    *(bp + 0xb) = *(bp + 0xb) + al;
    sp = sp + cx;
    (restore)ds;
    (restore)es;
    *(si + 0xb) = *(si + 0xb) + cl;
    *(bp + di + 0x10) = *(bp + di + 0x10) + bp;
    (restore)es;
    *(bp + si + 0xb) = *(bp + si + 0xb) + dl;
    *(si + 0x710) = *(si + 0x710) + dx;
    *(bx + si + 0x10b) = *(bx + si + 0x10b) + cl;
    asm("cwd");
    asm("adc [bx],al");
    *(bx + si + 0xb) = *(bx + si + 0xb) + bl;
    *bx = *bx + cx;
    asm("%c pop es");
    *(bp + 0xb) = *(bp + 0xb) + bl;
    *(bp + 0x710) = *(bp + 0x710) + bx;
    ch = ch + bl;
    *(bx + di) = *(bx + di) + ax;
    asm("enter 0x710,0x0");
    asm("Unknown opcode 0x8e");
    ax = ax | *(bx + di);
    bp = bp | *bx;
    (restore)es;
    *(si + 0xb) = *(si + 0xb) + ah;
    *(bx + di + 0x2e) = *(bx + di + 0x2e) + di;
    (restore)es;
    al + bh + *(bp + si) :: 0;
    (restore)es;
    *bx = *bx + al + bh + *(bp + si) + bh + *(bp + si) + 1;
    *(bx + si) = *(bx + si) + al + bh + *(bp + si) + bh + *(bp + si) + 1;
    al = al + bh + *(bp + si) + bh + *(bp + si) + 1 + 2;
    bp = bp + 1;
    *bx = *bx + al;
    *si = *si + al;
    al = al + 2;
    sp = sp - 1;
    *bx = *bx + al;
    *(bx + si) = *(bx + si) + cl;
    (save)sp;
    *bx = *bx + al + 2;
    *(si + 0x104) = *(si + 0x104) + bl;
    asm("out 0x1f,ax");
    (restore)es;
    *(bx + si + 0x104) = *(bx + si + 0x104) + ah;
    asm("out 0x1f,ax");
    (restore)es;
    *(si + 0x104) = *(si + 0x104) + ah;
    asm("out 0x1f,ax");
    (restore)es;
    *(bx + si + 0x104) = *(bx + si + 0x104) + ch;
    asm("out 0x1f,ax");
    (restore)es;
    *(di + 0x38) = *(di + 0x38) + si;
    (restore)es;
    *(bx + si) = *(bx + si) + cl;
    (save)es;
    *(di + 0x38) = *(di + 0x38) + si;
    (restore)es;
    *si = *si + cl;
    (save)es;
    sp = sp + ah + bl + 0x8c02 + 7 + 6;
    *bx :: ax;
    *(bx + si) = *(bx + si) + dl;
    (save)es;
    sp = sp + ax;
    *bx :: ax;
    asm("Unknown opcode 0xdb");
    if(!( *(si + 0x106) = *(si + 0x106) + bl)) {
        asm("Unknown opcode 0xdb");
        if(*(bx + si + 0x106) = *(bx + si + 0x106) + ah) {
            goto L00004ab6;
        }
    }
    *(bp + si + 0xb) = *(bp + si + 0xb) + ch;
    *(bp + di + 0x783) = *(bp + di + 0x783) + dx;
L00004ab6:
    *(bx + si + 0xb) = *(bx + si + 0xb) + dh;
    *(bx + si - 0x79) = *(bx + si - 0x79) + si;
    (restore)es;
    *(bp + 0xb) = *(bp + 0xb) + dh;
    *(bx + di + 0x787) = *(bx + di + 0x787) + di;
    *si = *si + al;
    *(bx + di) = *(bx + di) | al;
    sp = bp;
    (restore)bp;
    *bx = al;
    asm("adc [bp+si+0x7],cl");
    if(*(si + 0x10b) = *(si + 0x10b) + dl) {
        goto L00004ae0;
    }
    *si = *si + bp;
    *bx = ax;
    *(bp + si + 0x10b) = *(bp + si + 0x10b) + al;
    asm("into");
    asm("cbw");
}

/* DEST BLOCK NOT FOUND: 00005051 -> 00005054 */
stack space not deallocated on return
/*	Procedure: 0x00004BAE - 0x00005053
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00004BAE()
{



    (save)0x1b8;
    *(bx + si) = *(bx + si) + al;
    L00005054();
    *(bx + si) = *(bx + si) + al;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)bp;
    bp = sp;
    sp = sp - 0x19c;
    *(bx + si) = *(bx + si) + al;
    al = 0x13;
    eax = 0 & 0xff;
    asm("int 0x10");
    dx = 4;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 7;
    *(bx + si) = *(bx + si) + al;
    *(di - 0x44) = L000052CF();
    cx = *(di - 0x44);
    bx = 1;
    *(1 + si) = *(1 + si) + al;
    dx = 4;
    *(bx + si) = *(bx + si) + al;
    ax = di - 0x40;
    L00005392();
    *(bx + si) = *(bx + si) + al;
    cx = *(di - 0x44);
    bx = 1;
    *(1 + si) = *(1 + si) + al;
    dx = 4;
    *(bx + si) = *(bx + si) + al;
    ax = di - 0x3c;
    L00005392();
    *(bx + si) = *(bx + si) + al;
    cx = *(di - 0x44);
    bx = 1;
    *(1 + si) = *(1 + si) + al;
    dx = 4;
    *(bx + si) = *(bx + si) + al;
    ax = di - 0x38;
    L00005392();
    *(bx + si) = *(bx + si) + al;
    ax = *(di - 0x3c) << 3;
    *(bx + si) = *(bx + si) + al;
    *(di - 0x34) = L00005573();
    cx = *(di - 0x44);
    bx = *(di - 0x3c);
    dx = 8;
    *(bx + si) = *(bx + si) + al;
    ax = *(di - 0x34);
    L00005392();
    *(bx + si) = *(bx + si) + al;
    ax = *(di - 0x44);
    L00005578();
    *(bx + si) = *(bx + si) + al;
    ax = *(di - 0x3c) - 1;
    *(di - 0x38) = *(di - 0x38) * ax;
    ax = ax + ax;
    ax = L00005573();
    *(bx + si) = *(bx + si) + al;
    *(di - 0x30) = ax;
    cx = 0x40;
    *(bx + si) = *(bx + si) + al;
    di = di + 65212;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    si = 0xba0;
    *(bx + 0xba0) = *(bx + 0xba0) + al;
    asm("rep movsw");
    *(di + 65240) = 65535;
    asm("aaa");
    di = 0x3c05;
    *L00013AFD = 65535;
    asm("%g sub ax,0x3c8d");
    *(di + 65304) = 65535;
    *di = al;
    di = di + 1;
    (save)dx;
    asm("sbb [di],bh");
    *(di + 65336) = 65535;
    ax + 0xa72f :: 0x85c7;
    (restore)ax;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *(bp + di + 0x351d)();
    *%ds:di+0xff78] = 65535;
    (save)sp;
    asm("a32 mov si,0xc73e");
    bp = bp + 1;
    asm("cbw");
    asm("hlt");
    asm("int1");
    al = al | 0x3f;
    *(di - 0x48) = 0x3315;
    (save)0xc73f;
    bp = bp + 1;
    asm("loopne 0x4cbc");
    *(bx + si) = *(bx + si) + al;
    bh = bh + al;
    bp = bp + 1;
    asm("in al,0x2");
    asm("sbb [0xc73b],dl");
    bp = bp + 1;
    L00004ccb();
    *(bx + si) = *(bx + si) + al;
    *(di - 0x14) = 0x1f23;
    asm("adc di,[bp+di]");
    *(di - 0x10) = 0;
    *(bx + si) = *(bx + si) + al;
    *(di - 0xc) = 0x9b93;
    asm("xchg ax,sp");
    al :: bh;
    bp = bp + 1;
    asm("clc");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    goto L00004cf1;
    ax = *(di - 8);
    *(di - 8) = *(di - 8) + 1;
L00004cf1:
    while(*(di - 0x3c) - 1 > *(di - 8)) {
        *(bx + si) = *(bx + si) + al;
        *(di - 0x2c) = 0;
        *(bx + si) = *(bx + si) + al;
        goto L00004d0d;
L00004d07:
        ax = *(di - 0x2c);
        *(di - 0x2c) = *(di - 0x2c) + 1;
L00004d0d:
        if(*(di - 0x2c) < 8) {
            dx = *(di - 0x3c);
            *(di - 0x2c) = *(di - 0x2c) * dx;
            dx = dx + *(di - 8) + *(di - 0x34);
            eax = *(bp + si) & 0xff;
            *(di + 65208) = ax;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            *(bp + di + 0xd445) = *(bp + di + 0xd445) - 1;
            ax = ax << 2;
            *(si + 0x9828) = *(di + 65208);
            asm("Unknown opcode 0xfe");
            asm("Unknown opcode 0xff");
            *(bp + di + 0xc455) = *(bp + di + 0xc455) - 1;
            *(di - 0x2c) = *(di - 0x2c) * dx;
            dx = dx + *(di - 8) + *(di - 0x34);
            eax = *(bp + si + 1) & 0xff;
            *(di + 65208) = ax;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            *(bp + di + 0xd445) = *(bp + di + 0xd445) - 1;
            ax = ax << 2;
            (fsave) *(di + 65208) - *(si + 0x9828);
            asm("Unknown opcode 0xfe");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            asm("fdivp st1,st0");
            ax = *(di - 0x2c) << 2;
            *(si + 0x7828) = *(di - 0x38);
            asm("Unknown opcode 0xfe");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            goto L00004d07;
        }
        *(di - 0x28) = 0;
        *(bx + si) = *(bx + si) + al;
        goto L00004d8b;
        ax = *(di - 0x28);
        *(di - 0x28) = *(di - 0x28) + 1;
L00004d8b:
        if(*(di - 0x28) < *(di - 0x38)) {
            *(bx + si) = *(bx + si) + al;
            *(di + 65140) = 65535;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            asm("adc [bx+si],al");
            *(bx + si) = *(bx + si) + al;
            *(di + 65136) = *(di - 0x20) + *(di - 0x18) + *(di - 0x10) + *di;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            *(di - 0x20) = *(di - 0x20) + *(di - 0x1c);
L00004dbf:
            *(di - 0x20) :: 0;
            *bx :: 0x7c;
            (save)cs;
            asm("adc al,0x0");
            *(bx + si) = *(bx + si) + al;
            *(di - 0x20) = *(di - 0x20) + *di;
            goto L00004dbf;
            *(di - 0x18) = *(di - 0x18) + *(di - 0x14);
L00004ddf:
            *(di - 0x18) :: 0;
            *bx :: 0x7c;
            (save)cs;
            asm("sbb [bx+si],al");
            *(bx + si) = *(bx + si) + al;
            *(di - 0x18) = *(di - 0x18) + *di;
            goto L00004ddf;
            *(di - 0x10) = *(di - 0x10) + *(di - 0xc);
L00004dff:
            *(di - 0x10) :: 0;
            *bx :: 0x7c;
            (save)cs;
            asm("sbb al,0x0");
            *(bx + si) = *(bx + si) + al;
            *(di - 0x10) = *(di - 0x10) + *di;
            goto L00004dff;
            *(di - 0x2c) = 0;
            *(bx + si) = *(bx + si) + al;
            goto L00004e25;
            ax = *(di - 0x2c);
            *(di - 0x2c) = *(di - 0x2c) + 1;
L00004e25:
            while(*(di - 0x2c) < 8) {
                *(bx + si) = *(bx + si) + al;
                ax = *(di - 0x2c) << 5;
                dx = di + 65212;
                asm("Unknown opcode 0xff");
                *(bx + di) = *(bx + di) + 1;
                return;
                asm("insb");
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                *(bp + di + 0x6c85) = *(bp + di + 0x6c85) - 1;
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                (fsave) *(di + 65136) - *(bx + si + 4);
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("fsubp st1");
                *(bx + si + 8) = *(bx + si);
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                *(bx + si + 4) = *(bx + si + 0x1c) * *(bx + si + 8) + *(bx + si + 4);
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                *(bx + si) = *(bx + si + 0x1c) * *(bx + si + 4) + *(bx + si);
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                (fsave) *(bx + si + 8) - *(bx + si + 0x10);
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("fsubp st1");
                *(bx + si + 0x14) = *(bx + si + 0xc);
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                *(bx + si + 0x10) = *(bx + si + 0x1c) * *(bx + si + 0x14) + *(bx + si + 0x10);
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                ax = *(di + 65132);
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                *(bx + si + 0xc) = *(bx + si + 0x1c) * *(bx + si + 0x10) + *(bx + si + 0xc);
                if(*(di - 0x2c) == 7) {
                    ax = *(di + 65132);
                    asm("Unknown opcode 0xff");
                    asm("Unknown opcode 0xff");
                    *(bx + si) = *(bx + si) & al;
                    *(bx + si) = *(bx + si) + al;
                    *(di + 65128) = *(bx + si + 0x14) * *di;
                    asm("Unknown opcode 0xff");
                    asm("Unknown opcode 0xff");
                } else {
                    ax = *(di + 65132);
                    asm("Unknown opcode 0xff");
                    *(bp + di + 0xc40) = *(bp + di + 0xc40) - 1;
                    *(di + 65128) = ax;
                    asm("Unknown opcode 0xff");
                    *(bp + di + 0xd445) = *(bp + di + 0xd445) - 1;
                }
                ax = ax << 2;
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                *(di + 65140) = *(si + 0x9828) * *(di + 65128) + *(di + 65140);
                asm("Unknown opcode 0xff");
                *(bp + di + 0xd445) = *(bp + di + 0xd445) - 1;
                ax = ax << 2;
                dx = *(di - 0x2c) << 2;
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                *(si + 0x9828) = *(si + 0x782a) + *(si + 0x9828);
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
            }
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            al = 0;
            0;
            *(di + 65140) = *(di + 65140) * *di;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            (fsave) *(di + 65140);
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            asm("fcomp dword [di]");
            *(bx + si) = *(bx + si) - al;
            asm("fnstsw ax");
            asm("sahf");
            if(!( *(bx + si) = *(bx + si) + al)) {
                *(di + 65140) = 65535;
                *(bx + si) = *(bx + si) + al;
                bh = bh + al;
            }
            *(di + 65140) :: 65535;
            dh = dh + bh;
            *(bp + 0x7e) = *(bp + 0x7e) + 1;
            al = al | bh;
            *(si - 2) & si;
            asm("Unknown opcode 0xff");
            *(bx + si) = *(bx + si) + 1;
            asm("Unknown opcode 0xfe");
            *(bp - 0x27) = *(bp - 0x27) + 1;
            *(si - 2) & si;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            L0000570E();
            *(bx + si) = *(bx + si) + al;
            *(di + 65124) = (frestore);
            asm("Unknown opcode 0xff");
            *(bp + di + 0x6485) = *(bp + di + 0x6485) - 1;
            asm("Unknown opcode 0xfe");
            asm("Unknown opcode 0xff");
            *(bx + di + 0x6485) = *(bx + di + 0x6485) - 1;
            asm("Unknown opcode 0xfe");
            asm("Unknown opcode 0xff");
            *(bp + di + 0xc855) = *(bp + di + 0xc855) - 1;
            *(di - 8) = *(di - 8) * dx;
            dx = dx + *(di - 0x28) + dx + *(di - 0x28) + *(di - 0x30);
            ax = *(di + 65124);
            asm("Unknown opcode 0xff");
            goto ( *(bp - 0x77));
            ch = ch + cl;
            asm("xchg ax,si");
            asm("std");
        }
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    }
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    dx = 0x2c;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0x2f;
    *(bx + si) = *(bx + si) + al;
    *(di - 4) = L000052CF();
    cx = *(di - 4);
    bx = 2;
    *(2 + si) = *(2 + si) + al;
    *(di - 0x38) = *(di - 0x38) * ( *(di - 0x3c) - 1);
    ax = *(di - 0x30);
    L0000572B();
    *(bx + si) = *(bx + si) + al;
    ax = *(di - 4);
    L00005578();
    *(bx + si) = *(bx + si) + al;
    L0000590B();
    *(bx + si) = *(bx + si) + al;
    ax = *(di - 0x30);
    L00005928();
    *(bx + si) = *(bx + si) + al;
    ax = *(di - 0x34);
    L00005928();
    *(bx + si) = *(bx + si) + al;
    al = 3;
    asm("int 0x10");
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return(0);
    *di = ss;
    if(eax = 0 & 0xff) {
        goto L00005054;
    }
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x00005054 - 0x00005063
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005054()
{



    bl = bl + al;
    asm("xchg ax,[si+0x24]");
    al = al + 0xe8 | *(bx + si);
    *(bx + si) = *(bx + si) + al;
    al = *(si + 0x24) + 0xc2;
}

/*	Procedure: 0x00005064 - 0x00005093
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005064()
{



    return;
    if(ax < sp) {
        ax = ~(ax - sp);
        ax :: *di;
        ah = 1;
        if(!( *(bx + si) = *(bx + si) + 1)) {
            return(1);
        }
    }
    if(ss >= *di) {
    }
    if(!( *(bx + si) = *(bx + si) + al)) {
        return;
    }
    *(bx + si) = *(bx + si) + 0x17e;
    dx = 1;
    *(bx + si) = *(bx + si) + 0x17e;
    L00005C49();
}

stack space not deallocated on return
/*	Procedure: 0x00005094 - 0x0000528A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005094()
{



    *(bx + si) = *(bx + si) + al;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    sp = sp - 4;
    bx = ax;
    cx = 1;
    *(bx + si) = *(bx + si) + al;
    bp = 0;
    si = 0;
    di = 0;
    *L00000000 = 0;
    asm("Unknown opcode 0xd2");
    if(!(al = al & 0x85)) {
        cx :: *di;
        asm("in al,0x1");
        *(bp + si) = !( *(bx + si) = *(bx + si) + al) ? cx : bp;
    }
    al = *(bp + di);
    if(al >= 0x72) {
        <= ? L000050d4 : ;
        if(al == 0x77) {
            goto L000050da;
        }
    } else {
        if(al == 0x61) {
            *si = *si | 0x24;
            bx = bx + bp;
            asm("sbb ax,0xc80");
L000050da:
            al = al & 2;
            goto L000050f7;
            *si = *si | 0x24;
            asm("Unknown opcode 0x82");
            goto L000050f7;
        }
    }
    *(bx + si) = *(bx + si) + 9;
    *(bx + si) = *(bx + si) + L00005C72();
    cx = 0;
    goto L000051a4;
L000050f7:
    while(1) {
        bx = bx + 1;
        al = *(bp + di);
        if(al == 0) {
            goto L0000518d;
        }
        *(bx + si) = *(bx + si) + al;
        if(cx == 0) {
            goto L0000518d;
        }
        *(bx + si) = *(bx + si) + al;
        if(al < 0x63) {
            if(al < 0x2b) {
                continue;
            }
            <= ? L00005130 : ;
            if(al == 0x62) {
                if(si != 0) {
                    goto L00005134;
                }
                ax = ( *si & 0xc) + 1;
                si = 1;
                *(bx + 1) = *(bx + 1) + al;
                *si = al;
                al = al & 0xeb;
                asm("xchg ax,cx");
                if(di != 0) {
                    goto L00005134;
                }
                ah = *(bp + si) | 1;
                di = 1;
                *(bx + si) = *(bx + si) + al;
                *(bp + si) = ah;
L000050f5:
                *(bx + si) = *(bx + si) + al;
                continue;
            }
            continue;
        }
        <= ? L00005164 : ;
        *(bx + si) = *(bx + si) + al;
        if(al < 0x6e) {
            continue;
        }
        <= ? L00005179 : ;
        *(bx + si) = *(bx + si) + al;
        if(al == 0x74) {
L00005148:
            if(si != 0) {
L00005134:
                cx = 0;
                continue;
            }
            si = 1;
            *(bx + 1) = *(bx + 1) + al;
            continue;
        }
    }
    if(bp != 0) {
        goto L00005134;
    }
    al = *si & 0x80;
    asm("int3");
    di = di + *(di + 1);
    *(bx + si) = *(bx + si) + al;
    *si = ah;
    al = al & 0xeb;
    asm("scasw");
    goto L00005148;
    asm("Unknown opcode 0xff");
    *(di + 0x75ff) = *(di + 0x75ff) + 1;
    ch = 0x8a;
    ah = ah + *si;
    asm("Unknown opcode 0xfe");
    di = 1;
    *(bx + si) = *(bx + si) + al;
    *(bp + si) = al;
    goto L000050f5;
L0000518d:
    asm("Unknown opcode 0xff");
    *(di + 0x75f6) = *(di + 0x75f6) + 1;
    asm("adc [bx+di+0xf13d],al");
    ax = ax + *(bx + si);
    *(bx + si) = *(bx + si) + al;
    *(di + 4) = *(di + 4) + dh;
    *si = *si | 0x24;
    ax = al + *(bx + si) + 1;
    cx = *si;
L000051a4:
    al = al & 0x89;
    asm("enter 0xc483,0x4");
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)cx;
    (restore)bx;
    return;
    (save)si;
    (save)di;
    (save)bp;
    si = ax;
    al = dl;
    dx = cx;
    cx = *(si + 0x24);
    asm("adc al,0x80");
    asm("popa");
    *(bx + di + 0xc) = *(bx + di + 0xc) | bx;
    *(bx + si) = *(bx + si) + ((al | 0xfc) & 0xff);
    ax = L00005CA8();
    *(bx + si) = *(bx + si) + al;
    if(al == 0x72) {
        ax = 0;
        if(!(bl & 2)) {
            *(bx + si) = *(bx + si) + 2;
        }
        ah = !(bl & 0x40) ? ah | 2 : ah | 1;
        (save)0;
        di = *(si + 0x24);
        asm("adc al,0x57");
    } else {
        *(bx + si) = *(bx + si) + al;
        ax = 0x21;
        al = !(bl & 0x80) ? 0x31 : al | 0x40;
        ah = !(bl & 0x40) ? ah | 2 : ah | 1;
        (save)0x180;
        *(bx + si) = *(bx + si) + al;
        bp = *(si + 0x24);
        asm("adc al,0x55");
    }
    (save)ax;
    (save)si;
    *(bx + si) = *(bx + si) + al;
    sp = sp + 0x10;
    *(bx + di + 0x10) = L00005CDA();
    if(*(bx + di + 0x10) == -1) {
        ax = cx;
        L00006026();
        *(bx + si) = *(bx + si) + al;
        ax = 0;
    } else {
        *(bx + di + 4) = 0;
        *(bx + si) = *(bx + si) + al;
        ax = *(bx + di + 8);
        *(bx + di + 0x14) = 0;
        *(bx + si) = *(bx + si) + al;
        *(bx + si + 0xc) = 0;
        *(bx + si) = *(bx + si) + al;
        ax = *(bx + di + 8);
        *(bx + si + 0x10) = dx;
        ax = *(bx + di + 8);
        *(bx + si + 8) = 0;
        *(bx + si) = *(bx + si) + al;
        if(!(bl & 0x80)) {
            bx = 2;
            *(2 + si) = *(2 + si) + al;
            ax = cx;
            dx = 0;
            L000060D2();
            *(bx + si) = *(bx + si) + al;
        }
        ax = cx;
        L000061E1();
        *(bx + si) = *(bx + si) + al;
        ax = cx;
    }
    (restore)bp;
    (restore)di;
    (restore)si;
}

/*	Procedure: 0x0000528B - 0x000052CE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000528B()
{



    *(bx + si) = *(bx + si) | al;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 4;
    si = ax;
    cx = dx;
    di = bx;
    dx = sp;
    ax = cx;
    L00005094();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xc0");
    if(!( *(bx + di + 0x85c3) = *(bx + di + 0x85c3) - 1)) {
        ax = 0;
        ax = L00005F7D();
        *(bx + si) = *(bx + si) + al;
        dx = ax;
        if(ax != 0) {
            (save)ax;
            dx = dx ^ ax;
            (save)di;
            ax = si;
            dl = *(bx + di);
            al = al | *(si + 0x24);
            while(1) {
            }
            asm("Unknown opcode 0xff");
            *(bx + di + 0x89c2) = *(bx + di + 0x89c2) - 1;
        }
        asm("rol byte [bp+di+0x4c4],1");
    }
    (restore)di;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x000052CF - 0x000052D8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000052CF()
{



    (restore)cx;
    return;
    (save)bx;
    bx = 0;
    L0000528B();
    asm("Unknown opcode 0xff");
    *(bp + di - 0x3d)();
}

stack space not deallocated on return
/*	Procedure: 0x000052D9 - 0x00005391
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000052D9()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    bx = ax;
    ax = *L00000CA0;
    for(*(bx + si) = *(bx + si) + al; ax != 0; ax = *(bx + si)) {
        if(bx == *(bx + si + 4)) {
            if(!( *(bp + si + 0xc) & 3)) {
                dx = 1;
                *(bx + si) = *(bx + si) + al;
                ax = bx;
                L00005670();
                *(bx + si) = *(bx + si) + al;
            }
L00005302:
            ax = bx;
            (restore)dx;
            (restore)cx;
            (restore)bx;
            return;
        }
    }
    dx = 0xca4;
    *(bx + si) = *(bx + si) + al;
L00005311:
    ax = *(bp + si);
    if(ax != 0) {
        if(bx == *(bx + si + 4)) {
            *(bp + si) = *(bx + si);
            dx = *di;
            al = *L0000000C;
            *(bp + di + 0xca0) = *(bp + di + 0xca0) + ah;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = dx;
            goto L00005302;
        }
        dx = ax;
        goto L00005311;
    }
    *(bx + si) = *(bx + si) + 4;
    L00005C72();
    *(bx + si) = *(bx + si) + al;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return(0);
    (save)cx;
    (save)si;
    sp = sp - 4;
    si = ax;
    cx = dx;
    dx = sp;
    ax = cx;
    L00005094();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xc0");
    if(!( *(bx + di + 0x85c2) = *(bx + di + 0x85c2) - 1)) {
        ax = bx;
        ax = L000052D9();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xc0");
        if(!( *(bx + di + 0x85c3) = *(bx + di + 0x85c3) - 1)) {
            (save)ax;
            bx = *(bx + si + 0xc) & 0x4000;
            *(bx + si) = *(bx + si) + al;
            (save)0;
            *(bx + si + 0xc) = bx;
            bx = dx;
            eax = *(bx + di) & 0xff;
            *(bx + di + 0x89c2) = *(bx + di + 0x89c2) | *(si + 0x24);
            asm("lock call 0x51af");
            asm("Unknown opcode 0xff");
            *(bx + di + 0x89c3) = *(bx + di + 0x89c3) - 1;
        }
        (fsave)(frestore) + *(bp + di + 0x4c4);
    }
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x00005392 - 0x00005572
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005392()
{



    (restore)cx;
    return;
    (save)si;
    (save)di;
    (save)bp;
    sp = sp - 8;
    (save)ax;
    (save)dx;
    bp = cx;
    if(!( *(bx + di + 0xc) & 1)) {
        *(bx + si) = *(bx + si) + 4;
        L00005C72();
        *(bx + si) = *(bx + si) + al;
        dh = *(bx + di + 0xc) | 0x20;
        ax = 0;
        *(bx + di + 0xc) = dh;
        goto L0000556c;
        *(bx + si) = *(bx + si) + al;
    }
    dx = dx * bx;
    if(bx == 0) {
        ax = bx;
        goto L0000556c;
        *(bx + si) = *(bx + si) + al;
    }
    ax = *(bx + di + 8);
    if(*(bx + si + 8) == 0) {
        ax = bp;
        ax = L00006212();
        *(bx + si) = *(bx + si) + al;
    }
    si = 0;
    dl = *(di + 0xc);
    *L00000024 = 0;
    dh :: 0;
    return;
    *(bx + di) & al;
    *(bx + si) = *(bx + si) + ax;
    *(bx + di + 0x245c) = *(bx + di + 0x245c) + cl;
L000053f0:
    (save)bp;
    asm("Unknown opcode 0xd2");
    if(!(al = (al | 0x8b) + 0x85)) {
        bx = *(si + 0x24);
        al = al | 0x39;
        (fsave)(frestore) / *(bp + 2);
        dx = bx;
        di = *(si + 0x24);
        al = al + 0x89;
        asm("ror word [bp+di+0x75],1");
        bx = *(si + 0x24);
        *L0000D88C = *L0000D88C | al;
        es = ax;
        (save)di;
        ax = cx;
        cx = cx >> 2;
        asm("repne movsw");
        cl = al & 3;
        asm("repne movsb");
        (restore)di;
        (restore)es;
        al = *(si + 0x24) | 0x8b;
        bp = bp - 1;
        *(di + 0x1734) = *(di + 0x1734) + cl;
        bx = bx + dx;
        *(si + 0x24) = si;
        al = al + 0x89;
        (restore)sp;
        al = al & 8;
        di = *(di + 4);
        cx = cx + dx;
        ax = ax - dx;
        di = di - dx;
        *di = cx;
        *(si + 0x24) = ax;
        if(al = al | 0x89) {
            goto L00005451;
        }
    }
    cx = *(si + 0x24);
L00005451:
    sp = bp;
    (restore)bp;
    if(!(al = al | 0x85)) {
        *(bx + si) = *(bx + si) + al;
        if(cx < *(di + 0x14)) {
            if(*(di + 0xd) & 4) {
                goto L000054d9;
            }
            *(bx + si) = *(bx + si) + al;
        }
        ax = *(di + 8);
        ax = *(bx + si + 8);
        *(di + 4) = 0;
        *(bx + si) = *(bx + si) + al;
        bx = *(si + 0x24);
        al = al | 0x8a;
        bp = bp - 1;
        ax = ax | 0x4589;
        dh = dh + dh;
        asm("rol word [si],0x75");
        ax = ax | 64385;
        *(bp + si) = *(bp + si) + al;
        if(!( *(bx + si) = *(bx + si) + al)) {
            ebx = 0 & 0xff;
        }
        dx = *(si + 0x24);
        al = al + 0x8b;
        bp = bp + 1;
        asm("adc al,ch");
        *di = *di - 1;
        *(bx + si) = *(bx + si) + al;
        if(ax == -1) {
            *(di + 0xc) = *(di + 0xc) | 0x20;
            goto L00005563;
            *(bx + si) = *(bx + si) + al;
        }
L000054ad:
        if(ax == 0) {
            *(di + 0xc) = *(di + 0xc) | 0x10;
            goto L00005563;
            *(bx + si) = *(bx + si) + al;
        }
        dx = *(si + 0x24);
        al = al + 0x8b;
        (restore)sp;
        al = al & 0xc;
        cx = *(si + 0x24);
        *(bx + di) = *(bx + di) | al;
        return;
        cx = cx + ax;
        *(si + 0x24) = dx;
        al = al + 0x89;
        (restore)sp;
        al = al & 0xc;
        *(si + 0x24) = cx;
        cl = cl | ch;
        (restore)ss;
        asm("Unknown opcode 0xff");
L000054d9:
        asm("Unknown opcode 0xff");
        *(bx + di + 0xe8e8) = *(bx + di + 0xe8e8) - 1;
        asm("scasw");
        (save)cs;
        *(bx + si) = *(bx + si) + al;
        if(ax != 0) {
            *(bx + si) = *(bx + si) + al;
            goto L000053f0;
            asm("Unknown opcode 0xff");
            *(bp + di + 0x2454) = *(bp + di + 0x2454) - 1;
            al = al + 1;
            asm("rol word [bp+di+0x47d],cl");
            *(di + 0xb) = *(di + 0xb) + dh;
            ax = bp;
            *(bx + si) = *(bx + si) + L0000638F();
            if(L0000638F() != 0) {
                cx = *(di + 4);
                ax = *di;
                cx = cx - 1;
                si = bx + si + 1;
                *(di + 4) = cx;
                *di = si;
                ax = *(bx + si) & 0xff;
                *(bx + si) = *(bx + si) + al;
                if(ax == 0xd) {
                    if(*(di + 4) == 0) {
                        ax = bp;
                        *(bx + si) = *(bx + si) + L0000638F();
                        if(L0000638F() == 0) {
                            goto L00005563;
                        }
                    }
                    di = *(di + 4);
                    ax = *di;
                    di = di - 1;
                    si = bx + si + 1;
                    *(di + 4) = di;
                    *di = si;
                    ax = *(bx + si) & 0xff;
                    *(bx + si) = *(bx + si) + al;
                }
                if(ax == 0x1a) {
                    goto L000054ad;
                }
                asm("Unknown opcode 0xff");
                *(bx + si + 0x8b02) = *(bx + si + 0x8b02) - 1;
                sp = sp + 1;
                ax = (al & 8) + 1;
                dx = dx + 1;
                *(si + 0x24) = ax;
                *(bx + di) = *(bx + di) | bh;
                (fsave)(frestore) / *(di - 0x6e);
            }
        }
    }
L00005563:
    ax = *(si + 0x24);
    *(bp + di + 0x2434) = *(bp + di + 0x2434) | cl;
    dx = 0;
L0000556c:
    dx = si / si % si / si;
    sp = sp + 0x10;
    (restore)bp;
    (restore)di;
}

/* DEST BLOCK NOT FOUND: 00005575 -> 00006443 */
stack space not deallocated on return
/*	Procedure: 0x00005573 - 0x00005577
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005573()
{



    (restore)si;
    return;
    goto L00006443;
}

stack space not deallocated on return
/*	Procedure: 0x00005578 - 0x000055A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005578()
{



    *(bx + si) = *(bx + si) + al;
    (save)bx;
    (save)dx;
    bx = ax;
    ax = *L00000CA0;
    for(*(bx + si) = *(bx + si) + al; ax != 0; ax = *(bx + si)) {
        if(bx == *(bx + si + 4)) {
            goto L00005598;
        }
    }
    ax = 65535;
    asm("Unknown opcode 0xff");
    return(*(bp + si + 0x5b)());
L00005598:
    dx = 1;
    *(bx + si) = *(bx + si) + al;
    ax = bx;
    L000055A5();
    *(bx + si) = *(bx + si) + al;
    (restore)dx;
}

stack space not deallocated on return
/*	Procedure: 0x000055A5 - 0x000055B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000055A5()
{



    (restore)bx;
    return;
    (save)bx;
    bx = ax;
    *(bx + si) = *(bx + si) + L00005670();
    dx = L00005670();
    ax = bx;
    L00006026();
    *(bx + si) = *(bx + si) + al;
    ax = dx;
}

/* DEST BLOCK NOT FOUND: 000055c2 -> 000055c7 */
stack space not deallocated on return
/*	Procedure: 0x000055BA - 0x000055C5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000055BA()
{



    (restore)bx;
    return;
    if(ax + 0x30 <= 0x39) {
        goto L000055c7;
    }
    ax = ax + 0x27;
}

/*	Procedure: 0x000055C6 - 0x0000566F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000055C6()
{



    asm("daa");
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    sp = sp - 4;
    bp = ax;
    *si = dx;
    al = al & 0xe8;
    eax = *esi;
    esi = esi + 4;
    (save)cs;
    *(bx + si) = *(bx + si) + al;
    bx = ax >> 0x10;
    di = bp;
    bx = bx | ax;
    *(bx + si) = *(bx + si) + L0000657E();
    si = L0000657E();
    (save)di;
L000055eb:
    if(*L00000788 != 0) {
        al = *(bp + 1);
        si = si + 2;
        *(bx + 1) = al;
        di = di + 2;
        if(al != 0) {
            goto L000055eb;
        }
    }
    (restore)di;
    (save)es;
    es = ds;
    ecx = -1 & 65535;
    ax = 0;
    asm("repne scasb");
    (restore)es;
    cx = !cx - 1 + bp;
    dx = bx + di + 4;
    *(bx + di) = 0x74;
    si = cx;
L0000561e:
    ax = bx & 0xf;
    L000055BA();
    asm("Unknown opcode 0xff");
    *(bx + si + 0x4a02) = *(bx + si + 0x4a02) - 1;
    bx = bx >> 4;
    if(dx != si) {
        goto L0000561e;
    }
    al = *si & 0xc1;
    asm("clc");
    al = al + 0x83;
    asm("loopne 0x564a");
    *(bx + di + 5) = 0x5f;
    L000055BA();
    asm("Unknown opcode 0xff");
    *(bx + si + 0x641) = *(bx + si + 0x641) - 1;
    al = *si & 0x83;
    asm("loopne 0x565c");
    ax = L000055BA();
    asm("Unknown opcode 0xff");
    si = si + 1;
    *L000041C6 = *L000041C6 | ch;
    *(si - 0x3a) = *(si - 0x3a) | si;
    cx = (cx + 1 + 1 | *(di - 0x3a)) + 1;
    si = si | *(bx + si - 0x3a);
    cx = cx + 1;
    *(bx + di + 7) = al;
    sp = sp + 4;
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 0000570b -> 0000566a */
stack space not deallocated on return
/*	Procedure: 0x00005670 - 0x0000570D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005670()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    sp = sp - 0xa0;
    *(bx + si) = *(bx + si) + al;
    cx = ax;
    bp = dx;
    if(*(bx + si + 0xc) == 0) {
        ax = 65535;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        goto L00005703;
        *(bx + si) = *(bx + si) + al;
    }
    ah = *(bx + si + 0xd);
    si = 0;
    if(!(ah & 0x10)) {
        ax = cx;
        *(bx + si) = *(bx + si) + L00006646();
        si = L00006646();
    }
    ax = cx;
    ax = L00006744();
    *(bx + si) = *(bx + si) + al;
    if(ax != -1) {
        dx = ax;
        di = *(bx + di + 0x10);
        bx = 0;
        ax = di;
        L00006787();
        *(bx + si) = *(bx + si) + al;
    }
    if(bp != 0) {
        ax = *(bx + di + 0x10);
        *(bx + si) = *(bx + si) + al;
        si = si | L000067EC();
    }
    if(!( *(bx + di + 0xc) & 8)) {
        ax = *(bx + di + 8);
        ax = *(bx + si + 8);
        L00006821();
        *(bx + si) = *(bx + si) + al;
        ax = *(bx + di + 8);
        *(bx + si + 8) = 0;
        *(bx + si) = *(bx + si) + al;
    }
    if(!( *(bx + di + 0xd) & 8)) {
        ax = *(bx + di + 8);
        edx = *(bx + si + 0x14) & 0xff;
        ax = sp;
        L000055C6();
        asm("Unknown opcode 0xff");
        *(bx + di + 0xe8e0) = *(bx + di + 0xe8e0) - 1;
        asm("sbb dx,[bp+si]");
        *(bx + si) = *(bx + si) + al;
    }
L00005703:
    ax = si;
    sp = sp + 0xa0;
    *(bx + si) = *(bx + si) + al;
    goto L0000566a;
}

/*	Procedure: 0x0000570E - 0x0000572A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000570E()
{



    asm("Unknown opcode 0xff");
    *(bx + si - 0x65)();
    asm("fnstcw [si]");
    (save) *si;
    al = al & 0x9b & 0xc6;
    sp = sp + 1;
    al = al & 1;
    (restore)ds;
    asm("fldcw [si]");
    al = al & 0xd9;
    asm("cld");
    asm("fldcw [si+0x24]");
    al = al + 0x9b;
    sp = si + 0x24;
}

/*	Procedure: 0x0000572B - 0x0000590A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000572B()
{



    bl = bl | al;
    (save)si;
    (save)di;
    (save)bp;
    sp = sp - 0xc;
    (save)ax;
    (save)dx;
    di = bx;
    bp = cx;
    if(!( *(bx + di + 0xc) & 2)) {
        *(bx + si) = *(bx + si) + 4;
        L00005C72();
        *(bx + si) = *(bx + si) + al;
        *(bx + di + 0xc) = *(bx + di + 0xc) | 0x20;
        ax = 0;
        goto L00005904;
        *(bx + si) = *(bx + si) + al;
    }
    dx = dx * di;
    if(di == 0) {
        ax = di;
        goto L00005904;
        *(bx + si) = *(bx + si) + al;
    }
    ax = *(bx + di + 8);
    if(*(bx + si + 8) == 0) {
        ax = cx;
        L00006212();
        *(bx + si) = *(bx + si) + al;
    }
    ax = *(di + 0xc);
    dl = *(di + 0xc);
    cx = 0;
    ax = ax & 0x30;
    dl = dl & 0xcf;
    *(si + 0x24) = 0;
    al = al | 0x89;
    sp = sp + 1;
    al = al & 8;
    *(di + 0xc) = dl;
    if(!(dl & 0x40)) {
        *(bx + si) = *(bx + si) + al;
        *(si + 0x24) = di;
L00005796:
        asm("adc [bp+di+0x47d],al");
        *(di + 0x42) = *(di + 0x42) + dh;
        ax = *(si + 0x24);
        asm("adc [bp+di],bh");
        bp = bp + 1;
        asm("adc al,0x72");
        *(bx + di + 0x30c3) :: cx;
        return;
        bh = bh & 0xfe;
        if(bx == 0) {
            bx = ax;
        }
        dx = *(si + 0x24);
        al = al + 0x8b;
        bp = bp + 1;
        asm("adc al,ch");
        asm("arpl [bx+di],dx");
        *(bx + si) = *(bx + si) + al;
        dx = ax;
        if(ax != -1) {
            if(ax != 0) {
                goto L0000583e;
            }
            *(bx + si) = *(bx + si) + al;
            ax = L00006995();
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = 0xc;
            *(bx + si) = *(bx + si) + al;
        }
        goto L00005840;
        dx = *(di + 0x14);
        si = *(di + 4);
        di = *(si + 0x24);
        asm("adc [bx+di],ch");
        asm("repne cmp dx,di");
        if(!( *(di + 0xc) = *(di + 0xc) | 0x20)) {
            dx = di;
        }
        si = *(si + 0x24);
        al = al + 0x89;
        asm("ror word [bp+di+0x7d],1");
        (save)es;
        es = ds;
        (save)di;
        ax = cx;
        cx = cx >> 2;
        asm("repne movsw");
        cl = al & 3;
        asm("repne movsb");
        (restore)di;
        (restore)es;
        bx = *(di + 4);
        ax = *di;
        bx = bx + dx;
        cx = *(di + 0x14);
        *(di + 4) = bx;
        ax = ax + dx;
        *di = ax;
        bh = *(di + 0xd) | 0x10;
        ax = *(di + 4);
        *(di + 0xd) = bh;
        if(ax == cx || !(bh & 4)) {
            ax = bp;
            ax = L00006646();
L0000583e:
            *(bx + si) = *(bx + si) + al;
        }
L00005840:
        si = *(si + 0x24);
        if(!(al = al + 0x8b)) {
            al = al | 0x8b;
            sp = sp + 1;
            al = al & 0x10;
            si = si + dx;
            di = di + dx;
            *(si + 0x24) = si;
            if(al = al + 0x89) {
                goto L0000587b;
            }
            al = al | 0x29;
            asm("ror byte [bx+di+0x2444],1");
            asm("adc [bx],cl");
            *bx & bh;
            *(bx + si) = *(bx + si) + al;
            if(*(di + 0xc) & 0x20) {
                goto L00005796;
            }
        }
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    } else {
        *(bx + si) = *(bx + si) + al;
        bl = *(di + 0xd);
        if(!(bl & 4)) {
L0000587b:
            bh = bl & 0xfa;
            *(di + 0xd) = bh;
            al = bh | 1;
            cx = 1;
            *(bx + si) = *(bx + si) + al;
            *(di + 0xd) = al;
        }
        ax = *(di + 8);
        bx = *(si + 0x24);
        if(!(al = al + 0x8b)) {
            *(bx + si + 0xc) = 1;
            *(bx + si) = *(bx + si) + al;
L000058a0:
            dx = bp;
            eax = *(bp + di) & 0xff;
        }
        L000069A1();
        *(bx + si) = *(bx + si) + al;
        dl = *(di + 0xc);
        bx = bx + 1;
        if(!(dl & 0x30)) {
            *(si + 0x24) = *(si + 0x24) | 0x40;
            asm("Unknown opcode 0xc7");
            if(al = *(si + 0x24) | 0x39) {
                goto L000058a0;
            }
        }
        ax = *(di + 8);
        *(bx + si + 0xc) = si;
        if(cx == 0) {
            goto L000058e3;
        }
        dh = *(di + 0xd) & 0xfa;
        *(di + 0xd) = dh;
        bl = dh | 4;
        ax = bp;
        *(di + 0xd) = bl;
        L00006646();
    }
    *(bx + si) = *(bx + si) + al;
L000058e3:
    if(!( *(di + 0xc) & 0x20)) {
        *(si + 0x24) = 0;
        al = al | 0x8b;
    }
    sp = sp + 1;
    al = al & 8;
    si = *si;
    al = al & 0x8b;
    bp = bp - 1;
    al = al | 0x31;
    asm("ror byte [bx+di],cl");
    asm("ror word [bp+di+0x2444],0xc");
    *(di + 0xc) = cx;
L00005904:
    dx = si / si % si / si;
    sp = sp + 0x14;
    (restore)bp;
    (restore)di;
}

/* DEST BLOCK NOT FOUND: 0000591d -> 00005928 */
stack space not deallocated on return
/*	Procedure: 0x0000590B - 0x00005927
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000590B()
{



    (restore)si;
    return;
    (save)dx;
    ax = *L000001C4;
    *(bx + si) = *(bx + si) + al;
    *di = 0;
    asm("les ax,[bx+di]");
    *(bx + si) = *(bx + si) + al;
    if(ax != 0) {
        goto L00005928;
    }
    ah = 8;
    asm("int 0x21");
    *(bx + si) = *(bx + si) + (ax & 0xff);
}

/* DEST BLOCK NOT FOUND: 0000592c -> 00006821 */
stack space not deallocated on return
/*	Procedure: 0x00005928 - 0x00005BC2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005928()
{



    (restore)dx;
    return;
    if(ax != 0) {
        goto L00006821;
    }
    *(bx + si) = *(bx + si) + al;
    return;
    if(!(bl = bl + ch)) {
        cx = cx + 1;
        (save)sp;
        bx = bx + 1;
        di = di - 1;
        bp = bp - 1;
        *(bp + di + 0x2f) = *(bp + di + 0x2f) & al;
        bx = bx + 1;
        bp = bp - *(bp + di);
        si = si ^ *(bp + si);
        *(bp + si + 0x75) = *(bp + si + 0x75) & dl;
        asm("outsb");
        ax = ax - 0x6954;
        asm("insw");
        if(*%gs:bp+di+0x79] = *%gs:bp+di+0x79] & dh) {
            goto L000059c6;
        }
        asm("%g insw");
        *%cs:bx+si] = *%cs:bx+si] & ch;
        asm("arpl [bx+di],bp");
        if(*(bp + di + 0x6f) = *(bp + di + 0x6f) & al) {
            goto L000059d7;
        }
        < ? L000059c9 : ;
        asm("a32 push word 0x2074");
        asm("bound di,[bx+di+0x20]");
        (save)di;
        cx = cx + 1;
        (save)sp;
        bx = bx + 1;
        di = di - 1;
        bp = bp - 1;
        if(*(bx + di + 0x6e) = *(bx + di + 0x6e) & cl) {
            goto L000059d7;
        }
        < ? L000059e2 : ;
        asm("popa");
        == ? L000059e0 : ;
        asm("outsw");
        asm("outsb");
        asm("popa");
        asm("insb");
        if(*(bp + di + 0x6f) = *(bp + di + 0x6f) & al) {
            goto L000059f0;
        }
        *%cs:bx+di] = *%cs:bx+di] & dh;
        *(bx + si) :: di;
        *di :: ch;
        *(bx + di) = *(bx + di) ^ di;
        *di :: si;
        *%cs:bx+di+0x6c] = *%cs:bx+di+0x6c] & al;
    }
    asm("insb");
    *(bp + si + 0x69) = *(bp + si + 0x69) & dh;
    asm("a32 push word 0x7374");
    if(!( *(bp + si + 0x65) = *(bp + si + 0x65) & dh)) {
        < ? L00005a14 : ;
        *(bx + si) = *(bx + si) + %cs:bx+si+0x0] + *(bx + si);
        asm("arpl [bx+0x6e],bp");
        bl = bl + bh;
        sp = sp & -4;
        bx = sp;
        *di = bx;
        *(bx + di + 0xa41d) = *(bx + di + 0xa41d) + cl;
        *(bx + si) = *(bx + si) + 1;
        *(bp - 0x48) = *(bp - 0x48) + 1;
        al = 0;
        *L000001B0 = 0;
L000059c6:
        *(bx + si) = *(bx + si) + al;
        bx = 0x4152;
        (save)ax - 1;
        eax = 0x30 & 0xff;
        asm("int 0x21");
        *L000001DB = al;
        *(bx + si) = *(bx + si) + al;
L000059d7:
        *di = ah;
        (fsave)(frestore) + *(bx + di);
        *(bx + si) = *(bx + si) + al;
        cx = ax;
        si = 0;
        di = 0x81;
        *(bx + si) = *(bx + si) + al;
        ax >> 0x10 :: 1047872600;
L000059f0:
        al = bl - 0x30;
        (save)0;
        es = *di;
        eax = 1 & 0xff;
        *(bx + si) = *(bx + si) + al;
        bx = *%es:di];
    }
    (restore)sp;
    *(bx + si) = *(bx + si) + al;
    *(bx + di + 65475) = *(bx + di + 65475) + al;
    asm("sldt [bx+si]");
    bx = bx & 0xf000;
    asm("Unknown opcode 0xff");
    *(bx + di + 0xa41d) = *(bx + di + 0xa41d) - 1;
    *(bx + si) = *(bx + si) + ax;
    cl = cl + al;
    goto L00005a27;
    es = ds;
    ah = 0x4a;
    asm("int 0x21");
    (restore)ax;
    ebx = ds;
L00005a27:
    eax :: 880099907;
    *di = dx;
    *(bx + si) = *(bx + si) + ax;
    (save)si;
    asm("sbb al,0x89");
    if(!( *(bx + di + 0x8bd6) = *(bx + di + 0x8bd6) + 954925100)) {
        asm("Unknown opcode 0xd3");
        ah = 0x4a;
        asm("int 0x21");
        ebx = ds;
        *di = ds;
        *(bx + si) = *(bx + si) + 1;
        di = di + *(bp + 0x10);
        si = 0;
        si = *(bx + 0x2c) << 4;
        ecx = ds;
        al = 9;
        ah = 0;
        goto L00005ac1;
        edx = -1201274760;
    }
    bh = bh + bh;
    asm("int 0x21");
    if(al != 0) {
        eax = gs;
        if(eax != 0) {
            *L00000194 = eax;
            *(bx + si) = *(bx + si) + al;
        }
        eax = -1939472378;
        asm("fcmovne st5");
        *(bx + si + 0xb401) = *(bx + si + 0xb401) ^ si;
        *(bp + 9) = *(bp + 9) + ah;
        asm("retf 0x274");
        ah = 1;
        *di = es;
        al = 1;
        *(bx + si) = *(bx + si) + 1;
        ecx = *%es:di];
        *(bx + si) = *(bx + si) + 1;
    } else {
        edx = ds;
        ecx = -645005276;
        ecx = -628228052;
        ebx = 11534359;
        ah = 0;
    }
L00005ac1:
    *L000001D2 = al;
    *(bx + si) = *(bx + si) + al;
    *di = ah;
    asm("rol word [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    es = bx;
    *%es:di] = ds;
    0 = *(bx + si) * dx;
    *di = si;
    asm("aad 0x1");
    *(bx + si) = *(bx + si) + al;
    *di = ecx;
    (fsave) *(bx + di);
    *(bx + si) = *(bx + si) + al;
    (save)si;
    es = *di;
    al = 1;
    *(bx + si) = *(bx + si) + 1;
    asm("%d mov dx,0x129c");
    *(bx + si) = *(bx + si) + al;
    dl = dx + 0xf & 0xf0;
    ecx = *%es:bx-0x1] & 0xff;
    asm("cld");
    al = 0x20;
    asm("repe scasb");
    di = dx;
    ebx = es;
    edx = ds;
    ds = bx;
    es = dx;
    if(!(si = bx - 1)) {
        cx = cx + 1;
        asm("rep movsb");
    }
    *di = 0;
    di = di + 1;
    *di = 0;
    di = di + 1;
    (restore)si;
    di = di - 1;
    (save)di;
    (save)dx;
    ds = *%es:di];
    (fsave) *(bx + di);
    0;
    bp = 0;
    *(bx + si) = *(bx + si) & *L0000200D & 65535;
    *di = *di & bh;
    asm("outsb");
    asm("outsw");
    if(*bx == dh && *(bp + 4) == 0x3d) {
        bp = bp + 1;
    }
    *L0000AC00 :: 0x75;
    asm("cli");
    *L00007500 :: 0xe0;
    al = *esi;
    si = esi + 1 + 1 + 1;
    *L0000A400 :: 0x75;
    asm("cli");
    (restore)ds;
    (restore)si;
    bx = sp;
    *di = ebp;
    asm("rol byte [bx+di],1");
    *(bx + si) = *(bx + si) + al;
    *di = di;
    *(bx + si) = *(bx + si) + 1;
    *di = bx;
    al = *L00000001;
    *L00009CB9 = *L00009CB9 + bh;
    asm("adc al,[bx+si]");
    *L0000A0BF = *L0000A0BF + bh;
    ax = ax | *(bx + si);
    *(bx + di) = *(bx + di) + ch;
    asm("stc");
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + al)) {
        cx :: 0x1000;
        if(!( *(bx + si) = *(bx + si) + al)) {
            cx = 0x1000;
            *(bx + si) = *(bx + si) + al;
        }
    }
    dl = cl;
    cx = cx >> 2;
    ax = 0;
    asm("rep stosw");
    cl = dl & 3;
    asm("rep stosb");
    asm("%d mov ax,0x129c");
    *(bx + si) = *(bx + si) + al;
    al = ax + 0xf & 0xf0;
    *L000001A8 = ax;
    *(bx + si) = *(bx + si) + *L000001A8;
    *di = si;
    al = *esi;
    esi = esi + 1;
    *(bx + si) = *(bx + si) + ax;
    *(bx + si + 0xff) = *(bx + si + 0xff) + bh;
    *(bx + si) = *(bx + si) + al;
    L00006ACD();
    *(bx + si) = *(bx + si) + al;
    bp = 0;
    L00006A64();
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x00005BC3 - 0x00005BFD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005BC3()
{



    goto L00005be8;
    (save)dx;
    (save)ax;
    dx = 0xe08;
    *(bx + si) = *(bx + si) + al;
    ebx = 567098625;
    (restore)dx;
    si = dx;
    asm("cld");
L00005bd9:
    al = *esi;
    esi = esi + 1;
    if(al != 0) {
        goto L00005bd9;
    }
    cx = si - dx - 1;
    ah = 0x40;
    asm("int 0x21");
    (restore)ax;
L00005be8:
    (save)ax;
    0;
    dx = 0xf;
    0;
    L00006B19();
    *(bx + si) = *(bx + si) + al;
    (restore)ax;
    ah = 0x4c;
    asm("int 0x21");
    ax = bx + si;
}

/* DEST BLOCK NOT FOUND: 00005c39 -> 00007893 */
/* DEST BLOCK NOT FOUND: 00005c46 -> 00005bc3 */
stack space not deallocated on return
/*	Procedure: 0x00005BFE - 0x00005C48
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005BFE()
{



    *(bp + 0x2e) = *(bp + 0x2e) + ax + 1;
    ds = *di;
    0 = *(bx + si) * dx;
    return(ax + 1);
    *(bx + si) = *(bx + si) + al;
    *di = 0x49c;
    *(bx + si) = *(bx + si) + al;
    asm("stc");
    (restore)ds;
    *(bx + si) = *(bx + si) + al;
    *di = 0x4a0;
    *(bx + si) = *(bx + si) + al;
    (restore)es;
    *(bx + si) = *(bx + si) & al;
    bh = bh + al;
    ax = ax + 0x4a4;
    *(bx + si) = *(bx + si) + al;
    bl = 0x21;
    *(0x21 + si) = *(0x21 + si) + al;
    *di = 0x4a8;
    *(bx + si) = *(bx + si) + al;
    (save)0x2b;
    *(bx + si) = *(bx + si) + al;
    return;
    goto L0000770e;
    *(bx + si) = *(bx + si) + al;
    goto L00007893;
    *(bx + si) = *(bx + si) + al;
    *di = *di | 0xb8;
    *(bp + si) = *(bp + si) + al;
    return;
    goto L00005BC3;
}

/*	Procedure: 0x00005C49 - 0x00005C71
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005C49()
{



    asm("Unknown opcode 0xff");
    bx = *(bp + di + 0x51)();
    cx = dx;
    dx = ds;
    ax = L000079F1();
    *(bx + si) = *(bx + si) + al;
    if(ax == 0) {
        dx = cx;
        ax = bx;
        L00005BC3();
        asm("Unknown opcode 0xff");
        ax = *(bx + di + 0x5b)();
    }
    return;
    return;
    *di = 0x1e4;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x00005C72 - 0x00005C84
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005C72()
{



    bl = bl + al;
    dx = ax;
    ax = L00006995(dx);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = dx;
    (restore)dx;
    return;
    *(bx + si) = *(bx + si) + 0xd;
}

/* DEST BLOCK NOT FOUND: 00005c85 -> 00005c74 */
/* DEST BLOCK NOT FOUND: 00005c8c -> 00005c74 */
/*	Procedure: 0x00005C85 - 0x00005C9B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005C85()
{



    goto L00005c74;
    *(bx + si) = *(bx + si) + 0xe;
    goto L00005c74;
    *(bx + si) = *(bx + si) + 9;
    L00005C72();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    ax = 65535;
    asm("Unknown opcode 0xff");
}

/*	Procedure: 0x00005C9C - 0x00005CA7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005C9C()
{



    bx = bx + 1;
    (save)dx;
    dx = ax;
    L0000699B();
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = dx;
}

stack space not deallocated on return
/*	Procedure: 0x00005CA8 - 0x00005CD9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005CA8()
{



    (restore)dx;
    return;
    if(ax >= 0x41 && ax <= 0x5a) {
        ax = ax + 0x20;
    }
    return;
    (save)bx;
    (save)dx;
    ax = si + 0x24;
    asm("adc al,0x83");
    asm("rol byte [si],0x8b");
    ax = ax + 1;
    asm("cld");
    (save)ax;
    (save)0;
    dx = *(si + 0x24);
    asm("sbb [bp+si-0x75],dl");
    (restore)sp;
    al = al & 0x18;
    (save)bx;
    L00005CDA();
    *(bx + si) = *(bx + si) + al;
    sp = sp + 0x10;
    (restore)dx;
}

stack space not deallocated on return
/*	Procedure: 0x00005CDA - 0x00005F7C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005CDA()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    sp = sp - 4;
    ax = si + 0x24;
    *(bx + di + 0x8be1) = *(bx + di + 0x8be1) & cl;
    (restore)sp;
    al = al & 0x1c;
    dx = *(si + 0x24);
    asm("sbb [bx+di+0x2404],cl");
    ax = *(si + 0x24);
    asm("adc al,0xe8");
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *(bp + di + 0x4c4) = *(bp + di + 0x4c4) + al;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    (save)si;
    (save)di;
    (save)bp;
    sp = sp - 0x14;
    si = ax;
    *si = dx;
    al = al & 0x89;
    (restore)sp;
    al = al & 4;
    bp = cx;
L00005d14:
    *L00007520 :: 3;
    si = si + 1;
    goto L00005d14;
    *(bx + di + 0x2444) = *(bx + di + 0x2444) + cl;
    (save)sp;
    al = ( *si & 0x25 | 0x8a) & 4;
    al = *(si + 0x24) | 8;
    asm("ror byte [bx+di+0xbff2],1");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    (save) *(si + 0xcd3d);
    cx = cx & dx;
    asm("rcl cl,1");
    asm("enter 0x4489,0x24");
    *(di + 0x7cc0) = *(di + 0x7cc0) | al;
    asm("das");
    di = 0;
    dx = *L00000000;
    *L00000000 = al;
    *(bx + si) = *(bx + si) + al;
    edi = *(si + 0x24);
    asm("xlatb");
L00005d58:
    if(!( *(bx + di) = *(bx + di) | bh)) {
        bx = di;
        ah = 0x3e;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        *(bx + si) = *(bx + si) + 0xb;
L00005d69:
        L00005C72();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        ax = 65535;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        goto L00005f11;
        *(bx + si) = *(bx + si) + al;
    }
    dh = *si;
    al = al & 0xf6;
    *(bp + di) = 0xf;
    *bp & ah;
    *(bx + si) = *(bx + si) + al;
    if(di != -1) {
        ax = di;
        ax = L00007B88();
        *(bx + si) = *(bx + si) + al;
        if(ax == 0) {
            *(si + 0x24) & 1;
            al = al + 0x74;
            (save)ss;
            if(!(dh & 0x20)) {
                bx = di;
                ah = 0x3e;
                asm("int 0x21");
                asm("rcl ax,1");
                asm("ror ax,1");
                *(bx + si) = *(bx + si) + 7;
                goto L00005d69;
            }
            *si & 0x24;
            if(!(ax = ax + 1)) {
                dx = si + 0x24;
                asm("adc [bx+di+0x31fb],cl");
                (restore)bp;
                ah = 0x40;
                asm("int 0x21");
                asm("rcl ax,1");
                asm("ror ax,1");
                *(si + 0x24) = ax;
                *(di + 0x7dc0) = *(di + 0x7dc0) | al;
                asm("sbb cx,[bx+di+0xb4fb]");
                asm("%d int 0x21");
                asm("rcl ax,1");
                asm("ror ax,1");
                ax = 0;
                al = *(si + 0x24) | ch;
                asm("into");
                asm("sbb ax,0x0");
                goto L00005f11;
                *(bx + si) = *(bx + si) + al;
            }
        }
    }
    if(di == -1) {
        *(bx + si) = *(bx + si) + al;
        *si & 0x24;
        *(si - 0x20) = *(si - 0x20) & dh;
        *(si + 0x24) :: 8;
        dh = dh + *(di - 0x28);
        bx = *di + 4;
        *di = bx;
        ax = *(bp + di - 4);
        *di = 0;
        *(bx + si) = *(bx + si) + al;
        if(ax == 0) {
            ax = 0x180;
            *(bx + si) = *(bx + si) + 0x180;
        }
        dx = *di;
        asm("hlt");
        ax = ax & !dx;
        cx = 0;
        if(!(al & 0x80)) {
            ecx = 1 & 65535;
            *(bx + si) = *(bx + si) + al;
        }
        cx = cx & 0xff;
        *(bx + si) = *(bx + si) + al;
        dx = si;
        ah = 0x3c;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        *(si + 0x24) = ax;
L00005e45:
        *(di + 0x7cc0) = *(di + 0x7cc0) | al;
        asm("Unknown opcode 0x8f");
        di = 0;
        cx = *L00000000;
        *L00000000 = al;
        *(bx + si) = *(bx + si) + al;
        edi = *(si + 0x24);
        asm("iret");
        if(*(bx + di) = *(bx + di) | bh) {
            goto L00005d58;
        }
        asm("Unknown opcode 0xff");
        if(*(bp + di + 0x247c) = *(bp + di + 0x247c) + 1) {
            goto L00005ea3;
        }
        bx = di;
        ah = 0x3e;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        *(si + 0x24) = ax;
        *(di + 0xfc0) = *(di + 0xfc0) | al;
        *(di - 1) = ds;
        asm("Unknown opcode 0xff");
        *(bp + si + 0x2444) = *(bp + si + 0x2444) - 1;
        al = al | 0x8a;
        asm("%f and al,0x4");
        dx = si;
        al = al | ah;
        ah = 0x3d;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        *(si + 0x24) = ax;
        *(di + 0xfc0) = *(di + 0xfc0) | al;
        asm("Unknown opcode 0x8c");
        (save) *(bx + di);
        goto ( *(bp - 0x75));
        if(ax < 65535) {
            goto L00005ec6;
        }
    }
    *(bx + di + 0xe8f8) = *(bx + di + 0xe8f8) | cl;
L00005ea3:
    (save)0x1c;
    *(bx + si) = *(bx + si) + al;
    dx = al & 0x3c;
    ax = di;
    L00007B88();
    *(bx + si) = *(bx + si) + al;
    if(ax != 0) {
        dh = dh | 0x20;
    }
    if(*(si + 0x24) = *(si + 0x24) & 0xc) {
        goto L00005e45;
    }
    < ? L00005ee8 : ;
L00005ec6:
    if(!(al = al | 2)) {
        dl = dl | 3;
    }
    *(si + 0x24) :: 0xc;
    *(di + 3) = *(di + 3) + dh;
    *(si + 0x24) :: 0xc;
    *(di + 3) = *(di + 3) + si;
    dl = dl | 1 | 2;
    *si & 0x24;
    asm("adc [si+0x3],dh");
    dl = dl | 0x80;
    ax = dx;
    *si = *si + *(si + 0x24);
    ax = ax + 1;
    if(!(cl & 3)) {
        if(cl & 2) {
            goto L00005f0a;
        }
    } else {
        *di :: "-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
        *(bx + si) = *(bx + si) + al;
        *(bp + si) = *(bp + si) + al;
        if(*(bx + si) = *(bx + si) + al) {
            goto L00005f0a;
        }
    }
    dx = ax;
L00005f0a:
    ax = di;
    L00007B67();
    *(bx + si) = *(bx + si) + al;
L00005f11:
    ax = di;
    sp = sp + 0x14;
    (restore)bp;
    (restore)di;
    (restore)si;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    sp = sp - 4;
    si = ax;
    ax = L00007B12();
    *(bx + si) = *(bx + si) + al;
    al = al | 0x40;
    bx = ax;
    dx = ax;
    ax = si;
    L00007B67();
    *(bx + si) = *(bx + si) + al;
    if(!(bh & 0x20)) {
        bx = si;
        eax = 0x44 & 0xff;
        asm("int 0x21");
        asm("rcl dx,1");
        asm("ror dx,1");
        *si = dx;
        al = al & 0x85;
        *(di + 0xd) = *(di + 0xd) >> cl;
        ax = 0;
        al = *si & 0xe8;
        (restore)bx;
        asm("sbb al,0x0");
        bl = bl + ch;
        asm("sbb ax,0x148a");
        al = al & 0x89;
        asm("rep or dl,0x20");
        dh = 0;
        al = 1;
        ah = 0x44;
        asm("int 0x21");
        asm("rcl dx,1");
        asm("ror dx,1");
        *si = dx;
        al = al & 0x85;
        *(si - 0x28) = *(si - 0x28) >> cl;
    }
    ax = 0;
    sp = sp + 4;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00005F7D - 0x00006025
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00005F7D()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    si = *di;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *(di + 0x74f6) = *(di + 0x74f6) + al;
    asm("sbb [bp+di+0x44e],cx");
    di = *(bx + di + 0xc);
    *(bp + di + 0xca4) = *(bp + di + 0xca4) + *L0000E781 + *(bx + si);
    *(bx + si) = *(bx + si) + al;
    edi = edi | 3;
    goto L00005fee;
    cx = 0x1e8;
    *(bx + si) = *(bx + si) + al;
    goto L00005fce;
L00005fae:
    if(!( *(bx + di + 0xc) & 3)) {
        *(bx + si) = *(bx + si) + 0x15;
        ax = L00007C15();
        *(bx + si) = *(bx + si) + al;
        si = ax;
        if(ax == 0) {
            goto L00006016;
        }
        di = 3;
        *(bx + si) = *(bx + si) + al;
    } else {
        cx = cx + 0x1a;
L00005fce:
        cx :: "8-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
        if(*(bx + si) = *(bx + si) + al) {
            goto L00005fae;
        }
        *(bx + si) = *(bx + si) + 0x2f;
        di = 0x4003;
        *(bx + si) = *(bx + si) + 0x2f;
        ax = L00007C15();
        *(bx + si) = *(bx + si) + al;
        si = ax;
        if(ax == 0) {
            goto L00006016;
        }
        cx = bx + si + 0x15;
    }
L00005fee:
    bx = 0x1a;
    *(0x1a + si) = *(0x1a + si) + al;
    ax = cx;
    dx = 0;
    L00007CF6();
    *(bx + si) = *(bx + si) + al;
    *(bx + di + 0xc) = di;
    *(bp + 4) = cx;
    *(bx + si) = *(bx + si) + *L00000CA0;
    *(bx + di + 8) = si;
    *di = si;
    al = *L0000000C;
    *(bx + di + 0x8906) = *(bx + di + 0x8906) + cl;
    asm("enter 0xceb,0xb8");
L00006016:
    al = al + ch;
    (save)sp;
    asm("cld");
    asm("Unknown opcode 0xff");
    (save) *(bx + di);
    asm("rcr byte [bx+0x5e],0x5a");
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006026 - 0x0000607C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006026()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    bx = ax;
    dx = 0xca0;
    *(bx + si) = *(bx + si) + al;
L00006032:
    ax = *(bp + si);
    if(ax != 0) {
        if(bx != *(bx + si + 4)) {
            dx = ax;
            goto L00006032;
        }
        *(bp + di + 0xc) = *(bx + di + 0xc) | 3;
        bx = *(bx + si);
        *(bp + si) = bx;
        dx = *di;
        *di = *si;
        di = di + 1;
        si = si + 1;
        *(bp + di + 0xca4) = *(bp + di + 0xca4) + ah;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = dx;
    }
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    (save)dx;
    dx = *di;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *(di + 0x74d2) = *(di + 0x74d2) + al;
    asm("adc [bx+di+0x8bd0],cx");
    asm("adc ch,al");
    asm("scasb");
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *di = dx;
    *di = *si;
    di = di + 1;
    si = si + 1;
    bl = bl + ch;
    asm("in ax,0x5a");
}

stack space not deallocated on return
/*	Procedure: 0x0000607D - 0x000060BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000607D()
{



    (restore)dx;
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    if(ax <= *(bp + si + 4)) {
        bx = *(bp + si + 8);
        cx = *(bp + si);
        bx = *(bp + di + 8) - cx;
        if(ax >= bx) {
            bl = *(bp + si + 0xc);
            si = *(bp + si);
            di = *(bp + si + 4);
            bl = bl & 0xef;
            si = si + ax;
            *(bp + si + 0xc) = bl;
            di = di - ax;
            *(bp + si) = si;
            *(bp + si + 4) = di;
            (restore)di;
            (restore)si;
            (restore)cx;
            (restore)bx;
            return(0);
        }
    }
    *(bx + si) = *(bx + si) + 1;
    (restore)di;
    (restore)si;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x000060BC - 0x000060D1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000060BC()
{



    (restore)bx;
    return;
    (save)dx;
    *(bx + si + 0xc) = *(bx + si + 0xc) & 0xef;
    dx = *(bx + si + 8);
    *(bx + si + 4) = 0;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bp + si + 8);
}

stack space not deallocated on return
/*	Procedure: 0x000060D2 - 0x000061E0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000060D2()
{



    (restore)dx;
    return;
    (save)cx;
    (save)si;
    (save)di;
    cx = ax;
    si = dx;
    if(!( *(bx + si + 0xc) & 6)) {
        if(!( *(bx + di + 0xd) & 0x10)) {
            ax = cx;
            *(bx + si) = *(bx + si) + al;
            if(L00006646() == 0) {
                goto L00006124;
            }
            if(bx == 0 && si < 0) {
L000060fa:
                *(bx + si) = *(bx + si) + 9;
                L00005C72();
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
            }
            ax = 65535;
            asm("Unknown opcode 0xff");
            ax = *(bx + 0x5e)();
            (restore)cx;
            return;
        }
        if(bx == 1) {
            si = si - *(bx + di + 4);
        }
        ax = *(bx + di + 8);
        *(bx + di + 4) = 0;
        *(bx + si) = *(bx + si) + *(bx + si + 8);
        *(bx + di) = *(bx + si + 8);
L00006124:
        *(bx + di + 0xc) = *(bx + di + 0xc) & 0xeb;
        dx = si;
        ax = *(bx + di + 0x10);
        ax = L00006787();
        *(bx + si) = *(bx + si) + al;
        if(ax != -1) {
            goto L000061db;
        }
        *(bx + si) = *(bx + si) + al;
        (restore)di;
        (restore)si;
        (restore)cx;
        return;
    }
    if(bx >= 1) {
        <= ? L00006157 : ;
        if(bx == 2) {
            goto L000061b4;
        }
        *(bx + si) = *(bx + si) + al;
        goto L000060fa;
    }
    if(bx != 0) {
        goto L000060fa;
        dx = cx;
        ax = si;
        di = *(bx + di + 4);
        L0000607D();
        asm("Unknown opcode 0xff");
        *(di + 0xfc0) = *(di + 0xfc0) + 1;
        *(bp + si) & dh;
        *(bx + si) = *(bx + si) + al;
        dx = si;
        ax = *(bx + di + 0x10);
        dx = dx - di;
        *(bx + si) = *(bx + si) + L00006787();
        if(L00006787() == -1) {
            goto L000061df;
        }
L0000617c:
        ax = cx;
        L000060BC();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    } else {
        ax = *(bx + di + 0x10);
        *(bx + si) = *(bx + si) + L00007D0E();
        dx = *(bx + di + 4);
        di = si;
        di = di - L00007D0E() - dx;
        dx = cx;
        ax = di;
        ax = L0000607D();
        asm("Unknown opcode 0xff");
        *(di + 0x74c0) = *(di + 0x74c0) + 1;
        cl :: *(bx + di + 0x8bf2);
        cx = cx + 1;
        asm("adc al,ch");
        (fsave)(frestore) + *di;
        *(bx + si) = *(bx + si) + al;
        if(ax != -1) {
            goto L0000617c;
        }
        (restore)di;
        (restore)si;
L000061b4:
        (restore)cx;
        return;
        dl = *(bx + di + 0xc) & 0xef;
        ax = *(bx + di + 8);
        *(bx + di + 0xc) = dl;
        *(bx + di) = *(bx + si + 8);
        dx = si;
        *(bx + di + 4) = 0;
        *(bx + si) = *(bx + si) + *(bx + di + 0x10);
        *(bx + si) = *(bx + si) + L00006787();
L000061db:
        if(L00006787() == -1) {
            goto L000061df;
        }
    }
    ax = 0;
L000061df:
    (restore)di;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x000061E1 - 0x00006211
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000061E1()
{



    (restore)cx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    dx = ax;
    if(!( *(bx + si + 0xd) & 0x20)) {
        ax = *(bp + si + 0x10);
        *(bx + si) = *(bx + si) + L00007B88();
        if(L00007B88() != 0) {
            bl = *(bp + si + 0xd) | 0x20;
            *(bp + si + 0xd) = bl;
            if(!(bl & 7)) {
                *(bp + si + 0xd) = bl | 2;
            }
        }
    }
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006212 - 0x00006298
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006212()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    dx = ax;
    L000061E1();
    asm("Unknown opcode 0xff");
    *(bp + di + 0x147a) = *(bp + di + 0x147a) + 1;
    *(di + 0x26) = *(di + 0x26) + dh;
    ah = *(bp + si + 0xd);
    if(!(ah & 2)) {
        *(bp + si + 0x14) = 0x86;
        *(bx + si) = *(bx + si) + al;
    } else {
        if(!(ah & 4)) {
            *(bp + si + 0x14) = 1;
            *(bx + si) = *(bx + si) + al;
        } else {
            *(bp + si + 0x14) = 0x1000;
            *(bx + si) = *(bx + si) + al;
        }
    }
    ax = *(bp + si + 0x14);
    *(bx + si) = *(bx + si) + al;
    bx = *(bp + si + 8);
    *(bp + di + 8) = L00007C15();
    ax = *(bp + si + 8);
    if(*(bx + si + 8) == 0) {
        cl = *(bp + si + 0xd) & 0xf8;
        *(bp + si + 0xd) = cl;
        ch = *(bp + si + 0xd);
        ax = *(bp + si + 8);
        ch = ch | 4;
        bx = bp + si + 0x18;
        *(bp + si + 0xd) = ch;
        *(bx + si + 8) = bx;
        *(bp + si + 0x14) = 1;
        *(bx + si) = *(bx + si) + al;
    } else {
        *(bp + si + 0xc) = *(bp + si + 0xc) | 8;
    }
    ax = *(bp + si + 8);
    *(bp + si + 4) = 0;
    *(bx + si) = *(bx + si) + *(bx + si + 8);
    *(bp + si) = *(bx + si + 8);
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006299 - 0x0000635F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006299()
{



    (restore)bx;
    return;
    (save)cx;
    cx = bx;
    bx = ax;
    ah = 0x3f;
    asm("int 0x21");
    asm("rcl ax,1");
    asm("ror ax,1");
    dx = ax;
    if(ax < 0) {
        ax = 0;
        eax = edx;
        ax = L00007BB1();
        *(bx + si) = *(bx + si) + al;
    }
    (restore)cx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)bp;
    dx = ax;
    ax = *(bx + si + 8);
    bx = *(bx + si + 0xc);
    if(bx != 1) {
        if(bx != 0) {
            ax = 65535;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            goto L0000635a;
            *(bx + si) = *(bx + si) + al;
        }
        *(bx + si + 0xc) = 1;
        *(bx + si) = *(bx + si) + al;
    }
    if(!( *(bp + si + 0xc) & 1)) {
        *(bx + si) = *(bx + si) + 4;
        L00005C72();
        asm("Unknown opcode 0xff");
        *(bp + si + 0xc5a) = *(bp + si + 0xc5a) - 1;
        bl = bl | 0x20;
        ax = 65535;
        asm("Unknown opcode 0xff");
        *(bx + si + 0xc5a) = *(bx + si + 0xc5a) - 1;
    } else {
        si = *(bp + si + 4) - 1;
        *(bp + si + 4) = si;
        if(si < 0) {
            ax = dx;
            *(bx + si) = *(bx + si) + L00006360();
        } else {
            bx = *(bp + si);
            eax = *(bp + di) & 0xff;
            bx = bx + 1;
            *(bp + si) = bx;
        }
    }
    if(!( *(bp + si + 0xc) & 0x40)) {
        if(ax == 0xd) {
            bp = *(bp + si + 4) - 1;
            *(bp + si + 4) = bp;
            if(bp < 0) {
                ax = dx;
                *(bx + si) = *(bx + si) + L00006360();
            } else {
                bx = *(bp + si);
                al = *(bp + di);
                bx = bx + 1;
                *(bx + si) = *(bx + si) + (ax & 0xff);
                *(bp + si) = bx;
            }
        }
        if(ax == 0x1a) {
            cl = *(bp + si + 0xc) | 0x10;
            ax = 65535;
            asm("Unknown opcode 0xff");
            *(bx + si + 0xc4a) = *(bx + si + 0xc4a) - 1;
L0000635a:
        }
    }
    (restore)bp;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006360 - 0x0000638E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006360()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    dx = ax;
    *(bx + si) = *(bx + si) + L0000638F();
    if(ax == 0) {
        ax = 65535;
        asm("Unknown opcode 0xff");
        ax = *(bp + si + 0x59)();
        (restore)bx;
        return;
    }
    bx = *(bp + si + 4);
    cx = *(bp + si);
    bx = bx - 1;
    *(bp + si + 4) = bx;
    *(bp + si) = cx + 1;
    *(bx + si) = *(bx + si) + ( *(bx + di - 1) & 0xff);
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000638F - 0x0000657D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000638F()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    cx = ax;
    ax = *(bx + si + 8);
    if(*(bx + si + 8) == 0) {
        ax = cx;
        L00006212();
        asm("Unknown opcode 0xff");
        *(bp + si + 0xd61) = *(bp + si + 0xd61) - 1;
    }
    if(!(ah & 0x20) && !(ah & 6)) {
        *(bx + si) = *(bx + si) + 0x2000;
        L00007D24();
        *(bx + si) = *(bx + si) + al;
    }
    dh = *(bx + di + 0xc) & 0xfb;
    ax = *(bx + di + 8);
    *(bx + di + 0xc) = dh;
    *(bx + di) = *(bx + si + 8);
    *(bx + si) = *(bx + si) + al;
    ( *(bx + di + 0xc) & 0x2400) :: 0x2400;
    if(!( *(bx + si) = *(bx + si) + al)) {
        bx = *(bx + di + 0x10);
        if(bx != 0) {
            goto L00006401;
        }
        *(bx + di + 4) = bx;
        ax = L00007D53();
        *(bx + si) = *(bx + si) + al;
        dx = ax;
        if(ax == -1) {
            goto L0000641e;
        }
        *(bx + si) = dl;
        *(bx + di + 4) = 1;
        *(bx + si) = *(bx + si) + *(bx + di);
    } else {
L00006401:
        if(!( *(bx + di + 0xd) & 4)) {
            bx = 1;
            *(1 + si) = *(1 + si) + al;
        } else {
            bx = *(bx + di + 0x14);
        }
        dx = *(bx + di);
        ax = *(bx + di + 0x10);
        L00006299();
        asm("Unknown opcode 0xff");
        *(bx + di + "con") = *(bx + di + "con") - 1;
L0000641e:
        si = *(bx + di + 4);
        if(si <= 0) {
            != ? 0x642d : ;
            *(bx + di + 0xc) = *(bx + di + 0xc) | 0x10;
            goto L0000643d;
            *(bx + di + 4) = 0;
            *(bx + si) = *(bx + si) + al;
            *(bx + di + 0xc) = *(bx + di + 0xc) | 0x20;
        }
    }
L0000643d:
    ax = *(bx + di + 4);
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    dx = ax;
    if(ax != 0) {
L0000644e:
        ax = dx;
        ax = L00007C15();
        *(bx + si) = *(bx + si) + al;
        bx = ax;
        if(ax == 0) {
            cx = *di;
            asm("ror byte [si],1");
            *(bx + si) = *(bx + si) + al;
            if(cx != 0) {
                goto L00006479;
            }
L00006465:
            *(bx + si) = *(bx + si) + *L00000CCC;
            if(ax != 0) {
                goto L00006483;
            }
        }
        ax = bx;
        (restore)dx;
        (restore)cx;
        (restore)bx;
        return;
    }
    dx = bx + si + 1;
    goto L0000644e;
L00006479:
    ax = dx;
    if(*cx() != 0) {
        goto L0000644e;
    }
    goto L00006465;
L00006483:
    *ax();
    goto L0000644e;
    *(bx + si) = *(bx + si) + al;
    return(*L000001B0);
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)bp;
    sp = sp - 0x140;
    *(bx + si) = *(bx + si) + al;
    L00006995();
    *(bx + si) = *(bx + si) + al;
    si = *(bx + si);
    cx = 0;
    bp = 2;
L000064a4:
    *(bx + si) = *(bx + si) + al;
L000064a6:
    *(bx + si) = *(bx + si) + si + 0xa024;
    *(bx + di + 0xe8ca) = *(bx + di + 0xe8ca) + cl;
    asm("adc al,0xf1");
    asm("Unknown opcode 0xff");
    *(di + 0x2484) = *(di + 0x2484) - 1;
    al = *L00000000;
    *(bx + di + 0x41ea) = *(bx + di + 0x41ea) + cl;
    *(bx + si) = *(bx + si) + al;
    if(L00007D70() == 0) {
        goto L000064a6;
    }
    dx = 0x55;
    *(bx + si) = *(bx + si) + al;
    ax = si + 0xa024;
    *(bx + si) = *(bx + si) + al;
    al = al + ch;
    asm("stc");
    asm("in ax,dx");
    asm("Unknown opcode 0xff");
    *(di + 0x75c0) = *(di + 0x75c0) + 1;
    asm("sbb bp,ax");
    dh = 4;
    *(bx + si) = *(bx + si) + al;
    if(*(bx + si) != 0xb) {
        L00006995();
        *(bx + si) = *(bx + si) + al;
        if(*(bx + si) != 6) {
            goto L000064a6;
        }
    }
L000064f0:
    ax = 0;
    goto L00006504;
    *(bx + si) = *(bx + si) + al;
    bx = 0;
    ax = L00005578();
    asm("Unknown opcode 0xff");
    *(bp + si + 0xf01d) = *(bp + si + 0xf01d) - 1;
    ax = ax + *(bx + si);
    *(bx + di + 0x89e0) = *(bx + di + 0x89e0) + cl;
L00006504:
    asm("Unknown opcode 0xda");
    L000055C6();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x8de2) = *(bx + di + 0x8de2) - 1;
    *si & ah;
    al = *L00000000 + ch;
    asm("xchg ax,dx");
    asm("sbb [bx+si],al");
    *(di + 0x75c0) = *(di + 0x75c0) + al;
    al :: 0xba;
    (save)bp;
    *(bx + si) = *(bx + si) + al;
    *(bx + di + 0xe8e0) = *(bx + di + 0xe8e0) + cl;
    asm("cmpsb");
    asm("in ax,dx");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xc0");
    if(!( *(bx + di + 0x85c2) = *(bx + di + 0x85c2) - 1)) {
        *(bp + si + 0xd) = *(bx + si + 0xd) | 8;
        ax = *(bp + si + 8);
        *(bx + si + 0x14) = bl;
        ax = si;
        *di = bl;
        asm("lock add ax,[bx+si]");
        al = al + ch;
        asm("daa");
        di = di / di;
        dx = di % di;
        *(bx + di + 0xebd0) = *(bx + di + 0xebd0) - 1;
        bp = bp & ax;
    }
    cx = cx + 1;
    if(*(bp + di + 0xb38) = *(bp + di + 0xb38) + al) {
        goto L000064f0;
    }
    *(bx + si) = *(bx + si) + si + 0xa024;
    *(bx + di + 0x43ea) = *(bx + di + 0x43ea) + cl;
    *(bx + si) = *(bx + si) + al;
    if(L00007D70() != 0) {
        goto L000064a4;
    }
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    goto L00006504;
    sp = sp + 0x140;
    *(bx + si) = *(bx + si) + al;
    (restore)bp;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000657E - 0x00006645
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000657E()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    *di :: 0xc;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + al;
        bx = "All rights reserved.\r\n*** NULL assignment detected\r\n";
        *(bx + si) = *(bx + si) + al;
        goto L000065d2;
L00006599:
        ax = L00007DD9();
        *(bx + si) = *(bx + si) + al;
        dx = ax;
        if(ax != 0) {
            di = ax;
            (save)es;
            es = ds;
            ecx = -1 & 65535;
            ax = 0;
            asm("repne scasb");
            (restore)es;
            !cx - 1 :: 0x8f;
            if(*(bx + si) = *(bx + si) + al) {
                goto L000065cf;
            }
            bx = 0x8f;
            *(0x8f + si) = *(0x8f + si) + al;
            *(bx + si) = *(bx + si) + "\r\n*** NULL assignment detected\r\n";
            L00007E33();
            *(bx + si) = *(bx + si) + al;
        } else {
L000065cf:
            bx = bx + 4;
L000065d2:
            ax = *(bp + di);
            if(*(bx + si) != 0) {
                goto L00006599;
            }
        }
        *di :: 0xc;
        if(!( *(bx + si) = *(bx + si) + al)) {
            dx = 0;
            di = "\r\n*** NULL assignment detected\r\n";
            0;
            *(bx + si) = *(bx + si) + L00008102();
            si = L00008102();
            (save)di;
L000065f3:
            al = *L00000788;
            if(al != 0) {
                al = *(bp + 1);
                si = si + 2;
                *(bx + 1) = al;
                di = di + 2;
                if(al != 0) {
                    goto L000065f3;
                }
            }
            (restore)di;
        }
        di = "\r\n*** NULL assignment detected\r\n";
        *(bx + si) = *(bx + si) + al;
        (save)es;
        es = ds;
        ecx = -1 & 65535;
        ax = 0;
        asm("repne scasb");
        cx = !cx - 1;
        (restore)es;
        ax = bx + di - 1 + "\r\n*** NULL assignment detected\r\n";
        *(bx + si) = *(bx + si) + al;
        bl = *(bx + si);
        if(bl != 0x5c && bl != 0x2f) {
            *(bx + si) = 0x5c;
            ax = ax + 1 + 1;
            *(bx + si) = 0;
        }
    }
    *(bx + si) = *(bx + si) + "\r\n*** NULL assignment detected\r\n";
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006646 - 0x00006743
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006646()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)bp;
    cx = ax;
    ah = *(bx + si + 0xd);
    bp = 0;
    if(!(ah & 0x10)) {
        *(bx + si) = *(bx + si) + al;
        bh = *(bx + di + 0xd) & 0xef;
        al = *(bx + di + 0xc);
        *(bx + di + 0xd) = bh;
        if(al & 2) {
            goto L00006710;
        }
        *(bx + si) = *(bx + si) + al;
        di = *(bx + di + 8);
        bx = *(bx + 8);
        if(bx == 0) {
            goto L00006710;
        }
        *(bx + si) = *(bx + si) + al;
        di = bx;
        si = *(bx + di + 4);
L00006685:
        if(si == 0) {
            goto L00006710;
        }
        *(bx + si) = *(bx + si) + al;
        if(bp != 0) {
            goto L00006710;
        }
        *(bx + si) = *(bx + si) + al;
        bx = si;
        dx = di;
        ax = *(bx + di + 0x10);
        ax = L00006921();
        *(bx + si) = *(bx + si) + al;
        dx = ax;
        if(ax == -1) {
            bl = *(bx + di + 0xc) | 0x20;
            bp = ax;
            *(bx + di + 0xc) = bl;
        } else {
            if(ax == 0) {
                *(bx + si) = *(bx + si) + 0xc;
                L00005C72();
                asm("Unknown opcode 0xff");
                *(bp + si + 0xc61) = *(bp + si + 0xc61) - 1;
                ah = ah | 0x20;
                bp = 65535;
                asm("Unknown opcode 0xff");
                *(bx + si + 0xc61) = *(bx + si + 0xc61) - 1;
            }
        }
        di = di + dx;
        si = si - dx;
    }
    goto L00006685;
    ax = *(bx + di + 8);
    if(*(bx + si + 8) != 0) {
        *(bx + di + 0xc) = *(bx + di + 0xc) & 0xef;
        if(!( *(bx + di + 0xd) & 0x20)) {
            ax = *(bx + di + 4);
            if(ax != 0) {
                dx = ax;
                bx = 1;
                *(1 + si) = *(1 + si) + al;
                dx = ~dx;
                ax = *(bx + di + 0x10);
                ax = L00006787();
                *(bx + si) = *(bx + si) + al;
            }
            if(ax == -1) {
                bl = *(bx + di + 0xc) | 0x20;
                bp = ax;
                *(bx + di + 0xc) = bl;
L00006710:
            }
        }
    }
    ax = *(bx + di + 8);
    *(bx + di + 4) = 0;
    *(bx + si) = *(bx + si) + *(bx + si + 8);
    *(bx + di) = *(bx + si + 8);
    if(bp == 0) {
        ax = *(bx + di + 8);
        if(!( *(bx + si + 0x10) & 1)) {
            ax = *(bx + di + 0x10);
            *(bx + si) = *(bx + si) + L00008192();
            if(ax == -1) {
                bp = ax;
            }
        }
    }
    ax = bp;
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006744 - 0x00006786
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006744()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    dx = ax;
    if(!( *(bx + si + 0xc) & 0x80) && !( *(bp + si + 0xd) & 0x10)) {
        ax = dx;
        L00008197();
        *(bx + si) = *(bx + si) + al;
    }
    ax = *(bp + si + 0x10);
    ax = L00007D0E();
    *(bx + si) = *(bx + si) + al;
    bx = ax;
    if(ax != -1) {
        cx = *(bp + si + 4);
        if(cx != 0) {
            if(!( *(bp + si + 0xd) & 0x10)) {
                bx = si + bp;
                al = al + 0x89;
            }
            return;
            bx = bx - cx;
        }
        ax = bx;
    }
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006787 - 0x000067EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006787()
{



    (restore)bx;
    return;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 4;
    cx = ax;
    si = dx;
    ax = L00007B12();
    *(bx + si) = *(bx + si) + al;
    if(dx > 0 && !(al & 0x80)) {
        dx = ah | 0x80;
        ax = cx;
        *(bx + si) = *(bx + si) + L00007B67();
    }
    di = sp;
    al = bl;
    dx = si;
    bx = cx;
    ah = 0x42;
    cx = dx >> 0x10;
    asm("int 0x21");
    *%ss:bx] = eax;
    *%ss:bx+0x2] = edx;
    asm("rcl ax,1");
    asm("ror ax,1");
    dx = 0;
    if(eax < 0) {
        *(bx + si) = *(bx + si) + (ax & 65535);
        L00007BB1();
        *(bx + si) = *(bx + si) + al;
        ax = 65535;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    } else {
        al = *si & 0x83;
    }
    asm("les ax,[si]");
    (restore)di;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x000067EC - 0x00006820
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000067EC()
{



    (restore)cx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    cx = ax;
    bx = ax;
    ah = 0x3e;
    asm("int 0x21");
    asm("rcl ax,1");
    asm("ror ax,1");
    if(ax >= 0) {
        ax = cx;
        dx = 0;
        L00007B67();
        *(bx + si) = *(bx + si) + al;
        (restore)dx;
        (restore)cx;
        (restore)bx;
        return(0);
    }
    *(bx + si) = *(bx + si) + 4;
    L00005C72();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    ax = 65535;
    asm("Unknown opcode 0xff");
    *(bp + si + 0x59)();
}

/* DEST BLOCK NOT FOUND: 0000691e -> 0000838e */
stack space not deallocated on return
/*	Procedure: 0x00006821 - 0x00006920
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006821()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    si = ax;
    if(ax != 0) {
        *(bx + si) = *(bx + si) + al;
        cx = *di;
        al & 0xc;
        *(bx + si) = *(bx + si) + al;
        if(cx != 0) {
            if(cx <= ax) {
                ax = *(bx + di) + cx;
                if(ax > si) {
                    goto L000068d7;
                }
                *(bx + si) = *(bx + si) + al;
            }
            ax = cx;
            cx = *(bx + di + 4);
            if(cx != 0 && cx <= si) {
                if(*(bx + di) + cx > si) {
                    goto L000068d7;
                }
                *(bx + si) = *(bx + si) + al;
            }
            cx = *(bx + si + 8);
            if(cx != 0 && cx <= si) {
                ax = *(bx + di) + cx;
                if(ax > si) {
                    goto L000068d7;
                }
                *(bx + si) = *(bx + si) + al;
            }
        }
        cx = *di;
        asm("cld");
        if(cx != 0) {
            if(cx <= si && *(bx + di) + cx > si) {
                goto L000068d9;
            }
            ax = cx;
            cx = *(bx + di + 4);
            if(cx != 0 && cx <= si && *(bx + di) + cx > si) {
                goto L000068d9;
            }
            cx = *(bx + si + 8);
            if(cx != 0 && cx <= si) {
                ax = *(bx + di) + cx;
                if(ax > si) {
                    goto L000068d9;
                }
            }
        }
        cx = *di;
        asm("clc");
        goto L000068d0;
L000068c1:
        if(cx <= si) {
            ax = *(bx + di) + cx;
            if(ax > si) {
                goto L000068d9;
            }
        }
        cx = *(bx + di + 8);
L000068d0:
        if(cx != 0) {
            goto L000068c1;
        }
        (restore)si;
        (restore)dx;
        (restore)cx;
L000068d7:
        (restore)bx;
        return;
L000068d9:
        *(bx + si) = *(bx + si) + 0x5f8;
        dx = ds & 65535;
        *(bx + si) = *(bx + si) + 0x5f8;
        bx = cx;
        ax = si;
        ax = L0000825E();
        *(bx + si) = *(bx + si) + al;
        dx = *di;
        asm("cld");
        *di = cx;
        al & 0xc;
        *(bx + si) = *(bx + si) + al;
        if(cx < dx) {
            bx = *di;
            *L00000000 = *L00000000 + al;
            ax = *(bx + di + 0x14);
            if(ax > bx) {
                *L00000600 = ax;
                *(bx + si) = *(bx + si) + al;
            }
        }
        *di = 0;
        asm("loopne 0x6923");
    }
    *(bx + si) = *(bx + si) + al;
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    goto L0000838e;
}

stack space not deallocated on return
/*	Procedure: 0x00006921 - 0x00006994
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006921()
{



    *(bx + si) = *(bx + si) + al;
    sp = sp - 4;
    si = ax;
    bp = dx;
    di = bx;
    ax = L00007B12(bp, di, si, cx);
    *(bx + si) = *(bx + si) + al;
    if(!(al & 0x80)) {
        al = 2;
        bx = si;
        dx = 0;
        ah = 0x42;
        ecx = 0 >> 0x10 & 65535;
        asm("int 0x21");
        asm("rcl edx,1");
        asm("ror edx,1");
        dx = dx << 0x10;
        *si = eax;
        al = al & 0x85;
        *(di + 0xd) = *(di + 0xd) >> cl;
L0000695b:
        ax = 0;
        al = *si & 0xe8;
        bp = bp - 1;
        asm("adc al,[bx+si]");
        asm("daa");
    }
    cx = di;
    dx = bp;
    bx = si;
    ah = 0x40;
    asm("int 0x21");
    asm("rcl ax,1");
    asm("ror ax,1");
    *si = ax;
    return(al & 0x89);
    if(bl = bl + ch) {
        goto L0000695b;
    }
    if(ax != di) {
        *(bx + si) = *(bx + si) + 0xc;
        ax = L00005C72();
        asm("Unknown opcode 0xff");
        *(bx + di + 0x83d0) = *(bx + di + 0x83d0) - 1;
    }
    asm("les ax,[si]");
    (restore)bp;
    (restore)di;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x00006995 - 0x0000699A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006995()
{



    (restore)cx;
    return;
    *(bx + si) = *(bx + si) + 0xcac;
}

/*	Procedure: 0x0000699B - 0x000069A0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000699B()
{



    bl = bl + al;
    *(bx + si) = *(bx + si) + 0xcb0;
}

/*	Procedure: 0x000069A1 - 0x00006A63
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000069A1()
{



    bl = bl + al;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    bx = ax;
    ax = *(bp + si + 8);
    cx = *(bx + si + 0xc);
    if(cx != 1) {
        if(cx != 0) {
            ax = 65535;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            goto L00006a5e;
            *(bx + si) = *(bx + si) + al;
        }
        *(bx + si + 0xc) = 1;
        *(bx + si) = *(bx + si) + al;
    }
    if(!( *(bp + si + 0xc) & 2)) {
        *(bx + si) = *(bx + si) + 4;
        L00005C72();
        asm("Unknown opcode 0xff");
        *(bx + si + 0xc4a) = *(bx + si + 0xc4a) + 1;
        bl = bl & ch;
        asm("Unknown opcode 0xd9");
    }
    ax = *(bp + si + 8);
    if(*(bx + si + 8) == 0) {
        ax = dx;
        L00006212();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    }
    cx = "ts reserved.\r\n*** NULL assignment detected\r\n";
    *(bx + si) = *(bx + si) + al;
    if(bx == 0xa) {
        al = *(bp + si + 0xc);
        cx = 0x600;
        *(bx + si) = *(bx + si) + al;
        if(!(al & 0x40)) {
            *(bp + si + 0xd) = *(bp + si + 0xd) | 0x10;
            ax = *(bp + si);
            *(bx + si) = 0xd;
            bp = *(bp + si) + 1;
            *(bp + si) = bp;
            ax = *(bp + si + 4) + 1;
            si = *(bp + si + 0x14);
            *(bp + si + 4) = ax;
            if(ax == si) {
                ax = dx;
                L00006646();
                asm("Unknown opcode 0xff");
                *(di + 0x75c0) = *(di + 0x75c0) + 1;
                *(bx + si + 0xd4a) = es;
            }
        }
    }
    asm("adc [bp+di+0x8802],cl");
    asm("sbb [bp+di+0x473a],cl");
    *( *(bp + si + 4) + si) = di;
    *(bp + si + 4) = bp;
    if(cx & *(bp + 1 + si + 0xc) || bp == *(bp + si + 0x14)) {
        ax = dx;
        L00006646();
        asm("Unknown opcode 0xff");
        *(di + 0xfc0) = *(di + 0xfc0) + 1;
        *(di - 1) & bx;
        asm("Unknown opcode 0xff");
        (save) *(bx + di);
    }
    asm("ror byte [bx+si+0x5dd8],0x5f");
L00006a5e:
    (restore)si;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006A64 - 0x00006AB9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006A64()
{



    (restore)bx;
    return;
    (save)dx;
    (save)bp;
    bp = sp;
    dx = *di;
    sp = 1;
    *(bp + di + "c) Copyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n") = *(bp + di + "c) Copyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n") + al;
    dl = dl & 0xfc;
    *(bx + si) = *(bx + si) + al;
    if(dx < L000083AF()) {
        (save)dx;
        ax = L00005064();
        asm("Unknown opcode 0xff");
        goto ( *(bx + di + 0x1bc));
        *(bx + si) = *(bx + si) + al;
        sp = sp - (ax + 3 & 0xfc);
        ax = sp;
    } else {
        ax = 0;
    }
    dx = *di;
    sp = 1;
    *(bx + di) = *(bx + di) + al;
    *(bp + di + 0x1c0) = *(bp + di + 0x1c0) << 1;
    *(bx + si) = *(bx + si) + al;
    L000083B8();
    *(bx + si) = *(bx + si) + al;
    dx = *di;
    L00006ABA();
    *(bx + di + 0xce4) = *(bx + di + 0xce4) + ah;
    *(bx + si) = *(bx + si) + al;
    L00004BAE();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    L00008414();
}

/*	Procedure: 0x00006ABA - 0x00006AC0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006ABA()
{



    (restore)ax;
    asm("sbb [bx+si],ax");
    *(bx + di + 0x5dec) = *(bx + di + 0x5dec) + cl;
}

/* DEST BLOCK NOT FOUND: 00006ac7 -> 00006acd */
stack space not deallocated on return
/*	Procedure: 0x00006AC1 - 0x00006ACC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006AC1()
{



    (restore)dx;
    return;
    (save)es;
    if(*(bx + si) == 0) {
        goto L00006ACD;
    }
    es = ds;
    ax = *(bx + si)();
}

stack space not deallocated on return
/*	Procedure: 0x00006ACD - 0x00006B18
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006ACD()
{



    (restore)es;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)es;
    si = 0xb86;
    *(bx + 0xb86) = *(bx + 0xb86) + al;
    dh = al;
L00006adb:
    ax = 0xb3e;
    *(bx + si) = *(bx + si) + 0xb3e;
    bx = si;
    dl = dh;
L00006ae4:
    ax :: 0xb86;
    if(!( *(bx + si) = *(bx + si) + al)) {
        if(*(bx + si) != 2) {
            ch = *(bx + si + 1);
            if(dl >= ch) {
                bx = ax;
                dl = ch;
            }
        }
        ax = ax + 6;
        goto L00006ae4;
    }
    bx :: 0xb86;
    if(!( *(bx + si) = *(bx + si) + al)) {
        ax = bp + di + 2;
        ax = L00006AC1();
        asm("Unknown opcode 0xff");
        si = si + 1;
        ax = ax + *(bp + si);
        goto L00006adb;
    }
    (restore)es;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 00006bbe -> 00006c35 */
/* DEST BLOCK NOT FOUND: 00006c2f -> 00006c36 */
stack space not deallocated on return
/*	Procedure: 0x00006B19 - 0x00006C18
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006B19()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)es;
    si = 0xb98;
    *(bx + 0xb98) = *(bx + 0xb98) + al;
    cl = al;
    dh = dl;
L00006b28:
    ax = 0xb86;
    *(bx + si) = *(bx + si) + 0xb86;
    bx = si;
    dl = cl;
L00006b31:
    ax :: 0xb98;
    if(!( *(bx + si) = *(bx + si) + al)) {
        if(*(bx + si) != 2) {
            ch = *(bx + si + 1);
            if(dl <= ch) {
                bx = ax;
                dl = ch;
            }
        }
        ax = ax + 6;
        goto L00006b31;
    }
    bx :: 0xb98;
    if(!( *(bx + si) = *(bx + si) + al)) {
        if(dh >= *(bp + di + 1)) {
            ax = bp + di + 2;
            L00006AC1();
            asm("Unknown opcode 0xff");
            si = si + 1;
        }
        ax = ax + *(bp + si);
        goto L00006b28;
    }
    (restore)es;
    (restore)si;
    (restore)cx;
    (restore)bx;
    return;
    (save)bx;
    (save)dx;
    *(bx + si) = *(bx + si) + al;
    bx = 0x1ff9;
    *(0x1ff9 + si) = *(0x1ff9 + si) + al;
    *di = 0x38b0;
    al = al | 6;
    *(bx + si) = *(bx + si) + al;
    *di = bx;
    asm("adc [0x0],al");
    (restore)dx;
    (restore)bx;
    return;
    (save)dx;
    dx = 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0x5c;
    L00005C49();
    asm("Unknown opcode 0xff");
    *(bp + si - 0x3d)();
    bx = dx;
    dx = 0;
    ax = L00008708(bx);
    *(bx + si) = *(bx + si) + al;
    *(bp + di) = (frestore);
    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    sp = sp - 8;
    *si = *(bx + si);
    al = (al & 0x8b) + 1 + 0x89;
    asm("Unknown opcode 0xd9");
    *(si + 0x24) = ax;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    if(al = al + 0xa9) {
        goto L00006c35;
    }
    if(!(ax = ax | 0xc985)) {
L00006bc5:
        (fsave) *si;
        al = al & 0x31;
        asm("rcr cl,0x1a");
    } else {
        (fsave)0;
        asm("fcomp qword [si]");
        asm("loopne 0x6b74");
        if(!(al = al & 0xdf)) {
            (fsave) *si;
            al = al & 0xdc;
            asm("sbb ax,0x84");
            asm("fnstsw ax");
            asm("sahf");
            if(!( *(bx + si) = *(bx + si) + al)) {
                (fsave) *si;
                al = al & 0xdc;
                asm("sbb ax,0x8c");
                asm("fnstsw ax");
                asm("sahf");
                if(*(bx + si) = *(bx + si) + al) {
                    goto L00006bc5;
                }
            }
        }
        (fsave) *si;
        al = al & 0xdc;
        asm("sbb ax,0x94");
        asm("fnstsw ax");
        asm("sahf");
        if(!( *(bx + si) = *(bx + si) + al)) {
            (fsave) *si;
            al = al & 0xdc;
            asm("sbb ax,0x9c");
            asm("fnstsw ax");
            asm("sahf");
            if(*(bx + si) = *(bx + si) + al) {
                goto L00006bc5;
            }
        }
        *(bx + si) = *(bx + si) + 1;
    }
    sp = sp + 8;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00006C19 - 0x00006C75
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006C19()
{



    (restore)bx;
    return;
    (save)bp;
    bp = sp;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 0xc;
    di = ax;
    si = dx;
    dx :: 0x2000;
    if(!( *(bx + si) = *(bx + si) + al)) {
        si = 0x2000;
        *(bx + 0x2000) = *(bx + 0x2000) + al;
    }
    cx = 0x4ac;
    *(bx + si) = *(bx + si) + al;
    goto L00006c6d;
L00006c3d:
    esi & 578027521;
    *(di - 0x14) = *(bx + di + 8);
    *(di - 0x18) = *(bx + di + 4);
    dx = di - 0x1c;
    ax = *(bx + di);
    bx = di;
    *(di - 0x1c) = ax;
    ax = di;
    (fsave)tword [bx+si];
    asm("fmulp st1");
    tword [bp+di] = tword [bp+si];
    si = si >> 1;
    cx = cx + 0xa;
L00006c6d:
    if(si > 0) {
        goto L00006c3d;
    }
    sp = di - 0x10;
    (restore)di;
    (restore)si;
    (restore)cx;
    (restore)bx;
}

/* DEST BLOCK NOT FOUND: 00006c86 -> 00006c6f */
/* DEST BLOCK NOT FOUND: 00006cf4 -> 00006c6d */
stack space not deallocated on return
/*	Procedure: 0x00006C76 - 0x00006CF6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006C76()
{



    (restore)bp;
    return;
    (save)bp;
    bp = sp;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 0xc;
    cx = ax;
    if(dx == 0) {
        goto L00006c6f;
    }
    (save)0;
    asm("fstcw [si]");
    al = al & 0x58;
    si = ax;
    ax = (ah | 3) & 65535;
    *(bx + si) = *(bx + si) + al;
    *(0x3fff + si) = *(0x3fff + si) + al;
    (save)ax;
    asm("fldcw [si]");
    al = al & 0x58;
    di = 0;
    *LFFFFFFEC = ebx;
    bx = 0;
    asm("in al,0x89");
    (restore)bp;
    L00003F3B();
    if(!( *(si + 0x7d89) = *(si + 0x7d89) + al)) {
        ax = di - 0x1c;
        dx = ~dx;
        L00006C19();
        asm("Unknown opcode 0xff");
        *(bx + di + 0x8dcb) = *(bx + di + 0x8dcb) - 1;
        (save)bp;
        asm("in al,0x89");
        asm("enter 0x28db,0xdb");
        bl = bl - dh;
        asm("stc");
        tword [bp+di] = (frestore);
    } else {
        ax = di - 0x1c;
        L00006C19();
        asm("Unknown opcode 0xff");
        *(bx + di + 0x8dcb) = *(bx + di + 0x8dcb) - 1;
        (save)bp;
        asm("in al,0x89");
        asm("enter 0x28db,0xdb");
        bl = bl - dh;
        (restore)bp;
        tword [bp+di] = (frestore);
    }
    ax = 0;
    (save)esi;
    asm("fldcw [si]");
    al = al & 0x58;
    goto L00006c6d;
}

/* DEST BLOCK NOT FOUND: 00006d4b -> 00006d6f */
/*	Procedure: 0x00006CF7 - 0x00006D50
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006CF7()
{



    asm("Unknown opcode 0xff");
    *(bp + di + 0x51)();
    cx = ax;
    bx = dx;
    dx :: 0x1000;
    if(!( *(bx + si) = *(bx + si) + al)) {
        dx = 0x1000;
        *(bx + si) = *(bx + si) + al;
        L00006C76();
        asm("Unknown opcode 0xff");
        *(bx + di + 0xeb) = *(bx + di + 0xeb) + 1;
        asm("adc [bx+si],al");
        asm("sbb [bx+di+0xfa],al");
    }
    asm("Unknown opcode 0xf0");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    if(!(bl = bl + ch)) {
        dx = 0xf000;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        L00006C76();
        asm("Unknown opcode 0xff");
        *(bx + di + 0xc3) = *(bx + di + 0xc3) + 1;
        asm("adc [bx+si],al");
        *(bx + di + 0x89da) = *(bx + di + 0x89da) + cl;
    }
    asm("enter 0x3ee8,0xff");
    asm("Unknown opcode 0xff");
    return(*(bx + di + 0x5b)());
    si = si + 1;
    al = al & *(bx + si);
    *(bp + si + 0x22) = *(bp + si + 0x22) + al;
    *(si + 0x22) = *(si + 0x22) + dl;
    if(*(bx + si) = *(bx + si) + al) {
        goto L00006d6f;
    }
    *(bx + si) = *(bx + si) + al;
    al = al & *(bx + si + 1);
}

/* DEST BLOCK NOT FOUND: 00006e0d -> 00007180 */
/*	Procedure: 0x00006D51 - 0x00007024
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00006D51()
{



    *(bx + si) = *(bx + si) + al;
    (save)bp;
    bp = sp;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 0x8c;
    *(bx + si) = *(bx + si) + al;
    di = ax;
    si = dx;
    *(di - 0x20) = bx;
    (save)0;
    asm("fstcw [si]");
    al = al & 0x58;
    *(di - 0x14) = ax;
L00006d70:
    *(bx + si) = *(bx + si) + al;
    (save)(ah | 3) & 65535;
    asm("fldcw [si]");
    al = al & 0x58;
    *(bp + si + 0x14) = 0;
    *(bx + si) = *(bx + si) + al;
    *(di - 0x2c) = *(bx + 8);
    *(di - 0x30) = *(bx + 4);
    ax = *bx;
    *(di - 0x34) = ax;
    if(!( *(di - 0x2b) & 0x80)) {
        *(bp + si + 0x14) = 65535;
        asm("Unknown opcode 0xff");
    }
    if(*(bx + si + 0xd565) = *(bx + si + 0xd565) + 1) {
        goto L00006d70;
    }
    si = si + 1;
    asm("sbb al,0x0");
    *(bx + si) = *(bx + si) + al;
    bh = bh + al;
    si = si + 1;
    *(bx + si) = *(bx + si) & al;
    *(bx + si) = *(bx + si) + al;
    bh = bh + al;
    si = si + 1;
    0;
    *(di + 0xcc45) = *(di + 0xcc45) + cl;
    *(bp + 0x28) = 0;
    0;
    di = 0;
    *(bp + 0x18) = 0;
    0;
    *(bx + si) = *(bx + si) + al;
    if(L00008787() <= 4) {
        *(bx + si) = *(bx + si) + al;
        goto ( *si);
        *(bx + 0x21) & bx;
        bh = bh + al;
        si = si + 1;
        asm("adc al,0x0");
        *(bx + si) = *(bx + si) + al;
        *(bx + di) = *(bx + di) + dh;
        (restore)bp;
        goto L00006f25;
        *(bx + si) = *(bx + si) + al;
        ax = *(di - 0x20);
        *(bx + si) = 0x6e;
        *(bx + si + 1) = 0x61;
        *(bx + si + 2) = 0x6e;
L00006e02:
        *(bx + si + 3) = 0;
        *(bp + 0x1c) = 3;
        *(bx + si) = *(bx + si) + al;
        goto L00007180;
        *(bx + si) = *(bx + si) + al;
        ax = *(di - 0x20);
        *(bx + si) = 0x69;
        *(bx + si + 1) = 0x6e;
        *(bx + si + 2) = 0x66;
        goto L00006e02;
        cx = 0;
        *(bx + si) = *(bx + si) + al;
        0x7597 = ( *(di - 0x2c) - 0x3ffe) * dx;
        *(bx + si) = *(bx + si) + al;
        bx = 0x86a0;
        *(0x86a0 + si) = *(0x86a0 + si) + ax;
        ax = dx;
        dx = dx >> 0x1f;
        bx = bx / bx;
        dx = bx % bx;
        cx = bx + si - 4;
        if(cx != 0) {
            if(!( *(bx + si) = *(bx + si) + al)) {
                cx = ~( ~cx + 3 & 0xfc);
                goto L00006f19;
                *(bx + si) = *(bx + si) + al;
            }
            if(*(di - 0x2c) == -2022555623) {
                sp = 0xfbe;
                asm("Unknown opcode 0x82");
                if(*(di - 0x30) < 0x2000) {
                }
                asm("Unknown opcode 0xff");
                *(bp + di + 0xd445) = *(bp + di + 0xd445) - 1;
            }
            if(eax == 544358452) {
                *(bx + si) = *(bx + si) + al;
                bx = *(di - 0x30);
                asm("sbb cx,[bp+0xf72]");
                if(bx == 0xc9bf) {
                    *(bx + si) = *(bx + si) + al;
                    *(di - 0x34) :: 0;
                    if(*si = *si + al) {
                        goto L00006f18;
                    }
                    *(0x4019 + si) = *(0x4019 + si) + al;
                    dx = di - 0x4c;
                    ax = di - 0x34;
                    *(di - 0x44) = ebx;
                    sp = 0x31be;
                    sp = bp;
                    (restore)bp;
                    *(di - 0x48) = 0x2000;
                    bx = di - 0x58;
                    *(di - 0x4c) = cx;
                    (fsave)tword [bx+si];
                    asm("fdivp st1,st0");
                    tword [bp+di] = tword [bp+si];
                    ax = di - 0x58;
                    dx = di - 0x58;
                    bx = di - 0x4c;
                    (save)ax;
                    (save)ax;
                    asm("fstcw [si]");
                    (save)ax;
                    (save)al & 0x58 | 0xc;
                    asm("fldcw [si]");
                    *(si + 0x24) = tword [bx+si];
                    al = (al & 0x58) + 0xd9 - 0x24;
                    (restore)ax;
                    (restore)ax;
                    di = ax;
                    (save)ax;
                    al = al & 0x58;
                    tword [bp+si] = *si;
                    dx = di - 0x4c;
                    ax = di - 0x58;
                    (fsave)tword [bx+si];
                    asm("fmulp st1");
                    tword [bp+di] = tword [bp+si];
                    bx = di - 0x34;
                    dx = di - 0x4c;
                    ax = di - 0x34;
                    cx = 8;
                    *(bx + si) = *(bx + si) + al;
                    (fsave)tword [bx+si];
                    asm("fsubp st1");
                    tword [bp+di] = tword [bp+si];
                }
            }
            goto L00006f27;
L00006f18:
            cl = cl & 0xfc;
L00006f19:
            dx = cx;
            ax = di - 0x34;
            dx = ~dx;
            L00006CF7();
        }
    }
L00006f25:
    asm("Unknown opcode 0xff");
    (save)si;
L00006f27:
    if(!( *(bp + si + 1) = *(bp + si + 1) | al)) {
        *(di - 0x18) = *L0000C801 + 0xa;
        ax = *(bp + 4);
        if(ax > 0) {
            *(di - 0x18) = *(di - 0x18) + ax;
        }
    } else {
        (restore)es;
        *(di - 0x18) = *L0000C083;
    }
    bl = *(bp + 8);
    ax = 0xf;
    *(bx + si) = *(bx + si) + 0xf;
    if(!(bl & 0x20)) {
        ax = 0x14;
        *(bx + si) = *(bx + si) + 0x14;
    }
    if(!( *(bp + 8) & 0x40)) {
        ax = ax + ax;
    }
    bx = *(di - 0x18);
    ax = ax + 4;
    if(ax < bx) {
        *(di - 0x18) = ax;
    }
    *(di + 65384) = 0xff;
    (save) *(bx + si);
    ah = 0;
    *(di + 65385) = 0;
    asm("Unknown opcode 0xff");
    *(di + 0x6985) = *(di + 0x6985) - 1;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *(bx + di + 0xd845) = *(bx + di + 0xd845) - 1;
    *(di - 0x24) = 0;
    if(*(di - 0x18) <= 0) {
        goto L00007080;
    }
    *(bx + si) = *(bx + si) + al;
    bx = bp + si - 8;
    *(di - 0x18) = bx;
    if(di == 0) {
        *(di - 0x2c) & -2079358977;
        asm("rol byte [bx+si],cl");
        *(bx + si) = *(bx + si) + al;
        ax = di - 0x34;
        (save)ax;
        (save)ax;
        asm("fstcw [si]");
        (save)ax;
        (save)al & 0x58 | 0xc;
        asm("fldcw [si]");
        *(si + 0x24) = tword [bx+si];
        al = (al & 0x58) + 0xd9 - 0x24;
        (restore)ax;
        (restore)ax;
        di = ax;
        if(bx > 0) {
            dx = di - 0x40;
            bx = di - 0x34;
            (save)ax;
            al = al & 0x58;
            tword [bp+si] = *si;
            dx = di - 0x40;
            ax = di - 0x34;
            (fsave)tword [bx+si];
            asm("fsubp st1");
            tword [bp+di] = tword [bp+si];
            *(bx + si) = *(bx + si) + 0x4019;
            bx = 0x2000;
            sp = 0x8dbe;
            (save)bp;
            *(bp - 0x77) = *(bp - 0x77) << 0x45;
            asm("enter 0x5d89,0xc4");
            bx = di - 0x34;
            *(di - 0x40) = 0;
            eax = di - 0x34 & 65535;
            (fsave)tword [bx+si];
            asm("fmulp st1");
            tword [bp+di] = tword [bp+si];
        }
    }
    bx = *(di - 0x28);
    ax = di;
    (save)cx;
    (save) *(di - 0x24);
    L00007025();
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 00007025 -> 0000706c */
/*	Procedure: 0x00007025 - 0x0000703A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007025()
{



    goto L0000706c;
    cx = 0x2710;
    *(bx + si) = *(bx + si) + al;
    dx = 0;
    asm("xchg ax,dx");
    if(ax >= 0x2710) {
        asm("xchg ax,dx");
        dx = cx / cx % cx / cx;
    }
    (save)dx;
    *(bx + si) = *(bx + si) + L0000703B();
}

/*	Procedure: 0x0000703B - 0x00007051
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000703B()
{



    *(bx + si - 0x47) = *(bx + si - 0x47) + bl;
    *%fs:bx+si] = *%fs:bx+si] + al;
    *(bx + di) = *(bx + di) + ch;
    *(bx + di) = *(bx + di) >> cl;
    asm("enter 0x7292,0x4");
    asm("xchg ax,dx");
    edx = ecx / ecx % ecx / ecx;
    (save)dx;
    L00007052();
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 0000707d -> 00006f8d */
/*	Procedure: 0x00007052 - 0x00007192
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007052()
{



    *(bx + si - 0x4f) = *(bx + si - 0x4f) + bl;
    bh = bh | *(bx + si);
    asm("enter 0xc486,0x72");
    al = al + 0x86;
    asm("Unknown opcode 0xc4");
    edx = cl / cl % cl / cl;
    *(bp + di) = ah + 0x30 + 0x30;
    *(bp + di) = ah;
    bx = bx + 1 + 1;
    return;
    (restore)dx;
    (restore)cx;
    *(bp + di) = 0;
    *(di - 0x28) = bx;
    dx = dx + 8;
    *LFFFFFFDC = dx;
    goto L00006f8d;
    asm("Unknown opcode 0xff");
    *(bp + di + 0xdc45) = *(bp + di + 0xdc45) - 1;
    dx = di + 65385;
    asm("Unknown opcode 0xff");
    for(*(bp + di + 0x7c1) = *(bp + di + 0x7c1) + 1; *(bp + si) == 0x30; dx = dx + 1) {
        ax = ax - 1;
        cx = cx - 1;
    }
    bh = *(bp + 8);
    di = *L0000C7F6;
    dh = dh + *(si + 0xa);
    cx = cx + *(bp + 4);
    bx = bx + di + 1;
    di = di + bx;
    goto L000070c1;
    if(!(bh & 1)) {
        bx = *(bp + 4);
        di = bx > 0 ? di + 1 : di + bx;
        cx = cx + 1 - *(bp + 4);
    }
L000070c1:
    if(di >= 0) {
        *(bx + si) = *(bx + si) + al;
        if(di > ax) {
            di = ax;
        }
        bx = 0xf;
        *(0xf + si) = *(0xf + si) + al;
        if(!( *(bp + 8) & 0x20)) {
            bx = 0x14;
            *(0x14 + si) = *(0x14 + si) + al;
        }
        if(!( *(bp + 8) & 0x40)) {
            bx = bx + bx;
        }
        if(di > bx) {
            di = bp + di + 1;
        }
        *(di - 0x10) = 0x30;
        if(ax > di) {
            *si :: 0x3a;
            ax = ax ^ 0x472;
            *(di - 0x10) = 0x39;
        }
        *(di - 0x1c) = di;
        ax = si;
        (restore)ss;
L00007106:
        bx = *(di - 0x1c) - 1;
        ax = ax - 1;
        *(di - 0x1c) = bx;
        bl = *(bx + si);
        bh = *(di - 0x10);
        if(bl == bh) {
            di = di - 1;
            goto L00007106;
        }
        if(bh == 0x39) {
            *(bx + si) = bl + 1;
        }
        if(*(di - 0x1c) >= 0) {
            goto L0000712e;
        }
        dx = dx - 1;
    }
    di = di + 1;
    cx = cx + 1;
L0000712e:
    if(di <= 0) {
        di = 1;
        *(bx + si) = *(bx + si) + al;
        cx = 0;
        *L0000FF69 = 0x30;
        asm("Unknown opcode 0xff");
        *(di + 0x6895) = *(di + 0x6895) - 1;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        *(bx + di + 0x144e) = *(bx + di + 0x144e) - 1;
    }
    ah = *(bp + 8);
    if(!(ah & 2)) {
        if(ah & 4) {
            goto L00007175;
        }
        if(cx >= -4) {
            cx :: *L0000067C;
        }
        if(*(bp + 8) & 8) {
            goto L00007175;
        }
    }
    (save) *(di - 0x20);
    ax = si;
    bx = di;
    L00007193();
    *(bx + si) = *(bx + si) + al;
    goto L00007182;
L00007175:
    bx = di;
    ax = si;
    L000073B1( *(di - 0x20));
    *(bx + si) = *(bx + si) + al;
L00007182:
    ax = 0;
    (save) *(di - 0x14);
    asm("fldcw [si]");
    al = al & 0x58;
    sp = di - 0xc;
    (restore)di;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x00007193 - 0x000073B0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007193()
{



    (restore)bp;
    return;
    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    sp = sp - 4;
    (save)ax;
    (save)dx;
    (save)cx;
    dx = *(bx + si);
    *(di - 0xc) = dx;
    *(di - 0x18) = cx + 1;
    ah = *(bx + si + 8);
    dx = 0;
    if(!(ah & 4)) {
        if(bx < *(di - 0xc)) {
            si = *(di - 0x10);
            if(!( *(bp + 8) & 0x10)) {
                *(di - 0xc) = bx;
            }
        }
        si = *(di - 0x18);
        di = *(di - 0xc) - si;
        *(di - 0xc) = di;
        if(di < 0) {
            *(di - 0xc) = 0;
        }
    }
    si = *(di - 0x18);
    if(si <= 0) {
        *(bx + si) = *(bx + si) + al;
        si = *(di - 0x10);
        if(!( *(bp + 8) & 8)) {
            di = *(di + 8);
            si = dx + di;
            ax = *(di - 0xc);
            *L00008530 = 0xc0;
            if(dx = dx + 1) {
                goto L00007207;
            }
            si = *(di - 0x10);
            if(!( *(bp + 8) & 0x10)) {
L00007207:
                cx = *(di + 8);
                di = dx + cx;
                dx = dx + 1;
                *bx = 0x2e;
            }
        }
        si = *(di - 0x10);
        *(bp + 0x1c) = dx;
        si = *(di - 0x18);
        di = *(di - 0xc);
        if(~si > di) {
            ax = di;
            *(di - 0x18) = di;
            *(di - 0x18) = ~ax;
        }
        di = *(di - 0x10);
        si = *(di - 0x18);
        *(bx + 0x18) = si;
        *(bx + 0x20) = si;
        *(bx + 0x20) = ~si;
        di = *(di - 0xc) + si;
        *(di - 0xc) = di;
        if(bx > di) {
            bx = di;
        }
        di = *(di + 8);
        si = *(di - 0x14);
        cx = bx;
        di = di + dx;
        (save)es;
        es = ds;
        (save)di;
        ax = cx;
        cx = cx >> 2;
        asm("repne movsw");
        cl = al & 3;
        asm("repne movsb");
        (restore)di;
        (restore)es;
        si = *(di - 0x10);
        *(bp + 0x24) = bx;
        si = *(di - 0xc);
        dx = dx + bx;
        si = si - bx;
        bx = *(di - 0x10);
        *(bp + di + 0x28) = si;
    } else {
        *(bx + si) = *(bx + si) + al;
        if(bx < si) {
            si = *(di - 0x14);
            di = *(di + 8);
            cx = bx;
            (save)es;
            es = ds;
            (save)di;
            ax = cx;
            cx = cx >> 2;
            asm("repne movsw");
            cl = al & 3;
            asm("repne movsb");
            (restore)di;
            (restore)es;
            si = *(di - 0x10);
            *(bp + 0x1c) = bx;
            si = *(di - 0x18);
            dx = dx + bx;
            si = si - bx;
            bx = *(di - 0x10);
            *(bp + di + 0x20) = si;
            si = *(di - 0x10);
            bx = *(di - 0x18);
            cl = *(bp + 8);
            *(bp + 0x18) = bx;
            if(!(cl & 8)) {
                if(*(di - 0xc) > 0) {
                    goto L000072d8;
                }
                if(!(cl & 0x10)) {
L000072d8:
                    cx = *(di + 8);
                    bx = dx + cx;
                    *(bp + di) = 0x2e;
                    bx = *(di - 0x10);
                    dx = dx + 1;
                    *(bp + di + 0x24) = 1;
                    *(bx + si) = *(bx + si) + al;
                }
            }
            si = *(di - 0x10);
            bx = *(di - 0xc);
            *(bp + 0x28) = bx;
            goto L00007392;
            *(bx + si) = *(bx + si) + al;
        }
        di = *(di + 8);
        cx = si;
        si = *(di - 0x14);
        (save)es;
        es = ds;
        (save)di;
        ax = cx;
        cx = cx >> 2;
        asm("repne movsw");
        cl = al & 3;
        asm("repne movsb");
        (restore)di;
        (restore)es;
        di = *(di - 0x10);
        si = *(di - 0x18);
        ch = *(bx + 8);
        dx = dx + si;
        bx = bx - si;
        *(bx + 0x18) = si;
        if(!(ch & 8)) {
            if(*(di - 0xc) > 0) {
                goto L00007339;
            }
            if(!(ch & 0x10)) {
L00007339:
                ax = *(di + 8);
                di = dx + ax;
                dx = dx + 1;
                *bx = 0x2e;
            }
        } else {
            *L00007530 :: 7;
            *(bx + 0x18) = 0;
            *(bx + *(di + 8)) = *(bx + *(di + 8)) + al;
        }
        cx = *(di - 0xc);
        if(bx > cx) {
            bx = cx;
        }
        si = *(di - 0x14) + *(di - 0x18);
        di = *(di + 8);
        cx = bx;
        di = di + dx;
        (save)es;
        es = ds;
        (save)di;
        ax = cx;
        cx = cx >> 2;
        asm("repne movsw");
        cl = al & 3;
        asm("repne movsb");
        (restore)di;
        (restore)es;
        si = *(di - 0x10);
        *(bp + 0x1c) = dx + bx;
        si = *(di - 0xc) - bx;
        bx = *(di - 0x10);
        *(bp + di + 0x20) = si;
    }
L00007392:
    dx = dx + *(di + 8);
    *(bp + si) = 0;
    sp = di - 8;
    (restore)di;
    (restore)si;
    (restore)bp;
    return;
    asm("sbb [bp+si],ch");
    *(bx + si) = *(bx + si) + al;
    *(bp + si) = *(bp + si) - ch;
    *(bx + si) = *(bx + si) + al;
    bp = bp ^ *(bp + si);
    *(bx + si) = *(bx + si) + al;
    al = al - *%ds:bx+si];
}

/* DEST BLOCK NOT FOUND: 000075ac -> 000075ec */
/* DEST BLOCK NOT FOUND: 000075c6 -> 000075ec */
/*	Procedure: 0x000073B1 - 0x000075C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000073B1()
{



    *(bx + si) = *(bx + si) + al;
    (save)bp;
    bp = sp;
    (save)si;
    (save)di;
    sp = sp - 0xc;
    (save)ax;
    (save)dx;
    (save)bx;
    (save)cx;
    *(di - 0x14) = *(bx + si);
    ax = *(di - 0x18);
    dx = *(bx + si + 4);
    if(dx <= 0) {
        *(di - 0x14) = *(di - 0x14) + dx;
    } else {
        bx = *(di - 0x14) - dx;
        *(di - 0x14) = bx;
        *(di - 0x14) = bp + di + 1;
    }
    ax = *(di - 0x18);
    di = 0;
    *LFFFFFFF4 = 0;
    if(!( *(bx + si + 8) & 4)) {
        ax = *LFFFFFFE0;
        if(ax < *LFFFFFFEC) {
            *LFFFFFFEC = ax;
        }
        bx = *(di - 0x14) - 1;
        *(di - 0x14) = bx;
        if(bx < 0) {
            si = 0;
            *(di - 0x14) = 0;
        }
    }
    ax = *(di - 0x18);
    di = *(bx + si + 4);
    if(di <= 0) {
        ax = *(di - 0xc);
        bx = *(di + 8);
        dx = bx + si + 1;
        ax = ax + bx;
        *(di - 0xc) = dx;
        *(bx + si) = 0x30;
        goto L000074a6;
        *(bx + si) = *(bx + si) + al;
    }
    dx = *(di - 0x20);
    *(di - 0x10) = di;
    if(di > dx) {
        *(di - 0x10) = dx;
    }
    di = *(di + 8);
    bx = *(di - 0xc);
    cx = *(di - 0x10);
    si = *(di - 0x1c);
    di = di + bx;
    dx = *(di - 0x18);
    (save)es;
    es = ds;
    (save)di;
    ax = cx;
    cx = cx >> 2;
    asm("repne movsw");
    cl = al & 3;
    asm("repne movsb");
    (restore)di;
    (restore)es;
    ax = *(di - 0x10);
    si = *(di - 0x1c);
    di = *(di - 0x20);
    cx = si;
    ax = ax + *(bx + di);
    asm("Unknown opcode 0xc6");
    di = di - ax;
    *(di - 0xc) = cx;
    *(di - 0x1c) = si;
    bx = *(bp + si + 4);
    *(di - 0x20) = di;
    if(ax < bx) {
        cx = *(di - 0x10);
        ax = bx;
        si = *(di - 0xc);
        ax = ax - cx;
        dx = 0x30;
        *(bx + si) = *(bx + si) + al;
        *(di - 0x10) = ax;
        ax = *(di + 8);
        bx = *(di - 0x10);
        ax = ax + si;
        L00007CF6();
        *(bx + si) = *(bx + si) + al;
        ax = *(di - 0x10);
        di = si;
        (save)es;
        *(di - 0xc) = di;
L000074a6:
    }
    dx = *(di - 0x18);
    *(bp + si + 0x18) = *(di - 0xc);
    if(!( *(bp + si + 8) & 8)) {
        if(*(di - 0x14) > 0) {
            goto L000074c6;
        }
        ax = *(di - 0x18);
        if(!( *(bx + si + 8) & 0x10)) {
L000074c6:
            ax = *(di - 0xc);
            di = *(di + 8);
            si = bx + si + 1;
            ax = ax + di;
            *(di - 0xc) = si;
            *(bx + si) = 0x2e;
        }
    }
    ax = *(di - 0x18);
    dx = *(bx + si + 4);
    if(dx < 0) {
        ax = *(di + 8);
        cx = *(di - 0xc);
        bx = dx;
        *(di - 0x10) = dx;
        dx = 0x30;
        *(bx + si) = *(bx + si) + al;
        bx = ~bx;
        ax = ax + cx;
        *(di - 0x10) = bx;
        L00007CF6();
        *(bx + si) = *(bx + si) + al;
        ax = *(di - 0x10);
        *(bx + di + 0xf475) = *(bx + di + 0xf475) + cx;
    }
    di = *(di - 0x14);
    if(di > 0) {
        if(di < *(di - 0x20)) {
            *(di - 0x20) = di;
        }
        bx = *(di - 0x20);
        if(bx != 0) {
            di = *(di + 8);
            cx = *(di - 0xc);
            si = *(di - 0x1c);
            di = di + cx;
            cx = bx;
            (save)es;
            es = ds;
            (save)di;
            ax = cx;
            cx = cx >> 2;
            asm("repne movsw");
            cl = al & 3;
            asm("repne movsb");
            (restore)di;
            (restore)es;
            *(di - 0xc) = *(di - 0xc) + bx;
        }
        dx = *(di - 0x18);
        ax = *(di - 0xc);
        di = *(di - 0x20);
        *(bp + si + 0x1c) = ax;
        *(bp + si + 0x20) = *(di - 0x14) - di;
    }
    ax = *(di - 0x18);
    if(*(bx + si + 0xc) != 0) {
        ax = *(di - 0xc);
        cx = *(di + 8);
        bx = bx + si + 1;
        dx = *(di - 0x18);
        ax = ax + cx;
        *(di - 0xc) = bx;
        *(bx + si) = *(bp + si + 0xc);
    }
    ax = *(di - 0xc);
    si = *(di - 0x24);
    ax = ax + 1;
    if(si >= 0) {
        dx = *(di - 0xc);
        *(di - 0xc) = ax;
        ax = *(di + 8);
        *si = 2;
        bp = bp - bx;
        asm("adc al,0x8b");
    }
    (save)bp;
    asm("hlt");
    *(si - 0xc) = ax;
    *(di - 0x24) = di;
    *si = 2;
    L0000D133();
    asm("adc [bp+di+0x3fb],al");
    if(ax = *( ~di + 8) - 0x5d8b) {
        goto L000075ec;
    }
    goto ( *si);
    *(bp + di) & bx;
    *(bx + si) = *(bx + si) - al;
    *(bx + di + 0xdc7d) = *(bx + di + 0xdc7d) + al;
    L000075C1();
    *(di + 0x26) = *(di + 0x26) + bh;
}

/* DEST BLOCK NOT FOUND: 00007704 -> 00007398 */
/* DEST BLOCK NOT FOUND: 0000770a -> 00008848 */
/*	Procedure: 0x000075C1 - 0x0000773D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000075C1()
{



    bx = 3;
    *(3 + si) = *(3 + si) + al;
    goto L000075ec;
    if(*(di - 0x24) >= 0xa) {
        bx = 2;
        *(2 + si) = *(2 + si) + al;
    }
    if(*(di - 0x24) >= 0x64) {
        bx = 3;
        *(3 + si) = *(3 + si) + al;
    }
    *(di - 0x24) :: "orp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
    if(!( *(bx + si) = *(bx + si) + al)) {
        bx = 4;
        *(4 + si) = *(4 + si) + al;
    }
L000075ec:
    ax = *(di - 0x18);
    *(bx + si + 0x10) = bx;
    if(bx >= 4) {
        di = 0;
        ax = *LFFFFFFDC;
        *LFFFFFFF0 = 0;
        ax :: "orp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
        if(!( *(bx + si) = *(bx + si) + al)) {
            dx = ax;
            *(bx + si) = *(bx + si) + al;
            dx = dx >> 0x1f;
            di = "orp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n" / "orp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
            dx = di % di;
            *(di - 0x10) = ax;
            dx = ax;
            ax = ((ax << 5) - dx << 2) + dx;
            dx = *(di - 0x24);
            *(di - 0x24) = dx - (ax << 3);
        }
        ax = *(di - 0xc);
        si = *(di + 8);
        cx = bx + si + 1;
        dl = *(di - 0x10);
        ax = ax + si;
        *(di - 0xc) = cx;
        *(bx + si) = dl + 0x30;
    }
    if(bx >= 3) {
        di = 0;
        ax = *LFFFFFFDC;
        *LFFFFFFF0 = 0;
        if(ax >= 0x64) {
            dx = ax;
            *(bx + si) = *(bx + si) + al;
            dx = dx >> 0x1f;
            di = 0x64 / 0x64;
            dx = di % di;
            *(di - 0x10) = ax;
            dx = ax;
            ax = ((ax << 2) - dx << 3) + dx;
            dx = *(di - 0x24);
            *(di - 0x24) = dx - (ax << 2);
        }
        ax = *(di - 0xc);
        si = *(di + 8);
        cx = bx + si + 1;
        dl = *(di - 0x10);
        ax = ax + si;
        *(di - 0xc) = cx;
        *(bx + si) = dl + 0x30;
    }
    if(bx >= 2) {
        di = 0;
        ax = *LFFFFFFDC;
        *LFFFFFFF0 = 0;
        if(ax >= 0xa) {
            dx = ax;
            bx = 0xa;
            *(0xa + si) = *(0xa + si) + al;
            dx = dx >> 0x1f;
            bx = bx / bx;
            dx = bx % bx;
            *LFFFFFFF0 = ax;
            dx = ax;
            ax = (ax << 2) + dx;
            *LFFFFFFDC = *LFFFFFFDC - ax + ax;
        }
        ax = *(di - 0xc);
        cx = *(di + 8);
        bx = bx + si + 1;
        dl = *(di - 0x10);
        ax = ax + cx;
        *(di - 0xc) = bx;
        *(bx + si) = dl + 0x30;
    }
    ax = *(di - 0xc);
    di = *(di + 8);
    si = bx + si + 1;
    dl = *(di - 0x24);
    ax = ax + di;
    *(bx + si) = dl + 0x30;
    ax = *(di - 0x18);
    dx = si;
    dx = dx - *(bx + si + 0x1c);
    ax = *(di - 0x18);
    *(bx + si + 0x24) = dx;
    ax = si;
    asm("aaa");
    *(di - 0xc) = si;
    *(bx + si) = 0;
    goto L00007398;
    asm("Unknown opcode 0xff");
    *(bx + si) = *(bx + si) + 1;
    goto L00008848;
    *(bx + si) = *(bx + si) + al;
    *L00005351 = *L00005351 + al;
    (save)dx;
    asm("fninit");
    (save)ax;
    asm("fnstcw [si]");
    if((al & 0x58) != 3) {
        bp = bp + 1;
    }
    if(bp != 0) {
        L0000773E();
        *(bx + si) = *(bx + si) + al;
    }
    asm("finit");
    asm("fldcw [di]");
    asm("cbw");
    (save)es;
    *(bx + si) = *(bx + si) + al;
    (fsave)0;
    (fsave)0;
    (fsave)0;
    (fsave)0;
    (restore)dx;
    (restore)bx;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 00007790 -> 0000780a */
/* DEST BLOCK NOT FOUND: 000077b4 -> 0000780a */
/* DEST BLOCK NOT FOUND: 000077f5 -> 0000780a */
/* DEST BLOCK NOT FOUND: 00007803 -> 0000780a */
stack space not deallocated on return
/*	Procedure: 0x0000773E - 0x00007808
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000773E()
{



    (restore)es;
    return;
    *di = 0x9c;
    *(bx + si) = *(bx + si) + ax;
    *(bp + di) = *(bp + di) + al;
    *di = 0x80;
    *(bp + 0xf) = *(bp + 0xf) + sp;
    if(!( *di = *di + sp)) {
        *(bx + si) = *(bx + si) + al;
        *di = *di & 0x7e;
    }
    (save)es;
    sp = sp - 8;
    asm("sidt [si]");
    al = al & 0x8b;
    (restore)sp;
    al = al & 2;
    bx = bx + 0x38;
    sp = sp + 8;
    *di :: 0xd4;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + L00007809();
        es = *di;
        asm("xchg ax,si");
        *(bx + si) = *(bx + si) + ax;
        *L00001389 = *L00001389 + ah;
        *%es:bp+di+0x4] = cx;
        L00007873();
        *(bx + si) = *(bx + si) + al;
        goto L0000780a;
    }
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + si) = *(bx + si) + al)) {
        eax = 1713251591;
        ds = cs;
        dx = di;
        asm("adc [bx+di+0x0],al");
        ch = ch + cl;
        *bx = *bx & bx;
        al = 4;
        ah = 0xf3;
        asm("int 0x21");
        goto L0000780a;
    }
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + cl)) {
        L00007809();
        *(bx + si) = *(bx + si) + al;
        *(bp + di) = dx;
        *(bp + di + 4) = cx;
        *(bx + si) = *(bx + si) + 0xe02;
        bx = 4;
        *(4 + si) = *(4 + si) + 0xe02;
        cx = *di;
        *(bx + si) = *(bx + si) + 0xe02;
        (save)cx;
        bl = bh + bh ^ ch;
        al = 0xd82;
    }
    ax :: 0x1d2;
    *(bx + si) = *(bx + si) + al;
    *(di + 0x10) = *(di + 0x10) + si;
    edx = *di;
    asm("xchg ax,sp");
    *(bx + si) = *(bx + si) + ax;
    *(bx + di) = *(bx + di) + ch;
    al = al >> 0x63;
    bp = bp + 1;
    *(bx + si) = *(bx + si) + al;
    goto L0000780a;
    edx = 0;
    ax = 0;
    L0000BD56();
    *(bx + si) = *(bx + si) + al;
    if(al == 1) {
        goto L0000780a;
    }
    *(bx + si) = *(bx + si) + L00007826();
}

/*	Procedure: 0x00007809 - 0x00007825
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007809()
{



    bl = bl + al;
    cx = di;
    asm("adc [bx+di+0x0],al");
    *(bp - 0x74) = *(bp - 0x74) + ah;
    asm("retf 0xe2c1");
    asm("adc [bp-0x77],ah");
    asm("retf 0x8c66");
    sp = bp;
    (restore)bp;
    ch = (cl & 3) << 0xd | 0x8e;
}

/* DEST BLOCK NOT FOUND: 0000785d -> 00007874 */
/*	Procedure: 0x00007826 - 0x00007872
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007826()
{



    es = bx;
    cl = 7;
    eax = 567092482;
    *di = bx;
    >= ? 0x7839 : ;
    *di = es;
    if(!( *(bx + si) = *(bx + si) + 567092482)) {
        *(bx + si) = *(bx + si) + al;
        *di :: 0xd2;
    }
    *(bx + si) = *(bx + si) + ax;
    cl = 7;
    eax = 236856580;
    (restore)ds;
    if(!( *(bp + di) = *(bp + di) + al)) {
        dx = di;
        al = *L00000040;
        ch = 0xe;
        *bx = *bx & bx;
        L00007873();
        *(bx + si) = *(bx + si) + al;
        goto L00007874;
    }
    dx = di;
    asm("adc [bx+di+0x0],al");
    ch = ch + cl;
    *bx = *bx & bx;
    cr0 = (cr0 | 4) & -3;
}

/*	Procedure: 0x00007873 - 0x0000790C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007873()
{



    asm("rol bx,0x31");
    asm("Unknown opcode 0xdb");
    dx = di;
    *di :: al;
    *(bx + si) = *(bx + si) + al;
    *di = *di | 0x38;
    *(bx + si) = *(bx + si) + 0x538;
    asm("std");
    bx = bx + 1;
    asm("int 0x21");
    return;
    *di :: 0x80;
    *(si + 1) = *(si + 1) + si;
    return;
    (save)cx;
    (save)bx;
    (save)dx;
    *(bx + si) = *(bx + si) + al;
    *di :: 0xd4;
    *(bx + si) = *(bx + si) + *L000001D2;
    if(!( *(bx + si) = *(bx + si) + al)) {
        L00007948();
        *(bx + si) = *(bx + si) + al;
    } else {
        if(al == 9) {
            *(bx + si) = *(bx + si) + 0xe02;
            *si = *si + 0xe02;
            cx = *di;
            *si = *si + 0xe02;
            (save)cx;
            bl = 0 ^ ch;
            al = 0xe3e;
        }
        *(di + 0xc) = *(di + 0xc) + dh;
        *(bx + si) = *(bx + si) + *L0000057E;
        ah = 0xf3;
        asm("int 0x21");
        goto L00007904;
        if(al == 1) {
            edx = *di;
            asm("xchg ax,sp");
            *(bx + si) = *(bx + si) + ax;
            *(bx + di) = *(bx + di) + ch;
            al = al >> 0x30;
            bp = bp + 1;
            *(bx + si) = *(bx + si) + al;
        } else {
            dx = 0;
            L0000BE20();
            *(bx + si) = *(bx + si) + al;
            if(al != 1) {
                L0000790D();
                *(bx + si) = *(bx + si) + al;
            }
        }
    }
L00007904:
    *di = 0x80;
    *(bp + si + 0x5b) = *(bp + si + 0x5b) + bl;
}

/* DEST BLOCK NOT FOUND: 00007934 -> 00007949 */
stack space not deallocated on return
/*	Procedure: 0x0000790D - 0x00007947
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000790D()
{



    (restore)cx;
    return;
    cl = 7;
    eax = 361440516;
    >= ? 0x791e : ;
    (save)ds;
    ds = *di;
    if(!( *(bx + si) = *(bx + si) + 361440516)) {
        *(bx + si) = *(bx + si) + al;
        asm("int 0x21");
        (restore)ds;
    }
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bp + di) = *(bp + di) + al)) {
        L00007948();
        *(bx + si) = *(bx + si) + al;
        goto L00007949;
    }
    edx = *di;
    if(!(cx = cr0 & -7)) {
        *(bx + si) = *(bx + si) + al;
        ecx = ecx | edx;
    }
    cr0 = ecx;
}

/*	Procedure: 0x00007948 - 0x00007971
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007948()
{



    asm("rol bx,0x31");
    asm("Unknown opcode 0xdb");
    dx = di;
    *di :: al;
    eax = 567092533;
    cx = 0;
    ecx = *di;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + 567092533;
        *di = cx;
        *di :: 567092533;
    }
    *(bx + si) = *(bx + si) + al;
    bx = bx + 1;
    asm("int 0x21");
    return;
    asm("fsave [bx+si]");
    asm("wait");
    return;
    asm("frstor [bx+si]");
}

stack space not deallocated on return
/*	Procedure: 0x00007972 - 0x000079F0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007972()
{



    asm("wait");
    return;
L00007974:
    (save)bx;
    (save)dx;
    *di :: 0x9d;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + si) = *(bx + si) + al)) {
        dx = 0x2dcb;
        *(bx + si) = *(bx + si) + al;
        bx = 0x2dd0;
        *(0x2dd0 + si) = *(0x2dd0 + si) + al;
        *di = 0x2dcb;
        asm("pushf");
        (save)es;
        *(bx + si) = *(bx + si) + al;
        *di = bx;
        al = *L00000006;
        *(bx + di) = *(bx + di) + dh;
    }
    *(bp - 0x5f) = *(bp - 0x5f) << 0x98;
    *(bx + si) = *(bx + si) + al;
    L0000BE7A(es);
    *(bx + si) = *(bx + si) + al;
    (restore)dx;
    (restore)bx;
    return;
    *di :: 0x9d;
    *(bx + si) = *(bx + si) + ax;
    if(*(bx + si) = *(bx + si) + al) {
        goto L00007974;
    }
    return;
    (save)dx;
    ah = *di;
    asm("pushf");
    *(bx + si) = *(bx + si) + ax;
    *(si + 0x75e4) = *(si + 0x75e4) + al;
    asm("aaa");
    *di = ah;
    asm("popf");
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + dh;
    asm("imul byte [bp+di]");
    asm("rcl byte [bx+si-0x25],0xe3");
    asm("fnstcw [si]");
    al = al & 0x58;
    dl = 0;
    if(al == 3) {
        ax = L00007972();
        asm("Unknown opcode 0xff");
        *(bx + si + 0x88c6) = *(bx + si + 0x88c6) - 1;
        return;
    }
    asm("rol byte [bx+di],1");
    *(bx + si) = *(bx + si) + al;
    *(di + 0xc) = *(di + 0xc) + dh;
    *di = dh;
    asm("pushf");
    *(bx + si) = *(bx + si) + ax;
    *(bx + si + 0x9d15) = *(bx + si + 0x9d15) + cl;
    *(bx + si) = *(bx + si) + ax;
    *(bp + si - 0x3d) = *(bp + si - 0x3d) + bl;
}

/* DEST BLOCK NOT FOUND: 00007ab2 -> 0000605f */
stack space not deallocated on return
/*	Procedure: 0x000079F1 - 0x00007AB9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000079F1()
{



    (restore)dx;
    return;
    *di :: 0x84;
    *(si + 0x1a) = *(si + 0x1a) + dh;
    dx = dx & 65535;
    *(bx + si) = *(bx + si) + al;
    (save)dx;
    (save)ax;
    asm("int3");
    goto L00007a0d;
    (save)di;
    (save)si;
    cx = cx - 1;
    sp = sp + 1;
    bp = bp + 1;
    di = di - 1;
L00007a0d:
    *(bx + si) = *(bx + si) + 1;
    sp = sp + 8;
    return(1);
    return(0);
    (save)bx;
    (save)cx;
    (save)dx;
    *(bp + si) = *(bp + si) - ax;
    *(bx + si) = *(bx + si) + al;
    ah = *di & 0xf8;
    *di = ah;
    *(bp + si) = *(bp + si) - ax;
    *(bx + si) = *(bx + si) + al;
    dl = ah | 4;
    bx = 0x1e8;
    *(0x1e8 + si) = *(0x1e8 + si) + al;
    *di = dl;
    *(bp + si) = *(bp + si) - ax;
    *(bx + si) = *(bx + si) + al;
    goto L00007a9a;
L00007a3d:
    *(bx + si) = *(bx + si) + 0x15;
    ax = L00007C15();
    *(bx + si) = *(bx + si) + al;
    cx = ax;
    if(ax == 0) {
        *(bx + si) = *(bx + si) + 0x15;
        ax = L00007C15();
        *(bx + si) = *(bx + si) + al;
        cx = ax;
        if(ax == 0) {
            dx = 1;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + 0xa4;
            ax = L00005C49();
            asm("Unknown opcode 0xff");
            goto ( *(bx + di + 0xca0));
        }
    }
    *(bx + si) = *(bx + si) + al;
    *(bx + di + 4) = bx;
    *(bx + di) = ax;
    *(bp + di + 8) = cx;
    *(bx + di + 8) = 0;
    *(bx + si) = *(bx + si) + al;
    ax = *(bp + di + 8);
    *(bx + si + 0x14) = 0;
    ax = *(bp + di + 8);
    *di = cx;
    *(bp + di + 0x1ac3) = *(bp + di + 0x1ac3) + *L0000000C;
    *(bx + si + 0xc) = 0;
    *(bx + si) = *(bx + si) + *L0000000C;
L00007a9a:
    dx = *(bp + di + 0xc);
    if(dx != 0) {
        goto L00007a3d;
    }
    *di = dx;
    *di = *si;
    di = di + 1;
    si = si + 1;
    *(bp + si + 0x59) = *(bp + si + 0x59) + bl;
    (restore)bx;
    return;
    ax = 0;
    L00007ABA();
    *(bx + si) = *(bx + si) + al;
    goto L0000605f;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    ax = 5;
}

/*	Procedure: 0x00007ABA - 0x00007B11
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007ABA()
{



    *(bx + si) = *(bx + si) + al;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    dx = ax;
    ax = ((ax << 2) - dx << 2) + dx;
    si = 0x1e8;
    *(bx + 0x1e8) = *(bx + 0x1e8) + al;
    ax = ax + ax;
    si = si + ax;
    *si = *si + *L00000CA0;
    goto L00007b09;
    cx = *(bx + si);
    ax = *(bx + si + 4);
    dx = 1;
    *(bx + si) = *(bx + si) + al;
    if(!( *(bx + si + 0xd) & 0x40) && !( *(bx + si + 0xd) & 8)) {
        if(ax < si) {
            goto L00007b07;
        }
        ax :: 0x26a;
        if(!( *(bx + si) = *(bx + si) + al)) {
            dx = 0;
        }
    }
    L000055A5();
    asm("Unknown opcode 0xff");
    *(bp + di - 0x77) = *(bp + di - 0x77) + 1;
L00007b07:
    asm("enter 0xc085,0x75");
L00007b09:
    asm("ror word [bx+di+0x5ed8],1");
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00007B12 - 0x00007B66
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007B12()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    dx = ax;
    ax :: *di;
    *di = al;
    if(!( *(bx + si) = *(bx + si) + al)) {
        (restore)dx;
        (restore)cx;
        (restore)bx;
        return(0);
    }
    if(ax < 5) {
        bx = ax;
        *(bx + si) = *(bx + si) + *L000005DC;
        bx = bx << 2;
        ax = *L000005DC + bx;
        cl = *(bx + si + 1);
        if(!(cl & 0x40)) {
            *(bx + si + 1) = cl | 0x40;
            ax = dx;
            ax = L00007B88();
            *(bx + si) = *(bx + si) + al;
            if(ax != 0) {
                *(bx + si) = *(bx + si) + *L000005DC;
                *(si + 3) = *(si + 3) | 1;
                *(bx + di + 0x5dc) = *(bx + di + 0x5dc) & *L000005DC;
            }
        }
    }
    *(bx + si) = *(bx + si) + al;
    ax = *si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00007B67 - 0x00007B87
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007B67()
{



    (restore)bx;
    return;
    (save)bx;
    ax = ax << 2;
    if(dx != 0) {
        bx = *di;
        *(bx + si) = *(bx + si) + al;
        dh = dh | 0x40;
        *si = dx;
        bx = bx + *(bp + di - 0x3d);
    }
    bx = *di;
    (fsave)(frestore) + *di + *di;
    *(bx + si) = *(bx + si) + al;
    *si = dx;
    bx = bx + *(bp + di - 0x3d);
}

stack space not deallocated on return
/*	Procedure: 0x00007B88 - 0x00007BA5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007B88()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    bx = ax;
    eax = 0x44 & 0xff;
    asm("int 0x21");
    asm("rcl dx,1");
    asm("ror dx,1");
    0;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00007BA6 - 0x00007BB0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007BA6()
{



    (restore)bx;
    return;
    if(dx == 0) {
        ax = 0;
        return;
    }
    dx :: 0;
}

/* DEST BLOCK NOT FOUND: 00007bb1 -> 00007bae */
/*	Procedure: 0x00007BB1 - 0x00007C14
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007BB1()
{



    == ? L00007bae : ;
    (save)bx;
    (save)dx;
    bx = ax;
    dl = al;
    eax = bl & 0xff;
    ax = L00005C9C();
    asm("Unknown opcode 0xff");
    *(bx + di + 0xfb) = *(bx + di + 0xfb) + 1;
    *(bx + si) = *(bx + si) + ax;
    *(bp + di + 0x36) = *(bp + di + 0x36) + dh;
    *di :: 0xdb;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bp + di) = *(bp + di) + al)) {
        if(bl == 0x50) {
            dl = 0xe;
        } else {
            if(bl >= 0x22) {
                goto L00007bef;
            }
            if(bl < 0x20) {
                goto L00007bea;
            }
            dl = 5;
        }
    } else {
L00007bea:
        if(dl > 0x13) {
L00007bef:
            dl = 0x13;
        }
    }
    eax = dl & 0xff;
    *(bx + si) = *(bx + si) + *(bx + si + 0x5dd);
    ax = *(bx + si + 0x5dd) >> 0x18;
    goto L00007c0a;
    *(bx + si) = *(bx + si) + (bx >> 8 & 0xff);
L00007c0a:
    L00005C72();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    ax = 65535;
    asm("Unknown opcode 0xff");
    *(bp + si + 0x5b)();
}

stack space not deallocated on return
/*	Procedure: 0x00007C15 - 0x00007CF5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007C15()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)es;
    (save)fs;
    (save)gs;
    (save)bp;
    sp = sp - 4;
    di = ax;
    if(ax == 0 || ax > -44) {
        ax = 0;
        goto L00007ce7;
        *(bx + si) = *(bx + si) + al;
    }
    if((bx + si + 0xb & -8) < 0x10) {
        bp = 0x10;
        *(bx + si) = *(bx + si) + al;
    }
    dx = 0;
    *si = 0;
    ax = -1536;
    if(!( *(bx + si) = *(bx + si) + -1536)) {
        cx = *di;
        asm("cld");
        if(cx != 0) {
            goto L00007c70;
        }
    } else {
        cx = 0;
    }
    *di = cx;
    *L00000000 = *L00000000 + al;
    cx = *di;
    asm("clc");
L00007c70:
    while(cx != 0) {
        si = *(bx + di + 0x14);
        *di = cx;
        asm("cld");
        if(si >= di) {
            *(bx + si) = *(bx + si) + 0x5f8;
            dx = ds & 65535;
            *(bx + si) = *(bx + si) + 0x5f8;
            bx = cx;
            ax = di;
            ax = L000081AE();
            *(bx + si) = *(bx + si) + al;
            dx = ax;
            if(ax != 0) {
                goto L00007cdf;
            }
        }
        si :: *di;
        if(!( *L00000000 = *L00000000 + al)) {
            *di = si;
            *L00000000 = *L00000000 + al;
        }
        cx = *(bx + di + 8);
    }
    *si :: 0x24;
    *(di + 0xb) = *(di + 0xb) + dh;
    ax = di;
    *(bx + si) = *(bx + si) + al;
    if(L0000C2A0() == 0) {
        ax = di;
        *(bx + si) = *(bx + si) + al;
        if(L0000C461() == 0) {
            goto L00007cdf;
        }
        *si = 0;
        if(!(al = al & 0xe9)) {
        }
        asm("Unknown opcode 0xff");
        si = si + 1;
    }
    al = al + 0x24;
    cx = cx + bp;
    asm("outsw");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    (save) *(bx + si);
L00007cdf:
    asm("in ax,dx");
    ax = dx;
    *di = ch;
    asm("loopne 0x7cf3");
L00007ce7:
    *(bx + si) = *(bx + si) + al;
    sp = sp + 4;
    (restore)bp;
    (restore)gs;
    (restore)fs;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00007CF6 - 0x00007D0D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007CF6()
{



    (restore)bx;
    return;
    (save)cx;
    cx = bx;
    (save)ax;
    dx = dl << 8;
    dl = dh << 8;
    L0000C46E();
    *(bx + si) = *(bx + si) + al;
    (restore)ax;
}

stack space not deallocated on return
/*	Procedure: 0x00007D0E - 0x00007D1E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D0E()
{



    (restore)cx;
    return;
    (save)bx;
    (save)dx;
    *(1 + si) = *(1 + si) + al;
    dx = 0;
    L00006787();
    asm("Unknown opcode 0xff");
    *(bp + si + 0x5b)();
}

stack space not deallocated on return
/*	Procedure: 0x00007D1F - 0x00007D23
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D1F()
{



    (restore)bx;
    return;
    ax = 65535;
}

/*	Procedure: 0x00007D24 - 0x00007D52
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D24()
{



    asm("Unknown opcode 0xff");
    (save)dx;
    cx = *(bp + di + 0x51)();
    dx = *di;
    al = *L0000000C;
    *(bx + di) = *(bx + di) + dh;
    asm("fucomi st3");
    (save)ss;
    do {
        ax = *(bp + si + 4);
        if(!( *(bx + si + 0xc) & cx)) {
            bx = bx + 1;
            if(!( *(bx + si + 0xd) & 0x10)) {
                L00006646();
                asm("Unknown opcode 0xff");
            }
        }
        asm("Unknown opcode 0xd2");
    } while(*(bp + di + 0x8512) = *(bp + di + 0x8512) - 1);
    ax = bx;
    (restore)dx;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 00007d65 -> 00007d70 */
stack space not deallocated on return
/*	Procedure: 0x00007D53 - 0x00007D6F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D53()
{



    (restore)bx;
    return;
    (save)dx;
    ax = *L000001C4;
    *(bx + si) = *(bx + si) + al;
    *di = 0;
    asm("les ax,[bx+di]");
    *(bx + si) = *(bx + si) + al;
    if(ax != 0) {
        goto L00007D70;
    }
    ah = 1;
    asm("int 0x21");
    *(bx + si) = *(bx + si) + (ax & 0xff);
}

stack space not deallocated on return
/*	Procedure: 0x00007D70 - 0x00007DD8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007D70()
{



    (restore)dx;
    return;
    (save)bx;
    (save)cx;
    bx = dx;
    dx = ax;
    asm("int 0x21");
    if(!(eax = 0x43 & 0xff) && !(bl & 2) && !(cl & 1)) {
        eax = 6 & 0xff;
        asm("stc");
    }
    asm("sbb cx,cx");
    ax = eax;
    bx = ax;
    dx = ax;
    bx = bx & 65535;
    *(bx + si) = *(bx + si) + al;
    dx = dx >> 0x10;
    ax = bx;
    L00007BA6();
    asm("Unknown opcode 0xff");
    return(*(bx + di + 0x5b)());
    (save)cx;
    (save)di;
    cx = ds;
    di = dx;
    dx = ax;
    (save)bx;
    (save)es;
    es = cx;
    ah = 0x56;
    asm("int 0x21");
    asm("rcl ax,1");
    asm("ror ax,1");
    (restore)es;
    (restore)bx;
    dx = ax;
    if(ax < 0) {
        ax = 0;
        eax = edx;
        L00007BB1();
        asm("Unknown opcode 0xff");
        return(*(bx + 0x59)());
    }
    ax = 0;
    (restore)di;
}

stack space not deallocated on return
/*	Procedure: 0x00007DD9 - 0x00007E32
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007DD9()
{



    (restore)cx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)bp;
    bp = ax;
    si = *di;
    >= ? 0x7df4 : ;
    *(bx + si) = *(bx + si) + al;
    if(si != 0 && ax != 0) {
        di = ax;
        (save)es;
        es = ds;
        ecx = -1 & 65535;
        ax = 0;
        asm("repne scasb");
        (restore)es;
        di = !cx - 1;
        goto L00007e26;
L00007e07:
        bx = di;
        dx = bp;
        ax = cx;
        *(bx + si) = *(bx + si) + L0000C511();
        if(ax == 0) {
            *si :: 0x39;
            ax :: 0x775;
            ax = bx + 1 + cx;
            goto L00007e2e;
        }
L00007e26:
        cx = *L0000C985;
        if(si = si + 4) {
            goto L00007e07;
        }
    }
    ax = 0;
L00007e2e:
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00007E33 - 0x00008101
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00007E33()
{



    (restore)bx;
    return;
    (save)0xb0;
    *(bx + si) = *(bx + si) + al;
    L00005054();
    asm("Unknown opcode 0xff");
    ax = *(bx + di + 0x56)();
    (save)di;
    (save)bp;
    sp = sp - 0x94;
    *(bx + si) = *(bx + si) + al;
    (save)ax;
    (save)bx;
    if(ax == 0) {
        *(bx + si) = *(bx + si) + al;
        *si = 0x90;
        al = 0x80;
        cx = 65533;
        *(bx + di + 0x2484) = *(bx + di + 0x2484) - 1;
        asm("cbw");
        *(bx + si) = *(bx + si) + al;
        *(di + 0x75c0) = *(di + 0x75c0) + al;
        (restore)es;
        *(bx + si) = *(bx + si) + 5;
        goto L00007eae;
        *(si + 0x24) = ax;
    }
    asm("Unknown opcode 0xd2");
    if((al = al + 0x85) || *(bp + si) == 0) {
        dx = *si;
        al = al & 0x8b;
        sp = sp + 1;
        al = al & 4;
        *(bx + si) = *(bx + si) + L00008102();
        goto L000080f7;
        *(bx + si) = *(bx + si) + al;
    }
    bx = *(si + 0x24);
    al = al + 0x8b ^ 0x24;
    bp = dx;
L00007e9b:
    if(si < 3) {
        ax = *(si + 0x9824);
        *(bx + si) = *(bx + si) + al;
        al = al + ch;
        asm("jpe 0x7e90");
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        ax = 0xe;
L00007eac:
        *(bx + si) = *(bx + si) + al;
L00007eae:
        ax = L00005C72();
L00007eb1:
        asm("Unknown opcode 0xff");
        (save) *(bx + di);
        cl = cl >> 0x3f;
        al = al + *(bx + si);
        *(di + 65150) = *(di + 65150) + cl;
    }
    *si = di;
    *di = *di << 0xff;
    *(bx + si) = *(bx + si) + (ah & 0xfe);
    *(si + 6) = 0;
    asm("Unknown opcode 0xc0");
    if(!(dh = dh + dh)) {
        if(*(bp + si + 1) != 0x3a) {
            goto L00007ef3;
        }
        eax = *(bp + si) & 0xff;
        ax = L00005CA8();
        asm("Unknown opcode 0xff");
        *(di + 0xa048) = *(di + 0xa048) - 1;
        *(bp + di) = *(bp + si);
        al = *(bp + si + 1);
        bp = bp + si + 2;
        *(bp + di + 1) = al;
    } else {
L00007ef3:
        cx = 0;
        ah = 0x19;
        asm("int 0x21");
        cx = al + 1;
        *(bp + di + 1) = 0x3a;
        *(bp + di) = cl + 0x40;
    }
    al = *di;
    bx = bx + 2;
    if(al != 0x2f) {
        *(bx + si) = *(bx + si) + al;
        if(al != 0x5c) {
            *(bx + si) = *(bx + si) + al;
            si = si + 0x24;
            *(bx + si + 0xb4ca) = *(bx + si + 0xb4ca) | cl;
L00007f21:
            di = di + 1;
            asm("int 0x21");
            asm("rcl ax,1");
            asm("ror ax,1");
            if(ax < 0) {
                ax = *(si + 0x9824);
                *(bx + si) = *(bx + si) + al;
                al = al + ch;
                goto L00007f21;
                asm("Unknown opcode 0xff");
                ax = 1;
                *(bx + si) = *(bx + si) + 1;
                goto L00007eac;
                asm("Unknown opcode 0xff");
                *(di + 0x247c) = *(di + 0x247c) - 1;
            }
            *L0000D88C = *L0000D88C | al;
            es = ax;
            ecx = -1 & 65535;
            ax = 0;
            asm("repne scasb");
            (restore)es;
            dx = !cx - 1;
            (restore)sp;
            if(*(si + 0x24) != 8) {
                al = *si & 0x83;
                asm("clc");
                cl = cl + *bx;
                asm("Unknown opcode 0x82");
                bh = 0;
                asm("Unknown opcode 0xff");
                *(di + 65352) = *(di + 65352) - 1;
                *(bp + di) = 0x5c;
                *si = cx;
                al = al & 0x43;
            }
            si = *si;
            al = al & 0x8d;
            dx = dx + 1;
            *(bx + di) = *(bx + di) + di;
            asm("lock ja 0x7e9b");
            asm("Unknown opcode 0xff");
            *(bx + di + "ice link") = *(bx + di + "ice link") - 1;
            asm("xlatb");
            si = si + 0x24;
            *(bx + di + 0x243c) = *(bx + di + 0x243c) | cl;
            di = bx;
            bx = bx + dx;
            (save)di;
L00007f95:
            al = *L00000788;
            if(al != 0) {
                al = *(bp + 1);
                si = si + 2;
                *(bx + 1) = al;
                di = di + 2;
                if(al != 0) {
                    goto L00007f95;
                }
            }
            (restore)di;
            if(*(bp + di - 1) != 0x5c) {
                al = *si & 0x83;
                asm("clc");
                cl = cl + *bx;
                asm("Unknown opcode 0x82");
                asm("Unknown opcode 0xdd");
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                *(di + 65360) = *(di + 65360) - 1;
                *(bp + di) = 0x5c;
                *si = dx;
L00007fc8:
                al = al & 0x43;
            }
L00007fca:
            if(*di != 0) {
                *(bx + si) = *(bx + si) + al;
                dx = *si;
                if(!(al = al & 0x8d)) {
                    ax = di + 1;
                }
                cl = *di;
                dx = dx - 1;
                if(cl != 0x2e) {
                    *si :: 0x24;
                    cl = cl + *bx;
                    asm("Unknown opcode 0x82");
                    eax = *esi;
                    esi = esi + 4;
                    asm("Unknown opcode 0xfe");
                    asm("Unknown opcode 0xff");
                    *(bx + di + 0x2414) = *(bx + di + 0x2414) - 1;
                    cl = *di;
L00007ff6:
                    *(ax + di) = cl;
                    bx = si;
                    goto L00007fca;
                }
                ch = *(bx + si);
                bp = ax;
                if(ch == 0x2f || ch == 0x5c) {
                    dh = *(bp + di - 1);
                    if(dh != 0x2f && dh != 0x5c) {
                        *(bp + di) = 0x5c;
                        bx = bx + 1;
                    }
                    bp = bp + 1;
                    goto L00007fca;
                }
                if(ch == 0) {
                    goto L0000809d;
                }
                *(bx + si) = *(bx + si) + al;
                if(ch == cl) {
                    *(bx + si) = *(bx + si) + al;
                    bp = bx + si + 1;
                    ch = *di;
                    if(ch == 0x2f || ch == 0x5c) {
                        bp = bp + 1;
                    }
                    ah = *(bp + di - 1);
                    if(ah != 0x2f && ah != 0x5c) {
L0000804e:
                        ax = *(si + 0x9824);
                        *(bx + si) = *(bx + si) + al;
                        al = al + ch;
                        (restore)bp;
                        asm("out 0xff,ax");
                        asm("Unknown opcode 0xff");
                        goto L00007eb1;
                        asm("Unknown opcode 0xff");
                        *(bp + di + 0x2474) = *(bp + di + 0x2474) - 1;
                    }
                    al = al + 0x83;
L00008068:
                    if(bx < si) {
                        goto L0000804e;
                    }
                    ch = *(bp + di);
                    if(ch != 0x2f && ch != 0x5c) {
                        if(ch == 0x3a) {
                            bx = bx + 1;
                            *(bp + di) = 0x5c;
                            goto L00008084;
                        }
                        bx = bx - 1;
                        goto L00008068;
                    }
L00008084:
                    bx = bx + 1;
                    *(bp + di) = 0;
                    goto L00007fc8;
                }
                asm("Unknown opcode 0xff");
                *(bp + di + 0x243c) = *(bp + di + 0x243c) + 1;
                cl = cl + *bx;
                asm("Unknown opcode 0x82");
                (save)es;
                asm("Unknown opcode 0xfe");
                asm("Unknown opcode 0xff");
                *(bx + di + 0x2414) = *(bx + di + 0x2414) - 1;
                goto L00007ff6;
            }
L0000809d:
            asm("Unknown opcode 0xff");
            si = si + 1;
            ax = ax + *(bx + si);
        }
    }
    goto L000080e0;
    di = bp;
    si = *si;
    al = al & 6;
    es = ds;
    ecx = -1 & 65535;
    ax = 0;
    asm("repne scasb");
    (restore)es;
    if(!cx - 1 + 1 > si) {
        goto L00007e9b;
    }
    asm("Unknown opcode 0xff");
    *(bx + di + 0x89ee) = *(bx + di + 0x89ee) - 1;
    asm("fist word [bx-0x76]");
L000080c7:
    (save)es;
    *bx = al;
    if(al != 0) {
        al = *(bp + 1);
        si = si + 2;
        *(bx + 1) = al;
        di = di + 2;
        if(al != 0) {
            goto L000080c7;
        }
    }
    (restore)di;
L000080e0:
    al = *(si + 0x24) + 0xeb;
L000080e6:
    if(!( *(bx + si + 0x2ffa) = *(bx + si + 0x2ffa) | ax)) {
        *(bx + si) = 0x5c;
    }
    ax = ax + 1;
    if(*(bx + si) != 0) {
        goto L000080e6;
    }
    ax = *(si + 0x24);
L000080f7:
    al = al + 0x81;
    asm("les bx,[si+0x0]");
    *(di + 0x5f) = *(di + 0x5f) + bl;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x00008102 - 0x00008191
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008102()
{



    (restore)cx;
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    sp = sp - 0x90;
    *(bx + si) = *(bx + si) + al;
    bp = ax;
    bx = dx;
    si = si + 0x24 + *(bx + si + 0x24);
    asm("Unknown opcode 0xd2");
    ah = 0x47;
    asm("int 0x21");
    asm("rcl ax,1");
    asm("ror ax,1");
    if(ax < 0) {
        *(bx + si) = *(bx + si) + 1;
L0000812a:
        ax = L00005C72();
        asm("Unknown opcode 0xff");
        (save) *(bx + di);
        bl = bl >> 0x55;
    }
    ah = 0x19;
    asm("int 0x21");
    dl = 0x5c;
    al = al + 0x41;
    di = sp;
    *si = al;
    al = al & 0xb4;
    cl :: *(bx + si + 0x2454);
    cl = cl + *(bx + si + 0x2464);
    *L0000D88C = *L0000D88C + ax;
    es = ax;
    ecx = -1 & 65535;
    ax = 0;
    asm("repne scasb");
    cx = !cx - 1;
    (restore)es;
    dx = bx + di + 1;
    if(bp == 0) {
        ax = bx > dx ? bx : dx;
        L00007C15();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xc0");
        if(!( *(bx + di + 0x85c5) = *(bx + di + 0x85c5) - 1)) {
            *(bx + si) = *(bx + si) + 5;
            goto L0000812a;
        }
        bx = dx;
    }
    dx = sp;
    ax = bp;
    L0000C583();
    *(bx + si) = *(bx + si) + al;
    sp = sp + 0x90;
    *(bx + si) = *(bx + si) + al;
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 00008194 -> 0000c5b7 */
/* DEST BLOCK NOT FOUND: 0000819b -> 00006646 */
stack space not deallocated on return
/*	Procedure: 0x00008192 - 0x00008196
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008192()
{



    (restore)bx;
    return;
    goto L0000c5b7;
}

/* DEST BLOCK NOT FOUND: 0000819b -> 00006646 */
/*	Procedure: 0x00008197 - 0x000081AD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008197()
{



    *(bx + si) = *(bx + si) + al;
    if(ax != 0) {
        goto L00006646;
    }
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    L00007D1F();
    asm("Unknown opcode 0xff");
    (save) *(bx + di);
    asm("rol bl,0x0");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x000081AE - 0x0000825D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000081AE()
{



    *(bx + si) = *(bx + si) + al;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    bp = 0;
    if(ax != 0) {
        *(bx + si) = *(bx + si) + al;
        cx = bx + si + 0xb;
        if(cx >= ax) {
            *(bx + si) = *(bx + si) + al;
            di = bx;
            cl = cl & 0xf8;
            ax = *(di + 0x14);
            if(cx < 0x10) {
                cx = 0x10;
                *(bx + si) = *(bx + si) + al;
            }
            if(cx <= ax) {
                *(bx + si) = *(bx + si) + al;
                bx = *(bx + 0x10);
                ax = *(bx + 0xc);
                if(cx <= bx) {
                    ax = *(bx + 0x28);
                    bx = 0;
                }
                si = bx + 0x20;
                do {
                    dx = *(bx + si);
                    if(cx <= dx) {
                        goto L0000820d;
                    }
                    if(dx > bx) {
                        bx = dx;
                    }
                } while(*(bx + si + 8) != si);
                *(bx + 0x14) = bx;
                goto L00008258;
L0000820d:
                *(bx + 0x10) = bx;
                bx = *(bx + 0x18) + 1;
                dx = dx - cx;
                *(bx + 0x18) = bx;
                if(dx >= 0x10) {
                    bx = si;
                    *(bx + di + 0xc5f) = *(bx + di + 0xc5f) | cl;
                    *(bp + di) = dx;
                    *(bx + si) = cx;
                    *(bp + di + 4) = *(bx + si + 4);
                    *(bp + di + 8) = *(bx + si + 8);
                    *(bx + di + 8) = bx;
                    *(bp + si + 4) = bx;
                } else {
                    *(bx + 0x1c) = *(bx + 0x1c) - 1;
                    dx = *(bx + si + 4);
                    *(bx + 0xc) = dx;
                    bx = *(bx + si + 8);
                    *(bp + si + 8) = bx;
                    *(bp + di + 4) = dx;
                }
                dl = *(bx + si) | 1;
                bp = bx + si + 4;
            }
        }
    }
    *(bx + si) = dl;
L00008258:
    ax = bp;
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)cx;
}

/*	Procedure: 0x0000825E - 0x000083AE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000825E()
{



    return;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    cx = bx;
    if(ax != 0) {
        *(bx + si) = *(bx + si) + al;
        bx = bx + si - 4;
        if(!( *(bp + di) & 1)) {
            *(bx + si) = *(bx + si) + al;
            dl = *(bp + di) & 0xfe;
            ax = si;
            asm("adc cx,[bx+di+0xf6ce]");
            if(!( *(bx + di) = *(bx + di) + al)) {
                di = *(bx + si);
                *(bp + di) = dx + di;
                if(ax == *(bx + di + 0xc)) {
                    *(bx + di + 0xc) = bx;
                }
                dx = *(bx + si + 4);
                ax = *(bx + si + 8);
                *(bp + si + 8) = ax;
                *(bx + si + 4) = dx;
                *(bp + 0x1c) = *(bp + 0x1c) - 1;
                goto L00008328;
                *(bx + si) = *(bx + si) + al;
            }
            *(bp + di) = dx;
            ax = *(bx + di + 0xc);
            if(bx < ax) {
                if(bx > *(bx + si + 4)) {
                    goto L00008328;
                }
                *(bx + si) = *(bx + si) + al;
                ax = *(bx + di + 0x28);
                if(bx < ax) {
                    goto L00008328;
                }
                *(bx + si) = *(bx + si) + al;
            } else {
                ax = *(bx + si + 8);
                if(bx < ax) {
                    goto L00008328;
                }
                *(bx + si) = *(bx + si) + al;
                ax = bx + di + 0x20;
                if(bx > *(bx + si + 4)) {
                    goto L00008328;
                }
                *(bx + si) = *(bx + si) + al;
            }
            di = *(bp + 0x1c);
            ax = *(bp + 0x18);
            edx = (bx + 1) / (bx + 1) % (bx + 1) / (bx + 1) & 65535;
            cx = ax;
            if(ax < di) {
                ax = *(bp + 0x18) - di;
                cx = cx + cx;
                if(ax <= di) {
                    cx = 65535;
                    asm("Unknown opcode 0xff");
                }
                (fsave)(frestore) * *(bp + di + 0xf610);
L0000830a:
                return;
                asm("%c cmp dx,-0x1");
                if(!( *(bp + di + 0x103) = *(bp + di + 0x103) - 1)) {
                    dl = dl & 0xfe;
                    ax = ax + dx;
                    if(cx = cx - 1) {
                        goto L0000830a;
                    }
                }
            }
            ax = *(bp + 0xc);
            if(bx < ax) {
                ax = *(bp + 0x28);
            }
L00008328:
            while(bx >= ax) {
                ax = *(bx + si + 8);
                if(bx < ax) {
                    break;
                }
                ax = *(bx + si + 8);
                if(bx < ax) {
                    break;
                }
                ax = *(bx + si + 8);
            }
            dx = *(bx + si + 4);
            di = *(bp + si) + dx;
            cx = *(bp + di);
            if(di == bx) {
                bp = *(bp + si);
                cx = cx + bp;
                *(bp + si) = cx;
                if(bx == *(bp + 0xc)) {
                    *(bp + 0xc) = dx;
                }
                bx = dx;
            } else {
                *(bp + 0x1c) = *(bp + 0x1c) + 1;
                *(bp + di + 8) = ax;
                *(bp + di + 4) = dx;
                *(bp + si + 8) = bx;
                *(bx + si + 4) = bx;
            }
            dx = *(bp + 0x18) - 1;
            *(bp + 0x18) = dx;
            if(bx < *(bp + 0xc) && cx > *(bp + 0x10)) {
                *(bp + 0x10) = cx;
            }
            if(cx > *(bp + 0x14)) {
                *(bp + 0x14) = cx;
            }
        }
    }
    (restore)bp;
    (restore)di;
    (restore)si;
    (restore)cx;
    return;
    (save)dx;
    dx = ax;
    ah = 0x41;
    asm("int 0x21");
    asm("rcl ax,1");
    asm("ror ax,1");
    dx = ax;
    if(ax < 0) {
        ax = 0;
        eax = edx;
        L00007BB1();
        asm("Unknown opcode 0xff");
        *(bp + si - 0x3d)();
    }
    ax = 0;
}

stack space not deallocated on return
/*	Procedure: 0x000083AF - 0x000083B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000083AF()
{



    (restore)dx;
    return;
    ax = sp - *di;
    *(bx + si) = *(bx + si) + 1;
}

/*	Procedure: 0x000083B8 - 0x00008413
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000083B8()
{



    bl = bl + al;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    dx = 0x8000;
    *(bx + si) = *(bx + si) + al;
    ah = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    *di = dx;
    al & 7;
    *(bx + si) = *(bx + si) + al;
    if(ah < 2 || ah > 8) {
        *(bx + si) = *(bx + si) + al;
        if(L0000C6E3() == 1) {
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + 0x1060;
            *(bx + si) = *(bx + si) + 0x1060;
            edi = 0xb;
            esi = 0xb >> 0x10;
            ebx = 0x1060;
            ecx = 0x1060 >> 0x10;
            eax = 835520000;
            asm("sbb eax,eax");
        }
    }
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
}

/* DEST BLOCK NOT FOUND: 0000844a -> 00005bc1 */
/*	Procedure: 0x00008414 - 0x00008573
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008414()
{



    return;
    return;
    (save)bx;
    (save)dx;
    bx = ax;
    *di();
    al = al + 6;
    *(bx + si) = *(bx + si) + al;
    dx = 0xff;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0x10;
    ax = L00006B19();
    asm("Unknown opcode 0xff");
    *(bx + di + 0xe8d8) = *(bx + di + 0xe8d8) - 1;
    *(bx + si) = *(bx + si) + ax + *(bx + si);
    (restore)dx;
    (restore)bx;
    return;
    (save)dx;
    dx = ax;
    *di();
    *(bx + si) = *(bx + si) + al + 6;
    *di();
    *L00000000 = *L00000000 | al;
    ax = dx;
    goto L00005bc1;
    asm("Unknown opcode 0xff");
    *(bx + si) = *(bx + si) + 1;
    (save)bp;
    bp = sp;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 0x40;
    si = ax;
    cx = bx;
    eax = *(bp + di + 0x15) & 0xff;
    *(di - 0x40) = ax;
    al = *(bx + di + 0x15);
    bx = *(bp + di + 8);
    ax = al & 0x5f & 0xff;
    *(bx + si) = *(bx + si) + al;
    if(ax == 0x47) {
        if(bx == 0) {
            bx = 1;
            *(1 + si) = *(1 + si) + al;
        }
        *(di - 0x44) = 4;
        *(bx + si) = *(bx + si) + al;
        di = *(di - 0x40);
        *(bx + si) = *(bx + si) + 1;
        di = di - 2;
        *(di - 0x48) = 1;
        *(di - 0x40) = di;
    } else {
        if(ax == 0x45) {
            di = 1;
            *(bx + si) = *(bx + si) + al;
            *LFFFFFFBD = 1;
            *LFFFFFFB9 = 1;
        } else {
            di = 2;
            *(bx + si) = *(bx + si) + al;
            *LFFFFFFBE = 2;
            *LFFFFFFBA = 0;
        }
    }
    if(!( *(bx + di + 0x1e) & 1)) {
        *(di - 0x44) = *(di - 0x44) | 0x10;
    }
    ax = *(bp + si) + 8;
    *(bp + si) = ax;
    dx = *(bp + si);
    *(di - 0x14) = *(bx + si - 8);
    ax = *(bp + si - 4);
    dx = di - 0x20;
    *(di - 0x10) = ax;
    ax = di - 0x14;
    tword [bp+si] = *(bx + si);
    if(bx == -1) {
        bx = 6;
        *(6 + si) = *(6 + si) + al;
    }
    ax = di - 0x20;
    *(di - 0x4c) = bx;
    *(di - 0x3c) = 0;
    bx = bp + 1;
    edx = di - 0x4c & 65535;
    ax = L00006D51();
    asm("Unknown opcode 0xff");
    *(bp + di + 0xd045) = *(bp + di + 0xd045) - 1;
    *(bx + di + 0x28) = ax;
    *(bx + di + 0x2c) = *(di - 0x2c);
    *(bx + di + 0x30) = *(di - 0x28);
    *(bx + di + 0x34) = *(di - 0x24);
    if(*(di - 0x38) < 0) {
        ax = *(bx + di + 0x20);
        dx = bx + si + 1;
        *(bx + di + 0x20) = dx;
        *si = 6;
        ax = ax - 0x29eb;
    }
    if(!( *(bx + di + 0x1e) & 4)) {
        ax = *(bx + di + 0x20);
        dx = bx + si + 1;
        *(bx + di + 0x20) = dx;
        *si = 6;
        asm("adc dh,dh");
    }
    asm("les ax,[bp+si]");
    if(!(bp = bp - bx)) {
        ax = *(bx + di + 0x20);
        dx = bx + si + 1;
        *(bx + di + 0x20) = dx;
        *si = 6;
        *(si + 0x89da) = *(si + 0x89da) & cl;
    }
    asm("lock lea sp,[di-0xc]");
    (restore)di;
    (restore)si;
    (restore)cx;
    (restore)bp;
    return;
    (save)dx;
    dx = 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0xd4;
    L00005C49();
    asm("Unknown opcode 0xff");
    *(bp + si - 0x3d)();
}

stack space not deallocated on return
/*	Procedure: 0x00008574 - 0x00008707
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008574()
{



    (restore)dx;
    return;
    (save)bp;
    bp = sp;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 0x34;
    di = dx;
    *(di - 0x18) = bx;
    *(di - 0x20) = ax;
L00008587:
    dl = *(bx + si);
    if(dl == 0x20 || dl >= 9 && dl <= 0xd) {
        ax = ax + 1;
        goto L00008587;
    }
    bx = bx + si + 1;
    cl = 0;
    if(dl != 0x2b) {
        if(dl != 0x2d) {
            goto L000085ae;
        }
        ecx = 1 & 0xff;
    }
    ax = bx;
L000085ae:
    bx = 0;
    dh = 0x30;
    *(di - 0x1c) = 0;
L000085b5:
    dl = *(bx + si);
    ax = ax + 1;
    if(dl == 0x2e) {
        if(cl & 8) {
            goto L000085ef;
        }
        cl = cl | 8;
        goto L000085b5;
    }
    if(dl >= 0x30 && dl <= 0x39) {
        if(!(cl & 8)) {
            *(di - 0x1c) = *(di - 0x1c) + 1;
        }
        dh = dh | dl;
        if(dh != 0x30 && bx < 0x13) {
            *(si + 0x2b) = dl;
            asm("rol byte [bp+di-0x80],0xc9");
        }
        al = al + 0xeb;
        asm("Unknown opcode 0xc6");
    }
L000085ef:
    si = 0;
    if(!(cl & 4)) {
        *bx = *bx + al;
        if(dl != 0x65 && dl != 0x45) {
            goto L0000865b;
        }
        dx = bx + si - 1;
        ch = *(bx + si);
        *(di - 0x10) = dx;
        dx = bx + si + 1;
        if(ch != 0x2b) {
            if(ch != 0x2d) {
                goto L0000861e;
            }
            cl = cl | 2;
        }
        ax = dx;
L0000861e:
        cl = cl & 0xfb;
L00008621:
        dl = *(bx + si);
        if(dl >= 0x30 && dl <= 0x39) {
            si :: "orp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
            if(!( *(bx + si) = *(bx + si) + al)) {
                0xa = si * si;
                *(di - 0x14) = si;
                si = (dl & 0xff) + *(di - 0x14) - 0x30;
            }
            cl = cl | 4;
            ax = ax + 1;
            goto L00008621;
        }
        if(!(cl & 2)) {
            si = ~si;
        }
        if(!(cl & 4)) {
            ax = *(di - 0x10);
            goto L0000865c;
L0000865b:
            ax = ax - 1;
        }
L0000865c:
        *(di - 0x20) = ax;
    }
    if(*(di - 0x18) != 0) {
        dx = *(di - 0x18);
        ax = *(di - 0x20);
        *(bp + si) = ax;
    }
    si = si - *(di - 0x1c);
    if(bx > 0x13) {
        si = si + bx - 0x13;
        bx = 0x13;
        *(0x13 + si) = *(0x13 + si) + al;
    }
    while(bx > 0) {
        *(si + 0x2b) :: 0xbf;
        *(di + 4) = *(di + 4) ^ dh;
        si = si + 1;
        bx = bx - 1;
    }
    if(bx == 0) {
        *(bx + 8) = 1602813952;
        al = al + 0x89;
        asm("clc");
        *bx = bx;
        ax = ax ^ di;
    } else {
        ax = di - 0x40;
        *(si + 0x2b) = 0;
        asm("ror byte [di+0xd455],0xe8");
        *di = es;
        *(di + 0x74f6) = *(di + 0x74f6) + al;
        cl = cl | *(di + 0xd445);
        dx = si;
        ax = L00006CF7();
        asm("Unknown opcode 0xff");
        (save)si;
        asm("rol word [bx+di],0x74");
        al = al + 0x80;
        bp = bp - 1;
        (fsave) *(bx + si + 0x458b) - *(bp - 0x77);
        di = di + 1;
        *(bp + di + 0xd845) = *(bp + di + 0xd845) | cl;
        *(bx + 4) = ax;
        *bx = *(di - 0x2c);
        ax = si + 0x1e;
        asm("Unknown opcode 0xff");
        ax :: 0x134;
        if(!( *(bx + si) = *(bx + si) + al)) {
            *(bx + si) = *(bx + si) + 3;
        } else {
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            *(bx + si) = ax < 65228 ? *(bx + si) + 2 : *(bx + si) + 1;
        }
    }
    sp = di - 0xc;
    (restore)di;
    (restore)si;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x00008708 - 0x00008786
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008708()
{



    (restore)bp;
    return;
    (save)bp;
    bp = sp;
    (save)bx;
    sp = sp - 0x14;
    bx = dx;
    dx = di - 0x18;
    ax = L00008574();
    asm("Unknown opcode 0xff");
    *(di + 0x75c0) = *(di + 0x75c0) + 1;
    *(bx + di + 0xf445) = *(bx + di + 0xf445) | cl;
L00008722:
    *(di - 8) = ax;
    goto L00008780;
    ax = *(di - 0x10) & 0x7f & 65535;
    *(bx + si) = *(bx + si) + al;
    ax :: 0x43ff;
    if(!( *(bx + si) = *(bx + si) + al)) {
        ax = L00005C85();
        asm("Unknown opcode 0xff");
        (save)si;
        bp = bp + 1;
        asm("int1");
        *(si + 0xd) = *(si + 0xd) ^ 0xdd;
        *(bx + si) = *(bx + si) + ax + 0x170;
        asm("fchs");
        *(di - 0xc) = (frestore);
        goto L00008780;
        *(bx + si) = *(bx + si) + al;
        *(di - 0xc) = *L00000170;
        *(bx + si) = *(bx + si) + *L00000174;
        goto L00008722;
    }
    ax :: 0x3bcd;
    if(!( *(bx + si) = *(bx + si) + al)) {
        dx = 0;
        L00005C85();
        asm("Unknown opcode 0xff");
        *(bx + di + 0xf455) = *(bx + di + 0xf455) - 1;
        *(di - 8) = dx;
    } else {
        dx = di - 0xc;
        ax = di - 0x18;
        *(bp + si) = tword [bx+si];
    }
L00008780:
    (fsave) *(di - 0xc);
    sp = di - 4;
    (restore)bx;
}

stack space not deallocated on return
/*	Procedure: 0x00008787 - 0x000087D6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008787()
{



    (restore)bp;
    return;
    (save)dx;
    ( *(bx + si + 8) & 0x7f) :: 477462527;
    *(bx + si + 4) :: 0;
    *(bx + si + 0xc75) = *(bx + si + 0xc75) + al;
    if(*(bx + si) == 0) {
        *(bx + si) = *(bx + si) + 3;
        (restore)dx;
        return(3);
    }
    *(bx + si) = *(bx + si) + 2;
    (restore)dx;
    return(2);
    *(bx + si + 8) & 376799231;
    if(*(bx + si + 4) == 0 && *(bx + si) == 0) {
        (restore)dx;
        return(0);
    }
    *(bx + si) = *(bx + si) + 4;
    (restore)dx;
    return(4);
    *(bx + si) = *(bx + si) + 1;
}

stack space not deallocated on return
/*	Procedure: 0x000087D7 - 0x00008CD1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000087D7()
{



    (restore)dx;
    return;
    (save)bx;
    (save)cx;
    cx = ax;
    if(dx < 0x14) {
        bx = *(bx + si) + 1 & 0xff;
        *(bx + si) = *(bx + si) + al;
        if(!( *(bx + si) = *(bx + si) + ah)) {
            while(*(bx + si) != 0) {
                ax = ax + 1;
                dx = dx - 1;
            }
            while(dx > 0) {
                dx = dx - 1;
                *(bx + si) = 0x30;
                ax = ax + 1;
            }
            *(bx + si) = 0;
        }
    }
    ax = cx;
    (restore)cx;
    (restore)bx;
    return;
    (save)bp;
    bp = sp;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    *(bx + si) = *(bx + si) + L0000CCE1();
    (save)L0000CCE1();
    (save)0x47;
    (save) *(di + 0x18);
    bx = *(di + 0x14);
    (save)bx;
    cx = *(di + 0x10);
    (save)cx;
    si = *(di + 0xc);
    (save)si;
    di = *(di + 8);
    (save)di;
    dx = cx;
    L0000CCE7();
    *(bx + si) = *(bx + si) + al;
L0000883c:
    L000087D7();
    asm("Unknown opcode 0xff");
    ax = *(bx + 0x5e)();
    (restore)dx;
    (restore)cx;
    (restore)bx;
    (restore)bp;
    return;
    (save)bp;
    bp = sp;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    dx = *(di + 0x14);
    *(bx + si) = *(bx + si) + L0000CCE1();
    (save)L0000CCE1();
    (save)0x46;
    (save) *(di + 0x18);
    (save)dx;
    cx = *(di + 0x10);
    (save)cx;
    si = *(di + 0xc);
    (save)si;
    di = *(di + 8);
    (save)di;
    bx = cx;
    L0000CCE7();
    *(bx + si) = *(bx + si) + al;
    cx = *(bp + si);
    dx = bx + cx;
    goto L0000883c;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bp + si) = *(bp + si) + cl;
    *bp = *bp + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    asm("adc al,0x0");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + cl;
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + al;
    (save)ds;
    *(bp + si) = *(bp + si) + cl;
    *(bx + si) = *(bx + si) + al;
    asm("adc [bp+si],al");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ch;
    *si = *si + dl;
    *(bx + si) = *(bx + si) + al;
    asm("sbb [bp+di],al");
    *(bx + si) = *(bx + si) + al;
    *(bp + si) = *(bp + si) + dh;
    *L00000000 = *L00000000 + bl;
    *si = *si & al;
    *(bx + si) = *(bx + si) + al;
    *si = *si + bh;
    *(bx + si) = *(bx + si) + ch;
    *(bx + si) = *(bx + si) + al;
    *di = *di - al;
    *(bx + si) = *(bx + si) + al;
    *bp = *bp + al;
    *(bx + si) = *(bx + si) + dh;
    (save)es;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *si = *si + bh;
    *(bx + si) = *(bx + si) + al;
    *bx :: al;
    *(bx + si) = *(bx + si) + al;
    ah = (al ^ *(bx + si)) + bh;
    *(bx + di) = *(bx + di) + 1;
    *(bx + si) = *(bx + si) + al;
    *(bp + si) = *(bp + si) + al;
    *(bp + di) = *(bp + di) + al;
    *si = *si + 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + cl;
    *si = *si + cl;
    bh = bl + dh + cl;
    ax = *(bx + si)();
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ah;
    *(bx + si) = *(bx + si) + dh;
    *bx = *bx + bh;
    *(bx + si) = *(bx + si) + 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0xc0;
    bh = bh + bh;
    asm("cld");
    *(bx + di) = *(bx + di) + al;
    *(bx + si) = *(bx + si) + al;
    *(bp + si) = *(bp + si) + al;
    *(bp + di) = *(bp + di) + al;
    (save)bx;
    *si = *si + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + cl;
    *si = *si + cl;
    di = di - 1;
    *(bx + si) = *(bx + si) + dl;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ah;
    *(bx + si) = *(bx + si) + dh;
    asm("Unknown opcode 0xff");
    asm("aas");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0xc0;
    *(bx + si) = *(bx + si) + ax;
    bp = bp + 1;
    *(bp + si) = *(bp + si) + al;
    ax = ax + 1;
    dx = dx + 1;
    *(bp + di) = *(bp + di) + ax;
    cx = cx + 1;
    bx = bx + 1;
    asm("xchg bx,bx");
    asm("xchg ax,sp");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    ax = L0000a000();
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    asm("cmpsb");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    (save)si;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0x43;
    dx = 0x43;
    al = 0x86;
    bx = bx + 1;
    *(bx + si) = *(bx + si) + 0x86;
    *(bp + di) = 0;
    asm("into");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    asm("salc");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    *(bp + 0x44) = *(bp + 0x44) + dl;
    *(bx + si) = *(bx + si) + al;
    asm("lock inc bx");
    *(bx + si) = *(bx + si) + al;
    asm("cli");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    al = al + *si;
    *(bp + si) = *(bp + si) + cl;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    asm("adc ax,[si+0x0]");
    *si = *si + bl;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    *(bp + 0x44) = *(bp + 0x44) + dl;
    *(bx + si) = *(bx + si) + al;
    *si :: (ax & 0x44);
    *(si + 0x44) = *(si + 0x44) + al;
    *(bx + si) = *(bx + si) + al;
    bp = bp - 1;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    asm("xchg ax,sp");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    ax = L0000a000();
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    asm("cmpsb");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    al = *esi;
    esi = esi + 1;
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0x43;
    dx = 0x43;
    al = 0x86;
    bx = bx + 1;
    *(bx + si) = *(bx + si) + 0x86;
    *(bp + di) = 0;
    asm("into");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    asm("salc");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    (fsave)(frestore) + *(bp + di) + *(bp + di);
    dh = dh + ah;
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    asm("lock inc bx");
    *(bx + si) = *(bx + si) + al;
    asm("cli");
    bx = bx + 1;
    *(bx + si) = *(bx + si) + al;
    al = al + *si;
    *(bp + si) = *(bp + si) + cl;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    asm("adc ax,[si+0x0]");
    *si = *si + bl;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    ax = ax & 0x44;
    *L00000044 = *L00000044 + ch;
    *(bx + di) = *(bx + di) + bh;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    sp = sp + 1;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    bp = bp - 1;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    asm("xchg ax,bx");
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    *di & ax;
    *(di + 0x46) = *(di + 0x46) + ah;
    *(bx + si) = *(bx + si) + al;
    (save)di;
    di = di + 1;
    *(bx + si) = *(bx + si) + al;
    asm("cmc");
    di = di + 1;
    *(bx + si) = *(bx + si) + al;
    (save)dx;
    cx = cx - 1;
    *(bx + si) = *(bx + si) + al;
    asm("pusha");
    dx = dx - 1;
    *(bx + si) = *(bx + si) + al;
    asm("bound cx,[bp+di+0x0]");
    *(bp + si + 0x44) = *(bp + si + 0x44) + dh;
    *(bp + 0x44) = *(bp + 0x44) + cl;
    *(si + 0x46) = *(si + 0x46) + al;
    *(bp + 0x44) = *(bp + 0x44) + cl;
    *(bx + si) = *(bx + si) + bl;
    ax = ax - 1;
    *(bx + si) = *(bx + si) + al;
    es = *si;
    *(bx + di + 0x4a) = *(bx + di + 0x4a) + al;
    *(bp + 0x44) = *(bp + 0x44) + cl;
    cl = cl + dl;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    return;
    bp = bp + 1;
    *(bx + si) = *(bx + si) + al;
    *L00000046 = ax;
    *(di + 0x47) = *(di + 0x47) + dl;
    *(bp + di) = *(bp + di) + bh;
    ax = ax - 1;
    *(bx + si) = *(bx + si) + al;
    asm("xchg ax,sp");
    *(bx + si) = *(bx + si) + al;
    *L0000004A = al;
    *(bp + si + 0x4b) = *(bp + si + 0x4b) + ah;
    ch = cx - 1 + cx - 1;
    sp = sp + 1;
    *(bx + si) = *(bx + si) + al;
    asm("aam 0x45");
    *(bx + si) = *(bx + si) + al;
    cl = cl + dl;
    di = 0x47;
    *(bx + si) = *(bx + si) + al;
    (restore)bx;
    ax = ax - 1;
    *(bx + si) = *(bx + si) + al;
    asm("Unknown opcode 0xc7");
    cx = cx - 1;
    *(bx + si) = *(bx + si) + al;
    asm("ror byte [bp+si+0x0],0x0");
    goto L00000900;
    bp = bp + 1;
    *(bx + si) = *(bx + si) + al;
    asm("in ax,0x45");
    *(bx + si) = *(bx + si) + al;
    *(bp + 0x44) = *(bp + 0x44) + cl;
    *(bp + di + 0x48) = *(bp + di + 0x48) + bh;
    *(bx + si) = *(bx + si) + al;
    (fsave) *bp * *(bx + di);
    dx = dh + bl - 1;
    *(bx + si) = *(bx + si) + al;
    asm("sbb cl,[si+0x0]");
    *(bx + si) = *(bx + si) + ch;
    bp = bp + 1;
    *(bx + si) = *(bx + si) + al;
    ax = ax + *bp;
    dl = dl + bh;
    si = si + 1;
    *(bx + si) = *(bx + si) + al;
    (restore)es;
    cx = cx - 1;
    *(bx + si) = *(bx + si) + al;
    asm("sahf");
    ax = ax - 1;
    *(bx + si) = *(bx + si) + al;
    es = *si;
    bh = bh + bh;
    dx = dx - 1;
    *(bx + si) = *(bx + si) + al;
    (restore)ds;
    sp = sp - 1;
    *(bx + si) = *(bx + si) + al;
    di = di + 1;
    bp = bp + 1;
    *(bx + si) = *(bx + si) + al;
    bx = bx + 1;
    si = si + 1;
    *(bx + si) = *(bx + si) + al;
    asm("sbb [bx+0x0],ax");
    *(bp + 0x44) = *(bp + 0x44) + cl;
    cl = cl + al;
    ax = ax - 1;
    *(bx + si) = *(bx + si) + al;
    asm("daa");
    dx = dx - 1;
    *(bx + si) = *(bx + si) + al;
    *(bp + di) = *(bp + di) & cl;
    *(di + 0x4c) = *(di + 0x4c) + bl;
    *(bx + si) = *(bx + si) + al;
    ebp = ebp + 1;
    *(bx + si) = *(bx + si) + al;
    (save)di;
    si = si + 1;
    *(bx + si) = *(bx + si) + al;
    *bx :: al;
    *(bx + di + 0x49) = *(bx + di + 0x49) + ch;
    ax = ah + ah - 1;
    *(bx + si) = *(bx + si) + al;
    (save)dx;
    dx = dx - 1;
    *(bx + si) = *(bx + si) + al;
    cx = cx + 1;
    bx = bx - 1;
    *(bx + si) = *(bx + si) + al;
    asm("bound cx,[si+0x0]");
    *(bx + si + 0x4c) = *(bx + si + 0x4c) + bh;
    *(bp + si + 0x4d) = *(bp + si + 0x4d) + bl;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bx + di + 0x53) = *(bx + di + 0x53) + al;
    bh = bh + bh;
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    ax = L0000ff00();
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    asm("int 0x4c");
    *(bx + si) = *(bx + si) + al;
    asm("cmpsb");
    bp = bp - 1;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x53) = *(bp + 0x53) + dl;
    *(bp + 0x4d) = *(bp + 0x4d) + ah;
    cl = cl + ch;
    (save)sp;
    *(bx + si) = *(bx + si) + al;
    asm("cmpsb");
    bp = bp - 1;
    *(bx + si) = *(bx + si) + al;
    asm("loop 0x8b86");
    *(bx + si) = *(bx + si) + al;
    cx = *si;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    dl = dl + ah;
    sp = sp - 1;
    *(bx + si) = *(bx + si) + al;
    (save)ds;
    (save)sp;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *L00000054 = *L00000054 + bl;
    ah = ah + dh;
    sp = sp - 1;
    *(bx + si) = *(bx + si) + al;
    asm("outsb");
    (save)sp;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    ah = ah + dh;
    sp = sp - 1;
    *(bx + si) = *(bx + si) + al;
    asm("outsb");
    (save)sp;
    *(bx + si) = *(bx + si) + al;
    *di :: dl;
    *(bp + 0x54) = *(bp + 0x54) + ch;
    *(bx + si) = *(bx + si) + al;
    (save)es;
    bp = bp - 1;
    *(bx + si) = *(bx + si) + al;
    asm("into");
    bp = bp - 1;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + di) = *(bp + di) + ah;
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    *di = eax;
    di = di + 4;
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    dx = dx - 1;
    (save)sp;
    *(bx + si) = *(bx + si) + al;
    asm("lds dx,[di+0x0]");
    *(bx + di) = *(bx + di) + al;
    (save)di;
    *(bx + si) = *(bx + si) + al;
    asm("sbb cx,[di+0x0]");
    *(bx + 0x4e) = *(bx + 0x4e) + cl;
    *(bx + si) = *(bx + si) + al;
    asm("xchg ax,si");
    (save)dx;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    al = al + al;
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    (restore)sp;
    (save)sp;
    *(bx + si) = *(bx + si) + al;
    asm("adc al,0x56");
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bx + si) = *(bx + si) + dh;
    bp = bp - 1;
    *(bx + si) = *(bx + si) + al;
    asm("xchg dl,[bx+si+0x0]");
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    ch = ch + dl;
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + di + 0x56) = *(bp + di + 0x56) + ah;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(di + 0x4d) = *(di + 0x4d) + al;
    *(bx + si) = *(bx + si) + al;
    al = *L00000051;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    dl = dl + ch;
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + si + 0x56) = *(bp + si + 0x56) + dh;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *bx = *bx + cl;
    dx = dx + 1;
    *(bx + si) = *(bx + si) + al;
    asm("cmovc ax,[bx+si]");
    *(bx + si + 0x40) = *(bx + si + 0x40) + al;
    al = al + *(bp + di);
    cx = cx + 1;
    ax = ax + 1;
    cx = cx + 1;
    ax = ax + 1 + 1 + 1;
    cx = (cl | *(bp + di)) + 1;
    ax = ax + 1;
    cx = cx + 1;
    ax = ax + 1 + 1;
    asm("adc [bp+si],dx");
    asm("adc ax,[bx+si+0x40]");
    (save)ss;
    ax = ax + 1 + 1 + 1;
    asm("sbb bl,[bp+di]");
    (save)ds;
    *(bp + si) = *(bp + si) & sp;
    ax = ax + 1 + 1 + 1 + 1 & *(bx + di + 0x40);
    cx = cx + 1;
    asm("daa");
    *(bp + si) = *(bp + si) - bp;
    ax = ax + 1 - *(bx + di + 0x40);
    cx = cx + 1;
    asm("das");
    *(bp + si) = *(bp + si) ^ si;
    ax = ax + 1 ^ *(bx + di + 0x35);
    cx = cx + 1;
    asm("aaa");
    *(bp + si) :: di;
    ax + 1 :: *(bx + di + 0x3d);
    cx = cx + 1;
    asm("aas");
    asm("sti");
    asm("pusha");
    bp = sp;
    (save) *(di + 0x40);
    *(di - 6) = *(di + 0x3c);
    *(di + 0xc) = *(di + 0x38);
    L00008CD2( *(di + 0x44));
    *(bx + si) = *(bx + si) + al;
    (restore)ds;
    (restore)es;
    asm("popa");
    asm("iret");
    asm("xchg bx,bx");
    asm("sti");
    al = *(si + 0x24) | 0x36;
    (save) *(bx + si + 0x14);
    (save) *%ss:bx+si+0x10];
    (save)ax;
    (save)ax;
    (save)ax;
    (save) *%ss:bx+si];
    (save)cx;
    (save)dx;
    (save)bx;
    (save) *%ss:bx+si+0x1c];
    (save)bp;
    (save)si;
    (save)di;
    (save)es;
    (save)ds;
    *(si + 0x24) = ss;
    ch = ch + al;
    *(bx + si + 1) = *(bx + si + 1) + al;
    *bx = *bx + bl;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)ax;
    bp = ax;
    (restore)ax;
    (restore)bx;
    (restore)dx;
    (restore)ax;
    asm("xchg ax,[si]");
    al = al & 0x36;
    (restore) *(bx + si);
    sp = sp + 8;
    (restore) *%ss:bx+si+0x10];
    sp = sp + 4;
    ax = *%ss:bx+si];
    asm("iret");
    asm("xchg bx,bx");
    sp = sp - 0xc;
    asm("sti");
    (save)ax;
    (save)cx;
    (save)dx;
    (save)bx;
    (save)sp + 0x1c;
    (save)bp;
    (save)si;
    (save)di;
    (save)es;
    (save)ds;
    *(si + 0x24) = ss;
    ch = ch + al;
    *(bx + si) = *(bx + si) | al;
    *(bx + si) = *(bx + si) + al;
    (restore)ds;
    (restore)es;
    asm("popa");
    sp = sp + 0xc;
}

/*	Procedure: 0x00008CD2 - 0x00008EC5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008CD2()
{



L00008cd2:
    asm("iret");
    bp = sp;
    si = *(di + 0x38);
    ds = *(di + 0x3c);
    ecx = *(di + 4);
    edx = *(di + 6);
    al = *L00009B3C;
    <= ? L00008d50 : ;
L00008cec:
    *(bx + si) = *(bx + si) + al;
L00008cee:
    if((al & 0xf8) == 0xd8) {
        *(bx + si) = *(bx + si) + al;
        ah = *(bp + 1);
        si = si + 2;
        al = al & 7;
        if(ah < 0xc0) {
            *(bx + si) = *(bx + si) + al;
            bl = ah;
            *(bx + si) = *(bx + si) + al;
            bl = ah >> 3 & 0x1807 | ah >> 3 & 0x1807;
            bh = 0;
            ax = *si();
            asm("popf");
            asm("cbw");
            ax :: 0;
            es = ecx;
            *(di + 0x38) = si;
            si = bx;
            bl = ah & 0x38 | al;
            L00005BFE();
            asm("Unknown opcode 0xff");
            *(di + 0x142d) = *(di + 0x142d) - 1;
            (save)es;
            *(bx + si) = *(bx + si) + al;
            di = *%ds:di+0x76];
            goto ( *si);
            asm("popf");
            (restore)ax;
L00008d4c:
            al = *L00009B3C;
            if(*%ds:bx+si] = *%ds:bx+si] + al) {
                goto L00008cee;
            }
            == ? L00008d78 : ;
            if(al != 0x26) {
                if(al != 0x2e) {
                    if(al == 0x36) {
                        goto L00008d8d;
                    }
                    if(al == 0x3e) {
                        goto L00008d84;
                    }
                    if(al == 0x64) {
                        goto L00008d9f;
                    }
                    if(al == 0x65) {
                        goto L00008da7;
                    }
                    if(al != 0x66) {
                        if(al != 0x67) {
                            goto L00008cec;
                        }
                        asm("Unknown opcode 0xff");
                        *(bp - 0x15) = *(bp - 0x15) + 1;
                    }
                    *(bp - 0x75) = *(bp - 0x75) << 1;
                }
                bp = bp - 1;
                al :: 0x8b;
                asm("rol word [bp-0x15],1");
                asm("enter 0x8b66,0x4d");
L00008d84:
                al = al + 0x8b;
                asm("rol word [bp-0x15],1");
                di = 0x8b66;
L00008d8d:
                bp = bp - 1;
                (save)es;
                dx = cx;
                si = si + 1;
                goto L00008d4c;
            }
            ecx = *(di + 8);
            dx = cx;
            si = si + 1;
            goto L00008d4c;
L00008d9f:
            ecx = fs;
            dx = cx;
            si = si + 1;
            goto L00008d4c;
L00008da7:
            ecx = gs;
            dx = cx;
            si = si + 1;
        }
        goto L00008d4c;
        *(di + 0x38) = si;
        L00005BFE();
        asm("Unknown opcode 0xff");
        *(di + 0x142d) = *(di + 0x142d) - 1;
        (save)es;
        *(bx + si) = *(bx + si) + al;
        dl = ah & 0x38 | al;
        di = *%ds:di+0x76];
        bx = ah & 7;
        asm("Unknown opcode 0x2e");
        asm("Unknown opcode 0x0f");
        bh = 0xb7;
        asm("lock cmp al,0x0");
        *(bp + di) = *(bp + di) + al;
        asm("rep and si,+0x7");
        dh = 3;
        asm("imul byte [0x24ff]");
        asm("xchg ax,bp");
        (restore)ax;
        asm("aas");
    }
    *(bx + si) = *(bx + si) + al;
    return;
    bx = si + 0x2f;
    asm("sbb al,0xba");
    bh = bh + bh;
    asm("Unknown opcode 0xff");
    ax = ax << 0x19;
    if(!( *(bp + di + "n") = *(bp + di + "n") - 1)) {
        != ? 0x8e02 : ;
        if(*(bp + di) == 0) {
            dx = dx + dx;
        }
        *(bp + di + 4) = *(bp + di + 4) + 0x100;
        if(!( *(bx + si) = *(bx + si) + al)) {
            *(bp + di + 4) = 0;
            *(bx + si + 65382) = *(bx + si + 65382) + al;
            bx = bx + 1;
            *(bx + di) = *(bx + di) | ah;
        }
    }
    (save)bx;
    *(bx + si) = *(bx + si) + al + 0xc7 + *(bx + si);
    cl = cl + ch;
    al = 0xfe;
    asm("Unknown opcode 0xff");
    *(di + 0x2f5c) = *(di + 0x2f5c) - 1;
    asm("sbb al,0xba");
    al = al + bh;
    asm("Unknown opcode 0xff");
    asm("loopne 0x8e48");
    if(!( *(bp + di + 0xc103) = *(bp + di + 0xc103) - 1)) {
        != ? 0x8e38 : ;
        dx = dx + dx;
        *(bp + di) = *(bp + di) + 0x800;
        asm("adc word [bp+di+0x4],+0x0");
        if(!( *(bx + si) = *(bx + si) + al)) {
            *(bp + di + 4) = 0;
            *(bx + si + 65382) = *(bx + si + 65382) + al;
            bx = bx + 1;
        }
    }
    asm("adc bp,cx");
    while(*(bx + di) = *(bx + di) | ah) {
    }
    asm("Unknown opcode 0xff");
    *(bx + si + 0x3e) = *(bx + si + 0x3e) + 1;
    edx = *(di + 4) & 170834175;
    al = 0x8a;
    0x8a :: 0;
    *%ds:di+0x4] = edx;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    *( *%cs:bx+0x3d42] + si) = *( *%cs:bx+0x3d42] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    *( *(bx + 0x3cee) + si) = *( *(bx + 0x3cee) + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(bx + si + 0x3e) = *(bx + si + 0x3e) + 1;
    edx = *(di + 4) & 170834175;
    al = 0x8a;
    0x8a :: 0;
    *%ds:di+0x4] = edx;
    goto L00008CD2;
}

/*	Procedure: 0x00008EC6 - 0x00008ECF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008EC6()
{



    asm("Unknown opcode 0xff");
    (save) *(bx + si + 0xb404);
    *(bx + si) = *(bx + si) + ax - 0x15;
}

/*	Procedure: 0x00008ED0 - 0x00008ED9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008ED0()
{



    bl = bl + al;
    al = 1;
    ah = 0x81;
    L00008EE4();
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x00008EDA - 0x00008EE3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008EDA()
{



    bl = bl + al;
    al = 8;
    ah = 0x84;
    L00008EE4();
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 00009026 -> 0000632f */
/* DEST BLOCK NOT FOUND: 0000902e -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009088 -> 00008eaa */
/* DEST BLOCK NOT FOUND: 000090a4 -> 00008e54 */
/* DEST BLOCK NOT FOUND: 0000915e -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 0000916f -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009180 -> 00008e6b */
/* DEST BLOCK NOT FOUND: 0000919e -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 000091de -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 000091f2 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 0000925a -> 00008eaa */
/* DEST BLOCK NOT FOUND: 00009276 -> 00008e54 */
/* DEST BLOCK NOT FOUND: 0000936c -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009390 -> 00008e6b */
/* DEST BLOCK NOT FOUND: 000093f6 -> 00008eaa */
/* DEST BLOCK NOT FOUND: 00009416 -> 00008e54 */
/* DEST BLOCK NOT FOUND: 0000952f -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009562 -> 00008e6b */
/* DEST BLOCK NOT FOUND: 00009577 -> 00008e6b */
/* DEST BLOCK NOT FOUND: 000095c2 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 0000965b -> 00008eaa */
/* DEST BLOCK NOT FOUND: 00009679 -> 00008e54 */
/* DEST BLOCK NOT FOUND: 0000973d -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009785 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 000097ba -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 000097fd -> 00008e6b */
/* DEST BLOCK NOT FOUND: 00009826 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 0000988f -> 00008eaa */
/* DEST BLOCK NOT FOUND: 000098a1 -> 00008e54 */
/* DEST BLOCK NOT FOUND: 00009969 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 000099dc -> 00008eaa */
/* DEST BLOCK NOT FOUND: 00009a59 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009aa2 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009aeb -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009b7d -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009c21 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009cf1 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009d16 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009d3b -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009f1c -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009fb9 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009fe5 -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 00009ff7 -> 00008eaa */
/* DEST BLOCK NOT FOUND: 0000a009 -> 00008e54 */
/* DEST BLOCK NOT FOUND: 0000a035 -> 00008e6b */
/* DEST BLOCK NOT FOUND: 0000a160 -> 00008e54 */
/* DEST BLOCK NOT FOUND: 0000a37a -> 00008cd2 */
/* DEST BLOCK NOT FOUND: 0000a445 -> 00008cd2 */
stack space not deallocated on return
/*	Procedure: 0x00008EE4 - 0x0000A49B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00008EE4()
{



    bl = bl + al;
    *%ds:di+0x4] = *%ds:di+0x4] | al;
    if(!( *%ds:di+0x0] & al)) {
        (save)si;
        (save)di;
        (save)cx;
        (save)es;
        (save)ds;
        sp = sp - 0x6c;
        es = ss;
        si = bp;
        di = sp;
        cx = 0x1b;
        *(bx + si) = *(bx + si) + al;
        asm("cld");
        asm("rep movsw");
        ax = ah & 0xff;
        ax = *di();
        (fsave) *(bx + di);
        *(bx + si) = *(bx + si) + al;
        es = ds;
        ds = ss;
        di = bp;
        si = sp;
        cx = 0x1b;
        *(bx + si) = *(bx + si) + al;
        asm("cld");
        asm("rep movsw");
        sp = sp + 0x6c;
        (restore)ds;
        (restore)es;
        (restore)cx;
        (restore)di;
        (restore)si;
    }
    return;
    ebx = *(di + 0x28) & 65535;
    return;
    ebx = *(di + 0x24) & 65535;
    return;
    ebx = *(di + 0x20) & 65535;
    return;
    ebx = *(di + 0x1c) & 65535;
    return;
    ebx = *(di + 0x18) & 65535;
    cx = dx;
    return;
    bx = *L0000C683;
    al = al + 0xc3;
    ebx = *(di + 0x10) & 65535;
    return;
    ebx = *(di + 0xc) & 65535;
    return;
    (restore)bp;
    bl = *L00000346 - al;
    bx = *L00000346;
    (restore)bp;
    al = al & 0xc3;
    (restore)bp;
    bl = *L00000346 & al;
    bx = *L00000346;
    (restore)bp;
    asm("sbb al,0xc3");
    bx = *L00000346;
    (restore)bp;
    asm("sbb [bp+di+0xc3ca],cl");
    bx = *L00000346;
    (restore)bp;
    asm("adc al,0x8b");
    asm("retf 0xfc3");
    si = 0x461e;
    bx = bx + *(di + 0x10);
    return;
    bx = *L00000346;
    (restore)bp;
    al = al | 0xc3;
    al = al + 3;
    (restore)bp;
    bl = *L0000C683 - al;
    bx = *L0000C683;
    al = al + 3;
    (restore)bp;
    al = al & 0xc3;
    al = al + 3;
    (restore)bp;
    bl = *L0000C683 & al;
    bx = *L0000C683;
    al = al + 3;
    (restore)bp;
    asm("sbb al,0xc3");
    bx = *L0000C683;
    al = al + 3;
    (restore)bp;
    asm("sbb [bp+di+0xc3ca],cl");
    bx = *L0000C683;
    al = al + 3;
    (restore)bp;
    asm("adc al,0x8b");
    asm("retf 0x8bc3");
    (save)ds;
    si = si + 4;
    bx = bx + *(di + 0x10);
    return;
    bx = *L0000C683;
    al = al + 3;
    (restore)bp;
    al = al | 0xc3;
    bl = *L00005346 & 7;
    bl = ah >> 3 & 0x18 | ah >> 3 & 0x18;
    bh = 0;
    ax = *si();
    asm("popf");
    asm("clc");
    ax :: 0;
    (restore)dx;
    (save)cx;
    cx = dx;
    dl = dl & 0x38;
    if(dl != 0x20) {
        dx = ~(dx >> 1);
        dx = *(si + 0x15);
        al = 0;
        goto L0000632f;
        asm("loop 0x902e");
        asm("ficomp dword [bx+di-0x3d]");
    }
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = di + 0x6c;
    L0000AE8A();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("%e adc al,0x0");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9079");
    ax = *L0000558D;
    asm("insb");
    L0000AE8A();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("insb");
    asm("sbb [bx+si],ax");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9098");
    ax = *L0000558D;
    asm("insb");
    ax = L0000AE8A();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008eaa;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = di + 0x6c;
    L0000AE8A();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008e54;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = di + 0x6c;
    L0000AE8A();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("xchg dl,[bp+di]");
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    ax = *%es:0x558d];
    asm("insb");
    L0000AE8A();
    *(bx + si) = *(bx + si) + al;
    ax = di + 0x6c;
    dx = si + 0x2f;
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("adc ax,[eax]");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x910e");
    ax = *L0000558D;
    asm("insb");
    L0000AE8A();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    asm("sbb al,0xe8");
    if(!(bx = si + 0x2f)) {
        *(bx + si) = *(bx + si) + al;
        goto ( *ds);
        ax = *%es:0x558d];
        asm("insb");
        L0000AE8A();
        *(bx + si) = *(bx + si) + al;
        ax = di + 0x6c;
        dx = si + 0x2f;
    }
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    (restore)bp;
    (save)ss;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    ax = *%es:0x548d];
    asm("das");
    asm("sbb al,0xe8");
    asm("%c sbb ax,0x0");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0xe8");
    asm("xlatb");
    asm("sbb ax,[bx+si]");
    *L00000689 = *L00000689 + ah;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0xe8");
    asm("Unknown opcode 0xc6");
    asm("sbb ax,[bx+si]");
    *L00000689 = *L00000689 + ah;
    goto L00008e6b;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    cx = 7;
    *(bx + si) = *(bx + si) + al;
    (save)ds;
    (save)es;
    eax = es;
    es = ds;
    ds = eax;
    di = bp;
    asm("rep movsw");
    (restore)es;
    (restore)ds;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L00008b66);
    (save)es;
    *%ds:di+0x0] = eax;
    eax = eax & 1030095616;
    if(!( *(bp + di) = *(bp + di) + al)) {
        dx = di;
        *(bx + si) = *(bx + si) + (al ^ 0x41);
        *%ds:di+0x7a] = dx;
    } else {
        eax :: 208994816;
        dx = di;
        *(bp + si) & al;
        *L00005589 = *L00005589 + bh;
        asm("jpe 0x91be");
        cl = cl | *(di + 0x4815);
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x7a] = dx + 1;
    }
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    cx = 7;
    *(bx + si) = *(bx + si) + al;
    bx = di;
    di = si;
    si = bp;
    asm("rep movsw");
    di = bx;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *%es:0xcfe9] = *%ds:di+0x0];
    asm("cli");
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = di + 0x6c;
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    (save)sp;
    asm("adc al,[bx+si]");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x924b");
    ax = *L0000558D;
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    L00003e00();
    goto ( *(di + 0x7a));
    ax = *%es:0x558d];
    asm("insb");
    ax = L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008eaa;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = di + 0x6c;
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008e54;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = di + 0x6c;
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    *(bx + si) = *(bx + si) + 0x11;
    goto ( *ds);
    ax = *%es:0x558d];
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = di + 0x6c;
    dx = si + 0x2f;
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("xchg ax,bp");
    asm("adc [bx+si],ax");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x92e0");
    ax = *L0000558D;
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    *di = al;
    di = di + 1;
    asm("adc al,0x0");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x92ff");
    ax = *L0000558D;
    asm("insb");
    ax = L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = di + 0x6c;
    dx = si + 0x2f;
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    dx = *si;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    ax = *%es:0x548d];
    asm("das");
    asm("sbb al,0xe8");
    di = di - 1;
    asm("sbb [bx+si],ax");
    cl = cl + ch;
    asm("lahf");
    asm("stc");
    asm("Unknown opcode 0xff");
    asm("sbb al,0xff");
    di = 0;
    if(!( *(di + 0x2f5c) = *(di + 0x2f5c) - 1)) {
        (save) *(bp + 6);
        ax = si + 0x2f;
    }
    asm("sbb al,0x3e");
    edx = *di & -35124224;
    asm("sbb ax,[bx+si]");
    *(di + 0x2f44) = *(di + 0x2f44) + cl;
    asm("sbb al,0xe8");
    *(0x18 + si) = *(0x18 + si) + al;
    *%es:0x5c8d] = ax;
    asm("das");
    asm("sbb al,0x8f");
    bx = bx + 1;
    *(bp + di + 4) = es;
    (restore) *(bp + di);
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x3e");
    edx = *di & -840430592;
    asm("sbb ax,[bx+si]");
    *(di + 0x2f44) = *(di + 0x2f44) + cl;
    asm("sbb al,0xe8");
    asm("sbb word [bx+si],+0x0");
    *L00000689 = *L00000689 + ah;
    goto L00008e6b;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = *%es:bp+0x4];
    bx = di + 0x6c;
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("rcl byte [bx+si],0x0");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x93df");
    (save)si;
    al = *L00008B26 + 0x8d;
    (restore)bp;
    asm("insb");
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    dl = dl + *L00000000;
    goto ( *ds);
    ax = *%es:0x8b26];
    (save)si;
    al = al + 0x8d;
    (restore)bp;
    asm("insb");
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008eaa;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = *%es:bp+0x4];
    bx = di + 0x6c;
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008e54;
    asm("Unknown opcode 0xff");
    goto ( *L0000068b);
    dx = *%es:bp+0x4];
    bx = di + 0x6c;
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("adc [bx+si],dl");
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    (save)si;
    al = *%es:0x8b26] + 0x8d;
    (restore)bp;
    asm("insb");
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = di + 0x6c;
    dx = si + 0x2f;
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("in ax,dx");
    asm("sldt [bx+si]");
    goto ( *ds);
    (save)si;
    al = *%es:0x8b26] + 0x8d;
    (restore)bp;
    asm("insb");
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("Unknown opcode 0xfe");
    asm("adc al,[bx+si]");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x94ab");
    (save)si;
    al = *L00008B26 + 0x8d;
    (restore)bp;
    asm("insb");
    L0000ACC3();
    *(bx + si) = *(bx + si) + al;
    ax = di + 0x6c;
    dx = si + 0x2f;
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("fist dword [bp+si]");
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    ax = *%es:0x4489];
    asm("das");
    asm("sbb al,0x26");
    *(si + 0x2f) = *(bp + 4);
    *L00008B66 = *L00008B66 & ah;
    si = si + 1;
    *(bp - 0x77) = *(bp - 0x77) | ah;
    sp = sp + 1;
    asm("das");
    al = al & 0xe9;
    asm("loop 0x94e7");
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    (save)si;
    al = *%es:0x8b26] + 0x8d;
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("xchg ax,si");
    (restore)ss;
    *(bx + si) = *(bx + si) + al;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0xe8");
    *(bx + si) & bx;
    *(bx + si) = *(bx + si) + al;
    *%es:0x8926] = ax;
    (save)si;
    al = al + 0xe9;
    si = di;
    asm("Unknown opcode 0xff");
    *(bp + di + 0x2f44) = *(bp + di + 0x2f44) - 1;
    asm("sbb al,0x26");
    *L0000448B = ax;
    asm("das");
    *L00004689 = *L00004689 & ah;
    al = al + 0x66;
    *(bp + 8) = *(si + 0x2f) & 0x26;
    goto L00008e6b;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0xe8");
    (save)dx;
    asm("sbb [bx+si],al");
    *L00000689 = *L00000689 + ah;
    *%es:bp+0x4] = dx;
    goto L00008e6b;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    cx = 7;
    *(bx + si) = *(bx + si) + al;
    (save)ds;
    (save)es;
    eax = es;
    es = ds;
    ds = eax;
    di = bp;
    asm("rep movsw");
    bx = *%es:di+0x4] & 0x3800;
    *(bx + si) = *(bx + si) + al;
    bx = bx >> 0xb;
    bx = si;
    asm("wait");
    bx = bx + bx;
    *%es:di+0x76] = bx;
    cx = 8;
    *( *%es:di+0x76] + si) = *( *%es:di+0x76] + si) + al;
    di = si + 0x1d;
    asm("sbb al,0xa5");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0x9b;
    goto L0000e200;
    asm("out dx,al");
    (restore)es;
    (restore)ds;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    cx = 7;
    *(bx + si) = *(bx + si) + al;
    bx = di;
    di = si;
    si = bp;
    asm("rep movsw");
    cx = 8;
    *(bx + si) = *(bx + si) + al;
    si = si + 0x2b;
    asm("sbb al,0xa5");
    *di = *si;
    di = di + 4;
    si = si + 4;
    *di = *si;
    di = di + 4;
    si = si + 4;
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0x9b;
    goto L0000e200;
    asm("out dx,al");
    di = bx;
    goto L00009ef5;
    *(bx + si) = *(bx + si) + al;
    *%es:0xd4e9] = *%ds:di+0x4];
    bh = bh / bh;
    edx = bh % bh;
    goto ( *L00008b66);
    (save)es;
    asm("cbw");
    dx = di + 0x6c;
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    (save)di;
    (save)cs;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    eax = *%es:0x8d98];
    (save)bp;
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("wait");
    asm("adc ax,[bx+si]");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9669");
    eax = *L00008D98;
    (save)bp;
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008eaa;
    asm("Unknown opcode 0xff");
    goto ( *L00008b66);
    (save)es;
    asm("cbw");
    dx = di + 0x6c;
    ax = L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008e54;
    asm("Unknown opcode 0xff");
    goto ( *L00008b66);
    (save)es;
    asm("cbw");
    dx = di + 0x6c;
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    asm("scasw");
    goto ( *ds);
    eax = *%es:0x8d98];
    (save)bp;
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = di + 0x6c;
    dx = si + 0x2f;
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("Unknown opcode 0x8e");
    goto ( *ds);
    eax = *%es:0x8d98];
    (save)bp;
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    bx = si + 0x2f;
    asm("sbb al,0xe8");
    ax = *L00000010;
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9708");
    eax = *L00008D98;
    (save)bp;
    asm("insb");
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    ax = di + 0x6c;
    dx = si + 0x2f;
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("adc byte [bx+si],0x0");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9731");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    eax = *%es:0x8d98];
    (save)sp;
    asm("das");
    asm("sbb al,0xe8");
    dx = dx + 1;
    asm("adc ax,0x0");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    asm("sbb al,0xff");
    di = 0;
    if(!( *(di + 0x2f5c) = *(di + 0x2f5c) - 1)) {
        (save) *(bp + 6);
        ax = si + 0x2f;
    }
    asm("sbb al,0x3e");
    edx = *di & -253228032;
    (restore)ss;
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0xe8");
    asm("cmpsb");
    asm("adc al,0x0");
    *(bp + di + 0x98d0) = *(bp + di + 0x98d0) + cl;
    if(ax != dx) {
        eax = 1713799168;
    }
    *L00005C8D = ax;
    asm("das");
    asm("sbb al,0x8f");
    bx = bx + 1;
    *(bp + di + 4) = es;
    (restore) *(bp + di);
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x3e");
    edx = *di & -1259860992;
    (restore)ss;
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0xe8");
    (save)0x14;
    *(bx + si) = *(bx + si) + al;
    dx = ax;
    asm("cbw");
    if(ax != dx) {
        eax = 1713799168;
    }
    *L0000B3E9 = ax;
    edx = bh / bh % bh / bh;
    asm("Unknown opcode 0xff");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    ax = *%es:0x548d];
    asm("das");
    asm("sbb al,0xe8");
    asm("cbw");
    asm("adc al,0x0");
    cl = cl + ch;
    asm("xlatb");
    asm("hlt");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    goto L00008e6b;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x3e");
    edx = *di & 1021840384;
    (restore)ss;
    *(bx + si) = *(bx + si) + al;
    ax = si + 0x2f;
    asm("sbb al,0xe8");
    *(bp + di) = !( *(bp + di));
    *(bx + si) = *(bx + si) + al;
    *%es:0x47e9] = ax;
    edx = bh / bh % bh / bh;
    asm("Unknown opcode 0xff");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L000024ff);
    asm("popf");
    asm("xchg ax,bx");
    sp = sp - 1;
    *(bx + si) = *(bx + si) + al;
    bl = 0x4c;
    *(0x4c + si) = *(0x4c + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
L0000984a:
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    if(cl = cl + ch) {
        goto L0000984a;
    }
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    cx = cx | *si;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    (restore)bx;
    asm("adc [bx+si],ax");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9810");
    sp = sp + 1;
    asm("das");
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0xe8");
    (save)si;
    (save)cs;
    *(bx + si) = *(bx + si) + al;
    goto L00008eaa;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0xe8");
    sp = sp + 1;
    (save)cs;
    *(bx + si) = *(bx + si) + al;
    goto L00008e54;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("xchg ax,bx");
    ax = ax | *(bx + si);
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9849");
    asm("%c sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    if(!(sp = sp + 1)) {
        *(bx + si) = *(bx + si) + al;
        goto ( *ds);
        ax = si + 0x2f;
        asm("sbb al,0x8d");
    }
    (save)sp;
    asm("%c sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    asm("popf");
    (save)cs;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    ax = si + 0x2e;
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("das");
    asm("sbb al,0xe8");
    *L00000000 = cl;
    goto ( *ds);
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    ax = *(si + 0x2e);
    asm("sbb al,0x89");
    sp = sp + 1;
    asm("das");
    asm("sbb al,0x8b");
    sp = sp + 1;
    *%cs:bx+di+0x2f44] = *%cs:bx+di+0x2f44] & cl;
    *(bp - 0x75) = *(bp - 0x75) & ah;
    sp = sp + 1;
    asm("%c and al,0x66");
    *(si + 0x2f) = ax;
    al = al & 0xe9;
    asm("Unknown opcode 0x8e");
    asm("Unknown opcode 0xf3");
    asm("Unknown opcode 0xff");
    asm("sbb al,0x8d");
    if(!( *(di + 0x2f5c) = *(di + 0x2f5c) - 1)) {
        asm("sbb al,0x8b");
        (save)es;
        asm("xchg ax,[bp+di]");
        *L0000468B = ax;
        al = al + 0x87;
        bx = bx + 1;
        al = al + 0x89;
        si = si + 1;
        al = al + 0x66;
        ax = *(bp + 8);
        asm("xchg eax,[bp+di+0x8]");
        *(bp + 8) = eax;
        goto L00008CD2;
        asm("Unknown opcode 0xff");
        goto ( *L000024ff);
        asm("popf");
        asm("salc");
        bp = bp - 1;
        *(bx + si) = *(bx + si) + al;
        asm("Unknown opcode 0xf6");
        bp = bp - 1;
        *(bx + si) = *(bx + si) + al;
        cx = cx + *bp;
    }
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bx + si) = *(bx + si) + dl;
    *(bx + si - 1) = *(bx + si - 1) + al;
    cx = cx + 1;
    *(bx + si - 1) = *(bx + si - 1) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    asm("sbb al,0x80");
    if(!( *(di + 0x2f44) = *(di + 0x2f44) + cl)) {
        cl = cl - 0x31;
        asm("Unknown opcode 0xf3");
        asm("Unknown opcode 0xff");
        *(di + 0x2f44) = *(di + 0x2f44) - 1;
    }
    asm("sbb al,0x80");
    asm("pusha");
    *(bx - 0x17) = *(bx - 0x17) | di;
    al = al & 0xf3;
    asm("Unknown opcode 0xff");
    goto ( *L0000e0a1);
    al :: 0;
    *L00004589 = *L00004589 + bh;
    asm("insb");
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x70] = *%cs:0x3ce4];
    *(bx + si) = *(bx + si) + *%cs:0x3ce8];
    *%ds:di+0x74] = *%cs:0x3ce8];
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)bp;
    asm("insb");
    L0000A6E3();
    *(bx + si) = *(bx + si) + al;
    goto L00008eaa;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0xe8");
    asm("out dx,al");
    asm("sbb [bx+si],ax");
    cl = cl + ch;
    asm("in ax,0xf2");
    asm("Unknown opcode 0xff");
    goto ( *L000024ff);
    asm("popf");
    (save)di;
    si = si - 1;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + al;
        si = 0x4e;
        *bx = *bx + al;
        *(bx + 0x4e) = *(bx + 0x4e) + al;
        (save)ax;
        di = di - 1 - 1;
        *(bx + si) = *(bx + si) + al;
        asm("cwd");
        di = di - 1;
        *(bx + si) = *(bx + si) + al;
        asm("loop 0x9a5c");
        *(bx + si) = *(bx + si) + al;
        dx = dx - *(bx + si);
        *(bp + 0x4c) = *(bp + 0x4c) + al;
        *L0000B70F = *L0000B70F + ch;
        *(bx + si) = *(bx + si) + al;
        ebx = *%cs:bx+0x3cee];
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
        *L00003CF0 = *L00003CF0 | bx;
        *%ds:di+0x76] = 0x3cec;
        ebx = *%cs:bx+0x3d3a];
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] & ebx;
        si = si + 0x2f;
    }
    asm("sbb al,0x2b");
    asm("ror byte [bx+di+0xc706],0x46");
    *(bx + si) = *(bx + si) + al;
    *(bp - 0x39) = *(bp - 0x39) & 0x46;
    bh :: 0;
    asm("aas");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    si = si + 0x2f;
    asm("sbb al,0xc7");
    *(bp + si + 0xcd1b) = *(bp + si + 0xcd1b) - 1;
    *(bp + 4) = 0x784b;
    *(bx + si) = *(bx + si) | L000046c7(es);
    ax = L000046c7(es) + 1;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    di = 0x3cec;
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    si = si + 0x2f;
    asm("sbb al,0xc7");
    (save)es;
    sp = 0x17f0;
    (restore)sp;
    *(bp + 4) = 0x3b29;
    *di = al;
    di = di + 1;
    ax = 0xc766;
    si = si + 1;
    bh :: 0;
    asm("aas");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    di = 0x3cec;
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    si = si + 0x2f;
    asm("sbb al,0xc7");
    (save)es;
    di = di & (ax ^ 0x68c2);
    si = si + 1;
    al = al + 0xa2;
    (fsave)(frestore) + *(bx + si);
    (restore)bp;
    *(bp + 8) = -1679212544;
    asm("int1");
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    si = si + 0x2f;
    asm("sbb al,0xc7");
    (save)es;
    asm("cwd");
    asm("Unknown opcode 0xf7");
    asm("iret");
    asm("sti");
    *(bp + 4) = 0x9a84;
L00009b71:
    *(bp + si + 0xc766) = *(bp + si + 0xc766) & bl;
    si = si + 1;
    ch = ch | bh;
    asm("aas");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    di = 0x3cec;
L00009b87:
    *(bx + si) = *(bx + si) + al;
    *( *%cs:bx+0x3cee] + si) = *( *%cs:bx+0x3cee] + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | *%cs:bx+0x3cee];
    *%ds:di+0x76] = di;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    si = si + 0x2f;
    asm("sbb al,0xc7");
    (save)es;
    al = *esi;
    if(esi = esi + 1) {
        goto L00009b87;
    }
    asm("rol di,1");
    si = si + 1;
    (restore)ss;
    if(al = al + 0xf7) {
        goto L00009b71;
    }
    *(bp + 8) = 166281214;
    asm("int1");
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    si = si + 0x2f;
    asm("sbb al,0x2b");
    asm("ror byte [bx+di+0x8906],0x46");
    *(bp + 8) = al + 0x66;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    *( *%cs:bx+0x3d3c] + si) = *( *%cs:bx+0x3d3c] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d3c];
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L000024ff);
    asm("popf");
    ss = *(bx + si);
    *(bp + 0x50) = *(bp + 0x50) + ch;
    *(bp + di + 0x50) = *(bp + di + 0x50) + bh;
    *L00000051 = *L00000051 + al;
    *(bx + di) = *(bx + di) + ch;
    (save)di;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + al;
        asm("fist word [bx+0x0]");
        *(bp + 0x51) = *(bp + 0x51) + dl;
        *(bx + si) = *(bx + si) + al;
        asm("jpo 0x9c9d");
        *(bx + si) = *(bx + si) + al;
        ax = si + 0x2f;
        asm("sbb al,0xe8");
        asm("cmpsw");
        asm("sbb ax,0x0");
        goto ( *ds);
        ax = si + 0x2f;
        asm("sbb al,0x2e");
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] & *(bx + 0x3d3a);
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
        asm("Unknown opcode 0x2e");
        asm("Unknown opcode 0x0f");
        bh = 0xbf;
        goto L00002e00;
        ebx = *(bx + 0x3cee);
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
        *(di + 4) = *(di + 4) | bx;
        *%ds:di+0x76] = di;
    }
    dx = si + 0x2f;
    asm("sbb al,0xe8");
    ax :: 0x18;
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9c34");
    sp = sp + 1;
    asm("das");
    asm("sbb al,0xe8");
    asm("sbb [di],bx");
    *(bx + si) = *(bx + si) + al;
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    si = si + 0x2f;
    asm("sbb al,0x2b");
    asm("ror byte [bx+di+0xc706],0x46");
    *(bx + si) = *(bx + si) + al;
    *(bp - 0x39) = *(bp - 0x39) & 0x46;
    bh :: 0;
    asm("aas");
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CF0 = *L00003CF0 | bx;
    *%ds:di+0x76] = 0x3cec;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L0000b70f);
    *(bx + si) = *(bx + si) + al;
    ebx = *%cs:bx+0x3cee];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *L00003CEE = *L00003CEE | bx;
    *%ds:di+0x76] = 0x3cea;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    goto ( *L000024ff);
    asm("popf");
    al & 0x51;
    *(bx + si) = *(bx + si) + al;
    asm("fist word [bx+0x0]");
    al = al + cl;
    (save)cx;
    *(bx + si) = *(bx + si) + al;
    asm("adc dx,[bp+si+0x0]");
    *(bx + si) = *(bx + si) + ah;
    (save)dx;
    *(bx + si) = *(bx + si) + al;
    asm("adc [bx+si+0x0],bx");
    *(bx + di) = *(bx + di) + ch;
    (restore)ax;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + al;
        *(bp + si) = dx;
        *(di + 0x2f44) = *(di + 0x2f44) + cl;
        asm("sbb al,0x2e");
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] & *(bx + 0x3d3a);
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
        asm("Unknown opcode 0x2e");
        asm("Unknown opcode 0x0f");
        bh = 0xbf;
        goto L00002e00;
        ebx = *(bx + 0x3cee);
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
        *(di + 4) = *(di + 4) | bx;
        *%ds:di+0x76] = di;
        dx = si + 0x2f;
        asm("sbb al,0xe8");
        (restore)ss;
        (restore)ss;
        *(bx + si) = *(bx + si) + al;
        goto ( *ds);
        ax = si + 0x2f;
    }
    asm("sbb al,0xe8");
    (save)ss;
    (save)ds;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    asm("sbb al,0xff");
    di = 0;
    if(!(bx = si + 0x2f)) {
        (save) *(bp + di + 6);
        ax = si + 0x2f;
    }
    asm("sbb al,0xe8");
    asm("fcomp qword [bp+di]");
    *(bx + si) = *(bx + si) + al;
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    bx = si + 0x2f;
    asm("sbb al,0x8f");
    bx = bx + 1;
    *(bp + di + 4) = es;
    (restore) *(bp + di);
    ax = si + 0x2f;
    asm("sbb al,0xe8");
    *di = *si;
    di = di + 1;
    si = si + 1;
    asm("sbb ax,[bx+si]");
    cl = cl + ch;
    ax = 65518;
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0xe8");
    *(bp + di) = ds;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    ax = si + 0x2f;
    asm("sbb al,0xe8");
    *(bp + di) = bx;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    goto ( *si);
    asm("popf");
    asm("sahf");
    (save)dx;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + 0x52) = *(bp + 0x52) + bh;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + di + 0x2f44) = *(bp + di + 0x2f44) + cl;
    asm("sbb al,0x3e");
    *(di + 0x6c) = ax;
    ax = *(si + 0x2f);
    if(!( *L00004589 = *L00004589 & bh)) {
        *(di + 0x74) = *(si + 0x2f) & 0x3e;
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
        asm("Unknown opcode 0x2e");
        asm("Unknown opcode 0x0f");
        bh = 0xbf;
        goto L00002e00;
        ebx = *(bx + 0x3cee);
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
        *(di + 4) = *(di + 4) | bx;
        *%ds:di+0x76] = di;
        ax = di + 0x6c;
        dx = si + 0x2f;
        asm("sbb al,0xe8");
        asm("daa");
        *(bx + si) = *(bx + si) | al;
        cl = cl + ch;
        asm("xchg ax,bx");
        asm("out dx,ax");
        asm("Unknown opcode 0xff");
        goto ( *L000024ff);
        asm("popf");
        dx = dx - *(bp + di);
        *(bp + 0x4c) = *(bp + 0x4c) + al;
        *(bp + 0x4c) = *(bp + 0x4c) + al;
        *(bp + di + 0x53) = *(bp + di + 0x53) + cl;
    }
    *(bx + si) = *(bx + si) + al;
    (save)di;
    (save)bx;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
L00009edc:
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    asm("%g add al,0x0");
    if(*L00008166 = *L00008166 + bh) {
        goto L00009edc;
    }
    asm("fucomp st5");
L00009ef5:
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *%ds:di+0x0] = 1715340095;
    *(di + 4) = 0;
    *%ds:di+0x8] = 361627647;
    *(bx + si) = *(bx + si) + (al ^ 0x41);
    *%ds:di+0x7a] = dx;
    *%ds:di+0x76] = 0;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2e44) = *(di + 0x2e44) - 1;
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    dx = dx + 1;
    goto ( *ds);
    ax = si + 0x2e;
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    asm("xchg ax,dx");
    al = al | *(bx + si);
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9ed9");
    sp = sp + 1;
    asm("das");
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    asm("out dx,al");
    *L000065FF = *L000065FF + bh;
    asm("jpe 0x9eee");
    sp = sp + 1;
    asm("%c sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    (fsave) *si;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    asm("clc");
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    goto ( *ds);
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    if(!(ax = si + 0x2e)) {
        *(bx + si) = *(bx + si) + al;
        goto ( *ds);
        ebx = *%cs:bp+0x3d3a];
    }
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & ebx;
    *( *%cs:bp+0x3d42] + si) = *( *%cs:bp+0x3d42] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bp+0x3d42];
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(bp + di + 0x2f44) = *(bp + di + 0x2f44) - 1;
    asm("sbb al,0x89");
    sp = sp + 1;
    asm("%c sbb al,0x8b");
    sp = sp + 1;
    asm("das");
    *(bx + di + 0x2e44) = *(bx + di + 0x2e44) & cl;
    *(bp - 0x75) = *(bp - 0x75) & ah;
    sp = sp + 1;
    asm("das");
    *(si + 0x2e) = al & 0x66;
    al = *(si + 0x2e) & 0x2e;
    *( *(bp + 0x3d3a) + si) = *( *(bp + 0x3d3a) + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & ebx;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0xe8");
    asm("out dx,al");
    (save)es;
    *(bx + si) = *(bx + si) + al;
    goto L00008eaa;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0xe8");
    (fsave)(frestore) + 5.89723e-306;
    goto L00008e54;
    asm("Unknown opcode 0xff");
    *(bp + di + 0x2f44) = *(bp + di + 0x2f44) - 1;
    asm("sbb al,0x89");
    sp = sp + 1;
    asm("%c sbb al,0x8b");
    sp = sp + 1;
    asm("das");
    *(bx + di + 0x2e44) = *(bx + di + 0x2e44) & cl;
    *(bp - 0x75) = *(bp - 0x75) & ah;
    sp = sp + 1;
    asm("das");
    *(si + 0x2e) = al & 0x66;
    al = *(si + 0x2e) & 0x2e;
    *( *(bp + 0x3d3a) + si) = *( *(bp + 0x3d3a) + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & ebx;
    goto L00008e6b;
    asm("Unknown opcode 0xff");
    *(di + 0x2e44) = *(di + 0x2e44) - 1;
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    *si = *si - ax;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    ebx = *(bx + 0x3cee);
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    goto ( *ds);
    ax = si + 0x2e;
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    asm("aas");
    *(bx + si) = *(bx + si) | ax;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    bh :: *di;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & ebx;
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    ebx = *(bx + 0x3cee);
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    goto ( *ds);
    goto ( *si);
    asm("popf");
    ax = ax + 1;
    (save)bp;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bx + si + 0x55) = *(bx + si + 0x55) + ah;
    *(bx + si) = *(bx + si) + al;
    asm("xchg cl,[si+0x0]");
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + di + 0x2f44) = *(bp + di + 0x2f44) + cl;
    asm("sbb al,0x3e");
    *(di + 0x6c) = ax;
    ax = *(si + 0x2f);
    if(!( *L00004589 = *L00004589 & bh)) {
        *(di + 0x74) = *(si + 0x2f) & 0x3e;
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
        asm("Unknown opcode 0x2e");
        asm("Unknown opcode 0x0f");
        bh = 0xbf;
        goto L00002e00;
        ebx = *(bx + 0x3cee);
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
        *(di + 4) = *(di + 4) | bx;
        *%ds:di+0x76] = di;
        ax = di + 0x6c;
        dx = si + 0x2f;
        asm("sbb al,0xe8");
        *di & ax;
        *(bx + si) = *(bx + si) + al;
        goto L00008e54;
        asm("Unknown opcode 0xff");
        *(di + 0x2f44) = *(di + 0x2f44) - 1;
        asm("sbb al,0x8d");
        (save)sp;
        asm("%c sbb al,0x8d");
        (restore)sp;
        asm("%c sbb al,0xe8");
        asm("aam 0x2");
        *(bx + si) = *(bx + si) + al;
        ebx = *%cs:bx+0x3d3a];
    }
    *(bx + si) = *(bx + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & ebx;
    *( *%cs:bx+0x3d42] + si) = *( *%cs:bx+0x3d42] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    *( *(bx + 0x3cee) + si) = *( *(bx + 0x3cee) + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    goto ( *ds);
    ax = si + 0x2e;
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    *(bp + si) & ax;
    *(bx + si) = *(bx + si) + al;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    *( *%cs:bx+0x3d42] + si) = *( *%cs:bx+0x3d42] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    *( *(bx + 0x3cee) + si) = *( *(bx + 0x3cee) + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    goto ( *ds);
    ax = si + 0x2f;
    asm("sbb al,0x8d");
    (save)sp;
    asm("%c sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    (save)5;
    *(bx + si) = *(bx + si) + al;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    *( *%cs:bx+0x3d42] + si) = *( *%cs:bx+0x3d42] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    *( *(bx + 0x3cee) + si) = *( *(bx + 0x3cee) + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    goto ( *ds);
    ax = si + 0x2e;
    asm("sbb al,0x8d");
    (save)sp;
    asm("das");
    asm("sbb al,0x8d");
    (restore)sp;
    asm("%c sbb al,0xe8");
    asm("sbb ax,[di]");
    *(bx + si) = *(bx + si) + al;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    *( *%cs:bx+0x3d42] + si) = *( *%cs:bx+0x3d42] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    *( *(bx + 0x3cee) + si) = *( *(bx + 0x3cee) + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    goto ( *ds);
    goto ( *si);
    asm("popf");
    *bx = *bx | dx;
    *(bp + si + 0x58) = *(bp + si + 0x58) + bl;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(bp + 0x4c) = *(bp + 0x4c) + al;
    *(di + 0x2f54) = *(di + 0x2f54) + cl;
    asm("sbb al,0x2e");
    *( *(bx + 0x3d3a) + si) = *( *(bx + 0x3d3a) + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & ebx;
    *( *%cs:bx+0x3d42] + si) = *( *%cs:bx+0x3d42] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d42];
    asm("Unknown opcode 0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00002e00;
    *( *(bx + 0x3cee) + si) = *( *(bx + 0x3cee) + si) + al;
    *%ds:di+0x4] = *%ds:di+0x4] & 1715390463;
    *(di + 4) = *(di + 4) | bx;
    *%ds:di+0x76] = di;
    ax = si + 0x2f;
    asm("sbb al,0x8b");
    asm("fsubr st0");
    asm("int3");
    goto ( *ds);
    si = si + 0x2f;
    asm("sbb al,0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    asm("in al,dx");
    al :: 0;
    *L00008B66 = *L00008B66 + ch;
    asm("lahf");
    asm("out dx,al");
    al :: 0;
    *L00008166 = *L00008166 + bh;
    asm("%g add al,0xff");
    asm("Unknown opcode 0xc7");
    *%ds:di+0x4] = *%ds:di+0x4] | ebx;
    *%ds:di+0x76] = di;
    *( *%cs:bx+0x3d3a] + si) = *( *%cs:bx+0x3d3a] + si) + al;
    *%ds:di+0x8] = *%ds:di+0x8] & *%cs:bx+0x3d3a];
    bx = si + 0x2f;
    asm("sbb al,0x8b");
    (save)es;
    *(bp + di) = ax;
    *(bp + di + 4) = *(bp + 4);
    edx = *(bp + 8) & -2123988992;
    asm("retf 0x3fff");
    *(bp + di + 8) = edx;
    eax = eax & 761692159;
    asm("Unknown opcode 0xff");
    asm("aas");
    asm("cbw");
    dx = si;
    L0000AC7D();
    *(bx + si) = *(bx + si) + al;
    goto L00008CD2;
    asm("Unknown opcode 0xff");
    *(di + 0x2f44) = *(di + 0x2f44) - 1;
    asm("sbb al,0x2e");
    asm("Unknown opcode 0x0f");
    bh = 0xb7;
    goto L00008d00;
    (save)sp;
    asm("%c sbb al,0xe8");
    asm("arpl [bx],cx");
    *(bx + si) = *(bx + si) + al;
    ax = ax & 7;
    0x8e :: 0;
    *%ds:di+0x4] = *%ds:di+0x4] & 170834175;
    goto ( *ds);
    ax = si + 0x2f;
    asm("sbb al,0x3e");
    edx = *di & -1914172416;
    ax = ax | *(bx + si);
    bp = bp | cl + ch;
    asm("Unknown opcode 0xff");
    *(bp + di + 0x2ef7) = *(bp + di + 0x2ef7) - 1;
    asm("Unknown opcode 0x0f");
    bh = 0xbf;
    goto L00008d00;
    sp = sp + 1;
    asm("das");
    asm("sbb al,0x66");
    cx = *(bx + si + 8);
    *(bx + si) = *(bx + si) + L0000AC0E();
    di = si;
    asm("sbb al,0x8b");
    asm("rcr byte [bx+si+0xc23b],1");
    if(!(bx = si + 0x2f)) {
        if(ch < 0) {
            edx = 0;
            ecx = 0;
        } else {
            edx = -1956216833;
            bx = bx - 1;
            *(bp - 0x7f) = *(bp - 0x7f) | ah;
            asm("loope 0xa405");
            bl = bl - 0x26;
        }
    }
    edx = *(bp + di + 8);
    asm("loop 0xa417");
    if(!(ecx = edx & -2123988992)) {
        if(!(dx = dx + ax)) {
            if(ah < 0) {
                edx = 0;
                ecx = 0;
            } else {
                edx = 191266815;
            }
        }
        *(bp - 0x77) = *(bp - 0x77) << 1;
        (save)bx;
        cl = cl | ch;
        L00003eff();
        eax = *(di + 4);
        bp = sp;
        *(di + 0x28) = eax;
        goto L00008CD2;
        asm("Unknown opcode 0xff");
        *(bp + 0x51)();
        esi = *(bp + si + 8);
        cx = *(bp + si + 4);
        bx = *(bp + si);
        si = si << 0x10;
        esi = *(bx + si + 8);
        dx = *(bx + si + 4);
        ax = *(bx + si);
        *(bx + si) = *(bx + si) + L0000A4CC(bx);
        (restore)bx;
        *(bp + di) = ax;
        *(bp + di + 4) = dx;
        *(bp + di + 8) = esi;
        (restore)si;
        return;
        (save)si;
        (save)cx;
        (save)bx;
        esi = *(bp + si + 8);
        cx = *(bp + si + 4);
        bx = *(bp + si);
    }
    si = si << 0x10;
    esi = *(bx + si + 8);
    dx = *(bx + si + 4);
    ax = *(bx + si);
    *(bx + si) = *(bx + si) + L0000A551();
    (restore)bx;
    *(bp + di) = L0000A551();
    *(bp + di + 4) = dx;
    *(bp + di + 8) = esi;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000A49C - 0x0000A4CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000A49C()
{



    (restore)si;
    return;
    (save)si;
    (save)cx;
    (save)bx;
    esi = *(si + 0x24);
    asm("sbb [bp+di+0x244c],cl");
    asm("adc al,0x8b");
    (restore)sp;
    al = al & 0x10;
    si = si << 0x10;
    esi = *(bx + si + 8);
    dx = *(bx + si + 4);
    ax = *(bx + si);
    *(bx + si) = *(bx + si) + L0000A551();
    (restore)bx;
    *(bp + di) = ax;
    *(bp + di + 4) = dx;
    *(bp + di + 8) = esi;
    (restore)cx;
    (restore)si;
}

/*	Procedure: 0x0000A4CC - 0x0000A550
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0000A4CC()
{
	/* unknown */ void  di;



    di = 0;
    *(bx + si + 0x7de9) = *(bx + si + 0x7de9) + al;
    *(bx + si) = *(bx + si) + al;
    *(bp + 0x4e) = *(bp + 0x4e) + ah;
    if(!( *(bx + si) = *(bx + si) + ax)) {
        >= ? 0xa4e7 : ;
        return;
    }
    *(bx + si) = *(bx + si) + ax;
    if(ax == 0 && bx == 0) {
        dx :: 0;
        *(bx + si + 0x2275) = *(bx + si + 0x2275) + al;
        if(cx == dx) {
            ax = bx;
            if(esi == si >> 0x10) {
                if(di != 0) {
                    goto L0000a517;
                }
            } else {
                if(di == 0) {
L0000a517:
                    dx = dx >> 1;
                    esi = 367788031;
                }
            }
        }
    }
    if(dx == cx) {
    }
    if(ax <= bx) {
        != ? 0xa52b : ;
        if(di != 0) {
            dx = cx;
            ax = bx;
            si = si >> 0x10;
        }
    }
    return;
    dx = cx;
    ax = bx;
    *(bx + si) = *(bx + si) + ax;
    if(ax == 0) {
        dx :: 0;
        *(bx + si + 0x275) = *(bx + si + 0x275) + al;
        si = si ^ di;
    }
    si = si >> 0x10;
}

/* DEST BLOCK NOT FOUND: 0000a55a -> 0000a4d7 */
/* DEST BLOCK NOT FOUND: 0000a56e -> 0000a536 */
stack space not deallocated on return
/*	Procedure: 0x0000A551 - 0x0000A6E2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000A551()
{



    (restore)di;
    return;
    (save)di;
    di = 0;
    if(esi = esi + 1) {
        goto L0000a4d7;
    }
    asm("Unknown opcode 0xff");
    *bx = *bx - 1;
    *(bp + di - 1) = *(bp + di - 1) ^ 0xff;
    *(bx + di + 65478) = *(bx + di + 65478) + 1;
    *(bx + si) = *(bx + si) + 1;
    if(*(bp + si - 0x38) = *(bp + si - 0x38) + dh) {
        goto L0000a536;
    }
    *(bx + si) = *(bx + si) + ax;
    si = si ^ di;
    (restore)di;
    if(ax == 0 && dx == 0) {
        if(!(esi = esi + esi)) {
            si = si >> 0x10;
            ax = bx;
            dx = cx;
            si = si + si;
            if(!(bx = ebx | esi | dx)) {
                si = si >> 1;
            }
            return;
        }
        asm("rcr esi,1");
    }
    if(cx == 0 && bx == 0) {
        asm("Unknown opcode 0xff");
        > ? L0000a620 : ;
        bx = bx + ax;
    }
    (save)bp;
    (save)di;
    asm("xchg cx,si");
    di = cx;
    asm("rol di,0x10");
    di = di >> 0x10;
    cx = cx >> 0x10;
    di = di & 0x7fff;
    asm("Unknown opcode 0xff");
    if(!( *(bx + si + 0xe181) = *(bx + si + 0xe181) + al)) {
    }
    *(bp + di + 0xc1e9) = *(bp + di + 0xc1e9) | 0xc7;
    asm("adc cl,al");
    asm("rcl word [bx+si],0x66");
    cx = cx + di;
    asm("rol di,0x10");
    asm("rol cx,0x10");
    if(!(ecx = ecx - edi)) {
        >= ? L0000a5e8 : ;
        bp = di;
        ecx = ~ecx;
        asm("xchg ax,bx");
        asm("xchg dx,si");
        if(ecx > 0x40) {
            bp = bp + bp;
            asm("rcr ebp,1");
            ax = bx;
            dx = si;
            si = bp;
            (restore)di;
            (restore)bp;
            return;
        }
    }
    if(0 < 0) {
        ecx = 0xff & 0xff;
        si = ~si;
        bx = ~bx;
        asm("sbb si,+0x0");
        bp = bp ^ 0;
        *(bx + si + 65323) = *(bx + si + 65323) + al;
    }
    if(cl != 0) {
        (save)bx;
        bx = 0;
        if(cl >= 0x20) {
            di = 0;
            bx = 0;
            if(cl == 0x40) {
                di = di | dx;
                dx = 0;
            }
            ax = dx;
            dx = 0;
        }
        asm("shrd bx,ax,cl");
        di = di | bx;
        bx = 0;
        asm("shrd ax,dx,cl");
        asm("shrd dx,bx,cl");
        (restore)bx;
    }
    asm("adc dx,si");
    asm("adc ch,0x0");
    if(!(ax = ax + bx)) {
        if(cl == 0x40) {
            asm("Unknown opcode 0xff");
            if(di & 65535) {
                goto L0000a668;
            }
            asm("xchg ax,bp");
            return;
            bx = bx >> 1;
            asm("adc ax,+0x0");
            asm("adc dx,+0x0");
            asm("adc ch,0x0");
        }
        dx = ~dx;
L0000a668:
        ax = ~ax;
        asm("sbb dx,+0x0");
        ch = 0;
        bp = bp ^ 0;
        *(bx + si + 0xd88b) = *(bx + si + 0xd88b) + al;
    }
    if(!(bx = bl | ch | dx) && ebp != 0) {
        if(ch == 0) {
            asm("rol di,1");
            asm("ror di,1");
            if(ebp = ebp - 1) {
                goto L0000a6ce;
            }
            asm("adc ax,ax");
            asm("adc dx,dx");
            >= ? L0000a68b : ;
        }
        ebp = ebp + 1;
        ebp :: -2079358977;
        *%ss:bx+si] = *%ss:bx+si] + al;
        asm("rcr dx,1");
        asm("rcr ax,1");
        if(!(cl = cl + bh)) {
            if(!(di = di + di)) {
                asm("ror ax,1");
                asm("rol ax,1");
            }
            asm("adc ax,+0x0");
            asm("adc dx,+0x0");
            >= ? L0000a6ca : ;
            asm("rcr dx,1");
            asm("rcr ax,1");
            ebp + 1 :: -2079358977;
            (save)cs;
            *(bx + si) = *(bx + si) + al;
            bl = bl + ch;
        }
        cl = cl + *(bp + di + ". 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n");
    }
L0000a6ce:
    asm("in ax,dx");
    asm("rcr ebp,1");
    si = bp;
    (restore)di;
    (restore)bp;
    return;
    ebp = -1070891009;
    dx = 0;
    *(bx + si + 0xe9eb) = *(bx + si + 0xe9eb) + al;
}

/* DEST BLOCK NOT FOUND: 0000a771 -> 0000a77e */
/*	Procedure: 0x0000A6E3 - 0x0000A77B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000A6E3()
{



    goto L0000a6ce;
    (save)di;
    (save)si;
    if(!(esi = *(bx + si + 8) | 1181122560) && (si = *(bx + si + 4) + *(bx + si + 4) | *(bx + *(bx + si + 4) + *(bx + si + 4))) || !(esi = *(bp + si + 8) | 1181122560) && (si = *(bp + si + 4) + *(bp + si + 4) | *(bp + *(bp + si + 4) + *(bp + si + 4)))) {
        goto L0000a750;
    }
    si = *(bx + si + 6);
    di = *(bp + si + 6) ^ si;
    di = 0;
    if(!( *(bx + si) = *(bx + si) + al)) {
        if(*(bx + si + 8) == *(bp + si + 8) && ( *(bx + si + 4) & 65535) == *(bp + si + 4)) {
            *(bx + si) :: *(bp + si);
        }
        di = 0;
        if(!( *(bx + si) = *(bx + si) + al)) {
            asm("rcr ax,1");
            si = si ^ ax;
L0000a743:
            si = si + si;
            asm("sbb di,+0x0");
            di = di + di + 1;
        }
        ax = di;
        (restore)si;
        (restore)di;
        return;
L0000a750:
        *(bx + si) = *(bx + si) + 2;
        (restore)si;
        (restore)di;
        return(2);
    }
    di = di | *(bx + si) | *(bp + si) | *(bx + si + 4) | *(bp + si + 4);
    ax = *(bx + si + 8) << 0x10;
    asm("Unknown opcode 0xff");
    if(ax = *(bp + si + 8) & 0x7fff) {
        goto L0000a77e;
    }
    asm("Unknown opcode 0xc7");
    di = 0;
    if(*(bx + si) = *(bx + si) + al) {
        goto L0000a743;
    }
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x0000A77C - 0x0000A81B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000A77C()
{



    (restore)di;
    return;
    (save)si;
    (save)cx;
    esi = *(bp + si + 8);
    cx = *(bp + si + 4);
    bx = *(bp + si);
    si = si << 0x10;
    esi = *(bx + si + 8);
    dx = *(bx + si + 4);
    ax = *(bx + si);
    ax = L0000A81C(bx);
    *(bx + si) = *(bx + si) + al;
    (restore)bx;
    *(bp + di) = ax;
    *(bp + di + 4) = dx;
    *(bp + di + 8) = esi;
    (restore)si;
    return;
    esi = esi - 1;
    if(!( *(bx + si) = *(bx + si) + ax)) {
        >= ? 0xa7c8 : ;
        >= ? 0xa7c7 : ;
        if(ax == 0) {
            dx :: 0;
            *(bx + si + 0x575) = *(bx + si + 0x575) + al;
        }
        esi = esi ^ -2117894144;
    }
    asm("out dx,al");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ax;
    if(ax == 0 && bx == 0) {
        dx :: 0;
        *(bx + si + 0xb75) = *(bx + si + 0xb75) + al;
        if(cx == dx) {
            dx = dx >> 1;
            esi = 1002700799;
        }
    }
    asm("Unknown opcode 0xd1");
    != ? 0xa7ef : ;
    if(ax <= bx) {
        dx = cx;
        ax = bx;
        si = si >> 0x10;
    }
    return;
    *(bx + si) = *(bx + si) + ax;
    if(bx == 0) {
        cx :: 0;
        *(bx + si + 0xb75) = *(bx + si + 0xb75) + al;
        si = (si ^ si << 0x10) & cx;
        cx = 0;
    }
    dx = cx;
    ax = bx;
    si = si >> 0x10;
}

/* DEST BLOCK NOT FOUND: 0000a822 -> 0000a7a8 */
/* DEST BLOCK NOT FOUND: 0000a824 -> 0000a7a8 */
/* DEST BLOCK NOT FOUND: 0000a82c -> 0000a7f9 */
/* DEST BLOCK NOT FOUND: 0000a82e -> 0000a7f9 */
/*	Procedure: 0x0000A81C - 0x0000A9D6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000A81C()
{



    asm("adc bl,al");
    if(esi = esi + 1) {
        goto L0000a7a8;
    }
    >= ? 0xa7a8 : ;
    si = si + 65535;
    if(*(bx + si) = *(bx + si) + al) {
        goto L0000a7f9;
    }
    >= ? 0xa7f9 : ;
    *(bx + si) = *(bx + si) + ax;
    if(cx == 0 && bx == 0) {
        asm("Unknown opcode 0xff");
        > ? L0000a8ba : ;
        cx = cx ^ *(bp + di);
        asm("Unknown opcode 0xc0");
        != ? 0xa867 : ;
        if(dx == 0 && !(eax = si + si)) {
            L00008ED0();
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            dx = 0;
            al = al + al;
            ax = 0;
            esi = 300679167;
        }
        ax = L00008EC6();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        dx = 0;
        *(bx + si + 0xc02b) = *(bx + si + 0xc02b) + al;
    }
    asm("Unknown opcode 0xc0");
    if(!(esi = esi | 197361663) && dx == 0) {
        if(!(esi = esi + esi)) {
            return;
        }
        asm("rcr esi,1");
    }
    (save)bp;
    bp = sp;
    (save)di;
    asm("xchg cx,si");
    di = cx;
    asm("rol di,0x10");
    di = di >> 0x10;
    cx = cx >> 0x10;
    di = di & 0x7fff;
    asm("Unknown opcode 0xff");
    if(!( *(bx + si + 0xe181) = *(bx + si + 0xe181) + al)) {
    }
    cl = cl + 0xc7;
    asm("adc cl,al");
    asm("rcl word [bx+si],0x66");
    di = di + cx;
    asm("rol di,0x10");
    asm("rol cx,0x10");
    if(edi == 0) {
L0000a8bb:
        ax = ax + ax;
        asm("adc dx,dx");
        edi = edi - 1;
        if(dx >= 0) {
            goto L0000a8bb;
        }
    }
    if(ecx == 0) {
L0000a8ca:
        bx = bx + bx;
        asm("adc si,si");
        ecx = ecx - 1;
        if(si >= 0) {
            goto L0000a8ca;
        }
    }
    edi - ecx + 427311103 :: 309493759;
    di = cx;
    edi = 12222463;
    *(bx + si) = *(bx + si) + al;
    *(bp + 12222463) = *(bp + 12222463) - 0xc0;
    goto L0000a9cd;
    *(bx + si) = *(bx + si) + al;
    if(edi < -64) {
        ax = 0;
        dx = 0;
        di = 0;
        goto L0000a9cd;
        *(bx + si) = *(bx + si) + al;
    }
    (save)di;
    (save)si;
    (save)bx;
    cx = si;
    di = dx;
    si = ax;
    ax = 0;
    if(cx <= di) {
        dx = dx - cx;
        eax = 1 & 65535;
    }
    (save)ax;
    ax = si;
    cx = cx / cx;
    dx = cx % cx;
    (save)ax;
    asm("xchg ax,bx");
    asm("mul bx");
    asm("xchg ax,cx");
    asm("xchg bx,dx");
    asm("mul dx");
    ax = ax + bx;
    asm("adc dx,+0x0");
    bx = *(di - 0x10);
    if(!( *(di - 0x14) & 1)) {
        asm("adc dx,[di-0xc]");
    }
    cx = ~cx;
    asm("sbb si,ax");
    asm("sbb di,dx");
    if(!(ax = ax + bx)) {
L0000a943:
        *(di - 0x18) = *(di - 0x18) - 1;
        asm("sbb word [di-0x14],+0x0");
        asm("adc si,[di-0xc]");
        asm("adc di,+0x0");
        if(cx = cx + bx) {
            goto L0000a943;
        }
    }
    di = si;
    si = cx;
    cx = *(di - 0xc);
    if(cx <= di) {
        di = di - cx;
        *(di - 0x18) = *(di - 0x18) + 1;
        asm("adc word [di-0x14],+0x0");
    }
    dx = di;
    ax = si;
    cx = cx / cx;
    dx = cx % cx;
    (save)ax;
    if(ax != 0) {
        asm("xchg ax,bx");
        asm("mul bx");
        asm("xchg ax,cx");
        asm("xchg bx,dx");
        asm("mul dx");
        asm("adc dx,+0x0");
        cx = ~cx;
        asm("sbb si,ax");
        asm("sbb di,dx");
        if(!(ax = ax + bx)) {
L0000a98a:
            *(di - 0x1c) = *(di - 0x1c) - 1;
            asm("sbb word [di-0x18],+0x0");
            asm("sbb word [di-0x14],+0x0");
            asm("adc si,[di-0xc]");
            asm("adc di,+0x0");
            if(cx = cx + *(di - 0x10)) {
                goto L0000a98a;
            }
        }
    }
    (restore)ax;
    (restore)dx;
    (restore)bx;
    sp = sp + 8;
    (restore)di;
    bx = bx >> 1;
    if(!(edi = edi - 1)) {
        asm("rcr dx,1");
        asm("rcr ax,1");
        di = di + 1;
    }
    if(edi <= 0) {
        != ? 0xa9be : ;
        cl = 1;
        goto L0000a9c4;
        ecx = ~edi;
L0000a9c4:
        bx = 0;
        asm("shrd ax,dx,cl");
        asm("shrd dx,bx,cl");
        edi = 0;
L0000a9cd:
    }
    di = di + di;
    asm("rcr edi,1");
    si = di;
    (restore)di;
}

stack space not deallocated on return
/*	Procedure: 0x0000A9D7 - 0x0000AA9C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000A9D7()
{



    (restore)bp;
    return;
    (save)si;
    (save)cx;
    esi = *(bp + si + 8);
    cx = *(bp + si + 4);
    bx = *(bp + si);
    si = si << 0x10;
    esi = *(bx + si + 8);
    dx = *(bx + si + 4);
    ax = *(bx + si);
    ax = L0000AA9D(bx);
    *(bx + si) = *(bx + si) + al;
    (restore)bx;
    *(bp + di) = ax;
    *(bp + di + 4) = dx;
    *(bp + di + 8) = esi;
    (restore)si;
    return;
    if(ax == 0) {
        dx :: 0;
        *(bx + si + 0x1075) = *(bx + si + 0x1075) + al;
        if(bx == 0 && cx == 0) {
            si = 65535;
            asm("Unknown opcode 0xff");
            ax = *cx();
            asm("cli");
            return;
        }
    }
    esi = esi - 1;
    if(!( *(bx + si) = *(bx + si) + ax)) {
        >= ? 0xaa41 : ;
        if(ax == 0) {
            dx :: 0;
            *(bx + si + 0x975) = *(bx + si + 0x975) + al;
        }
        if(si < 0) {
            esi = esi ^ -2117894144;
        }
    }
    asm("out dx,al");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ax;
    if(dx == cx) {
    }
    if(ax <= bx) {
        != ? 0xaa65 : ;
        if(ax == 0) {
            dx :: 0;
            *(bx + si + 0x174) = *(bx + si + 0x174) + al;
        }
        return;
        if(esi < 0) {
            si = si ^ dx;
        }
        dx = cx;
        ax = bx;
        si = si >> 0x10;
    }
    return;
    *(bx + si) = *(bx + si) + ax;
    if(bx == 0) {
        cx :: 0;
        *(bx + si + 0x1875) = *(bx + si + 0x1875) + al;
        if(ax == 0) {
        }
        if(dx == 0) {
            cx = cx >> 1;
            si = 65535;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
        } else {
            if(esi < 0) {
                si = si ^ cx;
            }
        }
    }
    dx = cx;
    ax = bx;
    si = si >> 0x10;
}

/* DEST BLOCK NOT FOUND: 0000aaa3 -> 0000aa01 */
/* DEST BLOCK NOT FOUND: 0000aab7 -> 0000aa6d */
/* DEST BLOCK NOT FOUND: 0000abbe -> 0000ac18 */
/* DEST BLOCK NOT FOUND: 0000ac13 -> 0000ac18 */
stack space not deallocated on return
/*	Procedure: 0x0000AA9D - 0x0000AC0D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000AA9D()
{



    asm("adc bl,al");
    if(esi = esi + 1) {
        goto L0000aa01;
    }
    asm("Unknown opcode 0xff");
    *bx = *bx - 1;
    asm("adc byte [si-0x1],0xff");
    *(bx + di + 65478) = *(bx + di + 65478) + 1;
    *(bx + si) = *(bx + si) + 1;
    if(*(bp + si - 0x4a) = *(bp + si - 0x4a) + dh) {
        goto L0000aa6d;
    }
    *(bx + si) = *(bx + si) + ax;
    if(ax == 0 && dx == 0) {
        if(!(esi = esi + esi)) {
            return;
        }
        asm("rcr esi,1");
    }
    if(cx == 0 && bx == 0) {
        asm("Unknown opcode 0xff");
        > ? L0000ab54 : ;
        (restore)es;
        dx = 0;
        si = 0;
        return(0);
    }
    (save)bp;
    (save)di;
    asm("xchg cx,si");
    di = cx;
    asm("rol di,0x10");
    di = di >> 0x10;
    cx = cx >> 0x10;
    di = di & 0x7fff;
    asm("Unknown opcode 0xff");
    if(!( *(bx + si + 0xe181) = *(bx + si + 0xe181) + al)) {
    }
    *(bp + di) = *(bp + di) + 0xcf;
    ecx - 208814078 :: 91389951;
    goto L0000abac;
    *(bx + si) = *(bx + si) + al;
    if(ecx < -64) {
        ax = 0;
        dx = 0;
        cx = 0;
    } else {
        (save)cx;
        bp = 0;
        (save)si;
        (save)dx;
        (save)ax;
        asm("mul bx");
        asm("xchg ax,si");
        cx = dx;
        (restore)dx;
        asm("mul dx");
        di = dx;
        cx = cx + ax;
        asm("adc di,bp");
        asm("adc bp,bp");
        (restore)ax;
        asm("xchg ax,bx");
        asm("mul bx");
        cx = cx + ax;
        asm("adc di,dx");
        asm("adc bp,+0x0");
        ax = bx;
        (restore)dx;
        asm("mul dx");
        asm("adc dx,bp");
        bx = cx;
        (restore)cx;
        if(!(ax = ax + di)) {
            bx = bx + bx;
            asm("adc ax,ax");
            asm("adc dx,dx");
            ecx = ecx - 1;
        }
        if(!(bx = bx + bx)) {
            != ? 0xab72 : ;
            if(!(ebx = 0 >> 1 & 65535)) {
                si = ax >> 1;
            }
            asm("adc ax,+0x0");
            asm("adc dx,+0x0");
            >= ? L0000ab8b : ;
            asm("rcr dx,1");
            asm("rcr ax,1");
            ecx = ecx + 1;
            ecx :: -2079358977;
            ax = ax & *(bx + si);
            *(bx + si) = *(bx + si) + al;
        }
        if(ecx <= 0) {
            != ? 0xab96 : ;
            cl = 1;
            goto L0000ab99;
            ecx = ~ecx;
L0000ab99:
            bx = 0;
            asm("shrd ax,dx,cl");
            asm("shrd dx,bx,cl");
            ecx = 0;
        }
    }
L0000aba4:
    cx = cx + cx;
    asm("rcr ecx,1");
    si = cx;
    (restore)di;
L0000abac:
    (restore)bp;
    return;
    ecx = 12222463;
    *(bx + si) = *(bx + si) + al;
    *(bp + di) = *(bp + di) - 0xc0;
    goto L0000aba4;
    (save)bx;
    bl = 0xa0;
    goto L0000ac18;
    (save)bx;
    (save)cx;
    ecx = *( *(bx + si + 9) + si + 8) & 74809343;
    ax = 0;
    goto L0000ac0d;
    ecx = ecx - 109002750;
    bh = bh + bh;
    asm("sbb ax,ax");
    goto L0000ac0d;
    if(ecx > 0x1f) {
        0;
    }
    ch = bh;
    bx = *(bx + si);
    ax = *(bx + si + 4);
    (save)dx;
    dx = 0;
    asm("shld dx,ax,cl");
    bx = bx | ax << cl;
    ax = dx;
    (restore)dx;
    if(!(ch = ch + ch)) {
        if(bx != 0) {
            ax = ax + 1;
        }
        ax = ~ax;
    }
L0000ac0d:
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 0000ac2b -> 0000ec2c */
stack space not deallocated on return
/*	Procedure: 0x0000AC0E - 0x0000AC7C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000AC0E()
{



    (restore)bx;
    return;
    (save)bx;
    bl = 0x1f;
    goto L0000ac18;
    (save)bx;
    bl = 0x20;
L0000ac18:
    (save)cx;
    goto L0000ec2c;
    if(!(ecx = *(( *(bx + si + 9) >> 1 | *(bx + si + 9) >> 1) + si + 8) & -2123988993)) {
        if(ecx <= 0x20 && cl <= (bl & 0x3f)) {
            ch = bh;
            bx = *(bx + si);
            ax = *(bx + si + 4);
            bx = bx + bx;
            asm("rcr ch,1");
            if(cl == 0x20) {
                ch = ch + ch;
            } else {
                bx = 0;
                asm("shld bx,ax,cl");
                ax = ax << cl;
                ch = ch + ch;
                ax = ax + ax;
                ax = bx;
            }
            cl = 0xff;
            asm("rcr cl,1");
            ch = (ch & cl) + (ch & cl);
            asm("adc ax,+0x0");
            if(!(ch = ch + ch)) {
                ax = ~ax;
            }
            (restore)cx;
            (restore)bx;
            return;
        }
        0;
        return(0);
    }
    ax = 0;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000AC7D - 0x0000ACC2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000AC7D()
{



    (restore)bx;
    return;
    (save)bx;
    bx = dx;
    if(ax < 0) {
        ax = ~ax;
        dx = 0xbfff;
        *(bx + si) = *(bx + si) + al;
    } else {
        (restore)bx;
        (save)bx;
        bx = dx;
        dx = 0x3fff;
        *(bx + si) = *(bx + si) + al;
    }
    (save)cx;
    if(ax != 0) {
        asm("bsr cx,ax");
        ch = cl;
        ax = ax << 0;
        ecx = dx & 65535;
        dx = ax;
    } else {
        dx = 0;
        cx = 0;
    }
    *(bp + di) = 0;
    *(bp + di + 4) = dx;
    *(bp + di + 8) = ecx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000ACC3 - 0x0000AE89
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000ACC3()
{



    (restore)bx;
    return;
    (save)cx;
    cx = dx;
    asm("shld dx,ax,0xb");
    ax = ax << 0xb;
    ecx = cx >> 0x14 & 896796671;
    ecx :: 125044735;
    ecx = -1023967233;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    if(!(ecx = ecx + 535510016)) {
        asm("Unknown opcode 0xc0");
        if(!(cl = cl + *(bp + di))) {
            (save)dx;
            (save)ax;
            L00008ED0();
            asm("Unknown opcode 0xff");
            ax = *(bx + si + 0x5a)();
            *(bx + si - 0x7f) = *(bx + si - 0x7f) + al;
        }
        asm("retf 0x0");
        *(bx + si + 0x25eb) = *(bx + si + 0x25eb) + al;
        if(dx == 0) {
            if(ax != 0) {
                goto L0000ad1a;
            }
            cx = 0;
        } else {
L0000ad1a:
            ecx = -771015679;
            != ? 0xad27 : ;
            asm("xchg ax,dx");
            for(ecx = ecx - 0x20; dx < 0; ecx = ecx - 1) {
                ax = ax + ax;
                asm("adc dx,dx");
            }
        }
        *(bp + di) = ax;
        *(bp + di + 4) = dx;
        cx = cx + cx;
        asm("rcr ecx,1");
        *(bp + di + 8) = ecx;
        (restore)cx;
        return;
        (save)dx;
        (save)cx;
        (save)bx;
        bx = ax;
        dx = 65280;
        asm("Unknown opcode 0xff");
        cx = ax << 0x19;
        ecx = *(bp + di + 8);
        if(*(bp + di + "n") = *(bp + di + "n") - 1) {
            goto L0000ad72;
        }
        != ? 0xad64 : ;
        if(*(bp + di) == 0) {
            dx = dx + dx;
        }
        ax = ax + 0x100;
    }
    if(!( *(bx + si) = *(bx + si) + al)) {
        ax = 0;
        0;
    }
L0000ad72:
    ax = ax & dx;
    bx = cx;
    (ecx & 1098153983) :: 292913151;
    ax = ax + ax >> 8;
    ebx = bh + bh + bh + bh;
    asm("rcr ax,1");
    goto L0000adbe;
    ecx = ecx + 75088000;
    ax = 0;
    goto L0000adbe;
    ecx :: 209453311;
    ax = 0;
    ebx = bh + bh + bh + bh;
    asm("rcr ax,1");
    goto L0000adbe;
    ax = ax + ax;
    asm("shrd ax,cx,0x8");
    ebx = ebx + ebx;
    asm("rcr ax,1");
L0000adbe:
    (restore)bx;
    (restore)cx;
    (restore)dx;
    return;
    (save)cx;
    (save)bx;
    (save)si;
    ecx = *(bx + si + 8);
    dx = *(bx + si + 4);
    ax = *(bx + si);
    si = 63488;
    asm("Unknown opcode 0xff");
    if(!( *(bp + di + 0xc1d8) = *(bp + di + 0xc1d8) - 1)) {
        >= ? L0000adef : ;
        != ? 0xadde : ;
        si = si + si;
        ax = ax + 0x800;
        asm("adc dx,+0x0");
        if(!( *(bx + si) = *(bx + si) + al)) {
            dx = 0;
            *(bx + si + 0x4166) = *(bx + si + 0x4166) + al;
        }
    }
    ax = ax & si;
    bx = cx;
    ecx = ecx & -2123988993;
    asm("rol word [bx+si],0xc4");
    ecx :: 561186815;
    if(ecx == 0) {
        asm("shrd ax,dx,0xc");
        dx = dx + dx >> 0xc;
    } else {
        asm("shrd ax,dx,0xb");
        dx = dx + dx;
        asm("shrd dx,cx,0xb");
    }
    ebx = ebx + ebx;
    asm("rcr dx,1");
    goto L0000ae88;
    ecx :: 947045376;
    if(ecx >= -52) {
        ecx = ~(ecx - 0xc);
        if(cl >= 0x20) {
            cl = cl - 0x20;
            si = ax;
            ax = dx;
            dx = 0;
        }
        asm("shrd si,ax,cl");
        asm("shrd ax,dx,cl");
        dx = dx >> cl;
        si = si + si;
        asm("adc ax,+0x0");
        asm("adc dx,+0x0");
    } else {
        ax = 0;
        dx = 0;
        bx = bx << 0x11;
        asm("rcr dx,1");
    }
    goto L0000ae88;
    asm("shrd ax,dx,0xb");
    dx = dx + dx >> 0xb;
    ebx = ebx + ebx;
    asm("rcr dx,1");
    asm("lock jg 0xaedf");
    if(cx != 0x43ff) {
        (save)dx;
        (save)ax;
        L00008EDA();
        asm("Unknown opcode 0xff");
        *(bx + si + 0x5a)();
    }
L0000ae88:
    (restore)si;
    (restore)bx;
}

stack space not deallocated on return
/*	Procedure: 0x0000AE8A - 0x0000B35A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000AE8A()
{



    (restore)cx;
    return;
    (save)cx;
    (save)bx;
    bx = dx;
    dx = 0;
    ecx = ax >> 0x17 & 661913855;
    ax = ax << 8;
    if(cl != 0xff) {
        ecx = ecx + 250298240;
    }
    ch = 0xff;
    asm("Unknown opcode 0xff");
    if(!(ax = ax & 65535)) {
        *(bx + si) = *(bx + si) + al;
        ax = ax + 0xd + 1;
        cx = cx + cx;
        asm("rcr ecx,1");
        *(bp + di + 4) = ax;
        *(bp + di + 8) = ecx;
        (restore)bx;
        (restore)cx;
        return;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        if(!( *(bx + si + 0x1389) = *(bx + si + 0x1389) + al)) {
        }
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        asm("aas");
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        *bx();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        *bx = *bx - 1;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        *bx = *bx + 1;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        *(bp + di) = *(bp + di) + 1;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        *(bx + di) = *(bx + di) + 1;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        if(!( *(bx + si) = *(bx + si) + 1)) {
        }
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        asm("aas");
        bh = bh + bh;
        *bx();
        *bx = *bx - 1;
        *bx = *bx + 1;
        *(bp + di) = *(bp + di) + 1;
        *(bx + di) = *(bx + di) + 1;
        *(bx + si) = *(bx + si) + 1;
        if(!(bh = bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh + bh)) {
        }
        bh = bh + bh;
        asm("aas");
        *(bx + si) = *(bx + si) + al;
        ax = *bx();
        *(bx + si) = *(bx + si) + al;
        *bx = *bx - 1;
        *(bx + si) = *(bx + si) + al;
        *bx = *bx + 1;
        *(bx + si) = *(bx + si) + al;
        *(bp + di) = *(bp + di) + 1;
        *(bx + si) = *(bx + si) + al;
    }
    *(bx + di) = *(bx + di) + 1;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 1;
    if(!( *(bx + si) = *(bx + si) + al)) {
    }
    *(bx + si) = *(bx + si) + al;
    asm("aas");
    *(bx + si) = *(bx + si) + al;
    *bx = *bx + bl;
    *(bx + si) = *(bx + si) + al;
    *bx = *bx + cl;
    *(bx + si) = *(bx + si) + al;
    *bx = *bx + al;
    *(bx + si) = *(bx + si) + al;
    *(bp + di) = *(bp + di) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + di) = *(bx + di) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx - 0x75) = *(bx - 0x75) + dl;
    asm("clc");
    bx = 0;
    ebx = *L00000008;
    edx :: 91489280;
    edx :: 158664704;
    if(bh < 0) {
        edx = edx ^ -2124018688;
    }
    asm("cli");
    if(!( *si = *si + cl)) {
        edx = -2124020736;
    }
    < ? L0000af7f : ;
    > ? L0000afe8 : ;
    if(!(bx = bx - 0x403f)) {
        (restore)di;
        return;
    }
    cx = *bx;
    if(!(ebx = ebx + 0x20)) {
        ax = *%cs:si];
        asm("popf");
        *(bp + di) = *(bp + di) ^ sp;
        *(bp + di) = *(bp + di) + ah;
        asm("enter 0xf31,0x40");
        edx :: 947127296;
        if(edx == 0) {
            cx = cx + cx;
            if(ax > cx) {
                goto L0000afdc;
            }
            if(!( *(bx + si) = *(bx + si) + al)) {
                asm("rol ax,1");
                >= ? L0000afc1 : ;
                *(bx + 4) & ax;
                if(*bx & ax) {
                    goto L0000afdc;
                }
                *(bx + si) = *(bx + si) + al;
                asm("ror ax,1");
            }
        }
        if(cx != 0) {
            asm("adc word [bx+0x4],+0x0");
            if(!( *bx = *bx + ax)) {
                asm("rcr word [bx+0x4],1");
                *(bx + 8) = *(bx + 8) + 1;
L0000afdc:
            }
        }
        (restore)di;
        return;
    }
    (save)si;
    *bx = 0;
    *(bx + si) = *(bx + si) + al;
    si = *(bx + 4);
    if(!(ebx = ebx + 0x20)) {
        ax = *%cs:si];
        asm("popf");
        *(bp + di) = *(bp + di) ^ sp;
        *(bp + di) = *(bp + di) + ah;
        asm("lock xor [bx+0x4],si");
        ax = ax + 1;
        edx :: 997458944;
        if(edx == 0) {
            asm("rol cx,1");
            asm("adc si,si");
            if(ax > si) {
                goto L0000b03e;
            }
            if(!( *(bx + si) = *(bx + si) + al) && cx == 0) {
                *(bx + si) = *(bx + si) + al;
                if(!(ax = ax + ax)) {
                }
                if(*(bx + 4) & ax) {
                    goto L0000b03e;
                }
                *(bx + si) = *(bx + si) + al;
                ax = ax >> 1;
            }
        }
        if(!(cx = cx | si) && !( *(bx + 4) = *(bx + 4) + ax)) {
            asm("rcr word [bx+0x4],1");
            *(bx + 8) = *(bx + 8) + 1;
L0000b03e:
        }
        (restore)si;
        (restore)di;
        return;
    }
    edx :: 779355136;
    if(edx == 0) {
        if(ebx = ebx + 1) {
            goto L0000b076;
        }
        *(bx + si) = *(bx + si) + al;
L0000b058:
        si :: 0;
        *(bx + si + 0x875) = *(bx + si + 0x875) + al;
        if(cx == 0) {
            goto L0000b076;
        }
        *(bx + si) = *(bx + si) + al;
    }
    *(bx + 4) = 0;
    *(bx + si + 0x8166) = *(bx + si + 0x8166) + al;
    di = di - 1;
    bh :: 0;
    asm("aas");
    (restore)si;
L0000b076:
    (restore)di;
    return;
    *(bx + 4) = 0;
    *(bx + 8) = 0;
    (restore)si;
    (restore)di;
    return(0);
    si = si - 1;
    asm("sbb dh,ah");
    ah = ah << 0xc7;
    asm("Unknown opcode 0xd1");
    ch = 0xfa;
    asm("aas");
    *(bp + di) = *(bp + di) - cx;
    *(bx + si) = *(bx + si) + cx;
    *(bp + di + 0x84c6) = *(bp + di + 0x84c6) | bl;
    asm("sti");
    di = 0x261a;
    asm("lds bp,[si+0x2e]");
    al = al + *(bp - 0x63);
    asm("sti");
    asm("aas");
    bl = bl - *(bx + si + 0xa6b);
    asm("popf");
    cx = 0xba2b;
    asm("sti");
    fs = bx;
    asm("sti");
    asm("aas");
    asm("cld");
    (save)0xdd9c;
    if(!(dx = dx - *L00002898)) {
        cx = cx - 1;
        asm("xchg ax,dx");
        asm("cld");
        di = 0xadc1;
        goto L0000b058;
        asm("int3");
        asm("int3");
        asm("int3");
        asm("int3");
        asm("cld");
        asm("aas");
        asm("repne adc word [bx+0xaaaa],0xaaaa");
        *di = al;
        di = di + 1;
        asm("std");
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        (save)0;
        (save)si;
    }
    (save)cx;
    di = ax;
    ecx = *(bx + 8) << 1;
    if(!( *(bx + si + 0x3fff) = *(bx + si + 0x3fff) + al)) {
        if(!( *(bp + si + 9) & 0x80)) {
            *(bp + di + 8) = 1137131520;
            al = al + 0xa2;
            (fsave)(frestore) * *bx;
            sp = bp;
            (restore)bp;
            *(bp + di) = 0xc235;
            (save)0xeb21;
            asm("adc sp,[bp-0x39]");
        }
        *(bx + 1 + si) = *(bx + 1 + si) | al;
        *(bh + al + 1 + si) = *(bh + al + 1 + si) + al;
        *(bx + si) = *(bx + si) + ax + *(bh + al + si);
        if(bl = bl + ch) {
            goto L0000b183;
        }
    }
    ecx = *(bp + si + 8) << 1;
    != ? 0xb144 : ;
    eax = *(bx + 8) & 224821248;
    asm("Unknown opcode 0xff");
    asm("aas");
    *(bp + di + 8) = eax;
    *(bp + di + 4) = 0xdaa2;
    asm("Unknown opcode 0x0f");
    sp = bp;
    (restore)bp;
    *(bp + di) = 0xc235;
    (save)0xeb21;
    sp = sp - 1;
    ch = *(bx + 9);
    ax = L0000A77C();
    asm("Unknown opcode 0xff");
    *(bp + di + 0xe8c3) = *(bp + di + 0xe8c3) - 1;
    *(bx + si) = *(bx + si) + al;
    *(bp + si + 0x953) = *(bp + si + 0x953) + cx + 1;
    if(cx + 1 < 0) {
        if(dl < 0) {
            ax = bx;
            (save)0x4000;
            *(bx + si) = *(bx + si) + al;
            (save)0xdaa2;
            asm("Unknown opcode 0x0f");
            (restore)bp;
            (save)0xc235;
            (save)0xe821;
            dh = dh - bl;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
        }
    } else {
        if(dl > 0) {
            ax = bx;
            (save)0xc000;
            *(bx + si) = *(bx + si) + al;
            (save)0xdaa2;
L0000b183:
            asm("Unknown opcode 0x0f");
            sp = bp;
            (restore)bp;
            (save)0xc235;
            (save)0xe821;
            (save)cs;
            asm("Unknown opcode 0xf3");
            asm("Unknown opcode 0xff");
            *(bx + di + 0x5e)();
        }
    }
    (restore)di;
    return;
    (save)di;
    (save)si;
    (save)cx;
    di = ax;
    ecx = *(bx + 9) & 0xff;
    *(bx + 9) = *(bx + 9) & 0x7f;
    *(bx + 8) :: 745881599;
    *(bx + 4) :: 0;
    *(bx + si + 0x2375) = *(bx + si + 0x2375) + al;
    if(*bx == 0) {
        *bx = 0xc235;
        (save)0xc721;
        di = di + 1;
        al = al + 0xa2;
        (fsave)(frestore) * *bx;
        sp = bp;
        (restore)bp;
        *(bp + si) = *(bp + si) | 0xe1;
        *(bx + 8) = -511688706;
        (restore)cx;
        (restore)si;
        (restore)di;
        return(-511688706);
    }
    (save)dx;
    (save)bx;
    *(bx + 8) :: 746340351;
    (save)cx;
    esi = *(bx + 8);
    cx = *(bx + 4);
    bx = *bx;
    si = si << 0x10;
    esi = 12206079;
    *(bx + 12206079) = *(bx + 12206079) + al;
    *(bx + si) :: 0;
    al = al + ch;
    (save)ds;
    edx = bh / bh % bh / bh;
    *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
    (save)di;
    al = al + 0x66;
    *(bx + 8) = si;
    (restore)cx;
    *(bx + 8) :: 292896765;
    *(bx + 4) :: 0xa2f4;
    *(bx + di + 0x775) = *(bx + di + 0x775) ^ 2;
    (save)-10;
    if(*bx > 0xb09b) {
        (save)2;
        bx = 0x539e;
        asm("%g ret 0x42b9");
        asm("xlatb");
        bl = 0xdd;
        si = 0;
        asm("Unknown opcode 0xff");
        asm("aas");
        ax = *bx;
        dx = *(bx + 4);
        esi = *(bx + 8);
        L0000A551();
        asm("Unknown opcode 0xff");
        *(bx + si + 0x52)();
        (save)si;
        bx = 0x539e;
        asm("%g ret 0x42b9");
        asm("xlatb");
        bl = 0xdd;
        si = 0;
        asm("Unknown opcode 0xff");
        asm("aas");
        ax = *bx;
        dx = *(bx + 4);
        esi = *(bx + 8);
        L0000AA9D();
        asm("Unknown opcode 0xff");
        goto ( *(bp + di));
        tword [bx+di+0x0] = (frestore);
        asm("adc [bp-0x42],ah");
        asm("Unknown opcode 0xff");
        di = 0xc6c1;
        asm("adc al,ch");
        asm("salc");
        asm("Unknown opcode 0xf2");
        asm("Unknown opcode 0xff");
        *(bp + di - 0x3f)();
        if(!( *(bx + si + 0xc6c1) = *(bx + si + 0xc6c1) + al)) {
            si = esi;
            (restore)cx;
            (restore)bx;
            L0000A81C();
            asm("Unknown opcode 0xff");
            *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
            (save)di;
        }
        al = al + 0x66;
        *(bx + 8) = si;
        (restore)cx;
        ch = ch | 1;
    }
    ax = di;
    dx = di;
    asm("in al,0x64");
    *(bx + si) = *(bx + si) + al;
    bx = 8;
    *(8 + si) = *(8 + si) + al;
    ax = L0000BD0E();
    ch = ch >> 1;
    if(!( *(bx + si) = *(bx + si) + al)) {
        ax = di;
        (save)0x3ffe;
        *(bx + si) = *(bx + si) + al;
        (save)0x91c1;
        al = (al | *(bp + 0x2368)) - 0x9b;
        asm("int1");
        asm("Unknown opcode 0xff");
        ax = *ax();
    }
    asm("in ax,dx");
    if(!(-42 = *(bp + di + 0xe8df) * cx)) {
        (save)0xbfff;
        *(bx + si) = *(bx + si) + al;
        (save)0xdaa2;
        asm("Unknown opcode 0x0f");
        (restore)bp;
        (save)0xc235;
        (save)0x8b21;
        asm("Unknown opcode 0xc7");
        bx = di;
        ax = L0000A49C();
        asm("Unknown opcode 0xff");
        *(bx + si + 0x973) = *(bx + si + 0x973) + 1;
        *(bx + si + 0xf9) = *(bx + si + 0xf9) + 0x79;
    }
    if(!(al = al + 0x80)) {
        asm("sbb byte [bp+di+0x5a],0x59");
        (restore)si;
        (restore)di;
        return;
    }
    if(*(bx + si + 8) == 0 && *(bx + si + 4) == 0 && *(bx + si) == 0) {
        return(0);
    }
    if(*(bp + si + 8) == 0 && *(bp + si + 4) == 0 && *(bp + si) == 0) {
        *(bx + si) = 0;
        *(bx + si + 4) = 0;
        *(bx + si + 8) = 0;
        return(0);
    }
    (save)bp;
    (save)si;
    (save)di;
    (save)dx;
    (save)cx;
    (save)bx;
    esi = *(bx + si + 8);
    edi = *(bp + si + 8);
    cx = *(bp + si + 4);
    bx = *(bp + si);
    dx = *(bx + si + 4);
    ax = *(bx + si);
    *(bx + si) = *(bx + si) + L0000B35B(ax);
    *(bx + di) = L0000B35B(ax);
    *(bx + di + 4) = dx;
    *(bx + di + 8) = esi;
    ax = di;
    (restore)bx;
    (restore)cx;
    (restore)dx;
    (restore)di;
    (restore)si;
}

/* DEST BLOCK NOT FOUND: 0000b480 -> 00009dc9 */
stack space not deallocated on return
/*	Procedure: 0x0000B35B - 0x0000B51F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000B35B()
{



    (restore)bp;
    return;
    (save)si;
    (save)di;
    si = si & 0x7fff;
    *(bx + si) = *(bx + si) + al;
    di = di & 0x7fff;
    *(bx + si) = *(bx + si) + al;
    if(!(si = si - di)) {
        di = 0;
L0000b371:
        if(cx == dx && bx != ax) {
        }
        if(!( *(bx + si) = *(bx + si) + al)) {
L0000b37f:
            ax = ax - bx;
            asm("sbb dx,cx");
            asm("stc");
        }
L0000b384:
        asm("adc di,di");
        if(!(si = si - 1)) {
            *(bx + si) = *(bx + si) + al;
            asm("adc dx,dx");
            if(ax = ax + ax) {
                goto L0000b37f;
            }
            if(dx >= 0) {
                goto L0000b371;
            }
        }
        goto L0000b384;
        si = 0;
        if(ax == 0) {
            if(dx != 0) {
                goto L0000b3a5;
            }
        } else {
L0000b3a5:
            while(dx < 0) {
                asm("adc ax,ax");
                asm("adc dx,dx");
                si = si - 1;
            }
            (restore)cx;
            (save)cx;
            cx = cx & 0x7fff;
            *(bx + si) = *(bx + si) + al;
            si = si + cx;
        }
    } else {
        si = si + di;
        di = 0;
    }
    (restore)cx;
    (restore)bx;
    bx = bx & 0x8000;
    *(bx + si) = *(bx + si) + al;
    si = si | bx;
    if(dx == 0) {
        si = 0;
    }
    ebx = ebx ^ ecx;
    >= ? 0xb3d7 : ;
    di = ~di;
    return;
    (save)bx;
    (save)dx;
    bx = ax;
    *(bx + si) = *(bx + si) + al;
    dx = ax;
    eax = *%cs:bx+0x3d42] & *%ds:di+0x8];
    if(eax == edx) {
        al = 0x41;
        dh = 0;
    } else {
        dx = !dx;
        *%ds:di+0x8] = *%ds:di+0x8] & edx;
        eax = *(bp + di + 8);
        dh = ax & 0x80;
        asm("rol dh,1");
        dh = dh << 1;
        eax = eax & 443908095;
        al = 0x44;
        if(!(ax = *(bp + di + 4) | *(bp + di))) {
            eax = *%cs:bx+0x3d3c];
            *(bx + si) = *(bx + si) + al;
            *%ds:di+0x8] = *%ds:di+0x8] | eax;
            al = 0x40;
        }
        goto L0000b469;
        eax :: 578125823;
        eax = *%cs:bx+0x3d40];
        *(bx + si) = *(bx + si) + al;
        *%ds:di+0x8] = *%ds:di+0x8] | eax;
        if(*(bp + di) == 0) {
            ax = *(bp + di + 4);
L0000b443:
            ax :: 0;
        }
        if(!( *(bx + si + 0x1b0) = *(bx + si + 0x1b0) + al)) {
            al = 5;
        }
        goto L0000b469;
        al = 4;
        if(!( *(bp + di + 7) & 0x80)) {
            *(bx + si) = *(bx + si) + al;
            *%ds:di+0x8] = *%ds:di+0x8] | *%cs:bx+0x3d40];
            al = 0x44;
        }
    }
L0000b469:
    al = al | dh;
    edx = *%ds:di+0x4] & -267732737;
    *%ds:di+0x4] = edx;
    (restore)dx;
    (restore)bx;
    return;
    goto L00009dc9;
    eax = *esi;
    esi = esi + 4;
    asm("Unknown opcode 0xfe");
    di = 0x6509;
    if(dl = dl & 0x9a) {
        goto L0000b443;
    }
    *(bx + 0x651b) = *(bx + 0x651b) + dl;
    *(bp + 0x6509) = *(bp + 0x6509) + 0x40;
    dl = 0;
    al = *esi;
    esi = esi + 1;
    asm("popf");
    asm("xchg ax,bp");
    asm("clc");
    asm("aas");
    *di = *di + 0xc0;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 0x3fff) = *(bx + si + 0x3fff) + al;
    bx = 0x7076;
    asm("%d pop bx");
    ch = ch + *(si + 0x48e);
    *(bx + si - 0x11) = *(bx + si - 0x11) << 0x33;
    ax & 0x1fd0;
    (restore)es;
    ax = al + 0x9c + 1;
    asm("xchg ax,si");
    bx = 0x6c83;
    asm("loopne 0xb4b6");
    (restore)di;
    asm("ror byte [bx+si],0xc0");
    (save)bx;
    (save)dx;
    (save)ax;
    (save)0x3fff;
    *(bx + si) = *(bx + si) + al;
    (save)0;
    *(bx + si + 0x6a) = *(bx + si + 0x6a) + al;
    bx = ax;
    L0000A49C();
    asm("Unknown opcode 0xff");
    ax = *(bx + si + 0x5a)();
    (restore)bx;
    (save)di;
    (save)si;
    (save)dx;
    (save)cx;
    (save)bx;
    (save)ax;
    L0000B520();
    *(bx + si) = *(bx + si) + al;
    (restore)ax;
    bx = dx;
    (save)dx;
    L0000A9D7();
    asm("Unknown opcode 0xff");
    *(bx + 0x66)();
    si = *(bx + 8);
    cx = *(bx + 4);
    bx = *bx;
    si = si << 0x10;
    esi = 700071935;
    bp :: *(bp + 700119223);
    bp = 0x17f0;
    (restore)sp;
    L0000AA9D();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
    (save)di;
    al = al + 0x66;
    *(bx + 8) = si;
    (restore)bx;
    (restore)cx;
    (restore)dx;
    (restore)si;
}

/* DEST BLOCK NOT FOUND: 0000b774 -> 0000c536 */
/* DEST BLOCK NOT FOUND: 0000b7d3 -> 0000f7d4 */
stack space not deallocated on return
/*	Procedure: 0x0000B520 - 0x0000B7B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000B520()
{



    (restore)di;
    return;
    (save)di;
    (save)si;
    (save)dx;
    (save)cx;
    (save)bx;
    cx = 0;
    if(*(bx + si + 8) < 0) {
    }
    di = ax;
    dx = 0x3ffe;
    *(bx + si) = *(bx + si) + al;
    cx = cx - 0x3ffe;
    *(bx + si) = *(bx + si) + al;
    (save)cx;
    *(bx + 8) = 0x3ffe;
    ax = *bx;
    dx = *(bx + 4);
    si = 0x3ffe;
    asm("Unknown opcode 0xfe");
    di = 0xb9;
    *(bx + si) = *(bx + si) + al;
    ax = L0000A551();
    asm("Unknown opcode 0xff");
    goto ( *(bp - 0x7f));
    if(!( *(bp + 0xb9) = *(bp + 0xb9) - 0xdb)) {
        asm("Unknown opcode 0xfe");
        asm("aas");
        != ? 0xb573 : ;
        *(bx + 4) :: 0xf333;
    }
    if(!(al = al + 0xb5)) {
        asm("fdivp st1,st0");
    }
    if(*bx > 0x6484) {
        si = si & 65535;
        *(bx + si) = *(bx + si) + al;
        asm("Unknown opcode 0xfe");
        di = 0xb9;
        *(bx + si) = *(bx + si) + al;
        *(bp + 0xb9) = *(bp + 0xb9) - 0xdb;
        ax = L0000A551();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    } else {
        *bx = ax;
        *(bx + 4) = dx;
        *(bx + 8) = esi;
        *si = *si - 1;
        al = al & 0x50;
    }
    (save)dx;
    (save)si;
    ax = *bx;
    dx = *(bx + 4);
    si = *(bx + 8) - 1 & 65535;
    *(bx + si) = *(bx + si) + al;
    asm("Unknown opcode 0xfe");
    asm("aas");
    cx = 0;
    *(bx + si + 0xdb2b) = *(bx + si + 0xdb2b) + al;
    ax = L0000A551();
    asm("Unknown opcode 0xff");
    cx = cx + 1;
    asm("out 0x10,al");
    cx = dx;
    bx = ax;
    (restore)ax;
    esi = eax;
    (restore)dx;
    (restore)ax;
    L0000A81C();
    asm("Unknown opcode 0xff");
    ax = *(bx + si + 0x52)();
    (save)si;
    cx = si;
    si = si << 0x10;
    esi = ecx;
    cx = dx;
    bx = ax;
    L0000AA9D();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
    (save)di;
    al = al + 0x66;
    *(bx + 8) = si;
    bx = 3;
    *(3 + si) = *(3 + si) + al;
    cx = di;
    asm("Unknown opcode 0xfe");
    (save)0;
    *(bx + si) = *(bx + si) + al;
    (save)L0000BCBC();
    (save)dx;
    (save)si;
    ax = *bx;
    dx = *(bx + 4);
    esi = *(bx + 8);
    cx = di;
    asm("loopne 0xb678");
    *(bx + si) = *(bx + si) + al;
    bx = 2;
    *(2 + si) = *(2 + si) + al;
    L0000BCBC();
    *(bx + si) = *(bx + si) + al;
    (restore)cx;
    asm("rol si,0x10");
    esi = ecx;
    asm("rol si,0x10");
    (restore)cx;
    (restore)bx;
    ax = L0000A81C();
    asm("Unknown opcode 0xff");
    *(bp + di + 0x8b1f) = *(bp + di + 0x8b1f) - 1;
    di = di - 1;
    asm("Unknown opcode 0xc6");
    asm("adc [bp-0x75],ah");
    if(!(al = al + 0xc1)) {
        asm("rol si,0x10");
        ax = L0000AA9D();
        asm("Unknown opcode 0xff");
        cx = cx + 1;
    }
    asm("Unknown opcode 0xc6");
    asm("adc [bp-0x75],ah");
    al = al ^ 0x24;
    asm("rol si,0x10");
    cx = *(si + 0x24);
    al = al + 0x8b;
    (restore)sp;
    al = al & 8;
    L0000AA9D();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xc6");
    asm("adc [bx+di+0x66],bl");
    si = cx;
    asm("rol si,0x10");
    (restore)cx;
    (restore)bx;
    L0000A551();
    asm("Unknown opcode 0xff");
    *(bx + di + 0xb)();
    (restore)bp;
    if(!(cx = cx + 1)) {
        (save)ax;
        (save)dx;
        (save)si;
        dx = di;
        ax = cx;
        L0000AC7D();
        asm("Unknown opcode 0xff");
        *(bp + di + 0x8b07) = *(bp + di + 0x8b07) - 1;
        (save)di;
        al = al + 0x66;
        si = *(bx + 8) & 65535;
        *(bx + si) = *(bx + si) + al;
        asm("repne mov di,0xe3b9");
        asm("Unknown opcode 0x82");
        asm("sbb dh,0xbb");
        (restore)sp;
        bx = bx + 1;
        asm("%g or al,ch");
        sp = sp + si;
        asm("Unknown opcode 0xff");
        *(bx + di - 0x3f)();
        asm("Unknown opcode 0xc6");
        asm("adc [bp-0x75],ah");
        asm("int1");
        asm("rol si,0x10");
        (restore)cx;
        (restore)bx;
        L0000A551();
        asm("Unknown opcode 0xff");
        ax = *(bx + si + 0x52)();
        (save)si;
        ax = *bx;
        dx = *(bx + 4);
        esi = *(bx + 8);
L0000b6ba:
        si = si & 65535;
        *(bx + si) = *(bx + si) + al;
        asm("Unknown opcode 0xfe");
        asm("aas");
        cx = 0;
        *(bx + di + 0xdb2b) = *(bx + di + 0xdb2b) ^ 0xe8;
        asm("int3");
        asm("Unknown opcode 0xf3");
        asm("Unknown opcode 0xff");
        *(bx + di - 0x3f)();
        asm("Unknown opcode 0xc6");
        asm("adc [bp-0x75],ah");
        asm("int1");
        asm("rol si,0x10");
        (restore)cx;
        (restore)bx;
        ax = L0000A551();
        asm("Unknown opcode 0xff");
        *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
    }
    (save)di;
    al = al + 0x66;
    *(bx + 8) = si;
    (restore)bx;
    (restore)cx;
    (restore)dx;
    (restore)si;
    (restore)di;
    return;
    (restore)cx;
    (save)bx;
    (save)-123;
    asm("into");
    asm("aas");
    asm("Unknown opcode 0x8f");
    asm("clc");
    asm("rcr byte [di+0x9f39],0x3f");
    asm("xlatb");
    asm("salc");
    di = 0x4be5;
    (save)0x9d43;
    *(bp + si + 0xdeb0) = *(bp + si + 0xdeb0) ^ dl;
    asm("aas");
    if(*(bp + di) <= 0xca96) {
        asm("daa");
        *di = al;
        di = di + 1;
        asm("aas");
        asm("xlatb");
        asm("in ax,0xbf");
        if(si = si - *(bp + si)) {
            goto L0000b6ba;
        }
        *(bp + 0x1d2a) :: si;
        asm("out dx,ax");
        al = 0x3ffc;
        *di = *di + cl;
        asm("rol byte [bx+si],1");
        ax = ax | 0xf2d0;
L0000b72f:
        di = 0x8888;
    }
    *(bx + si + 0x8888) = cl;
    *(bx + si + 0x3ff8) = cl;
    *di = al;
    *(di + 1) = al;
    *(di + 1) = al;
    *(di + 1) = al;
    *(di + 1) = al;
    *(di + 1) = al;
    *(di + 1) = al;
    *(di + 1) = al;
    di = di + 1;
    asm("cld");
    di = 0;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 0x3fff) = *(bx + si + 0x3fff) + al;
    asm("Unknown opcode 0x8f");
    asm("clc");
    asm("rcr byte [di+0x9f39],0x3f");
    asm("xlatb");
    *bx = *bx >> cl;
    asm("retf");
    sp = bp;
    (restore)bp;
    asm("fidivr dword [bx+0xbdaa]");
    asm("Unknown opcode 0xc4");
    asm("Unknown opcode 0xc6");
    if(ax = ax + 0xe4e9 + *(bp - 0x5b)) {
        goto L0000b72f;
    }
    <= ? L0000b6f9 : ;
    asm("loop 0xb7ab");
    asm("xchg ax,di");
    < ? L0000b769 : ;
    asm("les di,[bp+di+0xf27d]");
    asm("xchg ax,bx");
    goto L0000c536;
    asm("rol byte [bx+si],1");
    ax = ax | 0xd0 | 0xefd0;
    asm("aas");
    si = si | *(bp + 0xb60);
    dh = 0x60;
    si = si | *(bp + 0xbff5);
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
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    *di = al;
    di = di + 1;
    asm("cli");
    asm("aas");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 0xbffe) = *(bx + si + 0xbffe) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si + 0x3fff) = *(bx + si + 0x3fff) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + ax;
    *L00005500 = *L00005500 + al + *(bx + si) + *(bx + si) + 0x500;
}

/* DEST BLOCK NOT FOUND: 0000b7d3 -> 0000f7d4 */
stack space not deallocated on return
/*	Procedure: 0x0000B7B8 - 0x0000BCBB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000B7B8()
{



    (save)es;
    *(di + 0x57) = *(di + 0x57) + dl;
    (save)dx;
    (save)cx;
    (save)bx;
    bp = sp;
    sp = sp - 0xc;
    di = ax;
    cx = 0;
    ecx = *(bx + si + 8) & -2123988993;
    goto L0000f7d4;
    if(ecx >= 0x20) {
    }
    (save)cx;
    (save)si;
    (save)di;
    esi = *(bx + si + 8);
    edi = -1564917762;
    (fsave)(frestore) * *bx;
    sp = bp;
    (restore)bp;
    bx = 0xc235;
    (save)0x8b21;
    (save)ax;
    al = al + 0x8b + ch;
    asm("Unknown opcode 0x62");
    asm("sti");
    asm("Unknown opcode 0xff");
    ax = *(bx + di - 0x77)();
    *(bx + di + 0x451) = *(bx + di + 0x451) + cx;
    *(bx + di + 8) = esi;
    ax = di;
    di = cx;
    (restore)si;
    if(!( *(bx + 9) & 0x80)) {
        (save)ax;
        bx = di;
L0000b813:
        ax = di;
        (save)0x3ffe;
        (save)0xdaa2;
        asm("Unknown opcode 0x0f");
        (restore)bp;
        (save)0xc235;
        (save)0xe821;
        if(*(bx + si) = *(bx + si) + al) {
            goto L0000b813;
        }
        asm("Unknown opcode 0xff");
        ax = *(bx + si + 0x48)();
    }
    bx = si;
    ah = bl;
    bl = bl & 2;
    (save)al + bl & 7;
    if(!(al & 1)) {
        (save)0xbffe;
        *(bx + si) = *(bx + si) + al;
        (save)0xdaa2;
        asm("Unknown opcode 0x0f");
        (restore)bp;
        (save)0xc235;
        (save)0x8b21;
        asm("Unknown opcode 0xc7");
        bx = di;
        ax = L0000A49C();
        asm("Unknown opcode 0xff");
        *(bx + si + 0x973) = *(bx + si + 0x973) + 1;
        *(bp + di) = *(bp + di) - 0xc9;
    }
    ecx = *(bx + 8) - -2090450946;
    asm("stc");
    asm("loopne 0xb8e4");
    asm("sbb di,ax");
    bp = bp + 1;
    asm("hlt");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(di - 8) = 0;
    *(bx + si + 0xc766) = *(bx + si + 0xc766) + al;
    bp = bp + 1;
    asm("cld");
    asm("Unknown opcode 0xff");
    asm("aas");
    goto L0000b916;
    *(bx + si) = *(bx + si) + al;
    if(ecx < 0) {
        ecx = -144310272;
    }
    asm("fldenv [bp-0x7d]");
    asm("stc");
    *(bp + 4) = *(bp + 4) | bh;
    ecx = 1714290696;
    cx = *si;
    *si = *si | ch;
    *(bx + di - 0x75) = *(bx + di - 0x75) + dl;
    bp = bp - 1 + 1;
    asm("in al,dx");
    if(!(al = al + 1 & 2)) {
        if(ah == 1) {
            goto L0000b8b1;
        }
    } else {
L0000b8b1:
        (save)ax;
        ax = *bx;
        dx = *(bx + 4);
        si = *(bx + 8) << 0x10;
        esi = *(bx + 8);
        bx = ax;
        cx = dx;
        ax = L0000AA9D();
        asm("Unknown opcode 0xff");
        *(bp + di + 0xe84d) = *(bp + di + 0xe84d) - 1;
        bx = 8;
        *(8 + si) = *(8 + si) + al;
        bx = bx - cx;
        *(di + 0x4d0c) = si;
        asm("scasb");
        0 = *(bx + si) * ax;
        *(bx + si) = *(bx + si) + al;
        *(di - 0xc) = L0000BCBC();
        *(di - 8) = dx;
        *(di - 4) = esi;
        (restore)ax;
    }
    if(al != 0) {
        if(ah == 1) {
            goto L0000b8fa;
        }
    } else {
L0000b8fa:
        ax = di;
        cx = *(di - 0x18);
        bx = 8;
        *(8 + si) = *(8 + si) + al;
        bx = bx - cx;
        cx = si;
        *(bp + di) = ax;
        (restore)bp;
        0 = *(bx + si) * ax;
        dx = di + cx;
        L0000BD0E(sp);
L0000b916:
        *(bx + si) = *(bx + si) + al;
    }
    if(!(al = *(di - 0x14) + 1 & 2)) {
        ax = *(di - 0xc);
        dx = *(di - 8);
        esi = *(di - 4);
    } else {
        ax = *bx;
        dx = *(bx + 4);
        esi = *(bx + 8);
    }
    cx = *(di - 0x14);
    if(!(cl & 4)) {
        esi = esi ^ -41910272;
    }
    *(di + 0x58) = *(di + 0x58) + si;
    asm("rol si,0x10");
    if(!(bl = cl + 2 + 1 & 2)) {
        cl = cl & 4;
        bx = *(di - 0xc);
        cx = *(di - 8);
        esi = *(di - 4);
    } else {
        bx = *bx;
        cx = *(bx + 4);
        esi = *(bx + 8);
    }
    if(!(cl = cl & 4)) {
        si = si ^ 0x8000;
        *(bx + si) = *(bx + si) + al;
    }
    asm("rol si,0x10");
    if(bx == 0 && cx == 0) {
        asm("Unknown opcode 0xff");
        > ? L0000ba01 : ;
        (save)cs;
        ax = 0;
        dx = 0;
        0;
        asm("into");
        asm("Unknown opcode 0xff");
        > ? L0000b985 : ;
        ax = ax + 0x7ee8;
    }
    asm("out dx,al");
    asm("Unknown opcode 0xff");
    *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
    (save)di;
    al = al + 0x66;
    *(bx + 8) = si;
L0000b9a7:
    (restore)bx;
    (restore)cx;
    (restore)dx;
    (restore)di;
    (restore)bp;
    return;
    (save)si;
    si = 0;
    L0000B7B8();
    asm("Unknown opcode 0xff");
    *(bp - 0x3d)();
    (save)si;
    si = 2;
    *(bx + 2) = *(bx + 2) + al;
    L0000B7B8();
    asm("Unknown opcode 0xff");
    *(bp - 0x3d)();
    (save)si;
    si = 1;
    *(bx + 1) = *(bx + 1) + al;
    L0000B7B8();
    asm("Unknown opcode 0xff");
    ax = *(bp - 0x3d)();
    asm("adc ax,0x487b");
    asm("int3");
    asm("a32 ret");
    *di = al;
    di = di + 1;
    asm("aas");
    asm("out 0xd6,ax");
    bp = dx;
    if(di < 0) {
        goto L0000b9a7;
    }
    asm("xchg ax,bp");
    asm("aas");
    asm("outsw");
    ax & 0x8db8;
    (save)cx;
    asm("lock aaa");
    asm("cbw");
    asm("Unknown opcode 0xff");
    asm("aas");
    *(si - 0x22) & ah;
    asm("stc");
    si = si ^ bx;
    al = al + 0xb5;
    asm("Unknown opcode 0xff");
    asm("aas");
    (save)bp;
    (save)di;
    (save)si;
    (save)dx;
    (save)cx;
    (save)bx;
    di = ax;
    si = 0;
    ecx = *(bx + 8);
    *(bx + 9) = *(bx + 9) & 0x7f;
    if(*(bx + 8) == 0 && *(bx + 4) == 0) {
    }
    if(*bx != 0) {
        if(ecx < 0) {
            si = si - 1;
            *(bx + si) = *(bx + si) + al;
            *(bx + si + 0x6a) = *(bx + si + 0x6a) + al;
            ax = di;
            bx = di;
            L0000A49C(0, 0xbfff);
            asm("Unknown opcode 0xff");
            *(bx + si + 0x973) = *(bx + si + 0x973) + 1;
            *(bp - 0x75) = *(bp - 0x75) & 0x5f;
        }
        *(bp - 0x7d) = *(bp - 0x7d) | ah;
        return;
        al = al + 0x2b;
        sp = bp;
        (restore)bp;
        dx = *(bx + 4);
        ax = *bx;
L0000ba50:
        ebx :: 175259647;
        ax = ax + ax;
        asm("adc dx,dx");
        asm("adc cx,cx");
        ebx = ebx - 1;
        goto L0000ba50;
        if(dx == 0) {
        }
        if(ax == 0) {
            bx = 0;
        } else {
            while(dx < 0) {
                ax = ax + ax;
                asm("adc dx,dx");
                ebx = ebx - 1;
            }
            ebx = ebx - 4;
        }
        *bx = ax;
        *(bx + 4) = dx;
        *(bx + 8) = ebx;
    } else {
        cx = 0;
    }
    (save)si;
    (save)cx;
    ax = *bx;
    dx = *(bx + 4);
    si = *(bx + 8) << 0x10;
    esi = *(bx + 8);
    bx = ax;
    cx = dx;
    L0000AA9D();
    asm("Unknown opcode 0xff");
    ax = *(bx + si + 0x52)();
    (save)si;
    cx = 0x9a79;
    asm("Unknown opcode 0x82");
    asm("cmpsb");
    bx = 0x1f8c;
    asm("repne sbb ax,[bx+di+0xffe6]");
    *(bx + si) = *(bx + si) + 1;
    *(bx + di + 0xce) = *(bx + di + 0xce) + al;
    *(bp + di) = *(bp + di) + al;
    ax = ax + 1;
    ax = L0000A551();
    asm("Unknown opcode 0xff");
    *(bp + di + 0x87ec) = *(bp + di + 0x87ec) - 1;
    bp = bp + 1;
    *(bx + 0x455) = *(bx + 0x455) | al;
    asm("xchg si,[di+0x0]");
    cx = 0xf0d6;
    asm("xchg ax,si");
    asm("in al,dx");
    bx = 0xbfdb;
    asm("xlatb");
    *(bx + di + 65510) = *(bx + di + 65510) | ax;
    *(bx + si) = *(bx + si) + 1;
    *(bx + di + 0xce) = *(bx + di + 0xce) + al;
    dl = dl + bh;
    asm("aas");
    ax = L0000AA9D();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    cx = 0x51a;
    asm("aad 0xe6");
    bx = 0xe187;
    asm("%s in ax,0x81");
    asm("out 0xff,al");
    *(bx + si) = *(bx + si) + 1;
    *(bx + di + 0xce) = *(bx + di + 0xce) + al;
    *(bx + di) = *(bx + di) + al;
    ax = ax + 1;
    L0000A551();
    asm("Unknown opcode 0xff");
    *(bp + di + 0x8b1f) = *(bp + di + 0x8b1f) - 1;
    di = di - 1;
    asm("Unknown opcode 0xc6");
    asm("adc [bp-0x75],ah");
    if(!(al = al + 0xc1)) {
        asm("rol si,0x10");
        L0000AA9D();
        asm("Unknown opcode 0xff");
        *(bx + si + 0x52)();
    }
    (save)si;
    *(bx + (si ^ 0x8000)) = *(bx + (si ^ 0x8000)) + al;
    asm("rol si,0x10");
    esi = *di;
    asm("rol si,0x10");
    bx = *(di + 8);
    cx = *(di + 4);
    L0000A551();
    asm("Unknown opcode 0xff");
    *(bx + 64581) = *(bx + 64581) + 1;
    asm("xchg dx,[di-0x8]");
    asm("xchg si,[di-0xc]");
    asm("rol si,0x10");
    esi = *di;
    asm("rol si,0x10");
    bx = *(di + 8);
    cx = *(di + 4);
L0000bb4f:
    L0000A551();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xc6");
    asm("adc [bp-0x75],ah");
    if(cx = cx + 1) {
        goto L0000bb4f;
    }
    asm("rol si,0x10");
    (restore)cx;
    (restore)bx;
    ax = L0000A81C();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
    (save)di;
    al = al + 0x66;
    *(bx + 8) = si;
    sp = sp + 0xc;
    (restore)cx;
    si = di;
    asm("%s outsb");
    for(*(bx + si) = *(bx + si) + al; cx != 0; si = bp + 0xa) {
        cx = cx >> 1;
        >= ? L0000bbac : ;
        (save)cx;
        (save)si;
        eax = *(bx + 8);
        cx = *(bx + 4);
        bx = *bx;
        ax = ax << 0x10;
        eax = *%cs:bp+0x8];
        dx = *%cs:bp+0x4];
        si = *%cs:0xe896];
        asm("Unknown opcode 0xfe");
        asm("out dx,al");
        asm("Unknown opcode 0xff");
        *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
        (save)di;
        al = al + 0x66;
        *(bx + 8) = si;
        (restore)si;
        (restore)cx;
    }
    (restore)si;
    *(bx + 8) = *(bx + 8) + esi;
    ax = di;
    (save)0xbfff;
    *(bx + si) = *(bx + si) + al;
    (save)0;
    *(bx + si + 0x6a) = *(bx + si + 0x6a) + al;
    bx = di;
    L0000A49C();
    asm("Unknown opcode 0xff");
    ax = *(bp + di + 0x59)();
    (restore)dx;
    (restore)si;
    (restore)di;
    (restore)bp;
    return;
    (save)di;
    (save)si;
    (save)dx;
    (save)cx;
    (save)bx;
    ecx = *(bx + si + 8);
    dx = *(bx + si + 4);
    bx = *(bx + si);
    if(bx == 0) {
        if(dx == 0) {
            if(ecx = ecx + ecx) {
                goto L0000bc96;
            }
            *(bx + si) = *(bx + si) + al;
L0000bbf1:
            *(bx + si + 8) = 1086849023;
            *(bx + si) = *(bx + si) + al;
            bh = bh + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si + 0x748) = *(bx + si + 0x748) + al;
L0000bc04:
            cl = cl >> 0x8b;
            *(bx + si) = *(bx + si) + al;
        }
        asm("stc");
        asm("Unknown opcode 0xff");
        if(*(bp - 0x7f) = *(bp - 0x7f) + ah) {
            goto L0000bc22;
        }
        *(bx + si) & al;
        *(bp + di + 0x80d1) = *(bp + di + 0x80d1) + cl;
    }
    asm("out 0x7f,al");
    edx :: -529235969;
L0000bc22:
    if(ecx = ecx + ecx) {
        goto L0000bc04;
    }
    ecx = ecx >> 1;
    == ? L0000bc35 : ;
    if(dx = *(bx + si + 4) + *(bx + si + 4)) {
        goto L0000bbf1;
    }
    dx = *(bx + si + 4);
    di = 0;
    (save)ax;
    asm("stc");
    if(!(ecx = ecx - -781828097)) {
        dx = dx >> 1;
        asm("rcr bx,1");
        asm("rcr di,1");
    }
    ecx = ecx + -1989787649;
    *(bp + di + 0x8bca) = *(bp + di + 0x8bca) | cl;
    return(ax - 1);
    si = dx;
    asm("stc");
    asm("rcr si,1");
    if(!(dx = dx + 1)) {
        dx = dx - 1;
L0000bc61:
        si = si / si;
        dx = si % si;
        si = si - 1;
        if(si > ax) {
            si = si + 1 + ax;
            asm("rcr si,1");
            dx = cx;
            ax = bx;
            goto L0000bc61;
        }
        si = si + 1;
        cx = ax;
        ax = di;
        si = si / si;
        dx = si % si;
        si = si + cx;
    } else {
        if(ax == si) {
            goto L0000bc90;
        }
        asm("xchg ax,dx");
        ax = di;
        dx = si / si % si / si;
    }
    dx = 0;
    asm("stc");
    asm("rcr si,1");
    asm("rcr ax,1");
    asm("adc ax,dx");
L0000bc90:
    asm("adc dx,si");
    (restore)si;
    *L00005689 = ax;
L0000bc96:
    al = al + 0x5b;
    (restore)cx;
    (restore)dx;
    (restore)si;
    (restore)di;
    return;
    (save)si;
    (save)cx;
    cx = dx;
    esi = *(bx + si + 8);
    dx = *(bx + si + 4);
    ax = *(bx + si);
    ax = L0000BCBC(ax);
    *(bx + si) = *(bx + si) + al;
    *(bx + di) = ax;
    *(bx + di + 4) = dx;
    *(bx + di + 8) = esi;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000BCBC - 0x0000BD0D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BCBC()
{



    (restore)si;
    return;
    (save)bp;
    (save)di;
    (save)cx;
    (save)bx;
    (save)si;
    (save)dx;
    (save)ax;
    bp = sp;
    di = cx;
    ax = *%cs:bx];
    dx = *%cs:bx+0x4];
    esi = *%cs:bx+0x8];
L0000bcd5:
    asm("rol si,0x10");
    esi = *(di + 8);
    asm("rol si,0x10");
    bx = *di;
    cx = *(di + 4);
    L0000AA9D();
    asm("Unknown opcode 0xff");
    *(di + 0xa7f) = *(di + 0xa7f) - 1;
    bx = *%cs:bx];
    cx = *%cs:bx+0x4];
    asm("rol si,0x10");
    esi = *%cs:bx+0x8];
    asm("rol si,0x10");
    L0000A551();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    if(*(di + 0xc) = *(di + 0xc) - 1) {
        goto L0000bcd5;
    }
    sp = sp + 0x10;
    (restore)cx;
    (restore)di;
}

stack space not deallocated on return
/*	Procedure: 0x0000BD0E - 0x0000BD55
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BD0E()
{



    (restore)bp;
    return;
    (save)di;
    (save)si;
    (save)cx;
    (save)bx;
    (save)dx;
    di = ax;
    ax = *bx;
    dx = *(bx + 4);
    si = *(bx + 8) << 0x10;
    esi = *(bx + 8);
    bx = ax;
    cx = dx;
    L0000AA9D();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x5b)();
    L0000BCBC();
    asm("Unknown opcode 0xff");
    cx = cx + 1;
    asm("Unknown opcode 0xc6");
    asm("adc [bp+di+0x8b1f],cl");
    di = di - 1;
    al = al + 0x66;
    si = *(bx + 8);
    asm("rol si,0x10");
    L0000AA9D();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x8907) = *(bx + di + 0x8907) - 1;
    (save)di;
    al = al + 0x66;
    *(bx + 8) = si;
    (restore)cx;
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x0000BD56 - 0x0000BE1F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BD56()
{



    (restore)di;
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)es;
    (save)bp;
    (save)dx;
    bp = ax;
    eax = 801969664;
    if(801969664 != 0) {
        if(801969664 == 0x80) {
            goto L0000bdbe;
        }
        bx = 0;
        cx = 0;
        dx = 0;
        eax = 0xfa & 0xff;
        asm("int 0x2f");
        eax :: 1031079526;
        al = 0x22;
        bx = 0;
        cx = 0;
        dx = 0;
        ah = 0xfa;
        asm("int 0x2f");
        if(eax != 0) {
            goto L0000bdbe;
        }
        al = 0x1e;
        bx = 0;
        cx = 0;
        *di = 1;
        asm("xchg ax,bp");
        (save)es;
        *(bx + si) = *(bx + si) + al;
        dx = 0;
        ah = 0xfa;
        asm("int 0x2f");
        ax = cs;
        bx = 0xcec;
        *(0xcec + si) = *(0xcec + si) + al;
        dx = ax;
        cx = bx;
        al = 0x20;
        cx = cx >> 0x10;
        ah = 0xfa;
        asm("int 0x2f");
        al = 1;
    } else {
L0000bdbe:
        dx = *si;
        asm("in ax,dx");
        if((al = al & 0x85) || edx != 0) {
            ax = 0xa00;
            *(bx + si) = *(bx + si) + 0xa00;
            si = 0xf8;
            *(bx + 0xf8) = *(bx + 0xf8) + 0xa00;
            (save)es;
            asm("int 0x31");
            asm("sbb ax,ax");
            (restore)es;
            if(ax == 0) {
                bx = 0x4110;
                *(0x4110 + si) = *(0x4110 + si) + al;
                *(bx + si) = *(bx + si) + 7;
                cx = cs;
                L0000CD6C();
                *(bx + si) = *(bx + si) + al;
                es = *si;
                al = al & 0x26;
                *%es:di+0x3e] = 1;
                *%es:di+0x40] = *(di + 0x40) | 4;
                dl = 1;
                cr0 = cr0 | 4;
                ah = 0x30;
                asm("int 0x21");
                *di = dl;
                asm("xchg ax,sp");
                (save)es;
                *(bx + si) = *(bx + si) + al;
            }
        }
        al = 0;
    }
    sp = sp + 4;
    (restore)bp;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000BE20 - 0x0000BE79
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BE20()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)es;
    es = dx;
    dl = *di;
    asm("xchg ax,bp");
    (save)es;
    *(bx + si) = *(bx + si) + al;
    if(dl != 0) {
        ax = cs;
        dx = ax;
        bx = 0;
        cx = 0;
        al = 0x21;
        ah = 0xfa;
        asm("int 0x2f");
        al = 0x1f;
        bx = 0;
        cx = 0;
        dx = 0;
        ah = 0xfa;
        asm("int 0x2f");
        (restore)es;
        (restore)cx;
        (restore)bx;
        return(1);
    }
    *di :: 0x94;
    (save)es;
    *(bx + si) = *(bx + si) + al;
    *(si + 0x1b) = *(si + 0x1b) + dh;
    *%es:bx+si+0x3e] = dl;
    *%es:bx+si+0x40] = *%es:bx+si+0x40] & 0xfb;
    cr0 = cr0 & 0xfb;
    ah = 0x30;
    asm("int 0x21");
    al = 0;
    (restore)es;
    (restore)cx;
    (restore)bx;
}

/*	Procedure: 0x0000BE7A - 0x0000BEA0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BE7A()
{



    return;
    return;
    (save)eax;
    asm("finit");
    (fsave)1;
    (fsave)0;
    asm("fdivp st1,st0");
    (fsave)st0;
    asm("fchs");
    asm("fcompp");
    asm("fnstsw ax");
    al = 2;
    asm("sahf");
    == ? L0000be96 : ;
    al = 3;
    asm("finit");
    asm("fldcw [si]");
    al = al & 0x66;
    asm("xchg ax,[si]");
    al = al & 0x66;
}

stack space not deallocated on return
/*	Procedure: 0x0000BEA1 - 0x0000BF0B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BEA1()
{



    (restore)ax;
    return;
    (save)bx;
    (save)dx;
    (save)si;
    (save)bp;
    dx = *di;
    asm("clc");
    if(ax == dx) {
        *di = *(bp + si + 8);
        asm("clc");
    }
    bx = *di;
    asm("cld");
    if(ax == bx) {
        dx = *(bp + di + 4);
        *di = dx;
        asm("cld");
        if(dx == 0) {
            dx = *di;
            asm("clc");
            si = 0;
            *di = dx;
            asm("cld");
            *di = si;
            *L00000000 = *L00000000 + al;
        }
    }
    ax :: *di;
    al & 0xc;
    if(!( *(bx + si) = *(bx + si) + al)) {
        bp = 0;
        *di = 0;
        al & 0xc;
        *(bx + si) = *(bx + si) + al;
    }
    dx = *(bx + si + 4);
    ax = *(bx + si + 8);
    if(dx != 0) {
        *(bp + si + 8) = ax;
    }
    if(ax != 0) {
        *(bx + si + 4) = dx;
    }
    (restore)bp;
    (restore)si;
    (restore)dx;
}

/* DEST BLOCK NOT FOUND: 0000bf1b -> 0000c1ed */
stack space not deallocated on return
/*	Procedure: 0x0000BF0C - 0x0000C05E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000BF0C()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    dx = *di;
    asm("clc");
L0000bf19:
    if(dx == 0) {
        goto L0000c1ed;
    }
    *(bx + si) = *(bx + si) + al;
    ax = *(bp + si + 0x24);
    ax = *(bx + si);
    bx = *(bp + si);
    if(ax + 0x2c == bx) {
        bx = bp + si - 8;
        ax = dx;
        cx = *(bp + si + 8);
        L0000BEA1();
        asm("Unknown opcode 0xff");
        *(bx + di + 0x8bca) = *(bx + di + 0x8bca) - 1;
        bx = bx - 1;
        (restore)bp;
        if(!(al = al + 0x85)) {
            si = *(bp + di);
            edi = *(bp + di);
            si = si >> 0x10;
            ah = 5;
            al = 2;
            asm("int 0x31");
            goto L0000bf19;
        }
        (save)es;
        es = cx;
        ah = 0x49;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        (restore)es;
        goto L0000bf19;
    }
    dx = *(bp + si + 8);
    goto L0000bf19;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    (save)bp;
    bx = ax;
    bp = dx;
    L0000BF0C();
    asm("Unknown opcode 0xff");
    *(bp + di + 63509) = *(bp + di + 63509) - 1;
    goto L0000c04f;
L0000bf81:
    *(bx + si) = *(bx + si) + al;
    if(bp + si + 0x2c == bx) {
        *(bx + si) = *(bx + si) + al;
        if(*(bp + si + 0x18) == 1) {
            *(bx + si) = *(bx + si) + al;
            ax = dx;
            ax = L0000BEA1();
            asm("Unknown opcode 0xff");
            *(di + 63554) = *(di + 63554) - 1;
            if(*(bx + si + 4) != 0) {
                goto L0000c057;
            }
            *(bx + si) = *(bx + si) + al;
            cx = bp;
            bx = *(bp + di);
            dx = *(bp + si);
            bx = bx - 4;
            dx = dx + 0xc;
            dx = dx + cx - bx + 0xfff;
            *(bx + si) = *(bx + si) + al;
            edx = 0 & 0xff;
            bx = dx;
            cx = dx;
            bx = bx >> 0x10;
            edi = *(bx + si);
            esi = *(bx + si + 2);
            ah = 5;
            al = 3;
            asm("int 0x31");
            asm("sbb ax,ax");
            if(!(ax = ax + 1)) {
                ax = ebx << 0x10;
                eax = ecx;
                *(bx + si) = edi;
                *(bx + si + 2) = esi;
            }
            if(ax == 0) {
                goto L0000c05b;
            }
            bx = bx + si + 8;
            dx = dx - 0xc;
            bp = bp + 1;
            *(bx + si + 4) = 0;
            *(bx + si) = *(bx + si) + al;
            ax = bx;
            *(bp + di) = dx;
            ax = L0000C05F();
            *(bx + si) = *(bx + si) + al;
            *(bp + di + 0x18) = 1;
            *(bx + si) = *(bx + si) + al;
            bp = bp & -2;
            dx = *(bx + si) - bp;
            cx = ax;
            if(dx >= 0x10) {
                esi = bp | 1;
                *(bx + si) = si;
                ax = ax + bp;
                *(bx + si) = dl | 1;
                di = *(bp + di + 0x18);
                *(bp + di + 0x14) = 0;
                *(bx + si) = *(bx + si) + al;
                di = di + 1;
                ax = ax + 4;
                *(bp + di + 0x18) = di;
                L00006821();
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
            } else {
                *(bx + si) = *(bx + si) | 1;
            }
            ax = cx;
        }
    }
    goto L0000c05b;
    dx = *(bp + si + 8);
L0000c04f:
    if(dx != 0) {
        goto L0000bf81;
    }
L0000c057:
    asm("Unknown opcode 0xff");
    (save) *(bx + di);
    asm("rcr byte [di+0x5f],0x5e");
L0000c05b:
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000C05F - 0x0000C0D2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C05F()
{



    (restore)bx;
    return;
    (save)bx;
    (save)dx;
    dx = ax;
    ax = *L000005F8;
    *(bx + si) = *(bx + si) + al;
    bx = 0;
    goto L0000c077;
L0000c06e:
    if(dx >= ax) {
        bx = ax;
        ax = *(bx + si + 8);
L0000c077:
        if(ax != 0) {
            goto L0000c06e;
        }
    }
    *(bp + si + 4) = bx;
    *(bp + si + 8) = ax;
    if(bx != 0) {
        *(bp + di + 8) = dx;
    } else {
        *di = dx;
        asm("clc");
    }
    if(ax != 0) {
        *(bx + si + 4) = dx;
    }
    bx = bp + si + 0x20;
    ax = *(bp + si);
    dx = dx + 0x2c;
    *(bp + si - 0xc) = 0;
    *(bx + si) = *(bx + si) + al;
    *(bp + si - 0x1c) = 0;
    *(bx + si) = *(bx + si) + al;
    *(bp + si - 0x14) = 0;
    *(bx + si) = *(bx + si) + al;
    *(bp + si - 0x10) = 0;
    *(bx + si) = *(bx + si) + al;
    *(bp + si - 8) = bx;
    *(bp + si - 4) = bx;
    *(bp + si - 0x20) = bx;
    *(bp + si) = ax - 0x2c;
    *si = 65282;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *(bx + di + 0x5ad0) = *(bx + di + 0x5ad0) - 1;
}

/* DEST BLOCK NOT FOUND: 0000c24e -> 00004b55 */
stack space not deallocated on return
/*	Procedure: 0x0000C0D3 - 0x0000C29F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C0D3()
{



    (restore)bx;
    return;
    (save)bx;
    (save)dx;
    dx = *di;
    asm("clc");
    if(dx != 0) {
        dx = *(bp + si + 0x24);
        ax = *(bp + si) + dx;
        bx = bx + si + 4;
        ah = *di;
        asm("rol byte [bx+di],cl");
        *(bx + si) = *(bx + si) + al;
        if(ah >= 2 && ah <= 8) {
            *di :: 0xd4;
            *(bx + si) = *(bx + si) + ax;
            if(!( *(bx + si) = *(bx + si) + al)) {
                ax = 0;
                ax = (ds << ds) + 1;
                *L000001A4 = ax;
                *(bx + si) = *(bx + si) + al;
            }
        }
        bx :: *di;
        *di = *si;
        di = di + 1;
        si = si + 1;
        *(bx + si) = *(bx + si) + ax;
        *(di + 5) = *(di + 5) + dh;
        ax = *(bp + si);
        (restore)dx;
        (restore)bx;
        return;
    }
    (restore)dx;
    (restore)bx;
    return(0);
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    bx = *si;
    al = al & 0x8b | 0x24;
    bx = bx >> 0x10;
    ax = L0000BF0C(ax);
    asm("Unknown opcode 0xff");
    (save) *(si + 0xb005);
    bp = bp + cx;
    *(bx + di) = *(bx + di) ^ bx;
    asm("rol byte [bx+si+0x74],0x10");
    ax = ebx << 0x10;
    eax = ecx;
    *(bx + si) = edi;
    *(bx + si + 2) = esi;
    if(ax != 0) {
        bx = *si;
        (save)al & 0x8d;
        *(bp + di + 0x8eb) = *(bp + di + 0x8eb) | al;
        *(bp + si) = bx;
        *(bx + si + 4) = 0;
        *(bx + si) = *(bx + si) + al;
        ax = dx;
        goto L0000c1ea;
        *(bx + si) = *(bx + si) + al;
    }
    *di & 0x118e;
    asm("lock push word [si+0xa]");
    *di = 0x118c;
    *(bx + si) = *(bx + si) + al;
    asm("Unknown opcode 0xff");
    *bx = *bx - 1;
    *(bx + di + 0x243c) = *(bx + di + 0x243c) + al;
    *(bx + si) = *(bx + si) + al;
    if(!( *(bx + si) = *(bx + si) + ax)) {
        bx = *di;
        *(bx + di) = ss;
        *(bx + si) = *(bx + si) + al;
        bl = bx >> 4 | 1;
        ah = 0x48;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        dx = ax;
        if(ax < 0) {
            goto L0000c1ea;
        }
        bx = *si;
        al = al & 0xc1;
        goto L0000c1b2;
        ah = 0x48;
        asm("int 0x21");
L0000c1b2:
        asm("rcl ax,1");
        asm("ror ax,1");
        si = ax;
        bx = ax;
        (save)es;
        es = dx;
        ah = 0x49;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        (restore)es;
        if(si < 0) {
            goto L0000c1ea;
        }
        eax = 6 & 0xff;
        asm("int 0x31");
        ax = cx << 0x10;
        ax = edx + 8;
        dx = *si;
        while(al = al & 0x89) {
        }
        dx = dx - 8;
        *(bx + si) = dx;
    } else {
L0000c1ea:
        ax = 0;
    }
L0000c1ed:
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)ax;
    *di :: -56;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *(di + 4) = *(di + 4) + dh;
L0000c204:
    ax = 0;
    goto L0000c1ed;
    *di :: -92;
    *(bx + si) = *(bx + si) + ax;
    if(dh = dh + bh) {
        goto L0000c204;
    }
    ax = sp;
    ax = L0000C3EA();
    *(bx + si) = *(bx + si) + al;
    if(ax == 0) {
        goto L0000c1ed;
    }
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + al)) {
        al = *si & 0xe8;
        si = si / si;
        dx = si % si;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xc0");
        if(*(bx + di + 0x85c2) = *(bx + di + 0x85c2) - 1) {
            goto L0000c255;
        }
        ax = *(bx + si);
        *si = ax;
        al = *si & 0xeb;
        asm("sbb cx,[bp+di+0x241c]");
    }
    *(bx + si + 0x21cd) = *(bx + si + 0x21cd) + 0x4800;
    asm("sbb bx,bx");
    ax = ax & !bx;
    cx = *si;
    al = al & 0x83;
    goto L00004b55;
    return;
L0000c255:
    asm("Unknown opcode 0xd2");
    if(al = al & 0x85) {
        goto L0000c204;
    }
    ax = ( *si & 0x8b ^ 0x24) - 4;
    if(ax > si) {
        goto L0000c204;
    }
    *si = ax;
    al = al & 0x83;
    asm("clc");
    *(bp + si - 0x6a) :: dh;
    *(bp + si) = ax;
    ax = dx;
    ax = L0000C05F();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x8bc3) = *(bx + di + 0x8bc3) - 1;
    *(bx + di + 0x2404) = *(bx + di + 0x2404) + cl;
    *(bp + di) = al | 1;
    *(bp + si + 0x14) = 0;
    *(bx + si) = *(bx + si) + al;
    di = *(bp + si + 0x18) + 1;
    ax = bp + di + 4;
    *(bp + si + 0x18) = di;
    L00006821();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    ax = 1;
    *(bx + si) = *(bx + si) + 1;
    goto L0000c1ea;
}

/*	Procedure: 0x0000C2A0 - 0x0000C3E9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C2A0()
{



    asm("Unknown opcode 0xff");
    ax = *(bp + di + 0x51)();
    (save)dx;
    (save)si;
    (save)bp;
    (save)ax;
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + al)) {
        *di :: 0xd3;
        *(bx + si) = *(bx + si) + ax;
        if(*(bx + si) = *(bx + si) + al) {
            goto L0000c2c3;
        }
    }
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + cl)) {
L0000c2c3:
        al = *si & 0xe8;
        bh = 0;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        goto L0000c3e1;
        *(bx + si) = *(bx + si) + al;
    }
    *di :: -56;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *(di + 7) = *(di + 7) + dh;
L0000c2d9:
    ax = 0;
    goto L0000c3e1;
    *(bx + si) = *(bx + si) + al;
    *di :: -92;
    *(bx + si) = *(bx + si) + ax;
    if(dh = dh + bh) {
        goto L0000c2d9;
    }
    ax = sp;
    ax = L0000C3EA();
    *(bx + si) = *(bx + si) + al;
    if(ax != 0) {
        *(bx + si) = *(bx + si) + al;
        bl = *di;
        asm("rol byte [bx+di],cl");
        *(bx + si) = *(bx + si) + al;
        if(bl >= 2 && bl <= 8) {
            *di :: 0xd4;
            *(bx + si) = *(bx + si) + ax;
            if(!( *(bx + si) = *(bx + si) + al)) {
                ax = 0;
                ax = (ds << ds) + 1;
                *L000001A4 = ax;
                *(bx + si) = *(bx + si) + al;
            }
        }
        dx = *si;
        ax = al & 0x8b | 0x1a4;
        *(bx + si) = *(bx + si) + al;
        dx = dx + cx;
        if(dx < cx) {
            dx = 65534;
            asm("Unknown opcode 0xff");
            *(bx + di + 0xe8d0) = *(bx + di + 0xe8d0) - 1;
        }
        asm("das");
        if(*(bp + di + 65528) = *(bp + di + 65528) + (ax | *(bx + si))) {
            goto L0000c2d9;
        }
        bx = ax;
        if(ax > -8 || dx <= ax) {
            goto L0000c2d9;
        }
        dx = dx - ax;
        *si = dx;
        al = al & 0x8d;
        dx = dx + 1;
        asm("cld");
        if(ax > dx) {
            goto L0000c2d9;
        }
        dx = *di;
        asm("clc");
        *si = ax;
        al = al & 0xeb;
        asm("sbb [bp+di+0x87a],al");
L0000c361:
        *(si + 0x16) = *(si + 0x16) + dh;
        if(dx > bx || *(bp + si) + dx + 4 < bx) {
            dx = *(bp + si + 8);
            if(dx != 0) {
                goto L0000c361;
            }
        }
        if(dx != 0) {
            ax = *(bp + si);
            cx = bp + di - 4;
            ax = ax + dx;
            if(cx != ax) {
                goto L0000c3a7;
            }
            si = *si;
            *si = 0x89;
            al = al & 0x83 ^ 0x24;
            *(bp + si) = *(bp + si) + si;
            bp = *si;
            return(al & 0x89);
            cx = si;
            bh = bh - al;
            di = di + di;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
        } else {
L0000c3a7:
            al = *si & 0x83;
            asm("clc");
            *bx :: cl;
            asm("Unknown opcode 0x82");
            asm("Unknown opcode 0x26");
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            *(bx + di + 0x8903) = *(bx + di + 0x8903) - 1;
            (fsave)(frestore) * *(bx + di + 0xe8da);
            *L0000FFFC = ax;
            *(bx + di + 0x8bc3) = *(bx + di + 0x8bc3) - 1;
            *(bx + di + 0x2404) = *(bx + di + 0x2404) + cl;
        }
        al = *si & 0xc;
        *(bx + di + 65283) = *(bx + di + 65283) + cx;
        dx = dx + 1;
        asm("sbb [di+0x443],cl");
        *(bp + si + 0x14) = 65535;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        L00006821();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        ax = 1;
    }
L0000c3e1:
    *(bx + si) = *(bx + si) + al;
    sp = sp + 4;
    (restore)bp;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000C3EA - 0x0000C460
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C3EA()
{



    (restore)bx;
    return;
    (save)bx;
    (save)dx;
    (save)si;
    bx = ax;
    dl = *(bx + si) + 7 & 0xf8;
    if(dx == 0) {
L0000c3fd:
        (restore)si;
        (restore)dx;
        (restore)bx;
        return(0);
    }
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + al)) {
        *di :: 0xd3;
        *(bx + si) = *(bx + si) + ax;
        if(*(bx + si) = *(bx + si) + al) {
            goto L0000c41e;
        }
    }
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + cl)) {
L0000c41e:
        dx = dx + 8;
    } else {
        ax = L0000C0D3();
        asm("Unknown opcode 0xff");
        goto ( *(bx + di));
        return;
    }
    dx = dx + 0x3c;
    if(dx < *(bp + di)) {
        goto L0000c3fd;
    }
    si = *di;
    al & 7;
    *(bx + si) = *(bx + si) + al;
    if(dx < si) {
        dl = si & 0xfe;
    }
    *(bp + di) = dx;
    dx = dx + 0xfff;
    *(bx + si) = *(bx + si) + al;
    if(dx < *(bp + di)) {
        goto L0000c3fd;
    }
    edx = 0 & 0xff;
    *(bp + di) = dx;
    0;
    (restore)si;
    (restore)dx;
}

stack space not deallocated on return
/*	Procedure: 0x0000C461 - 0x0000C46D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C461()
{



    (restore)bx;
    return;
    return(0);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
}

/*	Procedure: 0x0000C46E - 0x0000C4A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C46E()
{



    *(bx + si) = *(bx + si) + al;
    if(cx != 0) {
        *(bx + si) :: dl;
        do {
            if(al & 3) {
                break;
            }
            *(bx + si) = dl;
            ax = ax + 1;
            asm("ror dx,0x8");
        } while(cx = cx - 1);
        cx = cx >> 2;
        *(bx + si) = *(bx + si) + L0000C4A5(cx);
        if(!(cx = cx & 3)) {
            *(bx + si) = dl;
            if(!(cx = cx - 1)) {
                *(bx + si + 1) = dh;
                if(!(cx = cx - 1)) {
                    *(bx + si + 2) = dl;
                }
            }
        }
    }
}

/* DEST BLOCK NOT FOUND: 0000c4a9 -> 0000c512 */
/* DEST BLOCK NOT FOUND: 0000c4fb -> 0000c512 */
/* DEST BLOCK NOT FOUND: 0000c503 -> 0000c512 */
/* DEST BLOCK NOT FOUND: 0000c50b -> 0000c512 */
/*	Procedure: 0x0000C4A5 - 0x0000C510
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C4A5()
{



    if(cx == 0) {
        goto L0000c512;
    }
L0000c4ab:
    if(!(al & 0x1f)) {
        *(bx + si) = dx;
        ax = bx + si + 4;
        if(cx = cx - 1) {
            goto L0000c4ab;
        }
    }
    (save)cx;
    cx = cx >> 2;
    == ? L0000c4f7 : ;
    if(!(cx = cx - 1)) {
L0000c4c0:
        *(bx + si) = dx;
        *(bx + si + 4) = dx;
        *(bx + si + 8) = dx;
        *(bx + si + 0xc) = dx;
        if(!(cx = cx - 1)) {
            *(bx + si + 0x20) :: dl;
            *(bx + si + 0x10) = dx;
            *(bx + si + 0x14) = dx;
            cx = cx - 1;
            *(bx + si + 0x18) = dx;
            *(bx + si + 0x1c) = dx;
            if(ax = bx + si + 0x20) {
                goto L0000c4c0;
            }
            ax = bx + si - 0x10;
        }
        ax = bx + si + 0x10;
    }
    *(bx + si) = dx;
    *(bx + si + 4) = dx;
    *(bx + si + 8) = dx;
    *(bx + si + 0xc) = dx;
    ax = bx + si + 0x10;
    (restore)cx;
    if(cx = cx & 3) {
        goto L0000c512;
    }
    *(bx + si) = dx;
    ax = bx + si + 4;
    if(cx = cx - 1) {
        goto L0000c512;
    }
    *(bx + si) = dx;
    ax = bx + si + 4;
    if(cx = cx - 1) {
        goto L0000c512;
    }
    *(bx + si) = dx;
    ax = bx + si + 4;
}

/* DEST BLOCK NOT FOUND: 0000c542 -> 0000c582 */
/*	Procedure: 0x0000C511 - 0x0000C582
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C511()
{



    al = al + 0xc3;
    (save)cx;
    (save)si;
    cx = ax;
    si = dx;
    for(dx = 0; bx > 0; si = L0000D098()) {
        ax = cx;
        *(bx + si) = *(bx + si) + L0000D005();
        if(L0000D005() != 0) {
            break;
        }
        ax = si;
        *(bx + si) = *(bx + si) + L0000D005();
        if(L0000D005() != 0) {
            break;
        }
        dx = si;
        ax = cx;
        L0000D041();
        *(bx + si) = *(bx + si) + al;
        dx = ax;
        if(ax != 0) {
            goto L0000c582;
        }
        ax = cx;
        *(bx + si) = *(bx + si) + L0000D098();
        cx = L0000D098();
        ax = si;
        bx = bx - 1;
        *(bx + si) = *(bx + si) + L0000D098();
    }
    if(bx > 0) {
        ax = cx;
        *(bx + si) = *(bx + si) + L0000D005();
        if(L0000D005() != 0) {
            goto L0000c573;
        }
        ax = si;
        *(bx + si) = *(bx + si) + L0000D005();
        if(L0000D005() != 0) {
L0000c573:
            eax = *(bx + di) & 0xff;
            edx = *L0000D029 & 0xff;
            (restore)si;
            (restore)cx;
            return;
        }
    }
    ax = dx;
L0000c582:
    (restore)si;
}

stack space not deallocated on return
/*	Procedure: 0x0000C583 - 0x0000C6E2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C583()
{



    (restore)cx;
    return;
    (save)cx;
    (save)si;
    si = ax;
    goto L0000c596;
L0000c58b:
    cl = *(bp + si);
    if(cl != 0) {
        dx = dx + 1;
        bx = bx - 1;
        *(bx + si) = cl;
        ax = ax + 1;
L0000c596:
        if(bx != 0) {
            goto L0000c58b;
        }
    }
    while(bx != 0) {
        bx = bx - 1;
        *(bx + si) = 0;
        ax = ax + 1;
    }
    ax = si;
    (restore)si;
    (restore)cx;
    return;
    (save)bx;
    ebx = eax;
    ah = 0x3e;
    asm("int 0x21");
    *(bx + si) = *(bx + si) + L0000D0C6();
    (restore)bx;
    return;
    (save)bx;
    ebx = eax;
    ah = 0x68;
    asm("clc");
    asm("int 0x21");
    (restore)bx;
    return(L0000D0C6());
    asm("xchg ax,dx");
    ah = 0x3d;
    asm("int 0x21");
    if(!( *(bx + si) = *(bx + si) + L0000D0C6())) {
        *(bp + di) = ax;
    }
    *(bx + si) = *(bx + si) + L0000D0C6();
    return(L0000D0C6());
    asm("pusha");
    (save)ds;
    (save)es;
    (save)fs;
    (save)gs;
    bp = sp;
    asm("cld");
    L00005BFE();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *(bx + si) = *(bx + si) + 0x1174;
    dx = ds;
    ebx = ss;
    cx = sp;
    ss = dx;
    sp = 0x1174;
    edx = ebx;
    ax = cx;
    si = *di;
    ah = 1;
    *(bx + si) = *(bx + si) + 1;
    di = *di;
    asm("int3");
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di + 0xbad1) = *(bx + di + 0xbad1) + cl)) {
        *(bx + si) = *(bx + si) + al;
        bx = ax;
        *di = dx;
        ah = 1;
        *(bx + si) = *(bx + si) + 1;
        if(di != 0) {
            goto L0000c63c;
        }
    }
    ax = *L00000604;
    *(bx + si) = *(bx + si) + al;
    ax :: 0x3875;
    if(!( *(bx + si) = *(bx + si) + al)) {
        ax :: 0x7dc5;
        if(*(bx + si) = *(bx + si) + al) {
            goto L0000c63c;
        }
        *(bx + si) = *(bx + si) + 4;
        asm("sti");
        asm("cld");
        L0000D1F5();
        *(bx + si) = *(bx + si) + al;
    } else {
L0000c63c:
        edx = *di;
        al = 7;
        *(bx + si) = *(bx + si) + 7;
        ax = *L000007AC;
L0000c646:
        *(bx + si) = *(bx + si) + al;
        L0000D2A8();
L0000c64b:
        *(bx + si) = *(bx + si) + al;
    }
    dx = cx;
    ax = bx;
    ebx = ss;
    cx = sp;
    ss = dx;
    sp = ax;
    edx = ebx;
    ax = cx;
    *di = si;
    *(bx + si) = *(bx + si) + 1;
    (restore)gs;
    (restore)fs;
    (restore)es;
    (restore)ds;
    asm("popa");
    asm("iret");
    asm("pusha");
    (save)ds;
    (save)es;
    (save)fs;
    (save)gs;
    bp = sp;
    asm("cld");
    L00005BFE();
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *(bx + si) = *(bx + si) + 0x1d68;
    dx = ds;
    ebx = ss;
    cx = sp;
    ss = dx;
    sp = 0x1d68;
    edx = ebx;
    ax = cx;
    si = *di;
    ah = 1;
    *(bx + si) = *(bx + si) + 1;
    di = *di;
    asm("int3");
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di + 0xbad1) = *(bx + di + 0xbad1) + cl)) {
        *(bx + si) = *(bx + si) + al;
        bx = ax;
        *di = dx;
        ah = 1;
        *(bx + si) = *(bx + si) + 1;
        if(di != 0) {
            goto L0000c6d4;
        }
    }
    ax = *L00000604;
    *(bx + si) = *(bx + si) + al;
    ax :: 0x3875;
    if(!( *(bx + si) = *(bx + si) + al)) {
        ax :: 0x7bd0;
        if(!( *(bx + si) = *(bx + si) + al)) {
            *(bx + si) = *(bx + si) + 7;
            asm("sti");
            asm("cld");
            L0000D1F5();
            *(bx + si) = *(bx + si) + al;
            goto L0000c64b;
            asm("Unknown opcode 0xff");
            goto ( *(bp - 0x75));
        }
    }
L0000c6d4:
    asm("adc ax,0x7b6");
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + *L000007B2;
    goto L0000c646;
}

/*	Procedure: 0x0000C6E3 - 0x0000C76D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C6E3()
{



    asm("Unknown opcode 0xff");
    ax = *(bp + di + 0x51)();
    (save)dx;
    (save)si;
    sp = sp - 8;
    *di :: -60;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *(di + 0x6e) = *(di + 0x6e) + dh;
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + al) && 801969798 != 0) {
        goto L0000c759;
    }
    dl = 0;
    *si = 0;
    al = al & 0x30;
    asm("Unknown opcode 0xf6");
    si = sp;
    *(si + 0x24) = dl;
    *(bp - 0x77) = *(bp - 0x77) + sp;
    (save)sp;
    *(si + 0x24) = dl;
    al = (al & 2) + 0x8c;
    asm("ficomp dword [0xda8e]");
    *L00004688 = 835519488;
    *(bp - 0x77) = *(bp - 0x77) + sp;
    (restore)si;
    cl = cl + *(bx + si + 0x44e);
    *(bp + 5) = dh;
    *(bp + 6) = dl;
    (restore)ds;
    si = *(si + 0x24) & 65535;
    *(bp + si + 0x2404) = *(bp + si + 0x2404) + cx;
    eax = si & 65535;
    if(ax > 0) {
        *di = 0x7c4;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + ax;
        *(bx + si) = *(bx + si) + al;
    } else {
L0000c759:
        *di = 0x7c4;
        *(bx + si) = *(bx + si) + al;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        goto ( *(bx + di + 0x7c4));
    }
    *(bx + si) = *(bx + si) + al;
    sp = sp + 8;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000C76E - 0x0000C962
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C76E()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)bp;
    *di :: -84;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *(di + 0xe) = *(di + 0xe) + dh;
    *di :: -80;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *bx = *bx + cl;
    dl :: 0;
    *(bx + si) = *(bx + si) + al;
    *(bp + di + "ment detected\r\n") = *(bp + di + "ment detected\r\n") + cl;
    (save)es;
    *(bx + si) = *(bx + si) + al;
    bx :: 0x7dc0;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *di = 0x604;
        *(bx + si) = *(bx + si) + al;
        asm("lds di,[di+0x0]");
        bl = bl + ch;
        asm("adc al,[bx+di+0xd0fb]");
    }
    asm("jpo 0xc7aa");
    *(di + 0xa) = *(di + 0xa) + dh;
    *di = 0x604;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + al;
        ah = *di;
        asm("rol byte [bx+di],cl");
        *(bx + si) = *(bx + si) + al;
        if(ah < 2 || ah > 8) {
            goto L0000c7ff;
        }
        cl = 0x23;
        edx = *di;
        al = 7;
        *(bx + si) = *(bx + si) + 7;
        *(bx + si) = *(bx + si) + *L000007AC;
        bx = ax << 0x10;
        ebx = edx;
        eax = 567092485;
        cl = 0x23;
        edx = *di;
        sp = 7;
        *(bx + di + 0x7b8) = *(bx + di + 0x7b8) + 567092485;
    }
    *(bx + si) = *(bx + si) + al;
    (save)ds;
    ds = dx;
    dx = ax;
    eax = 567092484;
    (restore)ds;
    goto L0000c84c;
L0000c7ff:
    ax = L0000C6E3();
    asm("Unknown opcode 0xff");
    if(!( *(bp + di + 0x1f8) = *(bp + di + 0x1f8) + 1)) {
        bl = 0x23;
        ecx = *di;
        *(0x23 + si) = *(0x23 + si) + 7;
        dx = *di;
        al = *esi;
        esi = esi + 1;
        (restore)es;
        *(bx + si) = *(bx + si) + al;
        ecx = *di;
        sp = 7;
        *(bp + di + 0xb815) = *(bp + di + 0xb815) + cl;
        (restore)es;
        *(0x23 + si) = *(0x23 + si) + 835518977;
        eax = 835518981;
    } else {
        *(bx + si) = *(bx + si) + 0x23;
        ecx = *di;
        *(bx + si) = *(bx + si) + 7;
        bx = *di;
        al = *esi;
        esi = esi + 1;
        (restore)es;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + L0000CD6C();
    }
L0000c84c:
    *di = 0;
    *si = *si + 7;
    *di = 0;
    al = *esi;
    esi = esi + 1;
    (restore)es;
    *si = *si + al;
    (restore)bp;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    *si = 0x624;
    *(bx + si) = *(bx + si) + al;
    *(bp + di + 0xb235) = *(bp + di + 0xb235) + cl;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    edx = *di;
    dh = 7;
    *(bx + si) = *(bx + si) + al;
    if(si == 0) {
        if(7 == 0) {
            goto L0000c955;
        }
        *(bx + si) = *(bx + si) + al;
    }
    di = *di;
    al = al + 6;
    *(bx + si) = *(bx + si) + al;
    di :: 0x7dc0;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *di = 0x604;
        *(bx + si) = *(bx + si) + al;
        *(bp + di) = *(bp + di) >> 1;
        asm("adc al,[bx+di+0xc5ff]");
    }
    if(!(bl = bl + ch)) {
    }
    *(di + 0xa) = *(di + 0xa) + dh;
    *di = 0x604;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + al;
        ah = *di;
        asm("rol byte [bx+di],cl");
        *(bx + si) = *(bx + si) + al;
        if(ah < 2 || ah > 8) {
            goto L0000c8f9;
        }
        cl = *si;
        al = al & 0x66;
        dx = *di;
        *(bx + si) = *(bx + si) + al;
        ax = *L000007B2;
        *(bx + si) = *(bx + si) + al;
        bx = ax << 0x10;
        ebx = 7;
        cl = *si;
        dx = *di;
        return(4);
    }
    *(bx + di + 0x7be) = *(bx + di + 0x7be) + ah;
    *(bx + si) = *(bx + si) + al;
    (save)ds;
    ds = dx;
    dx = ax;
    eax = 567092484;
    (restore)ds;
    goto L0000c946;
L0000c8f9:
    ax = L0000C6E3();
    asm("Unknown opcode 0xff");
    if(!( *(bp + di + 0x1f8) = *(bp + di + 0x1f8) + 1)) {
        bl = *si;
        al = al & 0x66;
        cx = *di;
        dh = 7;
        *(bx + si) = *(bx + si) + al;
        dx = *di;
        dl = 7;
        *(bx + si) = *(bx + si) + al;
        bl = *si;
        cx = *di;
        return(0);
        *(bp + di + 0xbe15) = *(bp + di + 0xbe15) + cl;
        (restore)es;
        *(bx + si) = *(bx + si) + al;
        eax = 835518981;
    } else {
        al = *si & 0x66;
        cx = *di;
        dh = 7;
        *(bx + si) = *(bx + si) + al;
        bx = *di;
        dl = 7;
        *(bx + si) = *(bx + si) + al;
        L0000CD6C();
        *(bx + si) = *(bx + si) + al;
    }
L0000c946:
    *di = 0;
    dh = 7;
    *si = *si + al;
    ebx = 0 & 65535;
    *di = bx;
    dl = 7;
L0000c955:
    *(bx + si) = *(bx + si) + al;
    sp = sp + 4;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    L0000C76E();
}

/* DEST BLOCK NOT FOUND: 0000c974 -> 0000c860 */
/* DEST BLOCK NOT FOUND: 0000c981 -> 0000c867 */
/*	Procedure: 0x0000C963 - 0x0000C983
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C963()
{



    asm("Unknown opcode 0xff");
    *(bp + di + 0x51)();
    (save)dx;
    (save)si;
    (save)di;
    sp = sp - 4;
    *di :: 0;
    *(bx + si) = *(bx + si) | al;
    if(*(bx + si) = *(bx + si) + al) {
        goto L0000c860;
    }
    asm("Unknown opcode 0xff");
    di = di + 1;
    al = al + 0x24;
    asm("sbb ax,[bx+si]");
    *(bx + si) = *(bx + si) + al;
    goto L0000c867;
}

/* DEST BLOCK NOT FOUND: 0000cac9 -> 0000c958 */
/*	Procedure: 0x0000C984 - 0x0000CACB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000C984()
{



    asm("Unknown opcode 0xff");
    ax = *(bp + di + 0x51)();
    (save)dx;
    (save)si;
    (save)di;
    *di :: -84;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *(di - 0x3a) = *(di - 0x3a) + dh;
    *di :: -80;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *(di - 0x44) = *(di - 0x44) + dh;
    ah = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(ah >= 2 && ah <= 8) {
        cl = 0x23;
        eax = 567092483;
        ecx = ebx;
        bx = bx >> 0x10;
        dx = bx;
        *di = ecx;
        *(bx + si) = *(bx + si) + 7;
        *di = dx;
        al = *esi;
        esi = esi + 1;
        (restore)es;
        *(bx + si) = *(bx + si) + al;
        cl = 0x23;
        dx = 0x7a38;
        *(bx + si) = *(bx + si) + al;
        (save)es;
        eax = 567092482;
        ecx = es;
        (restore)es;
        al = 0x23;
        *di = ecx;
        sp = 7;
        *(si + 0x89c9) = *(si + 0x89c9) + cl;
        asm("sbb ax,0x7b8");
        *(bx + si) = *(bx + si) + al;
        (save)ds;
        ds = cx;
        cl = al;
        al = 6;
        ah = 0x25;
        asm("int 0x21");
        (restore)ds;
        goto L0000ca94;
        *(bx + si) = *(bx + si) + al;
    }
    L0000C6E3();
    asm("Unknown opcode 0xff");
    if(!( *(bp + di + 0x1f8) = *(bp + di + 0x1f8) + 1)) {
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + 0x7a38;
        *(bx + si) = *(bx + si) + 0x7a38;
        edi = 0x95;
        esi = 0x95 >> 0x10;
        ebx = 0x7a38;
        ecx = 0x7a38 >> 0x10;
        eax = 835520000;
        asm("sbb eax,eax");
        bl = 0x23;
        eax = 835518976;
        bl = 0x23;
        *di = ecx;
        *(0x23 + si) = *(0x23 + si) + 7;
        *di = dx;
        al = *esi;
        esi = esi + 1;
        (restore)es;
        *(bx + si) = *(bx + si) + al;
        eax = 835518980;
        bl = 0x23;
        *di = ecx;
        sp = 7;
        *(0x23 + di + 0xb815) = *(0x23 + di + 0xb815) + cl;
        (restore)es;
        *(bx + si) = *(bx + si) + 835518980;
        dx = 0x7a38;
        *(bx + si) = *(bx + si) + 835518980;
        cx = cs;
        eax = 835518981;
    } else {
        *(bx + si) = *(bx + si) + 0x23;
        bx = 0x7a38;
        *(0x7a38 + si) = *(0x7a38 + si) + 0x23;
        *(bx + si) = *(bx + si) + al;
        cx = cs;
        *L000007AC = L0000D319();
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + 0x23;
        *di = edx;
        *(bx + si) = *(bx + si) + 7;
        ax = L0000CD6C();
L0000ca94:
        *(bx + si) = *(bx + si) + al;
    }
    bx = *di;
    al = al + 6;
    *(bx + si) = *(bx + si) + al;
    bx :: 0x3875;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *di = 0x604;
        *(bx + si) = *(bx + si) + al;
        *(bp + di) = *(bp + di) >> 1;
        cl = cl + ch;
        asm("cmpsw");
        asm("Unknown opcode 0xfe");
        asm("Unknown opcode 0xff");
    }
    if(!( *(bx + di + 0xc5fb) = *(bx + di + 0xc5fb) + 1)) {
    }
    *bx = *bx + cl;
    *(bp + di + 65534) & bx;
    di = di + 1;
    *(bx + si) = *(bx + si) + ax + 0x604;
    *di = *di >> 0;
    goto L0000c958;
}

/* DEST BLOCK NOT FOUND: 0000cafe -> 0000c955 */
/* DEST BLOCK NOT FOUND: 0000cc3a -> 0000c955 */
/*	Procedure: 0x0000CACC - 0x0000CC9F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000CACC()
{



    asm("Unknown opcode 0xff");
    *(bp + di + 0x51)();
    (save)dx;
    (save)si;
    (save)di;
    sp = sp - 4;
    *di :: 0;
    *(bx + si) = *(bx + si) | al;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *si = 0x1b24;
        *(bx + si) = *(bx + si) + al;
        bl = bl + ch;
        (restore)es;
    }
    *si = 0x624;
    *(bx + si) = *(bx + si) + al;
    *(bp + di + 0xb235) = *(bp + di + 0xb235) + cl;
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    edx = *di;
    dh = 7;
    *(bx + si) = *(bx + si) + al;
    if(si != 0) {
        goto L0000c955;
    }
    asm("Unknown opcode 0xff");
    goto ( *(bp - 0x7b));
    asm("ror byte [bx],cl");
    *(bp + si - 2) & cx;
    asm("Unknown opcode 0xff");
    *(bp + si + 0xd225) = *(bp + si + 0xd225) - 1;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + si + 0x2fc) = *(bx + si + 0x2fc) + al) && ah <= 8) {
        cl = *si;
        al = al & 0x66;
        ax = 0x2503;
        asm("int 0x21");
        ecx = ebx;
        bx = bx >> 0x10;
        dx = bx;
        *di = ecx;
        *(bx + si) = *(bx + si) + al;
        *di = 7;
        dl = 7;
        *(bx + si) = *(bx + si) + al;
        cl = *si;
        al = al & 0xba;
        asm("int 0x7a");
        *(bx + si) = *(bx + si) + al;
        (save)es;
        eax = 567092482;
        ecx = es;
        (restore)es;
        *di = cx;
        return(*si & 0x66);
        *(si + 0x89c9) = *(si + 0x89c9) + cl;
        asm("sbb ax,0x7be");
        *(bx + si) = *(bx + si) + al;
        (save)ds;
        ds = cx;
        cl = al;
        al = 6;
        ah = 0x25;
        asm("int 0x21");
        (restore)ds;
        goto L0000cc05;
        *(bx + si) = *(bx + si) + al;
    }
    L0000C6E3();
    asm("Unknown opcode 0xff");
    if(!( *(bp + di + 0x1f8) = *(bp + di + 0x1f8) + 1)) {
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + 0x7acd;
        *(bx + si) = *(bx + si) + 0x7acd;
        edi = 0x78;
        esi = 0x78 >> 0x10;
        ebx = 0x7acd;
        ecx = 0x7acd >> 0x10;
        eax = 835520000;
        asm("sbb eax,eax");
        bl = *si;
        al = al & 0x66;
        ax = 0x200;
        asm("int 0x31");
        bl = *si;
        al = al & 0x66;
        *di = cx;
        *(bx + si) = *(bx + si) + al;
        *di = 7;
        dl = 7;
        *(bx + si) = *(bx + si) + al;
        bl = *si;
        *di = cx;
        return(4);
        *(bx + di + 0xbe15) = *(bx + di + 0xbe15) + cl;
        (restore)es;
        *(bx + si) = *(bx + si) + al;
        dx = 0x7acd;
        *(bx + si) = *(bx + si) + al;
        cx = cs;
        eax = 835518981;
    } else {
        al = *si & 0xbb;
        asm("int 0x7a");
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        cx = cs;
        *L000007B2 = L0000D319();
        *(bx + si) = *(bx + si) + al;
        al = *si & 0x66;
        *di = dx;
        dh = 7;
        *(bx + si) = *(bx + si) + al;
        ax = L0000CD6C();
L0000cc05:
        *(bx + si) = *(bx + si) + al;
    }
    di = *di;
    al = al + 6;
    *(bx + si) = *(bx + si) + al;
    di :: 0x3875;
    if(!( *(bx + si) = *(bx + si) + al)) {
        *di = 0x604;
        *(bx + si) = *(bx + si) + al;
        asm("lds di,[di+0x0]");
        cl = cl + ch;
        di = di ^ bp;
        asm("Unknown opcode 0xff");
        *(bx + di + 0xd0ff) = *(bx + di + 0xd0ff) + 1;
    }
    asm("jpo 0xcc29");
    *bx = *bx + cl;
    *bx & sp;
    asm("std");
    asm("Unknown opcode 0xff");
    di = di + 1;
    *(bx + si) = *(bx + si) + ax + 0x604;
    *di = *di >> 0;
    goto L0000c955;
    asm("Unknown opcode 0xff");
    (save)bp;
    (save)si;
    (save)di;
    (save)cx;
    (save)bx;
    (save)dx;
    si = ax;
    dx = 0;
    cx = 0;
    bp = 0;
    ax = 0;
L0000cc50:
    al = *L0000003C;
    if(!( *(bx + si) = *(bx + si) + 1)) {
        di = dx;
        bx = cx;
        ax = bp;
        bp = bp + bp;
        asm("adc cx,cx");
        asm("adc dx,dx");
        bp = bp + bp;
        asm("adc cx,cx");
        asm("adc dx,dx");
        bp = bp + ax;
        asm("adc cx,bx");
        asm("adc dx,di");
        bp = bp + bp;
        asm("adc cx,cx");
        asm("adc dx,dx");
        bp = bp + ( *L00000F24 & 0xff);
        asm("adc cx,+0x0");
        asm("adc dx,+0x0");
        si = si + 1;
        goto L0000cc50;
    }
    ax = cx;
    di = 0x405e;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + L0000CCA0();
    (restore)bp;
    *(di + 4) = dx;
    *di = L0000CCA0();
    *(di + 8) = esi;
    (restore)bx;
    (restore)cx;
    (restore)di;
    (restore)si;
}

/* DEST BLOCK NOT FOUND: 0000ccaa -> 0000cce2 */
stack space not deallocated on return
/*	Procedure: 0x0000CCA0 - 0x0000CCE0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000CCA0()
{



    (restore)bp;
    return;
    if(si = ax & 65535 | dx | bp) {
        goto L0000cce2;
    }
    if(dx == 0) {
        dx = ax;
        ax = bp;
        bp = 0;
        di = di - 0x20;
    }
    if(dx == 0) {
        dx = ax;
        ax = bp;
        bp = 0;
        di = di - 0x20;
    }
    while(dx < 0) {
        di = di - 1;
        bp = bp + bp;
        asm("adc ax,ax");
        asm("adc dx,dx");
    }
    asm("adc ax,+0x0");
    asm("adc dx,+0x0");
    if(!(bp = bp + bp)) {
        asm("rcr dx,1");
        di = di + 1;
    }
    si = di;
}

/*	Procedure: 0x0000CCE1 - 0x0000CCE6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000CCE1()
{



    bl = bl + 1;
    *(bx + si) = *(bx + si) + 0x1178;
}

stack space not deallocated on return
/*	Procedure: 0x0000CCE7 - 0x0000CD6B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000CCE7()
{



    bl = bl + al;
    (save)bp;
    bp = sp;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    sp = sp - 0x40;
    cx = *(di + 0x20);
    *(di - 0x1c) = *(di + 8);
    ax = *(di + 0xc);
    dx = di - 0x28;
    *(di - 0x18) = ax;
    ax = di - 0x1c;
    tword [bp+si] = *(bx + si);
    if(*(di + 0x1c) == 0x46) {
        di = 0xa;
        *(bx + si) = *(bx + si) + al;
        *LFFFFFFBE = 0xa;
        *LFFFFFFBA = 0;
    } else {
        bx = 0xc;
        *(0xc + si) = *(0xc + si) + al;
        si = 1;
        *(bx + 1) = *(bx + 1) + al;
        *(di - 0x4c) = bx;
        *(di - 0x50) = si;
    }
    ax = *(di + 0x10);
    bx = cx;
    *(di - 0x54) = ax;
    *(di - 0x44) = 0;
    ax = *(di + 0x1c);
    edx = di - 0x54 & 65535;
    *(di - 0x48) = ax;
    ax = di - 0x28;
    L00006D51();
    asm("Unknown opcode 0xff");
    *(bp + di + 0x1455) = *(bp + di + 0x1455) - 1;
    *(bp + si) = *(di - 0x3c);
    dx = *(di + 0x18);
    *(bp + si) = *(di - 0x40);
    ax = cx;
    sp = di - 0x14;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    (restore)bp;
}

/*	Procedure: 0x0000CD6C - 0x0000CE66
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000CD6C()
{



    asm("sbb al,0x0");
    (save)dx;
    dx = bx;
    bl = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(bl >= 2 && bl <= 8) {
        (save)ds;
        ds = cx;
        cl = al;
        al = 4;
        ah = 0x25;
        asm("int 0x21");
        (restore)ds;
        (restore)dx;
        return;
    }
    (save)ds;
    ds = cx;
    ah = 0x25;
    asm("int 0x21");
    (restore)ds;
    (restore)dx;
    return;
    (save)dx;
    dx = ax;
    ax = *L000007C8;
    *(bx + si) = *(bx + si) + al;
    *di = dx;
    asm("enter 0x7,0x0");
    (restore)dx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    bx = ax;
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bx + di) = *(bx + di) + al)) {
        *di :: 0xd3;
        *(bx + si) = *(bx + si) + ax;
        if(*(bx + si) = *(bx + si) + al) {
            goto L0000cdd1;
        }
    }
    dh = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(dh == 9) {
        *(bx + si) = *(bx + si) + al;
L0000cdd1:
        if(bx > 0) {
            bx = bx + 0xfff;
            *(bx + si) = *(bx + si) + al;
            al = *L000001D2;
            *(bx + si) = *(bx + si) + al;
            if(!(ebx = ebx & 20770816)) {
                ax = bx >> 0x10;
                cx = bx;
                bx = ax;
                ah = 5;
                al = 1;
                asm("int 0x31");
                asm("sbb ax,ax");
                if(!(ax = ax + 1)) {
                    ax = ebx << 0x10;
                    eax = ecx;
                    *(bx + si) = edi;
                    *(bx + si + 2) = esi;
                }
            } else {
                *(bx + si + 0x21cd) = *(bx + si + 0x21cd) + 0x4800;
                asm("sbb bx,bx");
                bx = !bx;
                ax = ax & bx;
            }
            if(ax != 0) {
                goto L0000ce63;
            }
            ax = L00006995();
            asm("Unknown opcode 0xff");
            *(di + 1) = *(di + 1) + al;
            *(bx + si) = *(bx + si) + al;
            bl = bl + ch;
            bp = bp | ax;
        }
        asm("%g wait");
        asm("Unknown opcode 0xff");
        *(bx + di + 1) = *(bx + di + 1) + cl;
        *(bx + si) = *(bx + si) + al;
        *(bx + si + 65535) = *(bx + si + 65535) + bh;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    }
    goto L0000ce63;
    if(dh >= 2 && dh <= 8) {
        ax = 0;
        *L000001A4 = (ds << ds) + 1;
        *(bx + si) = *(bx + si) + al;
    }
    *(bx + si) = *(bx + si) + *L000001A4;
    ax = *L000001A4 + bx;
    L0000CE67();
    *(bx + si) = *(bx + si) + al;
L0000ce63:
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 0000cf29 -> 0000ce61 */
/* DEST BLOCK NOT FOUND: 0000cf2e -> 00007c15 */
stack space not deallocated on return
/*	Procedure: 0x0000CE67 - 0x0000D004
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000CE67()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)es;
    (save)bp;
    (save)ax;
    ax :: *di;
    ax = 1;
    *(bp + si + 0x5b) = *(bp + si + 0x5b) + dh;
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + 1;
    if(!( *(bx + si) = *(bx + si) + 1)) {
        bp = *si;
        al = 1;
        asm("lds cx,[bx]");
        bp = bp >> 4;
        if(bp == 0) {
            bp = 65535;
            *bx = *bx - 1;
        }
        bx = 0;
        ebx = ds;
        ah = 0xed;
        asm("int 0x21");
        ax = ax << 0x1f;
        *(bx + si) = *(bx + si) + al;
        di = di & 65535 | ax;
        ax = di;
        if(di < 0) {
            bx = bp;
            es = di;
            ah = 0x4a;
            asm("int 0x21");
            asm("rcl ax,1");
            asm("ror ax,1");
            if(ax < 0) {
                goto L0000ced4;
            }
        }
        eax = ds;
        bx = bp;
L0000cec6:
        es = ax;
        ah = 0x4a;
        asm("int 0x21");
        asm("rcl ax,1");
        asm("ror ax,1");
        if(ax >= 0) {
            goto L0000cf16;
        }
L0000ced4:
        L00006995();
        asm("Unknown opcode 0xff");
        *(di + 1) = *(di + 1) + al;
        *(bx + si) = *(bx + si) + al;
        *(bx + si + 65535) = *(bx + si + 65535) + bh;
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
    } else {
        bx = *si;
        return(al & 0x81);
        *bx = *bx - 1;
        *(bx + si) = *(bx + si) + al;
        bx = bx >> 0xc;
        if(bx == 0) {
            bx = 65535;
            asm("str [bp+si+0xd215]");
        }
        *(bx + si) = *(bx + si) + ax;
        if(!( *(bx + si + 0x1fa) = *(bx + si + 0x1fa) + al)) {
            dl :: *di;
            asm("rol word [bx+di],cl");
            if(!( *(bx + si) = *(bx + si) + al)) {
                bx = bx << 8;
            }
        }
        eax = ds;
        goto L0000cec6;
L0000cf16:
        bx = *si;
        al = al & 0xa1;
        *di = *si;
        di = di + 1;
        si = si + 1;
        *(bx + si) = *(bx + si) + ax;
        *(bx + di + 0xa41d) = *(bx + di + 0xa41d) + cl;
        *(bx + si) = *(bx + si) + ax;
        *(bp + di + 0x4c4) = *(bp + di + 0x4c4) + al;
    }
    (restore)bp;
    (restore)es;
    goto L0000ce61;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    goto L00007C15;
    asm("Unknown opcode 0xff");
    (save)dx;
    (save)si;
    (save)di;
    (save)es;
    (save)fs;
    *di :: 0x70;
    *bx = *bx + cl;
    *bp & si;
    *(bp + 0xd925) = *(bp + 0xd925) + cl;
    *(bx + si) = *(bx + si) + *(bp + di + 0x51)();
    *(bx + di) = *(bx + di) + dh;
    (restore)bp;
    dl = 0;
    ax = fs;
    di = *di;
    asm("aad 0x1");
    *(bx + si) = *(bx + si) + al;
    es = ax;
    for(ax = di; dl != *%es:bx+si]; ax = bx) {
L0000cf63:
        bx = bx + si + 1;
        if(dl != *%es:bx+si]) {
            ax = bx;
            goto L0000cf63;
        }
        cx = cx + 1;
    }
    if(!(ax = ax - di)) {
        *(bx + si) = *(bx + si) + 1;
    }
    ax = L00007C15();
    asm("Unknown opcode 0xff");
    *(bx + di + 0x89c2) = *(bx + di + 0x89c2) - 1;
    return;
    if(ax != 0) {
        *(bx + si) = *(bx + si) + al;
        ax = (cx << 2) + 4 + cx;
        ax = L00007C15();
        asm("Unknown opcode 0xff");
        *(di + 0x74c0) = *(di + 0x74c0) + 1;
        (save)sp;
        *L00000D70 = ax;
        *(bx + si) = *(bx + si) + al;
        si = 0;
        cx = 0;
        es = fs;
        for(ax = di; *%es:bx+si] != 0; cx = cx + 4) {
            dx = *di;
            >= ? 0xcfc9 : ;
            *(bx + si) = *(bx + si) + al;
            *si = bx;
            asm("adc [0x108a],sp");
L0000cfc1:
            ax = ax + 1;
            *(bp + di) = dl;
            bx = bx + 1;
            if(dl != 0) {
                goto L0000cfc1;
            }
        }
        dx = *di;
        if(!(si = si + 1)) {
            *(bx + si) = *(bx + si) + al;
            *si = 0x11;
            *(bx + si) = *(bx + si) + al;
            *(bp + di + 0x4c1) = *(bp + di + 0x4c1) + al;
            dx = dx + cx;
        }
        bx = si;
        *di = dx;
        asm("insb");
        ax = dx;
        dx = 0;
        L00007CF6();
        asm("Unknown opcode 0xff");
        asm("Unknown opcode 0xff");
        goto L0000cffe;
        ax = dx;
        L00006821();
    }
    asm("Unknown opcode 0xff");
    *bx = *bx - 1;
L0000cffe:
    ax = *L00005F07;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000D005 - 0x0000D040
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D005()
{



    (restore)bx;
    return;
    (save)dx;
    if(*(bx + si) == 0) {
        *(bx + si) = *(bx + si) + 1;
        (restore)dx;
        return(1);
    }
    *di :: -112;
    asm("adc [bx+si],ax");
    if(!( *(bx + si) = *(bx + si) + al)) {
        edx = *(bx + si) & 0xff;
        *(bx + si) = *(bx + si) + al;
        dx = *(bp + si + 0x1195) & 1 & 0xff;
        if(!( *(bx + si) = *(bx + si) + al) && *(bx + si + 1) == 0) {
            *(bx + si) = *(bx + si) + 2;
            (restore)dx;
            return(2);
        }
    }
    ax = 0;
}

stack space not deallocated on return
/*	Procedure: 0x0000D041 - 0x0000D097
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D041()
{



    (restore)dx;
    return;
    (save)bx;
    (save)cx;
    sp = sp - 8;
    bx = ax;
    cx = dx;
    dx = ax;
    ax = sp;
    L0000D35E();
    *(bx + si) = *(bx + si) + al;
    ax = bx;
    dl = 0;
    L0000D38F();
    *(bx + si) = *(bx + si) + al;
    *si = dl;
    al = al + 0x8d;
    sp = sp + 1;
    al = al & 4;
    dx = cx;
    L0000D35E();
    *(bx + si) = *(bx + si) + al;
    ax = cx;
    dh = 0;
    L0000D38F();
    *(bx + si) = *(bx + si) + al;
    *(si + 4) = dh;
    al = al + 0x89;
    asm("loopne 0xd064");
    al :: 3;
    *(bx + si) = *(bx + si) + al;
    (save)sp;
    al = si + 0x24 + 0x8d & 4;
    L0000D3BA();
    *(bx + si) = *(bx + si) + al;
    ax = sp;
    L0000D409();
    *(bx + si) = *(bx + si) + al;
    sp = sp + 8;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000D098 - 0x0000D0C5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D098()
{



    (restore)bx;
    return;
    (save)dx;
    *di :: -112;
    asm("adc [bx+si],ax");
    if(!( *(bx + si) = *(bx + si) + al)) {
        edx = *(bx + si) & 0xff;
        *(bx + si) = *(bx + si) + al;
        dx = *(bp + si + 0x1195) & 1 & 0xff;
        if(!( *(bx + si) = *(bx + si) + al) && *(bx + si + 1) != 0) {
            ax = ax + 2;
            (restore)dx;
            return;
        }
    }
    ax = ax + 1;
    (restore)dx;
}

/* DEST BLOCK NOT FOUND: 0000d0e0 -> 0000d1f5 */
/*	Procedure: 0x0000D0C6 - 0x0000D0E2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D0C6()
{



    return;
    *(bp + di + 0xe) = *(bp + di + 0xe) + dh;
    *(bx + si) = *(bx + si) + (ax & 65535);
    (save)ax & 65535;
    L00007BB1();
    asm("Unknown opcode 0xff");
    ax = *(bx + si - 0x15)();
    ch = ch + *(bx + di);
    asm("rol bl,0xb8");
    *(bx + si) = *(bx + si) + ax;
    *(bx + si) = *(bx + si) + al;
    goto L0000D1F5;
}

/* DEST BLOCK NOT FOUND: 0000d12a -> 0000d13e */
/*	Procedure: 0x0000D0E3 - 0x0000D132
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D0E3()
{



    *(bx + si) = *(bx + si) + al;
    (save)bx;
    (save)dx;
    (save)es;
    (save)fs;
    (save)gs;
    bx = *di;
    asm("aam 0x7");
    *(bx + si) = *(bx + si) + al;
    if(bx != 1 && bx != 2 && bx != 3) {
        *di = 0x7d4;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        dx = al + *(bx + si);
        *(bx + si) = *(bx + si) + 2;
        ax = *bx();
    }
    (restore)gs;
    (restore)fs;
    (restore)es;
    (restore)dx;
    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    cx = ax;
    bx = dx;
    if(ax >= 1 && ax <= 0xc) {
        goto L0000d13e;
    }
    *(bx + si) = *(bx + si) + 9;
    ax = L00005C72();
}

stack space not deallocated on return
/*	Procedure: 0x0000D133 - 0x0000D1F4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D133()
{



    asm("Unknown opcode 0xff");
    *(bx + si) = *(bx + si) + 3;
    (restore)cx;
    (restore)bx;
    return(3);
    *di = 0x804;
    *(bx + si) = *(bx + si) + al;
    ax :: *di;
    if(ax == 4) {
        if(bx == 2) {
            L0000C76E();
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            goto L0000d1b3;
            *(bx + si) = *(bx + si) + al;
        }
        if(bx != 3) {
            ax = L0000C984();
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
        }
    } else {
        if(ax != 7) {
            goto L0000d185;
        }
        if(bx == 2) {
            L0000C963();
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
        } else {
            if(bx != 3) {
                ax = L0000CACC();
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                goto L0000d1b5;
L0000d185:
                if(ax == 2) {
                    if(bx == ax) {
                        dx = 0x2f;
                        *(bx + si) = *(bx + si) + al;
                        ax = 65535;
                        asm("Unknown opcode 0xff");
                        asm("Unknown opcode 0xff");
                        L0000D479();
                        *(bx + si) = *(bx + si) + al;
                    } else {
                        if(bx != 3) {
                            dx = 0x1d;
                            *(bx + si) = *(bx + si) + al;
                            ax = 0;
                            L0000D479();
                            *(bx + si) = *(bx + si) + al;
                            ax = L0000D4C5();
L0000d1b3:
                            *(bx + si) = *(bx + si) + al;
                        }
                    }
                }
            }
        }
    }
L0000d1b5:
    ax = *si;
    asm("Unknown opcode 0x8d");
    asm("int3");
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    *si = bx;
    asm("Unknown opcode 0x8d");
    asm("int3");
    (restore)es;
    *(bx + si) = *(bx + si) + al;
    (restore)cx;
    (restore)bx;
    return;
    asm("xchg ax,bp");
    asm("xchg al,[bx+si]");
    *(bx - 0x7a) = *(bx - 0x7a) + bh;
    *(bx + si) = *(bx + si) + al;
    asm("in al,0x86");
    *(bx + si) = *(bx + si) + al;
    asm("lahf");
    asm("xchg al,[bx+si]");
    ah = ah + ah;
    asm("xchg al,[bx+si]");
    ah = ah + ah;
    asm("xchg al,[bx+si]");
    ah = ah + al;
    asm("xchg al,[bx+si]");
    ah = ah + ah;
    asm("xchg al,[bx+si]");
    ah = ah + ah;
    asm("xchg al,[bx+si]");
    ah = ah + ah;
    asm("xchg al,[bx+si]");
    ah = ah + ah;
    asm("xchg al,[bx+si]");
    ah = ah + ah;
    asm("xchg al,[bx+si]");
}

/*	Procedure: 0x0000D1F5 - 0x0000D2A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D1F5()
{



    *(bx + si) = *(bx + si) + al;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)es;
    (save)fs;
    (save)gs;
    bx = ax;
    ax = ax << 2;
    cx = bp + di - 1;
    dx = *(bx + si + 0x7cc);
    *(bx + si) = *(bx + si) + al;
    if(cx <= 0xb) {
        *(bx + si) = *(bx + si) + al;
        goto ( *si);
        sp = bx;
        asm("xchg al,[bx+si]");
        *(bx + si + 0x8c) = *(bx + si + 0x8c) + bh;
        *(bx + si) = *(bx + si) + al;
        L0000D0E3();
        asm("Unknown opcode 0xff");
        (save) *(bx + di);
L0000d229:
        asm("ror byte [bx],0xa9");
        (restore)fs;
        (restore)es;
        (restore)si;
        (restore)dx;
        (restore)cx;
        (restore)bx;
        return;
        if(dx == 2) {
            L0000D467();
            *(bx + si) = *(bx + si) + al;
        }
        if(dx == 1 || dx == 2 || dx == 3) {
            goto L0000d229;
        }
        *si = 0xcc9d;
        (restore)es;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al + *(bx + si);
        L0000C76E();
        asm("Unknown opcode 0xff");
L0000d260:
        while(1) {
            bl = bl >> cl;
            asm("lds ax,[bp+di+0x1fa]");
            if(( *(bx + di + 65496) = *(bx + di + 65496) - 1) || dx == 2 || dx == 3) {
                goto L0000d229;
            }
            *(bx + si + 0x7cc) = 0;
            *(bx + si) = *(bx + si) + al + *(bx + si);
            L0000C963();
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
        }
        if(dx == 1 || dx == 2 || dx == 3) {
            goto L0000d229;
        }
        si = 2;
        *(bx + 2) = *(bx + 2) + al;
        ax = bx;
        *si = si;
        asm("popf");
        asm("int3");
        (restore)es;
        *(bx + si) = *(bx + si) + al;
    }
    goto L0000d260;
    ax = 65535;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
}

/* DEST BLOCK NOT FOUND: 0000d2a8 -> 0000d22b */
/*	Procedure: 0x0000D2A8 - 0x0000D2C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D2A8()
{



    goto L0000d22b;
    cx = ax;
    ax = dx;
    sp = bp;
    asm("xchg cx,[di+0x28]");
    asm("xchg ax,[di+0x2c]");
    (restore)gs;
    (restore)fs;
    (restore)es;
    (restore)ds;
    (restore)di;
    (restore)si;
    (restore)bp;
    (restore)bx;
    (restore)bx;
}

stack space not deallocated on return
/*	Procedure: 0x0000D2C1 - 0x0000D318
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D2C1()
{



    (restore)dx;
    asm("retf");
    (save)bx;
    (save)cx;
    (save)dx;
    (save)es;
    edx = *di;
    asm("cbw");
    asm("adc al,[bx+si]");
    asm("Unknown opcode 0xd2");
    if(!( *(bp - 0x7b) = *(bp - 0x7b) + ah)) {
        (restore)es;
        (restore)dx;
        (restore)cx;
        (restore)bx;
        return(0);
    }
    ax = 65525;
    asm("str [bp+0x31c2]");
    asm("Unknown opcode 0xdb");
    dx = 0;
    do {
        cl = *%es:bx+si];
        if(cl >= 0x30 && cl <= 0x39) {
            goto L0000d2f8;
        }
        if(*%es:bx+si] == 0x2f) {
L0000d2f8:
            bx = bx + 1;
        }
        dx = dx + 1;
        ax = ax + 1;
    } while(dx < 8);
    bx :: 4;
    asm("setc al");
    *(bx + si) = *(bx + si) + (ax & 0xff);
    (restore)es;
    (restore)dx;
    (restore)cx;
    (restore)bx;
    return;
    L0000D2C1();
    asm("Unknown opcode 0xff");
    goto ( *(bp + di + 0x800));
    *(bx + si) = *(bx + si) + al;
}

/* DEST BLOCK NOT FOUND: 0000d35b -> 0000d5d1 */
/*	Procedure: 0x0000D319 - 0x0000D35D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D319()
{



    bl = bl + al;
    (save)bx;
    (save)cx;
    dl = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(dl >= 2) {
        if(dl > 8) {
            goto L0000d336;
        }
        cl = al;
        *(bx + si) = *(bx + si) + 0x2502;
    } else {
L0000d336:
        *(bx + si) = *(bx + si) + (ax & 0xff);
        cl = 0;
        ah = ah | 0x35;
    }
    (save)es;
    asm("int 0x21");
    dx = es;
    (restore)es;
    ax = bx;
    (restore)cx;
    (restore)bx;
    return;
    al = *(bx + si + 0x1195);
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    return(al & 1 & 0xff);
    ax = 0;
    goto L0000d5d1;
}

/*	Procedure: 0x0000D35E - 0x0000D38E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D35E()
{



    *(bx + si) = *(bx + si) + al;
    (save)bx;
    *di :: -112;
    asm("adc [bx+si],ax");
    if(!( *(bx + si) = *(bx + si) + al)) {
        ebx = *(bp + si) & 0xff;
        *(bx + si) = *(bx + si) + al;
        bx = *(bp + di + 0x1195) & 1 & 0xff;
        if(!( *(bx + si) = *(bx + si) + al)) {
            *(bx + si) = *(bp + si);
            *(bx + si + 1) = *(bp + si + 1);
            (restore)bx;
            return;
        }
    }
    *(bx + si) = *(bp + si);
}

stack space not deallocated on return
/*	Procedure: 0x0000D38F - 0x0000D3B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D38F()
{



    (restore)bx;
    return;
    *di :: -112;
    asm("adc [bx+si],ax");
    if(!( *(bx + si) = *(bx + si) + al)) {
        *(bx + si) = *(bx + si) + ( *(bx + si) & 0xff);
        al = *(bx + si + 0x1195);
        *(bx + si) = *(bx + si) + al;
        ax = al & 1 & 0xff;
        if(!( *(bx + si) = *(bx + si) + al)) {
            *(bx + si) = *(bx + si) + 2;
            return(2);
        }
    }
    *(bx + si) = *(bx + si) + 1;
}

stack space not deallocated on return
/*	Procedure: 0x0000D3BA - 0x0000D408
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D3BA()
{



    bl = bl + al;
    (save)bx;
    (save)cx;
    (save)dx;
    sp = sp - 4;
    cx = ax;
    bx = ax;
    ax = bx;
    L0000D005();
    asm("Unknown opcode 0xff");
    *(di + 0x75c0) = *(di + 0x75c0) + 1;
    *(bx + di + 0x89d8) = *(bx + di + 0x89d8) ^ cx;
    asm("loop 0xd3be");
    asm("cmpsw");
    L0000D9BA();
    *(bx + si) = *(bx + si) + al;
    L0000DA4F();
    *(bx + si) = *(bx + si) + al;
    ax = sp;
    dl = 0;
    L0000D38F();
    asm("Unknown opcode 0xff");
    *(bx + si + "LL assignment detected\r\n") = *(bx + si + "LL assignment detected\r\n") - 1;
    dx = sp;
    ax = bx;
    L0000D35E();
    asm("Unknown opcode 0xff");
    *(bx + di + 0xe8d8) = *(bx + di + 0xe8d8) - 1;
    return(L0000ebff());
    sp = sp + 4;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000D409 - 0x0000D466
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D409()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    bl = *(bx + si);
    if(bl == *(bp + si)) {
        *di :: -112;
        asm("adc [bx+si],ax");
        if(!( *(bx + si) = *(bx + si) + al)) {
            ebx = *si & 0xff;
            *(bx + si) = *(bx + si) + al;
            bx = *(bp + di + 0x1195) & 1 & 0xff;
            if(!( *(bx + si) = *(bx + si) + al)) {
                bl = *(bx + si + 1);
                cl = *(bp + si + 1);
                if(bl != cl) {
                    goto L0000d440;
                }
            }
        }
        (restore)cx;
        (restore)bx;
        return(0);
L0000d440:
        ax = bl & 0xff;
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        ax = ax - (cl & 0xff);
        (restore)cx;
        (restore)bx;
        return;
    }
    ebx = *si & 0xff;
    ax = bx - ( *(bp + si) & 0xff);
    (restore)cx;
    (restore)bx;
    return;
    *di();
    al = al + 8;
}

/*	Procedure: 0x0000D467 - 0x0000D478
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D467()
{



    *(bx + si) = *(bx + si) + al;
    (save)dx;
    dx = 0xff;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + 0x108;
    L00005C49();
    asm("Unknown opcode 0xff");
    *(bp + si - 0x3d)();
}

stack space not deallocated on return
/*	Procedure: 0x0000D479 - 0x0000D4C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D479()
{



    (restore)dx;
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 4;
    bx = ax;
    cx = 0;
    ah = *di;
    asm("pushf");
    *(bx + si) = *(bx + si) + ax;
    *(bx + di + 0x240c) = *(bx + di + 0x240c) + cl;
    if(ah != 0) {
        di = sp;
        asm("fnstcw [%ss:bx]");
        asm("wait");
        if(dx != 0) {
            ax = dx;
            si = *si;
            al = al & 0xf7;
            *(bx + di) = *(bx + di) << 1;
            (fsave)(frestore) - *(bx + di);
            asm("lock or ax,dx");
            di = sp;
            *si = ax;
            al = al & 0x36;
            asm("fldcw [bx]");
            asm("wait");
            di = sp;
            asm("fnstcw [%ss:bx]");
            asm("wait");
        }
    }
    ax = 0;
    al = *si & 0x83;
    asm("les ax,[si]");
    (restore)di;
    (restore)si;
    (restore)cx;
}

/* DEST BLOCK NOT FOUND: 0000d4c7 -> 0000da69 */
stack space not deallocated on return
/*	Procedure: 0x0000D4C5 - 0x0000D717
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D4C5()
{



    (restore)bx;
    return;
    goto L0000da69;
    *(bx + si) = *(bx + si) + al;
    (save)bx;
    (save)cx;
    (save)dx;
    *di :: 0xd2;
    *(bx + si) = *(bx + si) + ax;
    if(!( *(bp + di) = *(bp + di) + al)) {
        *di :: 0xd4;
        *(bx + si) = *(bx + si) + ax;
        if(!( *(bx + si) = *(bx + si) + al)) {
            eax = *L00000196;
            *(bx + si) = *(bx + si) + al;
L0000d4e7:
            *L00001298 = eax;
            *(bx + si) = *(bx + si) + al;
            (restore)dx;
            (restore)cx;
            (restore)bx;
            return;
        }
    }
    dh = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(dh >= 2 && dh <= 8) {
        goto L0000d50b;
    }
    bh = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(bh == 0) {
L0000d50b:
        eax = ds;
        al = 0x34;
        goto L0000d4e7;
    }
    if(bh == 1) {
        *di :: 0xd3;
        *(bx + si) = *(bx + si) + ax;
        if(*(bx + si) = *(bx + si) + al) {
            goto L0000d52d;
        }
    }
    al = *L000001D2;
    *(bx + si) = *(bx + si) + al;
    if(al == 9) {
L0000d52d:
        eax = ds;
        goto L0000d4e7;
    }
    if(al == 1) {
        al :: *di;
        asm("rol word [bx+di],cl");
        if(!( *(bx + si) = *(bx + si) + al)) {
            cx = 1;
            *(bx + si) = *(bx + si) + al;
            edx = 835518464;
            asm("sbb eax,eax");
            ax = ax << 0x10;
            eax = edx;
            bx = ax;
            if(ax < 0) {
                dx = 65535;
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
                *(bx + si) = *(bx + si) + 0x120;
                ax = L00005C49();
                asm("Unknown opcode 0xff");
                asm("Unknown opcode 0xff");
            }
            dx = 65535;
            asm("verr [bp-0x77]");
            asm("sbb ax,0x1298");
            *(bx + si) = *(bx + si) + al;
            eax = edx;
            ecx = dx >> 0x10;
            edx = eax;
            eax = 835518472;
            asm("sbb eax,eax");
            if(eax == 0) {
                goto L0000d5ac;
            }
            dx = 65535;
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            *(bx + si) = *(bx + si) + 0x146;
            L00005C49();
            asm("Unknown opcode 0xff");
            ax = *(bp + si + 0x59)();
            (restore)bx;
            return;
        }
    }
    *di = 0;
    asm("cbw");
    asm("adc al,[bx+si]");
    *(bp + si + 0x59) = *(bp + si + 0x59) + bl;
L0000d5ac:
    (restore)bx;
    return;
    (save)bx;
    ah = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(ah == 1) {
        ah :: *di;
        asm("rol word [bx+di],cl");
        if(!( *(bx + si) = *(bx + si) + al)) {
            ebx = *di;
            asm("cbw");
            asm("adc al,[bx+si]");
            *(bp - 0x48) = *(bp - 0x48) + ah;
            *(bx + si) = *(bx + si) + ax;
            asm("int 0x31");
        }
    }
    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)dx;
    (save)si;
    (save)di;
    (save)es;
    (save)fs;
    (save)bp;
    if(ax != -1) {
        *(bx + si) = *(bx + si) + al;
        if(ax == -2) {
            goto L0000d682;
        }
        *(bx + si) = *(bx + si) + al;
        if(ax == -3) {
            *(0x101 + si) = *(0x101 + si) + al;
            *(bx + si) = *(bx + si) + 0x1194;
            dx = 0;
            L00007CF6();
            asm("Unknown opcode 0xff");
            (save) *(bx + di);
            asm("Unknown opcode 0xd2");
            ax = 0;
            *di = dx;
            asm("adc [bx+si],ax");
            *(bx + di + 0x815) = *(bx + di + 0x815) + cl;
            *(bx + si) = *(bx + si) | al;
            cl = cl + ch;
        }
        if(ax == -4) {
            bx = 0x101;
            *(0x101 + si) = *(0x101 + si) + al;
            *(bx + si) = *(bx + si) + 0x1194;
            dx = 0;
            L00007CF6();
            asm("Unknown opcode 0xff");
            asm("Unknown opcode 0xff");
            ax = 0x81;
            *(bx + si) = *(bx + si) + 0x81;
            dl = 1;
L0000d636:
            ax = ax + 1;
            *(bx + si + 0x1194) = dl;
            *(bx + si) = *(bx + si) + al;
            ax :: 0x9f;
            if(*(bx + si) = *(bx + si) + al) {
                goto L0000d636;
            }
            ax = 0xe0;
            *(bx + si) = *(bx + si) + 0xe0;
            dh = 1;
L0000d64b:
            ax = ax + 1;
            *(bx + si + 0x1194) = dh;
            *(bx + si) = *(bx + si) + al;
            ax :: 0xfc;
            if(*(bx + si) = *(bx + si) + al) {
                goto L0000d64b;
            }
            *(bx + si) = *(bx + si) + al;
            bx = "COM C/C++16 Run-Time system. (c) Copyright by WATCOM International Corp. 1988-1995. All rights reserved.\r\n*** NULL assignment detected\r\n";
            *(bx + si) = *(bx + si) + al;
            ax = 0;
            *di = 1;
            asm("adc [bx+si],ax");
            *(bx + di + 0x81d) = *(bx + di + 0x81d) + cl;
            *(bx + si) = *(bx + si) | al;
            L00008500();
        }
        asm("Unknown opcode 0xc0");
        if(cl = cl + ch) {
            goto L0000d684;
        }
        *(bx + si) = *(bx + si) + 1;
    } else {
L0000d682:
        *(bx + si) = *(bx + si) + al;
L0000d684:
        ax = L0000D718();
        *(bx + si) = *(bx + si) + al;
        di = dx;
        cx = ax;
        es = dx;
        si = ax;
        if(ax == 0) {
            if(edx == 0) {
                goto L0000d70c;
            }
            *(bx + si) = *(bx + si) + al;
        }
        bx = 0x101;
        *(0x101 + si) = *(0x101 + si) + al;
        *(bx + si) = *(bx + si) + 0x1194;
        dx = 0;
        bp = 0;
        ax = L00007CF6();
        asm("Unknown opcode 0xff");
        *(bx + di + 0x902d) = *(bx + di + 0x902d) - 1;
        asm("adc [bx+si],ax");
        *(bp + 0x66e7) = *(bp + 0x66e7) + cl;
        if(*%fs:bx+di] != 0) {
            *di = 0x1190;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + ax;
            *(bx + si) = *(bx + si) + al;
        }
        cx = si;
        bh = 1;
        goto L0000d6f6;
L0000d6d0:
        dx = 0;
        dx = esi >> 8;
        bl = dl;
        ax = *%es:bx+di] & 0xff;
        *(bx + si) = *(bx + si) + al;
        goto L0000d6eb;
L0000d6e4:
        ax = ax + 1;
        *(bx + si + 0x1194) = bh;
        *(bx + si) = *(bx + si) + al;
L0000d6eb:
        if(ax <= (bl & 0xff)) {
            goto L0000d6e4;
        }
        cx = cx + 2;
L0000d6f6:
        esi = *%es:bx+di];
        if(esi != 0) {
            goto L0000d6d0;
        }
        *(bx + si) = *(bx + si) + al;
        *(bx + si) = *(bx + si) + al;
        *L00000808 = L0000D81A() & 65535;
L0000d70c:
        *(bx + si) = *(bx + si) + al;
    }
    ax = 0;
    (restore)bp;
    (restore)fs;
    (restore)es;
    (restore)di;
    (restore)si;
    (restore)dx;
    (restore)cx;
}

stack space not deallocated on return
/*	Procedure: 0x0000D718 - 0x0000D819
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D718()
{



    (restore)bx;
    return;
    (save)bx;
    (save)cx;
    (save)si;
    (save)di;
    sp = sp - 0x70;
    ah = *di;
    asm("rol byte [bx+di],cl");
    *(bx + si) = *(bx + si) + al;
    if(ah >= 2) {
        *(bx + si) = *(bx + si) + al;
        if(ah <= 8) {
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
            *(bx + si) = *(bx + si) + al;
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
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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

/*	Procedure: 0x0000D81A - 0x0000D9B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D81A()
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
}

/*	Procedure: 0x0000D9BA - 0x0000DA4E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000D9BA()
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
}

/*	Procedure: 0x0000DA4F - 0x0000E501
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0000DA4F()
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
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
    *(bx + si) = *(bx + si) + al;
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
