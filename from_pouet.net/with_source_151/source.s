; Plasma Wave 128 byte demo
; originally written 1999 - tweaked 2005
; John Metcalf, http://corewar.co.uk

  sinetable equ 0380h

  mov ax,013h
  int 010h

  mov cx,0798Fh
  xor di,di
  mov si,0386h
  mov bx,si
sloop:
  mov ax,-39
  imul cx
  add di,dx
  add cx,di
  mov byte[si+bx],ch
  add byte[si+bx],bl
  dec si
  jns sloop

  mov dx,03C8h
  mov al,1
  out dx,al
  inc dx
  mov cx,0FFh

cloop:
  mov al,cl
  cmp al,020h
  jb ca
  cmp al,040h
  jb cb
  mov al,0
cb:
  neg al
ca:
  out dx,al
  mov al,cl
  xlat
  shr al,2
  out dx,al
  mov al,cl
  shl al,1
  xlat
  shr al,2
  out dx,al
  loop cloop

  mov ax,0A000h
  mov es,ax

redo:
;  push dx
;  mov dx,03DAh
;waita:
;  in al,dx
;  test al,8
;  je waita
;waitb:
;  in al,dx
;  test al,8
;  jne waitb
;  pop dx

  sub di,di
  mov dl,200
depth:
  mov ax,dx
  sub al,dh
  xlat
  sub al,dh
  mov ah,4
  xchg si,ax
  mov ax,dx
  add al,dh
  xlat
  add ah,al
  mov cx,320
width:
  lodsb
  add al,ah
  stosb
  loop width
  dec dl
  jne depth

  dec dx
  mov ah,1
  int 016h
  jz redo
  mov ax,3
  int 010h
  ret
