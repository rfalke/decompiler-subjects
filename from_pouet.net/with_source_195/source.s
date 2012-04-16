; Code Segment Wonder Land  under 256 bytes.
; by miURA==srw
; NASM or FASM -> 211 bytes.
;
;	2chparty (http://2chparty.net/)
;	final version
;

		org			100h

Width	equ		320
Height	equ		160

TextureSize		equ		128
TextureSizeBits	equ		7

{
	mov			al, 13h
	int			10h
	
	push		word 0a000h		;VRAM
	pop			es
	push		word 04000h		;バックバッファ
	pop			fs
	
	
	;
	;	main loop
	;
	{
		;
		;	バックバッファをクリア
		;
		push		es
		push		fs
		pop			es
		mov			ax, 5151h
		xor			di, di
		mov			cx, Width * Height / 2
		rep stosw
		pop			es
		
		
		mov			di, mem
		mov			cx, TextureSize * TextureSize
		mov			ax, TextureSize / 2
		mov			word [di + 2], ax
		{
			fninit
			
			mov			bx, cx
			xor			ax, ax
			mov			al, byte [cs:bx]
			mov			word [di], ax
			fild		word [di]
			
			mov			ax, cx
			and			ax, TextureSize - 1
			shl			ax, 1
			mov			word [di], ax
			fild		word [di]				; texX
			fisub		word [di + 2]			; texX-size/2
			fadd		st0, st1
			
			mov			ax, cx
			shr			ax, TextureSizeBits 
			mov			word [di], ax
			fild		word [di]
			fisub		word [di + 2]
			
			fld			st2						;texY
			
			;	texY, (texZ-size/2)*scale, (texX-size/2)*scale
			
			
			;	Y軸回転
			;	x' = cos(-t)*x + sin(-t)*z
			;	y' = y
			;	z' = -sin(-t)*x + cos(-t)*z
			fld			dword [di + 8]
			fchs
			fsincos						; sin(-t), cos(-t), Y, Z, X
			fld			st1				; cos(-t), sin(-t), cos(-t), Y, Z, X
			fmul		st0, st5		; cos(-t)*X, sin(-t), cos(-t), Y, Z, X
			fld			st1				; sin(-t), cos(-t)*X, sin(-t), cos(-t), Y, Z, X
			fmul		st0, st5		; sin(-t)*Z, cos(-t)*X, sin(-t), cos(-t), Y, Z, X
			fadd		st0, st1		; x'=cos(-t)*X+sin(-t)*Z, cos(-t)*X, sin(-t), cos(-t), Y, Z, X
			
			fxch		st2				; sin(-t), NN, x', cos(-t), Y, Z, X
			fmul		st0, st6		; sin(-t)*X, NN, x', cos(-t), Y, Z, X
			fchs						; -sin(-t)*X, NN, x', cos(-t), Y, Z, X
			fxch		st3				; cos(-t), NN, x', -sin(-t)*X, Y, Z, X
			fmul		st0, st5		; cos(-t)*Z, NN, x', -sin(-t)*X, Y, Z, X
			fadd		st0, st3		; z'=-sin(-t)*X+cos(-t)*Z, NN, x', -sin(-t)*X, Y, Z, X
			ffree		st6				; z', NN, x', NN, y', Z
			fld			st4				; y', z', NN, x', NN, y'
			fld			st3				; x', y', z', NN, x', NN, y'
			
			
			;	透視変換 & スクリーンサイズ
			mov			word [di], Width
			fdiv		st0, st2		; x/z, y, z
			fimul		word [di]		; x/z*w, y, z
			fxch		st1
			fiadd		word [ObjTranslateY]
			fdiv		st0, st2		; y/z, x/z*w, z
			fimul		word [di]		; y/z*w, x/z*w, z
			
			fxch		st1
			fistp		word [di + 4]	;x
			fxch		st1
			fistp		word [di]		;y
			
			imul		bx, word [di], Width;y * Width
			add			bx, word [di+4]	;x
			
			mov			si, cx
			mov			al, byte [cs:si]
			add			byte [fs:bx], al
			
			loop		continue
		}
		
		fld			dword [ObjRotAngleDelta]
		fld			dword [di + 8]
		fadd		st0, st1
		fst			dword [di + 8]
		
		
		;
		;	VRAMを更新(バックバッファ->VRAM転送)
		;
		push		ds
		push		fs
		pop			ds
		
		xor			si, si
		mov			di, Width * ((200 - Height) / 2)
		mov			cx, Width * Height / 2
		rep	movsw
		
		pop			ds
		
		
		;
		;	ESCキーチェック
		;
		xor			ax, ax
		in			al, 60h
		cbw
		dec			ax
		jz			break
		jmp			continue
	}
	
	mov			al, 03h
	int			10h
	ret
}

ObjTranslateY		dw	40
ObjRotAngleDelta	dd	0.002
mem:

