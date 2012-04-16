;   n0y / NEVER ^ BCF
;
; released @ 0a000h 2003 in
; Spiegelberg/Jux (Germany)
;
; an intro in 62 byte

org 100h

les bp, [bx]
;push 0x0a000
;pop es

mov al, 0x13
int 0x10

dec bx
not si

screenloop:
  mov cl, 204
  xor di, di
  pageloop:
    mov dx, 320
    lineloop:
      mov [si], cx 
      add [si], ax 
      fild word [si]

      mov [si], ax
      fidiv word [si]
      fsin

      fild word [si]
      mov [si], dx
      fidivr word [si]
      fcos

      fmulp st1

      mov byte [si], 0xff
      fimul word [si]
      fistp word [si]

      and [si], dx
      movsb
      dec si
      dec dx
    jnz lineloop
  loop pageloop
  afterscreen:
  add al, bl
jnz screenloop
  neg bl
jmp afterscreen
