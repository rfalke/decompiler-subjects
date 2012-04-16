        IDEAL
        MODEL tiny

        DATASEG
Message         db      "128b - FaNt0m","$"
Pal             db      20*3 dup (?) ; 20 = num colours, 3 = r,g,b
;  10 steps, increments of 6
;  green        -> blue
;  blue         -> red
;  10 steps * 2 patterns = 20 settings

        CODESEG
        ORG     100h
Start:
        mov     ah,9
        lea     dx,[Message]
        int     21h
;----------------------------- Set the palette ------------------------------
        ; r=al, g=bl, b=dl, cx = counter, di = Pal Offset
        ; green to blue
        xor     di,di
        mov     al,0
        mov     bl,60
        mov     dl,0
        mov     cx,10
@@g2b:  mov     [Pal+di],al
        inc     di
        mov     [Pal+di],bl
        inc     di
        mov     [Pal+di],dl
        inc     di
        sub     bl,6
        add     dl,6
        loop    @@g2b

        ; blue to green
        mov     cx,10
@@b2g:  mov     [Pal+di],al
        inc     di
        mov     [Pal+di],bl
        inc     di
        mov     [Pal+di],dl
        inc     di
        sub     dl,6
        add     bl,6
        loop    @@b2g


;------------------------- Main Loop Starts ---------------------------------
        xor     di,di
loop_start:
        mov     ah,1
        int     16h
        jz      @@setrgb        ; no key pressed so set the rgb values...
        jmp     short Exit      ; Key pressed so exit...

        ; Select the colour to change RGB values of
@@setrgb:
        mov     dx,03C8h
        mov     al,7    ; colour number
        out     dx,al

        ; Set the RGB values
        inc     dx
        mov     cx,3
@@little_loop:
        mov     al,[Pal+di]
        out     dx,al
        inc     di
        loop    @@little_loop

        cmp     di,60
        jl      loop_start
        xor     di,di
        jmp     short loop_start

Exit:
        mov     ax,3
        int     10h             ; reset to text mode
        mov     ax,4C00h
        int     21h

        END     Start

