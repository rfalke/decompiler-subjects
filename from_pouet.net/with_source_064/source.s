


;----------------------------------------
;
; "plasmakanone"
; tiny effect by tomaes and mados
; for 0a000h 2004 (64 byte competition)

;----------------------------------------



;%define debug		;Remove semicolon to enable debuging mode


code:
org 0100h

  mov ch,250
  mov di,@Buffer
  rep stosb

  mov al,13h		;guess what
  int 10h

 

@MainLoop:
  mov di,@Buffer
  push di
  push ds
  pop es		
  mov ch,250            

@DesasterLoop:
  mov ax,[di]
  add ax,[di+320]       ;+640 for some fake multi-layer ;)

  add al,bh             
  add al,ah
  shr al,2


  stosb
  loop @DesasterLoop

  push word 0A000h
  pop es
  xor di,di
  pop si
  mov ch,120
  rep movsw


  inc dh

  mov bh, dh   
  shr bh,4 


  
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
  @Buffer
