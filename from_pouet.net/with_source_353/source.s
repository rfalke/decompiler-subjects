.386

;;;;;;;;;;;;;;;; KONSTANTY (EQU)
zpomaleni EQU 0ffffh
zpomaleni2 EQU 0fffh
kolik_loopu EQU 120

;;;inkludy s makrama:

include casovac.asi

include grafika.asi

;;;;;; MAKRA

;;;makra obecna

waitkey MACRO
mov ah,1
int 21h
ENDM

;; makra lokalni

esK MACRO
mov ax,cs
mov es,ax
ENDM

esV MACRO
mov ax,0a000h
mov es,ax
ENDM

konec MACRO
mov ax,3
int 10h
mov ax,4c00h
int 21h
ENDM


demo segment use16
assume cs:demo
org 100h
start:
jmp zacatek


;;;;;;;;;;;;;;;; PROMENNE
palbuf1 db 768 dup (?)
;palbuf2 db 768 dup (?)
a dw ?
b dw ?
c dw ?
randseed dd ?
nadpis db 'DanielSoft InTrO'
nadpis_len EQU $-nadpis
;;;;;;;;;;;;;;;; FUNKCE

restorePal PROC near
xor di,di
xor eax,eax
mov cx,10000h/4
rep stosd
waitRetrace
palOut palbuf1
ret
restorePal ENDP


stmivacka PROC NEAR
velky:
 mov cx,255
 xor bp,bp
 maly:
        getpal cl,bx,si,di
        or bx,bx
        jz dal1
        dec bx
        inc bp
        dal1:
        or si,si
        jz dal2
        dec si
        inc bp
        dal2:
        or di,di
        jz dal3
        dec di
        inc bp
        dal3:
        pal cl,bx,si,di
        loop maly
 or bp,bp
 jz ven
 pockej zpomaleni
 jmp velky
ven:
ret
stmivacka ENDP


;buf1to2 PROC near
;mov si,offset palbuf1
;mov di,offset palbuf2
;mov cx,768
;esK
;rep movsb
;esV
;ret
;buf1to2 ENDP


cykliPal PROC near
jmp cykliPal_dal
cy_pal_r dw ?
cy_pal_g dw ?
cy_pal_b dw ?
cykliPal_dal:
waitRetrace
getpal 255 cy_pal_r  cy_pal_g cy_pal_b
mov cx,254
cy_pal_for:
getpal cl bx si di
inc cl
pal cl bx si di
dec cl
dec cl
jne cy_pal_for
pal 1 cy_pal_r  cy_pal_g cy_pal_b
ret
cykliPal ENDP



rnd PROC near
push edx
mov eax,randseed
mov edx,65539d
mul edx
add eax,12345h
mov randseed,eax
shr eax,16
pop edx
ret
rnd ENDP

cykli PROC near
casovac_loop_begin kolik_loopu cykl
call cykliPal
call cykliPal
casovac_loop_end cykl
ret
ENDP


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;PROG;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;
zacatek:
;;;;;;;;;;
mov ax,cs
mov ds,ax
cld
mov ax,13h
int 10h
mov ax,0a000h
mov es,ax
palIn palbuf1
mov bx,46c8h
mov eax,[bx]
mov randseed,eax


;jmp tedka ;pro ladici ucely

;;;;;;;;;;;;;;;;"DANIELSOFT LOGO"
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


obrCNST EQU 12
obrCNST2 EQU obrCNST/2

;nakresli obrazec:
mov a,319
logo_pal_a:
mov cx,199
   logo_pal_b:
    mov ax,a
    add ax,cx
    mov b,ax
    finit
    fild b
    fsqrt
    fist b
    call rnd
    xor dx,dx ; deli se dx:ax
    mov bx,obrCNST
    div bx ; v dx zbytek po deleni
    mov bx,b
    add bx,dx
    sub bx,obrCNST2
    shl bx,1
    putpixel a, cx , bl

   loop logo_pal_b
dec a
jne logo_pal_a

; napsat napis
esK
mov bp,offset nadpis   ; es:bp -> retezec
mov cx,nadpis_len ; delka retezce
mov ax,1300h    ; 13 -cislo sluzby 0 -"funkce"
mov dh,12       ; radek
mov dl,12       ; sloupec
xor bh,bh       ; videostranka
mov bl,07h      ; atribut znaku
int 10h
esV


;paleta:
mov cx,255
logo_pal_loop:
mov ax,cx
mov bx,5
mul bx
mov si,ax ; si:=cx*5
mov bx,cx
mov di,cx
sub di,100
pal cl, bx , si , di
loop logo_pal_loop

call cykli

call stmivacka
call restorePal


;;;;;;;;;;;;;;;;;;;;;VODA
;;;;;;;;;;;;;;;;;;;;;;;;;

mov cx,63d
voda_modra:
mov dx,3c8h
mov al,cl
out dx,al
inc dx
xor al,al
out dx,al
out dx,al
mov al,cl
out dx,al
loop voda_modra
mov al,63d
xor di,di
mov cx,0ffffh
rep stosb


casovac_loop_begin kolik_loopu tri

 call rnd
 mov cl,al         ;c:=random(50)+1;
 and cl,50

 call rnd
 mov di,ax
 sub di,50       ;pos:=random($ffff-50);

 call rnd
 and al,43
 add al,10       ;b:=random(53)+10;

 xor ch,ch
 rep stosb
 mov cx,100h
 @1:loop @1

casovac_loop_end tri

call stmivacka
call restorePal

;;;;;;;;;;;;;;;;;;;;;;CHAOTICKE CARY
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

casovac_loop_begin kolik_loopu ctyri

call rnd
mov cx,ax
and cx,10
mov di,ax
call rnd
rep stosb

casovac_loop_end ctyri

call stmivacka
call restorePal

;;;;;;;;;;;;;;;;;;;;;SCROLL CELE RAMKY
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

xor dx,dx

casovac_loop_begin kolik_loopu-20 pet

mov ds,dx  ;!!!! musi se obnovit ds - viz nize
xor si,si
xor di,di
mov cx,0ffffh
rep movsb
add dx,100
mov ecx,0fffffh
memka_idle:loop memka_idle

casovac_loop_end pet

mov ax,cs
mov ds,ax
call stmivacka
call restorePal

;;;;;;;;;;;DAN_TAP x*x (TV)
;;;;;;;;;;;;;;;;;;;;;;;;;;;


tedka:
xor eax,eax
xor ebx,ebx
xor ecx,ecx
xor edx,edx

mov cx,319
tv_lbla:
mov bx,199
tv_lblb:
mov eax,ebx
mul ecx
shr ax,8
putpixel cx,bx,al
dec bx
cmp bx,-1
jne tv_lblb
dec cx
cmp cx,-1
jne tv_lbla

call cykli
call cykli


call stmivacka
call restorePal

;;;;;;;;;;;DAN_TAP x*x+y*y (KOLECKA)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



xor eax,eax
xor ebx,ebx
xor ecx,ecx
xor edx,edx

mov cx,319
kola_lbla:
mov bx,199
kola_lblb:
mov eax,ebx
mul eax
mov esi,eax
mov eax,ecx
mul eax
add eax,esi
shr ax,2
putpixel cx,bx,al
dec bx
cmp bx,-1
jne kola_lblb
dec cx
cmp cx,-1
jne kola_lbla
call cykli

call stmivacka
call restorePal


;;;;;;;;;;;;;;;;;;;;
;;;;;; KONEC ;;;;;;;
;;;;;;;;;;;;;;;;;;;;

mov ax,3
int 10h
mov ax,4c00h
int 21h
demo ENDS
end start
