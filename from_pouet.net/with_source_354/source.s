; SETUP.asm
; Copyright 27/05/08 by zerofun
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
	hkernel32 dd 0h

	sWinExec db "WinExec", 0h
	hWinExec dd 0h

	sCaption db "XOROX-KO SETUP", 0h
	sText0 db "DONE! (^_^)", 0h
	sText1 db "ERROR! (>_<)", 0h

	sFileName db "XOROX-KO.exe", 0h
	hFileName dd 0h
	NumberOfBytesWritten dw 0h

.code

CodeBegin:

	invoke LoadLibraryA, ADDR skernel32
	mov hkernel32, eax
	test eax, eax
	jz @ERROR

	invoke GetProcAddress, hkernel32, ADDR sWinExec
	mov hWinExec, eax
	test eax, eax
	jz @ERROR

	invoke CreateFile, ADDR sFileName, GENERIC_WRITE, 0h, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL
	mov hFileName, eax
	inc eax
	test eax, eax
	jz @ERROR

	invoke SetFilePointer, hFileName, 31h, NULL, FILE_BEGIN
	invoke WriteFile, hFileName, ADDR hWinExec, 4h, ADDR NumberOfBytesWritten, NULL

	invoke CloseHandle, hFileName
	jmp @NOERROR

@ERROR:

	invoke MessageBoxA, NULL, ADDR sText1, ADDR sCaption, MB_OK
	jmp @EXIT

@NOERROR:

	invoke MessageBoxA, NULL, ADDR sText0, ADDR sCaption, MB_OK

@EXIT:

	invoke FreeLibrary, hkernel32
	invoke ExitProcess, 0h

end CodeBegin