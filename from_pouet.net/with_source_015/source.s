; Waves [16 Bytes] ===============================;
;                                                 ;
; Written By Rain_Storm of www.dbfinteractive.com ;
;                                                 ;
;=================================================;
org  100h
les  si,[bx]
mov  al, 13h
int  10h
main:inc  ax
     dec  di
draw:adc  ax,di
     cmc
     stosb
     loop draw
     jmp  main