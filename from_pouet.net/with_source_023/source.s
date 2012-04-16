
;
; Strobe effect
; Copyright (c) 1997. Srdjan Dakic
;
; Email: dale@eunet.yu
; WWW:   http://solair.eunet.yu/~dale
;

MODEL TINY
.CODE
ORG 100h
Start:
    mov al,3
;---------------------------------------------------------
Strob:
    sbb bh,bh                   ; prepare color (CF=0 -> black, CF=1 -> whiet)
    int 10h                     ; set color (first pass will clear screen)
    cmc                         ; invert color 
    pushf                       ; save current color

    mov ah,86h                  ; pause
    mov cl,1
    int 15h

    popf
    in   al,60h
    dec  al
    mov  ax,1000h               ; prepare for next blank
    jnz  Strob                  ; if ESC wasn't pressed then, continue
    jnc  Strob                  ; else make sure that program finishes 
    ret                         ; with black screen

END Start

