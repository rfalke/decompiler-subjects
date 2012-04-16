; circlex intro (:

org 0x100
les si,[bx]
mov al,13h
int 10h
draw:stosb
sbb ax, di
loop draw
adc ax, di
jmp draw
