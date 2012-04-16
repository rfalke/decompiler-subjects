; :. sierpilbrot
; :.:. a 64-byte intro
; :.  :. by Rrrola
; :.:.:.:. <rrrola@gmail.com>
; greets to everyone who can't get enough cliches

org 100h   ; assume ah=ch=bx=0 sp=0FFFEh

mov  al,13h
int  10h   ; ds=9FFFh
lds  cx,[bx]

M:         ; bx = Address
cwd
mov  di,320
mov  ax,bx
idiv di    ; dx = X, ax = Y
mov  cl,34 ; cx = MaxIterations
mov  bp,ax ; bp = Im = Y (cx for 34/256, "xor bp,bp" for 0)
add  di,sp ; di = Re = 1.25{8.8 fixed point} + sp/256
I:
add  di,dx ; Re += X/256
add  bp,ax ; Im += Y/256
pusha
add  sp,byte 7

imul ax,di,byte 2
imul bp    ; Im{16.16} = 2*Im*Re
push dx
push ax

lea  ax,[di+bp]
sub  di,bp
imul di    ; Re{16.16} = (Re+Im)*(Re-Im)
push dx
push ax

inc  sp
xchg ax,bp
imul ax
test dh,bl ; [Re][Im].AAXXMMYY (16.16 -> 8.8)
popa       ;  DiSiBp..BxDxCxAx
loopz I    ; if ((Im*Im & A<<8) || --M==0) break

mov  [bx],cl
dec  bx
jnz  M

in   al,60h
dec  ax    ; last Y = 0
push ax    ; sp -= 2
jnz  M
ret        ; pop ip = 0
