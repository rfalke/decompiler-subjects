;rotating 3d starfield
;code: www.sensenstahl.com
;written for the A86
;history:
;5.feb.2o1o raw version 351b [no rotation]
;5.feb.2o1o optimized here and there --> 307b [no rotation]
;6.feb.2o1o worked on "beauty" (color-fading) 363b [no rotation]
;13.feb.2o1o z-rotation! 439b (= after doing that in tp7.0 it finally works as hardcode here
;14.feb.2o1o optimizations here and there --> 391b
;15.feb.2o1o key-functions + new colors --> 510b :)

;esc = esc
;other keys change stuff

data segment
;-------- data ------------
s_x dw 2048 dup ? ;x
s_y dw 2048 dup ? ;y
s_z dw 2048 dup ? ;z
s_c dw 2048 dup ? ;color

sn_x dw 2048 dup ? ;x after rotation
sn_y dw 2048 dup ? ;y

nx dw ? ;single x for pixel
ny dw ? ;single y for pixel
nz dw ? ;single z for pixel

calcx dw ? ;calculated 2d x
calcy dw ? ;calculated 2d y

color db ?

rndvalue dw ? ;result coming from calling get_rnd and range of values!

;--------------------------

code segment
org 0100h

;----- set 13h 320x200x256 vga ----
mov ax,0013h
int 10h

push 0a000h
pop es

;cx = 0
;rval= 255

looping05:  inc byte rval
            inc byte gval
            call pal
            cmp byte rval,63
            jb  looping05

looping06: dec byte gval
           dec byte rval
           inc byte bval
           call pal
           cmp byte rval,45
           ja looping06

looping07: inc byte bval
           call pal
           cmp byte bval,63
           jb looping07

looping08: call pal
           jnz looping08


mov cx,2048
init_stars:
call create_star
loop init_stars

weiter:
;---draw stars---
mov cx,2048  ;number of visible stars
malen:
mov ax,cx
shl ax,1   ;mul 2
push ax
pop si     ;always correct offset

mov byte color,0 ;erase old star
call calc2d ;make 2d values + pixel

dec word [offset s_z+si]       ;get value for calculation
jnz okee                     ;nz not zero
call create_star             ;if zero create new star :)

okee:
cmp byte [offset s_c+si],255 ;color management
je go_on
inc byte [offset s_c+si]
go_on:
mov byte color, byte [offset s_c+si]


;rotate around z axis
;thanks to the source of the 256b intro "Squirmer" by Gergely Kutenich
;where i found out to handle these parts @ fpu
fninit ;init fpu WITHOUT fwait
;                    st(0)
fldpi               ;pi
fimul word grad     ;pi*grad
fidiv word for_rad  ;pi*grad/180 (grad in rad!)
fsincos             ;cos sin

fld st(1)           ;sin cos sin
fimul word s_y+si   ;sin*y cos sin
fld st(1)           ;cos sin*y cos sin
fimul word s_x+si   ;cos*x sin*y cos sin
fsub st(0),st(1)    ;cos*x-sin*y sin*y cos sin
fist word sn_x+si

fxch st(0),st(2)    ;cos sin*y cos*x-sin*y sin
fimul word s_y+si   ;cos*y sin*y cos*x-sin*y sin
fld st(3)           ;sin cos*y sin*y cos*x-sin*y sin
fimul word s_x+si   ;sin*x cos*y sin*y cos*x-sin*y sin
fadd st(0),st(1)    ;sin*x+cos*y sin*y cos*x-sin*y sin
fist word sn_y+si
;###end rotation

call calc2d

loop malen
;-----------------

cmp byte key,2 ;only rotate at 2
jb weidda
cmp byte key,3 ;and at 3
ja weidda
inc word grad  ;degrees for rotation
cmp grad,361   ;reached 360°?
jb weidda
mov word grad,1
weidda:

;wait for vsync
mov dx, 3dah  ;port on vga to check retrace
vsync1:
in al,dx      ;get byte
test al,8     ;test bit 8 (and); bit 1 for horizontal retrace
jnz vsync1    ;1 = in retrace; loop until 0
vsync2:
in al,dx
test al,8
jz vsync2     ;0 = not in retrace; loop until 1

mov ah,01h     ;00 readkey; 01 keypressed
int 16h        ;bios int
jz ding

mov ah,00h     ;00 readkey; get key ; same as xor ah,ah
int 16h        ;bios int;grab keyboardbuffer

cmp al,27 ;esc
je ende ;STOP! HAMMERTIME!

;0=no rotation + small stars <----.
;1=no rotation + big stars        |
;2=rotation + big stars           |
;3=rotation + small stars         |
;4 -------------------------------'

inc byte key
cmp byte key,2
jb ding

mov cx,32000  ;clrscr
xor di,di
xor ax,ax
rep stosw

cmp byte key,4
jb ding

mov byte key,0

ding:
jmp weiter     ;go on

ende:
mov ax, 0003h
int 10h ; set 03h = textmode 80x25
ret ;back to dos

;########################## procedures/functions ##########################

;############create random number within range
;in = rndvalue: range; out = rndvalue = value
get_rnd:
in al,40h
add ah,al
in al,40h
xor dx,dx
mov bx, word rndvalue ;range
idiv bx     ;nun rest in dx
mov word rndvalue, dx ;save rnd
ret

;############create x,y,z for star[cx]
create_star:
push cx
pop si     ;correct offset (cx*2)
shl si,1   ;mul 2
mov byte [offset s_c+si],0
sternx:;-------create x-values--------
mov word rndvalue,160
call get_rnd
sub rndvalue,80
mov word [offset s_x+si],word rndvalue ;save
sterny:;-------create y-values--------
mov word rndvalue,100
call get_rnd
sub rndvalue,50
mov word [offset s_y+si],word rndvalue ;save
sternz:;-------create z-values--------
mov word rndvalue,100
call get_rnd
add rndvalue,100
mov word [offset s_z+si],word rndvalue ;save
ret


;############generate 2d x,y out of 3d x,y,z
calc2d:
cmp word [offset s_z+si],0
jne gocalc
inc word [offset s_z+si]
gocalc:
mov ax,100;word viewx ;nx:=(viewx*x div (z+cnz)) + cnx;
mov bx,word [offset sn_x+si]
imul bx

;mov bx,word cnz
mov bx,word [offset s_z+si]

idiv bx
add ax,160 ;cnx
mov word calcx,ax ;save calculated 2d value

mov ax,100;word viewy ;ny:=(viewy*y div (z+cnz)) + cny;
mov bx,word [offset sn_y+si]
imul bx

;mov bx,word cnz
mov bx,word [offset s_z+si]

idiv bx
add ax,100 ;cny
mov word calcy,ax ;save calculated 2d value

;set 2d pixel at x,y
mov ax,word calcy ;es:[320*y+x]
mov bx,320
imul bx
add ax,word calcx
mov di,ax         ;save correct offset

cmp word calcx,319  ;no error on display!
ja nix
cmp word calcy,199
ja nix
mov al,byte color
stosb;mov byte es:[di],al

cmp byte key,0 ;no big stars at 0
je nix
cmp byte key,3 ;and 3
je nix
stosb
add di,320-2
stosb
stosb
nix:
ret

;set palette
pal: mov dx,3c8h       ;port for vga palette
     mov al,cl         ;color number in cl; cl is unchanged by call
     out dx,al         ;send color number to port
     inc dx            ;go on because values will be written to port 3c9h
     mov al,byte rval
     out dx,al         ;write red value
     mov al,byte gval
     out dx,al         ;write green value
     mov al,byte bval
     out dx,al         ;write blue value
     inc cl            ;put it here to save some bytes @ the loops
     ret               ;back

;cnx dw 160;{center of screen}
;cny dw 100;{center of screen}
;cnz dw 0;  {nearest point on the screen}

;viewx dw 100;{field width}
;viewy dw 100;{field height}

rval db 255
gval db 255
bval db 0

for_rad dw 180 ;180°

grad dw 0 ;for rotation

key db 0