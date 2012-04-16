; 128 byte coloured starfield, by Jomppa.
; Originally written in 2002, added colours and size optimized
; in 2004.
;
; Compile with NASM
; Doesn't return to text mode (had to get few bytes off ;)

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

	MOV		CL, 3
.lll:	SHL		AH, 1
	SALC
	AND		AL, BL
	OUT		DX, AL
	LOOP		.lll

	POP		AX
	INC		AX
	JNS		SHORT .l

init:	MOV		CH, 3*4
	XCHG		AX, DI

.l:	MUL		CX
	INC		AX
	PUSH		AX
	TEST		CL, 3
	JNZ		SHORT .put
	MOV		AL, CL
	AND		AL, 11100000b
	DEC		AX
.put:	STOSW
	POP		AX
	LOOP		.l

main:	PUSH		WORD 0xA000
	POP		ES

	MOV		CH, 3
	MOV		SI, 0x8000

.l:	LODSW
	XCHG		AX, BP
	LODSW
	XCHG		AX, DI
	LODSW
	XCHG		AX, BX
	LODSW

	DEC		WORD [SI-2]
	AAD		1
	JZ		SHORT .le

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
	MOV		BL, 160
	ADD		DI, BX

	CMP		AX, 200
	JAE		SHORT .le
	SHL		BX, 1
	CMP		DI, BX
	JAE		SHORT .le

	MUL		BX
	ADD		DI, AX
	XCHG		AX, BP
	STOSB
.le:	LOOP		.l

.lt:	MOV		AL, [ES:DI]
	TEST		AL, 31
	JZ		SHORT .cont
	DEC		AX
.cont:	STOSB
	LOOP		.lt

	MOV		AH, 1
	INT		0x16
	JZ		main

	;AAD		256-24
	;INT		0x10
	; Extra 4 bytes wouldn't hurt :)
	; (Yeah, that AAD trick would work only if you pressed ESC)
	RET
