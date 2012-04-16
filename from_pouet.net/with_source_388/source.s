;
;
;       OK.. here is a very old source of MS!/ANALOG..
; since i quit codin' in real mode and using my own Dsys, here is a never
; released intro of mine. Yeah! i know it is not a good one but it may help
; you to understand something..
;       I've crippled some parts of the source (modplay, etc)..
;
;       himm.. nothing else matters..
;
;                               MS!/ANALOG


ideal
locals
jumps
model huge
stack 100h
p386

fontx=16
fonty=13
fontx1=8
fonty1=8

; Ä----- Datalari-ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
segment     Panelttt use32
bm_gfx:         include "vga01.asm"
bm_pal:         include "vga01.pal"
bm_pal2:
rept 3
 db 05h,05h,00h,0ah,0ah,00h,10h,10h,00h,15h,15h,00h,1ah,1ah,00h,20h,20h,00h
 db 25h,25h,00h,2ah,2ah,00h,30h,30h,00h,35h,35h,00h,3ah,3ah,00h,40h,40h,00h
 db 45h,45h,00h,4ah,4ah,00h,50h,50h,00h,55h,55h,00h,5ah,5ah,00h,60h,60h,00h
 db 60h,60h,00h,60h,60h,00h
 db 60h,60h,00h,60h,60h,00h,60h,60h,00h,5ah,5ah,00h,55h,55h,00h,50h,50h,00h
 db 4ah,4ah,00h,45h,45h,00h,40h,40h,00h,3ah,3ah,00h,35h,35h,00h,30h,30h,00h
 db 2ah,2ah,00h,25h,25h,00h,20h,20h,00h,1ah,1ah,00h,15h,15h,00h,10h,10h,00h
 db 0ah,0ah,00h,05h,05h,00h
endm

ends        Panelttt
; Ä----- Datalari2 ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
segment     Paneltt2 use32
bm_gfxx:        include "vga00.asm"
bm_palx:        db      0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                db      0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
                db      0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
ends        Paneltt2
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
segment     Zmscode
                assume cs:Zmscode

        ;include "msmodp.inc"
        include "macros.asm"    ;saat 11 ve 3,5
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
macro writer
                xor     ax,ax

                cmp     [cs:counter2],0
                je      near ptr wrtoki
                dec     [cs:counter2]

                push    0a000h
                pop     es

                xor     bx,bx
                cmp     [cs:counter2],120
                je      near ptr clrras
                mov     bx,320
                cmp     [cs:counter2],60
                je      near ptr clrras
                jmp     near ptr exwr

clrras:         mov     cx,(200-63)/2           ;clear raster
                mov     di,63*320
                add     di,bx
clr:            push    cx
                mov     cx,320
clr2:           mov     [byte es:di],al
                inc     di
                loop    near ptr clr2
                pop     cx
                add     di,320
                loop    near ptr clr
                jmp     near ptr exwr

wrtoki:         lea     si,[cs:scrtext]
                add     si,[cs:counter]
                xor     ax,ax
                mov     al,[cs:si]
                cmp     al,"a"                  ;color
                jne     near ptr w1
                inc     si
                mov     al,[cs:si]
                mov     [cs:wrtcolor],al
                inc     [cs:counter]
                inc     [cs:counter]
                jmp     near ptr exwr

w1:             cmp     al,1
                jne     near ptr doother0
                add     [cs:wputx],fontx1+2
                mov     [cs:wputy],fontx1
                inc     [cs:counter]
                jmp     near ptr exwr

doother0:       cmp     al,3
                jne     near ptr doother2
                inc     [cs:counter]
                mov     [cs:counter2],1000
                jmp     near ptr ayni

doother2:       cmp     al,2
                jne     near ptr doother1
                inc     [cs:counter]
                mov     [cs:counter2],200
                jmp     near ptr ayni

doother1:       cmp     al,0
                jne     near ptr doit
                xor     ax,ax
                mov     [cs:counter],ax
ayni:           mov     [cs:wputy],8
                mov     [cs:wputx],63
                jmp     near ptr exwr

doit:           cmp     al,32
                je      doit21
                cmp     [cs:scrt0],al
                jne     doit22
doit21:         mov     [cs:scrt00],0
                mov     [cs:scrt0],90
                jmp     doitx
doit22:         mov     al,[cs:scrt0]
                sub     al,32
                dec     [cs:scrt0]
                ;mov     al,(90-31)
                jmp     doitt

doitx:          inc     [cs:counter]
                ;xor     bx,bx
                sub     al,32

doitt:          lea     si,[cS:font18]

                push    0a000h
                pop     es

                mov     bx,fontx1*fonty1
                mul     bx
                add     si,ax

                mov     cx,[cs:wputy]
                mov     dx,[cs:wputx]   ;(320*x)+y
                calcdi

                mov     cx,fontx1
lop11:          push    cx
                mov     cx,fonty1
                mov     [cs:wrtcolor],5
lop22:          mov     al,[byte cs:si]
                cmp     al,1
                jne     near ptr lop3
                ;mov     al,5
                mov     al,[cs:wrtcolor]
lop3:           mov     [byte es:di],al
                inc     si
                inc     di
                ;inc     [cs:wrtcolor]
                loop    near ptr lop22
                pop     cx
                add     di,320-fontx1
                loop    near ptr lop11

                cmp     [cs:scrt00],0
                je      exwr2
                jmp     exwr

exwr2:          mov     [cs:scrt00],1
                add     [cs:wputy],8

exwr:

endm    writer
; -ÄÄÄÄ--ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ-Ä-Ä-ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ--ÄÄÄÄÄ
proc    scroller

                mov     ax,seg scrbuffer
                mov     es,ax

                push    cs
                pop     ds

                cmp     [cs:scrbekle],0
                je      nobekle
                dec     [cs:scrbekle]
                jmp     exscr

nobekle:        cmp     [cs:scrcount2],fontx
                jb      doit2

                mov     [cs:scrcount2],0
                lea     si,[cs:wrttext]
                add     si,[cs:scrcount]
                inc     [cs:scrcount]
                xor     ax,ax
                mov     al,[cs:si]

                cmp     al,0
                jne     skip0
                mov     [cs:scrcount],0
                jmp     kaydir

skip0:          cmp     al,1
                jne     skip1
                mov     [cs:scrsource],0
                jmp     exscr

skip1:          cmp     al,3
                jne     skip2
                mov     [cs:scrbekle],1000
                jmp     exscr

skip2:          cmp     al,2
                jne     skip3
                cmp     [cs:flash],1
                je      flashstp
                mov     [cs:flash],1
                jmp     exscr
flashstp:       mov     [cs:flash],0
                jmp     exscr

skip3:          sub     al,32
                lea     si,[cs:font]
                mov     bx,fontx*fonty
                mul     bx
                add     si,ax
                mov     [cs:scrsource],si
                jmp     kaydir

doit2:          mov     si,[cs:scrsource]
                add     si,[cs:scrcount2]
                mov     di,offset scrbuffer
                add     di,319
                mov     cx,fonty
lop2:           mov     al,[cs:si]
                cmp     [cs:flash],0
                je      noflash
                cmp     al,0
                je      noflash
                mov     al,2
noflash:        mov     [es:di],al
                add     si,fontx
                add     di,320
                loop    lop2
                inc     [cs:scrcount2]

kaydir:         push    ax bx

                mov     ax,offset scrbuffer+1
                mov     di,ax
                inc     ax
                mov     si,ax

                pop     bx ax

                push    ds

                push    cs cs
                pop     es ds

                mov     cx,fontx
lop1:           push    cx
                mov     cx,319/2
                push    si di
                rep     movsw
                pop     di si
                add     di,320
                add     si,320
                pop     cx
                loop    lop1

                pop     ds
                mov     dx,3c8h
                mov     al,2
                out     dx,al
                inc     dx
                mov     al,[byte cs:scrcount2]
                out     dx,al
                out     dx,al
                out     dx,al
exscr:
                ret
endp    scroller
; -ÄÄÄÄ--ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ-Ä-Ä-ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ--ÄÄÄÄÄ
proc    scroller2
kacx=50
                mov     al,[byte cs:scrollerw]
                cmp     al,1
                je      bas

                push    cs
                pop     ds

                push    0a000h
                pop     es

                mov     [byte cs:scrollerw],1
                mov     si,offset scrbuffer2
                mov     ax,[cs:scrollx]
                mov     bx,320
                mul     bx
                add     ax,[cs:scrolly]
                mov     di,ax

                mov     cx,13           ;13
   yslop21:     push    cx
                mov     cx,kacx         ;50
   yslop22:     mov     al,[ds:si]
                mov     [es:di],al
                inc     si
                inc     di
                loop    yslop22
                add     si,320-kacx     ;-50
                add     di,320-kacx
                pop     cx
                loop    yslop21

                mov     ax,[cs:scrollx]
                cmp     ax,180
                je      asaa
                cmp     ax,55
                je      yuka
                jmp     zkip
asaa:           mov     [cs:nereyesx],-1
                jmp     zkip
yuka:           mov     [cs:nereyesx],1
zkip:           mov     ax,[cs:nereyesx]
                add     [cs:scrollx],ax

                mov     ax,[cs:scrolly]
                cmp     ax,250
                je      asaa2
                cmp     ax,10
                je      yuka2
                jmp     zkip2
asaa2:          mov     [cs:nereyesy],-1
                jmp     zkip2
yuka2:          mov     [cs:nereyesy],1
zkip2:          mov     ax,[cs:nereyesy]
                add     [cs:scrolly],ax

                jmp     scre2

bas:
                push    0a000h
                pop     ds

                push    cs
                pop     es

                mov     [byte cs:scrollerw],0
                mov     ax,[cs:scrollx]
                mov     bx,320
                mul     bx
                add     ax,[cs:scrolly]
                mov     si,ax
                mov     di,offset scrbuffer2

                mov     cx,13           ;13
   xslop21:     push    cx
                mov     cx,kacx         ;50
   xslop22:
                mov     al,[ds:si]
                mov     [es:di],al
                inc     si
                inc     di
                loop    xslop22
                add     si,320-kacx     ;-50
                add     di,320-kacx
                pop     cx
                loop    xslop21

                push    cs
                pop     ds

                push    0a000h
                pop     es

                mov     si,offset scrbuffer
                mov     ax,[cs:scrollx]
                mov     bx,320
                mul     bx
                add     ax,[cs:scrolly]
                mov     di,ax

                mov     cx,13           ;13
   slop21:      push    cx
                mov     cx,kacx         ;50
   slop22:
                mov     al,[ds:si]
                cmp     al,0
                je      slopskip
                mov     [es:di],al
slopskip:       inc     si
                inc     di

                loop    slop22
                add     si,320-kacx     ;-50
                add     di,320-kacx
                pop     cx
                loop    slop21

scre2:
                ret
endp    scroller2
; -ÄÄÄÄ--ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ-Ä-Ä-ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ--ÄÄÄÄÄ
proc    dnm
                mov     ax,Panelttt
                mov     ds,ax

                push    0a000h          ;es=0a000h
                pop     es

                mov     ax,[cs:Bitmap]
                mov     si,ax
                mov     ax,[cs:StartLogoX]
                mov     bx,320
                mul     bx
                add     ax,[cs:StartLogoY]
                add     si,ax

                xor     di,di

		mov	cx,50
dlop2:          push    cx
		mov	cx,320
dlop1:          mov     al,[ds:si]
                mov     [es:di],al
                inc     di
                inc     si

                loop    near ptr dlop1
                pop     cx
                loop    near ptr dlop2

                mov     ax,[cS:Ynee]            ;
                add     [cs:StartLogoY],ax
                mov     ax,[cs:StartLogoY]
                cmp     ax,320-50
                je      near ptr buy1
                cmp     ax,0
                je      near ptr buy2
                jmp     near ptr okk1
buy1:           mov     [cs:Ynee],-1
                jmp     near ptr okk1
buy2:           mov     [cs:Ynee],1
okk1:

                mov     ax,[cS:Xnee]
                add     [cs:StartLogoX],ax
                mov     ax,[cs:StartLogoX]
                cmp     ax,200-52
                je      near ptr buy3
                cmp     ax,0
                je      near ptr buy4
                jmp     near ptr okk2
buy3:           mov     [cs:Xnee],-1
                jmp     near ptr okk2
buy4:           mov     [cs:Xnee],1
okk2:
        ret
endp    dnm
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
proc    dnm2

                mov     ax,Panelttt
                mov     ds,ax

                lea     si,[ds:bm_pal2]
                add     si,[cs:dnmpos]
                lea     di,[ds:bm_pal]
                add     di,150*3        ;19*3

                mov     cx,40
dlop22:         push    cx
                mov     cx,3
dlop:           mov     al,[ds:si]
                mov     [ds:di],al
                inc     si
                inc     di
                loop    near ptr dlop
                pop     cx
                loop    near ptr dlop22

                add     [cs:dnmpos],3
                cmp     [cs:dnmpos],40*3
                jne     near ptr exitdnm2
                mov     [cs:dnmpos],0
exitdnm2:
                call    fixpalet

        ret
endp    dnm2
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
proc        Start near

                mov     ax,cs
                mov     ds,ax
                ;mov     [PSP],es

                cli
                in      al,21h          ;11111101b
                or      al,01111101b    ;hicbi bok olmasin keyboard haric.
                out     21h,al

                cld
okidoki:
                ;JMP DNM0
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
        mov     ax,Paneltt2             ;TITLE PICTURE....
        mov     ds,ax                   ;

        screen13
        pusha
                mov     [cs:PanelX],320
                mov     [cs:PanelFX],0
                mov     [cs:PanelY],200
                mov     [cs:PanelTX],1
                mov     [cs:LogoCol],7
                mov     [cs:Bitmap],offset bm_gfxx
                mov     [cs:Palet],offset bm_palx
                call putlogo
                call putlogo2
        popa

                mov     cx,5
acbekle2:       push    cx
                xor     ax,ax
                mov     cx,63
acbekle:        vbl
                mov     dx,3c8h
                push    ax
                mov     al,[cs:renk]
                out     dx,al
                pop     ax
                inc     dx
                out     dx,al
                out     dx,al
                out     dx,al

                push    ax
                mov     al,[cs:renk]
                cmp     al,1
                je      okit
                pop     ax
                jmp     okit2
okit:           mov     dx,3c8h
                mov     al,2
                out     dx,al
                pop     ax
                inc     dx
                out     dx,al
                out     dx,al
                out     dx,al
okit2:
                inc     al
                loop    acbekle

                mov     al,63
                mov     cx,63
acbekle3:       vbl
                mov     dx,3c8h
                push    ax
                mov     al,[cs:renk]
                out     dx,al
                pop     ax
                inc     dx
                out     dx,al
                out     dx,al
                out     dx,al

                push    ax
                mov     al,[cs:renk]
                cmp     al,1
                je      okit21
                pop     ax
                jmp     okit22
okit21:         mov     dx,3c8h
                mov     al,2
                out     dx,al
                pop     ax
                inc     dx
                out     dx,al
                out     dx,al
                out     dx,al
okit22:
                dec     al
                loop    acbekle3

                dec     [byte cs:renk]
                pop     cx
                loop    acbekle2

;bbb:            in      al,60h
;                dec     al
;                jnz     bbb
                ;jmp     fuckyani
                vbl

fuckyani:

        mov     ax,Panelttt             ;TITLE PICTURE....
        mov     ds,ax                   ;

        screen13
        pusha
                mov     [cs:PanelX],320
                mov     [cs:PanelFX],0
                mov     [cs:PanelY],200
                mov     [cs:PanelTX],1
                mov     [cs:LogoCol],0ffh
                mov     [cs:Bitmap],offset bm_gfx
                mov     [cs:Palet],offset bm_pal
                call putlogo
        popa

                push    0a000h
                pop     es
                mov     di,320*50

                mov     cx,40
rast2:          push    cx
                mov     cx,8
rast1:          mov     al,[byte cs:RastColor]
                mov     [es:di],al
                inc     di
                loop    rast1
                inc     [cs:rastcolor]
                
                pop     cx
                loop    rast2

                mov     di,(320*199)+320
                mov     [cs:rastcolor],150      ;19

                mov     cx,40
rast22:         push    cx
                mov     cx,8
rast11:         mov     al,[byte cs:RastColor]
                mov     [es:di],al
                dec     di
                loop    rast11
                inc     [cs:rastcolor]
                pop     cx
                loop    rast22

; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
no_esc:
                pusha
                        vbl2
                        call scroller   ;normal scroller
                        call scroller2  ;bumping
                popa
                pusha
                        vbl2
                        call dnm2       ;raster lines
                        call dnm        ;ust logo bumping
                popa
                vbl3
                pusha
                        call scroller2  ;bumping
                        writer          ;writer iste
                popa
;                                vbl2
;                pusha
;                        call dnm2       ;raster lines
;                        call dnm        ;ust logo bumping
;                popa
;                pusha
;                       ;writer
;                        call scroller   ;normal scroller
;                        call scroller2  ;bumping
;                popa
;                pusha
;                        ;call scroller2  ;bumping
;                        writer          ;writer iste
;                popa
;                vbl3


okk:            in      al,60h          ;inkey
                dec     al              ;esc?
                jnz     no_esc          ;esc tusuna basilmamis
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
exit:
                mov     ax,3                    ;text mode
                int     10h

                xor     ax,ax           ;biraktir gitsin..
                out     21h,al
                sti

                mov     ax,cs
                mov     ds,ax
                lea     dx,[endtext]
                mov     ah,9
                int     21h

                mov     ax,4c00h        ;f*ck off!
                int     21h

dnm0:           in      al,60h          ;inkey
                dec     al              ;esc?
                jnz     dnm0            ;esc tusuna basilmamis
                jmp     exit
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
PSP             dw      0
MSMPErr_GUS     db      "ş GUS Not Found..",13,10
                db      "ş Sound Driver not Init'ed.",13,10,"$"
MSMPErr_SB      db      "ş SB  Not Found..",13,10
                db      "ş Sound Driver not Init'ed.",13,10,"$"
MSMPErr_MOD     db      "!Error: Init MOD..",13,10,'$'
MSMPMod_Name    db      "OPTIONS.MOD",0

                include "bnx-font.asm"
                include "font18.inc"
; 1: end of line
; 2: end of page
; 0: end of text
;aX: color
renk            db      5
scrtext         db      "AHANA..            ",1         ;1
                db      "FIRST OF ALL THANKS TO EVERYONE WHO   ",1
                db      "SEND MAILS, GREETS, E.T.C.. ALSO VERY ",1
                db      "THANX 2 THOSE SYSOPS THAT OPENED AREAS",1
                db      "4 ANALOG..  BBS INFOS WILL BE SHOWN ON",1
                db      "OTHER PAGES.. WATCH OUT FOR THEM..    ",1
                db      " ",1
                db      "CODE: MS!                GFX: STRANGER",1
                db      "FONT: MALICE/BNX         ZAK: WHIP",1
                db      " ",1,3,2

                db      "@@@ IRIS BBS @@@",1
                db      "NODE 1:  +90 -232- 244 01 39  14.4",1
                db      "NODE 2:  +90 -232- 342 86 59  28.8",1
                db      " ",1
                db      "FTP/WWW:      IRIS.BBS.TR",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES IN ANALOG AREA",1
                db      " ",1
                db      "SYSOP:  E.ONDER KOKTURK",1,3,2

                db      "@@@ TURK BBS @@@",1         ;1
                db      "NODE 1:  +90 -232- 463 43 89  28.8",1
                db      "NODE 2:  +90 -232- 463 87 93  28.8",1
                db      "NODE 3:  +90 -232- 463 23 28  28.8",1
                db      "NODE 4:  +90 -232- 463 23 29  28.8",1
                db      " ",1
                db      "FTP/WWW:                BBSTURK.BBS.TR",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES IN ANALOG AREA",1
                db      " ",1
                db      "SYSOP:  TURGUT KALFAOGLU",1,3,2

                db      "@@@ CEKIRGE @@@",1         ;1
                db      "NODE 1:  +90 -232- 374 76 30  28.8",1
                db      "NODE 2:  +90 -232- 374 71 98  28.8",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES IN ANALOG AREA",1
                db      " ",1
                db      "SYSOP:  CEKIRGE",1,3,2

                db      "@@@ DEEP ABYSS @@@",1         ;1
                db      "NODE 1:  +90 -216- 326 05 41  14.4",1
                db      "NODE 2:  +90 -216- PRI VA TE  14.4",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES IN ANALOG CONF",1
                db      " ",1
                db      "SYSOP:  SPECTRE",1,3,2

                db      "@@@ TRANSILVANYA @@@",1         ;1
                db      "NODE 1:  +90 -216- 302 87 16  14.4",1
                db      "NODE 2:  +90 -216- PRI VA TE  14.4",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES IN ANALOG CONF",1
                db      " ",1
                db      "SYSOP:  MC.FISCHER",1,3,2

                db      "@@@ KAYSERI BBS @@@",1         ;1
                db      "NODE 1:  +90 -352- 235 32 31  14.4",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES IN AREA 199",1
                db      " ",1
                db      "SYSOP:  BATMAN",1,3,2

                db      "@@@ SPLIT 7 @@@",1         ;1
                db      "NODE 1:  +90 -212- 543 74 82  28.8",1
                db      "NODE 2:  +90 -212- 571 70 48  14.4",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES IN PC CONF",1
                db      " ",1
                db      "SYSOP:  GART",1,3,2

                db      "@@@ PENTIUM ILLUSION @@@",1         ;1
                db      "NODE 1:  +90 -312- PRI VA TE  33.6",1
                db      "NODE 2:  +90 -312- PRI VA TE  33.6",1
                db      "NODE 3:  +90 -312- PRI VA TE  33.6",1
                db      "NODE 4:  +90 -312- PRI VA TE  33.6",1
                db      " ",1
                db      "U CAN FIND ANALOG FILES (Z alg*.* A)",1
                db      " ",1
                db      "SYSOP:  BONITO",1,3,2

                db      "THERE ARE SOME OTHER BBS'ES WHICH HAVE",1
                db      "AREAS 4  ANALOG BUT AS I WAS RELEASING",1
                db      "THIS INTRO I COULDNT GET DA FULL INFOS",1
                db      "SO WATCH OUT 4 OUR INTROS 4 MORE INFO ",1
                db      " ",1
                db      2,0

wrttext         db      " GREETS TO:   TURGUT, ONDER, BATMAN, GART, BONITO, SPECTRE,"
                db      " RAYTRACE, METALLIC, PENTAGRAM, GIGA, MR.FLAG, NOBODY, SSG,"
                db      " RAMBO, WOODY, SCOTCH, KRIS, MR.FISCHER, EMX, REMIX,"
                db      " TURBO, SAM, BARBARIAN, VICTORY, TURKUAZ, HIT, DISQ, CASH,"
                db      " CUCU, CEKIRGE, ONDER, ESRA, SURF'S ROCKER, BIBER,"
                db      " CODEMASTER, UMUT, MUSTAFA MAC, FIGEN, YASEMIN, WEA,"
                db      " ATACAN, DUDUKE   "
                db      0

wputx           dw      63
wputy           dw      8
wrtcolor        db      5

counter         dw      0
counter2        dw      0

Xnee            dw      1
Ynee		dw	1
StartLogoX      dw      30
StartLogoY	dw	30

RastColor       db      150     ;19
dnmpos          dw      0

LogoCol         dw      0
PanelX          dw      0
PanelY          dw      0
PanelFX         dw      0
PanelTX         dw      0
Bitmap          dw      0
Palet           dw      0
MX              dw      0
MY              dw      0
MB              dw      0
MSec            dw      0

scrcount        dw      0
scrcount2       dw      15
scrsource       dw      0
scrbekle        dw      0
nereyesx        dw      1
scrollx         dw      56
nereyesy        dw      1
scrolly         dw      11
flash           db      0

scrt0           db      90
scrt00          dw      1
scrollerw:      db      1
scrbuffer:      db      320*20 dup (0)
scrbuffer2:     db      320*20 dup (0)

endtext:
db "                   ___    ___    ___    _:     ___    ___   ",13,10
db "                  /o  \  /o  \  /o  \  /o| _  /o  \  /o  \  ",13,10
db "                 /  O  \/  :  \/  O  \/  |/ \/   : \/  l__) ",13,10
db "                /       \  |   \      \  Trb \   |  \  (__ \",13,10
db "                \___|___/__|___/__|___/______/______/______/",13,10
db "                      An0tHeR fine AnaLoG ProDuction",13,10,13,10
db 80 dup ("-")
db "Mail Analog     : analog.whq@iris.bbs.tr",13,10
db "ALG HOME PAGE   : http://bbsturk.bbs.tr/user/analog",13,10
db 13,10
db "For Analog Stuff: IRIS BBS",13,10
db "          Node 1: +90-232-244 01 39   USR 28.8",13,10
db "          Node 2: +90-232-342 86 59       14.4",13,10
db 13,10
db "                  TURK BBS",13,10     ;1
db "          Node 1:  +90-232-463 43 89  USR 28.8",13,10
db "          Node 2:  +90-232-463 87 93  USR 28.8",13,10
db "          Node 3:  +90-232-463 23 28  USR 28.8",13,10
db "          Node 4:  +90-232-463 23 29      28.8",13,10
db 80 dup ("-"),13,10,"$"

endp        Start
; ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ
ends    Zmscode
end     Start
