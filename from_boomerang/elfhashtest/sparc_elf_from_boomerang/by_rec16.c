/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/elfhashtest/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104A8 - 0x00010523
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
    asm("xlatb");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    *eax = es;
    do {
        eax = eax + 1;
        asm("rol dword [ecx],cl");
        *eax = *eax + al;
        *eax = *eax + al;
        *(ebp + 1) = *(ebp + 1) + ah;
        asm("adc [eax],al");
        asm("adc [edx+0x95110010],dl");
        dl = dl + *(edx + al - 32 + 76809376);
        eax = eax + 1;
        dl = dl | *edi;
        asm("Unknown opcode 0x82");
        asm("xchg eax,esi");
        asm("adc ah,cl");
    } while(*eax = *eax + al);
    al :: 0;
    *eax = *eax + al;
    *(ebp + 1) = *(ebp + 1) + bl;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    asm("enter 0x1,0x0");
    *eax = *eax + al;
    eax = eax + 1;
    esp = ebp;
    (restore)ebp;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010525 -> 000104e6 */
/*	Procedure: 0x00010524 - 0x0001057B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x104e6");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345020642;
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

/*	Procedure: 0x0001057C - 0x000105D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001057C()
{



    *(eax + eax) = *(eax + eax) << 1;
    al = al + dl;
    dl = dl + dl;
    al = al + *eax;
    *(eax + 302014626) = *(eax + 302014626) + al;
    edi = 43056127;
    *(ecx + edx) = *(ecx + edx) & al;
    *eax = *eax + al;
    *(eax + -769384430) = *(eax + -769384430) + dl;
    eax = eax + -1568667456;
    asm("pusha");
    *edx = *edx + al;
    *eax = *eax + 5;
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc ah,[eax+0x4]");
    eax = eax + 1;
    *(eax - 91) = *(eax - 91) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e05d6();
}

/*	Procedure: 0x000105D4 - 0x000105E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10596");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000105E4 - 0x00010667
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105a6");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311613665;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10620");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    asm("Unknown opcode 0x8d");
    asm("rol byte [0x110bc0],cl");
    *eax = *eax + al;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -803446766) = *(edx + -803446766) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 - 126) = *(eax + 1 - 126) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010669 -> 0001062a */
/*	Procedure: 0x00010668 - 0x00010677
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1062a");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010679 -> 0001063a */
/*	Procedure: 0x00010678 - 0x0001070F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x1063a");
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    al & 64;
    *eax = *eax + al;
    al = al | 1;
    *eax = *eax + al;
    *(edx + 285736976) = *(edx + 285736976) + dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[ebx]");
    al = 64;
    *L000000B4 = *L000000B4 + 64;
    *L00000040 = *L00000040 + 64;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = L4ad706b6();
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc [eax],al");
    *ebx = *ebx | bl;
    al :: 0;
    *(eax + 33611938) = *(eax + 33611938) + al;
    *eax = *eax + 15;
    asm("cwde");
    asm("adc [eax],al");
    *(ecx + -1778114517) = *(ecx + -1778114517) + bl;
    eax = eax + *eax;
    eax = eax | *(edx + -1744740352) | 83918882;
    asm("cwde");
    esp = esp ^ *L00000095;
    asm("sbb [esi+0x980ac01a],dl");
    *L3200E178 = *L3200E178 + 214;
    edi = 731510527;
    *(ecx + 856) = *(ecx + 856) & 214;
    return(214);
    asm("loopne 0x1070c");
    asm("adc [eax],al");
    return(al | 129);
    asm("loopne 0x10714");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010711 -> 000106d2 */
/*	Procedure: 0x00010710 - 0x0001075F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106d2");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311471328;
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

/* DEST BLOCK NOT FOUND: 00010761 -> 00010722 */
/*	Procedure: 0x00010760 - 0x0001076F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10722");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010771 -> 00010732 */
/*	Procedure: 0x00010770 - 0x0001078B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10732");
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

/* DEST BLOCK NOT FOUND: 0001078d -> 0001074e */
/*	Procedure: 0x0001078C - 0x0001079F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1074e");
    al = *L65FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020820 - 0x0002082B
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

/*	Procedure: 0x0002082C - 0x00020837
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

/*	Procedure: 0x00020838 - 0x00020867
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

/*	Procedure: 0x00020868 - 0x00020877
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
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x000104a8     124 */ /* unknown */ void 	_start;
/* 0x00010524     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105d4      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x000105e4     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010668      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x00010678       1 */ /* unknown */ void 	main;
/* 0x000106b4       0 */ /* unknown */ void 	elf_hash;
/* 0x000106d0       0 */ /* unknown */ void 	L54C;
/* 0x000106f0       0 */ /* unknown */ void 	L56C;
/* 0x00010700       0 */ /* unknown */ void 	L57c;
/* 0x00010710      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010760      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010770      28 */ /* unknown */ void 	_init;
/* 0x0001078c       1 */ /* unknown */ void 	_fini;
/* 0x000107a0       4 */ /* unknown */ void 	_lib_version;
/* 0x000107c8       0 */ /* unknown */ void 	_etext;
/* 0x000207c8       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000207f0       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020820      12 */ /* unknown */ void 	atexit;
/* 0x0002082c      12 */ /* unknown */ void 	exit;
/* 0x00020838      48 */ /* unknown */ void 	_exit;
/* 0x00020868       1 */ /* unknown */ void 	printf;
/* 0x00020878       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0002093c       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020940       0 */ /* unknown */ void 	force_to_data;
/* 0x00020944       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020948       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0002094c       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020950       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020954       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020954       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020958       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020958       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0002095c       0 */ /* unknown */ void 	p.0;
/* 0x00020960       0 */ /* unknown */ void 	_edata;
/* 0x00020960       1 */ /* unknown */ void 	completed.1;
/* 0x00020964      24 */ /* unknown */ void 	object.2;
/* 0x0002097c       4 */ /* unknown */ void 	_environ;
/* 0x0002097c       4 */ /* unknown */ void 	environ;
/* 0x00020980       0 */ /* unknown */ void 	_end;
/* 0x00020980       0 */ /* unknown */ void 	_END_;
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
