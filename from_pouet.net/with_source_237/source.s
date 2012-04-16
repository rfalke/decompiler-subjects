; ~.  ~.~.  ~. ~.~. ~.~.  ~.  Vlnky
; ~.  ~.~.  ~~.~.~.~.  ~.~.  256b intro
;  ~.~. ~.  ~.~~.~~.~.  ~.  by Rrrola
;   ~.  ~~~.~. ~.~.  ~.~.  rrrola@gmail.com

; greets to everyone who disassembles sourceless intros with delight
; use the keyboard to control speed and pattern parameters
; use NASM to compile

%define abs(x) bp-14h+x          ; stack
%define adr(x) byte bp+si-116h+x ; constants in the code

  org 100h ; assume ah=ch=bx=0 dx=cs si=0100 sp=di=FFFE

  jmp  short S

;Subroutine: fs:bx = address of cos(st0), st0 = [fs:bx]

  fmul   dword[adr(F2600_9)]
  fistp  dword[si]      ; "dword" because we want mod 65536
  imul bx,[si],byte 4   ;-) overwrites dithering buffer
  fld    dword[fs:bx]
  ret

;Initialize mode 13h and segments (with intertwined constants)

S mov  al,13h
                W104 equ $
                W160 equ $+2
  push 0A000h           ;-) pop later so that sp = -4
  add  dh,al
  cmpsw                 ; si = 102h, di = 0
  mov  ds,dx ;<-[bp+si] ; ds = dithering buffer = cs+1300h
  int  10h
                F2600_9 equ $ ; about 16384/(2*PI) ~ 2607.6
  xchg ax,bp
  mov  fs,[bp+si]       ; fs = costable = [bp+si] = 8EA7h
  inc  bp               ; bp = 0014h

;Precompute costable (16384 floats)

  fninit
C mov  [si],di
  fild   word[si]
  fdiv   dword[adr(F2600_9)]
  fcos
  fstp   dword[fs:bx]   ; [fs:bx] = cos(bx/4 * about 2*PI/16384)
  inc  di               ;-) the inaccuracy makes it more interesting
  sub  bx,sp            ; bx += 4
  jnz  C
  pop  es               ; es = vram = A000h

;Main loop
;Store frame coefficients to [FF00..FFFC] (1st pass: [4000..FFFC])

M add  al,15
  push bp
F add  [abs(-4)],ax     ; [ss:-4] = 20 + 1..64*(key+15)
  fild   dword[bp+si]   ; {T}
  fidiv  word[abs(-4)]  ; {T / [ss:-4]}
  call si
  fstp   dword[di]      ; store T1..T64 = cos(T / [ss:-4])
  sub  di,sp            ; di += 4
  jnz  F
  pop  ax               ; di = 0, fs:bx = address of T64

;Wait for vertical retrace start (70 fps cap)

  mov  dx,3DAh
W in   al,dx
  test al,8
  jz   W

;Set palette: 4+4 bits, slowly changing opponent colors

  pop  ax               ; ax = sp = 0
  mov  dl,0C8h
  out  dx,al
  inc  dx               ; ax = ...xxxx....yyyy.
P or   ax,1110000111100001b
  mov  [si],ax
  fild   word[si]
  dec  si
  fisub  word[si]       ; {(X = xx:yy) - (Y = yy:??)}
  fmul   dword[fs:bx+di]; cos(q = T/(980+64*key) + rgb*2*PI/3)
  fiadd  word[si]
  fiadd  word[si+1]     ; {color = X+Y + (X-Y)*cos(q)}
  fistp  word[si-1]
  outsb                 ; out 3C9h,color>>8
  add  di,5558h
  adc  ax,sp            ; ax:di += 5558h: cycle rgb, loop y and x
  jnz  P

;Loop initialization

  xchg ax,di            ; di = adr = 0, ah:al = prevErrors = 0800h
                F5_837 equ $
  mov  cl,204           ; dx = X, cx = Y (ch is always 0)
Y mov  dx,320
X pusha                 ;[ss:-2 -4 -6 -8 -A -C -E -10h]
I fild   word[abs(-6)]  ;    err Y  X  -  0 20 258 adr; sp = -16
  xor  bp,byte 2
  fisub  word[adr(W104)]; p1:[-6]-[W160]=X-160  p2:[-4]-[W104]=Y-104
  fdiv   dword[byte ss:si-102h+F5_837]
  jpo  I
  fldl2t                ; {w=3.322 u=(Y-104)/5.837 v=(X-160)/5.837}

  mov  al,[di]
  aam  10h              ; ah:al = cummulative errors

;Sum 5 plasma iterations

  mov  cl,5

L fsub   st2
                W_23 equ $+1
  fsubr  st1
  call si               ; {W=cos(u+v-w) u v}
  fstp   st3            ; cycle {W u v} -> {u v W}

  mov  di,0FF34h        ; di = 34 24 14 | 38 28 18 | 3C

K fld    st2
  fmul   dword[di]
  add  di,sp            ; V = W*cos(T6) + u*cos(T10) + v*cos(T14)
  jpe  K                ; U = v*cos(T7) + W*cos(T11) + u*cos(T15)

  faddp  st1
  fsubrp st1            ; p1:{V W u v}          p2:{U v W u V}

  fld    st0
  call si
  fimul  word[adr(W_23)]
  fistp  word[si]       ;    [si] = 23*cos(V)      [si] = 23*cos(U)
  sub  al,[si]          ;    color += [si]         COLOR += [si]
  xchg al,ah
  fxch   st3            ;    {v W u V}             {u v W U V}

  add  di,byte 13*4
  jpo  K

  fcompp                ; {W U V}
  loop L

  fninit                ; {}

;Compute final colors, draw tinted bands

  add  [abs(-2)],ax     ; pushed ax = prevErr += cummErr + plasma
  popa
  add  ax,118*101h      ; center colors

  cmp  bp,dx            ; if (X <= 20) color = 0
  sbb  bl,bl
  cmp  bp,cx            ; if (Y <= 20) COLOR = 0
  sbb  bh,bh
  and  ax,bx       ; ax = CCCCIJKLccccijkl

; cmp  cx,byte 5        ; alternate version with no bands:
; cmc                   ; if (cx < 5) color = COLOR = 0
; sbb  bx,bx
; and  ax,bx       ; ax = CCCCIJKLccccijkl

;Combine color planes, distribute error diffusion
; Frame coefficients get mangled in invisible bottom rows, but never
; reach "slow" values (like subnormals or NaNs) thanks to the horz band

  mov  bx,di            ;-) for compact addressing

  rol  al,4
  rol  ax,4             ; IJKLijklccccCCCC
  stosb
  mov  al,ah            ; IJKLijklIJKLijkl
  shr  ax,1
  shr  ah,1             ; ..IJ..ij.IJK.ijk
  and  ax,0011001101110111b
  mov  [bx],al             ; Sierra's "Filter Lite" error diffusion
  add  [bx+si-102h+320],ah ;     (+) E/2
  add  [bx+si-102h+319],ah ; E/4 E/4      + E/2 to next frame

  aam  10h              ; .....IJK.....ijk

  dec  dx
  jnz  X
  loop Y                ; di = 204*320 = FF00h

  push cx               ; return 0 to stack

;Advance time, keycheck and exit

  add  dword[bp+si],byte 24 ;<-slow write (destroys code cache)
  in   al,60h           ;-) ah=0 from the bands
  dec  ax
  jnz  M
  ret
