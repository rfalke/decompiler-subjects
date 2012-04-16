;============================================================================
; Artificial intelligence / luks
;----------------------------------------------------------------------------
; Are you are you ready for AI in 256, ehm sorry 255 bytes? Are you really
; ready for AI in 255 bytes? Yes? Ok, then run this intro and feel that
; power of thinking computers. ;) If you like this, then send me a mail to
; luks@host.sk
;============================================================================

[org 0x100]
[segment .text]

BEGIN   mov     al,0x13
        int     0x10

MAIN    push    word 0x8000
        pop     es
        push    cs
        pop     ds

        mov     cx,0xFFFF
        mov     al,20
        rep     stosb

; LINES

        mov     cl,200
        mov     al,15
        xor     di,di
        push    di
VLINES  stosb
        add     di,158
        stosb
        add     di,159
        stosb
        loop    VLINES

        xor     di,di
        mov     cx,320
        push    cx
        rep     stosb
        pop     cx
        add     di,198*320
        rep     stosb

; BALL

        mov     si,BALLYI

        mov     bx,[si-6]
        mov     dx,[si-4]

        cmp     dx,195
        jb      CMPY
        jmp     short NEGY
CMPY    cmp     dx,1
        jg      ADDY
NEGY    neg     word [si]
ADDY    add     dx,[si]
        sub     si,byte 2

        cmp     bx,310
        jb      CMPX
        jmp     short NEGX
CMPX    cmp     bx,6
        jg      ADDX
NEGX    neg     word [si]
ADDX    add     bx,[si]
        sub     si,byte 8

        mov     di,dx
        imul    di,320
        add     di,bx
        mov     cl,4
BALL    mov     [es:di], dword 0x5C5C5C5C
        add     di,320
        loop    BALL

        mov     [si+4],bx
        mov     [si+6],dx

; PADS

        mov     bp,si
        cmp     [si+9],byte 0
        je      PAD2
PAD1    call    PADCHK
        jmp     short PADS
PAD2    add     bp,byte 2
        call    PADCHK

PADS    mov     ax,[si]
        mov     di,2
        call    DRAWPAD
        mov     ax,[si+2]
        mov     di,314
        call    DRAWPAD

        push    es
        pop     ds
        push    word 0xA000
        pop     es

        mov     cx,32000
        xor     si,si
        mov     di,si
        rep     movsw

        mov     ah,0x11
        int     0x16
        jz      near MAIN

        mov     ax,0x0003
        int     0x10

DRAWPAD imul    ax,320
        add     di,ax
        mov     cx,16
PAD     mov     [es:di], dword 0x51515151
        add     di,320
        loop    PAD
        ret

PADCHK  cmp     dx,[bp]
        jge     PADDOWN
        dec     word [bp]
        jmp     short ENDCHK
PADDOWN sub     dx,byte 12
        cmp     dx,[bp]
        jbe     short ENDCHK
        inc     word [bp]
ENDCHK  ret

PAD1Y   dw      100
PAD2Y   dw      100
BALLX   dw      160
BALLY   dw      100
BALLXI  dw      -1
BALLYI  dw      -1
