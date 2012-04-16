bits 16
org 0x100

SEG_CODE    equ 0x00
SEG_VIDEO   equ 0x10
SEG_TEMP    equ 0x20
SEG_BITMAP  equ 0x30
SEG_TUNNEL  equ 0x40
SEG_TUNTEX  equ 0x50

init_demo: ;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	call calc_sin_table
	call calc_tunnel_table

	mov ax,cs
	add ah,SEG_BITMAP
	mov es,ax
	push es
	call calc_texture

	push cs
	pop es
	mov cx,4096
	mov di,random_table
	call calc_random_table

	mov ax,0x13
	int 0x10
	xor bx,bx

	call initadlib	; optional nosound?

	call hook_timer

	;;; setup nice screen txtr

	push word 0xa000
	pop es
	pop ds ; <== SEG_BITMAP
	xor si,si
	xor di,di
	mov dx,199
.l9:	mov cx,160
	rep movsw
	sub si,64
	dec dx
	jne .l9

CMD_CURTAIN	equ 0	; void
CMD_TEXT	equ 1	; text,0
CMD_FADE	equ 2	; void
CMD_PALETTE	equ 3	; palettedata
CMD_FX		equ 4	; dw effectmask
CMD_RUNCODE     equ 5   ; bytes, code
CMD_PILLU       equ 6
CMD_ROTOS       equ 7   ; ..?

mainloop: ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	push cs
	push cs
	pop es
	pop ds

	push dx

	mov si,manuscript
	.dezignptr equ $-2

.l9	mov word[.dezignptr],si
	xor ax,ax
	lodsb
	shl ax,2
	add ax,0
	.last_time equ $-2
	cmp ax,word[timer]
	jna .o523
		jmp calc_frame
	.o523:

	mov [.last_time],ax
	push word .l9

	lodsb

.cmd0	cmp al,1   ; CMD_CURTAIN
	jnc .cmd1
	
		lodsw
		mov [curtain.loc],ax
		ret

.cmd1	jne .cmd2  ; CMD_TEXT

		mov [writer.txtloc],si
		.l1c0:lodsb
		      test al,al
		      jne .l1c0
		ret

.cmd2	cmp al,3   ; CMD_FADE
	jnc .cmd3

		mov di,palette_temp+768
		xor ax,ax
		mov cx,768
		push cx
		rep stosb
		pop cx
		xor byte[palette_fader.dir],8 ; sbb<->adc
		mov word[palette_fader.fadeleft],64
		ret

.cmd3	jne .cmd4  ; CMD_PALETTE

		jmp set_palette

.cmd4	cmp al,5   ; CMD_FX
	jnc .cmd5

		pop bx ;returnaddr
		pop ax ;old_effects
                lodsb
		push ax
		jmp bx

.cmd5	jne .cmd6  ; CMD_RUNCODE

		xor ax,ax
		lodsb
		add ax,si
		push ax
		pusha
		call si
		popa
		pop si
		ret

.cmd6   cmp al,7   ; 6 ; CMD_PILLU
	jnc .cmd7

        pusha
        push ds

        mov ax,cs
        add ah,SEG_BITMAP
        mov ds,ax

        xor si,si
        .l000:not word [si]
        inc si
        inc si
        jne .l000

        pop ds
        popa
        ret

;	mov [walk_animate.walk_to],si
;	lodsd
	ret

.cmd7:
.cmd8:  pop ax     ; QUIT
	pop dx
	jmp end_demo

FX_CLRSCR equ 1
FX_3D equ 2
FX_PERSP equ 4
FX_IFS equ 8
FX_MESH equ 16

FX_SKY equ 16

FX_TUNNEL equ 32
FX_BUMP equ 64	; ei

calc_frame: ;;;;;;;;;;;;;;;;;;;;;;;;;;;

	pop dx

	test dl,FX_3D
	jz .c2
	pusha
	mov cx,5	; numvxes
	mov si,vertices
	mov di,rotated_vertices
	call rotate_vertices
	popa
.c2:

render_frame: ;;;;;;;;;;;;;;;;;;;;;;;;;

	mov ax,cs
	add ah,SEG_VIDEO
	mov es,ax


        mov di,190*256
        mov al,128
        .marker equ $-1
        mov ah,al
        add al,128
        mov cx,10*128
        rep stosb

	test dl,FX_CLRSCR
	jz .c1

		pusha
		xor edi,edi
		mov ecx,16384
		xor eax,eax
		rep stosd
		popa

.c1:	test dl,FX_TUNNEL
	jz .sprui

		pusha
		call drawtunnel
		popa

.sprui:	test dl,FX_IFS
	jz .poh

		pusha
		mov ax,cs
		add ah,SEG_VIDEO
		mov es,ax
		call render_ifs
		popa

.poh:   test dl,FX_PERSP
        jz .c3n

        ;;; COLORS -- pakollinen
        pusha
        mov bx,word[timer] ; KULMA
        sal bx,1
        mov ax,cs   ; BITMAP
        add ah,0x30
        mov fs,ax

        mov di,128*256
        call render_perspective
        popa

       test dl,FX_SKY  ; ?
       jz .c11
;          pusha
;                xor si,si
;                xor di,di
;                mov cx,128*128
;
;                .ll0:
;                sub si,2
;                mov ax,[es:si]
;                xchg al,ah
;                stosw
;                loop .ll0
;          popa
       .c11:

;;;;;;;;;;;;;;;;;;

.c3n: ;   test dl,FX_MESH
;        jz .c4n
;
;        ; first numbah=numfaces
;        mov si,pyrafaces
;        call render_3d
;
.c4n:

curtain: ;;;;;;;;;;
	pusha

		mov ax,cs	; palautuu
		add ah,0x10
		mov es,ax

	mov cx,0x0000
	.loc equ $-2 ; (esirippu mist„ mihin)

	mov cl,0
	jcxz .o4
	xor di,di
	xor ax,ax
	rep stosw
	
.o4	popa


;;;;;;;;;;;;

.c4:

;;;;;;;;;;;;;;;;;;;;;

	pusha

%include "writer.asm"

	;;;

	push es
	pop ds
	call blit_it

	popa

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	in al,0x60
	cbw
	dec ax
	je end_demo
	jmp mainloop

end_demo: ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

	call timer_off

	mov ax,3
	int 0x10

	jmp initadlib

%include "stuff.asm"

%include "3dengine.asm"
%include "ifs.asm"
%include "polygon.asm"
%include "perspect.asm"
%include "tunnel.asm"

%include "player.asm"
%include "timer.asm"
%include "tables.asm"



;;;;;;;;;;;;;;;;;


