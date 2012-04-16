;64b smalltro for 0A000h

;copyright (C) 2002 schnaader
;this code is free; you can redistribute it and/or modify it under
;the terms of the GNU General Public License ;)

cODE            sEGMENT pARA 'code'

                oRG 0100h

                aSSUME cs:cODE, ds:cODE, es:cODE, ss:cODE

pROG            pROC nEAR
        
sTART:          mov ah,0A0h     ;sorry, no space for 0A000h
                mov es,ax
                mov ax,13h
                int 10h
                xor cx,cx

@lOOP1:         push cx
                mov bl,cl
@lOOP:          push cx
                mul bx
                rol ax,1
                stosb
                pop cx
                loop @lOOP

                xor bx,bx
                xor dx,dx
                mov ah,02h
                int 10h
                mov ah,09
                mov dx,offset mESSAGE
                int 21h

                pop cx
                loop @lOOP1

pROG            eNDP

mESSAGE         db "schnaader 64b smalltro$"

cODE            eNDS
                eND sTART
