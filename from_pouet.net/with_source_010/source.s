; Warped [15 Bytes] ==============================;
;                                                 ;
; Written By Rain_Storm of www.dbfinteractive.com ;
;                                                 ;
;=================================================;
     org  100h
     les  si,[bx]
     mov  al,13h
     int  10h
draw:sbb  ax,di
     cmc
     stosb
     loop draw
     inc  ax
     jmp  draw
