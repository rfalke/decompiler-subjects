; persia
; by orbitaldecay 2010
; compile using nasm

[bits 16]
[org 100h]

            mov     al, 0x13
            int     0x10
            lds     cx, [bx]
            mov     bx, 320
draw:       mov     ax, di
            xor     dx, dx
            div     bx
            xor     al, dl
            sal     al, 1
            cwd
            div     cl
            sar     al, 1
            add     [di], al
            inc     di
            jnz     short draw
            dec     cx
            loop    draw



            

