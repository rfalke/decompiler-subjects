/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_boomerang/twofib/sparc_elf_from_boomerang/subject.exe'
 */

stack space not deallocated on return
/*	Procedure: 0x000104E0 - 0x00010517
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
    asm("stc");
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],eax");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    al :: 64;
    *(eax - 11) = *(eax - 11) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + eax + 1;
}

/*	Procedure: 0x00010518 - 0x0001055B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00010518()
{



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
    eax = eax + 1;
    asm("aam 0x22");
    asm("rol byte [eax],0x40");
    *eax = *eax + al;
    *ecx & al;
    *eax = *eax + al;
    *eax = *eax + al;
    eax = eax + 1;
    goto L00000040;
    eax = eax + 1;
    goto L00010552;
    *eax = *eax + al;
L00010552:
    *(ecx + -1375149885) = *(ecx + -1375149885) + al;
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 0001055d -> 0001051e */
/*	Procedure: 0x0001055C - 0x000105B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x1051e");
    eax = eax & *eax;
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    asm("Unknown opcode 0xff");
    asm("sti");
    asm("scasb");
    eax = eax + 344989923;
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

/*	Procedure: 0x000105B4 - 0x0001060B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L000105B4()
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
    *(eax - 57) = *(eax - 57) + al;
    asm("rol byte [0x149009c0],1");
    asm("pusha");
    eax = (al | 212) + 278005952;
    *ecx = *ecx & al;
    *edx = *edx >> cl;
    *eax = *eax + 1;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    Le39e060e();
}

/*	Procedure: 0x0001060C - 0x0001061B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_dtors_aux()
{



    asm("popf");
    asm("jecxz 0x105ce");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x0001061C - 0x0001069F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

frame_dummy()
{



    asm("popf");
    asm("jecxz 0x105de");
    asm("adc eax,[eax]");
    *eax = *eax + al;
    asm("das");
    *eax = *eax + al;
    if(!(eax = eax + 1)) {
    }
    ebx = ebx - 1;
    asm("scasb");
    eax = eax + 311582946;
    asm("pusha");
    eax = (al & dl) + 1378752;
    *eax = *eax + al;
    (restore)ss;
    *eax = *eax + al;
    *(edx + edx + -1568668512) = *(edx + edx + -1568668512) + dl;
    *eax = *eax & al;
    al = al + *(eax + 311821568);
    asm("loopne 0x10658");
    asm("rol byte [0x400ac0],1");
    eax = eax + 1;
    asm("scasd");
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
    *(eax + 1 - 92) = *(eax + 1 - 92) + eax + 1;
    *(eax - _START_) = *(eax - _START_) + eax - _START_;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106a1 -> 00010662 */
/*	Procedure: 0x000106A0 - 0x000106AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call_frame_dummy()
{



    asm("popf");
    asm("jecxz 0x10662");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 000106b1 -> 00010672 */
/*	Procedure: 0x000106B0 - 0x0001074B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

twofib()
{



    asm("popf");
    asm("jecxz 0x10672");
    asm("adc al,0x7");
    al = *LBF27D040;
    asm("loopne 0x106ad");
    asm("daa");
    esp = esp + 1;
    *(edx + -2146303968) = 0;
    (restore)es;
    *eax = *eax + eax;
    *eax = *eax + *LA007D044;
    *edi = *edi << 191;
    eax = L01211768();
    *edi = *edi << 1;
    edi = 8392940;
    asm("adc al,[ecx]");
    *eax = *eax + al;
    al = al + dl;
    (restore)es;
    eax = *( *L3F029244 + -790053113)();
    esp = esp & *(eax + 1085504);
    *(edi - 1) = *(edi - 1) | edi;
    asm("Unknown opcode 0xff");
    asm("out dx,al");
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + cl;
    asm("rol byte [edi],1");
    edi = -1087909656;
    asm("in al,0xd0");
    (restore)es;
    edi = -1087909652;
    Lecc00eea();
    asm("rol byte [edi],1");
    edi = 1073909988;
    al = al | dl;
    asm("daa");
    edi = -1090006804;
    *edx = *edx << 1;
    al = Le0c00efe() + 1 + dl;
    (restore)es;
    edi = -1090006292;
    asm("loopne 0x10709");
    ah = ah & *(eax + 4);
    asm("lock pop es");
    edi = 480;
    *(ecx + -2129862457) = *(ecx + -2129862457) + al;
    Le39e074e();
}

/*	Procedure: 0x0001074C - 0x000107BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    asm("popf");
    asm("jecxz 0x1070e");
    asm("adc byte [ecx],0x0");
    *(edx - 112) = *(edx - 112) + al;
    asm("adc ah,[eax]");
    (restore)eax;
    eax = eax + 1;
    *(eax + 116) = *(eax + 116) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("xchg eax,edx");
    (restore)es;
    edi = 4588;
    do {
        edx = edx + 1;
        asm("adc ah,[eax]");
        (save)1916796992;
        *eax = *eax + eax;
        *eax = *eax + al;
        (restore)es;
        edi = -1608265504;
        eax = eax + 1;
        asm("rol byte [edi],1");
        edi = -32788;
        asm("int3");
        *eax = *eax + eax;
        *eax = *eax + al;
        *eax = *eax + al;
        *eax = *eax + cl;
        asm("adc [eax],eax");
        asm("adc ah,[eax]");
    } while(*(edx - 112) = *(edx - 112) + al);
    (restore)es;
    edi = -1090005780;
    asm("loopne 0x107dd");
    *(eax + 99) = *(eax + 99) + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    asm("adc [eax],ah");
    *(eax + 17301520) = *(eax + 17301520) + dh;
    *eax = *eax + al;
    *(ecx + -2130124601) = *(ecx + -2130124601) + al;
    eax = Lc38207ba();
    asm("loopne 0x107c4");
    asm("scasb");
    eax = eax + eax;
    (restore)ss;
}

/* DEST BLOCK NOT FOUND: 000107c1 -> 00010782 */
/*	Procedure: 0x000107C0 - 0x0001080F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x10782");
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

/* DEST BLOCK NOT FOUND: 00010811 -> 000107d2 */
/*	Procedure: 0x00010810 - 0x0001081F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call___do_global_ctors_aux()
{



    asm("popf");
    asm("jecxz 0x107d2");
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 00010821 -> 000107e2 */
/*	Procedure: 0x00010820 - 0x0001083B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_init()
{



    asm("popf");
    asm("jecxz 0x107e2");
    al = *L7EFFFF7F;
    *eax = *eax + eax;
    if(!( *eax = *eax + al)) {
    }
    goto ( *ebp);
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 0001083d -> 000107fe */
/*	Procedure: 0x0001083C - 0x0001084F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fini()
{



    asm("popf");
    asm("jecxz 0x107fe");
    al = *L47FFFF7F;
    *eax = *eax + eax;
    *eax = *eax + al;
    edi = edi + -394196768;
    *eax = *eax + al;
}

/*	Procedure: 0x000208E0 - 0x000208EB
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

/*	Procedure: 0x000208EC - 0x000208F7
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

/*	Procedure: 0x000208F8 - 0x00020927
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

/*	Procedure: 0x00020928 - 0x00020933
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

/*	Procedure: 0x00020934 - 0x00020943
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
/* 0x000104e0     124 */ /* unknown */ void 	_start;
/* 0x0001055c     176 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x0001060c      16 */ /* unknown */ void 	call___do_global_dtors_aux;
/* 0x0001061c     132 */ /* unknown */ void 	frame_dummy;
/* 0x000106a0      16 */ /* unknown */ void 	call_frame_dummy;
/* 0x000106b0     156 */ /* unknown */ void 	twofib;
/* 0x0001074c     116 */ /* unknown */ void 	main;
/* 0x000107c0      80 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x00010810      16 */ /* unknown */ void 	call___do_global_ctors_aux;
/* 0x00010820      28 */ /* unknown */ void 	_init;
/* 0x0001083c       1 */ /* unknown */ void 	_fini;
/* 0x00010850       4 */ /* unknown */ void 	_lib_version;
/* 0x00010887       0 */ /* unknown */ void 	_etext;
/* 0x00020888       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x000208b0       0 */ /* unknown */ void 	_PROCEDURE_LINKAGE_TABLE_;
/* 0x000208e0      12 */ /* unknown */ void 	atexit;
/* 0x000208ec      12 */ /* unknown */ void 	exit;
/* 0x000208f8      48 */ /* unknown */ void 	_exit;
/* 0x00020928      12 */ /* unknown */ void 	printf;
/* 0x00020934       1 */ /* unknown */ void 	scanf;
/* 0x00020944       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x00020a00       0 */ /* unknown */ void 	__dso_handle;
/* 0x00020a04       0 */ /* unknown */ void 	force_to_data;
/* 0x00020a08       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x00020a0c       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x00020a10       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x00020a14       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x00020a18       0 */ /* unknown */ void 	__EH_FRAME_BEGIN__;
/* 0x00020a18       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x00020a1c       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x00020a1c       0 */ /* unknown */ void 	__JCR_END__;
/* 0x00020a20       0 */ /* unknown */ void 	p.0;
/* 0x00020a24       0 */ /* unknown */ void 	_edata;
/* 0x00020a24       1 */ /* unknown */ void 	completed.1;
/* 0x00020a28      24 */ /* unknown */ void 	object.2;
/* 0x00020a40       4 */ /* unknown */ void 	_environ;
/* 0x00020a40       4 */ /* unknown */ void 	environ;
/* 0x00020a44       0 */ /* unknown */ void 	_end;
/* 0x00020a44       0 */ /* unknown */ void 	_END_;
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
