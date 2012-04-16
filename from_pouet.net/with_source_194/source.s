.model tiny
.186
 org 100h
.code
 mov ax,3
 int 10h
kezd
 mov cx,500
flp
 push cx
 push 0b800h
 pop ds
 push cs
 pop es
 mov di,offset puffer
 xor si,si
 mov cx,2000
lp1
 movsb
 inc si
 loop lp1
 mov cx,2000
 push es
 pop ds
 mov si,offset puffer
 push cs
 pop ax
 add ax,150
 mov es,ax
 mov di,si
lp2
 mov al,ds:[si-81]
 mov bx,al
 mov al,ds:[si-79]
 adc bx,al
 mov al,ds:[si+81]
 adc bx,al
 mov al,ds:[si+79]
 adc bx,al
 add bx,1
 shr bx,2
 mov es:[di],bl
 inc si
 inc di
 loop lp2
 jmps bridge
flp_2
 jmps flp
bridge
 push es
 pop ds
 push 0b800h
 pop es
 xor di,di
 mov si,offset puffer
 mov cx,2000
lp3
 movsb
 mov al,ds:[si]
 and al,112
 mov bl,al
 shr bl,4
 and bl,5
 or al,bl
 stosb
 loop lp3
keret
 mov cx,80
 xor di,di
 pop ax
 push ax
vkeret
 mov es:[di+3840],al
 stosb
 inc di
 loop vkeret
 mov cx,25
 xor di,di
fkeret
 mov es:[di+158],al
 stosb
 add di,159
 loop fkeret
 add al,2
 mov es:[2000],al
 mov es:[2002],al
 mov cx,20
delay
 push cx
 mov cx,65530
d1
 nop
 loop d1
 pop cx
 loop delay
 mov ah,1
 int 16h
 jnz kilep
 pop cx
 loop flp_2
 jmp kezd
kilep
 pop cx
 xor ax,ax
 int 16h
 ret

varok proc near
 push cx
 mov cx,300
delay_
 push cx
 mov cx,65530
d1_
 nop
 loop d1_
 pop cx
 loop delay_
 pop cx
 ret
 endp

puffer
.end
