; Pixelate intro (:

org 0x100
les si,[bx]
mov al,13h
int 10h
draw:add ax, di
stosb
inc di
loop draw
dec ax
jmp draw