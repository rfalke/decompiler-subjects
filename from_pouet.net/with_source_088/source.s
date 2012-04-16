; 64 byte circle generator
; copyright Stephane Hockenhull, dec 2001
; aka rv/Beyond

org 100h                ; origin (COM file)


Start:
    mov ax, 13h         ;
    int 10h             ; setup video mode

    push word 0A000h    ;
    pop es              ; set ES to 0A000h (video segment)

    db 0DBh, 0E3h       ; initialize fpu (finit, no wait, dont really need this but its cleaner and i had 2 bytes left)

    cld                 ; clear direction flag
    xor di, di          ; set DI to 0000h

    mov al, 100         ; set ax to starting y position (y range = 100 to -99)
y:
    push ax             ; save y position

    mov cx, 320         ; set cx to screen width, loop counter
x:
    push cx             ; 
    pop ax              ; copy cx into ax (same as mov, just being fancy here =)
    sub ax, 160         ; substract 160 (320/2) to set x range to -160 to 159
    push ax             ; store value on stack (fpu can only load from memory)

    mov bp, sp          ; set bp to sp for fpu loads

    fild word [bp]      ; load x
    fld st0             ; load x again
    fmulp st1, st0      ; multiply x by x (x power 2)
    fild word [bp+2]    ; load y
    fld st0             ; load y again
    fmulp st1, st0      ; guess what
    faddp st1, st0      ; add both results (x^2+y^2)
    fsqrt               ; square root of it all (guess which formula this is)
    fistp word [bp]     ; store back result

    pop ax               ; retrieve result

    stosb                ; draw pixel (store AL at ES:DI, increment DI)

    loop x               ; x loop (320 times)

    pop ax               ; restore y counter
    dec ax               ; decrement counter
    cmp al, -100         ; compare (only lower 8bits needed)
    jnz y                ; y loop (200 times)


    xor ax, ax           ;
    int 16h              ; wait for key (read character BIOS call)
    ret                  ; return

