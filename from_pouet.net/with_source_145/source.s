
NAME	HypnoICE
TITLE	World first 128 byte psionic intro with hypnotic & brain-damage effects
SUBTTL	(C) 1997, Arvi the Hukker (AtH//HPG), 2:5020/287@fidonet.org
;.............................................................................;
; Hypnotize operator and envoke mind alpha rythm (7-8Hz) resonance by both    ;
; audio and visual effects.  I know the ways to improve influence, but this   ;
; hack is not a weapon, just a small demonstration of the Art.		      ;
;									      ;
; WARNING!  Intro style codeing, so Real World suxxx...  Requires really 100% ;
;	PC and MS-DOS compatible with at least VGA and at least 80386 CPU.    ;
;.............................................................................;
; ВНИМАНИЕ!  HypnoICE содержит материал, способный причинить психический и,
; возможно, физический ущерб человеку.  Цель HypnoICE -- обратить внимание
; людей на нестандартные способы использования компьютера, а не причинение
; вреда людям.  Автор советует не запускать эту программу, а лишь исследовать
; ее исходный текст.  Решив запустить эту программу, всю ответственность за ее
; действия вы принимаете на себя.
;
; ГАРАНТИЯ.  Единственное, что гарантирует автор -- что эта программа будет
; занимать место на диске.  Автор не гарантирует даже то, что программа будет
; успешно откомпилирована.  Автор не несет никакой ответственности за
; умышленный или неумышленный вред, вызванный использованием данной программы
; или технологией, в ней используемой.

;FREQ		EQU	7	; 10.0 Hz (almost harmless)
FREQ		EQU	9	;  7.8 Hz (most dangerous)
;FREQ		EQU	10	;  7.0 Hz (also dangerous)
;FREQ		EQU	70	;  1.0 Hz (harmless demo?)

RADIUS		EQU	100	; 26..100

SETALC		MACRO
		DB	0D6h
		ENDM

		.MODEL	TINY
		.386
		.CODE
		ORG	100h

; ---  Part I  ---  Prepare script.
;
Start:
		mov	si,((FreeMemory-Start+102h)/3)*3
		mov	edx,0FF1F1F1Fh
InitScript:
		and	[si],edx
		loop	nQue
		sub	[si],edx	; Can change return address :(
		mov	cl,FREQ
nQue:		outsw			; Dirty hack to save DI
		outsb
		cmp	si,sp
		jb	InitScript
		PAGE

; ---  Part ][  ---  Draw scene.
;
		push	0A000h
		stosw			; DI<=0, Restore return address
		mov	al,13h
		int	10h
		pop	es

		mov	si,RADIUS*2-1
NextLine:	mov	cx,320
NextDot:	mov	ax,160
		sub	ax,cx
		jns	GetAbs
		neg	ax
GetAbs:		push	ax
		mul	ax		; 25600 max
		xchg	ax,bp
		lea	ax,[si-RADIUS]
		imul	ax		; 10000 max, DX=0
		add	bp,ax		; 35600 max.

; Slow square root calculation... (time delay)
GetSqrt:	dec	dx
		mov	al,dl
		mul	dl
		sub	ax,bp
		ja	GetSqrt

		pop	ax
		xchg	ax,dx
		cmp	al,RADIUS
		jl	DrawPEL
		xchg	ax,dx
DrawPEL:	stosb
		loop	NextDot
		dec	si
		jnz	NextLine
		PAGE

; ---  Part ]I[  ---  Animation.
;
NextFrame:	mov	ch,2

		mov	dx,3DAh
Backtrace:	in	al,dx
		and	al,8
		jz	Backtrace

		push	si
		mov	dl,0C8h
		out	dx,al
		inc	dx
	rep	outsb			; Dox stated 240ns wait.  Щазззз...
		pop	si

		lodsb
		cmpsw

		cmp	al,1Fh
		SETALC
		and	al,2
		out	61h,al

		in	al,60h
		xchg	ax,cx
		loop	NextFrame

		mov	ax,3
		int	10h
		ret			; Stack Okay! ;-)
FreeMemory:
		END	Start

--- MakeICE.Bat ---
tasm/ml/z/q/zi/m9/la HypnoICE
tlink/x/c/t HypnoICE
--- Cut here ---

P.S. Thank you for useing my software. ;)

    Luck !
Arvi the Hukker						  1 Dec 1997
  (AtH//HPG)						Moscow, Russia

