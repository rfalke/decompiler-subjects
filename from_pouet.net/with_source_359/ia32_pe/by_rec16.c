/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_pouet.net/with_source_359/ia32_pe/subject.exe'
 */

/*	Procedure: 0x00401000 - 0x0040101A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L00401000()
{



    edx = *L004020DA;
    bl = 0;
    do {
        *edx = bl >> 1;
        edx = edx + 1;
        *edx = bl;
        edx = edx + 1;
        *edx = bl;
        edx = edx + 1 + 1;
    } while(bl = bl + 1);
}

stack space not deallocated on return
/*	Procedure: 0x0040101B - 0x00401149
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040101B()
{



    asm("pusha");
    asm("finit");
    edi = *L004020D6 + 254720;
    *L004020EE = *L004020EE + 2;
    (fsave) *ebx / *(ebx + 2);
    asm("fsincos");
    ax = 320;
    dx = 65336;
    (save)320;
    do {
        ax = ~ax;
        (save)dx;
        do {
            (save)ax;
            L0040114A();
            asm("fxch st3");
            asm("fxch");
            L0040114A();
            asm("fxch st4");
            L0040114A();
            asm("fabs");
            asm("fchs");
            esi = 0x4020f4;
            *L004020F4 = *(esi + 2);
            *(esi + 2) = *(esp + 4);
            asm("fxch st2");
            *(esi + 4) = *esp;
            al = 127;
            (save)di;
            bx = *(esi - 7);
            bp = bx;
            cx = 0;
            di = bx;
            *esi = *esi - 1;
            do {
                cx = cx + *esi;
                bp = bp + *(esi + 2);
                di = di + *(esi + 4);
                ah = 228;
                L0040115F();
                (save)dx;
                eax = L0040115F();
                (restore)bx;
                asm("adc dh,bh");
            } while(!(ah = *(esi - 5) + 39 & 248) && (al = al - 1));
            (restore)di;
            eax = (eax & 255) << 3;
            *edi = *( *L004020DA + eax);
            edi = edi + 4;
            (restore)ax;
            ax = ax + 1 + 1;
        } while(ax != 320);
        edi = edi - 2560;
        (restore)dx;
        dx = dx + 1 + 1;
    } while(dx != 200);
    (restore)ax;
    asm("popa");
    *__imp__GetClientRect();
    return(*__imp__StretchDIBits( *L004020A6, 0, 0, *L004020CE, *L004020D2, 0, 0, 320, 200, *L004020D6, 0x402042, 0, 13369376, *L004020A2, 0x4020c6));
}

/*	Procedure: 0x0040114A - 0x0040115E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040114A()
{



    (fsave)st0 * st3;
    asm("fxch st2");
    asm("faddp st3");
    asm("fxch");
    (fsave)st0 * st5 * st3 * st4;
    asm("fsubp st1");
}

/*	Procedure: 0x0040115F - 0x00401171
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0040115F()
{



    bh = bp + ah;
    dh = di + ah & bx & cx & ah;
}

stack space not deallocated on return
/*	Procedure: 0x00401172 - 0x004012F8
 *	Argument size: 4112
 *	Local size: 0
 *	Save regs size: 0
 */

__entry_point__()
{



    (save)500000;
    (save)0;
    eax = *__imp__GlobalAlloc();
    if(eax != 0) {
        *L004020E2 = eax;
        *L004020DA = eax;
        *L004020D6 = eax + 2000;
        (save)0;
        *L0040208A = *__imp__GetModuleHandleW();
        (save)32512;
        (save)0;
        *L0040208E = *__imp__LoadIconW();
        (save)32512;
        (save)0;
        *L00402092 = *__imp__LoadCursorW();
        (save)0x40207a;
        if(*__imp__RegisterClassW() != 0) {
            (save)0;
            (save) *L0040208A;
            (save)0;
            (save)0;
            (save)500;
            (save)640;
            (save)32768;
            (save)32768;
            (save)282001408;
            (save)0x402012;
            (save)0x402000;
            (save)0;
            eax = *__imp__CreateWindowExW();
            if(eax != 0) {
                *L004020A2 = eax;
                (save)eax;
                *L004020A6 = *__imp__GetDC();
                L00401000();
                for(L0040101B(); 1; *L004020DE = *L004020DE + 1) {
                    (save)1;
                    (save)0;
                    (save)0;
                    (save)0;
                    (save)0x4020aa;
                    *__imp__PeekMessageW();
                    if(*L004020AE == 18) {
                        goto L00401285;
                    }
                    (save)0x4020aa;
                    *__imp__TranslateMessage();
                    (save)0x4020aa;
                    *__imp__DispatchMessageW();
                    L0040101B();
                }
            }
        }
    }
    (save)16;
    (save)0;
    (save)0x402022;
    (save)0;
    *__imp__MessageBoxW();
L00401285:
    (save) *L004020A6;
    (save) *L004020A2;
    *__imp__ReleaseDC();
    (save) *L004020E2;
    *__imp__GlobalFree();
    (save) *L004020B2;
    *__imp__ExitProcess();
    (save)ebp;
    ebp = esp;
    (save)ebx;
    (save)esi;
    (save)edi;
    if(*(ebp + 12) != 2) {
        if(*(ebp + 12) != 5) {
L004012c1:
            (save) *(ebp + 20);
            (save) *(ebp + 16);
            (save) *(ebp + 12);
            (save) *(ebp + 8);
            eax = *__imp__DefWindowProcW();
            goto L004012f3;
        }
        eax = 0;
        if(*L004020DE < 10) {
            goto L004012c1;
        }
        L0040101B();
        eax = 0;
        goto L004012c1;
    }
    *__imp__PostQuitMessage(0);
    eax = 0;
L004012f3:
    (restore)edi;
    (restore)esi;
    (restore)ebx;
    (restore)ebp;
}

/*	Procedure: 0x004012FA - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L004012FA()
{



}

/* address  size  */
/* 0x00401172       0 */ /* unknown */ void 	__entry_point__;
/* 0x00403088       0 */ /* unknown */ void 	__imp__ExitProcess;
/* 0x0040308c       0 */ /* unknown */ void 	__imp__GetModuleHandleW;
/* 0x00403090       0 */ /* unknown */ void 	__imp__GlobalAlloc;
/* 0x00403094       0 */ /* unknown */ void 	__imp__GlobalFree;
/* 0x00403112       0 */ /* unknown */ void 	__imp__CreateWindowExW;
/* 0x00403116       0 */ /* unknown */ void 	__imp__DefWindowProcW;
/* 0x0040311a       0 */ /* unknown */ void 	__imp__DispatchMessageW;
/* 0x0040311e       0 */ /* unknown */ void 	__imp__GetClientRect;
/* 0x00403122       0 */ /* unknown */ void 	__imp__GetDC;
/* 0x00403126       0 */ /* unknown */ void 	__imp__LoadCursorW;
/* 0x0040312a       0 */ /* unknown */ void 	__imp__LoadIconW;
/* 0x0040312e       0 */ /* unknown */ void 	__imp__MessageBoxW;
/* 0x00403132       0 */ /* unknown */ void 	__imp__PeekMessageW;
/* 0x00403136       0 */ /* unknown */ void 	__imp__PostQuitMessage;
/* 0x0040313a       0 */ /* unknown */ void 	__imp__RegisterClassW;
/* 0x0040313e       0 */ /* unknown */ void 	__imp__ReleaseDC;
/* 0x00403142       0 */ /* unknown */ void 	__imp__TranslateMessage;
/* 0x0040321e       0 */ /* unknown */ void 	__imp__StretchDIBits;
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
