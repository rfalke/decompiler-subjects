	  segment code

	extern hihi
..start:
	  mov ax,stack
	  mov ss,ax
	  mov sp,stacktop

	call far hihi
	call far hihi

	  mov ax,0x4c00
	  int 0x21

	  segment stack stack
	  resb 64
stacktop:
