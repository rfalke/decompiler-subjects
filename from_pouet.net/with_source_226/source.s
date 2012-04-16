; UZEL

%define adr(x) byte si-100h+x
org 100h ;assume ax=0 bx=0 cx=255 si=100h di=-2 bp=9??h sp=-2 dx=cs=ds=es=ss

  jmp  B

;subroutine: draw a 32x32 sprite to xyz

I imul bp,[bx],320
                   _320 equ $-2
  add  bp,[bx+di]       ; bp = Y*320+X

X xor  ax,ax
  add  al,[fs:bx]  ;0..255
  jz   N
  add  ax,dx
  shr  ax,3
  cmp  [gs:bp+(100-16)*320+(160-16)],al
  jg   N
  mov  [gs:bp+(100-16)*320+(160-16)],al

;don't draw: we're outside of a sphere or behind something

N inc  bp
  add  bl,8
  jno  X
  lea  bp,[byte bp+si-100h+320-32]
  add  bh,8
  jno  X

  fadd   dword[adr(_2PIdiv256)]

_2PIdiv256
  ret
  db 0Fh, 0C9h, 3Ch  ;= 0.0245436926

_1_5
_R  dw 2, 3FC0h

B push 0A000h
  mov  al,13h
              _19 equ $-1 ;=19
  add  dh,al
  mov  gs,dx    ; gs = cs+1300h: 8-bit z-buffer
  int  10h
  pop  es
              _7 equ $-1 ;=7
  add  dh,al
  mov  fs,dx    ; fs = cs+2600h: sprite depths

  pop  ax       ; sp=0, ax=0

;palette: white->pink->black
  mov  dx,3c8h
R out  dx,al
  mov  dl,0c9h
  shld ax,cx,14
  out  dx,al
  mul  cl
  mov  al,ah
  out  dx,al
  loop R

;precompute sphere sprites (for speed)
;has 8x8 sub-pixel accuracy, but it's unused in this intro
Q mov  ax,bx
  imul ax       ; dx = ah*ah
  mov  ax,bx
  imul al       ; ax = al*al
  add  ax,dx
  sub  ax,128*128-64
  push ax       ; ax = -(128*128-64-x*x-y*y)
  fild   word[di]
  fchs
  fsqrt
  fadd   st0
  fistp  word[di]       ; 0..255
  pop  ax
  mov  [fs:bx],al       ; sqrt(128*128-64-x*x-y*y); 0 if outside (8000h was stored for NaNs)
  inc  bx
  jnz  Q

  mov  bx,8484h

;main loop

M inc  word[bx+si]
  fninit

;draw a trefoil to the z-buffer (512 sprites along the parametric equation)
;takes 4x"fsincos" per sphere, no big deal
;TODO:rotate
; w = cb*y + sb*z; z = -sb*y + cb*z; y = w;
; w = ca*x + sa*z; z = -sa*x + ca*z; x = w;

  mov  ch,2
  fldz                  ; {u=0}

S fld    st0
  fsincos               ; {su cu u}
  fld    st2
  fmul   dword[adr(_1_5)]; {v=1.5*u su cu u}
  fsincos               ; {sv cv su cu u}
  fiadd  word[adr(_R)]  ; {R+sv cv su cu u}
  fmul   st2,st0
  fmulp  st3,st0        ; {z=cv y=(R+sv)su x=(R+sv)cu u}

C fld    st1
  fld    st1
  fild   word[bx+si]    ; {t z y z y x u}
  fmul   dword[adr(_2PIdiv256)]
  fsincos               ; {st ct z y z y x u}
  fmul   st2,st0
  fmulp  st3,st0        ; {ct st*z st*y z y x u}
  fmul   st3,st0
  fmulp  st4,st0        ; {st*z st*y ct*z ct*y x u}
  faddp  st3,st0        ; {st*y ct*z st*z+ct*y x u}
  fsubp  st1,st0        ; {ct*z-st*y st*z+ct*y x u}

  fild   word[bx+si]
  fidiv  word[adr(_7)]
  fsin
  fimul  word[adr(_7)]
  fiadd  word[adr(_19)] ; w = 19 + 7*sin(t/7)
  fmulp  st1,st0
  fistp  word[bx+di]    ; {Y=w*(ct*z-st*y) st*z+ct*y x u}

  inc  di
  inc  di               ; store Y to [bx+di] and X to [bx]
  jz   C
  neg  di

;project to screen: z has width 160 (and height too)
;TODO: z += BEAT_Z * (BEAT*t-(int)(BEAT*t));
;TODO: want subpixel accuracy!
;always on the screen - no overflow tests necessary

  push si
  fimul  word[di]       ; {baseZ=z*256 u}
  fistp  word[di]       ; store baseZ {u}
  pop  dx

  call I                ; draw sprite to xy

;drawing done: loop over all sprites

  loop S

;wait for vertical retrace start (70 fps cap)

  mov  dx,3DAh
V in   al,dx
  and  al,8
  jz   V

;copy and clear screen

  pusha
  imul bx,[bx+si],321
  xor  si,si
W mov  al,-124
  xchg al,[gs:si]
  add  al,124
  jnz  Z              ; empty: feedback
  mov  al,[es:bx+si]
  shr  al,1
Z not  al
  stosb
  inc  si
  inc  bx
  loop W
  popa

;ESC test, maybe end

  in   al,60h
  cmp  al,1  ; clears carry
  jnz  M
  int  20h
