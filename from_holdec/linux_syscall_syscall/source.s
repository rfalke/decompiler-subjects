; from https://en.wikibooks.org/wiki/X86_Assembly/Interfacing_with_Linux
section     .text
global      _start

_start:                                         ;tell linker entry point
    mov		rdx,len
	mov		rsi,msg
	mov		rdi,1
	mov		rax,1
    syscall         							; make syscall
    
    mov		rax,60
	mov		rdi,0
    syscall         							; make syscall

section     .data

msg     db  'Hello, world!',0xa                 ;our dear string
len     equ $ - msg                             ;length of our dear string
