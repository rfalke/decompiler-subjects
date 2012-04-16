; /\__/\ Mravenci v kredenci (Ants in the cupboard)
;  ('')  a pack of tiny intros
;   ()   by Rrrola <rrrola@gmail.com>
; greets to everyone who has to work his ass off every single day

  org 100h        ; assume ah=0 bx=0

  mov  al,13h
  int  10h        ; MCGA video mode
R;dec  byte[bp+di]
 ;xor  bx,bx
  lss  di,[bx]    ; bx=0, di=20CDh, ss=MemTop (usually 0x9FFF)

M inc  bx         ;<modified
  imul bp,bx,320
  mov  al,[bp+di] ; carry:adr = bx*320 + di
A adc  al,11
  and  al,0Fh     ; color = (color+11+carry) & 00001111b
  mov  [bp+di],al
B jz   M          ; if (color==0) restart
  or   al,043h
  mov  [byte si-100h+M],al ; {inc bx,inc di,dec bx,dec di}[color]
  jmp  M

; Version  #bytes A       B     R

; Mravenci    29  adc 11  jz M
; Ameisen     29  sbb 5d  jz M
; Fourmis     29  adc 4   jz M
; Ari         31  adc 4   jz R  +xor bx,bx
; Formicidae  31  adc 10  jz R
; Ants        33  sub 4   jz R  +dec byte[bp+di]
