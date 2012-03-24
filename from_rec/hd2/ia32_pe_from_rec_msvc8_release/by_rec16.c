/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x00401131
 *	Argument size: 8
 *	Local size: 88
 *	Save regs size: 0
 */

L00401000(A5c, A60)
/* unknown */ void  A5c;
/* unknown */ void  A60;
{
	/* unknown */ void  V0;
	/* unknown */ void  V4;
	/* unknown */ void  Vd;
	/* unknown */ void  V54;



    V54 = *L00403000 ^ esp;
    (save)ebx;
    ebx = __imp__sprintf;
    (save)ebp;
    ebp = A60;
    (save)esi;
    (save)edi;
    V0 = A5c;
    *__imp__sprintf( & V4, 4202756, ecx);
    if(ebp > 16) {
        ebp = 16;
    }
    esi = 0;
    if(ebp > 0) {
        edi = & Vd;
        do {
            *ebx(edi, 4202764, *(V0 + esi) & 255);
            esi = esi + 1;
            edi = edi + 3;
        } while(esi < ebp);
        if(esi >= 16) {
            goto L00401094;
        }
    }
    edx = *L00402114;
    ecx = 16 - esi;
    do {
        edi = & V4 - 1;
        do {
            al = *(edi + 1);
            edi = edi + 1;
        } while(al != 0);
        *edi = edx;
    } while(ecx = ecx - 1);
L00401094:
    eax = & V4;
    edx = eax + 1;
    do {
        cl = *eax;
        eax = eax + 1;
    } while(cl != 0);
    ebx = eax - edx;
    *(esp + ebx + 20) = 8134688;
    ebx = ebx + 3;
    esi = 0;
    if(ebp > 0) {
        ecx = esp + ebx + 20;
        do {
            al = *(V0 + esi);
            if(al >= 32) {
                al :: 126;
                if(eax = al & 255) {
                    goto L004010d7;
                }
            }
            eax = 46;
L004010d7:
            *(ecx + esi) = al;
            esi = esi + 1;
        } while(esi < ebp);
        if(esi >= 16) {
            goto L00401100;
        }
    }
    edi = 16 - esi;
    memset(esp + ebx + esi + 24, 32, edi);
    esi = esi + edi;
L00401100:
    *(esp + ebx + esi + 28) = 124;
    *__imp__printf(4202776, & V4);
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    ecx = V54 ^ esp;
    return(L0040123B());
}

/*	Procedure: 0x00401132 - 0x0040113F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401132()
{



}

/*	Procedure: 0x00401140 - 0x004011FB
 *	Argument size: 0
 *	Local size: 76
 *	Save regs size: 0
 */

L00401140()
{
	/* unknown */ void  V0;
	/* unknown */ void  V14;
	/* unknown */ void  V34;
	/* unknown */ void  V44;



    V44 = *L00403000 ^ esp;
    (save)ebx;
    (save)ebp;
    (save)esi;
    (save)edi;
    esi = ecx;
    if(*__imp___stat64i32(esi, & V0) != 0) {
L00401167:
        *__imp__perror(esi);
        eax = 1;
        (restore)edi;
        (restore)esi;
        (restore)ebp;
        (restore)ebx;
        ecx = V44 ^ esp;
        return(L0040123B());
    }
    edi = *__imp__fopen(esi, 4202780);
    if(edi == 0) {
        goto L00401167;
    }
    ebp = 0;
    if(V14 > 0) {
        ebx = __imp__fread;
        do {
            esi = *ebx( & V34, 1, 16, edi);
            if(esi == 0) {
                break;
            }
            ecx = ebp;
            L00401000( & V34, esi);
            ebp = ebp + esi;
        } while(ebp < V14);
    }
    *__imp__fclose(edi);
    (restore)edi;
    (restore)esi;
    (restore)ebp;
    (restore)ebx;
    ecx = V44 ^ esp;
    eax = 0;
    esp = esp + 76;
    return(L0040123B());
}

/*	Procedure: 0x004011FC - 0x004011FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004011FC()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00401200 - 0x0040123A
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L00401200(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    esp = esp & -8;
    (save)ecx;
    (save)A8;
    (save)esi;
    (save)edi;
    edi = 0;
    esi = 1;
    if(A8 > 1) {
        do {
            ecx = *(Ac + esi * 4);
            esi = esi + 1;
            edi = edi + L00401140();
        } while(esi < A8);
    }
    eax = edi;
    (restore)edi;
    (restore)esi;
    (restore)A8;
}

/* DEST BLOCK NOT FOUND: 00401245 -> 004014f6 */
stack space not deallocated on return
/*	Procedure: 0x0040123B - 0x004014EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040123B()
{



    if(ecx == *L00403000) {
        asm("rep ret");
    }
    goto L004014f6;
    (save)0x401734;
    L004016F7();
    *esp = 0x40302c;
    (save) *L0040335C;
    *L0040302C = *L00403360;
    (save)0x40301c;
    (save)0x403020;
    (save)0x403018;
    eax = *__imp____getmainargs();
    esp = esp + 20;
    *L00403028 = eax;
    if(eax < 0) {
        eax = _amsg_exit(8);
    }
    return;
    (save)16;
    (save)4202968;
    L004018BC();
    ebx = 0;
    *(ebp - 4) = 0;
    esi = *( *%fs:0x18] + 4);
    *(ebp - 28) = 0;
    edi = 4207476;
L004012b7:
    (save)ebx;
    (save)esi;
    (save)edi;
    eax = *__imp__InterlockedCompareExchange();
    if(eax != ebx) {
        if(eax == esi) {
            esi = 1;
            *(ebp - 28) = 1;
            goto L004012e0;
        }
        (save)1000;
        *__imp__Sleep();
        goto L004012b7;
    }
    esi = 1;
L004012e0:
    if(*L00403370 == esi) {
        _amsg_exit(31);
    } else {
        if(*L00403370 != 0) {
            goto L00401328;
        }
        *L00403370 = esi;
        if(_initterm_e(4202704, 4202716) != 0) {
            *(ebp - 4) = -2;
            eax = 255;
            goto L00401405;
L00401328:
            *L00403034 = esi;
        }
    }
    if(*L00403370 == esi) {
        _initterm(4202692, 4202700);
        *L00403370 = 2;
    }
    if(*(ebp - 28) == ebx) {
        (save)ebx;
        (save)edi;
        *__imp__InterlockedExchange();
    }
    if(*L00403380 != ebx && L004017F0(4207488) != 0) {
        (save)ebx;
        (save)2;
        (save)ebx;
        *L00403380();
    }
    *__imp____initenv = *L0040301C;
    (save) *L0040301C;
    eax = L00401200( *L00403018, *L00403020);
    *L00403030 = eax;
    if(*L00403024 == ebx) {
        (save)eax;
        *__imp__exit();
        eax = *(ebp - 20);
        ecx = *( *eax);
        *(ebp - 32) = ecx;
        return(_XcptFilter( *(ebp - 32), eax));
        esp = *(ebp - 24);
        eax = *(ebp - 32);
        *L00403030 = eax;
        ebx = 0;
        if(*L00403024 == 0) {
            (save)eax;
            *__imp___exit();
        }
    }
    if(*L00403034 == ebx) {
        *__imp___cexit();
    }
    *(ebp - 4) = -2;
    eax = *L00403030;
L00401405:
    return(L00401901());
    if(*L00400000 != 23117) {
L00401419:
        eax = 0;
    } else {
        eax = *L0040003C + 4194304;
        if(*eax != 17744) {
            goto L00401419;
        }
        ecx = *(eax + 24) & 65535;
        if(ecx != 267) {
            if(ecx != 523 || *(eax + 132) <= 14) {
                goto L00401419;
            }
            ecx = 0;
            *(eax + 248) :: 0;
        } else {
            if(*(eax + 116) <= 14) {
                goto L00401419;
            }
            ecx = 0;
        }
        cl = 0;
        eax = ecx;
    }
    *L00403024 = eax;
    *__imp____set_app_type();
    eax = *__imp___encode_pointer(-1, 1);
    *L00403378 = eax;
    *L0040337C = *L00403378;
    *( *__imp____p__fmode()) = *L00403368;
    *( *__imp____p__commode()) = *L00403364;
    *L0040336C = *__imp___adjust_fdiv;
    L0040170E();
    L00401965();
    if(*L00403014 == 0) {
        *__imp____setusermatherr(0x401965);
    }
    L0040193A();
    if(*L00403010 == -1) {
        *__imp___configthreadlocale(-1);
    }
    return(0);
}

/* DEST BLOCK NOT FOUND: 004014f1 -> 00401295 */
stack space not deallocated on return
/*	Procedure: 0x004014EC - 0x004015FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    eax = L00401968();
    goto L00401295;
    (save)ebp;
    ebp = esp;
    esp = esp - 808;
    *L00403140 = eax;
    *L0040313C = ecx;
    *L00403138 = edx;
    *L00403134 = ebx;
    *L00403130 = esi;
    *L0040312C = edi;
    *L00403158 = ss;
    *L0040314C = cs;
    *L00403128 = ds;
    *L00403124 = es;
    *L00403120 = fs;
    *L0040311C = gs;
    asm("pushf");
    (restore) *L00403150;
    *L00403144 = *ebp;
    *L00403148 = *(ebp + 4);
    *L00403154 = ebp + 8;
    eax = *(ebp + -800);
    *L00403090 = 65537;
    *L00403044 = *L00403148;
    *L00403038 = -1073740791;
    *L0040303C = 1;
    *(ebp + -808) = *L00403000;
    *(ebp + -804) = *L00403004;
    *L00403088 = *__imp__IsDebuggerPresent();
    _crt_debugger_hook(1);
    (save)0;
    *__imp__SetUnhandledExceptionFilter();
    (save)4202748;
    *__imp__UnhandledExceptionFilter();
    if(*L00403088 == 0) {
        _crt_debugger_hook(1);
    }
    (restore)ebp;
    return(*__imp__TerminateProcess( *__imp__GetCurrentProcess(), -1073740791));
}

/*	Procedure: 0x004015FC - 0x0040163D
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004015FC(A8)
/* unknown */ void  A8;
{



    eax = *A8;
    if(*eax == -529697949 && *(eax + 16) == 3) {
        eax = *(eax + 20);
        if(eax == 429065504 || eax == 429065505 || eax == 429065506) {
            goto L00401633;
        }
        if(eax == 26820608) {
L00401633:
            ?terminate();
        }
    }
    return(0);
}

stack space not deallocated on return
/*	Procedure: 0x0040163E - 0x0040164B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040163E()
{



    *__imp__SetUnhandledExceptionFilter(0x4015fc);
    return(0);
}

/* DEST BLOCK NOT FOUND: 0040164c -> 00401a04 */
/*	Procedure: 0x0040164C - 0x00401651
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_amsg_exit()
{



    goto ( *__imp___amsg_exit);
}

stack space not deallocated on return
/*	Procedure: 0x00401652 - 0x004016ED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401652()
{



    (save)20;
    (save)4203000;
    L004018BC();
    esi = __imp___decode_pointer;
    eax = *__imp___decode_pointer( *L0040337C);
    *(ebp - 28) = eax;
    if(*(ebp - 28) == -1) {
        *__imp___onexit( *(ebp + 8));
    } else {
        _lock(8);
        *(ebp - 4) = 0;
        (save) *L0040337C;
        *(ebp - 28) = *esi();
        (save) *L00403378;
        eax = *esi();
        (restore)ecx;
        *(ebp - 32) = eax;
        (save)ebp - 32;
        (save)ebp - 28;
        esi = __imp___encode_pointer;
        (save) *__imp___encode_pointer( *(ebp + 8));
        *(ebp - 36) = __dllonexit();
        (save) *(ebp - 28);
        *L0040337C = *esi();
        (save) *(ebp - 32);
        eax = *esi();
        esp = esp + 20;
        *L00403378 = eax;
        *(ebp - 4) = -2;
        L004016EE();
        eax = *(ebp - 36);
    }
    return(L00401901());
}

/*	Procedure: 0x004016EE - 0x004016F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004016EE()
{



    return(_unlock(8));
}

/*	Procedure: 0x004016F7 - 0x0040170D
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004016F7(A8)
/* unknown */ void  A8;
{



    eax = ~(L00401652(A8));
    asm("sbb eax,eax");
    return(~eax - 1);
}

/*	Procedure: 0x0040170E - 0x00401759
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 8
 */

L0040170E()
{
	/* unknown */ void  esi;
	/* unknown */ void  edi;



    eax = 4202952;
    esi = 4202952;
    edi = 4202952;
    if(4202952 < 4202952) {
        do {
            eax = *edi;
            if(eax != 0) {
                eax = *eax();
            }
            edi = edi + 4;
        } while(edi < esi);
    }
    return;
    (save)esi;
    eax = 4202960;
    esi = 4202960;
    (save)edi;
    edi = 4202960;
    if(4202960 < 4202960) {
L00401748:
        eax = *edi;
        if(eax != 0) {
            eax = *eax();
        }
        edi = edi + 4;
        if(edi < esi) {
            goto L00401748;
        }
    }
}

/* DEST BLOCK NOT FOUND: 0040175a -> 00401748 */
/*	Procedure: 0x0040175A - 0x0040175F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_XcptFilter()
{



    goto ( *__imp___XcptFilter);
}

/*	Procedure: 0x00401760 - 0x0040179F
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L00401760(A8)
/* unknown */ void  A8;
{



    if(*A8 != 23117) {
L00401772:
        return(0);
    }
    eax = *(A8 + 60) + A8;
    if(*eax != 17744) {
        goto L00401772;
    }
    return(0 & 255);
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

/*	Procedure: 0x004017A0 - 0x004017EF
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L004017A0(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    eax = A8;
    ecx = *(eax + 60) + eax;
    eax = *(ecx + 20) & 65535;
    (save)ebx;
    (save)esi;
    esi = *(ecx + 6) & 65535;
    edx = 0;
    (save)Ac;
    eax = eax + ecx + 24;
    if(esi > 0) {
        do {
            ecx = *(eax + 12);
            if(Ac >= ecx && Ac < *(eax + 8) + ecx) {
                goto L004017df;
            }
            edx = edx + 1;
            eax = eax + 40;
        } while(edx < esi);
    }
    eax = 0;
L004017df:
    (restore)Ac;
    (restore)esi;
    (restore)ebx;
    return;
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

stack space not deallocated on return
/*	Procedure: 0x004017F0 - 0x004018AD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004017F0()
{



    (save)ebp;
    ebp = esp;
    (save)-2;
    (save)4203032;
    (save)0x401915;
    (save) *%fs:0x0];
    esp = esp - 8;
    (save)ebx;
    (save)esi;
    (save)edi;
    eax = *L00403000;
    *(ebp - 8) = *(ebp - 8) ^ eax;
    (save)eax ^ ebp;
    *%fs:0x0] = ebp - 16;
    *(ebp - 24) = esp;
    *(ebp - 4) = 0;
    if(L00401760(4194304) != 0) {
        eax = L004017A0(4194304, *(ebp + 8) - 4194304);
        if(eax != 0) {
            eax = !( *(eax + 36) >> 31) & 1;
            *(ebp - 4) = -2;
            *%fs:0x0] = *(ebp - 16);
            (restore)ecx;
            (restore)edi;
            (restore)esi;
            (restore)ebx;
            esp = ebp;
            (restore)ebp;
            return;
            eax = *( *( *(ebp - 20)));
            return(0 & 255);
            esp = *(ebp - 24);
        }
    }
    *(ebp - 4) = -2;
    *%fs:0x0] = *(ebp - 16);
    (restore)ecx;
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    esp = ebp;
    (restore)ebp;
    return(0);
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 004018ae -> 00401892 */
/*	Procedure: 0x004018AE - 0x004018B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_initterm()
{



    goto ( *__imp___initterm);
}

/* DEST BLOCK NOT FOUND: 004018b4 -> 00401892 */
/*	Procedure: 0x004018B4 - 0x004018BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_initterm_e()
{



    goto ( *__imp___initterm_e);
    asm("int3");
    asm("int3");
}

stack space not deallocated on return
/*	Procedure: 0x004018BC - 0x00401900
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L004018BC(A10)
/* unknown */ void  A10;
{



    (save)0x401915;
    (save) *%fs:0x0];
    eax = A10;
    A10 = ebp;
    ebp = & A10;
    esp = esp - eax;
    (save)ebx;
    (save)esi;
    (save)edi;
    eax = *L00403000;
    *(ebp - 4) = *(ebp - 4) ^ eax;
    (save)eax ^ ebp;
    *(ebp - 24) = esp;
    (save) *(ebp - 8);
    eax = *(ebp - 4);
    *(ebp - 4) = -2;
    *(ebp - 8) = eax;
    eax = ebp - 16;
    *%fs:0x0] = eax;
    return(*%fs:0x0]);
}

stack space not deallocated on return
/*	Procedure: 0x00401901 - 0x00401939
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401901()
{



    ecx = *(ebp - 16);
    *%fs:0x0] = ecx;
    (restore)ecx;
    (restore)edi;
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    esp = ebp;
    (restore)ebp;
    (save)ecx;
    return;
    (save)ebp;
    ebp = esp;
    eax = _except_handler4_common(0x403000, 0x40123b, *(ebp + 8), *(ebp + 12), *(ebp + 16), *(ebp + 20));
    (restore)ebp;
}

/*	Procedure: 0x0040193A - 0x00401964
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L0040193A()
{
	/* unknown */ void  esi;



    esi = 0;
    eax = _controlfp_s(0, 65536, 196608);
    if(eax != 0) {
        eax = _invoke_watson(esi, esi, esi, esi, esi);
    }
}

/*	Procedure: 0x00401965 - 0x00401967
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401965()
{



    return(0);
}

/*	Procedure: 0x00401968 - 0x004019FD
 *	Argument size: -16
 *	Local size: 16
 *	Save regs size: 0
 */

L00401968()
{
	/* unknown */ void  Vfffffff0;
	/* unknown */ void  Vfffffff4;
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    eax = *L00403000;
    Vfffffff8 = 0;
    Vfffffffc = 0;
    (save)ebx;
    (save)edi;
    edi = -1153374642;
    ebx = -65536;
    if(eax != -1153374642) {
        if(-65536 & eax) {
            goto L0040199a;
        }
        eax = !eax;
        *L00403004 = eax;
    } else {
L0040199a:
        (save)esi;
        (save) & Vfffffff8;
        *__imp__GetSystemTimeAsFileTime();
        esi = Vfffffffc ^ Vfffffff8;
        esi = esi ^ *__imp__GetCurrentProcessId();
        esi = esi ^ *__imp__GetCurrentThreadId();
        esi = esi ^ *__imp__GetTickCount();
        *__imp__QueryPerformanceCounter( & Vfffffff0);
        eax = Vfffffff4 ^ Vfffffff0;
        esi = esi ^ eax;
        if(esi == edi) {
            esi = -1153374641;
        } else {
            if(!(ebx & esi)) {
                eax = esi << 16;
                esi = esi | eax;
            }
        }
        *L00403000 = esi;
        *L00403004 = !esi;
        (restore)esi;
    }
    (restore)edi;
    (restore)ebx;
}

/* DEST BLOCK NOT FOUND: 004019fe -> 004019eb */
/*	Procedure: 0x004019FE - 0x00401A03
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_crt_debugger_hook()
{



    goto ( *__imp___crt_debugger_hook);
}

/* DEST BLOCK NOT FOUND: 00401a04 -> 004019eb */
/*	Procedure: 0x00401A04 - 0x00401A09
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

?terminate()
{



    goto ( *__imp__?terminate);
}

/* DEST BLOCK NOT FOUND: 00401a0a -> 004019eb */
/*	Procedure: 0x00401A0A - 0x00401A0F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_unlock()
{



    goto ( *__imp___unlock);
}

/* DEST BLOCK NOT FOUND: 00401a10 -> 004019eb */
/*	Procedure: 0x00401A10 - 0x00401A15
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__dllonexit()
{



    goto ( *__imp____dllonexit);
}

/* DEST BLOCK NOT FOUND: 00401a16 -> 004019eb */
/*	Procedure: 0x00401A16 - 0x00401A1B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_lock()
{



    goto ( *__imp___lock);
}

/* DEST BLOCK NOT FOUND: 00401a1c -> 004019eb */
/*	Procedure: 0x00401A1C - 0x00401A21
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_except_handler4_common()
{



    goto ( *__imp___except_handler4_common);
}

/* DEST BLOCK NOT FOUND: 00401a22 -> 004019eb */
/*	Procedure: 0x00401A22 - 0x00401A27
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_invoke_watson()
{



    goto ( *__imp___invoke_watson);
}

/* DEST BLOCK NOT FOUND: 00401a28 -> 004019eb */
/*	Procedure: 0x00401A28 - 0x00401A2D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_controlfp_s()
{



    goto ( *__imp___controlfp_s);
}

/* DEST BLOCK NOT FOUND: 00401a2e -> 004019eb */
/*	Procedure: 0x00401A2E - 0x00401A32
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

memset()
{



    goto ( *__imp__memset);
}

/* address  size  */
/* 0x004014ec       0 */ /* unknown */ void 	__entry_point__;
/* 0x0040164c       0 */ /* unknown */ void 	_amsg_exit;
/* 0x0040175a       0 */ /* unknown */ void 	_XcptFilter;
/* 0x004018ae       0 */ /* unknown */ void 	_initterm;
/* 0x004018b4       0 */ /* unknown */ void 	_initterm_e;
/* 0x004019fe       0 */ /* unknown */ void 	_crt_debugger_hook;
/* 0x00401a04       0 */ /* unknown */ void 	?terminate;
/* 0x00401a0a       0 */ /* unknown */ void 	_unlock;
/* 0x00401a10       0 */ /* unknown */ void 	__dllonexit;
/* 0x00401a16       0 */ /* unknown */ void 	_lock;
/* 0x00401a1c       0 */ /* unknown */ void 	_except_handler4_common;
/* 0x00401a22       0 */ /* unknown */ void 	_invoke_watson;
/* 0x00401a28       0 */ /* unknown */ void 	_controlfp_s;
/* 0x00401a2e       0 */ /* unknown */ void 	memset;
/* 0x00402000       0 */ /* unknown */ void 	__imp__GetCurrentProcessId;
/* 0x00402004       0 */ /* unknown */ void 	__imp__GetCurrentThreadId;
/* 0x00402008       0 */ /* unknown */ void 	__imp__GetTickCount;
/* 0x0040200c       0 */ /* unknown */ void 	__imp__QueryPerformanceCounter;
/* 0x00402010       0 */ /* unknown */ void 	__imp__IsDebuggerPresent;
/* 0x00402014       0 */ /* unknown */ void 	__imp__SetUnhandledExceptionFilter;
/* 0x00402018       0 */ /* unknown */ void 	__imp__UnhandledExceptionFilter;
/* 0x0040201c       0 */ /* unknown */ void 	__imp__GetCurrentProcess;
/* 0x00402020       0 */ /* unknown */ void 	__imp__TerminateProcess;
/* 0x00402024       0 */ /* unknown */ void 	__imp__InterlockedCompareExchange;
/* 0x00402028       0 */ /* unknown */ void 	__imp__Sleep;
/* 0x0040202c       0 */ /* unknown */ void 	__imp__InterlockedExchange;
/* 0x00402030       0 */ /* unknown */ void 	__imp__GetSystemTimeAsFileTime;
/* 0x00402038       0 */ /* unknown */ void 	__imp___initterm;
/* 0x0040203c       0 */ /* unknown */ void 	__imp___initterm_e;
/* 0x00402040       0 */ /* unknown */ void 	__imp___configthreadlocale;
/* 0x00402044       0 */ /* unknown */ void 	__imp____setusermatherr;
/* 0x00402048       0 */ /* unknown */ void 	__imp___adjust_fdiv;
/* 0x0040204c       0 */ /* unknown */ void 	__imp____p__commode;
/* 0x00402050       0 */ /* unknown */ void 	__imp____p__fmode;
/* 0x00402054       0 */ /* unknown */ void 	__imp___encode_pointer;
/* 0x00402058       0 */ /* unknown */ void 	__imp____set_app_type;
/* 0x0040205c       0 */ /* unknown */ void 	__imp____initenv;
/* 0x00402060       0 */ /* unknown */ void 	__imp__?terminate;
/* 0x00402064       0 */ /* unknown */ void 	__imp___unlock;
/* 0x00402068       0 */ /* unknown */ void 	__imp____dllonexit;
/* 0x0040206c       0 */ /* unknown */ void 	__imp___lock;
/* 0x00402070       0 */ /* unknown */ void 	__imp___onexit;
/* 0x00402074       0 */ /* unknown */ void 	__imp___decode_pointer;
/* 0x00402078       0 */ /* unknown */ void 	__imp___except_handler4_common;
/* 0x0040207c       0 */ /* unknown */ void 	__imp___invoke_watson;
/* 0x00402080       0 */ /* unknown */ void 	__imp___controlfp_s;
/* 0x00402084       0 */ /* unknown */ void 	__imp__exit;
/* 0x00402088       0 */ /* unknown */ void 	__imp___XcptFilter;
/* 0x0040208c       0 */ /* unknown */ void 	__imp___exit;
/* 0x00402090       0 */ /* unknown */ void 	__imp___cexit;
/* 0x00402094       0 */ /* unknown */ void 	__imp____getmainargs;
/* 0x00402098       0 */ /* unknown */ void 	__imp___amsg_exit;
/* 0x0040209c       0 */ /* unknown */ void 	__imp___stat64i32;
/* 0x004020a0       0 */ /* unknown */ void 	__imp__fclose;
/* 0x004020a4       0 */ /* unknown */ void 	__imp__fread;
/* 0x004020a8       0 */ /* unknown */ void 	__imp__fopen;
/* 0x004020ac       0 */ /* unknown */ void 	__imp__printf;
/* 0x004020b0       0 */ /* unknown */ void 	__imp__perror;
/* 0x004020b4       0 */ /* unknown */ void 	__imp___crt_debugger_hook;
/* 0x004020b8       0 */ /* unknown */ void 	__imp__sprintf;
/* 0x004020bc       0 */ /* unknown */ void 	__imp__memset;
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
