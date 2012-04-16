;
;
;   chess (32b intro) - shows a chessboard
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


%define SECOND_COLOR 0x0f

org 0x100

; initialize graphics mode
mov ax, 0x0013
int 0x10
push 0xa000
pop es

; al is 0x13
xor di, di
init_dx_and_skip_color_switch:
    mov dx, 25*8

    draw_chessboard:
        mov cx, 40
        rep stosb

        cmp di, 320*200
        end_loop:
            jz end_loop

        dec dx
        jz init_dx_and_skip_color_switch

        xor al, (0x13 ^ SECOND_COLOR)

        jmp draw_chessboard
