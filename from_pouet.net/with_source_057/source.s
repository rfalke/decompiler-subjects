; matisse
; orbitaldecay 2010

[bits 16]
[org 100h]

        mov     al, 13h
        int     10h
        lds     cx, [bx]
        push    ds
        pop     es
start:  mov     dx, [bx]
        or      [bx + 320], dx
        or      [bx + 1], dx
        dec     bx
        loop    start
        lodsb
        inc     ax
        stosb
        mov     cx, 101
        in      al, 0x60
        dec     ax
        jnz     short start
        ret


