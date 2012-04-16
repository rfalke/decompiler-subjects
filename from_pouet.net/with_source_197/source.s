;MMINDG8 - Master-Mind game in 2^8 Bytes
; Released for the Function 2005 party held in Budapest, Hungary!
; By: -=thE /P.A.P.+O./ (BraiN)KiLLeR=-
; [[other aliases: B_KiLLeR, KiLLeR, --> bkil <--, kil, k]]
; http://en.wikipedia.org/wiki/User:Bkil
; Killer gszi et net posta ditt net.
;
; ANONYMOUS PARTY VERSION IS _.com!
;
; ABOUT THE GAME
; The computer chooses a six digit decimal number who's digits are
; all different, and the player needs to make guesses (in a sane
; manner of course...), to which the program responses with a pair
; of numbers: the number of digits of the guess that matched the
; chosen number including correct placing, and the number of digits
; that are present in both the guess and the chosen number, but
; do not match in place. The game ends when the player has solved
; the combination or after 20 wrong guesses are made.
;
; USAGE
; Type 6 decimal digits and press enter. (Edit according to your shell.)
; Entering a null string exits the game.
;
; HINTS
; Try 111222, 333444, ... first, then try to narrow position ranges.
; Combine multiple questions into less guesses.
;
; INSPIRATION
; My (rather old) mobile had this game, but my friend with a different
; revision of the same mobile missed this feature. So, he asked me if
; I could make a game like this for a PC. Naturally I answered yes ;-)
;
; GREETINGS
; robigszi, TomBucZman, "LamXtra :-) UnDeCoder"
;
; The source of the code is in Flat Assembler 1.64. Run make to make.
; http://www.flatassembler.net
;
ORG	100H
; BX=0 CX=0xFF ES=CS=SS=DS DF=0
	MOV	DI,GUESS
	MOV	AL,7
;	MOV	CL,52
LUT:	STOSB
	INC	AX
	LOOP	LUT
	MOV	DI,NUM
;	XOR	BX,BX
	MOV	DS,BX
	MOV	BL,10
	MOV	SI,[46CH]
	PUSH	CS
	POP	DS
GNUM:	DEC	BX
	IMUL	SI,SI,8931
	MOV	AX,SI
	XOR	DX,DX
	DIV	BX
	MOV	BP,DX
	MOV	AL,[BX+TMP]
	XCHG	AL,[BP+TMP]
	STOSB
	CMP	BL,4
	JNZ	GNUM
	MOV	AL,"$"
	STOSB
	MOV	BP,20
	MOV	DL,255 AND TASK
	CALL	OUTTXT
	JMP	DGET
DGL:	MOV	SI,NUM
	MOV	DX,6030H
	MOV	CL,6
LOCCMP: LODSB
	MOV	BL,8
	CMP	AL,[BX+SI]
	JNZ	DISCMP
	INC	DX
DISCMP: DEC	BX	;OVERRUN BY 1, BUT #13 WON'T MATCH
	JZ	CORCMP
	CMP	AL,[BX+(GUESS-1+2)]
	JNZ	DISCMP
	INC	DH
CORCMP: LOOP	LOCCMP
	CMP	DL,"6"
	JZ	GOTIT
	SUB	DH,DL
	MOV	AH,2
	INT	21H
	MOV	DL,"/"
	INT	21H
	MOV	DL,DH
	INT	21H
DGET:	MOV	DL,255 AND NL
	CALL	OUTTXT
	MOV	DX,GUESS
	MOV	AH,0AH
	INT	21H
	MOV	SI,(GUESS+1)
	LODSB
	TEST	AL,AL
	JZ	EXIT
	CMP	AL,6
	JNZ	DGET
	DEC	BP
	JNZ	DGL
EXIT:	MOV	DL,255 AND NUM
OUTTXT: MOV	DH,1
	MOV	AH,9
	INT	21H
	RET
GOTIT:	MOV	DL,255 AND WIN
	JMP	OUTTXT
TASK:	DB "GUESS THE NUMBER! (BY BKIL) CORRECT GUESS AT RIGHT PLACE/WRONG PLACE"
NL:	DB 13,10,9,"$"
WIN:	DB ":-)$"
NUM:	RB	7
GUESS:	RB	1	;DB	7
	RB	8
	RB	32
TMP:	RB	10
