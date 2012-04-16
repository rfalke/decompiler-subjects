;-------------------------------------------------------------------------------
;                                                     . . . Smog 128b Intro . .
;                                    . . . By M|ndBlower // Termal Collapse . .
;                                                                . . . 1998 . .
;-------------------------------------------------------------------------------
.286
Code Segment
Assume cs:Code
Org 100h
;-------------------------------------------------------------------------------
Main:
;-------------------------------------------------------------------------------
 mov ah,0a0h
 mov es,ax
 add ax,ax
 mov ds,ax
 mov ax,13h
 int 10h

 mov dx,3c9h
L1:
 mov al,bl
 shr al,2
 out dx,al
 out dx,al
 out dx,al
 inc bx
jnz L1

Fx1:
 xor bx,bx
 mov dx,3
 mov si,di
Matrix:
 inc si
 mov al,byte ptr [si-322]
 add bx,ax
 mov al,byte ptr [si+318]
 add bx,ax
 mov al,byte ptr [si-2]
 add bx,ax
 dec dx
jnz Matrix
 mov al,byte ptr [di]
 sub bx,ax
 shl ax,2
 sub bx,ax
 shr bx,2
 mov ax,bx
 shr ax,8
 sub bx,ax
 mov ds:[di],bl
 inc di
loop Fx1
  
Fx2:
 xor bx,bx
 mov si,di
 inc si
 mov al,byte ptr [si-320]
 add bx,ax
 mov al,byte ptr [si-1]
 add bx,ax
 mov al,byte ptr [si+1]
 add bx,ax
 mov al,byte ptr [si+320]
 add bx,ax
 shr bx,2
 mov ds:[di],bl
 inc di    
loop Fx2
          
 dec cx   
 rep movsb 

 in al,60h
 dec al
jnz Fx1

 mov al,03h
 int 10h
 ret
;-------------------------------------------------------------------------------
Code EndS
End Main
;-------------------------------------------------------------------------------