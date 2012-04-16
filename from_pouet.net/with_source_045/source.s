; Dírojed 32b final
; a 32-byte intro
; original by T$, cut down and enhanced by Rrrola <rrrola@gmail.com>

; tap or hold any non-buffered key (like Ctrl) for a different effect
; greets to every x86 coder!

org 100h          ; assume ah=0 bx=0 di=0FFFEh si=0100h

mov  al,13h       ; (2) mode 320x200
int  10h          ; (1) first pass: "int 10h" and writing around [bp]
db 0C5h           ; (1) "lds ax,[di+2], inc ax, aas": ax = 20CDh, ds = 9FFFh

M:
inc  bp           ; (1)
add  al,[bx+si+63]; (3)
adc  al,[bx-321]  ; (4)
add  al,[bx+di]   ; (2) color = [x+1]+[x-1]+[x+320]+[x-320]+1 & 0FFh
dec  bx           ; (1)
cmp  [bx],al      ; (2) CF = color<=[x]
cmc               ; (1)
sbb  [bx],dh      ; (2) if (CF) [x]--; if (!key pressed) [x]++;
sbb  bx,bp        ; (3) next position: x += bp++

in   al,60h       ; (2) if (key pressed) ah = 0FFh, otherwise ah = 0
xchg ax,cx        ; (1) alternate ax and cx
imul si           ; (2) dh = ah&80 ? FF : 00, dl=ah, ah=al, al=0

xlatb             ; (1)

loop M            ; (2)
ret               ; (1) exit: hold ESC for 4 passes ;-)
