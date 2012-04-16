; XOROX-KO.asm
; Copyright 27/05/08 by zerofun
; Contact me at borncannibal AT hotmail DOT com

BITS 32

	dw 0x5A4D                ; e_magic
	times 2 db 0x00
	dd 0x00004550            ; Signature
	dw 0x014C                ; Machine
	times 2 db 0x00

AddressOfEntryPoint:

	xor eax, eax
	inc eax
	push eax
	db 0x68                  ; =>
	db 0x1E                  ; =>
	db 0x00                  ; =>
	db 0x10                  ; =>
	db 0x00                  ; => push ssmyst + ImageBase
	jmp short @NEXT1
	times 1 db 0x00
	dw 0x0004                ; SizeOfOptionalHeader
	dw 0x0103                ; Characteristics
	dw 0x010B                ; Magic
	ssmyst db "ssmyst.scr /s", 0x00
	dd AddressOfEntryPoint   ; AddressOfEntryPoint

@NEXT1:

	mov eax, 0x00000000      ; WinExec
	jmp short @NEXT2
	times 1 db 0x00
	dd 0x00100000            ; ImageBase
	dd 0x00000004            ; SectionAlignment
	dd 0x00000004            ; FileAlignment

@NEXT2:

	call eax
	ret
	times 5 db 0x00
	dw 0x0004                ; MajorSubsystemVersion
	times 6 db 0x00
	dd 0x00001000            ; SizeOfImage
	dd 0x00000100            ; SizeOfHeaders
	times 4 db 0x00
	db 0x02                  ; Subsystem