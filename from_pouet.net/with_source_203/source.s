;**********************************************************
;
; FlOWER256
; Morphing tunnel of the overused XOR texture. :*)
; Another 256 Byte demo by(255 actually)
; Relsoft (Richard Eric M. Lope BSN RN)
; http://rel.betterwebber.com
; Assemble with FASM (FlatAssembler.net)
;
;**********************************************************
diameter	= 32
diamxscale	= (64 * diameter)
scx		= 160
scy		= 100
org 100h


;*****************************************************************
;*****************************************************************
;*****************************************************************

frame:	  push word 0a000h
ishort:   pop es

	  mov	al, 13h       ; mode 13h
	  int	10h		; we are now in 320x200x256

main_loop:
	inc word [frame]

	;flower
	;fold_off += 0.2
	fld [c_fold_off]
	fadd [fold_off]
	fstp [fold_off]
	;fold_scale = 0.5 * sin(frame / 40)
	fld [c_fold_scale]
	fild word [frame]		;st0 = frame; st1 = 0.3
	mov word [bp], 40
	fidiv word [bp]
	fsin
	fmul st0, st1
	fstp [fold_scale]
	fstp st0




	;===========tunnel
	mov dx,200
	xor di, di
      tunnel_yloop:
	mov cx,320
      tunnel_xloop:

	;atan2
	mov word [bp], scy
	sub [bp], dx
	fild word [bp]		    ;st0 = dy

	mov word [bp], scx
	sub [bp], cx
	fild word [bp]		    ;st0 = dx, st1 = dy

	fpatan				;st0 = atan(dy/dx) = atan(st1/st0)
	;flower
	;xdist = xdist * ((sin(fold_off + fold_num * angle) * fold_scale)+1)
	fstp dword [bp]
	fld dword [bp]			;restore
	fld dword [bp]
	fimul [fold_num]
	fadd [fold_off]
	fsin
	fmul [fold_scale]
	mov word [bp], 1
	fiadd word [bp]
	fstp dword [ishort]		    ;real_var =((sin(fold_off + fold_num * angle) * fold_scale)+1)

	fmul [c_scale]			;atan(st0))*256/pi
	fistp word [bp] 	    ;short_var = scaledpi
	mov bx,[bp]
	mov ax, scx
	sub ax, cx			;cmx
	mov [bp], ax
	fild word [bp]		    ;st0 = cmx
	fmul st0, st0			;cmx * cmx
	mov ax, scy
	sub ax, dx
	mov [bp], ax
	fild word [bp]		    ;st0 = cmy st1 = cmx*cmx
	fmul st0, st0			;cmy * cmy
	fadd st0, st1			;st0 cmx^2 + cmy^2
	fsqrt				;sqrt st0
	fmul dword [ishort]
	mov word [bp], diamxscale   ;st0 = diamxscale st1 = sqrt(dist)
	fild word [bp]
	fdiv st0, st1
	fistp word [bp]
	fstp st0
	fstp st0
	mov ax, word [bp]
	add ax, word [frame]
	add bx, word [frame]
	xor ax, bx
	and al, 31
	mov [es:di], al
	inc di
	dec cx
	jnz tunnel_xloop
	dec dx
	jnz tunnel_yloop

	in al,60h
	dec al
	jnz main_loop


	ret

fold_num	dw  7
fold_off	dd  ?
c_fold_off	dd  0.2
fold_scale	dd  ?
c_fold_scale	dd  0.3
c_scale 	dd  40.74


