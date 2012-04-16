.model tiny
.code ; by BitIO / NULL (abelbg@arrakis.es)
.startup
.486

   mov al, 13h
   int 10h

   push cs
   pop ds
   mov si, offset datas

   push 0a000h
   pop es

@otro_frame:
   inc word ptr lx
   inc word ptr camx

   xor di, di
   mov word ptr j, -100
@otra_linea:

   mov cx,320
   push word ptr camx
   pop  word ptr i
@otro_punto:

   finit
   
   fild word ptr i  
   fmul st(0),st(0)      ; iý
   fild word ptr j
   fmul st(0), st(0)     ; jý
   fild word ptr d
   fmul st(0), st(0)     ; dý
   faddp st(1),st(0)
   faddp st(1),st(0)     ; a

   fild word ptr d       ; d
   fimul word ptr prof   ; Prof. de la camara
   fadd st(0), st(0)

   fild word ptr prof    ; Prof. de la camara
   fmul st(0),st(0)
   fisub word ptr r2     ; rý
   
   fld st(0)
   fmul st(0),st(3)
   fadd st(0),st(0)
   fadd st(0),st(0)      ; 4 a c 

   fld st(2)
   fmul st(0),st(0)      ; bý

   fsub st(0),st(1)      ; disc = bý - 4 a c
   ftst
   fstsw ax
   sahf
   mov ax,bx
   jc Pinta

   fsqrt                 ; sqrt(disc)

   fld st(4)
   fadd st(0), st(0)     ; 2 a

   fldz
   fsub st(0), st(5)
   fsub st(0), st(2)     ; - b - sqrt(disc) 

   fdiv st(0), st(1)     ; ( - b - sqrt(disc) ) / (2 a)
   fstp dword ptr t
   finit
   fld dword ptr t       ; st(0) = t

   fild word ptr i       ; i
   fmul st(0), st(1)

   fild word ptr j       ; j
   fmul st(0), st(2)
   
   fild word ptr d       ; d
   fmul st(0), st(3)
   fiadd word ptr prof   ; Prof.

   ; Ahora st(0) = z
   ;       st(1) = y
   ;       st(2) = x
   ;       st(3) = t

   ffree st(3)

   fld st(2)
   fisub word ptr lx
   fld st(2)
   fisub word ptr ly
   fld st(2)
   fisub word ptr lz

   fld st(0)
   fmul st(0),st(0)
   fld st(2)
   fmul st(0),st(0)
   faddp st(1),st(0)
   fld st(3)
   fmul st(0),st(0)
   faddp st(1),st(0)

   fsqrt
   fimul word ptr r

   fld st(1)   
   fmulp st(5),st(0)
   fld st(2)   
   fmulp st(6),st(0)
   fld st(3)
   fmul st(0),st(7)
   fadd st(0),st(5)
   fadd st(0),st(6)

   fdiv st(0), st(1)
   fimul word ptr rango
   fabs

   fistp word ptr t
   mov al, t

   add al,16

Pinta:
   stosb
   inc word ptr i
   dec cx
   jnz @otro_punto

   inc word ptr j
   cmp byte ptr j, 100
   jne @otra_linea

   cmp byte ptr camx + 1, 1
   je exit

   in al, 60h
   dec ax
   jnz @otro_frame

exit:
   mov al, 3h
   int 10h

   ret

datas:

   prof = [si+$-offset datas]
   dw -40       ; Prof. de la camara

   r2 = [si+$-offset datas]
   d = r2
   dw  225      ; rý

   r = [si+$-offset datas]
   rango = r
   dw  15

   lx = [si+$-offset datas]
   ly = [si+$-offset datas+2]
   lz = [si+$-offset datas+4]
   dw  -250,-100,-400 ; Luz

   camx = [si+$-offset datas]
   dw  -425

   j = [si+$-offset datas]

   i = [si+$-offset datas + 2]

   t = [si+$-offset datas + 4]

end

Intersecci¢n rayo-esfera
~~~~~~~~~~~~~~~~~~~~~~~~
xý + yý + zý = rý

(Ox + t Dx)ý + (Oy + t Dy)ý + (Oz + t Dz)ý = rý

  Oxý + 2 t Dx + tý Dxý +
  Oyý + 2 t Dy + tý Dyý +
  Ozý + 2 t Dz + tý Dzý   = rý

a = Dý
       -> ->
b = 2  D  O

c = Oý - rý

Compilar...
tasm null_rt.asm /zi /m5
tlink null_rt /t
