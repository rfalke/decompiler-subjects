;;
;;;             tWn-uNOFFiCIAL-sYnTTŽRi-iNTRO bY ViZNUT

;;  ;    ;      alunperin ihan muuhun tarkotukseen :)

;;;                  ;         features:

;;                      - sinewave scroll with a mindblasting text
;;;_____________        - magical 5d almost-like-tunnel effect
;;;   __________)       - next generation 2-channel adlib music
;;       ~_\            - intelligent interrupt handling
;; ___  |_|             - interrupt-controlled dezign timer
;;;' ____/              - several exit keys (shift, alt etc.etc)
;;;                     - minimal demand of computing resources
;;                        (size 510bytes, 8088 compatible code)

;;;;;;;;!!!!!!! copyright 12/96 viznut/pwp !!!!!!!!!;;;;;;;;;;;

;;;;;;;;;;;;;;; modifikationz 2/97 for twn geburtstag |__;~~;__
;;;;;;;;;;;;;;  tried to do some bugfixez 4/97           ;__;  |

;;;     o       vheikkil@hytti.uku.fi
;;     \_/      viznut@freenet.hut.fi
;;;    / \      www.hytti.uku.fi/~vheikkil

; Alkuper„inen 512tavua
; Poistettu "turhaa k”kk”„" -> 503 tavua
; Bugfiksattu -> takas 512 :)
;                olen onnellinen  -> 510

                ;;; vaatii 086/ega/adlib ;;;
;  ;;  ;;;  ;;;;;;; k„„nnett„v„ a86:lla! ;;;;;;;  ;;;  ;;  ;  .
                ;;; jos et omaa niin HYI ;;;

                  assume cs:cseg,ds:cseg

KORKEUS   EQU 50        ; <-;- db                        \
                          ;;;  qp                       __o__
 ;                         ;                             / \
;;;                                                      |_ |_
;;;;;;;;;;;;;;;;;;;;;; pREPARATiONS ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                                                           ;;;;;
mov si,offset oldint    ; sis„lt„„ arvot 1112 ja 3508      ;;;;;

lodsw                   ; lue vanha vekki (3508)           ;;;;;
int 021                                                     ;;;
lodsw                                                       ;;;

mov w[si-4],bx          ; alkup.intruptin osote jumppiin     ;
mov w[si-2],es
                                                             ;
int 010                 ; 1112: 8x8, 80x50. mutta fontti ei vaihdu.
                        ; mit„ v„li„ kun kaikilla
                        ; reALVgADuDEiLLA kuitenkin on 80x50 default

mov dx,offset rehook    ; hook vec8                          ;
mov ah,64               ; reprogram clock
call short func25       ; init adlib


         ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;                   ;
   ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;''';;;;;             ;;;;;```;;;;;;;;;;;      ;
  ;;;;;;;;;;o;;;;                 ;;;;o;;;;;;;;;;
    ;;;;;;;;;;;       ;;   ;;       ;;;;;;;;;;;
;.                                               .;       ;
                     MAINLOOP:
;;.                                             .;;
;;;;;;;;;;;;;;;;;;;; SCROLLER ;;;;;;;;;;;;;;;;;;;;;
                ;;;; . .__. . ;;;;

tila2:mov bx,08080
      scrollcount EQU tila2+1
      jumputus    EQU tila2+2

mov di,bx                       ; mihin kohti ruutua,
not di
add di,di                              ; ;;;;;; ;
and di,15                                 ;  ;

mov cl,3                        ; mist„ kohti stringi„?
shr bx,cl

; `-;-' ;.. . ..; `-;-' ;.. . ..; `-;-' ;.. . ..; `-;-' ;


nextchar:                       ; stringin seuraava merkki
and bx,31
mov cl,[bx+scrolltext]                       ;
;dec cx                                     ;;
mov si,cx                                ;.';;`.;
inc bx                                    ;;;;;;

mov cl,3                        ; paikanna se fontista.
shl si,cl

push bx
mov al,b[jumputus]              ; ladataan jumputuslis„t
add ax,di       ; <-- fakesiniskrolli! poista tuo 2bytez niin on tasajumpu.
cbw
xor al,ah                       ; itseisarvontapanen
mov bx,ax

push ds  ; ds=cs
lds ax,[mommoa]         ; b800, 1130
push ds  ; ds=b800

mov bh,3                ; ega specific int (1130)
int 010                 ; es:bp = pointer to the 8x8 rom font
                        ; sotkee dl:n!

;add bp,si      <- k”kitt”
;xor si,si

;;;;;;;;;;;;;;;;;;;;;;;         ;;;;;;;;;;;;;;;;;;;;;
                      ;         ;
mov dx,KORKEUS        ;         ; oli: mov dl, etcetc
l1:                   ;         ;
 es mov al,b[bp+si]   ;         ;
 mov cx,8             ;         ; oli: mov cl etcetc
 l0:                  ;         ;
   cbw                          ;
   and ah,3      ; syd„nmaski
   mov [di],ah   ; jolla piirret„„n fontin vaakarivit
   inc di             ;
   inc di             ;         ;
   shl ax,1           ;         ;
 loop l0              ;         ;
 add di,160-16        ;         ;
                                ;
;add bl,3    ; m”ss”lis„„       ;
 add bh,bl       ; jumpu        ;
 sbb si,0ffff    ; nextrow      ;
                                ;
dec dx                ;         ;
jne l1                ;         ;
                      ;         ;
;;;;;;;;;;;;;;;;;;;;;;;         ;;;;;;;;;;;;;;;;;;;;;
                                                  ;-;
pop es,ds,bx    ;-> es=b800; ds=cs                ;-;
                                                  ;-;
sub di,(KORKEUS*160)-16                           ;-;
cmp di,160                                        ;-;
jc nextchar                                       ;-;
                                                  ;-;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
  ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
     ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
          ;       ;       ;     . ;       ;
                                ;
mov di,cx                       ;`-=-=-=-=-=-=-=-=-=-=-=-=-0-. .
mov dl,3*(KORKEUS+1)            ;  dA-fIVeDiMENSIoNAL cOloRMUSSLE
                                ; aiemmin oli: mov di,15-160
                                ; ettei j„is „rsytt„v„„ palkkia
                                ; tuo kuitenkin bugittaa kun
                                ; ylin rivi kirjottuu kuuseen

mov ax,di ;~~; korvaava palkinpoisto
mov cl,15    ; 
rep stosb ;__; tyhm„„, tilaaviev„„ ja LAmEa

l1:
        mov ax,w[scrollcount]
        mov bx,dx

    mov cl,80-16
    l0:                         ; 64 merkki„ vŽRiEFEkTiŽ
        add ax,bx
        add bx,dx
        push ax
          mov al,ah
          and al,1+8+4*16       ; v„rimaskauksia
          xor al,14
          stosb
        pop ax
        inc di

        loop l0

        mov ax,cx               ; 8 merkin tyhj„t sivuille
        mov cl,16
        rep stosw

sub dl,3
jne l1

mov es,ax                   ;
es test b[1047],7          ;;;
if e jmp MAINLOOP          ;;;
;          _  _ __--__--__ o;O __--__--__ _  _           ..;
;                           ;                              ;
;;                                                        ;;
;;;;;;;;;;;;;;;;;;;;;; MAiNLOOP ENDS ;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;'    |~~                          |~~      `;;;;;;;;
;;;;;;       |~~       . . .  . . .       |~~         ;;;;;;
;;;;;;       |       .:: o o  o o ::.     |           ;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;  ;;;;;  ;;;;;                ;;;;;  ;;;;;  ;;;;;;;;;
 ;;;;;;  ;;;;;  ;;;;; uNHooK anD END ;;;;;  ;;;;;  ;;;;;;;;
  ;;;;;;;;;;;;;;;;;;;                ;;;;;;;;;;;;;;;;;;;;;
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

lds dx,[oldint]
xor ax,ax
func25:
 cli
  mov al,036                    ; reprogram timer
  out 043,al
  xor al,al
  out 040,al
  mov al,ah
  out 040,al
  mov ax,02508                  ; hook int
  int 021

        ; adlib init

        mov ax,244              ; clear adlib ram
        l0:
          call adlib
          dec ax
        jne l0

        mov si,initstring       ; init with string
        l0:
          mov ah,[si]
          inc si
        l1:
           call adlib
           inc ax
           test al,31
          jne l1
        test al,al
        jne l0

  sti
ret


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


;; laskurin m”ssel”inti

REHOOK:

push ax,ds

push cs
pop ds

add w[scrollcount],1+4*256

tila5:
  mov al,123
laskuri EQU tila5+1
  inc b[laskuri]               ; (pit„„ olla yst„v„llisi„ kellolle)

  test al,7                     ; megaplayer tick
  jne out_noplay

;;;;;;;;;;;;;;;;;;;;;;; mEGAPLAYER ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

push bx,cx,si,bp  ; <-- ..ei pusha koska koodin on oltava 8086yhtsop :)

tila3:
mov si,musa-27
        musapoint EQU tila3+1

cmp si,musa+128-27      ; loop tune
if e sub si,128

mov cx,2                ; # of channels

ntechn:                 ; load and translate note
lodsb

cmp si,musa             ; hoidetaan alusta puuttuva 27 nuottia
if c mov al,[si+63]

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

loop ntechn

mov w[musapoint],si     ; joo.

pop bp,si,cx,bx

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

out_noplay:

        ; SIS standard int scheduler - ei toimi kaikilla?
        ;     siisp„ poistettu.

        ;       no moniko oikeakaan demo pit„„ alkuper„isen
        ;       kellointerruptin kutsun ennallaan? ;)

; test al,3     ; SIS   megaplayeri palauttaa al:„„n jotain a0 tmz eli
;               ;       toimii oikein

; mov al,020    ; SIS             ; k”kitt”
; out 020,al    ; SIS

  pop ds,ax

; jne total_out ; SIS

tila4:jmp far 01112:03508
oldint EQU tila4+1

;total_out:     ; SIS
;   iret        ; SIS

notes:

db 0157/4,  0181/4,  01b0/4,    0202/4
db 0241/4,  0287/4,  0

;'in use:              .
;       notes         -|- not
;       0,2,4,7,9,b,c  +  1,3,5,6,8,a
;       v v v v v v v
;...    0 1 2 3 4 5 6


;;;;;;;;;;;;;;;;;;;;;;; aDLiB dRiVER ;;;;;;;;;;;;;;;;;;;;;;;;;;

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

initstring:
db 020,024,003,0ff,00f,000,000,001      ;002

;db 001,000,000,00f,0ff,003,024,020

;;;;;;;;;;;;;;;;;;;;;;; pATTERn dATA ;;;;;;;;;;;;;;;;;;;;;;;;;;

musa:           ; musan 27 ensimm„ist„ nuottia ovat samat kuin
                ; mitk„ 64:n p„„ss„. niit„ ei kahteen kertaan.

db     0b1,
db 0a0,0b2,
db 0b0,0b0,
db 095,0b1,
db 0a5,006,
db 0a3,0a5,
db 095,0a3,
db 0a5,0b1,
db 0a3,006,
db 095,0a3,
db 0a3,006,
db 0b1,0a1,
db 0a5,095,
db 0a3,093,
db 0a1,0a1,
db 0b1,095,
db 0a1,006,
db 0a3,093,
db 0a5,0a1,

db 094,0a4,
db 0a4,006,
db 0a2,0a2,
db 094,006,
db 0a4,0a4,
db 0a2,0a5,
db 094,0b0,
db 0a4,0a5,
db 0a0,0b0,
db 0b0,006,
db 0a3,0a3,
db 0a0,006,
db 0b0,0b0,
db 0a3,006,
db 0a0,0a3,
db 0b0,006,
db 0b1,0a1,
db 0a5,006,
db 0a3,0a5,
db 0a1,0a3,
db 0b1,095,
db 0a1,006,
db 0a3,0b1,
db 0a5,0a5,
db 0a5,093,
db 006,006,
db 0a3,0a1,
db 006,006,
db 0a1,0a1,
db 006,006,
db 0a5,0a1,
db 0a3          ; 006

mommoa:
dw 01130,0b800

scrolltext:
db "TWN 19v!!! t:ViZ   pALJoN oNNEA "

