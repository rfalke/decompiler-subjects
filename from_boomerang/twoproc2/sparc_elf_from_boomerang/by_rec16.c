/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/twoproc2/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104D0 - 0x0001054B
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
    asm("int3");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
    eax = eax + 1;
    do {
        *(eax - 56) = *(eax - 56) + al;
        *eax = *eax + eax;
        *eax = *eax + al;
        *(eax + 1) = *(eax + 1) + al;
        eax = *L00000001;
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
    *(esi + 1) = *(esi + 1) + ah;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    ebp = 1;
    eax = eax + 1;
    *(eax - 66) = *(eax - 66) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 0001054d -> 0001050e */
/*	Procedure: 0x0001054C - 0x000105A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1050e");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345009378;
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

/*	Procedure: 0x000105A4 - 0x000105FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105A4()
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
    *(eax - 102) = *(eax - 102) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e05fe();
}

/*	Procedure: 0x000105FC - 0x0001060B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105be");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0001060C - 0x0001068F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105ce");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311602401;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10648");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    asm("Unknown opcode 0x82");
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
    *(eax + 1 + 119) = *(eax + 1 + 119) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010691 -> 00010652 */
/*	Procedure: 0x00010690 - 0x0001069F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10652");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106a1 -> 00010662 */
/*	Procedure: 0x000106A0 - 0x000106C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

proc1()
{



    asm("popf");
    asm("jecxz 0x10662");
    asm("lock daa");
    eax = *LA027F244 - 1;
    asm("repne pop es");
    eax = *LA007F044 - 1;
    eax = 7;
    asm("sbb [ecx],al");
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e06c6();
}

/*	Procedure: 0x000106C4 - 0x00010727
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10686");
    asm("adc [eax],ah");
    edx = edx + *(edx + 2130976784);
    asm("Unknown opcode 0xff");
    (save)esp;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *ecx = *ecx | dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[ebx]");
    asm("rol byte [eax+0x0],0x40");
    asm("pusha");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    if(!(eax = eax + 102764690)) {
    }
    asm("Unknown opcode 0xff");
    goto L000106fa;
    *eax = *eax + al;
L000106fa:
    *(edx + 285736976) = *(edx + 285736976) + dl;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("adc ah,[ebx]");
    asm("rol byte [eax+0x0],0x40");
    (save)edi;
    *eax = *eax + eax;
    *eax = *eax + al;
    *L00000010 = *L00000010 + cl;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010729 -> 000106ea */
/*	Procedure: 0x00010728 - 0x00010777
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106ea");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311464160;
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

/* DEST BLOCK NOT FOUND: 00010779 -> 0001073a */
/*	Procedure: 0x00010778 - 0x00010787
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1073a");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010789 -> 0001074a */
/*	Procedure: 0x00010788 - 0x000107A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1074a");
    al = *LA0FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107a5 -> 00010766 */
/*	Procedure: 0x000107A4 - 0x000107B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10766");
    al = *L69FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0002081C - 0x00020827
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

/*	Procedure: 0x00020828 - 0x00020833
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

/*	Procedure: 0x00020834 - 0x00020863
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

/*	Procedure: 0x00020864 - 0x00020873
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
/* 0x000104d0     124 */ /* unknown */ void 	_start;
/* 0x0001054c     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105fc      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x0001060c     132 */ /* unknown */ void 	frame_dummy;
/* 0x00010690      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106a0      36 */ /* unknown */ void 	proc1;
/* 0x000106c4     100 */ /* unknown */ void 	main;
/* 0x00010728      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010778      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010788      28 */ /* unknown */ void 	_init;
/* 0x000107a4       1 */ /* unknown */ void 	_fini;
/* 0x000107b8       4 */ /* unknown */ void 	_lib_version;
/* 0x000107c4       0 */ /* unknown */ void 	_etext;
/* 0x000207c4       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000207ec       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x0002081c      12 */ /* unknown */ void 	atexit;
/* 0x00020828      12 */ /* unknown */ void 	exit;
/* 0x00020834      48 */ /* unknown */ void 	_exit;
/* 0x00020864       1 */ /* unknown */ void 	printf;
/* 0x00020874       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020930       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020934       0 */ /* unknown */ void 	force_to_data;
/* 0x00020938       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0002093c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020940       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020944       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020948       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020948       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0002094c       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0002094c       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020950       0 */ /* unknown */ void 	p.0;
/* 0x00020954       0 */ /* unknown */ void 	_edata;
/* 0x00020954       1 */ /* unknown */ void 	completed.1;
/* 0x00020958      24 */ /* unknown */ void 	object.2;
/* 0x00020970       4 */ /* unknown */ void 	_environ;
/* 0x00020970       4 */ /* unknown */ void 	environ;
/* 0x00020974       0 */ /* unknown */ void 	_end;
/* 0x00020974       0 */ /* unknown */ void 	_END_;
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
