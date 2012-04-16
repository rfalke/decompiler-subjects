; € € ﬂﬂ ﬂ ﬂﬂ ‹ﬂ ﬂﬂ € Kristal
; €€‹ €ﬂ € €ﬂ €ﬂ ﬂ€ € 32 bytes
; € € €  € ‹€ €‹ €€ € by Rrrola <rrrola@gmail.com>

; press keys to change growth pattern
; greets to everyone who enjoys jumping in the middle of instructions

org 100h           ; assume ah=0 di=0FFFEh si=0100h

mov  al,13h        ; (2) mode 320x200
int  10h           ; (2) setup: "lds ax,[di+2]; add ax,2; draw pixel"
db 0C5h            ; (1) ds = MemTop (assume 9FFFh)
M:
dec  bp            ;#(1) if (sum > 0)
add  al,[bx+si+64] ;!(3) { if (nothing pressed) [bx]++
jz   Z             ;_(2)   if (sum < 256) [bx]--
sbb  [bx],dh       ; (2)   [bx] |= 10h (shades of gray)
or   byte[bx],10h  ; (3) }
Z:
rol  bp,cl         ;%(2) bp = (bp-1) rol scancode, bx += bp + (bp&1)
adc  bx,bp         ;%(2)
in   al,60h        ; (2) al = last key + (nothing pressed ? 80h : 0)
xchg ax,cx         ; (1) alternate ax and cx
imul si            ; (2) dh = ah&80h ? 0FFh : 0, dl=ah, ah=al, al=0
xlatb              ; (1)
add  al,[bx+di]    ; (2) sum = ([bx+1] + [bx-1] + [bx+320]) mod 512
dec  bx            ;!(1)
loop M             ; (2)
ret                ; (1) exit: hold ESC for 3 passes

; alternatives (! is the ultimate kick-ass version):

;# inc bp (setup: "lds cx,[di+2]")
;% rol, ror / add, adc, sub, sbb / swap the lines (randomizes pattern)
;! move "dec bx" after _ and change "add al,[bx+si+63]" (setup: "aas")
