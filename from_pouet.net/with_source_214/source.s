use16
org 100h

  ; graph mode
  mov   al, 13h
  int   10h

  ; palette
  mov   dx, 03c8h
  xor   al, al
  out   dx, al
  inc   dx
  
  mov   cl, 64
  black2red:
    mov   al, cl
    neg   al
    out   dx, al
    xor   al, al
    out   dx, al
    out   dx, al
  loop black2red

  mov   cl, 64
  black2blue:
    xor   al, al
    out   dx, al
    out   dx, al
    mov   al, cl
    dec   al
    out   dx, al
  loop black2blue

  mov   cl, 64
  black2green:
    xor   al, al
    out   dx, al
    mov   al, cl
    neg   al
    out   dx, al
    xor   al, al
    out   dx, al
  loop black2green

  mov   cl, 64
  black2yellow:
    mov   al, cl
    dec   al
    out   dx, al
    out   dx, al
    xor   al, al
    out   dx, al
  loop black2yellow


  ; al = 0
  mov   ah, 0a0h
  mov   es, ax

main_loop:
  ; reset graph offset
  xor   ax, ax
  mov   di, ax


  finit
  fild    [angle]
  fmul    [angle_map]
  fsincos
  fimul   [angle_unmap]
  fistp   [xdy]
  fimul   [angle_unmap]
  fistp   [xdx]


  mov   ax, [xdx]
  mov   bx, -160
  mul   bx
  mov   [xp], ax
  mov   ax, [xdy]
  mov   bx, -100
  mul   bx
  add   [xp], ax

  mov   ax, [xdx]
  mov   bx, 100
  mul   bx
  mov   [yp], ax
  mov   ax, [xdy]
  mov   bx, -160
  mul   bx
  add   [yp], ax

  ; vsync
  mov   dx, 03dah
  vsync:
    in    al, dx
    and   al, 08h
  jz    vsync

  mov   cx, 200
  y:
    push  cx

    ; tweak effect
    inc   [xdx]
    inc   [xdy]

    mov   ax, [xdy]
    add   [xp], ax
    mov   ax, [xdx]
    sub   [yp], ax

    mov   ax, [xp]
    mov   [xt], ax
    mov   ax, [yp]
    mov   [yt], ax

    mov   cx, 320
    x:
      mov   ax, [xdx]
      add   [xt], ax
      mov   ax, [xdy]
      add   [yt], ax

      mov   ax, [xt]
      xor   ax, [yt]

      mov   al, ah
      stosb
    loop  x
  pop   cx
  loop  y

  inc   [angle]

  ; keyhit
  mov   ah, 01h
  int   16h
  jnz   fin
  jmp   main_loop

  ; 4 movie recording
  ;dec   [cnt]
  ;jnz   main_loop


fin:
  ; text mode
  mov   ax, 0003h
  int   10h

  ret

  ; roto
  ;angle_map dd 0.024543692606170259675489401431871
  ; 2x slower roto
  angle_map dd 0.012271846303085129837744700715936
  angle_unmap dw 255

  ; 4 movie recording
  ;cnt dw 256

  
  angle dw ?

  xp dw ?
  yp dw ?
  xdx dw ?
  xdy dw ?
  xt dw ?
  yt dw ?

