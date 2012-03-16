/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fibo2/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x00010524 - 0x0001059F
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
    (fsave) *ecx;
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    *eax = *eax | al;
    eax = eax + 1;
    asm("xlatb");
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
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
    (al | 212) :: 0;
    *(al | 212) = *(al | 212) + (al | 212);
    *(esi + 1) = *(esi + 1) + ch;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    asm("int3");
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 51) = *(eax + 1 - 51) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 000105a1 -> 00010562 */
/*	Procedure: 0x000105A0 - 0x000105F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10562");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345024738;
    asm("pusha");
    eax = (al | 210) + 181668032 + 1;
    *(eax + 302031010) = *(eax + 302031010) + al;
    *eax = *eax + 32;
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,dl");
    eax = eax + 47319232;
    *eax = *eax + al;
    asm("rol byte [edx],cl");
    eax = eax + 1;
    *(eax + 570450082) = *(eax + 570450082) + al;
    *eax = *eax + 13;
    asm("adc [eax],eax");
    *eax = *eax + al;
    al = *LD0080010;
    *(eax + -1627119614) = *(eax + -1627119614) + dl;
}

/*	Procedure: 0x000105F8 - 0x0001064F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105F8()
{



    *(eax + eax) = *(eax + eax) << 1;
    al = al + dl;
    dl = dl + dl;
    al = al + *eax;
    *(eax + 302014626) = *(eax + 302014626) + al;
    edi = 43056127;
    *(ecx + edx) = *(ecx + edx) & al;
    *eax = *eax + al;
    *(eax + -769908718) = *(eax + -769908718) + dl;
    eax = eax + -1568667456;
    asm("pusha");
    *edx = *edx + al;
    *eax = *eax + 5;
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc ah,[eax+0x4]");
    eax = eax + 1;
    *(eax - 87) = *(eax - 87) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e0652();
}

/*	Procedure: 0x00010650 - 0x0001065F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10612");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010660 - 0x000106E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10622");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311617761;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x1069c");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    asm("xchg eax,ecx");
    asm("rol byte [0x110bc0],cl");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -802922478) = *(edx + -802922478) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 - 122) = *(eax + 1 - 122) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106e5 -> 000106a6 */
/*	Procedure: 0x000106E4 - 0x000106F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x106a6");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000106F4 - 0x00010703
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fib1()
{



    *(ecx - 127) = *(ecx - 127) + eax + *eax;
    *(ebx + 4) = *(ebx + 4) << 1;
    *eax = *eax + al;
    *ecx = *ecx + al;
    *eax = *eax + al;
    *(ebp + -2137997341) = *(ebp + -2137997341) + bl;
}

/*	Procedure: 0x00010704 - 0x00010737
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fib2()
{



    asm("popf");
    asm("jecxz 0x106c6");
    *(esi + -2147221216) = 0;
    *(eax + 2147434246) = *(eax + 2147434246) | dl;
    asm("Unknown opcode 0xff");
    asm("Unknown opcode 0xff");
    asm("clc");
    *eax = *eax + eax;
    *eax = *eax + al;
    al = *L7F080010;
    asm("Unknown opcode 0xff");
    (save)ebp;
    (save)es;
    asm("aas");
    asm("Unknown opcode 0xfe");
    al = 4;
    *L00000004 = *L00000004 + cl;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010739 -> 000106fa */
/*	Procedure: 0x00010738 - 0x0001078B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x106fa");
    *ebx = dl;
    *eax = *eax + al;
    edx = edx + 1;
    eax = eax + 1;
    *(eax + 109) = *(eax + 109) + al;
    asm("adc ah,[eax+0x28]");
    *(edx - 112) = *(edx - 112) + eax + *eax;
    asm("adc [eax+0x38],ah");
    asm("xchg eax,edx");
    (restore)es;
    edi = -1090006804;
    asm("in al,dx");
    if(!( *(eax + 1 + 108) = *(eax + 1 + 108) + eax + 1)) {
    }
    goto ( *esi);
    al = 16;
    *L00000010 = *L00000010 & 16;
    asm("xchg eax,esp");
    asm("adc [eax],al");
    *ebx = *ebx | al;
    *eax = *eax + al;
    edx = edx + 1;
    asm("rol byte [edi],cl");
    edi = 1073758444;
    asm("popa");
    asm("adc [eax+0x40],ah");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 0001078d -> 0001074e */
/*	Procedure: 0x0001078C - 0x000107DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1074e");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311475424;
    asm("rol byte [0x2d008c0],cl");
    do {
    } while(*eax = *eax & bl);
    *(edx + -2147287233) = 0;
    *(eax + -1610842366) = *(eax + -1610842366) | ah;
    return;
    *( *LD0FC3F04 + 318717858) = *( *LD0FC3F04 + 318717858) + al;
    edi = 130303;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107dd -> 0001079e */
/*	Procedure: 0x000107DC - 0x000107EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1079e");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107ed -> 000107ae */
/*	Procedure: 0x000107EC - 0x00010807
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x107ae");
    al = *L9CFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010809 -> 000107ca */
/*	Procedure: 0x00010808 - 0x0001081B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x107ca");
    al = *L65FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000208AC - 0x000208B7
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

/*	Procedure: 0x000208B8 - 0x000208C3
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

/*	Procedure: 0x000208C4 - 0x000208F3
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

/*	Procedure: 0x000208F4 - 0x000208FF
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

/*	Procedure: 0x00020900 - 0x0002090F
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
/* 0x00010524     124 */ /* unknown */ void 	_start;
/* 0x000105a0     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010650      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010660     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106e4      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106f4      16 */ /* unknown */ void 	fib1;
/* 0x00010704      52 */ /* unknown */ void 	fib2;
/* 0x00010738      84 */ /* unknown */ void 	main;
/* 0x0001078c      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x000107dc      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000107ec      28 */ /* unknown */ void 	_init;
/* 0x00010808       1 */ /* unknown */ void 	_fini;
/* 0x00010820       4 */ /* unknown */ void 	_lib_version;
/* 0x00010854       0 */ /* unknown */ void 	_etext;
/* 0x00020854       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0002087c       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x000208ac      12 */ /* unknown */ void 	atexit;
/* 0x000208b8      12 */ /* unknown */ void 	exit;
/* 0x000208c4      48 */ /* unknown */ void 	_exit;
/* 0x000208f4      12 */ /* unknown */ void 	printf;
/* 0x00020900       1 */ /* unknown */ void 	scanf;
/* 0x00020910       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000209cc       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209d0       0 */ /* unknown */ void 	force_to_data;
/* 0x000209d4       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209d8       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209dc       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209e0       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209e4       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209e4       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209e8       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209e8       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209ec       0 */ /* unknown */ void 	p.0;
/* 0x000209f0       0 */ /* unknown */ void 	_edata;
/* 0x000209f0       1 */ /* unknown */ void 	completed.1;
/* 0x000209f4      24 */ /* unknown */ void 	object.2;
/* 0x00020a0c       4 */ /* unknown */ void 	environ;
/* 0x00020a0c       4 */ /* unknown */ void 	_environ;
/* 0x00020a10       0 */ /* unknown */ void 	_end;
/* 0x00020a10       0 */ /* unknown */ void 	_END_;
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
