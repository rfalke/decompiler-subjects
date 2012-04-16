;Kacheln (German for Tiling) Version 2
;A 64 byte intro by mados/TAP
;
;This is a modified version of the Kuechenkacheln intro by Ctulhu/Headcrash
;which was released at the 0a000h demo party in 2002.
;Esc key is not supported. Press Alt+Return and kill the program.
;
;http://maettig.com

org 100h
  les bp, [bx]
  mov al, 13h
  int 10h
  forever:
    add di, 321
    subloop:
      mov al, 00011110b
      test cl, al
      jz black
        test ch, al
        jz black
          mov al, ch
          xor al, cl
          and al, 00111000b
      black:
      stosb
      ;in al, 40h
      ;hlt
    loop subloop
  jmp short forever
