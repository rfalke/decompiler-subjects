/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_decompiler.sf.net/fib/ia32_pe_from_decompiler.sf.net/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x0040102B
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 4
 */

L00401000(A8)
/* unknown */ void  A8;
{



    if(A8 < 1) {
        return(1);
    }
    (save)edi;
    (save)A8 - 2;
    (save)A8 - 1;
    edi = L00401000();
    esp = esp + 8;
    eax = L00401000() + edi;
    (restore)edi;
}

/* DEST BLOCK NOT FOUND: 00401038 -> 00401047 */
/*	Procedure: 0x0040102C - 0x00401047
 *	Argument size: 4
 *	Local size: 0
 *	Save regs size: 0
 */

L0040102C(A4)
/* unknown */ void  A4;
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    if(*A4 != 0) {
        do {
            ecx = ecx + 1;
            eax = eax + 1;
        } while(*ecx != 0);
    }
}

/*	Procedure: 0x00401048 - 0x0040104F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401048()
{



    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
    asm("int3");
}

/*	Procedure: 0x00401050 - 0x00401096
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 0
 */

L00401050(A4, A8, Ac)
/* unknown */ void  A4;
/* unknown */ void  A8;
/* unknown */ void  Ac;
{



    ecx = A8;
    eax = Ac;
    (save)edi;
    edi = ecx + eax - 1;
    if(ecx < edi) {
        (save)ebx;
        (save)esi;
        esi = A4;
        do {
            eax = -858993459;
            asm("mul esi");
            edx = edx >> 3;
            ebx = edx + edx * 4 + edx + edx * 4;
            al = esi - ebx + 48;
            *ecx = al;
            ecx = ecx + 1;
            esi = edx;
        } while(ecx < edi);
        (restore)esi;
        (restore)ebx;
    }
    *ecx = 0;
    (restore)edi;
}

/*	Procedure: 0x00401097 - 0x0040109F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401097()
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
}

/*	Procedure: 0x004010A0 - 0x004010C9
 *	Argument size: 28688
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{
	/* unknown */ void  Vffffff9c;



    esp = esp - 100;
    (save)100;
    (save) & Vffffff9c;
    ecx = L00401000(9);
    (save)ecx + L00401000(8);
    esp = esp + 112;
    return(L00401050());
}

/*	Procedure: 0x004010CB - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004010CB()
{



}

/* address  size  */
/* 0x004010a0       0 */ /* unknown */ void 	__entry_point__;
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
