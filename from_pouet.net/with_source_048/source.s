;--------------------------------------------------
;
; 32 bytes.
;
; Scrolling XOR texture by Shockwave ^ S!P
;
; ALT + ENTER to exit, no space for esc exit sorry!
;
;--------------------------------------------------

        org  100h
        mov  ax,13h
        int  10h
        push 0a000h
        pop es

main:

loopy:
        scroll:
        xor di,di
        mov dx,199
        yloop:
        mov cx,320
        xloop:
                 mov ax,dx
                 add ax,bx
                 xor ax,cx
                 stosb
        loop xloop
        dec dx
        jnz yloop
        inc bx

jmp loopy
          

        