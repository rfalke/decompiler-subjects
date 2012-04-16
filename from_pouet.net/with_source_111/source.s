; Vychazka 64b (2.0)
; 64 byte intro by Rrrola <rrrola@gmail.com>
;
; whoa, gently flowing colors of nature...
; ...stop staring at the screen and get some fresh air
;
; Greets to every coder who's ever done a 64b intro!

org 100h     ; assume ah=0, bx=0, di=0FFFEh

mov  al,13h
int  10h
lds  cx,[bx] ; cx=20CDh, ds=MemTop (assume 9FFFh)

mov  dx,3C9h ; four palette blocks (water, grass, wood and sky)
P:
mov  ax,cx
out  dx,al
shr  ax,1
out  dx,al
shr  ax,1
out  dx,al
loop P

M:
push cx
adc  si,ax   ; si = random pixel
add  si,cx   ; upper part of the screen: CF more likely to be 1
lodsb
sbb  al,[si] ; color = [si] + signed([si-1] - [si] - CF)/2 - 1
sar  al,1
add  al,[si]
dec  ax
shr  cl,cl   ; cl = (color + random(mean=7.09)) / 64
adc  cl,al
add  cl,cl
mov  bx,di   ; dir = {0->DD+LLL, 1->R, 2->UU+R, 3->LLL}[cl]
js   X
mov  bx,-320
X:
jc   N
xor  bx,di
N:
mov  [bx+si],al
pop  cx
loop M

in   al,60h  ; ESC check
cbw
dec  ax
jnz  M
int  10h     ; textmode 0
ret
