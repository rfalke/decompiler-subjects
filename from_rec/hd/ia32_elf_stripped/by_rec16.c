/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: 'hd.xx'
 */

/*	Procedure: 0x080484A0 - 0x080484A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    return(L08048980());
}

/*	Procedure: 0x080484A8 - 0x080484B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484A8()
{



    (save) *L08049A00;
    goto ( *L08049a04);
    *eax = *eax + al;
    *eax = *eax + al;
}

/*	Procedure: 0x080485A0 - 0x0804861F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{
	/* unknown */ void  Vfffffff4;



    (restore)ecx;
    ebx = esp;
    eax = esp;
    esp = esp & -8;
    eax = eax + ecx + ecx + ecx + ecx + 4;
    (save)0;
    (save)0;
    (save)0;
    ebp = esp;
    (save)eax;
    (save)ebx;
    (save)ecx;
    eax = 136;
    ebx = 0;
    asm("int 0x80");
    *L080499E8 = Vfffffff4;
    __setfpucw( *L08049AC8 & 65535);
    __libc_init();
    atexit(_fini);
    _init();
    L080488E0();
    (save)eax;
    exit();
    for((restore)ebx; 1; asm("int 0x80");) {
        eax = 1;
    }
    goto L08048611;
}

/*	Procedure: 0x08048620 - 0x08048646
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

L08048620()
{
	/* unknown */ void  ebx;



    ebx = 134519288;
    if(*L080499F8 != 0) {
        do {
            eax = *( *ebx)();
            ebx = ebx + 4;
        } while(*ebx != 0);
    }
}

/*	Procedure: 0x08048647 - 0x08048656
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048647()
{



}

/*	Procedure: 0x08048657 - 0x0804865F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048657()
{



}

/*	Procedure: 0x08048660 - 0x080487E2
 *	Argument size: -80
 *	Local size: 92
 *	Save regs size: 4
 */

L08048660(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  ebx;
	/* unknown */ void  Vffffffa8;
	/* unknown */ void  Vffffffac;
	/* unknown */ void  Vffffffb0;



    sprintf( & Vffffffb0, "%08lX:", Ac);
    if(A10 > 16) {
        A10 = 16;
    }
    for(Vffffffac = 0; A10 > Vffffffac; Vffffffac = Vffffffac + 1) {
        ecx = Vffffffac;
        sprintf( & Vffffffb0 + ecx + ecx + ecx + 9, " %02lX", *(A8 + Vffffffac) & 255);
    }
    while(1) {
        eax = Vffffffac;
        Vffffffac = Vffffffac + 1;
        if(eax > 15) {
            break;
        }
        strcat( & Vffffffb0, " ");
    }
    Vffffffa8 = strlen( & Vffffffb0);
    strcpy( & Vffffffb0 + Vffffffa8, " |");
    for(Vffffffac = 0; A10 > Vffffffac; Vffffffac = Vffffffac + 1) {
        eax = Vffffffa8 + Vffffffac;
        edx = & Vffffffb0;
        cl = *(A8 + Vffffffac) <= 31 || *(A8 + Vffffffac) > 126 ? 46 : *(A8 + Vffffffac);
        *(eax + edx) = cl;
    }
    while(Vffffffac <= 15) {
        *(Vffffffa8 + Vffffffac + & Vffffffb0) = 32;
        Vffffffac = Vffffffac + 1;
    }
    strcpy( & Vffffffb0 + Vffffffa8 + Vffffffac, "|");
    return(printf("%s\n", & Vffffffb0));
}

/*	Procedure: 0x080487E3 - 0x080487EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080487E3()
{



}

/*	Procedure: 0x080487F0 - 0x080488D3
 *	Argument size: -88
 *	Local size: 92
 *	Save regs size: 0
 */

L080487F0(A8)
/* unknown */ void  A8;
{
	/* unknown */ void  Vffffffa4;
	/* unknown */ void  Vffffffa8;
	/* unknown */ void  Vffffffbc;
	/* unknown */ void  Vffffffe8;
	/* unknown */ void  Vffffffec;
	/* unknown */ void  Vfffffff0;



    if(L08048950(A8, & Vffffffa8) == 0) {
        perror(A8);
        eax = 1;
    } else {
        Vffffffe8 = fopen(A8, "rb");
        if(Vffffffe8 == 0) {
            perror(A8);
            eax = 1;
        } else {
            for(Vffffffec = 0; Vffffffbc > Vffffffec; Vffffffec = Vffffffec + Vffffffa4) {
                Vffffffa4 = fread( & Vfffffff0, 1, 16, Vffffffe8);
                if(Vffffffa4 == 0) {
                    break;
                }
                (save)Vffffffa4;
                (save)Vffffffec;
                (save) & Vfffffff0;
                L08048660();
            }
            fclose(Vffffffe8);
            eax = 0;
        }
    }
}

/*	Procedure: 0x080488D4 - 0x080488DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080488D4()
{



}

/*	Procedure: 0x080488E0 - 0x08048943
 *	Argument size: 0
 *	Local size: 8
 *	Save regs size: 0
 */

L080488E0(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  Vfffffff8;
	/* unknown */ void  Vfffffffc;



    Vfffffff8 = 0;
    for(Vfffffffc = 1; A8 > Vfffffffc; Vfffffffc = Vfffffffc + 1) {
        (save) *(Ac + Vfffffffc * 4);
        Vfffffff8 = Vfffffff8 + L080487F0();
    }
    eax = Vfffffff8;
}

/*	Procedure: 0x08048944 - 0x0804894F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048944()
{



}

/*	Procedure: 0x08048950 - 0x08048978
 *	Argument size: 8
 *	Local size: 0
 *	Save regs size: 8
 */

L08048950(A8, Ac)
/* unknown */ void  A8;
/* unknown */ void  Ac;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    eax = _xstat(1, A8, Ac);
}

/*	Procedure: 0x08048979 - 0x0804897F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048979()
{



}

/*	Procedure: 0x08048980 - 0x080489A6
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

L08048980()
{
	/* unknown */ void  ebx;



    ebx = 134519276;
    if(*L080499EC != -1) {
        do {
            eax = *( *ebx)();
            ebx = ebx + -4;
        } while(*ebx != -1);
    }
}

/*	Procedure: 0x080489A7 - 0x080489B6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489A7()
{



}

/*	Procedure: 0x080489B7 - 0x080489B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489B7()
{



}

/*	Procedure: 0x080489C0 - 0x080489C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    return(L08048620());
}

/*	Procedure: 0x080489C8 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489C8()
{



}

/* address  size  */
/* 0x080484a0       1 */ /* unknown */ void 	_init;
/* 0x080484b8       1 */ /* unknown */ void 	strcpy;
/* 0x080484c8       1 */ /* unknown */ void 	printf;
/* 0x080484d8       1 */ /* unknown */ void 	perror;
/* 0x080484e8       1 */ /* unknown */ void 	_xstat;
/* 0x080484f8       1 */ /* unknown */ void 	__libc_init;
/* 0x08048508       1 */ /* unknown */ void 	strcat;
/* 0x08048518       1 */ /* unknown */ void 	fread;
/* 0x08048528       1 */ /* unknown */ void 	fopen;
/* 0x08048538       1 */ /* unknown */ void 	fclose;
/* 0x08048548       1 */ /* unknown */ void 	sprintf;
/* 0x08048558       1 */ /* unknown */ void 	atexit;
/* 0x08048568       1 */ /* unknown */ void 	exit;
/* 0x08048578       1 */ /* unknown */ void 	__setfpucw;
/* 0x08048588       1 */ /* unknown */ void 	strlen;
/* 0x080485a0       0 */ /* unknown */ void 	__entry_point__;
/* 0x080489b8       1 */ /* unknown */ void 	_etext;
/* 0x080489c0       1 */ /* unknown */ void 	_fini;
/* 0x080499e8       0 */ /* unknown */ void 	__environ;
/* 0x080499e8       1 */ /* unknown */ void 	environ;
/* 0x080499fc       1 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x08049a40       1 */ /* unknown */ void 	_DYNAMIC;
/* 0x08049ac8       0 */ /* unknown */ void 	__fpu_control;
/* 0x08049ac8       0 */ /* unknown */ void 	_edata;
/* 0x08049ac8       1 */ /* unknown */ void 	__bss_start;
/* 0x08049acc       1 */ /* unknown */ void 	_end;
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
