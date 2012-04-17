/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_377/ia32_pe/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x00401016
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401000()
{



    edx = *L00402104;
    bl = 0;
    do {
        *edx = bl;
        edx = edx + 1;
        *edx = bl;
        edx = edx + 1;
        *edx = bl;
        edx = edx + 1 + 1;
    } while(bl = bl + 1);
}

/*	Procedure: 0x00401017 - 0x00401087
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401017()
{



    ecx = 3840;
    edi = *L00402118;
    *edi = *L00402136;
    esi = 0x402137;
    edi = edi + 1;
    asm("loop 0x401027");
    eax = 0;
    ebx = 0;
    ecx = 0;
    edx = 0;
    ebp = 0;
    edi = 0;
    esi = 0;
    do {
        esi = *L00402118;
        cl = 2;
        dx = 1275;
        if(bl <= 1275 && bl >= 1275) {
            (save)bx;
            bh = bl >> 2 >> 2;
            di = ((bh & 255) << 6) + bx;
            (restore)bx;
            if(!( *(esi + edi + -8644) & 1275)) {
                dx = (bx & 3855) + dh << 2;
            }
        }
        *( *L0040211C + ebx) = dl;
    } while(bx = bx - 1);
}

stack space not deallocated on return
/*	Procedure: 0x00401088 - 0x004011F4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401088()
{



    asm("pusha");
    eax = 0;
    ecx = 0;
    edx = 0;
    ebp = 0;
    edi = 0;
    esi = 0;
    ebx = 1024 & 65535;
    esi = 0x402136;
    cx = cx + 1;
    *(0x402136 + ebx) = *(0x402136 + ebx) + cx;
    asm("fsincos");
    *(esi + ebx + 31) = *(esi + ebx) / *L00402130;
    *(esi + ebx + 35) = (frestore);
    bl = bl + 8;
    asm("jpo 0x40109b");
    bh = 3;
    edx = 0;
    bp = 128;
    do {
        edi = 1053 & 65535;
        al = dl;
        bl = ch;
        al = al - 128;
        asm("cbw");
        esi = 0x402136;
        *(0x402136 + ebx) = ax;
        al = dh;
        bx = bx + 1 + 1;
        asm("jpo 0x4010e7");
        bl = 0;
        di = di + 1;
        asm("jpe 0x4010d0");
        *(esi + ebx) = bp;
        bl = 0;
        (fsave) *(esi + ebx);
        bx = bx + 1 + 1;
        asm("jpo 0x4010f1");
        asm("faddp st1");
        asm("fxch st2");
        asm("fxch st3");
        asm("fsubp st3");
        asm("fxch");
        di = di + 8;
        asm("jpe 0x4010fa");
        asm("fdivp st1,st0");
        *(esi + ebx) = (st3 * *(esi + edi + 4) * *(esi + edi + 4) * *(esi + edi) + *L00402132) / *L00402134 / st2;
        320 = *(esi + ebx) * edi;
        *(esi + ebx) = st1 * *(esi + edi);
        edi = edi + *(esi + ebx);
        al = *(edx + *L0040211C);
        *( *L00402118 + edi + 32160) = *( *L00402118 + edi + 32160) + (al >> 5);
    } while(dx = dx + 1);
    bp = ~bp;
    >= ? 0x401156 : ;
    ch = ch + 2;
    asm("jpo 0x4010c2");
    ecx = 64000;
    esi = 1280 + *L00402118;
    edi = 1280 + *L00402100;
    al = *esi;
    *esi = 0;
    *edi = *(((eax & 255) << 2) + *L00402104);
    esi = esi + 1;
    edi = edi + 4;
    asm("loop 0x401187");
    ecx = 0;
    asm("popa");
    *__imp__GetClientRect();
    return(*__imp__StretchDIBits( *L004020D0, 0, 0, *L004020F8, *L004020FC, 0, 0, 320, 200, *L00402100, 0x40206c, 0, 13369376, *L004020CC, 0x4020f0));
}

stack space not deallocated on return
/*	Procedure: 0x004011F5 - 0x004013A2
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
        *L00402118 = *L0040211C + 200000;
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
                L00401017();
                L00401088();
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
                        goto L0040132f;
                    }
                    (save)0x4020d4;
                    *__imp__TranslateMessage();
                    (save)0x4020d4;
                    *__imp__DispatchMessageW();
                    L00401088();
                }
            }
        }
    }
    (save)16;
    (save)0;
    (save)0x40204c;
    (save)0;
    *__imp__MessageBoxW();
L0040132f:
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
L0040136b:
            (save) *(ebp + 20);
            (save) *(ebp + 16);
            (save) *(ebp + 12);
            (save) *(ebp + 8);
            eax = *__imp__DefWindowProcW();
            goto L0040139d;
        }
        eax = 0;
        if(*L00402108 < 10) {
            goto L0040136b;
        }
        L00401088();
        eax = 0;
        goto L0040136b;
    }
    *__imp__PostQuitMessage(0);
    eax = 0;
L0040139d:
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    (restore)ebp;
}

/*	Procedure: 0x004013A4 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004013A4()
{



}

/* address  size  */
/* 0x004011f5       0 */ /* unknown */ void 	__entry_point__;
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
