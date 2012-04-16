
 org 100h
 mov al,13h
 int 10h
 push 0a000h
 pop es
 push 08000h
 pop fs
 mov dx,dvrcx
 mov ah,9
 int 21h

 __pltt:
 mov dx, 0x3C8
 mov al,cl
 out dx, al
 inc dx
 shr ax,2
 out dx, al
 out dx, al
 out dx, al
 loop __pltt

  ____AA:
 mov cl,2
 mov dx,04fbh
 cmp bl,dl
 ja ___q
 cmp bl,dh
 jb ___q
 push bx
 shr bl,cl
 shr bh,cl
 movzx di,bh
 shl di,6
 add di,bx
 pop bx
 test [es:di-8644],dl
 ja ___q
 mov dx,bx
 and dx,0x0f0f
 add dl,dh
 shl dx,cl
 ___q:
 mov [fs:bx],dl
 dec bx
 jne ____AA

___asd:
mov bx,400h
__A:
inc cx
add [bx],cx
fild word [bx]
fidiv word [acib]
fsincos
fstp dword [bx+1fh]
fstp dword [bx+23h]
add bl,8
jnp __A
mov bh,3

 __C:
mov bp,80h
__G:
mov di,41dh
mov al,dl
mov bl,ch
__S:
sub al,80h
cbw
mov [bx],ax
mov al,dh
inc bx
inc bx
jnp _L
mov bl,0
_L:
inc di
jp __S

mov [bx],bp
mov bl,0
__D:
fild word [bx]
inc bx
inc bx
jnp __D
__F:

fld st1
fmul dword [di]
fld st3
fmul dword [di+4]
faddp st1,st0
fxch st2
fmul dword [di+4]
fxch st3
fmul dword [di]
fsubp st3,st0
fxch st1
add di,8
jp __F
fiadd  word [zadd]
fidiv word  [zddv]
fdiv st2,st0
fdivp st1,st0
fistp word  [bx]
imul di,[bx],320
fistp word [bx]
add di,[bx]
mov si,dx
fs lodsb
shr al,5
add [di+32160],al
__Q:
inc dx
__V:
jne __G
__M:
neg bp
js __V
add ch,2
jnp __C

mov di,cx
mov si,di
mov ch,0x78
__sa:
movsw
mov [di-2],dx
loop __sa

in al,60h
dec ax
jne ___asd
ret
dvrcx db 'DEVRECi$'
acib dw 40
zadd dw 396
zddv dw 145



