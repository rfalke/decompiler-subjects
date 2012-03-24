/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe'
 */

stack space not deallocated on return
/*	Procedure: 0x00401000 - 0x004010B8
 *	Argument size: 16
 *	Local size: 28
 *	Save regs size: 4
 */

L00401000(A30, A38, A44, A58)
/* unknown */ void  A30;
/* unknown */ void  A38;
/* unknown */ void  A44;
/* unknown */ void  A58;
{
	/* unknown */ void  esi;



    esi = A44;
    (save)edi;
    (save)100;
    (save)0x4054f4;
    (save)103;
    (save)esi;
    *__imp__LoadStringA();
    (save)100;
    (save)0x405490;
    (save)109;
    (save)esi;
    *__imp__LoadStringA();
    (save)esi;
    L004010C0();
    (save)A58;
    (save)esi;
    eax = L00401150();
    esp = esp + 12;
    if(eax == 0) {
        (restore)edi;
        return;
    }
    (save)109;
    (save)esi;
    edi = __imp__GetMessageA;
    (save)0;
    (save)0;
    (save)0;
    (save) & A30;
    esi = *__imp__LoadAcceleratorsA();
    if(*__imp__GetMessageA() != 0) {
        (save)ebx;
        ebx = __imp__TranslateAcceleratorA;
        (save)ebp;
        ebp = __imp__TranslateMessage;
        do {
            (save) & A30;
            (save)esi;
            (save)A30;
            if(*ebx() == 0) {
                (save) & A30;
                *ebp();
                (save) & A30;
                *__imp__DispatchMessageA();
            }
            (save)0;
            (save)0;
            (save)0;
            (save) & A38;
        } while(*edi() != 0);
        (restore)ebp;
        (restore)ebx;
    }
    (restore)edi;
    esp = esp + 28;
    return(A30);
}

/*	Procedure: 0x004010B9 - 0x004010BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004010B9()
{



}

stack space not deallocated on return
/*	Procedure: 0x004010C0 - 0x00401148
 *	Argument size: 52
 *	Local size: 48
 *	Save regs size: 0
 */

L004010C0(A34, A3c, A40, A44, A48, A4c, A50, A54, A5c, A60, A64)
/* unknown */ void  A34;
/* unknown */ void  A3c;
/* unknown */ void  A40;
/* unknown */ void  A44;
/* unknown */ void  A48;
/* unknown */ void  A4c;
/* unknown */ void  A50;
/* unknown */ void  A54;
/* unknown */ void  A5c;
/* unknown */ void  A60;
/* unknown */ void  A64;
{



    eax = A64;
    (save)esi;
    esi = __imp__LoadIconA;
    (save)107;
    (save)eax;
    A3c = 48;
    A40 = 3;
    A44 = 0x4011b0;
    A48 = 0;
    A4c = 0;
    A50 = eax;
    (save)32512;
    (save)0;
    A54 = *__imp__LoadIconA();
    A50 = *__imp__LoadCursorA();
    (save)108;
    (save)A48;
    A5c = 6;
    A60 = 109;
    A64 = 0x405490;
    eax = *esi();
    A60 = eax;
    (restore)esi;
    return(*__imp__RegisterClassExA( & A34));
}

/*	Procedure: 0x00401149 - 0x0040114F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401149()
{



}

stack space not deallocated on return
/*	Procedure: 0x00401150 - 0x004011A7
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00401150(A4, Ac)
/* unknown */ void  A4;
/* unknown */ void  Ac;
{



    eax = A4;
    *L00405558 = eax;
    eax = *__imp__CreateWindowExA(0, 0x405490, 0x4054f4, 13565952, -2147483648, 0, -2147483648, 0, 0, 0, eax, 0, esi);
    esi = eax;
    if(esi == 0) {
        (restore)esi;
        return;
    }
    *__imp__ShowWindow();
    *__imp__UpdateWindow(esi, esi, Ac);
    (restore)esi;
    return(1);
}

stack space not deallocated on return
/*	Procedure: 0x004011A8 - 0x00401304
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

L004011A8(Ac, A18, A1c, A50, A64, A68, Ab8, Abc, Ac0, Ac4)
/* unknown */ void  Ac;
/* unknown */ void  A18;
/* unknown */ void  A1c;
/* unknown */ void  A50;
/* unknown */ void  A64;
/* unknown */ void  A68;
/* unknown */ void  Ab8;
/* unknown */ void  Abc;
/* unknown */ void  Ac0;
/* unknown */ void  Ac4;
{



    esp = esp - 180;
    (save)100;
    (save) & A50;
    (save)106;
    (save) *L00405558;
    *__imp__LoadStringA();
    ecx = Abc;
    if(!(eax = ecx - 2)) {
        if(!(eax = eax - 13)) {
            if(!(eax = eax - 258)) {
                (save)Ac4;
                (save)Ac0;
                (save)ecx;
                (save)Ac4;
                esp = esp + 180;
                return(*__imp__DefWindowProcA());
            }
            ecx = Ac0;
            if(!(eax = (ecx & 65535) - 104)) {
                if(!(eax = eax - 1)) {
                    (save)Ac4;
                    (save)ecx;
                    (save)273;
                    (save)Ab8;
                    esp = esp + 180;
                    return(*__imp__DefWindowProcA());
                }
                (save)Ab8;
                *__imp__DestroyWindow();
                esp = esp + 180;
                return(0);
            }
            (save)0;
            (save)0x401310;
            (save)Ab8;
            (save)103;
            (save) *L00405558;
            *__imp__DialogBoxParamA();
            esp = esp + 180;
            return(0);
        }
        (save)ebx;
        (save)esi;
        esi = Ac0;
        (save)edi;
        (save) & A18;
        (save)esi;
        ebx = *__imp__BeginPaint();
        (save) & Ac;
        (save)esi;
        *__imp__GetClientRect();
        (save)1;
        (save) & Ac;
        edi = & A64;
        ecx = ecx | -1;
        eax = 0;
        asm("repne scasb");
        (save) !ecx - 1;
        (save) & A68;
        (save)ebx;
        *__imp__DrawTextA();
        (save) & A1c;
        (save)esi;
        *__imp__EndPaint();
        (restore)edi;
        (restore)esi;
        (restore)ebx;
        esp = esp + 180;
        return(0);
    }
    (save)0;
    *__imp__PostQuitMessage();
    esp = esp + 180;
    return(0);
}

/*	Procedure: 0x00401305 - 0x0040134B
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

L00401305(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    if(!(Ac = A8 - 272)) {
        if((Ac = Ac - 1) || ax != 1 && ax != 2) {
            return(0);
        }
        *__imp__EndDialog(A4, Ac & 65535);
    }
    return(1);
}

/*	Procedure: 0x0040134C - 0x0040134F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040134C()
{



}

stack space not deallocated on return
/*	Procedure: 0x00401350 - 0x0040143A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    (save)ebp;
    ebp = esp;
    (save)-1;
    (save)4210928;
    (save)0x401e84;
    (save) *%fs:0x0];
    *%fs:0x0] = esp;
    esp = esp - 88;
    (save)ebx;
    (save)esi;
    (save)edi;
    *(ebp - 24) = esp;
    edx = *__imp__GetVersion() & 255;
    *L00405580 = edx;
    ecx = eax & 255;
    *L0040557C = ecx;
    *L00405578 = ( *L0040557C << 8) + *L00405580;
    *L00405574 = eax >> 16;
    esi = 0;
    if(L00401D50(0) == 0) {
        L0040146B(28);
    }
    *(ebp - 4) = esi;
    L00401BA5();
    *L00405A78 = *__imp__GetCommandLineA();
    *L0040555C = L00401A73();
    L00401826();
    L0040176D();
    L0040148F();
    *(ebp - 48) = esi;
    (save)ebp - 92;
    *__imp__GetStartupInfoA();
    *(ebp - 100) = L00401715();
    eax = !( *(ebp - 48) & 1) ? *(ebp - 44) & 65535 : 10;
    (save)eax;
    eax = L00401000( *__imp__GetModuleHandleA(), esi, esi, *(ebp - 100));
    *(ebp - 96) = eax;
    (save) *(ebp - 96);
    L004014BC();
    eax = *(ebp - 20);
    ecx = *( *eax);
    *(ebp - 104) = ecx;
    return(L00401591( *(ebp - 104), eax));
}

/*	Procedure: 0x0040143B - 0x00401445
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040143B()
{



    esp = *(ebp - 24);
    (save) *(ebp - 104);
    L004014CD();
}

/*	Procedure: 0x00401446 - 0x0040146A
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401446(A4)
/* unknown */ void  A4;
{



    if(*L00405564 == 1) {
        L00401F5C();
    }
    L00401F95();
    return(*L00405030(255, A4));
}

stack space not deallocated on return
/*	Procedure: 0x0040146B - 0x0040148E
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L0040146B(A4)
/* unknown */ void  A4;
{



    if(*L00405564 == 1) {
        L00401F5C();
    }
    L00401F95(A4);
    return(*__imp__ExitProcess(255));
}

/*	Procedure: 0x0040148F - 0x004014BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040148F()
{



    eax = *L00405A74;
    if(eax != 0) {
        *eax();
    }
    L00401577();
    return(L00401577(0x405000, 0x405004, 0x405008, 0x405010));
}

/*	Procedure: 0x004014BC - 0x004014CC
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004014BC(A4)
/* unknown */ void  A4;
{



    return(L004014DE(A4, 0, 0));
}

/*	Procedure: 0x004014CD - 0x004014DD
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004014CD(A4)
/* unknown */ void  A4;
{



    return(L004014DE(A4, 1, 0));
}

/*	Procedure: 0x004014DE - 0x00401576
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 4
 */

L004014DE(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  edi;



    edi = 1;
    if(*L004055B0 == 1) {
        (save)A8;
        (save) *__imp__GetCurrentProcess();
        *__imp__TerminateProcess();
    }
    (save)ebx;
    *L004055AC = edi;
    *L004055A8 = A10;
    if(Ac != 0) {
        goto L09357f08;
    }
    eax = *L00405A70;
    if(eax != 0) {
        (save)esi;
        esi = *L00405A6C - 4;
        if(esi >= eax) {
L0040152a:
            eax = *esi;
            if(eax != 0) {
                *eax();
            }
            esi = esi - 4;
            if(esi >= *L00405A70) {
                goto L0040152a;
            }
        }
        (restore)esi;
    }
    L00401577(0x405014, 0x405018);
    eax = L00401577(0x40501c, 0x405020);
    (restore)ebx;
    if(ebx == 0) {
        *L004055B0 = edi;
        eax = *__imp__ExitProcess(A8);
    }
}

/*	Procedure: 0x00401577 - 0x00401590
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 4
 */

L00401577(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  esi;



    for(esi = A8; esi < Ac; esi = esi + 4) {
        eax = *esi;
        if(eax != 0) {
            eax = *eax();
        }
    }
}

/*	Procedure: 0x00401591 - 0x004016D1
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 4
 */

L00401591(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;



    eax = L004016D2(A8);
    if(eax != 0) {
        ebx = *(eax + 8);
        if(ebx == 0) {
            goto L004016c6;
        }
        if(ebx == 5) {
            *(eax + 8) = 0;
            eax = 1;
        } else {
            if(ebx != 1) {
                A8 = *L004055B4;
                *L004055B4 = Ac;
                ecx = *(eax + 4);
                if(ecx == 8) {
                    ecx = *L004050B0;
                    edx = *L004050B4 + ecx;
                    (save)esi;
                    if(ecx < edx) {
                        esi = ecx + ecx * 2;
                        edx = edx - ecx;
                        esi = esi * 4 + 0x405040;
                        do {
                            *esi = 0;
                            esi = esi + 12;
                        } while(edx = edx - 1);
                    }
                    eax = *eax;
                    esi = *L004050BC;
                    if(eax == -1073741682) {
                        *L004050BC = 131;
                    } else {
                        if(eax == -1073741680) {
                            *L004050BC = 129;
                        } else {
                            if(eax == -1073741679) {
                                *L004050BC = 132;
                            } else {
                                if(eax == -1073741677) {
                                    *L004050BC = 133;
                                } else {
                                    if(eax == -1073741683) {
                                        *L004050BC = 130;
                                    } else {
                                        if(eax == -1073741681) {
                                            *L004050BC = 134;
                                        } else {
                                            if(eax == -1073741678) {
                                                *L004050BC = 138;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    (save) *L004050BC;
                    *ebx(8);
                    *L004050BC = esi;
                    (restore)ecx;
                    (restore)esi;
                } else {
                    *(eax + 8) = 0;
                    *ebx(ecx);
                }
                eax = A8;
                *L004055B4 = eax;
            }
            eax = eax | -1;
        }
    } else {
L004016c6:
        eax = *__imp__UnhandledExceptionFilter(Ac);
    }
}

/* DEST BLOCK NOT FOUND: 00401710 -> 00401714 */
/*	Procedure: 0x004016D2 - 0x00401714
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004016D2(A4)
/* unknown */ void  A4;
{



    ecx = *L004050B8;
    (save)esi;
    eax = 0x405038;
    if(*L00405038 != A4) {
        esi = (ecx + ecx * 2) * 4 + 0x405038;
        do {
            eax = eax + 12;
            if(eax >= esi) {
                break;
            }
        } while(*eax != A4);
    }
    ecx = ecx + ecx * 2;
    (restore)esi;
    if(eax >= ecx * 4 + 0x405038 || *eax != A4) {
        eax = 0;
    }
}

/*	Procedure: 0x00401715 - 0x0040176C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401715()
{



    if(*L00405A68 == 0) {
        L004024EE();
    }
    (save)esi;
    esi = *L00405A78;
    al = *esi;
    if(al == 34) {
        while(1) {
            al = *(esi + 1);
            esi = esi + 1;
            if(al == 34 || al == 0) {
                break;
            }
            if(L004020E8(al & 255) == 0) {
                continue;
            }
            esi = esi + 1;
        }
        if(*esi == 34) {
L00401752:
            esi = esi + 1;
        }
    } else {
        if(al > 32) {
            do {
                esi = esi + 1;
            } while(*esi > 32);
        }
    }
    al = *esi;
    if(al != 0 && al <= 32) {
        goto L00401752;
    }
    eax = esi;
    (restore)esi;
}

/*	Procedure: 0x0040176D - 0x00401825
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0040176D()
{
	/* unknown */ void  ebx;



    ebx = 0;
    (save)esi;
    (save)edi;
    if(*L00405A68 == 0) {
        L004024EE();
    }
    esi = *L0040555C;
    for(edi = 0; 1; esi = esi + L004026B0(esi) + 1) {
        al = *esi;
        if(al == bl) {
            break;
        }
        if(al != 61) {
            edi = edi + 1;
        }
    }
    esi = L00402630(edi * 4 + 4);
    *L00405590 = esi;
    if(esi == ebx) {
        L00401446(9);
    }
    edi = *L0040555C;
    if(*edi != bl) {
        (save)ebp;
        do {
            ebp = L004026B0(edi) + 1;
            if(*edi != 61) {
                eax = L00402630(ebp);
                *esi = eax;
                if(eax == ebx) {
                    L00401446(9);
                }
                (save)edi;
                L00402540( *esi);
                esi = esi + 4;
                (restore)ecx;
            }
            edi = edi + ebp;
        } while(*edi != bl);
        (restore)ebp;
    }
    *L0040555C = ebx;
    *esi = ebx;
    (restore)edi;
    (restore)esi;
    *L00405A64 = 1;
    return(L0040250A( *L0040555C));
}

/*	Procedure: 0x00401826 - 0x004018BE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401826()
{



    (save)ecx;
    (save)ecx;
    (save)ebx;
    ebx = 0;
    (save)esi;
    (save)edi;
    if(*L00405A68 == 0) {
        L004024EE();
    }
    esi = 0x4055b8;
    (save)260;
    (save)0x4055b8;
    (save)ebx;
    *__imp__GetModuleFileNameA();
    eax = *L00405A78;
    *L004055A0 = esi;
    edi = esi;
    if(*eax != bl) {
        edi = eax;
    }
    (save)ebp - 8;
    (save)ebp - 4;
    (save)ebx;
    (save)ebx;
    (save)edi;
    L004018BF();
    eax = *(ebp - 8);
    (save)eax + *(ebp - 4) * 4;
    esi = L00402630();
    esp = esp + 24;
    if(esi == ebx) {
        L00401446(8);
    }
    L004018BF(edi, esi, esi + *(ebp - 4) * 4, ebp - 4, ebp - 8);
    eax = *(ebp - 4) - 1;
    *L00405588 = esi;
    (restore)edi;
    (restore)esi;
    *L00405584 = eax;
    (restore)ebx;
}

/*	Procedure: 0x004018BF - 0x00401A72
 *	Argument size: 20
 *	Local size: 0
 *	Save regs size: 0
 */

L004018BF(A8, Ac, A10, A14, A18)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
/* unknown */ void  A14;
/* unknown */ void  A18;
{



    ecx = A18;
    (save)ebx;
    (save)esi;
    *ecx = 0;
    esi = A10;
    (save)edi;
    edi = Ac;
    *A14 = 1;
    A14 = A8;
    if(edi != 0) {
        *edi = esi;
        edi = edi + 4;
        Ac = edi;
    }
    if(*A14 == 34) {
        while(1) {
            dl = *(A14 + 1);
            A14 = A14 + 1;
            if(dl == 34 || dl == 0) {
                break;
            }
            if(!( *((dl & 255) + 0x405841) & 4)) {
                *ecx = *ecx + 1;
                if(esi != 0) {
                    *esi = *A14;
                    esi = esi + 1;
                    A14 = A14 + 1;
                }
            }
            *ecx = *ecx + 1;
            if(esi == 0) {
                continue;
            }
            *esi = *A14;
            esi = esi + 1;
        }
        *ecx = *ecx + 1;
        if(esi != 0) {
            *esi = 0;
            esi = esi + 1;
        }
        if(*A14 == 34) {
            A14 = A14 + 1;
        }
    } else {
        do {
            *ecx = *ecx + 1;
            if(esi != 0) {
                *esi = *A14;
                esi = esi + 1;
            }
            dl = *A14;
            A14 = A14 + 1;
            if(!( *((dl & 255) + 0x405841) & 4)) {
                *ecx = *ecx + 1;
                if(esi != 0) {
                    bl = *A14;
                    *esi = bl;
                    esi = esi + 1;
                }
                A14 = A14 + 1;
            }
            if(dl == 32) {
                break;
            }
            if(dl == 0) {
                goto L0040196a;
            }
        } while(dl != 9);
        if(dl == 0) {
L0040196a:
            A14 = A14 - 1;
        } else {
            if(esi != 0) {
                *(esi - 1) = 0;
            }
        }
    }
    for(A18 = 0; *A14 != 0; *ecx = *ecx + 1) {
        while(1) {
            dl = *A14;
            if(dl != 32 && dl != 9) {
                break;
            }
            A14 = A14 + 1;
        }
        if(*A14 == 0) {
            break;
        }
        if(edi != 0) {
            *edi = esi;
            edi = edi + 4;
            Ac = edi;
        }
        for(*A14 = *A14 + 1; 1; A14 = A14 + 1) {
            A8 = 1;
            for(ebx = 0; *A14 == 92; ebx = ebx + 1) {
                A14 = A14 + 1;
            }
            if(*A14 == 34) {
                if(!(bl & 1)) {
                    edi = 0;
                    if(A18 != 0) {
                        *(A14 + 1) :: 34;
                        if(!(edx = A14 + 1)) {
                            goto L004019d7;
                        }
                    }
                    A8 = edi;
                    goto L004019de;
L004019d7:
                    A14 = edx;
L004019de:
                    edi = Ac;
                    A18 = 0 & 255;
                }
                ebx = ebx >> 1;
            }
            edx = ebx;
            ebx = ebx - 1;
            if(edx != 0) {
                ebx = ebx + 1;
                do {
                    if(esi != 0) {
                        *esi = 92;
                        esi = esi + 1;
                    }
                    *ecx = *ecx + 1;
                } while(ebx = ebx - 1);
            }
            dl = *A14;
            if(dl == 0 || A18 == 0 && (dl == 32 || dl == 9)) {
                break;
            }
            if(A8 != 0) {
                if(esi == 0) {
                    if(!( *((dl & 255) + 0x405841) & 4)) {
                        A14 = A14 + 1;
                        *ecx = *ecx + 1;
                    }
                } else {
                    if(!( *((dl & 255) + 0x405841) & 4)) {
                        *esi = dl;
                        esi = esi + 1;
                        A14 = A14 + 1;
                        *ecx = *ecx + 1;
                    }
                    *esi = *A14;
                    esi = esi + 1;
                }
                *ecx = *ecx + 1;
            }
        }
        if(esi != 0) {
            *esi = 0;
            esi = esi + 1;
        }
    }
    if(edi != 0) {
        *edi = 0;
    }
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    *A14 = *A14 + 1;
}

stack space not deallocated on return
/*	Procedure: 0x00401A73 - 0x00401BA4
 *	Argument size: 40
 *	Local size: 0
 *	Save regs size: 8
 */

L00401A73(A18, A2c, A3c)
/* unknown */ void  A18;
/* unknown */ void  A2c;
/* unknown */ void  A3c;
{
	/* unknown */ void  ecx;
	/* unknown */ void  ecx;



    eax = *L004056BC;
    (save)A18;
    (save)ebp;
    ebp = __imp__GetEnvironmentStringsW;
    (save)esi;
    (save)edi;
    A18 = 0;
    esi = 0;
    edi = 0;
    if(eax == 0) {
        esi = *__imp__GetEnvironmentStringsW();
        if(esi != A18) {
            *L004056BC = 1;
            goto L00401aca;
        }
        edi = *__imp__GetEnvironmentStrings();
        if(edi == A18) {
            goto L00401b9c;
        }
        *L004056BC = 2;
    } else {
        if(eax == 1) {
L00401aca:
            if(esi == A18) {
                esi = *ebp();
                if(esi == A18) {
                    goto L00401b9c;
                }
            }
            eax = esi;
            if(*esi != bx) {
L00401ae1:
                do {
                    eax = eax + 1 + 1;
                    if(*eax != bx) {
                        goto L00401ae1;
                    }
                    eax = eax + 1 + 1;
                } while(*eax != bx);
            }
            eax = eax - esi;
            edi = __imp__WideCharToMultiByte;
            (save)A18;
            (save)A18;
            eax = (eax >> 1) + 1;
            (save)A18;
            (save)A18;
            (save)eax;
            (save)esi;
            (save)A18;
            (save)A18;
            A3c = eax;
            ebp = *__imp__WideCharToMultiByte();
            if(ebp != A18) {
                eax = L00402630(ebp);
                A18 = eax;
                if(eax != A18) {
                    (save)A18;
                    (save)A18;
                    (save)ebp;
                    (save)eax;
                    (save)A2c;
                    (save)esi;
                    (save)A18;
                    (save)A18;
                    if(*edi() == 0) {
                        L0040250A(A18);
                        A18 = A18;
                    }
                }
            }
            (save)esi;
            *__imp__FreeEnvironmentStringsW();
            eax = A18;
            goto L00401b9e;
        }
        if(eax != 2) {
            goto L00401b9c;
        }
    }
    if(edi == A18) {
        edi = *__imp__GetEnvironmentStrings();
        if(edi == A18) {
            goto L00401b9c;
        }
    }
    eax = edi;
    if(*edi != bl) {
L00401b66:
        do {
            eax = eax + 1;
            if(*eax != bl) {
                goto L00401b66;
            }
            eax = eax + 1;
        } while(*eax != bl);
    }
    ebp = eax - edi + 1;
    esi = L00402630(ebp);
    if(esi == A18) {
        esi = 0;
    } else {
        L00402730(esi, edi, ebp);
    }
    *__imp__FreeEnvironmentStringsA(edi);
    eax = esi;
    goto L00401b9e;
L00401b9c:
    eax = 0;
L00401b9e:
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)A18;
}

stack space not deallocated on return
/*	Procedure: 0x00401BA5 - 0x00401D4F
 *	Argument size: 56
 *	Local size: 68
 *	Save regs size: 16
 */

L00401BA5(A64, A96, A98)
/* unknown */ void  A64;
/* unknown */ void  A96;
/* unknown */ void  A98;
{
	/* unknown */ void  ebx;
	/* unknown */ void  ebp;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    esi = L00402630(256);
    if(esi == 0) {
        L00401446(27);
    }
    *L00405960 = esi;
    *L00405A60 = 32;
    for(eax = esi + 256; esi < eax; eax = *L00405960 + 256) {
        *(esi + 4) = 0;
        *esi = *esi | -1;
        *(esi + 5) = 10;
        esi = esi + 8;
    }
    (save) & A64;
    *__imp__GetStartupInfoA();
    if(A96 != 0) {
        eax = A98;
        if(eax != 0) {
            esi = *eax;
            ebp = eax + 4;
            eax = 2048;
            esi :: 2048;
            if(!(ebx = esi + ebp)) {
                esi = 2048;
            }
            if(*L00405A60 < esi) {
                edi = 0x405964;
                do {
                    eax = L00402630(256);
                    if(eax == 0) {
                        goto L00401c83;
                    }
                    *L00405A60 = *L00405A60 + 32;
                    *edi = eax;
                    for(ecx = eax + 256; eax < ecx; ecx = ecx + 256) {
                        *(eax + 4) = 0;
                        *eax = *eax | -1;
                        *(eax + 5) = 10;
                        ecx = *edi;
                        eax = eax + 8;
                    }
                    edi = edi + 4;
                } while(*L00405A60 < esi);
                goto L00401c89;
L00401c83:
                esi = *L00405A60;
            }
L00401c89:
            edi = 0;
            if(esi > 0) {
                do {
                    eax = *ebx;
                    if(eax != -1) {
                        cl = *ebp;
                        if(!(cl & 1)) {
                            if(cl & 8) {
                                goto L00401cae;
                            }
                            (save)eax;
                            if(*__imp__GetFileType() != 0) {
L00401cae:
                                eax = edi;
                                ecx = edi;
                                eax = eax >> 5;
                                ecx = ecx & 31;
                                eax = *(eax * 4 + 0x405960) + ecx * 8;
                                *eax = *ebx;
                                *(eax + 4) = *ebp;
                            }
                        }
                    }
                    edi = edi + 1;
                    ebp = ebp + 1;
                    ebx = ebx + 4;
                } while(edi < esi);
            }
        }
    }
    ebx = 0;
    do {
        eax = *L00405960;
        *(eax + ebx * 8) :: -1;
        if(esi = eax + ebx * 8) {
            *(esi + 4) = *(esi + 4) | 128;
        } else {
            *(esi + 4) = 129;
            if(ebx != 0) {
                eax = ~(ebx - 1);
                asm("sbb eax,eax");
                eax = eax + -11;
            } else {
                eax = -10;
            }
            (save)eax;
            edi = *__imp__GetStdHandle();
            if(edi == -1) {
                goto L00401d21;
            }
            (save)edi;
            eax = *__imp__GetFileType();
            if(eax == 0) {
                goto L00401d21;
            }
            eax = eax & 255;
            *esi = edi;
            if(eax == 2) {
                goto L00401d21;
            }
            if(eax == 3) {
                *(esi + 4) = *(esi + 4) | 8;
                goto L00401d36;
L00401d21:
                *(esi + 4) = *(esi + 4) | 64;
            }
        }
L00401d36:
        ebx = ebx + 1;
    } while(ebx < 3);
    return(*__imp__SetHandleCount( *L00405A60));
}

stack space not deallocated on return
/*	Procedure: 0x00401D50 - 0x00401D8B
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401D50(A8)
/* unknown */ void  A8;
{



    (save)0;
    (save)4096;
    0 = 0;
    (save)0;
    eax = *__imp__HeapCreate();
    *L00405948 = eax;
    if(eax != 0) {
        if(L00402A65() != 0) {
            goto L00401d88;
        }
        *__imp__HeapDestroy( *L00405948);
    }
    return(0);
L00401d88:
    return(1);
}

/*	Procedure: 0x00401D8C - 0x00401DAB
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 16
 */

L00401D8C(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;
	/* unknown */ void  ebp;
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    return(RtlUnwind(A8, 0x401da4, 0, 0));
}

/* DEST BLOCK NOT FOUND: 00401dbc -> 00401dcd */
/*	Procedure: 0x00401DAC - 0x00401DCD
 *	Argument size: 16
 *	Local size: 0
 *	Save regs size: 0
 */

L00401DAC(A4, A8, A10)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  A10;
{



    eax = 1;
    if(!( *(A4 + 4) & 6)) {
        *A10 = A8;
        eax = 3;
    }
}

/*	Procedure: 0x00401DCE - 0x00401E35
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 12
 */

L00401DCE(A10, A14)
/* unknown */ void  A10;
/* unknown */ void  A14;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vfffffff8;



    (save)A10;
    (save)-2;
    (save)0x401dac;
    (save) *%fs:0x0];
    *%fs:0x0] = esp;
    while(1) {
        eax = A10;
        ebx = *(eax + 8);
        esi = *(eax + 12);
        if(esi == -1 || esi == A14) {
            break;
        }
        esi = esi + esi * 2;
        ecx = *(ebx + esi * 4);
        Vfffffff8 = ecx;
        *(eax + 12) = Vfffffff8;
        if(*(ebx + esi * 4 + 4) == 0) {
            eax = *(ebx + esi * 4 + 8);
            L00401E62(257);
            *(ebx + esi * 4 + 8)();
        }
    }
    (restore) *%fs:0x0];
    esp = esp + 12;
}

/* DEST BLOCK NOT FOUND: 00401e46 -> 00401e58 */
/* DEST BLOCK NOT FOUND: 00401e51 -> 00401e58 */
/*	Procedure: 0x00401E36 - 0x00401E58
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401E36()
{



    eax = 0;
    if(*( *%fs:0x0] + 4) == 0x401dac && *(ecx + 8) == *( *(ecx + 12) + 12)) {
        eax = 1;
    }
}

/* DEST BLOCK NOT FOUND: 00401e60 -> 00401e6c */
/*	Procedure: 0x00401E59 - 0x00401E61
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401E59()
{



    (save)ebx;
    (save)ecx;
    ebx = 0x4050cc;
    goto L00401e6c;
}

/*	Procedure: 0x00401E62 - 0x00401E79
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 8
 */

L00401E62()
{
	/* unknown */ void  ecx;
	/* unknown */ void  ebx;



    ebx = 0x4050cc;
    ecx = *(ebp + 8);
    *(ebx + 8) = ecx;
    *(ebx + 4) = eax;
    *(ebx + 12) = ebp;
}

stack space not deallocated on return
/*	Procedure: 0x00401E7A - 0x00401F40
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401E7A()
{



    asm("int3");
    asm("int3");
    (save)esi;
    ebx = ebx + 1;
    dh = dh ^ *eax;
    (restore)eax;
    ebx = ebx + 1;
    *eax = *eax ^ dh;
    (save)ebp;
    ebp = esp;
    esp = esp - 8;
    (save)ebx;
    (save)esi;
    (save)edi;
    (save)ebp;
    asm("cld");
    ebx = *(ebp + 12);
    eax = *(ebp + 8);
    if(!( *(eax + 4) & 6)) {
        *(ebp - 8) = eax;
        *(ebp - 4) = *(ebp + 16);
        *(ebx - 4) = ebp - 8;
        esi = *(ebx + 12);
        for(edi = *(ebx + 8); 1; esi = *(edi + (esi + esi * 2) * 4)) {
            if(esi == -1) {
                goto L00401f1d;
            }
            ecx = esi + esi * 2;
            if(*(edi + ecx * 4 + 4) != 0) {
                (save)esi;
                (save)ebp;
                ebp = ebx + 16;
                eax = *(edi + ecx * 4 + 4)();
                (restore)ebp;
                (restore)esi;
                ebx = *(ebp + 12);
                if(eax != 0) {
                    >= ? 0x401f16 : ;
                    edi = *(ebx + 8);
                    L00401D8C(ebx);
                    ebp = ebx + 16;
                    L00401DCE(ebx, esi);
                    eax = *(edi + (esi + esi * 2) * 4 + 8);
                    L00401E62(1);
                    *(ebx + 12) = *(edi + ecx * 4);
                    *(edi + ecx * 4 + 8)();
                }
            }
            edi = *(ebx + 8);
        }
        eax = 0;
        goto L00401f39;
L00401f1d:
        eax = 1;
    } else {
        (save)ebp;
        ebp = ebx + 16;
        L00401DCE(ebx, -1);
        (restore)ebp;
        eax = 1;
    }
L00401f39:
    (restore)ebp;
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    esp = ebp;
    (restore)ebp;
}

/*	Procedure: 0x00401F41 - 0x00401F5B
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00401F41(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebp;



    ebp = *A8;
    return(L00401DCE( *(A8 + 24), *(A8 + 28)));
}

/* DEST BLOCK NOT FOUND: 00401f68 -> 00401f94 */
/* DEST BLOCK NOT FOUND: 00401f71 -> 00401f94 */
/*	Procedure: 0x00401F5C - 0x00401F94
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401F5C()
{



    eax = *L00405564;
    if(eax == 1 || eax == 0 && *L00405034 == 1) {
        L00401F95(252);
        eax = *L004056C0;
        if(eax != 0) {
            *eax();
        }
        eax = L00401F95(255);
    }
}

/*	Procedure: 0x00401F95 - 0x004020E7
 *	Argument size: -416
 *	Local size: 420
 *	Save regs size: 0
 */

L00401F95(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vfffffe5c;
	/* unknown */ void  Vffffff60;



    edx = A8;
    ecx = 0;
    eax = 0x4050e0;
    do {
        if(edx == *eax) {
            break;
        }
        eax = eax + 8;
        ecx = ecx + 1;
    } while(eax < 0x405170);
    (save)esi;
    esi = ecx << 3;
    if(edx == *(esi + 0x4050e0)) {
        eax = *L00405564;
        if(eax == 1 || eax == 0 && *L00405034 == 1) {
            goto L004020bf;
        }
        if(edx != 252) {
            (save)260;
            (save) & Vfffffe5c;
            (save)0;
            if(*__imp__GetModuleFileNameA() == 0) {
                L00402540( & Vfffffe5c, 4211668);
            }
            (save)edi;
            edi = & Vfffffe5c;
            if(L004026B0( & Vfffffe5c) + 1 > 60) {
                (save) & Vfffffe5c;
                (save)3;
                edi = L004026B0() + & Vfffffe5c - 59;
                (save)4211664;
                (save)edi;
                L00403340();
                esp = esp + 16;
            }
            (save)4211636;
            (save) & Vffffff60;
            L00402540();
            (save)edi;
            (save) & Vffffff60;
            L00402550();
            (save)4211632;
            (save) & Vffffff60;
            L00402550();
            (save) *(esi + 0x4050e4);
            (save) & Vffffff60;
            L00402550();
            (save)73744;
            (save)4211592;
            (save) & Vffffff60;
            eax = L004032AE();
            esp = esp + 44;
            (restore)edi;
            goto L004020e5;
L004020bf:
            esi = esi + 0x4050e4;
            eax = *__imp__WriteFile( *__imp__GetStdHandle(), -12, *esi, L004026B0( *esi), & A8, 0);
        }
    }
L004020e5:
    (restore)esi;
}

/*	Procedure: 0x004020E8 - 0x004020F8
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004020E8(A4)
/* unknown */ void  A4;
{



    return(L004020F9(A4, 0, 4));
}

/*	Procedure: 0x004020F9 - 0x00402129
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L004020F9(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    eax = A4 & 255;
    if(!( *(eax + 0x405841) & Ac)) {
        eax = A8 != 0 ? *(eax * 2 + 0x40528a) & 65535 & A8 : 0;
        if(eax == 0) {
            return;
        }
    }
    return(1);
}

/*	Procedure: 0x0040212A - 0x004022C2
 *	Argument size: 4
 *	Local size: 24
 *	Save regs size: 12
 */

L0040212A(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vffffffe8;
	/* unknown */ void  Vffffffee;
	/* unknown */ void  Vffffffef;
	/* unknown */ void  Vfffffffc;



    esi = L004022C3(A8);
    A8 = esi;
    if(esi != *L0040571C) {
        ebx = 0;
        if(esi != 0) {
            edx = 0;
            eax = 0x405178;
            do {
                if(*eax == esi) {
                    goto L004021d4;
                }
                eax = eax + 48;
                edx = edx + 1;
            } while(eax < 0x405268);
            (save) & Vffffffe8;
            eax = *__imp__GetCPInfo(esi);
            if(eax == 1) {
                (save)64;
                eax = 0;
                edi = 0x405840;
                Vffffffe8 :: 1;
                *L0040571C = esi;
                asm("rep stosd");
                *edi = al;
                *L00405944 = ebx;
                if(!(edi = edi + 1)) {
                    if(Vffffffee != 0) {
                        ecx = & Vffffffef;
                        do {
                            dl = *ecx;
                            if(dl == 0) {
                                break;
                            }
                            eax = *(ecx - 1) & 255;
                            for(edx = dl & 255; 1; eax = eax + 1) {
                                if(eax > edx) {
                                    goto L0040225d;
                                }
                                *(eax + 0x405841) = *(eax + 0x405841) | 4;
                            }
                            goto L004021d4;
L0040225d:
                            ecx = ecx + 1 + 1;
                        } while(*(ecx - 1) != 0);
                        goto L00402269;
L004021d4:
                        (save)64;
                        eax = 0;
                        (restore)ecx;
                        edi = 0x405840;
                        asm("rep stosd");
                        Vfffffffc = ebx;
                        esi = edx + edx * 2 << 4;
                        *edi = al;
                        edi = edi + 1;
                        ebx = esi + 0x405188;
                        do {
                            ecx = ebx;
                            if(*ebx != 0) {
                                do {
                                    dl = *(ecx + 1);
                                    if(dl == 0) {
                                        break;
                                    }
                                    eax = *ecx & 255;
                                    edi = dl & 255;
                                    if(eax <= edi) {
                                        dl = *(Vfffffffc + 0x405170);
                                        do {
                                            *(eax + 0x405841) = *(eax + 0x405841) | dl;
                                            eax = eax + 1;
                                        } while(eax <= edi);
                                    }
                                    ecx = ecx + 1 + 1;
                                } while(*ecx != 0);
                            }
                            Vfffffffc = Vfffffffc + 1;
                            ebx = ebx + 8;
                        } while(Vfffffffc < 4);
                        eax = A8;
                        *L0040572C = 1;
                        *L0040571C = eax;
                        eax = L0040230D(eax);
                        esi = esi + 0x40517c;
                        edi = 0x405720;
                        *L00405720 = *esi;
                        edi = edi + 4;
                        esi = esi + 4;
                        *edi = *esi;
                        edi = edi + 4;
                        esi = esi + 4;
                        *L00405944 = eax;
                        *edi = *esi;
                        edi = edi + 4;
                        esi = esi + 4;
                        goto L004022b2;
                    }
L00402269:
                    eax = 1;
                    do {
                        *(eax + 0x405841) = *(eax + 0x405841) | 8;
                        eax = eax + 1;
                    } while(eax < 255);
                    *L00405944 = L0040230D(esi);
                    *L0040572C = 1;
                } else {
                    *L0040572C = ebx;
                }
                *L00405720 = 0;
                *L00405724 = 0;
                *L00405728 = 0;
                edi = 0x40572c;
                goto L004022b2;
            }
            if(*L004056C4 == ebx) {
                goto L004022bb;
            }
        }
        L00402340();
L004022b2:
        L00402369();
    }
    eax = 0;
    goto L004022be;
L004022bb:
    eax = eax | -1;
L004022be:
}

/* DEST BLOCK NOT FOUND: 004022d1 -> 004022e3 */
/* DEST BLOCK NOT FOUND: 004022dd -> 004022e3 */
/*	Procedure: 0x004022C3 - 0x004022DC
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004022C3(A4)
/* unknown */ void  A4;
{



    *L004056C4 = 0;
    if(A4 != -2) {
        goto L004022e3;
    }
    *L004056C4 = 1;
}

/* DEST BLOCK NOT FOUND: 004022e6 -> 004022f8 */
/* DEST BLOCK NOT FOUND: 004022f2 -> 004022f8 */
/*	Procedure: 0x004022DD - 0x004022F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetOEMCP()
{



    goto ( *__imp__GetOEMCP);
    if(eax != -3) {
        goto L004022f8;
    }
    *L004056C4 = 1;
}

/* DEST BLOCK NOT FOUND: 004022fb -> 0040230c */
/*	Procedure: 0x004022F2 - 0x0040230C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetACP()
{



    goto ( *__imp__GetACP);
    if(eax == -4) {
        eax = *L004056EC;
        *L004056C4 = 1;
    }
}

/*	Procedure: 0x0040230D - 0x0040233F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L0040230D(A4)
/* unknown */ void  A4;
{



    if(!(eax = A4 - 932)) {
        if(!(eax = eax - 4)) {
            if(!(eax = eax - 13)) {
                if(!(eax = eax - 1)) {
                    return(0);
                }
                return(1028);
            }
            return(1042);
        }
        return(2052);
    }
    return(1041);
}

/*	Procedure: 0x00402340 - 0x00402368
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00402340()
{
	/* unknown */ void  edi;



    ecx = 64;
    eax = 0;
    edi = 0x405840;
    asm("rep stosd");
    *edi = al;
    edi = edi + 1;
    *L0040571C = 0;
    *L0040572C = 0;
    *L00405944 = 0;
    *L00405720 = 0;
    *L00405724 = 0;
    *L00405728 = 0;
    edi = 0x40572c;
    return(0);
}

/*	Procedure: 0x00402369 - 0x004024ED
 *	Argument size: -1300
 *	Local size: 1300
 *	Save regs size: 0
 */

L00402369()
{
	/* unknown */ void  Vfffffaec;
	/* unknown */ void  Vfffffcec;
	/* unknown */ void  Vfffffdec;
	/* unknown */ void  Vfffffeec;
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vfffffff2;
	/* unknown */ void  Vfffffff3;



    (save)esi;
    (save) & Vffffffec;
    (save) *L0040571C;
    if(*__imp__GetCPInfo() == 1) {
        eax = 0;
        esi = 256;
        do {
            *(ebp + eax + -276) = al;
            eax = eax + 1;
        } while(eax < esi);
        al = Vfffffff2;
        Vfffffeec = 32;
        if(al != 0) {
            (save)ebx;
            (save)edi;
            edx = & Vfffffff3;
            do {
                ecx = *edx & 255;
                eax = al & 255;
                if(eax <= ecx) {
                    ecx = ecx - eax;
                    edi = ebp + eax + -276;
                    ecx = ecx + 1;
                    eax = 538976288;
                    ebx = ecx;
                    ecx = ecx >> 2;
                    asm("rep stosd");
                    ecx = ebx & 3;
                    asm("rep stosb");
                }
                edx = edx + 1 + 1;
                al = *(edx - 1);
            } while(al != 0);
            (restore)edi;
            (restore)ebx;
        }
        L0040368D();
        L0040343E();
        L0040343E( *L00405944, 512, & Vfffffeec, esi, & Vfffffcec, esi, *L0040571C, 0, *L00405944, esi, & Vfffffeec, esi, & Vfffffdec, esi, *L0040571C, 0, 1, & Vfffffeec, esi, & Vfffffaec, *L0040571C, *L00405944, 0);
        eax = 0;
        ecx = & Vfffffaec;
        do {
            dx = *ecx;
            if(dl & 1) {
                if(dl & 2) {
                    *(eax + 0x405740) = 0;
                    goto L00402499;
                }
                *(eax + 0x405841) = *(eax + 0x405841) | 32;
                dl = *(ebp + eax + -788);
            } else {
                *(eax + 0x405841) = *(eax + 0x405841) | 16;
                dl = *(ebp + eax + -532);
            }
            *(eax + 0x405740) = dl;
L00402499:
            eax = eax + 1;
            ecx = ecx + 1 + 1;
        } while(eax < esi);
    } else {
        eax = 0;
        esi = 256;
        do {
            if(eax < 65 || eax > 90) {
                if(eax < 97 || eax > 122) {
                    *(eax + 0x405740) = 0;
                    goto L004024e6;
                }
                *(eax + 0x405841) = *(eax + 0x405841) | 32;
                cl = al - 32;
            } else {
                *(eax + 0x405841) = *(eax + 0x405841) | 16;
                cl = al + 32;
            }
            *(eax + 0x405740) = cl;
L004024e6:
            eax = eax + 1;
        } while(eax < esi);
    }
    (restore)esi;
}

/* DEST BLOCK NOT FOUND: 004024f5 -> 00402509 */
/*	Procedure: 0x004024EE - 0x00402509
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004024EE()
{



    if(*L00405A68 == 0) {
        eax = L0040212A(-3);
        *L00405A68 = 1;
    }
}

/*	Procedure: 0x0040250A - 0x00402538
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L0040250A(A8)
/* unknown */ void  A8;
{



    if(A8 != 0) {
        eax = L00402AA3(A8);
        (save)A8;
        if(eax != 0) {
            (save)eax;
            (restore)ecx;
            return(L00402ACE());
        }
        eax = *__imp__HeapFree( *L00405948, 0);
    }
}

/*	Procedure: 0x00402539 - 0x0040253F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402539()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 00402545 -> 004025b1 */
/*	Procedure: 0x00402540 - 0x0040254F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00402540(A4)
/* unknown */ void  A4;
{



    (save)A4;
    goto L004025b1;
}

/*	Procedure: 0x00402550 - 0x0040262F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00402550(A4, A8)
/* unknown */ void  A4;
/* unknown */ void  A8;
{



    ecx = A4;
    (save)edi;
    if(!(ecx & 3)) {
        do {
            al = *ecx;
            ecx = ecx + 1;
            if(al == 0) {
                goto L0040259f;
            }
        } while(ecx & 3);
    }
    while(1) {
        eax = *ecx;
        edx = 2130640639 + eax;
        eax = eax ^ -1 ^ edx;
        ecx = ecx + 4;
        if(eax & -2130640640) {
            continue;
        }
        eax = *(ecx - 4);
        if(al == 0) {
            goto L004025ae;
        }
        if(ah == 0) {
            goto L004025a9;
        }
        if(eax & 16711680) {
            goto L004025a4;
        }
        if(eax & -16777216) {
            break;
        }
    }
L0040259f:
    edi = ecx - 1;
    goto L004025b1;
L004025a4:
    edi = ecx - 2;
    goto L004025b1;
L004025a9:
    edi = ecx - 3;
    goto L004025b1;
L004025ae:
    edi = ecx - 4;
L004025b1:
    ecx = A8;
    if(!(ecx & 3)) {
        do {
            dl = *ecx;
            ecx = ecx + 1;
            if(dl == 0) {
                goto L00402628;
            }
            *edi = dl;
            edi = edi + 1;
        } while(ecx & 3);
    }
    while(1) {
        eax = *ecx;
        edx = 2130640639 + eax;
        eax = eax ^ -1 ^ edx;
        edx = *ecx;
        ecx = ecx + 4;
        if(!(eax & -2130640640)) {
            if(dl == 0) {
                goto L00402628;
            }
            if(dh == 0) {
                goto L0040261f;
            }
            if(edx & 16711680) {
                goto L00402612;
            }
            if(edx & -16777216) {
                break;
            }
        }
        *edi = edx;
        edi = edi + 4;
    }
    *edi = edx;
    (restore)edi;
    return(A4);
L00402612:
    *edi = dx;
    *(edi + 2) = 0;
    (restore)edi;
    return(A4);
L0040261f:
    *edi = dx;
    (restore)edi;
    return(A4);
L00402628:
    *edi = dl;
    (restore)edi;
    return(A4);
}

/*	Procedure: 0x00402630 - 0x00402641
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00402630(A4)
/* unknown */ void  A4;
{



    return(L00402642(A4, *L004056FC));
}

/* DEST BLOCK NOT FOUND: 00402655 -> 0040266d */
/* DEST BLOCK NOT FOUND: 0040265b -> 0040266d */
/*	Procedure: 0x00402642 - 0x0040266D
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00402642(A4, A8)
/* unknown */ void  A4;
/* unknown */ void  A8;
{



    if(A4 <= -32) {
        do {
            if(L0040266E(A4) != 0 || A8 == eax) {
                goto L0040266d;
            }
        } while(L004037D6(A4) != 0);
    }
    eax = 0;
L0040266d:
}

/*	Procedure: 0x0040266E - 0x004026A3
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L0040266E(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  esi;



    esi = A8;
    if(esi <= *L00405270) {
        eax = L00402DF9(esi);
        if(eax != 0) {
            goto L004026a2;
        }
    }
    if(esi == 0) {
        esi = 1;
    }
    eax = *__imp__HeapAlloc( *L00405948, 0, esi + 15 & -16);
L004026a2:
}

/*	Procedure: 0x004026A4 - 0x004026AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004026A4()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x004026B0 - 0x0040272A
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004026B0(A4)
/* unknown */ void  A4;
{



    ecx = A4;
    if(!(ecx & 3)) {
        do {
            al = *ecx;
            ecx = ecx + 1;
            if(al == 0) {
                goto L00402703;
            }
        } while(ecx & 3);
    }
    while(1) {
        eax = *ecx;
        edx = 2130640639 + eax;
        eax = eax ^ -1 ^ edx;
        ecx = ecx + 4;
        if(eax & -2130640640) {
            continue;
        }
        eax = *(ecx - 4);
        if(al == 0) {
            goto L00402721;
        }
        if(ah == 0) {
            goto L00402717;
        }
        if(eax & 16711680) {
            goto L0040270d;
        }
        if(eax & -16777216) {
            break;
        }
    }
L00402703:
    eax = ecx - 1;
    ecx = A4;
    return(eax - ecx);
L0040270d:
    eax = ecx - 2;
    ecx = A4;
    return(eax - ecx);
L00402717:
    eax = ecx - 3;
    ecx = A4;
    return(eax - ecx);
L00402721:
    eax = ecx - 4;
    return(eax - A4);
}

/*	Procedure: 0x0040272B - 0x0040272F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040272B()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 004027b0 -> 0287afb7 */
/*	Procedure: 0x00402730 - 0x00402A26
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 8
 */

L00402730(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    esi = Ac;
    ecx = A10;
    edi = A8;
    eax = ecx;
    edx = ecx;
    eax = eax + esi;
    if(edi <= esi || edi >= eax) {
        if(!(edi & 3)) {
            ecx = ecx >> 2;
            edx = edx & 3;
            if(ecx < 8) {
                goto L0040278c;
            }
            asm("rep movsd");
            goto *(edx * 4 + 0x402878)[L00402888, L00402890, L0040289c, L004028b0, ]goto ( *(edx * 4 + 0x402878));
        }
        eax = edi;
        edx = 3;
        if(!(ecx = ecx - 4)) {
            eax = eax & 3;
            ecx = ecx + eax;
            goto ( *(eax * 4 + 0x402790));
        }
        goto ( *(ecx * 4 + 0x402888));
L0040278c:
        goto *(ecx * 4 + 0x40280c)[L0040286f, L0040285c, L00402854, L0040284c, L00402844, L0040283c, L00402834, L0040282c, ]goto ( *(ecx * 4 + 0x40280c));
        al = *LCC004027;
        asm("daa");
        al = eax + 1 + dh;
        asm("daa");
        eax = eax + 1;
        *ebx = *ebx + ah;
        asm("ror dword [edx+0x8a078806],1");
        esi = esi + 1;
        *(eax + 1183449415) = *(eax + 1183449415) + ecx;
        al = al + cl;
        goto L0287afb7;
        esi = esi + 3;
        edi = edi + 3;
        if(ecx < 8) {
            goto L0040278c;
        }
        asm("rep movsd");
        goto *(edx * 4 + 0x402878)[L00402888, L00402890, L0040289c, L004028b0, ]goto ( *(edx * 4 + 0x402878));
        edx = edx & ecx;
        al = *esi;
        *edi = al;
        al = *(esi + 1);
        ecx = ecx >> 2;
        *(edi + 1) = al;
        esi = esi + 2;
        edi = edi + 2;
        if(ecx < 8) {
            goto L0040278c;
        }
        asm("rep movsd");
        goto *(edx * 4 + 0x402878)[L00402888, L00402890, L0040289c, L004028b0, ]goto ( *(edx * 4 + 0x402878));
        edx = edx & ecx;
        al = *esi;
        *edi = al;
        esi = esi + 1;
        ecx = ecx >> 2;
        edi = edi + 1;
        if(ecx < 8) {
            goto L0040278c;
        }
        asm("rep movsd");
        goto *(edx * 4 + 0x402878)[L00402888, L00402890, L0040289c, L004028b0, ]goto ( *(edx * 4 + 0x402878));
        eax = *(esi + ecx * 4 - 28);
        *(edi + ecx * 4 - 28) = eax;
        eax = *(esi + ecx * 4 - 24);
        *(edi + ecx * 4 - 24) = eax;
        eax = *(esi + ecx * 4 - 20);
        *(edi + ecx * 4 - 20) = eax;
        eax = *(esi + ecx * 4 - 16);
        *(edi + ecx * 4 - 16) = eax;
        eax = *(esi + ecx * 4 - 12);
        *(edi + ecx * 4 - 12) = eax;
        eax = *(esi + ecx * 4 - 8);
        *(edi + ecx * 4 - 8) = eax;
        eax = *(esi + ecx * 4 - 4);
        *(edi + ecx * 4 - 4) = eax;
        eax = ecx * 4;
        esi = esi + eax;
        edi = edi + eax;
        goto *(edx * 4 + 0x402878)[L00402888, L00402890, L0040289c, L004028b0, ]goto ( *(edx * 4 + 0x402878));
        return(A8);
        al = *esi;
        *edi = al;
        esp = ebp;
        return(A8);
        al = *esi;
        *edi = al;
        al = *(esi + 1);
        *(edi + 1) = al;
        esp = ebp;
        return(A8);
        al = *esi;
        *edi = al;
        al = *(esi + 1);
        *(edi + 1) = al;
        al = *(esi + 2);
        *(edi + 2) = al;
        esp = ebp;
        return(A8);
    }
    esi = ecx + esi - 4;
    edi = ecx + edi - 4;
    if(!(edi & 3)) {
        ecx = ecx >> 2;
        edx = edx & 3;
        if(ecx >= 8) {
            asm("std");
            asm("rep movsd");
            asm("cld");
            goto *(edx * 4 + 0x402a10)[L00402a20, L00402a28, L00402a38, L00402a4c, ]goto ( *(edx * 4 + 0x402a10));
        }
L004028f0:
        ecx = ~ecx;
        goto *(ecx * 4 + 0x4029c0)[L00402a07, ]goto ( *(ecx * 4 + 0x4029c0));
    }
    eax = edi;
    edx = 3;
    if(ecx >= 4) {
        eax = eax & 3;
        ecx = ecx - eax;
        goto ( *(eax * 4 + 0x402918));
    }
    goto *(ecx * 4 + 0x402a10)[L00402a20, L00402a28, L00402a38, L00402a4c, ]goto ( *(ecx * 4 + 0x402a10));
    *ecx = *ecx - ch;
    eax = eax + 1;
    *(eax + 41) = *(eax + 41) + cl;
    eax = eax + 1;
    *(eax + 41) = *(eax + 41) + dh;
    eax = eax + 1;
    *(edx + -786234554) = *(edx + -786234554) + cl;
    *(edi + 3) = al;
    esi = esi - 1;
    ecx = ecx >> 2;
    edi = edi - 1;
    if(ecx < 8) {
        goto L004028f0;
    }
    asm("std");
    asm("rep movsd");
    asm("cld");
    goto *(edx * 4 + 0x402a10)[L00402a20, L00402a28, L00402a38, L00402a4c, ]goto ( *(edx * 4 + 0x402a10));
    al = *(esi + 3);
    edx = edx & ecx;
    *(edi + 3) = al;
    al = *(esi + 2);
    ecx = ecx >> 2;
    *(edi + 2) = al;
    esi = esi - 2;
    edi = edi - 2;
    if(ecx < 8) {
        goto L004028f0;
    }
    asm("std");
    asm("rep movsd");
    asm("cld");
    goto *(edx * 4 + 0x402a10)[L00402a20, L00402a28, L00402a38, L00402a4c, ]goto ( *(edx * 4 + 0x402a10));
    al = *(esi + 3);
    edx = edx & ecx;
    *(edi + 3) = al;
    al = *(esi + 2);
    *(edi + 2) = al;
    al = *(esi + 1);
    ecx = ecx >> 2;
    *(edi + 1) = al;
    esi = esi - 3;
    edi = edi - 3;
    if(ecx < 8) {
        goto L004028f0;
    }
    asm("std");
    asm("rep movsd");
    asm("cld");
    goto *(edx * 4 + 0x402a10)[L00402a20, L00402a28, L00402a38, L00402a4c, ]goto ( *(edx * 4 + 0x402a10));
    asm("les ebp,[ecx]");
    ah = eax + 1 + cl;
    *eax = *eax - eax;
    asm("aam 0x29");
    ah = eax + 1 + bl;
    *eax = *eax - eax;
    asm("in al,0x29");
    ah = eax + 1 + ch;
    *eax = *eax - eax;
    asm("hlt");
    *eax = *eax - eax;
    *(edi + ecx * 4 + 28) = *(esi + ecx * 4 + 28);
    *(edi + ecx * 4 + 24) = *(esi + ecx * 4 + 24);
    *(edi + ecx * 4 + 20) = *(esi + ecx * 4 + 20);
    *(edi + ecx * 4 + 16) = *(esi + ecx * 4 + 16);
    *(edi + ecx * 4 + 12) = *(esi + ecx * 4 + 12);
    *(edi + ecx * 4 + 8) = *(esi + ecx * 4 + 8);
    *(edi + ecx * 4 + 4) = *(esi + ecx * 4 + 4);
    eax = ecx * 4;
    esi = esi + eax;
    edi = edi + eax;
    goto *(edx * 4 + 0x402a10)[L00402a20, L00402a28, L00402a38, L00402a4c, ]goto ( *(edx * 4 + 0x402a10));
    esp = ebp;
    return(A8);
}

stack space not deallocated on return
/*	Procedure: 0x00402A27 - 0x00402A34
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402A27()
{



    *(edi + 3) = *(esi + 3);
    eax = *(ebp + 8);
    (restore)esi;
    (restore)edi;
    esp = ebp;
    (restore)ebp;
}

stack space not deallocated on return
/*	Procedure: 0x00402A35 - 0x00402A4A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402A35()
{



    *(edi + 3) = *(esi + 3);
    *(edi + 2) = *(esi + 2);
    eax = *(ebp + 8);
    (restore)esi;
    (restore)edi;
    esp = ebp;
    (restore)ebp;
}

stack space not deallocated on return
/*	Procedure: 0x00402A4B - 0x00402A64
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402A4B()
{



    *(edi + 3) = *(esi + 3);
    *(edi + 2) = *(esi + 2);
    *(edi + 1) = *(esi + 1);
    eax = *(ebp + 8);
    (restore)esi;
    (restore)edi;
    esp = ebp;
    (restore)ebp;
}

stack space not deallocated on return
/*	Procedure: 0x00402A65 - 0x00402AA2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00402A65()
{



    eax = *__imp__HeapAlloc( *L00405948, 0, 320);
    *L00405718 = eax;
    if(eax == 0) {
        return;
    }
    *L00405710 = 0;
    *L00405714 = 0;
    (save)1;
    *L0040570C = eax;
    *L00405704 = 16;
    (restore)eax;
}

/* DEST BLOCK NOT FOUND: 00402ac4 -> 00402acd */
/*	Procedure: 0x00402AA3 - 0x00402ACD
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00402AA3(A4)
/* unknown */ void  A4;
{



    eax = *L00405718;
    for(ecx = eax + ( *L00405714 + *L00405714 * 4) * 4; eax < ecx; eax = eax + 20) {
        if(A4 - *(eax + 12) < 1048576) {
            goto L00402acd;
        }
    }
    eax = 0;
L00402acd:
}

/*	Procedure: 0x00402ACE - 0x00402DF8
 *	Argument size: -9
 *	Local size: 20
 *	Save regs size: 0
 */

L00402ACE(A8, Ac, Af)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  Af;
{
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    edx = Ac;
    ecx = A8;
    (save)ebx;
    (save)esi;
    eax = *(ecx + 16);
    esi = edx - *(ecx + 12);
    ebx = *(edx - 4);
    edx = edx + -4;
    (save)edi;
    esi = esi >> 15;
    ecx = esi;
    edi = *(edx - 4);
    516 = ecx * ecx;
    ebx = ebx - 1;
    Vfffffffc = edi;
    Vfffffff4 = ebx;
    Vfffffff0 = ecx + eax + 324;
    ecx = *(ebx + edx);
    Vfffffff8 = ecx;
    if(!(cl & 1)) {
        (save)63;
        ecx = (ecx >> 4) - 1;
        (restore)edi;
        Ac = ecx;
        if(ecx > edi) {
            Ac = edi;
        }
        if(*(ebx + edx + 4) == *(ebx + edx + 8)) {
            ecx = Ac;
            if(ecx >= 32) {
                goto L00402b54;
            }
            edi = -2147483648 >> cl;
            ecx = ecx + eax + 4;
            edi = !edi;
            *(eax + esi * 4 + 68) = *(eax + esi * 4 + 68) & edi;
            if(!( *ecx = *ecx - 1)) {
                *A8 = *A8 & edi;
                goto L00402b78;
L00402b54:
                ecx = ecx + -32;
                edi = -2147483648 >> cl;
                ecx = Ac + eax + 4;
                edi = !edi;
                *(eax + esi * 4 + 196) = *(eax + esi * 4 + 196) & edi;
                if(!( *ecx = *ecx - 1)) {
                    *(A8 + 4) = *(A8 + 4) & edi;
                }
            }
        }
L00402b78:
        ecx = *(ebx + edx + 8);
        *(ecx + 4) = *(ebx + edx + 4);
        ecx = *(ebx + edx + 4);
        edi = *(ebx + edx + 8);
        ebx = ebx + Vfffffff8;
        *(ecx + 8) = edi;
        Vfffffff4 = ebx;
    }
    edi = (ebx >> 4) - 1;
    if(edi > 63) {
        edi = 63;
    }
    if(!(Vffffffec = Vfffffffc & 1)) {
        edx = edx - Vfffffffc;
        (save)63;
        Vfffffff8 = edx;
        ecx = (Vfffffffc >> 4) - 1;
        (restore)edx;
        Ac = ecx;
        if(ecx > edx) {
            Ac = edx;
            ecx = edx;
        }
        ebx = ebx + Vfffffffc;
        Vfffffff4 = ebx;
        edi = (ebx >> 4) - 1;
        if(edi > edx) {
            edi = edx;
        }
        if(ecx != edi) {
            ecx = Vfffffff8;
            if(*(ecx + 4) == *(ecx + 8)) {
                ecx = Ac;
                if(ecx >= 32) {
                    goto L00402c12;
                }
                edx = -2147483648 >> cl;
                ecx = ecx + eax + 4;
                edx = !edx;
                *(eax + esi * 4 + 68) = *(eax + esi * 4 + 68) & edx;
                if(!( *ecx = *ecx - 1)) {
                    *A8 = *A8 & edx;
                    goto L00402c36;
L00402c12:
                    ecx = ecx + -32;
                    edx = -2147483648 >> cl;
                    ecx = Ac + eax + 4;
                    edx = !edx;
                    *(eax + esi * 4 + 196) = *(eax + esi * 4 + 196) & edx;
                    if(!( *ecx = *ecx - 1)) {
                        *(A8 + 4) = *(A8 + 4) & edx;
                    }
                }
            }
L00402c36:
            ecx = Vfffffff8;
            edx = *(ecx + 8);
            *(edx + 4) = *(ecx + 4);
            ecx = Vfffffff8;
            edx = *(ecx + 4);
            *(edx + 8) = *(ecx + 8);
        }
        edx = Vfffffff8;
    }
    if(Vffffffec != 0 || Ac != edi) {
        *(edx + 4) = *(Vfffffff0 + edi * 8 + 4);
        ecx = Vfffffff0 + edi * 8;
        *(edx + 8) = ecx;
        *( *(edx + 8) + 4) = edx;
        *( *(edx + 4) + 8) = edx;
        if(*(edx + 4) == *(edx + 8)) {
            cl = *(edi + eax + 4);
            edi :: 32;
            Af = cl;
            *(edi + eax + 4) = cl;
            if(!(cl = Af + 1)) {
                if(Af == 0) {
                    ecx = edi;
                    ebx = -2147483648 >> cl;
                    *A8 = *A8 | ebx;
                }
                ebx = -2147483648 >> edi;
                *(eax + esi * 4 + 68) = *(eax + esi * 4 + 68) | ebx;
            } else {
                if(Af == 0) {
                    ecx = edi - 32;
                    ebx = -2147483648 >> cl;
                    *(A8 + 4) = *(A8 + 4) | ebx;
                }
                ecx = edi - 32;
                edi = -2147483648 >> cl;
                *(eax + esi * 4 + 196) = *(eax + esi * 4 + 196) | edi;
            }
            ebx = Vfffffff4;
        }
    }
    eax = Vfffffff0;
    *edx = ebx;
    *(ebx + edx - 4) = ebx;
    if(!( *eax = *eax - 1)) {
        eax = *L00405710;
        if(eax != 0) {
            edi = __imp__VirtualFree;
            ecx = ( *L00405708 << 15) + *(eax + 12);
            ebx = 32768;
            (save)16384;
            (save)32768;
            (save)ecx;
            *__imp__VirtualFree();
            *( *L00405710 + 8) = *( *L00405710 + 8) | -2147483648 >> *L00405708;
            *( *( *L00405710 + 16) + *L00405708 * 4 + 196) = 0;
            *( *( *L00405710 + 16) + 67) = *( *( *L00405710 + 16) + 67) - 1;
            eax = *L00405710;
            if(*( *(eax + 16) + 67) == 0) {
                *(eax + 4) = *(eax + 4) & -2;
                eax = *L00405710;
            }
            if(*(eax + 8) != -1) {
                goto L00402de6;
            }
            (save)ebx;
            (save)0;
            (save) *(eax + 12);
            *edi();
            (save) *( *L00405710 + 16);
            (save)0;
            (save) *L00405948;
            *__imp__HeapFree();
            eax = *L00405710;
            L00403800(eax, eax + 20, ( *L00405714 + *L00405714 * 4 << 2) - eax + *L00405718 - 20);
            eax = A8;
            *L00405714 = *L00405714 - 1;
            if(eax > *L00405710) {
                eax = eax - 20;
            }
            *L0040570C = *L00405718;
        } else {
L00402de6:
            eax = A8;
        }
        *L00405710 = eax;
        *L00405708 = esi;
    }
    (restore)edi;
    (restore)esi;
    (restore)ebx;
}

/*	Procedure: 0x00402DF9 - 0x00403101
 *	Argument size: -13
 *	Local size: 20
 *	Save regs size: 0
 */

L00402DF9(A8, Ab)
/* unknown */ void  A8;
/* unknown */ void  Ab;
{
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    edx = *L00405718;
    (save)ebx;
    (save)esi;
    (save)edi;
    edi = edx + ( *L00405714 + *L00405714 * 4) * 4;
    eax = A8;
    Vfffffffc = edi;
    ecx = eax + 23 & -16;
    Vfffffff0 = ecx;
    ecx = (Vfffffff0 >> 4) - 1;
    if(ecx < 32) {
        esi = (esi | -1) >> cl;
        Vfffffff8 = Vfffffff8 | -1;
        Vfffffff4 = esi;
    } else {
        ecx = ecx + -32;
        eax = eax | -1;
        esi = 0;
        Vfffffff4 = 0;
        Vfffffff8 = eax >> cl;
    }
    eax = *L0040570C;
    ebx = eax;
    A8 = ebx;
    if(ebx < edi) {
        do {
            ecx = *(ebx + 4);
            edi = *ebx;
            ecx = ecx & Vfffffff8;
            if(ecx = ecx | edi & esi) {
                break;
            }
            ebx = ebx + 20;
            A8 = ebx;
        } while(ebx < Vfffffffc);
    }
    if(ebx == Vfffffffc) {
        for(ebx = edx; 1; ebx = ebx + 20) {
            A8 = ebx;
            if(ebx >= eax) {
                break;
            }
            ecx = *(ebx + 4);
            edi = *ebx;
            ecx = ecx & Vfffffff8;
            if(ecx = ecx | edi & esi) {
                break;
            }
        }
        if(ebx != eax) {
            goto L00402eee;
        }
        while(ebx < Vfffffffc && *(ebx + 8) == 0) {
            ebx = ebx + 20;
            A8 = ebx;
        }
        if(ebx == Vfffffffc) {
            for(ebx = edx; 1; ebx = ebx + 20) {
                A8 = ebx;
                if(ebx >= eax || *(ebx + 8) != 0) {
                    break;
                }
            }
            if(ebx == eax) {
                ebx = L00403102();
                A8 = ebx;
                if(ebx == 0) {
                    goto L00402ee7;
                }
            }
        }
        eax = L004031B3(ebx);
        *( *(ebx + 16)) = eax;
        if(*( *(ebx + 16)) != -1) {
            goto L00402eee;
        }
L00402ee7:
        eax = 0;
    } else {
L00402eee:
        *L0040570C = ebx;
        eax = *(ebx + 16);
        edx = *eax;
        Vfffffffc = edx;
        if(edx != -1) {
            ecx = *(eax + edx * 4 + 196);
            edi = *(eax + edx * 4 + 68);
            ecx = ecx & Vfffffff8;
            if(ecx = ecx | edi & esi) {
                goto L00402f4c;
            }
        }
        edx = *(eax + 196);
        esi = *(eax + 68);
        edx = edx & Vfffffff8;
        esi = esi & Vfffffff4;
        Vfffffffc = 0;
        ecx = eax + 68;
        esi = Vfffffff4;
        if(!(edx = edx | esi)) {
            do {
                Vfffffffc = Vfffffffc + 1;
                edx = *(ecx + 132) & Vfffffff8;
                ecx = ecx + 4;
            } while(edx = edx | esi & *ecx);
        }
        edx = Vfffffffc;
L00402f4c:
        ecx = edx;
        edi = 0;
        516 = ecx * ecx;
        Vfffffff4 = ecx + eax + 324;
        if(!(ecx = *(eax + edx * 4 + 68) & esi)) {
            (save)32;
            ecx = *(eax + edx * 4 + 196) & Vfffffff8;
            (restore)edi;
        }
        while(ecx >= 0) {
            ecx = ecx << 1;
            edi = edi + 1;
        }
        edx = *(Vfffffff4 + edi * 8 + 4);
        ecx = *edx - Vfffffff0;
        Vfffffff8 = ecx;
        esi = (ecx >> 4) - 1;
        if(esi > 63) {
            esi = 63;
        }
        if(esi != edi) {
            if(*(edx + 4) == *(edx + 8)) {
                if(edi < 32) {
                    ebx = -2147483648 >> edi;
                    ecx = Vfffffffc;
                    edi = eax + edi + 4;
                    ebx = !ebx;
                    Vffffffec = ebx;
                    *(eax + ecx * 4 + 68) = Vffffffec & *(eax + ecx * 4 + 68);
                    if(*edi = *edi - 1) {
                        goto L00403009;
                    }
                    ebx = A8;
                    *ebx = *ebx & Vffffffec;
                } else {
                    ecx = edi - 32;
                    ebx = -2147483648 >> cl;
                    edi = eax + edi + 4;
                    ecx = eax + Vfffffffc * 4 + 196;
                    ebx = !ebx;
                    *ecx = *ecx & ebx;
                    Vffffffec = ebx;
                    if(!( *edi = *edi - 1)) {
                        ebx = A8;
                        *(ebx + 4) = *(ebx + 4) & Vffffffec;
                    } else {
L00403009:
                        ebx = A8;
                    }
                }
            }
            ecx = *(edx + 8);
            *(ecx + 4) = *(edx + 4);
            ecx = *(edx + 4);
            *(ecx + 8) = *(edx + 8);
            if(Vfffffff8 == 0) {
                goto L004030bc;
            }
            ecx = Vfffffff4;
            edi = *(ecx + esi * 8 + 4);
            ecx = ecx + esi * 8;
            *(edx + 4) = edi;
            *(edx + 8) = ecx;
            *( *(edx + 8) + 4) = edx;
            *( *(edx + 4) + 8) = edx;
            if(*(edx + 4) == *(edx + 8)) {
                cl = *(esi + eax + 4);
                Ab = cl;
                if(esi < 32) {
                    cl = cl + 1;
                    *(esi + eax + 4) = cl;
                    if(Ab == 0) {
                        ecx = esi;
                        *ebx = *ebx | -2147483648 >> cl;
                    }
                    edi = -2147483648 >> esi;
                    *(eax + Vfffffffc * 4 + 68) = *(eax + Vfffffffc * 4 + 68) | edi;
                } else {
                    cl = cl + 1;
                    *(esi + eax + 4) = cl;
                    if(Ab == 0) {
                        ecx = esi - 32;
                        *(ebx + 4) = *(ebx + 4) | -2147483648 >> cl;
                    }
                    edi = eax + Vfffffffc * 4 + 196;
                    ecx = esi - 32;
                    *edi = *edi | -2147483648 >> cl;
                }
            }
            ecx = Vfffffff8;
        }
        if(ecx != 0) {
            *edx = ecx;
            *(ecx + edx - 4) = ecx;
            goto L004030bf;
L004030bc:
            ecx = Vfffffff8;
        }
L004030bf:
        esi = Vfffffff0;
        edx = edx + ecx;
        ecx = esi + 1;
        *edx = ecx;
        *(edx + esi - 4) = *edx;
        esi = Vfffffff4;
        ecx = *esi;
        ecx :: 0;
        if(!( *esi = ecx + 1) && ebx == *L00405710 && Vfffffffc == *L00405708) {
            *L00405710 = 0;
        }
        *eax = Vfffffffc;
        eax = edx + 4;
    }
    (restore)edi;
    (restore)esi;
    (restore)ebx;
}

stack space not deallocated on return
/*	Procedure: 0x00403102 - 0x004031B2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403102()
{



    eax = *L00405714;
    ecx = *L00405704;
    (save)esi;
    (save)edi;
    edi = 0;
    if(eax == ecx) {
        (save)ecx + ecx * 4 + 80 << 2;
        (save) *L00405718;
        (save)0;
        (save) *L00405948;
        eax = *__imp__HeapReAlloc();
        if(eax == edi) {
            goto L00403195;
        }
        *L00405704 = *L00405704 + 16;
        *L00405718 = eax;
        eax = *L00405714;
    }
    (save)16836;
    (save)8;
    (save) *L00405948;
    esi = *L00405718 + (eax + eax * 4) * 4;
    eax = *__imp__HeapAlloc();
    *(esi + 16) = eax;
    if(eax != edi) {
        (save)4;
        (save)8192;
        (save)1048576;
        (save)edi;
        eax = *__imp__VirtualAlloc();
        *(esi + 12) = eax;
        if(eax != edi) {
            goto L00403199;
        }
        *__imp__HeapFree( *L00405948, edi, *(esi + 16));
    }
L00403195:
    eax = 0;
    goto L004031b0;
L00403199:
    *(esi + 8) = *(esi + 8) | -1;
    *esi = edi;
    *(esi + 4) = edi;
    *L00405714 = *L00405714 + 1;
    *( *(esi + 16)) = *( *(esi + 16)) | -1;
    eax = esi;
L004031b0:
    (restore)edi;
    (restore)esi;
}

/*	Procedure: 0x004031B3 - 0x004032AD
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004031B3(A8)
/* unknown */ void  A8;
{



    (save)ecx;
    ecx = A8;
    (save)ebx;
    (save)esi;
    (save)edi;
    esi = *(ecx + 16);
    eax = *(ecx + 8);
    for(ebx = 0; eax >= 0; ebx = ebx + 1) {
        eax = eax << 1;
    }
    eax = ebx;
    (save)63;
    516 = eax * eax;
    (restore)edx;
    eax = eax + esi + 324;
    *(ebp - 4) = eax;
    do {
        *(eax + 8) = eax;
        *(eax + 4) = eax;
        eax = eax + 8;
    } while(edx = edx - 1);
    edi = (ebx << 15) + *(ecx + 12);
    eax = *__imp__VirtualAlloc(edi, 32768, 4096, 4);
    if(eax == 0) {
        eax = eax | -1;
    } else {
        edx = edi + 28672;
        if(edi <= edx) {
            eax = edi + 16;
            do {
                *(eax - 8) = *(eax - 8) | -1;
                *(eax + 4076) = *(eax + 4076) | -1;
                *(eax - 4) = 4080;
                *eax = eax + 4092;
                *(eax + 4) = eax + -4100;
                *(eax + 4072) = 4080;
                eax = eax + 4096;
            } while(eax - 16 <= edx);
        }
        eax = *(ebp - 4);
        ecx = edi + 12;
        eax = eax + 504;
        edi = 1;
        *(eax + 4) = ecx;
        *(ecx + 8) = eax;
        ecx = edx + 12;
        *(eax + 8) = ecx;
        *( *(eax + 8) + 4) = eax;
        *(esi + ebx * 4 + 68) = 0;
        *(esi + ebx * 4 + 196) = 1;
        al = *(esi + 67);
        cl = al + 1;
        eax = A8;
        *(esi + 67) = cl;
        if(al == 0) {
            *(eax + 4) = *(eax + 4) | 1;
        }
        *(eax + 8) = *(eax + 8) & !(-2147483648 >> ebx);
        eax = ebx;
    }
    (restore)edi;
    (restore)esi;
    (restore)ebx;
}

stack space not deallocated on return
/*	Procedure: 0x004032AE - 0x0040333F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L004032AE(A1c)
/* unknown */ void  A1c;
{
	/* unknown */ void  ebx;



    ebx = 0;
    (save)esi;
    (save)edi;
    if(*L004056C8 == 0) {
        (save)4211740;
        edi = *__imp__LoadLibraryA();
        if(edi == ebx) {
            goto L00403333;
        }
        esi = __imp__GetProcAddress;
        (save)4211728;
        (save)edi;
        eax = *__imp__GetProcAddress();
        *L004056C8 = eax;
        if(eax == 0) {
            goto L00403333;
        }
        (save)4211712;
        (save)edi;
        (save)4211692;
        (save)edi;
        *L004056CC = *esi();
        *L004056D0 = *esi();
    }
    eax = *L004056CC;
    if(eax != 0) {
        ebx = *eax();
        if(ebx != 0) {
            eax = *L004056D0;
            if(eax != 0) {
                (save)ebx;
                ebx = *eax();
            }
        }
    }
    eax = *L004056c8(ebx, A1c, A1c, A1c);
L0040332f:
    (restore)edi;
    (restore)esi;
    return;
L00403333:
    eax = 0;
    goto L0040332f;
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00403340 - 0x0040343D
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00403340(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    ecx = Ac;
    (save)edi;
    if(ecx != 0) {
        (save)esi;
        (save)ebx;
        ebx = ecx;
        esi = A8;
        edi = A4;
        if(!(esi & 3)) {
            ecx = ecx >> 2;
            != ? 0x4033d1 : ;
        } else {
            do {
                al = *esi;
                esi = esi + 1;
                *edi = al;
                edi = edi + 1;
                if(ecx = ecx - 1) {
                    goto L00403392;
                }
                if(al == 0) {
                    goto L0040339a;
                }
            } while(esi & 3);
            ebx = ecx;
            ecx = ecx >> 2;
            != ? 0x4033d1 : ;
L00403380:
            if(ebx = ebx & 3) {
                goto L00403392;
            }
        }
        do {
            al = *esi;
            esi = esi + 1;
            *edi = al;
            edi = edi + 1;
            if(al == 0) {
                goto L004033be;
            }
        } while(ebx = ebx - 1);
L00403392:
        (restore)ebx;
        (restore)esi;
        (restore)edi;
        return(A4);
L0040339a:
        if(!(edi & 3)) {
            do {
                *edi = al;
                edi = edi + 1;
                if(ecx = ecx - 1) {
                    goto L00403436;
                }
            } while(edi & 3);
        }
        ebx = ecx;
        ecx = ecx >> 2;
        != ? 0x403427 : ;
L004033bb:
        *edi = al;
        edi = edi + 1;
L004033be:
        if(ebx = ebx - 1) {
            goto L004033bb;
        }
        (restore)ebx;
        (restore)esi;
    }
    (restore)edi;
    return(A4);
L004033c9:
    *edi = edx;
    edi = edi + 4;
    if(ecx = ecx - 1) {
        goto L00403380;
    }
    eax = *esi;
    edx = 2130640639 + eax;
    eax = eax ^ -1 ^ edx;
    edx = *esi;
    esi = esi + 4;
    if(eax & -2130640640) {
        goto L004033c9;
    }
    if(dl != 0) {
        if(dh != 0) {
            if(!(edx & 16711680)) {
                if(edx & -16777216) {
                    goto L004033c9;
                }
                *edi = edx;
            } else {
                edx = edx & 65535;
                *edi = edx;
            }
        } else {
            edx = edx & 255;
            *edi = edx;
        }
    } else {
        edx = 0;
        *edi = 0;
    }
    edi = edi + 4;
    eax = 0;
    if(!(ecx = ecx - 1)) {
        eax = 0;
L00403429:
        *edi = eax;
        edi = edi + 4;
        if(ecx = ecx - 1) {
            goto L00403429;
        }
    }
    if(ebx = ebx & 3) {
        goto L004033bb;
    }
L00403436:
    (restore)ebx;
    (restore)esi;
    (restore)edi;
    return(A4);
}

stack space not deallocated on return
/*	Procedure: 0x0040343E - 0x00403661
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040343E()
{



    (save)ebp;
    ebp = esp;
    (save)-1;
    (save)4211760;
    (save)0x401e84;
    (save) *%fs:0x0];
    *%fs:0x0] = esp;
    esp = esp - 28;
    (save)ebx;
    (save)esi;
    (save)edi;
    *(ebp - 24) = esp;
    edi = 0;
    if(*L004056F4 == 0) {
        (save)0;
        (save)0;
        ebx = 1;
        (save)1;
        (save)4211756;
        esi = 256;
        (save)256;
        (save)0;
        if(*__imp__LCMapStringW() == 0) {
            goto L0935fbc0;
        }
        *L004056F4 = ebx;
        goto L004034b4;
        (save)edi;
        (save)edi;
        (save)ebx;
        (save)4211752;
        (save)esi;
        (save)edi;
        if(*__imp__LCMapStringA() == 0) {
            goto L004035cc;
        }
        *L004056F4 = 2;
    }
L004034b4:
    if(*(ebp + 20) > edi) {
        *(ebp + 20) = L00403662( *(ebp + 16), *(ebp + 20));
    }
    eax = *L004056F4;
    if(eax == 2) {
        (save) *(ebp + 28);
        (save) *(ebp + 24);
        (save) *(ebp + 20);
        (save) *(ebp + 16);
        (save) *(ebp + 12);
        (save) *(ebp + 8);
        eax = *__imp__LCMapStringA();
    } else {
        if(eax == 1) {
            if(*(ebp + 32) == edi) {
                *(ebp + 32) = *L004056EC;
            }
            (save)edi;
            (save)edi;
            (save) *(ebp + 20);
            (save) *(ebp + 16);
            eax = ~( *(ebp + 36));
            asm("sbb eax,eax");
            (save)(eax & 8) + 1;
            (save) *(ebp + 32);
            ebx = *__imp__MultiByteToWideChar();
            *(ebp - 28) = ebx;
            if(ebx != edi) {
                *(ebp - 4) = edi;
                al = ebx + ebx + 3 & 252;
                L00403B40();
                *(ebp - 24) = esp;
                *(ebp - 36) = esp;
                *(ebp - 4) = *(ebp - 4) | -1;
                goto L00403561;
                return(1);
                esp = *(ebp - 24);
                edi = 0;
                *(ebp - 36) = 0;
                *(ebp - 4) = *(ebp - 4) | -1;
                ebx = *(ebp - 28);
L00403561:
                if(*(ebp - 36) != edi) {
                    (save)ebx;
                    (save) *(ebp - 36);
                    (save) *(ebp + 20);
                    (save) *(ebp + 16);
                    (save)1;
                    (save) *(ebp + 32);
                    if(*__imp__MultiByteToWideChar() != 0) {
                        (save)edi;
                        (save)edi;
                        (save)ebx;
                        (save) *(ebp - 36);
                        (save) *(ebp + 12);
                        (save) *(ebp + 8);
                        esi = *__imp__LCMapStringW();
                        *(ebp - 40) = esi;
                        if(esi != edi) {
                            if(*(ebp + 13) & 4) {
                                goto L004035e0;
                            }
                            if(*(ebp + 28) == edi || esi <= *(ebp + 28) && *__imp__LCMapStringW( *(ebp + 8), *(ebp + 12), *(ebp - 36), ebx, *(ebp + 24), *(ebp + 28)) != 0) {
                                goto L0040365b;
                            }
                        }
                    }
                }
            }
        }
L004035cc:
        eax = 0;
    }
L004035ce:
    esp = ebp - 56;
    *%fs:0x0] = *(ebp - 16);
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    (restore)ebp;
    return;
L004035e0:
    *(ebp - 4) = 1;
    al = esi + esi + 3 & 252;
    L00403B40();
    *(ebp - 24) = esp;
    ebx = esp;
    *(ebp - 32) = ebx;
    *(ebp - 4) = *(ebp - 4) | -1;
    goto L00403614;
    return(1);
    esp = *(ebp - 24);
    edi = 0;
    ebx = 0;
    *(ebp - 4) = *(ebp - 4) | -1;
    esi = *(ebp - 40);
L00403614:
    if(ebx == edi) {
        goto L004035cc;
    }
    (save)esi;
    (save)ebx;
    (save) *(ebp - 28);
    (save) *(ebp - 36);
    (save) *(ebp + 12);
    (save) *(ebp + 8);
    if(*__imp__LCMapStringW() == 0) {
        goto L004035cc;
    }
    (save)edi;
    (save)edi;
    if(*(ebp + 28) == edi) {
        (save)edi;
        (save)edi;
    } else {
        (save) *(ebp + 28);
        (save) *(ebp + 24);
    }
    (save)esi;
    (save)ebx;
    (save)544;
    (save) *(ebp + 32);
    esi = *__imp__WideCharToMultiByte();
    if(esi == edi) {
        goto L004035cc;
    }
L0040365b:
    eax = esi;
    goto L004035ce;
}

/*	Procedure: 0x00403662 - 0x0040368C
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00403662(A4, A8)
/* unknown */ void  A4;
/* unknown */ void  A8;
{



    eax = A4;
    A8 :: 0;
    (save)esi;
    if(!(ecx = A8 - 1)) {
        do {
            if(*eax == 0) {
                break;
            }
            eax = eax + 1;
            esi = ecx;
            ecx = ecx - 1;
        } while(esi != 0);
    }
    (restore)esi;
    if(*eax == 0) {
        return(eax - A4);
    }
    return(A8);
}

stack space not deallocated on return
/*	Procedure: 0x0040368D - 0x004037D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040368D()
{



    (save)ebp;
    ebp = esp;
    (save)-1;
    (save)4211784;
    (save)0x401e84;
    (save) *%fs:0x0];
    *%fs:0x0] = esp;
    esp = esp - 24;
    (save)ebx;
    (save)esi;
    (save)edi;
    *(ebp - 24) = esp;
    eax = *L004056F8;
    ebx = 0;
    if(eax == 0) {
        (save)ebp - 28;
        esi = 1;
        (save)1;
        (save)4211756;
        (save)1;
        if(*__imp__GetStringTypeW() != 0) {
            eax = esi;
        } else {
            (save)ebp - 28;
            (save)esi;
            (save)4211752;
            (save)esi;
            (save)ebx;
            if(*__imp__GetStringTypeA() == 0) {
                goto L004037c2;
            }
            eax = 2;
        }
        *L004056F8 = eax;
    }
    if(eax == 2) {
        eax = *(ebp + 28);
        if(eax == ebx) {
            eax = *L004056DC;
        }
        (save) *(ebp + 20);
        (save) *(ebp + 16);
        (save) *(ebp + 12);
        (save) *(ebp + 8);
        (save)eax;
        eax = *__imp__GetStringTypeA();
    } else {
        if(eax == 1) {
            if(*(ebp + 24) == ebx) {
                *(ebp + 24) = *L004056EC;
            }
            (save)ebx;
            (save)ebx;
            (save) *(ebp + 16);
            (save) *(ebp + 12);
            eax = ~( *(ebp + 32));
            asm("sbb eax,eax");
            (save)(eax & 8) + 1;
            (save) *(ebp + 24);
            eax = *__imp__MultiByteToWideChar();
            *(ebp - 32) = eax;
            if(eax == ebx) {
                goto L004037c2;
            }
            *(ebp - 4) = ebx;
            edi = eax + eax;
            al = edi + 3 & 252;
            L00403B40();
            *(ebp - 24) = esp;
            esi = esp;
            *(ebp - 36) = esi;
            L00403B70(esi, ebx, edi);
            goto L00403791;
            return(1);
            esp = *(ebp - 24);
            ebx = 0;
            esi = 0;
L00403791:
            *(ebp - 4) = *(ebp - 4) | -1;
            if(esi == ebx) {
                goto L004037c2;
            }
            (save) *(ebp - 32);
            (save)esi;
            (save) *(ebp + 16);
            (save) *(ebp + 12);
            (save)1;
            (save) *(ebp + 24);
            eax = *__imp__MultiByteToWideChar();
            if(eax == ebx) {
                goto L004037c2;
            }
            eax = *__imp__GetStringTypeW( *(ebp + 8), esi, eax, *(ebp + 20));
        } else {
L004037c2:
            eax = 0;
        }
    }
    esp = ebp - 52;
    *%fs:0x0] = *(ebp - 16);
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    (restore)ebp;
}

/*	Procedure: 0x004037D6 - 0x004037F0
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004037D6(A4)
/* unknown */ void  A4;
{



    eax = *L00405700;
    if(eax != 0 && *eax(A4) != 0) {
        return(1);
    }
    return(0);
}

/*	Procedure: 0x004037F1 - 0x004037FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004037F1()
{



}

/* DEST BLOCK NOT FOUND: 00403880 -> 0287c087 */
/*	Procedure: 0x00403800 - 0x00403AF6
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 8
 */

L00403800(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    esi = Ac;
    ecx = A10;
    edi = A8;
    eax = ecx;
    edx = ecx;
    eax = eax + esi;
    if(edi <= esi || edi >= eax) {
        if(!(edi & 3)) {
            ecx = ecx >> 2;
            edx = edx & 3;
            if(ecx < 8) {
                goto L0040385c;
            }
            asm("rep movsd");
            goto *(edx * 4 + 0x403948)[L00403958, L00403960, L0040396c, L00403980, ]goto ( *(edx * 4 + 0x403948));
        }
        eax = edi;
        edx = 3;
        if(!(ecx = ecx - 4)) {
            eax = eax & 3;
            goto ( *(eax * 4 + 0x403860));
        }
        goto ( *(ecx * 4 + 0x403958));
L0040385c:
        goto *(ecx * 4 + 0x4038dc)[L0040393f, L0040392c, L00403924, L0040391c, L00403914, L0040390c, L00403904, L004038fc, ]goto ( *(ecx * 4 + 0x4038dc));
        if(!(ecx = ecx + eax)) {
            eax = eax + 1;
            *(eax + edi + 952107072) = *(eax + edi + 952107072) + bl;
            *ebx = *ebx + eax + 1;
            asm("ror dword [edx+0x8a078806],1");
            esi = esi + 1;
            *(eax + 1183449415) = *(eax + 1183449415) + ecx;
            al = al + cl;
            goto L0287c087;
            esi = esi + 3;
            edi = edi + 3;
            if(ecx < 8) {
                goto L0040385c;
            }
            asm("rep movsd");
            goto *(edx * 4 + 0x403948)[L00403958, L00403960, L0040396c, L00403980, ]goto ( *(edx * 4 + 0x403948));
            edx = edx & ecx;
        }
        al = *esi;
        *edi = al;
        al = *(esi + 1);
        ecx = ecx >> 2;
        *(edi + 1) = al;
        esi = esi + 2;
        edi = edi + 2;
        if(ecx < 8) {
            goto L0040385c;
        }
        asm("rep movsd");
        goto *(edx * 4 + 0x403948)[L00403958, L00403960, L0040396c, L00403980, ]goto ( *(edx * 4 + 0x403948));
        edx = edx & ecx;
        al = *esi;
        *edi = al;
        esi = esi + 1;
        ecx = ecx >> 2;
        edi = edi + 1;
        if(ecx < 8) {
            goto L0040385c;
        }
        asm("rep movsd");
        goto *(edx * 4 + 0x403948)[L00403958, L00403960, L0040396c, L00403980, ]goto ( *(edx * 4 + 0x403948));
        eax = *(esi + ecx * 4 - 28);
        *(edi + ecx * 4 - 28) = eax;
        eax = *(esi + ecx * 4 - 24);
        *(edi + ecx * 4 - 24) = eax;
        eax = *(esi + ecx * 4 - 20);
        *(edi + ecx * 4 - 20) = eax;
        eax = *(esi + ecx * 4 - 16);
        *(edi + ecx * 4 - 16) = eax;
        eax = *(esi + ecx * 4 - 12);
        *(edi + ecx * 4 - 12) = eax;
        eax = *(esi + ecx * 4 - 8);
        *(edi + ecx * 4 - 8) = eax;
        eax = *(esi + ecx * 4 - 4);
        *(edi + ecx * 4 - 4) = eax;
        eax = ecx * 4;
        esi = esi + eax;
        edi = edi + eax;
        goto *(edx * 4 + 0x403948)[L00403958, L00403960, L0040396c, L00403980, ]goto ( *(edx * 4 + 0x403948));
        return(A8);
        al = *esi;
        *edi = al;
        esp = ebp;
        return(A8);
        al = *esi;
        *edi = al;
        al = *(esi + 1);
        *(edi + 1) = al;
        esp = ebp;
        return(A8);
        al = *esi;
        *edi = al;
        al = *(esi + 1);
        *(edi + 1) = al;
        al = *(esi + 2);
        *(edi + 2) = al;
        esp = ebp;
        return(A8);
    }
    esi = ecx + esi - 4;
    edi = ecx + edi - 4;
    if(!(edi & 3)) {
        ecx = ecx >> 2;
        edx = edx & 3;
        if(ecx >= 8) {
            asm("std");
            asm("rep movsd");
            asm("cld");
            goto *(edx * 4 + 0x403ae0)[L00403af0, L00403af8, L00403b08, L00403b1c, ]goto ( *(edx * 4 + 0x403ae0));
        }
L004039c0:
        ecx = ~ecx;
        goto *(ecx * 4 + 0x403a90)[L00403ad7, ]goto ( *(ecx * 4 + 0x403a90));
    }
    eax = edi;
    edx = 3;
    if(ecx >= 4) {
        eax = eax & 3;
        ecx = ecx - eax;
        goto ( *(eax * 4 + 0x4039e8));
    }
    goto *(ecx * 4 + 0x403ae0)[L00403af0, L00403af8, L00403b08, L00403b1c, ]goto ( *(ecx * 4 + 0x403ae0));
    asm("clc");
    *eax :: eax;
    asm("sbb [edx],bh");
    eax = eax + 1;
    *(eax + 58) = *(eax + 58) + al;
    eax = eax + 1;
    *(edx + -786234554) = *(edx + -786234554) + cl;
    *(edi + 3) = al;
    esi = esi - 1;
    ecx = ecx >> 2;
    edi = edi - 1;
    if(ecx < 8) {
        goto L004039c0;
    }
    asm("std");
    asm("rep movsd");
    asm("cld");
    goto *(edx * 4 + 0x403ae0)[L00403af0, L00403af8, L00403b08, L00403b1c, ]goto ( *(edx * 4 + 0x403ae0));
    al = *(esi + 3);
    edx = edx & ecx;
    *(edi + 3) = al;
    al = *(esi + 2);
    ecx = ecx >> 2;
    *(edi + 2) = al;
    esi = esi - 2;
    edi = edi - 2;
    if(ecx < 8) {
        goto L004039c0;
    }
    asm("std");
    asm("rep movsd");
    asm("cld");
    goto *(edx * 4 + 0x403ae0)[L00403af0, L00403af8, L00403b08, L00403b1c, ]goto ( *(edx * 4 + 0x403ae0));
    al = *(esi + 3);
    edx = edx & ecx;
    *(edi + 3) = al;
    al = *(esi + 2);
    *(edi + 2) = al;
    al = *(esi + 1);
    ecx = ecx >> 2;
    *(edi + 1) = al;
    esi = esi - 3;
    edi = edi - 3;
    if(ecx < 8) {
        goto L004039c0;
    }
    asm("std");
    asm("rep movsd");
    asm("cld");
    goto *(edx * 4 + 0x403ae0)[L00403af0, L00403af8, L00403b08, L00403b1c, ]goto ( *(edx * 4 + 0x403ae0));
    asm("xchg eax,esp");
    al :: *eax;
    asm("pushf");
    al :: *eax;
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    al :: *eax;
    al = *esi;
    esi = esi + 1;
    al :: *eax;
    *(edx + edi + 985923648) = *(edx + edi + 985923648) + bh;
    bh = bh + dl;
    60 :: *L0000003C;
    *(edi + ecx * 4 + 28) = *(esi + ecx * 4 + 28);
    *(edi + ecx * 4 + 24) = *(esi + ecx * 4 + 24);
    *(edi + ecx * 4 + 20) = *(esi + ecx * 4 + 20);
    *(edi + ecx * 4 + 16) = *(esi + ecx * 4 + 16);
    *(edi + ecx * 4 + 12) = *(esi + ecx * 4 + 12);
    *(edi + ecx * 4 + 8) = *(esi + ecx * 4 + 8);
    *(edi + ecx * 4 + 4) = *(esi + ecx * 4 + 4);
    eax = ecx * 4;
    esi = esi + eax;
    edi = edi + eax;
    goto *(edx * 4 + 0x403ae0)[L00403af0, L00403af8, L00403b08, L00403b1c, ]goto ( *(edx * 4 + 0x403ae0));
    esp = ebp;
    return(A8);
}

stack space not deallocated on return
/*	Procedure: 0x00403AF7 - 0x00403B04
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403AF7()
{



    *(edi + 3) = *(esi + 3);
    eax = *(ebp + 8);
    (restore)esi;
    (restore)edi;
    esp = ebp;
    (restore)ebp;
}

stack space not deallocated on return
/*	Procedure: 0x00403B05 - 0x00403B1A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403B05()
{



    *(edi + 3) = *(esi + 3);
    *(edi + 2) = *(esi + 2);
    eax = *(ebp + 8);
    (restore)esi;
    (restore)edi;
    esp = ebp;
    (restore)ebp;
}

stack space not deallocated on return
/*	Procedure: 0x00403B1B - 0x00403B34
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403B1B()
{



    *(edi + 3) = *(esi + 3);
    *(edi + 2) = *(esi + 2);
    *(edi + 1) = *(esi + 1);
    eax = *(ebp + 8);
    (restore)esi;
    (restore)edi;
    esp = ebp;
    (restore)ebp;
}

/*	Procedure: 0x00403B35 - 0x00403B3F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403B35()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x00403B40 - 0x00403B6E
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00403B40(A8)
/* unknown */ void  A8;
{



    (save)ecx;
    ecx = & A8;
    do {
        ecx = ecx - 4096;
        eax = eax - 4096;
        *ecx & eax;
    } while(eax >= 4096);
    ecx = ecx - eax;
    eax = esp;
    *ecx & eax;
    esp = ecx;
    ecx = *eax;
    eax = *(eax + 4);
    (save)eax;
}

/*	Procedure: 0x00403B6F - 0x00403B6F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00403B6F()
{



    asm("int3");
}

/*	Procedure: 0x00403B70 - 0x00403BC7
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00403B70(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    edx = Ac;
    ecx = A4;
    if(edx != 0) {
        eax = A8 & 255;
        (save)edi;
        edi = ecx;
        if(edx >= 4) {
            if(!(ecx = ~ecx & 3)) {
                edx = edx - ecx;
                do {
                    *edi = al;
                    edi = edi + 1;
                } while(ecx = ecx - 1);
            }
            ecx = eax;
            eax = (eax << 8) + ecx;
            ecx = eax;
            eax = (eax << 16) + ecx;
            ecx = edx;
            ecx = ecx >> 2;
            if(!(edx = edx & 3)) {
                asm("rep stosd");
                if(edx == 0) {
                    goto L00403bbd;
                }
            }
        }
        do {
            *edi = al;
            edi = edi + 1;
        } while(edx = edx - 1);
L00403bbd:
        (restore)edi;
        return(A4);
    }
    return(A4);
}

/* DEST BLOCK NOT FOUND: 00403bc8 -> 00403bb7 */
/*	Procedure: 0x00403BC8 - 0x00403BCC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

RtlUnwind()
{



    goto ( *L0640403c);
}

/* address  size  */
/* 0x00401350       0 */ /* unknown */ void 	__entry_point__;
/* 0x004022dd       0 */ /* unknown */ void 	GetOEMCP;
/* 0x004022f2       0 */ /* unknown */ void 	GetACP;
/* 0x00403bc8       0 */ /* unknown */ void 	RtlUnwind;
/* 0x00404000       0 */ /* unknown */ void 	__imp__GetModuleFileNameA;
/* 0x00404004       0 */ /* unknown */ void 	__imp__GetStringTypeW;
/* 0x00404008       0 */ /* unknown */ void 	__imp__GetStringTypeA;
/* 0x0040400c       0 */ /* unknown */ void 	__imp__LCMapStringW;
/* 0x00404010       0 */ /* unknown */ void 	__imp__LCMapStringA;
/* 0x00404014       0 */ /* unknown */ void 	__imp__MultiByteToWideChar;
/* 0x00404018       0 */ /* unknown */ void 	__imp__LoadLibraryA;
/* 0x0040401c       0 */ /* unknown */ void 	__imp__GetProcAddress;
/* 0x00404020       0 */ /* unknown */ void 	__imp__HeapReAlloc;
/* 0x00404024       0 */ /* unknown */ void 	__imp__VirtualAlloc;
/* 0x00404028       0 */ /* unknown */ void 	__imp__HeapAlloc;
/* 0x0040402c       0 */ /* unknown */ void 	__imp__GetOEMCP;
/* 0x00404030       0 */ /* unknown */ void 	__imp__GetACP;
/* 0x00404034       0 */ /* unknown */ void 	__imp__GetCPInfo;
/* 0x00404038       0 */ /* unknown */ void 	__imp__WriteFile;
/* 0x0040403c       0 */ /* unknown */ void 	__imp__RtlUnwind;
/* 0x00404040       0 */ /* unknown */ void 	__imp__HeapFree;
/* 0x00404044       0 */ /* unknown */ void 	__imp__VirtualFree;
/* 0x00404048       0 */ /* unknown */ void 	__imp__HeapCreate;
/* 0x0040404c       0 */ /* unknown */ void 	__imp__HeapDestroy;
/* 0x00404050       0 */ /* unknown */ void 	__imp__GetFileType;
/* 0x00404054       0 */ /* unknown */ void 	__imp__GetModuleHandleA;
/* 0x00404058       0 */ /* unknown */ void 	__imp__GetStartupInfoA;
/* 0x0040405c       0 */ /* unknown */ void 	__imp__GetCommandLineA;
/* 0x00404060       0 */ /* unknown */ void 	__imp__GetVersion;
/* 0x00404064       0 */ /* unknown */ void 	__imp__ExitProcess;
/* 0x00404068       0 */ /* unknown */ void 	__imp__TerminateProcess;
/* 0x0040406c       0 */ /* unknown */ void 	__imp__GetCurrentProcess;
/* 0x00404070       0 */ /* unknown */ void 	__imp__UnhandledExceptionFilter;
/* 0x00404074       0 */ /* unknown */ void 	__imp__FreeEnvironmentStringsA;
/* 0x00404078       0 */ /* unknown */ void 	__imp__FreeEnvironmentStringsW;
/* 0x0040407c       0 */ /* unknown */ void 	__imp__WideCharToMultiByte;
/* 0x00404080       0 */ /* unknown */ void 	__imp__GetEnvironmentStrings;
/* 0x00404084       0 */ /* unknown */ void 	__imp__GetEnvironmentStringsW;
/* 0x00404088       0 */ /* unknown */ void 	__imp__SetHandleCount;
/* 0x0040408c       0 */ /* unknown */ void 	__imp__GetStdHandle;
/* 0x00404094       0 */ /* unknown */ void 	__imp__EndDialog;
/* 0x00404098       0 */ /* unknown */ void 	__imp__DefWindowProcA;
/* 0x0040409c       0 */ /* unknown */ void 	__imp__DestroyWindow;
/* 0x004040a0       0 */ /* unknown */ void 	__imp__DialogBoxParamA;
/* 0x004040a4       0 */ /* unknown */ void 	__imp__BeginPaint;
/* 0x004040a8       0 */ /* unknown */ void 	__imp__GetClientRect;
/* 0x004040ac       0 */ /* unknown */ void 	__imp__DrawTextA;
/* 0x004040b0       0 */ /* unknown */ void 	__imp__EndPaint;
/* 0x004040b4       0 */ /* unknown */ void 	__imp__PostQuitMessage;
/* 0x004040b8       0 */ /* unknown */ void 	__imp__CreateWindowExA;
/* 0x004040bc       0 */ /* unknown */ void 	__imp__ShowWindow;
/* 0x004040c0       0 */ /* unknown */ void 	__imp__UpdateWindow;
/* 0x004040c4       0 */ /* unknown */ void 	__imp__LoadIconA;
/* 0x004040c8       0 */ /* unknown */ void 	__imp__LoadCursorA;
/* 0x004040cc       0 */ /* unknown */ void 	__imp__RegisterClassExA;
/* 0x004040d0       0 */ /* unknown */ void 	__imp__LoadStringA;
/* 0x004040d4       0 */ /* unknown */ void 	__imp__LoadAcceleratorsA;
/* 0x004040d8       0 */ /* unknown */ void 	__imp__GetMessageA;
/* 0x004040dc       0 */ /* unknown */ void 	__imp__TranslateAcceleratorA;
/* 0x004040e0       0 */ /* unknown */ void 	__imp__TranslateMessage;
/* 0x004040e4       0 */ /* unknown */ void 	__imp__DispatchMessageA;
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
