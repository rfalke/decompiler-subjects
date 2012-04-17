/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_354/ia32_pe/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x004010C3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    (save)"kernel32";
    eax = LoadLibraryA();
    *"" = eax;
    if(*"" != 0) {
        (save)"WinExec";
        (save) *"";
        eax = GetProcAddress();
        *"" = eax;
        if(*"" == 0) {
            goto L00401089;
        }
        (save)0;
        (save)128;
        (save)3;
        (save)0;
        (save)0;
        (save)1073741824;
        (save)"XOR";
        eax = CreateFileA();
        *"" = eax;
        if(*"" + 1 == 0) {
            goto L00401089;
        }
        (save)0;
        (save)0;
        (save)49;
        (save) *"";
        SetFilePointer();
        (save)0;
        (save)0x403052;
        (save)4;
        (save)"";
        (save) *"";
        WriteFile();
        (save) *"";
        CloseHandle();
    } else {
L00401089:
        (save)0;
        (save)"XOROX-KO SETUP";
        (save)"ERROR! (>_<)";
        (save)0;
        MessageBoxA();
        goto L004010b1;
    }
    (save)0;
    (save)"XOROX-KO SETUP";
    (save)"DONE! (^_^)";
    (save)0;
    MessageBoxA();
L004010b1:
    (save) *"";
    FreeLibrary();
    (save)0;
    ExitProcess();
    asm("int3");
}

/* DEST BLOCK NOT FOUND: 004010c4 -> 004010d6 */
/* DEST BLOCK NOT FOUND: 004010ca -> 004010d6 */
/*	Procedure: 0x004010C4 - 0x004010C9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

MessageBoxA()
{



    goto ( *__imp__MessageBoxA);
}

/* DEST BLOCK NOT FOUND: 004010ca -> 004010d6 */
/*	Procedure: 0x004010CA - 0x004010CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

CloseHandle()
{



    goto ( *__imp__CloseHandle);
}

/*	Procedure: 0x004010D0 - 0x004010D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

CreateFileA()
{



    goto ( *__imp__CreateFileA);
}

/*	Procedure: 0x004010D6 - 0x004010DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ExitProcess()
{



    goto ( *__imp__ExitProcess);
}

/* DEST BLOCK NOT FOUND: 004010dc -> 004010d6 */
/*	Procedure: 0x004010DC - 0x004010E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

FreeLibrary()
{



    goto ( *__imp__FreeLibrary);
}

/* DEST BLOCK NOT FOUND: 004010e2 -> 004010d6 */
/*	Procedure: 0x004010E2 - 0x004010E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetProcAddress()
{



    goto ( *__imp__GetProcAddress);
}

/* DEST BLOCK NOT FOUND: 004010e8 -> 004010d6 */
/*	Procedure: 0x004010E8 - 0x004010ED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

LoadLibraryA()
{



    goto ( *__imp__LoadLibraryA);
}

/* DEST BLOCK NOT FOUND: 004010ee -> 004010d6 */
/*	Procedure: 0x004010EE - 0x004010F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

SetFilePointer()
{



    goto ( *__imp__SetFilePointer);
}

/* DEST BLOCK NOT FOUND: 004010f4 -> 004010d6 */
/*	Procedure: 0x004010F4 - 0x004010F8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

WriteFile()
{



    goto ( *__imp__WriteFile);
}

/* address  size  */
/* 0x00401000       0 */ /* unknown */ void 	__entry_point__;
/* 0x004010c4       0 */ /* unknown */ void 	MessageBoxA;
/* 0x004010ca       0 */ /* unknown */ void 	CloseHandle;
/* 0x004010d0       0 */ /* unknown */ void 	CreateFileA;
/* 0x004010d6       0 */ /* unknown */ void 	ExitProcess;
/* 0x004010dc       0 */ /* unknown */ void 	FreeLibrary;
/* 0x004010e2       0 */ /* unknown */ void 	GetProcAddress;
/* 0x004010e8       0 */ /* unknown */ void 	LoadLibraryA;
/* 0x004010ee       0 */ /* unknown */ void 	SetFilePointer;
/* 0x004010f4       0 */ /* unknown */ void 	WriteFile;
/* 0x00402000       0 */ /* unknown */ void 	__imp__FreeLibrary;
/* 0x00402004       0 */ /* unknown */ void 	__imp__WriteFile;
/* 0x00402008       0 */ /* unknown */ void 	__imp__CloseHandle;
/* 0x0040200c       0 */ /* unknown */ void 	__imp__CreateFileA;
/* 0x00402010       0 */ /* unknown */ void 	__imp__ExitProcess;
/* 0x00402014       0 */ /* unknown */ void 	__imp__GetProcAddress;
/* 0x00402018       0 */ /* unknown */ void 	__imp__LoadLibraryA;
/* 0x0040201c       0 */ /* unknown */ void 	__imp__SetFilePointer;
/* 0x00402024       0 */ /* unknown */ void 	__imp__MessageBoxA;
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
