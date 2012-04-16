;title:         Scooby Doo
;category:      256 byte intro
;platform:      PC/DOS...Win2K
;requirements:  65k free RAM
;compiler:      Flat Assembler 1.62
;build date:    07/10/2005

;author:        Akos Fekete (alias: Chut)
;e-mail:        fekete.akos@freemail.hu
;country:       Hungary

;release event: Function '05 (scene party)

;description:   This intro shows the face of Scooby.
;technique:     Arc-drawing algorithm with a special data extractor.
;---------------------------------------------------------------------
;assumed:       AX=0000 BX=0000 CX=00FF DX>0080
;               SI=0100 DI=FFFE BP=09xx SP=FFFE DF=0

		Org	0100h

macro		scodat	d1,d2,d3,d4	;coord,radius,angle,length
	      { dw	((15-d2)*4096)+d1
		db	(d3*16)+d4	}

SCOOBY_DOO:	mov	al,13h		;videomode: 320x200x8
		int	10h		;

		les	bx,[bx] 	;ES=9FFF/A000 - video segment

		mov	si,datas	;
maincyc:	cwd			;
		lodsw			;radius*4096+packed_coordinate
calc_radius:	imul	dx,dx,81	;
		shr	dx,6		;
		inc	dx		;DX=radius
		add	ax,1000h	;
		jnc	calc_radius	;
		shl	ax,2		;
calc_coord:	mov	ch,ah		;
		shl	ch,2		;
		add	ah,ch		;
		xchg	ax,di		;DI=origo

		lodsb			;angle*16+length
		aam	16		;
		xchg	cl,al		;
		shr	ax,1		;AX=angle
		inc	cx		;
		shl	cx,7		;CX=length

pixelcyc:	mov	bp,320		;
		pusha			;
		mov	bx,0FFF2h	;
		fild	word [bx+06]	;r
		fld	st0		;r r
		fild	word [bx+10]	;a r r
		fidiv	word [bx]	;a/320 r r
		fsincos 		;cos sin r r
		fmulp	st2,st		;sin r*cos r
		fmulp	st2,st		;r*cos r*sin
		frndint 		;
		fimul	word [bx]	;320*r*cos r*sin
		faddp	st1,st		;320*r*cos+r*sin
		fistp	dword [bx]	;BP=relative video coord
		popa			;AX,DX,CX,DI are protected
		mov	byte [es:di+bp],bh ;neon-blue
		inc	ax		;
		loop	pixelcyc	;
		xor	ax,0C80h	;
		jnz	maincyc 	;
		int	16h		;

;-----------------------------------------
datas:		scodat	    01dch,4,2-1,7
		scodat	    021fh,5,12,2
		scodat	    025ch,6,10,5
		scodat	    056dh,11,12,3
		scodat	    02dch,7,10,4
		scodat	    0297h,9,2,0
		scodat	    035ch,8,13,1
		scodat	    03a4h,12,10,1
		scodat	    02dch,6,2,2
		scodat	    03e1h,7,8,1
		scodat	    03e4h,8,6,4
		scodat	    03e5h,7,8,2
		scodat	    0265h,4,0,2
		scodat	    0227h,4,9,4
		scodat	    02eah,9,8,1
		scodat	    01aah,3,1,7
		scodat	    02a8h,8,2,3
		scodat	    03a8h,6,5,3
		scodat	    0429h,7,4,2
		scodat	    03e5h,4,0,15
		scodat	    0425h,2,0,15
		scodat	    0425h,1,0,15
		scodat	    0425h,0,0,15
		scodat	    0522h,8,7,2
		scodat	    0429h,5,4,5
		scodat	    042ah,2,1,15
		scodat	    042ah,1,1,15
		scodat	    042ah,0,1,15
		scodat	    03e9h,4,11,5
		scodat	    02eah,9,0,0
		scodat	    06f2h,12,7,1
		scodat	    04eeh,3,10,0
		scodat	    05f3h,10,7,2
		scodat	    0432h,9,13,4
		scodat	    04b4h,6,2,3
		scodat	    04f3h,8,1,4
		scodat	    03e9h,6,6,2
		scodat	    04ech,10,13,4
		scodat	    04ech,10,2,0
		scodat	    05b3h,6,14,4
		scodat	    072eh,4,9,6
		scodat	    07a6h,7,4,3
		scodat	    05e4h,4,4,3
		scodat	    0524h,4,13,2
		scodat	    05e5h,7,9,1
		scodat	    0673h,15,11,1
		scodat	    06a8h,13,14,2
		scodat	    07e4h,11,13,0
		scodat	    0a28h,10,4,1
		scodat	    06f0h,3,9,6
		scodat	    07afh,5,3,3
		scodat	    06abh,10,14,3
		scodat	    0729h,10,11,6
		scodat	    079fh,6,4,2
		scodat	    07aeh,1,14,10