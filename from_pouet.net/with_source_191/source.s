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
 mov  dx,3D5h
 in   al,dx
 and  al,07Fh
 out  dx,al
 lea  si,x256x256data
 mov  ax,es
 mov  ds,ax
 mov  ax,cs
 mov  ds,ax
 mov  dh,3
@smycka:
 lodsb
 or   al,al
 jz   @ven
 mov  dl,al
 lodsb
 out  dx,al
 jmp  @smycka
@ven:
;fialova paleta
 mov  dl,0C8h
 mov  cl,03Fh
@paleta:
 mov  al,cl
 out  dx,al
 inc  dx
 out  dx,al
 mov  al,0
 out  dx,al
 mov  al,cl
 out  dx,al
 dec  dx
 dec  cl
 jns  @paleta
;zacne show (bx=0, bude to offset)
 push 0A000h
 pop  es
 mov  dl,0DAh	;dx=03DAh (doufam:)
@mainloop:
 mov  al,bl
 mul  ch
 shr  ax,4
 mov  si,ax
 mov  al,bh
 mul  ch
 shr  ax,4
 xor  ax,si
 and  al,03Fh
 mov  es:[bx],al
 inc  bx
 or   bx,bx
 jnz  @mainloop
 inc  ch
@retrace1:
 in   al,dx
 test al,8
 jnz  @retrace1
;@retrace2:
; in   al,dx
; test al,8
; jz  @retrace2
 in   al,60h
 dec  al
 jnz  @mainloop
 retn

; dela vlastne toto:
; k:=0;
; repeat
;  for y:=0 to 255 do
;   for x:=0 to 255 do
;    begin
;     w:=x*k shr 4 xor y*k shr 4;
;     mem[SegA000:y shl 8+x]:=w and 63;
;    end;
;  inc(k);
;  repeat until port[$3DA] and 8<>0;
; until port[$60]=1;

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
 db 0D5h,0B2h
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
k	db 000h

cra ends
end all
