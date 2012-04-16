;author: erhan yildiz 
;email: erhan@caiw.nl
;homepage: home.kabelfoon.nl/~erhan

;this is my variation to an effect i saw a long time ago in an amiga demo called "Copper Master" (good ole days..)
;consider this as a tribute to its coder ... corsair of angels.

;this effect works as follows..
;a slice of a bar is drawn on the first line
;this line gets copied to the second line 
;a slice of a new bar is added on this new line
;then the second line is copied to the third, a new bar is added there etc etc.. untill the last line is reached
;feel free to email me with questions or suggestions

;greets fly to #asm/efnet.. 	comrade,hex86,kalms,katz3h,kawfee,matja,mcarp,mcd,monkiboy
;				mortiis,mov,scali,spec_chum,summer,two9a,vulture,wb,_xor
;special thanks go to kalms & mcarp & scali

;i coded this on an amd athlon 1,3Ghz machine with windows 98 se, it ran ok on it.
;compile with "tasm /m2 kopper", "tlink /t kopper"

;assumes on startup:
;ax ....... 0000h    ds ....... == cs
;bx ....... 0000h    es ....... == cs
;cx ....... 00ffh    ss ....... == cs
;dx ....... == cs    sp ....... fffeh
;si ....... 0100h    ss:sp ....     0
;di ....... fffeh    bp ....... 09xxh
;DF .......     0    PSP:0 .... cd20h

.model tiny
.486
.487

.data?
sinetable	db 256 dup(?)	
screenbuffer  	db 320*200 dup(?)

.code
org     100h

start:  

;data is placed here at top so it can be accessed with [si] since si=0100h at startup

radius  	dw 71			;2	amplitude for sinus
anglestep	db 039h,0bah,0c8h,03ch	;4	+/- 2*pi/256 (32 bit real)	
					;	i had to tweak here a bit to make the code neutral
					;	hence the sinus is not as smooth as it should be
					;	the data above is the following code..
					;	47	inc       di			neutral
					;	0039	add       [bx][di],bh		neutral
					;	BaC83C	mov       dx,3CC8h 		this is used later on..

	debug=0				;	change to 1 to initialize registers for debugger
if debug
	xor	ax,ax			
	mov	bx,ax			
	mov	cx,000ffh
	mov	dx,cs
	mov	si,00100h	
	mov	di,0fffeh		
	mov	ds,dx
	mov	es,dx
	mov	ss,dx
	push	0fffeh
	pop	sp
	and	bp,09ffh
	mov	dx,3cc8h
endif


;generate a sinustable
;255 values will be generated
;beware that cx=00ff and si=0100
	fninit				;2
	lea	di,sinetable		;3	
  	fldz				;2	
 	fldz				;2	st(1):=0, will be used as angle 				
 gen_sinus:
       	fsin				;2	sin(angle)
        fimul	word ptr [si]		;2	sin(angle)*radius
        fistp   word ptr [di]		;2 	store it in sinetable
        fadd	dword ptr [si+2]	;3	angle=angle+anglestep
        fld	st			;2	st(1) current angle    
	inc	di			;1	di:=di+1
	loop 	gen_sinus		;2
	

;set screen-mode to 13h (200 lines, 320 pixels each line)
	mov	al,13h			;2 	ah=0 assumed
	int	10h			;2  	

;set up the palette colours, the first 64 colours will become black->red
	xchg	ax,si			;1 	to make al=0  (si was 0100)
	mov	dh,03			;2	dx:=03c8h ... dx was 3cc8h .. 
	out	dx,al           	;1
	inc	dx   			;1 	to make dx=03c9h
palette_loop:	            
	out	dx,al           	;1 	send red
	xchg	ax,bx			;1	ax:=0 (bx was 0)
	out	dx,al			;1 	send green (always 0)
	out	dx,al          		;1 	send blue (always 0)
	xchg	ax,bx			;1	restore ax
	inc	ax			;1	increase red				
	jno	palette_loop		;2	a bit of an overkill...

;clear first line
;beware that di points to screenbuffer at this point, hence "lea di,screenbuffer" is not needed
;also ax=8000h so al=0
	mov	ch,2			;2	clear 2*256 bytes (more than 320)
	rep stosb			;2

	mov	bp,200			;3	load bp with 200 (initial number of lines)
	
;at this point ax=8000h, this value gets increased every iteration
;the low byte al will be used as main index to the sinus table
;ax itself will be used to synch the demo/intro (whatever it is called)
;also bx=0 at this point
;bx will be used as a scale for the amplitude of the sinus, it will get increased to 126 at some point

main_loop:
	inc	ax			;1	increment main index
	push	ax			;1	save it to the stack
	xchg	ax,dx			;1	copy al to dl
	mov	dh,dl			;2	dh:=dl:=main index .. dh and dl are used as secondary indexes

	mov	cl,200			;2	ch=0 assumed .. 200 bars/lines to draw
	push	cx			;1	save the 200 for later usage
	lea	si,screenbuffer		;3
	push	si			;1	safe offset screenbuffer for later usage

	
copyline_n_drawbar:
	lea	di,[si+320]		;4	si=line[y] .. di=line[y+1]
;copy line[y] to line[y+1]
	push 	cx			;1
	mov 	cl,320/4		;2	80 dwords to copy.. 320 bytes.
	rep movsd			;3	can also be done with "movsw" saving a byte, but its slower
	pop 	cx			;1
			
;calculate x position for new bar
	push	bp			;1	save bp temporarily (get_bar_position loop changes it)
	lea 	di,[si+320/2-8]		;4	di points halfway to new line
get_bar_position:
	movzx	bp,dl			;3	get one of the indexes to the sinustable into bp
	mov 	al,[sinetable+bp]	;4	get a sinus value
	imul	bl			;2	multiply with scale (bx contains scale)
	sar	ax,7			;3	divide by 128
	add 	di,ax			;2	di contains position of new bar
	xchg 	dh,dl			;2	exchange indexes for the second iteration
	neg	cx			;2	
	js	get_bar_position	;2	because 0<cx<=200 above code is executed twice..
	
	pop	bp			;1	restore bp (number of lines)
	
	add	dh,2			;3	increment the secondary indexes
	add	dl,7			;3
	
	add	al,100			;2	
	mov	gs,ax			;2	save the sinus value, this will be used to make the bars go up and down
		
;draw the bar
	mov eax,221d1710h		;6	
	push eax			;2
	stosd				;2	1st quarter of bar x---
	mov eax,312f2c28h		;6
	stosd				;2	2nd quarter of bar -x--
	bswap	eax			;3	
	stosd				;2	3rd quarter of bar --x-
	pop	eax			;2
	bswap	eax			;3
	stosd				;2	4th quarter of bar ---x
	
	loop copyline_n_drawbar		;2	200 x copy line and draw a bar
	
	
;copy screen buffer to vga memory  	
        push	0a000h			;3
        pop	es			;1 	
        xor     di,di			;2	now es:di = 0800:0000
        pop	si      		;1	load si with offset screenbuffer
	mov	dx,bp			;2	load dx with the number of lines 	 
        
        pop	ax			;1	ax:=200  	
	sub	al,dl			;2	ax:=200 - number of lines
	push	ax			;1	save it.. for below
	imul	ax,320			;4	
        add	si,ax			;2	si=screenbubber+(200-lines)*320
                                
	movzx	ax,dl			;3
	imul	ax,320/4		;3
	xchg	ax,cx			;1	cx=(320/4)*lines
        rep     movsd                 	;3

	pop	ax			;1	ax:=200 - number of lines	
another_line:
	mov	cl,320/4		;2	ch=0
	sub	si,320*2		;4
	rep     movsd 			;3
	dec	ax			;1
	jnl	another_line		;2
	
	push	ds			;1	
	pop	es			;1	restore es

;wait for vertical restrace
	mov     dx,03dah		;3	
vrt:
        in   al,dx    			;1	
        test al,8			;2
        jnz  vrt			;2	wait for the current vertical retrace to end
no_vrt:
        in   al,dx    			;1 	
        test al,8			;2
        jz   no_vrt			;2	wait for a new vertical retrace to start
	
	pop	ax			;1	get main counter... this counter is also used for syncing 

;the effect starts with what it seems like a single bar
;this is not really true, the bars are infact moving horizontally as normal,
;but the amplitude of their horizontal movement is zero.
;this part checks to see if its time to increase this amplitude 
	cmp	bl,126			;3	is amplitude at maximum?
	jz	no_inc_amp		;2
	cmp	al,180			;2	
	jb	no_inc_amp		;2
	inc	bx			;1	increase amplitude
	inc	bx			;1
no_inc_amp:

;this part checks to see if tis time to make the bars go up and down
;firts the bars are scrolled up, then after some point their y position is determined by a sinus value saved earlier
	cmp	ax,29bh+8000h		;3
	jl	no_up_down		;2
	dec	bp			;1	first scroll the bars up
	cmp	ax,29bh+8000h+31	;3
	jl	no_up_down		;2
	mov	bp,gs			;2	then later make em move up and down as a function of a sinus
no_up_down:

;this part checks to see ifs time to decrease the amplitude of horizontal movements
	test	bl,bl			;2	is amplitude at minimum?
	jz	no_dec_amp		;2	
	cmp	ax,703h+8000h-(126/2)-100	;3
	jl	no_dec_amp		;2
	dec	bx			;1
	dec	bx			;1	decrease amplitude
no_dec_amp:

;here it is checked if its time to end
	cmp	ax,703h+8000h		;3	
	jnz	main_loop		;4	


;switch screen to text mode 
   	cbw				;1	ax=8703h (see above), cbw clears ah
        int     10h            		;2	

;return to dos
	ret				;1	
	nop
	nop
	db	'razzia'	
end     start

