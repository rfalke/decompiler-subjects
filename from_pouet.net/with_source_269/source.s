; scrsaver  /simple screen saver/
; 256 bytes intro
; by Galen/MAXTER /e-mail: maxter@abv.bg/
; for Fiasko 2001 demoparty

       .model tiny
       .code
       .386
       .startup

 start:
       mov  di,Offset Buf
       mov  al,16
       mov  cx,64000
       rep  stosb

       mov  ax,1130h
       mov  bh,3
       int  10h

       mov  ax,13h
       int  10h

 Full:
       mov  di,offset Buf
       mov  ax,y
       mov  bx,320
       mul  bx
       add  ax,x
       add  di,ax

       mov  ax,1f1fh
       xor  bx,bx
 NxtLtr:
       mov  dh,8
       movzx  si,fiasko[bx]
       shl  si,3
 LtrRow:
       mov  dl,80h
 LtrCol:
       test es:[bp+si],dl
       jz   NoPix
       mov  word ptr ds:[di],ax
       mov  word ptr ds:[di+320],ax
 NoPix:
       add  di,2
       shr  dl,1
       jnz  LtrCol
       inc  si
       add  di,624
       dec  dh
       jne  LtrRow
       sub  di,5104;2552
       inc  bx
       cmp  bx,9
       jb   NxtLtr

       cmp  x,160
       jne  Left
       mov  xinc,-1
       jmp  AddX
 Left:
       cmp  x,0
       jne  AddX
       mov  xinc,1
 AddX:
       mov  ax,xinc
       add  x,ax

       cmp  y,184
       jne  Upper
       mov  yinc,-1
       jmp  AddY
 Upper:
       cmp  y,0
       jne  AddY
       mov  yinc,1
 AddY:
       mov  ax,yinc
       add  y,ax


       mov  dx,3dah
 retrace:
       in   al,dx
       test al,8
       jz   retrace

       push es
       mov  ax,0a000h
       mov  es,ax
       xor  di,di
       mov  si,offset Buf
       mov  cx,64000
 Scan:
       lodsb
       stosb
       cmp  al,16
       je   Black
       dec  al
 Black:
       mov  ds:[si-1],al
       loop Scan
       pop  es

       in   al,60h
       dec  al
       jne  Full

Morphend:

       mov  ax,3
       int  10h

       mov  dx,offset Credz
       mov  ah,9
       int  21h
       ret

 Fiasko db 'FIASKO 01'
 Credz  db '(c)2001 Galen/MAXTER',24h
 x      dw 0
 y      dw 0
 xinc   dw ?
 yinc   dw ?
 Buf:

      end start