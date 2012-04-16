
; ze new 128byte intro for BYTEFALL'96
; code by malcolm, fixed by kirshe

                Ideal
                Locals
                P386

                model tiny
                codeseg
                org   100h

start:          mov      ax,13h
                int      10h
                mov      dx,3c9h
@pal_loop:      out      dx,al
                out      dx,al
                add      al,00010101b
                out      dx,al
                mov      al,cl
                sar      al,2
                neg      al
                loop     @pal_loop

                mov      ah,0a0h
                mov      ds,ax
                mov      es,ax
@y_loop:        mov      cx,320
                mov      si,bx
                add      bx,cx
                mov      di,bx
@x_loop:        xchg     ax,bp
                mov      dx,8405h
                mul      dx
                mov      dx,18
                mul      dx
                lodsb
                add     al,[si]
                shr     al,1
                add     al,dl
                sbb     al,8
                stosb
                loop    @x_loop
                cmp     bh,0fah
                jne     @y_loop

                mov     dx,3dah
l1:
                in      al,dx
                and     al,8
                jz      l1
l2:
                in      al,dx
                and     al,8
                jnz     l2

                sub     di,bx
                sub     bx,di

                mov     si,320+320
                mov     cx,16000-80
                rep     movsd

                mov     ah,1
                int     16h
                jz      @y_loop

                mov     ax,3
                int     10h
@exit:
                ret

end start
