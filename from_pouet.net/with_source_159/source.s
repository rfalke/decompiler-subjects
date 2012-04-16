MODEL TINY
IDEAL
CODESEG
p386
ORG 100H
START:
        MOV AX,0013h
        INT 10H
@PALLSET:
       PUSH CS
       POP DS

       mov cx,70h
@pal:

        mov     dx,3C8h
        mov     ax,cx

        out     dx,al
        inc     dx
        xor     al,al
        out     dx,al
        mov     al,cl
        out     dx,al
;        MOV AL,CL
        out     dx,al

       loop @pal




        PUSH 0A000H
        POP ES
        XOR DI,DI
        CALL RANDOM
@repi:
       Proc makeimage
       mov cx, 34000D

@image:

       add al,[es:di+1]
       add al,[es:di-1]
       add al,[es:di-319]
       add al,[es:di+319]
       shr al,2
       STOSB
       MOV [es:di],al
       INC DI
       loop @image
       endp makeimage


       MOV DI,320D

       in      al,60h ;looking for keypressed...
       dec     al
       jnz     @repi



@exit:
        mov ax,0003h
        int 10h

        mov ah,09h
        mov dx ,offset WORDZ
        int 21h

        RETN

        PROC RANDOM

        MOV CX,320D
@GENRAN:
        IN al,40h
        MOV [es:di],al
        INC DI
        LOOP @GENRAN
        RET
        ENDP RANDOM

;RMASS DB (256) DUP (?)
  WORDZ DB 'coded by BlackLight // EDGE','$'
END START