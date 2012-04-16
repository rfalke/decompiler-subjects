;
;
;   random (32b intro) - fills the screen with pseudorandom pixel colors
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


%define WIDTH 320

org 0x100

    ; initialize graphics mode
    mov ax, 0x0013
    int 0x10
    push 0xa000
    pop es

    ; initialize with pseudo random color values
    xor di, di
    main:
        add ax, di
        add al, ah
        stosb
        or  di, di
        jnz main

    ; noise
    push es
    pop ds
    mov si, WIDTH/7
    infinite_loop:
        movsw
        jmp infinite_loop

