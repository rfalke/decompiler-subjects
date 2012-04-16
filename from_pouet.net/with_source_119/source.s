; ____/|__|-|___/|\__
; \ -/ | -| |  / |  /
; /- \__\_\ |_/__|__\
; downpour \| slejvak
; 64B intro by Rrrola <rrrola@gmail.com>

org 100h     ; assume ah=bx=0 si=0100h

mov  al,13h
int  10h
lds  cx,[bx] ; cx=20CDh ds=9FFFh

mov  dx,3C9h ; PALETTE (permute lines for different hues)
P:
mul  cl      ; R = G = i*(i-1)/1024
mov  al,ah   ; B = i/4
out  dx,al
out  dx,al
shrd ax,cx,18; ax = cx>>2
out  dx,al
loop P

M:
mov  bh,252  ; PATTERN above the screen
L:
mov  [bx],bl
inc  bx
jnz  L

F:           ; IIR FILTER
inc  ax      ; [x+320] = (1..2) + [x-1]/2 + [x]/4 + [x+1]/8...
adc  al,[bx-321]
rcr  al,1
mov  [bx],al
dec  bx
jnz  F

mov  cl,72   ; RAIN (cx = density)
R:
rdtsc
add  bx,ax   ; "add bx,dx" for needles
push cx
D:           ; raindrops with gradient (cx pixels long)
mov  [bx],cl
lea  bx,[bx+si+64]
loop D
pop  cx
in   al,60h  ; esc check is merged with the rain loop
dec  ax      ; ah=0 (sometimes ;-))
loopnz R
jnz  M
ret
