/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fibo4_sparc/sparc_elf_by_bommerang/subject.exe'
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
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[ebx]");
    (fsave) *ecx + *eax;
    eax = eax + 1;
    (fsave) *ecx;
    *eax = *eax + al;
    *eax = *eax + al;
    *(eax + 1) = *(eax + 1) + ch;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,cl");
    asm("lock aam 0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    asm("outsb");
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 48) = *(eax + 1 - 48) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 47) = *(eax + 1 - 47) + eax + 1;
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
    eax = eax + 344111330;
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
    eax = eax + 276955362;
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
    asm("xchg eax,edi");
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
    *(eax - 116) = *(eax - 116) + al;
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

/*	Procedure: 0x000106AC - 0x000106FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fib()
{



    asm("pushf");
    edi = edi + *(edi + -1608255328);
    (save)eax;
    (fsave)(frestore) - *ebx;
    *(eax + eax * 4) = *(eax + eax * 4) + eax;
    *ebx = *ebx + cl;
    *eax = *eax + eax;
    if(!( *eax = *eax + *L20A78054)) {
    }
    asm("Unknown opcode 0xff");
    asm("cli");
    (save)-721469689;
    if(!(esp = esp & *L7503375F)) {
    }
    (save)esi;
    esp = esp + *LC37E4F5F;
    edx = edx + *(edx + -745389945);
    *(esi + ebx * 8) = *(esi + ebx * 8) + bl;
    esp = esp + *L6302375B;
    (save)-1023525113;
    ebx = ebx + 60557536;
    al = *LBFE39D60;
}

/*	Procedure: 0x000106FC - 0x00010763
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x106be");
    *ebx = al;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc [ebx-0x8],ah");
    eax = eax + 1;
    *(eax + 112) = *(eax + 112) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = L00000000();
    edx = edx + 1;
    asm("adc [eax+0x8],ah");
    asm("xchg eax,edx");
    asm("adc [eax],al");
    eax = eax | 1832910912;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ecx);
    asm("clc");
    (restore)es;
    edi = -1087908628;
    L4201073b();
    asm("adc [eax+0x10],ah");
    asm("rol byte [edi],cl");
    edi = -1090005780;
    *eax = *eax + eax;
    *eax = *eax + L61410788();
    asm("Unknown opcode 0x82");
    asm("adc [eax],ah");
    *(eax + -2130640880) = *(eax + -2130640880) + dh;
    asm("Unknown opcode 0xc7");
    asm("loopne 0x10760");
    eax = eax - -1014956032;
    asm("loopne 0x10768");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010765 -> 00010726 */
/*	Procedure: 0x00010764 - 0x000107AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10726");
    eax = eax + *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 277002464;
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

/* DEST BLOCK NOT FOUND: 000107b1 -> 00010772 */
/*	Procedure: 0x000107B0 - 0x000107BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10772");
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107bd -> 0001077e */
/*	Procedure: 0x000107BC - 0x000107D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1077e");
    al = *L97FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *edi);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107d9 -> 0001079a */
/*	Procedure: 0x000107D8 - 0x000107EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1079a");
    al = *L62FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020880 - 0x0002088B
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

/*	Procedure: 0x0002088C - 0x00020897
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

/*	Procedure: 0x00020898 - 0x000208C7
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

/*	Procedure: 0x000208C8 - 0x000208D3
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

/*	Procedure: 0x000208D4 - 0x000208E3
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
/* 0x000106ac      80 */ /* unknown */ void 	fib;
/* 0x000106fc     104 */ /* unknown */ void 	main;
/* 0x00010764      76 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x000107b0      12 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000107bc      28 */ /* unknown */ void 	_init;
/* 0x000107d8       1 */ /* unknown */ void 	_fini;
/* 0x000107f0       0 */ /* unknown */ void 	_lib_version;
/* 0x000107f0       0 */ /* unknown */ void 	Drodata.rodata;
/* 0x00010828       0 */ /* unknown */ void 	_etext;
/* 0x00020828       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020850       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020880      12 */ /* unknown */ void 	atexit;
/* 0x0002088c      12 */ /* unknown */ void 	exit;
/* 0x00020898      48 */ /* unknown */ void 	_exit;
/* 0x000208c8      12 */ /* unknown */ void 	printf;
/* 0x000208d4       1 */ /* unknown */ void 	scanf;
/* 0x000208e4       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000209ac       0 */ /* unknown */ void 	Ddata.data;
/* 0x000209b0       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209b4       0 */ /* unknown */ void 	force_to_data;
/* 0x000209b8       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209bc       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209c0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209c4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209c8       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209c8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209cc       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209cc       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209d0       0 */ /* unknown */ void 	p.0;
/* 0x000209d4       0 */ /* unknown */ void 	_edata;
/* 0x000209d4       0 */ /* unknown */ void 	Bbss.bss;
/* 0x000209d4       1 */ /* unknown */ void 	completed.1;
/* 0x000209d8      24 */ /* unknown */ void 	object.2;
/* 0x000209f0       4 */ /* unknown */ void 	_environ;
/* 0x000209f0       4 */ /* unknown */ void 	environ;
/* 0x000209f4       0 */ /* unknown */ void 	_end;
/* 0x000209f4       0 */ /* unknown */ void 	_END_;
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
