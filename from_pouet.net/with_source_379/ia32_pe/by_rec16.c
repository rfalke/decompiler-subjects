/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_379/ia32_pe/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x0040101F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401000()
{



    edx = *L00402104;
    bl = 0;
    do {
        al = bl << 1;
        if(bl >= 128) {
            *edx = al;
        }
        edx = edx + 1;
        *edx = al;
        edx = edx + 1;
        *edx = al;
        edx = edx + 1 + 1;
    } while(bl = bl + 1);
}

/*	Procedure: 0x00401020 - 0x00401051
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401020()
{



    asm("pusha");
    edi = 0;
    eax = 0;
    edi = *L00402124;
    ecx = 2 & 255;
    do {
        *edi = *(((ch & 255 & 65535) << 6) + cx + 0x402146);
        edi = edi + 1;
        cx = cx + 1;
    } while(cx != 2816);
    asm("popa");
}

stack space not deallocated on return
/*	Procedure: 0x00401052 - 0x0040122F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401052()
{



    asm("pusha");
    eax = 0;
    ecx = 0;
    edx = 0;
    edi = 0;
    esi = 0;
    ebp = 0;
    *L00402140 = *L00402140 + 1;
    ebx = 0 & 65535;
    do {
        di = 1026;
        al = bl;
        dx = 61952;
        al = al - 128;
        asm("cbw");
        *L00402144 = ax;
        asm("imul al");
        dx = dx - ax;
        al = bh;
        di = di + 1;
        asm("jpe 0x401075");
        asm("fpatan");
        *L00402144 = *L00402144 * *L0040213E;
        ax = *L00402144;
        *L00402144 = dx;
        ax = ax + *L0040213F;
        ch = ah;
        cl = 0;
        al = (dh & 1799) + ah;
        asm("xchg dh,al");
        dh = dh + al;
        if(al <= 236 && al >= 235) {
            cl = ch >> 1;
            dh = ( *L00402144 << 5) + 96;
        }
        if(al <= 230) {
            ch = ch & 31;
            if(ch <= 3) {
                if(al >= 229) {
                    dh = al;
                    asm("ror dh,0x3");
                    dh = dh + 30;
                    cx = cx - 1;
                }
                dh = dh - 20;
            }
            if(al <= 178) {
                cx = cx - 1;
            }
        }
        *(ebx + *L0040211C) = cl;
        dh = dh + 128;
        *(ebx + *L00402120) = dh;
    } while(bx = bx + 1);
    edi = 256000;
    si = 100;
    do {
        *L00402142 = 65376;
        do {
            (save)edi;
            cx = 32576;
            ax = *L00402140 << 1;
            asm("cbw");
            asm("cwd");
            al = (al & ch) - cl;
            asm("imul al");
            ah = ah - 16;
            dx = dx ^ ax;
            ah = ax + ax - 1;
            dh = dh + 32;
            di = ax;
            do {
                cx = cx + *L00402142;
                dx = dx + si;
                di = di - 160;
                bx = di;
                bl = ch;
                ah = *( *L0040211C + ebx);
                al = *( *L00402120 + ebx);
                if(ah >= 0) {
                    break;
                }
                == ? L0040119d : ;
                bl = ah;
                bh = dh >> 1;
                ah = *( *L00402124 + ebx);
                if(ah != 0) {
                    goto L00401199;
                }
            } while(dh <= 70);
            goto L004011a2;
L00401199:
            al = al + 128;
L004011a2:
            (restore)edi;
            eax = *(((eax & 255) << 2) + *L00402104);
            *(edi + *L00402100) = eax;
            edi = edi - 4;
            *L00402142 = *L00402142 + 1;
        } while(*L00402142 != 160);
        si = si - 1;
    } while(si != -100);
    asm("popa");
    *__imp__GetClientRect();
    return(*__imp__StretchDIBits( *L004020D0, 0, 0, *L004020F8, *L004020FC, 0, 0, 320, 200, *L00402100, 0x40206c, 0, 13369376, *L004020CC, 0x4020f0));
}

stack space not deallocated on return
/*	Procedure: 0x00401230 - 0x004013FF
 *	Argument size: 4112
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    (save)1000000;
    (save)0;
    eax = *__imp__GlobalAlloc();
    if(eax != 0) {
        *L0040210C = eax;
        *L00402104 = eax;
        eax = eax + 2000;
        *L00402100 = eax;
        eax = *L00402100 + 400000;
        *L0040211C = eax;
        eax = *L0040211C + 200000;
        *L00402120 = eax;
        *L00402124 = *L00402120 + 100000;
        ebx = 499999;
        ax = 0;
        do {
            edi = *L0040210C;
            *edi = ax;
            edi = edi + 2;
        } while(ebx = ebx - 1);
        (save)0;
        *L004020B4 = *__imp__GetModuleHandleW();
        (save)32512;
        (save)0;
        *L004020B8 = *__imp__LoadIconW();
        (save)32512;
        (save)0;
        *L004020BC = *__imp__LoadCursorW();
        (save)0x4020a4;
        if(*__imp__RegisterClassW() != 0) {
            (save)0;
            (save) *L004020B4;
            (save)0;
            (save)0;
            (save)400;
            (save)540;
            (save)32768;
            (save)32768;
            (save)282001408;
            (save)0x402012;
            (save)0x402000;
            (save)0;
            eax = *__imp__CreateWindowExW();
            if(eax != 0) {
                *L004020CC = eax;
                (save)eax;
                *L004020D0 = *__imp__GetDC();
                L00401000();
                L00401020();
                L00401052();
                (save)4;
                (save) *L004020D0;
                for(*__imp__SetStretchBltMode(); 1; *L00402108 = *L00402108 + 1) {
                    (save)1;
                    (save)0;
                    (save)0;
                    (save)0;
                    (save)0x4020d4;
                    *__imp__PeekMessageW();
                    if(*L004020D8 == 18) {
                        goto L0040138c;
                    }
                    (save)0x4020d4;
                    *__imp__TranslateMessage();
                    (save)0x4020d4;
                    *__imp__DispatchMessageW();
                    L00401052();
                }
            }
        }
    }
    (save)16;
    (save)0;
    (save)0x40204c;
    (save)0;
    *__imp__MessageBoxW();
L0040138c:
    (save) *L004020D0;
    (save) *L004020CC;
    *__imp__ReleaseDC();
    (save) *L0040210C;
    *__imp__GlobalFree();
    (save) *L004020DC;
    *__imp__ExitProcess();
    (save)ebp;
    ebp = esp;
    (save)ebx;
    (save)esi;
    (save)edi;
    if(*(ebp + 12) != 2) {
        if(*(ebp + 12) != 5) {
L004013c8:
            (save) *(ebp + 20);
            (save) *(ebp + 16);
            (save) *(ebp + 12);
            (save) *(ebp + 8);
            eax = *__imp__DefWindowProcW();
            goto L004013fa;
        }
        eax = 0;
        if(*L00402108 < 10) {
            goto L004013c8;
        }
        L00401052();
        eax = 0;
        goto L004013c8;
    }
    *__imp__PostQuitMessage(0);
    eax = 0;
L004013fa:
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    (restore)ebp;
}

/*	Procedure: 0x00401401 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401401()
{



}

/* address  size  */
/* 0x00401230       0 */ /* unknown */ void 	__entry_point__;
/* 0x00404088       0 */ /* unknown */ void 	__imp__ExitProcess;
/* 0x0040408c       0 */ /* unknown */ void 	__imp__GetModuleHandleW;
/* 0x00404090       0 */ /* unknown */ void 	__imp__GlobalAlloc;
/* 0x00404094       0 */ /* unknown */ void 	__imp__GlobalFree;
/* 0x00404112       0 */ /* unknown */ void 	__imp__CreateWindowExW;
/* 0x00404116       0 */ /* unknown */ void 	__imp__DefWindowProcW;
/* 0x0040411a       0 */ /* unknown */ void 	__imp__DispatchMessageW;
/* 0x0040411e       0 */ /* unknown */ void 	__imp__GetClientRect;
/* 0x00404122       0 */ /* unknown */ void 	__imp__GetDC;
/* 0x00404126       0 */ /* unknown */ void 	__imp__LoadCursorW;
/* 0x0040412a       0 */ /* unknown */ void 	__imp__LoadIconW;
/* 0x0040412e       0 */ /* unknown */ void 	__imp__MessageBoxW;
/* 0x00404132       0 */ /* unknown */ void 	__imp__PeekMessageW;
/* 0x00404136       0 */ /* unknown */ void 	__imp__PostQuitMessage;
/* 0x0040413a       0 */ /* unknown */ void 	__imp__RegisterClassW;
/* 0x0040413e       0 */ /* unknown */ void 	__imp__ReleaseDC;
/* 0x00404142       0 */ /* unknown */ void 	__imp__TranslateMessage;
/* 0x00404222       0 */ /* unknown */ void 	__imp__SetStretchBltMode;
/* 0x00404226       0 */ /* unknown */ void 	__imp__StretchDIBits;
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
