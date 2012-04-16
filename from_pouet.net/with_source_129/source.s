; faberge (71 byte revision)
; orbitaldecay 2010

[bits 16]
[org 100h]

            mov     al, 13h
            int     0x10
            les     bx, [bx]
main:       push    ax
            push    cx
            mov     bx, sp
            fild    word [hundred]  ; 100
            fild    word [ninety]   ; 90, 100
            fild    word [bx]       ; cx, 90, 100
            fild    word [bx+2]     ; bp, cx, 90, 100
            fdiv    st0, st3        ; bp/100 (t), cx, 90, 100
            fadd    st0, st1        ; cx+t, cx, 90, 100
            fsincos                 ; cos(cx+t), sin(cx+t), cx, 90, 100
            fxch    st0, st2        ; cx, sin(cx+t), cos(cx+t), 90, 100
            fmul    st0, st3        ; cx*90, sin(cx+t), cos(cx+t), 90, 100
            fdiv    st0, st4        ; cx*0.9, sin(cx+t), cos(cx+t), 90, 100
            fcos                    ; cos(cx*0.9), sin(cx+t), cos(cx+t), 90, 100
            fmulp                   ; cos(cx*0.9)*sin(cx+t), cos(cx+t), 90, 100
            fmul    st0, st2        ; 90*cos(cx*0.9)*sin(cx+t), cos(cx+t), 90, 100
            faddp   st2, st0        ; cos(cx+t), 90+90*cos(cx*0.9)*sin(cx+t), 100
            fmul    st0, st2        ; 100*cos(cx+t), 90+90*cos(cx*0.9)*sin(cx+t), 100
            fadd    st0, st2        ; 100+100*cos(cx+t), 90+90*cos(cx*0.9)*sin(cx+t), 100
            fistp   word [bx+2]     ; 90+90*cos(cx*0.9)*sin(cx+t), 100
            faddp                   ; 190+90*cos(cx*0.9)*sin(cx+t)
            fistp   word [bx]
            pop     di
ninety:     dw 90                   ; aka pop dx
hundred:    dw 100                  ; aka add [si+0x0], ah (garbage)
            imul    dx, 320
            add     di, dx
            stosb
            loop    main
            inc     ax
            jmp     short main


