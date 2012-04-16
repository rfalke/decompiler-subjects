;----------------------------------------------------------------------------
;fire.asm by Nathan Egge (a.k.a. The Unlord / Xylem)
;coded for the #coders 256 byte fire compo on 5/20/96
;e-mail: regge@erols.com
;
;Compiled w/ tasm v3.1 and tlink v5.1 like this:
;
;tasm /m9 /ml fire.asm
;tlink /x /t fire.obj
;
;Resulting file is exactly 250 byte com file!
;
;Note: This was coded real quick during the last few days (and hours) before
;      the compo deadline so there are no comments in this right now...  goto
;      ftp.cdrom.com and check out pub\demo\alpha\1996\x\xlm_fire.zip for
;      official release of this (it might actually have some comments if I
;      ever get around to it)...  special thanks to Rex Jordan for the 76
;      byte tinyfire.com and Jare of VangeliSTeam who started this whole
;      effect way the hell back in 9/5/93...
;
;--------------------------------- SNIP! ------------------------------------
code    SEGMENT para public 'CODE'
	ASSUME cs:code, ds:code, es:code
	LOCALS
	.386

ORG     100h            ;To make it a com file
start:

  mov  al,13h           ;since ah was already 0 and mov al,13h is a byte smaller
  int  10h              ;call vidoe inturupt to set video mode to 13h or MCGA
                        ;320x200x256
  mov  dx,03c8h         ;mov dx to the register that controls pallette
  mov  al,00h           ;this takes up same amount of space as xor ax,ax
  out  dx,al            ;write 00 to 03c8 to start at color 0
  inc  dx               ;inc dx to write to the actual values of color
  mov  cl,64d           ;is a byte less then mov cx,64d and is count for loop
DAC_loop:               ;first of a set of loops lable
  mov  al,64d           ;set al to 64 to get the difference between 64 and the
  sub  al,cl            ;count variable
  shr  al,1             ;this divides al by 2 duuhh
  out  dx,al            ;push out red value
  xor  al,al            ;clear al
  out  dx,al            ;push out green value
  out  dx,al            ;push out blue value
  loop DAC_loop         ;loops to the label for the first pallette setting
  mov  cl,64d           ;next few lines are very similar to above
DAC_loop2:
  mov  al,64d
  sub  al,cl
  shr  al,1
  push ax
  add  al,31d
  out  dx,al
  pop  ax
  out  dx,al
  xor  al,al
  out  dx,al
  loop DAC_loop2
  mov  cl,64d
DAC_loop3:
  mov  al,63d
  out  dx,al
  sub  al,cl
  shr  al,1
  add  al,31d
  out  dx,al
  xor  al,al
  out  dx,al
  loop DAC_loop3

  mov  di,offset screen ;mov di to begining of screen and buffer tables
  mov  cx,16160d        ;mov cx to number big enough to clear all my variables
  rep  stosw            ;es:di=variables store them as 0 -bye bye variables!!!

  mov  ah,2Ch           ;who knows what this does???  anyone??? how about you!
  int  21h              ;I think I get the values of the time of computer here
  mov  [randseed],dx    ;move the value of the miliseconds to my random seed!


@bigloop:               ;here starts the gigantic loop of my code

  mov  si,offset screen ;
  push si               ;save this baby for later :)
  mov  cx,32000d        ;set the count register to 160x100 fake screen * 2
  push 0a000h           ;by pushing and then
  pop  es               ;poping you save 2 bytes!
  xor  di,di            ;make es:di point to top left corner of screen
  mov  bl,160d          ;this helps me to make 2x2 pixels see below
@1:                     ;first skippy loop lable
  lodsb                 ;load up a byte at offset of screen
  mov  ah,al            ;make ax be two bytes so that i can write a word faster
  stosw                 ;store the word on the screen
  dec  bx               ;this is part of 2x2 thingy...  when it hits 0 end of line
  jnz  @2               ;0? if not goto @1 else
  sub  si,160d          ;move the pointer to the screen back 160 or one line
  mov  bx,320d          ;move my special variable to 320 so that I can do this for the whole screen
@2:                     ;label for 2nd loopy thing
  loop @1               ;drawn one line of faked video mode...

  push ds               ;pushing data segement
  pop  es               ;into extended segement
  pop  di               ;reuseing offset screen
  push di               ;saving it again
  push si               ;since si+16000 = offset firetbl why not use it?
  add  si,160d          ;skip down the first line of the fire table...
  mov  cx,16000d        ;set the counter register to 16000
  push cx               ;hey save this one too!
  xor  ax,ax            ;make ax=0
@4:                     ;'nother label
  lodsb                 ;load me up a byte into al
  mov  bl,[si]          ;get the value at si (really one ahead of where we read al)
  add  ax,bx            ;add this to ax which already has value of al in it
  mov  bl,[si-2]        ;get the value at si-2 so now we have 3 in a row
  add  ax,bx            ;add this one to ax also
  mov  bl,[si+159]      ;get the value directly under middle pixel in row of 3
  add  ax,bx            ;add this to get a total of 4 in ax
  shr  ax,2             ;quicky divide by 4
  or   ax,ax            ;this doesn't change ax just sees if it's 0
  jz   @8               ;is it 0?
  dec  ax               ;no subtract 1 from it
  jz   @8               ;is it 0?
  dec  ax               ;no do it again
@8:                     ;this is where it would be if it was 0
  stosb                 ;store it to es:di or offset of screen :)
  loop @4               ;now do it again but start from next pixel over on firetbl
  
  mov  dx,03dah         ;mov dx for offset of virtical retrace;
@wait:                  ;label
  in   al,dx            ;get byte from vertical retrace;
  test al,8             ;is it 8 
  jz   @wait            ;if not do it again
@retr:                  ;again not another lable
  in   al,dx            ;get another byte from vertical retrace thingy
  test al,8             ;is this one 8?
  jnz  @retr            ;if it is do it again...
  
  pop  cx               ;recycled 16000
  pop  di               ;recycled offset firetlb
  pop  si               ;recycled offset screen
  rep  movsb            ;copy a byte from new screen over old firetlb

  mov  cl,80            ;move counter to 80 since ch is already 0
  push cx               ;save it
  mov  si,offset line2  ;mov this to begining of line2 
  rep  movsw            ;since es:di is at begining of offset line1 then just copy
  pop  cx               ;saving the cx=80

  mov  ah,01h           ;has a key been pressed?
  int  16h              ;stupid keyboard interupt :(
  jnz  @end             ;if so then jump to the end sequence

@random:                ;lable
  mov  ax,[randseed]    ;get the value of randomseed into ax register
  mov  dx,ax            ;copy this to dx also
  mov  bl,ah            ; \
  mov  ah,al            ;  \
  xor  al,al            ;   \
  rcr  bl,1             ;    \
  rcr  ah,1             ;     - fancy stuff with bits and shifts to get new # 
  rcr  al,1             ;    /
  adc  ax,dx            ;   /
  add  ah,99d           ;  /
  adc  al,54d           ; /
  mov  [randseed],ax    ;put the new number back into the seed
  xor  dx,dx            ;this is for divide overflow thing dx must be 0
  mov  bl,160d          ;gonna div by bx so put number into bl; bh=0
  div  bx               ;do the div... this is sooo slow!
  mov  bx,dx            ;mov the remainder so now we have modulus into bx
  or   al,ah            ;this is also a little trick to get a value of 
  shr  ax,1             ;al to be under 192 ha ha ha 

  mov  line2[bx],al     ;store this new color at the random pixel on line2
  loop @random          ;do it 79 more times to get a new randomer line

@skip:                  ;lable
  jmp  @bigloop         ;this is so I can take care of the jump problem
  
@end:                   ;end sequence
  xor  ax,ax            ;ax=0
  rep  stosw            ;cx=80 so now I am writing a line of blank on line2
  mov  cl,[count]       ;count is special so that I can do this over and over
                        ;since I don't take char out o keyboard buffer it will
                        ;always do this endsequence... good idea, no?
  dec  [count]          ;it is like a cx sort of so it goes down one every time
  loop @skip            ;now we loop so we can't save the cx; too bad!

  mov  al,03h           ;since ah was already 0 and mov al,03h is a byte smaller
  int  10h              ;call video inturupt to set screen back to 80x25x16

;  int  16h             ;just couldn't fit in these last two bytes :)
                        ;this would have removed the key pressed from keyboard

  int  20h              ;the cheaters way of quiting to dos... 

count    db  45                 ;only variable defined at beginning
screen   db  16000  dup(?)      ;to be copied to vga screen
firetbl  db  16000  dup(?)      ;used to calculate the virtual screen 
line1    db  160    dup(?)      ;line of random #1
line2    db  160    dup(?)      ;line of random #2
randseed dw  ?                  ;the random see off the time

code    ENDS
	END start
