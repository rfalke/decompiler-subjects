; This is nothing...... 
; a little 256b intro for function 2008
; Code Master S / mainloop
; Credits to Mentor / TBC for hints and help 

[ORG 100h]

%define BallPosStart	0
%define Temp			256
%define Value			512
%define randv			520

%define NUM_BALLS 4
%define NUM_ITER 16			
%define DITHER_SHIFT	2		
%define BALL_ARRAY_END (DataStart + BallPosStart) + 6 * NUM_BALLS 


start:	
		fninit
		mov 	al,13h
  		int 	10h
		push	word 0xa000
		pop		es	
		
		mov		ax, cs
		add		ah, 0x10
		mov		fs, ax
		
		;mov		cx, 20
.palette:
		mov		dx, 03c8h
		mov		ax, cx
		out		dx, al
		inc		dx
		neg		al
		out		dx, al
		out		dx, al
		out		dx, al  
		loop	.palette

		fldz					; st0 is time 
.mainloop:

		mov		bp, 3<<DITHER_SHIFT
				
		; Good but big random (should be done i 16 bit registers !)
		mov		eax, dword [DataStart + randv]
		imul	eax, 214013
		add		eax, 2531011
		mov		dword [DataStart + randv], eax
		
.iter_loop:
		mov		si, DataStart + BallPosStart
		fldz					; Value (sum of balls +  plane are saved at fpu stack)
.ball_loop:	
		mov		cx, bp
		;shl		cx, DITHER_SHIFT
		mov		ax, [DataStart + randv + 2]
		and		ax, (1 << DITHER_SHIFT) - 1
		or		cx, ax

		mov		ax, di
			
		xor		dx, dx
		mov		bx, 320
		idiv	bx				; Offset div / 320 in ax (y pixel pos) and offset % 320 in dx (x pixel pos)
		
		mov		bx, DataStart + Temp

		sub		dx, 160			
		imul	dx, cx			; dx = rayposx = ((rPixelBufferOffset % 320) - 160) * IterationCounter
		push	dx
		
		sub		ax, byte 100
		imul	ax, cx			; ax = rayposy = ((PixelBufferOffset / 320) - 100) * IterationCounter
		push	ax
		sar		ax, 1+DITHER_SHIFT
		sub		ax, 200
		mov		[bx], ax
		fiadd	word [bx]

		imul	cx, byte -100
		add		cx, 1000<<DITHER_SHIFT		; cx = rayposz = -100 * IterationCounter + 1000;
		push	cx

		mov		cx, 3			; Calcualte : Value + = DivThing / ((BallX - rayposx)^2 + (BallY - rayposy)^2 + (BallZ - rayposz)^2))
		fld		dword [DivThing]
		fldz
.sum_loop:
		pop		ax
		sar		ax, DITHER_SHIFT
		sub		ax, [si]
		mov		[bx], ax
		fild	word [bx]
		fmul	st0, st0
		faddp	
		lodsw					; add, si, 2
		loop	.sum_loop
		fdivp	
		faddp					; Add contribution from this ball
		
		cmp		si, BALL_ARRAY_END
		jnz		short .ball_loop
		
		fistp	word [bx]
		dec		word [bx]
		jns		short .draw
		
		add		bp, byte 1<<DITHER_SHIFT
		cmp		bp, byte NUM_ITER<<DITHER_SHIFT
		jnz		short .iter_loop
		
.draw:
		mov		ax, bp
		add		al, [fs:di]
		shr		ax, 1
		mov		[fs:di], al
		inc		di
		jnz		short .redundant_loop			; to make sure we can do a short jump ;-)
		
.copy_back_buffer:
		mov		al, [fs:di]
		mov		[es:di], al
		inc		di
		jnz		short .copy_back_buffer
				
		
		fadd	dword [Speed]

		; Dif = i / DifDiv; (i runs from 0 to NUM_BALLS*3)
		; BallPos[i] = sinf((time + dif) * i) * amp;
		mov		cl, byte NUM_BALLS * 3
		mov		si, DataStart + BallPosStart
.anim_loop:	
		mov		word [si], cx
		fild	word [si]			;sin(cx/DifDiv+time)*Amp
		fidiv	word [DifDiv]
		fadd	st0, st1
		fimul	word [si]
		fsin	
		fimul	word [Amp]
		fistp	word [si]
		lodsw								; add, si, 2 
		loop	.anim_loop		

 		; Check end condtion
 		in 		al, 60h
  		cbw
  		dec		ax
.redundant_loop:
  		jnz		near .mainloop
  		ret

fill: db 'Master S 2008'

align 4
DivThing: dd	60000000.0
Speed: dd		0.01
Amp: dw			500
DifDiv : dw		10

DataStart: 
