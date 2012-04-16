; SETUP.asm
; Copyright 25/05/08 by zerofun
; Contact me at borncannibal AT hotmail DOT com

.386
.model flat, stdcall

	option casemap: none

	include \masm32\include\windows.inc
	include \masm32\include\user32.inc
	include \masm32\include\kernel32.inc

	includelib \masm32\lib\user32.lib
	includelib \masm32\lib\kernel32.lib

.data

	skernel32 db "kernel32", 0h
	suser32 db "user32", 0h
	sgdi32 db "gdi32", 0h

	hkernel32 dd 0h
	huser32 dd 0h
	hgdi32 dd 0h

	sLoadLibraryA db "LoadLibraryA", 0h
	sGetDCGetDC db "GetDC", 0h
	sSetPixel db "SetPixel", 0h
	sReleaseDC db "ReleaseDC", 0h

	hLoadLibraryA dd 0h
	hGetDCGetDC dd 0h
	hSetPixel dd 0h
	hReleaseDC dd 0h

	sCaption db "ROXOR-2A SETUP", 0h
	sText0 db "DONE! (^_^)", 0h
	sText1 db "ERROR! (>_<)", 0h

	sFileName db "ROXOR-2A.exe", 0h
	hFileName dd 0h
	NumberOfBytesWritten dw 0h

.code

CodeBegin:

	invoke LoadLibraryA, ADDR skernel32
	mov hkernel32, eax
	test eax, eax
	jz @ERROR

	invoke LoadLibraryA, ADDR suser32
	mov huser32, eax
	test eax, eax
	jz @ERROR

	invoke LoadLibraryA, ADDR sgdi32
	mov hgdi32, eax
	test eax, eax
	jz @ERROR

	invoke GetProcAddress, hkernel32, ADDR sLoadLibraryA
	mov hLoadLibraryA, eax
	test eax, eax
	jz @ERROR

	invoke GetProcAddress, huser32, ADDR sGetDCGetDC
	mov hGetDCGetDC, eax
	test eax, eax
	jz @ERROR

	invoke GetProcAddress, hgdi32, ADDR sSetPixel
	mov hSetPixel, eax
	test eax, eax
	jz @ERROR

	invoke GetProcAddress, huser32, ADDR sReleaseDC
	mov hReleaseDC, eax
	test eax, eax
	jz @ERROR

	invoke CreateFile, ADDR sFileName, GENERIC_WRITE, 0h, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL
	mov hFileName, eax
	inc eax
	test eax, eax
	jz @ERROR

	invoke SetFilePointer, hFileName, 0BAh, NULL, FILE_BEGIN
	invoke WriteFile, hFileName, ADDR hLoadLibraryA, 4h, ADDR NumberOfBytesWritten, NULL

	invoke SetFilePointer, hFileName, 0C4h, NULL, FILE_BEGIN
	invoke WriteFile, hFileName, ADDR hGetDCGetDC, 4h, ADDR NumberOfBytesWritten, NULL

	invoke SetFilePointer, hFileName, 0DDh, NULL, FILE_BEGIN
	invoke WriteFile, hFileName, ADDR hSetPixel, 4h, ADDR NumberOfBytesWritten, NULL

	invoke SetFilePointer, hFileName, 0F7h, NULL, FILE_BEGIN
	invoke WriteFile, hFileName, ADDR hReleaseDC, 4h, ADDR NumberOfBytesWritten, NULL

	invoke CloseHandle, hFileName
	jmp @NOERROR

@ERROR:

	invoke MessageBoxA, NULL, ADDR sText1, ADDR sCaption, MB_OK
	jmp @EXIT

@NOERROR:

	invoke MessageBoxA, NULL, ADDR sText0, ADDR sCaption, MB_OK

@EXIT:

	invoke FreeLibrary, hkernel32
	invoke FreeLibrary, huser32
	invoke FreeLibrary, hgdi32
	invoke ExitProcess, 0h

end CodeBegin