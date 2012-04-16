.model tiny
.186
 org 100h
.code
 les bx,[bx]
 cli            ;Clear interrupt FLAG
 push cs        ; AX <= cs
 pop ax         ;
 add ax,1f90h   ; A vermet a program kezdete
 push ax        ; ut n rakom 2*64000+vm
 pop ss         ; byte-al.
 mov sp,200     ; A veremmutat¢t 200-ra  ll¡tom.
 sti            ;Set interrupt FLAG
 mov ax,13h     ; K‚perny‹m¢d
 int 10h        ;  v lt s
 mov al,255
 mov es:[32160],al

 mov cx,255
palette:
 mov dx,3c8h
 mov al,cl
 out dx,al
 inc dx
 xor al,al
 out dx,al
 mov al,cl
 shr al,3
 out dx,al
 xor al,al
 out dx,al
 loop palette

ekezd:
 mov cx,256
kezd:
 push cx        ;
 push cs        ; AX <= cs
 pop ax         ;
 add ax,0ff0h   ; Az I. sz m£ puffer az es-ben
 mov es,ax      ;    a program ut n 65280 byte-al.
 push 0a000h    ; ds <= 0a000h k‚perny‹mem¢ria
 pop ds         ;
 xor si,si      ; si <= 0h   ds:[si] <- a k‚perny‹mem¢ria eleje: 0a000:[0]
 mov di,offset puffer  ; di <= prg ut ni offset c¡m
 mov cx,16000          ;\
elok:                  ; \
 db 66h                ;  \ Az I. sz m£ puffer felt”lt‚se
 movsw                 ; /  a k‚perny‹ mem¢ria tartalm val.
 loop elok             ;/
 push cs               ;
 pop ds                ; A II. sz m£ puffer a ds-ben
 mov cx,64000          ; k”zvetlenl a program ut n 64000 b jtnyi.
 mov si,offset puffer  ; si-n‚l kezd‹dik.
 mov di,si

lp:
 clc
 mov al,es:[di-320]
 mov bx,al
 mov al,es:[di-1]
 adc bx,al
 mov al,es:[di+1]
 adc bx,al
 mov al,es:[di+320]
 adc bx,al
 mov al,es:[di-321]
 adc bx,al
 mov al,es:[di-319]
 adc bx,al
 mov al,es:[di+319]
 adc bx,al
 mov al,es:[di+321]
 adc bx,al
 add bx,4
 shr bx,3
 add bx,2

 jmps ugras             ;\
kezd1                   ; \ µthidal s...
 jmps kezd              ; /
ugras                   ;/


 mov ds:[si],bl
 inc si
 inc di
 loop lp



 push 0a000h            ;\
 pop es                 ; \
 xor di,di              ;  \
 mov cx,16000           ;   \  A II. sz m£ puffer
 mov si,offset puffer   ;    \ visszam sol sa a
lp1:                    ;   /  k‚perny‹mem¢ri ba.
 db 66h                 ;  /
 movsw                  ; /
 loop lp1               ;/

 mov al,0               ;\
 mov cx,320             ; \
 xor di,di              ;  \
fkeret:                 ;   \
 mov es:[di+63680],al   ;    \
 mov es:[di+63360],al   ;     \
 stosb                  ;      \
 loop fkeret            ;       \ Keret kirajzol sa.
 mov cx,200             ;      /
 xor di,di              ;     /
vkeret:                 ;    /
 mov es:[di+319],al     ;   /
 stosb                  ;  /
 add di,319             ; /
 loop vkeret            ;/

 mov al,200
 mov es:[32160],al

 mov ah,1               ;\
 int 16h                ; \
 jz cont                ;  \
 xor ax,ax              ;   \
 int 16h                ;    \  B rmelyik gombra kil‚p.
 mov ax,3               ;   /
 int 10h                ;  /
 mov ax,4c00h           ; /
 int 21h                ;/

cont:
 pop cx
 loop kezd1
 jmp ekezd

puffer:
.end
K‚sz¡tette µgoston R¢bert a Function 2005 party-ra
2005. Szeptember‚ben.         -=[RobiGszi]=-