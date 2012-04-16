
format PE GUI 4.0
entry start

include 'c:\fasm\include\win32w.inc'

section '.text' code readable executable

  __Palet:
  mov edx,[plet]
  mov bl,0
  __QZ:
  mov al,bl
  shl al,1
  cmp bl,128
  jb __e
  mov [edx],al
  __e:
  inc edx
  mov [edx],al
  inc edx
  mov [edx],al

  inc edx
  inc edx
  inc bl
  jnz __QZ
  ret


__DraW:
 pushad
 xor eax,eax
 xor ebx,ebx
 xor ecx,ecx
 xor edx,edx
 xor esi,esi
 xor edi,edi
 xor ebp,ebp

 dec [aci]

 xor bx,bx
 ___dfg:
 mov di,402h
 mov al,bl
 mov dx,-0c00h
 __swa:
 sub al,80h
 cbw
 mov [iis],ax
 imul al
 sub dx,ax
 fild word [iis]
 mov al,bh
 inc di
 jp __swa
 fpatan
 fimul [asdd]
 fistp word [iis]
 mov ax,[iis]
 add ax,[aci-1]
 mov ch,ah
 mov cl,0
 mov al,dh
 and ax,0x0707
 add al,ah
 xchg dh,al
 add dh,al

 cmp al,239
 jb __q
 mov cl,80
 __q:

 cmp al,234
 ja __1

 and ch,0x1f

 cmp ch,3
 ja __D
 cmp al,233
 jb __W
 mov dh,al
 ror dh,3
 add dh,155
 dec cx
 __W:

 sub dh,20
 __D:


 cmp al,180
 ja __A
 dec cx
 __A:


 __1:
 mov ebp,[mmk]
 mov [ebx+ebp],cl
 add dh,80h
 mov ebp,[mmr]
 mov [ebx+ebp],dh

 inc bx
 jne ___dfg

  mov edi,320*200*4

  mov si,-100
  _L:
  mov bp,-160
  _P:

  push ebp
  push edi
  mov cx,0x7f40
  mov ax,[aci]
  shl ax,1
  cbw
  cwd
  and al,ch
  sub al,cl
  imul al
  sub ah,0x10
  xor dx,ax
  add ax,ax
  add dh,24h
  dec ah
  mov di,ax
  _sddw:
  add cx,bp
  add dx,si
  sub di,160
  mov bx,di
  mov bl,ch
  push ebp
  mov ebp,[mmk]
  mov ah,[ebx+ebp]
  mov ebp,[mmr]
  mov al,[ebx+ebp]
  pop ebp
  test ah,ah
  js _A
  jz _V
  cmp dh,ah
  jb _sddw
  jl __Aq
  add al,ah
  __Aq:
  _V:
  cmp dh,70
  jna _sddw
  _A:
  pop edi

  mov ebp,[bffr]
  and eax,0xff
  shl eax,2
  add eax,[plet]
  mov eax,[eax]
  mov [edi+ebp],eax


  pop ebp

  sub edi,4
  inc bp
  cmp bp,160
  jne _P
  inc si
  cmp si,100
  jne _L


     ___son:

   xor ecx,ecx
   popad

  invoke GetClientRect,[hwd],rect
  invoke StretchDIBits,[hdc],0,0,[rect+8],[rect+12],0,0,320,200,[bffr],_binf,0,SRCCOPY









  ret




  start:

	invoke GlobalAlloc,GMEM_FIXED,1000000
	test eax,eax
	jz error
	mov [mem],eax
	mov [plet],eax
	add eax,2000
	mov [bffr],eax
	add eax,400000
	mov [mmk],eax
	add eax,200000
	mov [mmr],eax


	invoke	GetModuleHandle,0
	mov	[wc.hInstance],eax
	invoke	LoadIcon,0,IDI_APPLICATION
	mov	[wc.hIcon],eax
	invoke	LoadCursor,0,IDC_ARROW
	mov	[wc.hCursor],eax
	invoke	RegisterClass,wc
	test	eax,eax
	jz	error
	invoke	CreateWindowEx,0,_class,_title,WS_VISIBLE+WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,540,400,NULL,NULL,[wc.hInstance],NULL
	test	eax,eax
	jz	error
	mov [hwd],eax
	invoke GetDC,eax
	mov [hdc],eax
	call __Palet
	call __DraW
	invoke SetStretchBltMode,[hdc],HALFTONE

  msg_loop:
	invoke	PeekMessage,msg,NULL,0,0,PM_REMOVE
	cmp dword [msg+4],WM_QUIT
	je end_loop
	invoke	TranslateMessage,msg
	invoke	DispatchMessage,msg
	call __DraW
	inc [basla]
	jmp	msg_loop

  error:
	invoke	MessageBox,NULL,_error,NULL,MB_ICONERROR+MB_OK

  end_loop:
	invoke ReleaseDC,[hwd],[hdc]
	invoke GlobalFree,[mem]
	invoke	ExitProcess,[msg.wParam]

proc WindowProc uses ebx esi edi, hwnd,wmsg,wparam,lparam
	cmp	[wmsg],WM_DESTROY
	je	.wmdestroy
	cmp	[wmsg],WM_SIZE
	je	.wmsize

  .defwndproc:
	invoke	DefWindowProc,[hwnd],[wmsg],[wparam],[lparam]
	jmp	.finish
  .wmsize:
   xor eax,eax
   cmp [basla],10
   jb  .defwndproc
   call __DraW
   xor eax,eax
   jmp	   .defwndproc

  .wmdestroy:
	invoke	PostQuitMessage,0
	xor	eax,eax
  .finish:
	ret
endp

section '.data' data readable writeable

  _class TCHAR 'DEMODEMO',0
  _title TCHAR '<< http://www.devreci.com >>',0
  _error TCHAR 'Startup failed.',0
  _binf dd 40,320,200,0x200001,0,0,0,0,0,0,0,0,0,0
  wc WNDCLASS 0,WindowProc,0,0,NULL,NULL,NULL,2,NULL,_class
  hwd dd ?
  hdc dd ?
  msg MSG
  rect dd ?,?,?,?
  bffr dd ?
  plet dd ?
  basla dd 0
  mem dd ?,0,0
  mmh dd ?
  mmk dd ?
  mmr dd ?

  _kads dw 0x13b0,0xff38,200,0,0,0,0,0

 acib dw 30
 zadd dw 396
 zddv dw 145

 asdd dw 28c0h
 aci dw 0

 iis dw 0

  wwx dd 0
  wwy dd 0
  wwz dd  0


section '.idata' import data readable writeable

  library kernel32,'kernel32.dll',\
	  user32,'user32.dll',\
	  gdi32,'gdi32.dll'

  include 'c:\fasm\include\api\kernel32.inc'
  include 'c:\fasm\include\api\user32.inc'
  include 'c:\fasm\include\api\gdi32.inc'
