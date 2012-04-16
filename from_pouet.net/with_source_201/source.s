

SPEED	EQU 250			; 32767 / 5000 = 6.5534  < 2*PI

	
;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
; perln256,  a 256 bytetro.					    July, 2003
;
; SPEED define version .. 2 bytes more.
; size:  237 +2 .. 239 bytes.
;
;
; Z-Rot-Zoomer
; with procedural texture using Perlin-Noise
;
;
; Written by Carsten Koeckritz <Defjam/Checkpoint>
; http://checkpoint.atari.org
; http://defjam.atari.org
; defjam_cp@gmx.net
;
;
; Sorry for the too much commented source.
; Code could be even shorter, I know.
; Thanks to Baze's 256bytetros for the inspiration making me start
; coding this little thingie.
;
;
; you need Borland's tasm32 & tlink
; tasm32 perln256.asm
; tlink /t perln256.obj
;
; tabsize=8
;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------


        .386
	.MODEL TINY
	.CODE
	ORG	100h
start:

rsset	equ 0100h		;com start
timer	equ rsset		;word



; set videomode 13h
	mov	al,13h
	int	10h

; make some periodic colorpalette
	xor	cx,cx
colset:	
	mov	dx,3c8h
	mov	al,cl		; index
	out	dx,al		; select reg.
	inc	dx		; 3c9h datareg.
;
; red	= (index MODwrap 127)/2		
;
;	where (value MODwrap 127) is
;
;			result = value MOD 256;
;			if (result>127) result = 255-result;        	
;
	or	al,al		; >127 ?
	jns	short noMODwrap	
	not	al       	; 0...127...0
noMODwrap:			
	shr	al,1            ; 0....63...0   step 0.5
	out	dx,al		; red 	(6bit)
;
; green	= red
	out	dx,al		; green (6bit)
;
; blue	= (red*index)/256 + 19
	mul	cl
	mov	al,ah
	add	al,19		
	out	dx,al		; blue  (6bit)
	loop	short colset

;--------- mainloop ----------------------------------------------------------
mainloop:
	inc	word ptr[ds:timer]
	fninit

p104	equ $+0
	push	0a000h		;68,00,A0     0x6800 --> 104
	pop	es
        xor	di,di
; es.. 0xa000
; di.. index to vram


n99	equ $+1
	mov	ax,-100
filly:

n160	equ $+1
	mov	bx,-160			; -64 for   -64...256 range
fillx:
	pusha

; x =  x*cos + y*sin
; y = -x*sin + y*cos

        mov	si,es			;FPU comspace
        mov	word ptr[si],ax		;y
        fild	word ptr[si]		;y
	mov	word ptr[si],bx		;x
        fild	word ptr[si]		;x
;st:x  st1:y

;was: 4 instructions.. log(2)^2^2 * timer    ( 0.00821*timer )
;
	fild	word ptr[ds:timer]
;;fidiv	word ptr[ds:n160]	;timer/(-160)	 (-0.00625*timer)

	mov	word ptr[si],SPEED
	fidiv	word ptr[si]		


;st:angle  st1: x  st2: y
	fsincos

;st:cos  st1:sin  st2:x  st3:y

	fild	word ptr[p104]		;zoomamp= +104;
	fmul	st,st(1+1)		;zoom	= zoomamp*sin;
;st:zoom st1:cos  st2:sin  st3:x  st4:y

        fadd	st(2+1),st		;xmovement:  x=x+zoom;
	fmul	st(2+1),st		;x*zoom
	fmulp	st(3+1),st              ;y*zoom

;st:cos  st1:sin  st2:x  st3:y

	fld	st(2)			;x
;st:x  st1:cos  st2:sin  st3:x  st4:y
	fmul	st,st(1)		;x*cos
	fld	st(4)			;y
;st:y  st1:x*cos  st2:cos  st3:sin  st4:x  st5:y
	fmul	st,st(3)		;y*sin
	faddp	st(1),st	        ;x*cos+y*sin
	fistp	word ptr[si]
	mov	bx,[si]			;x 8:8

;st:cos  st1:sin  st2:x  st3:y
	fmulp	st(3),st		;y*cos
;st:sin  st1:x  st2:y*cos
	fmulp	st(1),st		;x*sin
;st:x*sin st1:y*cos
	fsubp	st(1),st		;y*cos-x*sin
	fistp	word ptr[si]
	mov	ax,[si]			;y 8:8
;
;FPU stack empty.  (fninit only necessary once)
	

; now do some simple procedural texture with Perlin-Noise applied
;
; texel =  Perlin(x/4 , y)  +  Perlin(x , y-x-96)/sqrt(2)
;
;		8:8 fixed point
;		ax.. y
;		bx.. x
;ProcTexel:
	push	ax
	push	bx
	sar	bx,2		;x/4
	call	Perlin
	mov	dh,bl

	pop	bx
	pop	ax
	sub	ax,bx		; y-x
	add	ax,si		;+phase shift  (0a000h = -96.0)
	call	Perlin
	mov	al,181		; 1/sqrt(2) * 256
	mul	bl
	add	dx,ax

	mov	byte ptr[es:byte ptr di],dh	;we like it slow'n'flickering...
	popa
	inc	di

	inc	bx
	cmp	bx,160		;1 byte shorter:  cmp bh,1    (bx start=-64  ... end: 256)
	jne	short fillx

	inc	ax
	cmp	al,100
	jne	short filly	
;
;ax is 0x0064 --> therefore we can do a <dec ax> instead <cbw, dec ax> or <dec al>
;		  in the escape-key check.

	in	al,60h		; keyboard port
	dec	ax		; 1 --> escape
	jnz	mainloop
;
;--------- end mainloop ------------------------------------------------------

; restore normal videomode
	mov	al,3
	int	10h
	ret			; fin.
;
;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------


;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
; Subroutines:  Perlin, Noise
;-----------------------------------------------------------------------------
;
;
;-----------------------------------------------------------------------------
Perlin:
;
; IN:
;	ax.. 8:8  y
;	bx.. 8:8  x
; OUT:
;	bl.. Perlin(y,x)	(bh is cleared)
;       ax,bx,cx,bp trashed

	push	dx

	pusha
	mov	ch,ah		; int y
;
; ch ..y
; bh ..x
;
; get noise lattice points
; lattice points storage:	ds:0a000h	(si=0a000h)
;
	mov	di,offset Noise
	call	di		; x 	, y
	inc	bh
	call	di		; x+1 	, y
	inc	ch
	call	di		; x+1 	, y+1
	dec	bh
	call	di		; x 	, y+1

        popa

; get fractional linear interpolation slopes
	xor	ah,ah
	mov	cx,ax		; dy
	xor	bh,bh	
	mov	bp,bx		; dx
;p0-->p3
	mov	bl,byte ptr[si]		;n0
	mov	al,byte ptr[si+3]	;n3
	sub	ax,bx			; n3-n0
	imul	cx			;*dy
	add	bl,ah			; n0 + ((n3-n0)*dy)>>fractBits
	push	bx			;p03 result	

;p1-->p2
	xor	ax,ax
	mov	bl,byte ptr[si+1]	;n1
	mov	al,byte ptr[si+2]	;n2
	sub	ax,bx			; n2-n1
	imul	cx			;*dy
	add	bl,ah			; n1 +((n2-n1)*dy)>>fractBits

	pop	ax			;p03 result
	xchg	ax,bx                   ;could be done shorter.. lazy.
;p03-->p12
; ax..p12
; bx..p03
	sub	ax,bx			; p12-p03
	imul	bp			; *dx
	add	bl,ah
	pop	dx
	ret
;-----------------------------------------------------------------------------


;-----------------------------------------------------------------------------
Noise:
;
; IN:
;	ch..y
;	bh..x
;
;       si...store noise     ds:(a000+Nx)
; OUT:
;	[si-1]..Noise(y,x)
;
;
; In fact, this is really no good Noise function,
; (better call it: "an oszillating function out of 2 variables" ;)
; but gives a nice pattern when used together with
; Perlin-Noise & ProcTexel.
; And it's short.
; And the 'object' in the pattern looks a bit like
; the ATARI(tm) Fuji(tm) sign.  :)
;
; noise = x*x*y + transpose     (MOD 256)

	mov	al,bh
	mul	bh			;x*x
	mul	ch      		;x*x*y
	add	al,211			;transpose

	mov	byte ptr[si],al		;store noise lattice point
	inc	si
	ret
;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
	END start
;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------
;-----------------------------------------------------------------------------

