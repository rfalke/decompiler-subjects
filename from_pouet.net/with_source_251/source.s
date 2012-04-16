; This source code is Copyright (C) 1999 by Gergely Kutenich (gk@scene.hu).
; This is the source code of the 256 bytes intro "Squirmer".
; It compiles with NASM (freeware; http://www.cryogen.com/Nasm).

SPOTSIZE equ 7
SPOTNUM equ 7200

; variable pointers
%define WLEN si-12
%define IDD si-10
%define ISY si-8
%define WSZ si-6
%define WDZ si-4
%define ACTFRAME si-2
%define IDRAW si                        ; the most often used is SI
%define ITEMP si+2


bits 16
org 0x100

main:

  fninit
  mov si,var

  ; set graphics mode
  mov al,0x13
  int 0x10

  ; set palette
  mov dx,0x3C8
  out dx,al
  inc dx
  .pal:
    push ax
    shr al,2
    out dx,al
    xor ax,ax
    out dx,al
    out dx,al
    pop ax
    inc al
  jnz .pal

core:

  ; draw object
  mov word[IDRAW],SPOTNUM
  .draw:

      ; calculate coordinates
      fldz                              ; y

      fild word[IDRAW]
      fsin
      fidiv word[ISY]
      fld1
      faddp st1
      fimul word[WLEN]                  ; z y

      fldz                              ; x z y

      fldpi
      fimul word[IDRAW]
      fidiv word[IDD]
      call rot2d                        ; rotate along y axis

      fild word[IDRAW]
      fidiv word[ISY]
      call rot2d                        ; rotate along x axis

      ; create oval shape
      fldl2e                            ; any fine constant will do
      fmulp st1

      ; rotate
      mov cx,3
      .rotate:
        fild word[IDRAW]
        fidiv word[IDD]
        fild word[ACTFRAME]
        fidiv word[ISY]
        fcos
        fmulp st1
        fild word[ACTFRAME]
        fimul word[ISY]
        fidiv word[WDZ]
        faddp st1
        call rot2d
      loop .rotate

      ; get z coordinate for color & z-buffer
      fist word[ITEMP]
      mov al,128
      sub al,[ITEMP]

      ; perform perspective transformation
      fiadd word[WDZ]
      fidivr word[WSZ]                  ; 1/z y x
      fmul st1,st0                      ; 1/z y/z x
      fmulp st2,st0                     ; y/z x/z
      fistp word[ITEMP]                 ; 1/z x
      mov di,[ITEMP]
      add di,100
      fistp word[ITEMP]
      mov bx,[ITEMP]
      add bx,buffer+160-20
      imul di,320
      add di,bx

      ; draw spot
      mov cl,SPOTSIZE
      .spoty:
        mov ch,SPOTSIZE
        .spotx:
          cmp al,[di]
          jbe .skippixel
          stosb
          dec di
          .skippixel:
          inc di
          dec ch
        jnz .spotx
        add di,320-SPOTSIZE
      loop .spoty

    dec word[IDRAW]
  jnz near .draw

  ; copy buffer to video memory
  push word 0xA000
  pop ES
  mov di,buffer
  mov cx,320*196
  .copy:
    mov ax,di
    add al,ch
    and al,0x20
    shr al,5
    adc al,1
    xchg al,[di]
    stosb
  loop .copy
  push DS
  pop ES

  inc word[ACTFRAME]

  ; repeat core loop until ESC is pressed
  in al,0x60
  cbw
  dec ax
jnz near core

  ; set text mode and exit to the OS
  mov al,3
  int 0x10
  retn




; rot2d - rotate a 3d point around one axis with the specified angle
; input                 output  (through FPU stack)
; yAngle x z y          y z x
; xAngle z y x          x z y
; zAngle y x z          z y x
rot2d:
; comments are for y axis
; x= x*cos(ya) - z*sin(ya);
; z= z*cos(ya) + x*sin(ya);
                                ; angle x z y
  fsincos                       ; cos sin x z y
  fld st2                       ; x cos sin x z y
  fmul st1                      ; x*cos cos sin x z y
  fld st4                       ; z x*cos cos sin x z y
  fmul st3                      ; z*sin x*cos cos sin x z y
  fsubp st1                     ; x*cos-z*sin cos sin x z y

  fxch st4                      ; z cos sin x x*cos-z*sin y
  fmulp st1                     ; z*cos sin x x*cos-z*sin y
  fxch st2                      ; x sin z*cos x*cos-z*sin y
  fmulp st1                     ; x*sin z*cos x*cos-z*sin y
  faddp st1                     ; x*sin+z*cos x*cos-z*sin y

  fxch st2                      ; y z_r x_r
  retn




; constants and variables
wLen dw 82
idd dw SPOTNUM
isy dw 12
wsz dw 256
wdz dw 400
actframe equ (wdz+2)
idraw equ (wdz+4)
itemp equ (wdz+6)
var equ (wdz+4)

; screen buffer. 640 bytes are enough for the code
buffer equ (320*2)

