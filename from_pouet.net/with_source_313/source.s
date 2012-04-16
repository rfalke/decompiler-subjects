; SMALLPONG v1.3 (469 bytes)
; Brad Smith
; 6/28/2008

; 16-bit instruction set, begin at 100h
use16
org 100h

; constants

SCREEN_WIDTH =		320
SCREEN_HEIGHT = 	200
SCREEN_X_MID =		SCREEN_WIDTH / 2
SCREEN_Y_MID =		SCREEN_HEIGHT / 2

PADDLE_SIZE =		10
PADDLE_LEFT_COLOUR =	10
PADDLE_RIGHT_COLOUR =	12
BALL_COLOUR =		14
CLEAR_COLOUR =		18
SCORE_COLOUR =		15
TOP_ROW_COLOUR =	0

PADDLE_LEFT_X = 	1
PADDLE_RIGHT_X =	SCREEN_WIDTH - 2
PADDLE_TOP =		2
PADDLE_MID =		SCREEN_Y_MID - (PADDLE_SIZE/2)
PADDLE_BOTTOM = 	(SCREEN_HEIGHT-1) - PADDLE_SIZE

BALL_LEFT =		PADDLE_LEFT_X + 1
BALL_RIGHT =		PADDLE_RIGHT_X - 1
BALL_SCORE_LEFT =	0
BALL_SCORE_RIGHT =	SCREEN_WIDTH - 1
BALL_MID_X =		SCREEN_X_MID
BALL_MID_Y =		SCREEN_Y_MID
BALL_TOP =		PADDLE_TOP
BALL_BOTTOM =		(PADDLE_BOTTOM + PADDLE_SIZE) - 1
BALL_DELAY =		30 ; frames (assume 60Hz)

AI_THRESHOLD =		SCREEN_WIDTH - 90
MAX_SCORE =		SCREEN_WIDTH / 4
RANDOM_PRIME   =	14033

; [ 163 bytes ]
; program entry point
start:
	; [ 9 bytes ]
	; set up VGA mode 13h
		mov	ax, 0013h
		int	10h
		; store video register in es (will stay constant from here on)
		push	word 0A000h
		pop	es

	; [ 16  bytes ]
	; reset the screen
		xor	di, di ; di = 0
		mov	cx, SCREEN_WIDTH
		mov	al, TOP_ROW_COLOUR
		repz	stosb
		mov	cx, (SCREEN_WIDTH - 1) * SCREEN_HEIGHT
		mov	al, CLEAR_COLOUR
		repz	stosb

    game_loop:

	; [ 28 bytes ]
	; check input
		; reset movement
		mov    word [player_move], 0
		; get shift registers
		mov	ah, 02h
		int	16h
		; test for CTRL
		test	al, 4
		jz	no_ctrl
		inc    word [player_move]
	    no_ctrl:
		; test for ALT
		test	al, 8
		jz	no_alt
		dec    word [player_move]
	    no_alt:

	; [ 3 bytes ]
	; update game state
	call	update_game

	; [ 15 bytes ]
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

	; [ 86 bytes ]
	; draw game
		; [ 14 bytes ]
		; clear old ball
		mov	ax, [ball_last_y]
		mov	bx, [ball_last_x]
		mov	dl, CLEAR_COLOUR
		call	put_pixel
		; [ 19 bytes ]
		; draw ball
		mov	ax, [ball_y]
		mov	[ball_last_y], ax
		mov	bx, [ball_x]
		mov	[ball_last_x], bx
		mov	dl, BALL_COLOUR
		call	put_pixel
		; [ 11 bytes ]
		; draw left paddle
		mov	ax, [paddle_left_y]
		mov	bx, PADDLE_LEFT_X
		mov	dl, PADDLE_LEFT_COLOUR
		call	draw_paddle
		; [ 11 bytes ]
		; draw right paddle
		mov	ax, [paddle_right_y]
		mov	bx, PADDLE_RIGHT_X
		mov	dl, PADDLE_RIGHT_COLOUR
		call	draw_paddle
		; [ 31 bytes ]
		; draw scores
		mov	dl, SCORE_COLOUR
		xor	ax, ax ; ax = 0
		xor	bx, bx ; bx = 0
		mov	cx, [score_left]
		draw_score_left_loop:
			; [ 9 bytes ]
			call	put_pixel
			inc	bx
			inc	bx
			loop	draw_score_left_loop
		mov	bx, SCREEN_WIDTH-1
		mov	cx, [score_right]
		draw_score_right_loop:
			; [ 9 bytes ]
			call	put_pixel
			dec	bx
			dec	bx
			loop	draw_score_right_loop

	; [ 8 bytes ]
	; continue game if no regular keypresses
	mov	ah, 1
	int	16h
	jz	game_loop

	; [ 2 bytes ]
	; exit if a key has been pressed
	int	20h

; global data

;[ 26 bytes ]
paddle_left_y:	dw	PADDLE_MID
paddle_right_y: dw	PADDLE_MID
player_move:	dw	0
ball_x: 	dw	BALL_MID_X
ball_y: 	dw	BALL_MID_Y
ball_dx:	dw	1
ball_dy:	dw	-1
ball_last_x:	dw	BALL_MID_X
ball_last_y:	dw	BALL_MID_Y
ball_delay:	dw	0
score_left:	dw	1
score_right:	dw	1
screen_width:	dw	SCREEN_WIDTH

; subroutines

; [ 16 bytes ]
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

; [ 21 bytes ]
; draw_paddle
; draws a paddle (position: bx,ax colour: dl)
draw_paddle:
	mov	cx, PADDLE_SIZE
	draw_left_paddle_loop:
		call	put_pixel
		inc	ax
		loop	draw_left_paddle_loop
	mov	dl, CLEAR_COLOUR
	call	put_pixel
	sub	ax, PADDLE_SIZE+1
	call	put_pixel
	ret

; [ 39 bytes ]
; new_ball
; increments score
; generates new starting ball position
new_ball:
	; increment score counter at [bx]
	mov cx, [bx]
	cmp cx, MAX_SCORE
	jge	score_maxed
	inc word [bx]
    score_maxed:
	; use ax (ball_y) + paddle_left_y to make a random number:
	add	ax, [paddle_left_y]
	mul	word [RANDOM_PRIME]
	; random number now in AX
	and	ax, 127
	add	ax, BALL_MID_Y - 64
	mov	[ball_y], ax
	mov	word [ball_x], BALL_MID_X
	; don't bother resetting dx/dy
	; just send ball to player who just lost
	mov	word [ball_delay], BALL_DELAY
	ret

; [ 18 bytes ]
; clamp_paddle
;   clamps bx to [PADDLE_TOP,PADDLE_BOTTOM]
clamp_paddle:
	cmp	bx, PADDLE_TOP
	jg	not_top
	mov	bx, PADDLE_TOP
    not_top:
	cmp	bx, PADDLE_BOTTOM
	jl	not_bottom
	mov	bx, PADDLE_BOTTOM
    not_bottom:
	ret

; [ 186 bytes ]
; update game
; updates the two paddles and ball
; checks for score condition
update_game:
	; [ 43 bytes ]
	; right paddle AI
		cmp	word [ball_x], AI_THRESHOLD
		mov	bx, [paddle_right_y]
		jl	end_ai
		mov	ax, [ball_y]
		add	bx, (PADDLE_SIZE / 2)
		cmp	ax, bx
		mov	bx, [paddle_right_y]
		jl	ai_up
		jg	ai_dn
		jmp	end_ai
	    ai_up:
		dec	bx
		jmp	end_ai
	    ai_dn:
		inc	bx
		jmp	end_ai
	    end_ai:
		call	clamp_paddle
		mov	[paddle_right_y], bx
	; [ 15 bytes ]
	; left paddle moved by player
		mov	bx, [paddle_left_y]
		add	bx, [player_move]
		call	clamp_paddle
		mov	[paddle_left_y], bx
	; [ 12 bytes ]
	; skip ball move if delay is set
		cmp	word [ball_delay], 0
		jz	no_ball_delay
		dec	word [ball_delay]
		ret
	    no_ball_delay:
	; [ 32 bytes ]
	; move ball vertical
		mov	ax, [ball_y]
		add	ax, [ball_dy]
		mov	[ball_y], ax
		; bounce vertical
		cmp	ax, BALL_TOP
		jne	ball_not_top
		mov	word [ball_dy], 1
	    ball_not_top:
		cmp	ax, BALL_BOTTOM
		jne	ball_not_bottom
		mov	word [ball_dy], -1
	    ball_not_bottom:
	; [ 12 bytes ]
	; move ball horizontal
		mov	cx, [ball_x]
		add	cx, [ball_dx]
		mov	[ball_x], cx
	; [ 22 bytes ]
	; check for left paddle collide
		cmp	cx, BALL_LEFT
		jne	ball_not_bounce_left
		cmp	ax, bx ; ax = ball_y, bx = paddle_left
		jl	ball_not_bounce_left
		add	bx, PADDLE_SIZE
		cmp	ax, bx
		jge	ball_not_bounce_left
		mov	word [ball_dx], 1
	    ball_not_bounce_left:
	; [ 27 bytes ]
	; check for right paddle collide
		mov	bx, [paddle_right_y]
		cmp	cx, BALL_RIGHT
		jne	ball_not_bounce_right
		cmp	ax, bx ; ax = ball_y, bx = paddle_right
		jl	ball_not_bounce_right
		add	bx, PADDLE_SIZE
		cmp	ax, bx
		jge	ball_not_bounce_right
		mov	word [ball_dx], -1
	    ball_not_bounce_right:
	; [ 24 bytes ]
	; check for goal
		cmp	cx, BALL_SCORE_LEFT
		jne	ball_not_goal_left
		mov	bx, score_right
		call	new_ball ; ax = ball_y
		ret
	    ball_not_goal_left:
		cmp	cx, BALL_SCORE_RIGHT
		jne	ball_not_goal_right
		mov	bx, score_left
		call	new_ball ; ax = ball_y
	    ball_not_goal_right:
	; [ 1 byte ]
	; return
	ret

; END OF FILE
; Brad Smith, 2008
