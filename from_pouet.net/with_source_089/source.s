;Confetti
;A 64 byte intro by mados/TAP
;
;This intro is based on my Snow64b source code
;which was made for the X-Mas 2001 compo at www.256b.com and ranked 9th.
;Esc key is supported.
;
;http://maettig.com

%define bright 10110111b
%define dark   01011011b

code:
org 0100h

  mov al,13h
  int 10h

@MainLoop:
  push ds
  pop es		;Used in stosb
  mov di,Buffer+248*256-1
  std			;Set direction flag to decrement di

  mov cx,248*256
@SubLoop:
  mov al,[di]		;Get pixel
  shr al,1		;Divide pixel by 2

  test cx,1111111000101111b
  jnz @NoNew
  mov al,dark		;Put new pixels at top of screen
@NoNew:
  stosb			;Rewrite pixel
  mov si,di		;Will be used in add si,ax and in rep movsw

  cmp al,dark		;Check if this pixel is a snow flake
  jne @NoFlake
  in al,40h		;Get random number
  shr al,6
  add si,ax
  mov byte [si+320],bright
@NoFlake:
  loop @SubLoop

  hlt			;Delay

  push word 0A000h-(100h+64)/16
  pop es
  cld			;Clear direction flag to increment di
  mov ch,248/2
  rep movsw		;mov Screen,Buffer

  hlt			;Delay twice

  in al,60h		;Check keyboard
  dec al
  jnz @MainLoop
  ;mov al,03h
  ;int 10h
  ret

data:
  Buffer
