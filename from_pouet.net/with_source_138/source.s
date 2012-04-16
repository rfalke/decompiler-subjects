;to compile it use:
;	tasm.exe unvwater.asm
;	tlink.exe /t unvwater.obj

;Here is my 100bytes long water effect
;I'm Programmer/UniVerse , and you can find me
;on IRCNET IRC server on #pixel and #coders
;under nickname - Prg^UnV
;also you can go to our web page at:
;http://www.chat.ru/~unv
;Just don't forget to greet me , anyway! :)
;If you have any questions , or you will optimize it to 90 or less bytes -
;mail to me at unv@chat.ru
;thanx ;) here is the source goes

.286                   ;286 instructions enabled
Code Segment           ;our declaration stuff
Assume cs:code         ;and this line too
ORG 100h               ;com file entry point
start:                 ;start =)
                       ;all registers that we use is clear now
                       ;AX,BX,CX,DX=0

mov ah,0a0h            ;AH=A0 , AX=A000 (vga segment)
mov es,ax              ;moving vga segment adress to ES segment register
add ax,ax              ;AX=AX+AX , Let's think that ax+ax segment is clear =)
mov ds,ax              ;moving AX to DS
mov ax,13h             ;AX=13 , to set 13h mode
int 10h                ;video interrupt, 10h
mov dx,3c9h            ;dx=3C9 , let's set it for the palette changing

@AAA2:                 ;Segment clearing loop
mov [di],ax            ;moving to AX to DS:DI
dec di                 ;dec di , at the loop start di=0 so after first dec
jnz @AAA2              ;di is equals 65535

@LOOP:                 ;Palette loop
xor ax,ax              ;AX=0
out dx,al              ;let's write R to graphics port (R=0)
out dx,al              ;let's write G to graphics port (G=0)
mov al,bl              ;AL=BL
shr al,2               ;AL=AL/4
out dx,al              ;let's write B to graphics port (B=AL)
inc bx                 ;BX=BX+1 , we use it to set all palette
jnz @LOOP              ;and when BX=0 we're just finished this loop
                       ;but BX=0 after 65535 , yeah ,we set our palette
                       ;in about 255 times , but here we got 1 byte

@REPEAT:               ;Main loop
XOR BX,BX              ;BX=0
mov dx,3               ;DX=3
mov si,di              ;SI=DI
@SUX:                  ;Matrix loop
inc si                 ;SI=SI+1
mov al,byte ptr [si-322]  ;here is our matrix calculations
add bx,ax                 ;
mov al,byte ptr [si+318]  ; 
add bx,ax                 ;
mov al,byte ptr [si-2]    ;
add bx,ax                 ;
dec dx                    ;
jnz @SUX;                 ; here is jump to make our matrix size 3x3
mov al,byte ptr [di]      ; it's for our matrix
sub bx,ax                 ; 
shl ax,2                  ; BX=BX-AX ; AX=AX*4 ;BX=BX-AX ; BX=BX/4 ; AX=BX
sub bx,ax                 ; AX=AX/128
shr bx,2                  ; BX=BX-AX ; now translation of this goes =)
mov ax,bx                 ; We're making our matrix calculations 
shr ax,7                  ; B=BX , A=AX , so the way is:
sub bx,ax                 ; B=(B-A*5)/4 A=B A=A/128 BX=BX-AX -it's for decrease
mov ds:[di],bl            ; moving our point to the memory
inc di                    ; :) no comments here
loop @REPEAT              ; looping for our full screen

dec cx                    ; cx=0 , cx-1 = 65535
rep movsb                 ; moving our data to screen

in al,60h                 ; reading port 60h
dec al                    ; if port 60h <> 1 (esc) we will continue rendering
jnz @REPEAT               ; =)))
mov al,03h                ; al=3h , text mode
int 10h                   ; int 10h , textmode 3h is on
ret                       ; exiting!
code ends                 ; here is our stuff ends!
end start                 ; YESSS!!!!