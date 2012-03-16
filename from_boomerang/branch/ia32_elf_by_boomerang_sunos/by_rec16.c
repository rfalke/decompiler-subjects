/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe'
 */

/*	Procedure: 0x08048840 - 0x080488AE
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

/*	Procedure: 0x080488AF - 0x080488AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_mcount()
{



}

/*	Procedure: 0x080488B0 - 0x080488EC
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;



    L080488b9();
    (restore)ebx;
    for(ebx = ebx + 7431; 1; *( *eax)()) {
        eax = *(ebx + 204);
        if(*eax == 0) {
            break;
        }
        *(ebx + 204) = eax + 4;
    }
    return(__deregister_frame_info(ebx + 224));
}

/*	Procedure: 0x080488ED - 0x080488EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080488ED()
{



}

/*	Procedure: 0x080488F0 - 0x08048904
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

fini_dummy()
{
	/* unknown */ void  ebx;



    eax = L080488f9();
    (restore)ebx;
    ebx = ebx + 7367;
}

/*	Procedure: 0x08048905 - 0x08048907
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048905()
{



}

/*	Procedure: 0x08048908 - 0x0804892F
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

frame_dummy()
{
	/* unknown */ void  ebx;



    L08048911();
    (restore)ebx;
    ebx = ebx + 7343;
    return(__register_frame_info(ebx + 224, ebx + 1776));
}

/*	Procedure: 0x08048930 - 0x08048944
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

L08048930()
{
	/* unknown */ void  ebx;



    eax = L08048939();
    (restore)ebx;
    ebx = ebx + 7303;
}

/*	Procedure: 0x08048945 - 0x08048947
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048945()
{



    *eax = *eax + al;
    *(ebp - 117) = *(ebp - 117) + dl;
}

/*	Procedure: 0x08048948 - 0x08048A57
 *	Argument size: 0
 *	Local size: 8
 *	Save regs size: 8
 */

main()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    ebx = 5;
    esi = 5;
    (save) & Vfffffffc;
    (save)0x8049528;
    scanf();
    (save) & Vfffffff8;
    (save)0x8049528;
    scanf();
    esp = esp + 16;
    if(Vfffffffc == ebx) {
        printf(0x804952b);
    }
    if(Vfffffffc != ebx) {
        printf(0x8049532);
        if(Vfffffffc < ebx) {
            printf(0x804953d);
            if(Vfffffffc < ebx) {
                goto L080489c3;
            }
        }
    }
    printf(0x8049546);
    if(Vfffffffc <= ebx) {
L080489c3:
        printf(0x8049555);
        if(Vfffffffc <= ebx) {
            goto L080489e2;
        }
    }
    printf(0x8049567);
L080489e2:
    if(Vfffffff8 < esi) {
        printf(0x804956d);
        if(Vfffffff8 < esi) {
            goto L08048a0b;
        }
    }
    printf(0x804957f);
    if(Vfffffff8 <= esi) {
L08048a0b:
        printf(0x8049597);
        if(Vfffffff8 <= esi) {
            goto L08048a2a;
        }
    }
    printf(0x80495a4);
L08048a2a:
    if(!(eax = ebx - Vfffffffc)) {
        printf(0x80495af);
        if(eax = ebx - Vfffffffc) {
            goto L08048a4f;
        }
    }
    printf(0x80495b6);
L08048a4f:
    esp = ebp - 16;
    return(0);
}

/*	Procedure: 0x08048A58 - 0x08048A92
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

/*	Procedure: 0x08048A93 - 0x08048A93
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A93()
{



}

/*	Procedure: 0x08048A94 - 0x08048AEC
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

/*	Procedure: 0x08048AED - 0x08048AEF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048AED()
{



}

/*	Procedure: 0x08048AF0 - 0x08048B44
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

/*	Procedure: 0x08048B45 - 0x08048B47
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048B45()
{



}

/*	Procedure: 0x08048B48 - 0x08048B75
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

/*	Procedure: 0x08048B76 - 0x08048B77
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048B76()
{



}

/*	Procedure: 0x08048B78 - 0x08048C05
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



    eax = L08048b86();
    (restore)ebx;
    ebx = ebx + 6714;
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

/*	Procedure: 0x08048C06 - 0x08048C07
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048C06()
{



}

/*	Procedure: 0x08048C08 - 0x08048CF0
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



    L08048c16();
    (restore)ebx;
    ebx = ebx + 6570;
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

/*	Procedure: 0x08048CF1 - 0x08048CF3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048CF1()
{



}

/*	Procedure: 0x08048CF4 - 0x08048D90
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



    L08048d02();
    (restore)ebx;
    esi = *(ebx + 6334 + 1800);
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
L08048d3c:
            eax = Vfffffff8;
            goto L08048d89;
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
                            goto L08048d3c;
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
L08048d89:
    esp = ebp - 20;
}

/*	Procedure: 0x08048D91 - 0x08048D93
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048D91()
{



}

/*	Procedure: 0x08048D94 - 0x08048EAA
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



    L08048da2();
    (restore)ebx;
    ebx = ebx + 6174;
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
    if(!(eax = ebx + -4100)) {
        Ac = Vfffffff4;
        ecx = 3;
        asm("cld");
        asm("repe cmpsb");
        if(!(edi = ebx + -4099) && *(edx + 9) != 122) {
            eax = 0;
            goto L08048ea3;
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
    if(!(Vfffffff0 = ebx + -4099)) {
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
L08048ea3:
    esp = ebp - 36;
}

/*	Procedure: 0x08048EAB - 0x08048EAB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048EAB()
{



}

/*	Procedure: 0x08048EAC - 0x0804923A
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



    eax = L08048eba();
    (restore)ebx;
    ebx = ebx + 5894;
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
                    goto (ecx - *(ebx + eax * 4 + -5716));
                    asm("adc eax,[eax]");
                    *(eax + -2080374763) = *(eax + -2080374763) + bl;
                    asm("adc eax,0x15700000");
                    *eax = *eax + al;
                    (restore)esp;
                    asm("adc eax,0x15440000");
                    *eax = *eax + al;
                    asm("clc");
                    asm("adc al,0x0");
                    *(eax + -1879048173) = *(eax + -1879048173) + dl;
                    asm("adc eax,[eax]");
                    al = al + bl;
                    asm("adc al,0x0");
                    *(esp + edx) = *(esp + edx) + ah;
                    *eax = *eax + al;
                    al = al + 20;
                    *eax = *eax + al;
                    asm("cwde");
                    asm("adc al,0x0");
                    *(esp + edx) = *(esp + edx) + ah;
                    *(esp + edx) = *(esp + edx) + al;
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    *(eax + -1744830445) = *(eax + -1744830445) + bl;
                    asm("adc eax,[eax]");
                    al = al + ch;
                    asm("adc eax,[eax]");
                    *(ebx + edx + 1972043776) = *(ebx + edx + 1972043776) + dh;
                    *(ebx + -2096985850) = *(ebx + -2096985850) | cl;
                    *(ecx + ecx * 4) = 117;
                    cl = cl | ch;
                    *(eax + 139299728) = *(eax + 139299728) + dl;
                    eax = *ecx & 255;
                    *edx = *edx + eax;
                    ecx = ecx + 1;
                    A8 = ecx;
                    goto L08049230;
                    esi = A8;
                    eax = *esi & 65535;
                    *edx = *edx + eax;
                    esi = esi + 2;
                    A8 = esi;
                    goto L08049230;
                    eax = *edx;
                    ecx = A8;
                    eax = eax + *ecx;
                    *edx = eax;
                    ecx = ecx + 4;
                    A8 = ecx;
                    goto L08049230;
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
                    goto L08049230;
                    eax = & Vfffffff8;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = Vfffffff8;
                    esi = Ac;
                    *(eax + esi + 92) = 0;
                    goto L08049230;
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
                    goto L08049230;
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
                    goto L08049230;
                    eax = decode_uleb128(A8, & Vfffffff8);
                    A8 = eax;
                    *(Ac + 88) = Vfffffff8;
                    goto L08049230;
                    eax = & Vfffffffc;
                    eax = decode_uleb128(A8, eax);
                    A8 = eax;
                    eax = Vfffffffc;
                    *(Ac + 8) = eax;
                    goto L08049230;
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
                    goto L08049230;
                    edx = *(Ac + 112);
                    edi = Ac;
                    esi = edx;
                    asm("cld");
                    ecx = 29;
                    asm("rep movsd");
                    (save)edx;
                    eax = free();
                    goto L08049230;
                    Vfffffff8 = 16;
L080491e0:
                    eax = Vfffffff8;
                    ecx = Ac;
                    *(eax + ecx + 92) = 1;
                    eax = Vfffffff8;
                    *(ecx + eax * 4 + 16) = eax * 4 + -64;
                    Vfffffff8 = eax + 1;
                    if(Vfffffff8 <= 31) {
                        goto L080491e0;
                    }
                    goto L08049230;
                    A8 = decode_uleb128(A8, & Vfffffffc);
                    *(Ac + 12) = Vfffffffc;
                } else {
                    abort();
                }
            }
        }
    }
L08049230:
    esp = ebp - 28;
    return(A8);
}

/*	Procedure: 0x0804923B - 0x0804923B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804923B()
{



}

/*	Procedure: 0x0804923C - 0x08049283
 *	Argument size: 4
 *	Local size: 4
 *	Save regs size: 4
 */

__register_frame_info(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;



    L08049245();
    (restore)ebx;
    ebx = ebx + 4987;
    *(Ac + 8) = A8;
    *(Ac + 4) = 0;
    *Ac = 0;
    *(Ac + 12) = 0;
    *(Ac + 16) = 0;
    eax = *(ebx + 1800);
    *(Ac + 20) = eax;
    *(ebx + 1800) = Ac;
    return(*(Ac + 20));
}

/*	Procedure: 0x08049284 - 0x080492C7
 *	Argument size: 4
 *	Local size: 4
 *	Save regs size: 4
 */

__register_frame_info_table(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;



    L0804928d();
    (restore)ebx;
    ebx = ebx + 4915;
    eax = A8;
    *(Ac + 8) = eax;
    *(Ac + 12) = *(Ac + 8);
    *(Ac + 4) = 0;
    *Ac = 0;
    *(Ac + 16) = 0;
    eax = *(ebx + 1800);
    *(Ac + 20) = eax;
    *(ebx + 1800) = Ac;
    return(*(Ac + 20));
}

/*	Procedure: 0x080492C8 - 0x0804931C
 *	Argument size: 0
 *	Local size: 4
 *	Save regs size: 4
 */

__deregister_frame_info(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;



    L080492d1();
    (restore)ebx;
    ebx = ebx + 4847;
    eax = A8;
    ecx = ebx + 1800;
    if(*(ebx + 1800) != 0) {
        do {
            edx = *ecx;
            if(*(edx + 8) == eax) {
                goto L080492f3;
            }
            ecx = edx + 20;
        } while(*(edx + 20) != 0);
        goto L08049311;
L080492f3:
        eax = *(edx + 20);
        *ecx = eax;
        if(*edx != 0) {
            (save) *(edx + 12);
            eax = free();
        }
    } else {
L08049311:
        abort();
    }
}

/*	Procedure: 0x0804931D - 0x0804931F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804931D()
{



}

/*	Procedure: 0x08049320 - 0x08049489
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



    L08049331();
    (restore)ebx;
    ebx = ebx + 4751;
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

/*	Procedure: 0x0804948A - 0x0804948B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804948A()
{



    *eax = *eax + al;
}

/*	Procedure: 0x0804948C - 0x080494BE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    L08049496();
    (restore)ebx;
    eax = ebx + 4394 + 212;
    esi = eax - 4;
    if(*(eax - 4) != -1) {
        do {
            eax = *( *esi)();
            esi = esi + -4;
        } while(*esi != -1);
    }
}

/*	Procedure: 0x080494BF - 0x080494BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080494BF()
{



}

/*	Procedure: 0x080494C0 - 0x080494D4
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

init_dummy()
{
	/* unknown */ void  ebx;



    eax = L080494c9();
    (restore)ebx;
    ebx = ebx + 4343;
}

extern /* addr: 080494D5 */  /*	Procedure: 0x080494D5 - 0x080494DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080494D5()
/*	Procedure: 0x080494E0 - 0x08049502
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    frame_dummy();
    return(__do_global_ctors_aux());
}

extern /* addr: 08049503 */  /*	Procedure: 0x08049503 - 0x0804950F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08049503()
/*	Procedure: 0x08049510 - 0x08049522
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    return(__do_global_dtors_aux());
}

extern /* addr: 08049523 */  /*	Procedure: 0x08049523 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08049523()
/* address  size  */
/* 0x08048000       0 */ /* unknown */ void 	_START_;
/* 0x08048790       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x080487b0      16 */ /* unknown */ void 	atexit;
/* 0x080487c0      16 */ /* unknown */ void 	__fpstart;
/* 0x080487d0      16 */ /* unknown */ void 	exit;
/* 0x080487e0      16 */ /* unknown */ void 	scanf;
/* 0x080487f0      16 */ /* unknown */ void 	printf;
/* 0x08048800      16 */ /* unknown */ void 	malloc;
/* 0x08048810      16 */ /* unknown */ void 	free;
/* 0x08048820      16 */ /* unknown */ void 	abort;
/* 0x08048830      16 */ /* unknown */ void 	memset;
/* 0x08048840     111 */ /* unknown */ void 	_start;
/* 0x080488af       1 */ /* unknown */ void 	_mcount;
/* 0x080488b0      64 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080488f0      24 */ /* unknown */ void 	fini_dummy;
/* 0x08048908      64 */ /* unknown */ void 	frame_dummy;
/* 0x08048948     272 */ /* unknown */ void 	main;
/* 0x08048a58      60 */ /* unknown */ void 	decode_uleb128;
/* 0x08048a94      92 */ /* unknown */ void 	decode_sleb128;
/* 0x08048af0      88 */ /* unknown */ void 	fde_insert;
/* 0x08048b48      48 */ /* unknown */ void 	count_fdes;
/* 0x08048b78     144 */ /* unknown */ void 	add_fdes;
/* 0x08048c08     236 */ /* unknown */ void 	frame_init;
/* 0x08048cf4     160 */ /* unknown */ void 	find_fde;
/* 0x08048d94     280 */ /* unknown */ void 	extract_cie_info;
/* 0x08048eac     912 */ /* unknown */ void 	execute_cfa_insn;
/* 0x0804923c      72 */ /* unknown */ void 	__register_frame_info;
/* 0x08049284      68 */ /* unknown */ void 	__register_frame_info_table;
/* 0x080492c8      88 */ /* unknown */ void 	__deregister_frame_info;
/* 0x08049320     364 */ /* unknown */ void 	__frame_state_for;
/* 0x0804948c      52 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080494c0      32 */ /* unknown */ void 	init_dummy;
/* 0x080494e0      48 */ /* unknown */ void 	_init;
/* 0x08049510       1 */ /* unknown */ void 	_fini;
/* 0x08049524       4 */ /* unknown */ void 	_lib_version;
/* 0x080495c0       0 */ /* unknown */ void 	_etext;
/* 0x0804a5c0       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804a5f4       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804a68c       0 */ /* unknown */ void 	p.2;
/* 0x0804a690       0 */ /* unknown */ void 	force_to_data;
/* 0x0804a690       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804a694       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804a698       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804a69c       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804a6a0       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x0804a7b0       0 */ /* unknown */ void 	__FRAME_BEGIN__;
/* 0x0804acac       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804acb0       0 */ /* unknown */ void 	_edata;
/* 0x0804acb0      24 */ /* unknown */ void 	object.7;
/* 0x0804acc8       4 */ /* unknown */ void 	objects;
/* 0x0804accc       4 */ /* unknown */ void 	_environ;
/* 0x0804accc       4 */ /* unknown */ void 	environ;
/* 0x0804acd0       0 */ /* unknown */ void 	_end;
/* 0x0804acd0       0 */ /* unknown */ void 	_END_;
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
