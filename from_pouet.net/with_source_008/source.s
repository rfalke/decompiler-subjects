; Ripples [14 Bytes] =============================;
;                                                 ;
; Written By Rain_Storm of www.dbfinteractive.com ;
;                                                 ;
;=================================================;
     org  100h
     les  si,[bx]
     mov  al,13h
     int  10h
draw:adc  ax,di
     stosb
     loop draw
     dec  ax
     jmp  draw
