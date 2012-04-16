; faberge
; orbitaldecay 2010

[bits 16]
[org 100h]

            mov     al, 13h
            int     0x10
            les     cx, [bx]
            mov     si, 100
draw:       push    cx
            mov     bx, sp
            fild    word [bx]
            fld     dword [si]
            faddp
            fsin
            fild    word  [bx]
            fld     dword [si]
            faddp
            fcos
            fild    word [bx]
            fld     qword [multi]
            fmulp
            fcos
            fmulp
            pop     dx
            push    word 80
            fild    word [bx]
            fmulp
            fistp   word [bx]
            pop     di
            push    si
            fild    word [bx]
            fmulp
            fistp   word [bx]
            pop     dx
            add     dx, si
            add     di, 170
            imul    dx, 320
            add     di, dx
            stosb
            loop    draw
            fld     dword [si]
            fld     qword [increm]
            faddp
            fstp    dword [si]

            inc     ax
            jmp     short draw

increm:     dq 0.01
multi:      dq 0.9

