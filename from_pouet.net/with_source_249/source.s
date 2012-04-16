;-----------------------------------------------------------------------------
;  256 bytes intro for the #coders Xmas compo
;
;  Copyright (c) 1997 by Spyko / coder of the Torrent Project
;    petrik.clarberg@swipnet.se		 - e-mail
;    http://home4.swipnet.se/~w-44673/   - coding page
;-----------------------------------------------------------------------------
        IDEAL
        P386
        MODEL tiny
        CODESEG
        ORG     100h
Start:
        mov     al,13h          ; assume ah=0
        int     10h             ; set mode 13h

        mov     ah,09h
        mov     dx,OFFSET Msg
        int     21h

        mov     ax,cs
        add     ah,10h          ; ie.  add cs,1000h
        mov     ds,ax           ; setup buffer segment 1
        add     ah,10h          ; ie.  add cs,2000h
        mov     es,ax           ; setup buffer segment 2

        push    0A000h          ; vga-mem ptr
        pop     fs

;------ clear water buffers -----
        xor     ax,ax
        xor     cx,cx
@@c:    mov     [di],al
        stosb
        loop    @@c             ; clear ds and es buffers

;---- Set Palette  ------
        mov     dx,03C8h        ; assume ax = 0
        out     dx,al
        inc     dx
@@p:
        xor     al,al
        out     dx,al           ; red = 0
        mov     al,ah
        shr     al,2
        out     dx,al           ; green = ah/4 (0->63)
        neg     al
        inc     al
        out     dx,al           ; blue = -ah/4+1 (64->0)
        inc     ah
        jnz     SHORT @@p


        pusha                   ; to decrease sp, and to store cx=0

;----------------------- Main loop begins ------------------------
Main:
;------ calculate water -------
        xor     di,di
        mov     cx,32768        
@@w:    mov     ax,[di-512]
        add     ax,[di+512]
        add     ax,[di-2]
        add     ax,[di+2]
        sar     ax,1            ; /2

        sub     ax,[es:di]
        mov     dx,ax
        sar     dx,5
        sub     ax,dx
        stosw                   ; mov [es:di],ax        add di,2
        loop    @@w


;----- vertical retrace ----
        mov     dx,03DAh
@@vr1:  in      al,dx
        test    al,8
        jz      SHORT @@vr1

;----------- change water buffers --------
        push    ds
        push    es
        pop     ds
        pop     es              ; exchange ds/es

;------- paint water -----------
        xor     si,si
        mov     di,02D20h       ; y=36, x=32
@@o:    inc     ch              ; assume cx=0, inc ch -> cx=256
@@i:    mov     dx,128
        lodsw                   ; mov ax,[si]    add si,2
        sub     ax,[si]         ; x+1,   ([si+510] for y+1)
        sub     dx,ax           ; color = water[y][x] - water[y][x+1]   (should be y+1)

        cmp     dx,0
        jnl     SHORT @@d1
        mov     dl,0
@@d1:   cmp     dx,255
        jng     SHORT @@d2
        mov     dl,255
@@d2:

        mov     [fs:di],dl      ; slow putpixel
        inc     di
        loop    @@i

        add     di,64
        cmp     si,0
        jne     SHORT @@o

;-------- add drops --------
        popa                    ; pop regs from the stack
        add     ax,26500        ; .
        rol     ax,1            ; fake random generator
        inc     cx              ; frame counter
        pusha                   ; push changed regs to the stack

        test    cl,00000011b    ; only 1 drops / 4 frames
        jnz     SHORT @@nd
        mov     di,ax
        and     al,00000111b    ; drop height (0-7)
        add     [di],al
@@nd:
;------ add text -------
        mov     al,10
        and     ch,00000011b
        mul     ch
        mov     bh,al

        push    bx

        cmp     cl,100
        ja      SHORT @@skip

        mov     di,24641        ; ( y=48, x=32 )*2 + 1 (1=for offset to second byte in word
@@to:   mov     cx,64           ; x-pixels of text
@@t:    mov     al,[fs:bx]
        cmp     al,0
        jz      SHORT @@no
        inc     [BYTE es:di]    ; add [WORD es:di],256   (256=height)
@@no:
        inc     bx
        add     di,8

        loop    @@t
        inc     bh              ; add bx,(320-64)
        add     di,(256*3*2)
        cmp     di,41025        ; (y=48+32, x=32)*2 + 1
        jb      SHORT @@to
@@skip:
        pop     bx

;----- key check ---------
        in      al,60h          ; read scancode
        cbw                     ; clear ah, for later use
        dec     ax
        jnz     Main            ; jmp if Esc not pressed
;------------------------ Main loop Ends ------------------------
        mov     al,03h          ; ah assumed to be 0
        int     10h             ; set mode 03h
        int     20h             ; terminate program, safer than "ret" in win95, but 1 byte bigger :(


Msg     DB      "Close",13,10,"tha",13,10,"fridge",13,10,"!","$"     	; ascii-$ string
;Msg     DB      "Be",13,10,"HaPpY",13,10,"dont",13,10,"WorrY","$"	 ; alternative message
        END Start
