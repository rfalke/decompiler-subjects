;SCALE
;yep, in other words that's my 'silnice' intro remix
;but it's not the same - at least in 10% of code:)
;'hope it can compete
.386
crs segment use16
assume es:crs,cs:crs,ss:crs,ds:crs
org 100h
all:

HEIGHT    EQU 160
SCRWIDTH  EQU 320
SCRHEIGHT EQU 200

 mov  al,13h
 int  10h
 push 0A000h
 pop  es
 @1:
 mov  bx,HEIGHT+(SCRHEIGHT-HEIGHT)*SCRWIDTH  ;BX - begin-of-line position
 inc  dh
 mov  dl,HEIGHT		;DL - loop variable and scale factor too
@2:
 mov  si,offset buf
 mov  ah,dh
 add  ah,dl
; and  ah,7Fh
 cmp  ah,HEIGHT
 jb   @2b
 sub  ah,HEIGHT
@2b:
 mov  al,0
 add  si,ax

 mov  di,bx
 mov  cx,00FFh
@3:
 add  al,dl		;scale factor
 jnc  @4
 inc  si
 dec  cx
@4:
 movsb
 dec  cx
 jns  @3
 add  bx,SCRWIDTH-1
 dec  dl
 jnz  @2

 in   al,60h
 dec  al
 jnz  @1
 retn

 buf    db 256*HEIGHT DUP (?)

crs ends
end all
