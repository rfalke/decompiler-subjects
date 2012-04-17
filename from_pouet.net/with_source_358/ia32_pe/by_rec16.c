/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_358/ia32_pe/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x004011F3
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
        (save)"usrnel32";
        eax = LoadLibraryA();
        *L0040301A = eax;
        if(*L0040301A == 0) {
            goto L004011a4;
        }
        (save)"gdi32";
        eax = LoadLibraryA();
        *L0040301E = eax;
        if(*L0040301E == 0) {
            goto L004011a4;
        }
        (save)"LoadLibraryA";
        (save) *"";
        eax = GetProcAddress();
        *L00403048 = eax;
        if(*L00403048 == 0) {
            goto L004011a4;
        }
        (save)"GetDC";
        (save) *L0040301A;
        eax = GetProcAddress();
        *L0040304C = eax;
        if(*L0040304C == 0) {
            goto L004011a4;
        }
        (save)"SetPixel";
        (save) *L0040301E;
        eax = GetProcAddress();
        *L00403050 = eax;
        if(*L00403050 == 0) {
            goto L004011a4;
        }
        (save)"ReleaseDC";
        (save) *L0040301A;
        eax = GetProcAddress();
        *L00403054 = eax;
        if(*L00403054 == 0) {
            goto L004011a4;
        }
        (save)0;
        (save)128;
        (save)3;
        (save)0;
        (save)0;
        (save)1073741824;
        (save)"ROXOR-2A.exe";
        eax = CreateFileA();
        *"" = eax;
        if(*"" + 1 == 0) {
            goto L004011a4;
        }
        (save)0;
        (save)0;
        (save)186;
        (save) *"";
        SetFilePointer();
        (save)0;
        (save)0x403091;
        (save)4;
        (save)0x403048;
        (save) *"";
        WriteFile();
        (save)0;
        (save)0;
        (save)196;
        (save) *"";
        SetFilePointer();
        (save)0;
        (save)0x403091;
        (save)4;
        (save)0x40304c;
        (save) *"";
        WriteFile();
        (save)0;
        (save)0;
        (save)221;
        (save) *"";
        SetFilePointer();
        (save)0;
        (save)0x403091;
        (save)4;
        (save)0x403050;
        (save) *"";
        WriteFile();
        (save)0;
        (save)0;
        (save)247;
        (save) *"";
        SetFilePointer();
        (save)0;
        (save)0x403091;
        (save)4;
        (save)0x403054;
        (save) *"";
        WriteFile();
        (save) *"";
        CloseHandle();
    } else {
L004011a4:
        (save)0;
        (save)"ROXOR-2A SETUP";
        (save)"ERROR! (>_<)";
        (save)0;
        MessageBoxA();
        goto L004011cc;
    }
    (save)0;
    (save)"ROXOR-2A SETUP";
    (save)"DONE! (^_^)";
    (save)0;
    MessageBoxA();
L004011cc:
    (save) *"";
    FreeLibrary();
    (save) *L0040301A;
    FreeLibrary();
    (save) *L0040301E;
    FreeLibrary();
    (save)0;
    ExitProcess();
}

/* DEST BLOCK NOT FOUND: 004011f4 -> 00401206 */
/* DEST BLOCK NOT FOUND: 004011fa -> 00401206 */
/*	Procedure: 0x004011F4 - 0x004011F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

MessageBoxA()
{



    goto ( *__imp__MessageBoxA);
}

/* DEST BLOCK NOT FOUND: 004011fa -> 00401206 */
/*	Procedure: 0x004011FA - 0x004011FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

CloseHandle()
{



    goto ( *__imp__CloseHandle);
}

/*	Procedure: 0x00401200 - 0x00401205
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

CreateFileA()
{



    goto ( *__imp__CreateFileA);
}

/*	Procedure: 0x00401206 - 0x0040120B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ExitProcess()
{



    goto ( *__imp__ExitProcess);
}

/* DEST BLOCK NOT FOUND: 0040120c -> 00401206 */
/*	Procedure: 0x0040120C - 0x00401211
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

FreeLibrary()
{



    goto ( *__imp__FreeLibrary);
}

/* DEST BLOCK NOT FOUND: 00401212 -> 00401206 */
/*	Procedure: 0x00401212 - 0x00401217
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

GetProcAddress()
{



    goto ( *__imp__GetProcAddress);
}

/* DEST BLOCK NOT FOUND: 00401218 -> 00401206 */
/*	Procedure: 0x00401218 - 0x0040121D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

LoadLibraryA()
{



    goto ( *__imp__LoadLibraryA);
}

/* DEST BLOCK NOT FOUND: 0040121e -> 00401206 */
/*	Procedure: 0x0040121E - 0x00401223
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

SetFilePointer()
{



    goto ( *__imp__SetFilePointer);
}

/* DEST BLOCK NOT FOUND: 00401224 -> 00401206 */
/*	Procedure: 0x00401224 - 0x00401228
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
/* 0x004011f4       0 */ /* unknown */ void 	MessageBoxA;
/* 0x004011fa       0 */ /* unknown */ void 	CloseHandle;
/* 0x00401200       0 */ /* unknown */ void 	CreateFileA;
/* 0x00401206       0 */ /* unknown */ void 	ExitProcess;
/* 0x0040120c       0 */ /* unknown */ void 	FreeLibrary;
/* 0x00401212       0 */ /* unknown */ void 	GetProcAddress;
/* 0x00401218       0 */ /* unknown */ void 	LoadLibraryA;
/* 0x0040121e       0 */ /* unknown */ void 	SetFilePointer;
/* 0x00401224       0 */ /* unknown */ void 	WriteFile;
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
