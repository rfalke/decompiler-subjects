.model tiny
.code
.486
.startup

        mov al,13h
        int 10h

        mov di,offset r
        push di
        mov ch,0a0h
        mov ah,ch
        xor al,al
        mov gs,ax
        rep stosb

        mov dx,3c8h
        out dx,al
        inc dx
l0:     mov al,cl
        neg al
        shr al,2
        out dx,al
        shr al,1
        out dx,al
        shr al,1
        out dx,al
        loop l0

        mov ax,cs
        add ah,10h
        mov es,ax

        pop bp
again:
        mov di,offset s1
        push di
        mov byte ptr [bp+2],33
sc1:    mov byte ptr [bp+4],65
        dec byte ptr [bp+2]
sc2:    fninit
        fild word ptr [bp-2]
        fldpi
        fimul word ptr [bp+2]
        fdiv st(0),st(1)
        fsincos
        fmul st(0),st(2)
        fiadd word ptr [bp-8]
        fist word ptr [di+2]
        fiadd word ptr [bp+6]

        fldpi
        fild word ptr [bp+6]
        fdiv st(0),st(4)
        fiadd word ptr [bp+4]
        fmulp st(1),st(0)
        fdiv st(0),st(3)
        fsincos
        fimul word ptr [bp-10]
        fmul st(0),st(3)
        fistp word ptr [bp+8]
        fmul st(0),st(3)
        fmul st(0),st(2)

        fild word ptr [bp+6]
        fiadd word ptr [bp+8]
        fldpi
        fmulp st(1),st(0)
        fidiv word ptr [bp-4]
        fsincos
        fmul st(0),st(5)
        fiadd word ptr [di+2]
        fistp word ptr [di+2]
        fmul st(0),st(4)
        faddp st(1),st(0)
        fistp word ptr [di+4]

        fldpi
        fimul word ptr [bp+10]
        fidiv word ptr [bp-4]
        fsincos
        fild word ptr [bp+8]
        fmul st(0),st(1)
        fild word ptr [di+4]
        fmul st(0),st(3)
        faddp st(1),st(0)
        fiadd word ptr [bp-6]
        fistp word ptr [di]

        fild word ptr [di+4]
        fmul st(0),st(1)
        fild word ptr [bp+8]
        fmul st(0),st(3)
        fsubp st(1),st(0)
        fistp word ptr [di+4]

        add di,6
        dec byte ptr [bp+4]
        jnz sc2
        cmp byte ptr [bp+2],ch
        jnz sc1

        pop di
        mov si,offset data+2
        mov ch,32
ps1:    mov cl,64
ps3:    mov eax,[di]
        mov [si],eax
        mov [si+16],eax
        mov eax,[di+6]
        mov [si+4],eax
        mov eax,[di+396]
        mov [si+8],eax
        mov eax,[di+390]
        mov [si+12],eax
        pusha
        mov bp,[di+4]
        add bp,138
        shr bp,1
        mov al,ch
        and al,4
        shl al,3
        add bp,ax
        call polygo
ps2:    popa
        add di,6
        dec cl
        jnz ps3
        add di,6
        dec ch
        jnz ps1

        add byte ptr [bp+6],3
        inc byte ptr [bp+10]

        xor di,di
        xor al,al
        mov ch,0fah
mv1:    mov ah,es:[di]
        mov gs:[di],ah
        stosb
        loop mv1

        in al,60h
        dec al
        jnz again
        mov ax,3
        int 10h
        ret

polygo: mov ax,[si+2]
        mov bx,[si+6]
        mov cx,[si+10]
        mov dx,[si+14]

        cmp ax,bx
        jnc co1
        xchg ax,bx
co1:    cmp ax,cx
        jnc co2
        xchg ax,cx
co2:    cmp ax,dx
        jnc co3
        xchg ax,dx
co3:    cmp bx,cx
        jnc co4
        xchg bx,cx
co4:    cmp bx,dx
        jnc co5
        xchg bx,dx
co5:    cmp cx,dx
        jnc co6
        xchg cx,dx
co6:    sub ax,dx
        jz no_dr
        push dx
        push ax
        shl dx,6
        mov di,dx
        shl dx,2
        add di,dx

        mov bx,offset lens
        mov cx,8
lcal1:  lodsw
        sub ax,[si+2]
        mov [bx],ax
        add bx,2
        loop lcal1
        mov byte ptr perez,cl

        pop cx
        pop si

ydr1:   mov bx,offset bufer+2
        mov ch,4

ydr2:   cmp si,[bx]
        jc ydr3
        cmp si,[bx+4]
        jc percal
ydr3:   cmp si,[bx+4]
        jc yret
        cmp si,[bx]
        jc percal
yret:   add bx,4
        dec ch
        jnz ydr2
        inc si
        dec cl
        jnz ydr1
no_dr:  ret

percal: mov ax,si
        sub ax,[bx]
        imul word ptr [bx+18]
        idiv word ptr [bx+20]
        add ax,[bx-2]
        xor byte ptr perez,1
        jz draw
        mov word ptr perdat+1,ax
        jmp yret
draw:
        push di
        push cx
perdat: mov cx,5555h
        cmp ax,cx
        jc drw1
        xchg ax,cx
drw1:   add di,ax
        sub cx,ax
        inc cx
        mov ax,bp
dd1:    cmp al,es:[di]
        jc dd2
        mov es:[di],al
dd2:    inc di
        loop dd1
        pop cx
        pop di
        add di,320
        jmp yret

_20     dw 125
_100    dw 100
_160    dw 160
rad     dw 128
_16     dw 32
r:
a       equ r+2
b       equ a+2
alp     equ b+2
temp    equ alp+2
alp2    equ temp+2

perez   equ alp2+2
data    equ perez+1
bufer   equ data+2
lens    equ bufer+20

s1      equ lens+20
s2      equ s1+15000

end