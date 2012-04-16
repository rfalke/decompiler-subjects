
; ÄÄÄ void three extender ÄÄÄ (c) 2k-1 by franky@scene.at ÄÄÄ

	.586p
	.SEQ

        MEM_POOL  =     16 SHL 20	;16 MB memory pool

	ASSUME		CS:HYBRID, DS:HYBRID
        HYBRID  GROUP   CODE_16, CODE_32, DATA, ZDATA

	CODE_16		SEGMENT BYTE USE16
	CODE_16		ENDS

	CODE_32 	SEGMENT BYTE USE32
	CODE_32		ENDS

	DATA		SEGMENT BYTE USE16
	DATA		ENDS

        ZDATA           SEGMENT DWORD USE16
        ZDATA		ENDS

	SCREEN		SEGMENT AT 0a000h
	SCREEN		ENDS

;   °°°±±±±±±²²²²²²²²²²²²ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ

	CODE_16		SEGMENT

        ORG     100h                    ;þþþþþ program entry þþþþþ

rm_main:
        lea     di, ZERO_START		;ÄÄÄ clear zero data ÄÄÄ
	mov	ch, 60000 SHR 8
	rep	stosb

        mov     ax, 1687h               ;ÄÄÄ DPMI installed? ÄÄÄ
	int     2fh
	test	bl, 1			;32-bit host ?
        jnz     @@dpmi

        lea     dx, no_dpmi		;error, exit
        mov     ah, 9h
	int     21h
	ret

no_dpmi db      "DPMI?$"

@@dpmi:
	push	es di

        mov     ax, cs                  ;ÄÄÄ get linear address ÄÄÄ
        imul    eax, -16
	push	eax

	CODE_16		ENDS

include franky.rm			;franky: RM code
include shiva.rm			;shiva : RM code

        CODE_16         SEGMENT

	pop	ebp			;ebp = linear address

        mov     bx, ds			;ÄÄÄ 16-bit PM switch ÄÄÄ
        add	bh, 10h
        mov     es, bx
        xor     ax, ax
        inc     ax
        call    dword ptr [ esp ]
pm_16:
	mov	al, 0ah			;ÄÄÄ get alias ÄÄÄ
	mov	bx, cs
	int	31h
	xchg	bx, ax

	mov	al, 08h			;ÄÄÄ set limit ÄÄÄ
	stc
	sbb	cx, cx
	sbb	dx, dx
	int	31h

	inc	ax			;ÄÄÄ set rights ÄÄÄ
	mov	cx, 1101111111111011b
	int	31h

        push    bx                      ;ÄÄÄ 32-bit PM switch ÄÄÄ
	push	OFFSET pm_32
        retf
pm_32:
	CODE_16 	ENDS

	CODE_32		SEGMENT
					;ÄÄÄ 32-bit PM entry ÄÄÄ
        inc     eax
	int	31h
	mov	ds, ax			;set up DS, ES, SS
	mov	es, ax
	mov	ss, ax

	mov	ax, 0501h		;ÄÄÄ create memory pool ÄÄÄ
	xor	ecx, ecx
	mov	bx, MEM_POOL SHR 16
	int	31h
	shl	ebx, 16
	add	ebp, ebx
	add	ebp, ecx		;[ebp] -> memory pool

        xor     eax, eax
        mov     ecx, MEM_POOL - 1       ;ÄÄÄ clear mem-pool ÄÄÄ
	mov	edi, ebp
	rep	stosb

	CODE_32		ENDS

include shiva.mac
include	franky.pm
include shiva.pm

        END	rm_main


