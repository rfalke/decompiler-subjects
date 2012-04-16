
 org 100h

 _H:
 add dh,10h
 push dx
 inc ax
 jnp _H
 pop fs
 pop gs
 pop es
 mov al,13h
 int 10h
 mov dx,dvrc
 mov ah,9
 int 21h
 __pltt:
 mov dx, 0x3C8
 mov al,cl
 out dx,al
 inc dx
 cbw
 shr al,1
 out dx, al
 out dx, al
 and al,ah
 out dx, al
 loop __pltt

 push ds
 lds si,[bx]
 mov di,2190
  __Aw:
 movzx si,ch
 shl si,6
 add si,cx
 movsb
 loop __Aw
 pop ds




 _DONGu:

dec [aci]

xor bx,bx
___dfg:
mov di,402h
mov al,bl
mov dx,-0e00h
__swa:
sub al,80h
cbw
mov [di],ax
imul al
sub dx,ax
fild word [di]
mov al,bh
inc di
jp __swa
fpatan
fimul [asdd]
fistp word [di]
mov ax,[di]
mov [di],dx
add ax,[aci-1]
mov ch,ah
mov cl,0
mov al,dh
and ax,0x0707
add al,ah
xchg dh,al
add dh,al

cmp al,236
ja __q
cmp al,235
jb __q
mov cl,ch
shr cl,1
mov dx,[di]
shl dx,5
add dh,96


__q:




cmp al,230
ja __1

and ch,0x1f

cmp ch,3
ja __D
cmp al,229
jb __W
mov dh,al
ror dh,3
add dh,30
dec cx
__W:

sub dh,20
__D:


cmp al,178
ja __A
dec cx
__A:


__1:

mov [gs:bx],cl
add dh,80h
mov [fs:bx],dh

inc bx
jne ___dfg




 mov di,900

 mov si,100
 _L:
 mov bp,-160
 _P:
 push di

 mov cx,0x7f40
 mov ax,[aci]
 shl ax,1
 cbw
 cwd
 and al,ch
 sub al,cl
 imul al
 sub ah,0x10
 xor dx,ax
 add ax,ax
 dec ah
 add dh,20h
 mov di,ax

 _Q:
 add cx,bp ;x
 add dx,si ;y
 sub di,150 ;z
 mov bx,di
 mov bl,ch
 mov ah,[gs:bx]
 mov al,[fs:bx]
 test ah,ah
 js _A
 jz _V
 mov bl,ah
 mov bh,dh
 shr bh,1
 test byte [es:bx],0xff
 je _V
 add al,80h
 jmp _A
 _V:
 cmp dh,70
 jna _Q
 _A:
 pop di
 mov [di],al
 inc di
 inc bp
 cmp bp,160
 jne _P
 dec si
 cmp si,-100
 jne _L

 push es
 push 0a000h
 pop es
 mov di,0
 mov si,900
 mov ch,7dh
 rep movsw
 pop es


in al,60h
dec ax
jne _DONGu
ret




asdd dw 28c0h

aci dw 0



dvrc db 'DEVRECi$'







