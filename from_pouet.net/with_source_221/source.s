;---------------------------------;
;254b Plasma Intro by Tyler Durden;
;Compiled with Fasm v.1.47        ;
;---------------------------------;
;website: www.tylerdurden.net.ru  ;
;email: @tylerdurden.net.ru       ;
;---------------------------------;
org 100h
mov si,table_cos
fldz
@@calc_sin:
fld st0
fcos
fimul word [cos_mul]
fistp word [si+bx]
fadd dword [si-8]
inc bx
jns @@calc_sin
mov al,13h
int 10h
xchg ax,bp
mov dx,string
int 21h
mov di,cs
mov si,-320
xchg ax,cx
cos_mul db 68h,00h,0a0h
pop ds
rep movsw
push ds
pop es
push cs
pop ds
xchg ax,cx
mov dx,3c8h
out dx,al
inc dx
@@skip:
out dx,al
loop @@skip
@@inc_palette:
mov cl,2
@@reverse:
inc bx
push cx
mov cl,63
@@inc:
mov si,sp
@@pal_outsb:
outsb
out dx,al
outsb
add al,bl
loop @@inc
pop cx
not bx
loop @@reverse
xor byte [@@pal_outsb],bh
jp @@inc_palette
cwd
@@wait:
mov si,t1
xor di,di
mov cl,200
mov bx,table_cos
mov word [si],bp
@@loop_y:
push cx
mov word [si+2],bp
mov cx,320
@@loop_x:
push si
@@add:
lodsb
xlatb
add ah,al
cmp si,bx
jnz @@add
shr ax,8
stosb
pop si
inc byte [si+2]
sub byte [si+3],bh
loop @@loop_x
inc byte [si]
sub byte [si+1],bh
pop cx
loop @@loop_y
add bp,0feh
dec dx
jg @@not_last
mov dx,319
@@not_last:
pusha
mov bp,dx
mov bx,320
sub bx,dx
cwd
mov cl,2
@@draw_buffer:
push cx
mov si,cs
mov di,320*189
mov cl,9
@@draw_part:
add di,dx
add si,bx
push cx
mov cx,bp
@@draw_line:
lodsb
;mul byte [si]
mul al
add al,128
add [es:di],al
inc di
loop @@draw_line
pop cx
add di,bx
add si,dx
loop @@draw_part
xchg bp,bx
xchg dx,bx
pop cx
loop @@draw_buffer
mov dx,3dah
@@retrace:
in al,dx
test al,8
jz @@retrace
popa
in al,60h
dec ax
jnz @@wait
mov al,03h
int 10h
ret
string db 'PLASMA BY TYLER DURDEN FOR WWW.256B.COM'
string_len=$-string
pi_div_64 db 24h,49h,3dh
t1 db ?
t2 db ?
t3 db ?
t4 db ?
table_cos rb 256