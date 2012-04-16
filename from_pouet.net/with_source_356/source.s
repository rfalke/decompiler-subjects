; -------------------------------------------------------------
; Pitman
; Ugly as fuck but...
;
; Written by Franck "hitchhikr" charlet / Tristar
;
; Assemble with:
; nasmw.exe -f bin 2k-pitman.asm -o 2k-pitman.com -s -O9
; -------------------------------------------------------------

; -------------------------------------------------------------
BLOCK_EMPTY		equ	0
BLOCK_LADDER		equ	1
BLOCK_DIAMOND		equ	2
BLOCK_BLUE		equ	3
BLOCK_BROWN		equ	4
BLOCK_WALL		equ	5
BLOCK_STARTPOS		equ	6

; -------------------------------------------------------------
			bits	16
			org	0x100

Start:			mov	ax,cs
			mov	ds,ax
			mov	es,ax

Restart:		; Reset some variables
			mov	word [Nbr_Moves],0
			mov	byte [Completed_Levels],0
			mov	byte [Won_Diamonds],0
			mov	byte [Won_Diamonds_Overall],0

			; Clear the screen
			mov	ax,0x03
			int	0x10

			; Disable the caret
			mov	ah,1
			mov	cx,0x2000
			int	0x10
Refresh_Menu:
			; Display menu
			mov	bp,Title1
			mov	cx,4
			mov	byte [Text_Pos_Y],4
			mov	byte [Text_Pos_X],53
			mov	word [Text_Len],19
			mov	bx,0x0003
			call	Disp_Text_Page

			; Display credits
			mov	bp,Title2
			mov	cx,5
			mov	byte [Text_Pos_Y],17
			mov	byte [Text_Pos_X],7
			mov	word [Text_Len],20
			mov	bx,0x0007
			call	Disp_Text_Page

			; ---
			; Display game title
			mov	dl,9
			xor	dh,dh
			xor	bh,bh
			mov	cx,25
Display_Logo_Y:		push	cx
			mov	bp,Logo
			mov	cx,2
			push	dx
Display_Logo_X:		push	cx
			inc	bh
			cmp	bh,15
			jne	Reset_Logo_Col
			mov	bh,1
Reset_Logo_Col:		cmp	bh,8
			jne	Skip_Logo_Col
			mov	bh,9
Skip_Logo_Col:		push	bx
			xor	bl,bl
			call	Set_Color
			add	cx,6
			mov	cx,3
			mov	bl,dl
			mov	bh,dh
			push	dx
			call	Print_String
			add	bp,3
			pop	dx
			pop	bx
			pop	cx
			add	dl,3
			loop	Display_Logo_X
			pop	dx
			pop	cx
			add	dl,2
			inc	dh
			loop	Display_Logo_Y

Main_Menu:		xor	ah,ah
			int	0x16
			cmp	al,0x1b
			je	Exit
			; *** Instructions ***
			cmp	al,"i"
			je	Menu_Instructions
			cmp	al,"I"
			je	Menu_Instructions
			; *** Game ***
			cmp	al,"p"
			je	Init_Game
			cmp	al,"P"
			je	Init_Game
			; *** Level selection ***
			cmp	al,"s"
			je	Level_Selection
			cmp	al,"S"
			je	Level_Selection
			jmp	Main_Menu

; -------------------------------------------------------------
; Display the instructions
Menu_Instructions:	mov	bp,Instructions
			mov	cx,9
			mov	byte [Text_Pos_Y],13
			mov	byte [Text_Pos_X],32
			mov	word [Text_Len],43
			mov	bx,0x0f05
			call	Disp_Text_Page
Remove_Instructions:	xor	ah,ah
			int	0x16
			cmp	al,0x1b
			jne	Remove_Instructions
			mov	bx,0x0100
			call	Set_Color
			mov	dl,13
Clear_Instructions:	mov	cx,43
			mov	bp,Empty_Instr
			mov	bl,32
			mov	bh,dl
			push	dx
			call	Print_String
			pop	dx
			inc	dl
			cmp	dl,13+9
			jne	Clear_Instructions
			jmp	Refresh_Menu

; -------------------------------------------------------------
; Display the level selector
Level_Selection:	mov	bp,Starting_Level
			mov	cx,3
			mov	byte [Text_Pos_Y],18
			mov	byte [Text_Pos_X],37
			mov	word [Text_Len],27
			mov	bx,0x0f05
			call	Disp_Text_Page
			mov	byte [Level_Number],1
Wait_Level_Number:	xor	ah,ah
			int	0x16
			xor	dl,dl
			cmp	al,0x1b
			je	Done_Level_Number
			or	dl,-1
			cmp	al,0xd
			je	Done_Level_Number
			cmp	al,0x30
			jb	Wait_Level_Number
			cmp	al,0x39
			ja	Wait_Level_Number
			sub	al,0x30
			mov	bl,al
			movzx	ax,byte [Level_Number]
			mov	cl,10
			idiv	cl
			xchg	ah,al
			mov	cl,10
			imul	cl
			add	al,bl
			mov	byte [Level_Number],al
			mov	cx,2
			mov	bx,0x133d
			call	Print_Number
			jmp	Wait_Level_Number
Done_Level_Number:	push	dx
			mov	bx,0x0100
			call	Set_Color
			mov	dl,18
Clear_Level_Selection:	mov	cx,27
			mov	bp,Empty_Instr
			mov	bl,37
			mov	bh,dl
			push	dx
			call	Print_String
			pop	dx
			inc	dl
			cmp	dl,18+3
			jne	Clear_Level_Selection
			pop	dx
			test	dl,dl
			jne	Validate_Level_Sel
			jmp	Refresh_Menu
Validate_Level_Sel:	cmp	byte [Level_Number],22
			jb	Max_Level_Number
			mov	byte [Level_Number],22
Max_Level_Number:	cmp	byte [Level_Number],1
			ja	Min_Level_Number
			mov	byte [Level_Number],1
Min_Level_Number:	dec	byte [Level_Number]
			jmp	Init_Game_Level

; -------------------------------------------------------------
; Init game
Init_Game:		mov	byte [Level_Number],0
Init_Game_Level:	mov	byte [Remaining_Lives],4

Init_Level:		xor	bx,bx
			call	Locate_Caret
			mov	bx,0x0100
			call	Set_Color
			mov	ax,0x03
			int	0x10
			mov	ah,1
			mov	cx,0x2000
			int	0x10

			; Not won yet...
			mov	byte [Won_Level],0

			mov	al,[Level_Number]
			cmp	al,22-1
			jbe	Reset_Level_Number
			mov	byte [Level_Number],0
Reset_Level_Number:
			mov	bx,0x0c00
			call	Set_Color

			; ---- 
			; Display the curent level number
			mov	cx,6
			mov	bp,Level
			mov	bx,0x0145
			call	Print_String
			xor	ah,ah
			mov	al,[Level_Number]
			inc	al
			mov	cx,2
			mov	bx,0x014B
			call	Print_Number

			; ---- 
			; Display the remaining lives
			mov	dx,1
Display_Remaining_Lives:
			mov	byte [Text_Pos_Y],3
			imul	ax,dx,3
			add	ax,64
			mov	[Text_Pos_X],al
			push	dx
			cmp	dl,[Remaining_Lives]
			jbe	Empty_Live	
			call	Erase_Pitman
			jmp	Done_Live
Empty_Live:		call	Disp_Pitman_Stop
Done_Live:		pop	dx
			inc	dl
			cmp	dl,5
			jne	Display_Remaining_Lives

			; ----
			; Display the number of won diamonds and completed levels
			mov	bx,0x0b00
			call	Set_Color
			mov	cx,8
			mov	bp,You_Win
			mov	bx,0x0845
			call	Print_String

			call	Display_Won
			call	Display_Moves

			; ---
			; Display menu
			mov	bx,0x0500
			call	Set_Color

			mov	bx,0x0f45
			mov	bp,Next
			mov	cx,8
			call	Print_String
			mov	bx,0x1049
			mov	bp,Levels
			mov	cx,5
			call	Print_String

			mov	bx,0x1245
			mov	bp,Redo
			mov	cx,8
			call	Print_String
			mov	bx,0x1349
			mov	bp,Levels
			mov	cx,5
			call	Print_String

			mov	bx,0x1545
			mov	bp,Menu
			mov	cx,8
			call	Print_String

			mov	bx,0x0d00
			call	Set_Color

			mov	bx,0x0f46
			mov	bp,_N
			mov	cx,1
			call	Print_String

			mov	bx,0x1246
			mov	bp,_R
			mov	cx,1
			call	Print_String

			mov	bx,0x1546
			mov	bp,_M
			mov	cx,1
			call	Print_String

			; ---
			; Display the level
			call	Display_Level

; -------------------------------------------------------------
; Game loop
Game_Loop:		xor	ah,ah
			int	0x16
			cmp	al,0x1b
			je	Exit
			cmp	al,"m"
			je	Restart
			cmp	al,"M"
			je	Restart

			cmp	al,"n"
			je	Next_Level
			cmp	al,"N"
			je	Next_Level
	
			cmp	al,"r"
			je	Redo_Level
			cmp	al,"R"
			je	Redo_Level

			cmp	byte [Won_Level],0
			jne	Game_Loop

			; Left
			cmp	ax,0x4b00
			jne	Move_Left
			cmp	byte [Pitman_Pos_X],0
			je	Game_Loop
			or	al,-1
			mov	bx,Disp_Pitman_Left
			xor	cl,cl
			jmp	Move_Pitman_Left_Right
Move_Left:		; Right
			cmp	ax,0x4d00
			jne	Move_Right
			cmp	byte [Pitman_Pos_X],10
			je	Game_Loop
			mov	al,1
			mov	bx,Disp_Pitman_Right
			xor	cl,cl
			jmp	Move_Pitman_Left_Right
Move_Right:		; Up
			cmp	ax,0x4800
			jne	Move_Up
			cmp	byte [Pitman_Pos_Y],0
			je	Game_Loop
			xor	al,al
			or	cl,-1
			jmp	Move_Pitman_Up_Down
Move_Up:		; Down
			cmp	ax,0x5000
			jne	Move_Down
			cmp	byte [Pitman_Pos_Y],7
			je	Game_Loop
			xor	al,al
			mov	cl,1
			jmp	Move_Pitman_Up_Down
Move_Down:		jmp	Game_Loop

Exit:			; Exit to dos
			mov	ax,0x4c00
			int	0x21

; -------------------------------------------------------------
; Handle movements
Move_Pitman_Up_Down:	mov	bx,Disp_Pitman_Stop
			call	Get_Current_Block
			call	Get_Adjacent_Block
			; Move if next block it's a ladder
			cmp	bx,BLOCK_LADDER
			jne	No_Move_Up_Down
			; Make sure that the ladder is below and not above (unreachable)
			cmp	cl,-1					; Want to move above ?
			jne	Move_Up_Down
			cmp	dx,BLOCK_LADDER				; Then check if current block is a ladder
			jne	No_Move
			jmp	Move_Up_Down
No_Move_Up_Down:	; if next block is not empty
			cmp	bx,BLOCK_EMPTY
			jne	No_Move
			; and if current block is a ladder
			cmp	dx,BLOCK_LADDER
			jne	No_Move
Move_Up_Down:		jmp	Go_Move
Move_Pitman_Left_Right:	push	ax
			push	cx
			push	bx					; Save pitman image
			call	Get_Adjacent_Block
			shl	bx,2
			mov	di,[Actions_Table+bx]			; Action
			mov	dx,[Actions_Table+2+bx]			; Related procedure
			pop	bx
			; Can't move on that block (wall)
			dec	di
			js	No_Move
			; Move to an empty block
			dec	di
			js	Standard_Move
			; Other moves, run related procedure
			call	dx
			jnz	Standard_Move
			; Can't move (0)
			pop	cx
			pop	ax
			call	Convert_To_Screen_Coords
			call	Disp_Pitman_Stop
			jmp	Game_Loop
Standard_Move:		call	Get_Current_Block
			pop	cx
			pop	ax
Go_Move:		add	[Pitman_Pos_X],al
			add	[Pitman_Pos_Y],cl
			inc	word [Nbr_Moves]
			call	Display_Moves
			cmp	byte [Pitman_Pos_Y],7
			je	Walls_Falling
			; Check if position below contains an empty block
			; if yes then pitman must fall
			mov	cl,1
			xor	al,al
			call	Get_Current_Block
			call	Get_Adjacent_Block
			cmp	dx,BLOCK_LADDER				; Don't fall
			je	Walls_Falling
			cmp	bx,BLOCK_EMPTY				; Blocked
			jne	Walls_Falling
			xor	al,al
			mov	cl,1
			jmp	Go_Move
Walls_Falling:		
			; Make the brown walls and diamonds to fall
			xor	cx,cx
Move_Level_X:		mov	dx,6
			xor	di,di
Move_Level_Y:		mov	bx,cx					; X
			imul	ax,dx,11				; Y
			add	bx,ax					; Calc coord
			mov	al,BLOCK_BROWN
			cmp	byte [Storage_Level+bx],al
			je	Move_Brown_Wall
			mov	al,BLOCK_DIAMOND
			cmp	byte [Storage_Level+bx],al
			jne	No_Brown_Wall
Move_Brown_Wall:	push	dx
			inc	dx					; Next line
			; Can't fall on the player
			cmp	dl,[Pitman_Pos_Y]
			jne	No_Crunch_Player
			cmp	cl,[Pitman_Pos_X]
			je	Brown_Wall_Blocked
No_Crunch_Player:	mov	si,cx					; X
			imul	dx,dx,11				; Y
			add	si,dx					; Calc coord
			cmp	byte [Storage_Level+si],BLOCK_EMPTY
			jne	Brown_Wall_Blocked
			mov	byte [Storage_Level+bx],BLOCK_EMPTY	; Displace it
			mov	byte [Storage_Level+si],al
			inc	di					; We moved a block
Brown_Wall_Blocked:	pop	dx
No_Brown_Wall:		dec	dx
			jns	Move_Level_Y				; 6 to 0
			test	di,di					; Check if any moved blocks
			jne	Move_Level_X				; are standing in the air
			inc	cx
			cmp	cx,11
			jne	Move_Level_X
			mov	byte [Text_Pos_Y],0
			xor	dx,dx
Refresh_Level_Y:	mov	byte [Text_Pos_X],0
			xor	cx,cx
Refresh_Level_X:	mov	bx,cx
			imul	ax,dx,11
			add	bx,ax
			push	dx
			push	cx
			mov	cx,bx					; Save index value
			movzx	bx,byte [Storage_Level+bx]
			add	bx,bx
			mov	bx,[Blocks_Table+bx]
			call	bx
			pop	cx
			pop	dx
			; Display pitman during refreshing
			cmp	byte [Pitman_Pos_X],cl
			jne	Refresh_Pitman
			cmp	byte [Pitman_Pos_Y],dl
			jne	Refresh_Pitman
			push	word [Text_Pos_X]			; Save pos X and Y
			push	cx
			push	dx
			call	Convert_To_Screen_Coords
			call	Disp_Pitman_Stop
			pop	dx
			pop	cx
			pop	word [Text_Pos_X]
Refresh_Pitman:		add	byte [Text_Pos_X],6
			inc	cx
			cmp	cx,11
			jne	Refresh_Level_X
			add	byte [Text_Pos_Y],3
			inc	dx
			cmp	dx,8
			jne	Refresh_Level_Y
No_Move:		jmp	Game_Loop

			; (0=nothing 1=simple move 2=move+raise arm) / Proc or 0
Actions_Table:		dw	1,0
			dw	1,0
			dw	2,Destroy_Diamond
			dw	2,Destroy
			dw	2,Displace
			dw	0,0					; wall
			dw	1,0					; start position is an empty block now

; Destroy a block
Destroy_Diamond:	inc	byte [Won_Diamonds]			; Increase the number of won diamond
Destroy:		push	ax
			push	cx
			call	Convert_To_Screen_Coords
			call	bx					; Raise specified arm
			xor	bx,bx
			call	Set_Color
			pop	cx
			pop	ax
			call	Get_Adjacent_Block
			mov	byte [Storage_Level+si],BLOCK_EMPTY	; Remove it from the level
			push	cx
			mov	bl,[Pitman_Pos_X]
			add	bl,al
			mov	al,bl
			mov	cl,6
			imul	cl
			mov	dl,al
			pop	cx
			mov	al,[Pitman_Pos_Y]
			add	al,cl
			mov	cl,3
			imul	cl
			mov	dh,al
			mov	[Text_Pos_X],dl
			mov	[Text_Pos_Y],dh
			mov	ax,3
			call	Sleep
			call	Disp_Empty
			; Check end of level
			mov	al,[Won_Diamonds]
			cmp	[Max_Diamonds],al
			jne	Level_Finished
			mov	byte [Won_Level],1
			inc	byte [Completed_Levels]
			call	Convert_To_Screen_Coords
			mov	cx,4
Pitman_Plays_Donkey_Kong:
			push	cx
			call	Disp_Pitman_Left
			mov	ax,3
			call	Sleep
			call	Disp_Pitman_Right
			mov	ax,3
			call	Sleep
			pop	cx
			loop	Pitman_Plays_Donkey_Kong
			mov	bx,0x0f05
			call	Set_Color
			mov	bx,0x0f46
			mov	bp,_N
			mov	cx,1
			call	Print_String
			mov	bx,0x1246
			mov	bp,_R
			mov	cx,1
			call	Print_String
			mov	bx,0x1546
			mov	bp,_M
			mov	cx,1
			call	Print_String
			call	Display_Won
			xor	al,al
			ret
Level_Finished:		call	Display_Won
			or	al,-1
			ret

; Move a block
Displace:		push	ax
			push	cx
			call	Convert_To_Screen_Coords
			call	bx					; Raise specified arm
			pop	cx
			pop	ax
			cmp	al,1
			je	Displace_Right
			; Going left...
			cmp	byte [Pitman_Pos_X],1			; Can't go further
			jbe	No_Displace
Displace_LR:		push	ax
			add	al,al					; Get block next to the block we want to move
			call	Get_Adjacent_Block
			pop	ax
			cmp	bx,BLOCK_EMPTY				; Check if it is empty
			jne	No_Displace
			mov	byte [Storage_Level+si],BLOCK_BROWN	; Move it
			call	Get_Adjacent_Block
			mov	byte [Storage_Level+si],BLOCK_EMPTY	; Empty block next to player
			mov	ax,3
			call	Sleep
			or	al,-1
			ret
			; Going right...
Displace_Right:		cmp	byte [Pitman_Pos_X],9			; Can't go further
			jae	No_Displace
			jmp	Displace_LR
No_Displace:		xor	al,al
			ret

Get_Current_Block:	movzx	bx,[Pitman_Pos_Y]
			imul	bx,11
			movzx	dx,[Pitman_Pos_X]
			add	bx,dx
			movzx	dx,byte [Storage_Level+bx]		; Get current data
			ret

Get_Adjacent_Block:	push	dx
			movzx	bx,[Pitman_Pos_Y]
			add	bl,cl
			imul	bx,11
			movzx	dx,[Pitman_Pos_X]
			add	dl,al
			add	bx,dx
			mov	si,bx
			movzx	bx,byte [Storage_Level+bx]		; Get adjacent data
			pop	dx
			ret

; -------------------------------------------------------------
; Jump to next level
Next_Level:		inc	byte [Level_Number]
Redo_Level:		movzx	ax,byte [Won_Diamonds]
			mov	byte [Won_Diamonds],0
			add	word [Won_Diamonds_Overall],ax
			mov	word [Nbr_Moves],0
			cmp	byte [Won_Level],0			; If level is won then it's alright
			jne	No_Live_Penalty
			cmp	byte [Remaining_Lives],0
			je	Display_No_Lives
			dec	byte [Remaining_Lives]
No_Live_Penalty:	jmp	Init_Level

; -------------------------------------------------------------
; No lives left
Display_No_Lives:	mov	bx,0x0f05
			call	Set_Color
			mov	bx,0x1744
			mov	bp,No_Lives
			mov	cx,10
			call	Print_String
			mov	bx,0x1546
			mov	bp,_M
			mov	cx,1
			call	Print_String
			jmp	Game_Loop

; -------------------------------------------------------------
; Display the number of diamonds/levels won by the player
Display_Won:		; Diamonds
			mov	bx,0x0b00
			call	Set_Color
			xor	ah,ah
			mov	al,[Won_Diamonds]
			add	ax,[Won_Diamonds_Overall]
			push	ax
			mov	cx,3
			mov	bx,0x0a43
			call	Print_Number
			pop	ax
			mov	bp,Diamonds
			mov	cx,7
			cmp	ax,1
			jbe	Multi_Diamonds
			inc	cx
Multi_Diamonds:		mov	bx,0x0a47
			call	Print_String
			; Levels
			xor	ah,ah
			mov	al,[Completed_Levels]
			mov	cx,2
			mov	bx,0x0b44
			call	Print_Number
			mov	bp,Levels
			mov	cx,5
			cmp	byte [Completed_Levels],1
			jbe	Multi_Levels
			inc	cx
Multi_Levels:		mov	bx,0x0b47
			jmp	Print_String

; -------------------------------------------------------------
; Display the number of player's moves / level
Display_Moves:		mov	bx,0x0900
			call	Set_Color
			mov	ax,[Nbr_Moves]
			mov	cx,5
			mov	bx,0x0d43
			call	Print_Number
			mov	bp,Moves
			mov	cx,4
			cmp	word [Nbr_Moves],1
			jbe	Multi_Moves
			mov	cx,5
Multi_Moves:		mov	bx,0x0d49
			jmp	Print_String

; -------------------------------------------------------------
; Display the main character
Convert_To_Screen_Coords:
			movzx	ax,[Pitman_Pos_X]
			imul	ax,6
			inc	al
			mov	[Text_Pos_X],al
			movzx	ax,[Pitman_Pos_Y]
			imul	ax,3
			mov	[Text_Pos_Y],al
			ret
Display_Pitman_Start:	; Discard start position (previously saved in cx)
			xchg	bx,cx
			mov	byte [Storage_Level+bx],BLOCK_EMPTY
			mov	al,[Text_Pos_Y]
			mov	bl,3
			idiv	bl
			mov	[Pitman_Pos_Y],al
			mov	al,[Text_Pos_X]
			mov	bl,6
			idiv	bl
			mov	[Pitman_Pos_X],al
			inc	byte [Text_Pos_X]
			call	Disp_Pitman_Stop
			dec	byte [Text_Pos_X]
			ret
Disp_Pitman_Stop:	mov	bp,Pitman_Stop
Display_Pitman:		mov	cx,3
			mov	word [Text_Len],3
			mov	bx,0x0700
			jmp	Disp_Text_Page
Disp_Pitman_Left:	mov	bp,Pitman_Left
			jmp	Display_Pitman
Disp_Pitman_Right:	mov	bp,Pitman_Right
			jmp	Display_Pitman
Erase_Pitman:		mov	bp,Block_Erase
			jmp	Display_Pitman

; -------------------------------------------------------------
; Display the differents blocks
Disp_Empty:		mov	bp,Block_Erase
			mov	bx,0x0400
Display_Block:		mov	cx,3
			mov	word [Text_Len],6
			jmp	Disp_Text_Page
Disp_Ladder:		mov	bp,Block_Ladder
			mov	bx,0x0800
			jmp	Display_Block
Disp_Diamond:		mov	bp,Block_Diamond
			mov	bx,0x0e00
			jmp	Display_Block
Disp_Blue:		mov	bp,Block_Blue
			mov	bx,0x0900
			jmp	Display_Block
Disp_Brown:		mov	bp,Block_Brown
			mov	bx,0x0006
			jmp	Display_Block
Disp_Wall:		mov	bp,Block_Wall
			mov	bx,0x0304
			jmp	Display_Block

Blocks_Table:		dw	Disp_Empty
			dw	Disp_Ladder
			dw	Disp_Diamond
			dw	Disp_Blue
			dw	Disp_Brown
			dw	Disp_Wall
			dw	Display_Pitman_Start

; -------------------------------------------------------------
; Display a level
Display_Level:		movzx	ax,byte [Level_Number]			; Copy the level
			imul	bx,ax,(8*11)+1				; in a place where we can modify it
			lea	si,[Level_1+bx]
			mov	di,Storage_Level
			mov	cx,(8*11)
			cld
			lodsb						; Number of diamond in this level
			mov	[Max_Diamonds],al
			rep	movsb					; Copy datas now
Refresh_Level:		mov	byte [Text_Pos_Y],0
			xor	dx,dx
Display_Level_Y:	mov	byte [Text_Pos_X],0
			xor	cx,cx
Display_Level_X:	mov	bx,cx
			imul	ax,dx,11
			add	bx,ax
			push	dx
			push	cx
			mov	cx,bx					; Save index value
			movzx	bx,byte [Storage_Level+bx]
			add	bx,bx
			mov	bx,[Blocks_Table+bx]
			call	bx
			pop	cx
			pop	dx
			add	byte [Text_Pos_X],6
			inc	cx
			cmp	cx,11
			jne	Display_Level_X
			add	byte [Text_Pos_Y],3
			inc	dx
			cmp	dx,8
			jne	Display_Level_Y
			ret

; -------------------------------------------------------------

; ---
; Convert a decimal number to ASCII
;
Dec_To_Asc:		push	bx
			mov	bp,Number
			add	bp,cx
Dec_To_Asc_Loop:	mov	bx,10
			cwd
			idiv	bx
			add	dx,"0"
			dec	bp
			mov	[bp],dl
			loop	Dec_To_Asc_Loop
			pop	bx
			ret

; ---
; display a page of text
Disp_Text_Page:		call	Set_Color
			push	word [Text_Pos_X]
Loop_Disp_Text:		push	cx
			push	bp
			mov	cx,[Text_Len]
			mov	bl,[Text_Pos_X]
			mov	bh,[Text_Pos_Y]
			call	Print_String
			pop	bp
			pop	cx
			add	bp,[Text_Len]
			inc	byte [Text_Pos_Y]
			loop	Loop_Disp_Text
			pop	word [Text_Pos_X]
			ret

; ---
; ax=number
; cx=number of chars to write
Print_Number:		push	cx
			call	Dec_To_Asc
			pop	cx
			mov	bp,Number

; ---
; cx=number of chars to write
; bp=string
Print_String:		call	Locate_Caret
			mov	ah,0x13
			xor	al,al
			xor	bh,bh
			mov	bl,[Colors]
			mov	dh,[Caret_X]
			mov	dl,[Caret_Y]
			int	0x10
			ret

; ---
; Suspend execution
; ax=time to wait
Sleep:			mov	[Time_To_Wait],ax
			cli
			mov	al,00110110b
			out	0x43,al
			jmp	$+2
			xor	cx,cx
			mov	al,cl
			out	0x40,al
			jmp	$+2
			mov	al,ch
			out	0x40,al
			jmp	$+2
			sti
			mov	byte [Push_Timer],0
			mov	ax,0x351c
			int	0x21
			push	bx
			push	es
			mov	ax,0x3509
			int	0x21
			push	bx
			push	es
			mov	ax,cs
			mov	es,ax
			mov	dx,Timer_Int
			mov	ax,0x251c
			int	0x21
			mov	dx,Keyboard_Int
			mov	ax,0x2509
			int	0x21
Wait_Timer_Completion:	cmp	byte [cs:Push_Timer],0
			je	Wait_Timer_Completion
			pop	ds
			pop	dx
			mov	ax,0x2509
			int	0x21
			pop	ds
			pop	dx
			mov	ax,0x251c
			int	0x21
			mov	ax,cs
			mov	ds,ax
			ret
Timer_Int:		dec	word [cs:Time_To_Wait]
			jne	Stop_Timer
			inc	byte [cs:Push_Timer]
Stop_Timer:		iret
Keyboard_Int:		push	ax
WaitKBOutb:		in	al,0x64
			test	al,1
			jz	WaitKBOutb
			in	al,$60
			mov	al,$20
			out	$20,al
			pop	ax
			iret

; ---
; set used color
; bl=background color
; bh=foreground color
Set_Color:		shl	bl,4
			mov	[Colors],bl
			or	[Colors],bh
			ret

; ---
; set caret position
; bl = row
; bh = column
Locate_Caret:		mov	[Caret_X],bh
			mov	[Caret_Y],bl
			ret

; -------------------------------------------------------------
; Datas

Starting_Level:		db	"                           "
			db	" Select starting level: 01 "
			db	"       "
Title1:			db	"                   "
			db	" Brought to you by "
			db	" hitchhikr/tristar"
Title2:			db	"                    "
			db	" [I] Instructions   "
			db	" [P] Play           "
			db	" [S] Starting level"
Block_Erase:
Empty_Instr:
Blank_Char:
Instructions:		db	"                                           "
			db	" The Goal of this game is to grab          "
			db	" all diamonds present in each level.       "
			db	"                                           "
			db	" - You can push brown walls                "
			db	" - You can destroy blue walls              "
			db	" - You can use ladders to move up and down "
			db	"                                           "
			db	"                                     <ESC> "
Logo:			db	"PITMAN"
You_Win:		db	"You win:"
Level:			db	"Level "
Levels:			db	"Levels"
Diamonds:		db	"Diamonds"
Next:			db	"[ ] Next"
Redo:			db	"[ ] Redo"
Menu:			db	"[ ] Menu"
_N:
No_Lives:		db	"No lives !"
_M:
Moves:			db	"Moves"
Number:			dw	"     "
_R:			db	"R"
Pitman_Stop:		db	"  "
			db	"(²)"
			db	"ÚÄ¿"
Pitman_Left:		db	"\ "
			db	" ²)"
			db	"ÄÄ¿"
Pitman_Right:		db	" /"
			db	"(² "
			db	"ÚÄÄ"
Block_Ladder:		db	" ºÄÄº "
			db	" ºÄÄº "
			db	" ºÄÄº"
Block_Diamond:		db	"  °°  "
			db	" °²²° "
			db	"°²ÛÛ²°"
Block_Blue:		db	"°²ÛÛ²°"
			db	"²ÛÛÛÛ²"
			db	"°²ÛÛ²°"
Block_Brown:		db	"ÎÎÎÎÎÎ"
			db	"ÎÎÎÎÎÎ"
			db	"ÎÎÎÎÎÎ"
Block_Wall:		db	"ÜßÜßÜß"
			db	"ÜßÜßÜß"
			db	"ÜßÜßÜß"
Time_To_Wait:		dw	0
Push_Timer:		db	0
Nbr_Moves:		dw	0
Completed_Levels:	db	0
Won_Diamonds:		db	0
Won_Diamonds_Overall:	dw	0
Max_Diamonds:		db	0
Won_Level:		db	0
Colors:			db	0
Caret_X:		db	0
Caret_Y:		db	0
Remaining_Lives:	db	0
Text_Len:		dw	0
Level_Number:		db	0
Text_Pos_X:		db	0	; Must stay groupir
Text_Pos_Y:		db	0	; Must stay groupir
X:			db	0
Y:			db	0
Pitman_Pos_X:		db	0
Pitman_Pos_Y:		db	0
Storage_Level:		db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
			db	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
;level len=89 bytes (11*8)+1 (1st byte contains number of diamonds)
Level_1:		db	01,0,0,0,4,0,0,0,0,0,0,0,1,5,5,4,5,0,5,5,5,5,1,1,0,0,4,0,5,0,0,0,0,1,1,0,6,3,0,0,0,0,0,0,1
			db	5,5,5,5,0,5,0,0,0,0,1,0,0,0,0,5,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,4,1,5,5,5,0,5,5,5,0,5,5,5
Level_2:		db	05,0,0,4,0,0,0,0,0,0,0,0,0,0,4,0,4,0,0,0,0,0,0,0,0,5,1,2,3,0,0,0,0,0,0,0,5,1,3,2,2,0,0,0,2
			db	0,0,5,1,3,3,3,0,3,3,3,2,0,5,1,0,0,3,3,3,0,0,5,0,5,1,0,0,0,0,0,0,6,5,0,5,5,5,5,5,5,5,5,5
Level_3:		db	07,0,0,0,0,6,0,5,0,4,0,0,0,0,0,0,4,1,5,1,4,0,0,0,0,0,2,4,1,5,1,2,0,0,0,0,2,3,3,1,5,1,2,2,0
			db	0,5,2,1,1,1,5,1,5,5,0,0,5,5,5,5,5,5,1,5,2,0,0,0,0,0,0,0,0,1,5,5,0,0,5,5,5,5,5,5,5,5,5,0
Level_4:		db	11,0,0,0,0,0,4,0,0,0,0,0,0,2,0,0,0,3,0,0,0,0,2,0,3,1,0,1,2,5,4,5,0,1,0,0,0,2,1,3,5,2,5,4,0
			db	0,2,0,3,1,0,3,4,3,2,0,2,3,1,0,1,6,3,3,3,4,0,3,0,0,2,0,5,5,5,3,3,1,3,2,1,3,5,2,3,3,3,3,1
Level_5:		db	05,5,5,5,5,5,5,5,5,5,5,5,4,2,4,0,0,0,0,5,3,3,5,4,4,4,1,5,1,0,5,3,3,5,3,3,3,0,0,1,0,5,3,3,5
			db	0,0,2,1,5,1,0,5,3,3,5,3,4,4,0,0,1,0,5,3,3,5,2,1,2,1,5,1,0,5,3,3,5,1,0,2,0,0,1,6,5,5,5,5
Level_6:		db	05,0,0,4,0,0,0,0,0,0,0,0,0,6,4,0,4,0,0,0,0,0,0,1,3,3,0,1,0,0,0,0,0,0,1,0,0,3,3,3,3,1,1,1,0
			db	3,3,3,3,2,0,0,1,5,4,2,0,0,0,0,3,0,5,5,0,4,4,2,0,0,0,0,5,0,0,1,2,4,5,0,5,3,1,0,1,5,1,3,2
Level_7:		db	03,0,1,1,0,4,0,0,0,5,5,5,0,1,4,0,4,0,0,6,5,3,5,0,1,4,0,2,5,5,1,5,3,5,0,1,4,0,1,4,4,1,5,3,5
			db	5,1,5,0,2,3,3,1,5,3,5,5,1,0,0,1,1,5,5,5,3,5,5,5,0,0,5,1,5,3,3,3,5,3,5,0,2,1,1,5,5,5,5,5
Level_8:		db	04,3,3,3,0,5,0,0,1,1,1,1,3,3,3,6,5,2,0,3,0,2,1,3,3,3,1,5,4,0,3,2,4,1,3,4,4,1,5,3,0,3,5,4,1
			db	0,3,4,1,5,0,0,3,0,4,1,0,0,3,1,5,1,1,1,0,3,1,0,2,5,1,5,5,5,1,5,5,1,0,1,1,1,0,0,0,0,0,0,1
Level_9:		db	04,0,0,0,0,4,0,0,2,0,5,3,1,5,5,1,4,0,1,5,0,5,3,1,0,5,1,2,0,1,5,0,5,3,1,0,5,1,2,0,5,5,0,5,5
			db	1,0,5,1,4,0,5,5,0,0,1,1,0,5,5,5,3,0,0,0,5,1,1,0,0,2,0,0,5,5,5,5,1,1,0,0,1,0,0,6,0,0,0,1
Level_10:		db	04,0,0,6,0,0,0,5,3,3,0,2,0,4,3,3,3,1,5,2,3,3,4,0,2,3,3,1,1,5,4,3,1,3,0,3,0,3,1,5,3,3,3,1,3
			db	0,0,4,0,1,5,1,3,3,1,3,0,3,5,3,1,0,5,1,0,1,3,1,5,1,0,3,0,3,5,1,3,3,3,0,1,3,3,1,3,3,1,2,3
Level_11:		db	04,0,0,4,0,0,1,0,0,4,0,0,0,0,5,5,5,1,0,0,4,0,0,0,0,0,0,0,0,0,0,4,1,1,0,0,5,5,5,5,5,4,3,4,1
			db	0,0,1,1,1,1,1,4,0,4,1,0,0,1,3,2,3,0,3,0,3,1,2,0,1,0,4,2,0,5,0,0,1,1,0,1,0,2,1,0,5,0,6,1
Level_12:		db	06,3,2,2,0,0,5,2,0,2,3,3,3,4,5,2,1,0,5,1,4,0,3,1,3,5,3,3,1,0,5,3,1,0,1,3,5,3,3,3,1,0,5,0,1
			db	1,3,0,3,3,3,3,1,0,1,4,1,6,5,1,1,3,1,1,5,4,2,3,3,5,1,4,1,0,1,1,3,4,3,3,3,1,3,3,3,0,0,0,1
Level_13:		db	03,0,0,0,4,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,5,0,0,1,1,4,0,5,5,5,1,0,0,0,1,4,3,4,4,0,0,0,0,0
			db	0,1,4,0,3,4,0,0,0,0,0,0,1,3,0,3,3,0,0,0,2,0,6,1,0,0,4,0,0,0,2,4,0,5,5,1,1,3,0,0,0,1,2,0
Level_14:		db	02,0,0,4,0,0,6,0,0,4,0,0,1,1,1,1,1,3,1,1,1,1,1,1,0,0,4,0,3,0,4,0,0,1,1,0,3,2,3,0,3,2,3,0,1
			db	1,0,3,5,3,0,3,5,3,0,1,1,0,3,3,3,0,3,3,3,0,1,1,0,0,0,1,0,1,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1
Level_15:		db	04,4,0,0,0,5,5,4,0,0,4,3,3,0,6,4,0,0,3,0,0,2,1,1,5,3,3,1,3,3,3,0,3,3,0,2,4,0,1,3,3,0,3,0,0
			db	3,3,3,3,1,0,0,1,0,3,0,2,5,4,0,1,5,0,5,0,0,0,4,0,3,3,3,3,3,0,0,2,0,3,1,0,0,0,0,0,1,0,5,0
Level_16:		db	15,1,1,1,1,1,0,0,0,0,0,0,1,2,4,4,1,4,2,0,0,0,0,1,4,2,4,1,2,4,4,0,0,0,1,2,4,2,1,4,3,2,1,0,0
			db	1,4,2,4,1,2,4,4,1,0,0,1,3,2,2,1,4,2,3,1,0,0,5,5,1,5,1,2,4,1,1,0,2,5,2,1,5,1,1,1,1,6,0,1
Level_17:		db	08,1,0,0,0,0,0,0,0,0,0,1,1,3,3,3,4,3,3,3,4,3,1,1,0,3,2,6,0,3,2,4,0,1,1,0,3,3,4,0,3,4,2,0,1
			db	1,0,3,2,2,0,3,3,3,0,1,1,0,0,3,2,0,2,4,0,0,1,1,0,0,2,4,4,3,4,0,0,1,1,0,3,3,3,3,0,3,3,0,1
Level_18:		db	03,0,0,0,0,0,0,3,3,5,4,5,1,5,5,4,3,1,3,3,5,2,5,1,5,0,2,5,1,4,3,5,4,5,1,1,0,4,0,1,3,3,5,4,5
			db	1,0,0,3,3,3,0,0,3,3,3,0,1,1,5,3,3,3,3,3,4,4,1,0,6,4,0,4,0,0,0,3,3,5,0,5,5,0,5,0,5,1,2,1
Level_19:		db	02,0,0,0,4,0,0,0,0,0,0,0,0,5,4,5,1,4,5,5,5,1,0,0,0,4,4,0,3,6,0,0,1,0,0,2,3,3,0,3,3,0,0,1,0
			db	0,3,5,0,1,0,0,0,0,1,0,2,0,0,3,0,0,0,0,0,1,0,5,0,5,5,5,5,5,5,5,5,0,5,0,5,0,0,0,0,0,0,0,0
Level_20:		db	03,0,0,0,0,5,3,3,5,4,4,0,0,0,0,2,5,5,5,5,4,4,0,0,0,0,3,1,1,1,5,3,1,1,0,0,4,0,4,0,1,2,0,0,1
			db	1,1,4,3,4,0,0,5,0,0,1,1,6,3,3,4,0,0,2,0,0,1,1,3,0,3,3,0,0,5,0,0,1,1,1,1,1,1,1,1,5,0,0,1
Level_21:		db	05,3,4,0,0,0,0,0,0,0,0,0,3,6,0,5,5,5,5,5,5,5,1,0,3,2,4,0,0,0,0,0,0,1,3,0,3,2,4,0,0,0,0,0,1
			db	0,3,0,3,2,4,0,0,0,0,1,3,0,3,0,3,2,4,0,0,0,1,0,3,0,3,0,3,2,0,0,0,1,3,0,3,0,3,0,3,0,0,0,1
Level_22:		db	01,1,1,4,6,4,0,0,0,0,0,0,1,0,4,1,4,0,0,0,0,0,0,1,0,4,1,4,0,0,0,0,0,0,1,0,5,4,5,4,1,0,0,0,0
			db	1,0,0,4,0,4,0,1,0,0,0,1,0,5,5,0,5,0,5,5,0,0,1,0,0,4,0,4,0,5,0,0,2,1,0,5,5,0,5,0,5,0,0,5
