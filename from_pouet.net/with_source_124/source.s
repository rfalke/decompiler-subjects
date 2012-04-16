; een nonbuggende sql-server
; 70 

bits 16
section .data
section .text

org 100h
        jmp start
        db 'ile',0
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
start:
        mov al, 13h
        int 10h
        les bx, [bx]

        ;pop  es
        ;pop  es  ; danke niklas, aber nicht in win98 :(
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
        mov  al, 1
loep:
        mov  cl, bl
        add  cl, al
        jnz  skip
        neg  al
skip:
        xor  di, di
        mov  dl, 200
        
        add  bl, al
        push ax
aap:
        mov  cx, 320
hoer:
        mov  al, cl
        add  al, bl

        cmp  al, 160
        jb   noper
        sub al, bl
        sub al, bl
        add  al, dl

        ;sub  al, 16

;        push dx
        and  al, dl
;        pop  dx
noper:
        ;add  dl, cl  ;dl

        and  al, 31
        add  al, 16

        stosb
        loop hoer
        dec  dl
        jnz  aap

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;        pop  cx
        pop  ax
        jmp  loep

;        in   al, 60h
;        cmp  al, 1
;        mov  ax, cx
;        jne  loep

;        mov ax, 03h   ; 3
;        int 10h       ; 2
;        ret           ; 1
