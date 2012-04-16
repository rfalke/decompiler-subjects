
bits 16
org 0x100

	mov al, 0x13
	int 0x10
	push 0xa000
	pop es
	xchg ax, bp

%if 0	
	mov ax, cs
	add ah, 0x10
	mov fs, ax
%endif

palette:
	mov	dx, 0x3C8
	mov	al, cl
	out	dx, al
	inc	dx
	shr al, 2
	out	dx, al
	shr al, 1
	out	dx, al
	out	dx, al
	loop palette
	
%if 0
displaypalette:
	mov ax, di
	xor dx, dx
	div word [linewidth]
	mov ax, dx
	stosb
	loop displaypalette
	
	in al, 0x60
	dec al
	jne displaypalette
	
	ret
%endif

%if 0
; the texture sucked....
texture:
	add dx, cx
	or dx, dx
	jns _nosub
	neg dx
_nosub:
	mov ax, dx
	add ax, ax
	mov [fs:ecx], ah
	loop texture
%endif

mainloop_pre:

	inc bp

mainloop:

	mov ax, di
	xor dx, dx
	div word [linewidth]

	sub ax, 100
	sub dx, 160

	; fetch direction vector
	mov [si], bp
	fild word [si]
	mov [si], dx
	fild word [si]	; dx z
	fidiv word [incstep]
	mov [si], ax
	fild word [si]	; dy dx z
	fidiv word [incstep]
	fldln2			; dz dy dx z

%if 0
	; normalize direction vector...
	fld st2
	fmul st0
	fld st2
	fmul st0
	fld st2
	fmul st0
	faddp st1
	faddp st1
	fsqrt
	fld1
	fdivp st1
	fstp dword [si]
	fmul dword [si]
	fxch st2
	fmul dword [si]
	fxch st1
	fmul dword [si]
	fxch st2
%endif

	; rotate the direction vector
	fld st3
	fidiv word [fogscale]
	fsincos
	fstp dword [si]
	fld st0
	fmul st2
	fxch st1
	fmul st4	; dx*ca dz*ca
	fld dword [si]
	fmul st3    ; dz*sa   dx*ca   dz*ca
	faddp st1	; dx'    dz*ca
	fld dword [si] ; sa     dx'    dz*ca
	fmul st5
	fsubr st2
	fstp st5
	fstp st2
	fstp st0

	; initialize t
	fldz			; t dz dy dx z

	mov al, 12		; number of raycast iterations.

eval:

	dec al
	jz enditer

	fld st3
	fmul st1
	fcos
	fld st3
	fmul st2
	fcos
	faddp st1
	fld st2
	fmul st2
	fadd st6
	fcos
	faddp st1
	fldln2
	faddp st1

	fld st0
	fldz
	fcomip st0, st1
	fstp st0
	fabs
	faddp st1

	jbe eval

enditer:

%if 1
	fld st3
	fmul st1
	fsin
	fabs
	fld st3
	fmul st2
	fsin
	fabs
	faddp st1
	fld st2
	fmul st2
	fadd st6
	fsin
	fabs
	faddp st1

	fimul word [funcscale]
	fistp word [si]
	mov bx, [si]
	
	fimul word [fogscale]
	f2xm1
	fistp word [si]
	mov dx, [si]
	
	shr dx, 4
	shr bx, 5
	sub bx, dx
	salc		; thx to iq / rgba for the trick!!
	not al
	and al, bl

%else

	fld st3
	fmul st1
	fld st3
	fmul st2
	fimul word [__const10]
	fistp word [si]
	mov bx, [si]
	fimul word [__const10]
	fistp word [si]
	mov dx, [si]
	mov bh, dl
	mov al, [fs:bx]

%endif

	finit

	
	stosb
	
	dec cx
	jnz mainloop
	
	in al, 0x60
	dec al
	jne mainloop_pre
	
	ret

incstep: dw 200
linewidth: dw 320
funcscale: dw 2880
fogscale: dw 100
; __const10: dw 7