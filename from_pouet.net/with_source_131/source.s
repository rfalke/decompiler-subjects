; ------------------------------------------------------------------------------
; MSDOS SCROLLING CLOCOS - Cubos LOCOS! feat. WAVING WAVES
; by royconejo - http://www.royconejo.com
;
; 60 bytes without retrace / esc key
; 79 bytes full
; ------------------------------------------------------------------------------
; ------------------------------------------------------------------------------
; assemble with NASM CLOCOSW.ASM -o CLOCOSW.COM
; ------------------------------------------------------------------------------
;
%define FULL 1
use16
org 100h
;
		mov	 al, 13h
		int	 10h
		les	 bp, [bx]					; 0a000h -> es

		xor  ax, ax
		mov  dx, 3C9h
		mov  cx, 256
	PAL
		out  dx, al
		out	 dx, al
		out	 dx, al	
		add	 al, 4
		loop		PAL
	FRAME
		mov  di, 16						; offset
		add	 bl, 2
		xor  bh, bh
%if FULL
		mov  dl, 0xDA 	 				; 3DAh, sync
	RETRACE
		in   al, dx
		test al, 8
		jz   		RETRACE
		in   al, 60h	 				; esc key
		dec  al
		je   short	CHAU
%endif
	DIR
		cmp	 bl, 0
		jle			REV					; [-128/0] -> REV
		add  ah, bh
		jmp  short	LINE
	REV
		sub  ah, bl
	LINE
		inc	 bh
		cmp	 bh, 200
		je			FRAME
		mov	 cx, 320
	DRAWLINE
		mov  [es:di], ah
		inc  di							; if al -> stosb
		add	 ah, bh
		loop		DRAWLINE
		jmp  short	DIR
%if	FULL
	CHAU
		mov  ax, 3h						; text mode
		int  10h
		ret
%endif
