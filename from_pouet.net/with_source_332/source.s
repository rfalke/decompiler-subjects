; SMALLPONG v1.0 (547 bytes)
; Brad Smith
; 6/27/2008

use16
org 100h

; program entry point
start:
	; set up VGA mode 13h
	mov	ax, 0013h
	int	10h
	; reset the game
	call	reset_game
    game_loop:
	; check input
	call	get_input
	; update game state
	call	update_game
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
	; draw game
	call	draw_game
	; check for regular keypress
	mov	ah, 1
	int	16h
	jz	game_loop
	; exit if a key has been pressed
	int	20h

; global data

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

PADDLE_LEFT =		1
PADDLE_RIGHT =		SCREEN_WIDTH - 2
PADDLE_TOP =		2
PADDLE_MID =		SCREEN_Y_MID - (PADDLE_SIZE/2)
PADDLE_BOTTOM = 	(SCREEN_HEIGHT-1) - PADDLE_SIZE

BALL_LEFT =		PADDLE_LEFT + 1
BALL_RIGHT =		PADDLE_RIGHT - 1
BALL_SCORE_LEFT =	0
BALL_SCORE_RIGHT =	SCREEN_WIDTH - 1
BALL_MID_X =		SCREEN_X_MID
BALL_MID_Y =		SCREEN_Y_MID
BALL_TOP =		PADDLE_TOP
BALL_BOTTOM =		(PADDLE_BOTTOM + PADDLE_SIZE) - 1
BALL_DELAY =		30 ; frames (at 60Hz)

AI_THRESHOLD =		SCREEN_WIDTH - 90

paddle_left:	dw	PADDLE_MID
paddle_right:	dw	PADDLE_MID
player_move:	dw	0
ball_x: 	dw	BALL_MID_X
ball_y: 	dw	BALL_MID_Y
ball_dx:	dw	1
ball_dy:	dw	-1
ball_last_x:	dw	BALL_MID_X
ball_last_y:	dw	BALL_MID_Y
ball_delay:	dw	0
score_left	dw	0
score_right	dw	SCREEN_WIDTH-1

RANDOM_PRIME_0 =	16807
RANDOM_PRIME_1 =	59403
random: 	dw	0

; make_random
; generates a random number
; clobbers AX with the random number
make_random:
	mov	ax, RANDOM_PRIME_0
	mul	word [random]
	add	ax, RANDOM_PRIME_1
	mov	[random], ax
	ret

; reset_game
; clears the screen and resets the game state
reset_game:
	; clear screen
	push	0A000h
	pop	es
	mov	di, 0
	mov	cx, SCREEN_WIDTH
	mov	al, TOP_ROW_COLOUR
	repz	stosb
	mov	cx, (SCREEN_WIDTH - 1) * SCREEN_HEIGHT
	mov	al, CLEAR_COLOUR
	repz	stosb
	; TODO: set up game conditions?
	call new_ball
	ret

; new_ball
;
new_ball:
	call	make_random
	; random number now in AX
	and	ax, 127
	add	ax, BALL_MID_Y - 64
	mov	[ball_y], ax
	mov	word [ball_x], BALL_MID_X
	; don't bother resetting dx/dy
	; just send ball to player who just lost
	mov	word [ball_delay], BALL_DELAY
	; update score
	mov	ax, SCREEN_X_MID
	mov	bx, [score_left]
	cmp	bx, ax
	jl	score_left_fine
	mov	[score_left], ax
	mov	bx, 0
    score_left_fine:
	mov	byte [es:bx], SCORE_COLOUR
	mov	bx, [score_right]
	cmp	bx, ax
	jg	score_right_fine
	mov	[score_right], ax
	mov	bx, (SCREEN_WIDTH - 1)
    score_right_fine:
	mov	byte [es:bx], SCORE_COLOUR
	ret

; get_input
; updates player_move (with +1 or -1)
get_input:
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
	ret

; update game
; updates the two paddles and ball
; checks for score condition
update_game:
	; right paddle AI
	mov	ax, [ball_x]
	cmp	ax, AI_THRESHOLD
	mov	bx, [paddle_right]
	jl	end_ai
	mov	ax, [ball_y]
	add	bx, (PADDLE_SIZE / 2)
	cmp	ax, bx
	mov	bx, [paddle_right]
	jl	ai_up
	jg	ai_dn
	jmp	end_ai
    ai_up:
	dec	bx
	cmp	bx, PADDLE_TOP
	jg	end_ai
	mov	bx, PADDLE_TOP
	jmp	end_ai
    ai_dn:
	inc	bx
	cmp	bx, PADDLE_BOTTOM
	jl	end_ai
	mov	bx, PADDLE_BOTTOM
	jmp	end_ai
    end_ai:
	mov	[paddle_right], bx
	; move player
	mov	bx, [player_move]
	; keep random number randomized by cycling it while player doesn't move
	cmp	bx, 0
	jnz	skip_randomize
	call make_random
    skip_randomize:
	; move the left paddle according to player motion
	add	bx, [paddle_left]
	cmp	bx, PADDLE_TOP
	jge	paddle_left_below_top
	mov	bx, PADDLE_TOP
    paddle_left_below_top:
	cmp	bx, PADDLE_BOTTOM
	jle	paddle_left_above_bottom
	mov	bx, PADDLE_BOTTOM
    paddle_left_above_bottom:
	mov	[paddle_left], bx
	; skip ball move if delay is set
	cmp	word [ball_delay], 0
	jz	no_ball_delay
	dec	word [ball_delay]
	jmp	skip_ball_move
    no_ball_delay:
	; move ball vertical
	mov	ax, [ball_y]
	add	ax, [ball_dy]
	mov	[ball_y], ax
	; bounce ball vertical
	cmp	ax, BALL_TOP
	jne	ball_not_top
	mov	word [ball_dy], 1
    ball_not_top:
	cmp	ax, BALL_BOTTOM
	jne	ball_not_bottom
	mov	word [ball_dy], -1
    ball_not_bottom:
	; move ball horizontal
	mov	cx, [ball_x]
	add	cx, [ball_dx]
	mov	[ball_x], cx
	; bounce ball horizontal
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
	; check for right paddle collide
	mov	bx, [paddle_right]
	cmp	cx, BALL_RIGHT
	jne	ball_not_bounce_right
	cmp	ax, bx ; ax = ball_y, bx = paddle_right
	jl	ball_not_bounce_right
	add	bx, PADDLE_SIZE
	cmp	ax, bx
	jge	ball_not_bounce_right
	mov	word [ball_dx], -1
    ball_not_bounce_right:
	; check for goal
	cmp	cx, BALL_SCORE_LEFT
	jne	ball_not_goal_left
	add	[score_right], -2
	call	new_ball
	ret
    ball_not_goal_left:
	cmp	cx, BALL_SCORE_RIGHT
	jne	ball_not_goal_right
	add	[score_left], 2
	call	new_ball
    ball_not_goal_right:
    skip_ball_move:
	ret

; draw_game
; draws two paddles and ball
draw_game:
	; clear old ball
	mov	ax, [ball_last_y]
	mov	bx, SCREEN_WIDTH
	mul	bx
	add	ax, [ball_last_x]
	mov	bx, ax
	mov	byte [es:bx], CLEAR_COLOUR
	; draw ball
	mov	ax, [ball_y]
	mov	[ball_last_y], ax
	mov	bx, SCREEN_WIDTH
	mul	bx
	add	ax, [ball_x]
	mov	bx, ax
	mov	byte [es:bx], BALL_COLOUR
	mov	ax, [ball_x]
	mov	[ball_last_x], ax
	; draw left paddle
	mov	ax, [paddle_left]
	dec	ax ; shift it back one line to draw clear colour
	mov	bx, SCREEN_WIDTH
	mul	bx
	add	ax, PADDLE_LEFT
	mov	bx, ax
	mov	byte [es:bx], CLEAR_COLOUR
	mov	cx, PADDLE_SIZE
    draw_left_paddle_loop:
	add	bx, SCREEN_WIDTH
	mov	byte [es:bx], PADDLE_LEFT_COLOUR
	loop	draw_left_paddle_loop
	add	bx, SCREEN_WIDTH
	mov	byte [es:bx], CLEAR_COLOUR
	; draw right paddle
	mov	ax, [paddle_right]
	dec	ax
	mov	bx, SCREEN_WIDTH
	mul	bx
	add	ax, PADDLE_RIGHT
	mov	bx, ax
	mov	byte [es:bx], CLEAR_COLOUR
	mov	cx, PADDLE_SIZE
    draw_right_paddle_loop:
	add	bx, SCREEN_WIDTH
	mov	byte [es:bx], PADDLE_RIGHT_COLOUR
	loop	draw_right_paddle_loop
	add	bx, SCREEN_WIDTH
	mov	byte [es:bx], CLEAR_COLOUR
	; return
	ret

; END OF FILE
; Brad Smith, 2008
