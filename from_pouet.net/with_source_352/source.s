.386
cra segment use16
assume es:cra,cs:cra,ss:cra,ds:cra
org 100h
all:

 mov  al,13h
 int  10h
 push 0A000h
 pop  es
 push 0040h
 pop  fs
 mov  al,0
 mov  bx,0038h
 call @setpal		;paleta
 mov  al,0Fh
 xor  bx,bx
 call @setpal		;paleta
 mov  dx,030Fh
 call @gotoxy
 mov  dx,offset intro1
 call @print
 mov  dx,070Bh
 call @gotoxy
 mov  dx,offset intro3
 call @print
 mov  dx,0908h
 call @gotoxy
 mov  dx,offset intro4
 call @print
 mov  dx,0E0Dh
 call @gotoxy
 mov  dx,offset intro5
 call @print
 mov  cx,30h
 call @wait		;ceka
 mov  dx,050Dh
 call @gotoxy
 mov  dx,offset intro2
 call @print
 mov  cx,50h
 call @wait		;ceka
 mov  cx,32000
 xor  ax,ax
 mov  di,ax
 rep  stosw

 mov  di,4BE4h
 mov  si,offset datas
 call @LoadBitmap	;bitmapa
 mov  cl,28h
 call @wait		;ceka
 mov  dx,050Ah
 call @gotoxy
 mov  dx,offset msg1
 call @print		;"I'm fading"
 mov  dx,060Ah
 call @gotoxy
 mov  dx,offset msg2
 call @print		;"like a flower"
 mov  cl,38h
 call @wait		;ceka
 mov  dx,050Ah
 call @gotoxy
 mov  dx,offset msg3
 call @print		;"I'd like more"
 mov  dx,060Ah
 call @gotoxy
 mov  dx,offset msg4
 call @print		;"I'm able to"
 mov  cl,38h
 call @wait		;ceka
 mov  di,3200h
 mov  ch,14h
 xor  al,al
 rep  stosb
 mov  cl,18h
 call @wait		;ceka
 mov  scrw,04Dh
 mov  nextLn,0F3h
 mov  di,23574
 mov  si,offset ruka
 call @LoadBitmap	;bitmapa
 mov  cl,12h
 call @wait		;ceka
 mov  byte ptr es:[24465],0
 mov  cl,14h
 call @wait		;ceka
 mov  scrw,0A9h
 mov  nextLn,097h
 mov  di,4BE4h
 mov  si,offset datas
 call @LoadBitmap
 mov  cl,40h
 call @wait		;ceka
 mov  di,153+100*320
 mov  cl,9
@erekce:
 push cx
@erekce2:
 mov  word ptr es:[di],0F0Fh
 sub  di,320
 loop @erekce2
 inc  cx
 inc  cx
 call @wait
 pop  cx
 loop @erekce
 mov  di,151+64*320 
 mov  cl,2
@krev:
 push cx
 mov  dword ptr es:[di],28042804h
 add  di,319
 neg  cx
 add  cx,6
 shl  cl,1
 call @wait
 pop  cx
 loop @krev
 mov  bh,0
 mov  cl,37h
@fadedown:
 mov  bl,cl
 mov  al,bh
 call @setpal
 push cx
 and  cl,1
 inc  cl
 call @wait
 pop  cx
 loop @fadedown 
 mov  dx,070Ch
 call @gotoxy
 mov  dx,offset intro6
 call @print
 mov  cx,30
 call @wait
@end:
 xor  ah,ah
 int  16h
 mov  ah,4Ch
 int  21h
;ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß
@LoadBitmap:
 xor  bh,bh
 add  di,nextLn
@LoadBitmap2:
 mov  cl,al
 lodsb
 or   al,al
 jz   @LoadBitmap3
 mov  cl,al
 add  bh,al
 mov  al,ah
 rep  stosb
 cmp  bh,scrw
 jae  @LoadBitmap
 xor  ah,0Fh
 jmp  @LoadBitmap2
@LoadBitmap3:
 ret

@setpal:
;nastavi barve AL paletu BH+BL,BL,BL
 push dx
 push bx
 mov  dx,3C8h
 out  dx,al
 inc  dx
 mov  al,bl
 add  al,bh
 out  dx,al
 mov  al,bl
 out  dx,al
 out  dx,al
 pop  bx
 pop  dx
 ret

@gotoxy:
;prejde na souradnice DL,DH.
 push ax
 push bx
 mov  ah,2
 mov  bh,0
 int  10h
 pop  bx
 pop  ax
 ret

@print:
;vytiskne string na ES:DX, koncici znakem '$'
 push ax
 mov  ah,9
 int  21h
 pop  ax
 ret

@wait:
;ceka CX ticku
 mov  dh,fs:[006Ch]
@wait2:
 mov  dl,fs:[006Ch]
 cmp  dl,dh
 je   @wait2
 loop @wait
 ret

scrw    db   0A9h
nextLn  dw   0097h
datas	db   06Ah,00Fh,030h,063h,01Ch,02Ah,05Eh,023h,028h,05Dh,026h,026h,05Bh,029h,025h,05Ah
 db   02Ah,025h,058h,02Bh,026h,059h,029h,027h,058h,028h,029h,057h,027h,02Bh,055h,01Bh
 db   006h,009h,02Ah,059h,012h,00Eh,008h,028h,058h,00Fh,013h,009h,026h,058h,00Bh,019h
 db   00Dh,020h,058h,006h,020h,00Ch,01Fh,07Dh,00Fh,01Dh,07Ah,012h,01Dh,079h,013h,01Dh
 db   078h,015h,01Ch,077h,017h,01Bh,077h,018h,01Ah,077h,013h,001h,005h,019h,078h,011h
 db   003h,005h,018h,078h,011h,004h,005h,017h,078h,010h,007h,004h,016h,078h,010h,008h
 db   004h,015h,078h,00Fh,009h,005h,014h,078h,00Fh,004h,003h,004h,004h,013h,078h,00Eh
 db   005h,003h,005h,005h,011h,078h,00Eh,004h,003h,007h,005h,010h,078h,00Eh,004h,003h
 db   009h,004h,00Fh,077h,00Eh,005h,003h,00Ah,004h,00Eh,076h,00Eh,006h,003h,00Ah,004h
 db   00Eh,075h,00Eh,006h,004h,00Bh,004h,00Dh,073h,00Eh,008h,003h,00Ch,005h,00Ch,071h
 db   010h,008h,003h,00Dh,004h,00Ch,06Eh,012h,008h,003h,00Eh,004h,00Ch,069h,016h,008h
 db   003h,010h,004h,00Bh,066h,017h,00Ah,003h,010h,004h,00Bh,061h,019h,00Ch,003h,011h
 db   004h,00Bh,05Bh,01Dh,00Eh,003h,012h,004h,00Ah,059h,01Eh,00Eh,004h,012h,004h,00Ah
 db   057h,01Eh,010h,003h,013h,005h,009h,055h,01Dh,012h,003h,015h,004h,009h,053h,01Ch
 db   014h,004h,015h,004h,009h,04Eh,020h,003h,00Ch,005h,004h,017h,004h,008h,047h,00Eh
 db   002h,015h,004h,015h,018h,004h,008h,040h,00Eh,00Ah,013h,003h,016h,01Ah,004h,007h
 db   03Ah,00Dh,00Eh,015h,003h,016h,01Bh,006h,005h,035h,00Bh,011h,009h,001h,00Eh,002h
 db   017h,01Bh,008h,004h,02Fh,00Bh,012h,009h,007h,009h,005h,017h,01Ch,001h,002h,006h
 db   003h,02Ch,009h,013h,009h,004h,006h,00Ah,01Bh,01Ch,002h,002h,007h,002h,029h,008h
 db   012h,009h,009h,008h,001h,022h,01Bh,002h,004h,002h,001h,001h,001h,002h,001h,026h
 db   007h,012h,00Ah,00Ch,003h,002h,01Dh,005h,003h,022h,002h,001h,002h,001h,001h,001h
 db   024h,006h,012h,009h,00Fh,003h,005h,00Bh,016h,003h,022h,002h,001h,002h,002h,023h
 db   005h,011h,008h,013h,003h,007h,002h,001h,003h,019h,004h,028h,022h,004h,011h,007h
 db   016h,003h,00Ah,003h,01Ah,003h,028h,021h,005h,00Fh,006h,018h,003h,00Bh,003h,01Bh
 db   003h,027h,020h,005h,00Eh,006h,019h,004h,00Bh,003h,01Ch,003h,026h,01Fh,005h,00Eh
 db   006h,01Ah,004h,00Bh,003h,01Ch,004h,025h,01Eh,005h,00Eh,005h,01Ch,003h,00Bh,004h
 db   01Dh,003h,025h,01Dh,005h,00Eh,005h,01Dh,003h,00Bh,003h,01Eh,003h,025h,01Ch,006h
 db   00Dh,005h,01Eh,003h,00Bh,003h,01Eh,003h,025h,01Ah,008h,00Dh,004h,01Eh,004h,00Bh
 db   003h,01Eh,004h,024h,019h,009h,00Ch,004h,01Fh,003h,00Ch,003h,01Fh,003h,024h,019h
 db   008h,00Dh,004h,01Fh,003h,00Ch,003h,01Fh,004h,023h,011h,00Fh,00Dh,004h,020h,003h
 db   00Ch,003h,020h,003h,023h,005h,01Bh,00Dh,004h,01Fh,003h,00Ch,003h,021h,003h,023h
 db   003h,01Dh,00Ch,005h,01Fh,003h,00Ch,003h,021h,003h,023h,001h,01Eh,00Bh,007h,02Eh
 db   003h,021h,003h,023h,001h,01Ch,00Bh,00Ah,02Dh,003h,022h,003h,022h,002h,018h,00Ch
 db   00Ch,02Dh,003h,022h,002h,023h,003h,014h,00Eh,00Dh,02Dh,003h,047h,005h,006h,013h
 db   014h,02Dh,003h,047h,01Ah,017h,02Fh,003h,046h,017h,019h,030h,003h,046h,010h,01Ch
 db   07Dh,00Fh,01Ah,080h,00Fh,019h,081h,00Eh,015h,086h,00Fh,011h,089h,010h,00Dh,08Ch
 db   012h,009h,0h
intro1	db   'Carlos is$'
intro2	db   'absolutely NOT$'
intro3	db   'proud to present$'
intro4	db   'his 1.3 kB intro called$'
intro5  db   'DEATH BY VIAGRA$'
intro6	db   'THE END$'
msg1	db   'Oh, I',27h,'m fading$'
msg2	db   'like a flower.$'
msg3	db   'Now I',27h,'d like more$'
msg4	db   'I',27h,'m able to.  $'
ruka    db   007h,002h,001h,00Bh,019h,00Dh,012h,004h,003h,003h,006h,020h,00Ch,011h,003h,002h
 db   003h,001h,026h,00Fh,00Fh,002h,002h,028h,012h,00Fh,002h,003h,004h,002h,020h,013h
 db   00Fh,001h,004h,002h,003h,020h,015h,00Eh,001h,008h,01Fh,018h,00Dh,001h,007h,01Eh
 db   01Bh,00Ch,001h,007h,01Ch,018h,001h,005h,00Bh,001h,009h,018h,019h,003h,005h,00Ah
 db   002h,00Ah,014h,008h,002h,011h,004h,005h,009h,003h,00Bh,010h,008h,004h,010h,007h
 db   004h,008h,006h,009h,00Dh,008h,006h,010h,008h,004h,007h,009h,009h,008h,007h,009h
 db   00Fh,009h,005h,006h,00Ch,007h,005h,008h,00Ah,00Fh,004h,003h,004h,004h,005h,00Eh
 db   007h,001h,008h,00Ch,00Eh,005h,003h,005h,005h,003h,010h,00Ch,00Eh,00Eh,004h,003h
 db   007h,005h,002h,012h,008h,010h,00Eh,004h,003h,009h,004h,001h,014h,004h,011h,00Eh
 db   005h,003h,00Ah,003h,0h
cra ends
end all
