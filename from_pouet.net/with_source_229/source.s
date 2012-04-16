;  \                
;   \ /             
;  e X centricity   
;   / \             
;      \            

;Times:
; coding: 		05 hours
; optimizing:	41 hours

;Minimal requirements: Athlon or Pentium Pro (processor must support "FCOMI" instruction)

;					..by Assembler |30T
;assembler_bot@yahoo.com   http:\\assemblerbot.host.sk, http:\\assemblerbot.wz.cz
;2004

VECTORX equ 4
VECTORY	equ 2

[ORG 0x0100]
[SEGMENT .text]
	mov al,13h
	int 10h
	mov ax,ds
	inc ah
	mov es,ax

	;palette
palette:
	mov dx,03c8h
PHASE equ $
	mov al,cl
	out dx,al
	inc dx
	out dx,al
	shr al,2
	out dx,al
	out dx,al
	loop palette

nextframe:
	xor di,di

	mov bx,-100
rendery:
	mov dx,-160
renderx:
	fninit
	fldz

	;quadratic equation - a
	mov [si+VECTORX],dx
	fild word[si+VECTORX]
	
	;camera "rotation"
	fld dword [PHASE]
	fsqrt
	fsin
	fimul word [CONST100]
	faddp st1
	;wall animation - ON
	;fist word[si+VECTORX]
	
	fld st0
	fmul st0
	mov [si+VECTORY],bx	
	fild word[si+VECTORY]
	fmul st0
	faddp st1
	fadd st0
	
	;quadratic equation - b
	fxch st1
	fadd st0
	fchs
	
	;D - keep a,b on stack
	fld st1
	fadd st0
	fld st1
	fmul st0
	fsubrp st1

	;raytrace
	mov cl,4
delta:
	fldl2e
	fmul st3
	faddp st1
	
	;hit test
	fcomi st3
	jc nexttest ;jump if out of tunnel

	;possible hit
	call near hit
	jnc draw	;jump if hit
	call near hit
	jnc draw	;jump if hit

nexttest:	
	loop delta

draw:
	stosb

	inc dx
CAMERA_DEPTH equ $+2
	cmp dx,160
	jl near renderx

	inc bx
CONST100 equ $+2
	cmp bx,100
	jl near rendery

	;push-pop game ;-]
	push ds
	push es
	push es
	pop ds
	push word 0a000h
	pop es

	mov ch,320*200/256/2
	xor di,di
	xor si,si
	rep movsw
	pop es
	pop ds
    
    ;patche
	;xor si,si

	fldlg2
	fadd dword [PHASE]
	fstp dword [PHASE]

	mov ah,1
	int 16h
	jz near nextframe

CONST03 equ $+1
	mov ax,03h
	int 10h

	int 20h	
	
;hit from t
hit:
	;t1,2
	fld st0
	fsqrt
	jc skip_sign
	fchs
skip_sign:
	fld st2
	faddp st1
 	fdiv st3

	;intersection behind camera
	fcomi st4
	jc hit_ret_dec
	
	;possible intersection
	fild word [si+VECTORY]
	fmul st1

	fild word [si+VECTORX]
	fmul st2

	;texture eXcentricity
	fld1
	faddp st1
	
	fpatan
	
	;double spiral - OFF
	;fadd st0
	
	;level shading
	mov ah,cl
	mov al,64

	;Z-value
	fild word [CAMERA_DEPTH]
	fmul st2 

	;tunnels offset
	fadd dword [PHASE]
	mov [si],cx
	fisub word [si]

	;Z-texture
	fld st0
	fsin
	fabs
	fimul word [CONST100]
	fistp word [si]
	add ax,[si]
	shr ax,2
	
	;mix
	faddp st1

	fsin

	fcomi st5
	faddp st0

hit_ret_dec:
	faddp st0
	ret
			
heap:
