; /\\ \  //\//\ MIXER
;/\ \\ \// // / a 128B intro
;\ \ \\/\\/ \/\ by Rrrola
; \ \ \\ \\// / <rrrola@gmail.com>
; greets to everyone who enjoys watching cutting-edge effects

  org 100h ; assume ah=0 cl=0xff dx=cs bp=0x9?? si=256 di=-2

  mov  al,13h   ; Init
  int  10h           ; MCGA video mode
  add  dh,al         ; ds = cs+0x1300 (needs 141kB)
  mov  ds,dx
  push 0a000h        ; es = 0xA000
  pop  es
  mov  word[bp+si+3],3838h ; dt = 0x3838???? = (float)4.4e-5
;@mov  word[bp+si+3],3939h
;#mov  word[bp+si+3],3737h

  mov  dx,3c8h  ; Palette
  mov  cx,2000h
;@mov  ch,2
P shrd ax,cx,19
  neg  al
;@imul ax,cx,3FC0h/3
;@mov  al,ah
  out  dx,al
  mov  dl,0c9h
  loop P

M
  mov  bx,321   ; Gaussian blur
G std
B lodsb              ; 1 2 1
  add  [bx+si],al    ; 2 4 2 / 16
  rcr  byte[bx+si],1 ; 1 2 1
  loop B
  neg  bx
  cld
  js   B             ; +/- pass
  shr  bx,7
  jnz  G             ; vertical/horizontal pass

C mov  ch,80h   ; Screen copy
  rep  movsw
;#lodsb
;#mov  bx,si
;#add  al,[bx+si-2]
;#rcr  al,1
;#mov  [si-1],al
;#add  al,58
;#stosb
;#loop C

  mov  ax,-24   ; Spiral
;@mov  ax,-12
;#mov  ax,-32
S mov  [bp+di],ax    ; [bp+di]: cpu<>fpu
  fninit
  fld   dword[bp+si]
  fadd  dword[bp+si+1]
  fst   dword[bp+si] ; t += dt
  fimul word[bp+di]
  fsincos            ; {sin(a*t) cos(a*t)}
;@mov  byte[bp+di],-32
  fidiv word[bp+di]
  fxch  st1
  fidiv word[bp+di]
  fldz
  fldz               ; {y=0 x=0 dy=cos(a*t)/a dx=sin(a*t)/a}

  mov  ch,9     ; DDA line
;@mov  ch,12
;#mov  ch,26
L fist  word[bp+di]
  fadd  st2
  fxch  st1
  imul bx,[bp+di],320
  fist  word[bp+di]
  fadd  st3
  fxch  st1          ; {y+=dy x+=dx dy dx}
  add  bx,[bp+di]    ; A = ((int)y+100)*320 + (int)x+160 + si-di
  sub  [bx+32418],ah
  adc  [bx+32418],ah ; if ([A] < 255-ah) [A]++
;@sub  [bx+32418],al
;@adc  [bx+32418],al
  loop L

  inc  ax
  jnz  S

  in   al,60h   ; Keycheck
  dec  ax
  jnz  M
  int  10h           ; text mode 0
  ret
