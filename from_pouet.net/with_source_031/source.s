; //////////////////// Movie Pattern 32byte /// Made by Easygn /// 2010.07.15 //////////


.MODEL TINY
.286
.8087
.CODE

start:

Mov  AL, 13h
Int  10h
Les  cx, [bx]               ; Standard Graphic mode Code

Mov     dx, 3C9h

P:                          ; Sort mono palette
mov  ax,cx
out  dx,al
out  dx,al
out  dx,al
loop P

chg:                         ; Set effect starting point!
  Inc   BX
  CMC
   tick:
      ADC    AL,   CH
      And    AL,   07Fh
      Xor    AL,   BH
      STOSB 
   Loop tick

Jmp   chg



 
END start