; tULEVAiSUUS bY pWp - eVERYThING bY ViZNUT eXCEPT tHE uNCRuNCH sUBRTInE

; Requires a pc compatible, adlib recommended
; Must be compiled with dA best pc realmode asm on the earth (a86)

; The next few linez are ripped from Future Crew

;--------------------------------------------------------------------
;    This code is released to the public domain. You can do
;    whatever you like with this code, but remember, that if
;    you are just planning on making another small intro by
;    changing a few lines of code, be prepared to enter the
;    worldwide lamers' club.
;--------------------------------------------------------------------

; Yeah! Join us!

; Now prepare yourself for stunning magic kode -->-->

assume cs:cseg,ds:cseg

;;;;;;;;;;;;;;;;;;;;;; pREPARATiONS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                                                           ;;;;;
                ; ------- iNiT dA MoDE

mov ax,3        ; 80-column color
int 010

mov ax,0500     ; page 0
int 010

mov ax,01003    ; noblink mode
int 010

mov ah,0f       ; test if in monochrome
int 010
cmp al,7
if ne mov w[scrbuffpoint],0b800

                ; sET InTerrUpT

mov ax,03508            ; get oldvec                        ;;;
int 021                                                     ;;;

mov w[oldint],bx        ; set jump                           ;
mov w[oldint+2],es
                                                             ;
mov dx,new8handler      ; hook new vec                       ;
call short hook

xor bp,bp               ; reset dezignez

mov cx,2000*3   ; tyhjennetÑÑn koko kîkkîe. tehdÑÑn kolme bufferia.
xor ax,ax
mov di,ax
tila7:mov dx,0b000    ; dl nollautuu samalla
        scrbuffpoint EQU tila7+1
mov es,dx       ; es osoittaa aina b800:aan
rep stosw

; ------------------------------------------------------
; ---------------- MAiNLOOp bEGiNS ---------------------
; ------------------------------------------------------

designloop:     ; ---- ==== :::: DESiGN SPECiFICATiON PART :::: ==== ----

cmp bp,32       ; "minulla olisi kysymys!!!"
jne >c1
        mov si,pelu1txt
        xor di,di
        or dl,8         ; mode register: 'screendump mode'
c1:

cmp bp,96       ; strobo
jne >c1
        or dl,4
c1:

cmp bp,128      ; onx nyt tulevaisuus?
jne >c1
        xor dl,4

        and bl,254
        call peluisukuva

        mov si,pelu2txt
        mov di,4000
        or dl,8+128     ; 16 = flushukki        oli 8+16
c1:

cmp bp,256              ; voi kyllÑ..
jne > c1
        or bl,1
        call peluisukuva

        mov si,kultu
        mov di,4000
        or dl,8
c1:
cmp bp,256+kultu_lgt    ; nyt on tulevaisuus
if e mov si,isu1txt

cmp bp,256+64   ; strobo
jne > c1
        xor dl,4+128
c1:

cmp bp,256+96   ; tulevaisuuslogo
jne > c1
        xor dl,4
        mov di,4000
        mov cx,2000
        xor ax,ax
        rep stosw
        mov di,4000+3*160
        mov cx,TUVLOGO_LGT
        mov si,TUVLOGO
        call uncrunch
        or dl,32
c1:

cmp bp,384      ; kun nyt kerta on tulevaisuus.. ?
jne >c1
        xor dl,32+16

        and bl,254
        call peluisukuva

        mov si,pelu3txt
        mov di,4000
        or dl,8
c1:

cmp bp,384+80
if e mov si,tulevaisuusvalineet

cmp bp,384+128          ; voi kyllÑ kultu
jne > c1
        or bl,1
        call peluisukuva

        mov si,kultu
        mov di,4000
        or dl,8
c1:

cmp bp,384+128+kultu_lgt
if e mov si,isu2txt

cmp bp,640                      ; kauppa
jne >c1
        mov ax,020
        xor di,di
        mov cx,3*2000
        rep stosw
        mov di,8000-4*160
        mov cx,LELUT_LGT
        mov si,LELUT
        call uncrunch
        mov di,4000
        mov cx,KAUPPA_LGT
        mov si,KAUPPA
        call uncrunch
        mov dl,64
c1:

cmp bp,640+64   ; ollanx me nyt elitejÑ?
jne >c1
        and bl,254
        call peluisukuva

        mov si,pelu4txt
        mov di,4000
        or dl,8
c1:

cmp bp,640+128  ; voi kyllÑ, ...
jne > c1
        or bl,1
        call peluisukuva

        mov si,kultu
        mov di,4000
        or dl,8
c1:
cmp bp,640+128+kultu_lgt
if e mov si,isu3txt

cmp bp,640+192          ; ELiTEiTé!!!!!
jne >c1
        mov di,4000
        mov cx,2000
        xor ax,ax
        rep stosw
        mov di,4000+3*160
        mov cx,ELITEITA_LGT
        mov si,ELITEITA
        call uncrunch
        mov dl,32
c1:

cmp bp,896-32
jne >c1
        mov dl,17
c1:

cmp bp,896
jne >c1
        mov di,14*160
        mov si,lopputekstit
        or dl,8+2
c1:

cmp bp,1024+64
jne >c1
        mov di,22*160
        mov si,lopputxt2
        or dl,8
c1:

cmp bp,1024+128         ; finish iNTRo, end kode
if e or dl,255

; etc.etc.

; mode handlerz

;;; ;;; ;;; ;;; ;;; ---- ==== FX HANDLERZZ ==== ----

cmp dl,255                     ; all bits on -/>-> OKkAY finish this crap
if e jmp loppu

test dl,8                       ; bit 8: writemode
je >c1
        mov cx,1
        test dl,2
        je l0
              mov cx,3
              test bp,3
              if e dec cx
    l0:
        lodsb
        test al,al
        if e xor dl,8
        mov ah,14
        stosw
      loop l0
        push ds
        mov ds,es
        mov b[di-3],15
        mov b[di-5],7
        mov b[di-9],14
        mov b[di-11],12
        mov b[di-15],14
        pop ds
c1:

test dl,32                      ; bit 32: bufferflush ylîs alas
je >c1
        push ds,si,di
        mov ds,es
        xor di,di
        mov si,4000

        mov ax,bp
        mov cl,3
        shl ax,cl
        cbw
        xor al,ah               ; sizeoptimoitua koodia, todella
        xor ah,ah
        add ax,ax
        add ax,ax
        mov bx,ax
        add ax,ax
        add ax,bx
        and ax,65535-63
        mov bx,ax
        shr bx,1
        shr bx,1
        add ax,bx
        sub si,ax
        sub si,ax
        
        mov cx,2000
        rep movsw

        pop di,si,ds
c1:

; ------------------- dezign timer ------------------

waitloop:
   cmp bp,w[timer]      ; bp = univerzal chronopointer
   jc jatq

push ds         ; exitti!!!!
xor ax,ax
mov ds,ax
test b[1047],7
pop ds
jne loppu

call fxhandlers2
jmp waitloop

jatq:
inc bp
jmp designloop

; ------------------------------------------------------
; ------------- eND oF MAiNLOOP ------------------------
; ------------------------------------------------------

                    loppu:

lds dx,[oldint]         ; unhook i8handler

hook:                   ; hooker routine
 cli
  mov ax,02508
  int 021

  ; adlib init

  mov ax,244              ; clear adlib ram
  l0:
    call adlib
    dec ax
  jne l0

  mov si,initstring       ; init with string
  l0:
    cs mov ah,[si]
    inc si
  l1:
     call adlib
     inc ax
     test al,31
    jne l1
  test al,al
  jne l0

;  mov ax,00740     ; vÑhÑn kakkalaajennusta
;  call adlib
;  add al,3
;  call adlib

  sti
ret

peluisukuva:
        mov di,4000
        xor ax,ax
        mov cx,160
        rep stosw
        add di,9*160+20
        test bl,1
        jne isukka
          mov si,PELU
          mov cx,PELU_LGT
hoopo:    call uncrunch
        mov di,4000
ret

isukka:
        mov si,ISU
        mov cx,ISU_LGT
        add di,70
        jmp hoopo

; ----------------------------------------------------
; ----------------------------
                FXHANDLERS2:  ;
; ----------------------------------------------------- : . . .:.


test dl,4                       ; bit 4: strobo
je >c1
        xor di,di
        mov cx,2000
strtila:mov ax,177
        strobofactor EQU strtila+2
        test bp,1
        if e not ah
        rep stosw
c1:

test dl,64                      ; mULTiPLATfoRm sCROllER
je >c1
        push ds,di,si
        mov ds,es
        xor di,di
        mov si,4000

        mov ax,bp
        mov cl,80
        div cl
        mov bl,ah
        xor bh,bh

        push bp
        mov bp,bx
        add bx,bx

        mov dh,25
l1:     mov cx,80

        l0:     lodsw
                cmp al,020
                jne >c2
                test ah,0f0
                jne >c2
                   cmp cx,bp
                   jc >c3
                        mov ax,[si+bx+3998]
                        jmp >c2
                   c3:
                        mov ax,[si+bx+3998-160]
                c2:
                stosw
                loop l0
        dec dh
        jne l1

        pop bp,si,di,ds
c1:

test dl,128                     ; SiNiKAKkA
je >c1

push ds,si,di
mov ds,es

mov si,4000
xor di,di

mov dh,25
xor bx,bx
l0:
        mov ax,bp               ; lisÑÑ sizeoptimoitua koodia
        add ax,ax
        add ax,ax
        add al,dh
        add al,bh
        add ax,ax
        add ax,ax

        cbw
        xor al,ah
        mov ah,al
        shr ah,1
        sub al,ah
        xor ah,ah
        add ax,8

        mov cx,bp
        mov bl,bh
        add bl,dh
        add bl,cl
        and bl,019

        cmp ax,80
        if nc mov ax,80

        mov cx,ax
        call dl128in

        mov cx,bp
        mov bl,bh
        add bl,dh
        add bl,cl
        not bl
        and bl,019

        mov cx,80
        sub cx,ax
        call dl128in
        
add bx,dx
add bx,dx

dec dh
jne l0

pop di,si,ds
c1:

test dl,16                      ; bit 16: bufferflush+megagigacolorelite
je >c1
        push ds,si,di
        mov ds,es
        xor di,di
        mov si,4000

        mov cx,2000
        test dl,1
        jne >c3

            l0: lodsw
                lea bx,[bp+si]
                or bx,cx
                add bx,bp
                add bx,bx
                and bl,01b
                or ah,bl
                stosw
                loop l0
            jmp >c2
        c3:

push dx
mov di,1
mov dx,3*(25+1)                 ;  mîssîÑ

l1:
        mov ax,bp
        add ax,ax
        mov bx,dx           ; hUh Joo.

    mov cl,80
    l0:
        add ax,bx
        add ax,bp       ;!!!
        add bx,dx
        push ax
          mov al,ah
          and al,019
          xor al,15
          stosb
        pop ax
        inc di

        loop l0

sub dl,3
jne l1
pop dx

      c2:
        pop di,si,ds

c1:
;       -       -       -       -       -       ;

                     ret
                    ;!!!;


  ;;;;;;;;                                           ~~~|;;;
;;;;;;;;;;;;    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;.  ~~|;;;
;;;;    ;;;;   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;   ~|;;;
;;;;.  .;;;;   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;~~;;;    |;;;;
;;;;;;;;;;;;;;;;;;;                   ;;;;;;;;; o;;;;;;;|;;;;;
;;;;;;;;;;;;;;;;;;; iNTERRUPT hANDLER ;;;;;;;;;;;;;;;;;;|;;;;;
;;;;;;;;;;;;;;;;;;;.                 ,;;;;;;;;;;;;;;;;;;|;;;;;
;;;;    ;;;;   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;; `-' `-'    |;;;;
;;;;.  ,;;;;   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;-  _|;;;
;;;;;;;;;;;;    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;'  __|;;;
  ;;;;;;;;                                           ___|;;;

                       new8handler:

push ax,ds
mov ds,cs

tila1:mov ax,0000
timer EQU tila1+1
inc w[timer]
test al,1
jne ignoremega
; ------------------------ jub

;;;;;;;;;;;;;;;;;;;;;;; mEGAPLAYER ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; rIppED fROm ViZNUT's 512bYtE iNTRO

push bx,cx,si,bp

tila3:
mov si,musa
        musapoint EQU tila3+1

cmp si,musa+128;-27      ; loop tune
if e sub si,128

mov cx,2                ; # of channels

ntechn:                 ; load and translate note
lodsb

mov bx,ax
and bx,0f
mov bl,[notes+bx]

add bx,bx

and al,0f0              ; translate octave
shr ax,1
shr ax,1
or bh,al

mov ax,bx               ; write low byte
mov al,cl
add al,0af              ; lowest chnl -1
call short adlib

mov ah,bl               ; write high byte
sub al,010
call short adlib
and ah,077
mov b[strobofactor],ah

loop ntechn

mov w[musapoint],si     ; joo.

pop bp,si,cx,bx

; ------------------------ mîîh
        ignoremega:

pop ds,ax
tila4:jmp far 01102:03508
oldint EQU tila4+1

;       --------------------------------------------------------

adlib:
push ax,cx,dx

 mov dx,0388

 out dx,al
   mov cx,6
   t1:in al,dx
   loop t1

 mov al,ah

 inc dx
  out dx,al
 dec dx
   mov cl,35
   t2:in al,dx
   loop t2

pop dx,cx,ax
ret

;;;;;;;;;;;;;;;;;;;;;;; pATTERn dATA ;;;;;;;;;;;;;;;;;;;;;;;;;;

musa:

db 0a0,0b0
db 090,00c
db 0b0,0a0
db 0a7,090
db 0b0,0b0
db 0a7,00c
db 0a0,0b0
db 00c,090
db 0b0,0b0
db 0a7,00c
db 0b0,0b0
db 0a7,090
db 0a3,0b3
db 093,00c
db 0a0,0b0
db 090,00c
db 0a3,0b3
db 093,00c
db 0aa,0a3
db 0a5,093
db 0aa,0ba
db 0a5,00c
db 09a,0ba
db 00c,09a
db 0aa,0ba
db 0b2,00c
db 0aa,0ba
db 0a5,09a
db 0aa,0a2
db 0b2,00c
db 0aa,09a
db 0a3,00c
db 0a5,0b5
db 095,00c
db 0b5,0b5
db 0a5,095
db 0b5,0b5
db 0a5,00c
db 0a5,0b5
db 00c,095
db 0a3,0b3
db 093,00c
db 0b3,0b3
db 0a3,093
db 0b3,0b3
db 0a3,00c
db 0a2,0a3
db 0b3,00c
db 0a0,0b0
db 090,00c
db 0b0,0b0
db 0a7,090
db 0b0,0b7
db 0a7,00c
db 0a3,0a7
db 0a7,00c
db 0b0,0b0
db 0b3,00c
db 0b2,0a0
db 0ab,090
db 0a7,0b7
db 0a3,00c
db 0a0,0b0
db 0b0,090

notes:

db 0157/4, 016b/4, 0181/4, 0198/4, 01b0/4, 01ca/4
db 01e5/4, 0202/4, 0220/4, 0241/4, 0263/4, 0287/4,   0

pelu1txt:
db "VOi iSUKKi kULTA!!! MiNULLA oLiSi kYSYMYS!!!!!",0

pelu2txt:
db "OPETTAJA SANO ET NYT OLIS NIINKU VUOSI 1997!!! ONX NYT TULEVAISUUS !??!?",0

kultu_lgt EQU isu1txt-kultu-1
kultu:
db "VOi kYLLé, kULTAiNEN pOiKANi, ",0
isu1txt:
db "NYT ON TULEVAISUUS!!!1!",0

pelu3txt:
db "MUTTA iSU!!! kUN nYT kERTA oN TULEVAISUUS, NIiN EiX MEiDéN PiTéiS HANKKiA       "

isu2txt:
db "mEiDéN tODELLAKiN OLiSI AJANKOHTAiSTA HANKKiA     "
tulevaisuusvalineet:
db "TuLEVAiSUUDEN iHMiSEN kODiN pERUSvéLiNEET!!!!",0

pelu4txt:
db "iSi rAKKAANi!!! oLLAANX mE NYT ELiTEiTé?!?!?",0

isu3txt:
db "mE oLemME tOsi ELiTEiTé!1!!!11",0

lopputekstit:
db "tHiS pWp pRoDucTioN iS dEdIcAtED To ALl oUR fANZzZz!!! aLl cOde, DeSiGn, m00SIX "
db "& gFX aRE bY ViZNuT!! oUR gReETiNGZ g0 tO aLL dA tHeSe wELl_kNoWN sCEnE pEoPLE: "
db "zELEX LunA tWN nOSfE gRAVe iDCe hUbe o-mETH LoBOToMY mAGnA hUpEMAN bLUNT mCGuRK "
db "gRENdEL w0De dAMAq tREViZE sUCkHo xT zORLiM vAStAToR mNC kAJTZu yAz eXcoRCiST/TG"
db "xAZTuR sWAG gO0ZH sCALLOp sTaRD0M wEDgE qUTALE zEtoR uNDEaD BRiS puHELiN kEKSi  "
db "f0R$ET t0P$Y 216 wOG",0

initstring:
db 020,024,003,0ff,00f,000,000,001      ;002

lopputxt2:
db "Kaakkois-mongolialaisessa horoskoopissa vuosi 1997 on ELiTEN vuosi.",0

                        uncrunch:
push dx

mov dx,di
xor ax,ax

loopa:  lodsb
        cmp al,32
        jc fore
        stosw
next:   loop loopa
done:   pop dx
        ret

fore:   cmp al,16       ; 0..15 change foreground
        jnc bckgr
        and ah,0f0
        or ah,al
        jmp next

bckgr:  cmp al,24       ; 16..8 change background
        jz nxline       ; 24 = nextline
        jnc multiout
        sub al,16
        and ah,08f
        add al,al
        add al,al
        add al,al
        add al,al
        or ah,al
        jmp next

nxline: add dx,160
        mov di,dx
        jmp next

multiout:
        cmp al,25
        mov bx,cx
        lodsb
        mov cl,al
        mov al,32
        jz startoutput
        lodsb
        dec bx

startoutput:
        xor ch,ch
        inc cx
        rep stosw
        mov cx,bx
        dec cx
        loopnz loopa
        jmp done

PELU_LGT EQU 95
PELU:
        DB      15,16,' ',8,'()—()',24,25,2,4,'≥',24,' ﬁ',26,5,'€‹‹‹'
        DB      24,' ',14,20,'‹‹‹',1,'‹‹',24,7,16,'ﬁ€€',1,'€€',15,17,'˙'
        DB      24,7,16,'€€€',17,'€‹‹',24,16,26,6,'€‹',24,'ﬁ€€‹',24,'ﬁ'
        DB      26,4,'€‹',4,23,'ﬂ',24,16,' ',7,26,4,'€ﬂ',24,'  €€€',24
        DB      ' ',26,4,'€',24

ISU_LGT EQU 205
ISU:
        DB      15,16,25,5,7,'‹',6,23,'∞∞ ∞∞∞  ∞∞',0,'ﬂ',24,16,25,4,7
        DB      'ﬁ',23,'  ',4,'(',2,'-',4,')  (',2,'-',4,')  ',7,16,'›'
        DB      24,25,4,23,25,5,4,'˙˙',25,5,24,16,25,4,23,' ',12,') '
        DB      ' ',0,'‹',6,'‹',0,'‹',15,'‹',6,'‹',0,'‹  ',12,'( ',24
        DB      16,25,4,7,'ﬁ',23,'  ',0,'ﬂ',6,'ﬂ',15,'ﬂ',0,'ﬂ',6,'ﬂ',0
        DB      'ﬂ',6,'ﬂ',0,'ﬂ  ',7,16,'›',24,8,26,4,'‹',23,'∞∞∞',26,6
        DB      '±',26,3,'∞',16,26,4,'‹',24,23,26,4,'€∞∞∞',26,4,'±≤',26
        DB      4,'∞',26,4,'€',24,'€€€±',26,3,'∞±±±≤≤≤',26,5,'∞',26,3
        DB      '€',24,'€€∞∞∞€∞∞±±≤≤≤±',26,4,'∞',26,4,'€',24,26,7,'€'
        DB      '±',26,4,'≤',26,9,'€',24

LELUT_LGT EQU 235
LELUT:
        DB      15,16,24,24,24,24,24,24,24,24,25,29,7,26,8,'‹',24,25,26
        DB      26,13,'€',24,25,28,26,7,'ﬂ€€€',25,2,'ﬂ',26,8,'€',24,25
        DB      2,13,'MULTI MEDIA LAITE',25,17,7,'€€€',26,4,'‹€€€',24
        DB      25,'<',13,'GORVETTE AUTO',24,25,4,19,' ',0,'_  ',16,' '
        DB      ' ',3,26,5,'‹',25,15,13,'AVARUUS ALUS',24,25,4,19,' '
        DB      0,'ƒƒ ',16,' ',3,'€',25,5,'€',25,'*',12,'‹‹',26,10,'€'
        DB      '‹‹',24,25,4,19,' ',0,'˙ ',16,' ',3,'€',25,5,'€',25,'&'
        DB      12,'‹‹',26,17,'€',24,25,4,19,25,3,16,'  ',3,'ﬂﬂ€€ﬂﬂ',25
        DB      '#',12,'‹‹',26,5,'€ﬂ',7,'‹‹',12,'ﬂ',26,3,'€ﬂ',7,'‹‹',12
        DB      'ﬂ',26,3,'€›',24,25,9,3,26,7,'ﬂ',25,'+',7,'ﬂﬂ',25,5,'ﬂ'
        DB      'ﬂ',24,24,24,24,24,24,24,24

TUVLOGO_LGT EQU 429
TUVLOGO:
        DB      0,20,26,10,'∞',16,'  ',20,26,3,'∞',16,' ',20,'∞∞∞',16
        DB      '  ',20,26,9,'∞',16,25,2,20,26,3,'∞',16,'  ',20,'∞∞∞'
        DB      16,' ',20,'∞∞∞',16,' ',20,26,5,'∞',16,' ',20,'∞∞∞',16
        DB      '  ',20,'∞∞∞',16,' ',20,'∞∞∞',16,'  ',20,'∞∞∞',16,' '
        DB      20,26,4,'∞',24,25,6,16,25,6,20,25,2,16,' ',20,25,2,16
        DB      '  ',20,25,2,16,25,9,20,25,2,16,'  ',20,25,3,16,25,4,20
        DB      25,2,16,25,3,20,25,2,16,'  ',20,25,2,16,' ',20,25,2,16
        DB      '  ',20,25,2,16,' ',20,25,2,24,16,25,2,12,20,26,3,'∞'
        DB      16,'  ',20,'∞∞∞',16,'  ',20,'∞∞∞',16,' ',20,'∞∞∞',16,' '
        DB      ' ',20,26,5,'∞',16,'  ',20,'∞∞∞',16,' ',20,'∞∞∞',16,' '
        DB      ' ',20,26,4,'∞',16,' ',20,'∞∞∞',16,' ',20,26,5,'∞',16
        DB      ' ',20,'∞∞∞',16,'  ',20,'∞∞∞',16,' ',20,26,7,'∞',16,' '
        DB      20,26,4,'∞',24,16,25,2,20,26,3,'±',16,'  ',20,26,7,'±'
        DB      16,' ',20,'±±±',16,25,3,20,'±±±',16,25,2,20,26,5,'±',16
        DB      '  ',20,26,5,'±',16,' ',20,'±±±',16,25,2,20,26,3,'±',16
        DB      ' ',20,26,7,'±',16,' ',20,26,7,'±',16,'  ',20,26,3,'±'
        DB      24,16,25,2,20,26,3,'€',16,'  ',20,26,7,'€',16,' ',20,26
        DB      5,'€',16,' ',20,26,4,'€',16,' ',20,26,4,'€',16,'  ',20
        DB      '€€€',16,'  ',20,'€€',16,' ',20,'€€€',16,' ',20,26,5,'€'
        DB      16,' ',20,26,7,'€',16,' ',20,26,7,'€',16,' ',20,26,4,'€'
        DB      24,24,16,25,24,13,'˙ - tHE pWp 1997 pRODUCTiON -˙',24

ELITEITA_LGT EQU KAUPPA-ELITEITA        ; olikohan tuo 242
ELITEITA:
        DB      15,16,25,24,11,'€€€',25,24,'€€  ',26,9,'€  €€',25,2,'€'
        DB      '€',24,25,14,'€€€',25,6,26,3,'€  ',26,9,'€',25,10,'€'
        DB      '€€',25,4,'€€€',25,4,'€€€',25,2,'€€',24,25,2,26,8,'€'
        DB      25,2,'€€€',25,15,'€€€',25,22,'€€€',24,25,2,'€€',25,9,'€'
        DB      '€€',25,7,'€€',25,5,'€€€',25,3,26,9,'€  €€',25,4,'€€'
        DB      '€  ',26,8,'€',24,25,2,26,5,'€',25,5,'€€€',25,7,'€€',25
        DB      5,'€€€',25,3,'€€€',25,8,'€€',25,4,'€€€',25,9,'€€',24,' '
        DB      ' €€',25,10,26,4,'€',25,13,'€€€',25,3,26,5,'€',25,5,'€'
        DB      '€',25,3,'€€€',25,3,26,8,'€',24,'  ',26,10,'€  ',26,14
        DB      '€',25,3,'€€€',25,3,'€€€',25,14,'€€€  €€',25,7,'€€',24
        DB      25,'&',26,14,'€',25,4,'€€€  ',26,12,'€',24


KAUPPA_LGT EQU 161
KAUPPA:
        DB      13,16,25,7,15,'˛',25,10,'˛',24,25,7,'˙',25,10,'˙',24,25
        DB      7,'˛',25,10,'˛',24,25,7,'˙',25,10,'˙',24,25,7,11,'˛ '
        DB      '⁄¬',26,4,'ƒ¬ø ˛',24,25,7,'˙ƒ¥≥KASSA≥√ƒ˙',24,25,9,'¿'
        DB      '¡',26,4,'ƒ¡Ÿ',24,24,25,18,12,'ﬂ€‹',24,25,17,'‹€€€',24
        DB      25,18,'‹€€',24,25,11,7,26,3,'€',25,3,12,'€',24,25,10,7
        DB      26,4,'€',25,2,2,'‹€‹‹',24,25,9,7,26,5,'€ ',2,'ﬂ',26,4
        DB      '€',24,8,26,8,'~',7,26,6,'€',8,'~~',2,26,4,'€',8,26,'8'
        DB      '~',24,24,24,24,24,24,24,24,24,24,24

dl128in:
jcxz >c9
         push ax,bx
        l1: lodsw
            or ah,bl
            stosw
            loop l1
          pop bx,ax
        c9:
ret

