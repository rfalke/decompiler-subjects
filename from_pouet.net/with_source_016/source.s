; //////////////// The Movie Pattern /// Made by Easygn //////////

.MODEL TINY
.CODE

start:
MOV     AL, 13h
INT     10h
LES     BP, [BX]           ; Standard Graphic mode Code

chg:                       ; Set effect starting point!
   Inc     DX
   Or     CH, AL
   tick:
      ADC    AL, DH
      STOSB
   Loop tick
Jmp chg
 
END start