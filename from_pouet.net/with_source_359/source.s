
format PE GUI 4.0
entry start

include 'c:\fasm\include\win32w.inc'

section '.text' code readable executable

  __Palet:
  mov edx,[plet]
  mov bl,0
  __QZ:
  mov al,bl
  shr al,1
  mov [edx],al
  inc edx
  mov [edx],bl
  inc edx
  mov [edx],bl
  inc edx
  inc edx
  inc bl
  jnz __QZ
  ret

  __DraW:

  pushad
  finit
  mov edi,[bffr]
  add edi,320*199*4
  mov ebx,_kads
  add word [ebx],2
  fild word [ebx]
  fidiv word [ebx+2]
  fsincos
  mov ax,320
  mov dx,-200
  push ax
  __lpY:
  neg ax
  push dx
  __lpX:
  push ax
  mov esi,esp
  fild word [esi]
  fild word [esi+4]
  call _xOl
  fxch st3
  fxch st1
  fild word [esi+2]
  call _xOl
  fxch st4
  call _xOl
  fabs
  fchs
  mov esi,_kads+6
  fistp word [esi]
  fistp word [esi+2]
  fxch st2
  fistp word [esi+4]
  mov al,0x7f
  push di
  mov bx,[esi-7]
  mov bp,bx
  xor cx,cx
  mov di,bx
  dec word [esi]
  _Qa:
  add cx,[esi]
  add bp,[esi+2]
  add di,[esi+4]
  mov ah,0xe4
  call _Vx
  push dx
  mov ah,[esi-5]
  add ah,0x27
  and ah,0xf8
  call _Vx
  pop bx
  adc dh,bh
  jz _Out
  dec al
  jne _Qa
  _Out:
  pop di
  and eax,0xff
  shl eax,3
  mov esi,[plet]
  mov eax,[esi+eax]
  stosd
  pop ax
  inc ax
  inc ax
  cmp ax,320
  jne __lpX
  sub edi,320*4*2
  pop dx
  inc dx
  inc dx
  cmp dx,200
  jne __lpY
  pop ax
  popad

  invoke GetClientRect,[hwd],rect
  invoke StretchDIBits,[hdc],0,0,[rect+8],[rect+12],0,0,320,200,[bffr],_binf,0,SRCCOPY
  ret

  _xOl:
  fld st0
  fmul st0,st3
  fxch st2
  fld st0
  fmul st0,st5
  faddp st3,st0
  fmul st0,st3
  fxch st1
  fmul st0,st4
  fsubp st1,st0
  ret
  _Vx:
  mov bx,bp
  add bh,ah
  mov dx,di
  add dh,ah
  and dx,bx
  and dx,cx
  and dh,ah
  ret





  start:
	invoke GlobalAlloc,GMEM_FIXED,500000
	test eax,eax
	jz error
	mov [mem],eax
	mov [plet],eax
	add eax,2000
	mov [bffr],eax

	invoke	GetModuleHandle,0
	mov	[wc.hInstance],eax
	invoke	LoadIcon,0,IDI_APPLICATION
	mov	[wc.hIcon],eax
	invoke	LoadCursor,0,IDC_ARROW
	mov	[wc.hCursor],eax
	invoke	RegisterClass,wc
	test	eax,eax
	jz	error
	invoke	CreateWindowEx,0,_class,_title,WS_VISIBLE+WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,640,500,NULL,NULL,[wc.hInstance],NULL
	test	eax,eax
	jz	error
	mov [hwd],eax
	invoke GetDC,eax
	mov [hdc],eax
	call __Palet
	call __DraW


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
  _title TCHAR ' Takoz!',0
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
  _kads dw 0x13b0,0xff38,200,0,0,0,0,0

section '.idata' import data readable writeable

  library kernel32,'kernel32.dll',\
	  user32,'user32.dll',\
	  gdi32,'gdi32.dll'

  include 'c:\fasm\include\api\kernel32.inc'
  include 'c:\fasm\include\api\user32.inc'
  include 'c:\fasm\include\api\gdi32.inc'
