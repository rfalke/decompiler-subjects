; RiXtA's SELF - DISASSEMBLER
; anno domine	2000
; supported instructions are (in alphabetical order):
;	ADD AND CMP INT JNL JNZ MOV RET ROR





[org 100h]      
[segment .text]

	mov	ch,0
	int	10h
MAIN	
CYK	mov	bh,1
	mov	bl,ch
	mov	dh,[bx]
	mov	al,dh
	add	al,16
	and	al,248-128
	add	cl,bh
	jnz	CYK
	mov	bl,TAB-1
	mov	cl,3
	ror	al,cl
	add	bl,al
	add	bl,al
	add	bl,al
	add	dl,bh
	jnz	CYK
	add	ah,bh
	jnz	CYK
	mov	ah,2
	mov	dl,10
	int	21h
	mov	dl,13
	mov	cl,252
CYK2
	int	21h	
	add	bl,bh
VYPIS	mov	dl,[bx]
	add	cl,bh
	jnz	CYK2

	mov	dl,9
	int	21h

	mov	cl,dh
	mov	al,dh

	and	al,248
	cmp	al,176
	jnz	OBS4      
REGPRN
	mov	al,0CCh
	ror	al,cl
	and	al,3
	mov	dl,'a'
	add	dl,al


	int	21h
	mov	al,cl

	and	al,4
	mov	dl,'l'
	sub	dl,al
	int	21h

	cmp	ah,dh		
	jnz	OBS5
NN_INC	add	ch,bh
NN	
	mov	al,ch
	cmp	al,SEQR-256
	jnz	MAIN
	mov	ah,0
	mov	al,3
	int	10h
KONCI	ret

OBS3	cmp	al,0
	jnz	NN
	jnl	REGPRN

OBS5	mov	dl,','		
	int	21h
	mov	al,5
	mov	bl,ZTEXT-256
	cmp	dh,bh
	jnz	OBS16
	mov	cl,251
	jnl     VYPIS

OBS16	and	dh,dh
	jnz	OBS2
	add	dh,ah
SPR_SPC
	mov	al,cl
	mov	cl,3
	ror	al,cl
	mov	cl,al
	jnz	REGPRN
OBS4	
	mov	bl,5
	and	dh,bl

	mov	al,dh
	cmp	al,4
	jnz	OBS2
	mov	cl,8
	jnl	REGPRN
				
OBS2
	add	ch,bh
	mov	dl,138
	cmp	cl,dl
	mov	bl,ch
	mov	cl,[bx]
	jnz	OBS15
	add	dh,bh
	jnz	SPR_SPC
OBS15	cmp	al,5
	jnz	OBS3		

NUMPRN	mov	dh,254
NUMPR1	mov	al,cl
	mov	cl,4
	ror	al,cl
	mov	cl,al
N2
	and	al,15

	add	al,55
	cmp	al,65
	jnl	OBS6
	add	al,256-7
OBS6	mov	dl,al
	int	21h
	add	dh,bh
	jnz	NUMPR1
	jnl	NN_INC

SEQR	
TAB	
	db	"jnz"
	db	"jnl"
	db	"add"
	db	"mov"
ZTEXT	db	"[bx]"
	db 	"RX"
	db	"and"
	db 	"sub"
	db	"mov"
	db	"cmp"		
	db	"ret"
	db	"int"
	db	"ror"

