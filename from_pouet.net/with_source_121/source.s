;"L.O.A.P. in 64 Bytes"
;A just for fun 64 byte intro by mados/TAP.
;This is a sequel to "Life Of A Pixel" by Tomaes/TAP,
;released first at Ambience 2001.
;http://www.tap-home.de/
;mailto:mados@tap-home.de

code:
org 100h

  mov ax,0013h		;Set video mode
  int 10h

  mov ah,02h		;Set cursor position
  ;mov bh,0		;Page number
  mov dx,15+7*256	;Cursor column and row
  int 10h
  mov ah,09h		;Write string to standard output
  mov dx,text
  int 21h

  xor dh,dh		;Pixel row
  ;mov cl,0FFh		;cx is already 00FFh at start
  mov cx,319		;Pixel column
@JumpLoop:
  test cl,00010000b
  je @Reverse
  dec dx		;sub dl,2
  dec dx
@Reverse:
  inc dx
  mov ax,0C0Ah		;Write green graphics pixel
  ;mov bh,0		;Page number
  int 10h
  mov ax,0B00h		;Wait retrace
  int 10h
  mov ah,0Ch		;Write black graphics pixel
  int 10h
  loop @JumpLoop

  mov ax,0003h
  int 10h
  ret

data:
  text db "I'm back!$"
