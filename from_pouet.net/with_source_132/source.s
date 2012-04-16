; # # ### # # ### ### ### # # # # # #  ctverecky
; ###  #  # # #   # # #   ### # # # #  a 93byte intrrro
; #    #  ##  ##  ##  ##  #   ##  ###  by Rrrola
; ###  #  #   ### # # ### ### # #   # <rrrola@gmail.com>
; greets to everyone who just can't meet deadlines

  org 100h ; assume ah=bx=0 dx=cs si=256 di=-2 bp=09??h

;Initialization

  mov  al,13h
  int  10h

  add  dh,al
  mov  ds,dx    ; use segment cs+1300h
  push 0A000h
  pop  es

  mov  dx,3D4h  ; 256x200 video mode by y0bi/wAMMA
  mov  ah,20h
  out  dx,ax

;Harmonic oscillator (period ~ 1600 frames)

M cwd           ; dx:ax = position = 0x00002013, ah:al = sin(t)
  sub  si,ax    ; di:si = speed*256 = 0xFFFE0100, dil:sih = cos(t)
  sbb  di,dx    ; speed -= position
  add  ax,di    ; position += speed/65536

  dec  cx       ; cx = ++u, bp = v: texture coords
  pusha

;Masked rotozoom with feedback

  imul bp       ; dx = dvdx = -dudy = sin(t) * bp (in 2304..2559)
  shld di,si,3  ; di = dudx = dvdy = cos(t) * 2048

Y pusha         ; store u, v
X mov  ax,bp
  mov  al,ch
  mov  si,ax    ; si = u>>8:v>>8
  and  al,ah
  test al,40h
  jnz  K        ; if ((u&0x4000)==0 || (v&0x4000)==0) al=[si]
  lodsb         ; else al = u>>8&v>>8
K dec  ax
  mov  [bx],al  ; [adr] = --al

  shr  al,3
  add  al,16    ; screen[adr] = 16 + al/8
  mov  [es:bx+32-256],al

  add  cx,di    ; u += dudx, v += dvdx
  add  bp,dx
  inc  bl
  jnz  X

  popa          ; restore u, v from the start of the scanline
  sub  cx,dx    ; u += dudy, v += dvdy
  add  bp,di
  inc  bh
  jnz  Y

;Wait for vertical retrace start (70 fps)

;  mov  dx,3DAh ; slowdown
;W in   al,dx
;  and  al,8
;  jz   W

;Exit on ESC

  in   al,60h
  dec  al
  popa
  jnz  M
  ret
