/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/fbranch/sparc_elf_from_boomerang/subject.exe'
 */

/*	Procedure: 0x00010500 - 0x0001057B
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
    (save)ds;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    al & 64;
    *(ecx + 26) = *(ecx + 26) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    eax = eax + 1;
    *eax = *eax + al;
    asm("salc");
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
    asm("adc ah,bl");
    ah + dl :: 0;
    *(ah + dl) = *(ah + dl) + ah + dl;
    *(ebp + 1) = *(ebp + 1) + bl;
    *eax = *eax + al;
    *eax = *eax + al;
    ecx = ecx + 1;
    asm("sgdt [eax]");
    *eax = *eax + al;
    *(ecx + 16) = *(ecx + 16) + eax + 1;
    *(eax + 1) = *(eax + 1) + eax + 1;
    *eax = *eax + al;
    ebx = ebx + 61737184;
    asm("rcl byte [edi],0x9d");
}

/* DEST BLOCK NOT FOUND: 0001057d -> 0001053e */
/*	Procedure: 0x0001057C - 0x000105D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1053e");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 345027811;
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

/*	Procedure: 0x000105D4 - 0x0001062B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105D4()
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
    *(eax - 20) = *(eax - 20) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e062e();
}

/*	Procedure: 0x0001062C - 0x0001063B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105ee");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0001063C - 0x000106BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105fe");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311620834;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10678");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    asm("aam 0xd2");
    *(eax + 1117120) = *(eax + 1117120) + eax + 1117120;
    asm("adc ah,[eax]");
    asm("adc al,0xf0");
    *(eax + 1247424) = *(eax + 1247424) + eax + 1247424;
    asm("rol byte [esi],1");
    *eax = *eax + al;
    *(edx + -2147352544) = 0;
    *(edx + -803446766) = *(edx + -803446766) | dl;
    *(eax + -1568667200) = *(eax + -1568667200) & eax + -1568667200;
    *(al + *(eax + 66560)) = *(al + *(eax + 66560)) + al + *(eax + 66560);
    *(eax + 1 - 55) = *(eax + 1 - 55) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106c1 -> 00010682 */
/*	Procedure: 0x000106C0 - 0x000106CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10682");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106d1 -> 00010692 */
stack space not deallocated on return
/*	Procedure: 0x000106D0 - 0x0001072C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x10692");
    *L90420000 = dl;
    asm("adc ah,[eax+0x400040c8]");
    asm("rcl byte [edx+0xc5ecbf07],0x7");
    edi = 1004;
    edx = edx + 1;
    *(eax + 13050393) = esp;
    asm("popa");
    *ebx :: dl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc ah,[eax-0x30]");
    *(eax + 1070146329) = *(eax + 1070146329) & 534835391;
    edi = 1087216;
    asm("adc cl,al");
    asm("aas");
    edi = 1087728;
    asm("adc eax,esp");
    (restore)ds;
    edi = 1086704;
    asm("adc [eax+0x0],eax");
    eax = eax + 1;
    bl = 146;
    asm("adc [eax],al");
    asm("adc [ebx],ah");
    *eax = *eax + al;
    edx = edx + 1;
    asm("rol dword [edi],0xbf");
    asm("in al,dx");
}

/*	Procedure: 0x0001072D - 0x0001082B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0001072D()
{



    al = al + 97;
    *(ecx + 18893480) :: al;
    *eax = *eax + al;
    *ebx = *ebx + al;
    *eax = *eax + 12;
    asm("sbb [eax],eax");
    *(edx + 23) = *(edx + 23) + al;
    *eax = *eax + al;
    edx = edx + 1;
    eax = eax + 1;
    *(eax - 84) = *(eax - 84) + al;
    asm("adc ah,al");
    asm("clc");
    asm("lds eax,[edi]");
    edi = 1627704300;
    *(ecx + 19024553) :: al;
    *eax = *eax + al;
    *ebx = *ebx + dl;
    *eax = *eax + 7;
    asm("sbb eax,[eax]");
    *(edx + 25) = *(edx + 25) + al;
    *eax = *eax + al;
    edx = edx + 1;
    *(eax + 1 - 93) = *(eax + 1 - 93) + eax + 1;
    asm("adc esp,[eax]");
    eax = Lecc00f39();
    asm("sbb eax,[eax]");
    *(edx - 51) = *(edx - 51) + al;
    esp = esp + *(ecx + 56);
    *(ecx + 107146) = *(ecx + 107146) - -2146631680;
    *eax = *eax + ah;
    (restore)ds;
    *eax = *eax + al;
    edx = edx + 1;
    *eax = *eax & eax;
    *(edx - 49) = *(edx - 49) + al;
    al = al + 33;
    *(ecx + 27445929) :: al;
    *eax = *eax + al;
    *ebx = *ebx + bl;
    *eax = *eax + 22;
    eax = eax & *eax;
    *(edx + 49) = *(edx + 49) + al;
    *eax = *eax + al;
    edx = edx + 1;
    asm("rol dword [esi],1");
    *eax = *eax & edi;
    *(edx + 107018) = *(edx + 107018) - -2145976320;
    *(ebx + eax) = *(ebx + eax) + cl;
    *eax = *eax + al;
    edx = edx + 1;
    asm("adc eax,[eax]");
    *(edx - 45) = *(edx - 45) + al;
    ah = ah + *(ecx + 56);
    *(edx + 107082) = *(edx + 107082) - -2145845248;
    *ebx = *ebx + dl;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc eax,0x40420000");
    *(eax - 121) = *(eax - 121) + al;
    asm("adc ah,[ecx+0x803030]");
    (save)cs;
    *(eax + 1 - 124) = *(eax + 1 - 124) + eax + 1;
    asm("adc [ecx+0x18],ah");
    asm("adc [edi+0x7c5f4ff],bh");
    edi = 1073758444;
    asm("adc byte [eax+0x10086114],0xbf");
    asm("Unknown opcode 0xff");
    goto L00001390;
    asm("loope 0x10808");
    *(eax + 1 + 123) = *(eax + 1 + 123) + eax + 1;
    *eax = *eax & eax;
    *(edx + 16) = *(edx + 16) + al;
    edi = 130408703;
    edi = 492;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Lc3820826();
    asm("loopne 0x10830");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 0001082d -> 000107ee */
/*	Procedure: 0x0001082C - 0x0001087B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x107ee");
    asm("adc [eax],eax");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 311428321;
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

/* DEST BLOCK NOT FOUND: 0001087d -> 0001083e */
/*	Procedure: 0x0001087C - 0x0001088B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x1083e");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001088d -> 0001084e */
/*	Procedure: 0x0001088C - 0x000108A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x1084e");
    al = *L6BFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000108a9 -> 0001086a */
/*	Procedure: 0x000108A8 - 0x000108BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x1086a");
    al = *L34FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x00020994 - 0x0002099F
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

/*	Procedure: 0x000209A0 - 0x000209AB
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

/*	Procedure: 0x000209AC - 0x000209DB
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

/*	Procedure: 0x000209DC - 0x000209E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

scanf()
{



    eax = eax + *eax;
    *(eax + 48) = *(eax + 48) + bh;
    edi = 123391;
    *eax = *eax + al;
}

/*	Procedure: 0x000209E8 - 0x000209F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

printf()
{



    eax = eax + *eax;
    *(eax + esi + 31391679) = *(eax + esi + 31391679) + al;
    *eax = *eax + al;
    *ebx = *ebx + al;
}

/*	Procedure: 0x000209F4 - 0x00020A03
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

puts()
{



    eax = eax + *eax;
    *(eax + -603996368) = *(eax + -603996368) + dl;
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00010000       0 */ /* unknown */ void 	_START_;
/* 0x00010500     124 */ /* unknown */ void 	_start;
/* 0x0001057c     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x0001062c      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x0001063c     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106c0      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106d0     348 */ /* unknown */ void 	main;
/* 0x0001082c      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x0001087c      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x0001088c      28 */ /* unknown */ void 	_init;
/* 0x000108a8       1 */ /* unknown */ void 	_fini;
/* 0x000108c0       4 */ /* unknown */ void 	_lib_version;
/* 0x0001093c       0 */ /* unknown */ void 	_etext;
/* 0x0002093c       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x00020964       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x00020994      12 */ /* unknown */ void 	atexit;
/* 0x000209a0      12 */ /* unknown */ void 	exit;
/* 0x000209ac      48 */ /* unknown */ void 	_exit;
/* 0x000209dc      12 */ /* unknown */ void 	scanf;
/* 0x000209e8      12 */ /* unknown */ void 	printf;
/* 0x000209f4       1 */ /* unknown */ void 	puts;
/* 0x00020a04       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020ac0       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020ac4       0 */ /* unknown */ void 	force_to_data;
/* 0x00020ac8       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020acc       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020ad0       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020ad4       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020ad8       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020ad8       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020adc       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020adc       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020ae0       0 */ /* unknown */ void 	p.0;
/* 0x00020ae4       0 */ /* unknown */ void 	_edata;
/* 0x00020ae4       1 */ /* unknown */ void 	completed.1;
/* 0x00020ae8      24 */ /* unknown */ void 	object.2;
/* 0x00020b00       4 */ /* unknown */ void 	_environ;
/* 0x00020b00       4 */ /* unknown */ void 	environ;
/* 0x00020b04       0 */ /* unknown */ void 	_end;
/* 0x00020b04       0 */ /* unknown */ void 	_END_;
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
