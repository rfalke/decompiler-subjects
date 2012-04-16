; Zrakova kura: a 32byte coding exercise by Rrrola
; original version: Visual Cortex by visy/Trilobit

  mov  al,13h
  int  10h
  mov  dx,3D4h  ; 256x200 video mode by y0bi/wAMMA
  mov  ah,20h
  out  dx,ax

  mov  dl,0C9h

  les  ax,[bx]

P out  dx,al    ; palette: blue-green-purple gradient
  adc  al,40h/3+80h
  jnz  P

X mov  ax,cx
  xor  al,ah    ; xor pattern
  stosb
  loop X

  in   al,60h   ; esc check
  dec  ax
  jnz  P        ; loopnz for scrolling effect

  ret
