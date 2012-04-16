;   n0y / NEVER ^ BCF
;
; released @ 0a000h 2003
; in Spiegelberg/Jux (Germany)
;
; an craptro in 31 bytes
;


les bp, [bx]

mov al, 0x13
int 0x10

lp:
  push di
  mov si, sp
  fild word [si]
  pop dx
  push cx
  fidiv word [si]
  pop cx
  push bx
  fsin
  fimul word [si]
  fistp word [si]
  pop ax
  stosb
  dec si
loop lp
  inc bx
loop lp
