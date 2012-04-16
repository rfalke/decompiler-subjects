;
; "Freakout"
; 64 byte intro by Tomaes/TAP,
; also coding by mados/TAP
; www.tap-home.de
;

;%define debug		;Remove semicolon to enable debuging mode
                        ;disable for 64byte compo version 

code:
org 0100h

  mov ch,250		;mov cx,64000
  mov di,@Buffer
  rep stosb		;mov [es:di],al; inc di

  mov al,13h		;mov ax,0013h
  int 10h

  mov ah,09h		;Write string to standard output
  mov dx,@TAP           ;throw "tap" on screen
  int 21h
  

@MainLoop:
  mov di,@Buffer
  push di
  push ds
  pop es		;mov es,ds
  mov ch,200

@DesasterLoop:
  mov ax,[di]
  sub ax,[di+320]       
  add al,ah
  add al,253            ;hoho, tricky stuff ;)
  shr al,2		;div al,4
  stosb			;mov [es:di],al; inc di
  loop @DesasterLoop

  push word 0A000h+15*320/16 ;skip 15 lines
  pop es
  xor di,di
  pop si		;mov si,@Buffer
  mov ch,100		;mov cx,25600
  rep movsw		;mov [es:di],[ds:si]; add di,2; add si,2


  mov ah,0bh		;wait
  int 10h
  
  
%ifdef debug
  mov ah,0Bh		;Get stdin status
  int 21h
  cmp al,00h
  je @MainLoop		;Break if any key is pressed
  mov ah,06h		;Read character from standard input
  int 21h
  mov ax,0003h
  int 10h
  ret
%else
  jmp short @MainLoop
%endif


data:
  @TAP db 'tap!$'
  @Buffer
