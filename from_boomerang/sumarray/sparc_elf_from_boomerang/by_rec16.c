/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/sumarray/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104CC - 0x000104EB
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
    asm("iret");
}

/*	Procedure: 0x000104EC - 0x00010547
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000104EC()
{



    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    al = *LCB400040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1) = *(eax + 1) + eax + 1;
    eax = *L00000001;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,cl");
    *( *L00C022D4 + 1) = *( *L00C022D4 + 1) + *L00C022D4 + 1;
    (restore)ebp;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 64) = *(eax + 1 - 64) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 63) = *(eax + 1 - 63) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010549 -> 0001050a */
/*	Procedure: 0x00010548 - 0x0001059F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1050a");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345012450;
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

/*	Procedure: 0x000105A0 - 0x000105F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105A0()
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
    *(eax - 99) = *(eax - 99) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e05fa();
}

/*	Procedure: 0x000105F8 - 0x00010607
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105ba");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010608 - 0x0001068B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105ca");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311605473;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10644");
    asm("rol byte [0x400ac0],1");
    edx :: 0;
    *(eax + 1 + 1117120) = *(eax + 1 + 1117120) + eax + 1 + 1117120;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -803446766) = *(edx + -803446766) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 + 122) = *(eax + 1 + 122) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001068d -> 0001064e */
/*	Procedure: 0x0001068C - 0x0001069B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1064e");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001069d -> 0001065e */
/*	Procedure: 0x0001069C - 0x00010723
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x1065e");
    asm("daa");
    edi = -1087913748;
    *(edx + -2147219168) = 0;
    al = Le8c00e7c() + 1;
    *eax = *eax + al;
    *eax = *eax + dl;
    *eax = *eax + 15;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx + 1008800404) = *(edx + 1008800404) + al;
    asm("rol byte [edi],1");
    edi = 539660776;
    dl = dl + dl;
    (restore)es;
    edi = -2147299092;
    *(eax + -804765694) = *(eax + -804765694) | dl;
    asm("daa");
    edi = -1090006804;
    eax = L01210978();
    *edi = *edi << 1;
    edi = -4255512;
    asm("out dx,eax");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(ecx - 112) = *(ecx - 112) + al;
    asm("adc ah,[ebx]");
    asm("rcl dl,0x7");
    edi = 1073758444;
    (restore)ebx;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Lc382071e();
    asm("loopne 0x10728");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010725 -> 000106e6 */
/*	Procedure: 0x00010724 - 0x00010773
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x106e6");
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

/* DEST BLOCK NOT FOUND: 00010775 -> 00010736 */
/*	Procedure: 0x00010774 - 0x00010783
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10736");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010785 -> 00010746 */
/*	Procedure: 0x00010784 - 0x0001079F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x10746");
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

/* DEST BLOCK NOT FOUND: 000107a1 -> 00010762 */
/*	Procedure: 0x000107A0 - 0x000107B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10762");
    al = *L69FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020824 - 0x0002082F
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

/*	Procedure: 0x00020830 - 0x0002083B
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

/*	Procedure: 0x0002083C - 0x0002086B
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

/*	Procedure: 0x0002086C - 0x0002087B
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
/* 0x000104cc     124 */ /* unknown */ void 	_start;
/* 0x00010548     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x000105f8      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010608     132 */ /* unknown */ void 	frame_dummy;
/* 0x0001068c      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x0001069c     136 */ /* unknown */ void 	main;
/* 0x00010724      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010774      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010784      28 */ /* unknown */ void 	_init;
/* 0x000107a0       1 */ /* unknown */ void 	_fini;
/* 0x000107b8       4 */ /* unknown */ void 	_lib_version;
/* 0x000107cb       0 */ /* unknown */ void 	_etext;
/* 0x000207cc       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000207f4       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020824      12 */ /* unknown */ void 	atexit;
/* 0x00020830      12 */ /* unknown */ void 	exit;
/* 0x0002083c      48 */ /* unknown */ void 	_exit;
/* 0x0002086c       1 */ /* unknown */ void 	printf;
/* 0x0002087c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020938       0 */ /* unknown */ void 	__dso_handle;
/* 0x0002093c      40 */ /* unknown */ void 	a;
/* 0x00020964       0 */ /* unknown */ void 	force_to_data;
/* 0x00020968       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0002096c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020970       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020974       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020978       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020978       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0002097c       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0002097c       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020980       0 */ /* unknown */ void 	p.0;
/* 0x00020984       0 */ /* unknown */ void 	_edata;
/* 0x00020984       1 */ /* unknown */ void 	completed.1;
/* 0x00020988      24 */ /* unknown */ void 	object.2;
/* 0x000209a0       4 */ /* unknown */ void 	_environ;
/* 0x000209a0       4 */ /* unknown */ void 	environ;
/* 0x000209a4       0 */ /* unknown */ void 	_end;
/* 0x000209a4       0 */ /* unknown */ void 	_END_;
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
