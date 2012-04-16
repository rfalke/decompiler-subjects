;       Raster64, an 64byte intro
;       by Optimus/Dirty Minds/Nasty Bugs
;       Compiled with NASM
;       ---------------------------------
;
;       My first X86 asm intro ever actually :)
;       I am happy I got used a bit on X86 assembly
;       entirelly accidentally I decided to write this one
;       after I had noticed an 64byte asm intro on a new demoparty
;       I have only a bit of asm background from my Amstrad CPC on Z80
;       And still only a very small bit,. this is a newbie prod actually ;)
;       --------------------------------------------------------------------
;
;       Mail me at: mkargas@hotmail.com
;       Find me at: http://users.auth.gr/mkargas
;
;       Goodies to stare at:
;       http://users.auth.gr/mkargas/grscene
;       http://cpc-demoscene.paraknowya.com
;       http://cfemales.paraknowya.com
;       -----------------------


ORG 0100h

	
	
	CLI			; I guess this asm command disables
				; interrupts? I got it from another
				; source. Just with this one it can
				; run good in windows too now! :)
nextframe:

	MOV	DX,3DAh		; Wait for vertical retrace
vsync:
	IN	AL,DX
	AND	AL,8		; We check if the 4th bit is set
	JZ	vsync		; with the operation AND 00001000
				; Similar logic I use on hsync too

	INC	CL		; CL is used later for the flashing
	MOV	BX,399		; BX=The number of lines on screen
				; it is 400 I guess when dealing with
				; raster and hardware fx in general..

nextline:

	MOV	DX,3DAh		; Routine for horizontal syncing now

hsync1:
	IN	AL,DX		; hsync1 waits until start of line
	AND	AL,1
	JNZ	hsync1

hsync2:
	IN	AL,DX		; hsync2 waits until end of line
	AND	AL,1
	JZ	hsync2


	XOR	AL,AL		; AL=0
	MOV	DX,3C8h		; We change the pallete of the
	OUT	DX,AL		; background color 0, at the end of
	INC	DX		; each line. That's how the raster or
				; copper effects are beeing produced
				; Fortunatelly, on PC there is 
				; horizontal syncing too, except from
				; vertical, making this fx very easy
				; to synchronize (Oh come to CPC to 
				; see the real hard thing ;)

	MOV	AL,CL		; (RED) CL is for the color flashing
	OUT	DX,AL		; because it is increased each frame
	
	MOV	AL,BL		; (GREEN) This one is for the
	SHR	AL,1		; nice coloring..
	OUT	DX,AL
	
	ADD	CH,AL		; (BLUE) By adding the value of BL
	MOV	AL,CH		; (which is on AL now) to CH and then
	OUT	DX,AL		; outputting it, I produced this
				; colorfull projective like thing!
				; Just by trying random things :)


	DEC	BX		; BX decreases at each line
	
	JNZ	nextline



	IN	AL,60h		; check if Esc pressed
				; If Esc is pressed we get the value 1 at AL
	DEC	AX
	JNZ	nextframe


; ----- Restoring color of the background -----
; -- I just wanted to fill all the remaining --
; ----- bytes with something usefull ;) -------

	DEC	DX		; DX=3C8h
	OUT	DX,AL		; AL=0 from the previous loop
	INC	DX		; DX=3C9h
	OUT	DX,AL		; RED=0
	OUT	DX,AL		; GREEN=0
	OUT	DX,AL		; BLUE=0

RET
	DB	"64"		; And another 2byte filler just for fun =)
				; and sorry for the newbie comments
				; and possible mistakes...
				; I am really newbie :P
