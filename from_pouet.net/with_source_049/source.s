; PaRaLaXa
; [][]| \/ a 32-byte intro
; | |\|_/\ by Rrrola
; /\/\/\/\ <rrrola@gmail.com>

; greets to everyone who actually LIKES the standard VGA palette

; version 1: Paralaxa
;#version 2: Warp (no ESC support)

  org 100h      ; assume ah=0 bx=-2

  mov  al,13h   ; MCGA video mode
  int  10h
  les  di,[bx]  ; es=MemTop di=0x20cd

M push di       ; layer = 1
L

  mov  bl,1Bh   ; bx = iter
  stc           ; 1B|2B F9 = "sbb|sub di,cx": layer++
;#

  mov  ax,(0x1000000/320 + 205*256)/2
;#mov  ah,205   ;#keep previous al for distortion

  mul  di       ; dh = y/layer, dl = 0.8*x/layer

;#sub  di,cx    ;#layer++

  sub  dl,dh
;#xchg ax,dx
;#sub  ah,ch
;#sub  al,ah    ; cf = current layer hit

  inc  bx
  jnbe L+1      ; jump into "mov bl,1Bh"
;#dec  bx
;#jnbe L        ; if (hit || ++iter overflow) done

  xchg ax,bx
;#shr  al,3
;#add  al,13    ; al = color

  pop  di
  stosb         ; [adr++] = color
  loop M        ; cx = -(adr+time)

  in   al,60h   ; cx--, ESC=exit (7 bytes)
  dec  al
  loopnz M
  ret
;#loop M        ; cx--, infinite loop (2 bytes)
