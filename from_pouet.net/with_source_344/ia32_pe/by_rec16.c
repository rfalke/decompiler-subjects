/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_344/ia32_pe/subject.exe'
 */

/* DEST BLOCK NOT FOUND: 00410047 -> 0041008f */
/*	Procedure: 0x00410002 - 0x00410077
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    *edx = *edx ^ al;
    *ecx = *ecx + al;
    ch = ch + dl;
    asm("insd");
    0 = *(ecx + 12) * esi;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + eax;
    *edx = *edx + al;
    *eax = *eax + al;
    asm("fidivr dword [edi+0x321003f]");
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    edx = edx + 1;
    *eax = *eax + al;
    *ebx = *ebx + al;
    *eax = *eax + al;
    *eax = *eax + eax;
    asm("loop 0x40ffe8");
    ebx = ebx + 1;
    (save)ebp;
    al = al + *eax;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + eax;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    goto L0041008f;
    *eax = *eax + al;
    *eax = *eax + al;
    *eax = *eax + al;
    al = al + *eax;
    *eax = *eax + al;
    asm("pushf");
    *ecx = *ecx + al;
    *(eax + eax + 7864321) = *(eax + eax + 7864321) + dl;
    *eax = *eax + eax;
    asm("mul byte [eax+0xe000d]");
    *eax = *eax + al;
    esp = esp ^ *%fs:eax+edi*2+0x39];
    (restore)edi;
    esi = esi ^ *eax;
    *eax = *eax + al;
    edx = edx + 1;
    *eax = *eax + al;
}

/* address  size  */
/* 0x00410002       0 */ /* unknown */ void 	__entry_point__;
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
option: -usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
