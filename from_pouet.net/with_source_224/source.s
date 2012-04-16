; ROXOR_SP3
; Copyright 19/05/08 by zerofun
; Contact me at borncannibal AT hotmail DOT com

BITS 32

%define Round(a, b) (((a + (b - 1)) / b) * b)

	dw 5A4Dh                ; e_magic
	times 2 db 0
	dd 00004550h            ; Signature
	dw 14Ch                 ; Machine
	times 14 db 0
	dw ISH - IOH            ; SizeOfOptionalHeader
	dw 103h                 ; Characteristics

IOH:    ; IMAGE_OPTIONAL_HEADER

	dw 10Bh                 ; Magic
	times 2 db 0

ISH:    ; IMAGE_SECTION_HEADER

	times 12 db 0
	dd CodeBegin            ; AddressOfEntryPoint
	dd CodeSize             ; BaseOfCode
	dd CodeBegin            ; BaseOfData
	dd 00400000h            ; ImageBase
	dd 4                    ; SectionAlignment
	dd 4                    ; FileAlignment
	times 8 db 0
	dw 4                    ; MajorSubsystemVersion
	times 6 db 0
	dd Round(FileSize, 4)   ; SizeOfImage
	dd Round(IOH_SIZE, 4)   ; SizeOfHeaders
	times 4 db 0
	dw 2                    ; Subsystem
	times 82 db 0

IOH_SIZE equ $ - $$

CodeBegin:

	db 68h                  ; =>
	db 0EEh                 ; =>
	db 00h                  ; =>
	db 40h                  ; =>
	db 00h                  ; => push sgdi32 + ImageBase
	mov eax, 7C801D7Bh      ; LoadLibraryA (kernel32.dll 5.1.2600.5512)
	call eax
	xor edi, edi
	push edi
	mov eax, 7E4186C7h      ; GetDC (user32.dll 5.1.2600.5512)
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
	mov eax, 77F1B83Bh      ; SetPixel (gdi32.dll 5.1.2600.5512)
	call eax
	inc ebx
	cmp bx, 0FA0h
	jne @XLOOP
	inc edi
	jmp @YLOOP
	sgdi32 db "gdi32", 0

@EXIT:

	push esi
	push ebx
	mov eax, 7E41869Dh      ; ReleaseDC (user32.dll 5.1.2600.5512)
	call eax
	ret

CodeSize equ $ - CodeBegin

FileSize equ $ - $$