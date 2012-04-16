;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; mrTony/PeonyGarden
;; 2009-10-3 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
   org 100h

   mov    al,13h
   int    10h

   push   word 0A000h 
   pop    ds

; Can you guess who made this palette?
 PAL:                             
   mov     dx,03C8h
   mov     al, cl
   out     dx, al
   inc     dx   
   out     dx, al
   xor     ax,ax
   out     dx, al
   out     dx, al
   loop    PAL


MAIN

  add bx,cx
  mov [bx],cl
  add  cx,12h
  
  jmp MAIN



