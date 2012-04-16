;Klappquadrat 32b
;32 byte intro source by T$
;Greets to mados, cthulhu, spacey and neo

org 100h

  mov    al,13h
  int    10h
  lds    ax,[bx]

schleife:
 
mov ax,di
xor dx,dx
mov bx,320
div bx
;dx=x, ax=y

add ax,cx
add dx,cx
and ax,dx
shr ax,cl

xor [di],al 

inc di
jnz schleife

inc cx
jmp short schleife