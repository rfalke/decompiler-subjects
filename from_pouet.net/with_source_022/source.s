;       Matt Wilhelm's Small Starfield Entry

.model tiny

.code
org 100h

start:
        mov     al,13h
        int     10h

        mov     bh,0a0h
        mov     es,bx

;        dec     ch             ; for many stars
genstar:
        in      al,40h          ; pop ax works (but sucks)
                                ; inc ax works, and looks nice
                                ; (but loses randomness)
        aaa

scroll:
        sbb     di,ax
        stosb
        loop    genstar

        xor     ax,ax           ; CBW works in some cases

        xchg    al,es:[di]
        inc     cx
        jmp     scroll          ; jmp to scroll - 1 for a different look

end start