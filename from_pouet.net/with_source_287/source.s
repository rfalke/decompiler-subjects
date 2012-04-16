
                ; ммммммммммммммммммммммммммммммммммммммммммммммммммммммммммм
                ;       ээээээ эээээ  ээээээ ээээээ эээ ээ эээ
                ;       эээ ъш эээ шш эээ ъш эээ ъш эээ шш шшш
                ;       шшшъ   шшшъшэ шшшъ э э ъшээ шшшъшш шшш
                ;       шшш    шшш шш шшшэшш шшээшш шшш шш эээ
                ;                               [productions]
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       "spline" ragest'98 256byte intro compo
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       copyright (c)1998. remage/fresh!
                ; ммммммммммммммммммммммммммммммммммммммммммммммммммммммммммм

                .486
code            segment use16
                assume  cs:code,ds:code

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       init videomode and palette
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

                org     0100h
start:          mov     al,013h
                int     010h
                push    0a000h
                pop     es

                mov     dx,03c8h
                xchg    ax,bx
                out     dx,al
                inc     dx
                inc     ch
pal_loop:       push    ax
                div     dh
                mul     ah
                cmp     al,63
                jbe     pal_skip
                mov     al,63
pal_skip:       out     dx,al
                pop     ax
                inc     ax
                loop    pal_loop

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       generate sinetables
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

                mov     bx,16384
                mov     ax,16379
                mov     si,ax
                mov     bp,ax
                mov     word ptr [costab],04040h
                mov     di,offset [costab+2]
                mov     cl,254
sin_loop:       imul    bp
                shrd    ax,dx,13
                sub     ax,bx
                mov     bx,si
                mov     si,ax
                mov     ds:[di],ah
                mov     ds:[di-256],ah
                inc     di
                loop    sin_loop

                ; ммммммммммммммммммммммммммммммммммммммммммммммммммммммммммм
                ;       main loop
                ; ммммммммммммммммммммммммммммммммммммммммммммммммммммммммммм

mainloop:       mov     di,offset [scrbuf]
                inc     si

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       make background
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

makeback:       mov     bx,140
mb_loop1:       mov     cx,320
mb_loop2:       mov     bp,cx

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       turbulence (function)
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

                pusha
                cwd
                mov     cx,1536
t_loop:         push    bp
                shl     bp,cl
                add     bp,si
                push    bx
                shl     bx,cl
                sub     bx,si

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       sine (function)
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

                xor     bh,bh
                mov     al,[sintab+bx]
                sub     al,[costab+bx]
                mov     bx,bp
                xor     bh,bh
                add     al,[sintab+bx]
                xchg    bx,ax
                xor     bh,bh
                mov     al,[sintab+bx]

                pop     bp
                pop     bx
                inc     cx
                sar     al,cl
                add     dl,al
                dec     ch
                jnz     t_loop
t_exit:         xchg    ax,dx
                sar     al,1
                jns     t_skip
                neg     al
t_skip:         mov     byte ptr ds:[di],al
                popa

                inc     di
                loop    mb_loop2
                dec     bx
                jnz     mb_loop1

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       draw spline curve
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

mb_exit:        pusha
                mov     ch,2
                mov     bx,321
spl_loop:       pusha
                xchg    si,cx
                movsx   di,[temp+si]
                shr     si,1
                add     si,cx
                and     si,0ffh
                movsx   ax,[costab+si]
                sar     ax,1
                imul    bx
                movsx   cx,[sintab+si]
                sub     di,cx
                sar     di,1
                add     di,ax
                mov     cl,8
spl_loop1:      mov     ch,8
spl_loop2:      inc     ds:[scrbuf+22560+di]
                inc     di
                dec     ch
                jnz     spl_loop2
                add     di,312
                loop    spl_loop1
                popa
                loop    spl_loop

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       copy video buffer to screen with 1:1 motionblur
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

                mov     ch,0afh
                mov     di,9600
                mov     si,offset [scrbuf]
blur_loop:      mov     ah,es:[di]
                lodsb
                add     al,ah
                shr     al,1
                stosb
                loop    blur_loop
                popa

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       exit if esc pressed
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

                in      al,060h
                cbw
                dec     ax
                jnz     mainloop
                mov     al,03h
                int     010h
                ret

                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд
                ;       variables
                ; ддддддддддддддддддддддддддддддддддддддддддддддддддддддддддд

temp            db      040h,040h
                db      190 dup (?)
sintab          db      64 dup (?)
costab          db      256 dup (?)

scrbuf          db      44800 dup (?)

code            ends
                end     start
