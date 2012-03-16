/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x0040103F
 *	Argument size: -8
 *	Local size: 8
 *	Save regs size: 0
 */

__entry_point__()
{
	/* unknown */ void  Vfffffffe;



    if(*L00403000 != 0) {
        asm("int3");
    }
    asm("fnstcw [ebp-0x2]");
    eax = Vfffffffe & 65535 & -3904;
    Vfffffffe = ax;
    Vfffffffe = Vfffffffe & 65535 | 831;
    asm("fldcw [ebp-0x2]");
    *esp = 0x401080;
    return(L00401470());
}

/* DEST BLOCK NOT FOUND: 00401044 -> 004011d0 */
/*	Procedure: 0x00401040 - 0x00401054
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401040()
{



    (save)ebp;
    ebp = esp;
    (restore)ebp;
    goto L004011d0;
    (save)esp;
    > ? L004010c2 : ;
    *eax = *eax & eax;
}

/* DEST BLOCK NOT FOUND: 00401301 -> 00401310 */
/*	Procedure: 0x00401160 - 0x0040130F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 4
 */

L00401160(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebp;



    eax = 0;
    asm("cld");
    esp = esp - 8;
    ecx = 12;
    *esp = ebx;
    ebx = A8;
    A8 = edi;
    edi = ebx;
    asm("rep stosd");
    *ebx = 48;
    *(ebx + 36) = -1;
    *(ebx + 4) = abort;
    *(ebx + 20) = *L00402000;
    *(ebx + 8) = 0x401140;
    *(ebx + 28) = 0;
    *(ebx + 32) = *L00403010;
    eax = *L00402004;
    *(ebx + 44) = *L00402008;
    *(ebx + 40) = eax;
    ebx = *esp;
    edi = A8;
    return;
    (save)ebp;
    ebp = esp;
    esp = esp - 88;
    *(ebp - 8) = esi;
    eax = *L00403040;
    *(ebp - 4) = edi;
    if(eax != 0) {
L004011e5:
        esi = *(ebp - 8);
        edi = *(ebp - 4);
        esp = ebp;
        return;
    }
    asm("cld");
    esi = "-LIBGCCW32-EH-SJLJ-GTHR-CYGWIN";
    *(ebp - 72) = 1094795585;
    edi = ebp - 40;
    ecx = 7;
    *(ebp - 68) = 1094795585;
    *(ebp - 64) = 1094795585;
    *(ebp - 60) = 1094795585;
    *(ebp - 56) = 1094795585;
    *(ebp - 52) = 1094795585;
    *(ebp - 48) = 1094795585;
    *(ebp - 44) = 1094795585;
    eax = *"IN" & 65535;
    asm("rep movsd");
    *edi = ax;
    *(edi + 2) = *"" & 255;
    edi = ebp - 72;
    *esp = edi;
    FindAtomA();
    eax = ax & 65535;
    esp = esp - 4;
    if(ax == 0) {
        *esp = 48;
        eax = malloc();
        esi = eax;
        if(eax == 0) {
            goto L004012fc;
        }
        *esp = eax;
        L00401160();
        *esp = esi;
        L00401310();
        if(ax != 0) {
            Ac = 0x401410;
            A8 = 0;
            *esp = 0;
            pthread_atfork();
L004012b0:
            *L00403040 = esi;
            *L00403030 = esi + 4;
            eax = esi + 8;
            *L00403050 = eax;
            goto L004011e5;
        }
        *esp = esi;
        free();
        *esp = edi;
        FindAtomA();
        esp = esp - 4;
        eax = ax & 65535;
    }
    *esp = eax;
    esi = L004013A0();
    goto L004012b0;
L004012fc:
    abort();
    goto L00401310;
}

stack space not deallocated on return
/*	Procedure: 0x00401310 - 0x0040139F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

L00401310()
{
	/* unknown */ void  ebp;



    eax = 31;
    ebp = esp;
    (save)edi;
    edx = 1;
    (save)esi;
    (save)ebx;
    esp = esp - 92;
    ebx = *(ebp + 8);
    do {
        cl = 65;
        if(!(edx & ebx)) {
            cl = 97;
        }
        *(eax + ebp - 88) = cl;
        edx = edx + edx;
    } while(eax = eax - 1);
    asm("cld");
    esi = "-LIBGCCW32-EH-SJLJ-GTHR-CYGWIN";
    edi = ebp - 56;
    eax = *"IN" & 65535;
    ecx = 7;
    asm("rep movsd");
    *edi = ax;
    *(edi + 2) = *"" & 255;
    *esp = ebp - 88;
    AddAtomA();
    esi = ax & 65535;
    esp = esp - 4;
    if(si == 0) {
L0040137b:
        edx = 0;
L0040137d:
        esp = ebp - 12;
        eax = edx;
        (restore)ebx;
        (restore)esi;
        (restore)edi;
        return;
    }
    *esp = esi;
    edx = esi;
    if(L004013A0() != ebx) {
        goto L0040137b;
    }
    goto L0040137d;
}

/*	Procedure: 0x004013A0 - 0x0040143F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 0
 */

L004013A0(A4, A8)
/* unknown */ void  A4;
/* unknown */ void  A8;
{



    edx = ebp - 72;
    esp = esp - 84;
    ebx = 0;
    A8 = 63;
    A4 = edx;
    *esp = A8 & 65535;
    eax = GetAtomNameA(ebx);
    esp = esp - 12;
    if(eax != 0) {
        eax = 31;
        edx = 1;
        do {
            if(*(eax + ebp - 72) == 65) {
                ebx = ebx | edx;
            }
            edx = edx + edx;
        } while(eax = eax - 1);
        if(*ebx == 48) {
            eax = ebx;
            ebx = *(ebp - 4);
            return;
        }
    }
    abort();
    ebp = esp;
    esp = esp - 8;
    *esp = *L00403040;
    if(L00401310(ebp) != 0) {
        return;
    }
    abort();
}

/*	Procedure: 0x00401440 - 0x0040146F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401440()
{



    (save)ecx;
    for(ecx = esp + 8; eax >= 4096; eax = eax - 4096) {
        ecx = ecx - 4096;
    }
    ecx = ecx - eax;
    eax = esp;
    esp = ecx;
    ecx = *eax;
    goto ( *(eax + 4));
}

/*	Procedure: 0x00401470 - 0x004014CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401470()
{
	/* unknown */ void  Vffffff38;
	/* unknown */ void  Vffffff3c;
	/* unknown */ void  Vffffffe8;



    (save)ebp;
    ebp = esp;
    esp = esp - 24;
    *(ebp - 4) = esi;
    esi = *(ebp + 8);
    *(ebp - 8) = ebx;
    Vffffffe8 = 0;
    *esp = esi;
    esp = esp - 8;
    if(L00401530() != 0) {
        *esp = 0;
L0040149d:
        dll_crt0__FP11per_process();
    }
    esp = esp - 176;
    ebx = & Vffffff3c;
    Vffffff3c = 0;
    Vffffff38 = ebx;
    *esp = esi;
    L00401530();
    esp = esp - 8;
    *esp = ebx;
    goto L0040149d;
}

/* DEST BLOCK NOT FOUND: 004014d0 -> 0040149d */
/*	Procedure: 0x004014D0 - 0x004014DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__main()
{



    goto ( *__imp____main);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 004014e0 -> 0040149d */
/*	Procedure: 0x004014E0 - 0x004014EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

puts()
{



    goto ( *__imp__puts);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 004014f0 -> 0040149d */
/*	Procedure: 0x004014F0 - 0x004014FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

free()
{



    goto ( *__imp__free);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00401500 -> 0040149d */
/*	Procedure: 0x00401500 - 0x0040150F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pthread_atfork()
{



    goto ( *__imp__pthread_atfork);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00401510 -> 0040149d */
/*	Procedure: 0x00401510 - 0x0040151F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

malloc()
{



    goto ( *__imp__malloc);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00401520 -> 0040149d */
/*	Procedure: 0x00401520 - 0x0040152F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

abort()
{



    goto ( *__imp__abort);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/*	Procedure: 0x00401530 - 0x0040165F
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 4
 */

L00401530(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebp;



    eax = 0;
    (save)ebx;
    esp = esp - 4;
    ebx = Ac;
    if(ebx != 0) {
L00401544:
        *(ebx + 4) = 168;
        *(ebx + 8) = 1005;
        *(ebx + 12) = 9;
        *(ebx + 128) = 0;
        *(ebx + 132) = 112;
        *(ebx + 44) = 0x4017a0;
        *(ebx + 48) = 0x4017ac;
        *(ebx + 20) = 4206624;
        if(eax != 0) {
            *L00403024 = *(ebx + 164);
L00401594:
            *(ebx + 120) = 0;
            *(ebx + 72) = 0x401730;
            *(ebx + 76) = 0x401720;
            *(ebx + 40) = A8;
            *(ebx + 80) = 0x401710;
            *(ebx + 84) = 0x401700;
            *(ebx + 36) = 4206632;
            *ebx = *ebp;
            *(ebx + 24) = malloc;
            *(ebx + 28) = free;
            *(ebx + 32) = realloc;
            *(ebx + 68) = calloc;
            *esp = 0;
            *(ebx + 124) = GetModuleHandleA();
            esp = esp - 4;
            *(ebx + 52) = 0x402000;
            *(ebx + 56) = 0x402010;
            *(ebx + 60) = 4206592;
            *(ebx + 64) = 4206720;
            L004016B0();
            eax = 1;
L0040161d:
            ebx = *(ebp - 4);
            return;
        }
        *(ebx + 16) = 4206628;
        goto L00401594;
    }
    *esp = 8;
    edx = cygwin_internal();
    eax = 0;
    if(edx == -1) {
        goto L0040161d;
    }
    ebx = edx;
    eax = 1;
    goto L00401544;
}

/* DEST BLOCK NOT FOUND: 00401660 -> 00401544 */
/*	Procedure: 0x00401660 - 0x0040166F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dll_crt0__FP11per_process()
{



    goto ( *__imp__dll_crt0__FP11per_process);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/*	Procedure: 0x00401670 - 0x004016AF
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00401670(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{



    ecx = A8;
    (save)A10;
    (save)Ac;
    do {
        eax = *(ecx + 4);
        edx = A10 + eax;
        eax = *ecx;
        ecx = ecx + 8;
        *edx = *edx + eax;
    } while(ecx < Ac);
    (restore)Ac;
    (restore)A10;
}

/*	Procedure: 0x004016B0 - 0x004016DF
 *	Argument size: -16
 *	Local size: 24
 *	Save regs size: 0
 */

L004016B0(A1c, A20)
/* unknown */ void  A1c;
/* unknown */ void  A20;
{



    A20 = 4194304;
    A1c = 4206592;
    *esp = 4206592;
    return(L00401670());
}

/* DEST BLOCK NOT FOUND: 004016e0 -> 00401670 */
/*	Procedure: 0x004016E0 - 0x004016EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

calloc()
{



    goto ( *__imp__calloc);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 004016f0 -> 00401670 */
/*	Procedure: 0x004016F0 - 0x0040173F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

realloc()
{



    goto ( *__imp__realloc);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    (save)ebp;
    ebp = esp;
    (restore)ebp;
    return;
    (save)ebp;
    ebp = esp;
    (restore)ebp;
    return;
    (save)ebp;
    ebp = esp;
    (restore)ebp;
    return;
    (save)ebp;
    ebp = esp;
    (restore)ebp;
}

/* DEST BLOCK NOT FOUND: 00401740 -> 00401670 */
/*	Procedure: 0x00401740 - 0x0040174F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cygwin_internal()
{



    goto ( *__imp__cygwin_internal);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00401750 -> 00401670 */
/*	Procedure: 0x00401750 - 0x0040175F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

FindAtomA()
{



    goto ( *__imp__FindAtomA);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00401760 -> 00401670 */
/*	Procedure: 0x00401760 - 0x0040176F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

AddAtomA()
{



    goto ( *__imp__AddAtomA);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00401770 -> 00401670 */
/*	Procedure: 0x00401770 - 0x0040177F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetAtomNameA()
{



    goto ( *__imp__GetAtomNameA);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00401780 -> 00401670 */
/* DEST BLOCK NOT FOUND: 00401794 -> 00401040 */
/*	Procedure: 0x00401780 - 0x004017AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetModuleHandleA()
{



    goto ( *__imp__GetModuleHandleA);
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    (save)ebp;
    ebp = esp;
    (restore)ebp;
    goto L00401040;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    *( *(eax + 16407)()) = *( *(eax + 16407)()) + *(eax + 16407)();
    bh = bh + bh;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
}

/* address  size  */
/* 0x00401000       0 */ /* unknown */ void 	__entry_point__;
/* 0x004014d0       0 */ /* unknown */ void 	__main;
/* 0x004014e0       0 */ /* unknown */ void 	puts;
/* 0x004014f0       0 */ /* unknown */ void 	free;
/* 0x00401500       0 */ /* unknown */ void 	pthread_atfork;
/* 0x00401510       0 */ /* unknown */ void 	malloc;
/* 0x00401520       0 */ /* unknown */ void 	abort;
/* 0x00401660       0 */ /* unknown */ void 	dll_crt0__FP11per_process;
/* 0x004016e0       0 */ /* unknown */ void 	calloc;
/* 0x004016f0       0 */ /* unknown */ void 	realloc;
/* 0x00401740       0 */ /* unknown */ void 	cygwin_internal;
/* 0x00401750       0 */ /* unknown */ void 	FindAtomA;
/* 0x00401760       0 */ /* unknown */ void 	AddAtomA;
/* 0x00401770       0 */ /* unknown */ void 	GetAtomNameA;
/* 0x00401780       0 */ /* unknown */ void 	GetModuleHandleA;
/* 0x00404088       0 */ /* unknown */ void 	__imp____main;
/* 0x0040408c       0 */ /* unknown */ void 	__imp__abort;
/* 0x00404090       0 */ /* unknown */ void 	__imp__calloc;
/* 0x00404094       0 */ /* unknown */ void 	__imp__cygwin_internal;
/* 0x00404098       0 */ /* unknown */ void 	__imp__dll_crt0__FP11per_process;
/* 0x0040409c       0 */ /* unknown */ void 	__imp__free;
/* 0x004040a0       0 */ /* unknown */ void 	__imp__malloc;
/* 0x004040a4       0 */ /* unknown */ void 	__imp__pthread_atfork;
/* 0x004040a8       0 */ /* unknown */ void 	__imp__puts;
/* 0x004040ac       0 */ /* unknown */ void 	__imp__realloc;
/* 0x004040b8       0 */ /* unknown */ void 	__imp__AddAtomA;
/* 0x004040bc       0 */ /* unknown */ void 	__imp__FindAtomA;
/* 0x004040c0       0 */ /* unknown */ void 	__imp__GetAtomNameA;
/* 0x004040c4       0 */ /* unknown */ void 	__imp__GetModuleHandleA;
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
