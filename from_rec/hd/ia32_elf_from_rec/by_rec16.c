/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_rec/hd/ia32_elf_from_rec/subject.exe'
 */

/*	Procedure: 0x080484A0 - 0x080484A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    return(__do_global_ctors_aux());
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

/* DEST BLOCK NOT FOUND: 080484d3 -> 080484a8 */
/*	Procedure: 0x080484C8 - 0x080484D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484C8()
{



    goto ( *L08049a0c);
    (save)8;
    goto L080484A8;
}

/* DEST BLOCK NOT FOUND: 080484e3 -> 080484a8 */
/*	Procedure: 0x080484D8 - 0x080484E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080484D8()
{



    goto ( *L08049a10);
    (save)16;
    goto L080484A8;
}

/* DEST BLOCK NOT FOUND: 08048523 -> 080484a8 */
/*	Procedure: 0x08048518 - 0x08048527
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048518()
{



    goto ( *L08049a20);
    (save)48;
    goto L080484A8;
}

/* DEST BLOCK NOT FOUND: 08048533 -> 080484a8 */
/*	Procedure: 0x08048528 - 0x08048537
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048528()
{



    goto ( *L08049a24);
    (save)56;
    goto L080484A8;
}

/* DEST BLOCK NOT FOUND: 08048543 -> 080484a8 */
/*	Procedure: 0x08048538 - 0x08048547
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048538()
{



    goto ( *L08049a28);
    (save)64;
    goto L080484A8;
}

/* DEST BLOCK NOT FOUND: 08048553 -> 080484a8 */
/*	Procedure: 0x08048548 - 0x08048557
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048548()
{



    goto ( *L08049a2c);
    (save)72;
    goto L080484A8;
}

/*	Procedure: 0x080485A0 - 0x0804861F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
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
    __environ = Vfffffff4;
    __setfpucw(__fpu_control & -1);
    __libc_init();
    atexit(_fini);
    _init();
    main();
    (save)eax;
    exit();
    (restore)ebx;
    eax = 1;
    asm("int 0x80");
    goto done;
}

/*	Procedure: 0x08048620 - 0x08048646
 *	Argument size: -4
 *	Local size: 4
 *	Save regs size: 4
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;



    ebx = __DTOR_END__;
    if(__DTOR_END__ != 0) {
        do {
            eax = *( *ebx)();
            ebx = ebx + 4;
        } while(*ebx != 0);
    }
}

/*	Procedure: 0x08048647 - 0x0804864F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048647()
{



}

/*	Procedure: 0x08048650 - 0x08048656
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fini_dummy()
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

/*
 *	/g/recarch/rel14lx/hd.c
 */


/*	Procedure: 0x08048660 - 0x080487E2
 *	Argument size: -80
 *	Local size: 92
 *	Save regs size: 4
 */

dumpline(unsigned char  * p, unsigned long  offset, int cnt)
{
	char  buff[80];
	int c;
	int len;



    sprintf( & buff, 0x80489c8, offset);
    if(cnt > 16) {
        cnt = 16;
    }
    for(c = 0; cnt > c; c = c + 1) {
        ecx = c;
        sprintf( & buff + ecx + ecx + ecx + 9, 0x80489cf, *(p + c) & 255);
    }
    while(1) {
        eax = c;
        c = c + 1;
        if(eax > 15) {
            break;
        }
        strcat( & buff, 0x80489d6);
    }
    len = strlen( & buff);
    strcpy( & buff + len, 0x80489da);
    for(c = 0; cnt > c; c = c + 1) {
        eax = len + c;
        edx = & buff;
        cl = *(p + c) <= 31 || *(p + c) > 126 ? 46 : *(p + c);
        *(eax + edx) = cl;
    }
    while(c <= 15) {
        *(len + c + & buff) = 32;
        c = c + 1;
    }
    strcpy( & buff + len + c, 0x80489de);
    return(printf(0x80489e0, & buff));
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

hexdump(char  * fname)
{
	unsigned char  buff[16];
	unsigned long  offset;
	struct _IO_FILE * fp;
	struct stat st;
	int cnt;



    if(stat(fname, & (st.st_dev)) == 0) {
        perror(fname);
        eax = 1;
    } else {
        fp = fopen(fname, 0x80489e4);
        if(fp == 0) {
            perror(fname);
            eax = 1;
        } else {
            for(offset = 0; st.st_size > offset; offset = offset + cnt) {
                cnt = fread( & buff, 1, 16, fp);
                if(cnt == 0) {
                    break;
                }
                dumpline( & buff, offset, cnt);
            }
            fclose(fp);
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

main(int argc, char  * * argv)
{
	int i;
	int errs;



    errs = 0;
    for(i = 1; argc > i; i = i + 1) {
        errs = errs + hexdump( *(argv + i * 4));
    }
    eax = errs;
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

stat(char  * __path, struct stat * __statbuf)
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;



    eax = _xstat(1, __path, __statbuf);
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

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    ebx = force_to_data;
    if(force_to_data != -1) {
        do {
            eax = *( *ebx)();
            ebx = ebx + -4;
        } while(*ebx != -1);
    }
}

/*	Procedure: 0x080489A7 - 0x080489AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080489A7()
{



}

/*	Procedure: 0x080489B0 - 0x080489B6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

init_dummy()
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



    return(__do_global_dtors_aux());
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
/* 0x080484a0      24 */ /* unknown */ void 	_init;
/* 0x080484b8       1 */ /* unknown */ void 	strcpy;
/* 0x080484e8      16 */ /* unknown */ void 	_xstat;
/* 0x080484f8      16 */ /* unknown */ void 	__libc_init;
/* 0x08048508       1 */ /* unknown */ void 	strcat;
/* 0x08048558      16 */ /* unknown */ void 	atexit;
/* 0x08048568      16 */ /* unknown */ void 	exit;
/* 0x08048578      16 */ /* unknown */ void 	__setfpucw;
/* 0x08048588      24 */ /* unknown */ void 	strlen;
/* 0x080485a0       0 */ /* unknown */ void 	_start;
/* 0x080485a0       0 */ /* unknown */ void 	___crt_dummy__;
/* 0x08048610       0 */ /* unknown */ void 	done;
/* 0x08048620      48 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x08048650      16 */ /* unknown */ void 	fini_dummy;
/* 0x08048660     793 */ /* unknown */ void 	/g/recarch/rel14lx/hd.c;
/* 0x08048660     400 */ void 	dumpline(unsigned char  *, unsigned long , int);
/* 0x080487f0     240 */ int	hexdump(char  *);
/* 0x080488e0     112 */ int	main(int, char  * *);
/* 0x08048950      48 */ int	stat(char  *, struct stat *);
/* 0x08048980      48 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080489b0       0 */ /* unknown */ void 	init_dummy;
/* 0x080489b8       1 */ /* unknown */ void 	_etext;
/* 0x080489c0       1 */ /* unknown */ void 	_fini;
/* 0x080499e8       0 */ /* unknown */ void 	__environ;
/* 0x080499e8       4 */ /* unknown */ void 	environ;
/* 0x080499ec       0 */ /* unknown */ void 	force_to_data;
/* 0x080499ec       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x080499f0       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x080499f4       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x080499f8       0 */ /* unknown */ void 	__DTOR_END__;
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
option: +usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
