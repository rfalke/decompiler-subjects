/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/phi2/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x000104F4 - 0x0001056F
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
    goto L00010516;
    *eax = *eax + al;
L00010516:
    *ecx = *ecx + dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    *((al ^ 64) - 25) = *((al ^ 64) - 25) + (al ^ 64);
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1) = *(eax + 1) + eax + 1;
    esp = 1;
    asm("adc [eax],al");
    asm("adc [edx+0x95110010],dl");
    dl = dl + *(edx + al - 32 + 76809376);
    eax = eax + 1;
    dl = dl | *edi;
    *eax = *eax + al;
    asm("Unknown opcode 0x82");
    asm("xchg eax,esi");
    asm("adc ah,dl");
    asm("sbb al,0xd4");
    al :: 0;
    *eax = *eax + al;
    *(ecx + eax + 1073741824) = *(ecx + eax + 1073741824) + al;
    *(eax - 36) = *(eax - 36) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    *(eax + 1 - 35) = *(eax + 1 - 35) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 00010571 -> 00010532 */
/*	Procedure: 0x00010570 - 0x000105C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x10532");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345041122;
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

/*	Procedure: 0x000105C8 - 0x0001061F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105C8()
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
    *(eax - 71) = *(eax - 71) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e0622();
}

/*	Procedure: 0x00010620 - 0x0001062F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105e2");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00010630 - 0x000106B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105f2");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311568610;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x1066c");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    eax = *L0BC005D2;
    asm("adc [eax],eax");
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
    *(eax + 1 - 106) = *(eax + 1 - 106) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106b5 -> 00010676 */
/*	Procedure: 0x000106B4 - 0x000106C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10676");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106c5 -> 00010686 */
/*	Procedure: 0x000106C4 - 0x0001075F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

proc1()
{



    asm("popf");
    asm("jecxz 0x10686");
    al = dh;
    asm("daa");
    eax = *LA027F244 - 1;
    asm("rol byte [edi],1");
    *ebx = *ebx + dl;
    *eax = *eax + eax;
    *eax = *eax + *L20A28044 + *(eax + eax * 4);
    asm("rol byte [edi],1");
    al = *L40004048;
    *ecx = al;
    *eax = *eax + al;
    al = al + dl;
    asm("daa");
    eax = *LA007D044 - 1 + 1;
    *(eax - 124) = *(eax - 124) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    *edi = *edi << 1;
    edi = -1610099988;
    esp = esp + 1;
    asm("rol byte [edi],1");
    edi = 1073910508;
    *ecx = *ecx | dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    (save)eax;
    eax = eax + 1;
    *(eax + 127) = *(eax + 127) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax+0x10600],al");
    asm("rol byte [edi],1");
    al = *L40004048;
    if(!( *eax = *eax + al)) {
        *eax = *eax + al;
    }
    al = al + dl;
    asm("daa");
    al = *L00001144;
    edx = edx + 1;
    asm("adc ah,[eax]");
    (restore)eax;
    asm("rol byte [edi],cl");
    al = *LBF07D444;
    asm("in al,dx");
    *(eax + 1 + 115) = *(eax + 1 + 115) + eax + 1;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("rol byte [edi],1");
    *ecx = *ecx | *L0010B044;
    *( *L0010B044) = *( *L0010B044) + *L0010B044;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e0762();
}

/*	Procedure: 0x00010760 - 0x000107B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10722");
    asm("lock daa");
    eax = *LA027F244 - 1;
    asm("xchg eax,edx");
    asm("adc [eax],ah");
    al = al + 208;
    (restore)es;
    al = *L40029248 | dl;
    (restore)es;
    al = *L4002D244;
    *(edi - 1) = *(edi - 1) + bh;
    eax = *ecx();
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("xchg eax,edx");
    asm("adc [eax],al");
    *ecx = *ecx | dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax]");
    asm("pusha");
    eax = eax + 1;
    *(eax + 95) = *(eax + 95) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = Lc38207b2();
    asm("loopne 0x107bc");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 000107b9 -> 0001077a */
/*	Procedure: 0x000107B8 - 0x00010807
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1077a");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311468256;
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

/* DEST BLOCK NOT FOUND: 00010809 -> 000107ca */
/*	Procedure: 0x00010808 - 0x00010817
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x107ca");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010819 -> 000107da */
/*	Procedure: 0x00010818 - 0x00010833
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x107da");
    al = *L85FFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010835 -> 000107f6 */
/*	Procedure: 0x00010834 - 0x00010847
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x107f6");
    al = *L4EFFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000208BC - 0x000208C7
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

/*	Procedure: 0x000208C8 - 0x000208D3
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

/*	Procedure: 0x000208D4 - 0x00020903
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

/*	Procedure: 0x00020904 - 0x0002090F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

strlen()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
}

/*	Procedure: 0x00020910 - 0x0002091F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
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
/* 0x000104f4     124 */ /* unknown */ void 	_start;
/* 0x00010570     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x00010620      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x00010630     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106b4      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106c4     156 */ /* unknown */ void 	proc1;
/* 0x00010760      88 */ /* unknown */ void 	main;
/* 0x000107b8      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010808      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010818      28 */ /* unknown */ void 	_init;
/* 0x00010834       1 */ /* unknown */ void 	_fini;
/* 0x00010848       4 */ /* unknown */ void 	_lib_version;
/* 0x00010864       0 */ /* unknown */ void 	_etext;
/* 0x00020864       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0002088c       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x000208bc      12 */ /* unknown */ void 	atexit;
/* 0x000208c8      12 */ /* unknown */ void 	exit;
/* 0x000208d4      48 */ /* unknown */ void 	_exit;
/* 0x00020904      12 */ /* unknown */ void 	strlen;
/* 0x00020910       1 */ /* unknown */ void 	printf;
/* 0x00020920       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x000209dc       0 */ /* unknown */ void 	__dso_handle;
/* 0x000209e0       0 */ /* unknown */ void 	force_to_data;
/* 0x000209e4       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x000209e8       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x000209ec       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x000209f0       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x000209f4       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x000209f4       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x000209f8       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x000209f8       0 */ /* unknown */ void 	__JCR_END__;
/* 0x000209fc       0 */ /* unknown */ void 	p.0;
/* 0x00020a00       0 */ /* unknown */ void 	_edata;
/* 0x00020a00       1 */ /* unknown */ void 	completed.1;
/* 0x00020a04      24 */ /* unknown */ void 	object.2;
/* 0x00020a1c       4 */ /* unknown */ void 	_environ;
/* 0x00020a1c       4 */ /* unknown */ void 	environ;
/* 0x00020a20       0 */ /* unknown */ void 	_end;
/* 0x00020a20       0 */ /* unknown */ void 	_END_;
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
