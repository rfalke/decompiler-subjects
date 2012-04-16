;(c) n0y/NEVER, mados/TAP, vudu/freestyle, yamato/freestyle

	 mov al, 0x13 
	 int 0x10 

         lds ax,[bx]
         mov dx, 0x3c9 

;Ab hier (c) Bytegeiz

  mov    ch, 3
  locloop_1:
  ror    eax, 8			;was: ror/rol
  cmp    al, 3Fh
  jb     short loc_2
  mov    al, 3Fh
  inc    ah
  loc_2:
  test   cl, 3
  jz     short loc_3
  out    dx, al
  loc_3:
  loop   locloop_1

;Ab hier (c) Never

%ifdef dhg
  cloop:
         mov ax, cx 
	 not al 
	 shr ax, 2 
	 out dx, al 
	 out dx, al
	 aaa
	 out dx, al
	 loop cloop 
%endif

mainloop:
         in al, 40h
nobaseline:
         mov [bx], al 
	 inc bx 

	 pop ax
         movzx dx, byte [bx]
         mov cl, byte [bx + 320 * 2]
	 add dx, cx
	 push dx
 	 dec ax
	 add ax, dx
	 shr ax, 2 

         cmp bh, 253
         jb short nobaseline
         in al, 60h
         das
         jns short mainloop
         retf
