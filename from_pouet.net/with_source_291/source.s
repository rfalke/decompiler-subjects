[ORG 0x100]
[BITS 16]

%idefine BUFFER (0x200 + 320 )

mov al, 0x13
int 0x10

xor cx, cx

@palette:

mov dx, 0x03C8
mov ax, cx
out dx, al
inc dx
shr al, 2
out dx, al

mul al
shr ax, 6

out dx, al
shr ax, 1
out dx, al
	
loop @palette
	
; main
@mainloop:



	push ds
	pop es
	
	mov dx, 202	
	mov di, BUFFER - 320
	
	@loop1:
	
		mov cx, 320
	
		@loop2:
			
			mov bx, temp
			
			mov ax, 160
			sub ax, cx
			mov [bx], ax
			fild word [bx]
			
			mov ax, -120
			add ax, dx
			mov [bx], ax			
			fild word [bx]
			
			fld st1
			fld st1
			
			fmul st0, st0
			fxch st1, st0
			fmul st0, st0			
			faddp st1, st0
			
			fsqrt
			fsqrt
			
			
			mov si, frames		
			
			fldpi
			fmulp st1, st0
			
			fxch st2, st0
			
			fpatan
			fild word [si]
			fidiv word [fact6]	
			frndint
			
			fmulp st1, st0		
			
			fild word [si]			
			fidiv word [fact4]
			faddp st1, st0
			fsin		
			
			fild word [si]
			fidiv word [fact7]	
			frndint
			fmulp st1, st0
			
			faddp st1, st0
			
			fild word [si]
			fchs
			faddp st1, st0
			fcos
			
			fimul word [const127]
			fistp word [bx]
			
			mov ax, [bx]
			
			; add ax, 127, used as data
			db 0x05
const127:	db 0x7F
			db 0x00
			
			movzx bx, byte [di]
			
			add ax, bx
			shr ax, 1
			
			add ax, bx
			shr ax, 1			 
			
			stosb
						
			loop @loop2		
			
		dec dx
		jnz @loop1
		
		inc word [si]		
		
		
		; "music"
		out 0x61,al
		push ax
 		mov al, 0xB6 		
 		out 0x43, al
 		pop ax
  		add al,[si]
  		out 0x42,al  		
  		out 0x42,al
		
		
		
		; blur
		mov di, BUFFER - 320
		mov cx, (64000) + 320 * 2
		@blur_loop:
			
			movzx ax, [di]
			shl ax, 2
			
			movzx dx, [di+1]
			movzx bp, [di-1]
			movzx si, [di-320]
			movzx bx, [di+320]
			add ax, dx
			add ax, bp
			add ax, si
			add ax, bx
		
			shr ax, 3
			stosb
		loop @blur_loop
		
	
; wait retrace
	mov dx, 0x03DA
    @wait_retrace:
    	in al, dx
		test al, 8
		jz @wait_retrace 
    	
	; flip buffers		
		push word 0xA000
		pop es
		mov si, BUFFER
		xor di, di
		mov cx, 32000
		rep movsw
				
  
	
 	
 	mov ah, 1
	int 0x16
 	
	jz @mainloop

ret


@data:
frames: dw 0
temp:  dw 0

fact6: db 64    ; overlapping
fact7: dw 256
fact4: dw 5
db 0xAD

