
.model tiny
.386
.code
org 100h

FADECON=4
C1    = 9
;WAI=5

start:
    xchg ax,cx

    mov al,13h
    int 10h
    push 0a000h
    pop es

rnd:
    imul ax,bp,8805h
    inc ax
    mov bp,ax
    shr ax,11
    add al,C1
    stosb
    loop rnd

    push es
    pop ds

    mov cl,5   ;ch=0
smooth:       ;di=bx=0
    mov al,[di-319]
    add al,[di+1]
    add al,[di]
    add al,[di+321]
    shr al,2
    stosb
    dec bx
    jnz smooth
    loop smooth

action:
mov al,[di-1]
cyc:
xchg al,[di]
inc di
loop cyc

in al,60h
dec ax ;ah=0
jnz action

;    mov al,3h
;    int 10h
    ret

end start
