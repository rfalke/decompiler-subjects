.386
cra segment use16
assume es:cra,cs:cra,ss:cra,ds:cra
org 100h
all:

;nastavi x-mode 256x256
 mov  ax,13h
 int  10h
 mov  dx,3D4h
 mov  al,11h
 out  dx,al
 mov  dl,0D5h
 in   al,dx
 and  al,07Fh
 out  dx,al
 lea  si,x256x256data
@smycka:
 lodsb
 or   al,al
 jz   @ven
 mov  dl,al
 lodsb
 out  dx,al
 jmp  @smycka
@ven:
; for(i=0;i=31;i++) {
;  setRGB(00+i, i,   0,   0);
;  setRGB(32+i, 31-i,0,   0);
;  setRGB(64+i, 0,   0,   i);
;  setRGB(96+i, 0,   0,31-i); }
 xor  ax,ax
 mov  dl,0C8h
 mov  cl,07Fh
@paleta:
 mov  bl,cl
 and  bl,1Fh
 mov  bh,1Fh
 sub  bh,bl     ;bh=31-i bl=i
 test cl,20h
 jz   @paleta1
 xchg bh,bl
@paleta1:
 test cl,40h
 jz   @paleta2
 xchg ah,bl
@paleta2:
;nastavi barvu o odtinech bl,0,ah
 mov  al,cl
 out  dx,al
 inc  dx
 mov  al,bl
 out  dx,al
 mov  al,bl ;0
 out  dx,al
 mov  al,ah
 out  dx,al
 dec  dx
 loop @paleta

;zacne show (bx=0, es bude segment, bx offset do videopameti (bl=x, bh=y))
 push 0A000h
 pop  es
 mov  dl,0DAh	;dx=03DAh (doufam:)

@mainloop:
 xor  di,di
 mov  ch,0
@1:
 mov  cl,0
@2:
 and  al,63
 stosb
 inc  di
 add  al,i
 inc  cl
 jnz  @2
 inc  di
 inc  ch
 jnz  @1
 inc  i

 mov  di,1
 mov  ch,0
@3:
 mov  cl,0
@4:
 and  al,63
 or   al,64
 stosb
 inc  di
 sub  al,j
 inc  cl
 jnz  @4
 dec  di
 inc  ch
 jnz  @3
 inc  j

@retrace:
 in   al,dx
 test al,8
 jz   @retrace
 in   al,60h
 dec  al
 jnz  @mainloop
;ukonceni
 mov  ax,3
 int  10h
 mov  ah,4Ch
 int  21h
 retn

x256x256data    db 0C2h,0E3h
 db 0D4h,000h
 db 0D5h,05Fh
 db 0D4h,001h
 db 0D5h,03Fh
 db 0D4h,002h
 db 0D5h,040h
 db 0D4h,003h
 db 0D5h,082h
 db 0D4h,004h
 db 0D5h,04Ah
 db 0D4h,005h
 db 0D5h,09Ah
 db 0D4h,006h
 db 0D5h,06Fh
 db 0D4h,007h
i db 0D5h
j db 0B2h
 db 0D4h,008h
 db 0D5h,000h
 db 0D4h,009h
 db 0D5h,061h
 db 0D4h,010h
 db 0D5h,028h
 db 0D4h,011h
 db 0D5h,08Ah
 db 0D4h,012h
 db 0D5h,0FFh
 db 0D4h,013h
 db 0D5h,020h
 db 0D4h,014h
 db 0D5h,040h
 db 0D4h,015h
 db 0D5h,007h
 db 0D4h,016h
 db 0D5h,01Ah
 db 0D4h,017h
 db 0D5h,0A3h
 db 0C4h,001h
 db 0C5h,001h
 db 0C4h,003h
 db 0C5h,000h
 db 0C4h,004h
 db 0C5h,00Eh
 db 0CEh,005h
 db 0CFh,040h
 db 0CEh,006h
 db 0CFh,005h
 db 000h

cra ends
end all
