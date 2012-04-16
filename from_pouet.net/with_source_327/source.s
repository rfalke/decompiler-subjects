.386
code segment use16 'code'
 assume cs:code,ds:code
 org 100h
start:

sub sp,60000
mov ah,4Ah
mov bx,7000/16;(15536+10Fh)/16
int 21h

mov ax,13h
int 10h
push 0A000h
pop es

  mov ah,48h
  mov bx,4005+0Fh
  int 21h
  mov gs,ax

  mov ah,48h
  mov bx,4005+0Fh
  int 21h
  mov fs,ax
  jc ex

mov ah,9
mov dx,offset enig
int 21h

mov cx,32000
xor di,di
xor ax,ax
push es
push gs
pop es
rep stosw
pop es

xor di,di
xor si,si
mov cl,8
copel:
push di
push si
push cx
 mov cl,320/6
 yah:
 push cx
 mov al,es:[di]
 mov cl,6
 somepixs:
  push cx
  mov cl,18
  mov bx,320*35+20
  ccc:
  mov gs:[si+bx],al
  add bx,320
  loop ccc
  pop cx
  inc si
 loop somepixs
 inc di
 pop cx
 loop yah
pop cx
pop si
pop di
add si,320*18
add di,320
loop copel

mov ax,gs
mov bp,fs
call copyblock

mov ah,0
mov cl,128
l2:
call initpalette
call pal
jg l2

dec ah
mov cl,ah
l3:
call initpalette
neg cl
neg ch
dec cl
call pal
jnz l3

mov bl,1
mov cx,200
call enigma
mov bl,235
mov cl,120
call enigma
mov bl,40
mov cl,120
call enigma
mov bl,120
mov cl,40
call enigma
mov bl,128
mov cl,50
call enigma

mov bl,1
mov cl,255
call enigma
;pure animation, no bullshit

mov bx,1
mov cx,260
mlp9:
push bx
mov bx,9
call enigma2
pop bx
push cx
mov cx,bx
xor di,di
vloop:
push di
call sttmp
pop di
add di,320
loop vloop

mov cx,bx
mov di,64000
vloop2:
sub di,cx
call sttmp
sub di,320
loop vloop2
pop cx
inc bx
loop mlp9


mov bl,8
mov cl,50
mlp5:
call enigma2
loop mlp5

mov bx,8
mov cl,255
mlp8:
call enigma2
inc bh
push cx
mov dx,3c8h
mov al,bh
out dx,al
inc dx
mov cx,768
x:
in al,dx
loop x
mov cl,3
pall:
in al,dx
dec al
jns alok1
inc al
alok1:
out dx,al
loop pall
pop cx
loop mlp8

ex:
mov ax,3
int 10h
mov ah,9
mov dx,offset greets
int 21h
int 20h
;--------- D A T A ----------
enig db 'ENIGMA$'
greets db '"Enigma" by Cola/JoIn$'
;----- D A T A  E N D D -----
enigma proc
enigmal:
push cx
xor di,di
mov cx,64000
l1:
call enx
mov es:[di],dl
inc di
loop l1

mov ax,es
mov bp,gs
call copyblock

mov ah,1
int 16h
jnz ex
pop cx
loop enigmal
ret
enigma endp


enigma2 proc
push cx
mov di,320*35+20
mov cx,320*130
l12:
call enx
mov dh,fs:[di]
test dh,0FFh
jz skipix
mov es:[di],dl
skipix:
inc di
loop l12

mov ax,es
mov bp,gs
call copyblock

mov ah,1
int 16h
jnz ex
pop cx
ret
enigma2 endp


pal proc near ;bl-indx   bh-r    cl-g   ch-b
mov dx,3c8h
mov al,bl
out dx,al
inc dx
mov al,bh
out dx,ax
mov al,cl
out dx,ax
mov al,ch
out dx,al
inc ah
ret
pal endp

initpalette proc
mov bl,ah  ;
push ax    ;
shr ah,1   ;
mov cl,ah  ;
shl ah,1   ;
mov ch,ah  ;
pop ax     ;
ret
initpalette endp

copyblock proc
;AX - source, BP - dest
;uses si,di,cx
  push ds
  push es
  mov cx,32000
  xor di,di
  xor si,si
  mov ds,ax
  mov es,bp
  rep movsw
  pop es
  pop ds
  ret
copyblock endp

enx proc
xor dx,dx
xor ah,ah
mov al,gs:[di+2]  ; right
add dx,ax
mov al,gs:[di-1]  ; left
add dx,ax
mov al,gs:[di+320]  ; down
add dx,ax
mov al,gs:[di-320]  ; up
add dx,ax
shr dx,2
sub dl,bl
ret
enx endp

sttmp proc
push cx
dowl:
mov ah,fs:[di]
test ah,0FFh
jnz skd
mov es:[di],byte ptr 0FFh
skd:
inc di
loop dowl
pop cx
ret
sttmp endp


code ends
end start



