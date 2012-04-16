; matisse
; orbitaldecay 2010

[bits 16]
[org 100h]

        mov     al, 13h
        int     10h
        lds     bx, [bx]
        push    ds
        pop     es
start:  mov     dx, [bx]
        or      [bx + 320], dx
        or      [bx + 1], dx
        dec     bx
        jnz     ok
        mov     bx, 0xFEB0
ok:
        loop    start
        lodsb
        inc     ax
        stosb
        mov     cl, 31
        jmp     short start
;        in      al, 0x60
;        dec     ax
;        jnz     short start
;        ret


