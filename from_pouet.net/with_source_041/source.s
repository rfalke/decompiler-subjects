;The Matrix effect by mados/TAP
;Thanks to Alexa, Meph and much people at 0a000h!

mov al, 03h
int 10h

mov bh, 0B8h			;push word 0B800h
mov ds, bx			;pop ds
again:
  and bh, 3Fh

  in ax, 40h			;rdtsc
  test ax, 1111010111110000b	;test al, 11110000b
  jz label1
  mov ax, [bx]			;cmovnz ax, [bx]
  shr byte [bx], 1
  jz label2
label1:
  mov [bx + 160], ax
label2:

  dec bx
  dec bx
;  jnz again
;    mov ah, 0Bh
;    int 10h
jmp short again
