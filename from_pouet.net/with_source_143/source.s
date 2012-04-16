;by zZz //[KCN] group
;Makeevka/Ukraine

.model tiny
.386
.code
org 100h

Start:
       mov      gs,ax

       mov      ax,13h
       int      10h

       push     0a000h
       pop      es
lp1:
       mov      dx,3c8h
       mov      al,cl
       out      dx,al
       inc      dx
       xor      al,al
       out      dx,al
       out      dx,al
       mov      al,cl
       out      dx,al
       loop     lp1

       ;di=0,si=0
xor si,si
xor di,di
xor al,al
;---------------------------------------------main loop
px equ -2
py equ -4
pxf equ -6
pyf equ -8
pr equ -6
pxd equ -6
pyd equ -8

pdata equ data+100

pcount equ 100

lp2:
       mov      bp,8*pcount
lp3:
       movzx    ebx,word ptr [pdata+bp+py]

       lea      bx,word ptr [ebx+ebx*4]
       shl      bx,6
       add      bx,word ptr [pdata+bp+px]

       mov      byte ptr es:[bx],0ffh

       in       al,40h
       and      al,11b
       sub      al,1
       cbw
       add      word ptr [pdata+bp+px],ax

       in       al,40h
       and      al,11b
       sub      al,1
       cbw
       add      word ptr [pdata+bp+py],ax

       sub      bp,8
       jnz      lp3
;---------syncro
;       mov      al,gs:[46ch]
;lxp2:
;       cmp      al,gs:[46ch]
;       je       short lxp2
;---------video blank
       xor      si,si
lbv1:
       mov      al,es:[si]
       test     al,al
       jz       jbv1
       dec      al
       mov      es:[si],al
jbv1:
       dec      si
       jnz      lbv1
;---------kbd scan
jkeyscan:
       in       al,60h
       test     al,1
       jz       short lp2

       mov      ax,03h
       int      10h

       retn
data:
end start