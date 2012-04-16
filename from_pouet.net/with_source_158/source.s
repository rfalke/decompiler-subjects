;128b intro

;'Drips'

;by zZz //[KCN] research group
;Makeevka/Ukraine

;finished on 4.06.2000

;tasm 4.1, 123b w/o string

.model tiny
.386
.code
org 100h

Startx:;)

       mov      ax,13h
       int      10h

       push     0a000h
       pop      ds
lp1:
       mov      dx,3c8h
       mov      al,cl
       out      dx,al
       inc      dx
       xor      al,al
       out      dx,al
       out      dx,al
       mov      al,cl
       shl      al,4
       out      dx,al
       loop     lp1

       ;di=0,si=0
;---------------------------------------------main loop
jp4:
       in       al,40h
       add      bp,ax
       mov      dx,5
lp2:
       mov      si,bp
       cmp      dx,20
       je       short jp4
       inc      dx
       sub      bp,320

       mov      cx,dx
       neg      cx
jp2:
       push     dx
       mov      ax,dx
       mul      ax
       mov      bx,ax

       mov      ax,cx
       imul     ax

       pop      dx

       sub      bx,ax

       push     bx
       fild     word ptr ss:[-4]
       fsqrt
       fistp    word ptr ss:[-4]
       pop      bx
jp5:
       mov      byte ptr [si+bx],0fh
       neg      bx
       mov      byte ptr [si+bx],0fh

       add      si,320
       inc      cx
       cmp      cx,dx
       jle      short jp2

lp3:
       mov      al,[di]
       test     al,al
       jz       short jp3
       dec      al
       mov      [di],al
jp3:
       sub      di,bx
       dec      bx
       jnz      short lp3

       in       al,60h
       test     al,1
       jz       short lp2

       mov      ax,03h
       int      10h

       retn

string db '  zZz'
end startx