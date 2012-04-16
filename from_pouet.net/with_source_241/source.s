
 org 100h

 _H:
 add dh,10h
 mov fs,dx
 add dh,10h
 mov gs,dx
 les cx,[bx]
 mov al,13h
 int 10h
 __pltt:
 mov dx, 0x3C8
 mov al,cl
 out dx, al
 inc dx
 cbw
 shr al,1
 out dx, al
 out dx, al
 and al,ah
 out dx, al
 loop __pltt

 _asdg:

dec [aci]

xor bx,bx
___dfg:
mov di,402h
mov al,bl
mov dx,-0c00h
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
add ax,[aci-1]
mov ch,ah
mov cl,0
mov al,dh
and ax,0x0707
add al,ah
xchg dh,al
add dh,al

cmp al,239
jb __q
mov cl,80
__q:

cmp al,234
ja __1

and ch,0x1f

cmp ch,3
ja __D
cmp al,233
jb __W
mov dh,al
ror dh,3
add dh,155
dec cx
__W:

sub dh,20
__D:


cmp al,180
ja __A
dec cx
__A:


__1:

mov [gs:bx],cl
add dh,80h
mov [fs:bx],dh

inc bx
jne ___dfg





 mov si,-100
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
 add dh,24h
 dec ah
 mov di,ax
 _sddw:
 add cx,bp
 add dx,si
 sub di,150
 mov bx,di
 mov bl,ch
 mov ah,[gs:bx]
 mov al,[fs:bx]
 test ah,ah
 js _A
 jz _V
 cmp dh,ah
 jb _sddw
 jl __Aq
 add al,ah
 __Aq:

 _V:
 cmp dh,70
 jna _sddw
 _A:
 pop di
 mov [di],al
 inc di
 inc bp
 cmp bp,160
 jne _P
 inc si
 cmp si,100
 jne _L

 xor di,di
 mov si,1012
 mov ch,7dh
 rep movsw

 in al,60h
 dec ax
 jne _asdg
 ret


 asdd dw 28c0h
 aci dw 0






