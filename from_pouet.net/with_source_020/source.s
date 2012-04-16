; coLorset2 intro (:

org 100h
mov  al,13h
int  10h
les  bp,[bx]
draw:mov al,[103h]
adc ax, di
aam
paint:
sbb ax,bx
stosb
dec dx
jnz draw
dec bx
jmp 101h
