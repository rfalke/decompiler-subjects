.section        .rodata
msg:     .string  "Hello, world!\n"

.text

.global _start

_start:
        mov x0, #1                         
        adrp    x1, msg
        add     x1, x1, :lo12:msg
        mov x2, #14          
        mov x8, 64 
        svc #0

	mov x0, #0
	mov x8, #93
	svc #0


