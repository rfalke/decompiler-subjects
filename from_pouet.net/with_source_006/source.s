; wave_lines intro (:

org 0x100
mov al,13h
int 10h
les bx,[bx]
aas
inc ax
cmc
stosw
jmp 101h