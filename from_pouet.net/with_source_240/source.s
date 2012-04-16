.386
crs segment use16
assume es:crs,cs:crs,ss:crs,ds:crs
org 100h
all:
 
 mov  al,13h
 int  10h
;dodela sinusovou tabulku
 mov  si,offset sine+10h
 mov  bx,si
 mov  cl,10h
@2kvadrant:
 dec  si
 mov  al,ds:[si] 
 mov  ds:[bx],al
 inc  bx
 loop @2kvadrant
 mov  cl,20h
@3a4kvadrant:
 lodsb
 neg  al
 mov  ds:[bx],al
 inc  bx
 loop @3a4kvadrant
 push 0A000h
 pop  es
 push 0040h
 pop  fs
@main:
 mov  si,006Ch
 mov  ah,fs:[si]
@tick0:
 cmp  ah,fs:[si] 
 je   @tick0
;nakresli vrchni caru
 inc  bx
 and  bx,3Fh
 mov  si,offset sine
 mov  cl,80h
 sub  cl,ds:[si+bx]
 mov  al,29
 mov  di,136*320
 rep  stosb
 mov  al,22
 mov  cl,0Fh
 rep  stosb
 mov  al,bl
 and  al,00000100b
 add  al,22
 stosb
 stosb
 mov  al,22
 mov  cl,0Fh
 rep  stosb
 mov  cx,137*320
 sub  cx,di
 mov  al,29
 rep  stosb
;nakresli zbyvajici cary
 push ds
 push es
 pop  ds
 mov  di,199*320
 mov  cl,63
@cary:
 push cx
 push di
 mov  si,di
 mov  cx,320
 sub  si,cx
 rep  movsb	;skopiruje radku
 or   byte ptr ds:[si],0
 jz   @cary9
 mov  ah,22
@l1:
 lodsb
 cmp  ah,al
 jne  @l1
 mov  ds:[si-3],ah
 mov  ds:[si-2],ah
 add  si,310
@l2:
 mov  al,ds:[si]
 dec  si
 cmp  ah,al
 jne  @l2
 mov  ds:[si+2],ah
 mov  ds:[si+3],ah
@cary9:
 pop  di
 sub  di,320
 pop  cx
 loop @cary 
 pop  ds
;vykresli prvni radek hvezd
 xor  di,di
 push bx
 mov  bx,319
@hvezdy1:
 mov  ah,0
 in   al,40h
 cmp  al,248
 jb   @hvezdy2
 mov  ah,al
 and  ah,0Fh
 or   ah,10h
@hvezdy2:
 mov  es:[bx],ah
 dec  bx
 jnz  @hvezdy1
 pop  bx 
 push ds
 push es
 pop  ds
 xor  ah,ah
 mov  cl,135
 mov  di,135*320
@hvezdyscroll:
 mov  si,di
 push cx
 mov  cx,320
 sub  si,cx
 dec  si
 in   al,40h
 and  al,3
 add  si,ax
 rep  movsb
 sub  di,640
 pop  cx
 loop @hvezdyscroll
 pop  ds
;ceka na Escape a kdyz je stisknut, tak skonci
 in   al,60h
 dec  al
 jnz  @main
 int  16h
 mov  ah,12h
 mov  bl,33h
 int  10h
 retn

sine	 db   000h,003h,006h,009h,00Ch,00Eh,011h,013h,015h,017h,019h,01Bh,01Ch,01Dh,01Eh,01Eh

crs ends
end all
