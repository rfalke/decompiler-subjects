;MINESW8 - Minesweeper game in 2^8 Bytes
; Released for the Function 2005 party held in Budapest, Hungary!
; By: -=thE /P.A.P.+O./ (BraiN)KiLLeR=-
; [[other aliases: B_KiLLeR, KiLLeR, --> bkil <--, kil, k]]
; http://en.wikipedia.org/wiki/User:Bkil
; Killer gszi et net posta ditt net.
;
; (does NOT output any author information)
;
; ABOUT THE GAME
; Your objective is to hack every location that has no underlying
; mine (ie. that is "empty"). You can mark mine-fishy places for your
; convenience. Hacked empty locations show the number of surronding
; mines from one to eight, or show blank, if this amount is zero.
; A game ending with a mine (*) shown at your location indicates that
; you've lost. Otherwise, you have successfully completed the mission!
;
; CONTROLS:  MOVE          HACK   MARK   ESC
;                  up
;                5            4    6     exit
;             1  2   3
;          left down right
;
; HINTS
; Try to reveal the bottom of the map first. ;-)
; Start with hacking corners, then follow chains.
;
; IMPORTANT NOTE
; The screen is NOT wrap-around for your cursor, despite the fact that
; the display suggests otherwise!! I repeat: NO range checking is
; implemented for movement! The mines however do consider the map
; to be endless to the left and right, the wrapping can be understood
; from the source. In brief: a mine at (0,2) is considered to be
; at location (80,1), where (x,y) are coordinates of the mine,
; and x e [0,79], y e [0,24].
;
; INSPIRATION
; A friend of mine likes to "mine" a lot, so I've made him
; a version which he could put in a bootsector... :-)
;
; GREETINGS
; robigszi, TomBucZman, "LamXtra :-) UnDeCoder"
;
;History:
; 2004.12.03 18:15+4H	DONE, SMALL BUG: CNT WRAP L-R
;			223 BYTES
; 2004.12.11 18:30+1H	RECURSION, 291 BYTES
; 2004.12.19 16:00+3H	OPT: 276 BYTES
; 2005.02.11 19:00+1H	OPT: 274 BYTES
; 2005.10.06 23:30+2H	OPT: EVERYTHING STATIC, 255 BYTES :-)
; 2005.10.07 15:00+1H	BUGFIX: XP MODE3... 255+1 BYTES
;
; The source of the code is in Flat Assembler 1.64. Run make to make.
; http://www.flatassembler.net
;
ORG 100H
PROT_	EQU "#"
ESPC_	EQU "-"
RSPC_	EQU " "
MINC_	EQU "*"
BDX$	EQU 80	 ; 80 MAX
BDY$	EQU 25	 ; 25 MAX
MINE$	EQU 255
; BX=0 CX=0xFF ES=CS=SS=DS DF=0
	MOV	DI,DUPX0
	MOV	CH,10H
	REP
	STOSW
	MOV	AL,3
	INT	10H
;	IN	AL,40H
;	MOV	AH,AL
	MOV	BP,(BDX$*BDY$-MINE$)
	MOV	CL,MINE$
;	IN	AL,40H
;	XCHG	AX,SI
	MOV	DS,BX
	MOV	SI,[46CH]
	PUSH	CS
	POP	DS
GENMS:	INC	SI
	RCL	SI,CL
	ADD	SI,DX
	XCHG	AX,SI	;MOV
	XOR	DX,DX
	DIV	BP
	MOV	DI,FIELD
	ADD	DI,DX
	MOV	AL,1
	CMP	[DI],AL
	JZ	GENMS
	STOSB
	LOOP	GENMS
	PUSH	0B800H
	POP	ES
	XOR	DI,DI	;POP DI
	MOV	DL,BDY$
	MOV	AX,(ESPC_+700H)
DRAWMS: MOV	CL,BDX$
	REP
	STOSW
	DEC	DX
	JNZ	DRAWMS
GAME:	CALL	REFXY
	MOV	AH,2
	INT	10H
	MOV	AH,8
	INT	21H
	CBW
	SUB	AL,"1" ;"H" IF YOU WANT HIJKLM
	JNZ	N_LEFT
	DEC	DX
N_LEFT: DEC	AX
	JNZ	N_DOWN
	INC	DH
N_DOWN: DEC	AX
	JNZ	N_RIGH
	INC	DX
N_RIGH: DEC	AX
	JNZ	N_TOGL
	CALL	DOTOGL
N_TOGL: DEC	AX
	JNZ	N_UP
	DEC	DH
N_UP:	DEC	AX
	JNZ	N_PROT
	LODSB
	TEST	AL,40H
	JNZ	GAME
	XOR	BYTE [SI-1],80H
	SAR	AL,7
	AND	AL,(ESPC_-PROT_)
	ADD	AL,PROT_
	STOSB
N_PROT: CMP	AL,-27
JGAME:	JNZ	GAME
	INT	20H
DOTOGL: CMP	DL,BDX$
	JNC	DORET
	CMP	DH,BDY$
	JNC	DORET
	PUSH	DX
	CALL	REFXY
	LODSB
	AND	AX,0FFH
	JNZ	TG_S0
	OR	BYTE [SI-1],40H
	MOV	AL,[SI-2]
	ADD	AL,[SI]
	MOV	BL,BDX$
TG_S1:	ADD	AL,[SI+BX]
	ADD	AL,[SI+BX-1]
	ADD	AL,[SI+BX-2]
	NEG	BX
	JS	TG_S1
	AND	AL,0FH
	JNZ	TG_S2
	MOV	AL,RSPC_
	STOSB
	DEC	DX
	CALL	DOTOGL
	DEC	DH
	CALL	DOTOGL
	INC	DX
	CALL	DOTOGL
	INC	DX
	CALL	DOTOGL
	INC	DH
	CALL	DOTOGL
	INC	DH
	CALL	DOTOGL
	DEC	DX
	CALL	DOTOGL
	DEC	DX
	CALL	DOTOGL
	JMP	TG_M2
PRET:	POP	DX
DORET:	RET
TG_S2:	ADD	AL,"0"
	STOSB
TG_M2:	DEC	BP
	JZ	EXIT
TG_S0:	DEC	AX
	JNZ	PRET
	MOV	AL,MINC_
	STOSB
EXIT:	INT	20H
REFXY:
	MOV	AL,DH
	CBW
	;IMUL	DI,AX,-176
	DB 69H,0F8H,80,0FFH
	ADD	DI,DX
	ADD	DI,DI
	IMUL	AX,AX,BDX$
	ADD	AX,DX
	SUB	AH,DH
	ADD	AX,FIELD
	XCHG	AX,SI
	RET
	DB	"k"
DUPX0:	RB 81
FIELD:
;VOID HIDDEN	0X00
;MINE HIDDEN	0X01
;VOID MARKED	0X80
;MINE MARKED	0X81
;VOID VISIBLE	0XC0
