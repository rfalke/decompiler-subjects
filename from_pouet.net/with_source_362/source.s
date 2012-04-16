.model tiny
.386

locals @@

xdest equ 0E2344DA3h
jadd  equ 0009D2C83h/3

PROFONDITA EQU 100
ZADD EQU 1
BXADD EQU 16
AXSHL EQU 5

PAR1 EQU [BP+4]
PAR2 EQU [BP+6]
PAR3 EQU [BP+8]
PAR4 EQU [BP+10]
PAR5 EQU [BP+12]
PAR6 EQU [BP+14]

.code
STARTUPCODE

    push cs
    push cs
    pop  ds
    push 0
    pop es
    mov eax,es:[46Ch]
    mov dword ptr seed,eax
    pop  es

    mov ax,  3
    int 10h

    mov si,  offset start_txt
    call write

    call startup
    call unpack

    mov  ax,  cs

    cmp  ah, 60h
    ja   @@NoEMem

    add  ax,  1000h
    mov  fs,  ax
    add  ax,  1000h
    mov gs,ax
    add  ax,  1000h
    push ax

    call crea
    call calc_texture

    mov  si,  offset frac_text
    call write

    mov  ax,  13h
    int  10h
    
    call color
    pop  es
    call cls
    call mandel
    call vbl
    call julia
    call vbl
    call rotate
    call scroll_dn

    mov al,  81h
    mov dx,  3c8h
    out dx,  al
    mov cx,  162h
    mov si,  offset pal
    inc dx
    rep outsb

    call voxel
    call scroll_up
   @@Ciclo:
    call voxel
  mov ax,ds
  mov bx,es
  mov ds,bx
  mov cx,0a000h
  mov es,cx
  mov ch,0FAh/2
  xor si,si
  mov di,si
  rep movsw
  mov ds,ax
  mov es,bx
    inc v_zpos
    jnz short @@Ciclo
    dec pal
    jnl short @@Ciclo

  @@inizio_tm:
call tmap

  mov ax,ds
  mov bx,es
  mov dx,gs
  mov ds,dx
  mov es,dx
  mov di,128*128+128
  mov si,128*128
  std
  mov cx,128*128/4
  rep movsd
  mov si,128*128+128
  mov cl,128/4
  rep movsd
  cld

  mov ds,bx
  mov cx,0a000h
  mov es,cx
  mov cx,0FA00h/4
  xor si,si
  mov di,si
  rep movsd

  mov ds,ax
  mov es,bx
  call cls

  add t_a,8
  add t_b,12
  add t_c,20
  and t_a,0FFFh
  and t_b,0FFFh
  and t_c,0FFFh
  call vbl
  mov ah,1
  int 16h
  jz short @@inizio_tm

    xor ax,ax
    int 16h
    mov  ax,  3
    int  10h
    ret

   @@NoEMem:
    mov  si,  offset Fail_Text
    call write
    ret

scroll_dn proc
  push es
  push ds
  mov ax,0a000h
  mov es,ax
  mov ds,ax

  std
  mov bx,160/2
  @@Ciclo1:
  call vbl
  call vbl
  xor ax,ax
  add bx,bx
  js short @@Fin
  mov di,0FA00h
  mov cx,32000
  sub cx,bx
  mov si,cx
  add si,cx
  rep movsw
  mov cx,bx
  rep stosw
  jmp short @@Ciclo1
  @@fin:
  cld
  pop ds
  pop es
  ret
scroll_dn endp

scroll_up proc
  push ds
  push es
  mov dx,es
  mov bx,0a000h
  mov es,bx
  mov ds,dx

  mov bx,320*256/2
  @@Ciclo1:
  call vbl
  call vbl
  shr bx,1
  cmp bx,050h
  je short @@Fin
  mov di,bx
  add di,bx
  mov cx,32000
  sub cx,bx
  xor si,si
  rep movsw
  jmp short @@Ciclo1
  @@fin:
  pop es
  pop ds
  ret
scroll_up endp

draw proc
      mov ax,ds
      mov dx,es
      mov ds,dx
      mov si,0a000h
      mov es,si
      xor  si,  si
      mov  di,  si
      mov  bl,  100
     @@Stretch:
      mov  cx,  320/2
      rep  movsw
      sub  si,  320
      mov  cl,  320/2
      rep  movsw
      dec  bl
      jnz  short @@Stretch
      mov ds,ax
      mov es,dx
  ret
draw endp

color proc
  mov  ax,  1E00h
  MOV  DX,  3C8h
  OUT  DX,  AL
	INC  DX

  mov  cx,  64/2
 @@pix:
  inc  ah
  OUT  DX,  AL
  OUT  DX,  AL
  xchg ah,  al
  OUT  DX,  AL
  xchg ah,  al
  loop short @@pix

  mov  cl,  64/2
 @@pix2:
  inc  al
  OUT  DX,  AL
  OUT  DX,  AL
  xchg ah,  al
  OUT  DX,  AL
  xchg ah,  al
  loop short @@pix2

	ret
color endp

mandel proc
    @@Principale:

      mov  eax, xi
      sub  eax, xo
      sar  eax, 7
      mov  deltx, eax

      mov  eax, yi
      sar  eax, 6
      mov  delty, eax

      mov  si,  320*50+((320-256)/2)
      mov  py,  64
      mov  di,  si
      @@CicloY:
        mov  px,  0
        @@CicloX:
          movzx eax, px
          mul  deltx
          add  eax, xo
          mov  puntx,eax

          movzx eax,py
          mul  delty
          sub  eax, yi
          mov  punty,eax

          mov ebx,puntx
          mov ecx,punty
          call sub_conta

          xchg si,  di
          stosw
          xchg si,  di
                   
        inc  px
        jno  short @@CicloX

      add  si, 320-256
      sub  di, 320+256
      dec  py
      cmp  py, 28/2
      jnl  short @@CicloY

      mov  eax, xdest
      sub  eax, xo
      sar  eax, 4
      add  xo,  eax

      mov  eax, xdest
      sub  eax, xi
      sar  eax, 4
      add  xi,  eax

      mov  eax, yi
      sar  eax, 4
      sub  yi,  eax

      call draw

    dec  count
    jnl  @@Principale
  ret
mandel endp

julia proc
    mov puntx, 0E0000000h
    mov punty, 005000000h

    @@Principale:
      mov  di,  (320-256)/2
      mov  si,  (320*100)-((320-256)/2)
      mov  py,  14+64
      mov  ecx, -(j_const/128)*98
      @@CicloY:
        mov  px,  0
        mov  ebx, -j_const
        @@CicloX:

          push ebx
          push ecx
          call sub_conta
          pop  ecx
          pop  ebx

          add  ebx, j_const/64

          dec  si
          dec  si
          mov  es:[si],ax
                   
        inc  px
        jno short @@CicloX

        add  ecx, j_const/64

      sub  si, 320-256
      add  di, 320-256
      inc  py
      jno  short @@CicloY

      call draw

    add  puntx, jadd
    cmp  j_count, 70
    ja   short @@trick
    cmp  j_count, 50
    jb   short @@trick

    add  puntx, jadd*3

  @@trick:
    dec  j_count
    jnz  @@Principale
  ret
julia endp

sub_conta proc
  mov  i,   63

  @@Profond:
    mov  eax, ecx
    imul ecx
    shld edx, eax, 4
    mov ebp, edx

    mov  eax, ebx
    imul ebx
    shld edx, eax, 4

    mov  eax, edx

    add  eax, ebp
    cmp  eax, 40000000h
    jae  short @@oltre
    sub  edx, ebp
    add  edx, puntx
    mov  eax, ebx
    mov  ebx, edx

    imul ecx
    shrd eax, edx, 27
    add  eax, punty
    mov  ecx, eax

  dec  i
  jnz  short @@Profond

  @@Oltre:
  mov  al,  63
  sub  al,  i
  mov  ah,  al
  stosw

  ret
sub_conta endp

write proc
  @@ciclo:
    mov  ah,  0Eh
    lodsb
    or   al,  al
    jz   short @@out
    mov  bh,  0
    int  10h
    mov  cx,  4
  @@delay:
    call vbl
    loop short @@delay
    jmp  short @@ciclo
  @@out:
  ret
write endp

vbl proc
  MOV  DX,3DAh
 @@a:
  IN   AL,DX
  TEST AL,8
  JNZ  short @@a
 @@b:
	IN	 AL,DX
  TEST AL,8
  JZ   short @@b
	ret
vbl endp

rotate proc
  push es
  mov ax,0a000h
  mov es,ax

 @@mainloop:
    movzx ecx,scale
    mov  bx,  cangle
    mov  eax, cos_table[bx]
    cdq
    idiv ecx                            ;.24 -> .16
    mov  EBP, eax   ;X

    mov  bx,  sangle
    mov  eax, cos_table[bx]
    cdq
    idiv ecx                            ;.24 -> .16
    mov  ECX, eax   ;Y

    add  eax, ebp
    mov  esi, 00A00000h
    imul eax, 160
    sub  esi, eax

    mov  eax, ebp
    sub  eax, ecx
mov ebx,eax

    xor  di,  di
    @@Yloop:
      push esi ebx
      mov  rot_x,   320
      @@Xloop:
        ror  esi, 16
        ror  ebx, 16

        mov  ax,  160
        cwd
        cmp  si,  ax
        jl   short @@Meno160
        xchg ax,  si
        div  si
        mov  si,  dx
        jmp  short @@FineX
      @@Meno160:
        or   si,  si
        jns  short @@FineX
        neg  si
        xchg ax,  si
        div  si
        mov si,dx
      @@FineX:

        mov  al,  100
        cwd
        cmp  bx,  ax
        jl   short @@Meno100
        xchg ax,  bx
        div  bx
        mov  bx,  dx
        jmp  short @@FineY
      @@Meno100:
        or   bx,  bx
        jns  short @@FineY
        neg  bx
        xchg ax,  bx
        div  bx
        sub  bx,  dx
      @@FineY:

        mov dx,bx
        add  bx,  bx
        mov  bx,  tab_160[bx]
        add  bx,  si
        mov  al,  image[bx]
        stosb
        mov bx,dx

        rol  ebx, 16
        rol  esi, 16
        add  esi, ebp
        add  ebx, ecx

      dec  rot_x
      jnz  short @@Xloop

      pop  ebx esi
      add  esi, ecx
      add  ebx, ebp

    cmp di,0FA00h
    jnz  short @@Yloop

  dec  scale
  cmp scale,128
  jle short @@NoRot
  add  cangle, 4
  and  byte ptr cangle[1], 15 ;word 1023*4

  add  sangle, 4
  and  byte ptr sangle[1], 15 ;word 1023*4

 @@NoRot:
  cmp scale,128;64
  jnz  @@mainloop
  pop  es
  ret
rotate endp

voxel proc
  push es

  mov cl,160
  mov al,0C8h
  mov di,offset v_bottom
  push ds
  pop es
  rep stosb

  pop es
  call cls

  mov bl,byte ptr v_xpos
  mov bh,byte ptr v_zpos
  mov al,fs:[bx]
  add ax,64
  mov v_ypos,ax

  mov bx,BXADD
  mov si,offset zbuffer
 @@linea:
    xor  cx,  cx
  @@pixel:
      lodsb
      mov di,-BXADD
      cbw
      add di,bx
      mov oldx,ax
      mov bx,alphac
      cwde
      imul cos_table[bx]
      mov qwe1,eax

      mov ax,di
      mov bx,alphas
      cwde
      imul cos_table[bx]
      add qwe1,eax

      mov ax,oldx
      cwde
      imul cos_table[bx]
      mov qwe2,eax

      mov ax,di
      mov bx,alphac
      cwde
      imul cos_table[bx]
      sub qwe2,eax

      mov al,byte ptr qwe1[3]
      add di,BXADD
      mov ah,byte ptr qwe2[3]
      mov bx,di


      add al,v_xpos
      add ah,v_zpos
      mov di,ax
      mov al,fs:[di]
      mov di,ax
      add al,80h
      mov ah,al
      mov bp,ax
      mov ax,di

      xor ah,ah
      sub ax,v_ypos
      neg ax
      cwd
      shl ax,AXSHL
      idiv bx
      add ax,100

      cmp ax,200
      jae short @@fuori_visuale
      mov ah,al
      xchg bx,cx
      mov al,v_bottom[bx]
      sub al,ah
      jbe short @@non_disegna

      mov v_bottom[bx],ah

      mov dx,bx
      push ax

      shr ax,8
      imul ax,320

      add ax,bx
      add ax,bx
      mov di,ax

      pop bx
      mov ax,bp

    @@drawing:
      stosw
      add di,318
      dec bl
      jnz short @@drawing

      mov bx,dx

    @@non_disegna:
      xchg bx,cx
    @@fuori_visuale:

    inc cx
    cmp cl,160
    jne @@pixel

  inc bx
  cmp bl,PROFONDITA+BXADD
  jne @@linea

  add  alphas, 8
  add  alphac, 8
  and  byte ptr alphas[1], 15 ;word 1023*4
  and  byte ptr alphac[1], 15 ;word 1023*4

  ret
voxel endp

unpack proc
  mov si,  offset packed_img
  mov di,  offset image
  mov ax,  0
 ript:
  push ax
  lodsb
  or al,al
  jge short @@byte
  and al,7Fh
  mov ah,al
  lodsb
 @@Byte:
  mov cx,ax
  pop ax
  jcxz fine
	rep stosb
  xor al,8
	jmp ript
 fine:
	ret
unpack endp

;procedure adjust(PAR1,PAR2,PAR3,PAR4,PAR5,PAR6 : integer);
adjust proc
  push bp
  mov bp,sp

  mov bl,PAR5
  mov bh,PAR6
  cmp byte ptr fs:[bx],0
  jne short @@Fine

  push bx cx dx

  mov bx,PAR3
  sub bx,PAR1

  add bx,PAR4
  sub bx,PAR2

  inc bx

  call rand
  imul bx
  shrd ax,dx,15

  mov bl,PAR1
  mov bh,PAR2
  mov cl,fs:[bx]

  mov bl,PAR3
  mov bh,PAR4
  add cl,fs:[bx]
  mov ch,0
  add ax,cx

  sar ax,1

  jg short @@Ok1
  mov al,1
  jmp short @@Ok2

 @@Ok1:
  cmp ax,77h
  jb short @@Ok2
  mov al,76h

 @@Ok2:
  pop dx cx bx

  mov fs:[bx],al

 @@Fine:
  pop bp
  ret 12
adjust endp

;procedure subdivide(PAR1,PAR2,PAR3,PAR4 : integer);
subdivide proc

  push bp
  mov bp,sp

  push cx

  mov ax,PAR3
  mov cx,ax
  sub ax,PAR1
  dec ax
  jz @@Fine

  push dx
  push cx

  add cx,PAR1 ;X
  shr cx,1

  mov dx,PAR4
  push dx
  add dx,PAR2 ;Y
  shr dx,1

  mov ax,PAR2
  push ax
  push cx
  push ax
  push word ptr PAR3
  push ax
  push word ptr PAR1
  call adjust
  
  pop ax
  push ax
  push cx
  push ax
  push word ptr PAR3
  push ax
  push word ptr PAR1
  call adjust

  mov ax,PAR1
  push dx
  push ax
  push word ptr PAR4
  push ax
  push word ptr PAR2
  push ax
  call adjust

  pop ax
  push dx
  push ax
  push word ptr PAR4
  push ax
  push word ptr PAR2
  push ax
  call adjust

  push dx
  push cx
  push word ptr PAR4
  push word ptr PAR3
  push word ptr PAR2
  push word ptr PAR1
  call adjust

  push dx
  push cx
  push word ptr PAR2
  push word ptr PAR1
  call subdivide

  push dx
  push word ptr PAR3
  push word ptr PAR2
  push cx
  call subdivide

  push word ptr PAR4
  push word ptr PAR3
  push dx
  push cx
  call subdivide

  push word ptr PAR4
  push cx
  push dx
  push word ptr PAR1
  call subdivide

  pop dx
 @@Fine:

  pop cx
  pop bp
  ret 8
subdivide endp

crea proc            
  push fs
  pop  es
  xor  ax,  ax
  mov  ch,  80h
  mov  di,  ax
  mov  bx,  ax
  rep  stosw

  call rand
  and al,07Fh

  mov fs:[bx],al

  inc bh
  push bx    ;push 256
  push bx    ;push 256
  dec bh
  push bx    ;push 0
  push bx    ;push 0

  call subdivide
  ret
crea endp

RAND PROC
	PUSH	BX
	PUSH	CX
	MOV 	AL, byte ptr SEED[3]
	MOV 	BX, word ptr SEED[1]
	MOV 	CH, byte ptr SEED[0]
	XOR 	CL, CL
	RCR 	AL, 1
	RCR 	BX, 1
	RCR 	CX, 1
	ADD 	CX, SEED[0]
	ADC 	BX, SEED[2]
	ADD 	CX, 062E9h
	ADC 	BX, 03619h
	MOV 	SEED[2], BX
	MOV 	SEED[0], CX
	MOV 	AX, BX
	POP 	CX
	POP 	BX
	RET
RAND ENDP

startup proc
  mov  DI,  offset cos_table[8]
  mov  CX,  1022
  mov  EAX, cos_table[4]
 @@calc:
  imul cos_table[4]
  shrd EAX, EDX,23
  sub  EAX, [DI-8]
  stosd
  loop short @@calc

  mov  ax,  cx
  mov  di,  offset tab_160
  mov  cl,  100
 @@tab_160:
  stosw
  add  ax,  160
  loop short @@Tab_160

  mov di,offset zbuffer
  mov bp,ZADD
 @@outer:
  mov bx,-160/2
  mov cx,160
 @@inner:
  mov ax,bx
  imul bp
  sar ax,6
  stosb
  inc bx
  loop short @@inner
  inc bp
  cmp bp,PROFONDITA+ZADD
  jne short @@outer

  ret
startup endp

cls proc
  xor ax,ax
  mov di,ax
  mov cx,50
 @@Ciclo:
  push cx
  mov cx,320*4
  rep stosb
  inc ax
  pop cx
  loop short @@Ciclo
  ret
cls endp

calc_texture proc
  xor cx,cx
  mov bx,cx
  mov di,cx
 @@ciclo1:
  mov eax,cos_table[bx]
  mov edx,1F5000h
  imul edx
  add dh,40h
  add bx,8*4
  xor bp,bp
 @@ciclo2:
  mov ax,bp
  sub al,dh
  jg short @@Grande
  neg al
 @@Grande:
  or  al,80h
  mov gs:[di],al
  inc di
  inc bp
  cmp bp,128
  jl  short @@Ciclo2
  inc cx
  cmp cx,128
  jl  short @@Ciclo1
  ret
calc_texture endp

tmap proc
 @@inizio:
  mov bx,t_a
  mov eax,cos_table[bx]
  mov t_ca,eax
  add bx,1024
  and bh,0Fh
  mov eax,cos_table[bx]
  mov t_sa,eax

  mov bx,t_b
  mov eax,cos_table[bx]
  mov t_cb,eax
  add bx,1024
  and bh,0Fh
  mov eax,cos_table[bx]
  mov t_sb,eax

  mov bx,t_c
  mov eax,cos_table[bx]
  mov t_cc,eax
  add bx,1024
  and bh,0Fh
  mov eax,cos_table[bx]
  mov t_sc,eax

  mov eax,t_ca
  imul t_cc
  shrd eax,edx,24
  mov t_k1,eax

  mov eax,t_sa
  imul t_cc
  shrd eax,edx,24
  mov t_k2,eax

  mov eax,t_ca
  imul t_sc
  shrd eax,edx,24
  mov t_k3,eax

  mov eax,t_sa
  imul t_sc
  shrd eax,edx,24
  mov t_k4,eax

  imul t_sb
  shrd eax,edx,24
  add eax,t_k1
  mov t_a1,eax

  mov eax,t_sb
  imul t_k3
  shrd eax,edx,24
  sub eax,t_k2
  mov t_a2,eax

  mov eax,t_cb
  imul t_sc
  shrd eax,edx,24
  mov t_a3,eax

  mov eax,t_sa
  imul t_cb
  shrd eax,edx,24
  mov t_b1,eax

  mov eax,t_ca
  imul t_cb
  shrd eax,edx,24
  mov t_b2,eax

  mov eax,t_sb
  neg eax
  mov t_b3,eax

  mov eax,t_k2
  imul t_sb
  shrd eax,edx,24
  sub eax,t_k3
  mov t_c1,eax

  mov eax,t_k1
  imul t_sb
  shrd eax,edx,24
  add eax,t_k4
  mov t_c2, eax

  mov eax,t_cb
  imul t_cc
  shrd eax,edx,24
  mov t_c3,eax

  xor bx,bx
 @@ciclo_obj:
  movsx eax,t_src[bx]
  imul t_a3
  shrd eax,edx,8
  mov ecx,eax
  movsx eax,t_src[bx+1]
  imul t_b3
  shrd eax,edx,8
  add ecx,eax
  movsx eax,t_src[bx+2]
  imul t_c3
  shrd eax,edx,8
  add eax,ecx
  add eax,00800000h*6/7
  mov ebp,eax

  movsx eax,t_src[bx]
  imul t_a1
  shrd eax,edx,8
  mov ecx,eax
  movsx eax,t_src[bx+1]
  imul t_b1
  shrd eax,edx,8
  add ecx,eax
  movsx eax,t_src[bx+2]
  imul t_c1
  shrd eax,edx,8
  add eax,ecx
  mov edx,00400000h
  imul edx
  idiv ebp
  add eax,00A00000h
  shl bx,2
  mov t_obj[bx],eax
  shr bx,2

  movsx eax,t_src[bx]
  imul t_a2
  shrd eax,edx,8
  mov ecx,eax
  movsx eax,t_src[bx+1]
  imul t_b2
  shrd eax,edx,8
  add ecx,eax
  movsx eax,t_src[bx+2]
  imul t_c2
  shrd eax,edx,8
  add eax,ecx
  mov edx,00400000h
  imul edx
  idiv ebp
  add eax,00640000h
  shl bx,2
  mov t_obj[bx+4],eax
  shr bx,2

  add bx,3
  cmp bx,3*4
  jl  @@ciclo_obj


  mov eax,t_obj[1*12+0]
  sub eax,t_obj[0*12+0]
  mov t_pc1,eax
  jg short @@j1
  neg eax
 @@j1:
  mov ebx,eax

  mov eax,t_obj[3*12+0]
  sub eax,t_obj[2*12+0]
  mov t_pc2,eax
  jg short @@j2
  neg eax
 @@j2:

  cmp eax,ebx
  jg short @@j01
  mov eax,ebx
 @@j01:
  mov edx,eax


  mov eax,t_obj[1*12+4]
  sub eax,t_obj[0*12+4]
  mov t_pc3,eax
  jg short @@j3
  neg eax
 @@j3:
  mov ebx,eax

  mov eax,t_obj[3*12+4]
  sub eax,t_obj[2*12+4]
  mov t_pc4,eax
  jg short @@j4
  neg eax
 @@j4:

  cmp eax,ebx
  jg short @@j02
  mov eax,ebx
 @@j02:

  cmp eax,edx
  jg short @@j03
  mov eax,edx
 @@j03:
  mov t_t,eax


  xor eAX,eax
  cdq
  inc dx
  idiv t_t
  mov t_ya,eax
  xor eax,eax
 @@Yciclo:
  mov t_yy,eax
  mov ebx,eax

  mov eax,t_pc1
  imul ebx
  shrd eax,edx,16
  add eax,t_obj[0*12+0]
  mov t_x1,eax

  mov eax,t_pc3
  imul ebx
  shrd eax,edx,16
  add eax,t_obj[0*12+4]
  mov t_y1,eax

  mov eax,t_pc2
  imul ebx
  shrd eax,edx,16
  add eax,t_obj[2*12+0]
  mov t_x2,eax

  mov eax,t_pc4
  imul ebx
  shrd eax,edx,16
  add eax,t_obj[2*12+4]
  mov t_y2,eax

  sub eax, t_y1
  mov t_o2,eax
  jg short @@sc1
  neg eax
 @@sc1:
  mov ebx,eax

  mov eax,t_x2
  sub eax,t_x1
  mov t_o1,eax
       
  jg short @@sc2
  neg eax
 @@sc2:
  mov ecx,eax

  cmp eax,ebx
  jg short @@sc3
  mov ebx,eax
 @@sc3:
  shl eax,1
  mov t_o3,eax
  mov ebx,eax
                
  mov eax,t_o1
  cdq
  shld edx,eax,16
  shl eax,16
  idiv ebx
  mov t_o5,eax

  mov eax,t_o2
  cdq
  shld edx,eax,16
  shl eax,16
  idiv ebx
  mov t_o6,eax

  mov t_o4,0

  xor eAX,eax
  cdq
  inc dx
  idiv ebx
  mov t_o9,eax
 @@CicloX:
    mov ax,word ptr t_o4
    shr ax,9
    mov si,ax
    mov ax,word ptr t_yy
    shr ax,2
    and al,80h
    or si,ax
    mov ax,word ptr t_y1[2]
    imul ax,320
    add ax,word ptr t_x1[2]
    mov di,ax
    mov al,gs:[si]
    stosb

  mov eax,t_o5
  add t_x1,eax
  mov eax,t_o6
  add t_y1,eax
  mov eax,t_o9
  add t_o4,eax
  cmp t_o4,10000h
  jl short @@CicloX

  mov eax,t_ya
  add eax,t_yy
  cmp eax,10000h
  jl @@Yciclo

  ret
tmap endp

;--- global data
start_txt db "MATHro, Technolord/CV 1996",13,10,10
          db "Starting up...",0

fail_text db "*ERROR*",13,10,10,"Sorry, 256Kb freemem needed.",0

frac_text db "Ok",10,13,13,13,0

;--- voxel data
v_dir    dw 1024
v_xpos   db 0
v_zpos   db 0
alphas   dw 256*12
alphac   dw 256*8

pal db 1,0,43,1,3,43,2,5,44,2,7,44,3,9,45,4,11,46,5,13,47,6,15,48
    db 7,17,49,8,19,50,9,21,51,10,22,52,11,24,52,12,26,54,13,28,54,14,30,56,15,32
    db 56,16,34,58,17,34,58,17,36,58,18,38,60,19,40,60,20,42,62,21,44,62,10,31,0
    db 11,31,0,11,31,1,11,32,1,12,32,1,12,32,2,12,33,2,13,33,2,14,33,3,15,33,3,15
    db 34,3,15,34,4,15,35,4,16,35,4,16,35,5,16,36,5,17,36,5,17,36,6,18,37,6,18,38
    db 7,19,38,8,20,39,8,20,40,9,21,40,10,22,41,10,22,42,11,23,42,12,24,43,12,24
    db 44,13,25,44,14,25,45,14,26,46,15,27,46,16,27,47,17,28,47,18,28,48,19,29,49
    db 19,30,49,20,30,50,21,31,51,21,32,51,22,32,52,23,33,53,23,34,53,24,34,54,25
    db 35,55,25,36,55,26,36,56,27,37,57,27,38,57,27,39,57,27,41,57,27,42,57,27,43
    db 57,27,44,57,27,45,57,27,46,57,27,47,57,27,49,57,27,50,57,27,51,57,27,52,57
    db 27,53,57,27,55,57,27,56,57,27,57,57,27,58,57,27,58,57,26,58,57,25,58,57,24
    db 58,56,23,58,55,22,58,54,20,58,53,19,58,51,18,58,50,17,58,50,16,58,49,15,58
    db 48,14,58,47,13,58,46,12,58,45,11,58,44,11,58,44,10,58,43,10,58,42,9,57,41
    db 8,57,40,8,56,39,7,56,38,6,55,37,5,55,35,4,54,33,4,54,31,2

;--- mandel data
count   db 070h

;align 4
xo      dd 0E0000000h
xi      dd 010000000h
yi      dd 018000000h

;--- julia data
;align 4
j_const EQU 018000000h
j_count db 170

;--- tmap data
t_src dB 0C0h, 0C0h, 000h
      dB 0C0h, 040h, 000h
      dB 040h, 0C0h, 000h

      dB 040h, 040h, 000h

t_a dw 0h
t_b dw 0h
t_c dw 0h

;--- roto data
packed_img label byte
  include mathro.inc

;align 2
scale     dw 0200h
sangle    dw 256*10 ;512*4
cangle    dw 256*14 ;128*4

;align 4
cos_table dd 16777216     ; 2^24
          dd 16776900     ; 2^24*cos(2/1024)
          dd 1022 dup (?)

;--- tmap undefined data
t_k1 dd ?
t_k2 dd ?
t_k3 dd ?
t_k4 dd ?

t_sa dd ?
t_ca dd ?
t_sb dd ?
t_cb dd ?
t_sc dd ?
t_cc dd ?

t_a1 dd ?
t_a2 dd ?
t_a3 dd ?
t_b1 dd ?
t_b2 dd ?
t_b3 dd ?
t_c1 dd ?
t_c2 dd ?
t_c3 dd ?

t_yy dd ?
t_ya dd ?

t_o1 dd ?
t_o2 dd ?
t_o3 dd ?
t_o4 dd ?
t_o5 dd ?
t_o6 dd ?
t_o7 dd ?
t_o8 dd ?
t_o9 dd ?
t_x1 dd ?
t_x2 dd ?
t_y1 dd ?
t_y2 dd ?

t_obj dd 12 dup (?)

t_k  dd ?
t_t  dd ?
t_pc1 dd ?
t_pc2 dd ?
t_pc3 dd ?
t_pc4 dd ?

;--- mandel undefined data
;align 4
x       dd ?
y       dd ?
deltx   dd ?
delty   dd ?
puntx   dd ?
punty   dd ?

i       db ?
py      db ?
px      db ?

;--- roto undefined data
;align 2
rz_x      dw ?
rz_y      dw ?
rot_x     dw ?

tab_160   dw 100 dup (?)

image     db 16000 dup (?)
;rot_y     db ?

;--- voxel undefined data
;align 2
v_ypos   dw ?
seed     dw ?,?
oldx dw ?
qwe1 dd ?
qwe2 dd ?

v_bottom db 160 dup (?)
zbuffer  db 160*PROFONDITA dup (?)
END
