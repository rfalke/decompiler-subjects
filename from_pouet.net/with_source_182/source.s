; Nicer (but bigger :) version of coloured starfield...
; This version even double buffers and waits for vertical
; retrace!!! (You can even select which VGA mode to return
; at the end, see bottom)
;
; Programmed by Jomppa, originally in 2002,
; 'coloured' and optimized in 2004.
;
; Use NASM to compile
; Can't bother to stick 'short' to jumps, so use -O3 switch =)

BITS 16
ORG 0x100

start:	MOV		AL, 0x13
	INT		0x10

	MOV		DX, 0x3C8
	OUT		DX, AL
	INC		DX
.l:	PUSH		AX
	MOV		BH, AL
	XCHG		AX, BX
	SHL		BL, 1
;	AND		BL, 63

	MOV		CL, 3
.lll:	SHL		AH, 1
	SALC
	AND		AL, BL
	OUT		DX, AL
	LOOP		.lll

	POP		AX
	INC		AX
	JNS		.l

init:	MOV		CH, 2*4
	XCHG		AX, DI

.l:	MUL		CX
	INC		AX
	PUSH		AX
	TEST		CL, 3
	JNZ		.put
	MOV		AL, CL
	AND		AL, 11100000b
	DEC		AX
.put:	STOSW
	POP		AX
	LOOP		.l

main:	MOV		AX, CS
	ADD		AX, 0x1000
	MOV		ES, AX

	MOV		CH, 2
	MOV		SI, 0x8000

.l:	LODSW
	XCHG		AX, BP
	LODSW
	XCHG		AX, DI
	LODSW
	XCHG		AX, BX
	LODSW

	DEC		WORD [SI-2]
	AND		AX, 0x1FF
	JZ		.le

	PUSH		AX
	XCHG		AX, DI
	CWD
.x1:	IDIV		DI
	XCHG		AX, DI
	POP		AX
	XCHG		AX, BX
	CWD
.x2:	IDIV		BX

	ADD		AX, BYTE 100
	MOV		BX, 160
	ADD		DI, BX

	CMP		AX, 200
	JAE		.le
	SHL		BX, 1
	CMP		DI, BX
	JAE		.le

	MUL		BX
	ADD		DI, AX
	XCHG		AX, BP
	STOSB
.le:	LOOP		.l

	PUSH		ES
	POP		DS

.lt:	TEST		[DI], BYTE 31
	JZ		.cont
	DEC		BYTE [DI]
.cont:	INC		DI
	LOOP		.lt

	DEC		CX
	MOV		SI, DI
	PUSH		WORD 0xA000
	POP		ES
	REP	MOVSB
	PUSH		CS
	POP		DS

	MOV		DX, 0x3DA
.retr:	IN		AL, DX
	AND		AL, 8
	JZ		.retr

	MOV		AH, 1
	INT		0x16
	JZ		main

	AAD 		256-24
	INT		0x10
; Yeah, pressing different keys gets you to different
; video mode, pressing ESC gets to 80x25 text mode
; (MOV AX, 3 would mean one extra byte ;-)
	RET
