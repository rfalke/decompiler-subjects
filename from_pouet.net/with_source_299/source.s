; SMALLPONG v2.0 (264 bytes)
; Brad Smith
; 6/29/2008

; 16-bit instruction set, begin at 100h
use16
org 100h

; constants

SCREEN_WIDTH =		320
SCREEN_HEIGHT = 	200
SCREEN_X_MID =		SCREEN_WIDTH / 2
SCREEN_Y_MID =		SCREEN_HEIGHT / 2
SCREEN_SIZE =		SCREEN_WIDTH * SCREEN_HEIGHT

PADDLE_SIZE =		10
;PADDLE_LEFT_X =        0
PADDLE_RIGHT_X =	SCREEN_WIDTH - 1
PADDLE_TOP =		1
PADDLE_MID =		SCREEN_Y_MID - (PADDLE_SIZE/2)
PADDLE_BOTTOM = 	(SCREEN_HEIGHT-1) - PADDLE_SIZE

BALL_MID_X =		SCREEN_X_MID
BALL_MID_Y =		SCREEN_Y_MID
BALL_TOP =		PADDLE_TOP
BALL_BOTTOM =		(PADDLE_BOTTOM + PADDLE_SIZE) - 1

AI_THRESHOLD =		SCREEN_WIDTH - 90

; main program
start:
	; set up VGA mode 13h
		mov	al, 013h
		int	10h
		; store video register in es (will stay constant from here on)
		push	word 0A000h
		pop	es

	; clear the screen
		;xor     di, di ; di = 0
		;mov     cx, SCREEN_SIZE
		;xor     al, al ; al = 0
		;repz    stosb

	; setup stack
		push	word PADDLE_MID
		push	word BALL_MID_X
		push	word BALL_MID_Y

    game_loop:

	; check input
		; reset movement
		xor	bx, bx
		; get shift registers
		mov	ah, 02h
		int	16h
		; test for CTRL
		test	al, 4
		jz	no_ctrl
		inc	bx
	    no_ctrl:
		; test for ALT
		test	al, 8
		jz	no_alt
		dec	bx
	    no_alt:
		mov	[player_move], bl

	; wait for vsync
	    vsync_active:
		mov	dx, 03DAh	; input status port for checking retrace
		in	al, dx
		test	al, 8
		jnz	vsync_active	; Bit 3 on signifies activity
	    vsync_retrace:
		in	al, dx
		test	al, 8
		jz	vsync_retrace	; Bit 3 off signifies retrace

	; draw game part 1
		; clear old ball
			   ; STACK: ball_y, ball_x, paddle_left_y
		pop	ax ; STACK: ball_x, paddle_left_y
		pop	bx ; STACK: paddle_left_y
		xor	dl, dl ; dl = 0
		call	put_pixel

	; update game state part
		; right paddle AI
			; bx = ball_x
			cmp	bx, AI_THRESHOLD
			mov	cx, bx ; move bal_x to cx
			mov	bx, [paddle_right_y]
			jl	skip_ai
			; ax = ball_y
			sub	al, (PADDLE_SIZE / 2)
			cmp	ax, bx
			je	end_ai
			jg	ai_dn
		    ;ai_up:
			dec	bx
			jmp	end_ai
		    ai_dn:
			inc	bx
		    end_ai:
			add	al, (PADDLE_SIZE / 2)
		    skip_ai:
			call	clamp_paddle
			mov	[paddle_right_y], bx
		; move ball vertical
			; ax = ball_y
			add	al, [ball_dy]
			; mov     [ball_y], ax
			; bounce vertical
			cmp	al, BALL_TOP
			jne	ball_not_top
			neg	byte [ball_dy]
		    ball_not_top:
			cmp	al, BALL_BOTTOM
			jne	ball_not_bottom
			neg	byte [ball_dy]
		    ball_not_bottom:
		; move ball horizontal
			add	cx, [ball_dx]
		; check for right paddle collision / goal
			; ax = ball_y
			; bx = paddle_right_y
			; cx = ball_x
			mov	dx, PADDLE_RIGHT_X
			call	collide_paddle
		; left paddle moved by player
			pop	bx ; STACK: EMPTY
			add	bl, [player_move]
			call	clamp_paddle
			push	bx ; STACK: paddle_left_y
		; check for left paddle collision / goal
			; ax = ball_y
			; bx = paddle_left
			xor	dx, dx ; dx = PADDLE_LEFT_X
			call	collide_paddle
	; end update game state

	; draw game part 2
		; draw ball
		; ax = ball_y
		xchg	bx, cx ; bx = ball_x, cx = paddle_left_y
		mov	dl, 15
		call	put_pixel
		push	bx ax ; STACK: ball_x, ball_y, paddle_left_y
		; draw left paddle
		mov	ax, cx ; ax = paddle_left_y
		xor	bx, bx ; bx = PADDLE_LEFT_X
		call	draw_paddle
		; draw right paddle
		mov	ax, [paddle_right_y]
		mov	bx, PADDLE_RIGHT_X
		mov	dl, 15
		call	draw_paddle
	; end draw game

	; continue game if no regular keypresses
	mov	ah, 1
	int	16h
	jz	game_loop

	; [ 2 bytes ]
	; exit if a key has been pressed
	int	20h

; global data

screen_width:	dw	SCREEN_WIDTH
paddle_right_y: dw	PADDLE_MID
ball_dx:	dw	1
ball_dy:	db	-1
player_move:	db	0

; subroutines

; put_pixel
; plots a pixel at bx,ax with color dl
; (registers preserved)
put_pixel:
	push	ax bx dx
	mul	word [screen_width]
	add	bx, ax
	pop	dx
	mov	[es:bx], dl
	pop	bx ax
	ret

; draw_paddle
; draws a paddle (position: bx,ax colour: dl)
draw_paddle:
	mov	cx, PADDLE_SIZE
	draw_paddle_loop:
		call	put_pixel
		inc	ax
		loop	draw_paddle_loop
	xor	dl, dl ; dl = 0
	call	put_pixel
	sub	al, PADDLE_SIZE+1
	call	put_pixel
	ret

; clamp_paddle
;   clamps bx to [PADDLE_TOP,PADDLE_BOTTOM]
clamp_paddle:
	cmp	bl, PADDLE_TOP - 1
	jne	not_top
	mov	bl, PADDLE_TOP
    not_top:
	cmp	bl, PADDLE_BOTTOM + 1
	jne	not_bottom
	mov	bl, PADDLE_BOTTOM
    not_bottom:
	ret

; collide_paddle
;   collides paddle with ball
;   ax = ball_y
;   bx = paddle_y
;   cx = ball_x
;   dx = PADDLE_X
collide_paddle:
	cmp	cx, dx
	jne	no_collide
	cmp	ax, bx
	jl	new_ball
	push	bx
	add	bl, PADDLE_SIZE
	cmp	ax, bx
	pop	bx
	jge	new_ball
	neg	word [ball_dx]
	ret
    new_ball:
	; "randomize" ball_x
	add	al, 97
	and	ax, 127
	add	ax, BALL_MID_Y - 64
	mov	cx, BALL_MID_X
	; don't bother resetting ball_dx/dy
	; just send ball to player who just lost
    no_collide:
	ret

; END OF FILE
; Brad Smith, 2008
