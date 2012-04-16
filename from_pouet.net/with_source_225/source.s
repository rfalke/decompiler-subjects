; ROXOR-2A.asm
; Copyright 25/05/08 by zerofun
; Contact me at borncannibal AT hotmail DOT com

BITS 32

%define Round(a, b) (((a + (b - 1h)) / b) * b)

	dw 5A4Dh                ; e_magic
	times 2 db 0h
	dd 4550h                ; Signature
	dw 14Ch                 ; Machine
	times 14 db 0h
	dw ISH - IOH            ; SizeOfOptionalHeader
	dw 103h                 ; Characteristics

IOH:                            ; IMAGE_OPTIONAL_HEADER

	dw 10Bh                 ; Magic
	times 2 db 0h

ISH:                            ; IMAGE_SECTION_HEADER

	times 12 db 0h
	dd CodeBegin            ; AddressOfEntryPoint
	dd CodeSize             ; BaseOfCode
	dd CodeBegin            ; BaseOfData
	dd 400000h              ; ImageBase
	dd 4h                   ; SectionAlignment
	dd 4h                   ; FileAlignment
	times 8 db 0h
	dw 4h                   ; MajorSubsystemVersion
	times 6 db 0h
	dd Round(FileSize, 4h)  ; SizeOfImage
	dd Round(IOHSize, 4h)   ; SizeOfHeaders
	times 4 db 0h
	dw 2h                   ; Subsystem
	times 82 db 0h

IOHSize equ $ - $$

CodeBegin:

	db 68h                  ; =>
	db 0EEh                 ; =>
	db 0h                   ; =>
	db 40h                  ; =>
	db 0h                   ; => push sgdi32 + ImageBase
	mov eax, 0h             ; LoadLibraryA
	call eax
	xor edi, edi
	push edi
	mov eax, 0h             ; GetDC
	call eax
	xchg esi, eax

@YLOOP:

	xor ebx, ebx
	cmp di, 0BB8h
	je @EXIT

@XLOOP:

	mov eax, edi
	xor eax, ebx
	push eax
	push edi
	push ebx
	push esi
	mov eax, 0h             ; SetPixel
	call eax
	inc ebx
	cmp bx, 0FA0h
	jne @XLOOP
	inc edi
	jmp @YLOOP
	sgdi32 db "gdi32", 0h

@EXIT:

	push esi
	push ebx
	mov eax, 0h             ; ReleaseDC
	call eax
	ret

CodeSize equ $ - CodeBegin

FileSize equ $ - $$