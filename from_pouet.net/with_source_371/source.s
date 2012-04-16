;ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป
;บ Filename:    GIANT.ASM                                                      บ
;ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน
;บ Source Codes for GIANT. The Ultimate 4KB-Intro! [:)] v. 1.1                 บ
;บ                                                                             บ
;บ Written by:  Sigma of Star Team Productions, (ไ, STP)                       บ
;บ              alias Jari Kyt”joki                                            บ
;บ                                                                             บ
;บ Snail-Mail:  Jari Kyt”joki                                                  บ
;บ              Puolukkakatu 5                                                 บ
;บ              44200 Suolahti                                                 บ
;บ              Finland, Europe, Earth                                         บ
;บ                                                                             บ
;บ E-Mail:      jari.kytojoki@hut.fi                                           บ
;บ                                                                             บ
;บ Please, send me a Postcard!!!                                               บ
;บ Send me your source codes! (or at least some technical info, etc...) ;)     บ
;บ Don't hesitate to contact me!                                               บ
;บ                                                                             บ
;บ Copyright (C) 1994, 1995 Jari Kyt”joki. All Rights Reserved.                บ
;ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ

;       After many inquiries for sources I decided to release this
;       source code. It is released as public domain. You can do it
;       whatever you want or like. But remember, if you are just
;       planning to make a new intro only by adding, removing or any
;       other way changing a few lines of this code, you are entering
;       worldwide lamers' club. But if you are reading this file just
;       because you want to learn something new, go on it! This is
;       the most biggest reason why I released this code. However,
;       I cannot promise there's anything new that you haven't known
;       before. (It's always worth studying new sources...) If you find
;       this file very helpful, please send me a postcard or at least
;       write me some E-Mail.
;ฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤ
;       You can compile this file with TASM, I included MAKE.BAT
;       to help you. You'll notice that resulting COM-file will be
;       much larger than the released version. This is due to
;       the original COM-file has been compressed to fit in those
;       specified limits. If you are just compiling, testing and
;       debugging this source file there's no harm of it. You'll
;       have to compress the COM-file with your own compressor if
;       you want the new COM-file to be as small as the original
;       one. ;-)
;ฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤ
;       The code was optimized mainly for size and some parts seem to
;       be coded quite weirdly. In some time critical parts I repeated
;       the source code and I trusted the compressor would do the rest,
;       so that the file would be less than 4KB. There is still some
;       "extra" dummy bytes which could easily be removed.
;         My opinion of making a small intro is not hard. I had quite a
;       many ideas to put in this intro within the limits I had set, but
;       soon all 4KB was used and I had to think all over again. Many of
;       my plans finished undone. The size limit was reached too quickly.
;         I hope you enjoy my intro and learn something new.
;
;Last words: I'm sorry there isn't too many comments in this file.
;            Just try to figure it out.
;อออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ

Code    Segment Para Public use16 'Code'

        .386
        .387
        Jumps

        Assume  cs:Code, ds:Code, es:Code, ss:Code, fs:Code, gs:Code

        Temp0           Equ     word ptr ds:10A2h
        Temp1           Equ     word ptr ds:10A4h
        Temp2           Equ     word ptr ds:10A6h
        Temp4           Equ     word ptr ds:0100h
        Sin2T           Equ     word ptr ds:0D000h
        Cos2T           Equ     word ptr ds:0D200h
        SinT            Equ     word ptr ds:0E000h
        CosT            Equ     word ptr ds:0E200h
        Temp_PAL3       Equ     word ptr 0DF00h
        Temp_PAL2       Equ     word ptr 0DC00h
        Temp_PAL1       Equ     word ptr 0EC00h
        Row256T         Equ     word ptr ds:0CE00h
        CharP           Equ     word ptr ds:0106h
        CharColor       Equ     word ptr ds:010Ah
        TextSeg         =       Temp0
        XMin            Equ     word ptr ds:010Ch
        YMax            Equ     word ptr ds:010Eh
        XStep           Equ     word ptr ds:0110h
        YStep           Equ     word ptr ds:0112h
        ScreenX         Equ     word ptr ds:0114h
        ScreenY         Equ     word ptr ds:0116h
        NMax            Equ     word ptr ds:0118h
        x               Equ     word ptr ds:011Ah
        y               Equ     word ptr ds:011Ch
        zi              Equ     word ptr ds:011Eh
        zr              Equ     word ptr ds:0120h
        cr              Equ     word ptr ds:0122h
        ci              Equ     word ptr ds:0124h
        d2x             =       zi
        d2y             =       zr
        i               =       ScreenX
        j               =       ScreenY
        TempPAL1        Equ     word ptr 0E000h
        TempPAL2        Equ     word ptr 0E400h


M_WaitVRT       Macro
                Local   @@wv1, @@wv2
  @@wv1:
                        in      al, dx
                        test    al, 8
                        jz      @@wv1
  @@wv2:
                        in      al, dx
                        test    al, 8
                        jnz     @@wv2
                EndM

M_WaitVRT_DX    Macro
                        mov     dx, 03DAh
                        M_WaitVRT
                EndM

M_FadePAL_Out   Macro   SourcePAL, DestPAL
                Local   @@fo1, @@fo2
                        mov     bx, 0200h
  @@fo1:
                        mov     si, SourcePAL
                        mov     di, DestPAL
                        mov     cx, 3*256
  @@fo2:
                        lodsb
                        sub     al, bl
                        cmc
                        sbb     ah, ah
                        and     al, ah
                        stosb
                        loop    @@fo2
                        mov     si, DestPAL
                        mov     cx, 3*256
                        mov     dx, 03DAh
                        M_WaitVRT_DX
                        mov     dx, 03C8h
                        mov     al, 00h
                        out     dx, al
                        inc     dx
                        rep     outsb
                        mov     dx, 03DAh
                        M_WaitVRT_DX
                        add     bl, bh
                        test    bl, 3Fh
                        jnz     @@fo1
                EndM

M_FadePAL_In    Macro   SourcePAL, DestPAL
                Local   @@fi1, @@fi2
                        mov     bx, 0FE40h
  @@fi1:
                        mov     si, SourcePAL
                        mov     di, DestPAL
                        mov     cx, 3*256
  @@fi2:
                        lodsb
                        sub     al, bl
                        cmc
                        sbb     ah, ah
                        and     al, ah
                        stosb
                        loop    @@fi2
                        mov     si, DestPAL
                        mov     cx, 3*256
                        mov     dx, 03DAh
                        M_WaitVRT_DX
                        mov     dx, 03C8h
                        mov     al, 00h
                        out     dx, al
                        inc     dx
                        rep     outsb
                        mov     dx, 03DAh
                        M_WaitVRT_DX
                        add     bl, bh
                        test    bl, 3Fh
                        jnz     @@fi1
                EndM

M_FadeOUT       Macro   SrcPAL, DstPAL
                        cli
                        M_FadePAL_Out   SrcPAL, DstPAL
                        sti
                EndM

M_FadeIN        Macro   SrcPAL, DstPAL
                        cli
                        M_FadePAL_In    SrcPAL, DstPAL
                        sti
                EndM

M_ClearPAL      Macro
                Local   @@cp
                        M_WaitVRT_DX
                        mov     cx, 768
                        mov     dx, 03C8h
                        xor     ax, ax
                        out     dx, al
                        inc     dx
  @@cp:
                        out     dx, al
                        loop    @@cp
                EndM

M_KeyPressed    Macro
                        mov     ah, 01h
                        int     16h
                        jnz     @KeyDownOut
                EndM


        org     100h

  Begin:
                mov     bp, offset @GetNextBit
                mov     si, offset @CompressedBlock
                mov     di, 1100h
                mov     ax, 0E781h
                cwd
                cld
                xor     cx, cx                          ;;; the file is not
                jmp     Start                           ;;; compressed, yet! :)
;                cli                                    ; instead of above
;                xor     cx, cx                         ; if the file is
;                jmp     @Decompress                    ; compressed with XPC
  @CompressedBlock:
                ret

        org     10A2h

                dw      (1024 shr 1), 8192, 0000h

                ; Start of DeCompression routine. You'll have perhaps no use for
                ; this routine because you need my XPACK proggy to compress
                ; files. Use your debugger to study the original
                ; xpc-compressed GIANT.COM.
                ; (Sorry my executable file compressor isn't ready for release
                ; yet because I'm out of time and funds to finish it) :(

  @GetNextBit:
                shl     ax, 1
                jnz     @NoNewAX
                lodsw
                rcl     ax, 1
  @NoNewAX:
                ret
  @CopyByte:
                dec     dx
                xor     [si], dl
                movsb
  @Again:
                call    bp
                jnc     @CopyByte
  @Decompress:
                mov     bx, cx
                call    bp
                jc      @CX2_3
                call    bp
                jnc     @CX4_5_Over21
  @CXInc:
                inc     cx
                call    bp
                jc      @CXInc
                call    bp
                rcl     cx, 1
  @CX2_3:
                call    bp
  @CX4_5:
                rcl     cx, 1
  @ReadBX:
                call    bp
                jc      @ReadBL
                jcxz    @BHBelow6
                call    bp
                jc      @BHOver6
  @BHBelow6:
                call    bp
                jc      @BH3_6
                call    bp
                jnc     @BH1
                call    bp
                jnc     @MoveBytes
  @BH1:
                adc     bh, 1
  @ReadBL:
                mov     bl, [si]
                inc     si
  @MoveBytes:
                push    si
                not     bx
                lea     si, [bx+di]
                inc     cx
                inc     cx
                rep     movsb
                pop     si
                jmp     @Again

                db      '(c)ไstp94'
  @CX4_5_Over21:
                inc     cx
                call    bp
                jnc     @CX4_5
                call    bp
                jc      @CX4_5
                mov     cl, [si]
                inc     si
                jcxz    Start
                add     cx, 1Fh
                jmp     @ReadBX
  @BHOver6:
                call    bp
                rcl     bh, 1
                call    bp
                rcl     bh, 1
                inc     bh
  @BH3_6:
                call    bp
                rcl     bh, 1
                call    bp
                rcl     bh, 1
                inc     bh
                stc
                jmp     @BH1

                ; End of DeCompression routine...

  Start:
                sti
                mov     es, cx                          ; preparations for some nice settings
                mov     di, 0472h                       ; you'll know it for sure
                mov     ax, ds:[0002h]
                mov     dx, cs
                sub     ax, dx
                cmp     ax, 5000h                       ; This Intro needs 320K mem.
                jb      @OutOfMemory
                cmp     sp, 0FFF8h
                jae     @CheckFPU                       ; if Enough Memory, continue
  @OutOfMemory:
                mov     al, 01h
                mov     ah, 4Ch
                int     21h
  @CheckFPU:                                    ; check the existence of the Floating Point Unit
                finit
                xor     ax, ax
                stosw                                   ; Use Cold Boot if necessary :)
                mov     es, dx
                mov     [Temp4], cx
                fstcw   [Temp4]
                wait
                cmp     byte ptr [Temp4+1], 03h         ; Check for Floating Point Unit
                je      @FPUFound
                mov     al, 03h
                mov     ah, 4Ch
                int     21h
  @FPUFound:
                pushf                                   ; Check for 80286
                push    cx
                popf
                pushf
                pop     ax
                popf
                and     ax, 0F000h
                cmp     ax, 0F000h
                je      @CPUBelow286
                mov     cx, 0F000h
                pushf                                   ; Check for 80386
                push    cx
                popf
                pushf
                pop     ax
                popf
                and     ax, 0F000h
                jne     @CPU386Plus
  @CPUBelow286:
                mov     al, 02h
                mov     ah, 4Ch
                int     21h
  @CPU386Plus:
                mov     ah, 1Ah
                mov     al, 00h
                int     10h                             ; Check for VGA
                cmp     bl, 07h
                jb      @NoVGA
                cmp     al, 1Ah
                je      @VGAFound
  @NoVGA:
                mov     al, 04h
                mov     ah, 4Ch
                int     21h
  @VGAFound:
                mov     ah, 30h
                int     21h                             ; Get DOS Version
                cmp     al, 03h
                jae     @DOSOkay
                mov     al, 05h
                mov     ah, 4Ch
                int     21h
  @DOSOkay:
                mov     bl, 32h
                mov     al, 00h
                mov     ah, 12h
                int     10h
                mov     dx, 03CCh                       ; set your VGA to
                in      al, dx                          ; correct mode...
                or      al, 01h                         ; B/W -> COLOR
                mov     dx, 03C2h
                out     dx, al
                mov     cx, 0FF00h
                mov     ah, 01h
                int     10h
                mov     al, 01h
                mov     ah, 35h
                int     21h                             ; Get BreakPoints Handler
                push    es
                push    bx
                mov     al, 03h
                mov     ah, 35h
                int     21h                             ; Get Single Step Handler
                push    es
                push    bx
                cli
                mov     al, 03h
                mov     ah, 25h
                mov     dx, 0F0F0h
                mov     ds, dx
                int     21h                             ; Disable Breakpoints
                mov     al, 01h
                mov     ah, 25h
                mov     dx, 0F0F0h
                mov     ds, dx
                int     21h                             ; Disable Single Step
                sti
                mov     ax, cs
                add     ax, ((offset Last_Word-offset Begin)+0100h)/16
                mov     ds, ax
                mov     ax, cs
                add     ax, 1000h
                mov     es, ax
                mov     cx, (offset W_Divider-offset Data_Seg)/4+2
                mov     si, offset Data_Seg
                mov     di, si
                rep     movsd
  @KeyPressed1:
                mov     ah, 01h
                int     16h
                jz      @KeyBufferCleared
                xor     ax, ax
                int     16h
                jmp     @KeyPressed1
  @KeyBufferCleared:
                finit                                   ; Make Sin and Cos Tables
                xor     si, si
                mov     ax, cs
                mov     es, ax
                mov     ds, ax
                mov     cx, 321
                fild    [YY]
                fldpi
                fild    [XX]
                fdivp   st(1), st
  @MakeSINCOS:
                mov     [XX], si
                fild    [XX]
                fmul    st, st(1)
                fsin
                fmul    st, st(2)
                fistp   word ptr [si+SinTable]
                inc     si
                loop    @MakeSINCOS
                mov     dx, TempPAL1
                xor     bx, bx
                mov     cx, 256
                mov     al, 17h
                mov     ah, 10h
                int     10h
                M_FadeOUT TempPAL1, TempPAL2
                wait
                M_KeyPressed
                mov     al, 13h
                mov     ah, 00h
                int     10h
                mov     dx, TempPAL1
                xor     bx, bx
                mov     cx, 256
                mov     al, 17h
                mov     ah, 10h
                int     10h
                M_ClearPAL
                mov     dx, offset Text2String
                mov     ah, 9
                int     21h
                mov     ax, cs
                add     ax, 2000h
                mov     es, ax
                mov     fs, ax
                mov     ax, 0A000h
                mov     gs, ax
                xor     si, si
                xor     di, di

                Rept    8
                        mov     cx, 5*8/4
                        rep
                        db      65h                     ; GS segment override prefix
                        movsd
                        add     si, (320-5*8)
                EndM

                Rept    8
                        mov     cx, 12*8/4
                        rep
                        db      65h                     ; GS segment override prefix
                        movsd
                        add     si, (320-12*8)
                EndM

                Rept    8
                        mov     cx, 9*8/4
                        rep
                        db      65h                     ; GS segment override prefix
                        movsd
                        add     si, (320-9*8)
                EndM

                mov     ax, 0A000h
                mov     es, ax
                mov     cx, 199*256
  @BG1:
                mov     dx, 319
  @BG2:
                mov     di, cx
                shr     di, 2
                add     di, cx
                add     di, dx
                mov     al, dl
                xor     al, ch
                and     al, 1Fh
                xor     al, 30h
                stosb
                dec     dx
                jge     @BG2
                sub     ch, 1
                jnc     @BG1
                mov     ax, 0707h
                xor     si, si

M_WriteText     Macro   TextXYMove
                        mov     di, (60+TextXYMove)*320+120+TextXYMove

                        Rept    8
                        Local   @@wt1, @@wt2
                                mov     cx, 5*8
  @@wt1:
                                cmp     byte ptr fs:[si], 0
                                jz      @@wt2
                                mov     es:[di], ax
                                mov     es:[di+320], ax
  @@wt2:
                                add     di, 2
                                inc     si
                                loop    @@wt1
                                add     di, 240+320
                        EndM

                        mov     di, (92+TextXYMove)*320+64+TextXYMove

                        Rept    8
                        Local   @@wt1, @@wt2
                                mov     cx, 12*8
  @@wt1:
                                cmp     byte ptr fs:[si], 0
                                jz      @@wt2
                                mov     es:[di], ax
                                mov     es:[di+320], ax
  @@wt2:
                                add     di, 2
                                inc     si
                                loop    @@wt1
                                add     di, 128+320
                        EndM

                        mov     di, (124+TextXYMove)*320+88+TextXYMove

                        Rept    8
                        Local   @@wt1, @@wt2
                                mov     cx, 9*8
  @@wt1:
                                cmp     byte ptr fs:[si], 0
                                jz      @@wt2
                                mov     es:[di], ax
                                mov     es:[di+320], ax
  @@wt2:
                                add     di, 2
                                inc     si
                                loop    @@wt1
                                add     di, 176+320
                        EndM
                EndM

                M_WriteText 1
                xor     ax, ax
                xor     si, si
                M_WriteText -1
                mov     ax, cs
                mov     ds, ax
                mov     es, ax
                M_FadeIN TempPAL1, TempPAL2
                mov     cx, 250
  @wv1:
                M_WaitVRT_DX
                loop    @wv1
                M_FadeOUT TempPAL1, TempPAL2
                M_KeyPressed
                mov     al, 12h
                mov     ah, 00h
                int     10h
                mov     cx, 20h
  @wv2:
                M_WaitVRT_DX
                loop    @wv2
                mov     bh, 03h
                mov     al, 30h
                mov     ah, 11h
                int     10h
                mov     [CharGen], bp
                push    es
                pop     fs
                push    ax
                mov     bl, 15
  @SetNextPAL:
                mov     bh, bl
                mov     al, 00h
                mov     ah, 10h
                int     10h
                add     cx, 4
                dec     bl
                jns     @SetNextPAL
                M_WaitVRT_DX
                mov     dx, 3D4h
                mov     ax, 6A0Ch
                out     dx, ax
                mov     dx, 03C8h
                xor     al, al
                out     dx, al
                inc     dx
                mov     cx, 16*3
                xor     ax, ax
  @SetPal:
                xor     al, al
                out     dx, al
                out     dx, al
                mov     al, ah
                out     dx, al
                add     ah, 4
                loop    @SetPal
                mov     dx, 03CEh
                mov     ax, 0205h
                out     dx, ax
                finit
                mov     ax, 0A000h
                mov     es, ax
                xor     si, si
                xor     ax, ax
                xor     di, di
                mov     cx, 65536/2
                rep     stosw
  @CCPopAX:
                pop     ax
  @CC:
                mov     bp, [CharGen]
                xor     ebx, ebx
                mov     bl, [si+Text1String]
                lea     ebp, [ebp+8*ebx+7]
                inc     si
                and     si, 1Fh
                fld     [Const1]
                fmul    [CosBB]
                fadd    [BB]
                fcom    [Const3]
                fstsw   ax
                fwait
                sahf
                ja      @GlobeOut
                fst     [BB]
                fcos
                fld1
                fdivrp  st(1), st
                fst     [CosBB]
                fld     [Const4]
                fmul    st, st(1)
                fstp    [IIAdd]
                fmul    [Const2]
                fadd    [LL]
                fstp    [LL]
                fldz
                fstp    [JJ]
                mov     bl, 32
  @BB:
                fldz
                fstp    [II]
                fld     [JJ]             ; B := ...
                fadd    [BB]
                fsincos
                fstp    [CosB]
                fstp    [SinB]
                test    bl, 3
                jnz     @BPOK
                dec     bp
  @BPOK:
                push    bp
                mov     bp, fs:[bp]

                Rept 8                          ; just for better compression ratio
                        mov     ax, offset CalcPixel
                        call    ax
                EndM

                pop     bp
                fld     [JJ]
                fadd    [Const4]
                fstp    [JJ]
                dec     bx
                jnz     @BB
                jmp     @CC
  @GlobeOut:
                push    cs
                pop     es
                mov     dx, TempPAL1
                xor     bx, bx
                mov     cx, 256
                mov     al, 17h
                mov     ah, 10h
                int     10h
                mov     cx, 250
  @wv3:
                M_WaitVRT_DX
                loop    @wv3
                M_KeyPressed
                mov     dx, 03CEh
                mov     ax, 0FF08h
                out     dx, ax
                mov     bx, 6A00h
  @ScrollDown:
                M_WaitVRT_DX
                mov     dx, 3D4h
                mov     al, 0Dh
                mov     ah, bl
                out     dx, ax
                dec     ax
                mov     ah, bh
                out     dx, ax
                sub     bx, 80*2
                or      bx, bx
                jns     @ScrollDown
                M_FadeOUT TempPAL1, TempPAL2
                cli
                mov     al, 03h
                mov     ah, 25h
                mov     dx, 0F0F0h
                mov     ds, dx
                int     21h                             ; Disable Breakpoints
                mov     al, 01h
                mov     ah, 25h
                mov     dx, 0F0F0h
                mov     ds, dx
                int     21h                             ; Disable Single Step
                mov     ax, cs
                mov     ds, ax
                mov     es, ax
                sti
                M_KeyPressed

        Add_Items       Equ     offset LastBopAdd - offset BopAddTab
        BopPts          Equ     Add_Items
        TimeOut         Equ     8192
        TimeOut2        Equ     150
        MaxWidth        Equ     320
        CenterX         Equ     160
        CenterY         Equ     100
        MaxBops         Equ     350
        RadiusX         Equ     144
        RadiusY         Equ     176
        PhInc1          Equ     2
        PhInc2          Equ     3

                mov     al, 13h
                mov     ah, 00h
                int     10h
                mov     cx, 20h
  @wv4:
                M_WaitVRT_DX
                loop    @wv4
                mov     cx, Add_Items
                mov     si, offset LastBopAdd - 1
                mov     di, offset LastBopAdd + Add_Items - 2
                xor     ax, ax
                std
  @Expand0:
                lodsb
                stosw
                loop    @Expand0
                cld

                mov     dx, Add_Items/2
                mov     si, offset BopADDLengths - 1
                mov     di, offset LastBopAdd + Add_Items + 3*Add_Items/2
                mov     ax, 12*320
  @Expand1:
                inc     si
                sub     di, 3*Add_Items/2
                mov     bp, di
                mov     cl, [si]
                neg     ax
                sub     ax, cx
  @Expand2:
                inc     ax
                stosw
                loop    @Expand2
                add     bp, dx
                mov     di, bp
                mov     cl, [si]
                add     ax, cx
  @Expand3:
                stosw
                dec     ax
                loop    @Expand3
                add     bp, dx
                mov     di, bp
                mov     cl, [si]
                add     ax, 320
                neg     ax
                sub     ax, cx
  @Expand4:
                inc     ax
                stosw
                loop    @Expand4
                add     bp, dx
                mov     di, bp
                mov     cl, [si]
                add     ax, cx
  @Expand5:
                stosw
                dec     ax
                loop    @Expand5
                jnz     @Expand1
                mov     ax, 0A000h
                mov     es, ax
M_ShadeBOBs     Macro   @Time
                Local   @@Set1Pal, @@Set1Brk, @@Set2Pal, @@Set2Brk, @@Set3Pal, @@Set3Brk
                        M_WaitVRT_DX
                        mov     dx, 03C8h
                        xor     al, al
                        out     dx, al
                        inc     dx
                        mov     cx, 256
                        xor     ax, ax
  @@Set1Pal:
                        xor     al, al
                        out     dx, al
                        mov     al, ah
                        out     dx, al
                        xor     al, al
                        out     dx, al
                        cmp     ah, 62
                        jae     @@Set1Brk
                        inc     ah
  @@Set1Brk:
                        loop    @@Set1Pal
                        xor     bp, bp
                        mov     [Frames], @Time
                        mov     ax, offset ShadesLoop
                        call    ax
                        M_WaitVRT_DX
                        mov     dx, 03C8h
                        xor     al, al
                        out     dx, al
                        inc     dx
                        mov     cx, 256
                        xor     ax, ax
  @@Set2Pal:
                        mov     al, ah
                        out     dx, al
                        xor     al, al
                        out     dx, al
                        out     dx, al
                        cmp     ah, 62
                        jae     @@Set2Brk
                        inc     ah
  @@Set2Brk:
                        loop    @@Set2Pal
                        xor     bp, bp
                        mov     [Frames], @Time
                        mov     ax, offset ShadesLoop
                        call    ax
                        M_WaitVRT_DX
                        mov     dx, 03C8h
                        xor     al, al
                        out     dx, al
                        inc     dx
                        mov     cx, 256
                        xor     ax, ax
  @@Set3Pal:
                        xor     al, al
                        out     dx, al
                        out     dx, al
                        mov     al, ah
                        out     dx, al
                        cmp     ah, 62
                        jae     @@Set3Brk
                        inc     ah
  @@Set3Brk:
                        loop    @@Set3Pal
                        xor     bp, bp
                        mov     [Frames], @Time
                        call    ShadesLoop
                EndM

                M_ShadeBOBs       TimeOut
                M_KeyPressed
                mov     cx, 30
  @FlashBOBs:
                push    cx
                M_ShadeBOBs       TimeOut2
                pop     cx
                loop    @FlashBOBs
                jmp     @BOBs_Out
  ShadesLoop:
                mov     si, 2*2188
                mov     ax, [Phase1]
                add     ax, PhInc1
                cwd
                div     si
                mov     [Phase1], dx
                mov     ax, [Angle]
                add     ax, 20h
                mov     [Angle], ax
                mul     dx
                xor     bx, bx
                mov     bl, dl
                mov     ah, [bx+CosTable]
                mov     al, RadiusX
                imul    ah
                sar     ax, 6
                add     ax, CenterX
                mov     di, ax
                mov     ax, [Phase2]
                add     ax, PhInc2
                cwd
                div     si
                mov     [Phase2], dx
                mov     ax, [Angle]
                mul     dx
                mov     bl, dl
                mov     ah, [bx+SinTable]
                mov     al, RadiusY
                imul    ah
                sar     ax, 6
                add     ax, CenterY
                imul    dx, ax, MaxWidth
                call    PutBop
                dec     [Frames]
                jne     ShadesLoop
                mov     dx, MaxBops
  @HideBOBsLoop:
                mov     di, -1
                call    HideBop
                dec     dx
                jnz     @HideBOBsLoop
                retn
  @BOBs_Out:
                cli
                mov     al, 03h
                mov     ah, 25h
                mov     dx, 0F0F0h
                mov     ds, dx
                int     21h                             ; Disable Breakpoints
                mov     al, 01h
                mov     ah, 25h
                mov     dx, 0F0F0h
                mov     ds, dx
                int     21h                             ; Disable Single Step
                mov     ax, cs
                mov     ds, ax
                mov     es, ax
                sti
                finit                                   ; Make Sin and Cos Tables
                xor     si, si
                mov     ax, cs
                mov     ds, ax
                mov     es, ax
                add     ax, 2000h
                mov     fs, ax
                mov     cx, 2*5*128+1
                fld     [Mult1]
                fild    [Temp1]
                fldpi
                fild    [Temp0]
                fdivp   st(1), st
  @Make2SINCOS:
                fild    [Temp2]
                fmul    st, st(1)
                fsincos
                fmul    st, st(4)
                fistp   [si+Sin2T]
                fmul    st, st(2)
                fistp   [si+SinT]
                inc     [Temp2]
                inc     si
                inc     si
                loop    @Make2SINCOS
                wait
                xor     ax, ax
                mov     cx, 200
                mov     di, offset Row256T
  @MakeRow256:
                stosw
                add     ax, 256
                loop    @MakeRow256
                mov     bh, 03h
                mov     al, 30h
                mov     ah, 11h
                int     10h
                mov     [CharP+0], bp
                mov     [CharP+2], es
                mov     dx, cs
                mov     es, dx
                M_KeyPressed
                M_WaitVRT_DX
                mov     al, 13h
                mov     ah, 00h
                int     10h
                mov     dx, offset Temp_PAL2
                xor     bx, bx
                mov     cx, 256
                mov     al, 17h
                mov     ah, 10h
                int     10h
                cli
                mov     si, offset Temp_PAL2+3*20h
                mov     di, offset Temp_PAL3
                mov     cx, 3*10h
                rep     movsw
                M_ClearPAL
                sti
                push    fs
                pop     es
                xor     di, di
                mov     ax, di
                mov     cx, 32*100h
                rep     stosw
                mov     [TextSeg], es
                mov     [CharColor], 0F09h
                mov     di, 4*100h+8
                mov     si, offset Gfx1Text
                call    GfxWrite
                push    fs
                pop     es
                mov     si, 0*100h
                mov     di, 4*8*100h
                mov     cx, 7*4*8*128
                rep
                db      26h                             ; ES segment override prefix
                movsw
                mov     [x], 7A00h
                mov     [y], 2176
                xor     bx, bx
                mov     di, 40
                call    RotateMap2
                push    cs
                pop     es
                M_FadeIN Temp_PAL2, Temp_PAL1
                xor     bx, bx
                mov     di, 40
  @Rotate1Map:
                push    bx
                push    di
                call    RotateMap2
                M_WaitVRT_DX
                pop     di
                pop     bx
                add     [x], 16
                add     [y], 16
                add     di, 30h
                sub     bx, 4
                cmp     di, 2*1385
                jb      @Rotate1Map
                push    cs
                pop     es
                M_KeyPressed
                mov     [XMin], -5500
                mov     [YMax], 0
                mov     [NMax], 512         ;256
                mov     [cr], 2100
                mov     [ci], 0
                mov     [XStep], 10
                mov     [YStep], 10
                push    fs
                pop     es
                call    CalcFractal
                mov     [YMax], 1280+0
                mov     ax, es
                add     ah, 08h
                mov     es, ax
                call    CalcFractal
                mov     ax, cs
                mov     es, ax
                M_FadeOUT Temp_PAL2, Temp_PAL1
                M_KeyPressed
                mov     si, TempPAL2
                mov     cx, 3*256
                mov     dx, 03DAh
                M_WaitVRT_DX
                mov     dx, 03C8h
                mov     al, 00h
                out     dx, al
                inc     dx
                rep     outsb
                sti
                call    RotatePAL20
                mov     [x], 32768
                mov     [y], 0
                xor     bx, bx
                mov     di, 7800h
  @Rotate2Map:
                push    bx
                push    di
                call    RotateMap2
                M_WaitVRT_DX
                pop     di
                pop     bx
                add     bx, 8
                sub     di, 2*40h
                jnc     @Rotate2Map
                M_KeyPressed
                mov     cx, 10
  @wv5:
                M_WaitVRT_DX
                loop    @wv5
                mov     cx, 984
                mov     dx, 2*50
                xor     bx, bx
                mov     di, 0
  @Rotate3Map:
                pusha
                call    RotateMap
                call    RotatePAL20
                popa
                sub     [x], 16
                sub     [y], 16
                add     di, dx
                cmp     di, 6000h
                jna     @ZoomDIR
                neg     dx
  @ZoomDIR:
                sub     bx, 4
                loop    @Rotate3Map
                M_FadeOUT Temp_PAL2, Temp_PAL1
                M_KeyPressed
                M_WaitVRT_DX
                mov     al, 13h
                mov     ah, 00h
                int     10h
                push    fs
                pop     es
                xor     di, di
                mov     ax, di
                mov     cx, 10000h/2
                rep     stosw
                mov     [TextSeg], es
                mov     [CharColor], 0C00h
                mov     di, 80
                mov     si, offset Gfx2Text
                call    GfxWrite
                mov     [x], 8000h
                mov     [y], 400h
                mov     bx, 2*512
                mov     di, 1200h
  @Rotate4Map:
                push    bx
                push    di
                call    RotateMap2
                M_WaitVRT_DX
                pop     di
                pop     bx
                sub     bx, 2*4
                jns     @BXOkay
                xor     bx, bx
  @BXOkay:
                sub     di, 18h
                jnc     @Rotate4Map
                M_KeyPressed
                push    fs
                pop     es
                xor     di, di
                mov     ax, di
                mov     cx, 10000h/2
                rep     stosw
                mov     [TextSeg], es
                mov     [CharColor], 0A00h
                mov     di, 116
                mov     si, offset Gfx3Text
                call    GfxWrite
                xor     bx, bx
                mov     di, 0000
  @Rotate5Map:
                push    bx
                push    di
                call    RotateMap2
                M_WaitVRT_DX
                pop     di
                pop     bx
                add     di, 18h
                cmp     di, 1200h
                jbe     @Rotate5Map
                M_FadeOUT Temp_PAL2, Temp_PAL1
                M_KeyPressed

                Assume  Ds:Data

        FreeSpace       Equ     W_Divider
        _TempR32A       Equ     dword ptr ds:FreeSpace+00h
        _TempR32B       Equ     dword ptr ds:FreeSpace+04h
        _TempR32C       Equ     dword ptr ds:FreeSpace+08h
        _TempReg        Equ     dword ptr ds:FreeSpace+0Ch
        MountHeight     Equ     word ptr ds:FreeSpace+10h
        Map_X           Equ     word ptr ds:FreeSpace+12h
        Map_Y           Equ     word ptr ds:FreeSpace+14h
        RandomSeed      Equ     word ptr ds:FreeSpace+16h
        _TempR16A       Equ     word ptr ds:FreeSpace+18h
        _TempR16B       Equ     word ptr ds:FreeSpace+1Ah
        _TempR16C       Equ     word ptr ds:FreeSpace+1Ch
        Count_Loop      Equ     word ptr ds:FreeSpace+1Eh
        Table_A         Equ     0200h
        Table_B         Equ     0400h
        Table_C         Equ     0600h

                mov     ax, cs
                add     ax, 1000h
                mov     ds, ax
                mov     es, ax
                mov     di, offset Data_Seg
                stosw
                add     ax, 1000h
                stosw
                add     ax, 1000h
                stosw
                add     ax, 1000h
                stosw
                stc
                sbb     eax, eax
                mov     cx, (offset LastMake_-offset MapMakeTable)/2+1
  @Decompress2:
                add     ax, [di]
                inc     ax
                stosw
                loop    @Decompress2
                xor     ax, ax
                int     1Ah
                and     dh, 7Fh
;                mov     dx, 7FFFh               ; just guess why used in here...
                mov     [RandomSeed], dx
                mov     ax, 0013h
                int     10h
                cli
                mov     dx, 03C8h
                xor     al, al
                out     dx, al
                inc     dx
                mov     cx, 64
                xor     ax, ax
  @SetPal1:
                out     dx, al
                out     dx, al
                out     dx, al
                inc     ax
                loop    @SetPal1
                mov     cx, 64
                xor     ax, ax
  @SetPal2:
                xor     al, al
                out     dx, al
                out     dx, al
                mov     al, ah
                out     dx, al
                inc     ah
                loop    @SetPal2
                mov     cx, 64
                xor     ax, ax
  @SetPal3:
                out     dx, al
                mov     al, ah
                out     dx, al
                xor     al, al
                out     dx, al
                inc     ah
                loop    @SetPal3
                mov     cx, 64
  @SetPal4:
                out     dx, al
                out     dx, al
                out     dx, al
                loop    @SetPal4
                sti
                mov     dx, offset Temp_PAL2
                xor     bx, bx
                mov     cx, 256
                mov     al, 17h
                mov     ah, 10h
                int     10h
                cli
                M_ClearPAL
                sti
                call    CalcSky
                mov     [Count_Loop], 1024
                mov     [Map_X], 1024
                mov     [Map_Y], 1024
                mov     ax, offset UpdateView
                call    ax
                mov     es, [Data_Seg]
                mov     ax, offset UpdateSky
                call    ax
                mov     ax, offset UpdateMap
                call    ax
                M_WaitVRT_DX
                mov     es, [VRAM_Seg]
                mov     si, offset Table_C
                mov     di, (320-256)/2
                mov     bl, 200
  @Copy2VRAM:
                mov     cx, 256/4
                rep     movsd
                add     di, (320-256)
		dec	bl
                jnz     @Copy2VRAM
                mov     es, [Data_Seg]
                M_FadeIN Temp_PAL2, Temp_PAL1
                mov     cx, 250
  @wv6:
                M_WaitVRT_DX
                loop    @wv6
  @DrawAgain:
                mov     ax, offset UpdateView
                call    ax
                mov     es, [Data_Seg]
                mov     ax, offset UpdateSky
                call    ax
                mov     ax, offset UpdateMap
                call    ax
                M_WaitVRT_DX
                mov     es, [VRAM_Seg]
                mov     si, offset Table_C
                mov     di, (320-256)/2
                mov     bl, 200
  @CopyToVRAM:
                mov     cx, 256/4
                rep     movsd
                add     di, (320-256)
		dec	bl
                jnz     @CopyToVRAM
                dec     [Count_Loop]
                jnz     @DrawAgain
                mov     es, [Data_Seg]
                M_FadeOUT Temp_PAL2, Temp_PAL1
                jmp     @TheEND
  CalcSky:
                xor     di, di
                mov     es, [Sky_Seg]
                mov     fs, [MapB_Seg]
                stc
                sbb     eax, eax
                mov     cx, 4000h
                rep     stosd
                mov     si, [RandomSeed]

M_MakeMUL       Macro
                        mov     ax, 0AFh
                        mul     si
                        add     ax, 2BC0h
                        adc     dx, 0
                        div     [W_Divider]
                        mov     si, dx
                EndM

                M_MakeMUL
                mov     [RandomSeed], dx
                xor     bx, bx
                mov     cx, 0100h
                mov     byte ptr es:[0080h], -2
                mov     byte ptr es:[8000h], -2
                mov     byte ptr es:[0000h],  cl
                mov     byte ptr es:[8080h],  cl
		call	CalcFrac
                xor     di, di
  CalcSky1:
                mov     ah, 01h
                mov     al, es:[di]
                shr     ax, 2
                stosb
                or      di, di
		jnz	CalcSky1
;  CalcMap
                mov     es, [MapA_Seg]
                mov     fs, [MapB_Seg]
                stc
                sbb     eax, eax
                mov     cx, 4000h
		rep	stosd
                mov     si, [RandomSeed]
                M_MakeMUL
                mov     [RandomSeed], dx
                xor     bx, bx
                mov     cx, 0100h
                mov     al, 40
                stosb
		call	CalcFrac
                xor     di, di
  CalcMap1:
                xor     ax, ax
                mov     si, offset MapCoord_
                mov     bx, [si]
                add     al, es:[bx+di]
                adc     ah, ch
                inc     si
                inc     si
                mov     bx, [si]
                add     al, es:[bx+di]
                adc     ah, ch
                inc     si
                inc     si
                mov     bx, [si]
                add     al, es:[bx+di]
                adc     ah, ch
                inc     si
                inc     si
                mov     bx, [si]
                add     al, es:[bx+di]
                adc     ah, ch
                shr     ax, 2
                stosb
                or      di, di
                jnz     CalcMap1
                xor     si,si
  CalcMap2:
                mov     al, es:[si]
                sub     al, es:[si+3]
                sbb     ah, ah
                add     ax, 20h
                jns     CalcMap3
                xor     ax, ax
  CalcMap3:
                cmp     al, 3Fh
                jbe     CalcMap4
                mov     al, 3Fh
  CalcMap4:
		mov	fs:[si],al
                inc     si
                jnz     CalcMap2
  CalcMap5:
                xor     ax, ax
                add     al, es:[di]
                adc     ah, ch
                add     al, es:[di+0100h]
                adc     ah, ch
                inc     di
                add     al, es:[di]
                adc     ah, ch
                add     al, es:[di+0100h]
                adc     ah, ch
                dec     di
                shr     ax, 2
                stosb
                or      di, di
                jnz     CalcMap5
  OutCalcFrac:
                retn

  CalcFrac:
                shr     cx, 1
                jz      OutCalcFrac
                xor     ax, ax
                add     al, es:[bx]
                adc     ah, ch
                add     bl, cl
                mov     di, bx
                add     bl, cl

M_Calc2Square   Macro
                Local   @@CS1, @@CS2
                        mov     ch, al
                        M_MakeMUL
                        sub     dx, 67E8h
                        xor     ax, ax
                        mov     al, cl
                        shl     ax, 3
                        imul    dx
                        xor     ax, ax
                        add     dl, ch
                        mov     ch, al
                        adc     dh, ch
                        js      @@CS2
                        jz      @@CS1
                        mov     dl, 0FEh
  @@CS1:
                        mov     al, dl
  @@CS2:
        EndM

M_CalcSquare    Macro
                Local   @@CS3
                        cmp     byte ptr es:[di], 0FFh
                        jne     @@CS3
                        add     al, es:[bx]
                        adc     ah, ch
                        shr     ax, 1
                        M_Calc2Square
                        stosb
  @@CS3:
                EndM

                M_CalcSquare
                xor     ax, ax
                add     al, es:[bx]
                adc     ah, ch
                add     bh, cl
                mov     di, bx
                add     bh, cl
                M_CalcSquare
                xor     ax, ax
                add     al, es:[bx]
                adc     ah, ch
                sub     bl, cl
                mov     di, bx
                sub     bl, cl
                M_CalcSquare
                xor     ax, ax
                add     al, es:[bx]
                adc     ah, ch
                sub     bh, cl
                mov     di, bx
                sub     bh, cl
                M_CalcSquare
                xor     ax, ax
                add     al, es:[bx]
                adc     ah, ch
                add     bl, cl
                add     bl, cl
                add     al, es:[bx]
                adc     ah, ch
                add     bh, cl
                add     bh, cl
                add     al, es:[bx]
                adc     ah, ch
                sub     bl, cl
                sub     bl, cl
                add     al, es:[bx]
                adc     ah, ch
                shr     ax, 2
                M_Calc2Square
                add     bl, cl
                sub     bh, cl
                mov     es:[bx], al
                push    bx
		push	cx
		call	CalcFrac
                pop     cx
                pop     bx
                sub     bl, cl
                push    bx
		push	cx
		call	CalcFrac
                pop     cx
                pop     bx
                sub     bh, cl
                push    bx
		push	cx
		call	CalcFrac
                pop     cx
                pop     bx
                add     bl, cl
		call	CalcFrac
		retn
  UpdateView:
                mov     cx, [Map_X]
                mov     dx, [Map_Y]
                mov     bx, [Count_Loop]
                dec     bx
                shr     bx, 8
                shl     bx, 1
                add     cx, [bx+AddCXTable]
                add     dx, [bx+AddDXTable]
                mov     [Map_X], cx
                mov     [Map_Y], dx
; Calculate New Points
                mov     es, [MapA_Seg]
                ror     cx, 4
                ror     dx, 4
                mov     bl, cl
                mov     bh, dl
                shr     cx, 0Ch
                shr     dx, 0Ch
                push    dx
                inc     bl
                xor     ax, ax
                add     al, es:[bx]
		dec	bl
                sub     al, es:[bx]
                sbb     ah, ah
                imul    cx
                mov     dx, ax
                xor     ax, ax
                add     al, es:[bx]
                shl     ax, 4
                add     ax, dx
                xchg    si, ax
                inc     bh
                inc     bl
                xor     ax, ax
                add     al, es:[bx]
		dec	bl
                sub     al, es:[bx]
                sbb     ah, ah
                imul    cx
                mov     dx, ax
                xor     ax, ax
                add     al, es:[bx]
                shl     ax, 4
                add     ax, dx
                pop     dx
                sub     ax, si
                imul    dx
                shl     si, 4
                add     ax, si
                add     ah, 1Ah
                jnc     CalcNew1
                mov     ax, 0FFFFh
  CalcNew1:
                mov     [MountHeight], ax
                mov     ah, 01h
                int     16h
                jz      CalcNew2
                mov     [Count_Loop], 1
                xor     ax, ax
                int     16h
  CalcNew2:
		retn
  UpdateSky:
                mov     si, offset MountHeight
                mov     di, offset _TempR32A
                xor     eax, eax
                lodsw
		neg	ax
                shr     ax, 3
                add     ah, 40h
                shl     eax, 4
                shl     eax, 9
                stosd
                xor     eax, eax
                lodsw
                shl     eax, 9
                stosd
                xor     eax, eax
                lodsw
                shl     eax, 9
                stosd
                mov     gs, [Sky_Seg]
                lea     ecx, [si-(offset MountHeight-offset Data_Seg)-6+63h]
                mov     di, Table_C
  @UpdateSky1:
                mov     si, offset _TempR32A
                mov     eax, [si]
                xor     edx, edx
                div     ecx
                mov     ebx, [si+4]
                mov     esi, [si+8]
                sub     esi, eax
                add     ebx, eax
                shr     eax, 7
                mov     bp, si
                shr     esi, 10h
                and     si, 0FFh
                shr     ebx, 8
                xor     bl, bl
                or      si, bx
                mov     ebx, eax
                shr     ebx, 10h
                dec     bx

        rept    255

                db      65h                             ; GS segment override prefix
                movsb
                add     bp, ax
                adc     si, bx

        EndM

                db      65h                             ; GS segment override prefix
                movsb
                dec     cx
                jnz     @UpdateSky1
                mov     eax, 50505050h
                mov     cx, 40h
                rep     stosd
                mov     si, [MountHeight]
                mov     bx, 04
  @UpdateSky2:
                mov     ax, si
                xor     dx, dx
                div     bx
                shr     ax, 7
                cmp     al, 3Fh
                jbe     @UpdateSky3
                mov     al, 3Fh
  @UpdateSky3:
                or      al, 80h
                mov     ah, al
                mov     dx, ax
                shl     eax, 10h
                xchg    ax, dx
                mov     cx, 40h
                rep     stosd
                inc     bx
                cmp     bx, 2Ch
                jne     @UpdateSky2
		retn
  UpdateMap:
                mov     fs, [MapA_Seg]
                mov     gs, [MapB_Seg]
                mov     eax, 7D007D00h
                mov     di, Table_A
                mov     cx, 40h
                rep     stosd
                mov     cx, 40h
		rep	stosd
                xor     eax, eax
                mov     di, Table_B
                mov     cx, 40h
                rep     stosd
                mov     cx, 40h
                rep     stosd
                mov     [_TempR16A], 78h
  @UpdateMap1:
                mov     si, [_TempR16A]
                mov     si, [si+MapMakeTable]
                shl     si, 4
                mov     ax, [Map_Y]
                and     ax, 0Fh
                xor     al, 0Fh
                add     si, ax
                mov     ax, [MountHeight]
                xor     dx, dx
		div	si
                add     ax, 64h
                mov     [_TempR16B], ax
                lea     eax, [si]
                shl     eax, 6
                mov     [_TempReg], eax
                cmp     [_TempR16A], 2
                jne     @UpdateMap2
                mov     [_TempR16B], 7D00h
                mov     [_TempR16C], 0000h
                jmp     @UpdateMap3
  @UpdateMap2:
                xor     ax, ax
                mov     dx, 1
		div	si
                mov     [_TempR16C], ax
  @UpdateMap3:
                xor     ecx, ecx
                mov     cx, [Map_X]
                shl     ecx, 0Ch
                mov     eax, [_TempReg]
                shl     eax, 7
                sub     ecx, eax
                mov     ax, [Map_Y]
                shl     ax, 4
                mov     ebx, ecx
                shr     ebx, 10h
                mov     bh, ah
                mov     ax, si
                shl     ax, 4
                add     bh, ah
                mov     si, 1FEh
                mov     word ptr [_TempR32B], Table_C
                shr     cx, 1
  @UpdateMap4:
                shl     cx, 1
                add     cx, word ptr [_TempReg]
                adc     bl, byte ptr [_TempReg+2]
                shr     cx, 1
                mov     al, fs:[bx+1]
                sub     al, fs:[bx]
                sbb     ah, ah
		imul	cx
                shrd    ax, dx ,7
                add     ah, fs:[bx]
                mul     [_TempR16C]
                mov     di, [_TempR16B]
                sub     di, dx
                jns     @UpdateMap5
                mov     di, 0FFFFh
  @UpdateMap5:
                cmp     di, 0C8h
                jl      @UpdateMap6
                mov     di, 0C7h
  @UpdateMap6:
                mov     al, gs:[bx+1]
                sub     al, gs:[bx]
		imul	ch
                shl     ax, 1
                add     ah, gs:[bx]
                mov     dx, ax
                xchg    ax, [si+Table_B]
                mov     bp, di
                xchg    bp, [si+Table_A]
                sub     bp, di
                jns     @UpdateMap7
                shl     di, 8
                add     di, word ptr [_TempR32B]
                push    ax
                sub     ax, dx
		cwd
		idiv	bp
                pop     dx
                push    bx
                lea     bx, [bp+1]
                shl     bp, 1
                shl     bx, 8
                lea     bp, [ebp+ebp*2]
                add     bp, offset @UpdateMap8+06h
                call    bp
                pop     bx
  @UpdateMap7:
                inc     word ptr [_TempR32B]
                dec     si
                dec     si
                jns     @UpdateMap4
                sub     [_TempR16A], 2
                jnz     @UpdateMap1
		retn

        Assume  ds:Code

  @TheEND:
                M_KeyPressed
                mov     ax, cs
                mov     ds, ax
                mov     es, ax
                add     ax, 2000h
                mov     fs, ax
                M_WaitVRT_DX
                mov     al, 13h
                mov     ah, 00h
                int     10h
                mov     dx, offset Temp_PAL2
                xor     bx, bx
                mov     cx, 256
                mov     al, 17h
                mov     ah, 10h
                int     10h
                push    fs
                pop     es
                xor     di, di
                mov     ax, di
                mov     cx, 10000h/2
                rep     stosw
                mov     [TextSeg], es
                mov     [CharColor], 0E03h
                mov     di, 44
                mov     si, offset Gfx4Text
                call    GfxWrite
                mov     [x], 8000h
                mov     [y], 0800h
                xor     bx, bx
                mov     di, 1008h
  @Rotate6Map:
                push    bx
                push    di
                call    RotateMap2
                M_WaitVRT_DX
                pop     di
                pop     bx
                sub     di, 18h
                jnc     @Rotate6Map
                mov     ax, cs
                mov     es, ax
                mov     ds, ax
                M_FadeOUT Temp_PAL2, Temp_PAL1
                jmp     @NoKeyPressed
  @KeyDownOut:
                M_WaitVRT_DX
                mov     al, 13h
                mov     ah, 00h
                int     10h
                mov     cx, 20h
  @wv7:
                M_WaitVRT_DX
                loop    @wv7
                xor     ax, ax
                int     16h
  @NoKeyPressed:
                M_WaitVRT_DX
                mov     al, 03h
                mov     ah, 00h
                int     10h                             ; Switch Back to Char Mode
                cli
                mov     bx, 414Fh
                M_WaitVRT_DX
                M_WaitVRT
                mov     ah, bh
                mov     dx, 03D4h
                mov     al, 09h
                out     dx, ax
                mov     cx, (offset EndPicCol-offset EndPic)
                mov     dx, 0B800h
                mov     es, dx
                xor     di, di
                mov     si, offset EndPic
  @PutPage:
                mov     ah, [si+(offset EndPicCol-offset EndPic)]
                lodsb
                stosw
                loop    @PutPage
                sti
                mov     dx, 0700h
                mov     bh, 00h
                mov     ah, 02h
                int     10h
                cli
                mov     bx, 424Fh
  @IncCharHeight:
                M_WaitVRT_DX
                M_WaitVRT
                mov     ah, bh
                mov     dx, 03D4h
                mov     al, 09h
                out     dx, ax
                inc     bh
                cmp     bh, bl
                jbe     @IncCharHeight
                sti
                mov     al, 03h
                mov     ah, 25h
                pop     dx
                pop     ds
                int     21h                             ; Enable Breakpoints
                mov     al, 01h
                mov     ah, 25h
                pop     dx
                pop     ds
                int     21h                             ; Enable Single Step
                mov     al, 00h
                mov     ah, 4Ch
                int     21h

  PutBop:
                add     di, dx
                xor     si, si
                mov     cx, BopPts/4
  @PutLoop:
                mov     ax, [si+BopAddTab]
                mov     bx, [si+BopTab]
                add     es:[bx+di], al
                mov     ax, [si+BopAddTab+2]
                mov     bx, [si+BopTab+2]
                add     es:[bx+di], al
                mov     ax, [si+BopAddTab+4]
                mov     bx, [si+BopTab+4]
                add     es:[bx+di], al
                mov     ax, [si+BopAddTab+6]
                mov     bx, [si+BopTab+6]
                add     es:[bx+di], al
                add     si, 8
                loop    @PutLoop
  HideBop:
                xchg    ds:[bp+BopQueue], di
                cmp     di, -1
                jae     @SkipHide
                xor     si, si
                mov     cx, BopPts/4
  @HideLoop:
                mov     ax, [si+BopAddTab]
                mov     bx, [si+BopTab]
                sub     es:[bx+di], al
                mov     ax, [si+BopAddTab+2]
                mov     bx, [si+BopTab+2]
                sub     es:[bx+di], al
                mov     ax, [si+BopAddTab+4]
                mov     bx, [si+BopTab+4]
                sub     es:[bx+di], al
                mov     ax, [si+BopAddTab+6]
                mov     bx, [si+BopTab+6]
                sub     es:[bx+di], al
                add     si, 8
                loop    @HideLoop
  @SkipHide:
                add     bp, 2
                cmp     bp, 2*MaxBops
                sbb     bx, bx
                and     bp, bx
                ret

  CalcPixel:
                mov     bh, 4
  @CalcPixel:
                or      bp, bp
                jns     @NoPixel
                fld     [II]                     ; L := ...
                fadd    [LL]
                fsincos
                fmul    [CosB]
                fld     [Cos1]
                fmul    st, st(1)
                fld     [SinB]
                fmul    [Sin1]
                faddp   st(1), st
                fimul   [Ker1]
                fistp   [U]
                fwait
                mov     ax, [U]
                fmul    [Sin1]
                fld     [Cos1]
                fmul    [SinB]
                fsubrp  st(1), st
                fimul   [Ker2]
                fistp   [YY]
                fmul    [CosB]
                fimul   [Ker2]
                fistp   [XX]
                or      ax, ax
                js      @CCPopAX
                inc     ax
                and     al, 0Fh
                mov     cx, 320
                fwait
                add     cx, [XX]
                mov     di, cx
                and     di, 7
                mov     dx, 03CEh
                mov     ah, [di+MaskTable]
                mov     di, ax
                mov     al, 08h
                out     dx, ax
                mov     ax, di
                mov     di, 240
                sub     di, [YY]
                shr     cx, 3
                shl     di, 4
                add     cx, di
                shl     di, 2
                add     di, cx
                add     di, 6A00h
                mov     ah, es:[di]
                stosb
  @NoPixel:
                fld     [II]
                fadd    [IIAdd]
                fstp    [II]
                dec     bh
                jnz     @CalcPixel
                shl     bp, 1
                retn

  PrintChar:            ; si = Char Number, di = Place.
                cli
                mov     si, ax
                shl     si, 3
                add     si, [CharP]
                mov     cl, 08h
                mov     dx, 03C4h
  @@MC1:
                mov     es, [CharP+2]
                db      26h                             ; ES segment override prefix
                lodsb
                mov     ch, al
                mov     es, [TextSeg]

                Rept 8
                        xor     bx, bx
                        shl     ch, 1
                        adc     bx, offset CharColor
                        mov     al, [bx]
                        stosb
                EndM

                add     di, 256-8       ;320-8
                dec     cl
                jz      @@MCOUT
                jmp     @@MC1
  @@MCOUT:
                sub     di, 8*256-8     ;8*320-8
                sti
                retn

M_ShlDXAX       Macro   Count
                        Rept Count
                                shl     ax, 1
                                rcl     dx, 1
                        EndM
                EndM

  CalcFractal:
                cli
                mov     ax, [YMax]
                mov     [y], ax
                mov     [ScreenY], 0
  @RepeatY:
                mov     ax, [XMin]
                mov     [x], ax
                mov     [ScreenX], 0
  @RepeatX:
                xor     cx, cx
                mov     ax, [y]
                mov     [zi], ax
                mov     di, ax
                imul    di
                M_ShlDXAX 3
                mov     di, dx
                mov     ax, [x]
                mov     [zr], ax
                mov     si, ax
                imul    si
                M_ShlDXAX 3
                mov     si, dx
  @RepeatCount:
                mov     ax, si
                sub     ax, di
                add     ax, [cr]
                mov     si, ax
                mov     ax, [zr]
                imul    [zi]
                M_ShlDXAX 4
                add     dx, [ci]
                mov     di, dx
                mov     [zi], dx
                mov     [zr], si
                mov     ax, si
                imul    si
                M_ShlDXAX 3
                mov     si, dx
                mov     ax, di
                imul    di
                M_ShlDXAX 3
                mov     di, dx
                add     dx, si
                jc      @CountOut
                js      @CountOut
                inc     cx
                cmp     cx, [NMax]
                jna     @RepeatCount
                xor     ax, ax
                jmp     @Plot
  @CountOut:
                mov     ax, cx
                mov     cl, 31
                div     cl
                mov     al, ah
                inc     al
  @Plot:
                and     al, 1Fh
                add     al, 20h
                mov     si, [ScreenX]
                mov     di, [ScreenY]
                mov     cx, di
                mov     di, [di+offset Row256T]
                add     di, si
                stosb
                inc     [ScreenX]
                mov     ax, [x]
                add     ax, [XStep]
                mov     [x], ax
                cmp     si, 288
                jae     @OutM1
                jmp     @RepeatX
  @OutM1:
                mov     dx, 3DAh
                in      al, dx
                mov     dx, 3C0h
                mov     al, 11h+32
                out     dx, al
                mov     al, cl
                shr     al, 1
                and     al, 0Fh
                out     dx, al
                add     [ScreenY], 2
                mov     ax, [y]
                add     ax, [YStep]
                mov     [y], ax
                cmp     cx, 256
                jae     @OutM2
                jmp     @RepeatY
  @OutM2:
                sti
                retn


M_Init_Rotate   Macro   Method
                Local   @@ir1, @@ir2
                        mov     ax, 0A000h
                        mov     es, ax
                        and     bh, 7
                        mov     ax, [bx+SinT]
                        imul    di
                        sar     dx, 1
                        adc     dx, 0
                        mov     bp, dx
                        mov     ax, [bx+CosT]
                        imul    di
                        sar     dx, 1
                        adc     dx, 0
                        mov     si, dx
                        mov     ax, [bx+Sin2T]
                        imul    di
                        sar     dx, 1
                        adc     dx, 0
                        mov     [d2y], dx
                        imul    cx, dx, 100
                        mov     ax, [bx+Cos2T]
                        imul    di
                        sar     dx, 1
                        adc     dx, 0
                        mov     [d2x], dx
                        imul    dx, 100
                        imul    bx, si, 160
                        add     bx, dx
                        mov     ax, [x]
                        sub     ax, bx
                        imul    bx, bp, 160
                        add     bx, cx
                        mov     dx, [y]
                        sub     dx, bx
                        xor     di, di
  @@ir1:
                        mov     [i], ax
                        mov     [j], dx
                        mov     cx, 320/4
  @@ir2:
                        Rept 4
                                add     ax, si
                                add     dx, bp
                                mov     bl, ah
                                mov     bh, dh
                                mov     bl, fs:[bx]
                                mov     es:[di], bl
                                inc     di
                        EndM

                        loop    @@ir2

                If Method
                        inc     si
                        inc     bp
                EndIf

                        mov     ax, [d2x]
                        mov     dx, [d2y]
                        add     ax, [i]
                        add     dx, [j]
                        cmp     di, 4*16000
                        jb      @@ir1
                        mov     ax, cs
                        mov     es, ax
                        retn
                EndM
  RotateMap2:
                M_Init_Rotate 0

  RotateMap:
                M_Init_Rotate 1

  RotatePAL20:
                cli
                std
                mov     si, offset Temp_PAL3+3*1Fh-2
                mov     di, offset Temp_PAL3+3*20h-2
                mov     ax, [di]
                mov     bl, [di-1]
                mov     cx, 47
                rep     movsw
                mov     [di+1], ax
                mov     [di], bl
                cld
                mov     si, di
                mov     cx, 3*20h
                mov     dx, 03DAh
                M_WaitVRT_DX
                mov     dx, 03C8h
                mov     al, 20h
                out     dx, al
                inc     dx
                rep     outsb
                sti
                retn

  GfxWrite:
                xor     ax, ax
  @WriteFPush:
                push    di
  @WriteF:
                lodsb
                or      al, al
                jz      @WriteFLN
                cmp     al, 0FFh
                je      @WriteFOut
                push    si
                call    PrintChar
                pop     si
                jmp     @WriteF
  @WriteFLN:
                pop     di
                add     di, 8*256       ;320
                jmp     @WriteFPush
  @WriteFOut:
                pop     di
                mov     dx, cs
                mov     es, dx
                retn

                Rept    199
                        mov     [bx+di], dh
                        add     dx, ax
                        inc     bh
                EndM
  @UpdateMap8:
                mov     [bx+di], dh
                retn


EndPic          db      '  ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป  '
                db      'ษอผ                                                                          ศอป'
                db      'บ Ü ÜÜÜ  ษออป บ  บ อหอ    ษออป ษออ    ษอหอป ษออ ษอหอป ษออป ษออป บ บ  บ   Ü ÜÜÜ บ'
                db      'บ Ü ÜÜÜ  บ  บ บ  บ  บ     บ  บ ฬอ     บ บ บ ฬอ  บ บ บ บ  บ ฬอหผ ศหผ  บ   Ü ÜÜÜ บ'
                db      'บ        ศออผ ศออผ  บ     ศออผ บ      บ บ บ ศออ บ บ บ ศออผ บ ศป  บ   þ         บ'
;               db      'บ                                Released at Assembly ''94 in Finland, (C) 1994 บ'
                db      'บ                         Released at Assembly ''94 in Finland, (C) 1994 ไ, STP บ'
                db      'ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ'
                db      'ÛÛÛÛÛÛÛÛÛฑฑฑฑฑฑฑฑฐฐฐฐฐฐฐGIANT - the Ultimate 4KB-Intro!ฐฐฐฐฐฐฐฐฑฑฑฑฑฑฑฑÛÛÛÛÛÛÛÛÛ'
EndPicCol       db      80 dup (1Fh), 80 dup (1Fh)
                db      3 dup (1Fh), 11h, 3 dup (1Fh), 66 dup (1Ch), 1Fh, 11h, 5 dup (1Fh)
                db      3 dup (1Fh), 11h, 3 dup (1Fh), 66 dup (1Eh), 1Fh, 11h, 5 dup (1Fh)
                db      9 dup (1Fh), 62 dup (1Ah), 9 dup (1Fh)
                db      80 dup (1Fh), 80 dup (1Fh), 24 dup (19h), 5 dup (9Eh),3 dup (15h), 4 dup (1Ah), 9 dup(1Dh)
                db      1Fh, 17h, 17h, 14h, 5 dup(13h), 1Ch, 25 dup (19h)
Gfx1Text        db      'ษออออออออออออออออออออออออออออป', 0
                db      'บPlease wait while Computing!บ', 0
                db      'ศออออออออออออออออออออออออออออผ', 0, -1
Gfx2Text        db      'Is that all?', 0, -1
Gfx3Text        db      'NO!', 0, -1
Gfx4Text        db      'ษอออออออออออออออออออป', 0
                db      'บ That''s all Folks! บ', 0
                db      'ศอออออออออออออออออออผ', 0, -1
Text1String     db      ' Assembly 1994 *'
                db      ' GIANT 4KB-Intro'
Text2String     db      'GIANT', 13, 10
                db      'the Ultimate', 13, 10
                db      '4KB-Intro$'
                db      2       dup (00h)
SinTable label byte
                db      64      dup (00h)
CosTable label byte
                db      258     dup (00h)
Frames          dw      0000h
U               dw      0
CharGen         dw      0
SinB            dd      0
CosB            dd      0
II              dd      0
JJ              dd      0
IIAdd           dd      0
LL              dd      0.0e00
BB              dd      -1.0e00
Const1          dd      2e-03
Const2          dd      0.09e00
Const3          dd      1.255e00
Const4          dd      0.0025e00
Sin1            dd      0.84147098480791e00
Cos1            dd      0.54030230586814e00
CosBB           dd      1.8508157176809e00
Mult1           dd      9830.4
Ker1            dw      14
Ker2            dw      240
XX              dw      80h
YY              dw      40h
MaskTable       db      80h, 40h, 20h, 10h, 08h, 04h, 02h, 01h
BopQueue        dw      MaxBops dup(-1)
Angle           dw      -1 and 0FFC0h
Phase1          dw      2*1024-PhInc1
Phase2          dw      2*1024-PhInc2
BopADDLengths   db      5,  8,  9, 11, 12, 13, 13, 14, 14, 15, 15, 15
                db      10 dup (01h)
BopAddTab label word
                Rept 4
                        db                          1,1,1,1,1
                        db                    1,1,1,2,2,2,2,2
                        db                  1,1,2,2,2,3,3,3,3
                        db              1,1,2,2,3,3,3,3,3,3,3
                        db            1,1,2,2,3,3,3,3,4,4,4,4
                        db          1,1,2,2,3,3,3,4,4,4,4,4,4
                        db          1,2,2,3,3,3,4,4,4,5,5,5,5
                        db        1,2,2,3,3,3,4,4,4,5,5,6,6,6
                        db        1,2,2,3,3,4,4,5,5,5,6,6,6,6
                        db      1,2,2,3,3,4,4,4,5,5,6,6,7,7,7
                        db      1,2,2,3,3,4,4,5,5,6,6,7,7,7,7
                        db      1,2,2,3,3,4,4,5,5,6,6,7,7,7,7
                EndM
LastBopAdd       db      4*144 dup (00h)
BopTab  label word
;                db      10 dup (00h)           ; in reserve for correct alignment
        align 16
Last_Word:

Code    EndS

Data    Segment Byte Public Use16

Data_Seg        dw      0000h
MapA_Seg        dw      0000h
MapB_Seg        dw      0000h
Sky_Seg         dw      0000h
MapMakeTable    dw      41 dup (0000h), 10 dup (0001h), 09 dup (0003h)
LastMake_       dw      0003h, 0000h
AddCXTable      dw       32, -16, -8, 8
AddDXTable      dw      -32,  -8, 16, 8
MapCoord_       dw      0000h, 0004h, 0202h, 0FEFFh
VRAM_Seg        dw      0A000h
W_Divider       dw      0DB97h

Data    EndS

        End     Begin
