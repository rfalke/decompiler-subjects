/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/testarray2/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104FC - 0x00010577
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
    ecx = ecx + 1;
    (restore)es;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    *eax & al;
    eax = eax + *(ecx + 1);
    *eax = *eax + al;
    *eax = *eax + al;
    dh = dh + cl;
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
    asm("xchg eax,esp");
    asm("aam 0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    asm("jpo 0x1055e");
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    asm("clc");
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 7) = *(eax + 1 - 7) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010579 -> 0001053a */
/*	Procedure: 0x00010578 - 0x000105CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1053a");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345004259;
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

/*	Procedure: 0x000105D0 - 0x00010627
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105D0()
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
    *(eax - 43) = *(eax - 43) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e062a();
}

/*	Procedure: 0x00010628 - 0x00010637
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105ea");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010638 - 0x000106BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105fa");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311597282;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10674");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    ebp = 197133778;
    asm("adc [eax],eax");
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
    *(eax + 1 - 78) = *(eax + 1 - 78) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106bd -> 0001067e */
/*	Procedure: 0x000106BC - 0x000106CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x1067e");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106cd -> 0001068e */
/*	Procedure: 0x000106CC - 0x00010707
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mid()
{



    asm("popf");
    asm("jecxz 0x1068e");
    asm("lock daa");
    dl = dl + *L20109244;
    (restore)es;
    *(ecx + -1827135446) = *(ecx + -1827135446) + dl;
    ( *L40029044 | dl | *eax) :: *eax;
    asm("sbb [ecx],dl");
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    al = *LA2400040;
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010709 -> 000106ca */
/*	Procedure: 0x00010708 - 0x00010743
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

fst()
{



    asm("popf");
    asm("jecxz 0x106ca");
    asm("lock daa");
    dl = dl | *L20109244;
    (restore)es;
    *(ecx + -1827135446) = *(ecx + -1827135446) + dl;
    ( *L40029044 | dl | *eax) :: *eax;
    asm("sbb [ecx],dl");
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    eax = -1824522176;
    *L93400040 = *L93400040 + -1824522176;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010745 -> 00010706 */
/*	Procedure: 0x00010744 - 0x00010770
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10706");
    edi = 4584;
    asm("Unknown opcode 0x82");
    asm("adc ah,[edx]");
    (save)eax;
    if(!(al = al + 39)) {
    }
    asm("Unknown opcode 0xff");
    (fsave)(frestore) + *ecx;
    *eax = *eax + al;
    *ecx = *ecx + dl;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc ah,[edx]");
    (save)eax;
    bh = bh + *edi;
    *(edi - 1) = *(edi - 1) / *(edi - 1);
    edx = *(edi - 1) % *(edi - 1);
    asm("Unknown opcode 0xff");
    L00010771();
    asm("adc [eax],eax");
}

/*	Procedure: 0x00010771 - 0x00010807
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010771()
{



    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("adc ah,[edx]");
    (save)eax;
    *edi = *edi << 1;
    edi = -1087913756;
    asm("in al,dx");
    asm("rol byte [edi],1");
    edi = 547520748;
    al = al + 4;
    *eax = *eax + 4;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x11200],al");
    *eax = *eax + al;
    asm("xchg eax,esi");
    (restore)es;
    edi = -1073556764;
    *(eax + -804716528) = *(eax + -804716528) + dl;
    *(ecx + -1793581014) = *(ecx + -1793581014) + dl;
    (al | *eax) :: *(al | *eax);
    asm("sbb al,dl");
    (restore)es;
    edi = 168168;
    dl = dl | al;
    asm("daa");
    edi = 1610781416;
    al :: 0;
    al = al + edx + edx;
    (restore)es;
    edi = 537039084;
    eax = eax + edx;
    asm("daa");
    edi = -4255508;
    asm("in al,dx");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    asm("rcl dl,1");
    (restore)es;
    edi = 1073758440;
    *eax = *eax + ax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Lc3820802();
    asm("loopne 0x1080c");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 00010809 -> 000107ca */
/*	Procedure: 0x00010808 - 0x00010857
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x107ca");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311478496;
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

/* DEST BLOCK NOT FOUND: 00010859 -> 0001081a */
/*	Procedure: 0x00010858 - 0x00010867
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1081a");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010869 -> 0001082a */
/*	Procedure: 0x00010868 - 0x00010883
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1082a");
    al = *L73FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010885 -> 00010846 */
/*	Procedure: 0x00010884 - 0x00010897
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x10846");
    al = *L3CFFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020934 - 0x0002093F
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

/*	Procedure: 0x00020940 - 0x0002094B
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

/*	Procedure: 0x0002094C - 0x0002097B
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

/*	Procedure: 0x0002097C - 0x0002098B
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
/* 0x000104fc     124 */ /* unknown */ void 	_start;
/* 0x00010578     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010628      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010638     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106bc      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106cc      60 */ /* unknown */ void 	mid;
/* 0x00010708      60 */ /* unknown */ void 	fst;
/* 0x00010744     196 */ /* unknown */ void 	main;
/* 0x00010808      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010858      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010868      28 */ /* unknown */ void 	_init;
/* 0x00010884       1 */ /* unknown */ void 	_fini;
/* 0x00010898       4 */ /* unknown */ void 	_lib_version;
/* 0x000108db       0 */ /* unknown */ void 	_etext;
/* 0x000208dc       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020904       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020934      12 */ /* unknown */ void 	atexit;
/* 0x00020940      12 */ /* unknown */ void 	exit;
/* 0x0002094c      48 */ /* unknown */ void 	_exit;
/* 0x0002097c       1 */ /* unknown */ void 	printf;
/* 0x0002098c       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020a4c       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020a50       5 */ /* unknown */ void 	gca;
/* 0x00020a58       0 */ /* unknown */ void 	force_to_data;
/* 0x00020a5c       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020a60       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020a64       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020a68       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020a6c       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020a6c       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020a70       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020a70       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020a74       0 */ /* unknown */ void 	p.0;
/* 0x00020a78       0 */ /* unknown */ void 	_edata;
/* 0x00020a78       1 */ /* unknown */ void 	completed.1;
/* 0x00020a7c      24 */ /* unknown */ void 	object.2;
/* 0x00020a94       4 */ /* unknown */ void 	environ;
/* 0x00020a94       4 */ /* unknown */ void 	_environ;
/* 0x00020a98       0 */ /* unknown */ void 	_end;
/* 0x00020a98       0 */ /* unknown */ void 	_END_;
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
