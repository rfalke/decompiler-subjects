; FARNATOR, a 256 byte "mini-intro"
; original C code by biff <biff@kakiarts.de>
; assembly by KeyJ <keyj@kakiarts.de>

.model tiny
.code
.586
org 100h
c0de:

    ; initialize graphics mode
    mov ax, 0013h
    int 10h

    ; load video segment
    push 0A000h
    pop es

    ; load x and y coordinate pointers
    mov si, offset x
    mov di, offset y

display_loop:

    ; generate a random number
    mov ax, [seed]
    mul [rmul]
    add ax, 109
    and ax, 7FFFh
    mov [seed], ax

    ; search for the proper coefficient array entry
    mov bp, offset coeff
search:
    mov cx, [bp]    ; fetch probability value
    add bp, 12      ; increment data pointer
    sub cx, ax      ; compare propabiliy
    js search       ; if still in range, continue
    sub bp, 10      ; adjust pointer -> now [bp] is at yx

    ; calculate x term
    movsx eax, word ptr [bp]
    add bp, 2
    imul dword ptr [si]
    mov ebx, eax
    movsx eax, word ptr [bp]
    add bp, 2
    imul dword ptr [di]
    add ebx, eax
    sar ebx, 13

    ; calculate y term
    movsx eax, word ptr [bp]
    add bp, 2
    imul dword ptr [si]
    mov ecx, eax
    movsx eax, word ptr [bp]
    add bp, 2
    imul dword ptr [di]
    add ecx, eax
    sar ecx, 13
    movsx eax, word ptr [bp]
    add ecx, eax

    ; save new coordinates
    mov dword ptr [si], ebx
    mov dword ptr [di], ecx

    ; calculate screen x position
    mov eax, scale
    imul ebx
    sar eax, 13
    mov bx, ax

    ; calculate screen y position
    mov eax, scale
    imul ecx
    sar eax, 13

    ; calculate screen pixel offset
    mov cx, -320
    imul cx
    add bx, ax
    add bx, 63840 ; = 320 * 199 + 160
    mov al, 2
    mov byte ptr es:[bx], al

    ; wait for vsync
    mov dx, 3DAh
vsync:
    in al, dx
    and al, 08h
    jz vsync

    ; check for Esc keypress
    in al, 60h
    dec al
    jnz display_loop

    ; uninit graphics
    mov ax, 0003h
    int 10h

    ; done.
    int 20h

seed dw 48273
rmul dw 853

coeff:
    ;   prob,    xx,    xy,    yx,    yy,    y1
    dw 27853,  6963,   327,  -327,  6963, 13107
    dw 30147,  1638, -2129,  1884,  1802, 13107
    dw 32440, -1228,  2293,  2129,  1966,  3604
    dw 32768,     0,     0,     0,  1310,     0

x dd 0
y dd 0
scale dd 20

end c0de
