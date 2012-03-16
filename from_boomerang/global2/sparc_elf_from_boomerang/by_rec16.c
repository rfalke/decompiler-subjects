/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/global2/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x0001052C - 0x000105A7
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
    asm("aam 0x1");
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    asm("adc al,0x40");
    *(eax - 48) = *(eax - 48) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    asm("cmpsb");
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
    asm("adc ah,cl");
    asm("clc");
    asm("aam 0x22");
    asm("rol byte [eax],0x40");
    if(!( *eax = *eax + al)) {
        *eax = *eax + al;
    }
    *eax = *eax + al;
    eax = eax + 1;
    asm("lds eax,[ecx]");
    *eax = *eax + al;
    *eax = *eax + al;
    *ecx = 0;
    *(eax + 1) = *(eax + 1) + eax + 1;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 000105a9 -> 0001056a */
/*	Procedure: 0x000105A8 - 0x000105FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1056a");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345017570;
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

/*	Procedure: 0x00010600 - 0x00010657
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010600()
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
    *(eax - 94) = *(eax - 94) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e065a();
}

/*	Procedure: 0x00010658 - 0x00010667
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1061a");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010668 - 0x000106EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1062a");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311610593;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x106a4");
    asm("rol byte [0x400ac0],1");
    *(eax + 1 + 1117120) = *(eax + 1 + 1117120) + eax + 1 + 1117120;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -802922478) = *(edx + -802922478) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 + 127) = *(eax + 1 + 127) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106ed -> 000106ae */
/*	Procedure: 0x000106EC - 0x000106FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x106ae");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106fd -> 000106be */
/*	Procedure: 0x000106FC - 0x0001073B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

foo2()
{



    asm("popf");
    asm("jecxz 0x106be");
    asm("adc [eax],eax");
    *(edx + -1205792110) = *(edx + -1205792110) + al;
    asm("adc [eax],ah");
    al = (al | 208) & *(al | 208);
    asm("adc [eax],eax");
    *(edx + -1340009838) = *(edx + -1340009838) + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    ah = (ah ^ dl) + *((ah ^ dl) + 4);
    asm("rol byte [edx],cl");
    *(eax + 1) = *(eax + 1) + eax + 1;
    eax = eax + 1;
    asm("outsb");
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001073d -> 000106fe */
/*	Procedure: 0x0001073C - 0x00010753
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

foo1()
{



    asm("popf");
    asm("jecxz 0x106fe");
    > ? L00010741 : ;
    asm("Unknown opcode 0xff");
    asm("out dx,eax");
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010755 -> 00010716 */
/*	Procedure: 0x00010754 - 0x00010797
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10716");
    > ? L00010759 : ;
    asm("Unknown opcode 0xff");
    asm("stc");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx + -1205792110) = *(edx + -1205792110) + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    dl :: dl;
    eax = al + *eax + 1;
    *(eax + 91) = *(eax + 91) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = Lc3820792();
    asm("loopne 0x1079c");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010799 -> 0001075a */
/*	Procedure: 0x00010798 - 0x000107E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1075a");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311467232;
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

/* DEST BLOCK NOT FOUND: 000107e9 -> 000107aa */
/*	Procedure: 0x000107E8 - 0x000107F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x107aa");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000107f9 -> 000107ba */
/*	Procedure: 0x000107F8 - 0x00010813
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x107ba");
    al = *L9BFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010815 -> 000107d6 */
/*	Procedure: 0x00010814 - 0x00010827
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x107d6");
    al = *L64FFFF7F;
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

/*	Procedure: 0x000208E0 - 0x000208EF
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
/* 0x0001052c     124 */ /* unknown */ void 	_start;
/* 0x000105a8     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010658      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010668     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106ec      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106fc      64 */ /* unknown */ void 	foo2;
/* 0x0001073c      24 */ /* unknown */ void 	foo1;
/* 0x00010754      68 */ /* unknown */ void 	main;
/* 0x00010798      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x000107e8      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x000107f8      28 */ /* unknown */ void 	_init;
/* 0x00010814       1 */ /* unknown */ void 	_fini;
/* 0x00010828       4 */ /* unknown */ void 	_lib_version;
/* 0x00010840       0 */ /* unknown */ void 	_etext;
/* 0x00020840       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020868       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020898      12 */ /* unknown */ void 	atexit;
/* 0x000208a4      12 */ /* unknown */ void 	exit;
/* 0x000208b0      48 */ /* unknown */ void 	_exit;
/* 0x000208e0       1 */ /* unknown */ void 	printf;
/* 0x000208f0       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000209ac       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209b0       8 */ /* unknown */ void 	a;
/* 0x000209b8       4 */ /* unknown */ void 	b;
/* 0x000209bc       0 */ /* unknown */ void 	force_to_data;
/* 0x000209c0       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209c4       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209c8       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209cc       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209d0       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209d0       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209d4       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209d4       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209d8       0 */ /* unknown */ void 	p.0;
/* 0x000209dc       0 */ /* unknown */ void 	_edata;
/* 0x000209dc       1 */ /* unknown */ void 	completed.1;
/* 0x000209e0      24 */ /* unknown */ void 	object.2;
/* 0x000209f8       4 */ /* unknown */ void 	environ;
/* 0x000209f8       4 */ /* unknown */ void 	_environ;
/* 0x000209fc       0 */ /* unknown */ void 	_end;
/* 0x000209fc       0 */ /* unknown */ void 	_END_;
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
