;4k graphics pic for Assembly 2010


;%define	WRITETOFILE
;%define	PALLETTE	;draw only pallette
%define	GROUNDLINE	;draw groundline
%define	XPOS	0
%define	YPOS	20

;REMEMBER STACK

jmp	start


gx	dw	0
gy	dw	0
brushs	dw	500
lx	dw	0
ly	dw	0
ps	dw	64
sin	dw	10
tes	dw	0
col	db	189
bm	dd	0.5
as	dd	0

plotpixs	db	2,0,3,0,4,0,5,0,6,0,1,1,7,1,0,2,8,2,0,3,0,4,0,5,1,6,2,7,3,7,4,7,5,7,6,7,7,8,8,9,8,10,8,11,0,12,8,12,1,13,7,13,2,14,3,14,4,14,5,14,6,14
plotpixh	db	5,0,6,0,7,0,18,0,19,0,20,0,3,1,4,1,5,1,6,1,7,1,8,1,9,1,16,1,17,1,18,1,19,1,20,1,21,1,22,1,2,2,3,2,4,2,5,2,6,2,7,2,8,2,9,2,10,2,15,2,16,2,17,2,18,2,19,2,20,2,21,2,22,2,23,2,2,3,3,3,4,3,5,3,6,3,7,3,8,3,9,3,10,3,11,3,14,3,15,3,16,3,17,3,18,3,18,3,19,3,20,3,21,3,22,3,23,3,1,4,2,4,3,4,4,4,5,4,6,4,7,4,8,4,9,4,10,4,11,4,12,4,13,4,14,4,15,4,16,4,17,4,18,4,19,4,20,4,21,4,22,4,23,4,24,4,1,5,2,5,3,5,4,5,5,5,6,5,7,5,8,5,9,5,10,5,11,5,12,5,13,5,14,5,15,5,16,5,17,5,18,5,19,5,20,5,21,5,22,5,23,5,24,5,1,6,2,6,3,6,4,6,5,6,6,6,7,6,8,6,9,6,10,6,11,6,12,6,13,6,14,6,15,6,16,6,17,6,18,6,19,6,20,6,21,6,22,6,23,6,24,6,1,7,2,7,3,7,4,7,5,7,6,7,7,7,8,7,9,7,10,7,11,7,12,7,13,7,14,7,15,7,16,7,17,7,18,7,19,7,20,7,21,7,22,7,23,7,24,7,1,8,2,8,3,8,4,8,5,8,6,8,7,8,8,8,9,8,10,8,11,8,12,8,13,8,14,8,15,8,16,8,17,8,18,8,19,8,20,8,21,8,22,8,23,8,24,8,2,9,3,9,4,9,5,9,6,9,7,9,8,9,9,9,10,9,11,9,12,9,13,9,14,9,15,9,16,9,17,9,18,9,19,9,20,9,21,9,22,9,23,9,2,10,3,10,4,10,5,10,6,10,7,10,8,10,9,10,10,10,11,10,12,10,13,10,14,10,15,10,16,10,17,10,18,10,19,10,20,10,21,10,22,10,23,10,3,11,4,11,5,11,6,11,7,11,8,11,9,11,10,11,11,11,12,11,13,11,14,11,15,11,16,11,17,11,18,11,19,11,20,11,21,11,22,11,4,12,5,12,6,12,7,12,8,12,9,12,10,12,11,12,12,12,13,12,14,12,15,12,16,12,17,12,18,12,19,12,20,12,21,12,5,13,6,13,7,13,8,13,9,13,10,13,11,13,12,13,13,13,14,13,15,13,16,13,17,13,18,13,19,13,20,13,6,14,7,14,8,14,9,14,10,14,11,14,12,14,13,14,14,14,15,14,16,14,17,14,18,14,19,14,7,15,8,15,9,15,10,15,11,15,12,15,13,15,14,15,15,15,16,15,17,15,18,15,8,16,9,16,10,16,11,16,12,16,13,16,14,16,15,16,16,16,17,16,9,17,10,17,11,17,12,17,13,17,14,17,15,17,16,17,10,18,11,18,12,18,13,18,14,18,15,18,11,19,12,19,13,19,14,19,12,20,13,20
plotpixsi	db	2,1,2,2,2,3,2,4,3,4,3,5,3,6,15,4,15,5,15,6,14,6,4,7,14,7,4,8,5,8,14,8,5,9,14,9,5,10,14,10,5,11,14,11,4,12,5,12,6,12,7,12,8,12,9,12,10,12,11,12,12,12,13,12,14,12,15,12,5,13,15,13,4,14,15,14,4,15,15,15,3,16,4,16,15,16,3,17,15,17,2,18,15,18,2,19,14,19,15,19,1,20,2,20,14,20,1,21,21,5,22,6,32,6,23,7,31,7,24,8,31,8,24,9,30,9,25,10,29,10,26,11,29,11,27,12,28,12,27,13,27,14,26,15,26,16,25,17,24,18,24,19,23,20,22,21,22,22,21,23,36,11,36,12,36,13,36,14,36,15,36,16,36,17,36,18,37,11,37,10,37,9,37,8,38,8,38,7,38,6,38,5,38,4,39,4,39,5,40,5,40,6,40,7,40,8,41,8,41,9,41,10,41,11,41,12,41,13,41,14,42,14,42,15,42,16,42,17,42,18,43,19,43,20,43,21,44,21,44,20,44,19,44,18,44,17,44,16,44,15,44,14,44,13,44,12,44,11,44,10,44,9,44,8,45,9,45,8,45,7,45,6,45,5,45,4,45,3,45,2,46,1,46,2,46,3,46,4,46,5,47,6,47,7,47,8,47,9,48,10,48,11,48,12,48,13,49,13,49,14,49,15,49,16,49,17,49,18,50,18,50,19,50,20,54,3,54,4,55,4,55,5,55,6,56,6,56,7,57,7,57,8,58,8,58,9,59,9,60,10,61,10,61,11,62,11,63,11,63,12,64,12,64,13,65,13,56,24,56,23,57,23,57,22,57,21,58,21,58,20,59,20,59,19,59,18,60,18,60,17,61,17,61,16,61,15,62,14,62,13,64,10,64,9,64,8,65,7,66,6,66,5,67,4,68,3,68,2
plotpixsm	db	1,17,1,18,1,19,1,20,1,21,2,22,2,23,3,24,3,25,4,26,4,27,5,28,6,29,7,30,7,31,8,31,9,31,10,32,11,32,12,33,13,33,14,33,15,34,16,34,17,34,18,34,19,34,20,34,21,34,22,34,23,34,24,34,25,33,26,33,27,32,28,32,29,32,29,31,30,31,31,30,32,29,32,28,33,28,33,27,33,26,34,26,34,25,34,24,13,22,13,21,13,20,13,19,13,18,13,17,13,16,13,15,14,15,14,14,14,13,15,12,15,11,16,10,17,9,17,8,18,7,19,6,20,5,20,4,21,3,22,2,23,1,14,26,14,25,14,24,15,24,15,23,15,22,15,21,16,21,16,20,16,19,17,19,17,18,17,17,18,17,18,16,19,15,19,14,20,13,21,12,22,11,23,10,24,9,24,8,25,7,26,6,27,6,28,5,29,4,30,4

%ifdef	WRITETOFILE
filename	db	'4k.raw',0
handle	dw	0
%endif

start:
org	100h

;############CREATE PICTURE FILE#############
;############################################
%ifdef	WRITETOFILE
mov	ah,3ch
mov	cx,0
mov	dx,filename
int	21h
mov	word[handle],ax
%endif

;############VIDEO MODE############
;##################################

mov	al,13h
int	10h



;##########PALLETTE##########
;###########################
mov	byte[lx],0
mov	byte[gy],0

palet:

mov	cx,64
mov	dx,3c8h
mov	ax,0
mov	byte[ly],0


grad:

mov	al,64
mul	byte[gy]
mov	[gx],cx
add	al,[gx]

out	dx,al
inc	dx

mov	al,[gx]

cmp	byte[gy],2
jne	nb

mov	byte[ly],al
mov	al,0

nb:

mul	byte[lx]
out	dx,al
add	al,byte[ly]
cmp	byte[gy],0
jne	ng
mov	al,[gx]
ng:
out	dx,al
mov	al,[ly]
out	dx,al

dec	dx

loop	grad

mov	byte[lx],1
inc	byte[gy]
cmp	byte[gy],3
jne	palet


mov	cx,64
redpal:

mov	ax,cx
add	al,191

out	dx,al

inc	dx

mov	al,63
out	dx,al
mov	ax,cx
dec	ax
out	dx,al
out	dx,al


dec	dx

loop	redpal

push	0a000h
pop	es



;############SKY###########
;##########################
call	circle



;############GROUND + GROUND LINE#############
;#############################################
mov	byte[col],38

mov	bx,0
mud:
mov	word[ly],40
mov	word[lx],bx
fild	word[lx]
fidiv	word[ly]
fsin
fimul	word[sin]
fistp	word[lx]
add	word[lx],140

%ifdef	GROUNDLINE
mov	word[gx],bx
mov	ax,word[lx]
mov	word[gy],ax
%endif

mov	ax,word[lx]
mov	word[ly],320
mul	word[ly]
add	ax,bx
mov	di,ax
drawm:
inc	word[lx]
add	di,320
mov	[es:di],byte 30
cmp	word[lx],200
jle	drawm


%ifdef	GROUNDLINE
mov	word[lx],bx
mov	word[ly],103
fild	word[lx]
fidiv	word[ly]
fsin
mov	word[ly],5
fimul	word[ly]
fistp	word[brushs]
add	word[brushs],6


call	circle
%endif

inc	bx
cmp	bx,320
jl	mud


;############SUN############
;###########################

;#Main Ring
mov	byte[col],127
mov	word[gx],43
mov	word[gy],38
mov	word[brushs],30
call	circle

;#Rays
mov	word[gx],79	;0
mov	word[gy],38
mov	word[lx],108
mov	word[ly],38
call	line
mov	word[gx],74	;30
mov	word[gy],56
mov	word[lx],99
mov	word[ly],71
call	line
mov	word[gx],61	;60
mov	word[gy],69
mov	word[lx],76
mov	word[ly],94
call	line
mov	word[gx],43	;90
mov	word[gy],74
mov	word[lx],43
mov	word[ly],103
call	line
mov	word[gx],25	;120
mov	word[gy],69
mov	word[lx],11
mov	word[ly],94
call	line
mov	word[gx],12	;150
mov	word[gy],56
mov	word[lx],0
mov	word[ly],63
call	line
mov	word[gx],7	;180
mov	word[gy],38
mov	word[lx],0
mov	word[ly],38
call	line
mov	word[gx],12	;210
mov	word[gy],20
mov	word[lx],0
mov	word[ly],13
call	line
mov	word[gx],25	;240
mov	word[gy],7
mov	word[lx],21
mov	word[ly],0
call	line
mov	word[gx],43	;270
mov	word[gy],2
mov	word[lx],43
mov	word[ly],0
call	line
mov	word[gx],61	;300
mov	word[gy],7
mov	word[lx],65
mov	word[ly],0
call	line
mov	word[gx],74	;330
mov	word[gy],20
mov	word[lx],99
mov	word[ly],7
call	line


;#Nose + Eyes
mov	byte[col],0
mov	word[brushs],4
mov	word[gy],39
mov	word[gx],43
call	circle
mov	word[brushs],4
mov	word[gx],32
mov	word[gy],30
call	circle
mov	word[brushs],4
mov	word[gx],54
call	circle

;#Mouth
mov	byte[col],192
mov	word[gx],32
mov	dx,0
mosin:
mov	word[lx],dx
mov	word[ly],7
mov	word[gy],5
fild	word[lx]
fidiv	word[ly]
fsin
fist	word[brushs]
add	word[brushs],2
fimul	word[gy]
fistp	word[gy]
add	word[gy],49
call	circle
inc	dx
inc	word[gx]
cmp	dx,22
jne	mosin


;############ död3290d1jddj ############
;#######################################

;#Legs + body + hands
mov	bx,2
mov	byte[col],220
ll:
mov	dx,30
legs:

mov	word[sin],3
mov	word[ly],15
mov	word[lx],dx
mov	word[tes],-1

fild	word[lx]
fidiv	word[ly]
fsin
fimul	word[sin]
fimul	word[tes]
fistp	word[sin]

mov	word[ly],10

fild	word[lx]
fidiv	word[ly]
fsin
fistp	word[brushs]

mov	byte[tes],3
mov	ax,dx
div	byte[tes]
mov	ah,0
add	word[brushs],2
mov	word[gx],150+XPOS
mov	word[gy],130+YPOS
sub	word[gy],dx

mov	cx,word[sin]
cmp	bx,1
jne	fl
add	word[gx],15
sub	word[gx],ax
sub	word[gx],cx
call	circle
add	word[gy],dx
add	word[gy],dx
add	word[gy],-78
call	circle
jmp	sl
fl:
add	word[gx],ax
add	word[gx],cx
call	circle
add	word[gy],-20
add	word[gx],-2
call	circle
sl:

mov	word[gx],158+XPOS
mov	word[gy],dx
add	word[gy],77+YPOS

call	circle

dec	dx
cmp	dx,0
jne	legs
dec	bx
cmp	bx,0
jne	ll

;#Head
mov	word[brushs],8
mov	word[gx],151+XPOS
mov	word[gy],72+YPOS
call	circle
mov	byte[col],0
mov	word[brushs],3
mov	word[gx],153+XPOS
mov	word[gy],75+YPOS
call	circle
mov	word[brushs],1
mov	word[gx],147+XPOS
mov	word[gy],71+YPOS
call	circle
mov	word[gx],152+XPOS
mov	word[gy],68+YPOS
call	circle

;#B. Line
mov	byte[col],252
mov	word[gx],160
mov	word[lx],188
mov	word[gy],88
mov	word[ly],72
call	line
;#Balloon
mov	word[brushs],40
mov	word[gx],230
mov	word[gy],50
call	circle
;#B. Text I§
mov	byte[col],0
mov	word[lx],230
mov	word[gy],20
mov	word[ly],34
call	line
mov	word[gx],228
mov	word[lx],232
mov	word[gy],20
mov	word[ly],20
call	line
mov	word[gx],228
mov	word[lx],232
mov	word[gy],34
mov	word[ly],34
call	line
;#B. Hearth
mov	word[gx],218
mov	word[gy],37
mov	byte[col],200
mov	bx,plotpixh
mov	cx,333
call	drawarray
;#B. Text ASM'10
mov	byte[col],0
mov	word[gx],204	; A
mov	word[lx],208
mov	word[gy],74
mov	word[ly],60
call	line
mov	word[gx],212
mov	word[lx],208
mov	word[gy],74
mov	word[ly],60
call	line
mov	word[gx],211
mov	word[lx],205
mov	word[gy],69
mov	word[ly],69
call	line

mov	word[gx],214	; S
mov	word[gy],60
mov	bx,plotpixs
mov	cx,31
call	drawarray

mov	word[gx],230	; M
mov	word[lx],227
mov	word[gy],74
mov	word[ly],60
call	line
mov	word[gx],230
mov	word[lx],233
mov	word[gy],74
mov	word[ly],60
call	line
mov	word[gx],224
mov	word[lx],227
mov	word[gy],74
mov	word[ly],60
call	line
mov	word[gx],236
mov	word[lx],233
mov	word[gy],74
mov	word[ly],60
call	line

mov	word[gx],238	; '
mov	word[lx],238
mov	word[gy],60
mov	word[ly],62
call	line

mov	word[gx],243	; 1
mov	word[lx],243
mov	word[gy],74
mov	word[ly],60
call	line
mov	word[gx],243
mov	word[lx],240
mov	word[gy],60
mov	word[ly],63
call	line
mov	word[gx],240
mov	word[lx],246
mov	word[gy],74
mov	word[ly],74
call	line

mov	word[gx],247	; 0
mov	word[lx],247
mov	word[gy],63
mov	word[ly],70
call	line
mov	word[gx],247
mov	word[lx],249
mov	word[gy],63
mov	word[ly],60
call	line
mov	word[gx],249
mov	word[lx],252
mov	word[gy],60
mov	word[ly],60
call	line
mov	word[gx],252
mov	word[lx],254
mov	word[gy],60
mov	word[ly],63
call	line
mov	word[gx],254
mov	word[lx],254
mov	word[gy],63
mov	word[ly],70
call	line
mov	word[gx],247
mov	word[lx],249
mov	word[gy],70
mov	word[ly],74
call	line
mov	word[gx],249
mov	word[lx],252
mov	word[gy],74
mov	word[ly],74
call	line
mov	word[gx],252
mov	word[lx],254
mov	word[gy],74
mov	word[ly],70
call	line
;#Hymy text
mov	word[gx],6
mov	word[gy],170
mov	cx,209
mov	bx,plotpixsi
call	drawarray
;#Smiley
mov	word[gx],230
mov	word[gy],150
mov	cx,100
mov	bx,plotpixsm
call	drawarray

;############SHOW PALLETTE############
;#####################################
%ifdef	PALLETTE

mov	di,0
mov	cx,200
ver:
mov	ax,320
hor:

cmp	ax,255
jge	ove
mov	[es:di],al
ove:

inc	di
dec	ax
cmp	ax,0
jne	hor
loop	ver

%endif

;############WRITE TO FILE###############
;########################################
%ifdef	WRITETOFILE
mov	dx,0
wrph:
mov	cx,0
wrpv:
mov	ah,0dh
int	10h
mov	byte[tes],al
push	cx
push	dx
mov	ah,40h
mov	bx,[handle]
mov	cx,1
mov	dx,tes
int	21h
pop	dx
pop	cx
inc	cx
cmp	cx,320
jne	wrpv
inc	dx
cmp	dx,200
jne	wrph
%endif


;############WAIT FOR ESC##############
;######################################
asd:
mov	ax,0
in	al,60h
dec	ax
jnz	asd	
int	21h


;############BRUSH FUNCTION############
;######################################
;input:	gx,lx,brushs,col
;uses:	ax,tes,ly,lx,cx
circle:
push	ax

fild	word[brushs]
fsub	dword[bm]
fstp	dword[as]

mov	di,63999

mov	word[tes],200
v:

mov	cx,320
h:

mov	word[lx],cx
mov	ax,word[tes]
mov	word[ly],ax

fild	word[gx]
fisub	word[lx]
fmul	st0
fild	word[gy]
fisub	word[ly]
fmul	st0
faddp	st1
fsqrt
fcomp	dword[as]
fstsw	ax
sahf
ja	he

mov	al,byte[col]
mov	[es:di],al
he:

dec	di
loop	h

dec	word[tes]
cmp	word[tes],0
jne	v
d:
pop	ax
ret


;############DRAW LINE FUNCTION############
;##########################################
;input: gx,lx,gy,ly,col
;uses:	tes,sin,ax,dx,bx,cx
line:

mov	word[tes],0

mov	ax,word[gx]
sub	ax,word[lx]
sign1:
neg	ax
jl	sign1
push	ax

mov	ax,word[gy]
sub	ax,word[ly]
sign2:
neg	ax
jl	sign2
pop	dx

cmp	ax,dx
jle	steep

inc	word[tes]
mov	ax,word[gx]
push	ax
mov	ax,word[gy]
pop	word[gy]
mov	word[gx],ax

mov	ax,word[lx]
push	ax
mov	ax,word[ly]
pop	word[ly]
mov	word[lx],ax

steep:

mov	ax,word[lx]
cmp	word[gx],ax
jle	swp

mov	ax,word[gx]
push	ax
mov	ax,word[lx]
pop	word[lx]
mov	word[gx],ax

mov	ax,word[gy]
push	ax
mov	ax,word[ly]
pop	word[ly]
mov	word[gy],ax

swp:

mov	ax,word[lx]
sub	ax,word[gx]
push	ax

mov	ax,word[ly]
sub	ax,word[gy]
sign3:
neg	ax
jl	sign3
mov	dx,ax
pop	ax

push	ax
mov	byte[sin],2
div	byte[sin]
mov	byte[sin],al
pop	ax

mov	cx,word[ly]
cmp	word[gy],cx
jge	ystep
mov	word[ly],1
jmp	step
ystep:
mov	word[ly],-1
step:

mov	bx,word[gx]
lineloop:

mov	di,0
push	ax
push	dx
cmp	word[tes],1
je	plotyx

add	di,bx
mov	ax,word[gy]

jmp	plotting
plotyx:

add	di,word[gy]
mov	ax,bx

plotting:
mov	cx,320
mul	cx
add	di,ax

mov	al,byte[col]
mov	byte[es:di],al

pop	dx
pop	ax

sub	byte[sin],dl

cmp	byte[sin],0
jge	no
mov	cx,word[ly]
add	word[gy],cx
add	byte[sin],al
no:

inc	bx
cmp	bx,word[lx]
jle	lineloop

ret


;############DRAW ARRAY FUNCTION############
;###########################################
;input:	cx,dx,col,gx,gy
;uses:	ax,tes

drawarray:
mov	word[tes],320

dloop:

mov	ax,0
mov	al,byte[bx]
mov	di,ax
add	di,word[gx]
inc	bx

mov	al,byte[bx]
add	ax,word[gy]
mul	word[tes]

add	di,ax

mov	al,byte[col]
mov	byte[es:di],al

inc	bx

loop	dloop


ret

