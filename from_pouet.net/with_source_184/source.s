

code     segment  'code'
assume   cs:code, ds:code, es:code
         org      100h
.286

main proc   near

        mov     dx,     offset teksti
        mov     ah,     9
        int     21h

        mov     di,     offset ord
        mov     si,     ds:[di]
alku:
                                ;patternit
        xor     ax,     ax
        mov     al,     ds:[si]
        inc     si
        cmp     al,     0
        jne     pahus
                                ;orderit
        inc     di
        inc     di
pelotus:
        mov     si,     ds:[di]
        cmp     si,     0
        je      pois
pahus:
                                ;soitto
        shl     ax,     4
        call    sound
                                ;delay
        mov     cx,     100
        mov     ax,     1000
        mul     cx
        mov     cx,     dx
        mov     dx,     ax
        mov     ah,     86h
        int     15h

;        mov     cx,     dx
;        mov     dx,     64000
;        mov     ah,     86h
;        int 15h

;        cx ?
;        ah 86
;        dx 100000

        in      al,     60h
        dec     al
        jnz     alku
pois:
        in      al,     61h
        and     al,     0FCh
        out     61h,    al


; 800   32
;1000   3e 8
;1200   4b
;1400   57 8
;1600   64
;1800   70 8
;2000   83
;2100   7d


        mov ax, 4C00h
        int 21h

pat1    db      32h, 3Eh, 4Bh, 4Bh
        db      32h, 3Eh, 4Bh, 4Bh
        db      32h, 3Eh, 4Bh, 4Bh, 0
pat2    db       3Eh, 57h, 4Bh, 7Dh, 70h, 64h, 57h, 3Eh, 0
pat3    db       32h, 32h, 3Eh, 3Eh, 4Bh, 3Eh, 32h, 3Eh, 32h, 32h, 32h, 32h, 0
ord     dw      offset pat1, offset pat2
        dw      offset pat1, offset pat2
        dw      offset pat1, offset pat2
        dw      offset pat3, 0
teksti  db      'moi maailma$'


sound   proc    near    ; bx = hz
        mov     bx,     ax
        mov     ax,     34DDh
        mov     dx,     12h
        cmp     dx,     bx
        jnc     muuh
        div     bx
        mov     bx,     AX
        in      al,     61H
        test    al,     3
        jnz     arka
        or      al,     3
        out     61h,    al
        mov     al,     0B6h
        out     43h,    al
arka:   mov     al,     bl
        out     42h,    al
        mov     al,     bh
        out     42h,    al
muuh:   ret
sound   endp



main     endp
code     ends
         end      main
