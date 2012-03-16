/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/callchain/ia32_elf_by_boomerang/subject.exe'
 */

/*	Procedure: 0x08048878 - 0x080488E6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    (save)0;
    (save)0;
    ebp = esp;
    (save)edx;
    if(_cleanup != 0) {
        atexit(_cleanup);
    }
    if(_DYNAMIC != 0) {
        atexit();
    }
    (save)_fini;
    atexit();
    eax = *(ebp + 8);
    edx = ebp + eax * 4 + 16;
    _environ = edx;
    (save)_environ;
    (save)ebp + 12;
    (save)eax;
    _init();
    __fpstart();
    esp = esp + 12;
    (save)main();
    exit();
    (save)0;
    eax = 1;
    L00000007();
    asm("hlt");
}

/*	Procedure: 0x080488E7 - 0x080488E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_mcount()
{



}

/*	Procedure: 0x080488E8 - 0x08048924
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;



    L080488f1();
    (restore)ebx;
    for(ebx = ebx + 7135; 1; *( *eax)()) {
        eax = *(ebx + 200);
        if(*eax == 0) {
            break;
        }
        *(ebx + 200) = eax + 4;
    }
    return(__deregister_frame_info(ebx + 220));
}

/*	Procedure: 0x08048925 - 0x08048927
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048925()
{



}

/*	Procedure: 0x08048928 - 0x0804893C
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

fini_dummy()
{
	/* unknown */ void  ebx;



    eax = L08048931();
    (restore)ebx;
    ebx = ebx + 7071;
}

/*	Procedure: 0x0804893D - 0x0804893F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804893D()
{



}

/*	Procedure: 0x08048940 - 0x08048967
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

frame_dummy()
{
	/* unknown */ void  ebx;



    L08048949();
    (restore)ebx;
    ebx = ebx + 7047;
    return(__register_frame_info(ebx + 220, ebx + 1500));
}

/*	Procedure: 0x08048968 - 0x0804897C
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

L08048968()
{
	/* unknown */ void  ebx;



    eax = L08048971();
    (restore)ebx;
    ebx = ebx + 7007;
}

/*	Procedure: 0x0804897D - 0x0804897F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804897D()
{



    *eax = *eax + al;
    *(ebp - 117) = *(ebp - 117) + dl;
}

/*	Procedure: 0x08048980 - 0x0804898C
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

add5(A8)
/* unknown */ void  A8;
{



    return(A8 + 5);
}

/*	Procedure: 0x0804898D - 0x0804898F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804898D()
{



}

/*	Procedure: 0x08048990 - 0x0804899C
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

add10(A8)
/* unknown */ void  A8;
{



    return(A8 + 10);
}

/*	Procedure: 0x0804899D - 0x0804899F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804899D()
{



}

/*	Procedure: 0x080489A0 - 0x080489AC
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

add15(A8)
/* unknown */ void  A8;
{



    return(A8 + 15);
}

/*	Procedure: 0x080489AD - 0x080489AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489AD()
{



}

/*	Procedure: 0x080489B0 - 0x080489C1
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

printarg(A8)
/* unknown */ void  A8;
{



    return(printf(0x80494b8, A8));
}

/*	Procedure: 0x080489C2 - 0x080489C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489C2()
{



}

/*	Procedure: 0x080489C4 - 0x080489E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    printarg(add5(add10(add15(25))));
    return(0);
}

/*	Procedure: 0x080489E4 - 0x08048A1E
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 8
 */

decode_uleb128(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    for(esi = 0; 1; esi = esi + 7) {
        ecx = A8;
        edx = *ecx & 255;
        A8 = ecx + 1;
        eax = edx & 127;
        ecx = esi;
        edi = edi | eax << cl;
        if(dl >= 0) {
            break;
        }
    }
    *Ac = edi;
    return(A8);
}

/*	Procedure: 0x08048A1F - 0x08048A1F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A1F()
{



}

/*	Procedure: 0x08048A20 - 0x08048A78
 *	Argument size: 8
 *	Local size: 4
 *	Save regs size: 8
 */

decode_sleb128(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffffc;



    edi = A8;
    Vfffffffc = 0;
    ecx = Vfffffffc;
    do {
        esi = *edi & 255;
        edi = edi + 1;
        Vfffffffc = Vfffffffc | (esi & 127) << cl;
        ecx = ecx + 7;
        edx = esi;
    } while(dl < 0);
    if(ecx <= 31 && !(esi & 64)) {
        Vfffffffc = Vfffffffc | -1 << cl;
    }
    *Ac = Vfffffffc;
    eax = edi;
    esp = ebp - 12;
}

/*	Procedure: 0x08048A79 - 0x08048A7B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A79()
{



}

/*	Procedure: 0x08048A7C - 0x08048AD0
 *	Argument size: 12
 *	Local size: 8
 *	Save regs size: 8
 */

fde_insert(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    edx = Ac;
    eax = A10;
    *(A8 + edx * 4) = eax;
    if(edx != 0) {
        ecx = esi + edx * 4;
        do {
            edi = *ecx;
            Vfffffffc = edi;
            esi = *(A8 + edx * 4 - 4);
            Vfffffff8 = esi;
            eax = *(Vfffffffc + 8) - *(Vfffffff8 + 8);
            if(eax >= 0) {
                break;
            }
            *ecx = Vfffffff8;
            *(A8 + edx * 4 - 4) = Vfffffffc;
            ecx = ecx + -4;
        } while(edx = edx - 1);
    }
    esp = ebp - 16;
}

/*	Procedure: 0x08048AD1 - 0x08048AD3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048AD1()
{



}

/*	Procedure: 0x08048AD4 - 0x08048B01
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

count_fdes(A8)
/* unknown */ void  A8;
{



    edx = A8;
    ecx = 0;
    if(*edx != 0) {
        do {
            if(*(edx + 4) != 0 && *(edx + 8) != 0) {
                ecx = ecx + 1;
            }
            eax = edx + *edx;
            edx = eax + 4;
        } while(*(eax + 4) != 0);
    }
    return(ecx);
}

/*	Procedure: 0x08048B02 - 0x08048B03
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048B02()
{



}

/*	Procedure: 0x08048B04 - 0x08048B91
 *	Argument size: 20
 *	Local size: 8
 *	Save regs size: 12
 */

add_fdes(A8, Ac, A10, A14, A18)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    eax = L08048b12();
    (restore)ebx;
    ebx = ebx + 6590;
    esi = A8;
    edi = *A10;
    Vfffffffc = *A14;
    Vfffffff8 = *A18;
    if(*esi != 0) {
        do {
            if(*(esi + 4) != 0 && *(esi + 8) != 0) {
                edi = edi + 1;
                fde_insert(Ac, edi, esi);
                eax = *(esi + 8);
                if(Vfffffffc > eax) {
                    Vfffffffc = eax;
                }
                eax = eax + *(esi + 12);
                if(Vfffffff8 < eax) {
                    Vfffffff8 = eax;
                }
            }
            eax = esi + *esi;
            esi = eax + 4;
        } while(*(eax + 4) != 0);
    }
    *A10 = edi;
    *A14 = Vfffffffc;
    *A18 = Vfffffff8;
    esp = ebp - 20;
}

/*	Procedure: 0x08048B92 - 0x08048B93
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048B92()
{



}

/*	Procedure: 0x08048B94 - 0x08048C7C
 *	Argument size: 4
 *	Local size: 16
 *	Save regs size: 12
 */

frame_init(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    L08048ba2();
    (restore)ebx;
    ebx = ebx + 6446;
    eax = *(A8 + 12);
    if(eax != 0) {
        esi = eax;
        Vfffffff4 = 0;
        do {
            Vfffffff4 = Vfffffff4 + count_fdes( *esi);
            esi = esi + 4;
        } while(*esi != 0);
    } else {
        Vfffffff4 = count_fdes( *(A8 + 8));
    }
    eax = Vfffffff4;
    *(A8 + 16) = eax;
    edi = malloc( *(A8 + 16) << 2);
    Vfffffff8 = -1;
    Vfffffffc = 0;
    Vfffffff4 = 0;
    eax = *(A8 + 12);
    if(eax != 0) {
        esi = eax;
        if(*esi != 0) {
            Vfffffff0 = & Vfffffffc;
            do {
                add_fdes( *esi, edi, & Vfffffff4, & Vfffffff8, Vfffffff0);
                esi = esi + 4;
            } while(*esi != 0);
        }
    } else {
        add_fdes( *(A8 + 8), edi, & Vfffffff4, & Vfffffff8, & Vfffffffc);
    }
    *(A8 + 12) = edi;
    *A8 = Vfffffff8;
    eax = Vfffffffc;
    *(A8 + 4) = eax;
    esp = ebp - 28;
}

/*	Procedure: 0x08048C7D - 0x08048C7F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048C7D()
{



}

/*	Procedure: 0x08048C80 - 0x08048D1C
 *	Argument size: 4
 *	Local size: 8
 *	Save regs size: 12
 */

find_fde(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    L08048c8e();
    (restore)ebx;
    esi = *(ebx + 6210 + 1524);
    if(esi != 0) {
        do {
            if(*esi == 0) {
                frame_init(esi);
            }
            ecx = A8;
            if(*esi <= ecx && *(esi + 4) > ecx) {
                break;
            }
            esi = *(esi + 20);
        } while(esi != 0);
        if(esi != 0) {
L08048cc8:
            eax = Vfffffff8;
            goto L08048d15;
            edi = 0;
            ecx = *(esi + 16);
            Vfffffffc = ecx;
            if(0 < Vfffffffc) {
                esi = *(esi + 12);
                do {
                    edx = Vfffffffc + edi >> 1;
                    ecx = *(esi + edx * 4);
                    Vfffffff8 = ecx;
                    eax = *(Vfffffff8 + 8);
                    if(A8 >= eax) {
                        if(A8 <= eax + *(Vfffffff8 + 12)) {
                            goto L08048cc8;
                        }
                        edi = edx + 1;
                    } else {
                        Vfffffffc = edx;
                    }
                } while(Vfffffffc > edi);
            }
        }
    }
    eax = 0;
L08048d15:
    esp = ebp - 20;
}

/*	Procedure: 0x08048D1D - 0x08048D1F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048D1D()
{



}

/*	Procedure: 0x08048D20 - 0x08048E36
 *	Argument size: 8
 *	Local size: 24
 *	Save regs size: 12
 */

extract_cie_info(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    L08048d2e();
    (restore)ebx;
    ebx = ebx + 6050;
    edx = A8;
    edx = edx - *(edx + 4) + -4;
    Ac = edx + 9;
    Vfffffff4 = Ac;
    *Ac = Ac;
    Vfffffff8 = *Ac;
    Vfffffff0 = eax;
    ecx = 1;
    edi = Vfffffff0;
    asm("cld");
    asm("repe cmpsb");
    if(!(eax = ebx + -4102)) {
        Ac = Vfffffff4;
        ecx = 3;
        asm("cld");
        asm("repe cmpsb");
        if(!(edi = ebx + -4101) && *(edx + 9) != 122) {
            eax = 0;
            goto L08048e2f;
        }
    }
    eax = *Ac;
    Vfffffff0 = eax;
    edx = Vfffffff0;
    edi = edx;
    eax = 0;
    asm("cld");
    ecx = -1;
    asm("repne scasb");
    ecx = !ecx;
    Vfffffff8 = ecx;
    eax = edx + Vfffffff8 - 1;
    Vfffffff4 = eax;
    edx = eax + 1;
    Vfffffff8 = Vfffffff0;
    ecx = 3;
    asm("cld");
    asm("repe cmpsb");
    if(!(Vfffffff0 = ebx + -4101)) {
        eax = *(eax + 1);
        *(Ac + 4) = eax;
        edx = Vfffffff4 + 5;
    } else {
        *(Ac + 4) = 0;
    }
    edx = decode_uleb128(edx, Ac + 8);
    edx = decode_sleb128(edx, Ac + 12);
    eax = *edx & 255;
    *(Ac + 16) = eax;
    edx = edx + 1;
    if(*( *Ac) == 122) {
        edx = decode_uleb128(edx, & Vfffffffc) + Vfffffffc;
    }
    eax = edx;
L08048e2f:
    esp = ebp - 36;
}

/*	Procedure: 0x08048E37 - 0x08048E37
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048E37()
{



}

/*	Procedure: 0x08048E38 - 0x080491C6
 *	Argument size: 16
 *	Local size: 16
 *	Save regs size: 12
 */

execute_cfa_insn(A8, Ac, A10, A14)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    eax = L08048e46();
    (restore)ebx;
    ebx = ebx + 5770;
    edi = A10;
    edx = A14;
    ecx = A8;
    eax = *ecx & 255;
    ecx = ecx + 1;
    A8 = ecx;
    Vfffffff0 = esi;
    if(!(esi = eax & 64)) {
        eax = eax & 63;
        *(edi + 8) = *(edi + 8) * eax;
        *edx = *edx + eax;
    } else {
        if(al < 0) {
            eax = eax & 63;
            Vfffffff8 = eax;
            eax = & Vfffffffc;
            eax = decode_uleb128(A8, eax);
            A8 = eax;
            eax = Vfffffffc;
            *(edi + 12) = *(edi + 12) * eax;
            Vfffffffc = eax;
            eax = Vfffffff8;
            ecx = Ac;
            *(eax + ecx + 92) = 1;
            esi = Vfffffff8;
            edx = esi * 4;
            eax = Vfffffffc;
            *(edx + ecx + 16) = eax;
        } else {
            if(!(al & 192)) {
                eax = eax & 63;
                Vfffffff8 = eax;
                cl = Vfffffff0;
                esi = Ac;
                *(eax + esi + 92) = cl;
            } else {
                if(eax <= 46) {
                    ecx = ebx;
                    goto (ecx - *(ebx + eax * 4 + -5592));
                    asm("adc al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x15");
                    *eax = *eax + al;
                    *L14F40000 = *L14F40000 | dl;
                    *eax = *eax + al;
                    asm("loopne 0x8048f1e");
                    asm("enter 0x14,0x0");
                    if(!( *eax = *eax + al)) {
                        *eax = *eax + al;
                        asm("adc al,0x13");
                        *eax = *eax + al;
                        asm("adc al,0x13");
                        *eax = *eax + al;
                        (restore)esp;
                        asm("adc al,0x0");
                        *(eax + -2013265901) = *(eax + -2013265901) + ch;
                        asm("adc eax,[eax]");
                    }
                    *(esp + edx) = *(esp + edx) + bl;
                    *eax = *eax + al;
                    eax = Ld0048f44();
                    asm("adc eax,[eax]");
                    *(ebx + edx) = *(ebx + edx) + bl;
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("sbb al,0x13");
                    *eax = *eax + al;
                    asm("insb");
                    asm("adc eax,[eax]");
                    *eax = *eax + bh;
                    asm("adc eax,[eax]");
                    *(ebx + 109774965) = *(ebx + 109774965) + cl;
                    *edx = eax;
                    esi = esi + 4;
                    A8 = esi;
                    goto L080491bc;
                    ecx = A8;
                    eax = *ecx & 255;
                    *edx = *edx + eax;
                    ecx = ecx + 1;
                    A8 = ecx;
                    goto L080491bc;
                    esi = A8;
                    eax = *esi & 65535;
                    *edx = *edx + eax;
                    esi = esi + 2;
                    A8 = esi;
                    goto L080491bc;
                    eax = *edx;
                    ecx = A8;
                    eax = eax + *ecx;
                    *edx = eax;
                    ecx = ecx + 4;
                    A8 = ecx;
                    goto L080491bc;
                    eax = & Vfffffff8;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = & Vfffffffc;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = Vfffffffc;
                    *(edi + 12) = *(edi + 12) * eax;
                    Vfffffffc = eax;
                    eax = Vfffffff8;
                    esi = Ac;
                    *(eax + esi + 92) = 1;
                    ecx = Vfffffff8;
                    edx = ecx * 4;
                    eax = Vfffffffc;
                    *(edx + esi + 16) = eax;
                    goto L080491bc;
                    eax = & Vfffffff8;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = Vfffffff8;
                    esi = Ac;
                    *(eax + esi + 92) = 0;
                    goto L080491bc;
                    eax = & Vfffffff8;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = & Vfffffff4;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = Vfffffff8;
                    ecx = Ac;
                    *(eax + ecx + 92) = 2;
                    esi = Vfffffff8;
                    edx = esi * 4;
                    eax = Vfffffff4;
                    *(edx + ecx + 16) = eax;
                    goto L080491bc;
                    eax = & Vfffffff8;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = & Vfffffffc;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = Vfffffff8;
                    *(Ac + 88) = ax;
                    eax = Vfffffffc;
                    *(Ac + 8) = eax;
                    goto L080491bc;
                    eax = decode_uleb128(A8, & Vfffffff8);
                    A8 = eax;
                    *(Ac + 88) = Vfffffff8;
                    goto L080491bc;
                    eax = & Vfffffffc;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = Vfffffffc;
                    *(Ac + 8) = eax;
                    goto L080491bc;
                    (save)116;
                    eax = malloc();
                    edx = eax;
                    edi = edx;
                    eax = Ac;
                    esi = eax;
                    asm("cld");
                    ecx = 29;
                    asm("rep movsd");
                    *(Ac + 112) = edx;
                    goto L080491bc;
                    edx = *(Ac + 112);
                    edi = Ac;
                    esi = edx;
                    asm("cld");
                    ecx = 29;
                    asm("rep movsd");
                    (save)edx;
                    eax = free();
                    goto L080491bc;
                    Vfffffff8 = 16;
L0804916c:
                    eax = Vfffffff8;
                    ecx = Ac;
                    *(eax + ecx + 92) = 1;
                    eax = Vfffffff8;
                    *(ecx + eax * 4 + 16) = eax * 4 + -64;
                    Vfffffff8 = eax + 1;
                    if(Vfffffff8 <= 31) {
                        goto L0804916c;
                    }
                    goto L080491bc;
                    A8 = decode_uleb128(A8, & Vfffffffc);
                    *(Ac + 12) = Vfffffffc;
                } else {
                    abort();
                }
            }
        }
    }
L080491bc:
    esp = ebp - 28;
    return(A8);
}

/*	Procedure: 0x080491C7 - 0x080491C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080491C7()
{



}

/*	Procedure: 0x080491C8 - 0x0804920F
 *	Argument size: 4
 *	Local size: 4
 *	Save regs size: 4
 */

__register_frame_info(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;



    L080491d1();
    (restore)ebx;
    ebx = ebx + 4863;
    *(Ac + 8) = A8;
    *(Ac + 4) = 0;
    *Ac = 0;
    *(Ac + 12) = 0;
    *(Ac + 16) = 0;
    eax = *(ebx + 1524);
    *(Ac + 20) = eax;
    *(ebx + 1524) = Ac;
    return(*(Ac + 20));
}

/*	Procedure: 0x08049210 - 0x08049253
 *	Argument size: 4
 *	Local size: 4
 *	Save regs size: 4
 */

__register_frame_info_table(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;



    L08049219();
    (restore)ebx;
    ebx = ebx + 4791;
    eax = A8;
    *(Ac + 8) = eax;
    *(Ac + 12) = *(Ac + 8);
    *(Ac + 4) = 0;
    *Ac = 0;
    *(Ac + 16) = 0;
    eax = *(ebx + 1524);
    *(Ac + 20) = eax;
    *(ebx + 1524) = Ac;
    return(*(Ac + 20));
}

/*	Procedure: 0x08049254 - 0x080492A8
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 4
 */

__deregister_frame_info(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;



    L0804925d();
    (restore)ebx;
    ebx = ebx + 4723;
    eax = A8;
    ecx = ebx + 1524;
    if(*(ebx + 1524) != 0) {
        do {
            edx = *ecx;
            if(*(edx + 8) == eax) {
                goto L0804927f;
            }
            ecx = edx + 20;
        } while(*(edx + 20) != 0);
        goto L0804929d;
L0804927f:
        eax = *(edx + 20);
        *ecx = eax;
        if(*edx != 0) {
            (save) *(edx + 12);
            eax = free();
        }
    } else {
L0804929d:
        abort();
    }
}

/*	Procedure: 0x080492A9 - 0x080492AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080492A9()
{



}

/*	Procedure: 0x080492AC - 0x08049415
 *	Argument size: 8
 *	Local size: 168
 *	Save regs size: 12
 */

__frame_state_for(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vffffff58;
	/* unknown */ void  Vffffff5c;
	/* unknown */ void  Vffffff60;
	/* unknown */ void  Vffffff64;
	/* unknown */ void  Vffffff68;
	/* unknown */ void  Vffffff6c;
	/* unknown */ void  Vffffff70;
	/* unknown */ void  Vffffff74;
	/* unknown */ void  Vffffff78;
	/* unknown */ void  Vffffff7c;
	/* unknown */ void  Vffffffd2;
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffffc;



    L080492bd();
    (restore)ebx;
    ebx = ebx + 4627;
    eax = find_fde(A8);
    Vffffff6c = eax;
    if(eax != 0) {
        ecx = & Vffffffec;
        Vffffff68 = ecx;
        eax = extract_cie_info(Vffffff6c, Vffffff68);
        esi = eax;
        if(esi != 0) {
            ecx = & Vffffff78;
            Vffffff64 = ecx;
            memset(Vffffff64, 0, 116);
            Vffffffd2 = Vfffffffc;
            Vffffff7c = Vfffffff0;
            ecx = Vffffff6c;
            edi = ecx - *(ecx + 4) + -4 + *(ecx - *(ecx + 4) + -4) + 4;
            if(esi < edi) {
                Vffffff60 = Vffffff68;
                Vffffff5c = Vffffff64;
                do {
                    esi = execute_cfa_insn(esi, Vffffff5c, Vffffff60, 0);
                } while(esi < edi);
            }
            esi = Vffffff6c + 16;
            if(*Vffffffec == 122) {
                esi = decode_uleb128(esi, & Vffffff74) + Vffffff74;
            }
            edi = Vffffff6c + *Vffffff6c + 4;
            Vffffff70 = *(Vffffff6c + 8);
            if(esi < edi) {
                Vffffff58 = & Vffffff70;
                do {
                    if(Vffffff70 > A8) {
                        break;
                    }
                    esi = execute_cfa_insn(esi, & Vffffff78, & Vffffffec, Vffffff58);
                } while(esi < edi);
            }
            edi = Ac;
            esi = & Vffffff78;
            asm("cld");
            ecx = 28;
            asm("rep movsd");
            eax = Ac;
        }
    }
    esp = ebp + -180;
}

/*	Procedure: 0x08049416 - 0x08049417
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08049416()
{



    *eax = *eax + al;
}

/*	Procedure: 0x08049418 - 0x0804944A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    L08049422();
    (restore)ebx;
    eax = ebx + 4270 + 208;
    esi = eax - 4;
    if(*(eax - 4) != -1) {
        do {
            eax = *( *esi)();
            esi = esi + -4;
        } while(*esi != -1);
    }
}

/*	Procedure: 0x0804944B - 0x0804944B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804944B()
{



}

/*	Procedure: 0x0804944C - 0x08049460
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

init_dummy()
{
	/* unknown */ void  ebx;



    eax = L08049455();
    (restore)ebx;
    ebx = ebx + 4219;
}

extern /* addr: 08049461 */  /*	Procedure: 0x08049461 - 0x0804946F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08049461()
/*	Procedure: 0x08049470 - 0x08049492
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    frame_dummy();
    return(__do_global_ctors_aux());
}

extern /* addr: 08049493 */  /*	Procedure: 0x08049493 - 0x0804949F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08049493()
/*	Procedure: 0x080494A0 - 0x080494B2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    return(__do_global_dtors_aux());
}

extern /* addr: 080494B3 */  /*	Procedure: 0x080494B3 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080494B3()
/* address  size  */
/* 0x08048000       0 */ /* unknown */ void 	_START_;
/* 0x080487d8       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x080487f8      16 */ /* unknown */ void 	atexit;
/* 0x08048808      16 */ /* unknown */ void 	__fpstart;
/* 0x08048818      16 */ /* unknown */ void 	exit;
/* 0x08048828      16 */ /* unknown */ void 	printf;
/* 0x08048838      16 */ /* unknown */ void 	malloc;
/* 0x08048848      16 */ /* unknown */ void 	free;
/* 0x08048858      16 */ /* unknown */ void 	abort;
/* 0x08048868      16 */ /* unknown */ void 	memset;
/* 0x08048878     111 */ /* unknown */ void 	_start;
/* 0x080488e7       1 */ /* unknown */ void 	_mcount;
/* 0x080488e8      64 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048928      24 */ /* unknown */ void 	fini_dummy;
/* 0x08048940      64 */ /* unknown */ void 	frame_dummy;
/* 0x08048980      16 */ /* unknown */ void 	add5;
/* 0x08048990      16 */ /* unknown */ void 	add10;
/* 0x080489a0      16 */ /* unknown */ void 	add15;
/* 0x080489b0      20 */ /* unknown */ void 	printarg;
/* 0x080489c4      32 */ /* unknown */ void 	main;
/* 0x080489e4      60 */ /* unknown */ void 	decode_uleb128;
/* 0x08048a20      92 */ /* unknown */ void 	decode_sleb128;
/* 0x08048a7c      88 */ /* unknown */ void 	fde_insert;
/* 0x08048ad4      48 */ /* unknown */ void 	count_fdes;
/* 0x08048b04     144 */ /* unknown */ void 	add_fdes;
/* 0x08048b94     236 */ /* unknown */ void 	frame_init;
/* 0x08048c80     160 */ /* unknown */ void 	find_fde;
/* 0x08048d20     280 */ /* unknown */ void 	extract_cie_info;
/* 0x08048e38     912 */ /* unknown */ void 	execute_cfa_insn;
/* 0x080491c8      72 */ /* unknown */ void 	__register_frame_info;
/* 0x08049210      68 */ /* unknown */ void 	__register_frame_info_table;
/* 0x08049254      88 */ /* unknown */ void 	__deregister_frame_info;
/* 0x080492ac     364 */ /* unknown */ void 	__frame_state_for;
/* 0x08049418      52 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0804944c      36 */ /* unknown */ void 	init_dummy;
/* 0x08049470      48 */ /* unknown */ void 	_init;
/* 0x080494a0       1 */ /* unknown */ void 	_fini;
/* 0x080494b4       4 */ /* unknown */ void 	_lib_version;
/* 0x080494ce       0 */ /* unknown */ void 	_etext;
/* 0x0804a4d0       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804a500       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804a598       0 */ /* unknown */ void 	p.2;
/* 0x0804a59c       0 */ /* unknown */ void 	force_to_data;
/* 0x0804a59c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804a5a0       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804a5a4       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804a5a8       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804a5ac       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x0804a5ac       0 */ /* unknown */ void 	__FRAME_BEGIN__;
/* 0x0804aaa8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804aaac       0 */ /* unknown */ void 	_edata;
/* 0x0804aaac      24 */ /* unknown */ void 	object.7;
/* 0x0804aac4       4 */ /* unknown */ void 	objects;
/* 0x0804aac8       4 */ /* unknown */ void 	_environ;
/* 0x0804aac8       4 */ /* unknown */ void 	environ;
/* 0x0804aacc       0 */ /* unknown */ void 	_end;
/* 0x0804aacc       0 */ /* unknown */ void 	_END_;
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
option: -flag16
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
option: +usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
