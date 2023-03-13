	  segment code
	global hihi
hihi:
	  mov dl, [cs:hello]
	  mov ah,6
	  int 0x21
	  retf
hello:	  db 'abcdefghijklmnopqrstuvwxyz'
