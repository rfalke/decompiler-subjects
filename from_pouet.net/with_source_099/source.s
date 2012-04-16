; Tribute to old TV show 'X Files'
; Bushy. Jan 1997.
; 121 bytes to 64.

code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
 	org     100h
	.386
start:  mov     al, 013h
        int     10h
        push    0a000h
        pop     es
@main:  imul    ax, 3
        cmp     ax, -16384                         ; cmp #1  (0,0)
        jl      @calc
        cmp     ax, 16384
        jg      @next_2
        and     ax, ax                             ; cmp #2  (320,0)
        jg      @next
        sub     bx, 200
@next:  add     bp, 320                                 ;add 320 to  X.
@next_2:add     bx, 200                                 ;add 200 to  Y.
@calc:  shr     bp, 1                              ; calculate next pixel
        shr     bx, 1
        imul    di, bx, 320                        ; Put Pixel routine
        mov     byte ptr es:[di+bp],10
        push    ax
        in      al, 060h                           ; read keyboard for <ESC>
        dec     ax
        pop     ax
 	jne     @main
        mov     ax, 0003                            ; Text mode and Quit
        int     10h
 	retn
db      '64'
code    ENDS
END     start
