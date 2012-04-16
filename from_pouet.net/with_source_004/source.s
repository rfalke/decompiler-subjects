; Vscroll [11 Bytes] =============================;
;                                                 ;
; Written By Rain_Storm of www.dbfinteractive.com ;
;                                                 ;
;=================================================;
     org 100h
     les si,[bx]
     mov al,13h
     int 10h
main:stosb
     daa
     cmc
     jmp  main