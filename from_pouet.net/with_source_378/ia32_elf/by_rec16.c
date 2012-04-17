/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_378/ia32_elf/subject.exe'
 */

/*	Procedure: 0x080486E2 - 0x08048705
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080486E2()
{



    eax = *(ecx + 0x804a6e6);
    ebx = *(ecx + 0x804a48e) + eax;
    eax = ( *ebx & 255) << 2;
    return(*( *(eax + 0x804a5e2) + *(ecx + 0x87cab98)));
}

/*	Procedure: 0x08048706 - 0x08048713
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048706()
{



    ebx = 15876;
    asm("cdq");
    edx = (ebx / ebx % ebx / ebx << 2) + esi;
}

/*	Procedure: 0x08048714 - 0x080487CA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048714()
{



    asm("pusha");
    asm("std");
    ecx = 60;
    esi = 0x804a6bc;
    *L0804A6A0 = *L0804A6B8 >> 1;
    edi = 0x804a6a4;
    asm("loop 0x8048725");
    asm("cld");
    edi = 0x804ab70;
    ebx = 0;
    ebp = 168;
    ecx = 65536;
    eax = 0;
    asm("cdq");
    ebp = ebp / ebp;
    edx = ebp % ebp;
    eax = 32767;
    if(!(al = al & 1)) {
        eax = ~L00007FFF;
    }
    *edi = eax;
    edi = edi + 4;
    eax = ebx;
    asm("cdq");
    ebp = ebp / ebp;
    eax = ebp % ebp << 16;
    asm("cdq");
    edx = ebp / ebp % ebp / ebp;
    *(edi + 524284) = eax - 32768;
    *(edi + 786428) = (L0804890C() & 65535) - 32768;
    asm("fsin");
    *L0804A712 = st0 * 32767;
    *L0804A71E = 0 + 0.0374;
    *(edi + 262140) = *L0804A712;
    ebx = ebx + 1;
    asm("loop 0x8048740");
    ebp = 0x804a200;
    eax = L080487CB(9);
    ebp = ebp + 32;
    asm("loop 0x80487ba");
    asm("popa");
}

/*	Procedure: 0x080487CB - 0x0804888B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080487CB()
{



    *L0804AB40 = 0;
    *L0804AB44 = 0;
    *L0804AB48 = 0;
    *L0804AB4C = 0;
    *L0804AB50 = 0;
    *L0804AB60 = 0;
    *L0804AB64 = 1 << 16;
    eax = *(ebp + 28) << 16;
    asm("cdq");
    edx = 168000 / 168000 % 168000 / 168000;
    *L0804AB68 = eax;
    eax = *(ebp + 24);
    == ? L0804882f : ;
    ebx = 103;
    asm("cdq");
    *L0804AB40 = eax;
    eax = ebx / ebx % ebx / ebx;
    edx = 41698711;
    asm("mul edx");
    *L0804AB44 = eax;
    goto L08048839;
    *L0804AB48 = 42;
L08048839:
    edi = ( *ebp << 18) + 0x82cab70;
    esi = ( *(ebp + 4) << 18) + 0x804ab70;
    eax = 2097152;
    ecx = *(ebp + 8);
    asm("cdq");
    edx = ecx / ecx % ecx / ecx;
    L0804888C();
    *L0804AB54 = ~( *L0804AB54);
    ecx = *(ebp + 12);
    L08048891();
    eax = 0;
    ecx = *(ebp + 16);
    L0804888C();
    ecx = *(ebp + 20);
    eax = *L0804AB50;
    asm("cdq");
    edx = ecx / ecx % ecx / ecx;
    eax = ~eax;
    return(L0804888C());
}

/*	Procedure: 0x0804888C - 0x08048890
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804888C()
{



    *L0804AB54 = eax;
}

/*	Procedure: 0x08048891 - 0x0804890B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048891()
{



    if(ecx == 0) {
        return;
    }
    *L0804AB60 = *L0804AB60 + *L0804AB64;
    *L0804AB64 = *L0804AB64 + *L0804AB68;
    eax = *(esi + ( *L0804AB60 >> 16 << 2));
    ebx = *L0804AB50 >> 10;
    asm("imul ebx");
    ebx = eax >> 11;
    eax = *((( *L0804AB48 & 65535) << 2) + 0x808ab70) >> 4;
    asm("imul ebx");
    *edi = eax >> 12;
    edi = edi + 4;
    *L0804AB50 = *L0804AB50 + *L0804AB54;
    *L0804AB4C = *L0804AB4C + *L0804AB44;
    eax = *L0804AB40;
    asm("adc [0x804ab48],eax");
    asm("loop 0x8048891");
}

/*	Procedure: 0x0804890C - 0x08048922
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804890C()
{



    eax = *L0804A626 + -216562994 ^ -216562994;
    asm("ror eax,1");
    *L0804A626 = eax;
}

/*	Procedure: 0x08048923 - 0x0804892F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048923()
{



}

/*	Procedure: 0x08048930 - 0x080489C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    L08048714();
    (save)49 & 255;
    SDL_Init();
    (save)0;
    (save)0x804a734;
    SDL_OpenAudio();
    (save)-2147483645;
    eax = 32 & 255;
    (save)eax;
    ax = 480;
    (save)480;
    (save)640;
    SDL_SetVideoMode();
    L080491C0();
    (save)0;
    SDL_ShowCursor();
    SDL_PauseAudio();
    *L087CABE8 = SDL_GetTicks();
    do {
        (save)SDL_GetTicks() - *L087CABE8;
        L08048E99();
        (restore)eax;
        SDL_GL_SwapBuffers();
        if(*L0804A74C != 0) {
            break;
        }
        (save)0x87cabec;
        SDL_PollEvent();
        (restore)eax;
    } while(*L087CABEC != 2);
    SDL_Quit();
    eax = 1 & 255;
    ebx = 0;
    asm("int 0x80");
}

/* DEST BLOCK NOT FOUND: 08048a24 -> 08048a30 */
/*	Procedure: 0x080489C8 - 0x08048A30
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489C8()
{



    esi = 0;
    ebx = 0;
    do {
        cx = *(edi + ebx * 2);
        (save)ecx;
        esp = esp + 4;
        *(ebx * 4 + 0x87d55e0) = *esp * 8.60958e-43;
        edx = cx;
        if(edx < 0) {
            edx = ~edx;
        }
        if(edx >= esi) {
            esi = edx;
        }
        ebx = ebx + 1;
    } while(ebx <= 1023);
    (save)esi;
    esp = esp + 4;
    (fsave) *esp * 0.000170898;
    asm("faddp st1");
    *L087D55C0 = 32 * 0;
    if(*L087D55C4 > 47) {
        eax = 0;
        *L087D55C0 = 0;
    }
}

/*	Procedure: 0x08048A31 - 0x08048B1D
 *	Argument size: -4
 *	Local size: 16
 *	Save regs size: 0
 */

L08048A31(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    eax = 0;
    do {
        (fsave)(A8 + st0) * A8;
        (fsave)A8 * st1;
        asm("fst dword [ebp-0x4]");
        (fsave)A8 * st0 * -2 - st1;
        asm("faddp st2");
        asm("fxch");
        (fsave)1 * *(Ac + eax * 4 + 12);
        (fsave)Vfffffffc * A8;
        asm("faddp st3");
        asm("fxch st2");
        asm("faddp st1");
        asm("fxch");
        asm("fsubrp st2");
        asm("fxch");
        (fsave)st0 * 3.05176e-05 * *(Ac + eax * 4 + 24) + A8;
        Vfffffff8 = 1 - 0;
        (fsave)1 + 0;
        asm("fst dword [ebp-0xc]");
        (fsave)(1 - 0) * st1;
        (fsave) *(Ac + eax * 4 + 12) - *(Ac + eax * 4);
        asm("fmulp st1");
        (fsave)1 - 0;
        (fsave)1 + 0;
        (fsave)st1 * st1;
        (fsave)( *(Ac + eax * 4 + 24) - *(Ac + eax * 4 + 12)) * st1;
        asm("fxch st4");
        asm("faddp st1");
        (fsave)Vfffffff8;
        asm("fmulp st1");
        asm("fmulp st5");
        (fsave)1.81899e-12 * st5;
        asm("fxch st6");
        asm("faddp st5");
        (fsave)1;
        asm("fsubr dword [ebp+0x8]");
        asm("fmulp st1");
        asm("fxch st4");
        asm("fmulp st1");
        asm("fmulp st2");
        (fsave)Vfffffffc * Vfffffff4;
        (fsave) *(Ac + eax * 4 + 36) - *(Ac + eax * 4 + 24);
        asm("fmulp st1");
        asm("faddp st1");
        asm("fmulp st1");
        asm("fmulp st1");
        asm("fmulp st2");
        asm("faddp st1");
        *(A10 + eax * 4) = Vfffffff8;
        eax = eax + 1;
    } while(eax <= 1);
}

/*	Procedure: 0x08048B1E - 0x08048E98
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 12
 */

L08048B1E(A8, A10, A14)
/* unknown */ void  A8;
/* unknown */ void  A10;
/* unknown */ void  A14;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    esp = esp - 12;
    esi = 0;
    *(ebp - 16) = 0;
    do {
        edi = 0;
        do {
            (save)eax;
            (save)0x87d4864;
            ebx = *(ebp - 16) + *(ebp - 16) * 2 << 2;
            (save)ebx + 0x804a800;
            (save)edi;
            asm("fst dword [ebp-0x14]");
            *esp = 0.0078125 * *esp;
            L08048A31();
            (save)0x87d4870;
            (save)ebx + 0x804a860;
            (save) *(ebp - 20);
            L08048A31();
            edx = 0;
            do {
                eax = esi + esi * 2 + edx;
                asm("fsubr dword [0x804a8e4]");
                (fsave)A8 * *(edx * 4 + 0x87d4864);
                asm("faddp st1");
                *(eax * 4 + 0x87d48a0) = A8 * *(edx * 4 + 0x87d4870);
                edx = edx + 1;
            } while(edx <= 2);
            eax = esi + esi * 2;
            (save)esi;
            esp = esp + 4;
            asm("fsin");
            *(eax * 4 + 0x87d48a8) = 3.56522e-12 * *esp * 8.72783e-21;
            esi = esi + 1;
            edi = edi + 1;
        } while(edi <= 15);
        *(ebp - 16) = *(ebp - 16) + 1;
    } while(*(ebp - 16) <= 3);
    *(ebp - 16) = 0;
    eax = esi - 1;
    do {
        ebx = *(ebp - 16) + *(ebp - 16) * 2 << 2;
        *L087D487C = *(ebx + 0x87d48b4) - *(ebx + 0x87d48a8);
        *L087D4880 = *(ebx + 0x87d48a0) - *(ebx + 0x87d48ac);
        *L087D4884 = *(ebx + 0x87d48b0) - *(ebx + 0x87d48a4);
        (fsave) *(ebp - 16);
        (fsave)st0 * 1.81899e-12;
        (fsave)0;
        (fsave)9.76563e-05;
        asm("faddp st3");
        asm("fxch st2");
        asm("fsin");
        (fsave)st1 * st1 * 0;
        (fsave)st3 * 2.04636e-13;
        asm("fxch st2");
        asm("fmulp st1");
        asm("fmulp st3");
        asm("fxch st2");
        *(ebx + 0x87d48a4) = 1 + st1 + *(ebx + 0x87d48a4);
        asm("fxch");
        asm("faddp st1");
        asm("fsin");
        asm("fxch st2");
        asm("faddp st1");
        asm("fmulp st1");
        *(ebx + 0x87d48a8) = st2 * 1.972e-24 * 7.70312e-27 * 0 * 0.0046875 + *(ebx + 0x87d48a8);
        esp = esp - 12;
        (save)2896;
        *L087d558c();
        *esp = 2977;
        *L087d558c();
        *esp = 2929;
        *L087d558c();
        A14 = st0 * 0.001875;
        A10 = st0 * 0.00109375;
        *esp = 0 * 0.0140625;
        *L087d5580();
        *esp = 0x87d487c;
        *L087d5598();
        *esp = 9;
        *L087d5564();
        (restore)ecx;
        (restore)edi;
        *esp = *(ebx + 0x87d48a4) * 1.30149e-37;
        (save) *(ebx + 0x87d48a8) ^ -2147483648;
        (save) *(ebx + 0x87d48a0);
        *L087d556c();
        (restore)eax;
        (restore)edx;
        *esp = *(ebx + 0x87d48b0) * 1.30149e-37;
        (save) *(ebx + 0x87d48b4) ^ -2147483648;
        *L087d556c( *(ebx + 0x87d48ac));
        (restore)edi;
        *esp = *(ebx + 0x87d48b0) * 1.30149e-37;
        (save) *(ebx + 0x87d48b4);
        (save) *(ebx + 0x87d48ac);
        *L087d556c();
        (restore)eax;
        (restore)edx;
        *esp = *(ebx + 0x87d48a4) * 1.30149e-37;
        (save) *(ebx + 0x87d48a8);
        (save) *(ebx + 0x87d48a0);
        *L087d556c();
        *L087d5568();
        esp = esp + 12;
        (save)0;
        (save)0;
        (save)0;
        *L087d5580();
        *esp = 2896;
        *L087d5590();
        *esp = 1;
        *L087d5564();
        (restore)ecx;
        (restore)edi;
        *esp = *(ebx + 0x87d48a4) * 1.30149e-37;
        (save) *(ebx + 0x87d48a8) ^ -2147483648;
        (save) *(ebx + 0x87d48a0);
        *L087d556c();
        (restore)eax;
        (restore)edx;
        *esp = *(ebx + 0x87d48b0) * 1.30149e-37;
        (save) *(ebx + 0x87d48b4) ^ -2147483648;
        *L087d556c( *(ebx + 0x87d48ac));
        (restore)edi;
        *esp = *(ebx + 0x87d48b0) * 1.30149e-37;
        (save) *(ebx + 0x87d48b4);
        (save) *(ebx + 0x87d48ac);
        *L087d556c();
        (restore)eax;
        (restore)edx;
        *esp = *(ebx + 0x87d48a4) * 1.30149e-37;
        (save) *(ebx + 0x87d48a8);
        (save) *(ebx + 0x87d48a0);
        *L087d556c();
        *L087d5568();
        esp = esp + 16;
        *(ebp - 16) = *(ebp - 16) + 1;
        eax = esi - 1;
    } while(*(ebp - 16) < eax);
}

/*	Procedure: 0x08048E99 - 0x080491BA
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 12
 */

L08048E99(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    esp = esp - 12;
    (save)A8;
    esp = esp + 4;
    *L087D55C8 = *esp;
    asm("fnstcw [ebp-0xe]");
    ax = *(ebp - 14);
    *(ebp - 16) = 12;
    asm("fldcw [ebp-0x10]");
    *L087D55C4 = (3.8147e-07 * *L0804A72E - 1.19209e-07) * 5.82077e-12;
    asm("fldcw [ebp-0xe]");
    if(*L087D55C4 > 58) {
        *L0804A74C = 1;
    }
    (save)A8;
    esp = esp + 4;
    asm("fldcw [ebp-0x10]");
    *(ebp - 20) = 0.0059375 * *esp;
    asm("fldcw [ebp-0xe]");
    eax = *(ebp - 20);
    if(eax != *L0804A8B4) {
        *L0804A8B4 = eax;
        ebx = 0;
        do {
            if(*L087D55C4 < *(ebx + ebx * 8 + 0x804a769)) {
                goto L08048f2f;
            }
            ebx = ebx + 1;
        } while(ebx <= 15);
        goto L08048f70;
L08048f2f:
        ecx = 1;
        do {
            edx = 0x87d4840;
            (fsave)2.06795e-26;
            (fsave) *(0x87d4840 + ecx * 4);
            asm("fmulp st1");
            eax = ebx + ebx * 8;
            (save) *(ecx + eax + 0x804a760);
            esp = esp + 4;
            asm("faddp st1");
            *(edx + ecx * 4) = *esp * 6.71089e+07;
            ecx = ecx + 1;
        } while(ecx <= 9);
L08048f70:
        esi = 1065353216;
        (save)1065353216;
        esp = esp - 12;
        asm("fst dword [esp+0x8]");
        asm("fst dword [esp+0x4]");
        *esp = 0;
        *L087d5578();
        *esp = 16640;
        *L087d557c();
        *esp = 5889;
        *L087d5570();
        *L087d5574();
        (save)1083292672;
        (save)0;
        (save)1065646817;
        (save)1202590843;
        (save)1065269329;
        (save)-343597384;
        (save)-1082214319;
        (save)-343597384;
        (save)1065646817;
        (save)1202590843;
        (save)-1081836831;
        (save)1202590843;
        *L087d55a0();
        esp = esp + 52;
        (save)5888;
        *L087d5570();
        *L087d5574();
        esp = esp + 12;
        (save) *L087D4854;
        ebx = 0;
        (save)0;
        (save)0;
        *L087d5588();
        (save)0;
        (save)0;
        (save)esi;
        asm("fchs");
        esp = esp - 4;
        *esp = 0 * 0.125;
        *L087d5584();
        asm("fst dword [0x87d5560]");
        esp = esp + 32;
        (save)esi;
        (save)ebx;
        (save)ebx;
        esp = esp - 4;
        *esp = 4.14615e-23 * 0 + 0;
        eax = *L087d5584();
        esp = esp + 16;
        if(*L087D55C4 <= 47) {
            esp = esp - 12;
            (save)2896;
            *L087d5590();
            *esp = 1077936128;
            *L087d559c();
            esi = 0;
            esp = esp + 16;
            do {
                esp = esp - 12;
                (save)3;
                *L087d5564();
                ebx = 0;
                esp = esp + 16;
                do {
                    (save)ebx;
                    esp = esp - 12;
                    asm("fst dword [ebp-0x18]");
                    asm("fsin");
                    asm("fsubr dword [0x804a8e4]");
                    asm("fst dword [esp+0x8]");
                    asm("fst dword [esp+0x4]");
                    *esp = *esp * 6.46235e-27;
                    *L087d5580();
                    esp = esp + 12;
                    (save)-1097229926;
                    (save) *(ebx * 4 + 0x87d55e0);
                    esp = esp - 4;
                    *esp = *(ebp - 24) * 7.64797e+35 - 1.81899e-12 + st0;
                    *L087d556c();
                    esp = esp + 16;
                    ebx = ebx + 1;
                } while(ebx <= 1023);
                *L087d5568();
                eax = *L087d5584(1119092736, 0, 0, 1065353216);
                esi = esi + 1;
            } while(esi <= 1);
        }
        (save)eax;
        (save)0x804a8b8;
        (save)4608;
        (save)16384;
        *L087d5594();
        *esp = 16384;
        *L087d558c();
        *esp = 2903;
        *L087d558c();
        (save)1065353216;
        (save)0;
        (save)0;
        (save)1097859072;
        *L087d5584();
        ebx = 0;
        esp = esp + 32;
        do {
            (save)1065353216;
            (save)0;
            (save)0;
            (save)1106247680;
            *L087d5584();
            *esp = A8;
            asm("fsin");
            *esp = 0.0046875 * *esp * 1.81899e-12 + 1.81899e-12;
            eax = L08048B1E();
            esp = esp + 16;
            ebx = ebx + 1;
        } while(ebx <= 11);
    }
}

/*	Procedure: 0x080491BB - 0x080491BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080491BB()
{



}

/*	Procedure: 0x080491C0 - 0x080491F2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080491C0()
{



    asm("pusha");
    (save)0;
    (save)0x804a93c;
    ebp = dlopen();
    (restore)eax;
    (restore)eax;
    edi = 0x87d5564;
    for(esi = 0x804a945; 1; (restore)eax) {
        asm("lodsd");
        if(eax == 0) {
            break;
        }
        *edi = dlsym(ebp, eax);
        edi = edi + 4;
        (restore)eax;
    }
    asm("popa");
}

extern /* addr: 080491F3 */  /*	Procedure: 0x080491F3 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080491F3()
/* address  size  */
/* 0x08048450       1 */ /* unknown */ void 	SDL_Quit;
/* 0x08048460       1 */ /* unknown */ void 	dlsym;
/* 0x08048470       1 */ /* unknown */ void 	SDL_PauseAudio;
/* 0x08048480       1 */ /* unknown */ void 	SDL_GetTicks;
/* 0x08048490       1 */ /* unknown */ void 	SDL_OpenAudio;
/* 0x080484a0       1 */ /* unknown */ void 	SDL_GL_SwapBuffers;
/* 0x080484b0       1 */ /* unknown */ void 	SDL_Init;
/* 0x080484c0       1 */ /* unknown */ void 	SDL_PollEvent;
/* 0x080484d0       1 */ /* unknown */ void 	SDL_ShowCursor;
/* 0x080484e0       1 */ /* unknown */ void 	SDL_SetVideoMode;
/* 0x080484f0       1 */ /* unknown */ void 	dlopen;
/* 0x08048930       0 */ /* unknown */ void 	__entry_point__;
/* 0x0804aa34       1 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804aaec       1 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804ab24       0 */ /* unknown */ void 	__bss_start;
/* 0x0804ab24       1 */ /* unknown */ void 	_edata;
/* 0x087d65e0       1 */ /* unknown */ void 	_end;
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
option: -usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
