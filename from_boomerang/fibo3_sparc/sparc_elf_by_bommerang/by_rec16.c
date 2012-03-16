/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fibo3_sparc/sparc_elf_by_bommerang/subject.exe'
 */

/*	Procedure: 0x000104E8 - 0x00010563
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    esp = -536862704;
    esp = esp + *(eax + -1610374592);
    esp = esp + 1;
    asm("pushf");
    esp = esp & *(eax + 9469984);
    *edx = *edx + eax;
    *eax = *eax + 4;
    asm("adc [eax],al");
    *eax = *eax + eax;
    eax = eax + 1;
    asm("in eax,0x1");
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[ebx]");
    asm("hlt");
    eax = eax + 1;
    *(eax - 31) = *(eax - 31) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    asm("scasd");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,dl");
    (ah | dl) :: 0;
    *(ah | dl) = *(ah | dl) + (ah | dl);
    *(esi + 1) = *(esi + 1) + dh;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    asm("salc");
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 41) = *(eax + 1 - 41) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010565 -> 00010526 */
/*	Procedure: 0x00010564 - 0x00010596
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10526");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 344117474;
    asm("pusha");
    asm("adc dl,bl");
    eax = eax + 198705600 + 1;
    *(eax + 301998243) = *(eax + 301998243) + al;
    *eax = *eax + 32;
    *eax = *eax + eax + *eax;
    asm("Unknown opcode 0x82");
    asm("adc [eax+0xc],ah");
}

/*	Procedure: 0x00010597 - 0x000105B9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010597()
{



    edx = edx + ebx;
    *eax = *eax + al;
    (fsave)(frestore) + *ebx;
    eax = eax + 1;
    *(eax + 570450083) = *(eax + 570450083) + al;
    *eax = *eax + 13;
    *eax = *eax + eax + *eax;
    *(edx + -1627103232) = *(edx + -1627103232) + *LC2010010;
    return(*LC2010010);
}

/*	Procedure: 0x000105BA - 0x0001060F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105BA()
{



}

/* DEST BLOCK NOT FOUND: 00010611 -> 000105d2 */
/*	Procedure: 0x00010610 - 0x0001061B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105d2");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001061d -> 000105de */
/*	Procedure: 0x0001061C - 0x0001069F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105de");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebp = ebp - 1;
    asm("scasb");
    eax = eax + 276961506;
    asm("pusha");
    *ecx = *ecx & bl;
    *eax = *eax + al;
    *edi = *edi + dl;
    *eax = *eax + al;
    dl = dl + bl;
    eax = eax + 328729024;
    *(eax + eax * 4) = *(eax + eax * 4) & al;
    *L80020060 = eax;
    *L14E01296 = *L14E01296 + al;
    asm("rol byte [0x400cc0],1");
    eax = eax + 1;
    asm("popf");
    asm("rol byte [0x30bc0],cl");
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax+0x8],ah");
    asm("lock add eax,0x1b01c0");
    *eax = *eax + al;
    return;
    *(eax + 33579168) = *(eax + 33579168) + al;
    *eax = *eax + 8;
    al = (L0000c005() | 6332544) + *(eax + 66560);
    *eax = *eax + al;
    eax = eax + 1;
    *(eax - 110) = *(eax - 110) + al;
    eax = eax - _START_;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106a1 -> 00010662 */
/*	Procedure: 0x000106A0 - 0x000106AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10662");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106ad -> 0001066e */
/*	Procedure: 0x000106AC - 0x0001071B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fib()
{



    asm("popf");
    asm("jecxz 0x1066e");
    al = dh;
    asm("daa");
    al = *LA007C244;
    esp = esp + 1;
    *(eax + -2147221152) = 0;
    asm("adc eax,[ecx]");
    *eax = *eax + al;
    dl = dl + al;
    (restore)es;
    eax = *( *L7F008244 + -100597744)();
    asm("daa");
    al = *LFFFF7F48;
    *eax = *eax + al;
    *edi = *edi << 1;
    esp = esp + 1;
    if(!( *LA007C2EE = *LA007C2EE + bh)) {
    }
    (save)ecx;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("cli");
    (restore)es;
    al = *LBF07F848;
    asm("lock mov al,[0xe0080007]");
    asm("daa");
    edi = 8392940;
    *(al + 1) = *(al + 1) + al;
    dl = dl + al;
    (restore)es;
    al = *LBF27C244;
    asm("in al,dx");
    asm("lock pop es");
    edi = -523795988;
    *(ecx + -1660944152) = *(ecx + -1660944152) | al;
}

/* DEST BLOCK NOT FOUND: 0001071d -> 000106de */
/*	Procedure: 0x0001071C - 0x0001077F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x106de");
    *ebx = al;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc [eax+0x10],ah");
    eax = eax + 1;
    *(eax + 110) = *(eax + 110) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("xchg eax,edx");
    (restore)es;
    edi = 1004;
    edx = edx + 1;
    asm("adc [eax+0x20],ah");
    eax = eax + 1;
    *(eax + 108) = *(eax + 108) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edi],1");
    edi = -32788;
    (fsave) *ecx;
    *eax = *eax + al;
    al = al + dl;
    asm("daa");
    edi = 1000;
    edx = edx + 1;
    asm("adc [eax+0x28],ah");
    asm("rol byte [edi],cl");
    edi = -1090005780;
    *eax = *eax + eax;
    *eax = *eax + L5f4107a8();
    al = 16;
    *L00000010 = *L00000010 & 16;
    edi = edi + -394196768;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010781 -> 00010742 */
/*	Procedure: 0x00010780 - 0x000107CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10742");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 277001440;
    asm("pusha");
    asm("sbb dl,bl");
    do {
    } while(eax = eax + 63046080);
    *(eax + -2147287169) = 0;
    *(eax + -1610842365) = *(eax + -1610842365) | ah;
    asm("rol byte [eax+0x0],0xa0");
    al = al + 63;
    asm("cld");
    return;
    *(eax + 318734240) = *(eax + 318734240) + al;
    *eax = *eax + al;
    edi = -394066465;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107cd -> 0001078e */
/*	Procedure: 0x000107CC - 0x000107D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1078e");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107d9 -> 0001079a */
/*	Procedure: 0x000107D8 - 0x000107F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1079a");
    al = *L90FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107f5 -> 000107b6 */
/*	Procedure: 0x000107F4 - 0x00010807
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x107b6");
    al = *L5BFFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020898 - 0x000208A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

atexit()
{



    *eax = *eax + dh;
    *(edi + 127999) = *(edi + 127999) ^ bh;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x000208A4 - 0x000208AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

exit()
{



    eax = eax + *eax;
    *(eax + esi) = *(eax + esi) + bh;
    edi = 127231;
    *eax = *eax + al;
}

/*	Procedure: 0x000208B0 - 0x000208DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_exit()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + cl;
    edi = 126463;
    *eax = *eax + al;
    eax = eax + *eax;
    *(eax + esi - 65) = *(eax + esi - 65) + dl;
    asm("Unknown opcode 0xff");
    goto L00000003;
    *(eax + 48) = *(eax + 48) + ah;
    edi = 124927;
    *eax = *eax + al;
    *(eax + esi - 65) = *(eax + esi - 65) + ch;
    goto ( *esp);
    *eax = *eax + eax;
    *eax = *eax + eax + *eax;
}

/*	Procedure: 0x000208E0 - 0x000208EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
}

/*	Procedure: 0x000208EC - 0x000208FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

scanf()
{



    eax = eax + *eax;
    *(eax + esi + 31391679) = *(eax + esi + 31391679) + al;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *eax = *eax + al;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x000104e8     124 */ /* unknown */ void 	_start;
/* 0x00010564     172 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010610      12 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x0001061c     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106a0      12 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106ac     112 */ /* unknown */ void 	fib;
/* 0x0001071c     100 */ /* unknown */ void 	main;
/* 0x00010780      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x000107cc      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000107d8      28 */ /* unknown */ void 	_init;
/* 0x000107f4       1 */ /* unknown */ void 	_fini;
/* 0x00010808       0 */ /* unknown */ void 	_lib_version;
/* 0x00010808       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x00010840       0 */ /* unknown */ void 	_etext;
/* 0x00020840       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020868       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020898      12 */ /* unknown */ void 	atexit;
/* 0x000208a4      12 */ /* unknown */ void 	exit;
/* 0x000208b0      48 */ /* unknown */ void 	_exit;
/* 0x000208e0      12 */ /* unknown */ void 	printf;
/* 0x000208ec       1 */ /* unknown */ void 	scanf;
/* 0x000208fc       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000209c4       0 */ /* unknown */ void 	Ddata.data;
/* 0x000209c8       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209cc       0 */ /* unknown */ void 	force_to_data;
/* 0x000209d0       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209d4       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209d8       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209dc       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209e0       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209e0       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209e4       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209e4       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209e8       0 */ /* unknown */ void 	p.0;
/* 0x000209ec       0 */ /* unknown */ void 	_edata;
/* 0x000209ec       0 */ /* unknown */ void 	Bbss.bss;
/* 0x000209ec       1 */ /* unknown */ void 	completed.1;
/* 0x000209f0      24 */ /* unknown */ void 	object.2;
/* 0x00020a08       4 */ /* unknown */ void 	_environ;
/* 0x00020a08       4 */ /* unknown */ void 	environ;
/* 0x00020a0c       0 */ /* unknown */ void 	_end;
/* 0x00020a0c       0 */ /* unknown */ void 	_END_;
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
