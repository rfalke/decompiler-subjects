;
;
;   tvscreen (64b intro) - shows a TV screen
;
;
;   (c) 2009  Volker Grabsch <vog@notjusthosting.com>
;
;   Permission is hereby granted, free of charge, to any person obtaining
;   a copy of this software and associated documentation files (the
;   "Software"), to deal in the Software without restriction, including
;   without limitation the rights to use, copy, modify, merge, publish,
;   distribute, sublicense, and/or sell copies of the Software, and to
;   permit persons to whom the Software is furnished to do so, subject
;   to the following conditions:
;
;   The above copyright notice and this permission notice shall be
;   included in all copies or substantial portions of the Software.
;
;   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
;   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
;   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
;   IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
;   CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
;   TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
;   SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


%define WIDTH  320
%define HEIGHT 200

org 0x100

    ; initialize graphics mode
    mov ax, 0x0013
    int 0x10
    push 0xa000
    pop es

    ; initialize first row
    mov di, 0x40
    mov ax, 0x0080
    mov cx, HEIGHT/2
    rep stosw

    mov dx, HEIGHT
    main:
        mov di, WIDTH*(HEIGHT-1)
        draw:
            dec di

            shr al, 3
            add al, [es:di]
            add al, [es:di-1]
            add al, [es:di+1]
            add al, [es:di+WIDTH]
            shr al, 2
            mov [es:di+WIDTH], al

            or  di, di
            jnz draw

        dec dx
        jnz main

    endloop:
        jmp endloop

